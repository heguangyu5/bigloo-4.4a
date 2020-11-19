/*===========================================================================*/
/*   (SawMill/node2rtl.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/node2rtl.scm) */
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

	typedef struct BgL_vlengthz00_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

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

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_jumpexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                      *BgL_rtl_jumpexitz00_bglt;

	typedef struct BgL_rtl_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_failz00_bglt;

	typedef struct BgL_rtl_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                *BgL_rtl_ifz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                     *BgL_rtl_vlengthz00_bglt;

	typedef struct BgL_rtl_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                        *BgL_rtl_instanceofz00_bglt;

	typedef struct BgL_rtl_makeboxz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_makeboxz00_bglt;

	typedef struct BgL_rtl_boxrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxrefz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_setfieldz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_boxsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                    *BgL_rtl_boxsetz00_bglt;

	typedef struct BgL_rtl_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_constrz00;
	}                 *BgL_rtl_newz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_applyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                   *BgL_rtl_applyz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_funsz00;
		obj_t BgL_rettypez00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_protectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_protectz00_bglt;

	typedef struct BgL_rtl_protectedz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                       *BgL_rtl_protectedz00_bglt;

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

	typedef struct BgL_areaz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_blockz00_bgl *BgL_entryz00;
		struct BgL_blockz00_bgl *BgL_exitz00;
	}              *BgL_areaz00_bglt;

	typedef struct BgL_reversedz00_bgl
	{
	}                  *BgL_reversedz00_bglt;

	typedef struct BgL_rlocalz00_bgl
	{
		obj_t BgL_regz00;
		obj_t BgL_codez00;
	}                *BgL_rlocalz00_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2vref1708z81zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2var1675z81zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2vsetz121710z93zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static BgL_areaz00_bglt BGl_z62predicatez62zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_blockz00_bglt,
		BgL_rtl_regz00_bglt);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2pragma1697z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static BgL_areaz00_bglt BGl_predicatez00zzsaw_node2rtlz00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32104ze3ze5zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_rtl_makeboxz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2valloc1706z81zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32121ze3ze5zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_node2rtlz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	static BgL_blockz00_bglt BGl_z62globalzd2ze3rtlz53zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static bool_t BGl_za2reversezd2callzd2argumentza2z00zzsaw_node2rtlz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62predicatezd2conditiona1737zb0zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_node2rtlz00();
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2atom1673z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_jumpexitz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2getfield1700z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_instanceofz00zzsaw_defsz00;
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_argszd21ze70z35zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_rtl_ifz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static BgL_blockz00_bglt BGl_z62lambda2102z62zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2105z62zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static BgL_localz00_bglt BGl_z62lambda2116z62zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda2119z62zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2setfield1702z81zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda2122z62zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2130z62zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2131z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62lambda2135z62zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2new1704z81zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2136z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2cast1716z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_synczd2ze3sequencez31zzsync_nodez00(BgL_syncz00_bglt);
	static obj_t BGl_areaz00zzsaw_node2rtlz00 = BUNSPEC;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2switch1687z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_failz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2conditiona1685z81zzsaw_node2rtlz00(obj_t, obj_t);
	static bool_t BGl_dfsze70ze7zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_node2rtlz00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_rlocalz00zzsaw_node2rtlz00 = BUNSPEC;
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2makezd2box1727z53zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2boxzd2setz121731z41zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_newzd2regzd2zzsaw_node2rtlz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2funcall1695z81zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_areaz00_bglt BGl_z62nodezd2ze3rtlz53zzsaw_node2rtlz00(obj_t,
		obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2sync1683z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_areaz00_bglt BGl_unlinkz00zzsaw_node2rtlz00(BgL_areaz00_bglt);
	static BgL_areaz00_bglt BGl_moveze70ze7zzsaw_node2rtlz00(BgL_rtl_regz00_bglt,
		BgL_localz00_bglt);
	static BgL_areaz00_bglt
		BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(BgL_nodez00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	static BgL_areaz00_bglt BGl_linkza2za2zzsaw_node2rtlz00(obj_t);
	static obj_t BGl_imperativezf3zf3zzsaw_node2rtlz00(BgL_appz00_bglt,
		BgL_globalz00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00 = BUNSPEC;
	static BgL_areaz00_bglt BGl_callza2za2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_funz00_bglt, obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62predicatezd2letzd2var1739z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(BgL_localz00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_node2rtlz00();
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2instanceof1714z81zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2vlength1712z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_node2rtlz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2sequence1681z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2app1691z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	static BgL_areaz00_bglt BGl_singleza2za2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_funz00_bglt, obj_t);
	static BgL_areaz00_bglt
		BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_reversedz00zzsaw_node2rtlz00 = BUNSPEC;
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_areaz00_bglt BGl_forkz00zzsaw_node2rtlz00(BgL_areaz00_bglt, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62localzd2ze3regz53zzsaw_node2rtlz00(obj_t,
		obj_t);
	static obj_t BGl_z62predicate1732z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static BgL_areaz00_bglt BGl_linkz00zzsaw_node2rtlz00(BgL_areaz00_bglt,
		BgL_areaz00_bglt);
	static BgL_areaz00_bglt BGl_z62predicatezd2atom1735zb0zzsaw_node2rtlz00(obj_t,
		obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2letzd2fun1689z53zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_joinz00zzsaw_node2rtlz00(obj_t, BgL_rtl_regz00_bglt);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	static BgL_areaz00_bglt BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_areaz00_bglt,
		obj_t, BgL_rtl_regz00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_rtl_selectz00zzsaw_defsz00;
	static obj_t BGl_z62nodezd2ze3rtl1669z53zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32082ze3ze5zzsaw_node2rtlz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2appzd2ly1693z53zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2setzd2exzd2it1720z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsync_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2castzd2null1718z53zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzsaw_node2rtlz00();
	static BgL_areaz00_bglt BGl_z62lambda2078z62zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00();
	static BgL_areaz00_bglt BGl_z62lambda2080z62zzsaw_node2rtlz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00();
	static BgL_blockz00_bglt BGl_z62lambda2086z62zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2087z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2boxzd2ref1729z53zzsaw_node2rtlz00(obj_t, obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2fail1725z81zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static BgL_blockz00_bglt BGl_z62lambda2091z62zzsaw_node2rtlz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2092z62zzsaw_node2rtlz00(obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2099z62zzsaw_node2rtlz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_localz00_bglt);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2letzd2var1677z53zzsaw_node2rtlz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2setq1679z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_coercez00zzsaw_node2rtlz00(obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2jumpzd2exzd2it1722z81zzsaw_node2rtlz00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_rtl_protectedz00zzsaw_defsz00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_blockz00zzsaw_defsz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_findzd2registerzd2zzsaw_node2rtlz00(obj_t,
		BgL_rtl_regz00_bglt);
	static BgL_globalz00_bglt
		BGl_getzd2globalzd2zzsaw_node2rtlz00(BgL_globalz00_bglt);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[16];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl2974za7,
		BGl_z62nodezd2ze3rtlz53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2909z00zzsaw_node2rtlz00,
		BgL_bgl_string2909za700za7za7s2975za7, "switch", 6);
	      DEFINE_STRING(BGl_string2910z00zzsaw_node2rtlz00,
		BgL_bgl_string2910za700za7za7s2976za7, "bad constant", 12);
	      DEFINE_STRING(BGl_string2931z00zzsaw_node2rtlz00,
		BgL_bgl_string2931za700za7za7s2977za7, "node->rtl1669", 13);
	      DEFINE_STRING(BGl_string2933z00zzsaw_node2rtlz00,
		BgL_bgl_string2933za700za7za7s2978za7, "predicate1732", 13);
	      DEFINE_STRING(BGl_string2934z00zzsaw_node2rtlz00,
		BgL_bgl_string2934za700za7za7s2979za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2936z00zzsaw_node2rtlz00,
		BgL_bgl_string2936za700za7za7s2980za7, "node->rtl::area", 15);
	      DEFINE_STRING(BGl_string2966z00zzsaw_node2rtlz00,
		BgL_bgl_string2966za700za7za7s2981za7, "predicate::area", 15);
	      DEFINE_STRING(BGl_string2969z00zzsaw_node2rtlz00,
		BgL_bgl_string2969za700za7za7s2982za7, "saw_node2rtl", 12);
	      DEFINE_STRING(BGl_string2970z00zzsaw_node2rtlz00,
		BgL_bgl_string2970za700za7za7s2983za7,
		"light elight node->rtl1669 _ rlocal code obj reg reversed saw_node2rtl area exit entry __evmeaning_address else procedure ",
		122);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2ze3rtlzd2envze3zzsaw_node2rtlz00,
		BgL_bgl_za762globalza7d2za7e3r2984za7,
		BGl_z62globalzd2ze3rtlz53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2ze3regzd2envze3zzsaw_node2rtlz00,
		BgL_bgl_za762localza7d2za7e3re2985za7,
		BGl_z62localzd2ze3regz53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
		BgL_bgl_za762predicateza762za72986za7, BGl_z62predicatez62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2911z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2087za7622987z00, BGl_z62lambda2087z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2912z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2086za7622988z00, BGl_z62lambda2086z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2913z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2092za7622989z00, BGl_z62lambda2092z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2914z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2091za7622990z00, BGl_z62lambda2091z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2915z00zzsaw_node2rtlz00,
		BgL_bgl_za762za7c3za704anonymo2991za7,
		BGl_z62zc3z04anonymousza32082ze3ze5zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2916z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2080za7622992z00, BGl_z62lambda2080z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2917z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2078za7622993z00, BGl_z62lambda2078z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2918z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2105za7622994z00, BGl_z62lambda2105z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2919z00zzsaw_node2rtlz00,
		BgL_bgl_za762za7c3za704anonymo2995za7,
		BGl_z62zc3z04anonymousza32104ze3ze5zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2920z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2102za7622996z00, BGl_z62lambda2102z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2921z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2099za7622997z00, BGl_z62lambda2099z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2922z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2131za7622998z00, BGl_z62lambda2131z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2923z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2130za7622999z00, BGl_z62lambda2130z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2924z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2136za7623000z00, BGl_z62lambda2136z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2925z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2135za7623001z00, BGl_z62lambda2135z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2926z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2122za7623002z00, BGl_z62lambda2122z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2927z00zzsaw_node2rtlz00,
		BgL_bgl_za762za7c3za704anonymo3003za7,
		BGl_z62zc3z04anonymousza32121ze3ze5zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2928z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2119za7623004z00, BGl_z62lambda2119z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2929z00zzsaw_node2rtlz00,
		BgL_bgl_za762lambda2116za7623005z00, BGl_z62lambda2116z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2930z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3006za7,
		BGl_z62nodezd2ze3rtl1669z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2932z00zzsaw_node2rtlz00,
		BgL_bgl_za762predicate17323007za7, BGl_z62predicate1732z62zzsaw_node2rtlz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2935z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3008za7,
		BGl_z62nodezd2ze3rtlzd2atom1673z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2937z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3009za7,
		BGl_z62nodezd2ze3rtlzd2var1675z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2938z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3010za7,
		BGl_z62nodezd2ze3rtlzd2letzd2var1677z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2939z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3011za7,
		BGl_z62nodezd2ze3rtlzd2setq1679z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2940z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3012za7,
		BGl_z62nodezd2ze3rtlzd2sequence1681z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2941z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3013za7,
		BGl_z62nodezd2ze3rtlzd2sync1683z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2942z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3014za7,
		BGl_z62nodezd2ze3rtlzd2conditiona1685z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2943z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3015za7,
		BGl_z62nodezd2ze3rtlzd2switch1687z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2944z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3016za7,
		BGl_z62nodezd2ze3rtlzd2letzd2fun1689z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2945z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3017za7,
		BGl_z62nodezd2ze3rtlzd2app1691z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2946z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3018za7,
		BGl_z62nodezd2ze3rtlzd2appzd2ly1693z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2947z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3019za7,
		BGl_z62nodezd2ze3rtlzd2funcall1695z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2948z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3020za7,
		BGl_z62nodezd2ze3rtlzd2pragma1697z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2949z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3021za7,
		BGl_z62nodezd2ze3rtlzd2getfield1700z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2950z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3022za7,
		BGl_z62nodezd2ze3rtlzd2setfield1702z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2951z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3023za7,
		BGl_z62nodezd2ze3rtlzd2new1704z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2952z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3024za7,
		BGl_z62nodezd2ze3rtlzd2valloc1706z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2953z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3025za7,
		BGl_z62nodezd2ze3rtlzd2vref1708z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2954z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3026za7,
		BGl_z62nodezd2ze3rtlzd2vsetz121710z93zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2955z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3027za7,
		BGl_z62nodezd2ze3rtlzd2vlength1712z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2956z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3028za7,
		BGl_z62nodezd2ze3rtlzd2instanceof1714z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2957z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3029za7,
		BGl_z62nodezd2ze3rtlzd2cast1716z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2958z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3030za7,
		BGl_z62nodezd2ze3rtlzd2castzd2null1718z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2959z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3031za7,
		BGl_z62nodezd2ze3rtlzd2setzd2exzd2it1720z81zzsaw_node2rtlz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2960z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3032za7,
		BGl_z62nodezd2ze3rtlzd2jumpzd2exzd2it1722z81zzsaw_node2rtlz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2961z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3033za7,
		BGl_z62nodezd2ze3rtlzd2fail1725z81zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2962z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3034za7,
		BGl_z62nodezd2ze3rtlzd2makezd2box1727z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2963z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3035za7,
		BGl_z62nodezd2ze3rtlzd2boxzd2ref1729z53zzsaw_node2rtlz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2964z00zzsaw_node2rtlz00,
		BgL_bgl_za762nodeza7d2za7e3rtl3036za7,
		BGl_z62nodezd2ze3rtlzd2boxzd2setz121731z41zzsaw_node2rtlz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2965z00zzsaw_node2rtlz00,
		BgL_bgl_za762predicateza7d2a3037z00,
		BGl_z62predicatezd2atom1735zb0zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2967z00zzsaw_node2rtlz00,
		BgL_bgl_za762predicateza7d2c3038z00,
		BGl_z62predicatezd2conditiona1737zb0zzsaw_node2rtlz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2968z00zzsaw_node2rtlz00,
		BgL_bgl_za762predicateza7d2l3039z00,
		BGl_z62predicatezd2letzd2var1739z62zzsaw_node2rtlz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_areaz00zzsaw_node2rtlz00));
		     ADD_ROOT((void *) (&BGl_rlocalz00zzsaw_node2rtlz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00));
		     ADD_ROOT((void *) (&BGl_reversedz00zzsaw_node2rtlz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long
		BgL_checksumz00_5340, char *BgL_fromz00_5341)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_node2rtlz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_node2rtlz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00();
					BGl_cnstzd2initzd2zzsaw_node2rtlz00();
					BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00();
					BGl_objectzd2initzd2zzsaw_node2rtlz00();
					BGl_genericzd2initzd2zzsaw_node2rtlz00();
					BGl_methodzd2initzd2zzsaw_node2rtlz00();
					return BGl_toplevelzd2initzd2zzsaw_node2rtlz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_node2rtl");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "saw_node2rtl");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			{	/* SawMill/node2rtl.scm 1 */
				obj_t BgL_cportz00_4852;

				{	/* SawMill/node2rtl.scm 1 */
					obj_t BgL_stringz00_4860;

					BgL_stringz00_4860 = BGl_string2970z00zzsaw_node2rtlz00;
					{	/* SawMill/node2rtl.scm 1 */
						obj_t BgL_startz00_4861;

						BgL_startz00_4861 = BINT(((long) 0));
						{	/* SawMill/node2rtl.scm 1 */
							obj_t BgL_endz00_4862;

							BgL_endz00_4862 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4860)));
							{	/* SawMill/node2rtl.scm 1 */

								BgL_cportz00_4852 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4860, BgL_startz00_4861, BgL_endz00_4862);
				}}}}
				{
					long BgL_iz00_4853;

					BgL_iz00_4853 = ((long) 15);
				BgL_loopz00_4854:
					if ((BgL_iz00_4853 == ((long) -1)))
						{	/* SawMill/node2rtl.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/node2rtl.scm 1 */
							{	/* SawMill/node2rtl.scm 1 */
								obj_t BgL_arg2972z00_4856;

								{	/* SawMill/node2rtl.scm 1 */

									{	/* SawMill/node2rtl.scm 1 */
										obj_t BgL_locationz00_4858;

										BgL_locationz00_4858 = BBOOL(((bool_t) 0));
										{	/* SawMill/node2rtl.scm 1 */

											BgL_arg2972z00_4856 =
												BGl_readz00zz__readerz00(BgL_cportz00_4852,
												BgL_locationz00_4858);
										}
									}
								}
								{	/* SawMill/node2rtl.scm 1 */
									int BgL_tmpz00_5375;

									BgL_tmpz00_5375 = (int) (BgL_iz00_4853);
									CNST_TABLE_SET(BgL_tmpz00_5375, BgL_arg2972z00_4856);
							}}
							{	/* SawMill/node2rtl.scm 1 */
								int BgL_auxz00_4859;

								BgL_auxz00_4859 = (int) ((BgL_iz00_4853 - ((long) 1)));
								{
									long BgL_iz00_5380;

									BgL_iz00_5380 = (long) (BgL_auxz00_4859);
									BgL_iz00_4853 = BgL_iz00_5380;
									goto BgL_loopz00_4854;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			BGl_za2reversezd2callzd2argumentza2z00zzsaw_node2rtlz00 = ((bool_t) 0);
			return BUNSPEC;
		}

	}



/* global->rtl */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt BgL_varz00_96)
	{
		{	/* SawMill/node2rtl.scm 33 */
			{	/* SawMill/node2rtl.scm 34 */
				BgL_areaz00_bglt BgL_az00_2206;

				{	/* SawMill/node2rtl.scm 34 */
					BgL_rtl_returnz00_bglt BgL_arg1784z00_2229;
					obj_t BgL_arg1790z00_2230;

					{	/* SawMill/node2rtl.scm 34 */
						BgL_rtl_returnz00_bglt BgL_new1194z00_2232;

						{	/* SawMill/node2rtl.scm 34 */
							BgL_rtl_returnz00_bglt BgL_new1193z00_2233;

							BgL_new1193z00_2233 =
								((BgL_rtl_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_returnz00_bgl))));
							{	/* SawMill/node2rtl.scm 34 */
								long BgL_arg1796z00_2234;

								{	/* SawMill/node2rtl.scm 34 */
									long BgL_res2677z00_3761;

									BgL_res2677z00_3761 =
										BGL_CLASS_INDEX(BGl_rtl_returnz00zzsaw_defsz00);
									BgL_arg1796z00_2234 = BgL_res2677z00_3761;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1193z00_2233),
									BgL_arg1796z00_2234);
							}
							BgL_new1194z00_2232 = BgL_new1193z00_2233;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1194z00_2232)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_returnz00_bglt) COBJECT(BgL_new1194z00_2232))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_variablez00_bglt)
										COBJECT(((BgL_variablez00_bglt) BgL_varz00_96)))->
									BgL_typez00)), BUNSPEC);
						BgL_arg1784z00_2229 = BgL_new1194z00_2232;
					}
					BgL_arg1790z00_2230 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_varz00_96)))->
										BgL_valuez00))))->BgL_bodyz00);
					{	/* SawMill/node2rtl.scm 34 */
						obj_t BgL_list1791z00_2231;

						BgL_list1791z00_2231 = MAKE_YOUNG_PAIR(BgL_arg1790z00_2230, BNIL);
						{	/* SawMill/node2rtl.scm 34 */
							BgL_areaz00_bglt BgL_res2678z00_3768;

							BgL_res2678z00_3768 =
								BGl_callza2za2zzsaw_node2rtlz00(BFALSE,
								((BgL_rtl_funz00_bglt) BgL_arg1784z00_2229),
								BgL_list1791z00_2231);
							BgL_az00_2206 = BgL_res2678z00_3768;
				}}}
				{	/* SawMill/node2rtl.scm 37 */
					struct bgl_cell BgL_box3042_4849z00;
					BgL_blockz00_bglt BgL_rz00_2207;
					obj_t BgL_nz00_4849;

					BgL_rz00_2207 =
						(((BgL_areaz00_bglt) COBJECT(BgL_az00_2206))->BgL_entryz00);
					BgL_nz00_4849 =
						MAKE_CELL_STACK(BINT(((long) 0)), BgL_box3042_4849z00);
					BGl_dfsze70ze7zzsaw_node2rtlz00(BgL_nz00_4849,
						((obj_t) BgL_rz00_2207));
					return BgL_rz00_2207;
				}
			}
		}

	}



/* dfs~0 */
	bool_t BGl_dfsze70ze7zzsaw_node2rtlz00(obj_t BgL_nz00_4847,
		obj_t BgL_bz00_2210)
	{
		{	/* SawMill/node2rtl.scm 38 */
			{	/* SawMill/node2rtl.scm 39 */
				BgL_reversedz00_bglt BgL_wide1197z00_2214;

				BgL_wide1197z00_2214 =
					((BgL_reversedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_reversedz00_bgl))));
				{	/* SawMill/node2rtl.scm 39 */
					obj_t BgL_auxz00_5408;
					BgL_objectz00_bglt BgL_tmpz00_5404;

					BgL_auxz00_5408 = ((obj_t) BgL_wide1197z00_2214);
					BgL_tmpz00_5404 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2210)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5404, BgL_auxz00_5408);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2210)));
				{	/* SawMill/node2rtl.scm 39 */
					long BgL_arg1771z00_2215;

					{	/* SawMill/node2rtl.scm 39 */
						long BgL_res2679z00_3772;

						BgL_res2679z00_3772 =
							BGL_CLASS_INDEX(BGl_reversedz00zzsaw_node2rtlz00);
						BgL_arg1771z00_2215 = BgL_res2679z00_3772;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_2210))), BgL_arg1771z00_2215);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2210)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2210));
			{	/* SawMill/node2rtl.scm 40 */
				int BgL_vz00_3776;

				BgL_vz00_3776 = CINT(CELL_REF(BgL_nz00_4847));
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_2210)))->BgL_labelz00) =
					((int) BgL_vz00_3776), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 41 */
				obj_t BgL_auxz00_4848;

				BgL_auxz00_4848 = ADDFX(CELL_REF(BgL_nz00_4847), BINT(((long) 1)));
				CELL_SET(BgL_nz00_4847, BgL_auxz00_4848);
			}
			{	/* SawMill/node2rtl.scm 42 */
				obj_t BgL_g1575z00_2217;

				BgL_g1575z00_2217 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_2210)))->BgL_succsz00);
				{
					obj_t BgL_l1573z00_2219;

					BgL_l1573z00_2219 = BgL_g1575z00_2217;
				BgL_zc3z04anonymousza31772ze3z87_2220:
					if (PAIRP(BgL_l1573z00_2219))
						{	/* SawMill/node2rtl.scm 45 */
							{	/* SawMill/node2rtl.scm 43 */
								obj_t BgL_sz00_2222;

								BgL_sz00_2222 = CAR(BgL_l1573z00_2219);
								{	/* SawMill/node2rtl.scm 43 */
									obj_t BgL_arg1775z00_2223;

									{	/* SawMill/node2rtl.scm 43 */
										obj_t BgL_arg1778z00_2224;

										BgL_arg1778z00_2224 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_sz00_2222)))->BgL_predsz00);
										BgL_arg1775z00_2223 =
											MAKE_YOUNG_PAIR(BgL_bz00_2210, BgL_arg1778z00_2224);
									}
									{	/* SawMill/node2rtl.scm 43 */
										obj_t BgL_vz00_3784;

										BgL_vz00_3784 = BgL_arg1775z00_2223;
										((((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_sz00_2222)))->
												BgL_predsz00) = ((obj_t) BgL_vz00_3784), BUNSPEC);
									}
								}
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_2222,
										BGl_reversedz00zzsaw_node2rtlz00))
									{	/* SawMill/node2rtl.scm 44 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/node2rtl.scm 44 */
										BGl_dfsze70ze7zzsaw_node2rtlz00(BgL_nz00_4847,
											BgL_sz00_2222);
									}
							}
							{
								obj_t BgL_l1573z00_5442;

								BgL_l1573z00_5442 = CDR(BgL_l1573z00_2219);
								BgL_l1573z00_2219 = BgL_l1573z00_5442;
								goto BgL_zc3z04anonymousza31772ze3z87_2220;
							}
						}
					else
						{	/* SawMill/node2rtl.scm 45 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* &global->rtl */
	BgL_blockz00_bglt BGl_z62globalzd2ze3rtlz53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4656, obj_t BgL_varz00_4657)
	{
		{	/* SawMill/node2rtl.scm 33 */
			return
				BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(
				((BgL_globalz00_bglt) BgL_varz00_4657));
		}

	}



/* get-global */
	BgL_globalz00_bglt BGl_getzd2globalzd2zzsaw_node2rtlz00(BgL_globalz00_bglt
		BgL_varz00_97)
	{
		{	/* SawMill/node2rtl.scm 48 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_varz00_97));
			if (CBOOL((((BgL_globalz00_bglt) COBJECT(BgL_varz00_97))->BgL_aliasz00)))
				{	/* SawMill/node2rtl.scm 52 */
					obj_t BgL_unaliasz00_2238;

					{	/* SawMill/node2rtl.scm 52 */
						obj_t BgL_arg1801z00_2240;
						obj_t BgL_arg1808z00_2241;

						BgL_arg1801z00_2240 =
							(((BgL_globalz00_bglt) COBJECT(BgL_varz00_97))->BgL_aliasz00);
						BgL_arg1808z00_2241 =
							(((BgL_globalz00_bglt) COBJECT(BgL_varz00_97))->BgL_modulez00);
						{	/* SawMill/node2rtl.scm 52 */
							obj_t BgL_list1809z00_2242;

							BgL_list1809z00_2242 = MAKE_YOUNG_PAIR(BgL_arg1808z00_2241, BNIL);
							BgL_unaliasz00_2238 =
								BGl_findzd2globalzd2zzast_envz00(BgL_arg1801z00_2240,
								BgL_list1809z00_2242);
						}
					}
					if (BGl_isazf3zf3zz__objectz00(BgL_unaliasz00_2238,
							BGl_globalz00zzast_varz00))
						{	/* SawMill/node2rtl.scm 53 */
							BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_unaliasz00_2238)));
							return ((BgL_globalz00_bglt) BgL_unaliasz00_2238);
						}
					else
						{	/* SawMill/node2rtl.scm 53 */
							return BgL_varz00_97;
						}
				}
			else
				{	/* SawMill/node2rtl.scm 51 */
					return BgL_varz00_97;
				}
		}

	}



/* new-reg */
	BgL_rtl_regz00_bglt BGl_newzd2regzd2zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_98)
	{
		{	/* SawMill/node2rtl.scm 63 */
			{	/* SawMill/node2rtl.scm 64 */
				bool_t BgL_test3047z00_5461;

				{	/* SawMill/node2rtl.scm 64 */
					bool_t BgL_res2684z00_3788;

					BgL_res2684z00_3788 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_ez00_98), BGl_varz00zzast_nodez00);
					BgL_test3047z00_5461 = BgL_res2684z00_3788;
				}
				if (BgL_test3047z00_5461)
					{	/* SawMill/node2rtl.scm 65 */
						bool_t BgL_test3048z00_5464;

						{	/* SawMill/node2rtl.scm 65 */
							BgL_valuez00_bglt BgL_arg1831z00_2260;

							BgL_arg1831z00_2260 =
								(((BgL_variablez00_bglt) COBJECT(
										(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_ez00_98)))->
											BgL_variablez00)))->BgL_valuez00);
							{	/* SawMill/node2rtl.scm 65 */
								bool_t BgL_res2685z00_3791;

								BgL_res2685z00_3791 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1831z00_2260), BGl_sfunz00zzast_varz00);
								BgL_test3048z00_5464 = BgL_res2685z00_3791;
							}
						}
						if (BgL_test3048z00_5464)
							{	/* SawMill/node2rtl.scm 66 */
								BgL_rtl_regz00_bglt BgL_new1201z00_2247;

								{	/* SawMill/node2rtl.scm 67 */
									BgL_rtl_regz00_bglt BgL_new1200z00_2251;

									BgL_new1200z00_2251 =
										((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_regz00_bgl))));
									{	/* SawMill/node2rtl.scm 67 */
										long BgL_arg1826z00_2252;

										{	/* SawMill/node2rtl.scm 67 */
											long BgL_res2686z00_3793;

											BgL_res2686z00_3793 =
												BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
											BgL_arg1826z00_2252 = BgL_res2686z00_3793;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1200z00_2251),
											BgL_arg1826z00_2252);
									}
									{	/* SawMill/node2rtl.scm 67 */
										BgL_objectz00_bglt BgL_tmpz00_5474;

										BgL_tmpz00_5474 =
											((BgL_objectz00_bglt) BgL_new1200z00_2251);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5474, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1200z00_2251);
									BgL_new1201z00_2247 = BgL_new1200z00_2251;
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
										BgL_typez00) =
									((BgL_typez00_bglt)
										BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long)
													0)))), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
										BgL_varz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
										BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_5483;

									{	/* SawMill/node2rtl.scm 69 */

										{	/* SawMill/node2rtl.scm 69 */

											BgL_auxz00_5483 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
											BgL_namez00) = ((obj_t) BgL_auxz00_5483), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_5486;

									{	/* SawMill/node2rtl.scm 69 */
										obj_t BgL_arg1824z00_2249;

										{	/* SawMill/node2rtl.scm 69 */
											obj_t BgL_arg1825z00_2250;

											{	/* SawMill/node2rtl.scm 69 */
												obj_t BgL_res2687z00_3798;

												{	/* SawMill/node2rtl.scm 69 */
													obj_t BgL_classz00_3797;

													BgL_classz00_3797 = BGl_rtl_regz00zzsaw_defsz00;
													BgL_res2687z00_3798 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_3797);
												}
												BgL_arg1825z00_2250 = BgL_res2687z00_3798;
											}
											BgL_arg1824z00_2249 =
												VECTOR_REF(BgL_arg1825z00_2250, ((long) 4));
										}
										BgL_auxz00_5486 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1824z00_2249);
									}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
											BgL_keyz00) = ((obj_t) BgL_auxz00_5486), BUNSPEC);
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1201z00_2247))->
										BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
								return BgL_new1201z00_2247;
							}
						else
							{	/* SawMill/node2rtl.scm 70 */
								BgL_rtl_regz00_bglt BgL_new1203z00_2253;

								{	/* SawMill/node2rtl.scm 71 */
									BgL_rtl_regz00_bglt BgL_new1202z00_2258;

									BgL_new1202z00_2258 =
										((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_regz00_bgl))));
									{	/* SawMill/node2rtl.scm 71 */
										long BgL_arg1830z00_2259;

										{	/* SawMill/node2rtl.scm 71 */
											long BgL_res2688z00_3801;

											BgL_res2688z00_3801 =
												BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
											BgL_arg1830z00_2259 = BgL_res2688z00_3801;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1202z00_2258),
											BgL_arg1830z00_2259);
									}
									{	/* SawMill/node2rtl.scm 71 */
										BgL_objectz00_bglt BgL_tmpz00_5496;

										BgL_tmpz00_5496 =
											((BgL_objectz00_bglt) BgL_new1202z00_2258);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5496, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1202z00_2258);
									BgL_new1203z00_2253 = BgL_new1202z00_2258;
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
										BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_variablez00_bglt)
												COBJECT((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
																	BgL_ez00_98)))->BgL_variablez00)))->
											BgL_typez00)), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
										BgL_varz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
										BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_5506;

									{	/* SawMill/node2rtl.scm 73 */

										{	/* SawMill/node2rtl.scm 73 */

											BgL_auxz00_5506 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
											BgL_namez00) = ((obj_t) BgL_auxz00_5506), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_5509;

									{	/* SawMill/node2rtl.scm 73 */
										obj_t BgL_arg1828z00_2256;

										{	/* SawMill/node2rtl.scm 73 */
											obj_t BgL_arg1829z00_2257;

											{	/* SawMill/node2rtl.scm 73 */
												obj_t BgL_res2689z00_3808;

												{	/* SawMill/node2rtl.scm 73 */
													obj_t BgL_classz00_3807;

													BgL_classz00_3807 = BGl_rtl_regz00zzsaw_defsz00;
													BgL_res2689z00_3808 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_3807);
												}
												BgL_arg1829z00_2257 = BgL_res2689z00_3808;
											}
											BgL_arg1828z00_2256 =
												VECTOR_REF(BgL_arg1829z00_2257, ((long) 4));
										}
										BgL_auxz00_5509 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1828z00_2256);
									}
									((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
											BgL_keyz00) = ((obj_t) BgL_auxz00_5509), BUNSPEC);
								}
								((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1203z00_2253))->
										BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
								return BgL_new1203z00_2253;
							}
					}
				else
					{	/* SawMill/node2rtl.scm 74 */
						BgL_rtl_regz00_bglt BgL_new1205z00_2262;

						{	/* SawMill/node2rtl.scm 74 */
							BgL_rtl_regz00_bglt BgL_new1204z00_2266;

							BgL_new1204z00_2266 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/node2rtl.scm 74 */
								long BgL_arg1836z00_2267;

								{	/* SawMill/node2rtl.scm 74 */
									long BgL_res2690z00_3811;

									BgL_res2690z00_3811 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1836z00_2267 = BgL_res2690z00_3811;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1204z00_2266),
									BgL_arg1836z00_2267);
							}
							{	/* SawMill/node2rtl.scm 74 */
								BgL_objectz00_bglt BgL_tmpz00_5519;

								BgL_tmpz00_5519 = ((BgL_objectz00_bglt) BgL_new1204z00_2266);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5519, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1204z00_2266);
							BgL_new1205z00_2262 = BgL_new1204z00_2266;
						}
						((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
								BgL_typez00) =
							((BgL_typez00_bglt) BGl_getzd2typezd2zztype_typeofz00(BgL_ez00_98,
									((bool_t) 0))), BUNSPEC);
						((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
								BgL_varz00) = ((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
								BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
						{
							obj_t BgL_auxz00_5527;

							{	/* SawMill/node2rtl.scm 74 */

								{	/* SawMill/node2rtl.scm 74 */

									BgL_auxz00_5527 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}}
							((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
									BgL_namez00) = ((obj_t) BgL_auxz00_5527), BUNSPEC);
						}
						{
							obj_t BgL_auxz00_5530;

							{	/* SawMill/node2rtl.scm 74 */
								obj_t BgL_arg1833z00_2264;

								{	/* SawMill/node2rtl.scm 74 */
									obj_t BgL_arg1835z00_2265;

									{	/* SawMill/node2rtl.scm 74 */
										obj_t BgL_res2691z00_3816;

										{	/* SawMill/node2rtl.scm 74 */
											obj_t BgL_classz00_3815;

											BgL_classz00_3815 = BGl_rtl_regz00zzsaw_defsz00;
											BgL_res2691z00_3816 =
												BGL_CLASS_ALL_FIELDS(BgL_classz00_3815);
										}
										BgL_arg1835z00_2265 = BgL_res2691z00_3816;
									}
									BgL_arg1833z00_2264 =
										VECTOR_REF(BgL_arg1835z00_2265, ((long) 4));
								}
								BgL_auxz00_5530 =
									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
									(BgL_arg1833z00_2264);
							}
							((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
									BgL_keyz00) = ((obj_t) BgL_auxz00_5530), BUNSPEC);
						}
						((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1205z00_2262))->
								BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
						return BgL_new1205z00_2262;
					}
			}
		}

	}



