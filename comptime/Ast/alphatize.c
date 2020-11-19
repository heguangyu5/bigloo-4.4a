/*===========================================================================*/
/*   (Ast/alphatize.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/alphatize.scm) */
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

	typedef struct BgL_privatez00_bgl
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
	}                 *BgL_privatez00_bglt;

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

	typedef struct BgL_retblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                  *BgL_retblockz00_bglt;

	typedef struct BgL_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_retblockz00_bgl *BgL_blockz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                *BgL_returnz00_bglt;

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

	typedef struct BgL_retblockzf2alphazf2_bgl
	{
		struct BgL_retblockz00_bgl *BgL_alphaz00;
	}                          *BgL_retblockzf2alphazf2_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static BgL_retblockz00_bglt BGl_z62lambda1776z62zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1777z62zzast_alphatiza7eza7(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31757ze3ze5zzast_alphatiza7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_getzd2locationzd2zzast_alphatiza7eza7(BgL_nodez00_bglt,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_sexitz00zzast_varz00;
	static obj_t BGl_retblockzf2alphazf2zzast_alphatiza7eza7 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2switch1649zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2funcall1619zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2kwote1609zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzast_alphatiza7eza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_alphatiza7eza7();
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2patch1603zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2conditi1645zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2castzd2nu1623z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2retbloc1665zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2cast1641zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setfiel1627zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2boxzd2ref1653z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62dozd2alphatiza7e1598z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setq1643zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2makezd2bo1651z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2getfiel1625zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_alphatiza7eza7();
	extern obj_t BGl_vallocz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2app1615zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62alphatiza7ezc5zzast_alphatiza7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62dozd2alphatiza7ez17zzast_alphatiza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2valloc1637zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2letzd2fun1657z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_newz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2appzd2ly1617z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t, obj_t,
		BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2literal1601zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2return1667zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setzd2exzd21661zc5zzast_alphatiza7eza7(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2closure1607zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2letzd2var1659z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2boxzd2set1655z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_alphatiza7ezd2sanszd2closureza7zzast_alphatiza7eza7(obj_t, obj_t, obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2new1629zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2sync1613zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7 =
		BUNSPEC;
	extern BgL_localz00_bglt BGl_makezd2localzd2sexitz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sexitz00_bglt);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2sequenc1611zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2instanc1639zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2fail1647zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2pragma1621zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzast_alphatiza7eza7(obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2var1605zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_alphatiza7eza7();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7();
	extern obj_t BGl_retblockz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62alphatiza7ezd2sanszd2closurezc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t,
		obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vsetz121635zd7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vref1633zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vlength1631zc5zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2jumpzd2ex1663z17zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t);
	static BgL_retblockz00_bglt BGl_z62lambda1746z62zzast_alphatiza7eza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_retblockz00_bglt BGl_z62lambda1755z62zzast_alphatiza7eza7(obj_t,
		obj_t);
	static BgL_retblockz00_bglt BGl_z62lambda1758z62zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_alphatiza7ezd2sanszd2closurezd2envz75zzast_alphatiza7eza7,
		BgL_bgl_za762alphatiza7a7eza7d2298za7,
		BGl_z62alphatiza7ezd2sanszd2closurezc5zzast_alphatiza7eza7, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzast_alphatiza7eza7,
		BgL_bgl_za762za7c3za704anonymo2299za7,
		BGl_z62zc3z04anonymousza31712ze3ze5zzast_alphatiza7eza7, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzast_alphatiza7eza7,
		BgL_bgl_za762lambda1777za7622300z00,
		BGl_z62lambda1777z62zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzast_alphatiza7eza7,
		BgL_bgl_za762lambda1776za7622301z00,
		BGl_z62lambda1776z62zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzast_alphatiza7eza7,
		BgL_bgl_za762lambda1758za7622302z00,
		BGl_z62lambda1758z62zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzast_alphatiza7eza7,
		BgL_bgl_za762za7c3za704anonymo2303za7,
		BGl_z62zc3z04anonymousza31757ze3ze5zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzast_alphatiza7eza7,
		BgL_bgl_za762lambda1755za7622304z00,
		BGl_z62lambda1755z62zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzast_alphatiza7eza7,
		BgL_bgl_za762lambda1746za7622305z00,
		BGl_z62lambda1746z62zzast_alphatiza7eza7, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72306za7,
		BGl_z62dozd2alphatiza7e1598z17zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72307za7,
		BGl_z62dozd2alphatiza7ezd2literal1601zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72308za7,
		BGl_z62dozd2alphatiza7ezd2patch1603zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2257z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72309za7,
		BGl_z62dozd2alphatiza7ezd2var1605zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72310za7,
		BGl_z62dozd2alphatiza7ezd2closure1607zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2259z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72311za7,
		BGl_z62dozd2alphatiza7ezd2kwote1609zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2260z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72312za7,
		BGl_z62dozd2alphatiza7ezd2sequenc1611zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2261z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72313za7,
		BGl_z62dozd2alphatiza7ezd2sync1613zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2262z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72314za7,
		BGl_z62dozd2alphatiza7ezd2app1615zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2263z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72315za7,
		BGl_z62dozd2alphatiza7ezd2appzd2ly1617z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2264z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72316za7,
		BGl_z62dozd2alphatiza7ezd2funcall1619zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2265z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72317za7,
		BGl_z62dozd2alphatiza7ezd2pragma1621zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2266z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72318za7,
		BGl_z62dozd2alphatiza7ezd2castzd2nu1623z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2267z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72319za7,
		BGl_z62dozd2alphatiza7ezd2getfiel1625zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2268z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72320za7,
		BGl_z62dozd2alphatiza7ezd2setfiel1627zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2269z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72321za7,
		BGl_z62dozd2alphatiza7ezd2new1629zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2270z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72322za7,
		BGl_z62dozd2alphatiza7ezd2vlength1631zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2271z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72323za7,
		BGl_z62dozd2alphatiza7ezd2vref1633zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2272z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72324za7,
		BGl_z62dozd2alphatiza7ezd2vsetz121635zd7zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2273z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72325za7,
		BGl_z62dozd2alphatiza7ezd2valloc1637zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2274z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72326za7,
		BGl_z62dozd2alphatiza7ezd2instanc1639zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2275z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72327za7,
		BGl_z62dozd2alphatiza7ezd2cast1641zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2276z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72328za7,
		BGl_z62dozd2alphatiza7ezd2setq1643zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2277z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72329za7,
		BGl_z62dozd2alphatiza7ezd2conditi1645zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2278z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72330za7,
		BGl_z62dozd2alphatiza7ezd2fail1647zc5zzast_alphatiza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2279z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72331za7,
		BGl_z62dozd2alphatiza7ezd2switch1649zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2280z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72332za7,
		BGl_z62dozd2alphatiza7ezd2makezd2bo1651z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2281z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72333za7,
		BGl_z62dozd2alphatiza7ezd2boxzd2ref1653z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2282z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72334za7,
		BGl_z62dozd2alphatiza7ezd2boxzd2set1655z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2283z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72335za7,
		BGl_z62dozd2alphatiza7ezd2letzd2fun1657z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2284z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72336za7,
		BGl_z62dozd2alphatiza7ezd2letzd2var1659z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2285z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72337za7,
		BGl_z62dozd2alphatiza7ezd2setzd2exzd21661zc5zzast_alphatiza7eza7, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2286z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72338za7,
		BGl_z62dozd2alphatiza7ezd2jumpzd2ex1663z17zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2287z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72339za7,
		BGl_z62dozd2alphatiza7ezd2retbloc1665zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2288z00zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72340za7,
		BGl_z62dozd2alphatiza7ezd2return1667zc5zzast_alphatiza7eza7, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_alphatiza7ezd2envz75zzast_alphatiza7eza7,
		BgL_bgl_za762alphatiza7a7eza7c2341za7,
		BGl_z62alphatiza7ezc5zzast_alphatiza7eza7, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2252z00zzast_alphatiza7eza7,
		BgL_bgl_string2252za700za7za7a2342za7, "do-alphatize1598", 16);
	      DEFINE_STRING(BGl_string2253z00zzast_alphatiza7eza7,
		BgL_bgl_string2253za700za7za7a2343za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2255z00zzast_alphatiza7eza7,
		BgL_bgl_string2255za700za7za7a2344za7, "do-alphatize", 12);
	      DEFINE_STRING(BGl_string2289z00zzast_alphatiza7eza7,
		BgL_bgl_string2289za700za7za7a2345za7, "alphatize", 9);
	      DEFINE_STRING(BGl_string2290z00zzast_alphatiza7eza7,
		BgL_bgl_string2290za700za7za7a2346za7, "Illegal alphatization (setq)", 28);
	      DEFINE_STRING(BGl_string2291z00zzast_alphatiza7eza7,
		BgL_bgl_string2291za700za7za7a2347za7, "Illegal alphatization (closure)",
		31);
	      DEFINE_STRING(BGl_string2292z00zzast_alphatiza7eza7,
		BgL_bgl_string2292za700za7za7a2348za7, "Illegal alphatization (var)", 27);
	      DEFINE_STRING(BGl_string2293z00zzast_alphatiza7eza7,
		BgL_bgl_string2293za700za7za7a2349za7, "ast_alphatize", 13);
	      DEFINE_STRING(BGl_string2294z00zzast_alphatiza7eza7,
		BgL_bgl_string2294za700za7za7a2350za7,
		"value app set! do-alphatize1598 ast_alphatize retblock/alpha alpha location ",
		76);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
		BgL_bgl_za762doza7d2alphatiza72351za7,
		BGl_z62dozd2alphatiza7ez17zzast_alphatiza7eza7, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_retblockzf2alphazf2zzast_alphatiza7eza7));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7));
		     ADD_ROOT((void
				*) (&BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long
		BgL_checksumz00_3709, char *BgL_fromz00_3710)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7))
				{
					BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_alphatiza7eza7();
					BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7();
					BGl_cnstzd2initzd2zzast_alphatiza7eza7();
					BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7();
					BGl_objectzd2initzd2zzast_alphatiza7eza7();
					BGl_genericzd2initzd2zzast_alphatiza7eza7();
					BGl_methodzd2initzd2zzast_alphatiza7eza7();
					return BGl_toplevelzd2initzd2zzast_alphatiza7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"ast_alphatize");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			{	/* Ast/alphatize.scm 14 */
				obj_t BgL_cportz00_3200;

				{	/* Ast/alphatize.scm 14 */
					obj_t BgL_stringz00_3208;

					BgL_stringz00_3208 = BGl_string2294z00zzast_alphatiza7eza7;
					{	/* Ast/alphatize.scm 14 */
						obj_t BgL_startz00_3209;

						BgL_startz00_3209 = BINT(((long) 0));
						{	/* Ast/alphatize.scm 14 */
							obj_t BgL_endz00_3210;

							BgL_endz00_3210 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3208)));
							{	/* Ast/alphatize.scm 14 */

								BgL_cportz00_3200 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3208, BgL_startz00_3209, BgL_endz00_3210);
				}}}}
				{
					long BgL_iz00_3201;

					BgL_iz00_3201 = ((long) 7);
				BgL_loopz00_3202:
					if ((BgL_iz00_3201 == ((long) -1)))
						{	/* Ast/alphatize.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/alphatize.scm 14 */
							{	/* Ast/alphatize.scm 14 */
								obj_t BgL_arg2296z00_3204;

								{	/* Ast/alphatize.scm 14 */

									{	/* Ast/alphatize.scm 14 */
										obj_t BgL_locationz00_3206;

										BgL_locationz00_3206 = BBOOL(((bool_t) 0));
										{	/* Ast/alphatize.scm 14 */

											BgL_arg2296z00_3204 =
												BGl_readz00zz__readerz00(BgL_cportz00_3200,
												BgL_locationz00_3206);
										}
									}
								}
								{	/* Ast/alphatize.scm 14 */
									int BgL_tmpz00_3743;

									BgL_tmpz00_3743 = (int) (BgL_iz00_3201);
									CNST_TABLE_SET(BgL_tmpz00_3743, BgL_arg2296z00_3204);
							}}
							{	/* Ast/alphatize.scm 14 */
								int BgL_auxz00_3207;

								BgL_auxz00_3207 = (int) ((BgL_iz00_3201 - ((long) 1)));
								{
									long BgL_iz00_3748;

									BgL_iz00_3748 = (long) (BgL_auxz00_3207);
									BgL_iz00_3201 = BgL_iz00_3748;
									goto BgL_loopz00_3202;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7 = BFALSE;
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_alphatiza7eza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1413;

				BgL_headz00_1413 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1414;
					obj_t BgL_tailz00_1415;

					BgL_prevz00_1414 = BgL_headz00_1413;
					BgL_tailz00_1415 = BgL_l1z00_1;
				BgL_loopz00_1416:
					if (PAIRP(BgL_tailz00_1415))
						{
							obj_t BgL_newzd2prevzd2_1418;

							BgL_newzd2prevzd2_1418 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1415), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1414, BgL_newzd2prevzd2_1418);
							{
								obj_t BgL_tailz00_3758;
								obj_t BgL_prevz00_3757;

								BgL_prevz00_3757 = BgL_newzd2prevzd2_1418;
								BgL_tailz00_3758 = CDR(BgL_tailz00_1415);
								BgL_tailz00_1415 = BgL_tailz00_3758;
								BgL_prevz00_1414 = BgL_prevz00_3757;
								goto BgL_loopz00_1416;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1413);
				}
			}
		}

	}



/* alphatize */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t
		BgL_whatza2za2_17, obj_t BgL_byza2za2_18, obj_t BgL_locz00_19,
		BgL_nodez00_bglt BgL_nodez00_20)
	{
		{	/* Ast/alphatize.scm 41 */
			{
				obj_t BgL_ll1551z00_1434;
				obj_t BgL_ll1552z00_1435;

				BgL_ll1551z00_1434 = BgL_whatza2za2_17;
				BgL_ll1552z00_1435 = BgL_byza2za2_18;
			BgL_zc3z04anonymousza31696ze3z87_1436:
				if (NULLP(BgL_ll1551z00_1434))
					{	/* Ast/alphatize.scm 43 */
						((bool_t) 1);
					}
				else
					{	/* Ast/alphatize.scm 43 */
						{	/* Ast/alphatize.scm 44 */
							obj_t BgL_whatz00_1438;
							obj_t BgL_byz00_1439;

							BgL_whatz00_1438 = CAR(((obj_t) BgL_ll1551z00_1434));
							BgL_byz00_1439 = CAR(((obj_t) BgL_ll1552z00_1435));
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_whatz00_1438)))->
									BgL_fastzd2alphazd2) = ((obj_t) BgL_byz00_1439), BUNSPEC);
						}
						{	/* Ast/alphatize.scm 43 */
							obj_t BgL_arg1704z00_1440;
							obj_t BgL_arg1707z00_1441;

							BgL_arg1704z00_1440 = CDR(((obj_t) BgL_ll1551z00_1434));
							BgL_arg1707z00_1441 = CDR(((obj_t) BgL_ll1552z00_1435));
							{
								obj_t BgL_ll1552z00_3774;
								obj_t BgL_ll1551z00_3773;

								BgL_ll1551z00_3773 = BgL_arg1704z00_1440;
								BgL_ll1552z00_3774 = BgL_arg1707z00_1441;
								BgL_ll1552z00_1435 = BgL_ll1552z00_3774;
								BgL_ll1551z00_1434 = BgL_ll1551z00_3773;
								goto BgL_zc3z04anonymousza31696ze3z87_1436;
							}
						}
					}
			}
			{	/* Ast/alphatize.scm 47 */
				BgL_nodez00_bglt BgL_resz00_1443;

				BgL_resz00_1443 =
					BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_nodez00_20,
					BgL_locz00_19);
				{
					obj_t BgL_l1554z00_1445;

					BgL_l1554z00_1445 = BgL_whatza2za2_17;
				BgL_zc3z04anonymousza31708ze3z87_1446:
					if (PAIRP(BgL_l1554z00_1445))
						{	/* Ast/alphatize.scm 49 */
							{	/* Ast/alphatize.scm 50 */
								obj_t BgL_whatz00_1448;

								BgL_whatz00_1448 = CAR(BgL_l1554z00_1445);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_whatz00_1448)))->
										BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							{
								obj_t BgL_l1554z00_3781;

								BgL_l1554z00_3781 = CDR(BgL_l1554z00_1445);
								BgL_l1554z00_1445 = BgL_l1554z00_3781;
								goto BgL_zc3z04anonymousza31708ze3z87_1446;
							}
						}
					else
						{	/* Ast/alphatize.scm 49 */
							((bool_t) 1);
						}
				}
				return BgL_resz00_1443;
			}
		}

	}



/* &alphatize */
	BgL_nodez00_bglt BGl_z62alphatiza7ezc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3021, obj_t BgL_whatza2za2_3022, obj_t BgL_byza2za2_3023,
		obj_t BgL_locz00_3024, obj_t BgL_nodez00_3025)
	{
		{	/* Ast/alphatize.scm 41 */
			return
				BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_whatza2za2_3022,
				BgL_byza2za2_3023, BgL_locz00_3024,
				((BgL_nodez00_bglt) BgL_nodez00_3025));
		}

	}



/* alphatize-sans-closure */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_alphatiza7ezd2sanszd2closureza7zzast_alphatiza7eza7(obj_t
		BgL_whatza2za2_21, obj_t BgL_byza2za2_22, obj_t BgL_locz00_23,
		BgL_nodez00_bglt BgL_nodez00_24, BgL_variablez00_bglt BgL_closurez00_25)
	{
		{	/* Ast/alphatize.scm 62 */
			BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7 =
				((obj_t) BgL_closurez00_25);
			{	/* Ast/alphatize.scm 64 */
				obj_t BgL_exitd1110z00_2468;

				BgL_exitd1110z00_2468 = BGL_EXITD_TOP_AS_OBJ();
				BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1110z00_2468,
					BGl_proc2244z00zzast_alphatiza7eza7);
				{	/* Ast/alphatize.scm 65 */
					BgL_nodez00_bglt BgL_tmp1112z00_2470;

					BgL_tmp1112z00_2470 =
						BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_whatza2za2_21,
						BgL_byza2za2_22, BgL_locz00_23, BgL_nodez00_24);
					BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1110z00_2468);
					BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7 = BFALSE;
					return BgL_tmp1112z00_2470;
				}
			}
		}

	}



/* &alphatize-sans-closure */
	BgL_nodez00_bglt
		BGl_z62alphatiza7ezd2sanszd2closurezc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3027, obj_t BgL_whatza2za2_3028, obj_t BgL_byza2za2_3029,
		obj_t BgL_locz00_3030, obj_t BgL_nodez00_3031, obj_t BgL_closurez00_3032)
	{
		{	/* Ast/alphatize.scm 62 */
			return
				BGl_alphatiza7ezd2sanszd2closureza7zzast_alphatiza7eza7
				(BgL_whatza2za2_3028, BgL_byza2za2_3029, BgL_locz00_3030,
				((BgL_nodez00_bglt) BgL_nodez00_3031),
				((BgL_variablez00_bglt) BgL_closurez00_3032));
		}

	}



/* &<@anonymous:1712> */
	obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3033)
	{
		{	/* Ast/alphatize.scm 64 */
			return (BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7 =
				BFALSE, BUNSPEC);
		}

	}



/* get-location */
	obj_t BGl_getzd2locationzd2zzast_alphatiza7eza7(BgL_nodez00_bglt
		BgL_nodez00_26, obj_t BgL_locz00_27)
	{
		{	/* Ast/alphatize.scm 80 */
			{	/* Ast/alphatize.scm 82 */
				bool_t BgL_test2357z00_3793;

				{	/* Ast/alphatize.scm 82 */
					obj_t BgL_arg1733z00_1466;

					BgL_arg1733z00_1466 =
						(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_26))->BgL_locz00);
					if (STRUCTP(BgL_arg1733z00_1466))
						{	/* Ast/alphatize.scm 82 */
							BgL_test2357z00_3793 =
								(STRUCT_KEY(BgL_arg1733z00_1466) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Ast/alphatize.scm 82 */
							BgL_test2357z00_3793 = ((bool_t) 0);
						}
				}
				if (BgL_test2357z00_3793)
					{	/* Ast/alphatize.scm 84 */
						bool_t BgL_test2359z00_3800;

						if (STRUCTP(BgL_locz00_27))
							{	/* Ast/alphatize.scm 84 */
								BgL_test2359z00_3800 =
									(STRUCT_KEY(BgL_locz00_27) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Ast/alphatize.scm 84 */
								BgL_test2359z00_3800 = ((bool_t) 0);
							}
						if (BgL_test2359z00_3800)
							{	/* Ast/alphatize.scm 86 */
								bool_t BgL_test2361z00_3806;

								{	/* Ast/alphatize.scm 86 */
									obj_t BgL_arg1729z00_1463;
									obj_t BgL_arg1731z00_1464;

									BgL_arg1729z00_1463 =
										STRUCT_REF(
										(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_26))->BgL_locz00),
										(int) (((long) 0)));
									BgL_arg1731z00_1464 =
										STRUCT_REF(BgL_locz00_27, (int) (((long) 0)));
									{	/* Ast/alphatize.scm 86 */
										bool_t BgL_res2130z00_2500;

										{	/* Ast/alphatize.scm 86 */
											long BgL_l1z00_2487;

											BgL_l1z00_2487 =
												STRING_LENGTH(((obj_t) BgL_arg1729z00_1463));
											if (
												(BgL_l1z00_2487 ==
													STRING_LENGTH(((obj_t) BgL_arg1731z00_1464))))
												{	/* Ast/alphatize.scm 86 */
													int BgL_arg1267z00_2490;

													{	/* Ast/alphatize.scm 86 */
														char *BgL_auxz00_3821;
														char *BgL_tmpz00_3818;

														BgL_auxz00_3821 =
															BSTRING_TO_STRING(((obj_t) BgL_arg1731z00_1464));
														BgL_tmpz00_3818 =
															BSTRING_TO_STRING(((obj_t) BgL_arg1729z00_1463));
														BgL_arg1267z00_2490 =
															memcmp(BgL_tmpz00_3818, BgL_auxz00_3821,
															BgL_l1z00_2487);
													}
													BgL_res2130z00_2500 =
														((long) (BgL_arg1267z00_2490) == ((long) 0));
												}
											else
												{	/* Ast/alphatize.scm 86 */
													BgL_res2130z00_2500 = ((bool_t) 0);
												}
										}
										BgL_test2361z00_3806 = BgL_res2130z00_2500;
									}
								}
								if (BgL_test2361z00_3806)
									{	/* Ast/alphatize.scm 86 */
										return
											(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_26))->
											BgL_locz00);
									}
								else
									{	/* Ast/alphatize.scm 86 */
										return BgL_locz00_27;
									}
							}
						else
							{	/* Ast/alphatize.scm 84 */
								return
									(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_26))->BgL_locz00);
							}
					}
				else
					{	/* Ast/alphatize.scm 82 */
						return BgL_locz00_27;
					}
			}
		}

	}



/* do-alphatize* */
	obj_t BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7(obj_t BgL_nodesz00_28,
		obj_t BgL_locz00_29)
	{
		{	/* Ast/alphatize.scm 94 */
			if (NULLP(BgL_nodesz00_28))
				{	/* Ast/alphatize.scm 95 */
					return BNIL;
				}
			else
				{	/* Ast/alphatize.scm 95 */
					obj_t BgL_head1558z00_1469;

					{	/* Ast/alphatize.scm 95 */
						obj_t BgL_res2132z00_2504;

						BgL_res2132z00_2504 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1558z00_1469 = BgL_res2132z00_2504;
					}
					{
						obj_t BgL_l1556z00_1471;
						obj_t BgL_tail1559z00_1472;

						BgL_l1556z00_1471 = BgL_nodesz00_28;
						BgL_tail1559z00_1472 = BgL_head1558z00_1469;
					BgL_zc3z04anonymousza31735ze3z87_1473:
						if (NULLP(BgL_l1556z00_1471))
							{	/* Ast/alphatize.scm 95 */
								return CDR(BgL_head1558z00_1469);
							}
						else
							{	/* Ast/alphatize.scm 95 */
								obj_t BgL_newtail1560z00_1475;

								{	/* Ast/alphatize.scm 95 */
									BgL_nodez00_bglt BgL_arg1739z00_1477;

									{	/* Ast/alphatize.scm 95 */
										obj_t BgL_nodez00_1478;

										BgL_nodez00_1478 = CAR(((obj_t) BgL_l1556z00_1471));
										BgL_arg1739z00_1477 =
											BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
											((BgL_nodez00_bglt) BgL_nodez00_1478), BgL_locz00_29);
									}
									{	/* Ast/alphatize.scm 95 */
										obj_t BgL_res2134z00_2508;

										BgL_res2134z00_2508 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1739z00_1477), BNIL);
										BgL_newtail1560z00_1475 = BgL_res2134z00_2508;
									}
								}
								SET_CDR(BgL_tail1559z00_1472, BgL_newtail1560z00_1475);
								{	/* Ast/alphatize.scm 95 */
									obj_t BgL_arg1738z00_1476;

									BgL_arg1738z00_1476 = CDR(((obj_t) BgL_l1556z00_1471));
									{
										obj_t BgL_tail1559z00_3845;
										obj_t BgL_l1556z00_3844;

										BgL_l1556z00_3844 = BgL_arg1738z00_1476;
										BgL_tail1559z00_3845 = BgL_newtail1560z00_1475;
										BgL_tail1559z00_1472 = BgL_tail1559z00_3845;
										BgL_l1556z00_1471 = BgL_l1556z00_3844;
										goto BgL_zc3z04anonymousza31735ze3z87_1473;
									}
								}
							}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			{	/* Ast/alphatize.scm 26 */
				obj_t BgL_arg1744z00_1484;
				obj_t BgL_arg1745z00_1485;

				{	/* Ast/alphatize.scm 26 */
					obj_t BgL_v1596z00_1510;

					BgL_v1596z00_1510 = create_vector(((long) 1));
					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_arg1768z00_1511;

						BgL_arg1768z00_1511 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc2246z00zzast_alphatiza7eza7,
							BGl_proc2245z00zzast_alphatiza7eza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_retblockz00zzast_nodez00);
						VECTOR_SET(BgL_v1596z00_1510, ((long) 0), BgL_arg1768z00_1511);
					}
					BgL_arg1744z00_1484 = BgL_v1596z00_1510;
				}
				{	/* Ast/alphatize.scm 26 */
					obj_t BgL_v1597z00_1521;

					BgL_v1597z00_1521 = create_vector(((long) 0));
					BgL_arg1745z00_1485 = BgL_v1597z00_1521;
				}
				return (BGl_retblockzf2alphazf2zzast_alphatiza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3)), BGl_retblockz00zzast_nodez00,
						((long) 45), BGl_proc2250z00zzast_alphatiza7eza7,
						BGl_proc2249z00zzast_alphatiza7eza7, BFALSE,
						BGl_proc2248z00zzast_alphatiza7eza7,
						BGl_proc2247z00zzast_alphatiza7eza7, BgL_arg1744z00_1484,
						BgL_arg1745z00_1485), BUNSPEC);
		}}

	}