/* new-ureg */
	BgL_rtl_regz00_bglt BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_varz00_99)
	{
		{	/* SawMill/node2rtl.scm 76 */
			{	/* SawMill/node2rtl.scm 77 */
				BgL_rtl_regz00_bglt BgL_new1207z00_2268;

				{	/* SawMill/node2rtl.scm 77 */
					BgL_rtl_regz00_bglt BgL_new1206z00_2273;

					BgL_new1206z00_2273 =
						((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regz00_bgl))));
					{	/* SawMill/node2rtl.scm 77 */
						long BgL_arg1845z00_2274;

						{	/* SawMill/node2rtl.scm 77 */
							long BgL_res2692z00_3819;

							BgL_res2692z00_3819 =
								BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
							BgL_arg1845z00_2274 = BgL_res2692z00_3819;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1206z00_2273), BgL_arg1845z00_2274);
					}
					{	/* SawMill/node2rtl.scm 77 */
						BgL_objectz00_bglt BgL_tmpz00_5540;

						BgL_tmpz00_5540 = ((BgL_objectz00_bglt) BgL_new1206z00_2273);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5540, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1206z00_2273);
					BgL_new1207z00_2268 = BgL_new1206z00_2273;
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_variablez00_bglt)
								COBJECT(((BgL_variablez00_bglt) BgL_varz00_99)))->BgL_typez00)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->BgL_varz00) =
					((obj_t) ((obj_t) BgL_varz00_99)), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->
						BgL_onexprzf3zf3) = ((obj_t) BFALSE), BUNSPEC);
				{
					obj_t BgL_auxz00_5550;

					{	/* SawMill/node2rtl.scm 77 */
						obj_t BgL_arg1838z00_2269;

						{	/* SawMill/node2rtl.scm 77 */
							obj_t BgL_arg1840z00_2270;

							{	/* SawMill/node2rtl.scm 77 */
								obj_t BgL_res2693z00_3825;

								{	/* SawMill/node2rtl.scm 77 */
									obj_t BgL_classz00_3824;

									BgL_classz00_3824 = BGl_rtl_regz00zzsaw_defsz00;
									BgL_res2693z00_3825 = BGL_CLASS_ALL_FIELDS(BgL_classz00_3824);
								}
								BgL_arg1840z00_2270 = BgL_res2693z00_3825;
							}
							BgL_arg1838z00_2269 = VECTOR_REF(BgL_arg1840z00_2270, ((long) 3));
						}
						BgL_auxz00_5550 =
							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
							(BgL_arg1838z00_2269);
					}
					((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->BgL_namez00) =
						((obj_t) BgL_auxz00_5550), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_5555;

					{	/* SawMill/node2rtl.scm 77 */
						obj_t BgL_arg1841z00_2271;

						{	/* SawMill/node2rtl.scm 77 */
							obj_t BgL_arg1842z00_2272;

							{	/* SawMill/node2rtl.scm 77 */
								obj_t BgL_res2694z00_3828;

								{	/* SawMill/node2rtl.scm 77 */
									obj_t BgL_classz00_3827;

									BgL_classz00_3827 = BGl_rtl_regz00zzsaw_defsz00;
									BgL_res2694z00_3828 = BGL_CLASS_ALL_FIELDS(BgL_classz00_3827);
								}
								BgL_arg1842z00_2272 = BgL_res2694z00_3828;
							}
							BgL_arg1841z00_2271 = VECTOR_REF(BgL_arg1842z00_2272, ((long) 4));
						}
						BgL_auxz00_5555 =
							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
							(BgL_arg1841z00_2271);
					}
					((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->BgL_keyz00) =
						((obj_t) BgL_auxz00_5555), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(BgL_new1207z00_2268))->
						BgL_hardwarez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1207z00_2268;
			}
		}

	}



/* local->reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt BgL_varz00_100)
	{
		{	/* SawMill/node2rtl.scm 79 */
			{	/* SawMill/node2rtl.scm 80 */
				bool_t BgL_test3049z00_5561;

				{	/* SawMill/node2rtl.scm 80 */
					bool_t BgL_res2695z00_3830;

					BgL_res2695z00_3830 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_varz00_100), BGl_rlocalz00zzsaw_node2rtlz00);
					BgL_test3049z00_5561 = BgL_res2695z00_3830;
				}
				if (BgL_test3049z00_5561)
					{
						obj_t BgL_auxz00_5564;

						{
							BgL_rlocalz00_bglt BgL_auxz00_5565;

							{
								obj_t BgL_auxz00_5566;

								{	/* SawMill/node2rtl.scm 81 */
									BgL_objectz00_bglt BgL_tmpz00_5567;

									BgL_tmpz00_5567 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
									BgL_auxz00_5566 = BGL_OBJECT_WIDENING(BgL_tmpz00_5567);
								}
								BgL_auxz00_5565 = ((BgL_rlocalz00_bglt) BgL_auxz00_5566);
							}
							BgL_auxz00_5564 =
								(((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_5565))->BgL_regz00);
						}
						return ((BgL_rtl_regz00_bglt) BgL_auxz00_5564);
					}
				else
					{	/* SawMill/node2rtl.scm 82 */
						BgL_rtl_regz00_bglt BgL_rz00_2276;

						BgL_rz00_2276 = BGl_newzd2uregzd2zzsaw_node2rtlz00(BgL_varz00_100);
						{	/* SawMill/node2rtl.scm 83 */
							BgL_rlocalz00_bglt BgL_wide1210z00_2279;

							BgL_wide1210z00_2279 =
								((BgL_rlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rlocalz00_bgl))));
							{	/* SawMill/node2rtl.scm 83 */
								obj_t BgL_auxz00_5579;
								BgL_objectz00_bglt BgL_tmpz00_5576;

								BgL_auxz00_5579 = ((obj_t) BgL_wide1210z00_2279);
								BgL_tmpz00_5576 =
									((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5576, BgL_auxz00_5579);
							}
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
							{	/* SawMill/node2rtl.scm 83 */
								long BgL_arg1847z00_2280;

								{	/* SawMill/node2rtl.scm 83 */
									long BgL_res2696z00_3835;

									BgL_res2696z00_3835 =
										BGL_CLASS_INDEX(BGl_rlocalz00zzsaw_node2rtlz00);
									BgL_arg1847z00_2280 = BgL_res2696z00_3835;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_100)), BgL_arg1847z00_2280);
							}
							((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
						}
						{
							BgL_rlocalz00_bglt BgL_auxz00_5590;

							{
								obj_t BgL_auxz00_5591;

								{	/* SawMill/node2rtl.scm 83 */
									BgL_objectz00_bglt BgL_tmpz00_5592;

									BgL_tmpz00_5592 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
									BgL_auxz00_5591 = BGL_OBJECT_WIDENING(BgL_tmpz00_5592);
								}
								BgL_auxz00_5590 = ((BgL_rlocalz00_bglt) BgL_auxz00_5591);
							}
							((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_5590))->BgL_regz00) =
								((obj_t) ((obj_t) BgL_rz00_2276)), BUNSPEC);
						}
						{
							BgL_rlocalz00_bglt BgL_auxz00_5599;

							{
								obj_t BgL_auxz00_5600;

								{	/* SawMill/node2rtl.scm 83 */
									BgL_objectz00_bglt BgL_tmpz00_5601;

									BgL_tmpz00_5601 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_100));
									BgL_auxz00_5600 = BGL_OBJECT_WIDENING(BgL_tmpz00_5601);
								}
								BgL_auxz00_5599 = ((BgL_rlocalz00_bglt) BgL_auxz00_5600);
							}
							((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_5599))->BgL_codez00) =
								((obj_t) BFALSE), BUNSPEC);
						}
						((BgL_localz00_bglt) BgL_varz00_100);
						return BgL_rz00_2276;
					}
			}
		}

	}



/* &local->reg */
	BgL_rtl_regz00_bglt BGl_z62localzd2ze3regz53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4658, obj_t BgL_varz00_4659)
	{
		{	/* SawMill/node2rtl.scm 79 */
			return
				BGl_localzd2ze3regz31zzsaw_node2rtlz00(
				((BgL_localz00_bglt) BgL_varz00_4659));
		}

	}



/* bdestination! */
	obj_t BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_blockz00_bglt BgL_bz00_103,
		BgL_rtl_regz00_bglt BgL_regz00_104)
	{
		{	/* SawMill/node2rtl.scm 92 */
			{	/* SawMill/node2rtl.scm 93 */
				obj_t BgL_insz00_2284;

				BgL_insz00_2284 =
					CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
						(((BgL_blockz00_bglt) COBJECT(BgL_bz00_103))->BgL_firstz00)));
				{	/* SawMill/node2rtl.scm 94 */
					bool_t BgL_test3050z00_5613;

					{	/* SawMill/node2rtl.scm 94 */
						bool_t BgL_test3051z00_5614;

						{	/* SawMill/node2rtl.scm 94 */
							BgL_rtl_funz00_bglt BgL_arg1863z00_2298;

							BgL_arg1863z00_2298 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_2284)))->BgL_funz00);
							{	/* SawMill/node2rtl.scm 94 */
								bool_t BgL_res2697z00_3848;

								BgL_res2697z00_3848 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1863z00_2298), BGl_rtl_movz00zzsaw_defsz00);
								BgL_test3051z00_5614 = BgL_res2697z00_3848;
							}
						}
						if (BgL_test3051z00_5614)
							{	/* SawMill/node2rtl.scm 95 */
								bool_t BgL_test3052z00_5619;

								{	/* SawMill/node2rtl.scm 95 */
									obj_t BgL_tmpz00_5620;

									{	/* SawMill/node2rtl.scm 95 */
										obj_t BgL_pairz00_3850;

										BgL_pairz00_3850 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_2284)))->
											BgL_argsz00);
										BgL_tmpz00_5620 = CAR(BgL_pairz00_3850);
									}
									BgL_test3052z00_5619 =
										(BgL_tmpz00_5620 == ((obj_t) BgL_regz00_104));
								}
								if (BgL_test3052z00_5619)
									{	/* SawMill/node2rtl.scm 95 */
										BgL_test3050z00_5613 = ((bool_t) 0);
									}
								else
									{	/* SawMill/node2rtl.scm 95 */
										BgL_test3050z00_5613 = ((bool_t) 1);
									}
							}
						else
							{	/* SawMill/node2rtl.scm 94 */
								BgL_test3050z00_5613 = ((bool_t) 1);
							}
					}
					if (BgL_test3050z00_5613)
						{	/* SawMill/node2rtl.scm 94 */
							return
								((((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_2284)))->BgL_destz00) =
								((obj_t) ((obj_t) BgL_regz00_104)), BUNSPEC);
						}
					else
						{	/* SawMill/node2rtl.scm 94 */
							return BFALSE;
						}
				}
			}
		}

	}



/* single* */
	BgL_areaz00_bglt BGl_singleza2za2zzsaw_node2rtlz00(obj_t BgL_ez00_105,
		BgL_rtl_funz00_bglt BgL_funz00_106, obj_t BgL_argsz00_107)
	{
		{	/* SawMill/node2rtl.scm 101 */
			{	/* SawMill/node2rtl.scm 102 */
				BgL_rtl_insz00_bglt BgL_insz00_2301;

				{	/* SawMill/node2rtl.scm 102 */
					BgL_rtl_insz00_bglt BgL_new1213z00_2313;

					{	/* SawMill/node2rtl.scm 102 */
						BgL_rtl_insz00_bglt BgL_new1212z00_2314;

						BgL_new1212z00_2314 =
							((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_insz00_bgl))));
						{	/* SawMill/node2rtl.scm 102 */
							long BgL_arg1873z00_2315;

							{	/* SawMill/node2rtl.scm 102 */
								long BgL_res2698z00_3853;

								BgL_res2698z00_3853 =
									BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
								BgL_arg1873z00_2315 = BgL_res2698z00_3853;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1212z00_2314),
								BgL_arg1873z00_2315);
						}
						{	/* SawMill/node2rtl.scm 102 */
							BgL_objectz00_bglt BgL_tmpz00_5633;

							BgL_tmpz00_5633 = ((BgL_objectz00_bglt) BgL_new1212z00_2314);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5633, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1212z00_2314);
						BgL_new1213z00_2313 = BgL_new1212z00_2314;
					}
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1213z00_2313))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1213z00_2313))->
							BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1213z00_2313))->BgL_destz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1213z00_2313))->BgL_funz00) =
						((BgL_rtl_funz00_bglt) BgL_funz00_106), BUNSPEC);
					((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1213z00_2313))->BgL_argsz00) =
						((obj_t) BgL_argsz00_107), BUNSPEC);
					BgL_insz00_2301 = BgL_new1213z00_2313;
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_105, BGl_nodez00zzast_nodez00))
					{	/* SawMill/node2rtl.scm 103 */
						{	/* SawMill/node2rtl.scm 104 */
							obj_t BgL_arg1868z00_2303;

							BgL_arg1868z00_2303 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_ez00_105)))->BgL_locz00);
							((((BgL_rtl_funz00_bglt) COBJECT(BgL_funz00_106))->BgL_locz00) =
								((obj_t) BgL_arg1868z00_2303), BUNSPEC);
						}
						{	/* SawMill/node2rtl.scm 105 */
							obj_t BgL_arg1870z00_2304;

							BgL_arg1870z00_2304 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_ez00_105)))->BgL_locz00);
							((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_2301))->BgL_locz00) =
								((obj_t) BgL_arg1870z00_2304), BUNSPEC);
						}
					}
				else
					{	/* SawMill/node2rtl.scm 103 */
						BFALSE;
					}
				{	/* SawMill/node2rtl.scm 106 */
					obj_t BgL_lz00_2305;

					BgL_lz00_2305 = MAKE_YOUNG_PAIR(((obj_t) BgL_insz00_2301), BNIL);
					{	/* SawMill/node2rtl.scm 107 */
						BgL_blockz00_bglt BgL_bz00_2306;

						{	/* SawMill/node2rtl.scm 107 */
							BgL_blockz00_bglt BgL_new1215z00_2310;

							{	/* SawMill/node2rtl.scm 107 */
								BgL_blockz00_bglt BgL_new1214z00_2311;

								BgL_new1214z00_2311 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/node2rtl.scm 107 */
									long BgL_arg1872z00_2312;

									{	/* SawMill/node2rtl.scm 107 */
										long BgL_res2700z00_3863;

										BgL_res2700z00_3863 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1872z00_2312 = BgL_res2700z00_3863;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1214z00_2311),
										BgL_arg1872z00_2312);
								}
								{	/* SawMill/node2rtl.scm 107 */
									BgL_objectz00_bglt BgL_tmpz00_5656;

									BgL_tmpz00_5656 = ((BgL_objectz00_bglt) BgL_new1214z00_2311);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5656, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1214z00_2311);
								BgL_new1215z00_2310 = BgL_new1214z00_2311;
							}
							((((BgL_blockz00_bglt) COBJECT(BgL_new1215z00_2310))->
									BgL_labelz00) = ((int) (int) (((long) 0))), BUNSPEC);
							((((BgL_blockz00_bglt) COBJECT(BgL_new1215z00_2310))->
									BgL_predsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_blockz00_bglt) COBJECT(BgL_new1215z00_2310))->
									BgL_succsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_blockz00_bglt) COBJECT(BgL_new1215z00_2310))->
									BgL_firstz00) = ((obj_t) BgL_lz00_2305), BUNSPEC);
							BgL_bz00_2306 = BgL_new1215z00_2310;
						}
						{	/* SawMill/node2rtl.scm 108 */
							BgL_areaz00_bglt BgL_new1217z00_2307;

							{	/* SawMill/node2rtl.scm 108 */
								BgL_areaz00_bglt BgL_new1216z00_2308;

								BgL_new1216z00_2308 =
									((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_areaz00_bgl))));
								{	/* SawMill/node2rtl.scm 108 */
									long BgL_arg1871z00_2309;

									{	/* SawMill/node2rtl.scm 108 */
										long BgL_res2701z00_3868;

										BgL_res2701z00_3868 =
											BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
										BgL_arg1871z00_2309 = BgL_res2701z00_3868;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1216z00_2308),
										BgL_arg1871z00_2309);
								}
								BgL_new1217z00_2307 = BgL_new1216z00_2308;
							}
							((((BgL_areaz00_bglt) COBJECT(BgL_new1217z00_2307))->
									BgL_entryz00) = ((BgL_blockz00_bglt) BgL_bz00_2306), BUNSPEC);
							((((BgL_areaz00_bglt) COBJECT(BgL_new1217z00_2307))->
									BgL_exitz00) = ((BgL_blockz00_bglt) BgL_bz00_2306), BUNSPEC);
							return BgL_new1217z00_2307;
						}
					}
				}
			}
		}

	}



/* unlink */
	BgL_areaz00_bglt BGl_unlinkz00zzsaw_node2rtlz00(BgL_areaz00_bglt BgL_az00_113)
	{
		{	/* SawMill/node2rtl.scm 116 */
			{	/* SawMill/node2rtl.scm 117 */
				BgL_areaz00_bglt BgL_new1219z00_2317;

				{	/* SawMill/node2rtl.scm 117 */
					BgL_areaz00_bglt BgL_new1218z00_2324;

					BgL_new1218z00_2324 =
						((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_areaz00_bgl))));
					{	/* SawMill/node2rtl.scm 117 */
						long BgL_arg1881z00_2325;

						{	/* SawMill/node2rtl.scm 117 */
							long BgL_res2702z00_3874;

							BgL_res2702z00_3874 =
								BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
							BgL_arg1881z00_2325 = BgL_res2702z00_3874;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1218z00_2324), BgL_arg1881z00_2325);
					}
					BgL_new1219z00_2317 = BgL_new1218z00_2324;
				}
				((((BgL_areaz00_bglt) COBJECT(BgL_new1219z00_2317))->BgL_entryz00) =
					((BgL_blockz00_bglt) (((BgL_areaz00_bglt) COBJECT(BgL_az00_113))->
							BgL_entryz00)), BUNSPEC);
				{
					BgL_blockz00_bglt BgL_auxz00_5677;

					{	/* SawMill/node2rtl.scm 119 */
						BgL_areaz00_bglt BgL_arg1876z00_2318;

						{	/* SawMill/node2rtl.scm 119 */
							BgL_rtl_nopz00_bglt BgL_arg1877z00_2319;

							{	/* SawMill/node2rtl.scm 119 */
								BgL_rtl_nopz00_bglt BgL_new1221z00_2321;

								{	/* SawMill/node2rtl.scm 119 */
									BgL_rtl_nopz00_bglt BgL_new1220z00_2322;

									BgL_new1220z00_2322 =
										((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_nopz00_bgl))));
									{	/* SawMill/node2rtl.scm 119 */
										long BgL_arg1879z00_2323;

										{	/* SawMill/node2rtl.scm 119 */
											long BgL_res2703z00_3879;

											{	/* SawMill/node2rtl.scm 119 */
												obj_t BgL_classz00_3878;

												BgL_classz00_3878 = BGl_rtl_nopz00zzsaw_defsz00;
												BgL_res2703z00_3879 =
													BGL_CLASS_INDEX(BgL_classz00_3878);
											}
											BgL_arg1879z00_2323 = BgL_res2703z00_3879;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1220z00_2322),
											BgL_arg1879z00_2323);
									}
									BgL_new1221z00_2321 = BgL_new1220z00_2322;
								}
								((((BgL_rtl_funz00_bglt) COBJECT(
												((BgL_rtl_funz00_bglt) BgL_new1221z00_2321)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								BgL_arg1877z00_2319 = BgL_new1221z00_2321;
							}
							{	/* SawMill/node2rtl.scm 119 */
								BgL_areaz00_bglt BgL_res2704z00_3883;

								BgL_res2704z00_3883 =
									BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
									((BgL_rtl_funz00_bglt) BgL_arg1877z00_2319), BNIL);
								BgL_arg1876z00_2318 = BgL_res2704z00_3883;
						}}
						BgL_auxz00_5677 =
							(((BgL_areaz00_bglt) COBJECT(BgL_arg1876z00_2318))->BgL_exitz00);
					}
					((((BgL_areaz00_bglt) COBJECT(BgL_new1219z00_2317))->BgL_exitz00) =
						((BgL_blockz00_bglt) BgL_auxz00_5677), BUNSPEC);
				}
				return BgL_new1219z00_2317;
			}
		}

	}



/* link */
	BgL_areaz00_bglt BGl_linkz00zzsaw_node2rtlz00(BgL_areaz00_bglt BgL_b1z00_114,
		BgL_areaz00_bglt BgL_b2z00_115)
	{
		{	/* SawMill/node2rtl.scm 121 */
			{	/* SawMill/node2rtl.scm 122 */
				BgL_blockz00_bglt BgL_arg1882z00_2326;
				BgL_blockz00_bglt BgL_arg1883z00_2327;

				BgL_arg1882z00_2326 =
					(((BgL_areaz00_bglt) COBJECT(BgL_b1z00_114))->BgL_exitz00);
				BgL_arg1883z00_2327 =
					(((BgL_areaz00_bglt) COBJECT(BgL_b2z00_115))->BgL_entryz00);
				{	/* SawMill/node2rtl.scm 90 */
					obj_t BgL_arg1848z00_3889;

					{	/* SawMill/node2rtl.scm 90 */
						obj_t BgL_arg1850z00_3890;

						BgL_arg1850z00_3890 =
							(((BgL_blockz00_bglt) COBJECT(BgL_arg1882z00_2326))->
							BgL_succsz00);
						BgL_arg1848z00_3889 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg1883z00_2327),
							BgL_arg1850z00_3890);
					}
					((((BgL_blockz00_bglt) COBJECT(BgL_arg1882z00_2326))->BgL_succsz00) =
						((obj_t) BgL_arg1848z00_3889), BUNSPEC);
				}
			}
			{	/* SawMill/node2rtl.scm 123 */
				BgL_areaz00_bglt BgL_new1223z00_2328;

				{	/* SawMill/node2rtl.scm 123 */
					BgL_areaz00_bglt BgL_new1222z00_2329;

					BgL_new1222z00_2329 =
						((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_areaz00_bgl))));
					{	/* SawMill/node2rtl.scm 123 */
						long BgL_arg1884z00_2330;

						{	/* SawMill/node2rtl.scm 123 */
							long BgL_res2705z00_3895;

							BgL_res2705z00_3895 =
								BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
							BgL_arg1884z00_2330 = BgL_res2705z00_3895;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1222z00_2329), BgL_arg1884z00_2330);
					}
					BgL_new1223z00_2328 = BgL_new1222z00_2329;
				}
				((((BgL_areaz00_bglt) COBJECT(BgL_new1223z00_2328))->BgL_entryz00) =
					((BgL_blockz00_bglt) (((BgL_areaz00_bglt) COBJECT(BgL_b1z00_114))->
							BgL_entryz00)), BUNSPEC);
				((((BgL_areaz00_bglt) COBJECT(BgL_new1223z00_2328))->BgL_exitz00) =
					((BgL_blockz00_bglt) (((BgL_areaz00_bglt) COBJECT(BgL_b2z00_115))->
							BgL_exitz00)), BUNSPEC);
				return BgL_new1223z00_2328;
			}
		}

	}



/* link* */
	BgL_areaz00_bglt BGl_linkza2za2zzsaw_node2rtlz00(obj_t BgL_lz00_116)
	{
		{	/* SawMill/node2rtl.scm 125 */
			{
				BgL_areaz00_bglt BgL_rz00_2340;
				obj_t BgL_lz00_2341;

				if (NULLP(BgL_lz00_116))
					{	/* SawMill/node2rtl.scm 131 */
						BgL_rtl_nopz00_bglt BgL_arg1886z00_2333;

						{	/* SawMill/node2rtl.scm 131 */
							BgL_rtl_nopz00_bglt BgL_new1225z00_2335;

							{	/* SawMill/node2rtl.scm 131 */
								BgL_rtl_nopz00_bglt BgL_new1224z00_2336;

								BgL_new1224z00_2336 =
									((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_nopz00_bgl))));
								{	/* SawMill/node2rtl.scm 131 */
									long BgL_arg1888z00_2337;

									{	/* SawMill/node2rtl.scm 131 */
										long BgL_res2708z00_3905;

										BgL_res2708z00_3905 =
											BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
										BgL_arg1888z00_2337 = BgL_res2708z00_3905;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1224z00_2336),
										BgL_arg1888z00_2337);
								}
								BgL_new1225z00_2335 = BgL_new1224z00_2336;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1225z00_2335)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg1886z00_2333 = BgL_new1225z00_2335;
						}
						{	/* SawMill/node2rtl.scm 131 */
							BgL_areaz00_bglt BgL_res2709z00_3909;

							BgL_res2709z00_3909 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								((BgL_rtl_funz00_bglt) BgL_arg1886z00_2333), BNIL);
							return BgL_res2709z00_3909;
						}
					}
				else
					{	/* SawMill/node2rtl.scm 132 */
						obj_t BgL_arg1889z00_2338;
						obj_t BgL_arg1891z00_2339;

						BgL_arg1889z00_2338 = CAR(((obj_t) BgL_lz00_116));
						BgL_arg1891z00_2339 = CDR(((obj_t) BgL_lz00_116));
						BgL_rz00_2340 = ((BgL_areaz00_bglt) BgL_arg1889z00_2338);
						BgL_lz00_2341 = BgL_arg1891z00_2339;
					BgL_zc3z04anonymousza31892ze3z87_2342:
						if (NULLP(BgL_lz00_2341))
							{	/* SawMill/node2rtl.scm 127 */
								return BgL_rz00_2340;
							}
						else
							{	/* SawMill/node2rtl.scm 129 */
								BgL_areaz00_bglt BgL_arg1895z00_2344;
								obj_t BgL_arg1896z00_2345;

								{	/* SawMill/node2rtl.scm 129 */
									obj_t BgL_arg1897z00_2346;

									BgL_arg1897z00_2346 = CAR(((obj_t) BgL_lz00_2341));
									BgL_arg1895z00_2344 =
										BGl_linkz00zzsaw_node2rtlz00(BgL_rz00_2340,
										((BgL_areaz00_bglt) BgL_arg1897z00_2346));
								}
								BgL_arg1896z00_2345 = CDR(((obj_t) BgL_lz00_2341));
								{
									obj_t BgL_lz00_5725;
									BgL_areaz00_bglt BgL_rz00_5724;

									BgL_rz00_5724 = BgL_arg1895z00_2344;
									BgL_lz00_5725 = BgL_arg1896z00_2345;
									BgL_lz00_2341 = BgL_lz00_5725;
									BgL_rz00_2340 = BgL_rz00_5724;
									goto BgL_zc3z04anonymousza31892ze3z87_2342;
								}
							}
					}
			}
		}

	}



/* fork/join */
	BgL_areaz00_bglt BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_areaz00_bglt
		BgL_headz00_117, obj_t BgL_contsz00_118, BgL_rtl_regz00_bglt BgL_rz00_119)
	{
		{	/* SawMill/node2rtl.scm 134 */
			{	/* SawMill/node2rtl.scm 136 */
				BgL_blockz00_bglt BgL_arg1898z00_2348;
				obj_t BgL_arg1901z00_2349;

				BgL_arg1898z00_2348 =
					(((BgL_areaz00_bglt) COBJECT(BgL_headz00_117))->BgL_exitz00);
				if (NULLP(BgL_contsz00_118))
					{	/* SawMill/node2rtl.scm 136 */
						BgL_arg1901z00_2349 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 136 */
						obj_t BgL_head1578z00_2352;

						{	/* SawMill/node2rtl.scm 136 */
							BgL_blockz00_bglt BgL_arg1908z00_2364;

							BgL_arg1908z00_2364 =
								(((BgL_areaz00_bglt) COBJECT(
										((BgL_areaz00_bglt)
											CAR(((obj_t) BgL_contsz00_118)))))->BgL_entryz00);
							{	/* SawMill/node2rtl.scm 136 */
								obj_t BgL_res2711z00_3916;

								BgL_res2711z00_3916 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1908z00_2364), BNIL);
								BgL_head1578z00_2352 = BgL_res2711z00_3916;
							}
						}
						{	/* SawMill/node2rtl.scm 136 */
							obj_t BgL_g1581z00_2353;

							BgL_g1581z00_2353 = CDR(((obj_t) BgL_contsz00_118));
							{
								obj_t BgL_l1576z00_2355;
								obj_t BgL_tail1579z00_2356;

								BgL_l1576z00_2355 = BgL_g1581z00_2353;
								BgL_tail1579z00_2356 = BgL_head1578z00_2352;
							BgL_zc3z04anonymousza31903ze3z87_2357:
								if (NULLP(BgL_l1576z00_2355))
									{	/* SawMill/node2rtl.scm 136 */
										BgL_arg1901z00_2349 = BgL_head1578z00_2352;
									}
								else
									{	/* SawMill/node2rtl.scm 136 */
										obj_t BgL_newtail1580z00_2359;

										{	/* SawMill/node2rtl.scm 136 */
											BgL_blockz00_bglt BgL_arg1906z00_2361;

											BgL_arg1906z00_2361 =
												(((BgL_areaz00_bglt) COBJECT(
														((BgL_areaz00_bglt)
															CAR(
																((obj_t) BgL_l1576z00_2355)))))->BgL_entryz00);
											{	/* SawMill/node2rtl.scm 136 */
												obj_t BgL_res2713z00_3921;

												BgL_res2713z00_3921 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1906z00_2361), BNIL);
												BgL_newtail1580z00_2359 = BgL_res2713z00_3921;
											}
										}
										SET_CDR(BgL_tail1579z00_2356, BgL_newtail1580z00_2359);
										{	/* SawMill/node2rtl.scm 136 */
											obj_t BgL_arg1905z00_2360;

											BgL_arg1905z00_2360 = CDR(((obj_t) BgL_l1576z00_2355));
											{
												obj_t BgL_tail1579z00_5750;
												obj_t BgL_l1576z00_5749;

												BgL_l1576z00_5749 = BgL_arg1905z00_2360;
												BgL_tail1579z00_5750 = BgL_newtail1580z00_2359;
												BgL_tail1579z00_2356 = BgL_tail1579z00_5750;
												BgL_l1576z00_2355 = BgL_l1576z00_5749;
												goto BgL_zc3z04anonymousza31903ze3z87_2357;
											}
										}
									}
							}
						}
					}
				((((BgL_blockz00_bglt) COBJECT(BgL_arg1898z00_2348))->BgL_succsz00) =
					((obj_t) BgL_arg1901z00_2349), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 138 */
				BgL_blockz00_bglt BgL_joinz00_2366;

				{	/* SawMill/node2rtl.scm 138 */
					BgL_areaz00_bglt BgL_arg1914z00_2378;

					{	/* SawMill/node2rtl.scm 138 */
						BgL_rtl_movz00_bglt BgL_arg1915z00_2379;

						{	/* SawMill/node2rtl.scm 138 */
							BgL_rtl_movz00_bglt BgL_new1227z00_2381;

							{	/* SawMill/node2rtl.scm 138 */
								BgL_rtl_movz00_bglt BgL_new1226z00_2382;

								BgL_new1226z00_2382 =
									((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_movz00_bgl))));
								{	/* SawMill/node2rtl.scm 138 */
									long BgL_arg1917z00_2383;

									{	/* SawMill/node2rtl.scm 138 */
										long BgL_res2714z00_3927;

										BgL_res2714z00_3927 =
											BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
										BgL_arg1917z00_2383 = BgL_res2714z00_3927;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1226z00_2382),
										BgL_arg1917z00_2383);
								}
								BgL_new1227z00_2381 = BgL_new1226z00_2382;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1227z00_2381)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg1915z00_2379 = BgL_new1227z00_2381;
						}
						{	/* SawMill/node2rtl.scm 138 */
							obj_t BgL_list1916z00_2380;

							BgL_list1916z00_2380 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_rz00_119), BNIL);
							{	/* SawMill/node2rtl.scm 138 */
								BgL_areaz00_bglt BgL_res2715z00_3931;

								BgL_res2715z00_3931 =
									BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
									((BgL_rtl_funz00_bglt) BgL_arg1915z00_2379),
									BgL_list1916z00_2380);
								BgL_arg1914z00_2378 = BgL_res2715z00_3931;
					}}}
					BgL_joinz00_2366 =
						(((BgL_areaz00_bglt) COBJECT(BgL_arg1914z00_2378))->BgL_entryz00);
				}
				{
					obj_t BgL_l1582z00_2368;

					BgL_l1582z00_2368 = BgL_contsz00_118;
				BgL_zc3z04anonymousza31910ze3z87_2369:
					if (PAIRP(BgL_l1582z00_2368))
						{	/* SawMill/node2rtl.scm 139 */
							{	/* SawMill/node2rtl.scm 140 */
								BgL_areaz00_bglt BgL_az00_2371;

								BgL_az00_2371 = ((BgL_areaz00_bglt) CAR(BgL_l1582z00_2368));
								{	/* SawMill/node2rtl.scm 140 */
									BgL_blockz00_bglt BgL_bz00_2372;

									BgL_bz00_2372 =
										(((BgL_areaz00_bglt) COBJECT(BgL_az00_2371))->BgL_exitz00);
									{	/* SawMill/node2rtl.scm 90 */
										obj_t BgL_arg1848z00_3938;

										{	/* SawMill/node2rtl.scm 90 */
											obj_t BgL_arg1850z00_3939;

											BgL_arg1850z00_3939 =
												(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2372))->
												BgL_succsz00);
											BgL_arg1848z00_3938 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_joinz00_2366),
												BgL_arg1850z00_3939);
										}
										((((BgL_blockz00_bglt) COBJECT(BgL_bz00_2372))->
												BgL_succsz00) = ((obj_t) BgL_arg1848z00_3938), BUNSPEC);
									}
									BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_bz00_2372,
										BgL_rz00_119);
								}
							}
							{
								obj_t BgL_l1582z00_5773;

								BgL_l1582z00_5773 = CDR(BgL_l1582z00_2368);
								BgL_l1582z00_2368 = BgL_l1582z00_5773;
								goto BgL_zc3z04anonymousza31910ze3z87_2369;
							}
						}
					else
						{	/* SawMill/node2rtl.scm 139 */
							((bool_t) 1);
						}
				}
				{	/* SawMill/node2rtl.scm 145 */
					BgL_areaz00_bglt BgL_new1229z00_2375;

					{	/* SawMill/node2rtl.scm 145 */
						BgL_areaz00_bglt BgL_new1228z00_2376;

						BgL_new1228z00_2376 =
							((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_areaz00_bgl))));
						{	/* SawMill/node2rtl.scm 145 */
							long BgL_arg1913z00_2377;

							{	/* SawMill/node2rtl.scm 145 */
								long BgL_res2717z00_3945;

								BgL_res2717z00_3945 =
									BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
								BgL_arg1913z00_2377 = BgL_res2717z00_3945;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1228z00_2376),
								BgL_arg1913z00_2377);
						}
						BgL_new1229z00_2375 = BgL_new1228z00_2376;
					}
					((((BgL_areaz00_bglt) COBJECT(BgL_new1229z00_2375))->BgL_entryz00) =
						((BgL_blockz00_bglt) (((BgL_areaz00_bglt)
									COBJECT(BgL_headz00_117))->BgL_entryz00)), BUNSPEC);
					((((BgL_areaz00_bglt) COBJECT(BgL_new1229z00_2375))->BgL_exitz00) =
						((BgL_blockz00_bglt) BgL_joinz00_2366), BUNSPEC);
					return BgL_new1229z00_2375;
				}
			}
		}

	}



/* join */
	obj_t BGl_joinz00zzsaw_node2rtlz00(obj_t BgL_contsz00_120,
		BgL_rtl_regz00_bglt BgL_xrz00_121)
	{
		{	/* SawMill/node2rtl.scm 147 */
			{	/* SawMill/node2rtl.scm 148 */
				obj_t BgL_rz00_2384;

				BgL_rz00_2384 =
					BGl_findzd2registerzd2zzsaw_node2rtlz00(BgL_contsz00_120,
					BgL_xrz00_121);
				{	/* SawMill/node2rtl.scm 150 */
					BgL_blockz00_bglt BgL_joinz00_2385;

					{	/* SawMill/node2rtl.scm 150 */
						BgL_areaz00_bglt BgL_arg1927z00_2410;

						{	/* SawMill/node2rtl.scm 150 */
							BgL_rtl_movz00_bglt BgL_arg1928z00_2411;

							{	/* SawMill/node2rtl.scm 150 */
								BgL_rtl_movz00_bglt BgL_new1231z00_2413;

								{	/* SawMill/node2rtl.scm 150 */
									BgL_rtl_movz00_bglt BgL_new1230z00_2414;

									BgL_new1230z00_2414 =
										((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_movz00_bgl))));
									{	/* SawMill/node2rtl.scm 150 */
										long BgL_arg1930z00_2415;

										{	/* SawMill/node2rtl.scm 150 */
											long BgL_res2718z00_3950;

											BgL_res2718z00_3950 =
												BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
											BgL_arg1930z00_2415 = BgL_res2718z00_3950;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1230z00_2414),
											BgL_arg1930z00_2415);
									}
									BgL_new1231z00_2413 = BgL_new1230z00_2414;
								}
								((((BgL_rtl_funz00_bglt) COBJECT(
												((BgL_rtl_funz00_bglt) BgL_new1231z00_2413)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								BgL_arg1928z00_2411 = BgL_new1231z00_2413;
							}
							{	/* SawMill/node2rtl.scm 150 */
								obj_t BgL_list1929z00_2412;

								BgL_list1929z00_2412 = MAKE_YOUNG_PAIR(BgL_rz00_2384, BNIL);
								{	/* SawMill/node2rtl.scm 150 */
									BgL_areaz00_bglt BgL_res2719z00_3954;

									BgL_res2719z00_3954 =
										BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
										((BgL_rtl_funz00_bglt) BgL_arg1928z00_2411),
										BgL_list1929z00_2412);
									BgL_arg1927z00_2410 = BgL_res2719z00_3954;
						}}}
						BgL_joinz00_2385 =
							(((BgL_areaz00_bglt) COBJECT(BgL_arg1927z00_2410))->BgL_entryz00);
					}
					{
						obj_t BgL_l1584z00_2387;

						BgL_l1584z00_2387 = BgL_contsz00_120;
					BgL_zc3z04anonymousza31918ze3z87_2388:
						if (PAIRP(BgL_l1584z00_2387))
							{	/* SawMill/node2rtl.scm 151 */
								{	/* SawMill/node2rtl.scm 152 */
									BgL_areaz00_bglt BgL_az00_2390;

									BgL_az00_2390 = ((BgL_areaz00_bglt) CAR(BgL_l1584z00_2387));
									{	/* SawMill/node2rtl.scm 152 */
										BgL_blockz00_bglt BgL_bz00_2391;

										BgL_bz00_2391 =
											(((BgL_areaz00_bglt) COBJECT(BgL_az00_2390))->
											BgL_exitz00);
										{	/* SawMill/node2rtl.scm 90 */
											obj_t BgL_arg1848z00_3961;

											{	/* SawMill/node2rtl.scm 90 */
												obj_t BgL_arg1850z00_3962;

												BgL_arg1850z00_3962 =
													(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2391))->
													BgL_succsz00);
												BgL_arg1848z00_3961 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_joinz00_2385),
													BgL_arg1850z00_3962);
											}
											((((BgL_blockz00_bglt) COBJECT(BgL_bz00_2391))->
													BgL_succsz00) =
												((obj_t) BgL_arg1848z00_3961), BUNSPEC);
										}
										BGl_bdestinationz12z12zzsaw_node2rtlz00(BgL_bz00_2391,
											((BgL_rtl_regz00_bglt) BgL_rz00_2384));
									}
								}
								{
									obj_t BgL_l1584z00_5804;

									BgL_l1584z00_5804 = CDR(BgL_l1584z00_2387);
									BgL_l1584z00_2387 = BgL_l1584z00_5804;
									goto BgL_zc3z04anonymousza31918ze3z87_2388;
								}
							}
						else
							{	/* SawMill/node2rtl.scm 151 */
								((bool_t) 1);
							}
					}
					if (NULLP(BgL_contsz00_120))
						{	/* SawMill/node2rtl.scm 157 */
							return BNIL;
						}
					else
						{	/* SawMill/node2rtl.scm 157 */
							obj_t BgL_head1588z00_2396;

							{	/* SawMill/node2rtl.scm 157 */
								obj_t BgL_res2722z00_3968;

								BgL_res2722z00_3968 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1588z00_2396 = BgL_res2722z00_3968;
							}
							{
								obj_t BgL_l1586z00_2398;
								obj_t BgL_tail1589z00_2399;

								BgL_l1586z00_2398 = BgL_contsz00_120;
								BgL_tail1589z00_2399 = BgL_head1588z00_2396;
							BgL_zc3z04anonymousza31922ze3z87_2400:
								if (NULLP(BgL_l1586z00_2398))
									{	/* SawMill/node2rtl.scm 157 */
										return CDR(BgL_head1588z00_2396);
									}
								else
									{	/* SawMill/node2rtl.scm 157 */
										obj_t BgL_newtail1590z00_2402;

										{	/* SawMill/node2rtl.scm 157 */
											BgL_areaz00_bglt BgL_arg1925z00_2404;

											{	/* SawMill/node2rtl.scm 157 */
												BgL_areaz00_bglt BgL_az00_2405;

												BgL_az00_2405 =
													((BgL_areaz00_bglt) CAR(((obj_t) BgL_l1586z00_2398)));
												{	/* SawMill/node2rtl.scm 158 */
													BgL_areaz00_bglt BgL_new1233z00_2406;

													{	/* SawMill/node2rtl.scm 158 */
														BgL_areaz00_bglt BgL_new1232z00_2407;

														BgL_new1232z00_2407 =
															((BgL_areaz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_areaz00_bgl))));
														{	/* SawMill/node2rtl.scm 158 */
															long BgL_arg1926z00_2408;

															{	/* SawMill/node2rtl.scm 158 */
																long BgL_res2724z00_3973;

																BgL_res2724z00_3973 =
																	BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
																BgL_arg1926z00_2408 = BgL_res2724z00_3973;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1232z00_2407),
																BgL_arg1926z00_2408);
														}
														BgL_new1233z00_2406 = BgL_new1232z00_2407;
													}
													((((BgL_areaz00_bglt) COBJECT(BgL_new1233z00_2406))->
															BgL_entryz00) =
														((BgL_blockz00_bglt) (((BgL_areaz00_bglt)
																	COBJECT(BgL_az00_2405))->BgL_entryz00)),
														BUNSPEC);
													((((BgL_areaz00_bglt) COBJECT(BgL_new1233z00_2406))->
															BgL_exitz00) =
														((BgL_blockz00_bglt) BgL_joinz00_2385), BUNSPEC);
													BgL_arg1925z00_2404 = BgL_new1233z00_2406;
											}}
											{	/* SawMill/node2rtl.scm 157 */
												obj_t BgL_res2725z00_3977;

												BgL_res2725z00_3977 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1925z00_2404), BNIL);
												BgL_newtail1590z00_2402 = BgL_res2725z00_3977;
										}}
										SET_CDR(BgL_tail1589z00_2399, BgL_newtail1590z00_2402);
										{	/* SawMill/node2rtl.scm 157 */
											obj_t BgL_arg1924z00_2403;

											BgL_arg1924z00_2403 = CDR(((obj_t) BgL_l1586z00_2398));
											{
												obj_t BgL_tail1589z00_5828;
												obj_t BgL_l1586z00_5827;

												BgL_l1586z00_5827 = BgL_arg1924z00_2403;
												BgL_tail1589z00_5828 = BgL_newtail1590z00_2402;
												BgL_tail1589z00_2399 = BgL_tail1589z00_5828;
												BgL_l1586z00_2398 = BgL_l1586z00_5827;
												goto BgL_zc3z04anonymousza31922ze3z87_2400;
											}
										}
									}
							}
						}
				}
			}
		}

	}



/* fork */
	BgL_areaz00_bglt BGl_forkz00zzsaw_node2rtlz00(BgL_areaz00_bglt
		BgL_headz00_122, obj_t BgL_joinedz00_123)
	{
		{	/* SawMill/node2rtl.scm 161 */
			{	/* SawMill/node2rtl.scm 163 */
				BgL_blockz00_bglt BgL_arg1931z00_2416;
				obj_t BgL_arg1932z00_2417;

				BgL_arg1931z00_2416 =
					(((BgL_areaz00_bglt) COBJECT(BgL_headz00_122))->BgL_exitz00);
				if (NULLP(BgL_joinedz00_123))
					{	/* SawMill/node2rtl.scm 163 */
						BgL_arg1932z00_2417 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 163 */
						obj_t BgL_head1593z00_2420;

						{	/* SawMill/node2rtl.scm 163 */
							BgL_blockz00_bglt BgL_arg1939z00_2432;

							BgL_arg1939z00_2432 =
								(((BgL_areaz00_bglt) COBJECT(
										((BgL_areaz00_bglt)
											CAR(((obj_t) BgL_joinedz00_123)))))->BgL_entryz00);
							{	/* SawMill/node2rtl.scm 163 */
								obj_t BgL_res2727z00_3984;

								BgL_res2727z00_3984 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1939z00_2432), BNIL);
								BgL_head1593z00_2420 = BgL_res2727z00_3984;
							}
						}
						{	/* SawMill/node2rtl.scm 163 */
							obj_t BgL_g1596z00_2421;

							BgL_g1596z00_2421 = CDR(((obj_t) BgL_joinedz00_123));
							{
								obj_t BgL_l1591z00_2423;
								obj_t BgL_tail1594z00_2424;

								BgL_l1591z00_2423 = BgL_g1596z00_2421;
								BgL_tail1594z00_2424 = BgL_head1593z00_2420;
							BgL_zc3z04anonymousza31934ze3z87_2425:
								if (NULLP(BgL_l1591z00_2423))
									{	/* SawMill/node2rtl.scm 163 */
										BgL_arg1932z00_2417 = BgL_head1593z00_2420;
									}
								else
									{	/* SawMill/node2rtl.scm 163 */
										obj_t BgL_newtail1595z00_2427;

										{	/* SawMill/node2rtl.scm 163 */
											BgL_blockz00_bglt BgL_arg1937z00_2429;

											BgL_arg1937z00_2429 =
												(((BgL_areaz00_bglt) COBJECT(
														((BgL_areaz00_bglt)
															CAR(
																((obj_t) BgL_l1591z00_2423)))))->BgL_entryz00);
											{	/* SawMill/node2rtl.scm 163 */
												obj_t BgL_res2729z00_3989;

												BgL_res2729z00_3989 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1937z00_2429), BNIL);
												BgL_newtail1595z00_2427 = BgL_res2729z00_3989;
											}
										}
										SET_CDR(BgL_tail1594z00_2424, BgL_newtail1595z00_2427);
										{	/* SawMill/node2rtl.scm 163 */
											obj_t BgL_arg1936z00_2428;

											BgL_arg1936z00_2428 = CDR(((obj_t) BgL_l1591z00_2423));
											{
												obj_t BgL_tail1594z00_5852;
												obj_t BgL_l1591z00_5851;

												BgL_l1591z00_5851 = BgL_arg1936z00_2428;
												BgL_tail1594z00_5852 = BgL_newtail1595z00_2427;
												BgL_tail1594z00_2424 = BgL_tail1594z00_5852;
												BgL_l1591z00_2423 = BgL_l1591z00_5851;
												goto BgL_zc3z04anonymousza31934ze3z87_2425;
											}
										}
									}
							}
						}
					}
				((((BgL_blockz00_bglt) COBJECT(BgL_arg1931z00_2416))->BgL_succsz00) =
					((obj_t) BgL_arg1932z00_2417), BUNSPEC);
			}
			{	/* SawMill/node2rtl.scm 165 */
				BgL_areaz00_bglt BgL_new1235z00_2434;

				{	/* SawMill/node2rtl.scm 165 */
					BgL_areaz00_bglt BgL_new1234z00_2436;

					BgL_new1234z00_2436 =
						((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_areaz00_bgl))));
					{	/* SawMill/node2rtl.scm 165 */
						long BgL_arg1942z00_2437;

						{	/* SawMill/node2rtl.scm 165 */
							long BgL_res2730z00_3995;

							BgL_res2730z00_3995 =
								BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
							BgL_arg1942z00_2437 = BgL_res2730z00_3995;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1234z00_2436), BgL_arg1942z00_2437);
					}
					BgL_new1235z00_2434 = BgL_new1234z00_2436;
				}
				((((BgL_areaz00_bglt) COBJECT(BgL_new1235z00_2434))->BgL_entryz00) =
					((BgL_blockz00_bglt) (((BgL_areaz00_bglt) COBJECT(BgL_headz00_122))->
							BgL_entryz00)), BUNSPEC);
				((((BgL_areaz00_bglt) COBJECT(BgL_new1235z00_2434))->BgL_exitz00) =
					((BgL_blockz00_bglt) (((BgL_areaz00_bglt) COBJECT(((BgL_areaz00_bglt)
										CAR(((obj_t) BgL_joinedz00_123)))))->BgL_exitz00)),
					BUNSPEC);
				return BgL_new1235z00_2434;
			}
		}

	}



/* find-register */
	obj_t BGl_findzd2registerzd2zzsaw_node2rtlz00(obj_t BgL_areasz00_124,
		BgL_rtl_regz00_bglt BgL_regz00_125)
	{
		{	/* SawMill/node2rtl.scm 168 */
			{
				obj_t BgL_az00_2447;

				{
					obj_t BgL_lz00_2440;

					BgL_lz00_2440 = BgL_areasz00_124;
				BgL_zc3z04anonymousza31943ze3z87_2441:
					if (NULLP(BgL_lz00_2440))
						{	/* SawMill/node2rtl.scm 178 */
							return ((obj_t) BgL_regz00_125);
						}
					else
						{	/* SawMill/node2rtl.scm 180 */
							obj_t BgL__ortest_1237z00_2443;

							{	/* SawMill/node2rtl.scm 180 */
								obj_t BgL_arg1946z00_2445;

								BgL_arg1946z00_2445 = CAR(((obj_t) BgL_lz00_2440));
								BgL_az00_2447 = BgL_arg1946z00_2445;
								{	/* SawMill/node2rtl.scm 170 */
									obj_t BgL_insz00_2449;

									BgL_insz00_2449 =
										CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
											(((BgL_blockz00_bglt) COBJECT(
														(((BgL_areaz00_bglt) COBJECT(
																	((BgL_areaz00_bglt) BgL_az00_2447)))->
															BgL_exitz00)))->BgL_firstz00)));
									{	/* SawMill/node2rtl.scm 171 */
										bool_t BgL_test3065z00_5875;

										{	/* SawMill/node2rtl.scm 171 */
											BgL_rtl_funz00_bglt BgL_arg1959z00_2464;

											BgL_arg1959z00_2464 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_2449)))->
												BgL_funz00);
											{	/* SawMill/node2rtl.scm 171 */
												bool_t BgL_res2731z00_4005;

												BgL_res2731z00_4005 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_arg1959z00_2464),
													BGl_rtl_movz00zzsaw_defsz00);
												BgL_test3065z00_5875 = BgL_res2731z00_4005;
											}
										}
										if (BgL_test3065z00_5875)
											{	/* SawMill/node2rtl.scm 172 */
												obj_t BgL_rz00_2451;

												{	/* SawMill/node2rtl.scm 172 */
													obj_t BgL_pairz00_4007;

													BgL_pairz00_4007 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_insz00_2449)))->
														BgL_argsz00);
													BgL_rz00_2451 = CAR(BgL_pairz00_4007);
												}
												{	/* SawMill/node2rtl.scm 173 */
													bool_t BgL_test3066z00_5883;

													if (CBOOL(
															(((BgL_rtl_regz00_bglt) COBJECT(
																		((BgL_rtl_regz00_bglt) BgL_rz00_2451)))->
																BgL_varz00)))
														{	/* SawMill/node2rtl.scm 173 */
															BgL_test3066z00_5883 = ((bool_t) 1);
														}
													else
														{	/* SawMill/node2rtl.scm 173 */
															if (
																(((obj_t)
																		(((BgL_rtl_regz00_bglt) COBJECT(
																					((BgL_rtl_regz00_bglt)
																						BgL_rz00_2451)))->BgL_typez00)) ==
																	((obj_t) (((BgL_rtl_regz00_bglt)
																				COBJECT(BgL_regz00_125))->
																			BgL_typez00))))
																{	/* SawMill/node2rtl.scm 174 */
																	BgL_test3066z00_5883 = ((bool_t) 0);
																}
															else
																{	/* SawMill/node2rtl.scm 174 */
																	BgL_test3066z00_5883 = ((bool_t) 1);
																}
														}
													if (BgL_test3066z00_5883)
														{	/* SawMill/node2rtl.scm 173 */
															BgL__ortest_1237z00_2443 = BFALSE;
														}
													else
														{	/* SawMill/node2rtl.scm 173 */
															BgL__ortest_1237z00_2443 = BgL_rz00_2451;
														}
												}
											}
										else
											{	/* SawMill/node2rtl.scm 171 */
												BgL__ortest_1237z00_2443 = BFALSE;
											}
									}
								}
							}
							if (CBOOL(BgL__ortest_1237z00_2443))
								{	/* SawMill/node2rtl.scm 180 */
									return BgL__ortest_1237z00_2443;
								}
							else
								{	/* SawMill/node2rtl.scm 181 */
									obj_t BgL_arg1945z00_2444;

									BgL_arg1945z00_2444 = CDR(((obj_t) BgL_lz00_2440));
									{
										obj_t BgL_lz00_5899;

										BgL_lz00_5899 = BgL_arg1945z00_2444;
										BgL_lz00_2440 = BgL_lz00_5899;
										goto BgL_zc3z04anonymousza31943ze3z87_2441;
									}
								}
						}
				}
			}
		}

	}



/* call* */
	BgL_areaz00_bglt BGl_callza2za2zzsaw_node2rtlz00(obj_t BgL_ez00_128,
		BgL_rtl_funz00_bglt BgL_funz00_129, obj_t BgL_exprsz00_130)
	{
		{	/* SawMill/node2rtl.scm 188 */
			{	/* SawMill/node2rtl.scm 189 */
				obj_t BgL_regsz00_2470;

				if (NULLP(BgL_exprsz00_130))
					{	/* SawMill/node2rtl.scm 189 */
						BgL_regsz00_2470 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 189 */
						obj_t BgL_head1599z00_2493;

						{	/* SawMill/node2rtl.scm 189 */
							obj_t BgL_res2734z00_4020;

							BgL_res2734z00_4020 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1599z00_2493 = BgL_res2734z00_4020;
						}
						{
							obj_t BgL_l1597z00_2495;
							obj_t BgL_tail1600z00_2496;

							BgL_l1597z00_2495 = BgL_exprsz00_130;
							BgL_tail1600z00_2496 = BgL_head1599z00_2493;
						BgL_zc3z04anonymousza31973ze3z87_2497:
							if (NULLP(BgL_l1597z00_2495))
								{	/* SawMill/node2rtl.scm 189 */
									BgL_regsz00_2470 = CDR(BgL_head1599z00_2493);
								}
							else
								{	/* SawMill/node2rtl.scm 189 */
									obj_t BgL_newtail1601z00_2499;

									{	/* SawMill/node2rtl.scm 189 */
										BgL_rtl_regz00_bglt BgL_arg1976z00_2501;

										{	/* SawMill/node2rtl.scm 189 */
											obj_t BgL_ez00_2502;

											BgL_ez00_2502 = CAR(((obj_t) BgL_l1597z00_2495));
											BgL_arg1976z00_2501 =
												BGl_newzd2regzd2zzsaw_node2rtlz00(
												((BgL_nodez00_bglt) BgL_ez00_2502));
										}
										{	/* SawMill/node2rtl.scm 189 */
											obj_t BgL_res2736z00_4024;

											BgL_res2736z00_4024 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1976z00_2501), BNIL);
											BgL_newtail1601z00_2499 = BgL_res2736z00_4024;
										}
									}
									SET_CDR(BgL_tail1600z00_2496, BgL_newtail1601z00_2499);
									{	/* SawMill/node2rtl.scm 189 */
										obj_t BgL_arg1975z00_2500;

										BgL_arg1975z00_2500 = CDR(((obj_t) BgL_l1597z00_2495));
										{
											obj_t BgL_tail1600z00_5916;
											obj_t BgL_l1597z00_5915;

											BgL_l1597z00_5915 = BgL_arg1975z00_2500;
											BgL_tail1600z00_5916 = BgL_newtail1601z00_2499;
											BgL_tail1600z00_2496 = BgL_tail1600z00_5916;
											BgL_l1597z00_2495 = BgL_l1597z00_5915;
											goto BgL_zc3z04anonymousza31973ze3z87_2497;
										}
									}
								}
						}
					}
				{	/* SawMill/node2rtl.scm 190 */
					BgL_areaz00_bglt BgL_arg1963z00_2471;
					BgL_areaz00_bglt BgL_arg1964z00_2472;

					{	/* SawMill/node2rtl.scm 190 */
						obj_t BgL_arg1965z00_2473;

						if (NULLP(BgL_exprsz00_130))
							{	/* SawMill/node2rtl.scm 190 */
								BgL_arg1965z00_2473 = BNIL;
							}
						else
							{	/* SawMill/node2rtl.scm 190 */
								obj_t BgL_head1604z00_2477;

								{	/* SawMill/node2rtl.scm 190 */
									obj_t BgL_res2738z00_4028;

									BgL_res2738z00_4028 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1604z00_2477 = BgL_res2738z00_4028;
								}
								{
									obj_t BgL_ll1602z00_2479;
									obj_t BgL_ll1603z00_2480;
									obj_t BgL_tail1605z00_2481;

									BgL_ll1602z00_2479 = BgL_exprsz00_130;
									BgL_ll1603z00_2480 = BgL_regsz00_2470;
									BgL_tail1605z00_2481 = BgL_head1604z00_2477;
								BgL_zc3z04anonymousza31967ze3z87_2482:
									if (NULLP(BgL_ll1602z00_2479))
										{	/* SawMill/node2rtl.scm 190 */
											BgL_arg1965z00_2473 = CDR(BgL_head1604z00_2477);
										}
									else
										{	/* SawMill/node2rtl.scm 190 */
											obj_t BgL_newtail1606z00_2484;

											{	/* SawMill/node2rtl.scm 190 */
												BgL_areaz00_bglt BgL_arg1971z00_2487;

												{	/* SawMill/node2rtl.scm 190 */
													obj_t BgL_az00_2488;
													obj_t BgL_rz00_2489;

													BgL_az00_2488 = CAR(((obj_t) BgL_ll1602z00_2479));
													BgL_rz00_2489 = CAR(((obj_t) BgL_ll1603z00_2480));
													{	/* SawMill/node2rtl.scm 190 */
														BgL_areaz00_bglt BgL_res2740z00_4040;

														{	/* SawMill/node2rtl.scm 184 */
															BgL_areaz00_bglt BgL_az00_4035;

															BgL_az00_4035 =
																BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
																((BgL_nodez00_bglt) BgL_az00_2488));
															{	/* SawMill/node2rtl.scm 114 */
																BgL_blockz00_bglt BgL_arg1874z00_4038;

																BgL_arg1874z00_4038 =
																	(((BgL_areaz00_bglt) COBJECT(BgL_az00_4035))->
																	BgL_exitz00);
																BGl_bdestinationz12z12zzsaw_node2rtlz00
																	(BgL_arg1874z00_4038,
																	((BgL_rtl_regz00_bglt) BgL_rz00_2489));
															}
															BgL_res2740z00_4040 = BgL_az00_4035;
														}
														BgL_arg1971z00_2487 = BgL_res2740z00_4040;
													}
												}
												{	/* SawMill/node2rtl.scm 190 */
													obj_t BgL_res2741z00_4041;

													BgL_res2741z00_4041 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1971z00_2487), BNIL);
													BgL_newtail1606z00_2484 = BgL_res2741z00_4041;
												}
											}
											SET_CDR(BgL_tail1605z00_2481, BgL_newtail1606z00_2484);
											{	/* SawMill/node2rtl.scm 190 */
												obj_t BgL_arg1969z00_2485;
												obj_t BgL_arg1970z00_2486;

												BgL_arg1969z00_2485 = CDR(((obj_t) BgL_ll1602z00_2479));
												BgL_arg1970z00_2486 = CDR(((obj_t) BgL_ll1603z00_2480));
												{
													obj_t BgL_tail1605z00_5941;
													obj_t BgL_ll1603z00_5940;
													obj_t BgL_ll1602z00_5939;

													BgL_ll1602z00_5939 = BgL_arg1969z00_2485;
													BgL_ll1603z00_5940 = BgL_arg1970z00_2486;
													BgL_tail1605z00_5941 = BgL_newtail1606z00_2484;
													BgL_tail1605z00_2481 = BgL_tail1605z00_5941;
													BgL_ll1603z00_2480 = BgL_ll1603z00_5940;
													BgL_ll1602z00_2479 = BgL_ll1602z00_5939;
													goto BgL_zc3z04anonymousza31967ze3z87_2482;
												}
											}
										}
								}
							}
						BgL_arg1963z00_2471 =
							BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg1965z00_2473);
					}
					BgL_arg1964z00_2472 =
						BGl_singleza2za2zzsaw_node2rtlz00(BgL_ez00_128, BgL_funz00_129,
						BgL_regsz00_2470);
					return BGl_linkz00zzsaw_node2rtlz00(BgL_arg1963z00_2471,
						BgL_arg1964z00_2472);
				}
			}
		}

	}



/* coerce */
	obj_t BGl_coercez00zzsaw_node2rtlz00(obj_t BgL_clausesz00_146)
	{
		{	/* SawMill/node2rtl.scm 270 */
			if (NULLP(BgL_clausesz00_146))
				{	/* SawMill/node2rtl.scm 271 */
					return BNIL;
				}
			else
				{	/* SawMill/node2rtl.scm 271 */
					obj_t BgL_head1641z00_2541;

					{	/* SawMill/node2rtl.scm 271 */
						obj_t BgL_res2752z00_4072;

						BgL_res2752z00_4072 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1641z00_2541 = BgL_res2752z00_4072;
					}
					{
						obj_t BgL_l1639z00_2543;
						obj_t BgL_tail1642z00_2544;

						BgL_l1639z00_2543 = BgL_clausesz00_146;
						BgL_tail1642z00_2544 = BgL_head1641z00_2541;
					BgL_zc3z04anonymousza31994ze3z87_2545:
						if (NULLP(BgL_l1639z00_2543))
							{	/* SawMill/node2rtl.scm 271 */
								return CDR(BgL_head1641z00_2541);
							}
						else
							{	/* SawMill/node2rtl.scm 271 */
								obj_t BgL_newtail1643z00_2547;

								{	/* SawMill/node2rtl.scm 271 */
									obj_t BgL_arg1997z00_2549;

									{	/* SawMill/node2rtl.scm 271 */
										obj_t BgL_cz00_2550;

										BgL_cz00_2550 = CAR(((obj_t) BgL_l1639z00_2543));
										{	/* SawMill/node2rtl.scm 272 */
											obj_t BgL_pz00_2551;

											BgL_pz00_2551 = CAR(((obj_t) BgL_cz00_2550));
											if ((BgL_pz00_2551 == CNST_TABLE_REF(((long) 1))))
												{	/* SawMill/node2rtl.scm 273 */
													BgL_arg1997z00_2549 = BgL_pz00_2551;
												}
											else
												{	/* SawMill/node2rtl.scm 273 */
													if (NULLP(BgL_pz00_2551))
														{	/* SawMill/node2rtl.scm 275 */
															BgL_arg1997z00_2549 = BNIL;
														}
													else
														{	/* SawMill/node2rtl.scm 275 */
															obj_t BgL_head1636z00_2555;

															{	/* SawMill/node2rtl.scm 275 */
																obj_t BgL_res2755z00_4078;

																BgL_res2755z00_4078 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1636z00_2555 = BgL_res2755z00_4078;
															}
															{
																obj_t BgL_l1634z00_2557;
																obj_t BgL_tail1637z00_2558;

																BgL_l1634z00_2557 = BgL_pz00_2551;
																BgL_tail1637z00_2558 = BgL_head1636z00_2555;
															BgL_zc3z04anonymousza32000ze3z87_2559:
																if (NULLP(BgL_l1634z00_2557))
																	{	/* SawMill/node2rtl.scm 275 */
																		BgL_arg1997z00_2549 =
																			CDR(BgL_head1636z00_2555);
																	}
																else
																	{	/* SawMill/node2rtl.scm 275 */
																		obj_t BgL_newtail1638z00_2561;

																		{	/* SawMill/node2rtl.scm 275 */
																			obj_t BgL_arg2003z00_2563;

																			{	/* SawMill/node2rtl.scm 275 */
																				obj_t BgL_nz00_2564;

																				BgL_nz00_2564 =
																					CAR(((obj_t) BgL_l1634z00_2557));
																				if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_nz00_2564))
																					{	/* SawMill/node2rtl.scm 276 */
																						BgL_arg2003z00_2563 = BgL_nz00_2564;
																					}
																				else
																					{	/* SawMill/node2rtl.scm 276 */
																						if (CHARP(BgL_nz00_2564))
																							{	/* SawMill/node2rtl.scm 277 */
																								BgL_arg2003z00_2563 =
																									BINT((CCHAR(BgL_nz00_2564)));
																							}
																						else
																							{	/* SawMill/node2rtl.scm 277 */
																								BgL_arg2003z00_2563 =
																									BGl_errorz00zz__errorz00
																									(BGl_string2909z00zzsaw_node2rtlz00,
																									BGl_string2910z00zzsaw_node2rtlz00,
																									BgL_nz00_2564);
																							}
																					}
																			}
																			{	/* SawMill/node2rtl.scm 275 */
																				obj_t BgL_res2759z00_4085;

																				BgL_res2759z00_4085 =
																					MAKE_YOUNG_PAIR(BgL_arg2003z00_2563,
																					BNIL);
																				BgL_newtail1638z00_2561 =
																					BgL_res2759z00_4085;
																			}
																		}
																		SET_CDR(BgL_tail1637z00_2558,
																			BgL_newtail1638z00_2561);
																		{	/* SawMill/node2rtl.scm 275 */
																			obj_t BgL_arg2002z00_2562;

																			BgL_arg2002z00_2562 =
																				CDR(((obj_t) BgL_l1634z00_2557));
																			{
																				obj_t BgL_tail1637z00_5979;
																				obj_t BgL_l1634z00_5978;

																				BgL_l1634z00_5978 = BgL_arg2002z00_2562;
																				BgL_tail1637z00_5979 =
																					BgL_newtail1638z00_2561;
																				BgL_tail1637z00_2558 =
																					BgL_tail1637z00_5979;
																				BgL_l1634z00_2557 = BgL_l1634z00_5978;
																				goto
																					BgL_zc3z04anonymousza32000ze3z87_2559;
																			}
																		}
																	}
															}
														}
												}
										}
									}
									{	/* SawMill/node2rtl.scm 271 */
										obj_t BgL_res2760z00_4088;

										BgL_res2760z00_4088 =
											MAKE_YOUNG_PAIR(BgL_arg1997z00_2549, BNIL);
										BgL_newtail1643z00_2547 = BgL_res2760z00_4088;
									}
								}
								SET_CDR(BgL_tail1642z00_2544, BgL_newtail1643z00_2547);
								{	/* SawMill/node2rtl.scm 271 */
									obj_t BgL_arg1996z00_2548;

									BgL_arg1996z00_2548 = CDR(((obj_t) BgL_l1639z00_2543));
									{
										obj_t BgL_tail1642z00_5985;
										obj_t BgL_l1639z00_5984;

										BgL_l1639z00_5984 = BgL_arg1996z00_2548;
										BgL_tail1642z00_5985 = BgL_newtail1643z00_2547;
										BgL_tail1642z00_2544 = BgL_tail1642z00_5985;
										BgL_l1639z00_2543 = BgL_l1639z00_5984;
										goto BgL_zc3z04anonymousza31994ze3z87_2545;
									}
								}
							}
					}
				}
		}

	}