/* &lambda1758 */
	BgL_retblockz00_bglt BGl_z62lambda1758z62zzast_alphatiza7eza7(obj_t
		BgL_envz00_3040, obj_t BgL_o1109z00_3041)
	{
		{	/* Ast/alphatize.scm 26 */
			{	/* Ast/alphatize.scm 26 */
				long BgL_arg1759z00_3214;

				{	/* Ast/alphatize.scm 26 */
					obj_t BgL_arg1760z00_3215;

					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_arg1761z00_3216;

						{	/* Ast/alphatize.scm 26 */
							long BgL_arg1816z00_3217;

							{	/* Ast/alphatize.scm 26 */
								long BgL_arg1817z00_3218;

								{	/* Ast/alphatize.scm 26 */
									long BgL_res2138z00_3219;

									BgL_res2138z00_3219 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_retblockz00_bglt) BgL_o1109z00_3041)));
									BgL_arg1817z00_3218 = BgL_res2138z00_3219;
								}
								BgL_arg1816z00_3217 = (BgL_arg1817z00_3218 - OBJECT_TYPE);
							}
							BgL_arg1761z00_3216 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3217);
						}
						BgL_arg1760z00_3215 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1761z00_3216);
					}
					{	/* Ast/alphatize.scm 26 */
						long BgL_res2140z00_3220;

						{	/* Ast/alphatize.scm 26 */
							obj_t BgL_tmpz00_3860;

							BgL_tmpz00_3860 = ((obj_t) BgL_arg1760z00_3215);
							BgL_res2140z00_3220 = BGL_CLASS_INDEX(BgL_tmpz00_3860);
						}
						BgL_arg1759z00_3214 = BgL_res2140z00_3220;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_retblockz00_bglt) BgL_o1109z00_3041)), BgL_arg1759z00_3214);
			}
			{	/* Ast/alphatize.scm 26 */
				BgL_objectz00_bglt BgL_tmpz00_3866;

				BgL_tmpz00_3866 =
					((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_o1109z00_3041));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3866, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_o1109z00_3041));
			return
				((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1109z00_3041));
		}

	}



/* &<@anonymous:1757> */
	obj_t BGl_z62zc3z04anonymousza31757ze3ze5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3042, obj_t BgL_new1108z00_3043)
	{
		{	/* Ast/alphatize.scm 26 */
			{
				BgL_retblockz00_bglt BgL_auxz00_3874;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_retblockz00_bglt) BgL_new1108z00_3043))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3878;

					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_classz00_3222;

						BgL_classz00_3222 = BGl_typez00zztype_typez00;
						{	/* Ast/alphatize.scm 26 */
							obj_t BgL__ortest_1106z00_3223;

							BgL__ortest_1106z00_3223 = BGL_CLASS_NIL(BgL_classz00_3222);
							if (CBOOL(BgL__ortest_1106z00_3223))
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3878 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3223);
								}
							else
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3878 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3222));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_retblockz00_bglt) BgL_new1108z00_3043))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3878), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3888;

					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_classz00_3224;

						BgL_classz00_3224 = BGl_nodez00zzast_nodez00;
						{	/* Ast/alphatize.scm 26 */
							obj_t BgL__ortest_1106z00_3225;

							BgL__ortest_1106z00_3225 = BGL_CLASS_NIL(BgL_classz00_3224);
							if (CBOOL(BgL__ortest_1106z00_3225))
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3888 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_3225);
								}
							else
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3888 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3224));
								}
						}
					}
					((((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt)
										((BgL_retblockz00_bglt) BgL_new1108z00_3043))))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3888), BUNSPEC);
				}
				{
					BgL_retblockz00_bglt BgL_auxz00_3905;
					BgL_retblockzf2alphazf2_bglt BgL_auxz00_3898;

					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_classz00_3226;

						BgL_classz00_3226 = BGl_retblockz00zzast_nodez00;
						{	/* Ast/alphatize.scm 26 */
							obj_t BgL__ortest_1106z00_3227;

							BgL__ortest_1106z00_3227 = BGL_CLASS_NIL(BgL_classz00_3226);
							if (CBOOL(BgL__ortest_1106z00_3227))
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3905 =
										((BgL_retblockz00_bglt) BgL__ortest_1106z00_3227);
								}
							else
								{	/* Ast/alphatize.scm 26 */
									BgL_auxz00_3905 =
										((BgL_retblockz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3226));
								}
						}
					}
					{
						obj_t BgL_auxz00_3899;

						{	/* Ast/alphatize.scm 26 */
							BgL_objectz00_bglt BgL_tmpz00_3900;

							BgL_tmpz00_3900 =
								((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt) BgL_new1108z00_3043));
							BgL_auxz00_3899 = BGL_OBJECT_WIDENING(BgL_tmpz00_3900);
						}
						BgL_auxz00_3898 = ((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_3899);
					}
					((((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_3898))->
							BgL_alphaz00) =
						((BgL_retblockz00_bglt) BgL_auxz00_3905), BUNSPEC);
				}
				BgL_auxz00_3874 = ((BgL_retblockz00_bglt) BgL_new1108z00_3043);
				return ((obj_t) BgL_auxz00_3874);
			}
		}

	}



/* &lambda1755 */
	BgL_retblockz00_bglt BGl_z62lambda1755z62zzast_alphatiza7eza7(obj_t
		BgL_envz00_3044, obj_t BgL_o1105z00_3045)
	{
		{	/* Ast/alphatize.scm 26 */
			{	/* Ast/alphatize.scm 26 */
				BgL_retblockzf2alphazf2_bglt BgL_wide1107z00_3229;

				BgL_wide1107z00_3229 =
					((BgL_retblockzf2alphazf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_retblockzf2alphazf2_bgl))));
				{	/* Ast/alphatize.scm 26 */
					obj_t BgL_auxz00_3920;
					BgL_objectz00_bglt BgL_tmpz00_3916;

					BgL_auxz00_3920 = ((obj_t) BgL_wide1107z00_3229);
					BgL_tmpz00_3916 =
						((BgL_objectz00_bglt)
						((BgL_retblockz00_bglt)
							((BgL_retblockz00_bglt) BgL_o1105z00_3045)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3916, BgL_auxz00_3920);
				}
				((BgL_objectz00_bglt)
					((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1105z00_3045)));
				{	/* Ast/alphatize.scm 26 */
					long BgL_arg1756z00_3230;

					{	/* Ast/alphatize.scm 26 */
						long BgL_res2137z00_3231;

						BgL_res2137z00_3231 =
							BGL_CLASS_INDEX(BGl_retblockzf2alphazf2zzast_alphatiza7eza7);
						BgL_arg1756z00_3230 = BgL_res2137z00_3231;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_retblockz00_bglt)
								((BgL_retblockz00_bglt) BgL_o1105z00_3045))),
						BgL_arg1756z00_3230);
				}
				return
					((BgL_retblockz00_bglt)
					((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1105z00_3045)));
			}
		}

	}



/* &lambda1746 */
	BgL_retblockz00_bglt BGl_z62lambda1746z62zzast_alphatiza7eza7(obj_t
		BgL_envz00_3046, obj_t BgL_loc1101z00_3047, obj_t BgL_type1102z00_3048,
		obj_t BgL_body1103z00_3049, obj_t BgL_alpha1104z00_3050)
	{
		{	/* Ast/alphatize.scm 26 */
			{	/* Ast/alphatize.scm 26 */
				BgL_retblockz00_bglt BgL_new1443z00_3235;

				{	/* Ast/alphatize.scm 26 */
					BgL_retblockz00_bglt BgL_tmp1441z00_3236;
					BgL_retblockzf2alphazf2_bglt BgL_wide1442z00_3237;

					{
						BgL_retblockz00_bglt BgL_auxz00_3934;

						{	/* Ast/alphatize.scm 26 */
							BgL_retblockz00_bglt BgL_new1440z00_3238;

							BgL_new1440z00_3238 =
								((BgL_retblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_retblockz00_bgl))));
							{	/* Ast/alphatize.scm 26 */
								long BgL_arg1754z00_3239;

								{	/* Ast/alphatize.scm 26 */
									long BgL_res2135z00_3240;

									BgL_res2135z00_3240 =
										BGL_CLASS_INDEX(BGl_retblockz00zzast_nodez00);
									BgL_arg1754z00_3239 = BgL_res2135z00_3240;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1440z00_3238),
									BgL_arg1754z00_3239);
							}
							{	/* Ast/alphatize.scm 26 */
								BgL_objectz00_bglt BgL_tmpz00_3939;

								BgL_tmpz00_3939 = ((BgL_objectz00_bglt) BgL_new1440z00_3238);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3939, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1440z00_3238);
							BgL_auxz00_3934 = BgL_new1440z00_3238;
						}
						BgL_tmp1441z00_3236 = ((BgL_retblockz00_bglt) BgL_auxz00_3934);
					}
					BgL_wide1442z00_3237 =
						((BgL_retblockzf2alphazf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_retblockzf2alphazf2_bgl))));
					{	/* Ast/alphatize.scm 26 */
						obj_t BgL_auxz00_3947;
						BgL_objectz00_bglt BgL_tmpz00_3945;

						BgL_auxz00_3947 = ((obj_t) BgL_wide1442z00_3237);
						BgL_tmpz00_3945 = ((BgL_objectz00_bglt) BgL_tmp1441z00_3236);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3945, BgL_auxz00_3947);
					}
					((BgL_objectz00_bglt) BgL_tmp1441z00_3236);
					{	/* Ast/alphatize.scm 26 */
						long BgL_arg1747z00_3241;

						{	/* Ast/alphatize.scm 26 */
							long BgL_res2136z00_3242;

							BgL_res2136z00_3242 =
								BGL_CLASS_INDEX(BGl_retblockzf2alphazf2zzast_alphatiza7eza7);
							BgL_arg1747z00_3241 = BgL_res2136z00_3242;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1441z00_3236), BgL_arg1747z00_3241);
					}
					BgL_new1443z00_3235 = ((BgL_retblockz00_bglt) BgL_tmp1441z00_3236);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1443z00_3235)))->BgL_locz00) =
					((obj_t) BgL_loc1101z00_3047), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1443z00_3235)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1102z00_3048)),
					BUNSPEC);
				((((BgL_retblockz00_bglt) COBJECT(((BgL_retblockz00_bglt)
									BgL_new1443z00_3235)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_body1103z00_3049)),
					BUNSPEC);
				{
					BgL_retblockzf2alphazf2_bglt BgL_auxz00_3963;

					{
						obj_t BgL_auxz00_3964;

						{	/* Ast/alphatize.scm 26 */
							BgL_objectz00_bglt BgL_tmpz00_3965;

							BgL_tmpz00_3965 = ((BgL_objectz00_bglt) BgL_new1443z00_3235);
							BgL_auxz00_3964 = BGL_OBJECT_WIDENING(BgL_tmpz00_3965);
						}
						BgL_auxz00_3963 = ((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_3964);
					}
					((((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_3963))->
							BgL_alphaz00) =
						((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt)
								BgL_alpha1104z00_3050)), BUNSPEC);
				}
				return BgL_new1443z00_3235;
			}
		}

	}



/* &lambda1777 */
	obj_t BGl_z62lambda1777z62zzast_alphatiza7eza7(obj_t BgL_envz00_3051,
		obj_t BgL_oz00_3052, obj_t BgL_vz00_3053)
	{
		{	/* Ast/alphatize.scm 26 */
			{
				BgL_retblockzf2alphazf2_bglt BgL_auxz00_3971;

				{
					obj_t BgL_auxz00_3972;

					{	/* Ast/alphatize.scm 26 */
						BgL_objectz00_bglt BgL_tmpz00_3973;

						BgL_tmpz00_3973 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_3052));
						BgL_auxz00_3972 = BGL_OBJECT_WIDENING(BgL_tmpz00_3973);
					}
					BgL_auxz00_3971 = ((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_3972);
				}
				return
					((((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_3971))->
						BgL_alphaz00) =
					((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_vz00_3053)),
					BUNSPEC);
			}
		}

	}



/* &lambda1776 */
	BgL_retblockz00_bglt BGl_z62lambda1776z62zzast_alphatiza7eza7(obj_t
		BgL_envz00_3054, obj_t BgL_oz00_3055)
	{
		{	/* Ast/alphatize.scm 26 */
			{
				BgL_retblockzf2alphazf2_bglt BgL_auxz00_3980;

				{
					obj_t BgL_auxz00_3981;

					{	/* Ast/alphatize.scm 26 */
						BgL_objectz00_bglt BgL_tmpz00_3982;

						BgL_tmpz00_3982 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_3055));
						BgL_auxz00_3981 = BGL_OBJECT_WIDENING(BgL_tmpz00_3982);
					}
					BgL_auxz00_3980 = ((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_3981);
				}
				return
					(((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_3980))->
					BgL_alphaz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_proc2251z00zzast_alphatiza7eza7, BGl_nodez00zzast_nodez00,
				BGl_string2252z00zzast_alphatiza7eza7);
		}

	}



/* &do-alphatize1598 */
	obj_t BGl_z62dozd2alphatiza7e1598z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3057, obj_t BgL_nodez00_3058, obj_t BgL_locz00_3059)
	{
		{	/* Ast/alphatize.scm 100 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
				BGl_string2253z00zzast_alphatiza7eza7,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_3058)));
		}

	}



/* do-alphatize */
	BgL_nodez00_bglt BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_nodez00_bglt
		BgL_nodez00_30, obj_t BgL_locz00_31)
	{
		{	/* Ast/alphatize.scm 100 */
			{	/* Ast/alphatize.scm 100 */
				obj_t BgL_method1599z00_1531;

				{	/* Ast/alphatize.scm 100 */
					obj_t BgL_res2151z00_2588;

					{	/* Ast/alphatize.scm 100 */
						long BgL_objzd2classzd2numz00_2553;

						{	/* Ast/alphatize.scm 100 */
							long BgL_res2141z00_2556;

							BgL_res2141z00_2556 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_30));
							BgL_objzd2classzd2numz00_2553 = BgL_res2141z00_2556;
						}
						{	/* Ast/alphatize.scm 100 */
							obj_t BgL_arg1813z00_2554;

							BgL_arg1813z00_2554 =
								PROCEDURE_REF(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
								(int) (((long) 1)));
							{	/* Ast/alphatize.scm 100 */
								int BgL_offsetz00_2558;

								BgL_offsetz00_2558 = (int) (BgL_objzd2classzd2numz00_2553);
								{	/* Ast/alphatize.scm 100 */
									long BgL_offsetz00_2559;

									BgL_offsetz00_2559 =
										((long) (BgL_offsetz00_2558) - OBJECT_TYPE);
									{	/* Ast/alphatize.scm 100 */
										long BgL_modz00_2560;

										BgL_modz00_2560 =
											(BgL_offsetz00_2559 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/alphatize.scm 100 */
											long BgL_restz00_2562;

											BgL_restz00_2562 =
												(BgL_offsetz00_2559 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/alphatize.scm 100 */

												{	/* Ast/alphatize.scm 100 */
													obj_t BgL_bucketz00_2564;

													BgL_bucketz00_2564 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2554), BgL_modz00_2560);
													BgL_res2151z00_2588 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2564), BgL_restz00_2562);
					}}}}}}}}
					BgL_method1599z00_1531 = BgL_res2151z00_2588;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1599z00_1531) (BgL_method1599z00_1531,
						((obj_t) BgL_nodez00_30), BgL_locz00_31, BEOA));
			}
		}

	}



/* &do-alphatize */
	BgL_nodez00_bglt BGl_z62dozd2alphatiza7ez17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3060, obj_t BgL_nodez00_3061, obj_t BgL_locz00_3062)
	{
		{	/* Ast/alphatize.scm 100 */
			return
				BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
				((BgL_nodez00_bglt) BgL_nodez00_3061), BgL_locz00_3062);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_literalz00zzast_nodez00, BGl_proc2254z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_patchz00zzast_nodez00, BGl_proc2256z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_varz00zzast_nodez00, BGl_proc2257z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_closurez00zzast_nodez00, BGl_proc2258z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_kwotez00zzast_nodez00, BGl_proc2259z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc2260z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_syncz00zzast_nodez00, BGl_proc2261z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_appz00zzast_nodez00, BGl_proc2262z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2263z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc2264z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_pragmaz00zzast_nodez00, BGl_proc2265z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc2266z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_getfieldz00zzast_nodez00, BGl_proc2267z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setfieldz00zzast_nodez00, BGl_proc2268z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_newz00zzast_nodez00, BGl_proc2269z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vlengthz00zzast_nodez00, BGl_proc2270z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vrefz00zzast_nodez00, BGl_proc2271z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vsetz12z12zzast_nodez00, BGl_proc2272z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vallocz00zzast_nodez00, BGl_proc2273z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_instanceofz00zzast_nodez00, BGl_proc2274z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_castz00zzast_nodez00, BGl_proc2275z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setqz00zzast_nodez00, BGl_proc2276z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc2277z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_failz00zzast_nodez00, BGl_proc2278z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_switchz00zzast_nodez00, BGl_proc2279z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2280z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2281z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2282z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2283z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2284z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2285z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2286z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_retblockz00zzast_nodez00, BGl_proc2287z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_returnz00zzast_nodez00, BGl_proc2288z00zzast_alphatiza7eza7,
				BGl_string2255z00zzast_alphatiza7eza7);
		}

	}



/* &do-alphatize-return1667 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2return1667zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3097, obj_t BgL_nodez00_3098, obj_t BgL_locz00_3099)
	{
		{	/* Ast/alphatize.scm 539 */
			{	/* Ast/alphatize.scm 541 */
				bool_t BgL_test2368z00_4061;

				{	/* Ast/alphatize.scm 541 */
					BgL_retblockz00_bglt BgL_arg2055z00_3248;

					BgL_arg2055z00_3248 =
						(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_3098)))->BgL_blockz00);
					BgL_test2368z00_4061 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_arg2055z00_3248),
						BGl_retblockzf2alphazf2zzast_alphatiza7eza7);
				}
				if (BgL_test2368z00_4061)
					{	/* Ast/alphatize.scm 542 */
						BgL_retblockz00_bglt BgL_i1431z00_3249;

						BgL_i1431z00_3249 =
							((BgL_retblockz00_bglt)
							(((BgL_returnz00_bglt) COBJECT(
										((BgL_returnz00_bglt) BgL_nodez00_3098)))->BgL_blockz00));
						{	/* Ast/alphatize.scm 543 */
							BgL_returnz00_bglt BgL_new1432z00_3250;

							{	/* Ast/alphatize.scm 543 */
								BgL_returnz00_bglt BgL_new1435z00_3251;

								BgL_new1435z00_3251 =
									((BgL_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_returnz00_bgl))));
								{	/* Ast/alphatize.scm 543 */
									long BgL_arg2049z00_3252;

									{	/* Ast/alphatize.scm 543 */
										long BgL_res2242z00_3253;

										BgL_res2242z00_3253 =
											BGL_CLASS_INDEX(BGl_returnz00zzast_nodez00);
										BgL_arg2049z00_3252 = BgL_res2242z00_3253;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1435z00_3251),
										BgL_arg2049z00_3252);
								}
								{	/* Ast/alphatize.scm 543 */
									BgL_objectz00_bglt BgL_tmpz00_4073;

									BgL_tmpz00_4073 = ((BgL_objectz00_bglt) BgL_new1435z00_3251);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4073, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1435z00_3251);
								BgL_new1432z00_3250 = BgL_new1435z00_3251;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1432z00_3250)))->BgL_locz00) =
								((obj_t) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_returnz00_bglt)
														BgL_nodez00_3098))))->BgL_locz00)), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1432z00_3250)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_returnz00_bglt)
														BgL_nodez00_3098))))->BgL_typez00)), BUNSPEC);
							{
								BgL_retblockz00_bglt BgL_auxz00_4087;

								{
									BgL_retblockzf2alphazf2_bglt BgL_auxz00_4088;

									{
										obj_t BgL_auxz00_4089;

										{	/* Ast/alphatize.scm 544 */
											BgL_objectz00_bglt BgL_tmpz00_4090;

											BgL_tmpz00_4090 =
												((BgL_objectz00_bglt) BgL_i1431z00_3249);
											BgL_auxz00_4089 = BGL_OBJECT_WIDENING(BgL_tmpz00_4090);
										}
										BgL_auxz00_4088 =
											((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_4089);
									}
									BgL_auxz00_4087 =
										(((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_4088))->
										BgL_alphaz00);
								}
								((((BgL_returnz00_bglt) COBJECT(BgL_new1432z00_3250))->
										BgL_blockz00) =
									((BgL_retblockz00_bglt) BgL_auxz00_4087), BUNSPEC);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_4096;

								{	/* Ast/alphatize.scm 545 */
									BgL_nodez00_bglt BgL_arg2047z00_3254;
									obj_t BgL_arg2048z00_3255;

									BgL_arg2047z00_3254 =
										(((BgL_returnz00_bglt) COBJECT(
												((BgL_returnz00_bglt) BgL_nodez00_3098)))->
										BgL_valuez00);
									BgL_arg2048z00_3255 =
										(((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_returnz00_bglt)
														BgL_nodez00_3098))))->BgL_locz00);
									BgL_auxz00_4096 =
										BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7
										(BgL_arg2047z00_3254, BgL_arg2048z00_3255);
								}
								((((BgL_returnz00_bglt) COBJECT(BgL_new1432z00_3250))->
										BgL_valuez00) =
									((BgL_nodez00_bglt) BgL_auxz00_4096), BUNSPEC);
							}
							return ((BgL_nodez00_bglt) BgL_new1432z00_3250);
						}
					}
				else
					{	/* Ast/alphatize.scm 546 */
						BgL_returnz00_bglt BgL_new1436z00_3256;

						{	/* Ast/alphatize.scm 546 */
							BgL_returnz00_bglt BgL_new1439z00_3257;

							BgL_new1439z00_3257 =
								((BgL_returnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_returnz00_bgl))));
							{	/* Ast/alphatize.scm 546 */
								long BgL_arg2053z00_3258;

								{	/* Ast/alphatize.scm 546 */
									long BgL_res2243z00_3259;

									BgL_res2243z00_3259 =
										BGL_CLASS_INDEX(BGl_returnz00zzast_nodez00);
									BgL_arg2053z00_3258 = BgL_res2243z00_3259;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1439z00_3257),
									BgL_arg2053z00_3258);
							}
							{	/* Ast/alphatize.scm 546 */
								BgL_objectz00_bglt BgL_tmpz00_4109;

								BgL_tmpz00_4109 = ((BgL_objectz00_bglt) BgL_new1439z00_3257);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4109, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1439z00_3257);
							BgL_new1436z00_3256 = BgL_new1439z00_3257;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1436z00_3256)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_returnz00_bglt)
													BgL_nodez00_3098))))->BgL_locz00)), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1436z00_3256)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_returnz00_bglt)
													BgL_nodez00_3098))))->BgL_typez00)), BUNSPEC);
						((((BgL_returnz00_bglt) COBJECT(BgL_new1436z00_3256))->
								BgL_blockz00) =
							((BgL_retblockz00_bglt) (((BgL_returnz00_bglt)
										COBJECT(((BgL_returnz00_bglt) BgL_nodez00_3098)))->
									BgL_blockz00)), BUNSPEC);
						{
							BgL_nodez00_bglt BgL_auxz00_4126;

							{	/* Ast/alphatize.scm 548 */
								BgL_nodez00_bglt BgL_arg2050z00_3260;
								obj_t BgL_arg2051z00_3261;

								BgL_arg2050z00_3260 =
									(((BgL_returnz00_bglt) COBJECT(
											((BgL_returnz00_bglt) BgL_nodez00_3098)))->BgL_valuez00);
								BgL_arg2051z00_3261 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_returnz00_bglt) BgL_nodez00_3098))))->BgL_locz00);
								BgL_auxz00_4126 =
									BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7
									(BgL_arg2050z00_3260, BgL_arg2051z00_3261);
							}
							((((BgL_returnz00_bglt) COBJECT(BgL_new1436z00_3256))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4126), BUNSPEC);
						}
						return ((BgL_nodez00_bglt) BgL_new1436z00_3256);
					}
			}
		}

	}



/* &do-alphatize-retbloc1665 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2retbloc1665zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3100, obj_t BgL_nodez00_3101, obj_t BgL_locz00_3102)
	{
		{	/* Ast/alphatize.scm 525 */
			{	/* Ast/alphatize.scm 527 */
				BgL_retblockz00_bglt BgL_resz00_3263;

				{	/* Ast/alphatize.scm 527 */
					BgL_retblockz00_bglt BgL_new1419z00_3264;

					{	/* Ast/alphatize.scm 527 */
						BgL_retblockz00_bglt BgL_new1423z00_3265;

						BgL_new1423z00_3265 =
							((BgL_retblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_retblockz00_bgl))));
						{	/* Ast/alphatize.scm 527 */
							long BgL_arg2044z00_3266;

							{	/* Ast/alphatize.scm 527 */
								long BgL_res2237z00_3267;

								BgL_res2237z00_3267 =
									BGL_CLASS_INDEX(BGl_retblockz00zzast_nodez00);
								BgL_arg2044z00_3266 = BgL_res2237z00_3267;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1423z00_3265),
								BgL_arg2044z00_3266);
						}
						{	/* Ast/alphatize.scm 527 */
							BgL_objectz00_bglt BgL_tmpz00_4139;

							BgL_tmpz00_4139 = ((BgL_objectz00_bglt) BgL_new1423z00_3265);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4139, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1423z00_3265);
						BgL_new1419z00_3264 = BgL_new1423z00_3265;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1419z00_3264)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
												BgL_nodez00_3101))))->BgL_locz00)), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1419z00_3264)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
												BgL_nodez00_3101))))->BgL_typez00)), BUNSPEC);
					((((BgL_retblockz00_bglt) COBJECT(BgL_new1419z00_3264))->
							BgL_bodyz00) =
						((BgL_nodez00_bglt) (((BgL_retblockz00_bglt)
									COBJECT(((BgL_retblockz00_bglt) ((BgL_nodez00_bglt) (
													(BgL_retblockz00_bglt) BgL_nodez00_3101)))))->
								BgL_bodyz00)), BUNSPEC);
					BgL_resz00_3263 = BgL_new1419z00_3264;
				}
				{	/* Ast/alphatize.scm 528 */
					BgL_retblockzf2alphazf2_bglt BgL_wide1426z00_3268;

					BgL_wide1426z00_3268 =
						((BgL_retblockzf2alphazf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_retblockzf2alphazf2_bgl))));
					{	/* Ast/alphatize.scm 528 */
						obj_t BgL_auxz00_4163;
						BgL_objectz00_bglt BgL_tmpz00_4159;

						BgL_auxz00_4163 = ((obj_t) BgL_wide1426z00_3268);
						BgL_tmpz00_4159 =
							((BgL_objectz00_bglt)
							((BgL_retblockz00_bglt)
								((BgL_retblockz00_bglt) BgL_nodez00_3101)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4159, BgL_auxz00_4163);
					}
					((BgL_objectz00_bglt)
						((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_3101)));
					{	/* Ast/alphatize.scm 528 */
						long BgL_arg2038z00_3269;

						{	/* Ast/alphatize.scm 528 */
							long BgL_res2238z00_3270;

							BgL_res2238z00_3270 =
								BGL_CLASS_INDEX(BGl_retblockzf2alphazf2zzast_alphatiza7eza7);
							BgL_arg2038z00_3269 = BgL_res2238z00_3270;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt)
									((BgL_retblockz00_bglt) BgL_nodez00_3101))),
							BgL_arg2038z00_3269);
					}
					((BgL_retblockz00_bglt)
						((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_3101)));
				}
				{
					BgL_retblockzf2alphazf2_bglt BgL_auxz00_4177;

					{
						obj_t BgL_auxz00_4178;

						{	/* Ast/alphatize.scm 529 */
							BgL_objectz00_bglt BgL_tmpz00_4179;

							BgL_tmpz00_4179 =
								((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt)
									((BgL_retblockz00_bglt) BgL_nodez00_3101)));
							BgL_auxz00_4178 = BGL_OBJECT_WIDENING(BgL_tmpz00_4179);
						}
						BgL_auxz00_4177 = ((BgL_retblockzf2alphazf2_bglt) BgL_auxz00_4178);
					}
					((((BgL_retblockzf2alphazf2_bglt) COBJECT(BgL_auxz00_4177))->
							BgL_alphaz00) =
						((BgL_retblockz00_bglt) BgL_resz00_3263), BUNSPEC);
				}
				((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_3101));
				{	/* Ast/alphatize.scm 530 */
					BgL_nodez00_bglt BgL_nbodyz00_3271;

					BgL_nbodyz00_3271 =
						BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
						(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nodez00_3101)))->BgL_bodyz00),
						BgL_locz00_3102);
					{	/* Ast/alphatize.scm 531 */
						long BgL_arg2039z00_3272;

						{	/* Ast/alphatize.scm 531 */
							obj_t BgL_arg2040z00_3273;

							{	/* Ast/alphatize.scm 531 */
								obj_t BgL_arg2041z00_3274;

								{	/* Ast/alphatize.scm 531 */
									long BgL_arg1816z00_3275;

									{	/* Ast/alphatize.scm 531 */
										long BgL_arg1817z00_3276;

										{	/* Ast/alphatize.scm 531 */
											long BgL_res2239z00_3277;

											BgL_res2239z00_3277 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_retblockz00_bglt) BgL_nodez00_3101)));
											BgL_arg1817z00_3276 = BgL_res2239z00_3277;
										}
										BgL_arg1816z00_3275 = (BgL_arg1817z00_3276 - OBJECT_TYPE);
									}
									BgL_arg2041z00_3274 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_3275);
								}
								BgL_arg2040z00_3273 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg2041z00_3274);
							}
							{	/* Ast/alphatize.scm 531 */
								long BgL_res2241z00_3278;

								{	/* Ast/alphatize.scm 531 */
									obj_t BgL_tmpz00_4197;

									BgL_tmpz00_4197 = ((obj_t) BgL_arg2040z00_3273);
									BgL_res2241z00_3278 = BGL_CLASS_INDEX(BgL_tmpz00_4197);
								}
								BgL_arg2039z00_3272 = BgL_res2241z00_3278;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt) BgL_nodez00_3101)),
							BgL_arg2039z00_3272);
					}
					{	/* Ast/alphatize.scm 531 */
						BgL_objectz00_bglt BgL_tmpz00_4203;

						BgL_tmpz00_4203 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_3101));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4203, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_3101));
					((BgL_retblockz00_bglt) BgL_nodez00_3101);
					((((BgL_retblockz00_bglt) COBJECT(BgL_resz00_3263))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_nbodyz00_3271), BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_resz00_3263);
				}
			}
		}

	}



/* &do-alphatize-jump-ex1663 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2jumpzd2ex1663z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3103, obj_t BgL_nodez00_3104, obj_t BgL_locz00_3105)
	{
		{	/* Ast/alphatize.scm 516 */
			{	/* Ast/alphatize.scm 517 */
				BgL_jumpzd2exzd2itz00_bglt BgL_new1414z00_3280;

				{	/* Ast/alphatize.scm 518 */
					BgL_jumpzd2exzd2itz00_bglt BgL_new1417z00_3281;

					BgL_new1417z00_3281 =
						((BgL_jumpzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jumpzd2exzd2itz00_bgl))));
					{	/* Ast/alphatize.scm 518 */
						long BgL_arg2037z00_3282;

						{	/* Ast/alphatize.scm 518 */
							long BgL_res2236z00_3283;

							BgL_res2236z00_3283 =
								BGL_CLASS_INDEX(BGl_jumpzd2exzd2itz00zzast_nodez00);
							BgL_arg2037z00_3282 = BgL_res2236z00_3283;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1417z00_3281), BgL_arg2037z00_3282);
					}
					{	/* Ast/alphatize.scm 518 */
						BgL_objectz00_bglt BgL_tmpz00_4216;

						BgL_tmpz00_4216 = ((BgL_objectz00_bglt) BgL_new1417z00_3281);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4216, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1417z00_3281);
					BgL_new1414z00_3280 = BgL_new1417z00_3281;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1414z00_3280)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3104)),
							BgL_locz00_3105)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1414z00_3280)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt)
											BgL_nodez00_3104))))->BgL_typez00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_4230;

					{	/* Ast/alphatize.scm 519 */
						BgL_nodez00_bglt BgL_arg2035z00_3284;

						BgL_arg2035z00_3284 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3104)))->
							BgL_exitz00);
						BgL_auxz00_4230 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg2035z00_3284,
							BgL_locz00_3105);
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(BgL_new1414z00_3280))->
							BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_4230), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4235;

					{	/* Ast/alphatize.scm 520 */
						BgL_nodez00_bglt BgL_arg2036z00_3285;

						BgL_arg2036z00_3285 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_3104)))->
							BgL_valuez00);
						BgL_auxz00_4235 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg2036z00_3285,
							BgL_locz00_3105);
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(BgL_new1414z00_3280))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_4235), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) BgL_new1414z00_3280);
			}
		}

	}



/* &do-alphatize-set-ex-1661 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setzd2exzd21661zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3106, obj_t BgL_nodez00_3107, obj_t BgL_locz00_3108)
	{
		{	/* Ast/alphatize.scm 491 */
			{	/* Ast/alphatize.scm 492 */
				BgL_variablez00_bglt BgL_oldzd2varzd2_3287;

				BgL_oldzd2varzd2_3287 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3107)))->
								BgL_varz00)))->BgL_variablez00);
				{	/* Ast/alphatize.scm 492 */
					BgL_valuez00_bglt BgL_oldzd2exitzd2_3288;

					BgL_oldzd2exitzd2_3288 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_oldzd2varzd2_3287))))->BgL_valuez00);
					{	/* Ast/alphatize.scm 493 */
						obj_t BgL_oldzd2hdlgzd2_3289;

						BgL_oldzd2hdlgzd2_3289 =
							(((BgL_sexitz00_bglt) COBJECT(
									((BgL_sexitz00_bglt) BgL_oldzd2exitzd2_3288)))->
							BgL_handlerz00);
						{	/* Ast/alphatize.scm 494 */
							obj_t BgL_alphazd2hdlgzd2_3290;

							BgL_alphazd2hdlgzd2_3290 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_oldzd2hdlgzd2_3289)))->
								BgL_fastzd2alphazd2);
							{	/* Ast/alphatize.scm 495 */
								BgL_localz00_bglt BgL_newzd2varzd2_3291;

								{	/* Ast/alphatize.scm 496 */
									obj_t BgL_arg2028z00_3292;
									BgL_typez00_bglt BgL_arg2029z00_3293;
									BgL_sexitz00_bglt BgL_arg2031z00_3294;

									BgL_arg2028z00_3292 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_oldzd2varzd2_3287))))->
										BgL_idz00);
									BgL_arg2029z00_3293 =
										(((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
														BgL_oldzd2varzd2_3287))))->BgL_typez00);
									{	/* Ast/alphatize.scm 498 */
										BgL_sexitz00_bglt BgL_new1402z00_3295;

										{	/* Ast/alphatize.scm 499 */
											BgL_sexitz00_bglt BgL_new1405z00_3296;

											BgL_new1405z00_3296 =
												((BgL_sexitz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_sexitz00_bgl))));
											{	/* Ast/alphatize.scm 499 */
												long BgL_arg2033z00_3297;

												{	/* Ast/alphatize.scm 499 */
													long BgL_res2231z00_3298;

													BgL_res2231z00_3298 =
														BGL_CLASS_INDEX(BGl_sexitz00zzast_varz00);
													BgL_arg2033z00_3297 = BgL_res2231z00_3298;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1405z00_3296),
													BgL_arg2033z00_3297);
											}
											{	/* Ast/alphatize.scm 499 */
												BgL_objectz00_bglt BgL_tmpz00_4261;

												BgL_tmpz00_4261 =
													((BgL_objectz00_bglt) BgL_new1405z00_3296);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4261, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1405z00_3296);
											BgL_new1402z00_3295 = BgL_new1405z00_3296;
										}
										((((BgL_sexitz00_bglt) COBJECT(BgL_new1402z00_3295))->
												BgL_handlerz00) =
											((obj_t) BgL_alphazd2hdlgzd2_3290), BUNSPEC);
										((((BgL_sexitz00_bglt) COBJECT(BgL_new1402z00_3295))->
												BgL_detachedzf3zf3) =
											((bool_t) (((BgL_sexitz00_bglt)
														COBJECT(((BgL_sexitz00_bglt)
																BgL_oldzd2exitzd2_3288)))->BgL_detachedzf3zf3)),
											BUNSPEC);
										BgL_arg2031z00_3294 = BgL_new1402z00_3295;
									}
									BgL_newzd2varzd2_3291 =
										BGl_makezd2localzd2sexitz00zzast_localz00
										(BgL_arg2028z00_3292, BgL_arg2029z00_3293,
										BgL_arg2031z00_3294);
								}
								{	/* Ast/alphatize.scm 496 */
									BgL_nodez00_bglt BgL_oldzd2bodyzd2_3299;

									BgL_oldzd2bodyzd2_3299 =
										(((BgL_setzd2exzd2itz00_bglt) COBJECT(
												((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3107)))->
										BgL_bodyz00);
									{	/* Ast/alphatize.scm 501 */

										{	/* Ast/alphatize.scm 502 */
											bool_t BgL_arg2016z00_3300;

											BgL_arg2016z00_3300 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_oldzd2varzd2_3287))))->
												BgL_userzf3zf3);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_newzd2varzd2_3291)))->BgL_userzf3zf3) =
												((bool_t) BgL_arg2016z00_3300), BUNSPEC);
										}
										{	/* Ast/alphatize.scm 503 */
											BgL_setzd2exzd2itz00_bglt BgL_new1406z00_3301;

											{	/* Ast/alphatize.scm 504 */
												BgL_setzd2exzd2itz00_bglt BgL_new1409z00_3302;

												BgL_new1409z00_3302 =
													((BgL_setzd2exzd2itz00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_setzd2exzd2itz00_bgl))));
												{	/* Ast/alphatize.scm 504 */
													long BgL_arg2026z00_3303;

													{	/* Ast/alphatize.scm 504 */
														long BgL_res2232z00_3304;

														BgL_res2232z00_3304 =
															BGL_CLASS_INDEX
															(BGl_setzd2exzd2itz00zzast_nodez00);
														BgL_arg2026z00_3303 = BgL_res2232z00_3304;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1409z00_3302),
														BgL_arg2026z00_3303);
												}
												{	/* Ast/alphatize.scm 504 */
													BgL_objectz00_bglt BgL_tmpz00_4281;

													BgL_tmpz00_4281 =
														((BgL_objectz00_bglt) BgL_new1409z00_3302);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4281, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1409z00_3302);
												BgL_new1406z00_3301 = BgL_new1409z00_3302;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1406z00_3301)))->
													BgL_locz00) =
												((obj_t)
													BGl_getzd2locationzd2zzast_alphatiza7eza7((
															(BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
																BgL_nodez00_3107)), BgL_locz00_3108)), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1406z00_3301)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) (
																		(BgL_setzd2exzd2itz00_bglt)
																		BgL_nodez00_3107))))->BgL_typez00)),
												BUNSPEC);
											{
												BgL_varz00_bglt BgL_auxz00_4295;

												{	/* Ast/alphatize.scm 505 */
													BgL_nodez00_bglt BgL_duplicated1412z00_3305;
													BgL_varz00_bglt BgL_new1410z00_3306;

													BgL_duplicated1412z00_3305 =
														((BgL_nodez00_bglt)
														(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																	((BgL_setzd2exzd2itz00_bglt)
																		BgL_nodez00_3107)))->BgL_varz00));
													{	/* Ast/alphatize.scm 506 */
														BgL_varz00_bglt BgL_new1413z00_3307;

														BgL_new1413z00_3307 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Ast/alphatize.scm 506 */
															long BgL_arg2017z00_3308;

															{	/* Ast/alphatize.scm 506 */
																long BgL_res2233z00_3309;

																{	/* Ast/alphatize.scm 506 */
																	obj_t BgL_classz00_3310;

																	BgL_classz00_3310 = BGl_varz00zzast_nodez00;
																	BgL_res2233z00_3309 =
																		BGL_CLASS_INDEX(BgL_classz00_3310);
																}
																BgL_arg2017z00_3308 = BgL_res2233z00_3309;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1413z00_3307),
																BgL_arg2017z00_3308);
														}
														BgL_new1410z00_3306 = BgL_new1413z00_3307;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1410z00_3306)))->
															BgL_locz00) =
														((obj_t)
															BGl_getzd2locationzd2zzast_alphatiza7eza7((
																	(BgL_nodez00_bglt) (
																		(BgL_setzd2exzd2itz00_bglt)
																		BgL_nodez00_3107)), BgL_locz00_3108)),
														BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1410z00_3306)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(BgL_duplicated1412z00_3305))->
																BgL_typez00)), BUNSPEC);
													((((BgL_varz00_bglt) COBJECT(BgL_new1410z00_3306))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_newzd2varzd2_3291)), BUNSPEC);
													BgL_auxz00_4295 = BgL_new1410z00_3306;
												}
												((((BgL_setzd2exzd2itz00_bglt)
															COBJECT(BgL_new1406z00_3301))->BgL_varz00) =
													((BgL_varz00_bglt) BgL_auxz00_4295), BUNSPEC);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_4314;

												{	/* Ast/alphatize.scm 508 */
													obj_t BgL_arg2018z00_3311;
													obj_t BgL_arg2020z00_3312;
													obj_t BgL_arg2021z00_3313;

													{	/* Ast/alphatize.scm 508 */
														obj_t BgL_list2022z00_3314;

														BgL_list2022z00_3314 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_oldzd2varzd2_3287), BNIL);
														BgL_arg2018z00_3311 = BgL_list2022z00_3314;
													}
													{	/* Ast/alphatize.scm 509 */
														obj_t BgL_list2023z00_3315;

														BgL_list2023z00_3315 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_newzd2varzd2_3291), BNIL);
														BgL_arg2020z00_3312 = BgL_list2023z00_3315;
													}
													BgL_arg2021z00_3313 =
														BGl_getzd2locationzd2zzast_alphatiza7eza7(
														((BgL_nodez00_bglt)
															((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_3107)),
														BgL_locz00_3108);
													BgL_auxz00_4314 =
														BGl_alphatiza7eza7zzast_alphatiza7eza7
														(BgL_arg2018z00_3311, BgL_arg2020z00_3312,
														BgL_arg2021z00_3313, BgL_oldzd2bodyzd2_3299);
												}
												((((BgL_setzd2exzd2itz00_bglt)
															COBJECT(BgL_new1406z00_3301))->BgL_bodyz00) =
													((BgL_nodez00_bglt) BgL_auxz00_4314), BUNSPEC);
											}
											return ((BgL_nodez00_bglt) BgL_new1406z00_3301);
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



/* &do-alphatize-let-var1659 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2letzd2var1659z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3109, obj_t BgL_nodez00_3110, obj_t BgL_locz00_3111)
	{
		{	/* Ast/alphatize.scm 463 */
			{	/* Ast/alphatize.scm 464 */
				obj_t BgL_oldzd2localszd2_3317;

				{	/* Ast/alphatize.scm 464 */
					obj_t BgL_l1579z00_3318;

					BgL_l1579z00_3318 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_3110)))->BgL_bindingsz00);
					if (NULLP(BgL_l1579z00_3318))
						{	/* Ast/alphatize.scm 464 */
							BgL_oldzd2localszd2_3317 = BNIL;
						}
					else
						{	/* Ast/alphatize.scm 464 */
							obj_t BgL_head1581z00_3319;

							{	/* Ast/alphatize.scm 464 */
								obj_t BgL_arg2013z00_3320;

								{	/* Ast/alphatize.scm 464 */
									obj_t BgL_pairz00_3321;

									BgL_pairz00_3321 = CAR(((obj_t) BgL_l1579z00_3318));
									BgL_arg2013z00_3320 = CAR(BgL_pairz00_3321);
								}
								{	/* Ast/alphatize.scm 464 */
									obj_t BgL_res2219z00_3322;

									BgL_res2219z00_3322 =
										MAKE_YOUNG_PAIR(BgL_arg2013z00_3320, BNIL);
									BgL_head1581z00_3319 = BgL_res2219z00_3322;
								}
							}
							{	/* Ast/alphatize.scm 464 */
								obj_t BgL_g1584z00_3323;

								BgL_g1584z00_3323 = CDR(((obj_t) BgL_l1579z00_3318));
								{
									obj_t BgL_l1579z00_3325;
									obj_t BgL_tail1582z00_3326;

									BgL_l1579z00_3325 = BgL_g1584z00_3323;
									BgL_tail1582z00_3326 = BgL_head1581z00_3319;
								BgL_zc3z04anonymousza32007ze3z87_3324:
									if (NULLP(BgL_l1579z00_3325))
										{	/* Ast/alphatize.scm 464 */
											BgL_oldzd2localszd2_3317 = BgL_head1581z00_3319;
										}
									else
										{	/* Ast/alphatize.scm 464 */
											obj_t BgL_newtail1583z00_3327;

											{	/* Ast/alphatize.scm 464 */
												obj_t BgL_arg2011z00_3328;

												{	/* Ast/alphatize.scm 464 */
													obj_t BgL_pairz00_3329;

													BgL_pairz00_3329 = CAR(((obj_t) BgL_l1579z00_3325));
													BgL_arg2011z00_3328 = CAR(BgL_pairz00_3329);
												}
												{	/* Ast/alphatize.scm 464 */
													obj_t BgL_res2221z00_3330;

													BgL_res2221z00_3330 =
														MAKE_YOUNG_PAIR(BgL_arg2011z00_3328, BNIL);
													BgL_newtail1583z00_3327 = BgL_res2221z00_3330;
												}
											}
											SET_CDR(BgL_tail1582z00_3326, BgL_newtail1583z00_3327);
											{	/* Ast/alphatize.scm 464 */
												obj_t BgL_arg2010z00_3331;

												BgL_arg2010z00_3331 = CDR(((obj_t) BgL_l1579z00_3325));
												{
													obj_t BgL_tail1582z00_4345;
													obj_t BgL_l1579z00_4344;

													BgL_l1579z00_4344 = BgL_arg2010z00_3331;
													BgL_tail1582z00_4345 = BgL_newtail1583z00_3327;
													BgL_tail1582z00_3326 = BgL_tail1582z00_4345;
													BgL_l1579z00_3325 = BgL_l1579z00_4344;
													goto BgL_zc3z04anonymousza32007ze3z87_3324;
												}
											}
										}
								}
							}
						}
				}
				{	/* Ast/alphatize.scm 464 */
					obj_t BgL_newzd2localszd2_3332;

					if (NULLP(BgL_oldzd2localszd2_3317))
						{	/* Ast/alphatize.scm 465 */
							BgL_newzd2localszd2_3332 = BNIL;
						}
					else
						{	/* Ast/alphatize.scm 465 */
							obj_t BgL_head1587z00_3333;

							{	/* Ast/alphatize.scm 465 */
								obj_t BgL_res2223z00_3334;

								BgL_res2223z00_3334 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1587z00_3333 = BgL_res2223z00_3334;
							}
							{
								obj_t BgL_l1585z00_3336;
								obj_t BgL_tail1588z00_3337;

								BgL_l1585z00_3336 = BgL_oldzd2localszd2_3317;
								BgL_tail1588z00_3337 = BgL_head1587z00_3333;
							BgL_zc3z04anonymousza31998ze3z87_3335:
								if (NULLP(BgL_l1585z00_3336))
									{	/* Ast/alphatize.scm 465 */
										BgL_newzd2localszd2_3332 = CDR(BgL_head1587z00_3333);
									}
								else
									{	/* Ast/alphatize.scm 465 */
										obj_t BgL_newtail1589z00_3338;

										{	/* Ast/alphatize.scm 465 */
											BgL_localz00_bglt BgL_arg2001z00_3339;

											{	/* Ast/alphatize.scm 465 */
												obj_t BgL_lz00_3340;

												BgL_lz00_3340 = CAR(((obj_t) BgL_l1585z00_3336));
												{	/* Ast/alphatize.scm 470 */
													BgL_localz00_bglt BgL_varz00_3341;

													{	/* Ast/alphatize.scm 470 */
														obj_t BgL_arg2004z00_3342;
														BgL_typez00_bglt BgL_arg2005z00_3343;

														BgL_arg2004z00_3342 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3340))))->
															BgL_idz00);
														BgL_arg2005z00_3343 =
															(((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt) (
																			(BgL_localz00_bglt) BgL_lz00_3340))))->
															BgL_typez00);
														BgL_varz00_3341 =
															BGl_makezd2localzd2svarz00zzast_localz00
															(BgL_arg2004z00_3342, BgL_arg2005z00_3343);
													}
													{	/* Ast/alphatize.scm 472 */
														bool_t BgL_arg2002z00_3344;

														BgL_arg2002z00_3344 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3340))))->
															BgL_userzf3zf3);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_varz00_3341)))->BgL_userzf3zf3) =
															((bool_t) BgL_arg2002z00_3344), BUNSPEC);
													}
													{	/* Ast/alphatize.scm 473 */
														obj_t BgL_arg2003z00_3345;

														BgL_arg2003z00_3345 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3340))))->
															BgL_accessz00);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_varz00_3341)))->BgL_accessz00) =
															((obj_t) BgL_arg2003z00_3345), BUNSPEC);
													}
													BgL_arg2001z00_3339 = BgL_varz00_3341;
												}
											}
											{	/* Ast/alphatize.scm 465 */
												obj_t BgL_res2225z00_3346;

												BgL_res2225z00_3346 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg2001z00_3339), BNIL);
												BgL_newtail1589z00_3338 = BgL_res2225z00_3346;
											}
										}
										SET_CDR(BgL_tail1588z00_3337, BgL_newtail1589z00_3338);
										{	/* Ast/alphatize.scm 465 */
											obj_t BgL_arg2000z00_3347;

											BgL_arg2000z00_3347 = CDR(((obj_t) BgL_l1585z00_3336));
											{
												obj_t BgL_tail1588z00_4377;
												obj_t BgL_l1585z00_4376;

												BgL_l1585z00_4376 = BgL_arg2000z00_3347;
												BgL_tail1588z00_4377 = BgL_newtail1589z00_3338;
												BgL_tail1588z00_3337 = BgL_tail1588z00_4377;
												BgL_l1585z00_3336 = BgL_l1585z00_4376;
												goto BgL_zc3z04anonymousza31998ze3z87_3335;
											}
										}
									}
							}
						}
					{	/* Ast/alphatize.scm 465 */
						obj_t BgL_newzd2bindingszd2_3348;

						{	/* Ast/alphatize.scm 476 */
							obj_t BgL_ll1590z00_3349;

							BgL_ll1590z00_3349 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_3110)))->
								BgL_bindingsz00);
							if (NULLP(BgL_ll1590z00_3349))
								{	/* Ast/alphatize.scm 476 */
									BgL_newzd2bindingszd2_3348 = BNIL;
								}
							else
								{	/* Ast/alphatize.scm 476 */
									obj_t BgL_head1592z00_3350;

									{	/* Ast/alphatize.scm 476 */
										obj_t BgL_res2227z00_3351;

										BgL_res2227z00_3351 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1592z00_3350 = BgL_res2227z00_3351;
									}
									{
										obj_t BgL_ll1590z00_3353;
										obj_t BgL_ll1591z00_3354;
										obj_t BgL_tail1593z00_3355;

										BgL_ll1590z00_3353 = BgL_ll1590z00_3349;
										BgL_ll1591z00_3354 = BgL_newzd2localszd2_3332;
										BgL_tail1593z00_3355 = BgL_head1592z00_3350;
									BgL_zc3z04anonymousza31989ze3z87_3352:
										if (NULLP(BgL_ll1590z00_3353))
											{	/* Ast/alphatize.scm 476 */
												BgL_newzd2bindingszd2_3348 = CDR(BgL_head1592z00_3350);
											}
										else
											{	/* Ast/alphatize.scm 476 */
												obj_t BgL_newtail1594z00_3356;

												{	/* Ast/alphatize.scm 476 */
													obj_t BgL_arg1993z00_3357;

													{	/* Ast/alphatize.scm 476 */
														obj_t BgL_bindingz00_3358;
														obj_t BgL_newzd2localzd2_3359;

														BgL_bindingz00_3358 =
															CAR(((obj_t) BgL_ll1590z00_3353));
														BgL_newzd2localzd2_3359 =
															CAR(((obj_t) BgL_ll1591z00_3354));
														{	/* Ast/alphatize.scm 477 */
															BgL_nodez00_bglt BgL_arg1995z00_3360;

															{	/* Ast/alphatize.scm 477 */
																obj_t BgL_arg1996z00_3361;

																BgL_arg1996z00_3361 =
																	CDR(((obj_t) BgL_bindingz00_3358));
																BgL_arg1995z00_3360 =
																	BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
																	((BgL_nodez00_bglt) BgL_arg1996z00_3361),
																	BgL_locz00_3111);
															}
															BgL_arg1993z00_3357 =
																MAKE_YOUNG_PAIR(BgL_newzd2localzd2_3359,
																((obj_t) BgL_arg1995z00_3360));
														}
													}
													{	/* Ast/alphatize.scm 476 */
														obj_t BgL_res2229z00_3362;

														BgL_res2229z00_3362 =
															MAKE_YOUNG_PAIR(BgL_arg1993z00_3357, BNIL);
														BgL_newtail1594z00_3356 = BgL_res2229z00_3362;
													}
												}
												SET_CDR(BgL_tail1593z00_3355, BgL_newtail1594z00_3356);
												{	/* Ast/alphatize.scm 476 */
													obj_t BgL_arg1991z00_3363;
													obj_t BgL_arg1992z00_3364;

													BgL_arg1991z00_3363 =
														CDR(((obj_t) BgL_ll1590z00_3353));
													BgL_arg1992z00_3364 =
														CDR(((obj_t) BgL_ll1591z00_3354));
													{
														obj_t BgL_tail1593z00_4404;
														obj_t BgL_ll1591z00_4403;
														obj_t BgL_ll1590z00_4402;

														BgL_ll1590z00_4402 = BgL_arg1991z00_3363;
														BgL_ll1591z00_4403 = BgL_arg1992z00_3364;
														BgL_tail1593z00_4404 = BgL_newtail1594z00_3356;
														BgL_tail1593z00_3355 = BgL_tail1593z00_4404;
														BgL_ll1591z00_3354 = BgL_ll1591z00_4403;
														BgL_ll1590z00_3353 = BgL_ll1590z00_4402;
														goto BgL_zc3z04anonymousza31989ze3z87_3352;
													}
												}
											}
									}
								}
						}
						{	/* Ast/alphatize.scm 476 */

							{	/* Ast/alphatize.scm 480 */
								BgL_letzd2varzd2_bglt BgL_new1395z00_3365;

								{	/* Ast/alphatize.scm 481 */
									BgL_letzd2varzd2_bglt BgL_new1401z00_3366;

									BgL_new1401z00_3366 =
										((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_letzd2varzd2_bgl))));
									{	/* Ast/alphatize.scm 481 */
										long BgL_arg1987z00_3367;

										{	/* Ast/alphatize.scm 481 */
											long BgL_res2230z00_3368;

											BgL_res2230z00_3368 =
												BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
											BgL_arg1987z00_3367 = BgL_res2230z00_3368;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1401z00_3366),
											BgL_arg1987z00_3367);
									}
									{	/* Ast/alphatize.scm 481 */
										BgL_objectz00_bglt BgL_tmpz00_4409;

										BgL_tmpz00_4409 =
											((BgL_objectz00_bglt) BgL_new1401z00_3366);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4409, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1401z00_3366);
									BgL_new1395z00_3365 = BgL_new1401z00_3366;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1395z00_3365)))->
										BgL_locz00) =
									((obj_t)
										BGl_getzd2locationzd2zzast_alphatiza7eza7((
												(BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
													BgL_nodez00_3110)), BgL_locz00_3111)), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1395z00_3365)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
															BgL_nodez00_3110))))->BgL_typez00)), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1395z00_3365)))->BgL_sidezd2effectzd2) =
									((obj_t) (((BgL_nodezf2effectzf2_bglt)
												COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_3110)))))->
											BgL_sidezd2effectzd2)), BUNSPEC);
								((((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt)
													BgL_new1395z00_3365)))->BgL_keyz00) =
									((obj_t) (((BgL_nodezf2effectzf2_bglt)
												COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt)
															((BgL_letzd2varzd2_bglt) BgL_nodez00_3110)))))->
											BgL_keyz00)), BUNSPEC);
								((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1395z00_3365))->
										BgL_bindingsz00) =
									((obj_t) BgL_newzd2bindingszd2_3348), BUNSPEC);
								{
									BgL_nodez00_bglt BgL_auxz00_4436;

									{	/* Ast/alphatize.scm 485 */
										obj_t BgL_arg1985z00_3369;
										BgL_nodez00_bglt BgL_arg1986z00_3370;

										BgL_arg1985z00_3369 =
											BGl_getzd2locationzd2zzast_alphatiza7eza7(
											((BgL_nodez00_bglt)
												((BgL_letzd2varzd2_bglt) BgL_nodez00_3110)),
											BgL_locz00_3111);
										BgL_arg1986z00_3370 =
											(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
														BgL_nodez00_3110)))->BgL_bodyz00);
										BgL_auxz00_4436 =
											BGl_alphatiza7eza7zzast_alphatiza7eza7
											(BgL_oldzd2localszd2_3317, BgL_newzd2localszd2_3332,
											BgL_arg1985z00_3369, BgL_arg1986z00_3370);
									}
									((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1395z00_3365))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_auxz00_4436), BUNSPEC);
								}
								((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1395z00_3365))->
										BgL_removablezf3zf3) =
									((bool_t) (((BgL_letzd2varzd2_bglt)
												COBJECT(((BgL_letzd2varzd2_bglt) ((BgL_nodez00_bglt) (
																(BgL_letzd2varzd2_bglt) BgL_nodez00_3110)))))->
											BgL_removablezf3zf3)), BUNSPEC);
								return ((BgL_nodez00_bglt) BgL_new1395z00_3365);
							}
						}
					}
				}
			}
		}

	}