/* compile-label-call */
	BgL_areaz00_bglt
		BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_vz00_148, obj_t BgL_argsz00_149)
	{
		{	/* SawMill/node2rtl.scm 288 */
			{	/* SawMill/node2rtl.scm 295 */
				obj_t BgL_regsz00_2570;

				if (NULLP(BgL_argsz00_149))
					{	/* SawMill/node2rtl.scm 295 */
						BgL_regsz00_2570 = BNIL;
					}
				else
					{	/* SawMill/node2rtl.scm 295 */
						obj_t BgL_head1646z00_2620;

						{	/* SawMill/node2rtl.scm 295 */
							obj_t BgL_res2764z00_4102;

							BgL_res2764z00_4102 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1646z00_2620 = BgL_res2764z00_4102;
						}
						{
							obj_t BgL_l1644z00_2622;
							obj_t BgL_tail1647z00_2623;

							BgL_l1644z00_2622 = BgL_argsz00_149;
							BgL_tail1647z00_2623 = BgL_head1646z00_2620;
						BgL_zc3z04anonymousza32039ze3z87_2624:
							if (NULLP(BgL_l1644z00_2622))
								{	/* SawMill/node2rtl.scm 295 */
									BgL_regsz00_2570 = CDR(BgL_head1646z00_2620);
								}
							else
								{	/* SawMill/node2rtl.scm 295 */
									obj_t BgL_newtail1648z00_2626;

									{	/* SawMill/node2rtl.scm 295 */
										BgL_rtl_regz00_bglt BgL_arg2043z00_2628;

										{	/* SawMill/node2rtl.scm 295 */
											obj_t BgL_az00_2629;

											BgL_az00_2629 = CAR(((obj_t) BgL_l1644z00_2622));
											BgL_arg2043z00_2628 =
												BGl_newzd2regzd2zzsaw_node2rtlz00(
												((BgL_nodez00_bglt) BgL_az00_2629));
										}
										{	/* SawMill/node2rtl.scm 295 */
											obj_t BgL_res2766z00_4106;

											BgL_res2766z00_4106 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg2043z00_2628), BNIL);
											BgL_newtail1648z00_2626 = BgL_res2766z00_4106;
										}
									}
									SET_CDR(BgL_tail1647z00_2623, BgL_newtail1648z00_2626);
									{	/* SawMill/node2rtl.scm 295 */
										obj_t BgL_arg2041z00_2627;

										BgL_arg2041z00_2627 = CDR(((obj_t) BgL_l1644z00_2622));
										{
											obj_t BgL_tail1647z00_6002;
											obj_t BgL_l1644z00_6001;

											BgL_l1644z00_6001 = BgL_arg2041z00_2627;
											BgL_tail1647z00_6002 = BgL_newtail1648z00_2626;
											BgL_tail1647z00_2623 = BgL_tail1647z00_6002;
											BgL_l1644z00_2622 = BgL_l1644z00_6001;
											goto BgL_zc3z04anonymousza32039ze3z87_2624;
										}
									}
								}
						}
					}
				{	/* SawMill/node2rtl.scm 296 */
					obj_t BgL_paramsz00_2571;

					BgL_paramsz00_2571 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_vz00_148)))->
										BgL_valuez00))))->BgL_argsz00);
					{	/* SawMill/node2rtl.scm 298 */
						BgL_areaz00_bglt BgL_arg2007z00_2572;
						BgL_areaz00_bglt BgL_arg2008z00_2573;

						{	/* SawMill/node2rtl.scm 298 */
							obj_t BgL_arg2010z00_2574;

							if (NULLP(BgL_argsz00_149))
								{	/* SawMill/node2rtl.scm 298 */
									BgL_arg2010z00_2574 = BNIL;
								}
							else
								{	/* SawMill/node2rtl.scm 298 */
									obj_t BgL_head1651z00_2578;

									{	/* SawMill/node2rtl.scm 298 */
										obj_t BgL_res2768z00_4112;

										BgL_res2768z00_4112 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1651z00_2578 = BgL_res2768z00_4112;
									}
									{
										obj_t BgL_ll1649z00_2580;
										obj_t BgL_ll1650z00_2581;
										obj_t BgL_tail1652z00_2582;

										BgL_ll1649z00_2580 = BgL_argsz00_149;
										BgL_ll1650z00_2581 = BgL_regsz00_2570;
										BgL_tail1652z00_2582 = BgL_head1651z00_2578;
									BgL_zc3z04anonymousza32012ze3z87_2583:
										if (NULLP(BgL_ll1649z00_2580))
											{	/* SawMill/node2rtl.scm 298 */
												BgL_arg2010z00_2574 = CDR(BgL_head1651z00_2578);
											}
										else
											{	/* SawMill/node2rtl.scm 298 */
												obj_t BgL_newtail1653z00_2585;

												{	/* SawMill/node2rtl.scm 298 */
													BgL_areaz00_bglt BgL_arg2017z00_2588;

													{	/* SawMill/node2rtl.scm 298 */
														obj_t BgL_ez00_2589;
														obj_t BgL_rz00_2590;

														BgL_ez00_2589 = CAR(((obj_t) BgL_ll1649z00_2580));
														BgL_rz00_2590 = CAR(((obj_t) BgL_ll1650z00_2581));
														{	/* SawMill/node2rtl.scm 298 */
															BgL_areaz00_bglt BgL_res2770z00_4124;

															{	/* SawMill/node2rtl.scm 184 */
																BgL_areaz00_bglt BgL_az00_4119;

																BgL_az00_4119 =
																	BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
																	((BgL_nodez00_bglt) BgL_ez00_2589));
																{	/* SawMill/node2rtl.scm 114 */
																	BgL_blockz00_bglt BgL_arg1874z00_4122;

																	BgL_arg1874z00_4122 =
																		(((BgL_areaz00_bglt)
																			COBJECT(BgL_az00_4119))->BgL_exitz00);
																	BGl_bdestinationz12z12zzsaw_node2rtlz00
																		(BgL_arg1874z00_4122,
																		((BgL_rtl_regz00_bglt) BgL_rz00_2590));
																}
																BgL_res2770z00_4124 = BgL_az00_4119;
															}
															BgL_arg2017z00_2588 = BgL_res2770z00_4124;
														}
													}
													{	/* SawMill/node2rtl.scm 298 */
														obj_t BgL_res2771z00_4125;

														BgL_res2771z00_4125 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2017z00_2588), BNIL);
														BgL_newtail1653z00_2585 = BgL_res2771z00_4125;
													}
												}
												SET_CDR(BgL_tail1652z00_2582, BgL_newtail1653z00_2585);
												{	/* SawMill/node2rtl.scm 298 */
													obj_t BgL_arg2014z00_2586;
													obj_t BgL_arg2016z00_2587;

													BgL_arg2014z00_2586 =
														CDR(((obj_t) BgL_ll1649z00_2580));
													BgL_arg2016z00_2587 =
														CDR(((obj_t) BgL_ll1650z00_2581));
													{
														obj_t BgL_tail1652z00_6031;
														obj_t BgL_ll1650z00_6030;
														obj_t BgL_ll1649z00_6029;

														BgL_ll1649z00_6029 = BgL_arg2014z00_2586;
														BgL_ll1650z00_6030 = BgL_arg2016z00_2587;
														BgL_tail1652z00_6031 = BgL_newtail1653z00_2585;
														BgL_tail1652z00_2582 = BgL_tail1652z00_6031;
														BgL_ll1650z00_2581 = BgL_ll1650z00_6030;
														BgL_ll1649z00_2580 = BgL_ll1649z00_6029;
														goto BgL_zc3z04anonymousza32012ze3z87_2583;
													}
												}
											}
									}
								}
							BgL_arg2007z00_2572 =
								BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg2010z00_2574);
						}
						{	/* SawMill/node2rtl.scm 300 */
							BgL_areaz00_bglt BgL_arg2018z00_2592;
							BgL_areaz00_bglt BgL_arg2020z00_2593;

							{	/* SawMill/node2rtl.scm 300 */
								obj_t BgL_arg2021z00_2594;

								{	/* SawMill/node2rtl.scm 300 */
									obj_t BgL_ll1655z00_2595;
									obj_t BgL_ll1656z00_2596;

									BgL_ll1655z00_2595 = bgl_reverse(BgL_regsz00_2570);
									BgL_ll1656z00_2596 = bgl_reverse(BgL_paramsz00_2571);
									if (NULLP(BgL_ll1655z00_2595))
										{	/* SawMill/node2rtl.scm 300 */
											BgL_arg2021z00_2594 = BNIL;
										}
									else
										{	/* SawMill/node2rtl.scm 300 */
											obj_t BgL_head1657z00_2598;

											{	/* SawMill/node2rtl.scm 300 */
												BgL_areaz00_bglt BgL_arg2034z00_2614;

												{	/* SawMill/node2rtl.scm 300 */
													obj_t BgL_arg2035z00_2615;
													obj_t BgL_arg2036z00_2616;

													BgL_arg2035z00_2615 = CAR(BgL_ll1655z00_2595);
													BgL_arg2036z00_2616 =
														CAR(((obj_t) BgL_ll1656z00_2596));
													BgL_arg2034z00_2614 =
														BGl_moveze70ze7zzsaw_node2rtlz00(
														((BgL_rtl_regz00_bglt) BgL_arg2035z00_2615),
														((BgL_localz00_bglt) BgL_arg2036z00_2616));
												}
												{	/* SawMill/node2rtl.scm 300 */
													obj_t BgL_res2773z00_4132;

													BgL_res2773z00_4132 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg2034z00_2614), BNIL);
													BgL_head1657z00_2598 = BgL_res2773z00_4132;
												}
											}
											{	/* SawMill/node2rtl.scm 300 */
												obj_t BgL_g1661z00_2599;
												obj_t BgL_g1662z00_2600;

												BgL_g1661z00_2599 = CDR(BgL_ll1655z00_2595);
												BgL_g1662z00_2600 = CDR(((obj_t) BgL_ll1656z00_2596));
												{
													obj_t BgL_ll1655z00_2602;
													obj_t BgL_ll1656z00_2603;
													obj_t BgL_tail1658z00_2604;

													BgL_ll1655z00_2602 = BgL_g1661z00_2599;
													BgL_ll1656z00_2603 = BgL_g1662z00_2600;
													BgL_tail1658z00_2604 = BgL_head1657z00_2598;
												BgL_zc3z04anonymousza32023ze3z87_2605:
													if (NULLP(BgL_ll1655z00_2602))
														{	/* SawMill/node2rtl.scm 300 */
															BgL_arg2021z00_2594 = BgL_head1657z00_2598;
														}
													else
														{	/* SawMill/node2rtl.scm 300 */
															obj_t BgL_newtail1659z00_2607;

															{	/* SawMill/node2rtl.scm 300 */
																BgL_areaz00_bglt BgL_arg2029z00_2610;

																{	/* SawMill/node2rtl.scm 300 */
																	obj_t BgL_arg2031z00_2611;
																	obj_t BgL_arg2033z00_2612;

																	BgL_arg2031z00_2611 =
																		CAR(((obj_t) BgL_ll1655z00_2602));
																	BgL_arg2033z00_2612 =
																		CAR(((obj_t) BgL_ll1656z00_2603));
																	BgL_arg2029z00_2610 =
																		BGl_moveze70ze7zzsaw_node2rtlz00(
																		((BgL_rtl_regz00_bglt) BgL_arg2031z00_2611),
																		((BgL_localz00_bglt) BgL_arg2033z00_2612));
																}
																{	/* SawMill/node2rtl.scm 300 */
																	obj_t BgL_res2775z00_4138;

																	BgL_res2775z00_4138 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg2029z00_2610), BNIL);
																	BgL_newtail1659z00_2607 = BgL_res2775z00_4138;
																}
															}
															SET_CDR(BgL_tail1658z00_2604,
																BgL_newtail1659z00_2607);
															{	/* SawMill/node2rtl.scm 300 */
																obj_t BgL_arg2026z00_2608;
																obj_t BgL_arg2028z00_2609;

																BgL_arg2026z00_2608 =
																	CDR(((obj_t) BgL_ll1655z00_2602));
																BgL_arg2028z00_2609 =
																	CDR(((obj_t) BgL_ll1656z00_2603));
																{
																	obj_t BgL_tail1658z00_6066;
																	obj_t BgL_ll1656z00_6065;
																	obj_t BgL_ll1655z00_6064;

																	BgL_ll1655z00_6064 = BgL_arg2026z00_2608;
																	BgL_ll1656z00_6065 = BgL_arg2028z00_2609;
																	BgL_tail1658z00_6066 =
																		BgL_newtail1659z00_2607;
																	BgL_tail1658z00_2604 = BgL_tail1658z00_6066;
																	BgL_ll1656z00_2603 = BgL_ll1656z00_6065;
																	BgL_ll1655z00_2602 = BgL_ll1655z00_6064;
																	goto BgL_zc3z04anonymousza32023ze3z87_2605;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg2018z00_2592 =
									BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg2021z00_2594);
							}
							BgL_arg2020z00_2593 =
								BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_vz00_148);
							BgL_arg2008z00_2573 =
								BGl_linkz00zzsaw_node2rtlz00(BgL_arg2018z00_2592,
								BgL_arg2020z00_2593);
						}
						return
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg2007z00_2572,
							BgL_arg2008z00_2573);
					}
				}
			}
		}

	}



/* move~0 */
	BgL_areaz00_bglt BGl_moveze70ze7zzsaw_node2rtlz00(BgL_rtl_regz00_bglt
		BgL_rz00_2631, BgL_localz00_bglt BgL_vz00_2632)
	{
		{	/* SawMill/node2rtl.scm 294 */
			{	/* SawMill/node2rtl.scm 292 */
				BgL_areaz00_bglt BgL_az00_2634;

				{	/* SawMill/node2rtl.scm 292 */
					BgL_rtl_movz00_bglt BgL_arg2046z00_2636;

					{	/* SawMill/node2rtl.scm 292 */
						BgL_rtl_movz00_bglt BgL_new1262z00_2638;

						{	/* SawMill/node2rtl.scm 292 */
							BgL_rtl_movz00_bglt BgL_new1261z00_2639;

							BgL_new1261z00_2639 =
								((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_movz00_bgl))));
							{	/* SawMill/node2rtl.scm 292 */
								long BgL_arg2048z00_2640;

								{	/* SawMill/node2rtl.scm 292 */
									long BgL_res2761z00_4092;

									BgL_res2761z00_4092 =
										BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
									BgL_arg2048z00_2640 = BgL_res2761z00_4092;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1261z00_2639),
									BgL_arg2048z00_2640);
							}
							BgL_new1262z00_2638 = BgL_new1261z00_2639;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1262z00_2638)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2046z00_2636 = BgL_new1262z00_2638;
					}
					{	/* SawMill/node2rtl.scm 292 */
						obj_t BgL_list2047z00_2637;

						BgL_list2047z00_2637 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_rz00_2631), BNIL);
						{	/* SawMill/node2rtl.scm 292 */
							BgL_areaz00_bglt BgL_res2762z00_4096;

							BgL_res2762z00_4096 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								((BgL_rtl_funz00_bglt) BgL_arg2046z00_2636),
								BgL_list2047z00_2637);
							BgL_az00_2634 = BgL_res2762z00_4096;
				}}}
				BGl_bdestinationz12z12zzsaw_node2rtlz00(
					(((BgL_areaz00_bglt) COBJECT(BgL_az00_2634))->BgL_exitz00),
					BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_vz00_2632));
				return BgL_az00_2634;
			}
		}

	}



/* local->code */
	BgL_areaz00_bglt BGl_localzd2ze3codez31zzsaw_node2rtlz00(BgL_localz00_bglt
		BgL_vz00_150)
	{
		{	/* SawMill/node2rtl.scm 304 */
			{	/* SawMill/node2rtl.scm 305 */
				bool_t BgL_test3087z00_6084;

				{	/* SawMill/node2rtl.scm 305 */
					bool_t BgL_res2776z00_4142;

					BgL_res2776z00_4142 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_vz00_150), BGl_rlocalz00zzsaw_node2rtlz00);
					BgL_test3087z00_6084 = BgL_res2776z00_4142;
				}
				if (BgL_test3087z00_6084)
					{	/* SawMill/node2rtl.scm 314 */
						obj_t BgL_arg2050z00_2643;

						{
							BgL_rlocalz00_bglt BgL_auxz00_6087;

							{
								obj_t BgL_auxz00_6088;

								{	/* SawMill/node2rtl.scm 314 */
									BgL_objectz00_bglt BgL_tmpz00_6089;

									BgL_tmpz00_6089 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
									BgL_auxz00_6088 = BGL_OBJECT_WIDENING(BgL_tmpz00_6089);
								}
								BgL_auxz00_6087 = ((BgL_rlocalz00_bglt) BgL_auxz00_6088);
							}
							BgL_arg2050z00_2643 =
								(((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6087))->BgL_codez00);
						}
						return
							BGl_unlinkz00zzsaw_node2rtlz00(
							((BgL_areaz00_bglt) BgL_arg2050z00_2643));
					}
				else
					{	/* SawMill/node2rtl.scm 307 */
						BgL_areaz00_bglt BgL_nopz00_2644;
						obj_t BgL_bodyz00_2645;

						{	/* SawMill/node2rtl.scm 307 */
							BgL_rtl_nopz00_bglt BgL_arg2055z00_2652;

							{	/* SawMill/node2rtl.scm 307 */
								BgL_rtl_nopz00_bglt BgL_new1264z00_2654;

								{	/* SawMill/node2rtl.scm 307 */
									BgL_rtl_nopz00_bglt BgL_new1263z00_2655;

									BgL_new1263z00_2655 =
										((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_nopz00_bgl))));
									{	/* SawMill/node2rtl.scm 307 */
										long BgL_arg2057z00_2656;

										{	/* SawMill/node2rtl.scm 307 */
											long BgL_res2777z00_4146;

											BgL_res2777z00_4146 =
												BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
											BgL_arg2057z00_2656 = BgL_res2777z00_4146;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1263z00_2655),
											BgL_arg2057z00_2656);
									}
									BgL_new1264z00_2654 = BgL_new1263z00_2655;
								}
								((((BgL_rtl_funz00_bglt) COBJECT(
												((BgL_rtl_funz00_bglt) BgL_new1264z00_2654)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								BgL_arg2055z00_2652 = BgL_new1264z00_2654;
							}
							{	/* SawMill/node2rtl.scm 307 */
								BgL_areaz00_bglt BgL_res2778z00_4150;

								BgL_res2778z00_4150 =
									BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
									((BgL_rtl_funz00_bglt) BgL_arg2055z00_2652), BNIL);
								BgL_nopz00_2644 = BgL_res2778z00_4150;
						}}
						BgL_bodyz00_2645 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_vz00_150)))->
											BgL_valuez00))))->BgL_bodyz00);
						{	/* SawMill/node2rtl.scm 310 */
							BgL_rlocalz00_bglt BgL_wide1267z00_2648;

							BgL_wide1267z00_2648 =
								((BgL_rlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rlocalz00_bgl))));
							{	/* SawMill/node2rtl.scm 310 */
								obj_t BgL_auxz00_6113;
								BgL_objectz00_bglt BgL_tmpz00_6110;

								BgL_auxz00_6113 = ((obj_t) BgL_wide1267z00_2648);
								BgL_tmpz00_6110 =
									((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6110, BgL_auxz00_6113);
							}
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
							{	/* SawMill/node2rtl.scm 310 */
								long BgL_arg2051z00_2649;

								{	/* SawMill/node2rtl.scm 310 */
									long BgL_res2779z00_4155;

									BgL_res2779z00_4155 =
										BGL_CLASS_INDEX(BGl_rlocalz00zzsaw_node2rtlz00);
									BgL_arg2051z00_2649 = BgL_res2779z00_4155;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_vz00_150)), BgL_arg2051z00_2649);
							}
							((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
						}
						{
							BgL_rlocalz00_bglt BgL_auxz00_6124;

							{
								obj_t BgL_auxz00_6125;

								{	/* SawMill/node2rtl.scm 310 */
									BgL_objectz00_bglt BgL_tmpz00_6126;

									BgL_tmpz00_6126 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
									BgL_auxz00_6125 = BGL_OBJECT_WIDENING(BgL_tmpz00_6126);
								}
								BgL_auxz00_6124 = ((BgL_rlocalz00_bglt) BgL_auxz00_6125);
							}
							((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6124))->BgL_regz00) =
								((obj_t) BFALSE), BUNSPEC);
						}
						{
							BgL_rlocalz00_bglt BgL_auxz00_6132;

							{
								obj_t BgL_auxz00_6133;

								{	/* SawMill/node2rtl.scm 310 */
									BgL_objectz00_bglt BgL_tmpz00_6134;

									BgL_tmpz00_6134 =
										((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_vz00_150));
									BgL_auxz00_6133 = BGL_OBJECT_WIDENING(BgL_tmpz00_6134);
								}
								BgL_auxz00_6132 = ((BgL_rlocalz00_bglt) BgL_auxz00_6133);
							}
							((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6132))->BgL_codez00) =
								((obj_t) ((obj_t) BgL_nopz00_2644)), BUNSPEC);
						}
						((BgL_localz00_bglt) BgL_vz00_150);
						{	/* SawMill/node2rtl.scm 312 */
							BgL_areaz00_bglt BgL_arg2053z00_2651;

							BgL_arg2053z00_2651 =
								BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
								((BgL_nodez00_bglt) BgL_bodyz00_2645));
							return
								BGl_linkz00zzsaw_node2rtlz00(BgL_nopz00_2644,
								BgL_arg2053z00_2651);
						}
					}
			}
		}

	}



/* imperative? */
	obj_t BGl_imperativezf3zf3zzsaw_node2rtlz00(BgL_appz00_bglt BgL_ez00_152,
		BgL_globalz00_bglt BgL_vz00_153, obj_t BgL_argsz00_154)
	{
		{	/* SawMill/node2rtl.scm 327 */
			{	/* SawMill/node2rtl.scm 328 */
				obj_t BgL_idz00_2658;

				BgL_idz00_2658 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_vz00_153)))->BgL_idz00);
				if ((BgL_idz00_2658 == CNST_TABLE_REF(((long) 2))))
					{	/* SawMill/node2rtl.scm 331 */
						obj_t BgL_az00_2660;

						{	/* SawMill/node2rtl.scm 331 */
							bool_t BgL_test3089z00_6150;

							{	/* SawMill/node2rtl.scm 331 */
								obj_t BgL_arg2070z00_2671;

								BgL_arg2070z00_2671 = CAR(((obj_t) BgL_argsz00_154));
								BgL_test3089z00_6150 =
									BGl_isazf3zf3zz__objectz00(BgL_arg2070z00_2671,
									BGl_pragmaz00zzast_nodez00);
							}
							if (BgL_test3089z00_6150)
								{	/* SawMill/node2rtl.scm 332 */
									obj_t BgL_pairz00_4164;

									BgL_pairz00_4164 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_pragmaz00_bglt)
														CAR(((obj_t) BgL_argsz00_154))))))->BgL_exprza2za2);
									BgL_az00_2660 = CAR(BgL_pairz00_4164);
								}
							else
								{	/* SawMill/node2rtl.scm 331 */
									BgL_az00_2660 = CAR(((obj_t) BgL_argsz00_154));
								}
						}
						{	/* SawMill/node2rtl.scm 335 */
							BgL_rtl_globalrefz00_bglt BgL_arg2061z00_2661;

							{	/* SawMill/node2rtl.scm 335 */
								BgL_rtl_globalrefz00_bglt BgL_new1276z00_2663;

								{	/* SawMill/node2rtl.scm 335 */
									BgL_rtl_globalrefz00_bglt BgL_new1275z00_2665;

									BgL_new1275z00_2665 =
										((BgL_rtl_globalrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_globalrefz00_bgl))));
									{	/* SawMill/node2rtl.scm 335 */
										long BgL_arg2065z00_2666;

										{	/* SawMill/node2rtl.scm 335 */
											long BgL_res2780z00_4167;

											BgL_res2780z00_4167 =
												BGL_CLASS_INDEX(BGl_rtl_globalrefz00zzsaw_defsz00);
											BgL_arg2065z00_2666 = BgL_res2780z00_4167;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1275z00_2665),
											BgL_arg2065z00_2666);
									}
									BgL_new1276z00_2663 = BgL_new1275z00_2665;
								}
								((((BgL_rtl_funz00_bglt) COBJECT(
												((BgL_rtl_funz00_bglt) BgL_new1276z00_2663)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								{
									BgL_globalz00_bglt BgL_auxz00_6168;

									{	/* SawMill/node2rtl.scm 336 */
										BgL_variablez00_bglt BgL_arg2063z00_2664;

										BgL_arg2063z00_2664 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_az00_2660)))->BgL_variablez00);
										BgL_auxz00_6168 =
											BGl_getzd2globalzd2zzsaw_node2rtlz00(
											((BgL_globalz00_bglt) BgL_arg2063z00_2664));
									}
									((((BgL_rtl_globalrefz00_bglt) COBJECT(BgL_new1276z00_2663))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_auxz00_6168), BUNSPEC);
								}
								BgL_arg2061z00_2661 = BgL_new1276z00_2663;
							}
							{	/* SawMill/node2rtl.scm 334 */
								BgL_areaz00_bglt BgL_res2781z00_4172;

								BgL_res2781z00_4172 =
									BGl_callza2za2zzsaw_node2rtlz00(
									((obj_t) BgL_ez00_152),
									((BgL_rtl_funz00_bglt) BgL_arg2061z00_2661), BNIL);
								return ((obj_t) BgL_res2781z00_4172);
							}
						}
					}
				else
					{	/* SawMill/node2rtl.scm 330 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			{	/* SawMill/node2rtl.scm 19 */
				obj_t BgL_arg2076z00_2675;
				obj_t BgL_arg2077z00_2676;

				{	/* SawMill/node2rtl.scm 19 */
					obj_t BgL_v1663z00_2688;

					BgL_v1663z00_2688 = create_vector(((long) 2));
					{	/* SawMill/node2rtl.scm 19 */
						obj_t BgL_arg2083z00_2689;

						BgL_arg2083z00_2689 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									3)), BGl_proc2912z00zzsaw_node2rtlz00,
							BGl_proc2911z00zzsaw_node2rtlz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_blockz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1663z00_2688, ((long) 0), BgL_arg2083z00_2689);
					}
					{	/* SawMill/node2rtl.scm 19 */
						obj_t BgL_arg2088z00_2699;

						BgL_arg2088z00_2699 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2914z00zzsaw_node2rtlz00,
							BGl_proc2913z00zzsaw_node2rtlz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_blockz00zzsaw_defsz00);
						VECTOR_SET(BgL_v1663z00_2688, ((long) 1), BgL_arg2088z00_2699);
					}
					BgL_arg2076z00_2675 = BgL_v1663z00_2688;
				}
				{	/* SawMill/node2rtl.scm 19 */
					obj_t BgL_v1664z00_2709;

					BgL_v1664z00_2709 = create_vector(((long) 0));
					BgL_arg2077z00_2676 = BgL_v1664z00_2709;
				}
				BGl_areaz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 6)), BGl_objectz00zz__objectz00,
					((long) 23234), BGl_proc2917z00zzsaw_node2rtlz00,
					BGl_proc2916z00zzsaw_node2rtlz00, BFALSE,
					BGl_proc2915z00zzsaw_node2rtlz00, BFALSE, BgL_arg2076z00_2675,
					BgL_arg2077z00_2676);
			}
			{	/* SawMill/node2rtl.scm 20 */
				obj_t BgL_arg2097z00_2717;
				obj_t BgL_arg2098z00_2718;

				{	/* SawMill/node2rtl.scm 20 */
					obj_t BgL_v1665z00_2743;

					BgL_v1665z00_2743 = create_vector(((long) 0));
					BgL_arg2097z00_2717 = BgL_v1665z00_2743;
				}
				{	/* SawMill/node2rtl.scm 20 */
					obj_t BgL_v1666z00_2744;

					BgL_v1666z00_2744 = create_vector(((long) 0));
					BgL_arg2098z00_2718 = BgL_v1666z00_2744;
				}
				BGl_reversedz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
					CNST_TABLE_REF(((long) 6)), BGl_blockz00zzsaw_defsz00, ((long) 28961),
					BGl_proc2921z00zzsaw_node2rtlz00, BGl_proc2920z00zzsaw_node2rtlz00,
					BFALSE, BGl_proc2919z00zzsaw_node2rtlz00,
					BGl_proc2918z00zzsaw_node2rtlz00, BgL_arg2097z00_2717,
					BgL_arg2098z00_2718);
			}
			{	/* SawMill/node2rtl.scm 21 */
				obj_t BgL_arg2114z00_2753;
				obj_t BgL_arg2115z00_2754;

				{	/* SawMill/node2rtl.scm 21 */
					obj_t BgL_v1667z00_2788;

					BgL_v1667z00_2788 = create_vector(((long) 2));
					{	/* SawMill/node2rtl.scm 21 */
						obj_t BgL_arg2127z00_2789;

						BgL_arg2127z00_2789 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2923z00zzsaw_node2rtlz00,
							BGl_proc2922z00zzsaw_node2rtlz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1667z00_2788, ((long) 0), BgL_arg2127z00_2789);
					}
					{	/* SawMill/node2rtl.scm 21 */
						obj_t BgL_arg2132z00_2799;

						BgL_arg2132z00_2799 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2925z00zzsaw_node2rtlz00,
							BGl_proc2924z00zzsaw_node2rtlz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1667z00_2788, ((long) 1), BgL_arg2132z00_2799);
					}
					BgL_arg2114z00_2753 = BgL_v1667z00_2788;
				}
				{	/* SawMill/node2rtl.scm 21 */
					obj_t BgL_v1668z00_2809;

					BgL_v1668z00_2809 = create_vector(((long) 0));
					BgL_arg2115z00_2754 = BgL_v1668z00_2809;
				}
				return (BGl_rlocalz00zzsaw_node2rtlz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
						CNST_TABLE_REF(((long) 6)), BGl_localz00zzast_varz00,
						((long) 58616), BGl_proc2929z00zzsaw_node2rtlz00,
						BGl_proc2928z00zzsaw_node2rtlz00, BFALSE,
						BGl_proc2927z00zzsaw_node2rtlz00, BGl_proc2926z00zzsaw_node2rtlz00,
						BgL_arg2114z00_2753, BgL_arg2115z00_2754), BUNSPEC);
		}}

	}



/* &lambda2122 */
	BgL_localz00_bglt BGl_z62lambda2122z62zzsaw_node2rtlz00(obj_t BgL_envz00_4679,
		obj_t BgL_o1181z00_4680)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{	/* SawMill/node2rtl.scm 21 */
				long BgL_arg2123z00_4866;

				{	/* SawMill/node2rtl.scm 21 */
					obj_t BgL_arg2125z00_4867;

					{	/* SawMill/node2rtl.scm 21 */
						obj_t BgL_arg2126z00_4868;

						{	/* SawMill/node2rtl.scm 21 */
							long BgL_arg1816z00_4869;

							{	/* SawMill/node2rtl.scm 21 */
								long BgL_arg1817z00_4870;

								{	/* SawMill/node2rtl.scm 21 */
									long BgL_res2793z00_4871;

									BgL_res2793z00_4871 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1181z00_4680)));
									BgL_arg1817z00_4870 = BgL_res2793z00_4871;
								}
								BgL_arg1816z00_4869 = (BgL_arg1817z00_4870 - OBJECT_TYPE);
							}
							BgL_arg2126z00_4868 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4869);
						}
						BgL_arg2125z00_4867 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2126z00_4868);
					}
					{	/* SawMill/node2rtl.scm 21 */
						long BgL_res2795z00_4872;

						{	/* SawMill/node2rtl.scm 21 */
							obj_t BgL_tmpz00_6213;

							BgL_tmpz00_6213 = ((obj_t) BgL_arg2125z00_4867);
							BgL_res2795z00_4872 = BGL_CLASS_INDEX(BgL_tmpz00_6213);
						}
						BgL_arg2123z00_4866 = BgL_res2795z00_4872;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1181z00_4680)), BgL_arg2123z00_4866);
			}
			{	/* SawMill/node2rtl.scm 21 */
				BgL_objectz00_bglt BgL_tmpz00_6219;

				BgL_tmpz00_6219 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1181z00_4680));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6219, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1181z00_4680));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1181z00_4680));
		}

	}



/* &<@anonymous:2121> */
	obj_t BGl_z62zc3z04anonymousza32121ze3ze5zzsaw_node2rtlz00(obj_t
		BgL_envz00_4681, obj_t BgL_new1180z00_4682)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{
				BgL_localz00_bglt BgL_auxz00_6227;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1180z00_4682))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 12))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6235;

					{	/* SawMill/node2rtl.scm 21 */
						obj_t BgL_classz00_4874;

						BgL_classz00_4874 = BGl_typez00zztype_typez00;
						{	/* SawMill/node2rtl.scm 21 */
							obj_t BgL__ortest_1106z00_4875;

							BgL__ortest_1106z00_4875 = BGL_CLASS_NIL(BgL_classz00_4874);
							if (CBOOL(BgL__ortest_1106z00_4875))
								{	/* SawMill/node2rtl.scm 21 */
									BgL_auxz00_6235 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_4875);
								}
							else
								{	/* SawMill/node2rtl.scm 21 */
									BgL_auxz00_6235 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4874));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1180z00_4682))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_6235), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_6245;

					{	/* SawMill/node2rtl.scm 21 */
						obj_t BgL_classz00_4876;

						BgL_classz00_4876 = BGl_valuez00zzast_varz00;
						{	/* SawMill/node2rtl.scm 21 */
							obj_t BgL__ortest_1106z00_4877;

							BgL__ortest_1106z00_4877 = BGL_CLASS_NIL(BgL_classz00_4876);
							if (CBOOL(BgL__ortest_1106z00_4877))
								{	/* SawMill/node2rtl.scm 21 */
									BgL_auxz00_6245 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_4877);
								}
							else
								{	/* SawMill/node2rtl.scm 21 */
									BgL_auxz00_6245 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4876));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1180z00_4682))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_6245), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1180z00_4682))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1180z00_4682))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_rlocalz00_bglt BgL_auxz00_6276;

					{
						obj_t BgL_auxz00_6277;

						{	/* SawMill/node2rtl.scm 21 */
							BgL_objectz00_bglt BgL_tmpz00_6278;

							BgL_tmpz00_6278 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1180z00_4682));
							BgL_auxz00_6277 = BGL_OBJECT_WIDENING(BgL_tmpz00_6278);
						}
						BgL_auxz00_6276 = ((BgL_rlocalz00_bglt) BgL_auxz00_6277);
					}
					((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6276))->BgL_regz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rlocalz00_bglt BgL_auxz00_6284;

					{
						obj_t BgL_auxz00_6285;

						{	/* SawMill/node2rtl.scm 21 */
							BgL_objectz00_bglt BgL_tmpz00_6286;

							BgL_tmpz00_6286 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1180z00_4682));
							BgL_auxz00_6285 = BGL_OBJECT_WIDENING(BgL_tmpz00_6286);
						}
						BgL_auxz00_6284 = ((BgL_rlocalz00_bglt) BgL_auxz00_6285);
					}
					((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6284))->BgL_codez00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6227 = ((BgL_localz00_bglt) BgL_new1180z00_4682);
				return ((obj_t) BgL_auxz00_6227);
			}
		}

	}



/* &lambda2119 */
	BgL_localz00_bglt BGl_z62lambda2119z62zzsaw_node2rtlz00(obj_t BgL_envz00_4683,
		obj_t BgL_o1177z00_4684)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{	/* SawMill/node2rtl.scm 21 */
				BgL_rlocalz00_bglt BgL_wide1179z00_4879;

				BgL_wide1179z00_4879 =
					((BgL_rlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rlocalz00_bgl))));
				{	/* SawMill/node2rtl.scm 21 */
					obj_t BgL_auxz00_6299;
					BgL_objectz00_bglt BgL_tmpz00_6295;

					BgL_auxz00_6299 = ((obj_t) BgL_wide1179z00_4879);
					BgL_tmpz00_6295 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1177z00_4684)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6295, BgL_auxz00_6299);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1177z00_4684)));
				{	/* SawMill/node2rtl.scm 21 */
					long BgL_arg2120z00_4880;

					{	/* SawMill/node2rtl.scm 21 */
						long BgL_res2792z00_4881;

						BgL_res2792z00_4881 =
							BGL_CLASS_INDEX(BGl_rlocalz00zzsaw_node2rtlz00);
						BgL_arg2120z00_4880 = BgL_res2792z00_4881;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1177z00_4684))), BgL_arg2120z00_4880);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1177z00_4684)));
			}
		}

	}



/* &lambda2116 */
	BgL_localz00_bglt BGl_z62lambda2116z62zzsaw_node2rtlz00(obj_t BgL_envz00_4685,
		obj_t BgL_id1164z00_4686, obj_t BgL_name1165z00_4687,
		obj_t BgL_type1166z00_4688, obj_t BgL_value1167z00_4689,
		obj_t BgL_access1168z00_4690, obj_t BgL_fastzd2alpha1169zd2_4691,
		obj_t BgL_removable1170z00_4692, obj_t BgL_occurrence1171z00_4693,
		obj_t BgL_occurrencew1172z00_4694, obj_t BgL_userzf31173zf3_4695,
		obj_t BgL_key1174z00_4696, obj_t BgL_reg1175z00_4697,
		obj_t BgL_code1176z00_4698)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{	/* SawMill/node2rtl.scm 21 */
				long BgL_occurrence1171z00_4885;
				long BgL_occurrencew1172z00_4886;
				bool_t BgL_userzf31173zf3_4887;
				long BgL_key1174z00_4888;

				BgL_occurrence1171z00_4885 = (long) CINT(BgL_occurrence1171z00_4693);
				BgL_occurrencew1172z00_4886 = (long) CINT(BgL_occurrencew1172z00_4694);
				BgL_userzf31173zf3_4887 = CBOOL(BgL_userzf31173zf3_4695);
				BgL_key1174z00_4888 = (long) CINT(BgL_key1174z00_4696);
				{	/* SawMill/node2rtl.scm 21 */
					BgL_localz00_bglt BgL_new1363z00_4889;

					{	/* SawMill/node2rtl.scm 21 */
						BgL_localz00_bglt BgL_tmp1361z00_4890;
						BgL_rlocalz00_bglt BgL_wide1362z00_4891;

						{
							BgL_localz00_bglt BgL_auxz00_6317;

							{	/* SawMill/node2rtl.scm 21 */
								BgL_localz00_bglt BgL_new1360z00_4892;

								BgL_new1360z00_4892 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* SawMill/node2rtl.scm 21 */
									long BgL_arg2118z00_4893;

									{	/* SawMill/node2rtl.scm 21 */
										long BgL_res2790z00_4894;

										BgL_res2790z00_4894 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg2118z00_4893 = BgL_res2790z00_4894;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1360z00_4892),
										BgL_arg2118z00_4893);
								}
								{	/* SawMill/node2rtl.scm 21 */
									BgL_objectz00_bglt BgL_tmpz00_6322;

									BgL_tmpz00_6322 = ((BgL_objectz00_bglt) BgL_new1360z00_4892);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6322, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1360z00_4892);
								BgL_auxz00_6317 = BgL_new1360z00_4892;
							}
							BgL_tmp1361z00_4890 = ((BgL_localz00_bglt) BgL_auxz00_6317);
						}
						BgL_wide1362z00_4891 =
							((BgL_rlocalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rlocalz00_bgl))));
						{	/* SawMill/node2rtl.scm 21 */
							obj_t BgL_auxz00_6330;
							BgL_objectz00_bglt BgL_tmpz00_6328;

							BgL_auxz00_6330 = ((obj_t) BgL_wide1362z00_4891);
							BgL_tmpz00_6328 = ((BgL_objectz00_bglt) BgL_tmp1361z00_4890);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6328, BgL_auxz00_6330);
						}
						((BgL_objectz00_bglt) BgL_tmp1361z00_4890);
						{	/* SawMill/node2rtl.scm 21 */
							long BgL_arg2117z00_4895;

							{	/* SawMill/node2rtl.scm 21 */
								long BgL_res2791z00_4896;

								BgL_res2791z00_4896 =
									BGL_CLASS_INDEX(BGl_rlocalz00zzsaw_node2rtlz00);
								BgL_arg2117z00_4895 = BgL_res2791z00_4896;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1361z00_4890),
								BgL_arg2117z00_4895);
						}
						BgL_new1363z00_4889 = ((BgL_localz00_bglt) BgL_tmp1361z00_4890);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1363z00_4889)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1164z00_4686)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_namez00) =
						((obj_t) BgL_name1165z00_4687), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1166z00_4688)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1167z00_4689)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_accessz00) =
						((obj_t) BgL_access1168z00_4690), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1169zd2_4691), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_removablez00) =
						((obj_t) BgL_removable1170z00_4692), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_occurrencez00) =
						((long) BgL_occurrence1171z00_4885), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1172z00_4886), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1363z00_4889)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31173zf3_4887), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1363z00_4889)))->BgL_keyz00) =
						((long) BgL_key1174z00_4888), BUNSPEC);
					{
						BgL_rlocalz00_bglt BgL_auxz00_6363;

						{
							obj_t BgL_auxz00_6364;

							{	/* SawMill/node2rtl.scm 21 */
								BgL_objectz00_bglt BgL_tmpz00_6365;

								BgL_tmpz00_6365 = ((BgL_objectz00_bglt) BgL_new1363z00_4889);
								BgL_auxz00_6364 = BGL_OBJECT_WIDENING(BgL_tmpz00_6365);
							}
							BgL_auxz00_6363 = ((BgL_rlocalz00_bglt) BgL_auxz00_6364);
						}
						((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6363))->BgL_regz00) =
							((obj_t) BgL_reg1175z00_4697), BUNSPEC);
					}
					{
						BgL_rlocalz00_bglt BgL_auxz00_6370;

						{
							obj_t BgL_auxz00_6371;

							{	/* SawMill/node2rtl.scm 21 */
								BgL_objectz00_bglt BgL_tmpz00_6372;

								BgL_tmpz00_6372 = ((BgL_objectz00_bglt) BgL_new1363z00_4889);
								BgL_auxz00_6371 = BGL_OBJECT_WIDENING(BgL_tmpz00_6372);
							}
							BgL_auxz00_6370 = ((BgL_rlocalz00_bglt) BgL_auxz00_6371);
						}
						((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6370))->BgL_codez00) =
							((obj_t) BgL_code1176z00_4698), BUNSPEC);
					}
					return BgL_new1363z00_4889;
				}
			}
		}

	}