/* &do-alphatize-let-fun1657 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2letzd2fun1657z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3112, obj_t BgL_nodez00_3113, obj_t BgL_locz00_3114)
	{
		{	/* Ast/alphatize.scm 423 */
			{	/* Ast/alphatize.scm 424 */
				obj_t BgL_oldzd2localszd2_3372;

				BgL_oldzd2localszd2_3372 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_3113)))->BgL_localsz00);
				{	/* Ast/alphatize.scm 424 */
					obj_t BgL_newzd2localszd2_3373;

					if (NULLP(BgL_oldzd2localszd2_3372))
						{	/* Ast/alphatize.scm 425 */
							BgL_newzd2localszd2_3373 = BNIL;
						}
					else
						{	/* Ast/alphatize.scm 425 */
							obj_t BgL_head1568z00_3374;

							{	/* Ast/alphatize.scm 425 */
								obj_t BgL_res2208z00_3375;

								BgL_res2208z00_3375 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1568z00_3374 = BgL_res2208z00_3375;
							}
							{
								obj_t BgL_l1566z00_3377;
								obj_t BgL_tail1569z00_3378;

								BgL_l1566z00_3377 = BgL_oldzd2localszd2_3372;
								BgL_tail1569z00_3378 = BgL_head1568z00_3374;
							BgL_zc3z04anonymousza31976ze3z87_3376:
								if (NULLP(BgL_l1566z00_3377))
									{	/* Ast/alphatize.scm 425 */
										BgL_newzd2localszd2_3373 = CDR(BgL_head1568z00_3374);
									}
								else
									{	/* Ast/alphatize.scm 425 */
										obj_t BgL_newtail1570z00_3379;

										{	/* Ast/alphatize.scm 425 */
											BgL_localz00_bglt BgL_arg1980z00_3380;

											{	/* Ast/alphatize.scm 425 */
												obj_t BgL_lz00_3381;

												BgL_lz00_3381 = CAR(((obj_t) BgL_l1566z00_3377));
												{	/* Ast/alphatize.scm 426 */
													BgL_localz00_bglt BgL_vz00_3382;

													{	/* Ast/alphatize.scm 426 */
														obj_t BgL_arg1982z00_3383;
														BgL_typez00_bglt BgL_arg1983z00_3384;
														BgL_valuez00_bglt BgL_arg1984z00_3385;

														BgL_arg1982z00_3383 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_lz00_3381))))->
															BgL_idz00);
														BgL_arg1983z00_3384 =
															(((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt) (
																			(BgL_localz00_bglt) BgL_lz00_3381))))->
															BgL_typez00);
														BgL_arg1984z00_3385 =
															(((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt) (
																			(BgL_localz00_bglt) BgL_lz00_3381))))->
															BgL_valuez00);
														BgL_vz00_3382 =
															BGl_makezd2localzd2sfunz00zzast_localz00
															(BgL_arg1982z00_3383, BgL_arg1983z00_3384,
															((BgL_sfunz00_bglt) BgL_arg1984z00_3385));
													}
													{	/* Ast/alphatize.scm 430 */
														long BgL_arg1981z00_3386;

														BgL_arg1981z00_3386 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_lz00_3381)))->
															BgL_occurrencez00);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_vz00_3382)))->BgL_occurrencez00) =
															((long) BgL_arg1981z00_3386), BUNSPEC);
													}
													BgL_arg1980z00_3380 = BgL_vz00_3382;
											}}
											{	/* Ast/alphatize.scm 425 */
												obj_t BgL_res2210z00_3387;

												BgL_res2210z00_3387 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1980z00_3380), BNIL);
												BgL_newtail1570z00_3379 = BgL_res2210z00_3387;
										}}
										SET_CDR(BgL_tail1569z00_3378, BgL_newtail1570z00_3379);
										{	/* Ast/alphatize.scm 425 */
											obj_t BgL_arg1979z00_3388;

											BgL_arg1979z00_3388 = CDR(((obj_t) BgL_l1566z00_3377));
											{
												obj_t BgL_tail1569z00_4481;
												obj_t BgL_l1566z00_4480;

												BgL_l1566z00_4480 = BgL_arg1979z00_3388;
												BgL_tail1569z00_4481 = BgL_newtail1570z00_3379;
												BgL_tail1569z00_3378 = BgL_tail1569z00_4481;
												BgL_l1566z00_3377 = BgL_l1566z00_4480;
												goto BgL_zc3z04anonymousza31976ze3z87_3376;
											}
										}
									}
							}
						}
					{	/* Ast/alphatize.scm 425 */

						{
							obj_t BgL_ll1576z00_3390;
							obj_t BgL_ll1577z00_3391;

							BgL_ll1576z00_3390 = BgL_oldzd2localszd2_3372;
							BgL_ll1577z00_3391 = BgL_newzd2localszd2_3373;
						BgL_zc3z04anonymousza31956ze3z87_3389:
							if (NULLP(BgL_ll1576z00_3390))
								{	/* Ast/alphatize.scm 433 */
									((bool_t) 1);
								}
							else
								{	/* Ast/alphatize.scm 433 */
									{	/* Ast/alphatize.scm 434 */
										obj_t BgL_oldz00_3392;
										obj_t BgL_newz00_3393;

										BgL_oldz00_3392 = CAR(((obj_t) BgL_ll1576z00_3390));
										BgL_newz00_3393 = CAR(((obj_t) BgL_ll1577z00_3391));
										{	/* Ast/alphatize.scm 434 */
											BgL_valuez00_bglt BgL_oldzd2sfunzd2_3394;

											BgL_oldzd2sfunzd2_3394 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_oldz00_3392))))->
												BgL_valuez00);
											{	/* Ast/alphatize.scm 434 */
												obj_t BgL_oldzd2argszd2_3395;

												BgL_oldzd2argszd2_3395 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_oldzd2sfunzd2_3394)))->
													BgL_argsz00);
												{	/* Ast/alphatize.scm 435 */
													obj_t BgL_newzd2argszd2_3396;

													if (NULLP(BgL_oldzd2argszd2_3395))
														{	/* Ast/alphatize.scm 436 */
															BgL_newzd2argszd2_3396 = BNIL;
														}
													else
														{	/* Ast/alphatize.scm 436 */
															obj_t BgL_head1573z00_3397;

															{	/* Ast/alphatize.scm 436 */
																obj_t BgL_res2213z00_3398;

																BgL_res2213z00_3398 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1573z00_3397 = BgL_res2213z00_3398;
															}
															{
																obj_t BgL_l1571z00_3400;
																obj_t BgL_tail1574z00_3401;

																BgL_l1571z00_3400 = BgL_oldzd2argszd2_3395;
																BgL_tail1574z00_3401 = BgL_head1573z00_3397;
															BgL_zc3z04anonymousza31964ze3z87_3399:
																if (NULLP(BgL_l1571z00_3400))
																	{	/* Ast/alphatize.scm 436 */
																		BgL_newzd2argszd2_3396 =
																			CDR(BgL_head1573z00_3397);
																	}
																else
																	{	/* Ast/alphatize.scm 436 */
																		obj_t BgL_newtail1575z00_3402;

																		{	/* Ast/alphatize.scm 436 */
																			BgL_localz00_bglt BgL_arg1967z00_3403;

																			{	/* Ast/alphatize.scm 436 */
																				obj_t BgL_lz00_3404;

																				BgL_lz00_3404 =
																					CAR(((obj_t) BgL_l1571z00_3400));
																				{	/* Ast/alphatize.scm 437 */
																					obj_t BgL_arg1968z00_3405;
																					BgL_typez00_bglt BgL_arg1969z00_3406;

																					BgL_arg1968z00_3405 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_lz00_3404))))->
																						BgL_idz00);
																					BgL_arg1969z00_3406 =
																						(((BgL_variablez00_bglt)
																							COBJECT(((BgL_variablez00_bglt) (
																										(BgL_localz00_bglt)
																										BgL_lz00_3404))))->
																						BgL_typez00);
																					BgL_arg1967z00_3403 =
																						BGl_makezd2localzd2svarz00zzast_localz00
																						(BgL_arg1968z00_3405,
																						BgL_arg1969z00_3406);
																				}
																			}
																			{	/* Ast/alphatize.scm 436 */
																				obj_t BgL_res2215z00_3407;

																				BgL_res2215z00_3407 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1967z00_3403), BNIL);
																				BgL_newtail1575z00_3402 =
																					BgL_res2215z00_3407;
																			}
																		}
																		SET_CDR(BgL_tail1574z00_3401,
																			BgL_newtail1575z00_3402);
																		{	/* Ast/alphatize.scm 436 */
																			obj_t BgL_arg1966z00_3408;

																			BgL_arg1966z00_3408 =
																				CDR(((obj_t) BgL_l1571z00_3400));
																			{
																				obj_t BgL_tail1574z00_4514;
																				obj_t BgL_l1571z00_4513;

																				BgL_l1571z00_4513 = BgL_arg1966z00_3408;
																				BgL_tail1574z00_4514 =
																					BgL_newtail1575z00_3402;
																				BgL_tail1574z00_3401 =
																					BgL_tail1574z00_4514;
																				BgL_l1571z00_3400 = BgL_l1571z00_4513;
																				goto
																					BgL_zc3z04anonymousza31964ze3z87_3399;
																			}
																		}
																	}
															}
														}
													{	/* Ast/alphatize.scm 436 */
														obj_t BgL_oldzd2bodyzd2_3409;

														BgL_oldzd2bodyzd2_3409 =
															(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt)
																		BgL_oldzd2sfunzd2_3394)))->BgL_bodyz00);
														{	/* Ast/alphatize.scm 440 */
															BgL_nodez00_bglt BgL_newzd2bodyzd2_3410;

															{	/* Ast/alphatize.scm 441 */
																obj_t BgL_arg1960z00_3411;
																obj_t BgL_arg1961z00_3412;
																obj_t BgL_arg1962z00_3413;

																BgL_arg1960z00_3411 =
																	BGl_appendzd221011zd2zzast_alphatiza7eza7
																	(BgL_oldzd2localszd2_3372,
																	BgL_oldzd2argszd2_3395);
																BgL_arg1961z00_3412 =
																	BGl_appendzd221011zd2zzast_alphatiza7eza7
																	(BgL_newzd2localszd2_3373,
																	BgL_newzd2argszd2_3396);
																BgL_arg1962z00_3413 =
																	BGl_getzd2locationzd2zzast_alphatiza7eza7((
																		(BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
																			BgL_nodez00_3113)), BgL_locz00_3114);
																BgL_newzd2bodyzd2_3410 =
																	BGl_alphatiza7eza7zzast_alphatiza7eza7
																	(BgL_arg1960z00_3411, BgL_arg1961z00_3412,
																	BgL_arg1962z00_3413,
																	((BgL_nodez00_bglt) BgL_oldzd2bodyzd2_3409));
															}
															{	/* Ast/alphatize.scm 441 */
																BgL_sfunz00_bglt BgL_newzd2sfunzd2_3414;

																{	/* Ast/alphatize.scm 445 */
																	BgL_sfunz00_bglt BgL_new1375z00_3415;

																	{	/* Ast/alphatize.scm 447 */
																		BgL_sfunz00_bglt BgL_new1388z00_3416;

																		BgL_new1388z00_3416 =
																			((BgL_sfunz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_sfunz00_bgl))));
																		{	/* Ast/alphatize.scm 447 */
																			long BgL_arg1959z00_3417;

																			{	/* Ast/alphatize.scm 447 */
																				long BgL_res2216z00_3418;

																				BgL_res2216z00_3418 =
																					BGL_CLASS_INDEX
																					(BGl_sfunz00zzast_varz00);
																				BgL_arg1959z00_3417 =
																					BgL_res2216z00_3418;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1388z00_3416),
																				BgL_arg1959z00_3417);
																		}
																		{	/* Ast/alphatize.scm 447 */
																			BgL_objectz00_bglt BgL_tmpz00_4528;

																			BgL_tmpz00_4528 =
																				((BgL_objectz00_bglt)
																				BgL_new1388z00_3416);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4528,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1388z00_3416);
																		BgL_new1375z00_3415 = BgL_new1388z00_3416;
																	}
																	((((BgL_funz00_bglt) COBJECT(
																					((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_arityz00) =
																		((long) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_arityz00)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_sidezd2effectzd2) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_sidezd2effectzd2)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_predicatezd2ofzd2) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_predicatezd2ofzd2)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_stackzd2allocatorzd2) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_stackzd2allocatorzd2)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_topzf3zf3) =
																		((bool_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_topzf3zf3)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_thezd2closurezd2) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_thezd2closurezd2)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_effectz00) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_effectz00)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_failsafez00) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_failsafez00)), BUNSPEC);
																	((((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_new1375z00_3415)))->
																			BgL_argszd2noescapezd2) =
																		((obj_t) (((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_oldzd2sfunzd2_3394)))->
																				BgL_argszd2noescapezd2)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_propertyz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_propertyz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_argsz00) =
																		((obj_t) BgL_newzd2argszd2_3396), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_argszd2namezd2) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_argszd2namezd2)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_bodyz00) =
																		((obj_t) ((obj_t) BgL_newzd2bodyzd2_3410)),
																		BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_classz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_classz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_dssslzd2keywordszd2) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_dssslzd2keywordszd2)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_locz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_optionalsz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_optionalsz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_keysz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_keysz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_thezd2closurezd2globalz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_thezd2closurezd2globalz00)),
																		BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_strengthz00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_strengthz00)), BUNSPEC);
																	((((BgL_sfunz00_bglt)
																				COBJECT(BgL_new1375z00_3415))->
																			BgL_stackablez00) =
																		((obj_t) (((BgL_sfunz00_bglt)
																					COBJECT(((BgL_sfunz00_bglt) (
																								(BgL_funz00_bglt)
																								BgL_oldzd2sfunzd2_3394))))->
																				BgL_stackablez00)), BUNSPEC);
																	BgL_newzd2sfunzd2_3414 = BgL_new1375z00_3415;
																}
																{	/* Ast/alphatize.scm 445 */

																	{	/* Ast/alphatize.scm 448 */
																		bool_t BgL_arg1958z00_3419;

																		BgL_arg1958z00_3419 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_oldz00_3392))))->
																			BgL_userzf3zf3);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt) (
																								(BgL_localz00_bglt)
																								BgL_newz00_3393))))->
																				BgL_userzf3zf3) =
																			((bool_t) BgL_arg1958z00_3419), BUNSPEC);
																	}
																	((((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_newz00_3393))))->
																			BgL_valuez00) =
																		((BgL_valuez00_bglt) ((BgL_valuez00_bglt)
																				BgL_newzd2sfunzd2_3414)), BUNSPEC);
									}}}}}}}}
									{	/* Ast/alphatize.scm 433 */
										obj_t BgL_arg1970z00_3420;
										obj_t BgL_arg1971z00_3421;

										BgL_arg1970z00_3420 = CDR(((obj_t) BgL_ll1576z00_3390));
										BgL_arg1971z00_3421 = CDR(((obj_t) BgL_ll1577z00_3391));
										{
											obj_t BgL_ll1577z00_4626;
											obj_t BgL_ll1576z00_4625;

											BgL_ll1576z00_4625 = BgL_arg1970z00_3420;
											BgL_ll1577z00_4626 = BgL_arg1971z00_3421;
											BgL_ll1577z00_3391 = BgL_ll1577z00_4626;
											BgL_ll1576z00_3390 = BgL_ll1576z00_4625;
											goto BgL_zc3z04anonymousza31956ze3z87_3389;
										}
									}
								}
						}
						{	/* Ast/alphatize.scm 452 */
							BgL_letzd2funzd2_bglt BgL_new1389z00_3422;

							{	/* Ast/alphatize.scm 453 */
								BgL_letzd2funzd2_bglt BgL_new1394z00_3423;

								BgL_new1394z00_3423 =
									((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_letzd2funzd2_bgl))));
								{	/* Ast/alphatize.scm 453 */
									long BgL_arg1974z00_3424;

									{	/* Ast/alphatize.scm 453 */
										long BgL_res2217z00_3425;

										BgL_res2217z00_3425 =
											BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
										BgL_arg1974z00_3424 = BgL_res2217z00_3425;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1394z00_3423),
										BgL_arg1974z00_3424);
								}
								{	/* Ast/alphatize.scm 453 */
									BgL_objectz00_bglt BgL_tmpz00_4631;

									BgL_tmpz00_4631 = ((BgL_objectz00_bglt) BgL_new1394z00_3423);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4631, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1394z00_3423);
								BgL_new1389z00_3422 = BgL_new1394z00_3423;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1389z00_3422)))->BgL_locz00) =
								((obj_t)
									BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_3113)),
										BgL_locz00_3114)), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1389z00_3422)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
														BgL_nodez00_3113))))->BgL_typez00)), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1389z00_3422)))->BgL_sidezd2effectzd2) =
								((obj_t) (((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
															(BgL_letzd2funzd2_bglt) BgL_nodez00_3113)))))->
										BgL_sidezd2effectzd2)), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1389z00_3422)))->BgL_keyz00) =
								((obj_t) (((BgL_nodezf2effectzf2_bglt)
											COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
															(BgL_letzd2funzd2_bglt) BgL_nodez00_3113)))))->
										BgL_keyz00)), BUNSPEC);
							((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1389z00_3422))->
									BgL_localsz00) = ((obj_t) BgL_newzd2localszd2_3373), BUNSPEC);
							{
								BgL_nodez00_bglt BgL_auxz00_4658;

								{	/* Ast/alphatize.scm 457 */
									obj_t BgL_arg1972z00_3426;
									BgL_nodez00_bglt BgL_arg1973z00_3427;

									BgL_arg1972z00_3426 =
										BGl_getzd2locationzd2zzast_alphatiza7eza7(
										((BgL_nodez00_bglt)
											((BgL_letzd2funzd2_bglt) BgL_nodez00_3113)),
										BgL_locz00_3114);
									BgL_arg1973z00_3427 =
										(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
													BgL_nodez00_3113)))->BgL_bodyz00);
									BgL_auxz00_4658 =
										BGl_alphatiza7eza7zzast_alphatiza7eza7
										(BgL_oldzd2localszd2_3372, BgL_newzd2localszd2_3373,
										BgL_arg1972z00_3426, BgL_arg1973z00_3427);
								}
								((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1389z00_3422))->
										BgL_bodyz00) =
									((BgL_nodez00_bglt) BgL_auxz00_4658), BUNSPEC);
							}
							return ((BgL_nodez00_bglt) BgL_new1389z00_3422);
						}
					}
				}
			}
		}

	}



/* &do-alphatize-box-set1655 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2boxzd2set1655z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3115, obj_t BgL_nodez00_3116, obj_t BgL_locz00_3117)
	{
		{	/* Ast/alphatize.scm 414 */
			{	/* Ast/alphatize.scm 415 */
				BgL_boxzd2setz12zc0_bglt BgL_new1370z00_3429;

				{	/* Ast/alphatize.scm 416 */
					BgL_boxzd2setz12zc0_bglt BgL_new1374z00_3430;

					BgL_new1374z00_3430 =
						((BgL_boxzd2setz12zc0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_boxzd2setz12zc0_bgl))));
					{	/* Ast/alphatize.scm 416 */
						long BgL_arg1955z00_3431;

						{	/* Ast/alphatize.scm 416 */
							long BgL_res2206z00_3432;

							BgL_res2206z00_3432 =
								BGL_CLASS_INDEX(BGl_boxzd2setz12zc0zzast_nodez00);
							BgL_arg1955z00_3431 = BgL_res2206z00_3432;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1374z00_3430), BgL_arg1955z00_3431);
					}
					{	/* Ast/alphatize.scm 416 */
						BgL_objectz00_bglt BgL_tmpz00_4671;

						BgL_tmpz00_4671 = ((BgL_objectz00_bglt) BgL_new1374z00_3430);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4671, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1374z00_3430);
					BgL_new1370z00_3429 = BgL_new1374z00_3430;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1370z00_3429)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3116)),
							BgL_locz00_3117)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1370z00_3429)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt)
											BgL_nodez00_3116))))->BgL_typez00)), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_4685;

					{	/* Ast/alphatize.scm 417 */
						BgL_varz00_bglt BgL_arg1953z00_3433;

						BgL_arg1953z00_3433 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3116)))->BgL_varz00);
						BgL_auxz00_4685 =
							((BgL_varz00_bglt)
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1953z00_3433), BgL_locz00_3117));
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(BgL_new1370z00_3429))->
							BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_4685), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4692;

					{	/* Ast/alphatize.scm 418 */
						BgL_nodez00_bglt BgL_arg1954z00_3434;

						BgL_arg1954z00_3434 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3116)))->
							BgL_valuez00);
						BgL_auxz00_4692 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1954z00_3434,
							BgL_locz00_3117);
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(BgL_new1370z00_3429))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_4692), BUNSPEC);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(BgL_new1370z00_3429))->
						BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_boxzd2setz12zc0_bglt)
								COBJECT(((BgL_boxzd2setz12zc0_bglt) ((BgL_nodez00_bglt) (
												(BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3116)))))->
							BgL_vtypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1370z00_3429);
			}
		}

	}



/* &do-alphatize-box-ref1653 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2boxzd2ref1653z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3118, obj_t BgL_nodez00_3119, obj_t BgL_locz00_3120)
	{
		{	/* Ast/alphatize.scm 406 */
			{	/* Ast/alphatize.scm 407 */
				BgL_boxzd2refzd2_bglt BgL_new1363z00_3436;

				{	/* Ast/alphatize.scm 408 */
					BgL_boxzd2refzd2_bglt BgL_new1369z00_3437;

					BgL_new1369z00_3437 =
						((BgL_boxzd2refzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_boxzd2refzd2_bgl))));
					{	/* Ast/alphatize.scm 408 */
						long BgL_arg1952z00_3438;

						{	/* Ast/alphatize.scm 408 */
							long BgL_res2205z00_3439;

							BgL_res2205z00_3439 =
								BGL_CLASS_INDEX(BGl_boxzd2refzd2zzast_nodez00);
							BgL_arg1952z00_3438 = BgL_res2205z00_3439;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1369z00_3437), BgL_arg1952z00_3438);
					}
					{	/* Ast/alphatize.scm 408 */
						BgL_objectz00_bglt BgL_tmpz00_4707;

						BgL_tmpz00_4707 = ((BgL_objectz00_bglt) BgL_new1369z00_3437);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4707, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1369z00_3437);
					BgL_new1363z00_3436 = BgL_new1369z00_3437;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1363z00_3436)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_boxzd2refzd2_bglt) BgL_nodez00_3119)), BgL_locz00_3120)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1363z00_3436)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt)
											BgL_nodez00_3119))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1363z00_3436)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_boxzd2refzd2_bglt) BgL_nodez00_3119)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1363z00_3436)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_boxzd2refzd2_bglt) BgL_nodez00_3119)))))->
							BgL_keyz00)), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_4733;

					{	/* Ast/alphatize.scm 409 */
						BgL_varz00_bglt BgL_arg1951z00_3440;

						BgL_arg1951z00_3440 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_3119)))->BgL_varz00);
						BgL_auxz00_4733 =
							((BgL_varz00_bglt)
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1951z00_3440), BgL_locz00_3120));
					}
					((((BgL_boxzd2refzd2_bglt) COBJECT(BgL_new1363z00_3436))->
							BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_4733), BUNSPEC);
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(BgL_new1363z00_3436))->
						BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_boxzd2refzd2_bglt)
								COBJECT(((BgL_boxzd2refzd2_bglt) ((BgL_nodez00_bglt) (
												(BgL_boxzd2refzd2_bglt) BgL_nodez00_3119)))))->
							BgL_vtypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1363z00_3436);
			}
		}

	}



/* &do-alphatize-make-bo1651 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2makezd2bo1651z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3121, obj_t BgL_nodez00_3122, obj_t BgL_locz00_3123)
	{
		{	/* Ast/alphatize.scm 398 */
			{	/* Ast/alphatize.scm 399 */
				BgL_makezd2boxzd2_bglt BgL_new1355z00_3442;

				{	/* Ast/alphatize.scm 400 */
					BgL_makezd2boxzd2_bglt BgL_new1362z00_3443;

					BgL_new1362z00_3443 =
						((BgL_makezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2boxzd2_bgl))));
					{	/* Ast/alphatize.scm 400 */
						long BgL_arg1949z00_3444;

						{	/* Ast/alphatize.scm 400 */
							long BgL_res2204z00_3445;

							BgL_res2204z00_3445 =
								BGL_CLASS_INDEX(BGl_makezd2boxzd2zzast_nodez00);
							BgL_arg1949z00_3444 = BgL_res2204z00_3445;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1362z00_3443), BgL_arg1949z00_3444);
					}
					{	/* Ast/alphatize.scm 400 */
						BgL_objectz00_bglt BgL_tmpz00_4750;

						BgL_tmpz00_4750 = ((BgL_objectz00_bglt) BgL_new1362z00_3443);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4750, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1362z00_3443);
					BgL_new1355z00_3442 = BgL_new1362z00_3443;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1355z00_3442)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)),
							BgL_locz00_3123)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1355z00_3442)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt)
											BgL_nodez00_3122))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1355z00_3442)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1355z00_3442)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)))))->
							BgL_keyz00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_4776;

					{	/* Ast/alphatize.scm 401 */
						BgL_nodez00_bglt BgL_arg1948z00_3446;

						BgL_arg1948z00_3446 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)))->BgL_valuez00);
						BgL_auxz00_4776 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1948z00_3446,
							BgL_locz00_3123);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1355z00_3442))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_4776), BUNSPEC);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1355z00_3442))->
						BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) ((BgL_nodez00_bglt) (
												(BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)))))->
							BgL_vtypez00)), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1355z00_3442))->
						BgL_stackablez00) =
					((obj_t) (((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) ((BgL_nodez00_bglt) (
												(BgL_makezd2boxzd2_bglt) BgL_nodez00_3122)))))->
							BgL_stackablez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1355z00_3442);
			}
		}

	}



/* &do-alphatize-switch1649 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2switch1649zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3124, obj_t BgL_nodez00_3125, obj_t BgL_locz00_3126)
	{
		{	/* Ast/alphatize.scm 386 */
			{	/* Ast/alphatize.scm 387 */
				BgL_switchz00_bglt BgL_new1348z00_3448;

				{	/* Ast/alphatize.scm 388 */
					BgL_switchz00_bglt BgL_new1354z00_3449;

					BgL_new1354z00_3449 =
						((BgL_switchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_switchz00_bgl))));
					{	/* Ast/alphatize.scm 388 */
						long BgL_arg1947z00_3450;

						{	/* Ast/alphatize.scm 388 */
							long BgL_res2199z00_3451;

							BgL_res2199z00_3451 = BGL_CLASS_INDEX(BGl_switchz00zzast_nodez00);
							BgL_arg1947z00_3450 = BgL_res2199z00_3451;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1354z00_3449), BgL_arg1947z00_3450);
					}
					{	/* Ast/alphatize.scm 388 */
						BgL_objectz00_bglt BgL_tmpz00_4796;

						BgL_tmpz00_4796 = ((BgL_objectz00_bglt) BgL_new1354z00_3449);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4796, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1354z00_3449);
					BgL_new1348z00_3448 = BgL_new1354z00_3449;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1348z00_3448)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_switchz00_bglt) BgL_nodez00_3125)), BgL_locz00_3126)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1348z00_3448)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_switchz00_bglt)
											BgL_nodez00_3125))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1348z00_3448)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_switchz00_bglt) BgL_nodez00_3125)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1348z00_3448)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_switchz00_bglt) BgL_nodez00_3125)))))->
							BgL_keyz00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_4822;

					{	/* Ast/alphatize.scm 389 */
						BgL_nodez00_bglt BgL_arg1938z00_3452;

						BgL_arg1938z00_3452 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_3125)))->BgL_testz00);
						BgL_auxz00_4822 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1938z00_3452,
							BgL_locz00_3126);
					}
					((((BgL_switchz00_bglt) COBJECT(BgL_new1348z00_3448))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4822), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4827;

					{	/* Ast/alphatize.scm 390 */
						obj_t BgL_l1561z00_3453;

						BgL_l1561z00_3453 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_3125)))->BgL_clausesz00);
						if (NULLP(BgL_l1561z00_3453))
							{	/* Ast/alphatize.scm 390 */
								BgL_auxz00_4827 = BNIL;
							}
						else
							{	/* Ast/alphatize.scm 390 */
								obj_t BgL_head1563z00_3454;

								{	/* Ast/alphatize.scm 390 */
									obj_t BgL_res2201z00_3455;

									BgL_res2201z00_3455 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1563z00_3454 = BgL_res2201z00_3455;
								}
								{
									obj_t BgL_l1561z00_3457;
									obj_t BgL_tail1564z00_3458;

									BgL_l1561z00_3457 = BgL_l1561z00_3453;
									BgL_tail1564z00_3458 = BgL_head1563z00_3454;
								BgL_zc3z04anonymousza31940ze3z87_3456:
									if (NULLP(BgL_l1561z00_3457))
										{	/* Ast/alphatize.scm 390 */
											BgL_auxz00_4827 = CDR(BgL_head1563z00_3454);
										}
									else
										{	/* Ast/alphatize.scm 390 */
											obj_t BgL_newtail1565z00_3459;

											{	/* Ast/alphatize.scm 390 */
												obj_t BgL_arg1943z00_3460;

												{	/* Ast/alphatize.scm 390 */
													obj_t BgL_clausez00_3461;

													BgL_clausez00_3461 = CAR(((obj_t) BgL_l1561z00_3457));
													{	/* Ast/alphatize.scm 391 */
														obj_t BgL_arg1944z00_3462;
														BgL_nodez00_bglt BgL_arg1945z00_3463;

														BgL_arg1944z00_3462 =
															CAR(((obj_t) BgL_clausez00_3461));
														{	/* Ast/alphatize.scm 392 */
															obj_t BgL_arg1946z00_3464;

															BgL_arg1946z00_3464 =
																CDR(((obj_t) BgL_clausez00_3461));
															BgL_arg1945z00_3463 =
																BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
																((BgL_nodez00_bglt) BgL_arg1946z00_3464),
																BgL_locz00_3126);
														}
														BgL_arg1943z00_3460 =
															MAKE_YOUNG_PAIR(BgL_arg1944z00_3462,
															((obj_t) BgL_arg1945z00_3463));
													}
												}
												{	/* Ast/alphatize.scm 390 */
													obj_t BgL_res2203z00_3465;

													BgL_res2203z00_3465 =
														MAKE_YOUNG_PAIR(BgL_arg1943z00_3460, BNIL);
													BgL_newtail1565z00_3459 = BgL_res2203z00_3465;
												}
											}
											SET_CDR(BgL_tail1564z00_3458, BgL_newtail1565z00_3459);
											{	/* Ast/alphatize.scm 390 */
												obj_t BgL_arg1942z00_3466;

												BgL_arg1942z00_3466 = CDR(((obj_t) BgL_l1561z00_3457));
												{
													obj_t BgL_tail1564z00_4851;
													obj_t BgL_l1561z00_4850;

													BgL_l1561z00_4850 = BgL_arg1942z00_3466;
													BgL_tail1564z00_4851 = BgL_newtail1565z00_3459;
													BgL_tail1564z00_3458 = BgL_tail1564z00_4851;
													BgL_l1561z00_3457 = BgL_l1561z00_4850;
													goto BgL_zc3z04anonymousza31940ze3z87_3456;
												}
											}
										}
								}
							}
					}
					((((BgL_switchz00_bglt) COBJECT(BgL_new1348z00_3448))->
							BgL_clausesz00) = ((obj_t) BgL_auxz00_4827), BUNSPEC);
				}
				((((BgL_switchz00_bglt) COBJECT(BgL_new1348z00_3448))->
						BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) (((BgL_switchz00_bglt)
								COBJECT(((BgL_switchz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_switchz00_bglt) BgL_nodez00_3125)))))->
							BgL_itemzd2typezd2)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1348z00_3448);
			}
		}

	}



/* &do-alphatize-fail1647 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2fail1647zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3127, obj_t BgL_nodez00_3128, obj_t BgL_locz00_3129)
	{
		{	/* Ast/alphatize.scm 376 */
			{	/* Ast/alphatize.scm 377 */
				BgL_failz00_bglt BgL_new1344z00_3468;

				{	/* Ast/alphatize.scm 378 */
					BgL_failz00_bglt BgL_new1347z00_3469;

					BgL_new1347z00_3469 =
						((BgL_failz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_failz00_bgl))));
					{	/* Ast/alphatize.scm 378 */
						long BgL_arg1937z00_3470;

						{	/* Ast/alphatize.scm 378 */
							long BgL_res2198z00_3471;

							BgL_res2198z00_3471 = BGL_CLASS_INDEX(BGl_failz00zzast_nodez00);
							BgL_arg1937z00_3470 = BgL_res2198z00_3471;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1347z00_3469), BgL_arg1937z00_3470);
					}
					{	/* Ast/alphatize.scm 378 */
						BgL_objectz00_bglt BgL_tmpz00_4863;

						BgL_tmpz00_4863 = ((BgL_objectz00_bglt) BgL_new1347z00_3469);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4863, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1347z00_3469);
					BgL_new1344z00_3468 = BgL_new1347z00_3469;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1344z00_3468)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_failz00_bglt) BgL_nodez00_3128)), BgL_locz00_3129)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1344z00_3468)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_failz00_bglt)
											BgL_nodez00_3128))))->BgL_typez00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_4877;

					{	/* Ast/alphatize.scm 379 */
						BgL_nodez00_bglt BgL_arg1934z00_3472;

						BgL_arg1934z00_3472 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_3128)))->BgL_procz00);
						BgL_auxz00_4877 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1934z00_3472,
							BgL_locz00_3129);
					}
					((((BgL_failz00_bglt) COBJECT(BgL_new1344z00_3468))->BgL_procz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4877), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4882;

					{	/* Ast/alphatize.scm 380 */
						BgL_nodez00_bglt BgL_arg1935z00_3473;

						BgL_arg1935z00_3473 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_3128)))->BgL_msgz00);
						BgL_auxz00_4882 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1935z00_3473,
							BgL_locz00_3129);
					}
					((((BgL_failz00_bglt) COBJECT(BgL_new1344z00_3468))->BgL_msgz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4882), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4887;

					{	/* Ast/alphatize.scm 381 */
						BgL_nodez00_bglt BgL_arg1936z00_3474;

						BgL_arg1936z00_3474 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_3128)))->BgL_objz00);
						BgL_auxz00_4887 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1936z00_3474,
							BgL_locz00_3129);
					}
					((((BgL_failz00_bglt) COBJECT(BgL_new1344z00_3468))->BgL_objz00) =
						((BgL_nodez00_bglt) BgL_auxz00_4887), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) BgL_new1344z00_3468);
			}
		}

	}



/* &do-alphatize-conditi1645 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2conditi1645zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3130, obj_t BgL_nodez00_3131, obj_t BgL_locz00_3132)
	{
		{	/* Ast/alphatize.scm 366 */
			{	/* Ast/alphatize.scm 367 */
				BgL_conditionalz00_bglt BgL_new1338z00_3476;

				{	/* Ast/alphatize.scm 368 */
					BgL_conditionalz00_bglt BgL_new1343z00_3477;

					BgL_new1343z00_3477 =
						((BgL_conditionalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conditionalz00_bgl))));
					{	/* Ast/alphatize.scm 368 */
						long BgL_arg1933z00_3478;

						{	/* Ast/alphatize.scm 368 */
							long BgL_res2197z00_3479;

							BgL_res2197z00_3479 =
								BGL_CLASS_INDEX(BGl_conditionalz00zzast_nodez00);
							BgL_arg1933z00_3478 = BgL_res2197z00_3479;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1343z00_3477), BgL_arg1933z00_3478);
					}
					{	/* Ast/alphatize.scm 368 */
						BgL_objectz00_bglt BgL_tmpz00_4897;

						BgL_tmpz00_4897 = ((BgL_objectz00_bglt) BgL_new1343z00_3477);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4897, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1343z00_3477);
					BgL_new1338z00_3476 = BgL_new1343z00_3477;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1338z00_3476)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_conditionalz00_bglt) BgL_nodez00_3131)),
							BgL_locz00_3132)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1338z00_3476)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt)
											BgL_nodez00_3131))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1338z00_3476)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_conditionalz00_bglt) BgL_nodez00_3131)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1338z00_3476)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_conditionalz00_bglt) BgL_nodez00_3131)))))->
							BgL_keyz00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_4923;

					{	/* Ast/alphatize.scm 369 */
						BgL_nodez00_bglt BgL_arg1930z00_3480;

						BgL_arg1930z00_3480 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_3131)))->BgL_testz00);
						BgL_auxz00_4923 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1930z00_3480,
							BgL_locz00_3132);
					}
					((((BgL_conditionalz00_bglt) COBJECT(BgL_new1338z00_3476))->
							BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_4923), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4928;

					{	/* Ast/alphatize.scm 370 */
						BgL_nodez00_bglt BgL_arg1931z00_3481;

						BgL_arg1931z00_3481 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_3131)))->BgL_truez00);
						BgL_auxz00_4928 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1931z00_3481,
							BgL_locz00_3132);
					}
					((((BgL_conditionalz00_bglt) COBJECT(BgL_new1338z00_3476))->
							BgL_truez00) = ((BgL_nodez00_bglt) BgL_auxz00_4928), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_4933;

					{	/* Ast/alphatize.scm 371 */
						BgL_nodez00_bglt BgL_arg1932z00_3482;

						BgL_arg1932z00_3482 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_3131)))->BgL_falsez00);
						BgL_auxz00_4933 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1932z00_3482,
							BgL_locz00_3132);
					}
					((((BgL_conditionalz00_bglt) COBJECT(BgL_new1338z00_3476))->
							BgL_falsez00) = ((BgL_nodez00_bglt) BgL_auxz00_4933), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) BgL_new1338z00_3476);
			}
		}

	}



/* &do-alphatize-setq1643 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setq1643zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3133, obj_t BgL_nodez00_3134, obj_t BgL_locz00_3135)
	{
		{	/* Ast/alphatize.scm 339 */
			{	/* Ast/alphatize.scm 340 */
				BgL_varz00_bglt BgL_vz00_3484;

				BgL_vz00_3484 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_3134)))->BgL_varz00);
				{	/* Ast/alphatize.scm 340 */
					BgL_variablez00_bglt BgL_varz00_3485;

					BgL_varz00_3485 =
						(((BgL_varz00_bglt) COBJECT(BgL_vz00_3484))->BgL_variablez00);
					{	/* Ast/alphatize.scm 341 */
						obj_t BgL_alphaz00_3486;

						BgL_alphaz00_3486 =
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3485))->
							BgL_fastzd2alphazd2);
						{	/* Ast/alphatize.scm 342 */

							if ((BgL_alphaz00_3486 == BUNSPEC))
								{	/* Ast/alphatize.scm 344 */
									{	/* Ast/alphatize.scm 345 */
										obj_t BgL_arg1919z00_3487;

										BgL_arg1919z00_3487 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_setqz00_bglt) BgL_nodez00_3134))))->
											BgL_locz00);
										BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_3485,
											BgL_arg1919z00_3487, CNST_TABLE_REF(((long) 5)));
									}
									{	/* Ast/alphatize.scm 346 */
										BgL_setqz00_bglt BgL_new1321z00_3488;

										{	/* Ast/alphatize.scm 347 */
											BgL_setqz00_bglt BgL_new1324z00_3489;

											BgL_new1324z00_3489 =
												((BgL_setqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_setqz00_bgl))));
											{	/* Ast/alphatize.scm 347 */
												long BgL_arg1923z00_3490;

												{	/* Ast/alphatize.scm 347 */
													long BgL_res2192z00_3491;

													BgL_res2192z00_3491 =
														BGL_CLASS_INDEX(BGl_setqz00zzast_nodez00);
													BgL_arg1923z00_3490 = BgL_res2192z00_3491;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1324z00_3489),
													BgL_arg1923z00_3490);
											}
											{	/* Ast/alphatize.scm 347 */
												BgL_objectz00_bglt BgL_tmpz00_4954;

												BgL_tmpz00_4954 =
													((BgL_objectz00_bglt) BgL_new1324z00_3489);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4954, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1324z00_3489);
											BgL_new1321z00_3488 = BgL_new1324z00_3489;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1321z00_3488)))->
												BgL_locz00) =
											((obj_t)
												BGl_getzd2locationzd2zzast_alphatiza7eza7((
														(BgL_nodez00_bglt) ((BgL_setqz00_bglt)
															BgL_nodez00_3134)), BgL_locz00_3135)), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1321z00_3488)))->BgL_typez00) =
											((BgL_typez00_bglt) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																	BgL_nodez00_3134))))->BgL_typez00)), BUNSPEC);
										{
											BgL_varz00_bglt BgL_auxz00_4968;

											{	/* Ast/alphatize.scm 348 */
												BgL_varz00_bglt BgL_new1325z00_3492;

												{	/* Ast/alphatize.scm 348 */
													BgL_varz00_bglt BgL_new1329z00_3493;

													BgL_new1329z00_3493 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Ast/alphatize.scm 348 */
														long BgL_arg1920z00_3494;

														{	/* Ast/alphatize.scm 348 */
															long BgL_res2193z00_3495;

															{	/* Ast/alphatize.scm 348 */
																obj_t BgL_classz00_3496;

																BgL_classz00_3496 = BGl_varz00zzast_nodez00;
																BgL_res2193z00_3495 =
																	BGL_CLASS_INDEX(BgL_classz00_3496);
															}
															BgL_arg1920z00_3494 = BgL_res2193z00_3495;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1329z00_3493),
															BgL_arg1920z00_3494);
													}
													BgL_new1325z00_3492 = BgL_new1329z00_3493;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1325z00_3492)))->
														BgL_locz00) =
													((obj_t)
														BGl_getzd2locationzd2zzast_alphatiza7eza7((
																(BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																	BgL_nodez00_3134)), BgL_locz00_3135)),
													BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1325z00_3492)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) BgL_vz00_3484)))->
															BgL_typez00)), BUNSPEC);
												((((BgL_varz00_bglt) COBJECT(BgL_new1325z00_3492))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) (((BgL_varz00_bglt)
																COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt)
																			BgL_vz00_3484))))->BgL_variablez00)),
													BUNSPEC);
												BgL_auxz00_4968 = BgL_new1325z00_3492;
											}
											((((BgL_setqz00_bglt) COBJECT(BgL_new1321z00_3488))->
													BgL_varz00) =
												((BgL_varz00_bglt) BgL_auxz00_4968), BUNSPEC);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_4987;

											{	/* Ast/alphatize.scm 349 */
												BgL_nodez00_bglt BgL_arg1921z00_3497;

												BgL_arg1921z00_3497 =
													(((BgL_setqz00_bglt) COBJECT(
															((BgL_setqz00_bglt) BgL_nodez00_3134)))->
													BgL_valuez00);
												BgL_auxz00_4987 =
													BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7
													(BgL_arg1921z00_3497, BgL_locz00_3135);
											}
											((((BgL_setqz00_bglt) COBJECT(BgL_new1321z00_3488))->
													BgL_valuez00) =
												((BgL_nodez00_bglt) BgL_auxz00_4987), BUNSPEC);
										}
										return ((BgL_nodez00_bglt) BgL_new1321z00_3488);
									}
								}
							else
								{	/* Ast/alphatize.scm 344 */
									if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3486,
											BGl_variablez00zzast_varz00))
										{	/* Ast/alphatize.scm 350 */
											{	/* Ast/alphatize.scm 351 */
												obj_t BgL_arg1925z00_3498;

												BgL_arg1925z00_3498 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_setqz00_bglt) BgL_nodez00_3134))))->
													BgL_locz00);
												BGl_usezd2variablez12zc0zzast_sexpz00((
														(BgL_variablez00_bglt) BgL_alphaz00_3486),
													BgL_arg1925z00_3498, CNST_TABLE_REF(((long) 5)));
											}
											{	/* Ast/alphatize.scm 352 */
												BgL_setqz00_bglt BgL_new1330z00_3499;

												{	/* Ast/alphatize.scm 353 */
													BgL_setqz00_bglt BgL_new1333z00_3500;

													BgL_new1333z00_3500 =
														((BgL_setqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_setqz00_bgl))));
													{	/* Ast/alphatize.scm 353 */
														long BgL_arg1928z00_3501;

														{	/* Ast/alphatize.scm 353 */
															long BgL_res2195z00_3502;

															BgL_res2195z00_3502 =
																BGL_CLASS_INDEX(BGl_setqz00zzast_nodez00);
															BgL_arg1928z00_3501 = BgL_res2195z00_3502;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1333z00_3500),
															BgL_arg1928z00_3501);
													}
													{	/* Ast/alphatize.scm 353 */
														BgL_objectz00_bglt BgL_tmpz00_5005;

														BgL_tmpz00_5005 =
															((BgL_objectz00_bglt) BgL_new1333z00_3500);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5005, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1333z00_3500);
													BgL_new1330z00_3499 = BgL_new1333z00_3500;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1330z00_3499)))->
														BgL_locz00) =
													((obj_t)
														BGl_getzd2locationzd2zzast_alphatiza7eza7((
																(BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																	BgL_nodez00_3134)), BgL_locz00_3135)),
													BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1330z00_3499)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																			BgL_nodez00_3134))))->BgL_typez00)),
													BUNSPEC);
												{
													BgL_varz00_bglt BgL_auxz00_5019;

													{	/* Ast/alphatize.scm 354 */
														BgL_varz00_bglt BgL_new1334z00_3503;

														{	/* Ast/alphatize.scm 355 */
															BgL_varz00_bglt BgL_new1337z00_3504;

															BgL_new1337z00_3504 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Ast/alphatize.scm 355 */
																long BgL_arg1926z00_3505;

																{	/* Ast/alphatize.scm 355 */
																	long BgL_res2196z00_3506;

																	{	/* Ast/alphatize.scm 355 */
																		obj_t BgL_classz00_3507;

																		BgL_classz00_3507 = BGl_varz00zzast_nodez00;
																		BgL_res2196z00_3506 =
																			BGL_CLASS_INDEX(BgL_classz00_3507);
																	}
																	BgL_arg1926z00_3505 = BgL_res2196z00_3506;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1337z00_3504),
																	BgL_arg1926z00_3505);
															}
															BgL_new1334z00_3503 = BgL_new1337z00_3504;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1334z00_3503)))->
																BgL_locz00) =
															((obj_t)
																BGl_getzd2locationzd2zzast_alphatiza7eza7((
																		(BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																			BgL_nodez00_3134)), BgL_locz00_3135)),
															BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1334z00_3503)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_vz00_3484)))->BgL_typez00)),
															BUNSPEC);
														((((BgL_varz00_bglt) COBJECT(BgL_new1334z00_3503))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_alphaz00_3486)), BUNSPEC);
														BgL_auxz00_5019 = BgL_new1334z00_3503;
													}
													((((BgL_setqz00_bglt) COBJECT(BgL_new1330z00_3499))->
															BgL_varz00) =
														((BgL_varz00_bglt) BgL_auxz00_5019), BUNSPEC);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_5036;

													{	/* Ast/alphatize.scm 357 */
														BgL_nodez00_bglt BgL_arg1927z00_3508;

														BgL_arg1927z00_3508 =
															(((BgL_setqz00_bglt) COBJECT(
																	((BgL_setqz00_bglt) BgL_nodez00_3134)))->
															BgL_valuez00);
														BgL_auxz00_5036 =
															BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7
															(BgL_arg1927z00_3508, BgL_locz00_3135);
													}
													((((BgL_setqz00_bglt) COBJECT(BgL_new1330z00_3499))->
															BgL_valuez00) =
														((BgL_nodez00_bglt) BgL_auxz00_5036), BUNSPEC);
												}
												return ((BgL_nodez00_bglt) BgL_new1330z00_3499);
											}
										}
									else
										{	/* Ast/alphatize.scm 361 */
											obj_t BgL_arg1929z00_3509;

											BgL_arg1929z00_3509 =
												BGl_shapez00zztools_shapez00(
												((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_3134)));
											return
												((BgL_nodez00_bglt)
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string2289z00zzast_alphatiza7eza7,
													BGl_string2290z00zzast_alphatiza7eza7,
													BgL_arg1929z00_3509));
										}
								}
						}
					}
				}
			}
		}

	}