/* &lambda2136 */
	obj_t BGl_z62lambda2136z62zzsaw_node2rtlz00(obj_t BgL_envz00_4699,
		obj_t BgL_oz00_4700, obj_t BgL_vz00_4701)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{
				BgL_rlocalz00_bglt BgL_auxz00_6377;

				{
					obj_t BgL_auxz00_6378;

					{	/* SawMill/node2rtl.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_6379;

						BgL_tmpz00_6379 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_4700));
						BgL_auxz00_6378 = BGL_OBJECT_WIDENING(BgL_tmpz00_6379);
					}
					BgL_auxz00_6377 = ((BgL_rlocalz00_bglt) BgL_auxz00_6378);
				}
				return
					((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6377))->BgL_codez00) =
					((obj_t) BgL_vz00_4701), BUNSPEC);
			}
		}

	}



/* &lambda2135 */
	obj_t BGl_z62lambda2135z62zzsaw_node2rtlz00(obj_t BgL_envz00_4702,
		obj_t BgL_oz00_4703)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{
				BgL_rlocalz00_bglt BgL_auxz00_6385;

				{
					obj_t BgL_auxz00_6386;

					{	/* SawMill/node2rtl.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_6387;

						BgL_tmpz00_6387 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_4703));
						BgL_auxz00_6386 = BGL_OBJECT_WIDENING(BgL_tmpz00_6387);
					}
					BgL_auxz00_6385 = ((BgL_rlocalz00_bglt) BgL_auxz00_6386);
				}
				return (((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6385))->BgL_codez00);
			}
		}

	}



/* &lambda2131 */
	obj_t BGl_z62lambda2131z62zzsaw_node2rtlz00(obj_t BgL_envz00_4704,
		obj_t BgL_oz00_4705, obj_t BgL_vz00_4706)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{
				BgL_rlocalz00_bglt BgL_auxz00_6393;

				{
					obj_t BgL_auxz00_6394;

					{	/* SawMill/node2rtl.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_6395;

						BgL_tmpz00_6395 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_4705));
						BgL_auxz00_6394 = BGL_OBJECT_WIDENING(BgL_tmpz00_6395);
					}
					BgL_auxz00_6393 = ((BgL_rlocalz00_bglt) BgL_auxz00_6394);
				}
				return
					((((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6393))->BgL_regz00) =
					((obj_t) BgL_vz00_4706), BUNSPEC);
			}
		}

	}



/* &lambda2130 */
	obj_t BGl_z62lambda2130z62zzsaw_node2rtlz00(obj_t BgL_envz00_4707,
		obj_t BgL_oz00_4708)
	{
		{	/* SawMill/node2rtl.scm 21 */
			{
				BgL_rlocalz00_bglt BgL_auxz00_6401;

				{
					obj_t BgL_auxz00_6402;

					{	/* SawMill/node2rtl.scm 21 */
						BgL_objectz00_bglt BgL_tmpz00_6403;

						BgL_tmpz00_6403 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_4708));
						BgL_auxz00_6402 = BGL_OBJECT_WIDENING(BgL_tmpz00_6403);
					}
					BgL_auxz00_6401 = ((BgL_rlocalz00_bglt) BgL_auxz00_6402);
				}
				return (((BgL_rlocalz00_bglt) COBJECT(BgL_auxz00_6401))->BgL_regz00);
			}
		}

	}



/* &lambda2105 */
	BgL_blockz00_bglt BGl_z62lambda2105z62zzsaw_node2rtlz00(obj_t BgL_envz00_4709,
		obj_t BgL_o1162z00_4710)
	{
		{	/* SawMill/node2rtl.scm 20 */
			{	/* SawMill/node2rtl.scm 20 */
				long BgL_arg2106z00_4902;

				{	/* SawMill/node2rtl.scm 20 */
					obj_t BgL_arg2107z00_4903;

					{	/* SawMill/node2rtl.scm 20 */
						obj_t BgL_arg2108z00_4904;

						{	/* SawMill/node2rtl.scm 20 */
							long BgL_arg1816z00_4905;

							{	/* SawMill/node2rtl.scm 20 */
								long BgL_arg1817z00_4906;

								{	/* SawMill/node2rtl.scm 20 */
									long BgL_res2787z00_4907;

									BgL_res2787z00_4907 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1162z00_4710)));
									BgL_arg1817z00_4906 = BgL_res2787z00_4907;
								}
								BgL_arg1816z00_4905 = (BgL_arg1817z00_4906 - OBJECT_TYPE);
							}
							BgL_arg2108z00_4904 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4905);
						}
						BgL_arg2107z00_4903 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2108z00_4904);
					}
					{	/* SawMill/node2rtl.scm 20 */
						long BgL_res2789z00_4908;

						{	/* SawMill/node2rtl.scm 20 */
							obj_t BgL_tmpz00_6415;

							BgL_tmpz00_6415 = ((obj_t) BgL_arg2107z00_4903);
							BgL_res2789z00_4908 = BGL_CLASS_INDEX(BgL_tmpz00_6415);
						}
						BgL_arg2106z00_4902 = BgL_res2789z00_4908;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1162z00_4710)), BgL_arg2106z00_4902);
			}
			{	/* SawMill/node2rtl.scm 20 */
				BgL_objectz00_bglt BgL_tmpz00_6421;

				BgL_tmpz00_6421 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1162z00_4710));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6421, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1162z00_4710));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1162z00_4710));
		}

	}



/* &<@anonymous:2104> */
	obj_t BGl_z62zc3z04anonymousza32104ze3ze5zzsaw_node2rtlz00(obj_t
		BgL_envz00_4711, obj_t BgL_new1161z00_4712)
	{
		{	/* SawMill/node2rtl.scm 20 */
			{
				BgL_blockz00_bglt BgL_auxz00_6429;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1161z00_4712))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1161z00_4712))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1161z00_4712))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1161z00_4712))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_6429 = ((BgL_blockz00_bglt) BgL_new1161z00_4712);
				return ((obj_t) BgL_auxz00_6429);
			}
		}

	}



/* &lambda2102 */
	BgL_blockz00_bglt BGl_z62lambda2102z62zzsaw_node2rtlz00(obj_t BgL_envz00_4713,
		obj_t BgL_o1158z00_4714)
	{
		{	/* SawMill/node2rtl.scm 20 */
			{	/* SawMill/node2rtl.scm 20 */
				BgL_reversedz00_bglt BgL_wide1160z00_4911;

				BgL_wide1160z00_4911 =
					((BgL_reversedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_reversedz00_bgl))));
				{	/* SawMill/node2rtl.scm 20 */
					obj_t BgL_auxz00_6451;
					BgL_objectz00_bglt BgL_tmpz00_6447;

					BgL_auxz00_6451 = ((obj_t) BgL_wide1160z00_4911);
					BgL_tmpz00_6447 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_4714)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6447, BgL_auxz00_6451);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_4714)));
				{	/* SawMill/node2rtl.scm 20 */
					long BgL_arg2103z00_4912;

					{	/* SawMill/node2rtl.scm 20 */
						long BgL_res2786z00_4913;

						BgL_res2786z00_4913 =
							BGL_CLASS_INDEX(BGl_reversedz00zzsaw_node2rtlz00);
						BgL_arg2103z00_4912 = BgL_res2786z00_4913;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1158z00_4714))), BgL_arg2103z00_4912);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1158z00_4714)));
			}
		}

	}



/* &lambda2099 */
	BgL_blockz00_bglt BGl_z62lambda2099z62zzsaw_node2rtlz00(obj_t BgL_envz00_4715,
		obj_t BgL_label1154z00_4716, obj_t BgL_preds1155z00_4717,
		obj_t BgL_succs1156z00_4718, obj_t BgL_first1157z00_4719)
	{
		{	/* SawMill/node2rtl.scm 20 */
			{	/* SawMill/node2rtl.scm 20 */
				int BgL_label1154z00_4914;

				BgL_label1154z00_4914 = CINT(BgL_label1154z00_4716);
				{	/* SawMill/node2rtl.scm 20 */
					BgL_blockz00_bglt BgL_new1358z00_4918;

					{	/* SawMill/node2rtl.scm 20 */
						BgL_blockz00_bglt BgL_tmp1356z00_4919;
						BgL_reversedz00_bglt BgL_wide1357z00_4920;

						{
							BgL_blockz00_bglt BgL_auxz00_6466;

							{	/* SawMill/node2rtl.scm 20 */
								BgL_blockz00_bglt BgL_new1355z00_4921;

								BgL_new1355z00_4921 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/node2rtl.scm 20 */
									long BgL_arg2101z00_4922;

									{	/* SawMill/node2rtl.scm 20 */
										long BgL_res2784z00_4923;

										BgL_res2784z00_4923 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg2101z00_4922 = BgL_res2784z00_4923;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1355z00_4921),
										BgL_arg2101z00_4922);
								}
								{	/* SawMill/node2rtl.scm 20 */
									BgL_objectz00_bglt BgL_tmpz00_6471;

									BgL_tmpz00_6471 = ((BgL_objectz00_bglt) BgL_new1355z00_4921);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6471, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1355z00_4921);
								BgL_auxz00_6466 = BgL_new1355z00_4921;
							}
							BgL_tmp1356z00_4919 = ((BgL_blockz00_bglt) BgL_auxz00_6466);
						}
						BgL_wide1357z00_4920 =
							((BgL_reversedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_reversedz00_bgl))));
						{	/* SawMill/node2rtl.scm 20 */
							obj_t BgL_auxz00_6479;
							BgL_objectz00_bglt BgL_tmpz00_6477;

							BgL_auxz00_6479 = ((obj_t) BgL_wide1357z00_4920);
							BgL_tmpz00_6477 = ((BgL_objectz00_bglt) BgL_tmp1356z00_4919);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6477, BgL_auxz00_6479);
						}
						((BgL_objectz00_bglt) BgL_tmp1356z00_4919);
						{	/* SawMill/node2rtl.scm 20 */
							long BgL_arg2100z00_4924;

							{	/* SawMill/node2rtl.scm 20 */
								long BgL_res2785z00_4925;

								BgL_res2785z00_4925 =
									BGL_CLASS_INDEX(BGl_reversedz00zzsaw_node2rtlz00);
								BgL_arg2100z00_4924 = BgL_res2785z00_4925;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1356z00_4919),
								BgL_arg2100z00_4924);
						}
						BgL_new1358z00_4918 = ((BgL_blockz00_bglt) BgL_tmp1356z00_4919);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1358z00_4918)))->BgL_labelz00) =
						((int) BgL_label1154z00_4914), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1358z00_4918)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1155z00_4717)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1358z00_4918)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1156z00_4718)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1358z00_4918)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1157z00_4719)), BUNSPEC);
					return BgL_new1358z00_4918;
				}
			}
		}

	}



/* &<@anonymous:2082> */
	obj_t BGl_z62zc3z04anonymousza32082ze3ze5zzsaw_node2rtlz00(obj_t
		BgL_envz00_4720, obj_t BgL_new1152z00_4721)
	{
		{	/* SawMill/node2rtl.scm 19 */
			{
				BgL_areaz00_bglt BgL_auxz00_6498;

				{
					BgL_blockz00_bglt BgL_auxz00_6499;

					{	/* SawMill/node2rtl.scm 19 */
						obj_t BgL_classz00_4927;

						BgL_classz00_4927 = BGl_blockz00zzsaw_defsz00;
						{	/* SawMill/node2rtl.scm 19 */
							obj_t BgL__ortest_1106z00_4928;

							BgL__ortest_1106z00_4928 = BGL_CLASS_NIL(BgL_classz00_4927);
							if (CBOOL(BgL__ortest_1106z00_4928))
								{	/* SawMill/node2rtl.scm 19 */
									BgL_auxz00_6499 =
										((BgL_blockz00_bglt) BgL__ortest_1106z00_4928);
								}
							else
								{	/* SawMill/node2rtl.scm 19 */
									BgL_auxz00_6499 =
										((BgL_blockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4927));
								}
						}
					}
					((((BgL_areaz00_bglt) COBJECT(
									((BgL_areaz00_bglt) BgL_new1152z00_4721)))->BgL_entryz00) =
						((BgL_blockz00_bglt) BgL_auxz00_6499), BUNSPEC);
				}
				{
					BgL_blockz00_bglt BgL_auxz00_6508;

					{	/* SawMill/node2rtl.scm 19 */
						obj_t BgL_classz00_4929;

						BgL_classz00_4929 = BGl_blockz00zzsaw_defsz00;
						{	/* SawMill/node2rtl.scm 19 */
							obj_t BgL__ortest_1106z00_4930;

							BgL__ortest_1106z00_4930 = BGL_CLASS_NIL(BgL_classz00_4929);
							if (CBOOL(BgL__ortest_1106z00_4930))
								{	/* SawMill/node2rtl.scm 19 */
									BgL_auxz00_6508 =
										((BgL_blockz00_bglt) BgL__ortest_1106z00_4930);
								}
							else
								{	/* SawMill/node2rtl.scm 19 */
									BgL_auxz00_6508 =
										((BgL_blockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4929));
								}
						}
					}
					((((BgL_areaz00_bglt) COBJECT(
									((BgL_areaz00_bglt) BgL_new1152z00_4721)))->BgL_exitz00) =
						((BgL_blockz00_bglt) BgL_auxz00_6508), BUNSPEC);
				}
				BgL_auxz00_6498 = ((BgL_areaz00_bglt) BgL_new1152z00_4721);
				return ((obj_t) BgL_auxz00_6498);
			}
		}

	}



/* &lambda2080 */
	BgL_areaz00_bglt BGl_z62lambda2080z62zzsaw_node2rtlz00(obj_t BgL_envz00_4722)
	{
		{	/* SawMill/node2rtl.scm 19 */
			{	/* SawMill/node2rtl.scm 19 */
				BgL_areaz00_bglt BgL_new1151z00_4931;

				BgL_new1151z00_4931 =
					((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_areaz00_bgl))));
				{	/* SawMill/node2rtl.scm 19 */
					long BgL_arg2081z00_4932;

					{	/* SawMill/node2rtl.scm 19 */
						long BgL_res2783z00_4933;

						BgL_res2783z00_4933 = BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
						BgL_arg2081z00_4932 = BgL_res2783z00_4933;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1151z00_4931), BgL_arg2081z00_4932);
				}
				return BgL_new1151z00_4931;
			}
		}

	}



/* &lambda2078 */
	BgL_areaz00_bglt BGl_z62lambda2078z62zzsaw_node2rtlz00(obj_t BgL_envz00_4723,
		obj_t BgL_entry1149z00_4724, obj_t BgL_exit1150z00_4725)
	{
		{	/* SawMill/node2rtl.scm 19 */
			{	/* SawMill/node2rtl.scm 19 */
				BgL_areaz00_bglt BgL_new1354z00_4936;

				{	/* SawMill/node2rtl.scm 19 */
					BgL_areaz00_bglt BgL_new1353z00_4937;

					BgL_new1353z00_4937 =
						((BgL_areaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_areaz00_bgl))));
					{	/* SawMill/node2rtl.scm 19 */
						long BgL_arg2079z00_4938;

						{	/* SawMill/node2rtl.scm 19 */
							long BgL_res2782z00_4939;

							BgL_res2782z00_4939 =
								BGL_CLASS_INDEX(BGl_areaz00zzsaw_node2rtlz00);
							BgL_arg2079z00_4938 = BgL_res2782z00_4939;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1353z00_4937), BgL_arg2079z00_4938);
					}
					BgL_new1354z00_4936 = BgL_new1353z00_4937;
				}
				((((BgL_areaz00_bglt) COBJECT(BgL_new1354z00_4936))->BgL_entryz00) =
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_entry1149z00_4724)),
					BUNSPEC);
				((((BgL_areaz00_bglt) COBJECT(BgL_new1354z00_4936))->BgL_exitz00) =
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_exit1150z00_4725)),
					BUNSPEC);
				return BgL_new1354z00_4936;
			}
		}

	}



/* &lambda2092 */
	obj_t BGl_z62lambda2092z62zzsaw_node2rtlz00(obj_t BgL_envz00_4726,
		obj_t BgL_oz00_4727, obj_t BgL_vz00_4728)
	{
		{	/* SawMill/node2rtl.scm 19 */
			return
				((((BgL_areaz00_bglt) COBJECT(
							((BgL_areaz00_bglt) BgL_oz00_4727)))->BgL_exitz00) =
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_vz00_4728)), BUNSPEC);
		}

	}



/* &lambda2091 */
	BgL_blockz00_bglt BGl_z62lambda2091z62zzsaw_node2rtlz00(obj_t BgL_envz00_4729,
		obj_t BgL_oz00_4730)
	{
		{	/* SawMill/node2rtl.scm 19 */
			return
				(((BgL_areaz00_bglt) COBJECT(
						((BgL_areaz00_bglt) BgL_oz00_4730)))->BgL_exitz00);
		}

	}



/* &lambda2087 */
	obj_t BGl_z62lambda2087z62zzsaw_node2rtlz00(obj_t BgL_envz00_4731,
		obj_t BgL_oz00_4732, obj_t BgL_vz00_4733)
	{
		{	/* SawMill/node2rtl.scm 19 */
			return
				((((BgL_areaz00_bglt) COBJECT(
							((BgL_areaz00_bglt) BgL_oz00_4732)))->BgL_entryz00) =
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_vz00_4733)), BUNSPEC);
		}

	}



/* &lambda2086 */
	BgL_blockz00_bglt BGl_z62lambda2086z62zzsaw_node2rtlz00(obj_t BgL_envz00_4734,
		obj_t BgL_oz00_4735)
	{
		{	/* SawMill/node2rtl.scm 19 */
			return
				(((BgL_areaz00_bglt) COBJECT(
						((BgL_areaz00_bglt) BgL_oz00_4735)))->BgL_entryz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_proc2930z00zzsaw_node2rtlz00, BGl_nodez00zzast_nodez00,
				BGl_string2931z00zzsaw_node2rtlz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
				BGl_proc2932z00zzsaw_node2rtlz00, BGl_nodez00zzast_nodez00,
				BGl_string2933z00zzsaw_node2rtlz00);
		}

	}



/* &predicate1732 */
	obj_t BGl_z62predicate1732z62zzsaw_node2rtlz00(obj_t BgL_envz00_4738,
		obj_t BgL_ez00_4739, obj_t BgL_joinedz00_4740)
	{
		{	/* SawMill/node2rtl.scm 473 */
			{
				BgL_areaz00_bglt BgL_auxz00_6543;

				{	/* SawMill/node2rtl.scm 474 */
					BgL_areaz00_bglt BgL_arg2140z00_4947;

					{	/* SawMill/node2rtl.scm 474 */
						BgL_rtl_ifz00_bglt BgL_arg2141z00_4948;

						{	/* SawMill/node2rtl.scm 474 */
							BgL_rtl_ifz00_bglt BgL_new1347z00_4949;

							{	/* SawMill/node2rtl.scm 474 */
								BgL_rtl_ifz00_bglt BgL_new1346z00_4950;

								BgL_new1346z00_4950 =
									((BgL_rtl_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_ifz00_bgl))));
								{	/* SawMill/node2rtl.scm 474 */
									long BgL_arg2143z00_4951;

									{	/* SawMill/node2rtl.scm 474 */
										long BgL_res2796z00_4952;

										BgL_res2796z00_4952 =
											BGL_CLASS_INDEX(BGl_rtl_ifz00zzsaw_defsz00);
										BgL_arg2143z00_4951 = BgL_res2796z00_4952;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1346z00_4950),
										BgL_arg2143z00_4951);
								}
								BgL_new1347z00_4949 = BgL_new1346z00_4950;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1347z00_4949)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg2141z00_4948 = BgL_new1347z00_4949;
						}
						{	/* SawMill/node2rtl.scm 474 */
							obj_t BgL_list2142z00_4953;

							BgL_list2142z00_4953 =
								MAKE_YOUNG_PAIR(
								((obj_t) ((BgL_nodez00_bglt) BgL_ez00_4739)), BNIL);
							{	/* SawMill/node2rtl.scm 474 */
								BgL_areaz00_bglt BgL_res2797z00_4954;

								BgL_res2797z00_4954 =
									BGl_callza2za2zzsaw_node2rtlz00(
									((obj_t)
										((BgL_nodez00_bglt) BgL_ez00_4739)),
									((BgL_rtl_funz00_bglt) BgL_arg2141z00_4948),
									BgL_list2142z00_4953);
								BgL_arg2140z00_4947 = BgL_res2797z00_4954;
					}}}
					BgL_auxz00_6543 =
						BGl_forkz00zzsaw_node2rtlz00(BgL_arg2140z00_4947,
						BgL_joinedz00_4740);
				}
				return ((obj_t) BgL_auxz00_6543);
			}
		}

	}



/* &node->rtl1669 */
	obj_t BGl_z62nodezd2ze3rtl1669z53zzsaw_node2rtlz00(obj_t BgL_envz00_4741,
		obj_t BgL_ez00_4742)
	{
		{	/* SawMill/node2rtl.scm 204 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 13)),
				BGl_string2934z00zzsaw_node2rtlz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_ez00_4742)));
		}

	}



/* node->rtl */
	BgL_areaz00_bglt BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_137)
	{
		{	/* SawMill/node2rtl.scm 204 */
			{	/* SawMill/node2rtl.scm 204 */
				obj_t BgL_method1670z00_2829;

				{	/* SawMill/node2rtl.scm 204 */
					obj_t BgL_res2808z00_4303;

					{	/* SawMill/node2rtl.scm 204 */
						long BgL_objzd2classzd2numz00_4268;

						{	/* SawMill/node2rtl.scm 204 */
							long BgL_res2798z00_4271;

							BgL_res2798z00_4271 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_137));
							BgL_objzd2classzd2numz00_4268 = BgL_res2798z00_4271;
						}
						{	/* SawMill/node2rtl.scm 204 */
							obj_t BgL_arg1813z00_4269;

							BgL_arg1813z00_4269 =
								PROCEDURE_REF(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
								(int) (((long) 1)));
							{	/* SawMill/node2rtl.scm 204 */
								int BgL_offsetz00_4273;

								BgL_offsetz00_4273 = (int) (BgL_objzd2classzd2numz00_4268);
								{	/* SawMill/node2rtl.scm 204 */
									long BgL_offsetz00_4274;

									BgL_offsetz00_4274 =
										((long) (BgL_offsetz00_4273) - OBJECT_TYPE);
									{	/* SawMill/node2rtl.scm 204 */
										long BgL_modz00_4275;

										BgL_modz00_4275 =
											(BgL_offsetz00_4274 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/node2rtl.scm 204 */
											long BgL_restz00_4277;

											BgL_restz00_4277 =
												(BgL_offsetz00_4274 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/node2rtl.scm 204 */

												{	/* SawMill/node2rtl.scm 204 */
													obj_t BgL_bucketz00_4279;

													BgL_bucketz00_4279 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4269), BgL_modz00_4275);
													BgL_res2808z00_4303 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4279), BgL_restz00_4277);
					}}}}}}}}
					BgL_method1670z00_2829 = BgL_res2808z00_4303;
				}
				return
					((BgL_areaz00_bglt)
					PROCEDURE_ENTRY(BgL_method1670z00_2829) (BgL_method1670z00_2829,
						((obj_t) BgL_ez00_137), BEOA));
			}
		}

	}



/* &node->rtl */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlz53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4743, obj_t BgL_ez00_4744)
	{
		{	/* SawMill/node2rtl.scm 204 */
			return
				BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
				((BgL_nodez00_bglt) BgL_ez00_4744));
		}

	}



/* predicate */
	BgL_areaz00_bglt BGl_predicatez00zzsaw_node2rtlz00(BgL_nodez00_bglt
		BgL_ez00_174, obj_t BgL_joinedz00_175)
	{
		{	/* SawMill/node2rtl.scm 473 */
			{	/* SawMill/node2rtl.scm 473 */
				obj_t BgL_method1733z00_2830;

				{	/* SawMill/node2rtl.scm 473 */
					obj_t BgL_res2819z00_4340;

					{	/* SawMill/node2rtl.scm 473 */
						long BgL_objzd2classzd2numz00_4305;

						{	/* SawMill/node2rtl.scm 473 */
							long BgL_res2809z00_4308;

							BgL_res2809z00_4308 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_174));
							BgL_objzd2classzd2numz00_4305 = BgL_res2809z00_4308;
						}
						{	/* SawMill/node2rtl.scm 473 */
							obj_t BgL_arg1813z00_4306;

							BgL_arg1813z00_4306 =
								PROCEDURE_REF(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
								(int) (((long) 1)));
							{	/* SawMill/node2rtl.scm 473 */
								int BgL_offsetz00_4310;

								BgL_offsetz00_4310 = (int) (BgL_objzd2classzd2numz00_4305);
								{	/* SawMill/node2rtl.scm 473 */
									long BgL_offsetz00_4311;

									BgL_offsetz00_4311 =
										((long) (BgL_offsetz00_4310) - OBJECT_TYPE);
									{	/* SawMill/node2rtl.scm 473 */
										long BgL_modz00_4312;

										BgL_modz00_4312 =
											(BgL_offsetz00_4311 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/node2rtl.scm 473 */
											long BgL_restz00_4314;

											BgL_restz00_4314 =
												(BgL_offsetz00_4311 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/node2rtl.scm 473 */

												{	/* SawMill/node2rtl.scm 473 */
													obj_t BgL_bucketz00_4316;

													BgL_bucketz00_4316 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4306), BgL_modz00_4312);
													BgL_res2819z00_4340 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4316), BgL_restz00_4314);
					}}}}}}}}
					BgL_method1733z00_2830 = BgL_res2819z00_4340;
				}
				return
					((BgL_areaz00_bglt)
					PROCEDURE_ENTRY(BgL_method1733z00_2830) (BgL_method1733z00_2830,
						((obj_t) BgL_ez00_174), BgL_joinedz00_175, BEOA));
			}
		}

	}



/* &predicate */
	BgL_areaz00_bglt BGl_z62predicatez62zzsaw_node2rtlz00(obj_t BgL_envz00_4745,
		obj_t BgL_ez00_4746, obj_t BgL_joinedz00_4747)
	{
		{	/* SawMill/node2rtl.scm 473 */
			return
				BGl_predicatez00zzsaw_node2rtlz00(
				((BgL_nodez00_bglt) BgL_ez00_4746), BgL_joinedz00_4747);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_atomz00zzast_nodez00,
				BGl_proc2935z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_varz00zzast_nodez00,
				BGl_proc2937z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2938z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_setqz00zzast_nodez00,
				BGl_proc2939z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2940z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_syncz00zzast_nodez00,
				BGl_proc2941z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2942z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_switchz00zzast_nodez00, BGl_proc2943z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2944z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_appz00zzast_nodez00,
				BGl_proc2945z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2946z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2947z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_pragmaz00zzast_nodez00, BGl_proc2948z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc2949z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc2950z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_newz00zzast_nodez00,
				BGl_proc2951z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vallocz00zzast_nodez00, BGl_proc2952z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_vrefz00zzast_nodez00,
				BGl_proc2953z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc2954z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc2955z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_instanceofz00zzast_nodez00, BGl_proc2956z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_castz00zzast_nodez00,
				BGl_proc2957z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc2958z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2959z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2960z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00, BGl_failz00zzast_nodez00,
				BGl_proc2961z00zzsaw_node2rtlz00, BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2962z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2963z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3rtlzd2envze3zzsaw_node2rtlz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2964z00zzsaw_node2rtlz00,
				BGl_string2936z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00, BGl_atomz00zzast_nodez00,
				BGl_proc2965z00zzsaw_node2rtlz00, BGl_string2966z00zzsaw_node2rtlz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2967z00zzsaw_node2rtlz00,
				BGl_string2966z00zzsaw_node2rtlz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_predicatezd2envzd2zzsaw_node2rtlz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2968z00zzsaw_node2rtlz00, BGl_string2966z00zzsaw_node2rtlz00);
		}

	}



/* &predicate-let-var1739 */
	BgL_areaz00_bglt BGl_z62predicatezd2letzd2var1739z62zzsaw_node2rtlz00(obj_t
		BgL_envz00_4780, obj_t BgL_ez00_4781, obj_t BgL_lz00_4782)
	{
		{	/* SawMill/node2rtl.scm 489 */
			{	/* SawMill/node2rtl.scm 493 */
				bool_t BgL_test3094z00_6662;

				if (NULLP(
						(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bindingsz00)))
					{	/* SawMill/node2rtl.scm 493 */
						BgL_test3094z00_6662 = ((bool_t) 0);
					}
				else
					{	/* SawMill/node2rtl.scm 493 */
						if (NULLP(CDR(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->
										BgL_bindingsz00))))
							{	/* SawMill/node2rtl.scm 495 */
								bool_t BgL_test3097z00_6672;

								{	/* SawMill/node2rtl.scm 495 */
									BgL_nodez00_bglt BgL_arg2532z00_4957;

									BgL_arg2532z00_4957 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bodyz00);
									{	/* SawMill/node2rtl.scm 495 */
										bool_t BgL_res2901z00_4958;

										BgL_res2901z00_4958 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg2532z00_4957), BGl_varz00zzast_nodez00);
										BgL_test3097z00_6672 = BgL_res2901z00_4958;
									}
								}
								if (BgL_test3097z00_6672)
									{	/* SawMill/node2rtl.scm 496 */
										obj_t BgL_tmpz00_6677;

										{	/* SawMill/node2rtl.scm 496 */
											obj_t BgL_pairz00_4959;

											BgL_pairz00_4959 =
												(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->
												BgL_bindingsz00);
											BgL_tmpz00_6677 = CAR(CAR(BgL_pairz00_4959));
										}
										BgL_test3094z00_6662 =
											(BgL_tmpz00_6677 ==
											((obj_t)
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt)
																(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_ez00_4781)))->BgL_bodyz00))))->
													BgL_variablez00)));
									}
								else
									{	/* SawMill/node2rtl.scm 495 */
										BgL_test3094z00_6662 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/node2rtl.scm 494 */
								BgL_test3094z00_6662 = ((bool_t) 0);
							}
					}
				if (BgL_test3094z00_6662)
					{	/* SawMill/node2rtl.scm 498 */
						obj_t BgL_arg2451z00_4960;

						{	/* SawMill/node2rtl.scm 498 */
							obj_t BgL_pairz00_4961;

							BgL_pairz00_4961 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bindingsz00);
							BgL_arg2451z00_4960 = CDR(CAR(BgL_pairz00_4961));
						}
						return
							BGl_predicatez00zzsaw_node2rtlz00(
							((BgL_nodez00_bglt) BgL_arg2451z00_4960), BgL_lz00_4782);
					}
				else
					{	/* SawMill/node2rtl.scm 499 */
						bool_t BgL_test3098z00_6694;

						{	/* SawMill/node2rtl.scm 499 */
							bool_t BgL_test3099z00_6695;

							{	/* SawMill/node2rtl.scm 499 */
								BgL_nodez00_bglt BgL_arg2525z00_4962;

								BgL_arg2525z00_4962 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bodyz00);
								{	/* SawMill/node2rtl.scm 499 */
									bool_t BgL_res2902z00_4963;

									BgL_res2902z00_4963 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg2525z00_4962),
										BGl_conditionalz00zzast_nodez00);
									BgL_test3099z00_6695 = BgL_res2902z00_4963;
								}
							}
							if (BgL_test3099z00_6695)
								{	/* SawMill/node2rtl.scm 499 */
									if (NULLP(
											(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->
												BgL_bindingsz00)))
										{	/* SawMill/node2rtl.scm 500 */
											BgL_test3098z00_6694 = ((bool_t) 0);
										}
									else
										{	/* SawMill/node2rtl.scm 500 */
											if (NULLP(CDR(
														(((BgL_letzd2varzd2_bglt) COBJECT(
																	((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->
															BgL_bindingsz00))))
												{	/* SawMill/node2rtl.scm 502 */
													bool_t BgL_test3102z00_6709;

													{	/* SawMill/node2rtl.scm 502 */
														BgL_nodez00_bglt BgL_arg2519z00_4964;

														BgL_arg2519z00_4964 =
															(((BgL_conditionalz00_bglt) COBJECT(
																	((BgL_conditionalz00_bglt)
																		(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_ez00_4781)))->BgL_bodyz00))))->
															BgL_testz00);
														{	/* SawMill/node2rtl.scm 502 */
															bool_t BgL_res2905z00_4965;

															BgL_res2905z00_4965 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg2519z00_4964),
																BGl_varz00zzast_nodez00);
															BgL_test3102z00_6709 = BgL_res2905z00_4965;
														}
													}
													if (BgL_test3102z00_6709)
														{	/* SawMill/node2rtl.scm 503 */
															bool_t BgL_test3103z00_6716;

															{	/* SawMill/node2rtl.scm 503 */
																long BgL_tmpz00_6717;

																{
																	BgL_variablez00_bglt BgL_auxz00_6718;

																	{
																		BgL_localz00_bglt BgL_auxz00_6719;

																		{
																			obj_t BgL_auxz00_6720;

																			{	/* SawMill/node2rtl.scm 503 */
																				obj_t BgL_pairz00_4966;

																				BgL_pairz00_4966 =
																					(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_ez00_4781)))->
																					BgL_bindingsz00);
																				{	/* SawMill/node2rtl.scm 503 */
																					obj_t BgL_pairz00_4967;

																					BgL_pairz00_4967 =
																						CAR(BgL_pairz00_4966);
																					BgL_auxz00_6720 =
																						CAR(BgL_pairz00_4967);
																			}}
																			BgL_auxz00_6719 =
																				((BgL_localz00_bglt) BgL_auxz00_6720);
																		}
																		BgL_auxz00_6718 =
																			((BgL_variablez00_bglt) BgL_auxz00_6719);
																	}
																	BgL_tmpz00_6717 =
																		(((BgL_variablez00_bglt)
																			COBJECT(BgL_auxz00_6718))->
																		BgL_occurrencez00);
																}
																BgL_test3103z00_6716 =
																	(((long) 1) == BgL_tmpz00_6717);
															}
															if (BgL_test3103z00_6716)
																{	/* SawMill/node2rtl.scm 504 */
																	obj_t BgL_tmpz00_6729;

																	{	/* SawMill/node2rtl.scm 504 */
																		obj_t BgL_pairz00_4968;

																		BgL_pairz00_4968 =
																			(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_ez00_4781)))->BgL_bindingsz00);
																		BgL_tmpz00_6729 =
																			CAR(CAR(BgL_pairz00_4968));
																	}
																	BgL_test3098z00_6694 =
																		(BgL_tmpz00_6729 ==
																		((obj_t)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							(((BgL_conditionalz00_bglt)
																									COBJECT((
																											(BgL_conditionalz00_bglt)
																											(((BgL_letzd2varzd2_bglt)
																													COBJECT((
																															(BgL_letzd2varzd2_bglt)
																															BgL_ez00_4781)))->
																												BgL_bodyz00))))->
																								BgL_testz00))))->
																				BgL_variablez00)));
																}
															else
																{	/* SawMill/node2rtl.scm 503 */
																	BgL_test3098z00_6694 = ((bool_t) 0);
																}
														}
													else
														{	/* SawMill/node2rtl.scm 502 */
															BgL_test3098z00_6694 = ((bool_t) 0);
														}
												}
											else
												{	/* SawMill/node2rtl.scm 501 */
													BgL_test3098z00_6694 = ((bool_t) 0);
												}
										}
								}
							else
								{	/* SawMill/node2rtl.scm 499 */
									BgL_test3098z00_6694 = ((bool_t) 0);
								}
						}
						if (BgL_test3098z00_6694)
							{	/* SawMill/node2rtl.scm 499 */
								{	/* SawMill/node2rtl.scm 506 */
									BgL_nodez00_bglt BgL_arg2488z00_4969;
									obj_t BgL_arg2491z00_4970;

									BgL_arg2488z00_4969 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bodyz00);
									{	/* SawMill/node2rtl.scm 506 */
										obj_t BgL_pairz00_4971;

										BgL_pairz00_4971 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->
											BgL_bindingsz00);
										BgL_arg2491z00_4970 = CDR(CAR(BgL_pairz00_4971));
									}
									((((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_arg2488z00_4969)))->
											BgL_testz00) =
										((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
												BgL_arg2491z00_4970)), BUNSPEC);
								}
								return
									BGl_predicatez00zzsaw_node2rtlz00(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_ez00_4781)))->BgL_bodyz00),
									BgL_lz00_4782);
							}
						else
							{	/* SawMill/node2rtl.scm 509 */
								BgL_areaz00_bglt BgL_arg2497z00_4972;

								{	/* SawMill/node2rtl.scm 509 */
									BgL_rtl_ifz00_bglt BgL_arg2499z00_4973;

									{	/* SawMill/node2rtl.scm 509 */
										BgL_rtl_ifz00_bglt BgL_new1352z00_4974;

										{	/* SawMill/node2rtl.scm 509 */
											BgL_rtl_ifz00_bglt BgL_new1351z00_4975;

											BgL_new1351z00_4975 =
												((BgL_rtl_ifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_ifz00_bgl))));
											{	/* SawMill/node2rtl.scm 509 */
												long BgL_arg2501z00_4976;

												{	/* SawMill/node2rtl.scm 509 */
													long BgL_res2907z00_4977;

													BgL_res2907z00_4977 =
														BGL_CLASS_INDEX(BGl_rtl_ifz00zzsaw_defsz00);
													BgL_arg2501z00_4976 = BgL_res2907z00_4977;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1351z00_4975),
													BgL_arg2501z00_4976);
											}
											BgL_new1352z00_4974 = BgL_new1351z00_4975;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1352z00_4974)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										BgL_arg2499z00_4973 = BgL_new1352z00_4974;
									}
									{	/* SawMill/node2rtl.scm 509 */
										obj_t BgL_list2500z00_4978;

										BgL_list2500z00_4978 =
											MAKE_YOUNG_PAIR(
											((obj_t) ((BgL_letzd2varzd2_bglt) BgL_ez00_4781)), BNIL);
										{	/* SawMill/node2rtl.scm 509 */
											BgL_areaz00_bglt BgL_res2908z00_4979;

											BgL_res2908z00_4979 =
												BGl_callza2za2zzsaw_node2rtlz00(
												((obj_t)
													((BgL_letzd2varzd2_bglt) BgL_ez00_4781)),
												((BgL_rtl_funz00_bglt) BgL_arg2499z00_4973),
												BgL_list2500z00_4978);
											BgL_arg2497z00_4972 = BgL_res2908z00_4979;
								}}}
								return
									BGl_forkz00zzsaw_node2rtlz00(BgL_arg2497z00_4972,
									BgL_lz00_4782);
							}
					}
			}
		}

	}