/* &do-alphatize-cast1641 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2cast1641zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3136, obj_t BgL_nodez00_3137, obj_t BgL_locz00_3138)
	{
		{	/* Ast/alphatize.scm 331 */
			{	/* Ast/alphatize.scm 332 */
				BgL_castz00_bglt BgL_new1317z00_3511;

				{	/* Ast/alphatize.scm 333 */
					BgL_castz00_bglt BgL_new1320z00_3512;

					BgL_new1320z00_3512 =
						((BgL_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_castz00_bgl))));
					{	/* Ast/alphatize.scm 333 */
						long BgL_arg1917z00_3513;

						{	/* Ast/alphatize.scm 333 */
							long BgL_res2191z00_3514;

							BgL_res2191z00_3514 = BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
							BgL_arg1917z00_3513 = BgL_res2191z00_3514;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1320z00_3512), BgL_arg1917z00_3513);
					}
					{	/* Ast/alphatize.scm 333 */
						BgL_objectz00_bglt BgL_tmpz00_5051;

						BgL_tmpz00_5051 = ((BgL_objectz00_bglt) BgL_new1320z00_3512);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5051, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1320z00_3512);
					BgL_new1317z00_3511 = BgL_new1320z00_3512;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1317z00_3511)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_castz00_bglt) BgL_nodez00_3137)), BgL_locz00_3138)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1317z00_3511)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_castz00_bglt)
											BgL_nodez00_3137))))->BgL_typez00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_5065;

					{	/* Ast/alphatize.scm 334 */
						BgL_nodez00_bglt BgL_arg1916z00_3515;

						BgL_arg1916z00_3515 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_3137)))->BgL_argz00);
						BgL_auxz00_5065 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1916z00_3515,
							BgL_locz00_3138);
					}
					((((BgL_castz00_bglt) COBJECT(BgL_new1317z00_3511))->BgL_argz00) =
						((BgL_nodez00_bglt) BgL_auxz00_5065), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) BgL_new1317z00_3511);
			}
		}

	}



/* &do-alphatize-instanc1639 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2instanc1639zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3139, obj_t BgL_nodez00_3140, obj_t BgL_locz00_3141)
	{
		{	/* Ast/alphatize.scm 323 */
			{	/* Ast/alphatize.scm 324 */
				BgL_instanceofz00_bglt BgL_new1308z00_3517;

				{	/* Ast/alphatize.scm 326 */
					BgL_instanceofz00_bglt BgL_new1316z00_3518;

					BgL_new1316z00_3518 =
						((BgL_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_instanceofz00_bgl))));
					{	/* Ast/alphatize.scm 326 */
						long BgL_arg1915z00_3519;

						{	/* Ast/alphatize.scm 326 */
							long BgL_res2189z00_3520;

							BgL_res2189z00_3520 =
								BGL_CLASS_INDEX(BGl_instanceofz00zzast_nodez00);
							BgL_arg1915z00_3519 = BgL_res2189z00_3520;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1316z00_3518), BgL_arg1915z00_3519);
					}
					{	/* Ast/alphatize.scm 326 */
						BgL_objectz00_bglt BgL_tmpz00_5075;

						BgL_tmpz00_5075 = ((BgL_objectz00_bglt) BgL_new1316z00_3518);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5075, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1316z00_3518);
					BgL_new1308z00_3517 = BgL_new1316z00_3518;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1308z00_3517)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_instanceofz00_bglt) BgL_nodez00_3140)),
							BgL_locz00_3141)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1308z00_3517)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_instanceofz00_bglt)
											BgL_nodez00_3140))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1308z00_3517)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_instanceofz00_bglt) BgL_nodez00_3140)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1308z00_3517)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_instanceofz00_bglt) BgL_nodez00_3140)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5101;

					{	/* Ast/alphatize.scm 325 */
						BgL_nodez00_bglt BgL_arg1911z00_3521;

						{	/* Ast/alphatize.scm 325 */
							obj_t BgL_arg1913z00_3522;

							{	/* Ast/alphatize.scm 325 */
								obj_t BgL_pairz00_3523;

								BgL_pairz00_3523 =
									(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_instanceofz00_bglt) BgL_nodez00_3140))))->
									BgL_exprza2za2);
								BgL_arg1913z00_3522 = CAR(BgL_pairz00_3523);
							}
							BgL_arg1911z00_3521 =
								BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1913z00_3522), BgL_locz00_3141);
						}
						{	/* Ast/alphatize.scm 325 */
							obj_t BgL_list1912z00_3524;

							BgL_list1912z00_3524 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1911z00_3521), BNIL);
							BgL_auxz00_5101 = BgL_list1912z00_3524;
					}}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1308z00_3517)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5101), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1308z00_3517)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_instanceofz00_bglt) BgL_nodez00_3140)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1308z00_3517)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_instanceofz00_bglt) BgL_nodez00_3140)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_instanceofz00_bglt) COBJECT(BgL_new1308z00_3517))->
						BgL_classz00) =
					((BgL_typez00_bglt) (((BgL_instanceofz00_bglt)
								COBJECT(((BgL_instanceofz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_instanceofz00_bglt) BgL_nodez00_3140)))))->
							BgL_classz00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1308z00_3517);
			}
		}

	}



/* &do-alphatize-valloc1637 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2valloc1637zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3142, obj_t BgL_nodez00_3143, obj_t BgL_locz00_3144)
	{
		{	/* Ast/alphatize.scm 315 */
			{	/* Ast/alphatize.scm 316 */
				BgL_vallocz00_bglt BgL_new1297z00_3526;

				{	/* Ast/alphatize.scm 317 */
					BgL_vallocz00_bglt BgL_new1307z00_3527;

					BgL_new1307z00_3527 =
						((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vallocz00_bgl))));
					{	/* Ast/alphatize.scm 317 */
						long BgL_arg1910z00_3528;

						{	/* Ast/alphatize.scm 317 */
							long BgL_res2188z00_3529;

							BgL_res2188z00_3529 = BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
							BgL_arg1910z00_3528 = BgL_res2188z00_3529;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1307z00_3527), BgL_arg1910z00_3528);
					}
					{	/* Ast/alphatize.scm 317 */
						BgL_objectz00_bglt BgL_tmpz00_5134;

						BgL_tmpz00_5134 = ((BgL_objectz00_bglt) BgL_new1307z00_3527);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5134, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1307z00_3527);
					BgL_new1297z00_3526 = BgL_new1307z00_3527;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1297z00_3526)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_vallocz00_bglt) BgL_nodez00_3143)), BgL_locz00_3144)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1297z00_3526)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_vallocz00_bglt)
											BgL_nodez00_3143))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1297z00_3526)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1297z00_3526)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5160;

					{	/* Ast/alphatize.scm 318 */
						obj_t BgL_arg1909z00_3530;

						BgL_arg1909z00_3530 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_3143))))->BgL_exprza2za2);
						BgL_auxz00_5160 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1909z00_3530, BgL_locz00_3144);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1297z00_3526)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5160), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1297z00_3526)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1297z00_3526)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(BgL_new1297z00_3526))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_vallocz00_bglt)
								COBJECT(((BgL_vallocz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_ftypez00)), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(BgL_new1297z00_3526))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_vallocz00_bglt)
								COBJECT(((BgL_vallocz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vallocz00_bglt) BgL_nodez00_3143)))))->
							BgL_otypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1297z00_3526);
			}
		}

	}



/* &do-alphatize-vset!1635 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vsetz121635zd7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3145, obj_t BgL_nodez00_3146, obj_t BgL_locz00_3147)
	{
		{	/* Ast/alphatize.scm 307 */
			{	/* Ast/alphatize.scm 308 */
				BgL_vsetz12z12_bglt BgL_new1285z00_3532;

				{	/* Ast/alphatize.scm 309 */
					BgL_vsetz12z12_bglt BgL_new1296z00_3533;

					BgL_new1296z00_3533 =
						((BgL_vsetz12z12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vsetz12z12_bgl))));
					{	/* Ast/alphatize.scm 309 */
						long BgL_arg1908z00_3534;

						{	/* Ast/alphatize.scm 309 */
							long BgL_res2187z00_3535;

							BgL_res2187z00_3535 =
								BGL_CLASS_INDEX(BGl_vsetz12z12zzast_nodez00);
							BgL_arg1908z00_3534 = BgL_res2187z00_3535;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1296z00_3533), BgL_arg1908z00_3534);
					}
					{	/* Ast/alphatize.scm 309 */
						BgL_objectz00_bglt BgL_tmpz00_5194;

						BgL_tmpz00_5194 = ((BgL_objectz00_bglt) BgL_new1296z00_3533);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5194, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1296z00_3533);
					BgL_new1285z00_3532 = BgL_new1296z00_3533;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1285z00_3532)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_vsetz12z12_bglt) BgL_nodez00_3146)), BgL_locz00_3147)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1285z00_3532)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_vsetz12z12_bglt)
											BgL_nodez00_3146))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1285z00_3532)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1285z00_3532)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5220;

					{	/* Ast/alphatize.scm 310 */
						obj_t BgL_arg1907z00_3536;

						BgL_arg1907z00_3536 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vsetz12z12_bglt) BgL_nodez00_3146))))->
							BgL_exprza2za2);
						BgL_auxz00_5220 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1907z00_3536, BgL_locz00_3147);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1285z00_3532)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5220), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1285z00_3532)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1285z00_3532)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1285z00_3532))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_ftypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1285z00_3532))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_otypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1285z00_3532))->BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_vtypez00)), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1285z00_3532))->BgL_unsafez00) =
					((bool_t) (((BgL_vsetz12z12_bglt)
								COBJECT(((BgL_vsetz12z12_bglt) ((BgL_nodez00_bglt) (
												(BgL_vsetz12z12_bglt) BgL_nodez00_3146)))))->
							BgL_unsafez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1285z00_3532);
			}
		}

	}



/* &do-alphatize-vref1633 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vref1633zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3148, obj_t BgL_nodez00_3149, obj_t BgL_locz00_3150)
	{
		{	/* Ast/alphatize.scm 299 */
			{	/* Ast/alphatize.scm 300 */
				BgL_vrefz00_bglt BgL_new1273z00_3538;

				{	/* Ast/alphatize.scm 301 */
					BgL_vrefz00_bglt BgL_new1284z00_3539;

					BgL_new1284z00_3539 =
						((BgL_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vrefz00_bgl))));
					{	/* Ast/alphatize.scm 301 */
						long BgL_arg1906z00_3540;

						{	/* Ast/alphatize.scm 301 */
							long BgL_res2186z00_3541;

							BgL_res2186z00_3541 = BGL_CLASS_INDEX(BGl_vrefz00zzast_nodez00);
							BgL_arg1906z00_3540 = BgL_res2186z00_3541;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1284z00_3539), BgL_arg1906z00_3540);
					}
					{	/* Ast/alphatize.scm 301 */
						BgL_objectz00_bglt BgL_tmpz00_5264;

						BgL_tmpz00_5264 = ((BgL_objectz00_bglt) BgL_new1284z00_3539);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5264, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1284z00_3539);
					BgL_new1273z00_3538 = BgL_new1284z00_3539;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1273z00_3538)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_vrefz00_bglt) BgL_nodez00_3149)), BgL_locz00_3150)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1273z00_3538)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_vrefz00_bglt)
											BgL_nodez00_3149))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1273z00_3538)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1273z00_3538)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->BgL_keyz00)),
					BUNSPEC);
				{
					obj_t BgL_auxz00_5290;

					{	/* Ast/alphatize.scm 302 */
						obj_t BgL_arg1905z00_3542;

						BgL_arg1905z00_3542 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vrefz00_bglt) BgL_nodez00_3149))))->BgL_exprza2za2);
						BgL_auxz00_5290 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1905z00_3542, BgL_locz00_3150);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1273z00_3538)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5290), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1273z00_3538)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1273z00_3538)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1273z00_3538))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_ftypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1273z00_3538))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_otypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1273z00_3538))->BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_vtypez00)), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(BgL_new1273z00_3538))->BgL_unsafez00) =
					((bool_t) (((BgL_vrefz00_bglt)
								COBJECT(((BgL_vrefz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vrefz00_bglt) BgL_nodez00_3149)))))->
							BgL_unsafez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1273z00_3538);
			}
		}

	}



/* &do-alphatize-vlength1631 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2vlength1631zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3151, obj_t BgL_nodez00_3152, obj_t BgL_locz00_3153)
	{
		{	/* Ast/alphatize.scm 291 */
			{	/* Ast/alphatize.scm 292 */
				BgL_vlengthz00_bglt BgL_new1263z00_3544;

				{	/* Ast/alphatize.scm 293 */
					BgL_vlengthz00_bglt BgL_new1272z00_3545;

					BgL_new1272z00_3545 =
						((BgL_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vlengthz00_bgl))));
					{	/* Ast/alphatize.scm 293 */
						long BgL_arg1904z00_3546;

						{	/* Ast/alphatize.scm 293 */
							long BgL_res2185z00_3547;

							BgL_res2185z00_3547 =
								BGL_CLASS_INDEX(BGl_vlengthz00zzast_nodez00);
							BgL_arg1904z00_3546 = BgL_res2185z00_3547;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1272z00_3545), BgL_arg1904z00_3546);
					}
					{	/* Ast/alphatize.scm 293 */
						BgL_objectz00_bglt BgL_tmpz00_5334;

						BgL_tmpz00_5334 = ((BgL_objectz00_bglt) BgL_new1272z00_3545);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5334, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1272z00_3545);
					BgL_new1263z00_3544 = BgL_new1272z00_3545;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1263z00_3544)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_vlengthz00_bglt) BgL_nodez00_3152)), BgL_locz00_3153)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1263z00_3544)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_vlengthz00_bglt)
											BgL_nodez00_3152))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1263z00_3544)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1263z00_3544)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5360;

					{	/* Ast/alphatize.scm 294 */
						obj_t BgL_arg1903z00_3548;

						BgL_arg1903z00_3548 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vlengthz00_bglt) BgL_nodez00_3152))))->
							BgL_exprza2za2);
						BgL_auxz00_5360 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1903z00_3548, BgL_locz00_3153);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1263z00_3544)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5360), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1263z00_3544)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1263z00_3544)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_vlengthz00_bglt) COBJECT(BgL_new1263z00_3544))->BgL_vtypez00) =
					((BgL_typez00_bglt) (((BgL_vlengthz00_bglt)
								COBJECT(((BgL_vlengthz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_vtypez00)), BUNSPEC);
				((((BgL_vlengthz00_bglt) COBJECT(BgL_new1263z00_3544))->BgL_ftypez00) =
					((obj_t) (((BgL_vlengthz00_bglt)
								COBJECT(((BgL_vlengthz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_vlengthz00_bglt) BgL_nodez00_3152)))))->
							BgL_ftypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1263z00_3544);
			}
		}

	}



/* &do-alphatize-new1629 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2new1629zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3154, obj_t BgL_nodez00_3155, obj_t BgL_locz00_3156)
	{
		{	/* Ast/alphatize.scm 283 */
			{	/* Ast/alphatize.scm 284 */
				BgL_newz00_bglt BgL_new1254z00_3550;

				{	/* Ast/alphatize.scm 285 */
					BgL_newz00_bglt BgL_new1262z00_3551;

					BgL_new1262z00_3551 =
						((BgL_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_newz00_bgl))));
					{	/* Ast/alphatize.scm 285 */
						long BgL_arg1902z00_3552;

						{	/* Ast/alphatize.scm 285 */
							long BgL_res2184z00_3553;

							BgL_res2184z00_3553 = BGL_CLASS_INDEX(BGl_newz00zzast_nodez00);
							BgL_arg1902z00_3552 = BgL_res2184z00_3553;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1262z00_3551), BgL_arg1902z00_3552);
					}
					{	/* Ast/alphatize.scm 285 */
						BgL_objectz00_bglt BgL_tmpz00_5394;

						BgL_tmpz00_5394 = ((BgL_objectz00_bglt) BgL_new1262z00_3551);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5394, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1262z00_3551);
					BgL_new1254z00_3550 = BgL_new1262z00_3551;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1254z00_3550)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_newz00_bglt) BgL_nodez00_3155)), BgL_locz00_3156)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1254z00_3550)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_newz00_bglt)
											BgL_nodez00_3155))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1254z00_3550)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_newz00_bglt) BgL_nodez00_3155)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1254z00_3550)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_newz00_bglt) BgL_nodez00_3155)))))->BgL_keyz00)),
					BUNSPEC);
				{
					obj_t BgL_auxz00_5420;

					{	/* Ast/alphatize.scm 286 */
						obj_t BgL_arg1901z00_3554;

						BgL_arg1901z00_3554 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_newz00_bglt) BgL_nodez00_3155))))->BgL_exprza2za2);
						BgL_auxz00_5420 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1901z00_3554, BgL_locz00_3156);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1254z00_3550)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5420), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1254z00_3550)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_newz00_bglt) BgL_nodez00_3155)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1254z00_3550)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_newz00_bglt) BgL_nodez00_3155)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_newz00_bglt) COBJECT(BgL_new1254z00_3550))->
						BgL_argszd2typezd2) =
					((obj_t) (((BgL_newz00_bglt)
								COBJECT(((BgL_newz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_newz00_bglt) BgL_nodez00_3155)))))->
							BgL_argszd2typezd2)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1254z00_3550);
			}
		}

	}



/* &do-alphatize-setfiel1627 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2setfiel1627zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3157, obj_t BgL_nodez00_3158, obj_t BgL_locz00_3159)
	{
		{	/* Ast/alphatize.scm 275 */
			{	/* Ast/alphatize.scm 276 */
				BgL_setfieldz00_bglt BgL_new1243z00_3556;

				{	/* Ast/alphatize.scm 277 */
					BgL_setfieldz00_bglt BgL_new1253z00_3557;

					BgL_new1253z00_3557 =
						((BgL_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_setfieldz00_bgl))));
					{	/* Ast/alphatize.scm 277 */
						long BgL_arg1898z00_3558;

						{	/* Ast/alphatize.scm 277 */
							long BgL_res2183z00_3559;

							BgL_res2183z00_3559 =
								BGL_CLASS_INDEX(BGl_setfieldz00zzast_nodez00);
							BgL_arg1898z00_3558 = BgL_res2183z00_3559;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1253z00_3557), BgL_arg1898z00_3558);
					}
					{	/* Ast/alphatize.scm 277 */
						BgL_objectz00_bglt BgL_tmpz00_5449;

						BgL_tmpz00_5449 = ((BgL_objectz00_bglt) BgL_new1253z00_3557);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5449, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1253z00_3557);
					BgL_new1243z00_3556 = BgL_new1253z00_3557;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1243z00_3556)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_setfieldz00_bglt) BgL_nodez00_3158)), BgL_locz00_3159)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1243z00_3556)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_setfieldz00_bglt)
											BgL_nodez00_3158))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1243z00_3556)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1243z00_3556)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5475;

					{	/* Ast/alphatize.scm 278 */
						obj_t BgL_arg1897z00_3560;

						BgL_arg1897z00_3560 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_setfieldz00_bglt) BgL_nodez00_3158))))->
							BgL_exprza2za2);
						BgL_auxz00_5475 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1897z00_3560, BgL_locz00_3159);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1243z00_3556)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5475), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1243z00_3556)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1243z00_3556)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(BgL_new1243z00_3556))->BgL_fnamez00) =
					((obj_t) (((BgL_setfieldz00_bglt)
								COBJECT(((BgL_setfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_fnamez00)), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(BgL_new1243z00_3556))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_setfieldz00_bglt)
								COBJECT(((BgL_setfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_ftypez00)), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(BgL_new1243z00_3556))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_setfieldz00_bglt)
								COBJECT(((BgL_setfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_setfieldz00_bglt) BgL_nodez00_3158)))))->
							BgL_otypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1243z00_3556);
			}
		}

	}



/* &do-alphatize-getfiel1625 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2getfiel1625zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3160, obj_t BgL_nodez00_3161, obj_t BgL_locz00_3162)
	{
		{	/* Ast/alphatize.scm 267 */
			{	/* Ast/alphatize.scm 268 */
				BgL_getfieldz00_bglt BgL_new1232z00_3562;

				{	/* Ast/alphatize.scm 269 */
					BgL_getfieldz00_bglt BgL_new1242z00_3563;

					BgL_new1242z00_3563 =
						((BgL_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_getfieldz00_bgl))));
					{	/* Ast/alphatize.scm 269 */
						long BgL_arg1896z00_3564;

						{	/* Ast/alphatize.scm 269 */
							long BgL_res2182z00_3565;

							BgL_res2182z00_3565 =
								BGL_CLASS_INDEX(BGl_getfieldz00zzast_nodez00);
							BgL_arg1896z00_3564 = BgL_res2182z00_3565;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1242z00_3563), BgL_arg1896z00_3564);
					}
					{	/* Ast/alphatize.scm 269 */
						BgL_objectz00_bglt BgL_tmpz00_5514;

						BgL_tmpz00_5514 = ((BgL_objectz00_bglt) BgL_new1242z00_3563);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5514, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1242z00_3563);
					BgL_new1232z00_3562 = BgL_new1242z00_3563;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1232z00_3562)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_getfieldz00_bglt) BgL_nodez00_3161)), BgL_locz00_3162)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1232z00_3562)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_getfieldz00_bglt)
											BgL_nodez00_3161))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1232z00_3562)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1232z00_3562)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5540;

					{	/* Ast/alphatize.scm 270 */
						obj_t BgL_arg1895z00_3566;

						BgL_arg1895z00_3566 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_getfieldz00_bglt) BgL_nodez00_3161))))->
							BgL_exprza2za2);
						BgL_auxz00_5540 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1895z00_3566, BgL_locz00_3162);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1232z00_3562)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5540), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1232z00_3562)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1232z00_3562)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(BgL_new1232z00_3562))->BgL_fnamez00) =
					((obj_t) (((BgL_getfieldz00_bglt)
								COBJECT(((BgL_getfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_fnamez00)), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(BgL_new1232z00_3562))->BgL_ftypez00) =
					((BgL_typez00_bglt) (((BgL_getfieldz00_bglt)
								COBJECT(((BgL_getfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_ftypez00)), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(BgL_new1232z00_3562))->BgL_otypez00) =
					((BgL_typez00_bglt) (((BgL_getfieldz00_bglt)
								COBJECT(((BgL_getfieldz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_getfieldz00_bglt) BgL_nodez00_3161)))))->
							BgL_otypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1232z00_3562);
			}
		}

	}



/* &do-alphatize-cast-nu1623 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2castzd2nu1623z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3163, obj_t BgL_nodez00_3164, obj_t BgL_locz00_3165)
	{
		{	/* Ast/alphatize.scm 259 */
			{	/* Ast/alphatize.scm 260 */
				BgL_castzd2nullzd2_bglt BgL_new1224z00_3568;

				{	/* Ast/alphatize.scm 261 */
					BgL_castzd2nullzd2_bglt BgL_new1231z00_3569;

					BgL_new1231z00_3569 =
						((BgL_castzd2nullzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_castzd2nullzd2_bgl))));
					{	/* Ast/alphatize.scm 261 */
						long BgL_arg1893z00_3570;

						{	/* Ast/alphatize.scm 261 */
							long BgL_res2181z00_3571;

							BgL_res2181z00_3571 =
								BGL_CLASS_INDEX(BGl_castzd2nullzd2zzast_nodez00);
							BgL_arg1893z00_3570 = BgL_res2181z00_3571;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1231z00_3569), BgL_arg1893z00_3570);
					}
					{	/* Ast/alphatize.scm 261 */
						BgL_objectz00_bglt BgL_tmpz00_5579;

						BgL_tmpz00_5579 = ((BgL_objectz00_bglt) BgL_new1231z00_3569);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5579, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1231z00_3569);
					BgL_new1224z00_3568 = BgL_new1231z00_3569;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1224z00_3568)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_castzd2nullzd2_bglt) BgL_nodez00_3164)),
							BgL_locz00_3165)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1224z00_3568)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_castzd2nullzd2_bglt)
											BgL_nodez00_3164))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1224z00_3568)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_castzd2nullzd2_bglt) BgL_nodez00_3164)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1224z00_3568)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_castzd2nullzd2_bglt) BgL_nodez00_3164)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5605;

					{	/* Ast/alphatize.scm 262 */
						obj_t BgL_arg1892z00_3572;

						BgL_arg1892z00_3572 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_castzd2nullzd2_bglt) BgL_nodez00_3164))))->
							BgL_exprza2za2);
						BgL_auxz00_5605 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1892z00_3572, BgL_locz00_3165);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1224z00_3568)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5605), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1224z00_3568)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_castzd2nullzd2_bglt) BgL_nodez00_3164)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1224z00_3568)))->BgL_czd2formatzd2) =
					((obj_t) (((BgL_privatez00_bglt)
								COBJECT(((BgL_privatez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_castzd2nullzd2_bglt) BgL_nodez00_3164)))))->
							BgL_czd2formatzd2)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1224z00_3568);
			}
		}

	}



/* &do-alphatize-pragma1621 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2pragma1621zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3166, obj_t BgL_nodez00_3167, obj_t BgL_locz00_3168)
	{
		{	/* Ast/alphatize.scm 251 */
			{	/* Ast/alphatize.scm 252 */
				BgL_pragmaz00_bglt BgL_new1216z00_3574;

				{	/* Ast/alphatize.scm 253 */
					BgL_pragmaz00_bglt BgL_new1223z00_3575;

					BgL_new1223z00_3575 =
						((BgL_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_pragmaz00_bgl))));
					{	/* Ast/alphatize.scm 253 */
						long BgL_arg1891z00_3576;

						{	/* Ast/alphatize.scm 253 */
							long BgL_res2180z00_3577;

							BgL_res2180z00_3577 = BGL_CLASS_INDEX(BGl_pragmaz00zzast_nodez00);
							BgL_arg1891z00_3576 = BgL_res2180z00_3577;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1223z00_3575), BgL_arg1891z00_3576);
					}
					{	/* Ast/alphatize.scm 253 */
						BgL_objectz00_bglt BgL_tmpz00_5629;

						BgL_tmpz00_5629 = ((BgL_objectz00_bglt) BgL_new1223z00_3575);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5629, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1223z00_3575);
					BgL_new1216z00_3574 = BgL_new1223z00_3575;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1216z00_3574)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_pragmaz00_bglt) BgL_nodez00_3167)), BgL_locz00_3168)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1216z00_3574)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_pragmaz00_bglt)
											BgL_nodez00_3167))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1216z00_3574)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_pragmaz00_bglt) BgL_nodez00_3167)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1216z00_3574)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_pragmaz00_bglt) BgL_nodez00_3167)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5655;

					{	/* Ast/alphatize.scm 254 */
						obj_t BgL_arg1889z00_3578;

						BgL_arg1889z00_3578 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_pragmaz00_bglt) BgL_nodez00_3167))))->BgL_exprza2za2);
						BgL_auxz00_5655 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1889z00_3578, BgL_locz00_3168);
					}
					((((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_new1216z00_3574)))->
							BgL_exprza2za2) = ((obj_t) BgL_auxz00_5655), BUNSPEC);
				}
				((((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_new1216z00_3574)))->BgL_effectz00) =
					((obj_t) (((BgL_externz00_bglt)
								COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_pragmaz00_bglt) BgL_nodez00_3167)))))->
							BgL_effectz00)), BUNSPEC);
				((((BgL_pragmaz00_bglt) COBJECT(BgL_new1216z00_3574))->BgL_formatz00) =
					((obj_t) (((BgL_pragmaz00_bglt)
								COBJECT(((BgL_pragmaz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_pragmaz00_bglt) BgL_nodez00_3167)))))->
							BgL_formatz00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1216z00_3574);
			}
		}

	}



/* &do-alphatize-funcall1619 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2funcall1619zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3169, obj_t BgL_nodez00_3170, obj_t BgL_locz00_3171)
	{
		{	/* Ast/alphatize.scm 237 */
			{	/* Ast/alphatize.scm 238 */
				BgL_nodez00_bglt BgL_funz00_3580;
				obj_t BgL_argsz00_3581;

				BgL_funz00_3580 =
					BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_3170)))->BgL_funz00),
					BgL_locz00_3171);
				BgL_argsz00_3581 =
					BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7((((BgL_funcallz00_bglt)
							COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_3170)))->BgL_argsz00),
					BgL_locz00_3171);
				{	/* Ast/alphatize.scm 240 */
					bool_t BgL_test2384z00_5680;

					{	/* Ast/alphatize.scm 240 */
						bool_t BgL_res2177z00_3582;

						BgL_res2177z00_3582 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_3580), BGl_closurez00zzast_nodez00);
						BgL_test2384z00_5680 = BgL_res2177z00_3582;
					}
					if (BgL_test2384z00_5680)
						{	/* Ast/alphatize.scm 241 */
							obj_t BgL_arg1879z00_3583;
							obj_t BgL_arg1881z00_3584;

							{	/* Ast/alphatize.scm 241 */
								BgL_varz00_bglt BgL_arg1882z00_3585;
								obj_t BgL_arg1883z00_3586;

								{	/* Ast/alphatize.scm 241 */
									BgL_nodez00_bglt BgL_duplicated1207z00_3587;
									BgL_varz00_bglt BgL_new1205z00_3588;

									BgL_duplicated1207z00_3587 = BgL_funz00_3580;
									{	/* Ast/alphatize.scm 241 */
										BgL_varz00_bglt BgL_new1209z00_3589;

										BgL_new1209z00_3589 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Ast/alphatize.scm 241 */
											long BgL_arg1884z00_3590;

											{	/* Ast/alphatize.scm 241 */
												long BgL_res2178z00_3591;

												BgL_res2178z00_3591 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1884z00_3590 = BgL_res2178z00_3591;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1209z00_3589),
												BgL_arg1884z00_3590);
										}
										BgL_new1205z00_3588 = BgL_new1209z00_3589;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1205z00_3588)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(BgL_duplicated1207z00_3587))->BgL_locz00)),
										BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1205z00_3588)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(BgL_duplicated1207z00_3587))->BgL_typez00)),
										BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1205z00_3588))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) (((BgL_varz00_bglt)
													COBJECT(((BgL_varz00_bglt)
															BgL_duplicated1207z00_3587)))->BgL_variablez00)),
										BUNSPEC);
									BgL_arg1882z00_3585 = BgL_new1205z00_3588;
								}
								BgL_arg1883z00_3586 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(CDR(
										((obj_t) BgL_argsz00_3581)), BNIL);
								BgL_arg1879z00_3583 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1882z00_3585), BgL_arg1883z00_3586);
							}
							BgL_arg1881z00_3584 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_funcallz00_bglt) BgL_nodez00_3170))))->BgL_locz00);
							return
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1879z00_3583, BNIL,
								BgL_arg1881z00_3584, CNST_TABLE_REF(((long) 6)));
						}
					else
						{	/* Ast/alphatize.scm 243 */
							BgL_funcallz00_bglt BgL_new1210z00_3592;

							{	/* Ast/alphatize.scm 244 */
								BgL_funcallz00_bglt BgL_new1215z00_3593;

								BgL_new1215z00_3593 =
									((BgL_funcallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_funcallz00_bgl))));
								{	/* Ast/alphatize.scm 244 */
									long BgL_arg1886z00_3594;

									{	/* Ast/alphatize.scm 244 */
										long BgL_res2179z00_3595;

										BgL_res2179z00_3595 =
											BGL_CLASS_INDEX(BGl_funcallz00zzast_nodez00);
										BgL_arg1886z00_3594 = BgL_res2179z00_3595;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1215z00_3593),
										BgL_arg1886z00_3594);
								}
								{	/* Ast/alphatize.scm 244 */
									BgL_objectz00_bglt BgL_tmpz00_5710;

									BgL_tmpz00_5710 = ((BgL_objectz00_bglt) BgL_new1215z00_3593);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5710, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1215z00_3593);
								BgL_new1210z00_3592 = BgL_new1215z00_3593;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1210z00_3592)))->BgL_locz00) =
								((obj_t)
									BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt)
											((BgL_funcallz00_bglt) BgL_nodez00_3170)),
										BgL_locz00_3171)), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1210z00_3592)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_funcallz00_bglt)
														BgL_nodez00_3170))))->BgL_typez00)), BUNSPEC);
							((((BgL_funcallz00_bglt) COBJECT(BgL_new1210z00_3592))->
									BgL_funz00) = ((BgL_nodez00_bglt) BgL_funz00_3580), BUNSPEC);
							((((BgL_funcallz00_bglt) COBJECT(BgL_new1210z00_3592))->
									BgL_argsz00) = ((obj_t) BgL_argsz00_3581), BUNSPEC);
							((((BgL_funcallz00_bglt) COBJECT(BgL_new1210z00_3592))->
									BgL_strengthz00) =
								((obj_t) (((BgL_funcallz00_bglt)
											COBJECT(((BgL_funcallz00_bglt) ((BgL_nodez00_bglt) (
															(BgL_funcallz00_bglt) BgL_nodez00_3170)))))->
										BgL_strengthz00)), BUNSPEC);
							((((BgL_funcallz00_bglt) COBJECT(BgL_new1210z00_3592))->
									BgL_functionsz00) =
								((obj_t) (((BgL_funcallz00_bglt)
											COBJECT(((BgL_funcallz00_bglt) ((BgL_nodez00_bglt) (
															(BgL_funcallz00_bglt) BgL_nodez00_3170)))))->
										BgL_functionsz00)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1210z00_3592);
						}
				}
			}
		}

	}



/* &do-alphatize-app-ly1617 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2appzd2ly1617z17zzast_alphatiza7eza7(obj_t
		BgL_envz00_3172, obj_t BgL_nodez00_3173, obj_t BgL_locz00_3174)
	{
		{	/* Ast/alphatize.scm 215 */
			{	/* Ast/alphatize.scm 216 */
				BgL_nodez00_bglt BgL_funz00_3597;
				BgL_nodez00_bglt BgL_argz00_3598;

				BgL_funz00_3597 =
					BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_3173)))->BgL_funz00),
					BgL_locz00_3174);
				BgL_argz00_3598 =
					BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7((((BgL_appzd2lyzd2_bglt)
							COBJECT(((BgL_appzd2lyzd2_bglt) BgL_nodez00_3173)))->BgL_argz00),
					BgL_locz00_3174);
				{	/* Ast/alphatize.scm 218 */
					bool_t BgL_test2385z00_5743;

					{	/* Ast/alphatize.scm 218 */
						bool_t BgL_test2386z00_5744;

						{	/* Ast/alphatize.scm 218 */
							bool_t BgL_res2174z00_3599;

							BgL_res2174z00_3599 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_3597), BGl_closurez00zzast_nodez00);
							BgL_test2386z00_5744 = BgL_res2174z00_3599;
						}
						if (BgL_test2386z00_5744)
							{	/* Ast/alphatize.scm 219 */
								bool_t BgL_test2387z00_5747;

								{	/* Ast/alphatize.scm 219 */
									BgL_variablez00_bglt BgL_arg1874z00_3600;

									BgL_arg1874z00_3600 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_funz00_3597)))->BgL_variablez00);
									BgL_test2387z00_5747 =
										BGl_globalzd2optionalzf3z21zzast_varz00(
										((obj_t) BgL_arg1874z00_3600));
								}
								if (BgL_test2387z00_5747)
									{	/* Ast/alphatize.scm 219 */
										BgL_test2385z00_5743 = ((bool_t) 0);
									}
								else
									{	/* Ast/alphatize.scm 220 */
										bool_t BgL_test2388z00_5752;

										{	/* Ast/alphatize.scm 220 */
											BgL_variablez00_bglt BgL_arg1873z00_3601;

											BgL_arg1873z00_3601 =
												(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_funz00_3597)))->
												BgL_variablez00);
											BgL_test2388z00_5752 =
												BGl_globalzd2keyzf3z21zzast_varz00(((obj_t)
													BgL_arg1873z00_3601));
										}
										if (BgL_test2388z00_5752)
											{	/* Ast/alphatize.scm 220 */
												BgL_test2385z00_5743 = ((bool_t) 0);
											}
										else
											{	/* Ast/alphatize.scm 220 */
												BgL_test2385z00_5743 = ((bool_t) 1);
											}
									}
							}
						else
							{	/* Ast/alphatize.scm 218 */
								BgL_test2385z00_5743 = ((bool_t) 0);
							}
					}
					if (BgL_test2385z00_5743)
						{	/* Ast/alphatize.scm 222 */
							obj_t BgL_arg1868z00_3602;
							BgL_varz00_bglt BgL_arg1870z00_3603;

							BgL_arg1868z00_3602 =
								BGl_getzd2locationzd2zzast_alphatiza7eza7(
								((BgL_nodez00_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_3173)), BgL_locz00_3174);
							{	/* Ast/alphatize.scm 223 */
								BgL_nodez00_bglt BgL_duplicated1198z00_3604;
								BgL_varz00_bglt BgL_new1196z00_3605;

								BgL_duplicated1198z00_3604 = BgL_funz00_3597;
								{	/* Ast/alphatize.scm 223 */
									BgL_varz00_bglt BgL_new1200z00_3606;

									BgL_new1200z00_3606 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Ast/alphatize.scm 223 */
										long BgL_arg1871z00_3607;

										{	/* Ast/alphatize.scm 223 */
											long BgL_res2175z00_3608;

											BgL_res2175z00_3608 =
												BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
											BgL_arg1871z00_3607 = BgL_res2175z00_3608;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1200z00_3606),
											BgL_arg1871z00_3607);
									}
									BgL_new1196z00_3605 = BgL_new1200z00_3606;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1196z00_3605)))->
										BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(BgL_duplicated1198z00_3604))->BgL_locz00)),
									BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1196z00_3605)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_nodez00_bglt)
												COBJECT(BgL_duplicated1198z00_3604))->BgL_typez00)),
									BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1196z00_3605))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) (((BgL_varz00_bglt)
												COBJECT(((BgL_varz00_bglt)
														BgL_duplicated1198z00_3604)))->BgL_variablez00)),
									BUNSPEC);
								BgL_arg1870z00_3603 = BgL_new1196z00_3605;
							}
							return
								BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(BNIL,
								BgL_arg1868z00_3602, ((BgL_nodez00_bglt) BgL_arg1870z00_3603),
								BgL_argz00_3598, CNST_TABLE_REF(((long) 7)));
						}
					else
						{	/* Ast/alphatize.scm 226 */
							BgL_appzd2lyzd2_bglt BgL_new1201z00_3609;

							{	/* Ast/alphatize.scm 227 */
								BgL_appzd2lyzd2_bglt BgL_new1204z00_3610;

								BgL_new1204z00_3610 =
									((BgL_appzd2lyzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appzd2lyzd2_bgl))));
								{	/* Ast/alphatize.scm 227 */
									long BgL_arg1872z00_3611;

									{	/* Ast/alphatize.scm 227 */
										long BgL_res2176z00_3612;

										BgL_res2176z00_3612 =
											BGL_CLASS_INDEX(BGl_appzd2lyzd2zzast_nodez00);
										BgL_arg1872z00_3611 = BgL_res2176z00_3612;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1204z00_3610),
										BgL_arg1872z00_3611);
								}
								{	/* Ast/alphatize.scm 227 */
									BgL_objectz00_bglt BgL_tmpz00_5780;

									BgL_tmpz00_5780 = ((BgL_objectz00_bglt) BgL_new1204z00_3610);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5780, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1204z00_3610);
								BgL_new1201z00_3609 = BgL_new1204z00_3610;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1201z00_3609)))->BgL_locz00) =
								((obj_t)
									BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt)
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_3173)),
										BgL_locz00_3174)), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1201z00_3609)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt)
														BgL_nodez00_3173))))->BgL_typez00)), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) COBJECT(BgL_new1201z00_3609))->
									BgL_funz00) = ((BgL_nodez00_bglt) BgL_funz00_3597), BUNSPEC);
							((((BgL_appzd2lyzd2_bglt) COBJECT(BgL_new1201z00_3609))->
									BgL_argz00) = ((BgL_nodez00_bglt) BgL_argz00_3598), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1201z00_3609);
						}
				}
			}
		}

	}



/* &do-alphatize-app1615 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2app1615zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3175, obj_t BgL_nodez00_3176, obj_t BgL_locz00_3177)
	{
		{	/* Ast/alphatize.scm 201 */
			{	/* Ast/alphatize.scm 204 */
				BgL_appz00_bglt BgL_new1184z00_3614;

				{	/* Ast/alphatize.scm 205 */
					BgL_appz00_bglt BgL_new1190z00_3615;

					BgL_new1190z00_3615 =
						((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_appz00_bgl))));
					{	/* Ast/alphatize.scm 205 */
						long BgL_arg1857z00_3616;

						{	/* Ast/alphatize.scm 205 */
							long BgL_res2171z00_3617;

							BgL_res2171z00_3617 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
							BgL_arg1857z00_3616 = BgL_res2171z00_3617;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1190z00_3615), BgL_arg1857z00_3616);
					}
					{	/* Ast/alphatize.scm 205 */
						BgL_objectz00_bglt BgL_tmpz00_5801;

						BgL_tmpz00_5801 = ((BgL_objectz00_bglt) BgL_new1190z00_3615);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5801, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1190z00_3615);
					BgL_new1184z00_3614 = BgL_new1190z00_3615;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1184z00_3614)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_appz00_bglt) BgL_nodez00_3176)), BgL_locz00_3177)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1184z00_3614)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
											BgL_nodez00_3176))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1184z00_3614)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_appz00_bglt) BgL_nodez00_3176)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1184z00_3614)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_appz00_bglt) BgL_nodez00_3176)))))->BgL_keyz00)),
					BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_5827;

					{	/* Ast/alphatize.scm 206 */
						BgL_nodez00_bglt BgL_varz00_3618;

						{	/* Ast/alphatize.scm 206 */
							BgL_varz00_bglt BgL_arg1855z00_3619;

							BgL_arg1855z00_3619 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3176)))->BgL_funz00);
							BgL_varz00_3618 =
								BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1855z00_3619), BgL_locz00_3177);
						}
						{	/* Ast/alphatize.scm 207 */
							bool_t BgL_test2389z00_5832;

							{	/* Ast/alphatize.scm 207 */
								bool_t BgL_res2172z00_3620;

								BgL_res2172z00_3620 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_varz00_3618), BGl_closurez00zzast_nodez00);
								BgL_test2389z00_5832 = BgL_res2172z00_3620;
							}
							if (BgL_test2389z00_5832)
								{	/* Ast/alphatize.scm 208 */
									BgL_nodez00_bglt BgL_duplicated1193z00_3621;
									BgL_varz00_bglt BgL_new1191z00_3622;

									BgL_duplicated1193z00_3621 = BgL_varz00_3618;
									{	/* Ast/alphatize.scm 208 */
										BgL_varz00_bglt BgL_new1195z00_3623;

										BgL_new1195z00_3623 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Ast/alphatize.scm 208 */
											long BgL_arg1853z00_3624;

											{	/* Ast/alphatize.scm 208 */
												long BgL_res2173z00_3625;

												{	/* Ast/alphatize.scm 208 */
													obj_t BgL_classz00_3626;

													BgL_classz00_3626 = BGl_varz00zzast_nodez00;
													BgL_res2173z00_3625 =
														BGL_CLASS_INDEX(BgL_classz00_3626);
												}
												BgL_arg1853z00_3624 = BgL_res2173z00_3625;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1195z00_3623),
												BgL_arg1853z00_3624);
										}
										BgL_new1191z00_3622 = BgL_new1195z00_3623;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1191z00_3622)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(BgL_duplicated1193z00_3621))->BgL_locz00)),
										BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1191z00_3622)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(BgL_duplicated1193z00_3621))->BgL_typez00)),
										BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1191z00_3622))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) (((BgL_varz00_bglt)
													COBJECT(((BgL_varz00_bglt)
															BgL_duplicated1193z00_3621)))->BgL_variablez00)),
										BUNSPEC);
									BgL_auxz00_5827 = BgL_new1191z00_3622;
								}
							else
								{	/* Ast/alphatize.scm 207 */
									BgL_auxz00_5827 = ((BgL_varz00_bglt) BgL_varz00_3618);
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1184z00_3614))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_5827), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_5850;

					{	/* Ast/alphatize.scm 210 */
						obj_t BgL_arg1856z00_3627;

						BgL_arg1856z00_3627 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_3176)))->BgL_argsz00);
						BgL_auxz00_5850 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1856z00_3627, BgL_locz00_3177);
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1184z00_3614))->BgL_argsz00) =
						((obj_t) BgL_auxz00_5850), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(BgL_new1184z00_3614))->BgL_stackablez00) =
					((obj_t) (((BgL_appz00_bglt)
								COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_appz00_bglt) BgL_nodez00_3176)))))->
							BgL_stackablez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1184z00_3614);
			}
		}

	}



/* &do-alphatize-sync1613 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2sync1613zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3178, obj_t BgL_nodez00_3179, obj_t BgL_locz00_3180)
	{
		{	/* Ast/alphatize.scm 191 */
			{	/* Ast/alphatize.scm 192 */
				BgL_syncz00_bglt BgL_new1180z00_3629;

				{	/* Ast/alphatize.scm 193 */
					BgL_syncz00_bglt BgL_new1183z00_3630;

					BgL_new1183z00_3630 =
						((BgL_syncz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_syncz00_bgl))));
					{	/* Ast/alphatize.scm 193 */
						long BgL_arg1851z00_3631;

						{	/* Ast/alphatize.scm 193 */
							long BgL_res2170z00_3632;

							BgL_res2170z00_3632 = BGL_CLASS_INDEX(BGl_syncz00zzast_nodez00);
							BgL_arg1851z00_3631 = BgL_res2170z00_3632;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1183z00_3630), BgL_arg1851z00_3631);
					}
					{	/* Ast/alphatize.scm 193 */
						BgL_objectz00_bglt BgL_tmpz00_5865;

						BgL_tmpz00_5865 = ((BgL_objectz00_bglt) BgL_new1183z00_3630);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5865, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1183z00_3630);
					BgL_new1180z00_3629 = BgL_new1183z00_3630;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1180z00_3629)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_syncz00_bglt) BgL_nodez00_3179)), BgL_locz00_3180)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1180z00_3629)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_syncz00_bglt)
											BgL_nodez00_3179))))->BgL_typez00)), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_5879;

					{	/* Ast/alphatize.scm 194 */
						BgL_nodez00_bglt BgL_arg1847z00_3633;

						BgL_arg1847z00_3633 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_3179)))->BgL_mutexz00);
						BgL_auxz00_5879 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1847z00_3633,
							BgL_locz00_3180);
					}
					((((BgL_syncz00_bglt) COBJECT(BgL_new1180z00_3629))->BgL_mutexz00) =
						((BgL_nodez00_bglt) BgL_auxz00_5879), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_5884;

					{	/* Ast/alphatize.scm 195 */
						BgL_nodez00_bglt BgL_arg1848z00_3634;

						BgL_arg1848z00_3634 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_3179)))->BgL_prelockz00);
						BgL_auxz00_5884 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1848z00_3634,
							BgL_locz00_3180);
					}
					((((BgL_syncz00_bglt) COBJECT(BgL_new1180z00_3629))->BgL_prelockz00) =
						((BgL_nodez00_bglt) BgL_auxz00_5884), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_5889;

					{	/* Ast/alphatize.scm 196 */
						BgL_nodez00_bglt BgL_arg1850z00_3635;

						BgL_arg1850z00_3635 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_3179)))->BgL_bodyz00);
						BgL_auxz00_5889 =
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_arg1850z00_3635,
							BgL_locz00_3180);
					}
					((((BgL_syncz00_bglt) COBJECT(BgL_new1180z00_3629))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_5889), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) BgL_new1180z00_3629);
			}
		}

	}



/* &do-alphatize-sequenc1611 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2sequenc1611zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3181, obj_t BgL_nodez00_3182, obj_t BgL_locz00_3183)
	{
		{	/* Ast/alphatize.scm 183 */
			{	/* Ast/alphatize.scm 184 */
				BgL_sequencez00_bglt BgL_new1171z00_3637;

				{	/* Ast/alphatize.scm 185 */
					BgL_sequencez00_bglt BgL_new1178z00_3638;

					BgL_new1178z00_3638 =
						((BgL_sequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sequencez00_bgl))));
					{	/* Ast/alphatize.scm 185 */
						long BgL_arg1846z00_3639;

						{	/* Ast/alphatize.scm 185 */
							long BgL_res2169z00_3640;

							BgL_res2169z00_3640 =
								BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
							BgL_arg1846z00_3639 = BgL_res2169z00_3640;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1178z00_3638), BgL_arg1846z00_3639);
					}
					{	/* Ast/alphatize.scm 185 */
						BgL_objectz00_bglt BgL_tmpz00_5899;

						BgL_tmpz00_5899 = ((BgL_objectz00_bglt) BgL_new1178z00_3638);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5899, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1178z00_3638);
					BgL_new1171z00_3637 = BgL_new1178z00_3638;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1171z00_3637)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_sequencez00_bglt) BgL_nodez00_3182)), BgL_locz00_3183)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1171z00_3637)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_sequencez00_bglt)
											BgL_nodez00_3182))))->BgL_typez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1171z00_3637)))->BgL_sidezd2effectzd2) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_3182)))))->
							BgL_sidezd2effectzd2)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1171z00_3637)))->BgL_keyz00) =
					((obj_t) (((BgL_nodezf2effectzf2_bglt)
								COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_3182)))))->
							BgL_keyz00)), BUNSPEC);
				{
					obj_t BgL_auxz00_5925;

					{	/* Ast/alphatize.scm 186 */
						obj_t BgL_arg1845z00_3641;

						BgL_arg1845z00_3641 =
							(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_3182)))->BgL_nodesz00);
						BgL_auxz00_5925 =
							BGl_dozd2alphatiza7eza2zd7zzast_alphatiza7eza7
							(BgL_arg1845z00_3641, BgL_locz00_3183);
					}
					((((BgL_sequencez00_bglt) COBJECT(BgL_new1171z00_3637))->
							BgL_nodesz00) = ((obj_t) BgL_auxz00_5925), BUNSPEC);
				}
				((((BgL_sequencez00_bglt) COBJECT(BgL_new1171z00_3637))->
						BgL_unsafez00) =
					((bool_t) (((BgL_sequencez00_bglt)
								COBJECT(((BgL_sequencez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_3182)))))->
							BgL_unsafez00)), BUNSPEC);
				((((BgL_sequencez00_bglt) COBJECT(BgL_new1171z00_3637))->BgL_metaz00) =
					((obj_t) (((BgL_sequencez00_bglt)
								COBJECT(((BgL_sequencez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_sequencez00_bglt) BgL_nodez00_3182)))))->
							BgL_metaz00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1171z00_3637);
			}
		}

	}



/* &do-alphatize-kwote1609 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2kwote1609zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3184, obj_t BgL_nodez00_3185, obj_t BgL_locz00_3186)
	{
		{	/* Ast/alphatize.scm 177 */
			{	/* Ast/alphatize.scm 178 */
				BgL_kwotez00_bglt BgL_new1166z00_3643;

				{	/* Ast/alphatize.scm 178 */
					BgL_kwotez00_bglt BgL_new1170z00_3644;

					BgL_new1170z00_3644 =
						((BgL_kwotez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_kwotez00_bgl))));
					{	/* Ast/alphatize.scm 178 */
						long BgL_arg1842z00_3645;

						{	/* Ast/alphatize.scm 178 */
							long BgL_res2168z00_3646;

							BgL_res2168z00_3646 = BGL_CLASS_INDEX(BGl_kwotez00zzast_nodez00);
							BgL_arg1842z00_3645 = BgL_res2168z00_3646;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1170z00_3644), BgL_arg1842z00_3645);
					}
					{	/* Ast/alphatize.scm 178 */
						BgL_objectz00_bglt BgL_tmpz00_5945;

						BgL_tmpz00_5945 = ((BgL_objectz00_bglt) BgL_new1170z00_3644);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5945, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1170z00_3644);
					BgL_new1166z00_3643 = BgL_new1170z00_3644;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1166z00_3643)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_kwotez00_bglt) BgL_nodez00_3185)), BgL_locz00_3186)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1166z00_3643)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_kwotez00_bglt)
											BgL_nodez00_3185))))->BgL_typez00)), BUNSPEC);
				((((BgL_kwotez00_bglt) COBJECT(BgL_new1166z00_3643))->BgL_valuez00) =
					((obj_t) (((BgL_kwotez00_bglt)
								COBJECT(((BgL_kwotez00_bglt) ((BgL_nodez00_bglt) (
												(BgL_kwotez00_bglt) BgL_nodez00_3185)))))->
							BgL_valuez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1166z00_3643);
			}
		}

	}