/* &predicate-conditiona1737 */
	BgL_areaz00_bglt BGl_z62predicatezd2conditiona1737zb0zzsaw_node2rtlz00(obj_t
		BgL_envz00_4783, obj_t BgL_ez00_4784, obj_t BgL_lz00_4785)
	{
		{	/* SawMill/node2rtl.scm 484 */
			{	/* SawMill/node2rtl.scm 486 */
				BgL_nodez00_bglt BgL_arg2420z00_4981;
				obj_t BgL_arg2421z00_4982;

				BgL_arg2420z00_4981 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_ez00_4784)))->BgL_testz00);
				{	/* SawMill/node2rtl.scm 486 */
					BgL_areaz00_bglt BgL_arg2422z00_4983;
					BgL_areaz00_bglt BgL_arg2424z00_4984;

					BgL_arg2422z00_4983 =
						BGl_predicatez00zzsaw_node2rtlz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_ez00_4784)))->BgL_truez00),
						BgL_lz00_4785);
					BgL_arg2424z00_4984 =
						BGl_predicatez00zzsaw_node2rtlz00((((BgL_conditionalz00_bglt)
								COBJECT(((BgL_conditionalz00_bglt) BgL_ez00_4784)))->
							BgL_falsez00), BgL_lz00_4785);
					{	/* SawMill/node2rtl.scm 486 */
						obj_t BgL_list2425z00_4985;

						{	/* SawMill/node2rtl.scm 486 */
							obj_t BgL_arg2426z00_4986;

							BgL_arg2426z00_4986 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg2424z00_4984), BNIL);
							BgL_list2425z00_4985 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2422z00_4983), BgL_arg2426z00_4986);
						}
						BgL_arg2421z00_4982 = BgL_list2425z00_4985;
					}
				}
				return
					BGl_predicatez00zzsaw_node2rtlz00(BgL_arg2420z00_4981,
					BgL_arg2421z00_4982);
			}
		}

	}



/* &predicate-atom1735 */
	BgL_areaz00_bglt BGl_z62predicatezd2atom1735zb0zzsaw_node2rtlz00(obj_t
		BgL_envz00_4786, obj_t BgL_ez00_4787, obj_t BgL_lz00_4788)
	{
		{	/* SawMill/node2rtl.scm 477 */
			if (CBOOL(
					(((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt) BgL_ez00_4787)))->BgL_valuez00)))
				{	/* SawMill/node2rtl.scm 479 */
					return ((BgL_areaz00_bglt) CAR(((obj_t) BgL_lz00_4788)));
				}
			else
				{	/* SawMill/node2rtl.scm 481 */
					obj_t BgL_pairz00_4988;

					BgL_pairz00_4988 = CDR(((obj_t) BgL_lz00_4788));
					return ((BgL_areaz00_bglt) CAR(BgL_pairz00_4988));
				}
		}

	}



/* &node->rtl-box-set!1731 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2boxzd2setz121731z41zzsaw_node2rtlz00(obj_t
		BgL_envz00_4789, obj_t BgL_ez00_4790)
	{
		{	/* SawMill/node2rtl.scm 465 */
			{	/* SawMill/node2rtl.scm 467 */
				BgL_areaz00_bglt BgL_arg2405z00_4990;
				BgL_areaz00_bglt BgL_arg2406z00_4991;

				{	/* SawMill/node2rtl.scm 467 */
					BgL_rtl_boxsetz00_bglt BgL_arg2407z00_4992;
					BgL_varz00_bglt BgL_arg2409z00_4993;
					BgL_nodez00_bglt BgL_arg2411z00_4994;

					{	/* SawMill/node2rtl.scm 467 */
						BgL_rtl_boxsetz00_bglt BgL_new1343z00_4995;

						{	/* SawMill/node2rtl.scm 467 */
							BgL_rtl_boxsetz00_bglt BgL_new1342z00_4996;

							BgL_new1342z00_4996 =
								((BgL_rtl_boxsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_boxsetz00_bgl))));
							{	/* SawMill/node2rtl.scm 467 */
								long BgL_arg2414z00_4997;

								{	/* SawMill/node2rtl.scm 467 */
									long BgL_res2894z00_4998;

									BgL_res2894z00_4998 =
										BGL_CLASS_INDEX(BGl_rtl_boxsetz00zzsaw_defsz00);
									BgL_arg2414z00_4997 = BgL_res2894z00_4998;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1342z00_4996),
									BgL_arg2414z00_4997);
							}
							BgL_new1343z00_4995 = BgL_new1342z00_4996;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1343z00_4995)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2407z00_4992 = BgL_new1343z00_4995;
					}
					BgL_arg2409z00_4993 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_ez00_4790)))->BgL_varz00);
					BgL_arg2411z00_4994 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_ez00_4790)))->BgL_valuez00);
					{	/* SawMill/node2rtl.scm 467 */
						obj_t BgL_list2412z00_4999;

						{	/* SawMill/node2rtl.scm 467 */
							obj_t BgL_arg2413z00_5000;

							BgL_arg2413z00_5000 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg2411z00_4994), BNIL);
							BgL_list2412z00_4999 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2409z00_4993), BgL_arg2413z00_5000);
						}
						{	/* SawMill/node2rtl.scm 467 */
							BgL_areaz00_bglt BgL_res2895z00_5001;

							BgL_res2895z00_5001 =
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_boxzd2setz12zc0_bglt) BgL_ez00_4790)),
								((BgL_rtl_funz00_bglt) BgL_arg2407z00_4992),
								BgL_list2412z00_4999);
							BgL_arg2405z00_4990 = BgL_res2895z00_5001;
				}}}
				{	/* SawMill/node2rtl.scm 468 */
					BgL_rtl_nopz00_bglt BgL_arg2415z00_5002;

					{	/* SawMill/node2rtl.scm 468 */
						BgL_rtl_nopz00_bglt BgL_new1345z00_5003;

						{	/* SawMill/node2rtl.scm 468 */
							BgL_rtl_nopz00_bglt BgL_new1344z00_5004;

							BgL_new1344z00_5004 =
								((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_nopz00_bgl))));
							{	/* SawMill/node2rtl.scm 468 */
								long BgL_arg2418z00_5005;

								{	/* SawMill/node2rtl.scm 468 */
									long BgL_res2896z00_5006;

									BgL_res2896z00_5006 =
										BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
									BgL_arg2418z00_5005 = BgL_res2896z00_5006;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1344z00_5004),
									BgL_arg2418z00_5005);
							}
							BgL_new1345z00_5003 = BgL_new1344z00_5004;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1345z00_5003)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2415z00_5002 = BgL_new1345z00_5003;
					}
					{	/* SawMill/node2rtl.scm 468 */
						BgL_areaz00_bglt BgL_res2897z00_5007;

						BgL_res2897z00_5007 =
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							((BgL_rtl_funz00_bglt) BgL_arg2415z00_5002), BNIL);
						BgL_arg2406z00_4991 = BgL_res2897z00_5007;
				}}
				return
					BGl_linkz00zzsaw_node2rtlz00(BgL_arg2405z00_4990,
					BgL_arg2406z00_4991);
			}
		}

	}



/* &node->rtl-box-ref1729 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2boxzd2ref1729z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4791, obj_t BgL_ez00_4792)
	{
		{	/* SawMill/node2rtl.scm 460 */
			{	/* SawMill/node2rtl.scm 462 */
				BgL_rtl_boxrefz00_bglt BgL_arg2399z00_5009;
				BgL_varz00_bglt BgL_arg2402z00_5010;

				{	/* SawMill/node2rtl.scm 462 */
					BgL_rtl_boxrefz00_bglt BgL_new1340z00_5011;

					{	/* SawMill/node2rtl.scm 462 */
						BgL_rtl_boxrefz00_bglt BgL_new1339z00_5012;

						BgL_new1339z00_5012 =
							((BgL_rtl_boxrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_boxrefz00_bgl))));
						{	/* SawMill/node2rtl.scm 462 */
							long BgL_arg2404z00_5013;

							{	/* SawMill/node2rtl.scm 462 */
								long BgL_res2892z00_5014;

								BgL_res2892z00_5014 =
									BGL_CLASS_INDEX(BGl_rtl_boxrefz00zzsaw_defsz00);
								BgL_arg2404z00_5013 = BgL_res2892z00_5014;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1339z00_5012),
								BgL_arg2404z00_5013);
						}
						BgL_new1340z00_5011 = BgL_new1339z00_5012;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1340z00_5011)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					BgL_arg2399z00_5009 = BgL_new1340z00_5011;
				}
				BgL_arg2402z00_5010 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_ez00_4792)))->BgL_varz00);
				{	/* SawMill/node2rtl.scm 462 */
					obj_t BgL_list2403z00_5015;

					BgL_list2403z00_5015 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_arg2402z00_5010), BNIL);
					{	/* SawMill/node2rtl.scm 462 */
						BgL_areaz00_bglt BgL_res2893z00_5016;

						BgL_res2893z00_5016 =
							BGl_callza2za2zzsaw_node2rtlz00(
							((obj_t)
								((BgL_boxzd2refzd2_bglt) BgL_ez00_4792)),
							((BgL_rtl_funz00_bglt) BgL_arg2399z00_5009),
							BgL_list2403z00_5015);
						return BgL_res2893z00_5016;
					}
				}
			}
		}

	}



/* &node->rtl-make-box1727 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2makezd2box1727z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4793, obj_t BgL_ez00_4794)
	{
		{	/* SawMill/node2rtl.scm 455 */
			{	/* SawMill/node2rtl.scm 457 */
				BgL_rtl_makeboxz00_bglt BgL_arg2395z00_5018;
				BgL_nodez00_bglt BgL_arg2396z00_5019;

				{	/* SawMill/node2rtl.scm 457 */
					BgL_rtl_makeboxz00_bglt BgL_new1337z00_5020;

					{	/* SawMill/node2rtl.scm 457 */
						BgL_rtl_makeboxz00_bglt BgL_new1336z00_5021;

						BgL_new1336z00_5021 =
							((BgL_rtl_makeboxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_makeboxz00_bgl))));
						{	/* SawMill/node2rtl.scm 457 */
							long BgL_arg2398z00_5022;

							{	/* SawMill/node2rtl.scm 457 */
								long BgL_res2890z00_5023;

								BgL_res2890z00_5023 =
									BGL_CLASS_INDEX(BGl_rtl_makeboxz00zzsaw_defsz00);
								BgL_arg2398z00_5022 = BgL_res2890z00_5023;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1336z00_5021),
								BgL_arg2398z00_5022);
						}
						BgL_new1337z00_5020 = BgL_new1336z00_5021;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1337z00_5020)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					BgL_arg2395z00_5018 = BgL_new1337z00_5020;
				}
				BgL_arg2396z00_5019 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_ez00_4794)))->BgL_valuez00);
				{	/* SawMill/node2rtl.scm 457 */
					obj_t BgL_list2397z00_5024;

					BgL_list2397z00_5024 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_arg2396z00_5019), BNIL);
					{	/* SawMill/node2rtl.scm 457 */
						BgL_areaz00_bglt BgL_res2891z00_5025;

						BgL_res2891z00_5025 =
							BGl_callza2za2zzsaw_node2rtlz00(
							((obj_t)
								((BgL_makezd2boxzd2_bglt) BgL_ez00_4794)),
							((BgL_rtl_funz00_bglt) BgL_arg2395z00_5018),
							BgL_list2397z00_5024);
						return BgL_res2891z00_5025;
					}
				}
			}
		}

	}



/* &node->rtl-fail1725 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2fail1725z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4795, obj_t BgL_ez00_4796)
	{
		{	/* SawMill/node2rtl.scm 450 */
			{	/* SawMill/node2rtl.scm 452 */
				BgL_areaz00_bglt BgL_arg2383z00_5027;

				{	/* SawMill/node2rtl.scm 452 */
					BgL_rtl_failz00_bglt BgL_arg2384z00_5028;
					BgL_nodez00_bglt BgL_arg2385z00_5029;
					BgL_nodez00_bglt BgL_arg2388z00_5030;
					BgL_nodez00_bglt BgL_arg2389z00_5031;

					{	/* SawMill/node2rtl.scm 452 */
						BgL_rtl_failz00_bglt BgL_new1334z00_5032;

						{	/* SawMill/node2rtl.scm 452 */
							BgL_rtl_failz00_bglt BgL_new1333z00_5033;

							BgL_new1333z00_5033 =
								((BgL_rtl_failz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_failz00_bgl))));
							{	/* SawMill/node2rtl.scm 452 */
								long BgL_arg2393z00_5034;

								{	/* SawMill/node2rtl.scm 452 */
									long BgL_res2888z00_5035;

									BgL_res2888z00_5035 =
										BGL_CLASS_INDEX(BGl_rtl_failz00zzsaw_defsz00);
									BgL_arg2393z00_5034 = BgL_res2888z00_5035;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1333z00_5033),
									BgL_arg2393z00_5034);
							}
							BgL_new1334z00_5032 = BgL_new1333z00_5033;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1334z00_5032)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2384z00_5028 = BgL_new1334z00_5032;
					}
					BgL_arg2385z00_5029 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_ez00_4796)))->BgL_procz00);
					BgL_arg2388z00_5030 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_ez00_4796)))->BgL_msgz00);
					BgL_arg2389z00_5031 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_ez00_4796)))->BgL_objz00);
					{	/* SawMill/node2rtl.scm 452 */
						obj_t BgL_list2390z00_5036;

						{	/* SawMill/node2rtl.scm 452 */
							obj_t BgL_arg2391z00_5037;

							{	/* SawMill/node2rtl.scm 452 */
								obj_t BgL_arg2392z00_5038;

								BgL_arg2392z00_5038 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg2389z00_5031), BNIL);
								BgL_arg2391z00_5037 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg2388z00_5030), BgL_arg2392z00_5038);
							}
							BgL_list2390z00_5036 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2385z00_5029), BgL_arg2391z00_5037);
						}
						{	/* SawMill/node2rtl.scm 452 */
							BgL_areaz00_bglt BgL_res2889z00_5039;

							BgL_res2889z00_5039 =
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_failz00_bglt) BgL_ez00_4796)),
								((BgL_rtl_funz00_bglt) BgL_arg2384z00_5028),
								BgL_list2390z00_5036);
							BgL_arg2383z00_5027 = BgL_res2889z00_5039;
				}}}
				return BGl_unlinkz00zzsaw_node2rtlz00(BgL_arg2383z00_5027);
			}
		}

	}



/* &node->rtl-jump-ex-it1722 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2jumpzd2exzd2it1722z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4797, obj_t BgL_ez00_4798)
	{
		{	/* SawMill/node2rtl.scm 445 */
			{	/* SawMill/node2rtl.scm 447 */
				BgL_areaz00_bglt BgL_arg2374z00_5041;

				{	/* SawMill/node2rtl.scm 447 */
					BgL_rtl_jumpexitz00_bglt BgL_arg2376z00_5042;
					BgL_nodez00_bglt BgL_arg2377z00_5043;
					BgL_nodez00_bglt BgL_arg2379z00_5044;

					{	/* SawMill/node2rtl.scm 447 */
						BgL_rtl_jumpexitz00_bglt BgL_new1331z00_5045;

						{	/* SawMill/node2rtl.scm 447 */
							BgL_rtl_jumpexitz00_bglt BgL_new1330z00_5046;

							BgL_new1330z00_5046 =
								((BgL_rtl_jumpexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_jumpexitz00_bgl))));
							{	/* SawMill/node2rtl.scm 447 */
								long BgL_arg2382z00_5047;

								{	/* SawMill/node2rtl.scm 447 */
									long BgL_res2886z00_5048;

									BgL_res2886z00_5048 =
										BGL_CLASS_INDEX(BGl_rtl_jumpexitz00zzsaw_defsz00);
									BgL_arg2382z00_5047 = BgL_res2886z00_5048;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1330z00_5046),
									BgL_arg2382z00_5047);
							}
							BgL_new1331z00_5045 = BgL_new1330z00_5046;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1331z00_5045)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2376z00_5042 = BgL_new1331z00_5045;
					}
					BgL_arg2377z00_5043 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_ez00_4798)))->BgL_exitz00);
					BgL_arg2379z00_5044 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_ez00_4798)))->BgL_valuez00);
					{	/* SawMill/node2rtl.scm 447 */
						obj_t BgL_list2380z00_5049;

						{	/* SawMill/node2rtl.scm 447 */
							obj_t BgL_arg2381z00_5050;

							BgL_arg2381z00_5050 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg2379z00_5044), BNIL);
							BgL_list2380z00_5049 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2377z00_5043), BgL_arg2381z00_5050);
						}
						{	/* SawMill/node2rtl.scm 447 */
							BgL_areaz00_bglt BgL_res2887z00_5051;

							BgL_res2887z00_5051 =
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_jumpzd2exzd2itz00_bglt) BgL_ez00_4798)),
								((BgL_rtl_funz00_bglt) BgL_arg2376z00_5042),
								BgL_list2380z00_5049);
							BgL_arg2374z00_5041 = BgL_res2887z00_5051;
				}}}
				return BGl_unlinkz00zzsaw_node2rtlz00(BgL_arg2374z00_5041);
			}
		}

	}



/* &node->rtl-set-ex-it1720 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2setzd2exzd2it1720z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4799, obj_t BgL_ez00_4800)
	{
		{	/* SawMill/node2rtl.scm 437 */
			{	/* SawMill/node2rtl.scm 439 */
				BgL_areaz00_bglt BgL_arg2361z00_5053;
				BgL_areaz00_bglt BgL_arg2362z00_5054;

				{	/* SawMill/node2rtl.scm 439 */
					BgL_areaz00_bglt BgL_az00_5055;

					{	/* SawMill/node2rtl.scm 439 */
						BgL_rtl_protectz00_bglt BgL_arg2366z00_5056;

						{	/* SawMill/node2rtl.scm 439 */
							BgL_rtl_protectz00_bglt BgL_new1326z00_5057;

							{	/* SawMill/node2rtl.scm 439 */
								BgL_rtl_protectz00_bglt BgL_new1325z00_5058;

								BgL_new1325z00_5058 =
									((BgL_rtl_protectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_protectz00_bgl))));
								{	/* SawMill/node2rtl.scm 439 */
									long BgL_arg2368z00_5059;

									{	/* SawMill/node2rtl.scm 439 */
										long BgL_res2882z00_5060;

										BgL_res2882z00_5060 =
											BGL_CLASS_INDEX(BGl_rtl_protectz00zzsaw_defsz00);
										BgL_arg2368z00_5059 = BgL_res2882z00_5060;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1325z00_5058),
										BgL_arg2368z00_5059);
								}
								BgL_new1326z00_5057 = BgL_new1325z00_5058;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1326z00_5057)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg2366z00_5056 = BgL_new1326z00_5057;
						}
						{	/* SawMill/node2rtl.scm 439 */
							BgL_areaz00_bglt BgL_res2883z00_5061;

							BgL_res2883z00_5061 =
								BGl_singleza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_setzd2exzd2itz00_bglt) BgL_ez00_4800)),
								((BgL_rtl_funz00_bglt) BgL_arg2366z00_5056), BNIL);
							BgL_az00_5055 = BgL_res2883z00_5061;
					}}
					{	/* SawMill/node2rtl.scm 440 */
						BgL_rtl_regz00_bglt BgL_arg2363z00_5062;

						{	/* SawMill/node2rtl.scm 440 */
							BgL_variablez00_bglt BgL_arg2364z00_5063;

							BgL_arg2364z00_5063 =
								(((BgL_varz00_bglt) COBJECT(
										(((BgL_setzd2exzd2itz00_bglt) COBJECT(
													((BgL_setzd2exzd2itz00_bglt) BgL_ez00_4800)))->
											BgL_varz00)))->BgL_variablez00);
							BgL_arg2363z00_5062 =
								BGl_localzd2ze3regz31zzsaw_node2rtlz00(((BgL_localz00_bglt)
									BgL_arg2364z00_5063));
						}
						BGl_bdestinationz12z12zzsaw_node2rtlz00(
							(((BgL_areaz00_bglt) COBJECT(BgL_az00_5055))->BgL_exitz00),
							BgL_arg2363z00_5062);
					}
					BgL_arg2361z00_5053 = BgL_az00_5055;
				}
				{	/* SawMill/node2rtl.scm 442 */
					BgL_rtl_protectedz00_bglt BgL_arg2369z00_5064;
					BgL_nodez00_bglt BgL_arg2370z00_5065;

					{	/* SawMill/node2rtl.scm 442 */
						BgL_rtl_protectedz00_bglt BgL_new1328z00_5066;

						{	/* SawMill/node2rtl.scm 442 */
							BgL_rtl_protectedz00_bglt BgL_new1327z00_5067;

							BgL_new1327z00_5067 =
								((BgL_rtl_protectedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_protectedz00_bgl))));
							{	/* SawMill/node2rtl.scm 442 */
								long BgL_arg2372z00_5068;

								{	/* SawMill/node2rtl.scm 442 */
									long BgL_res2884z00_5069;

									BgL_res2884z00_5069 =
										BGL_CLASS_INDEX(BGl_rtl_protectedz00zzsaw_defsz00);
									BgL_arg2372z00_5068 = BgL_res2884z00_5069;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1327z00_5067),
									BgL_arg2372z00_5068);
							}
							BgL_new1328z00_5066 = BgL_new1327z00_5067;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1328z00_5066)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2369z00_5064 = BgL_new1328z00_5066;
					}
					BgL_arg2370z00_5065 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_ez00_4800)))->BgL_bodyz00);
					{	/* SawMill/node2rtl.scm 442 */
						obj_t BgL_list2371z00_5070;

						BgL_list2371z00_5070 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg2370z00_5065), BNIL);
						{	/* SawMill/node2rtl.scm 442 */
							BgL_areaz00_bglt BgL_res2885z00_5071;

							BgL_res2885z00_5071 =
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_setzd2exzd2itz00_bglt) BgL_ez00_4800)),
								((BgL_rtl_funz00_bglt) BgL_arg2369z00_5064),
								BgL_list2371z00_5070);
							BgL_arg2362z00_5054 = BgL_res2885z00_5071;
				}}}
				return
					BGl_linkz00zzsaw_node2rtlz00(BgL_arg2361z00_5053,
					BgL_arg2362z00_5054);
			}
		}

	}



/* &node->rtl-cast-null1718 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2castzd2null1718z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4801, obj_t BgL_ez00_4802)
	{
		{	/* SawMill/node2rtl.scm 432 */
			{	/* SawMill/node2rtl.scm 434 */
				BgL_rtl_cast_nullz00_bglt BgL_arg2359z00_5073;

				{	/* SawMill/node2rtl.scm 434 */
					BgL_rtl_cast_nullz00_bglt BgL_new1323z00_5074;

					{	/* SawMill/node2rtl.scm 434 */
						BgL_rtl_cast_nullz00_bglt BgL_new1322z00_5075;

						BgL_new1322z00_5075 =
							((BgL_rtl_cast_nullz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_cast_nullz00_bgl))));
						{	/* SawMill/node2rtl.scm 434 */
							long BgL_arg2360z00_5076;

							{	/* SawMill/node2rtl.scm 434 */
								long BgL_res2881z00_5077;

								BgL_res2881z00_5077 =
									BGL_CLASS_INDEX(BGl_rtl_cast_nullz00zzsaw_defsz00);
								BgL_arg2360z00_5076 = BgL_res2881z00_5077;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1322z00_5075),
								BgL_arg2360z00_5076);
						}
						BgL_new1323z00_5074 = BgL_new1322z00_5075;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1323z00_5074)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_cast_nullz00_bglt) COBJECT(BgL_new1323z00_5074))->
							BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_castzd2nullzd2_bglt)
												BgL_ez00_4802))))->BgL_typez00)), BUNSPEC);
					BgL_arg2359z00_5073 = BgL_new1323z00_5074;
				}
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_castzd2nullzd2_bglt) BgL_ez00_4802)),
					((BgL_rtl_funz00_bglt) BgL_arg2359z00_5073), BNIL);
			}
		}

	}



/* &node->rtl-cast1716 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2cast1716z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4803, obj_t BgL_ez00_4804)
	{
		{	/* SawMill/node2rtl.scm 425 */
			return
				BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_ez00_4804)))->BgL_argz00));
		}

	}



/* &node->rtl-instanceof1714 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2instanceof1714z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4805, obj_t BgL_ez00_4806)
	{
		{	/* SawMill/node2rtl.scm 420 */
			{	/* SawMill/node2rtl.scm 422 */
				BgL_rtl_instanceofz00_bglt BgL_arg2355z00_5080;
				obj_t BgL_arg2356z00_5081;

				{	/* SawMill/node2rtl.scm 422 */
					BgL_rtl_instanceofz00_bglt BgL_new1319z00_5082;

					{	/* SawMill/node2rtl.scm 422 */
						BgL_rtl_instanceofz00_bglt BgL_new1318z00_5083;

						BgL_new1318z00_5083 =
							((BgL_rtl_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_instanceofz00_bgl))));
						{	/* SawMill/node2rtl.scm 422 */
							long BgL_arg2357z00_5084;

							{	/* SawMill/node2rtl.scm 422 */
								long BgL_res2880z00_5085;

								BgL_res2880z00_5085 =
									BGL_CLASS_INDEX(BGl_rtl_instanceofz00zzsaw_defsz00);
								BgL_arg2357z00_5084 = BgL_res2880z00_5085;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1318z00_5083),
								BgL_arg2357z00_5084);
						}
						BgL_new1319z00_5082 = BgL_new1318z00_5083;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1319z00_5082)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_instanceofz00_bglt) COBJECT(BgL_new1319z00_5082))->
							BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_instanceofz00_bglt)
									COBJECT(((BgL_instanceofz00_bglt) BgL_ez00_4806)))->
								BgL_classz00)), BUNSPEC);
					BgL_arg2355z00_5080 = BgL_new1319z00_5082;
				}
				BgL_arg2356z00_5081 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_instanceofz00_bglt) BgL_ez00_4806))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_instanceofz00_bglt) BgL_ez00_4806)),
					((BgL_rtl_funz00_bglt) BgL_arg2355z00_5080), BgL_arg2356z00_5081);
			}
		}

	}



/* &node->rtl-vlength1712 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2vlength1712z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4807, obj_t BgL_ez00_4808)
	{
		{	/* SawMill/node2rtl.scm 415 */
			{	/* SawMill/node2rtl.scm 417 */
				BgL_rtl_vlengthz00_bglt BgL_arg2352z00_5087;
				obj_t BgL_arg2353z00_5088;

				{	/* SawMill/node2rtl.scm 417 */
					BgL_rtl_vlengthz00_bglt BgL_new1316z00_5089;

					{	/* SawMill/node2rtl.scm 417 */
						BgL_rtl_vlengthz00_bglt BgL_new1315z00_5090;

						BgL_new1315z00_5090 =
							((BgL_rtl_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_vlengthz00_bgl))));
						{	/* SawMill/node2rtl.scm 417 */
							long BgL_arg2354z00_5091;

							{	/* SawMill/node2rtl.scm 417 */
								long BgL_res2879z00_5092;

								BgL_res2879z00_5092 =
									BGL_CLASS_INDEX(BGl_rtl_vlengthz00zzsaw_defsz00);
								BgL_arg2354z00_5091 = BgL_res2879z00_5092;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1315z00_5090),
								BgL_arg2354z00_5091);
						}
						BgL_new1316z00_5089 = BgL_new1315z00_5090;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1316z00_5089)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1316z00_5089))->
							BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) (((BgL_vlengthz00_bglt)
										COBJECT(((BgL_vlengthz00_bglt) BgL_ez00_4808)))->
									BgL_ftypez00))), BUNSPEC);
					((((BgL_rtl_vlengthz00_bglt) COBJECT(BgL_new1316z00_5089))->
							BgL_vtypez00) =
						((BgL_typez00_bglt) (((BgL_vlengthz00_bglt)
									COBJECT(((BgL_vlengthz00_bglt) BgL_ez00_4808)))->
								BgL_vtypez00)), BUNSPEC);
					BgL_arg2352z00_5087 = BgL_new1316z00_5089;
				}
				BgL_arg2353z00_5088 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vlengthz00_bglt) BgL_ez00_4808))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_vlengthz00_bglt) BgL_ez00_4808)),
					((BgL_rtl_funz00_bglt) BgL_arg2352z00_5087), BgL_arg2353z00_5088);
			}
		}

	}



/* &node->rtl-vset!1710 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2vsetz121710z93zzsaw_node2rtlz00(obj_t
		BgL_envz00_4809, obj_t BgL_ez00_4810)
	{
		{	/* SawMill/node2rtl.scm 409 */
			{	/* SawMill/node2rtl.scm 411 */
				BgL_areaz00_bglt BgL_arg2342z00_5094;
				BgL_areaz00_bglt BgL_arg2343z00_5095;

				{	/* SawMill/node2rtl.scm 411 */
					BgL_rtl_vsetz00_bglt BgL_arg2345z00_5096;
					obj_t BgL_arg2346z00_5097;

					{	/* SawMill/node2rtl.scm 411 */
						BgL_rtl_vsetz00_bglt BgL_new1310z00_5098;

						{	/* SawMill/node2rtl.scm 411 */
							BgL_rtl_vsetz00_bglt BgL_new1309z00_5099;

							BgL_new1309z00_5099 =
								((BgL_rtl_vsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_vsetz00_bgl))));
							{	/* SawMill/node2rtl.scm 411 */
								long BgL_arg2347z00_5100;

								{	/* SawMill/node2rtl.scm 411 */
									long BgL_res2876z00_5101;

									BgL_res2876z00_5101 =
										BGL_CLASS_INDEX(BGl_rtl_vsetz00zzsaw_defsz00);
									BgL_arg2347z00_5100 = BgL_res2876z00_5101;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1309z00_5099),
									BgL_arg2347z00_5100);
							}
							BgL_new1310z00_5098 = BgL_new1309z00_5099;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1310z00_5098)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1310z00_5098))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
										COBJECT(((BgL_vsetz12z12_bglt) BgL_ez00_4810)))->
									BgL_ftypez00)), BUNSPEC);
						((((BgL_rtl_vsetz00_bglt) COBJECT(BgL_new1310z00_5098))->
								BgL_vtypez00) =
							((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
										COBJECT(((BgL_vsetz12z12_bglt) BgL_ez00_4810)))->
									BgL_vtypez00)), BUNSPEC);
						BgL_arg2345z00_5096 = BgL_new1310z00_5098;
					}
					BgL_arg2346z00_5097 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_ez00_4810))))->BgL_exprza2za2);
					BgL_arg2342z00_5094 =
						BGl_callza2za2zzsaw_node2rtlz00(
						((obj_t)
							((BgL_vsetz12z12_bglt) BgL_ez00_4810)),
						((BgL_rtl_funz00_bglt) BgL_arg2345z00_5096), BgL_arg2346z00_5097);
				}
				{	/* SawMill/node2rtl.scm 412 */
					BgL_rtl_nopz00_bglt BgL_arg2349z00_5102;

					{	/* SawMill/node2rtl.scm 412 */
						BgL_rtl_nopz00_bglt BgL_new1313z00_5103;

						{	/* SawMill/node2rtl.scm 412 */
							BgL_rtl_nopz00_bglt BgL_new1312z00_5104;

							BgL_new1312z00_5104 =
								((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_nopz00_bgl))));
							{	/* SawMill/node2rtl.scm 412 */
								long BgL_arg2351z00_5105;

								{	/* SawMill/node2rtl.scm 412 */
									long BgL_res2877z00_5106;

									BgL_res2877z00_5106 =
										BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
									BgL_arg2351z00_5105 = BgL_res2877z00_5106;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1312z00_5104),
									BgL_arg2351z00_5105);
							}
							BgL_new1313z00_5103 = BgL_new1312z00_5104;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1313z00_5103)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2349z00_5102 = BgL_new1313z00_5103;
					}
					{	/* SawMill/node2rtl.scm 412 */
						BgL_areaz00_bglt BgL_res2878z00_5107;

						BgL_res2878z00_5107 =
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							((BgL_rtl_funz00_bglt) BgL_arg2349z00_5102), BNIL);
						BgL_arg2343z00_5095 = BgL_res2878z00_5107;
				}}
				return
					BGl_linkz00zzsaw_node2rtlz00(BgL_arg2342z00_5094,
					BgL_arg2343z00_5095);
			}
		}

	}



/* &node->rtl-vref1708 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2vref1708z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4811, obj_t BgL_ez00_4812)
	{
		{	/* SawMill/node2rtl.scm 404 */
			{	/* SawMill/node2rtl.scm 406 */
				BgL_rtl_vrefz00_bglt BgL_arg2339z00_5109;
				obj_t BgL_arg2340z00_5110;

				{	/* SawMill/node2rtl.scm 406 */
					BgL_rtl_vrefz00_bglt BgL_new1307z00_5111;

					{	/* SawMill/node2rtl.scm 406 */
						BgL_rtl_vrefz00_bglt BgL_new1305z00_5112;

						BgL_new1305z00_5112 =
							((BgL_rtl_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_vrefz00_bgl))));
						{	/* SawMill/node2rtl.scm 406 */
							long BgL_arg2341z00_5113;

							{	/* SawMill/node2rtl.scm 406 */
								long BgL_res2875z00_5114;

								BgL_res2875z00_5114 =
									BGL_CLASS_INDEX(BGl_rtl_vrefz00zzsaw_defsz00);
								BgL_arg2341z00_5113 = BgL_res2875z00_5114;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1305z00_5112),
								BgL_arg2341z00_5113);
						}
						BgL_new1307z00_5111 = BgL_new1305z00_5112;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1307z00_5111)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1307z00_5111))->
							BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
											BgL_ez00_4812)))->BgL_ftypez00)), BUNSPEC);
					((((BgL_rtl_vrefz00_bglt) COBJECT(BgL_new1307z00_5111))->
							BgL_vtypez00) =
						((BgL_typez00_bglt) (((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
											BgL_ez00_4812)))->BgL_vtypez00)), BUNSPEC);
					BgL_arg2339z00_5109 = BgL_new1307z00_5111;
				}
				BgL_arg2340z00_5110 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vrefz00_bglt) BgL_ez00_4812))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_vrefz00_bglt) BgL_ez00_4812)),
					((BgL_rtl_funz00_bglt) BgL_arg2339z00_5109), BgL_arg2340z00_5110);
			}
		}

	}



/* &node->rtl-valloc1706 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2valloc1706z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4813, obj_t BgL_ez00_4814)
	{
		{	/* SawMill/node2rtl.scm 398 */
			{	/* SawMill/node2rtl.scm 400 */
				BgL_rtl_vallocz00_bglt BgL_arg2336z00_5116;
				obj_t BgL_arg2337z00_5117;

				{	/* SawMill/node2rtl.scm 400 */
					BgL_rtl_vallocz00_bglt BgL_new1303z00_5118;

					{	/* SawMill/node2rtl.scm 400 */
						BgL_rtl_vallocz00_bglt BgL_new1302z00_5119;

						BgL_new1302z00_5119 =
							((BgL_rtl_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_vallocz00_bgl))));
						{	/* SawMill/node2rtl.scm 400 */
							long BgL_arg2338z00_5120;

							{	/* SawMill/node2rtl.scm 400 */
								long BgL_res2874z00_5121;

								BgL_res2874z00_5121 =
									BGL_CLASS_INDEX(BGl_rtl_vallocz00zzsaw_defsz00);
								BgL_arg2338z00_5120 = BgL_res2874z00_5121;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1302z00_5119),
								BgL_arg2338z00_5120);
						}
						BgL_new1303z00_5118 = BgL_new1302z00_5119;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1303z00_5118)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1303z00_5118))->
							BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_vallocz00_bglt)
									COBJECT(((BgL_vallocz00_bglt) BgL_ez00_4814)))->
								BgL_ftypez00)), BUNSPEC);
					((((BgL_rtl_vallocz00_bglt) COBJECT(BgL_new1303z00_5118))->
							BgL_vtypez00) =
						((BgL_typez00_bglt)
							BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
										(BgL_vallocz00_bglt) BgL_ez00_4814)), ((bool_t) 0))),
						BUNSPEC);
					BgL_arg2336z00_5116 = BgL_new1303z00_5118;
				}
				BgL_arg2337z00_5117 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_ez00_4814))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_vallocz00_bglt) BgL_ez00_4814)),
					((BgL_rtl_funz00_bglt) BgL_arg2336z00_5116), BgL_arg2337z00_5117);
			}
		}

	}



/* &node->rtl-new1704 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2new1704z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4815, obj_t BgL_ez00_4816)
	{
		{	/* SawMill/node2rtl.scm 392 */
			{	/* SawMill/node2rtl.scm 394 */
				BgL_rtl_newz00_bglt BgL_arg2332z00_5123;
				obj_t BgL_arg2334z00_5124;

				{	/* SawMill/node2rtl.scm 394 */
					BgL_rtl_newz00_bglt BgL_new1300z00_5125;

					{	/* SawMill/node2rtl.scm 394 */
						BgL_rtl_newz00_bglt BgL_new1299z00_5126;

						BgL_new1299z00_5126 =
							((BgL_rtl_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_newz00_bgl))));
						{	/* SawMill/node2rtl.scm 394 */
							long BgL_arg2335z00_5127;

							{	/* SawMill/node2rtl.scm 394 */
								long BgL_res2873z00_5128;

								BgL_res2873z00_5128 =
									BGL_CLASS_INDEX(BGl_rtl_newz00zzsaw_defsz00);
								BgL_arg2335z00_5127 = BgL_res2873z00_5128;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1299z00_5126),
								BgL_arg2335z00_5127);
						}
						BgL_new1300z00_5125 = BgL_new1299z00_5126;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1300z00_5125)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1300z00_5125))->BgL_typez00) =
						((BgL_typez00_bglt)
							BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
										(BgL_newz00_bglt) BgL_ez00_4816)), ((bool_t) 0))), BUNSPEC);
					((((BgL_rtl_newz00_bglt) COBJECT(BgL_new1300z00_5125))->
							BgL_constrz00) =
						((obj_t) (((BgL_newz00_bglt) COBJECT(((BgL_newz00_bglt)
											BgL_ez00_4816)))->BgL_argszd2typezd2)), BUNSPEC);
					BgL_arg2332z00_5123 = BgL_new1300z00_5125;
				}
				BgL_arg2334z00_5124 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_newz00_bglt) BgL_ez00_4816))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_newz00_bglt) BgL_ez00_4816)),
					((BgL_rtl_funz00_bglt) BgL_arg2332z00_5123), BgL_arg2334z00_5124);
			}
		}

	}



/* &node->rtl-setfield1702 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2setfield1702z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4817, obj_t BgL_ez00_4818)
	{
		{	/* SawMill/node2rtl.scm 383 */
			{	/* SawMill/node2rtl.scm 385 */
				BgL_areaz00_bglt BgL_arg2323z00_5130;
				BgL_areaz00_bglt BgL_arg2324z00_5131;

				{	/* SawMill/node2rtl.scm 385 */
					BgL_rtl_setfieldz00_bglt BgL_arg2325z00_5132;
					obj_t BgL_arg2326z00_5133;

					{	/* SawMill/node2rtl.scm 385 */
						BgL_rtl_setfieldz00_bglt BgL_new1295z00_5134;

						{	/* SawMill/node2rtl.scm 385 */
							BgL_rtl_setfieldz00_bglt BgL_new1294z00_5135;

							BgL_new1294z00_5135 =
								((BgL_rtl_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_setfieldz00_bgl))));
							{	/* SawMill/node2rtl.scm 385 */
								long BgL_arg2327z00_5136;

								{	/* SawMill/node2rtl.scm 385 */
									long BgL_res2870z00_5137;

									BgL_res2870z00_5137 =
										BGL_CLASS_INDEX(BGl_rtl_setfieldz00zzsaw_defsz00);
									BgL_arg2327z00_5136 = BgL_res2870z00_5137;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1294z00_5135),
									BgL_arg2327z00_5136);
							}
							BgL_new1295z00_5134 = BgL_new1294z00_5135;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1295z00_5134)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1295z00_5134))->
								BgL_namez00) =
							((obj_t) (((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
												BgL_ez00_4818)))->BgL_fnamez00)), BUNSPEC);
						((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1295z00_5134))->
								BgL_objtypez00) =
							((BgL_typez00_bglt) (((BgL_setfieldz00_bglt)
										COBJECT(((BgL_setfieldz00_bglt) BgL_ez00_4818)))->
									BgL_otypez00)), BUNSPEC);
						((((BgL_rtl_setfieldz00_bglt) COBJECT(BgL_new1295z00_5134))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_setfieldz00_bglt)
										COBJECT(((BgL_setfieldz00_bglt) BgL_ez00_4818)))->
									BgL_ftypez00)), BUNSPEC);
						BgL_arg2325z00_5132 = BgL_new1295z00_5134;
					}
					BgL_arg2326z00_5133 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_setfieldz00_bglt) BgL_ez00_4818))))->BgL_exprza2za2);
					BgL_arg2323z00_5130 =
						BGl_callza2za2zzsaw_node2rtlz00(
						((obj_t)
							((BgL_setfieldz00_bglt) BgL_ez00_4818)),
						((BgL_rtl_funz00_bglt) BgL_arg2325z00_5132), BgL_arg2326z00_5133);
				}
				{	/* SawMill/node2rtl.scm 389 */
					BgL_rtl_nopz00_bglt BgL_arg2328z00_5138;

					{	/* SawMill/node2rtl.scm 389 */
						BgL_rtl_nopz00_bglt BgL_new1297z00_5139;

						{	/* SawMill/node2rtl.scm 389 */
							BgL_rtl_nopz00_bglt BgL_new1296z00_5140;

							BgL_new1296z00_5140 =
								((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_nopz00_bgl))));
							{	/* SawMill/node2rtl.scm 389 */
								long BgL_arg2331z00_5141;

								{	/* SawMill/node2rtl.scm 389 */
									long BgL_res2871z00_5142;

									BgL_res2871z00_5142 =
										BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
									BgL_arg2331z00_5141 = BgL_res2871z00_5142;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1296z00_5140),
									BgL_arg2331z00_5141);
							}
							BgL_new1297z00_5139 = BgL_new1296z00_5140;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1297z00_5139)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg2328z00_5138 = BgL_new1297z00_5139;
					}
					{	/* SawMill/node2rtl.scm 389 */
						BgL_areaz00_bglt BgL_res2872z00_5143;

						BgL_res2872z00_5143 =
							BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
							((BgL_rtl_funz00_bglt) BgL_arg2328z00_5138), BNIL);
						BgL_arg2324z00_5131 = BgL_res2872z00_5143;
				}}
				return
					BGl_linkz00zzsaw_node2rtlz00(BgL_arg2323z00_5130,
					BgL_arg2324z00_5131);
			}
		}

	}



/* &node->rtl-getfield1700 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2getfield1700z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4819, obj_t BgL_ez00_4820)
	{
		{	/* SawMill/node2rtl.scm 375 */
			{	/* SawMill/node2rtl.scm 377 */
				BgL_rtl_getfieldz00_bglt BgL_arg2320z00_5145;
				obj_t BgL_arg2321z00_5146;

				{	/* SawMill/node2rtl.scm 377 */
					BgL_rtl_getfieldz00_bglt BgL_new1292z00_5147;

					{	/* SawMill/node2rtl.scm 377 */
						BgL_rtl_getfieldz00_bglt BgL_new1291z00_5148;

						BgL_new1291z00_5148 =
							((BgL_rtl_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_getfieldz00_bgl))));
						{	/* SawMill/node2rtl.scm 377 */
							long BgL_arg2322z00_5149;

							{	/* SawMill/node2rtl.scm 377 */
								long BgL_res2869z00_5150;

								BgL_res2869z00_5150 =
									BGL_CLASS_INDEX(BGl_rtl_getfieldz00zzsaw_defsz00);
								BgL_arg2322z00_5149 = BgL_res2869z00_5150;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1291z00_5148),
								BgL_arg2322z00_5149);
						}
						BgL_new1292z00_5147 = BgL_new1291z00_5148;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1292z00_5147)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1292z00_5147))->
							BgL_namez00) =
						((obj_t) (((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
											BgL_ez00_4820)))->BgL_fnamez00)), BUNSPEC);
					((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1292z00_5147))->
							BgL_objtypez00) =
						((BgL_typez00_bglt) (((BgL_getfieldz00_bglt)
									COBJECT(((BgL_getfieldz00_bglt) BgL_ez00_4820)))->
								BgL_otypez00)), BUNSPEC);
					((((BgL_rtl_getfieldz00_bglt) COBJECT(BgL_new1292z00_5147))->
							BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_getfieldz00_bglt)
									COBJECT(((BgL_getfieldz00_bglt) BgL_ez00_4820)))->
								BgL_ftypez00)), BUNSPEC);
					BgL_arg2320z00_5145 = BgL_new1292z00_5147;
				}
				BgL_arg2321z00_5146 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_getfieldz00_bglt) BgL_ez00_4820))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_getfieldz00_bglt) BgL_ez00_4820)),
					((BgL_rtl_funz00_bglt) BgL_arg2320z00_5145), BgL_arg2321z00_5146);
			}
		}

	}



/* &node->rtl-pragma1697 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2pragma1697z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4821, obj_t BgL_ez00_4822)
	{
		{	/* SawMill/node2rtl.scm 370 */
			{	/* SawMill/node2rtl.scm 372 */
				BgL_rtl_pragmaz00_bglt BgL_arg2316z00_5152;
				obj_t BgL_arg2318z00_5153;

				{	/* SawMill/node2rtl.scm 372 */
					BgL_rtl_pragmaz00_bglt BgL_new1289z00_5154;

					{	/* SawMill/node2rtl.scm 372 */
						BgL_rtl_pragmaz00_bglt BgL_new1288z00_5155;

						BgL_new1288z00_5155 =
							((BgL_rtl_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_pragmaz00_bgl))));
						{	/* SawMill/node2rtl.scm 372 */
							long BgL_arg2319z00_5156;

							{	/* SawMill/node2rtl.scm 372 */
								long BgL_res2868z00_5157;

								BgL_res2868z00_5157 =
									BGL_CLASS_INDEX(BGl_rtl_pragmaz00zzsaw_defsz00);
								BgL_arg2319z00_5156 = BgL_res2868z00_5157;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1288z00_5155),
								BgL_arg2319z00_5156);
						}
						BgL_new1289z00_5154 = BgL_new1288z00_5155;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1289z00_5154)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_pragmaz00_bglt) COBJECT(BgL_new1289z00_5154))->
							BgL_formatz00) =
						((obj_t) (((BgL_pragmaz00_bglt) COBJECT(((BgL_pragmaz00_bglt)
											BgL_ez00_4822)))->BgL_formatz00)), BUNSPEC);
					BgL_arg2316z00_5152 = BgL_new1289z00_5154;
				}
				BgL_arg2318z00_5153 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_pragmaz00_bglt) BgL_ez00_4822))))->BgL_exprza2za2);
				return
					BGl_callza2za2zzsaw_node2rtlz00(
					((obj_t)
						((BgL_pragmaz00_bglt) BgL_ez00_4822)),
					((BgL_rtl_funz00_bglt) BgL_arg2316z00_5152), BgL_arg2318z00_5153);
			}
		}

	}



/* &node->rtl-funcall1695 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2funcall1695z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4823, obj_t BgL_ez00_4824)
	{
		{	/* SawMill/node2rtl.scm 345 */
			{	/* SawMill/node2rtl.scm 352 */
				obj_t BgL_argsz00_5159;

				BgL_argsz00_5159 =
					BGl_argszd21ze70z35zzsaw_node2rtlz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_ez00_4824)))->BgL_argsz00));
				{	/* SawMill/node2rtl.scm 353 */
					obj_t BgL_casezd2valuezd2_5160;

					BgL_casezd2valuezd2_5160 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_ez00_4824)))->BgL_strengthz00);
					if ((BgL_casezd2valuezd2_5160 == CNST_TABLE_REF(((long) 14))))
						{	/* SawMill/node2rtl.scm 356 */
							BgL_rtl_callz00_bglt BgL_arg2296z00_5161;

							{	/* SawMill/node2rtl.scm 356 */
								BgL_rtl_callz00_bglt BgL_new1282z00_5162;

								{	/* SawMill/node2rtl.scm 356 */
									BgL_rtl_callz00_bglt BgL_new1281z00_5163;

									BgL_new1281z00_5163 =
										((BgL_rtl_callz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_callz00_bgl))));
									{	/* SawMill/node2rtl.scm 356 */
										long BgL_arg2299z00_5164;

										{	/* SawMill/node2rtl.scm 356 */
											long BgL_res2864z00_5165;

											BgL_res2864z00_5165 =
												BGL_CLASS_INDEX(BGl_rtl_callz00zzsaw_defsz00);
											BgL_arg2299z00_5164 = BgL_res2864z00_5165;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1281z00_5163),
											BgL_arg2299z00_5164);
									}
									BgL_new1282z00_5162 = BgL_new1281z00_5163;
								}
								((((BgL_rtl_funz00_bglt) COBJECT(
												((BgL_rtl_funz00_bglt) BgL_new1282z00_5162)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								{
									BgL_globalz00_bglt BgL_auxz00_7144;

									{	/* SawMill/node2rtl.scm 356 */
										BgL_variablez00_bglt BgL_arg2297z00_5166;

										BgL_arg2297z00_5166 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt)
														(((BgL_funcallz00_bglt) COBJECT(
																	((BgL_funcallz00_bglt) BgL_ez00_4824)))->
															BgL_funz00))))->BgL_variablez00);
										BgL_auxz00_7144 =
											BGl_getzd2globalzd2zzsaw_node2rtlz00(((BgL_globalz00_bglt)
												BgL_arg2297z00_5166));
									}
									((((BgL_rtl_callz00_bglt) COBJECT(BgL_new1282z00_5162))->
											BgL_varz00) =
										((BgL_globalz00_bglt) BgL_auxz00_7144), BUNSPEC);
								}
								BgL_arg2296z00_5161 = BgL_new1282z00_5162;
							}
							return
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_funcallz00_bglt) BgL_ez00_4824)),
								((BgL_rtl_funz00_bglt) BgL_arg2296z00_5161), BgL_argsz00_5159);
						}
					else
						{	/* SawMill/node2rtl.scm 353 */
							if ((BgL_casezd2valuezd2_5160 == CNST_TABLE_REF(((long) 15))))
								{	/* SawMill/node2rtl.scm 360 */
									BgL_rtl_lightfuncallz00_bglt BgL_arg2302z00_5167;

									{	/* SawMill/node2rtl.scm 360 */
										BgL_rtl_lightfuncallz00_bglt BgL_new1284z00_5168;

										{	/* SawMill/node2rtl.scm 360 */
											BgL_rtl_lightfuncallz00_bglt BgL_new1283z00_5169;

											BgL_new1283z00_5169 =
												((BgL_rtl_lightfuncallz00_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_lightfuncallz00_bgl))));
											{	/* SawMill/node2rtl.scm 360 */
												long BgL_arg2303z00_5170;

												{	/* SawMill/node2rtl.scm 360 */
													long BgL_res2866z00_5171;

													BgL_res2866z00_5171 =
														BGL_CLASS_INDEX
														(BGl_rtl_lightfuncallz00zzsaw_defsz00);
													BgL_arg2303z00_5170 = BgL_res2866z00_5171;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1283z00_5169),
													BgL_arg2303z00_5170);
											}
											BgL_new1284z00_5168 = BgL_new1283z00_5169;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1284z00_5168)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_7165;

											{	/* SawMill/node2rtl.scm 362 */

												{	/* SawMill/node2rtl.scm 362 */

													BgL_auxz00_7165 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}}
											((((BgL_rtl_lightfuncallz00_bglt)
														COBJECT(BgL_new1284z00_5168))->BgL_namez00) =
												((obj_t) BgL_auxz00_7165), BUNSPEC);
										}
										((((BgL_rtl_lightfuncallz00_bglt)
													COBJECT(BgL_new1284z00_5168))->BgL_funsz00) =
											((obj_t) (((BgL_funcallz00_bglt)
														COBJECT(((BgL_funcallz00_bglt) BgL_ez00_4824)))->
													BgL_functionsz00)), BUNSPEC);
										((((BgL_rtl_lightfuncallz00_bglt)
													COBJECT(BgL_new1284z00_5168))->BgL_rettypez00) =
											((obj_t) ((obj_t)
													BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
															((BgL_funcallz00_bglt) BgL_ez00_4824)),
														((bool_t) 0)))), BUNSPEC);
										BgL_arg2302z00_5167 = BgL_new1284z00_5168;
									}
									return
										BGl_callza2za2zzsaw_node2rtlz00(
										((obj_t)
											((BgL_funcallz00_bglt) BgL_ez00_4824)),
										((BgL_rtl_funz00_bglt) BgL_arg2302z00_5167),
										BgL_argsz00_5159);
								}
							else
								{	/* SawMill/node2rtl.scm 367 */
									BgL_rtl_funcallz00_bglt BgL_arg2305z00_5172;

									{	/* SawMill/node2rtl.scm 367 */
										BgL_rtl_funcallz00_bglt BgL_new1286z00_5173;

										{	/* SawMill/node2rtl.scm 367 */
											BgL_rtl_funcallz00_bglt BgL_new1285z00_5174;

											BgL_new1285z00_5174 =
												((BgL_rtl_funcallz00_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_funcallz00_bgl))));
											{	/* SawMill/node2rtl.scm 367 */
												long BgL_arg2306z00_5175;

												{	/* SawMill/node2rtl.scm 367 */
													long BgL_res2867z00_5176;

													BgL_res2867z00_5176 =
														BGL_CLASS_INDEX(BGl_rtl_funcallz00zzsaw_defsz00);
													BgL_arg2306z00_5175 = BgL_res2867z00_5176;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1285z00_5174),
													BgL_arg2306z00_5175);
											}
											BgL_new1286z00_5173 = BgL_new1285z00_5174;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1286z00_5173)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										BgL_arg2305z00_5172 = BgL_new1286z00_5173;
									}
									return
										BGl_callza2za2zzsaw_node2rtlz00(
										((obj_t)
											((BgL_funcallz00_bglt) BgL_ez00_4824)),
										((BgL_rtl_funz00_bglt) BgL_arg2305z00_5172),
										BgL_argsz00_5159);
								}
						}
				}
			}
		}

	}



/* args-1~0 */
	obj_t BGl_argszd21ze70z35zzsaw_node2rtlz00(obj_t BgL_argsz00_3108)
	{
		{	/* SawMill/node2rtl.scm 349 */
			if (NULLP(CDR(((obj_t) BgL_argsz00_3108))))
				{	/* SawMill/node2rtl.scm 347 */
					return BNIL;
				}
			else
				{	/* SawMill/node2rtl.scm 349 */
					obj_t BgL_arg2311z00_3112;
					obj_t BgL_arg2312z00_3113;

					BgL_arg2311z00_3112 = CAR(((obj_t) BgL_argsz00_3108));
					{	/* SawMill/node2rtl.scm 349 */
						obj_t BgL_arg2313z00_3114;

						BgL_arg2313z00_3114 = CDR(((obj_t) BgL_argsz00_3108));
						BgL_arg2312z00_3113 =
							BGl_argszd21ze70z35zzsaw_node2rtlz00(BgL_arg2313z00_3114);
					}
					return MAKE_YOUNG_PAIR(BgL_arg2311z00_3112, BgL_arg2312z00_3113);
				}
		}

	}



/* &node->rtl-app-ly1693 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2appzd2ly1693z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4825, obj_t BgL_ez00_4826)
	{
		{	/* SawMill/node2rtl.scm 340 */
			{	/* SawMill/node2rtl.scm 342 */
				BgL_rtl_applyz00_bglt BgL_arg2288z00_5178;
				BgL_nodez00_bglt BgL_arg2289z00_5179;
				BgL_nodez00_bglt BgL_arg2290z00_5180;

				{	/* SawMill/node2rtl.scm 342 */
					BgL_rtl_applyz00_bglt BgL_new1279z00_5181;

					{	/* SawMill/node2rtl.scm 342 */
						BgL_rtl_applyz00_bglt BgL_new1278z00_5182;

						BgL_new1278z00_5182 =
							((BgL_rtl_applyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_applyz00_bgl))));
						{	/* SawMill/node2rtl.scm 342 */
							long BgL_arg2294z00_5183;

							{	/* SawMill/node2rtl.scm 342 */
								long BgL_res2860z00_5184;

								BgL_res2860z00_5184 =
									BGL_CLASS_INDEX(BGl_rtl_applyz00zzsaw_defsz00);
								BgL_arg2294z00_5183 = BgL_res2860z00_5184;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1278z00_5182),
								BgL_arg2294z00_5183);
						}
						BgL_new1279z00_5181 = BgL_new1278z00_5182;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1279z00_5181)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					BgL_arg2288z00_5178 = BgL_new1279z00_5181;
				}
				BgL_arg2289z00_5179 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_ez00_4826)))->BgL_funz00);
				BgL_arg2290z00_5180 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_ez00_4826)))->BgL_argz00);
				{	/* SawMill/node2rtl.scm 342 */
					obj_t BgL_list2291z00_5185;

					{	/* SawMill/node2rtl.scm 342 */
						obj_t BgL_arg2292z00_5186;

						BgL_arg2292z00_5186 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg2290z00_5180), BNIL);
						BgL_list2291z00_5185 =
							MAKE_YOUNG_PAIR(
							((obj_t) BgL_arg2289z00_5179), BgL_arg2292z00_5186);
					}
					{	/* SawMill/node2rtl.scm 342 */
						BgL_areaz00_bglt BgL_res2861z00_5187;

						BgL_res2861z00_5187 =
							BGl_callza2za2zzsaw_node2rtlz00(
							((obj_t)
								((BgL_appzd2lyzd2_bglt) BgL_ez00_4826)),
							((BgL_rtl_funz00_bglt) BgL_arg2288z00_5178),
							BgL_list2291z00_5185);
						return BgL_res2861z00_5187;
					}
				}
			}
		}

	}



/* &node->rtl-app1691 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2app1691z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4827, obj_t BgL_ez00_4828)
	{
		{	/* SawMill/node2rtl.scm 317 */
			{	/* SawMill/node2rtl.scm 319 */
				BgL_variablez00_bglt BgL_vz00_5189;

				BgL_vz00_5189 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_ez00_4828)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* SawMill/node2rtl.scm 320 */
					bool_t BgL_test3108z00_7221;

					{	/* SawMill/node2rtl.scm 320 */
						bool_t BgL_res2857z00_5190;

						BgL_res2857z00_5190 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_vz00_5189), BGl_localz00zzast_varz00);
						BgL_test3108z00_7221 = BgL_res2857z00_5190;
					}
					if (BgL_test3108z00_7221)
						{	/* SawMill/node2rtl.scm 321 */
							obj_t BgL_arg2278z00_5191;

							BgL_arg2278z00_5191 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_ez00_4828)))->BgL_argsz00);
							return
								BGl_compilezd2labelzd2callz00zzsaw_node2rtlz00(
								((BgL_localz00_bglt) BgL_vz00_5189), BgL_arg2278z00_5191);
						}
					else
						{	/* SawMill/node2rtl.scm 322 */
							obj_t BgL__ortest_1270z00_5192;

							{	/* SawMill/node2rtl.scm 322 */
								obj_t BgL_arg2286z00_5193;

								BgL_arg2286z00_5193 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_ez00_4828)))->BgL_argsz00);
								BgL__ortest_1270z00_5192 =
									BGl_imperativezf3zf3zzsaw_node2rtlz00(
									((BgL_appz00_bglt) BgL_ez00_4828),
									((BgL_globalz00_bglt) BgL_vz00_5189), BgL_arg2286z00_5193);
							}
							if (CBOOL(BgL__ortest_1270z00_5192))
								{	/* SawMill/node2rtl.scm 322 */
									return ((BgL_areaz00_bglt) BgL__ortest_1270z00_5192);
								}
							else
								{	/* SawMill/node2rtl.scm 325 */
									BgL_rtl_callz00_bglt BgL_arg2283z00_5194;
									obj_t BgL_arg2284z00_5195;

									{	/* SawMill/node2rtl.scm 325 */
										BgL_rtl_callz00_bglt BgL_new1274z00_5196;

										{	/* SawMill/node2rtl.scm 325 */
											BgL_rtl_callz00_bglt BgL_new1273z00_5197;

											BgL_new1273z00_5197 =
												((BgL_rtl_callz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_callz00_bgl))));
											{	/* SawMill/node2rtl.scm 325 */
												long BgL_arg2285z00_5198;

												{	/* SawMill/node2rtl.scm 325 */
													long BgL_res2859z00_5199;

													BgL_res2859z00_5199 =
														BGL_CLASS_INDEX(BGl_rtl_callz00zzsaw_defsz00);
													BgL_arg2285z00_5198 = BgL_res2859z00_5199;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1273z00_5197),
													BgL_arg2285z00_5198);
											}
											BgL_new1274z00_5196 = BgL_new1273z00_5197;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1274z00_5196)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_rtl_callz00_bglt) COBJECT(BgL_new1274z00_5196))->
												BgL_varz00) =
											((BgL_globalz00_bglt)
												BGl_getzd2globalzd2zzsaw_node2rtlz00((
														(BgL_globalz00_bglt) BgL_vz00_5189))), BUNSPEC);
										BgL_arg2283z00_5194 = BgL_new1274z00_5196;
									}
									BgL_arg2284z00_5195 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_ez00_4828)))->BgL_argsz00);
									return
										BGl_callza2za2zzsaw_node2rtlz00(
										((obj_t)
											((BgL_appz00_bglt) BgL_ez00_4828)),
										((BgL_rtl_funz00_bglt) BgL_arg2283z00_5194),
										BgL_arg2284z00_5195);
								}
						}
				}
			}
		}

	}



/* &node->rtl-let-fun1689 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2letzd2fun1689z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4829, obj_t BgL_ez00_4830)
	{
		{	/* SawMill/node2rtl.scm 283 */
			return
				BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_ez00_4830)))->BgL_bodyz00));
		}

	}



/* &node->rtl-switch1687 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2switch1687z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4831, obj_t BgL_ez00_4832)
	{
		{	/* SawMill/node2rtl.scm 262 */
			{	/* SawMill/node2rtl.scm 264 */
				BgL_areaz00_bglt BgL_arg2261z00_5202;
				obj_t BgL_arg2262z00_5203;
				BgL_rtl_regz00_bglt BgL_arg2263z00_5204;

				{	/* SawMill/node2rtl.scm 264 */
					BgL_rtl_selectz00_bglt BgL_arg2264z00_5205;
					BgL_nodez00_bglt BgL_arg2265z00_5206;

					{	/* SawMill/node2rtl.scm 264 */
						BgL_rtl_selectz00_bglt BgL_new1259z00_5207;

						{	/* SawMill/node2rtl.scm 264 */
							BgL_rtl_selectz00_bglt BgL_new1258z00_5208;

							BgL_new1258z00_5208 =
								((BgL_rtl_selectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_selectz00_bgl))));
							{	/* SawMill/node2rtl.scm 264 */
								long BgL_arg2268z00_5209;

								{	/* SawMill/node2rtl.scm 264 */
									long BgL_res2851z00_5210;

									BgL_res2851z00_5210 =
										BGL_CLASS_INDEX(BGl_rtl_selectz00zzsaw_defsz00);
									BgL_arg2268z00_5209 = BgL_res2851z00_5210;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1258z00_5208),
									BgL_arg2268z00_5209);
							}
							BgL_new1259z00_5207 = BgL_new1258z00_5208;
						}
						((((BgL_rtl_funz00_bglt) COBJECT(
										((BgL_rtl_funz00_bglt) BgL_new1259z00_5207)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1259z00_5207))->
								BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_switchz00_bglt)
										COBJECT(((BgL_switchz00_bglt) BgL_ez00_4832)))->
									BgL_itemzd2typezd2)), BUNSPEC);
						{
							obj_t BgL_auxz00_7263;

							{	/* SawMill/node2rtl.scm 265 */
								obj_t BgL_arg2267z00_5211;

								BgL_arg2267z00_5211 =
									(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_ez00_4832)))->BgL_clausesz00);
								BgL_auxz00_7263 =
									BGl_coercez00zzsaw_node2rtlz00(BgL_arg2267z00_5211);
							}
							((((BgL_rtl_selectz00_bglt) COBJECT(BgL_new1259z00_5207))->
									BgL_patternsz00) = ((obj_t) BgL_auxz00_7263), BUNSPEC);
						}
						BgL_arg2264z00_5205 = BgL_new1259z00_5207;
					}
					BgL_arg2265z00_5206 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_ez00_4832)))->BgL_testz00);
					{	/* SawMill/node2rtl.scm 264 */
						obj_t BgL_list2266z00_5212;

						BgL_list2266z00_5212 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg2265z00_5206), BNIL);
						{	/* SawMill/node2rtl.scm 264 */
							BgL_areaz00_bglt BgL_res2852z00_5213;

							BgL_res2852z00_5213 =
								BGl_callza2za2zzsaw_node2rtlz00(
								((obj_t)
									((BgL_switchz00_bglt) BgL_ez00_4832)),
								((BgL_rtl_funz00_bglt) BgL_arg2264z00_5205),
								BgL_list2266z00_5212);
							BgL_arg2261z00_5202 = BgL_res2852z00_5213;
				}}}
				{	/* SawMill/node2rtl.scm 267 */
					obj_t BgL_l1629z00_5214;

					BgL_l1629z00_5214 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_ez00_4832)))->BgL_clausesz00);
					if (NULLP(BgL_l1629z00_5214))
						{	/* SawMill/node2rtl.scm 267 */
							BgL_arg2262z00_5203 = BNIL;
						}
					else
						{	/* SawMill/node2rtl.scm 267 */
							obj_t BgL_head1631z00_5215;

							{	/* SawMill/node2rtl.scm 267 */
								obj_t BgL_res2854z00_5216;

								BgL_res2854z00_5216 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1631z00_5215 = BgL_res2854z00_5216;
							}
							{
								obj_t BgL_l1629z00_5218;
								obj_t BgL_tail1632z00_5219;

								BgL_l1629z00_5218 = BgL_l1629z00_5214;
								BgL_tail1632z00_5219 = BgL_head1631z00_5215;
							BgL_zc3z04anonymousza32270ze3z87_5217:
								if (NULLP(BgL_l1629z00_5218))
									{	/* SawMill/node2rtl.scm 267 */
										BgL_arg2262z00_5203 = CDR(BgL_head1631z00_5215);
									}
								else
									{	/* SawMill/node2rtl.scm 267 */
										obj_t BgL_newtail1633z00_5220;

										{	/* SawMill/node2rtl.scm 267 */
											BgL_areaz00_bglt BgL_arg2273z00_5221;

											{	/* SawMill/node2rtl.scm 267 */
												obj_t BgL_cz00_5222;

												BgL_cz00_5222 = CAR(((obj_t) BgL_l1629z00_5218));
												{	/* SawMill/node2rtl.scm 267 */
													obj_t BgL_arg2275z00_5223;

													BgL_arg2275z00_5223 = CDR(((obj_t) BgL_cz00_5222));
													BgL_arg2273z00_5221 =
														BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
														((BgL_nodez00_bglt) BgL_arg2275z00_5223));
												}
											}
											{	/* SawMill/node2rtl.scm 267 */
												obj_t BgL_res2856z00_5224;

												BgL_res2856z00_5224 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg2273z00_5221), BNIL);
												BgL_newtail1633z00_5220 = BgL_res2856z00_5224;
											}
										}
										SET_CDR(BgL_tail1632z00_5219, BgL_newtail1633z00_5220);
										{	/* SawMill/node2rtl.scm 267 */
											obj_t BgL_arg2272z00_5225;

											BgL_arg2272z00_5225 = CDR(((obj_t) BgL_l1629z00_5218));
											{
												obj_t BgL_tail1632z00_7296;
												obj_t BgL_l1629z00_7295;

												BgL_l1629z00_7295 = BgL_arg2272z00_5225;
												BgL_tail1632z00_7296 = BgL_newtail1633z00_5220;
												BgL_tail1632z00_5219 = BgL_tail1632z00_7296;
												BgL_l1629z00_5218 = BgL_l1629z00_7295;
												goto BgL_zc3z04anonymousza32270ze3z87_5217;
											}
										}
									}
							}
						}
				}
				BgL_arg2263z00_5204 =
					BGl_newzd2regzd2zzsaw_node2rtlz00(
					((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_ez00_4832)));
				return
					BGl_forkzf2joinzf2zzsaw_node2rtlz00(BgL_arg2261z00_5202,
					BgL_arg2262z00_5203, BgL_arg2263z00_5204);
			}
		}

	}