/* &do-alphatize-closure1607 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2closure1607zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3187, obj_t BgL_nodez00_3188, obj_t BgL_locz00_3189)
	{
		{	/* Ast/alphatize.scm 155 */
			{	/* Ast/alphatize.scm 156 */
				BgL_variablez00_bglt BgL_varz00_3648;

				BgL_varz00_3648 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt)
								((BgL_closurez00_bglt) BgL_nodez00_3188))))->BgL_variablez00);
				if (
					(((obj_t) BgL_varz00_3648) ==
						BGl_za2nozd2alphatiza7ezd2closureza2za7zzast_alphatiza7eza7))
					{	/* Ast/alphatize.scm 157 */
						return
							((BgL_nodez00_bglt) ((BgL_closurez00_bglt) BgL_nodez00_3188));
					}
				else
					{	/* Ast/alphatize.scm 159 */
						obj_t BgL_alphaz00_3649;

						BgL_alphaz00_3649 =
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3648))->
							BgL_fastzd2alphazd2);
						if ((BgL_alphaz00_3649 == BUNSPEC))
							{	/* Ast/alphatize.scm 161 */
								{	/* Ast/alphatize.scm 162 */
									obj_t BgL_arg1835z00_3650;

									BgL_arg1835z00_3650 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_closurez00_bglt) BgL_nodez00_3188))))->
										BgL_locz00);
									BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_3648,
										BgL_arg1835z00_3650, CNST_TABLE_REF(((long) 7)));
								}
								{	/* Ast/alphatize.scm 163 */
									BgL_closurez00_bglt BgL_new1157z00_3651;

									{	/* Ast/alphatize.scm 163 */
										BgL_closurez00_bglt BgL_new1161z00_3652;

										BgL_new1161z00_3652 =
											((BgL_closurez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_closurez00_bgl))));
										{	/* Ast/alphatize.scm 163 */
											long BgL_arg1836z00_3653;

											{	/* Ast/alphatize.scm 163 */
												long BgL_res2165z00_3654;

												BgL_res2165z00_3654 =
													BGL_CLASS_INDEX(BGl_closurez00zzast_nodez00);
												BgL_arg1836z00_3653 = BgL_res2165z00_3654;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1161z00_3652),
												BgL_arg1836z00_3653);
										}
										BgL_new1157z00_3651 = BgL_new1161z00_3652;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1157z00_3651)))->
											BgL_locz00) =
										((obj_t)
											BGl_getzd2locationzd2zzast_alphatiza7eza7((
													(BgL_nodez00_bglt) ((BgL_closurez00_bglt)
														BgL_nodez00_3188)), BgL_locz00_3189)), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1157z00_3651)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_closurez00_bglt)
																BgL_nodez00_3188))))->BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
														BgL_new1157z00_3651)))->BgL_variablez00) =
										((BgL_variablez00_bglt) (((BgL_varz00_bglt)
													COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt) (
																	(BgL_closurez00_bglt) BgL_nodez00_3188)))))->
												BgL_variablez00)), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1157z00_3651);
								}
							}
						else
							{	/* Ast/alphatize.scm 161 */
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3649,
										BGl_variablez00zzast_varz00))
									{	/* Ast/alphatize.scm 164 */
										{	/* Ast/alphatize.scm 165 */
											obj_t BgL_arg1838z00_3655;

											BgL_arg1838z00_3655 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_closurez00_bglt) BgL_nodez00_3188))))->
												BgL_locz00);
											BGl_usezd2variablez12zc0zzast_sexpz00((
													(BgL_variablez00_bglt) BgL_alphaz00_3649),
												BgL_arg1838z00_3655, CNST_TABLE_REF(((long) 7)));
										}
										{	/* Ast/alphatize.scm 166 */
											BgL_closurez00_bglt BgL_new1162z00_3656;

											{	/* Ast/alphatize.scm 167 */
												BgL_closurez00_bglt BgL_new1165z00_3657;

												BgL_new1165z00_3657 =
													((BgL_closurez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_closurez00_bgl))));
												{	/* Ast/alphatize.scm 167 */
													long BgL_arg1840z00_3658;

													{	/* Ast/alphatize.scm 167 */
														long BgL_res2167z00_3659;

														BgL_res2167z00_3659 =
															BGL_CLASS_INDEX(BGl_closurez00zzast_nodez00);
														BgL_arg1840z00_3658 = BgL_res2167z00_3659;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1165z00_3657),
														BgL_arg1840z00_3658);
												}
												BgL_new1162z00_3656 = BgL_new1165z00_3657;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1162z00_3656)))->
													BgL_locz00) =
												((obj_t)
													BGl_getzd2locationzd2zzast_alphatiza7eza7((
															(BgL_nodez00_bglt) ((BgL_closurez00_bglt)
																BgL_nodez00_3188)), BgL_locz00_3189)), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1162z00_3656)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) ((BgL_closurez00_bglt)
																		BgL_nodez00_3188))))->BgL_typez00)),
												BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
																BgL_new1162z00_3656)))->BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_alphaz00_3649)), BUNSPEC);
											return ((BgL_nodez00_bglt) BgL_new1162z00_3656);
										}
									}
								else
									{	/* Ast/alphatize.scm 172 */
										obj_t BgL_arg1841z00_3660;

										BgL_arg1841z00_3660 =
											BGl_shapez00zztools_shapez00(
											((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_3188)));
										return
											((BgL_nodez00_bglt)
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2289z00zzast_alphatiza7eza7,
												BGl_string2291z00zzast_alphatiza7eza7,
												BgL_arg1841z00_3660));
									}
							}
					}
			}
		}

	}



/* &do-alphatize-var1605 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2var1605zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3190, obj_t BgL_nodez00_3191, obj_t BgL_locz00_3192)
	{
		{	/* Ast/alphatize.scm 122 */
			{	/* Ast/alphatize.scm 123 */
				BgL_variablez00_bglt BgL_varz00_3662;

				BgL_varz00_3662 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_3191)))->BgL_variablez00);
				{	/* Ast/alphatize.scm 123 */
					obj_t BgL_alphaz00_3663;

					BgL_alphaz00_3663 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3662))->
						BgL_fastzd2alphazd2);
					{	/* Ast/alphatize.scm 124 */

						if ((BgL_alphaz00_3663 == BUNSPEC))
							{	/* Ast/alphatize.scm 126 */
								{	/* Ast/alphatize.scm 127 */
									obj_t BgL_arg1796z00_3664;

									BgL_arg1796z00_3664 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_3191))))->BgL_locz00);
									BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_3662,
										BgL_arg1796z00_3664, CNST_TABLE_REF(((long) 7)));
								}
								{	/* Ast/alphatize.scm 128 */
									BgL_varz00_bglt BgL_new1126z00_3665;

									{	/* Ast/alphatize.scm 128 */
										BgL_varz00_bglt BgL_new1130z00_3666;

										BgL_new1130z00_3666 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Ast/alphatize.scm 128 */
											long BgL_arg1798z00_3667;

											{	/* Ast/alphatize.scm 128 */
												long BgL_res2154z00_3668;

												BgL_res2154z00_3668 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1798z00_3667 = BgL_res2154z00_3668;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1130z00_3666),
												BgL_arg1798z00_3667);
										}
										BgL_new1126z00_3665 = BgL_new1130z00_3666;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1126z00_3665)))->
											BgL_locz00) =
										((obj_t)
											BGl_getzd2locationzd2zzast_alphatiza7eza7((
													(BgL_nodez00_bglt) ((BgL_varz00_bglt)
														BgL_nodez00_3191)), BgL_locz00_3192)), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1126z00_3665)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
																BgL_nodez00_3191))))->BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1126z00_3665))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) (((BgL_varz00_bglt)
													COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt) (
																	(BgL_varz00_bglt) BgL_nodez00_3191)))))->
												BgL_variablez00)), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1126z00_3665);
								}
							}
						else
							{	/* Ast/alphatize.scm 126 */
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3663,
										BGl_variablez00zzast_varz00))
									{	/* Ast/alphatize.scm 129 */
										{	/* Ast/alphatize.scm 130 */
											obj_t BgL_arg1801z00_3669;

											BgL_arg1801z00_3669 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_3191))))->
												BgL_locz00);
											BGl_usezd2variablez12zc0zzast_sexpz00((
													(BgL_variablez00_bglt) BgL_alphaz00_3663),
												BgL_arg1801z00_3669, CNST_TABLE_REF(((long) 7)));
										}
										{	/* Ast/alphatize.scm 131 */
											bool_t BgL_test2395z00_6071;

											{	/* Ast/alphatize.scm 131 */
												BgL_valuez00_bglt BgL_arg1822z00_3670;

												BgL_arg1822z00_3670 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_alphaz00_3663)))->
													BgL_valuez00);
												{	/* Ast/alphatize.scm 131 */
													bool_t BgL_res2156z00_3671;

													BgL_res2156z00_3671 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1822z00_3670),
														BGl_funz00zzast_varz00);
													BgL_test2395z00_6071 = BgL_res2156z00_3671;
											}}
											if (BgL_test2395z00_6071)
												{	/* Ast/alphatize.scm 132 */
													BgL_closurez00_bglt BgL_new1133z00_3672;

													{	/* Ast/alphatize.scm 133 */
														BgL_closurez00_bglt BgL_new1131z00_3673;

														BgL_new1131z00_3673 =
															((BgL_closurez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_closurez00_bgl))));
														{	/* Ast/alphatize.scm 133 */
															long BgL_arg1820z00_3674;

															{	/* Ast/alphatize.scm 133 */
																long BgL_res2157z00_3675;

																BgL_res2157z00_3675 =
																	BGL_CLASS_INDEX(BGl_closurez00zzast_nodez00);
																BgL_arg1820z00_3674 = BgL_res2157z00_3675;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1131z00_3673),
																BgL_arg1820z00_3674);
														}
														BgL_new1133z00_3672 = BgL_new1131z00_3673;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1133z00_3672)))->
															BgL_locz00) =
														((obj_t)
															BGl_getzd2locationzd2zzast_alphatiza7eza7((
																	(BgL_nodez00_bglt) ((BgL_varz00_bglt)
																		BgL_nodez00_3191)), BgL_locz00_3192)),
														BUNSPEC);
													{
														BgL_typez00_bglt BgL_auxz00_6085;

														{	/* Ast/alphatize.scm 134 */
															BgL_typez00_bglt BgL_arg1811z00_3676;

															BgL_arg1811z00_3676 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_alphaz00_3663)))->BgL_typez00);
															BgL_auxz00_6085 =
																BGl_strictzd2nodezd2typez00zzast_nodez00((
																	(BgL_typez00_bglt)
																	BGl_za2procedureza2z00zztype_cachez00),
																BgL_arg1811z00_3676);
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1133z00_3672)))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_6085), BUNSPEC);
													}
													((((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_new1133z00_3672)))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_alphaz00_3663)), BUNSPEC);
													return ((BgL_nodez00_bglt) BgL_new1133z00_3672);
												}
											else
												{	/* Ast/alphatize.scm 136 */
													BgL_varz00_bglt BgL_new1134z00_3677;

													{	/* Ast/alphatize.scm 137 */
														BgL_varz00_bglt BgL_new1137z00_3678;

														BgL_new1137z00_3678 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Ast/alphatize.scm 137 */
															long BgL_arg1821z00_3679;

															{	/* Ast/alphatize.scm 137 */
																long BgL_res2158z00_3680;

																BgL_res2158z00_3680 =
																	BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																BgL_arg1821z00_3679 = BgL_res2158z00_3680;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1137z00_3678),
																BgL_arg1821z00_3679);
														}
														BgL_new1134z00_3677 = BgL_new1137z00_3678;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1134z00_3677)))->
															BgL_locz00) =
														((obj_t)
															BGl_getzd2locationzd2zzast_alphatiza7eza7((
																	(BgL_nodez00_bglt) ((BgL_varz00_bglt)
																		BgL_nodez00_3191)), BgL_locz00_3192)),
														BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1134z00_3677)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
																				BgL_nodez00_3191))))->BgL_typez00)),
														BUNSPEC);
													((((BgL_varz00_bglt) COBJECT(BgL_new1134z00_3677))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_alphaz00_3663)), BUNSPEC);
													return ((BgL_nodez00_bglt) BgL_new1134z00_3677);
												}
										}
									}
								else
									{	/* Ast/alphatize.scm 129 */
										if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3663,
												BGl_literalz00zzast_nodez00))
											{	/* Ast/alphatize.scm 140 */
												BgL_literalz00_bglt BgL_new1138z00_3681;

												{	/* Ast/alphatize.scm 140 */
													BgL_literalz00_bglt BgL_new1142z00_3682;

													BgL_new1142z00_3682 =
														((BgL_literalz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_literalz00_bgl))));
													{	/* Ast/alphatize.scm 140 */
														long BgL_arg1824z00_3683;

														{	/* Ast/alphatize.scm 140 */
															long BgL_res2160z00_3684;

															BgL_res2160z00_3684 =
																BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
															BgL_arg1824z00_3683 = BgL_res2160z00_3684;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1142z00_3682),
															BgL_arg1824z00_3683);
													}
													{	/* Ast/alphatize.scm 140 */
														BgL_objectz00_bglt BgL_tmpz00_6119;

														BgL_tmpz00_6119 =
															((BgL_objectz00_bglt) BgL_new1142z00_3682);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6119, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1142z00_3682);
													BgL_new1138z00_3681 = BgL_new1142z00_3682;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1138z00_3681)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) (
																			(BgL_literalz00_bglt)
																			BgL_alphaz00_3663))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1138z00_3681)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) (
																			(BgL_literalz00_bglt)
																			BgL_alphaz00_3663))))->BgL_typez00)),
													BUNSPEC);
												((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																	BgL_new1138z00_3681)))->BgL_valuez00) =
													((obj_t) (((BgL_atomz00_bglt)
																COBJECT(((BgL_atomz00_bglt) ((BgL_nodez00_bglt)
																			((BgL_literalz00_bglt)
																				BgL_alphaz00_3663)))))->BgL_valuez00)),
													BUNSPEC);
												return ((BgL_nodez00_bglt) BgL_new1138z00_3681);
											}
										else
											{	/* Ast/alphatize.scm 139 */
												if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3663,
														BGl_patchz00zzast_nodez00))
													{	/* Ast/alphatize.scm 143 */
														BgL_patchz00_bglt BgL_new1144z00_3685;

														{	/* Ast/alphatize.scm 143 */
															BgL_patchz00_bglt BgL_new1150z00_3686;

															BgL_new1150z00_3686 =
																((BgL_patchz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_patchz00_bgl))));
															{	/* Ast/alphatize.scm 143 */
																long BgL_arg1827z00_3687;

																{	/* Ast/alphatize.scm 143 */
																	long BgL_res2162z00_3688;

																	BgL_res2162z00_3688 =
																		BGL_CLASS_INDEX(BGl_patchz00zzast_nodez00);
																	BgL_arg1827z00_3687 = BgL_res2162z00_3688;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1150z00_3686),
																	BgL_arg1827z00_3687);
															}
															{	/* Ast/alphatize.scm 143 */
																BgL_objectz00_bglt BgL_tmpz00_6146;

																BgL_tmpz00_6146 =
																	((BgL_objectz00_bglt) BgL_new1150z00_3686);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6146,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1150z00_3686);
															BgL_new1144z00_3685 = BgL_new1150z00_3686;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1144z00_3685)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_patchz00_bglt)
																					BgL_alphaz00_3663))))->BgL_locz00)),
															BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1144z00_3685)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_patchz00_bglt)
																					BgL_alphaz00_3663))))->BgL_typez00)),
															BUNSPEC);
														((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																			BgL_new1144z00_3685)))->BgL_valuez00) =
															((obj_t) (((BgL_atomz00_bglt)
																		COBJECT(((BgL_atomz00_bglt) (
																					(BgL_nodez00_bglt) (
																						(BgL_patchz00_bglt)
																						BgL_alphaz00_3663)))))->
																	BgL_valuez00)), BUNSPEC);
														{
															BgL_varz00_bglt BgL_auxz00_6166;

															{	/* Ast/alphatize.scm 144 */
																BgL_varz00_bglt BgL_arg1826z00_3689;

																BgL_arg1826z00_3689 =
																	(((BgL_patchz00_bglt) COBJECT(
																			((BgL_patchz00_bglt)
																				BgL_alphaz00_3663)))->BgL_refz00);
																BgL_auxz00_6166 =
																	((BgL_varz00_bglt)
																	BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7((
																			(BgL_nodez00_bglt) BgL_arg1826z00_3689),
																		BgL_locz00_3192));
															}
															((((BgL_patchz00_bglt)
																		COBJECT(BgL_new1144z00_3685))->BgL_refz00) =
																((BgL_varz00_bglt) BgL_auxz00_6166), BUNSPEC);
														}
														((((BgL_patchz00_bglt)
																	COBJECT(BgL_new1144z00_3685))->BgL_indexz00) =
															((long) (((BgL_patchz00_bglt)
																		COBJECT(((BgL_patchz00_bglt) (
																					(BgL_nodez00_bglt) (
																						(BgL_patchz00_bglt)
																						BgL_alphaz00_3663)))))->
																	BgL_indexz00)), BUNSPEC);
														((((BgL_patchz00_bglt)
																	COBJECT(BgL_new1144z00_3685))->
																BgL_patchidz00) =
															((obj_t) (((BgL_patchz00_bglt)
																		COBJECT(((BgL_patchz00_bglt) (
																					(BgL_nodez00_bglt) (
																						(BgL_patchz00_bglt)
																						BgL_alphaz00_3663)))))->
																	BgL_patchidz00)), BUNSPEC);
														return ((BgL_nodez00_bglt) BgL_new1144z00_3685);
													}
												else
													{	/* Ast/alphatize.scm 141 */
														if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_3663,
																BGl_kwotez00zzast_nodez00))
															{	/* Ast/alphatize.scm 146 */
																BgL_kwotez00_bglt BgL_new1151z00_3690;

																{	/* Ast/alphatize.scm 146 */
																	BgL_kwotez00_bglt BgL_new1156z00_3691;

																	BgL_new1156z00_3691 =
																		((BgL_kwotez00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_kwotez00_bgl))));
																	{	/* Ast/alphatize.scm 146 */
																		long BgL_arg1829z00_3692;

																		{	/* Ast/alphatize.scm 146 */
																			long BgL_res2164z00_3693;

																			BgL_res2164z00_3693 =
																				BGL_CLASS_INDEX
																				(BGl_kwotez00zzast_nodez00);
																			BgL_arg1829z00_3692 = BgL_res2164z00_3693;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1156z00_3691),
																			BgL_arg1829z00_3692);
																	}
																	{	/* Ast/alphatize.scm 146 */
																		BgL_objectz00_bglt BgL_tmpz00_6190;

																		BgL_tmpz00_6190 =
																			((BgL_objectz00_bglt)
																			BgL_new1156z00_3691);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6190,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1156z00_3691);
																	BgL_new1151z00_3690 = BgL_new1156z00_3691;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1151z00_3690)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_kwotez00_bglt)
																							BgL_alphaz00_3663))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1151z00_3690)))->BgL_typez00) =
																	((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_kwotez00_bglt)
																							BgL_alphaz00_3663))))->
																			BgL_typez00)), BUNSPEC);
																((((BgL_kwotez00_bglt)
																			COBJECT(BgL_new1151z00_3690))->
																		BgL_valuez00) =
																	((obj_t) (((BgL_kwotez00_bglt)
																				COBJECT(((BgL_kwotez00_bglt) (
																							(BgL_nodez00_bglt) (
																								(BgL_kwotez00_bglt)
																								BgL_alphaz00_3663)))))->
																			BgL_valuez00)), BUNSPEC);
																return ((BgL_nodez00_bglt) BgL_new1151z00_3690);
															}
														else
															{	/* Ast/alphatize.scm 150 */
																obj_t BgL_arg1830z00_3694;

																{	/* Ast/alphatize.scm 150 */
																	obj_t BgL_arg1831z00_3695;
																	obj_t BgL_arg1832z00_3696;

																	BgL_arg1831z00_3695 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t)
																			((BgL_varz00_bglt) BgL_nodez00_3191)));
																	BgL_arg1832z00_3696 =
																		BGl_shapez00zztools_shapez00
																		(BgL_alphaz00_3663);
																	BgL_arg1830z00_3694 =
																		MAKE_YOUNG_PAIR(BgL_arg1831z00_3695,
																		BgL_arg1832z00_3696);
																}
																return
																	((BgL_nodez00_bglt)
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_string2289z00zzast_alphatiza7eza7,
																		BGl_string2292z00zzast_alphatiza7eza7,
																		BgL_arg1830z00_3694));
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



/* &do-alphatize-patch1603 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2patch1603zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3193, obj_t BgL_nodez00_3194, obj_t BgL_locz00_3195)
	{
		{	/* Ast/alphatize.scm 112 */
			{	/* Ast/alphatize.scm 114 */
				BgL_patchz00_bglt BgL_new1119z00_3698;

				{	/* Ast/alphatize.scm 117 */
					BgL_patchz00_bglt BgL_new1125z00_3699;

					BgL_new1125z00_3699 =
						((BgL_patchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_patchz00_bgl))));
					{	/* Ast/alphatize.scm 117 */
						long BgL_arg1790z00_3700;

						{	/* Ast/alphatize.scm 117 */
							long BgL_res2153z00_3701;

							BgL_res2153z00_3701 = BGL_CLASS_INDEX(BGl_patchz00zzast_nodez00);
							BgL_arg1790z00_3700 = BgL_res2153z00_3701;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1125z00_3699), BgL_arg1790z00_3700);
					}
					{	/* Ast/alphatize.scm 117 */
						BgL_objectz00_bglt BgL_tmpz00_6221;

						BgL_tmpz00_6221 = ((BgL_objectz00_bglt) BgL_new1125z00_3699);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6221, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1125z00_3699);
					BgL_new1119z00_3698 = BgL_new1125z00_3699;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1119z00_3698)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_patchz00_bglt) BgL_nodez00_3194)), BgL_locz00_3195)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1119z00_3698)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
											BgL_nodez00_3194))))->BgL_typez00)), BUNSPEC);
				{
					obj_t BgL_auxz00_6235;

					{	/* Ast/alphatize.scm 116 */
						obj_t BgL_arg1782z00_3702;

						BgL_arg1782z00_3702 =
							(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt)
										((BgL_patchz00_bglt) BgL_nodez00_3194))))->BgL_valuez00);
						BgL_auxz00_6235 =
							((obj_t)
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1782z00_3702), BgL_locz00_3195));
					}
					((((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt) BgL_new1119z00_3698)))->BgL_valuez00) =
						((obj_t) BgL_auxz00_6235), BUNSPEC);
				}
				{
					BgL_varz00_bglt BgL_auxz00_6244;

					{	/* Ast/alphatize.scm 115 */
						BgL_varz00_bglt BgL_arg1784z00_3703;

						BgL_arg1784z00_3703 =
							(((BgL_patchz00_bglt) COBJECT(
									((BgL_patchz00_bglt) BgL_nodez00_3194)))->BgL_refz00);
						BgL_auxz00_6244 =
							((BgL_varz00_bglt)
							BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
								((BgL_nodez00_bglt) BgL_arg1784z00_3703), BgL_locz00_3195));
					}
					((((BgL_patchz00_bglt) COBJECT(BgL_new1119z00_3698))->BgL_refz00) =
						((BgL_varz00_bglt) BgL_auxz00_6244), BUNSPEC);
				}
				((((BgL_patchz00_bglt) COBJECT(BgL_new1119z00_3698))->BgL_indexz00) =
					((long) (((BgL_patchz00_bglt)
								COBJECT(((BgL_patchz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_patchz00_bglt) BgL_nodez00_3194)))))->
							BgL_indexz00)), BUNSPEC);
				((((BgL_patchz00_bglt) COBJECT(BgL_new1119z00_3698))->BgL_patchidz00) =
					((obj_t) (((BgL_patchz00_bglt)
								COBJECT(((BgL_patchz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_patchz00_bglt) BgL_nodez00_3194)))))->
							BgL_patchidz00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1119z00_3698);
			}
		}

	}



/* &do-alphatize-literal1601 */
	BgL_nodez00_bglt
		BGl_z62dozd2alphatiza7ezd2literal1601zc5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3196, obj_t BgL_nodez00_3197, obj_t BgL_locz00_3198)
	{
		{	/* Ast/alphatize.scm 105 */
			{	/* Ast/alphatize.scm 106 */
				BgL_literalz00_bglt BgL_new1113z00_3705;

				{	/* Ast/alphatize.scm 107 */
					BgL_literalz00_bglt BgL_new1117z00_3706;

					BgL_new1117z00_3706 =
						((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_literalz00_bgl))));
					{	/* Ast/alphatize.scm 107 */
						long BgL_arg1779z00_3707;

						{	/* Ast/alphatize.scm 107 */
							long BgL_res2152z00_3708;

							BgL_res2152z00_3708 =
								BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
							BgL_arg1779z00_3707 = BgL_res2152z00_3708;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1117z00_3706), BgL_arg1779z00_3707);
					}
					{	/* Ast/alphatize.scm 107 */
						BgL_objectz00_bglt BgL_tmpz00_6266;

						BgL_tmpz00_6266 = ((BgL_objectz00_bglt) BgL_new1117z00_3706);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6266, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1117z00_3706);
					BgL_new1113z00_3705 = BgL_new1117z00_3706;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1113z00_3705)))->BgL_locz00) =
					((obj_t)
						BGl_getzd2locationzd2zzast_alphatiza7eza7(((BgL_nodez00_bglt) (
									(BgL_literalz00_bglt) BgL_nodez00_3197)), BgL_locz00_3198)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1113z00_3705)))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_nodez00_bglt)
								COBJECT(((BgL_nodez00_bglt) ((BgL_literalz00_bglt)
											BgL_nodez00_3197))))->BgL_typez00)), BUNSPEC);
				((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
									BgL_new1113z00_3705)))->BgL_valuez00) =
					((obj_t) (((BgL_atomz00_bglt)
								COBJECT(((BgL_atomz00_bglt) ((BgL_nodez00_bglt) (
												(BgL_literalz00_bglt) BgL_nodez00_3197)))))->
							BgL_valuez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) BgL_new1113z00_3705);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7()
	{
		{	/* Ast/alphatize.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 277780822),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
			return
				BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2293z00zzast_alphatiza7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