/* &node->rtl-conditiona1685 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2conditiona1685z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4833, obj_t BgL_ez00_4834)
	{
		{	/* SawMill/node2rtl.scm 256 */
			{	/* SawMill/node2rtl.scm 258 */
				BgL_nodez00_bglt BgL_arg2250z00_5227;
				obj_t BgL_arg2251z00_5228;

				BgL_arg2250z00_5227 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_ez00_4834)))->BgL_testz00);
				{	/* SawMill/node2rtl.scm 258 */
					obj_t BgL_arg2252z00_5229;
					BgL_rtl_regz00_bglt BgL_arg2253z00_5230;

					{	/* SawMill/node2rtl.scm 258 */
						BgL_areaz00_bglt BgL_arg2254z00_5231;
						BgL_areaz00_bglt BgL_arg2256z00_5232;

						BgL_arg2254z00_5231 =
							BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_ez00_4834)))->BgL_truez00));
						BgL_arg2256z00_5232 =
							BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_ez00_4834)))->BgL_falsez00));
						{	/* SawMill/node2rtl.scm 258 */
							obj_t BgL_list2257z00_5233;

							{	/* SawMill/node2rtl.scm 258 */
								obj_t BgL_arg2258z00_5234;

								BgL_arg2258z00_5234 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg2256z00_5232), BNIL);
								BgL_list2257z00_5233 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg2254z00_5231), BgL_arg2258z00_5234);
							}
							BgL_arg2252z00_5229 = BgL_list2257z00_5233;
						}
					}
					BgL_arg2253z00_5230 =
						BGl_newzd2regzd2zzsaw_node2rtlz00(
						((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_ez00_4834)));
					BgL_arg2251z00_5228 =
						BGl_joinz00zzsaw_node2rtlz00(BgL_arg2252z00_5229,
						BgL_arg2253z00_5230);
				}
				return
					BGl_predicatez00zzsaw_node2rtlz00(BgL_arg2250z00_5227,
					BgL_arg2251z00_5228);
			}
		}

	}



/* &node->rtl-sync1683 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2sync1683z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4835, obj_t BgL_ez00_4836)
	{
		{	/* SawMill/node2rtl.scm 252 */
			return
				BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
				(BGl_synczd2ze3sequencez31zzsync_nodez00(((BgL_syncz00_bglt)
						BgL_ez00_4836)));
		}

	}



/* &node->rtl-sequence1681 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2sequence1681z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4837, obj_t BgL_ez00_4838)
	{
		{	/* SawMill/node2rtl.scm 247 */
			{	/* SawMill/node2rtl.scm 249 */
				obj_t BgL_arg2243z00_5237;

				{	/* SawMill/node2rtl.scm 249 */
					obj_t BgL_l1624z00_5238;

					BgL_l1624z00_5238 =
						(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_ez00_4838)))->BgL_nodesz00);
					if (NULLP(BgL_l1624z00_5238))
						{	/* SawMill/node2rtl.scm 249 */
							BgL_arg2243z00_5237 = BNIL;
						}
					else
						{	/* SawMill/node2rtl.scm 249 */
							obj_t BgL_head1626z00_5239;

							{	/* SawMill/node2rtl.scm 249 */
								obj_t BgL_res2847z00_5240;

								BgL_res2847z00_5240 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1626z00_5239 = BgL_res2847z00_5240;
							}
							{
								obj_t BgL_l1624z00_5242;
								obj_t BgL_tail1627z00_5243;

								BgL_l1624z00_5242 = BgL_l1624z00_5238;
								BgL_tail1627z00_5243 = BgL_head1626z00_5239;
							BgL_zc3z04anonymousza32245ze3z87_5241:
								if (NULLP(BgL_l1624z00_5242))
									{	/* SawMill/node2rtl.scm 249 */
										BgL_arg2243z00_5237 = CDR(BgL_head1626z00_5239);
									}
								else
									{	/* SawMill/node2rtl.scm 249 */
										obj_t BgL_newtail1628z00_5244;

										{	/* SawMill/node2rtl.scm 249 */
											BgL_areaz00_bglt BgL_arg2248z00_5245;

											{	/* SawMill/node2rtl.scm 249 */
												obj_t BgL_ez00_5246;

												BgL_ez00_5246 = CAR(((obj_t) BgL_l1624z00_5242));
												BgL_arg2248z00_5245 =
													BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
													((BgL_nodez00_bglt) BgL_ez00_5246));
											}
											{	/* SawMill/node2rtl.scm 249 */
												obj_t BgL_res2849z00_5247;

												BgL_res2849z00_5247 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg2248z00_5245), BNIL);
												BgL_newtail1628z00_5244 = BgL_res2849z00_5247;
											}
										}
										SET_CDR(BgL_tail1627z00_5243, BgL_newtail1628z00_5244);
										{	/* SawMill/node2rtl.scm 249 */
											obj_t BgL_arg2247z00_5248;

											BgL_arg2247z00_5248 = CDR(((obj_t) BgL_l1624z00_5242));
											{
												obj_t BgL_tail1627z00_7339;
												obj_t BgL_l1624z00_7338;

												BgL_l1624z00_7338 = BgL_arg2247z00_5248;
												BgL_tail1627z00_7339 = BgL_newtail1628z00_5244;
												BgL_tail1627z00_5243 = BgL_tail1627z00_7339;
												BgL_l1624z00_5242 = BgL_l1624z00_7338;
												goto BgL_zc3z04anonymousza32245ze3z87_5241;
											}
										}
									}
							}
						}
				}
				return BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg2243z00_5237);
			}
		}

	}



/* &node->rtl-setq1679 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2setq1679z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4839, obj_t BgL_ez00_4840)
	{
		{	/* SawMill/node2rtl.scm 238 */
			{	/* SawMill/node2rtl.scm 240 */
				BgL_varz00_bglt BgL_i1250z00_5250;

				BgL_i1250z00_5250 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_ez00_4840)))->BgL_varz00);
				{	/* SawMill/node2rtl.scm 241 */
					BgL_areaz00_bglt BgL_arg2227z00_5251;
					BgL_areaz00_bglt BgL_arg2228z00_5252;

					{	/* SawMill/node2rtl.scm 241 */
						bool_t BgL_test3114z00_7343;

						{	/* SawMill/node2rtl.scm 241 */
							BgL_variablez00_bglt BgL_arg2239z00_5253;

							BgL_arg2239z00_5253 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1250z00_5250))->
								BgL_variablez00);
							{	/* SawMill/node2rtl.scm 241 */
								bool_t BgL_res2840z00_5254;

								BgL_res2840z00_5254 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2239z00_5253), BGl_globalz00zzast_varz00);
								BgL_test3114z00_7343 = BgL_res2840z00_5254;
							}
						}
						if (BgL_test3114z00_7343)
							{	/* SawMill/node2rtl.scm 242 */
								BgL_rtl_storegz00_bglt BgL_arg2231z00_5255;
								BgL_nodez00_bglt BgL_arg2232z00_5256;

								{	/* SawMill/node2rtl.scm 242 */
									BgL_rtl_storegz00_bglt BgL_new1252z00_5257;

									{	/* SawMill/node2rtl.scm 242 */
										BgL_rtl_storegz00_bglt BgL_new1251z00_5258;

										BgL_new1251z00_5258 =
											((BgL_rtl_storegz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_storegz00_bgl))));
										{	/* SawMill/node2rtl.scm 242 */
											long BgL_arg2235z00_5259;

											{	/* SawMill/node2rtl.scm 242 */
												long BgL_res2841z00_5260;

												BgL_res2841z00_5260 =
													BGL_CLASS_INDEX(BGl_rtl_storegz00zzsaw_defsz00);
												BgL_arg2235z00_5259 = BgL_res2841z00_5260;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1251z00_5258),
												BgL_arg2235z00_5259);
										}
										BgL_new1252z00_5257 = BgL_new1251z00_5258;
									}
									((((BgL_rtl_funz00_bglt) COBJECT(
													((BgL_rtl_funz00_bglt) BgL_new1252z00_5257)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									{
										BgL_globalz00_bglt BgL_auxz00_7353;

										{	/* SawMill/node2rtl.scm 242 */
											BgL_variablez00_bglt BgL_arg2234z00_5261;

											BgL_arg2234z00_5261 =
												(((BgL_varz00_bglt) COBJECT(BgL_i1250z00_5250))->
												BgL_variablez00);
											BgL_auxz00_7353 =
												BGl_getzd2globalzd2zzsaw_node2rtlz00((
													(BgL_globalz00_bglt) BgL_arg2234z00_5261));
										}
										((((BgL_rtl_storegz00_bglt) COBJECT(BgL_new1252z00_5257))->
												BgL_varz00) =
											((BgL_globalz00_bglt) BgL_auxz00_7353), BUNSPEC);
									}
									BgL_arg2231z00_5255 = BgL_new1252z00_5257;
								}
								BgL_arg2232z00_5256 =
									(((BgL_setqz00_bglt) COBJECT(
											((BgL_setqz00_bglt) BgL_ez00_4840)))->BgL_valuez00);
								{	/* SawMill/node2rtl.scm 242 */
									obj_t BgL_list2233z00_5262;

									BgL_list2233z00_5262 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_arg2232z00_5256), BNIL);
									{	/* SawMill/node2rtl.scm 242 */
										BgL_areaz00_bglt BgL_res2842z00_5263;

										BgL_res2842z00_5263 =
											BGl_callza2za2zzsaw_node2rtlz00(
											((obj_t)
												((BgL_setqz00_bglt) BgL_ez00_4840)),
											((BgL_rtl_funz00_bglt) BgL_arg2231z00_5255),
											BgL_list2233z00_5262);
										BgL_arg2227z00_5251 = BgL_res2842z00_5263;
							}}}
						else
							{	/* SawMill/node2rtl.scm 243 */
								BgL_nodez00_bglt BgL_arg2236z00_5264;
								BgL_rtl_regz00_bglt BgL_arg2237z00_5265;

								BgL_arg2236z00_5264 =
									(((BgL_setqz00_bglt) COBJECT(
											((BgL_setqz00_bglt) BgL_ez00_4840)))->BgL_valuez00);
								{	/* SawMill/node2rtl.scm 243 */
									BgL_variablez00_bglt BgL_arg2238z00_5266;

									BgL_arg2238z00_5266 =
										(((BgL_varz00_bglt) COBJECT(BgL_i1250z00_5250))->
										BgL_variablez00);
									BgL_arg2237z00_5265 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(((BgL_localz00_bglt)
											BgL_arg2238z00_5266));
								}
								{	/* SawMill/node2rtl.scm 243 */
									BgL_areaz00_bglt BgL_res2843z00_5267;

									{	/* SawMill/node2rtl.scm 184 */
										BgL_areaz00_bglt BgL_az00_5268;

										BgL_az00_5268 =
											BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00
											(BgL_arg2236z00_5264);
										BGl_bdestinationz12z12zzsaw_node2rtlz00((((BgL_areaz00_bglt)
													COBJECT(BgL_az00_5268))->BgL_exitz00),
											BgL_arg2237z00_5265);
										BgL_res2843z00_5267 = BgL_az00_5268;
									}
									BgL_arg2227z00_5251 = BgL_res2843z00_5267;
								}
							}
					}
					{	/* SawMill/node2rtl.scm 244 */
						BgL_rtl_nopz00_bglt BgL_arg2240z00_5269;

						{	/* SawMill/node2rtl.scm 244 */
							BgL_rtl_nopz00_bglt BgL_new1254z00_5270;

							{	/* SawMill/node2rtl.scm 244 */
								BgL_rtl_nopz00_bglt BgL_new1253z00_5271;

								BgL_new1253z00_5271 =
									((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_nopz00_bgl))));
								{	/* SawMill/node2rtl.scm 244 */
									long BgL_arg2242z00_5272;

									{	/* SawMill/node2rtl.scm 244 */
										long BgL_res2844z00_5273;

										BgL_res2844z00_5273 =
											BGL_CLASS_INDEX(BGl_rtl_nopz00zzsaw_defsz00);
										BgL_arg2242z00_5272 = BgL_res2844z00_5273;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1253z00_5271),
										BgL_arg2242z00_5272);
								}
								BgL_new1254z00_5270 = BgL_new1253z00_5271;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1254z00_5270)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg2240z00_5269 = BgL_new1254z00_5270;
						}
						{	/* SawMill/node2rtl.scm 244 */
							BgL_areaz00_bglt BgL_res2845z00_5274;

							BgL_res2845z00_5274 =
								BGl_singleza2za2zzsaw_node2rtlz00(BFALSE,
								((BgL_rtl_funz00_bglt) BgL_arg2240z00_5269), BNIL);
							BgL_arg2228z00_5252 = BgL_res2845z00_5274;
					}}
					return
						BGl_linkz00zzsaw_node2rtlz00(BgL_arg2227z00_5251,
						BgL_arg2228z00_5252);
				}
			}
		}

	}



/* &node->rtl-let-var1677 */
	BgL_areaz00_bglt
		BGl_z62nodezd2ze3rtlzd2letzd2var1677z53zzsaw_node2rtlz00(obj_t
		BgL_envz00_4841, obj_t BgL_ez00_4842)
	{
		{	/* SawMill/node2rtl.scm 221 */
			{	/* SawMill/node2rtl.scm 224 */
				bool_t BgL_test3115z00_7383;

				{	/* SawMill/node2rtl.scm 224 */
					bool_t BgL_test3116z00_7384;

					{	/* SawMill/node2rtl.scm 224 */
						BgL_nodez00_bglt BgL_arg2226z00_5276;

						BgL_arg2226z00_5276 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->BgL_bodyz00);
						{	/* SawMill/node2rtl.scm 224 */
							bool_t BgL_res2830z00_5277;

							BgL_res2830z00_5277 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg2226z00_5276), BGl_conditionalz00zzast_nodez00);
							BgL_test3116z00_7384 = BgL_res2830z00_5277;
						}
					}
					if (BgL_test3116z00_7384)
						{	/* SawMill/node2rtl.scm 224 */
							if (NULLP(
									(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->
										BgL_bindingsz00)))
								{	/* SawMill/node2rtl.scm 225 */
									BgL_test3115z00_7383 = ((bool_t) 0);
								}
							else
								{	/* SawMill/node2rtl.scm 225 */
									if (NULLP(CDR(
												(((BgL_letzd2varzd2_bglt) COBJECT(
															((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->
													BgL_bindingsz00))))
										{	/* SawMill/node2rtl.scm 227 */
											bool_t BgL_test3119z00_7398;

											{	/* SawMill/node2rtl.scm 227 */
												BgL_nodez00_bglt BgL_arg2221z00_5278;

												BgL_arg2221z00_5278 =
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt)
																(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_ez00_4842)))->BgL_bodyz00))))->
													BgL_testz00);
												{	/* SawMill/node2rtl.scm 227 */
													bool_t BgL_res2833z00_5279;

													BgL_res2833z00_5279 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg2221z00_5278),
														BGl_varz00zzast_nodez00);
													BgL_test3119z00_7398 = BgL_res2833z00_5279;
												}
											}
											if (BgL_test3119z00_7398)
												{	/* SawMill/node2rtl.scm 228 */
													bool_t BgL_test3120z00_7405;

													{	/* SawMill/node2rtl.scm 228 */
														long BgL_tmpz00_7406;

														{
															BgL_variablez00_bglt BgL_auxz00_7407;

															{
																BgL_localz00_bglt BgL_auxz00_7408;

																{
																	obj_t BgL_auxz00_7409;

																	{	/* SawMill/node2rtl.scm 228 */
																		obj_t BgL_pairz00_5280;

																		BgL_pairz00_5280 =
																			(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_ez00_4842)))->BgL_bindingsz00);
																		{	/* SawMill/node2rtl.scm 228 */
																			obj_t BgL_pairz00_5281;

																			BgL_pairz00_5281 = CAR(BgL_pairz00_5280);
																			BgL_auxz00_7409 = CAR(BgL_pairz00_5281);
																	}}
																	BgL_auxz00_7408 =
																		((BgL_localz00_bglt) BgL_auxz00_7409);
																}
																BgL_auxz00_7407 =
																	((BgL_variablez00_bglt) BgL_auxz00_7408);
															}
															BgL_tmpz00_7406 =
																(((BgL_variablez00_bglt)
																	COBJECT(BgL_auxz00_7407))->BgL_occurrencez00);
														}
														BgL_test3120z00_7405 =
															(((long) 1) == BgL_tmpz00_7406);
													}
													if (BgL_test3120z00_7405)
														{	/* SawMill/node2rtl.scm 229 */
															obj_t BgL_tmpz00_7418;

															{	/* SawMill/node2rtl.scm 229 */
																obj_t BgL_pairz00_5282;

																BgL_pairz00_5282 =
																	(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_ez00_4842)))->BgL_bindingsz00);
																BgL_tmpz00_7418 = CAR(CAR(BgL_pairz00_5282));
															}
															BgL_test3115z00_7383 =
																(BgL_tmpz00_7418 ==
																((obj_t)
																	(((BgL_varz00_bglt) COBJECT(
																				((BgL_varz00_bglt)
																					(((BgL_conditionalz00_bglt) COBJECT(
																								((BgL_conditionalz00_bglt)
																									(((BgL_letzd2varzd2_bglt)
																											COBJECT((
																													(BgL_letzd2varzd2_bglt)
																													BgL_ez00_4842)))->
																										BgL_bodyz00))))->
																						BgL_testz00))))->BgL_variablez00)));
														}
													else
														{	/* SawMill/node2rtl.scm 228 */
															BgL_test3115z00_7383 = ((bool_t) 0);
														}
												}
											else
												{	/* SawMill/node2rtl.scm 227 */
													BgL_test3115z00_7383 = ((bool_t) 0);
												}
										}
									else
										{	/* SawMill/node2rtl.scm 226 */
											BgL_test3115z00_7383 = ((bool_t) 0);
										}
								}
						}
					else
						{	/* SawMill/node2rtl.scm 224 */
							BgL_test3115z00_7383 = ((bool_t) 0);
						}
				}
				if (BgL_test3115z00_7383)
					{	/* SawMill/node2rtl.scm 224 */
						{	/* SawMill/node2rtl.scm 230 */
							BgL_nodez00_bglt BgL_arg2197z00_5283;
							obj_t BgL_arg2198z00_5284;

							BgL_arg2197z00_5283 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->BgL_bodyz00);
							{	/* SawMill/node2rtl.scm 230 */
								obj_t BgL_pairz00_5285;

								BgL_pairz00_5285 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->
									BgL_bindingsz00);
								BgL_arg2198z00_5284 = CDR(CAR(BgL_pairz00_5285));
							}
							((((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_arg2197z00_5283)))->
									BgL_testz00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg2198z00_5284)),
								BUNSPEC);
						}
						return
							BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->BgL_bodyz00));
					}
				else
					{	/* SawMill/node2rtl.scm 233 */
						BgL_areaz00_bglt BgL_arg2201z00_5286;
						BgL_areaz00_bglt BgL_arg2202z00_5287;

						{	/* SawMill/node2rtl.scm 233 */
							obj_t BgL_arg2203z00_5288;

							{	/* SawMill/node2rtl.scm 233 */
								obj_t BgL_l1619z00_5289;

								BgL_l1619z00_5289 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->
									BgL_bindingsz00);
								if (NULLP(BgL_l1619z00_5289))
									{	/* SawMill/node2rtl.scm 233 */
										BgL_arg2203z00_5288 = BNIL;
									}
								else
									{	/* SawMill/node2rtl.scm 233 */
										obj_t BgL_head1621z00_5290;

										{	/* SawMill/node2rtl.scm 233 */
											obj_t BgL_res2836z00_5291;

											BgL_res2836z00_5291 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1621z00_5290 = BgL_res2836z00_5291;
										}
										{
											obj_t BgL_l1619z00_5293;
											obj_t BgL_tail1622z00_5294;

											BgL_l1619z00_5293 = BgL_l1619z00_5289;
											BgL_tail1622z00_5294 = BgL_head1621z00_5290;
										BgL_zc3z04anonymousza32205ze3z87_5292:
											if (NULLP(BgL_l1619z00_5293))
												{	/* SawMill/node2rtl.scm 233 */
													BgL_arg2203z00_5288 = CDR(BgL_head1621z00_5290);
												}
											else
												{	/* SawMill/node2rtl.scm 233 */
													obj_t BgL_newtail1623z00_5295;

													{	/* SawMill/node2rtl.scm 233 */
														BgL_areaz00_bglt BgL_arg2208z00_5296;

														{	/* SawMill/node2rtl.scm 233 */
															obj_t BgL_bz00_5297;

															BgL_bz00_5297 = CAR(((obj_t) BgL_l1619z00_5293));
															{	/* SawMill/node2rtl.scm 233 */
																obj_t BgL_arg2209z00_5298;
																BgL_rtl_regz00_bglt BgL_arg2210z00_5299;

																BgL_arg2209z00_5298 =
																	CDR(((obj_t) BgL_bz00_5297));
																{	/* SawMill/node2rtl.scm 233 */
																	obj_t BgL_arg2211z00_5300;

																	BgL_arg2211z00_5300 =
																		CAR(((obj_t) BgL_bz00_5297));
																	BgL_arg2210z00_5299 =
																		BGl_localzd2ze3regz31zzsaw_node2rtlz00(
																		((BgL_localz00_bglt) BgL_arg2211z00_5300));
																}
																{	/* SawMill/node2rtl.scm 233 */
																	BgL_areaz00_bglt BgL_res2838z00_5301;

																	{	/* SawMill/node2rtl.scm 184 */
																		BgL_areaz00_bglt BgL_az00_5302;

																		BgL_az00_5302 =
																			BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
																			((BgL_nodez00_bglt) BgL_arg2209z00_5298));
																		BGl_bdestinationz12z12zzsaw_node2rtlz00(
																			(((BgL_areaz00_bglt)
																					COBJECT(BgL_az00_5302))->BgL_exitz00),
																			BgL_arg2210z00_5299);
																		BgL_res2838z00_5301 = BgL_az00_5302;
																	}
																	BgL_arg2208z00_5296 = BgL_res2838z00_5301;
																}
															}
														}
														{	/* SawMill/node2rtl.scm 233 */
															obj_t BgL_res2839z00_5303;

															BgL_res2839z00_5303 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2208z00_5296), BNIL);
															BgL_newtail1623z00_5295 = BgL_res2839z00_5303;
														}
													}
													SET_CDR(BgL_tail1622z00_5294,
														BgL_newtail1623z00_5295);
													{	/* SawMill/node2rtl.scm 233 */
														obj_t BgL_arg2207z00_5304;

														BgL_arg2207z00_5304 =
															CDR(((obj_t) BgL_l1619z00_5293));
														{
															obj_t BgL_tail1622z00_7469;
															obj_t BgL_l1619z00_7468;

															BgL_l1619z00_7468 = BgL_arg2207z00_5304;
															BgL_tail1622z00_7469 = BgL_newtail1623z00_5295;
															BgL_tail1622z00_5294 = BgL_tail1622z00_7469;
															BgL_l1619z00_5293 = BgL_l1619z00_7468;
															goto BgL_zc3z04anonymousza32205ze3z87_5292;
														}
													}
												}
										}
									}
							}
							BgL_arg2201z00_5286 =
								BGl_linkza2za2zzsaw_node2rtlz00(BgL_arg2203z00_5288);
						}
						BgL_arg2202z00_5287 =
							BGl_nodezd2ze3rtlz31zzsaw_node2rtlz00(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_ez00_4842)))->BgL_bodyz00));
						return
							BGl_linkz00zzsaw_node2rtlz00(BgL_arg2201z00_5286,
							BgL_arg2202z00_5287);
					}
			}
		}

	}



/* &node->rtl-var1675 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2var1675z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4843, obj_t BgL_ez00_4844)
	{
		{	/* SawMill/node2rtl.scm 211 */
			{	/* SawMill/node2rtl.scm 213 */
				bool_t BgL_test3123z00_7475;

				{	/* SawMill/node2rtl.scm 213 */
					BgL_variablez00_bglt BgL_arg2167z00_5306;

					BgL_arg2167z00_5306 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_ez00_4844)))->BgL_variablez00);
					{	/* SawMill/node2rtl.scm 213 */
						bool_t BgL_res2822z00_5307;

						BgL_res2822z00_5307 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg2167z00_5306), BGl_localz00zzast_varz00);
						BgL_test3123z00_7475 = BgL_res2822z00_5307;
					}
				}
				if (BgL_test3123z00_7475)
					{	/* SawMill/node2rtl.scm 214 */
						BgL_rtl_movz00_bglt BgL_arg2149z00_5308;
						BgL_rtl_regz00_bglt BgL_arg2150z00_5309;

						{	/* SawMill/node2rtl.scm 214 */
							BgL_rtl_movz00_bglt BgL_new1242z00_5310;

							{	/* SawMill/node2rtl.scm 214 */
								BgL_rtl_movz00_bglt BgL_new1241z00_5311;

								BgL_new1241z00_5311 =
									((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_movz00_bgl))));
								{	/* SawMill/node2rtl.scm 214 */
									long BgL_arg2152z00_5312;

									{	/* SawMill/node2rtl.scm 214 */
										long BgL_res2823z00_5313;

										BgL_res2823z00_5313 =
											BGL_CLASS_INDEX(BGl_rtl_movz00zzsaw_defsz00);
										BgL_arg2152z00_5312 = BgL_res2823z00_5313;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1241z00_5311),
										BgL_arg2152z00_5312);
								}
								BgL_new1242z00_5310 = BgL_new1241z00_5311;
							}
							((((BgL_rtl_funz00_bglt) COBJECT(
											((BgL_rtl_funz00_bglt) BgL_new1242z00_5310)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							BgL_arg2149z00_5308 = BgL_new1242z00_5310;
						}
						{	/* SawMill/node2rtl.scm 214 */
							BgL_variablez00_bglt BgL_arg2153z00_5314;

							BgL_arg2153z00_5314 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_ez00_4844)))->BgL_variablez00);
							BgL_arg2150z00_5309 =
								BGl_localzd2ze3regz31zzsaw_node2rtlz00(
								((BgL_localz00_bglt) BgL_arg2153z00_5314));
						}
						{	/* SawMill/node2rtl.scm 214 */
							obj_t BgL_list2151z00_5315;

							BgL_list2151z00_5315 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg2150z00_5309), BNIL);
							{	/* SawMill/node2rtl.scm 214 */
								BgL_areaz00_bglt BgL_res2824z00_5316;

								BgL_res2824z00_5316 =
									BGl_singleza2za2zzsaw_node2rtlz00(
									((obj_t)
										((BgL_varz00_bglt) BgL_ez00_4844)),
									((BgL_rtl_funz00_bglt) BgL_arg2149z00_5308),
									BgL_list2151z00_5315);
								return BgL_res2824z00_5316;
							}
						}
					}
				else
					{	/* SawMill/node2rtl.scm 215 */
						bool_t BgL_test3124z00_7496;

						{	/* SawMill/node2rtl.scm 215 */
							BgL_valuez00_bglt BgL_arg2165z00_5317;

							BgL_arg2165z00_5317 =
								(((BgL_variablez00_bglt) COBJECT(
										(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_ez00_4844)))->
											BgL_variablez00)))->BgL_valuez00);
							{	/* SawMill/node2rtl.scm 215 */
								bool_t BgL_res2825z00_5318;

								BgL_res2825z00_5318 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2165z00_5317), BGl_sfunz00zzast_varz00);
								BgL_test3124z00_7496 = BgL_res2825z00_5318;
							}
						}
						if (BgL_test3124z00_7496)
							{	/* SawMill/node2rtl.scm 216 */
								BgL_rtl_loadfunz00_bglt BgL_arg2157z00_5319;

								{	/* SawMill/node2rtl.scm 216 */
									BgL_rtl_loadfunz00_bglt BgL_new1245z00_5320;

									{	/* SawMill/node2rtl.scm 216 */
										BgL_rtl_loadfunz00_bglt BgL_new1243z00_5321;

										BgL_new1243z00_5321 =
											((BgL_rtl_loadfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_loadfunz00_bgl))));
										{	/* SawMill/node2rtl.scm 216 */
											long BgL_arg2160z00_5322;

											{	/* SawMill/node2rtl.scm 216 */
												long BgL_res2826z00_5323;

												BgL_res2826z00_5323 =
													BGL_CLASS_INDEX(BGl_rtl_loadfunz00zzsaw_defsz00);
												BgL_arg2160z00_5322 = BgL_res2826z00_5323;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1243z00_5321),
												BgL_arg2160z00_5322);
										}
										BgL_new1245z00_5320 = BgL_new1243z00_5321;
									}
									((((BgL_rtl_funz00_bglt) COBJECT(
													((BgL_rtl_funz00_bglt) BgL_new1245z00_5320)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									{
										BgL_globalz00_bglt BgL_auxz00_7508;

										{	/* SawMill/node2rtl.scm 216 */
											BgL_variablez00_bglt BgL_arg2159z00_5324;

											BgL_arg2159z00_5324 =
												(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_ez00_4844)))->
												BgL_variablez00);
											BgL_auxz00_7508 =
												BGl_getzd2globalzd2zzsaw_node2rtlz00((
													(BgL_globalz00_bglt) BgL_arg2159z00_5324));
										}
										((((BgL_rtl_loadfunz00_bglt) COBJECT(BgL_new1245z00_5320))->
												BgL_varz00) =
											((BgL_globalz00_bglt) BgL_auxz00_7508), BUNSPEC);
									}
									BgL_arg2157z00_5319 = BgL_new1245z00_5320;
								}
								{	/* SawMill/node2rtl.scm 216 */
									BgL_areaz00_bglt BgL_res2827z00_5325;

									BgL_res2827z00_5325 =
										BGl_singleza2za2zzsaw_node2rtlz00(
										((obj_t)
											((BgL_varz00_bglt) BgL_ez00_4844)),
										((BgL_rtl_funz00_bglt) BgL_arg2157z00_5319), BNIL);
									return BgL_res2827z00_5325;
								}
							}
						else
							{	/* SawMill/node2rtl.scm 218 */
								BgL_rtl_loadgz00_bglt BgL_arg2161z00_5326;

								{	/* SawMill/node2rtl.scm 218 */
									BgL_rtl_loadgz00_bglt BgL_new1247z00_5327;

									{	/* SawMill/node2rtl.scm 218 */
										BgL_rtl_loadgz00_bglt BgL_new1246z00_5328;

										BgL_new1246z00_5328 =
											((BgL_rtl_loadgz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_loadgz00_bgl))));
										{	/* SawMill/node2rtl.scm 218 */
											long BgL_arg2164z00_5329;

											{	/* SawMill/node2rtl.scm 218 */
												long BgL_res2828z00_5330;

												BgL_res2828z00_5330 =
													BGL_CLASS_INDEX(BGl_rtl_loadgz00zzsaw_defsz00);
												BgL_arg2164z00_5329 = BgL_res2828z00_5330;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1246z00_5328),
												BgL_arg2164z00_5329);
										}
										BgL_new1247z00_5327 = BgL_new1246z00_5328;
									}
									((((BgL_rtl_funz00_bglt) COBJECT(
													((BgL_rtl_funz00_bglt) BgL_new1247z00_5327)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									{
										BgL_globalz00_bglt BgL_auxz00_7524;

										{	/* SawMill/node2rtl.scm 218 */
											BgL_variablez00_bglt BgL_arg2163z00_5331;

											BgL_arg2163z00_5331 =
												(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_ez00_4844)))->
												BgL_variablez00);
											BgL_auxz00_7524 =
												BGl_getzd2globalzd2zzsaw_node2rtlz00((
													(BgL_globalz00_bglt) BgL_arg2163z00_5331));
										}
										((((BgL_rtl_loadgz00_bglt) COBJECT(BgL_new1247z00_5327))->
												BgL_varz00) =
											((BgL_globalz00_bglt) BgL_auxz00_7524), BUNSPEC);
									}
									BgL_arg2161z00_5326 = BgL_new1247z00_5327;
								}
								{	/* SawMill/node2rtl.scm 218 */
									BgL_areaz00_bglt BgL_res2829z00_5332;

									BgL_res2829z00_5332 =
										BGl_singleza2za2zzsaw_node2rtlz00(
										((obj_t)
											((BgL_varz00_bglt) BgL_ez00_4844)),
										((BgL_rtl_funz00_bglt) BgL_arg2161z00_5326), BNIL);
									return BgL_res2829z00_5332;
								}
							}
					}
			}
		}

	}



/* &node->rtl-atom1673 */
	BgL_areaz00_bglt BGl_z62nodezd2ze3rtlzd2atom1673z81zzsaw_node2rtlz00(obj_t
		BgL_envz00_4845, obj_t BgL_ez00_4846)
	{
		{	/* SawMill/node2rtl.scm 207 */
			{	/* SawMill/node2rtl.scm 208 */
				BgL_rtl_loadiz00_bglt BgL_arg2144z00_5334;

				{	/* SawMill/node2rtl.scm 208 */
					BgL_rtl_loadiz00_bglt BgL_new1239z00_5335;

					{	/* SawMill/node2rtl.scm 208 */
						BgL_rtl_loadiz00_bglt BgL_new1238z00_5336;

						BgL_new1238z00_5336 =
							((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_loadiz00_bgl))));
						{	/* SawMill/node2rtl.scm 208 */
							long BgL_arg2146z00_5337;

							{	/* SawMill/node2rtl.scm 208 */
								long BgL_res2820z00_5338;

								BgL_res2820z00_5338 =
									BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
								BgL_arg2146z00_5337 = BgL_res2820z00_5338;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1238z00_5336),
								BgL_arg2146z00_5337);
						}
						BgL_new1239z00_5335 = BgL_new1238z00_5336;
					}
					((((BgL_rtl_funz00_bglt) COBJECT(
									((BgL_rtl_funz00_bglt) BgL_new1239z00_5335)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_new1239z00_5335))->
							BgL_constantz00) =
						((BgL_atomz00_bglt) ((BgL_atomz00_bglt) BgL_ez00_4846)), BUNSPEC);
					BgL_arg2144z00_5334 = BgL_new1239z00_5335;
				}
				{	/* SawMill/node2rtl.scm 208 */
					BgL_areaz00_bglt BgL_res2821z00_5339;

					BgL_res2821z00_5339 =
						BGl_singleza2za2zzsaw_node2rtlz00(
						((obj_t)
							((BgL_atomz00_bglt) BgL_ez00_4846)),
						((BgL_rtl_funz00_bglt) BgL_arg2144z00_5334), BNIL);
					return BgL_res2821z00_5339;
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_node2rtlz00()
	{
		{	/* SawMill/node2rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzsync_nodez00(((long) 421078394),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2969z00zzsaw_node2rtlz00));
		}

	}

#ifdef __cplusplus
}
#endif
