/*===========================================================================*/
/*   (Cfa/tvector.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/tvector.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

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

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

	typedef struct BgL_kwotezf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_kwotezf2cinfozf2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

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


	static obj_t BGl_z62patchz12z70zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62patchz12zd2letzd2var1659z70zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62patchz12zd2closure1635za2zzcfa_tvectorz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(BgL_appz00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcfa_tvectorz00();
	static obj_t BGl_z62patchz121624z70zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62patchz12zd2atom1627za2zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62patchz12zd2makezd2vectorzd2a1675za2zzcfa_tvectorz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_inlinezd2setupz12zc0zzinline_walkz00(obj_t);
	static obj_t BGl_z62patchz12zd2appzd2ly1641z70zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62unpatchzd2vectorzd2setz12z70zzcfa_tvectorz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_tvectorz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62patchz12zd2conditional1651za2zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62patchz12zd2kwotezf2node1631z50zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62patchz12zd2extern1645za2zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t);
	static obj_t BGl_z62patchz12zd2var1633za2zzcfa_tvectorz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	extern obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
	BGL_EXPORTED_DECL obj_t BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_patchzd2funz12zc0zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00;
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62getzd2vectorzd2itemzd2type1618zb0zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62patchz12zd2vlength1673za2zzcfa_tvectorz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getzd2vectorzd2itemzd2type1621zb0zzcfa_tvectorz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getzd2vectorzd2itemzd2type1623zb0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_patchz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_patchza2z12zb0zzcfa_tvectorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_tvectorz00();
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
	extern obj_t BGl_lvtypezd2astz12zc0zzast_lvtypez00(obj_t);
	static obj_t BGl_z62addzd2makezd2vectorz12z70zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2sync1639za2zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2fail1653za2zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2sequence1637za2zzcfa_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tvectorzd2optimiza7ationzf3ze4zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static bool_t BGl_showzd2tvectorzd2zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_z62patchz12zd2funcall1643za2zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_tvectorz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	static obj_t BGl_z62patchz12zd2kwote1629za2zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static bool_t BGl_patchzd2treez12zc0zzcfa_tvectorz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_tvectorz00();
	static obj_t BGl_z62patchz12zd2boxzd2ref1669z70zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62patchzd2vectorzd2setz12z70zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static BgL_typez00_bglt
		BGl_z62getzd2vectorzd2itemzd2typezb0zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_tvectorz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00(BgL_appz00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_getzd2tvectorszd2zzcfa_tvectorz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2vrefzf2Cinfo1679z50zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62patchz12zd2switch1655za2zzcfa_tvectorz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	static obj_t BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62patchz12zd2jumpzd2exzd2it1663za2zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62patchz12zd2boxzd2setz121667z62zzcfa_tvectorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62patchz12zd2makezd2box1665z70zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62vectorzd2ze3tvectorz12z41zzcfa_tvectorz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_tvectorz00();
	static obj_t BGl_z62patchz12zd2letzd2fun1657z70zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00();
	static obj_t BGl_z62patchz12zd2cast1647za2zzcfa_tvectorz00(obj_t, obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00();
	static obj_t BGl_z62patchz12zd2valloczf2Cinfozb21677ze2zzcfa_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62patchz12zd2setq1649za2zzcfa_tvectorz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2app1671za2zzcfa_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_declarezd2tvectorszd2zzcfa_tvectorz00(obj_t);
	static obj_t BGl_z62patchz12zd2vsetz12zf2Cinfo1681z42zzcfa_tvectorz00(obj_t,
		obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62patchz12zd2setzd2exzd2it1661za2zzcfa_tvectorz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	static obj_t __cnst[23];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl_za762patchza7d2vecto2414z00,
		BGl_z62patchzd2vectorzd2setz12z70zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2bo2415za7,
		BGl_z62patchz12zd2boxzd2setz121667z62zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2401z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2bo2416za7,
		BGl_z62patchz12zd2boxzd2ref1669z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2402z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ap2417za7,
		BGl_z62patchz12zd2app1671za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2403z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2vl2418za7,
		BGl_z62patchz12zd2vlength1673za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2404z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ma2419za7,
		BGl_z62patchz12zd2makezd2vectorzd2a1675za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2405z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2va2420za7,
		BGl_z62patchz12zd2valloczf2Cinfozb21677ze2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2406z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2vr2421za7,
		BGl_z62patchz12zd2vrefzf2Cinfo1679z50zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2407z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2vs2422za7,
		BGl_z62patchz12zd2vsetz12zf2Cinfo1681z42zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2ze3tvectorz12zd2envzf1zzcfa_tvectorz00,
		BgL_bgl_za762vectorza7d2za7e3t2423za7,
		BGl_z62vectorzd2ze3tvectorz12z41zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2368z00zzcfa_tvectorz00,
		BgL_bgl_string2368za700za7za7c2424za7, "   . Vector -> Tvector", 22);
	      DEFINE_STRING(BGl_string2369z00zzcfa_tvectorz00,
		BgL_bgl_string2369za700za7za7c2425za7, " -> vector of ", 14);
	      DEFINE_STRING(BGl_string2370z00zzcfa_tvectorz00,
		BgL_bgl_string2370za700za7za7c2426za7, "        vector of ", 18);
	      DEFINE_STRING(BGl_string2372z00zzcfa_tvectorz00,
		BgL_bgl_string2372za700za7za7c2427za7, "get-vector-item-type1618", 24);
	      DEFINE_STRING(BGl_string2374z00zzcfa_tvectorz00,
		BgL_bgl_string2374za700za7za7c2428za7, "patch!1624", 10);
	      DEFINE_STRING(BGl_string2375z00zzcfa_tvectorz00,
		BgL_bgl_string2375za700za7za7c2429za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2377z00zzcfa_tvectorz00,
		BgL_bgl_string2377za700za7za7c2430za7, "get-vector-item-type", 20);
	      DEFINE_STRING(BGl_string2380z00zzcfa_tvectorz00,
		BgL_bgl_string2380za700za7za7c2431za7, "patch!", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2optimiza7ationzf3zd2envz54zzcfa_tvectorz00,
		BgL_bgl_za762tvectorza7d2opt2432z00,
		BGl_z62tvectorzd2optimiza7ationzf3ze4zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2408z00zzcfa_tvectorz00,
		BgL_bgl_string2408za700za7za7c2433za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2409z00zzcfa_tvectorz00,
		BgL_bgl_string2409za700za7za7c2434za7, "cfa_tvector", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2makezd2vectorz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl_za762addza7d2makeza7d22435za7,
		BGl_z62addzd2makezd2vectorz12z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2410z00zzcfa_tvectorz00,
		BgL_bgl_string2410za700za7za7c2436za7,
		"a-tvector __r4_vectors_6_8 vector->list -length make- allocate- -ref -set! get-vector-item-type1618 patch!1624 value ->list done no-remove unit cfa tv-of- all (vector-set! c-vector-set! vector-set-ur!) vector? $vector? c-vector? (vector-set! vector-set-ur! c-vector-set! $vector-set! $vector-set-ur!) ",
		301);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl_za762unpatchza7d2vec2437z00,
		BGl_z62unpatchzd2vectorzd2setz12z70zzcfa_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zzcfa_tvectorz00,
		BgL_bgl_za762getza7d2vectorza72438za7,
		BGl_z62getzd2vectorzd2itemzd2type1618zb0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza7121624za72439za7,
		BGl_z62patchz121624z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2376z00zzcfa_tvectorz00,
		BgL_bgl_za762getza7d2vectorza72440za7,
		BGl_z62getzd2vectorzd2itemzd2type1621zb0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zzcfa_tvectorz00,
		BgL_bgl_za762getza7d2vectorza72441za7,
		BGl_z62getzd2vectorzd2itemzd2type1623zb0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2379z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2at2442za7,
		BGl_z62patchz12zd2atom1627za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2kw2443za7,
		BGl_z62patchz12zd2kwote1629za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2kw2444za7,
		BGl_z62patchz12zd2kwotezf2node1631z50zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2383z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2va2445za7,
		BGl_z62patchz12zd2var1633za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2384z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2cl2446za7,
		BGl_z62patchz12zd2closure1635za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2385z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2se2447za7,
		BGl_z62patchz12zd2sequence1637za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2sy2448za7,
		BGl_z62patchz12zd2sync1639za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2387z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ap2449za7,
		BGl_z62patchz12zd2appzd2ly1641z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2fu2450za7,
		BGl_z62patchz12zd2funcall1643za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2389z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ex2451za7,
		BGl_z62patchz12zd2extern1645za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2390z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ca2452za7,
		BGl_z62patchz12zd2cast1647za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2391z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2se2453za7,
		BGl_z62patchz12zd2setq1649za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2392z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2co2454za7,
		BGl_z62patchz12zd2conditional1651za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2393z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2fa2455za7,
		BGl_z62patchz12zd2fail1653za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2sw2456za7,
		BGl_z62patchz12zd2switch1655za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2395z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2le2457za7,
		BGl_z62patchz12zd2letzd2fun1657z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2396z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2le2458za7,
		BGl_z62patchz12zd2letzd2var1659z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2397z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2se2459za7,
		BGl_z62patchz12zd2setzd2exzd2it1661za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2398z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ju2460za7,
		BGl_z62patchz12zd2jumpzd2exzd2it1663za2zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2399z00zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za7d2ma2461za7,
		BGl_z62patchz12zd2makezd2box1665z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
		BgL_bgl_za762getza7d2vectorza72462za7,
		BGl_z62getzd2vectorzd2itemzd2typezb0zzcfa_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
		BgL_bgl_za762patchza712za770za7za72463za7,
		BGl_z62patchz12z70zzcfa_tvectorz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_tvectorz00));
		   
			 ADD_ROOT((void *) (&BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long
		BgL_checksumz00_5325, char *BgL_fromz00_5326)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_tvectorz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_tvectorz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00();
					BGl_cnstzd2initzd2zzcfa_tvectorz00();
					BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00();
					BGl_genericzd2initzd2zzcfa_tvectorz00();
					BGl_methodzd2initzd2zzcfa_tvectorz00();
					return BGl_toplevelzd2initzd2zzcfa_tvectorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cfa_tvector");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cfa_tvector");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			{	/* Cfa/tvector.scm 15 */
				obj_t BgL_cportz00_5092;

				{	/* Cfa/tvector.scm 15 */
					obj_t BgL_stringz00_5100;

					BgL_stringz00_5100 = BGl_string2410z00zzcfa_tvectorz00;
					{	/* Cfa/tvector.scm 15 */
						obj_t BgL_startz00_5101;

						BgL_startz00_5101 = BINT(((long) 0));
						{	/* Cfa/tvector.scm 15 */
							obj_t BgL_endz00_5102;

							BgL_endz00_5102 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5100)));
							{	/* Cfa/tvector.scm 15 */

								BgL_cportz00_5092 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5100, BgL_startz00_5101, BgL_endz00_5102);
				}}}}
				{
					long BgL_iz00_5093;

					BgL_iz00_5093 = ((long) 22);
				BgL_loopz00_5094:
					if ((BgL_iz00_5093 == ((long) -1)))
						{	/* Cfa/tvector.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/tvector.scm 15 */
							{	/* Cfa/tvector.scm 15 */
								obj_t BgL_arg2412z00_5096;

								{	/* Cfa/tvector.scm 15 */

									{	/* Cfa/tvector.scm 15 */
										obj_t BgL_locationz00_5098;

										BgL_locationz00_5098 = BBOOL(((bool_t) 0));
										{	/* Cfa/tvector.scm 15 */

											BgL_arg2412z00_5096 =
												BGl_readz00zz__readerz00(BgL_cportz00_5092,
												BgL_locationz00_5098);
										}
									}
								}
								{	/* Cfa/tvector.scm 15 */
									int BgL_tmpz00_5360;

									BgL_tmpz00_5360 = (int) (BgL_iz00_5093);
									CNST_TABLE_SET(BgL_tmpz00_5360, BgL_arg2412z00_5096);
							}}
							{	/* Cfa/tvector.scm 15 */
								int BgL_auxz00_5099;

								BgL_auxz00_5099 = (int) ((BgL_iz00_5093 - ((long) 1)));
								{
									long BgL_iz00_5365;

									BgL_iz00_5365 = (long) (BgL_auxz00_5099);
									BgL_iz00_5093 = BgL_iz00_5365;
									goto BgL_loopz00_5094;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 = BNIL;
			return BUNSPEC;
		}

	}



/* tvector-optimization? */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 61 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 3)))
				{	/* Cfa/tvector.scm 62 */
					if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
						{	/* Cfa/tvector.scm 62 */
							return BFALSE;
						}
					else
						{	/* Cfa/tvector.scm 62 */
							return BTRUE;
						}
				}
			else
				{	/* Cfa/tvector.scm 62 */
					return BFALSE;
				}
		}

	}



/* &tvector-optimization? */
	obj_t BGl_z62tvectorzd2optimiza7ationzf3ze4zzcfa_tvectorz00(obj_t
		BgL_envz00_4983)
	{
		{	/* Cfa/tvector.scm 61 */
			return BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
		}

	}



/* patch-vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 70 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 71 */
					{	/* Cfa/tvector.scm 72 */
						obj_t BgL_g1595z00_3468;

						BgL_g1595z00_3468 = CNST_TABLE_REF(((long) 0));
						{
							obj_t BgL_l1593z00_3470;

							BgL_l1593z00_3470 = BgL_g1595z00_3468;
						BgL_zc3z04anonymousza31729ze3z87_3471:
							if (PAIRP(BgL_l1593z00_3470))
								{	/* Cfa/tvector.scm 83 */
									{	/* Cfa/tvector.scm 73 */
										obj_t BgL_setz00_3473;

										BgL_setz00_3473 = CAR(BgL_l1593z00_3470);
										{	/* Cfa/tvector.scm 73 */
											obj_t BgL_gz00_3474;

											BgL_gz00_3474 =
												BGl_findzd2globalzd2zzast_envz00(BgL_setz00_3473, BNIL);
											if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3474,
													BGl_globalz00zzast_varz00))
												{	/* Cfa/tvector.scm 75 */
													BgL_valuez00_bglt BgL_funz00_3476;

													BgL_funz00_3476 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_gz00_3474))))->
														BgL_valuez00);
													{	/* Cfa/tvector.scm 77 */
														bool_t BgL_test2471z00_5387;

														{	/* Cfa/tvector.scm 77 */
															bool_t BgL_res2277z00_4610;

															BgL_res2277z00_4610 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_funz00_3476),
																BGl_cfunz00zzast_varz00);
															BgL_test2471z00_5387 = BgL_res2277z00_4610;
														}
														if (BgL_test2471z00_5387)
															{	/* Cfa/tvector.scm 78 */
																obj_t BgL_arg1733z00_3478;
																BgL_typez00_bglt BgL_arg1738z00_3479;

																{	/* Cfa/tvector.scm 78 */
																	obj_t BgL_pairz00_4612;

																	BgL_pairz00_4612 =
																		(((BgL_cfunz00_bglt) COBJECT(
																				((BgL_cfunz00_bglt) BgL_funz00_3476)))->
																		BgL_argszd2typezd2);
																	BgL_arg1733z00_3478 =
																		CDR(CDR(BgL_pairz00_4612));
																}
																BgL_arg1738z00_3479 =
																	BGl_getzd2defaultzd2typez00zztype_cachez00();
																{	/* Cfa/tvector.scm 78 */
																	obj_t BgL_auxz00_5397;
																	obj_t BgL_tmpz00_5395;

																	BgL_auxz00_5397 =
																		((obj_t) BgL_arg1738z00_3479);
																	BgL_tmpz00_5395 =
																		((obj_t) BgL_arg1733z00_3478);
																	SET_CAR(BgL_tmpz00_5395, BgL_auxz00_5397);
																}
															}
														else
															{	/* Cfa/tvector.scm 80 */
																bool_t BgL_test2472z00_5400;

																{	/* Cfa/tvector.scm 80 */
																	bool_t BgL_res2278z00_4617;

																	BgL_res2278z00_4617 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_funz00_3476),
																		BGl_sfunz00zzast_varz00);
																	BgL_test2472z00_5400 = BgL_res2278z00_4617;
																}
																if (BgL_test2472z00_5400)
																	{	/* Cfa/tvector.scm 81 */
																		obj_t BgL_arg1741z00_3482;
																		BgL_typez00_bglt BgL_arg1742z00_3483;

																		{	/* Cfa/tvector.scm 81 */
																			obj_t BgL_pairz00_4619;

																			BgL_pairz00_4619 =
																				(((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							BgL_funz00_3476)))->BgL_argsz00);
																			BgL_arg1741z00_3482 =
																				CAR(CDR(CDR(BgL_pairz00_4619)));
																		}
																		BgL_arg1742z00_3483 =
																			BGl_getzd2defaultzd2typez00zztype_cachez00
																			();
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt) (
																								(BgL_localz00_bglt)
																								BgL_arg1741z00_3482))))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_arg1742z00_3483),
																			BUNSPEC);
																	}
																else
																	{	/* Cfa/tvector.scm 80 */
																		BFALSE;
																	}
															}
													}
												}
											else
												{	/* Cfa/tvector.scm 74 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1593z00_5412;

										BgL_l1593z00_5412 = CDR(BgL_l1593z00_3470);
										BgL_l1593z00_3470 = BgL_l1593z00_5412;
										goto BgL_zc3z04anonymousza31729ze3z87_3471;
									}
								}
							else
								{	/* Cfa/tvector.scm 83 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 85 */
						obj_t BgL_gz00_3488;

						BgL_gz00_3488 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3488,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 87 */
								BgL_valuez00_bglt BgL_fz00_3490;

								BgL_fz00_3490 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3488))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 88 */
									obj_t BgL_arg1747z00_3491;
									BgL_typez00_bglt BgL_arg1754z00_3492;

									BgL_arg1747z00_3491 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3490)))->
										BgL_argszd2typezd2);
									BgL_arg1754z00_3492 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{	/* Cfa/tvector.scm 88 */
										obj_t BgL_auxz00_5426;
										obj_t BgL_tmpz00_5424;

										BgL_auxz00_5426 = ((obj_t) BgL_arg1754z00_3492);
										BgL_tmpz00_5424 = ((obj_t) BgL_arg1747z00_3491);
										SET_CAR(BgL_tmpz00_5424, BgL_auxz00_5426);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 86 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 89 */
						obj_t BgL_gz00_3494;

						BgL_gz00_3494 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3494,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 91 */
								BgL_valuez00_bglt BgL_fz00_3496;

								BgL_fz00_3496 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3494))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 92 */
									obj_t BgL_arg1759z00_3497;
									BgL_typez00_bglt BgL_arg1760z00_3498;

									BgL_arg1759z00_3497 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3496)))->
										BgL_argszd2typezd2);
									BgL_arg1760z00_3498 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									{	/* Cfa/tvector.scm 92 */
										obj_t BgL_auxz00_5441;
										obj_t BgL_tmpz00_5439;

										BgL_auxz00_5441 = ((obj_t) BgL_arg1760z00_3498);
										BgL_tmpz00_5439 = ((obj_t) BgL_arg1759z00_3497);
										SET_CAR(BgL_tmpz00_5439, BgL_auxz00_5441);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 90 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 93 */
						obj_t BgL_gz00_3500;

						BgL_gz00_3500 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3500,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 95 */
								BgL_valuez00_bglt BgL_fz00_3502;

								BgL_fz00_3502 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3500))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 96 */
									obj_t BgL_arg1768z00_3503;
									BgL_typez00_bglt BgL_arg1771z00_3504;

									{	/* Cfa/tvector.scm 96 */
										obj_t BgL_pairz00_4639;

										BgL_pairz00_4639 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_3502)))->BgL_argsz00);
										BgL_arg1768z00_3503 = CAR(BgL_pairz00_4639);
									}
									BgL_arg1771z00_3504 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									return
										((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_arg1768z00_3503))))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_arg1771z00_3504), BUNSPEC);
								}
							}
						else
							{	/* Cfa/tvector.scm 94 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Cfa/tvector.scm 71 */
					return BFALSE;
				}
		}

	}



/* &patch-vector-set! */
	obj_t BGl_z62patchzd2vectorzd2setz12z70zzcfa_tvectorz00(obj_t BgL_envz00_4984)
	{
		{	/* Cfa/tvector.scm 70 */
			return BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
		}

	}



/* unpatch-vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 101 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 102 */
					{	/* Cfa/tvector.scm 104 */
						obj_t BgL_g1598z00_3508;

						BgL_g1598z00_3508 = CNST_TABLE_REF(((long) 4));
						{
							obj_t BgL_l1596z00_3510;

							BgL_l1596z00_3510 = BgL_g1598z00_3508;
						BgL_zc3z04anonymousza31778ze3z87_3511:
							if (PAIRP(BgL_l1596z00_3510))
								{	/* Cfa/tvector.scm 115 */
									{	/* Cfa/tvector.scm 105 */
										obj_t BgL_setz00_3513;

										BgL_setz00_3513 = CAR(BgL_l1596z00_3510);
										{	/* Cfa/tvector.scm 105 */
											obj_t BgL_gz00_3514;

											BgL_gz00_3514 =
												BGl_findzd2globalzd2zzast_envz00(BgL_setz00_3513, BNIL);
											if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3514,
													BGl_globalz00zzast_varz00))
												{	/* Cfa/tvector.scm 107 */
													BgL_valuez00_bglt BgL_funz00_3516;

													BgL_funz00_3516 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_gz00_3514))))->
														BgL_valuez00);
													{	/* Cfa/tvector.scm 109 */
														bool_t BgL_test2479z00_5472;

														{	/* Cfa/tvector.scm 109 */
															bool_t BgL_res2284z00_4646;

															BgL_res2284z00_4646 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_funz00_3516),
																BGl_cfunz00zzast_varz00);
															BgL_test2479z00_5472 = BgL_res2284z00_4646;
														}
														if (BgL_test2479z00_5472)
															{	/* Cfa/tvector.scm 110 */
																obj_t BgL_arg1784z00_3518;

																{	/* Cfa/tvector.scm 110 */
																	obj_t BgL_pairz00_4648;

																	BgL_pairz00_4648 =
																		(((BgL_cfunz00_bglt) COBJECT(
																				((BgL_cfunz00_bglt) BgL_funz00_3516)))->
																		BgL_argszd2typezd2);
																	BgL_arg1784z00_3518 =
																		CDR(CDR(BgL_pairz00_4648));
																}
																{	/* Cfa/tvector.scm 110 */
																	obj_t BgL_objz00_4653;

																	BgL_objz00_4653 =
																		BGl_za2objza2z00zztype_cachez00;
																	{	/* Cfa/tvector.scm 110 */
																		obj_t BgL_tmpz00_5479;

																		BgL_tmpz00_5479 =
																			((obj_t) BgL_arg1784z00_3518);
																		SET_CAR(BgL_tmpz00_5479, BgL_objz00_4653);
																	}
																}
															}
														else
															{	/* Cfa/tvector.scm 112 */
																bool_t BgL_test2480z00_5482;

																{	/* Cfa/tvector.scm 112 */
																	bool_t BgL_res2285z00_4654;

																	BgL_res2285z00_4654 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_funz00_3516),
																		BGl_sfunz00zzast_varz00);
																	BgL_test2480z00_5482 = BgL_res2285z00_4654;
																}
																if (BgL_test2480z00_5482)
																	{	/* Cfa/tvector.scm 113 */
																		obj_t BgL_arg1796z00_3521;

																		{	/* Cfa/tvector.scm 113 */
																			obj_t BgL_pairz00_4656;

																			BgL_pairz00_4656 =
																				(((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							BgL_funz00_3516)))->BgL_argsz00);
																			BgL_arg1796z00_3521 =
																				CAR(CDR(CDR(BgL_pairz00_4656)));
																		}
																		{	/* Cfa/tvector.scm 113 */
																			BgL_typez00_bglt BgL_vz00_4663;

																			BgL_vz00_4663 =
																				((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00);
																			((((BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt) (
																									(BgL_localz00_bglt)
																									BgL_arg1796z00_3521))))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_4663),
																				BUNSPEC);
																		}
																	}
																else
																	{	/* Cfa/tvector.scm 112 */
																		BFALSE;
																	}
															}
													}
												}
											else
												{	/* Cfa/tvector.scm 106 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1596z00_5494;

										BgL_l1596z00_5494 = CDR(BgL_l1596z00_3510);
										BgL_l1596z00_3510 = BgL_l1596z00_5494;
										goto BgL_zc3z04anonymousza31778ze3z87_3511;
									}
								}
							else
								{	/* Cfa/tvector.scm 115 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/tvector.scm 116 */
						obj_t BgL_gz00_3526;

						BgL_gz00_3526 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3526,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 118 */
								BgL_valuez00_bglt BgL_fz00_3528;

								BgL_fz00_3528 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3526))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 119 */
									obj_t BgL_arg1808z00_3529;

									BgL_arg1808z00_3529 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3528)))->
										BgL_argszd2typezd2);
									{	/* Cfa/tvector.scm 119 */
										obj_t BgL_objz00_4669;

										BgL_objz00_4669 = BGl_za2objza2z00zztype_cachez00;
										{	/* Cfa/tvector.scm 119 */
											obj_t BgL_tmpz00_5505;

											BgL_tmpz00_5505 = ((obj_t) BgL_arg1808z00_3529);
											SET_CAR(BgL_tmpz00_5505, BgL_objz00_4669);
										}
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 117 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 120 */
						obj_t BgL_gz00_3531;

						BgL_gz00_3531 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3531,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 122 */
								BgL_valuez00_bglt BgL_fz00_3533;

								BgL_fz00_3533 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3531))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 123 */
									obj_t BgL_arg1811z00_3534;

									BgL_arg1811z00_3534 =
										(((BgL_cfunz00_bglt) COBJECT(
												((BgL_cfunz00_bglt) BgL_fz00_3533)))->
										BgL_argszd2typezd2);
									{	/* Cfa/tvector.scm 123 */
										obj_t BgL_objz00_4674;

										BgL_objz00_4674 = BGl_za2objza2z00zztype_cachez00;
										{	/* Cfa/tvector.scm 123 */
											obj_t BgL_tmpz00_5517;

											BgL_tmpz00_5517 = ((obj_t) BgL_arg1811z00_3534);
											SET_CAR(BgL_tmpz00_5517, BgL_objz00_4674);
										}
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 121 */
								BFALSE;
							}
					}
					{	/* Cfa/tvector.scm 124 */
						obj_t BgL_gz00_3536;

						BgL_gz00_3536 =
							BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
							BNIL);
						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_3536,
								BGl_globalz00zzast_varz00))
							{	/* Cfa/tvector.scm 126 */
								BgL_valuez00_bglt BgL_fz00_3538;

								BgL_fz00_3538 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_3536))))->BgL_valuez00);
								{	/* Cfa/tvector.scm 127 */
									obj_t BgL_arg1820z00_3539;

									{	/* Cfa/tvector.scm 127 */
										obj_t BgL_pairz00_4678;

										BgL_pairz00_4678 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_3538)))->BgL_argsz00);
										BgL_arg1820z00_3539 = CAR(BgL_pairz00_4678);
									}
									{	/* Cfa/tvector.scm 127 */
										BgL_typez00_bglt BgL_vz00_4680;

										BgL_vz00_4680 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										return
											((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_arg1820z00_3539))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_4680), BUNSPEC);
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 125 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Cfa/tvector.scm 102 */
					return BUNSPEC;
				}
		}

	}



/* &unpatch-vector-set! */
	obj_t BGl_z62unpatchzd2vectorzd2setz12z70zzcfa_tvectorz00(obj_t
		BgL_envz00_4985)
	{
		{	/* Cfa/tvector.scm 101 */
			return BGl_unpatchzd2vectorzd2setz12z12zzcfa_tvectorz00();
		}

	}



/* vector->tvector! */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t
		BgL_globalsz00_35)
	{
		{	/* Cfa/tvector.scm 133 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 134 */
					BGl_inlinezd2setupz12zc0zzinline_walkz00(CNST_TABLE_REF(((long) 5)));
					{	/* Cfa/tvector.scm 143 */
						obj_t BgL_vectorsz00_3543;

						BgL_vectorsz00_3543 = BGl_getzd2tvectorszd2zzcfa_tvectorz00();
						{	/* Cfa/tvector.scm 144 */
							obj_t BgL_tvectorsz00_3544;

							{	/* Cfa/tvector.scm 148 */
								int BgL_tmpz00_5541;

								BgL_tmpz00_5541 = (int) (((long) 1));
								BgL_tvectorsz00_3544 = BGL_MVALUES_VAL(BgL_tmpz00_5541);
							}
							{
								obj_t BgL_l1599z00_3546;

								BgL_l1599z00_3546 = BgL_vectorsz00_3543;
							BgL_zc3z04anonymousza31824ze3z87_3547:
								if (PAIRP(BgL_l1599z00_3546))
									{	/* Cfa/tvector.scm 145 */
										{	/* Cfa/tvector.scm 146 */
											obj_t BgL_vz00_3549;

											BgL_vz00_3549 = CAR(BgL_l1599z00_3546);
											{	/* Cfa/tvector.scm 146 */
												bool_t BgL_test2486z00_5547;

												{	/* Cfa/tvector.scm 146 */
													BgL_typez00_bglt BgL_arg1828z00_3552;

													BgL_arg1828z00_3552 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_vz00_3549)))->
														BgL_typez00);
													BgL_test2486z00_5547 =
														(((obj_t) BgL_arg1828z00_3552) ==
														BGl_za2_za2z00zztype_cachez00);
												}
												if (BgL_test2486z00_5547)
													{	/* Cfa/tvector.scm 147 */
														BgL_typez00_bglt BgL_vz00_4685;

														BgL_vz00_4685 =
															((BgL_typez00_bglt)
															BGl_za2vectorza2z00zztype_cachez00);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_vz00_3549)))->BgL_typez00) =
															((BgL_typez00_bglt) BgL_vz00_4685), BUNSPEC);
													}
												else
													{	/* Cfa/tvector.scm 146 */
														BFALSE;
													}
											}
										}
										{
											obj_t BgL_l1599z00_5555;

											BgL_l1599z00_5555 = CDR(BgL_l1599z00_3546);
											BgL_l1599z00_3546 = BgL_l1599z00_5555;
											goto BgL_zc3z04anonymousza31824ze3z87_3547;
										}
									}
								else
									{	/* Cfa/tvector.scm 145 */
										((bool_t) 1);
									}
							}
							BGl_showzd2tvectorzd2zzcfa_tvectorz00(BgL_tvectorsz00_3544);
							if (PAIRP(BgL_tvectorsz00_3544))
								{	/* Cfa/tvector.scm 152 */
									obj_t BgL_addzd2treezd2_3556;

									BgL_addzd2treezd2_3556 =
										BGl_declarezd2tvectorszd2zzcfa_tvectorz00
										(BgL_tvectorsz00_3544);
									BGl_patchzd2treez12zc0zzcfa_tvectorz00(BgL_globalsz00_35);
									BGl_lvtypezd2astz12zc0zzast_lvtypez00(BgL_addzd2treezd2_3556);
									return BgL_addzd2treezd2_3556;
								}
							else
								{	/* Cfa/tvector.scm 151 */
									BGl_patchzd2treez12zc0zzcfa_tvectorz00(BgL_globalsz00_35);
									return BNIL;
								}
						}
					}
				}
			else
				{	/* Cfa/tvector.scm 134 */
					return BNIL;
				}
		}

	}



/* &vector->tvector! */
	obj_t BGl_z62vectorzd2ze3tvectorz12z41zzcfa_tvectorz00(obj_t BgL_envz00_4986,
		obj_t BgL_globalsz00_4987)
	{
		{	/* Cfa/tvector.scm 133 */
			return BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(BgL_globalsz00_4987);
		}

	}



/* add-make-vector! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_36)
	{
		{	/* Cfa/tvector.scm 171 */
			if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
				{	/* Cfa/tvector.scm 172 */
					return (BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00 =
						MAKE_YOUNG_PAIR(
							((obj_t) BgL_nodez00_36),
							BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00), BUNSPEC);
				}
			else
				{	/* Cfa/tvector.scm 172 */
					return BFALSE;
				}
		}

	}



/* &add-make-vector! */
	obj_t BGl_z62addzd2makezd2vectorz12z70zzcfa_tvectorz00(obj_t BgL_envz00_4988,
		obj_t BgL_nodez00_4989)
	{
		{	/* Cfa/tvector.scm 171 */
			return
				BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
				((BgL_nodez00_bglt) BgL_nodez00_4989));
		}

	}



/* get-tvectors */
	obj_t BGl_getzd2tvectorszd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 181 */
			{
				obj_t BgL_appsz00_3561;
				obj_t BgL_vectorsz00_3562;
				obj_t BgL_tvectorsz00_3563;

				BgL_appsz00_3561 = BGl_za2makezd2vectorzd2listza2z00zzcfa_tvectorz00;
				BgL_vectorsz00_3562 = BNIL;
				BgL_tvectorsz00_3563 = BNIL;
			BgL_zc3z04anonymousza31832ze3z87_3564:
				if (NULLP(BgL_appsz00_3561))
					{	/* Cfa/tvector.scm 185 */
						{	/* Cfa/tvector.scm 186 */
							int BgL_res2292z00_4689;

							{	/* Cfa/tvector.scm 186 */
								int BgL_tmpz00_5574;

								BgL_tmpz00_5574 = (int) (((long) 2));
								BgL_res2292z00_4689 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5574);
							} BgL_res2292z00_4689;
						}
						{	/* Cfa/tvector.scm 186 */
							int BgL_tmpz00_5577;

							BgL_tmpz00_5577 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_5577, BgL_tvectorsz00_3563);
						}
						return BgL_vectorsz00_3562;
					}
				else
					{	/* Cfa/tvector.scm 187 */
						obj_t BgL_appz00_3568;

						BgL_appz00_3568 = CAR(((obj_t) BgL_appsz00_3561));
						{	/* Cfa/tvector.scm 187 */
							BgL_typez00_bglt BgL_typez00_3569;

							BgL_typez00_3569 =
								BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
								((BgL_nodez00_bglt) BgL_appz00_3568));
							{	/* Cfa/tvector.scm 188 */

								{	/* Cfa/tvector.scm 192 */
									bool_t BgL_test2490z00_5584;

									if (
										(((obj_t) BgL_typez00_3569) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/tvector.scm 192 */
											BgL_test2490z00_5584 = ((bool_t) 0);
										}
									else
										{	/* Cfa/tvector.scm 192 */
											if (BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_3569,
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00)))
												{	/* Cfa/tvector.scm 192 */
													BgL_test2490z00_5584 = ((bool_t) 0);
												}
											else
												{	/* Cfa/tvector.scm 192 */
													BgL_test2490z00_5584 = ((bool_t) 1);
												}
										}
									if (BgL_test2490z00_5584)
										{	/* Cfa/tvector.scm 193 */
											obj_t BgL_arg1838z00_3573;
											obj_t BgL_arg1840z00_3574;

											BgL_arg1838z00_3573 = CDR(((obj_t) BgL_appsz00_3561));
											BgL_arg1840z00_3574 =
												MAKE_YOUNG_PAIR(BgL_appz00_3568, BgL_tvectorsz00_3563);
											{
												obj_t BgL_tvectorsz00_5595;
												obj_t BgL_appsz00_5594;

												BgL_appsz00_5594 = BgL_arg1838z00_3573;
												BgL_tvectorsz00_5595 = BgL_arg1840z00_3574;
												BgL_tvectorsz00_3563 = BgL_tvectorsz00_5595;
												BgL_appsz00_3561 = BgL_appsz00_5594;
												goto BgL_zc3z04anonymousza31832ze3z87_3564;
											}
										}
									else
										{	/* Cfa/tvector.scm 194 */
											obj_t BgL_arg1841z00_3575;
											obj_t BgL_arg1842z00_3576;

											BgL_arg1841z00_3575 = CDR(((obj_t) BgL_appsz00_3561));
											BgL_arg1842z00_3576 =
												MAKE_YOUNG_PAIR(BgL_appz00_3568, BgL_vectorsz00_3562);
											{
												obj_t BgL_vectorsz00_5600;
												obj_t BgL_appsz00_5599;

												BgL_appsz00_5599 = BgL_arg1841z00_3575;
												BgL_vectorsz00_5600 = BgL_arg1842z00_3576;
												BgL_vectorsz00_3562 = BgL_vectorsz00_5600;
												BgL_appsz00_3561 = BgL_appsz00_5599;
												goto BgL_zc3z04anonymousza31832ze3z87_3564;
											}
										}
								}
							}
						}
					}
			}
		}

	}



/* show-tvector */
	bool_t BGl_showzd2tvectorzd2zzcfa_tvectorz00(obj_t BgL_tvectorz00_40)
	{
		{	/* Cfa/tvector.scm 222 */
			{	/* Cfa/tvector.scm 223 */
				obj_t BgL_list1843z00_3580;

				{	/* Cfa/tvector.scm 223 */
					obj_t BgL_arg1845z00_3581;

					BgL_arg1845z00_3581 =
						MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
					BgL_list1843z00_3580 =
						MAKE_YOUNG_PAIR(BGl_string2368z00zzcfa_tvectorz00,
						BgL_arg1845z00_3581);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1843z00_3580);
			}
			{
				obj_t BgL_l1603z00_3583;

				BgL_l1603z00_3583 = BgL_tvectorz00_40;
			BgL_zc3z04anonymousza31846ze3z87_3584:
				if (PAIRP(BgL_l1603z00_3583))
					{	/* Cfa/tvector.scm 224 */
						{	/* Cfa/tvector.scm 225 */
							obj_t BgL_appz00_3586;

							BgL_appz00_3586 = CAR(BgL_l1603z00_3583);
							{	/* Cfa/tvector.scm 226 */
								obj_t BgL_arg1848z00_3587;
								obj_t BgL_arg1850z00_3588;

								BgL_arg1848z00_3587 =
									BGl_shapez00zztools_shapez00(BGl_za2objza2z00zztype_cachez00);
								{	/* Cfa/tvector.scm 228 */
									BgL_typez00_bglt BgL_arg1857z00_3594;

									BgL_arg1857z00_3594 =
										BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
										((BgL_nodez00_bglt) BgL_appz00_3586));
									BgL_arg1850z00_3588 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1857z00_3594));
								}
								{	/* Cfa/tvector.scm 225 */
									obj_t BgL_list1851z00_3589;

									{	/* Cfa/tvector.scm 225 */
										obj_t BgL_arg1852z00_3590;

										{	/* Cfa/tvector.scm 225 */
											obj_t BgL_arg1853z00_3591;

											{	/* Cfa/tvector.scm 225 */
												obj_t BgL_arg1855z00_3592;

												{	/* Cfa/tvector.scm 225 */
													obj_t BgL_arg1856z00_3593;

													BgL_arg1856z00_3593 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
													BgL_arg1855z00_3592 =
														MAKE_YOUNG_PAIR(BgL_arg1850z00_3588,
														BgL_arg1856z00_3593);
												}
												BgL_arg1853z00_3591 =
													MAKE_YOUNG_PAIR(BGl_string2369z00zzcfa_tvectorz00,
													BgL_arg1855z00_3592);
											}
											BgL_arg1852z00_3590 =
												MAKE_YOUNG_PAIR(BgL_arg1848z00_3587,
												BgL_arg1853z00_3591);
										}
										BgL_list1851z00_3589 =
											MAKE_YOUNG_PAIR(BGl_string2370z00zzcfa_tvectorz00,
											BgL_arg1852z00_3590);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1851z00_3589);
						}}}
						{
							obj_t BgL_l1603z00_5622;

							BgL_l1603z00_5622 = CDR(BgL_l1603z00_3583);
							BgL_l1603z00_3583 = BgL_l1603z00_5622;
							goto BgL_zc3z04anonymousza31846ze3z87_3584;
						}
					}
				else
					{	/* Cfa/tvector.scm 224 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* declare-tvectors */
	obj_t BGl_declarezd2tvectorszd2zzcfa_tvectorz00(obj_t BgL_tvectorz00_41)
	{
		{	/* Cfa/tvector.scm 235 */
			{
				obj_t BgL_l1605z00_3598;

				BgL_l1605z00_3598 = BgL_tvectorz00_41;
			BgL_zc3z04anonymousza31859ze3z87_3599:
				if (PAIRP(BgL_l1605z00_3598))
					{	/* Cfa/tvector.scm 237 */
						{	/* Cfa/tvector.scm 238 */
							obj_t BgL_appz00_3601;

							BgL_appz00_3601 = CAR(BgL_l1605z00_3598);
							{	/* Cfa/tvector.scm 238 */
								BgL_typez00_bglt BgL_typez00_3602;

								BgL_typez00_3602 =
									BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
									((BgL_nodez00_bglt) BgL_appz00_3601));
								{	/* Cfa/tvector.scm 240 */
									bool_t BgL_test2495z00_5629;

									{	/* Cfa/tvector.scm 240 */
										obj_t BgL_arg1871z00_3612;

										BgL_arg1871z00_3612 =
											(((BgL_typez00_bglt) COBJECT(BgL_typez00_3602))->
											BgL_tvectorz00);
										BgL_test2495z00_5629 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1871z00_3612,
											BGl_typez00zztype_typez00);
									}
									if (BgL_test2495z00_5629)
										{	/* Cfa/tvector.scm 240 */
											BFALSE;
										}
									else
										{	/* Cfa/tvector.scm 241 */
											obj_t BgL_tvzd2idzd2_3606;

											{	/* Cfa/tvector.scm 241 */
												obj_t BgL_arg1865z00_3608;

												{	/* Cfa/tvector.scm 241 */
													obj_t BgL_arg1866z00_3609;
													obj_t BgL_arg1868z00_3610;

													{	/* Cfa/tvector.scm 241 */
														obj_t BgL_res2296z00_4701;

														{	/* Cfa/tvector.scm 241 */
															obj_t BgL_symbolz00_4699;

															BgL_symbolz00_4699 = CNST_TABLE_REF(((long) 6));
															{	/* Cfa/tvector.scm 241 */
																obj_t BgL_arg1466z00_4700;

																BgL_arg1466z00_4700 =
																	SYMBOL_TO_STRING(BgL_symbolz00_4699);
																BgL_res2296z00_4701 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_4700);
														}}
														BgL_arg1866z00_3609 = BgL_res2296z00_4701;
													}
													{	/* Cfa/tvector.scm 241 */
														obj_t BgL_arg1870z00_3611;

														BgL_arg1870z00_3611 =
															(((BgL_typez00_bglt) COBJECT(BgL_typez00_3602))->
															BgL_idz00);
														{	/* Cfa/tvector.scm 241 */
															obj_t BgL_res2297z00_4704;

															{	/* Cfa/tvector.scm 241 */
																obj_t BgL_arg1466z00_4703;

																BgL_arg1466z00_4703 =
																	SYMBOL_TO_STRING(BgL_arg1870z00_3611);
																BgL_res2297z00_4704 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_4703);
															}
															BgL_arg1868z00_3610 = BgL_res2297z00_4704;
													}}
													BgL_arg1865z00_3608 =
														string_append(BgL_arg1866z00_3609,
														BgL_arg1868z00_3610);
												}
												BgL_tvzd2idzd2_3606 =
													bstring_to_symbol(BgL_arg1865z00_3608);
											}
											{
												obj_t BgL_auxz00_5640;

												{	/* Cfa/tvector.scm 243 */
													obj_t BgL_arg1863z00_3607;

													BgL_arg1863z00_3607 =
														(((BgL_typez00_bglt) COBJECT(BgL_typez00_3602))->
														BgL_idz00);
													BgL_auxz00_5640 =
														BGl_modulezd2tvectorzd2clausez00zzmodule_typez00
														(BgL_tvzd2idzd2_3606, BgL_arg1863z00_3607,
														CNST_TABLE_REF(((long) 7)), BFALSE);
												}
												((((BgL_typez00_bglt) COBJECT(BgL_typez00_3602))->
														BgL_tvectorz00) =
													((obj_t) BgL_auxz00_5640), BUNSPEC);
						}}}}}
						{
							obj_t BgL_l1605z00_5645;

							BgL_l1605z00_5645 = CDR(BgL_l1605z00_3598);
							BgL_l1605z00_3598 = BgL_l1605z00_5645;
							goto BgL_zc3z04anonymousza31859ze3z87_3599;
						}
					}
				else
					{	/* Cfa/tvector.scm 237 */
						((bool_t) 1);
					}
			}
			{	/* Cfa/tvector.scm 246 */
				BgL_typez00_bglt BgL_oldzd2defaultzd2typez00_3615;

				BgL_oldzd2defaultzd2typez00_3615 =
					BGl_getzd2defaultzd2typez00zztype_cachez00();
				BGl_setzd2defaultzd2typez12z12zztype_cachez00(
					((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
				{	/* Cfa/tvector.scm 248 */
					obj_t BgL_tvectorzd2unitzd2_3616;

					BgL_tvectorzd2unitzd2_3616 =
						BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
					BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
					{	/* Cfa/tvector.scm 250 */
						obj_t BgL_resz00_3617;

						{	/* Cfa/tvector.scm 250 */
							bool_t BgL_test2496z00_5652;

							if (STRUCTP(BgL_tvectorzd2unitzd2_3616))
								{	/* Cfa/tvector.scm 250 */
									BgL_test2496z00_5652 =
										(STRUCT_KEY(BgL_tvectorzd2unitzd2_3616) ==
										CNST_TABLE_REF(((long) 8)));
								}
							else
								{	/* Cfa/tvector.scm 250 */
									BgL_test2496z00_5652 = ((bool_t) 0);
								}
							if (BgL_test2496z00_5652)
								{	/* Cfa/tvector.scm 251 */
									obj_t BgL_astz00_3619;

									{	/* Cfa/tvector.scm 251 */
										obj_t BgL_arg1874z00_3620;

										{	/* Cfa/tvector.scm 251 */
											obj_t BgL_list1875z00_3621;

											BgL_list1875z00_3621 =
												MAKE_YOUNG_PAIR(BgL_tvectorzd2unitzd2_3616, BNIL);
											BgL_arg1874z00_3620 = BgL_list1875z00_3621;
										}
										BgL_astz00_3619 =
											BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00
											(BgL_arg1874z00_3620);
									}
									BgL_resz00_3617 =
										BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7
										(BgL_astz00_3619, CNST_TABLE_REF(((long) 9)));
								}
							else
								{	/* Cfa/tvector.scm 250 */
									BgL_resz00_3617 = BNIL;
								}
						}
						BGl_lvtypezd2astz12zc0zzast_lvtypez00(BgL_resz00_3617);
						BGl_setzd2defaultzd2typez12z12zztype_cachez00
							(BgL_oldzd2defaultzd2typez00_3615);
						return BgL_resz00_3617;
					}
				}
			}
		}

	}



/* patch-tree! */
	bool_t BGl_patchzd2treez12zc0zzcfa_tvectorz00(obj_t BgL_globalsz00_42)
	{
		{	/* Cfa/tvector.scm 265 */
			{
				obj_t BgL_l1607z00_3623;

				BgL_l1607z00_3623 = BgL_globalsz00_42;
			BgL_zc3z04anonymousza31876ze3z87_3624:
				if (PAIRP(BgL_l1607z00_3623))
					{	/* Cfa/tvector.scm 266 */
						BGl_patchzd2funz12zc0zzcfa_tvectorz00(CAR(BgL_l1607z00_3623));
						{
							obj_t BgL_l1607z00_5668;

							BgL_l1607z00_5668 = CDR(BgL_l1607z00_3623);
							BgL_l1607z00_3623 = BgL_l1607z00_5668;
							goto BgL_zc3z04anonymousza31876ze3z87_3624;
						}
					}
				else
					{	/* Cfa/tvector.scm 266 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* patch-fun! */
	obj_t BGl_patchzd2funz12zc0zzcfa_tvectorz00(obj_t BgL_variablez00_43)
	{
		{	/* Cfa/tvector.scm 271 */
			{	/* Cfa/tvector.scm 272 */
				BgL_valuez00_bglt BgL_funz00_3629;

				BgL_funz00_3629 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_variablez00_43)))->BgL_valuez00);
				{	/* Cfa/tvector.scm 275 */
					obj_t BgL_arg1881z00_3630;

					{	/* Cfa/tvector.scm 275 */
						obj_t BgL_arg1882z00_3631;

						BgL_arg1882z00_3631 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_3629)))->BgL_bodyz00);
						BgL_arg1881z00_3630 =
							BGl_patchz12z12zzcfa_tvectorz00(
							((BgL_nodez00_bglt) BgL_arg1882z00_3631));
					}
					return
						((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_funz00_3629)))->BgL_bodyz00) =
						((obj_t) BgL_arg1881z00_3630), BUNSPEC);
				}
			}
		}

	}



/* patch*! */
	obj_t BGl_patchza2z12zb0zzcfa_tvectorz00(obj_t BgL_nodeza2za2_67)
	{
		{	/* Cfa/tvector.scm 482 */
			{
				obj_t BgL_nodeza2za2_3633;

				BgL_nodeza2za2_3633 = BgL_nodeza2za2_67;
			BgL_zc3z04anonymousza31883ze3z87_3634:
				if (NULLP(BgL_nodeza2za2_3633))
					{	/* Cfa/tvector.scm 484 */
						return CNST_TABLE_REF(((long) 10));
					}
				else
					{	/* Cfa/tvector.scm 484 */
						{	/* Cfa/tvector.scm 487 */
							obj_t BgL_arg1885z00_3636;

							{	/* Cfa/tvector.scm 487 */
								obj_t BgL_arg1886z00_3637;

								BgL_arg1886z00_3637 = CAR(((obj_t) BgL_nodeza2za2_3633));
								BgL_arg1885z00_3636 =
									BGl_patchz12z12zzcfa_tvectorz00(
									((BgL_nodez00_bglt) BgL_arg1886z00_3637));
							}
							{	/* Cfa/tvector.scm 487 */
								obj_t BgL_tmpz00_5685;

								BgL_tmpz00_5685 = ((obj_t) BgL_nodeza2za2_3633);
								SET_CAR(BgL_tmpz00_5685, BgL_arg1885z00_3636);
							}
						}
						{	/* Cfa/tvector.scm 488 */
							obj_t BgL_arg1887z00_3638;

							BgL_arg1887z00_3638 = CDR(((obj_t) BgL_nodeza2za2_3633));
							{
								obj_t BgL_nodeza2za2_5690;

								BgL_nodeza2za2_5690 = BgL_arg1887z00_3638;
								BgL_nodeza2za2_3633 = BgL_nodeza2za2_5690;
								goto BgL_zc3z04anonymousza31883ze3z87_3634;
							}
						}
					}
			}
		}

	}



/* patch-vector?! */
	BgL_nodez00_bglt BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(BgL_appz00_bglt
		BgL_nodez00_70)
	{
		{	/* Cfa/tvector.scm 531 */
			BGl_patchza2z12zb0zzcfa_tvectorz00(
				(((BgL_appz00_bglt) COBJECT(BgL_nodez00_70))->BgL_argsz00));
			{	/* Cfa/tvector.scm 534 */
				BgL_approxz00_bglt BgL_approxz00_3642;

				{	/* Cfa/tvector.scm 534 */
					obj_t BgL_arg1893z00_3649;

					BgL_arg1893z00_3649 =
						CAR((((BgL_appz00_bglt) COBJECT(BgL_nodez00_70))->BgL_argsz00));
					BgL_approxz00_3642 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1893z00_3649));
				}
				{	/* Cfa/tvector.scm 534 */
					BgL_typez00_bglt BgL_typez00_3643;

					BgL_typez00_3643 =
						(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_3642))->BgL_typez00);
					{	/* Cfa/tvector.scm 535 */

						if (
							(((obj_t) BgL_typez00_3643) ==
								BGl_za2vectorza2z00zztype_cachez00))
							{	/* Cfa/tvector.scm 537 */
								BgL_literalz00_bglt BgL_new1214z00_3645;

								{	/* Cfa/tvector.scm 538 */
									BgL_literalz00_bglt BgL_new1213z00_3647;

									BgL_new1213z00_3647 =
										((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_literalz00_bgl))));
									{	/* Cfa/tvector.scm 538 */
										long BgL_arg1892z00_3648;

										{	/* Cfa/tvector.scm 538 */
											long BgL_res2304z00_4727;

											BgL_res2304z00_4727 =
												BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
											BgL_arg1892z00_3648 = BgL_res2304z00_4727;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1213z00_3647),
											BgL_arg1892z00_3648);
									}
									{	/* Cfa/tvector.scm 538 */
										BgL_objectz00_bglt BgL_tmpz00_5705;

										BgL_tmpz00_5705 =
											((BgL_objectz00_bglt) BgL_new1213z00_3647);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5705, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1213z00_3647);
									BgL_new1214z00_3645 = BgL_new1213z00_3647;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1214z00_3645)))->
										BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_nodez00_70)))->BgL_locz00)), BUNSPEC);
								{
									BgL_typez00_bglt BgL_auxz00_5713;

									{	/* Cfa/tvector.scm 539 */
										BgL_typez00_bglt BgL_arg1891z00_3646;

										BgL_arg1891z00_3646 =
											BGl_getzd2typezd2atomz00zztype_typeofz00(BTRUE);
										BgL_auxz00_5713 =
											BGl_strictzd2nodezd2typez00zzast_nodez00
											(BgL_arg1891z00_3646,
											((BgL_typez00_bglt) BGl_za2boolza2z00zztype_cachez00));
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1214z00_3645)))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_auxz00_5713), BUNSPEC);
								}
								((((BgL_atomz00_bglt) COBJECT(
												((BgL_atomz00_bglt) BgL_new1214z00_3645)))->
										BgL_valuez00) = ((obj_t) BTRUE), BUNSPEC);
								return ((BgL_nodez00_bglt) BgL_new1214z00_3645);
							}
						else
							{	/* Cfa/tvector.scm 536 */
								return ((BgL_nodez00_bglt) BgL_nodez00_70);
							}
					}
				}
			}
		}

	}



/* patch-vector->list! */
	BgL_nodez00_bglt
		BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00(BgL_appz00_bglt
		BgL_nodez00_71)
	{
		{	/* Cfa/tvector.scm 546 */
			BGl_patchza2z12zb0zzcfa_tvectorz00(
				(((BgL_appz00_bglt) COBJECT(BgL_nodez00_71))->BgL_argsz00));
			{	/* Cfa/tvector.scm 549 */
				BgL_approxz00_bglt BgL_approxz00_3653;

				{	/* Cfa/tvector.scm 549 */
					obj_t BgL_arg1909z00_3667;

					BgL_arg1909z00_3667 =
						CAR((((BgL_appz00_bglt) COBJECT(BgL_nodez00_71))->BgL_argsz00));
					BgL_approxz00_3653 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1909z00_3667));
				}
				{	/* Cfa/tvector.scm 549 */
					obj_t BgL_tvz00_3654;

					BgL_tvz00_3654 =
						BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_3653,
						((obj_t) BgL_nodez00_71));
					{	/* Cfa/tvector.scm 550 */

						if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_3654,
								BGl_tvecz00zztvector_tvectorz00))
							{	/* Cfa/tvector.scm 552 */
								obj_t BgL_tvzd2ze3listz31_3656;

								{	/* Cfa/tvector.scm 552 */
									obj_t BgL_arg1905z00_3663;

									{	/* Cfa/tvector.scm 552 */
										obj_t BgL_arg1906z00_3664;
										obj_t BgL_arg1907z00_3665;

										{	/* Cfa/tvector.scm 552 */
											obj_t BgL_arg1908z00_3666;

											BgL_arg1908z00_3666 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt)
															((BgL_typez00_bglt) BgL_tvz00_3654))))->
												BgL_idz00);
											{	/* Cfa/tvector.scm 552 */
												obj_t BgL_res2306z00_4736;

												{	/* Cfa/tvector.scm 552 */
													obj_t BgL_arg1466z00_4735;

													BgL_arg1466z00_4735 =
														SYMBOL_TO_STRING(BgL_arg1908z00_3666);
													BgL_res2306z00_4736 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_4735);
												}
												BgL_arg1906z00_3664 = BgL_res2306z00_4736;
											}
										}
										{	/* Cfa/tvector.scm 552 */
											obj_t BgL_res2307z00_4739;

											{	/* Cfa/tvector.scm 552 */
												obj_t BgL_symbolz00_4737;

												BgL_symbolz00_4737 = CNST_TABLE_REF(((long) 11));
												{	/* Cfa/tvector.scm 552 */
													obj_t BgL_arg1466z00_4738;

													BgL_arg1466z00_4738 =
														SYMBOL_TO_STRING(BgL_symbolz00_4737);
													BgL_res2307z00_4739 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_4738);
											}}
											BgL_arg1907z00_3665 = BgL_res2307z00_4739;
										}
										BgL_arg1905z00_3663 =
											string_append(BgL_arg1906z00_3664, BgL_arg1907z00_3665);
									}
									BgL_tvzd2ze3listz31_3656 =
										bstring_to_symbol(BgL_arg1905z00_3663);
								}
								{	/* Cfa/tvector.scm 552 */
									BgL_nodez00_bglt BgL_newzd2nodezd2_3657;

									{	/* Cfa/tvector.scm 553 */
										obj_t BgL_arg1901z00_3659;
										obj_t BgL_arg1902z00_3660;

										BgL_arg1901z00_3659 =
											MAKE_YOUNG_PAIR(BgL_tvzd2ze3listz31_3656,
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
												(((BgL_appz00_bglt) COBJECT(BgL_nodez00_71))->
													BgL_argsz00), BNIL));
										BgL_arg1902z00_3660 =
											(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_nodez00_71)))->BgL_locz00);
										BgL_newzd2nodezd2_3657 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1901z00_3659,
											BNIL, BgL_arg1902z00_3660, CNST_TABLE_REF(((long) 12)));
									}
									{	/* Cfa/tvector.scm 553 */

										{	/* Cfa/tvector.scm 557 */
											BgL_typez00_bglt BgL_arg1898z00_3658;

											BgL_arg1898z00_3658 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_nodez00_71)))->BgL_typez00);
											((((BgL_nodez00_bglt) COBJECT(BgL_newzd2nodezd2_3657))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg1898z00_3658), BUNSPEC);
										}
										return BgL_newzd2nodezd2_3657;
									}
								}
							}
						else
							{	/* Cfa/tvector.scm 551 */
								return ((BgL_nodez00_bglt) BgL_nodez00_71);
							}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_proc2371z00zzcfa_tvectorz00, BGl_nodez00zzast_nodez00,
				BGl_string2372z00zzcfa_tvectorz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_proc2373z00zzcfa_tvectorz00,
				BGl_nodez00zzast_nodez00, BGl_string2374z00zzcfa_tvectorz00);
		}

	}



/* &patch!1624 */
	obj_t BGl_z62patchz121624z70zzcfa_tvectorz00(obj_t BgL_envz00_4992,
		obj_t BgL_nodez00_4993)
	{
		{	/* Cfa/tvector.scm 280 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 13)),
				BGl_string2375z00zzcfa_tvectorz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4993)));
		}

	}



/* &get-vector-item-type1618 */
	obj_t BGl_z62getzd2vectorzd2itemzd2type1618zb0zzcfa_tvectorz00(obj_t
		BgL_envz00_4994, obj_t BgL_nodez00_4995)
	{
		{	/* Cfa/tvector.scm 199 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 14)),
				BGl_string2375z00zzcfa_tvectorz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4995)));
		}

	}



/* get-vector-item-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt
		BgL_nodez00_37)
	{
		{	/* Cfa/tvector.scm 199 */
			{	/* Cfa/tvector.scm 199 */
				obj_t BgL_method1619z00_3677;

				{	/* Cfa/tvector.scm 199 */
					obj_t BgL_res2319z00_4781;

					{	/* Cfa/tvector.scm 199 */
						long BgL_objzd2classzd2numz00_4746;

						{	/* Cfa/tvector.scm 199 */
							long BgL_res2309z00_4749;

							BgL_res2309z00_4749 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_37));
							BgL_objzd2classzd2numz00_4746 = BgL_res2309z00_4749;
						}
						{	/* Cfa/tvector.scm 199 */
							obj_t BgL_arg1813z00_4747;

							BgL_arg1813z00_4747 =
								PROCEDURE_REF
								(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
								(int) (((long) 1)));
							{	/* Cfa/tvector.scm 199 */
								int BgL_offsetz00_4751;

								BgL_offsetz00_4751 = (int) (BgL_objzd2classzd2numz00_4746);
								{	/* Cfa/tvector.scm 199 */
									long BgL_offsetz00_4752;

									BgL_offsetz00_4752 =
										((long) (BgL_offsetz00_4751) - OBJECT_TYPE);
									{	/* Cfa/tvector.scm 199 */
										long BgL_modz00_4753;

										BgL_modz00_4753 =
											(BgL_offsetz00_4752 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/tvector.scm 199 */
											long BgL_restz00_4755;

											BgL_restz00_4755 =
												(BgL_offsetz00_4752 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/tvector.scm 199 */

												{	/* Cfa/tvector.scm 199 */
													obj_t BgL_bucketz00_4757;

													BgL_bucketz00_4757 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4747), BgL_modz00_4753);
													BgL_res2319z00_4781 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4757), BgL_restz00_4755);
					}}}}}}}}
					BgL_method1619z00_3677 = BgL_res2319z00_4781;
				}
				return
					((BgL_typez00_bglt)
					PROCEDURE_ENTRY(BgL_method1619z00_3677) (BgL_method1619z00_3677,
						((obj_t) BgL_nodez00_37), BEOA));
			}
		}

	}



/* &get-vector-item-type */
	BgL_typez00_bglt BGl_z62getzd2vectorzd2itemzd2typezb0zzcfa_tvectorz00(obj_t
		BgL_envz00_4996, obj_t BgL_nodez00_4997)
	{
		{	/* Cfa/tvector.scm 199 */
			return
				BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
				((BgL_nodez00_bglt) BgL_nodez00_4997));
		}

	}



/* patch! */
	obj_t BGl_patchz12z12zzcfa_tvectorz00(BgL_nodez00_bglt BgL_nodez00_44)
	{
		{	/* Cfa/tvector.scm 280 */
			{	/* Cfa/tvector.scm 280 */
				obj_t BgL_method1625z00_3678;

				{	/* Cfa/tvector.scm 280 */
					obj_t BgL_res2330z00_4818;

					{	/* Cfa/tvector.scm 280 */
						long BgL_objzd2classzd2numz00_4783;

						{	/* Cfa/tvector.scm 280 */
							long BgL_res2320z00_4786;

							BgL_res2320z00_4786 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_44));
							BgL_objzd2classzd2numz00_4783 = BgL_res2320z00_4786;
						}
						{	/* Cfa/tvector.scm 280 */
							obj_t BgL_arg1813z00_4784;

							BgL_arg1813z00_4784 =
								PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
								(int) (((long) 1)));
							{	/* Cfa/tvector.scm 280 */
								int BgL_offsetz00_4788;

								BgL_offsetz00_4788 = (int) (BgL_objzd2classzd2numz00_4783);
								{	/* Cfa/tvector.scm 280 */
									long BgL_offsetz00_4789;

									BgL_offsetz00_4789 =
										((long) (BgL_offsetz00_4788) - OBJECT_TYPE);
									{	/* Cfa/tvector.scm 280 */
										long BgL_modz00_4790;

										BgL_modz00_4790 =
											(BgL_offsetz00_4789 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/tvector.scm 280 */
											long BgL_restz00_4792;

											BgL_restz00_4792 =
												(BgL_offsetz00_4789 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/tvector.scm 280 */

												{	/* Cfa/tvector.scm 280 */
													obj_t BgL_bucketz00_4794;

													BgL_bucketz00_4794 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4784), BgL_modz00_4790);
													BgL_res2330z00_4818 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4794), BgL_restz00_4792);
					}}}}}}}}
					BgL_method1625z00_3678 = BgL_res2330z00_4818;
				}
				return
					PROCEDURE_ENTRY(BgL_method1625z00_3678) (BgL_method1625z00_3678,
					((obj_t) BgL_nodez00_44), BEOA);
			}
		}

	}



/* &patch! */
	obj_t BGl_z62patchz12z70zzcfa_tvectorz00(obj_t BgL_envz00_4998,
		obj_t BgL_nodez00_4999)
	{
		{	/* Cfa/tvector.scm 280 */
			return
				BGl_patchz12z12zzcfa_tvectorz00(((BgL_nodez00_bglt) BgL_nodez00_4999));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc2376z00zzcfa_tvectorz00, BGl_string2377z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2vectorzd2itemzd2typezd2envz00zzcfa_tvectorz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc2378z00zzcfa_tvectorz00, BGl_string2377z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_atomz00zzast_nodez00,
				BGl_proc2379z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_kwotez00zzast_nodez00,
				BGl_proc2381z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc2382z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_varz00zzast_nodez00,
				BGl_proc2383z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_closurez00zzast_nodez00,
				BGl_proc2384z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2385z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_syncz00zzast_nodez00,
				BGl_proc2386z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2387z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_funcallz00zzast_nodez00,
				BGl_proc2388z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_externz00zzast_nodez00,
				BGl_proc2389z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_castz00zzast_nodez00,
				BGl_proc2390z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_setqz00zzast_nodez00,
				BGl_proc2391z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc2392z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_failz00zzast_nodez00,
				BGl_proc2393z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_switchz00zzast_nodez00,
				BGl_proc2394z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc2395z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2396z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2397z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2398z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc2399z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2400z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc2401z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_appz00zzast_nodez00,
				BGl_proc2402z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc2403z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc2404z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc2405z00zzcfa_tvectorz00, BGl_string2380z00zzcfa_tvectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00, BGl_proc2406z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_tvectorz00,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00, BGl_proc2407z00zzcfa_tvectorz00,
				BGl_string2380z00zzcfa_tvectorz00);
		}

	}



/* &patch!-vset!/Cinfo1681 */
	obj_t BGl_z62patchz12zd2vsetz12zf2Cinfo1681z42zzcfa_tvectorz00(obj_t
		BgL_envz00_5030, obj_t BgL_nodez00_5031)
	{
		{	/* Cfa/tvector.scm 626 */
			{
				BgL_nodez00_bglt BgL_auxz00_5859;

				{	/* Cfa/tvector.scm 628 */
					obj_t BgL_arg2059z00_5108;

					BgL_arg2059z00_5108 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_5031))))->BgL_exprza2za2);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg2059z00_5108);
				}
				{	/* Cfa/tvector.scm 629 */
					bool_t BgL_test2502z00_5864;

					{
						BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_5865;

						{
							obj_t BgL_auxz00_5866;

							{	/* Cfa/tvector.scm 629 */
								BgL_objectz00_bglt BgL_tmpz00_5867;

								BgL_tmpz00_5867 =
									((BgL_objectz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_5031));
								BgL_auxz00_5866 = BGL_OBJECT_WIDENING(BgL_tmpz00_5867);
							}
							BgL_auxz00_5865 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_5866);
						}
						BgL_test2502z00_5864 =
							(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_5865))->
							BgL_tvectorzf3zf3);
					}
					if (BgL_test2502z00_5864)
						{	/* Cfa/tvector.scm 629 */
							BgL_auxz00_5859 =
								((BgL_nodez00_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_5031));
						}
					else
						{	/* Cfa/tvector.scm 631 */
							BgL_approxz00_bglt BgL_veczd2approxzd2_5109;

							{	/* Cfa/tvector.scm 631 */
								obj_t BgL_arg2072z00_5110;

								{	/* Cfa/tvector.scm 631 */
									obj_t BgL_pairz00_5111;

									BgL_pairz00_5111 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vsetz12z12_bglt) BgL_nodez00_5031))))->
										BgL_exprza2za2);
									BgL_arg2072z00_5110 = CAR(BgL_pairz00_5111);
								}
								BgL_veczd2approxzd2_5109 =
									BGl_cfaz12z12zzcfa_cfaz00(
									((BgL_nodez00_bglt) BgL_arg2072z00_5110));
							}
							{	/* Cfa/tvector.scm 631 */
								obj_t BgL_tvz00_5112;

								BgL_tvz00_5112 =
									BGl_getzd2approxzd2typez00zzcfa_typez00
									(BgL_veczd2approxzd2_5109,
									((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_5031)));
								{	/* Cfa/tvector.scm 632 */

									if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5112,
											BGl_tvecz00zztvector_tvectorz00))
										{	/* Cfa/tvector.scm 635 */
											obj_t BgL_tvzd2setz12zc0_5113;

											{	/* Cfa/tvector.scm 635 */
												obj_t BgL_arg2068z00_5114;

												{	/* Cfa/tvector.scm 635 */
													obj_t BgL_arg2069z00_5115;
													obj_t BgL_arg2070z00_5116;

													{	/* Cfa/tvector.scm 635 */
														obj_t BgL_arg2071z00_5117;

														BgL_arg2071z00_5117 =
															(((BgL_typez00_bglt) COBJECT(
																	((BgL_typez00_bglt)
																		((BgL_typez00_bglt) BgL_tvz00_5112))))->
															BgL_idz00);
														{	/* Cfa/tvector.scm 635 */
															obj_t BgL_res2365z00_5118;

															{	/* Cfa/tvector.scm 635 */
																obj_t BgL_arg1466z00_5119;

																BgL_arg1466z00_5119 =
																	SYMBOL_TO_STRING(BgL_arg2071z00_5117);
																BgL_res2365z00_5118 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_5119);
															}
															BgL_arg2069z00_5115 = BgL_res2365z00_5118;
														}
													}
													{	/* Cfa/tvector.scm 635 */
														obj_t BgL_res2366z00_5120;

														{	/* Cfa/tvector.scm 635 */
															obj_t BgL_symbolz00_5121;

															BgL_symbolz00_5121 = CNST_TABLE_REF(((long) 15));
															{	/* Cfa/tvector.scm 635 */
																obj_t BgL_arg1466z00_5122;

																BgL_arg1466z00_5122 =
																	SYMBOL_TO_STRING(BgL_symbolz00_5121);
																BgL_res2366z00_5120 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_5122);
														}}
														BgL_arg2070z00_5116 = BgL_res2366z00_5120;
													}
													BgL_arg2068z00_5114 =
														string_append(BgL_arg2069z00_5115,
														BgL_arg2070z00_5116);
												}
												BgL_tvzd2setz12zc0_5113 =
													bstring_to_symbol(BgL_arg2068z00_5114);
											}
											{	/* Cfa/tvector.scm 635 */
												BgL_nodez00_bglt BgL_newzd2nodezd2_5123;

												{	/* Cfa/tvector.scm 636 */
													obj_t BgL_arg2062z00_5124;
													obj_t BgL_arg2063z00_5125;

													{	/* Cfa/tvector.scm 636 */
														obj_t BgL_arg2065z00_5126;

														BgL_arg2065z00_5126 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
															(((BgL_externz00_bglt) COBJECT(
																		((BgL_externz00_bglt)
																			((BgL_vsetz12z12_bglt)
																				BgL_nodez00_5031))))->BgL_exprza2za2),
															BNIL);
														BgL_arg2062z00_5124 =
															MAKE_YOUNG_PAIR(BgL_tvzd2setz12zc0_5113,
															BgL_arg2065z00_5126);
													}
													BgL_arg2063z00_5125 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_vsetz12z12_bglt) BgL_nodez00_5031))))->
														BgL_locz00);
													BgL_newzd2nodezd2_5123 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BgL_arg2062z00_5124, BNIL, BgL_arg2063z00_5125,
														CNST_TABLE_REF(((long) 12)));
												}
												{	/* Cfa/tvector.scm 636 */

													BgL_auxz00_5859 =
														BGl_inlinezd2nodezd2zzinline_inlinez00
														(BgL_newzd2nodezd2_5123, ((long) 1), BNIL);
										}}}
									else
										{	/* Cfa/tvector.scm 633 */
											BgL_auxz00_5859 =
												((BgL_nodez00_bglt)
												((BgL_vsetz12z12_bglt) BgL_nodez00_5031));
										}
								}
							}
						}
				}
				return ((obj_t) BgL_auxz00_5859);
			}
		}

	}



/* &patch!-vref/Cinfo1679 */
	obj_t BGl_z62patchz12zd2vrefzf2Cinfo1679z50zzcfa_tvectorz00(obj_t
		BgL_envz00_5032, obj_t BgL_nodez00_5033)
	{
		{	/* Cfa/tvector.scm 603 */
			{
				BgL_nodez00_bglt BgL_auxz00_5910;

				{	/* Cfa/tvector.scm 605 */
					obj_t BgL_arg2040z00_5128;

					BgL_arg2040z00_5128 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vrefz00_bglt) BgL_nodez00_5033))))->BgL_exprza2za2);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg2040z00_5128);
				}
				{	/* Cfa/tvector.scm 606 */
					bool_t BgL_test2504z00_5915;

					{
						BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5916;

						{
							obj_t BgL_auxz00_5917;

							{	/* Cfa/tvector.scm 606 */
								BgL_objectz00_bglt BgL_tmpz00_5918;

								BgL_tmpz00_5918 =
									((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_5033));
								BgL_auxz00_5917 = BGL_OBJECT_WIDENING(BgL_tmpz00_5918);
							}
							BgL_auxz00_5916 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_5917);
						}
						BgL_test2504z00_5915 =
							(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5916))->
							BgL_tvectorzf3zf3);
					}
					if (BgL_test2504z00_5915)
						{	/* Cfa/tvector.scm 607 */
							BgL_typez00_bglt BgL_tyz00_5129;

							BgL_tyz00_5129 =
								(((BgL_vrefz00_bglt) COBJECT(
										((BgL_vrefz00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_5033))))->BgL_ftypez00);
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_vrefz00_bglt) BgL_nodez00_5033))))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_tyz00_5129), BUNSPEC);
							BgL_auxz00_5910 =
								((BgL_nodez00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_5033));
						}
					else
						{	/* Cfa/tvector.scm 610 */
							BgL_approxz00_bglt BgL_veczd2approxzd2_5130;

							{	/* Cfa/tvector.scm 610 */
								obj_t BgL_arg2056z00_5131;

								{	/* Cfa/tvector.scm 610 */
									obj_t BgL_pairz00_5132;

									BgL_pairz00_5132 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vrefz00_bglt) BgL_nodez00_5033))))->
										BgL_exprza2za2);
									BgL_arg2056z00_5131 = CAR(BgL_pairz00_5132);
								}
								BgL_veczd2approxzd2_5130 =
									BGl_cfaz12z12zzcfa_cfaz00(
									((BgL_nodez00_bglt) BgL_arg2056z00_5131));
							}
							{	/* Cfa/tvector.scm 610 */
								obj_t BgL_tvz00_5133;

								BgL_tvz00_5133 =
									BGl_getzd2approxzd2typez00zzcfa_typez00
									(BgL_veczd2approxzd2_5130,
									((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_5033)));
								{	/* Cfa/tvector.scm 611 */

									if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5133,
											BGl_tvecz00zztvector_tvectorz00))
										{	/* Cfa/tvector.scm 617 */
											obj_t BgL_tyz00_5134;

											{	/* Cfa/tvector.scm 617 */
												BgL_approxz00_bglt BgL_arg2053z00_5135;

												{
													BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5943;

													{
														obj_t BgL_auxz00_5944;

														{	/* Cfa/tvector.scm 617 */
															BgL_objectz00_bglt BgL_tmpz00_5945;

															BgL_tmpz00_5945 =
																((BgL_objectz00_bglt)
																((BgL_vrefz00_bglt) BgL_nodez00_5033));
															BgL_auxz00_5944 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5945);
														}
														BgL_auxz00_5943 =
															((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_5944);
													}
													BgL_arg2053z00_5135 =
														(((BgL_vrefzf2cinfozf2_bglt)
															COBJECT(BgL_auxz00_5943))->BgL_approxz00);
												}
												BgL_tyz00_5134 =
													BGl_getzd2approxzd2typez00zzcfa_typez00
													(BgL_arg2053z00_5135,
													((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_5033)));
											}
											{	/* Cfa/tvector.scm 617 */
												obj_t BgL_tvzd2refzd2_5136;

												{	/* Cfa/tvector.scm 618 */
													obj_t BgL_arg2048z00_5137;

													{	/* Cfa/tvector.scm 618 */
														obj_t BgL_arg2049z00_5138;
														obj_t BgL_arg2050z00_5139;

														{	/* Cfa/tvector.scm 618 */
															obj_t BgL_arg2051z00_5140;

															BgL_arg2051z00_5140 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			((BgL_typez00_bglt) BgL_tvz00_5133))))->
																BgL_idz00);
															{	/* Cfa/tvector.scm 618 */
																obj_t BgL_res2361z00_5141;

																{	/* Cfa/tvector.scm 618 */
																	obj_t BgL_arg1466z00_5142;

																	BgL_arg1466z00_5142 =
																		SYMBOL_TO_STRING(BgL_arg2051z00_5140);
																	BgL_res2361z00_5141 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_5142);
																}
																BgL_arg2049z00_5138 = BgL_res2361z00_5141;
															}
														}
														{	/* Cfa/tvector.scm 618 */
															obj_t BgL_res2362z00_5143;

															{	/* Cfa/tvector.scm 618 */
																obj_t BgL_symbolz00_5144;

																BgL_symbolz00_5144 =
																	CNST_TABLE_REF(((long) 16));
																{	/* Cfa/tvector.scm 618 */
																	obj_t BgL_arg1466z00_5145;

																	BgL_arg1466z00_5145 =
																		SYMBOL_TO_STRING(BgL_symbolz00_5144);
																	BgL_res2362z00_5143 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_5145);
															}}
															BgL_arg2050z00_5139 = BgL_res2362z00_5143;
														}
														BgL_arg2048z00_5137 =
															string_append(BgL_arg2049z00_5138,
															BgL_arg2050z00_5139);
													}
													BgL_tvzd2refzd2_5136 =
														bstring_to_symbol(BgL_arg2048z00_5137);
												}
												{	/* Cfa/tvector.scm 618 */
													BgL_nodez00_bglt BgL_newzd2nodezd2_5146;

													{	/* Cfa/tvector.scm 619 */
														obj_t BgL_arg2044z00_5147;
														obj_t BgL_arg2045z00_5148;

														{	/* Cfa/tvector.scm 619 */
															obj_t BgL_arg2046z00_5149;

															BgL_arg2046z00_5149 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
																(((BgL_externz00_bglt) COBJECT(
																			((BgL_externz00_bglt)
																				((BgL_vrefz00_bglt)
																					BgL_nodez00_5033))))->BgL_exprza2za2),
																BNIL);
															BgL_arg2044z00_5147 =
																MAKE_YOUNG_PAIR(BgL_tvzd2refzd2_5136,
																BgL_arg2046z00_5149);
														}
														BgL_arg2045z00_5148 =
															(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt)
																		((BgL_vrefz00_bglt) BgL_nodez00_5033))))->
															BgL_locz00);
														BgL_newzd2nodezd2_5146 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00
															(BgL_arg2044z00_5147, BNIL, BgL_arg2045z00_5148,
															CNST_TABLE_REF(((long) 12)));
													}
													{	/* Cfa/tvector.scm 619 */

														{	/* Cfa/tvector.scm 620 */
															BgL_typez00_bglt BgL_arg2043z00_5150;

															BgL_arg2043z00_5150 =
																BGl_strictzd2nodezd2typez00zzast_nodez00(
																((BgL_typez00_bglt)
																	((BgL_typez00_bglt) BgL_tvz00_5133)),
																((BgL_typez00_bglt) BgL_tyz00_5134));
															((((BgL_nodez00_bglt)
																		COBJECT(BgL_newzd2nodezd2_5146))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_arg2043z00_5150),
																BUNSPEC);
														}
														BgL_auxz00_5910 =
															BGl_inlinezd2nodezd2zzinline_inlinez00
															(BgL_newzd2nodezd2_5146, ((long) 1), BNIL);
										}}}}
									else
										{	/* Cfa/tvector.scm 613 */
											obj_t BgL_tyz00_5151;

											{	/* Cfa/tvector.scm 613 */
												BgL_approxz00_bglt BgL_arg2055z00_5152;

												{
													BgL_vrefzf2cinfozf2_bglt BgL_auxz00_5980;

													{
														obj_t BgL_auxz00_5981;

														{	/* Cfa/tvector.scm 613 */
															BgL_objectz00_bglt BgL_tmpz00_5982;

															BgL_tmpz00_5982 =
																((BgL_objectz00_bglt)
																((BgL_vrefz00_bglt) BgL_nodez00_5033));
															BgL_auxz00_5981 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5982);
														}
														BgL_auxz00_5980 =
															((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_5981);
													}
													BgL_arg2055z00_5152 =
														(((BgL_vrefzf2cinfozf2_bglt)
															COBJECT(BgL_auxz00_5980))->BgL_approxz00);
												}
												BgL_tyz00_5151 =
													BGl_getzd2approxzd2typez00zzcfa_typez00
													(BgL_arg2055z00_5152,
													((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_5033)));
											}
											((((BgL_vrefz00_bglt) COBJECT(
															((BgL_vrefz00_bglt)
																((BgL_vrefz00_bglt) BgL_nodez00_5033))))->
													BgL_ftypez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_tyz00_5151)), BUNSPEC);
											((((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_vrefz00_bglt)
																	BgL_nodez00_5033))))->BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_tyz00_5151)), BUNSPEC);
											BgL_auxz00_5910 =
												((BgL_nodez00_bglt) ((BgL_vrefz00_bglt)
													BgL_nodez00_5033));
										}
								}
							}
						}
				}
				return ((obj_t) BgL_auxz00_5910);
			}
		}

	}



/* &patch!-valloc/Cinfo+1677 */
	obj_t BGl_z62patchz12zd2valloczf2Cinfozb21677ze2zzcfa_tvectorz00(obj_t
		BgL_envz00_5034, obj_t BgL_nodez00_5035)
	{
		{	/* Cfa/tvector.scm 582 */
			{
				BgL_nodez00_bglt BgL_auxz00_6002;

				{	/* Cfa/tvector.scm 584 */
					obj_t BgL_arg2021z00_5154;

					BgL_arg2021z00_5154 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vallocz00_bglt) BgL_nodez00_5035))))->BgL_exprza2za2);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg2021z00_5154);
				}
				{	/* Cfa/tvector.scm 585 */
					BgL_typez00_bglt BgL_typez00_5155;

					{	/* Cfa/tvector.scm 585 */
						BgL_approxz00_bglt BgL_arg2039z00_5156;

						{
							BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_6007;

							{
								obj_t BgL_auxz00_6008;

								{	/* Cfa/tvector.scm 585 */
									BgL_objectz00_bglt BgL_tmpz00_6009;

									BgL_tmpz00_6009 =
										((BgL_objectz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_5035));
									BgL_auxz00_6008 = BGL_OBJECT_WIDENING(BgL_tmpz00_6009);
								}
								BgL_auxz00_6007 =
									((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_6008);
							}
							BgL_arg2039z00_5156 =
								(((BgL_valloczf2cinfozb2optimz40_bglt)
									COBJECT(BgL_auxz00_6007))->BgL_valuezd2approxzd2);
						}
						BgL_typez00_5155 =
							(((BgL_approxz00_bglt) COBJECT(BgL_arg2039z00_5156))->
							BgL_typez00);
					}
					{	/* Cfa/tvector.scm 585 */
						obj_t BgL_tvz00_5157;

						BgL_tvz00_5157 =
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_5155))->BgL_tvectorz00);
						{	/* Cfa/tvector.scm 586 */

							{	/* Cfa/tvector.scm 587 */
								bool_t BgL_test2506z00_6017;

								if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5157,
										BGl_typez00zztype_typez00))
									{	/* Cfa/tvector.scm 587 */
										BgL_typez00_bglt BgL_arg2038z00_5158;

										BgL_arg2038z00_5158 =
											(((BgL_vallocz00_bglt) COBJECT(
													((BgL_vallocz00_bglt)
														((BgL_vallocz00_bglt) BgL_nodez00_5035))))->
											BgL_ftypez00);
										BgL_test2506z00_6017 =
											(((obj_t) BgL_arg2038z00_5158) ==
											BGl_za2_za2z00zztype_cachez00);
									}
								else
									{	/* Cfa/tvector.scm 587 */
										BgL_test2506z00_6017 = ((bool_t) 0);
									}
								if (BgL_test2506z00_6017)
									{	/* Cfa/tvector.scm 588 */
										obj_t BgL_createzd2tvzd2_5159;

										{	/* Cfa/tvector.scm 588 */
											obj_t BgL_arg2033z00_5160;

											{	/* Cfa/tvector.scm 588 */
												obj_t BgL_arg2034z00_5161;
												obj_t BgL_arg2035z00_5162;

												{	/* Cfa/tvector.scm 588 */
													obj_t BgL_res2357z00_5163;

													{	/* Cfa/tvector.scm 588 */
														obj_t BgL_symbolz00_5164;

														BgL_symbolz00_5164 = CNST_TABLE_REF(((long) 17));
														{	/* Cfa/tvector.scm 588 */
															obj_t BgL_arg1466z00_5165;

															BgL_arg1466z00_5165 =
																SYMBOL_TO_STRING(BgL_symbolz00_5164);
															BgL_res2357z00_5163 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_5165);
													}}
													BgL_arg2034z00_5161 = BgL_res2357z00_5163;
												}
												{	/* Cfa/tvector.scm 588 */
													obj_t BgL_arg2036z00_5166;

													BgL_arg2036z00_5166 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_tvz00_5157)))->
														BgL_idz00);
													{	/* Cfa/tvector.scm 588 */
														obj_t BgL_res2358z00_5167;

														{	/* Cfa/tvector.scm 588 */
															obj_t BgL_arg1466z00_5168;

															BgL_arg1466z00_5168 =
																SYMBOL_TO_STRING(BgL_arg2036z00_5166);
															BgL_res2358z00_5167 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_5168);
														}
														BgL_arg2035z00_5162 = BgL_res2358z00_5167;
												}}
												BgL_arg2033z00_5160 =
													string_append(BgL_arg2034z00_5161,
													BgL_arg2035z00_5162);
											}
											BgL_createzd2tvzd2_5159 =
												bstring_to_symbol(BgL_arg2033z00_5160);
										}
										{	/* Cfa/tvector.scm 588 */
											BgL_nodez00_bglt BgL_newzd2nodezd2_5169;

											{	/* Cfa/tvector.scm 589 */
												obj_t BgL_arg2026z00_5170;
												obj_t BgL_arg2028z00_5171;

												{	/* Cfa/tvector.scm 589 */
													obj_t BgL_arg2029z00_5172;

													BgL_arg2029z00_5172 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
														(((BgL_externz00_bglt) COBJECT(
																	((BgL_externz00_bglt)
																		((BgL_vallocz00_bglt) BgL_nodez00_5035))))->
															BgL_exprza2za2), BNIL);
													BgL_arg2026z00_5170 =
														MAKE_YOUNG_PAIR(BgL_createzd2tvzd2_5159,
														BgL_arg2029z00_5172);
												}
												BgL_arg2028z00_5171 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_vallocz00_bglt) BgL_nodez00_5035))))->
													BgL_locz00);
												BgL_newzd2nodezd2_5169 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg2026z00_5170, BNIL, BgL_arg2028z00_5171,
													CNST_TABLE_REF(((long) 12)));
											}
											{	/* Cfa/tvector.scm 589 */

												{	/* Cfa/tvector.scm 593 */
													BgL_nodez00_bglt BgL_nz00_5173;

													BgL_nz00_5173 =
														BGl_inlinezd2nodezd2zzinline_inlinez00
														(BgL_newzd2nodezd2_5169, ((long) 1), BNIL);
													BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nz00_5173);
													BgL_auxz00_6002 = BgL_nz00_5173;
									}}}}
								else
									{	/* Cfa/tvector.scm 587 */
										{
											BgL_typez00_bglt BgL_auxz00_6046;

											{	/* Cfa/tvector.scm 597 */
												BgL_approxz00_bglt BgL_arg2037z00_5174;

												{
													BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_6049;

													{
														obj_t BgL_auxz00_6050;

														{	/* Cfa/tvector.scm 597 */
															BgL_objectz00_bglt BgL_tmpz00_6051;

															BgL_tmpz00_6051 =
																((BgL_objectz00_bglt)
																((BgL_vallocz00_bglt) BgL_nodez00_5035));
															BgL_auxz00_6050 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_6051);
														}
														BgL_auxz00_6049 =
															((BgL_valloczf2cinfozb2optimz40_bglt)
															BgL_auxz00_6050);
													}
													BgL_arg2037z00_5174 =
														(((BgL_valloczf2cinfozb2optimz40_bglt)
															COBJECT(BgL_auxz00_6049))->BgL_valuezd2approxzd2);
												}
												BgL_auxz00_6046 =
													((BgL_typez00_bglt)
													BGl_getzd2approxzd2typez00zzcfa_typez00
													(BgL_arg2037z00_5174,
														((obj_t) ((BgL_vallocz00_bglt) BgL_nodez00_5035))));
											}
											((((BgL_vallocz00_bglt) COBJECT(
															((BgL_vallocz00_bglt)
																((BgL_vallocz00_bglt) BgL_nodez00_5035))))->
													BgL_ftypez00) =
												((BgL_typez00_bglt) BgL_auxz00_6046), BUNSPEC);
										}
										BgL_auxz00_6002 =
											((BgL_nodez00_bglt)
											((BgL_vallocz00_bglt) BgL_nodez00_5035));
									}
							}
						}
					}
				}
				return ((obj_t) BgL_auxz00_6002);
			}
		}

	}



/* &patch!-make-vector-a1675 */
	obj_t BGl_z62patchz12zd2makezd2vectorzd2a1675za2zzcfa_tvectorz00(obj_t
		BgL_envz00_5036, obj_t BgL_nodez00_5037)
	{
		{	/* Cfa/tvector.scm 564 */
			{
				BgL_nodez00_bglt BgL_auxz00_6065;

				{	/* Cfa/tvector.scm 566 */
					obj_t BgL_arg2008z00_5176;

					BgL_arg2008z00_5176 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_5037))))->BgL_argsz00);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg2008z00_5176);
				}
				{	/* Cfa/tvector.scm 567 */
					BgL_typez00_bglt BgL_typez00_5177;

					{	/* Cfa/tvector.scm 567 */
						BgL_approxz00_bglt BgL_arg2020z00_5178;

						{
							BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_6070;

							{
								obj_t BgL_auxz00_6071;

								{	/* Cfa/tvector.scm 567 */
									BgL_objectz00_bglt BgL_tmpz00_6072;

									BgL_tmpz00_6072 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5037));
									BgL_auxz00_6071 = BGL_OBJECT_WIDENING(BgL_tmpz00_6072);
								}
								BgL_auxz00_6070 =
									((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_6071);
							}
							BgL_arg2020z00_5178 =
								(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_6070))->
								BgL_valuezd2approxzd2);
						}
						BgL_typez00_5177 =
							(((BgL_approxz00_bglt) COBJECT(BgL_arg2020z00_5178))->
							BgL_typez00);
					}
					{	/* Cfa/tvector.scm 567 */
						obj_t BgL_tvz00_5179;

						BgL_tvz00_5179 =
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_5177))->BgL_tvectorz00);
						{	/* Cfa/tvector.scm 568 */

							if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5179,
									BGl_typez00zztype_typez00))
								{	/* Cfa/tvector.scm 570 */
									obj_t BgL_makezd2tvzd2_5180;

									{	/* Cfa/tvector.scm 570 */
										obj_t BgL_arg2014z00_5181;

										{	/* Cfa/tvector.scm 570 */
											obj_t BgL_arg2016z00_5182;
											obj_t BgL_arg2017z00_5183;

											{	/* Cfa/tvector.scm 570 */
												obj_t BgL_res2353z00_5184;

												{	/* Cfa/tvector.scm 570 */
													obj_t BgL_symbolz00_5185;

													BgL_symbolz00_5185 = CNST_TABLE_REF(((long) 18));
													{	/* Cfa/tvector.scm 570 */
														obj_t BgL_arg1466z00_5186;

														BgL_arg1466z00_5186 =
															SYMBOL_TO_STRING(BgL_symbolz00_5185);
														BgL_res2353z00_5184 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_5186);
												}}
												BgL_arg2016z00_5182 = BgL_res2353z00_5184;
											}
											{	/* Cfa/tvector.scm 570 */
												obj_t BgL_arg2018z00_5187;

												BgL_arg2018z00_5187 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_tvz00_5179)))->BgL_idz00);
												{	/* Cfa/tvector.scm 570 */
													obj_t BgL_res2354z00_5188;

													{	/* Cfa/tvector.scm 570 */
														obj_t BgL_arg1466z00_5189;

														BgL_arg1466z00_5189 =
															SYMBOL_TO_STRING(BgL_arg2018z00_5187);
														BgL_res2354z00_5188 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_5189);
													}
													BgL_arg2017z00_5183 = BgL_res2354z00_5188;
											}}
											BgL_arg2014z00_5181 =
												string_append(BgL_arg2016z00_5182, BgL_arg2017z00_5183);
										}
										BgL_makezd2tvzd2_5180 =
											bstring_to_symbol(BgL_arg2014z00_5181);
									}
									{	/* Cfa/tvector.scm 570 */
										BgL_nodez00_bglt BgL_newzd2nodezd2_5190;

										{	/* Cfa/tvector.scm 571 */
											obj_t BgL_arg2010z00_5191;
											obj_t BgL_arg2011z00_5192;

											{	/* Cfa/tvector.scm 571 */
												obj_t BgL_arg2012z00_5193;

												BgL_arg2012z00_5193 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(
													(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_5037))))->
														BgL_argsz00), BNIL);
												BgL_arg2010z00_5191 =
													MAKE_YOUNG_PAIR(BgL_makezd2tvzd2_5180,
													BgL_arg2012z00_5193);
											}
											BgL_arg2011z00_5192 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_5037))))->
												BgL_locz00);
											BgL_newzd2nodezd2_5190 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2010z00_5191,
												BNIL, BgL_arg2011z00_5192, CNST_TABLE_REF(((long) 12)));
										}
										{	/* Cfa/tvector.scm 571 */

											((((BgL_nodez00_bglt) COBJECT(BgL_newzd2nodezd2_5190))->
													BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_tvz00_5179)), BUNSPEC);
											BgL_auxz00_6065 =
												BGl_inlinezd2nodezd2zzinline_inlinez00
												(BgL_newzd2nodezd2_5190, ((long) 1), BNIL);
								}}}
							else
								{	/* Cfa/tvector.scm 569 */
									BgL_auxz00_6065 =
										((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5037));
								}
						}
					}
				}
				return ((obj_t) BgL_auxz00_6065);
			}
		}

	}



/* &patch!-vlength1673 */
	obj_t BGl_z62patchz12zd2vlength1673za2zzcfa_tvectorz00(obj_t BgL_envz00_5038,
		obj_t BgL_nodez00_5039)
	{
		{	/* Cfa/tvector.scm 513 */
			{
				BgL_nodez00_bglt BgL_auxz00_6107;

				{	/* Cfa/tvector.scm 515 */
					obj_t BgL_arg1992z00_5195;

					BgL_arg1992z00_5195 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vlengthz00_bglt)
										((BgL_vlengthz00_bglt) BgL_nodez00_5039)))))->
						BgL_exprza2za2);
					BGl_patchza2z12zb0zzcfa_tvectorz00(BgL_arg1992z00_5195);
				}
				{	/* Cfa/tvector.scm 516 */
					BgL_approxz00_bglt BgL_approxz00_5196;

					{	/* Cfa/tvector.scm 516 */
						obj_t BgL_arg2005z00_5197;

						{	/* Cfa/tvector.scm 516 */
							obj_t BgL_pairz00_5198;

							BgL_pairz00_5198 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vlengthz00_bglt)
												((BgL_vlengthz00_bglt) BgL_nodez00_5039)))))->
								BgL_exprza2za2);
							BgL_arg2005z00_5197 = CAR(BgL_pairz00_5198);
						}
						BgL_approxz00_5196 =
							BGl_cfaz12z12zzcfa_cfaz00(
							((BgL_nodez00_bglt) BgL_arg2005z00_5197));
					}
					{	/* Cfa/tvector.scm 516 */
						obj_t BgL_tvz00_5199;

						BgL_tvz00_5199 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_5196,
							((obj_t) ((BgL_vlengthz00_bglt) BgL_nodez00_5039)));
						{	/* Cfa/tvector.scm 517 */

							{	/* Cfa/tvector.scm 518 */
								bool_t BgL_test2509z00_6123;

								if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5199,
										BGl_tvecz00zztvector_tvectorz00))
									{	/* Cfa/tvector.scm 518 */
										bool_t BgL_test2511z00_6126;

										{
											BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_6127;

											{
												obj_t BgL_auxz00_6128;

												{	/* Cfa/tvector.scm 518 */
													BgL_objectz00_bglt BgL_tmpz00_6129;

													BgL_tmpz00_6129 =
														((BgL_objectz00_bglt)
														((BgL_vlengthz00_bglt)
															((BgL_vlengthz00_bglt) BgL_nodez00_5039)));
													BgL_auxz00_6128 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6129);
												}
												BgL_auxz00_6127 =
													((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_6128);
											}
											BgL_test2511z00_6126 =
												(((BgL_vlengthzf2cinfozf2_bglt)
													COBJECT(BgL_auxz00_6127))->BgL_tvectorzf3zf3);
										}
										if (BgL_test2511z00_6126)
											{	/* Cfa/tvector.scm 518 */
												BgL_test2509z00_6123 = ((bool_t) 0);
											}
										else
											{	/* Cfa/tvector.scm 518 */
												BgL_test2509z00_6123 = ((bool_t) 1);
											}
									}
								else
									{	/* Cfa/tvector.scm 518 */
										BgL_test2509z00_6123 = ((bool_t) 0);
									}
								if (BgL_test2509z00_6123)
									{	/* Cfa/tvector.scm 519 */
										obj_t BgL_lengthzd2tvzd2_5200;

										{	/* Cfa/tvector.scm 519 */
											obj_t BgL_arg2001z00_5201;

											{	/* Cfa/tvector.scm 519 */
												obj_t BgL_arg2002z00_5202;
												obj_t BgL_arg2003z00_5203;

												{	/* Cfa/tvector.scm 519 */
													obj_t BgL_arg2004z00_5204;

													BgL_arg2004z00_5204 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt)
																	((BgL_typez00_bglt) BgL_tvz00_5199))))->
														BgL_idz00);
													{	/* Cfa/tvector.scm 519 */
														obj_t BgL_res2349z00_5205;

														{	/* Cfa/tvector.scm 519 */
															obj_t BgL_arg1466z00_5206;

															BgL_arg1466z00_5206 =
																SYMBOL_TO_STRING(BgL_arg2004z00_5204);
															BgL_res2349z00_5205 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_5206);
														}
														BgL_arg2002z00_5202 = BgL_res2349z00_5205;
													}
												}
												{	/* Cfa/tvector.scm 519 */
													obj_t BgL_res2350z00_5207;

													{	/* Cfa/tvector.scm 519 */
														obj_t BgL_symbolz00_5208;

														BgL_symbolz00_5208 = CNST_TABLE_REF(((long) 19));
														{	/* Cfa/tvector.scm 519 */
															obj_t BgL_arg1466z00_5209;

															BgL_arg1466z00_5209 =
																SYMBOL_TO_STRING(BgL_symbolz00_5208);
															BgL_res2350z00_5207 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_5209);
													}}
													BgL_arg2003z00_5203 = BgL_res2350z00_5207;
												}
												BgL_arg2001z00_5201 =
													string_append(BgL_arg2002z00_5202,
													BgL_arg2003z00_5203);
											}
											BgL_lengthzd2tvzd2_5200 =
												bstring_to_symbol(BgL_arg2001z00_5201);
										}
										{	/* Cfa/tvector.scm 519 */
											BgL_nodez00_bglt BgL_newzd2nodezd2_5210;

											{	/* Cfa/tvector.scm 520 */
												obj_t BgL_arg1996z00_5211;
												obj_t BgL_arg1997z00_5212;

												{	/* Cfa/tvector.scm 520 */
													obj_t BgL_arg1998z00_5213;

													{	/* Cfa/tvector.scm 520 */
														obj_t BgL_arg1999z00_5214;

														{	/* Cfa/tvector.scm 520 */
															obj_t BgL_pairz00_5215;

															BgL_pairz00_5215 =
																(((BgL_externz00_bglt) COBJECT(
																		((BgL_externz00_bglt)
																			((BgL_vlengthz00_bglt)
																				((BgL_vlengthz00_bglt)
																					BgL_nodez00_5039)))))->
																BgL_exprza2za2);
															BgL_arg1999z00_5214 = CAR(BgL_pairz00_5215);
														}
														BgL_arg1998z00_5213 =
															MAKE_YOUNG_PAIR(BgL_arg1999z00_5214, BNIL);
													}
													BgL_arg1996z00_5211 =
														MAKE_YOUNG_PAIR(BgL_lengthzd2tvzd2_5200,
														BgL_arg1998z00_5213);
												}
												BgL_arg1997z00_5212 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_vlengthz00_bglt)
																	((BgL_vlengthz00_bglt) BgL_nodez00_5039)))))->
													BgL_locz00);
												BgL_newzd2nodezd2_5210 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg1996z00_5211, BNIL, BgL_arg1997z00_5212,
													CNST_TABLE_REF(((long) 12)));
											}
											{	/* Cfa/tvector.scm 520 */

												{	/* Cfa/tvector.scm 524 */
													BgL_typez00_bglt BgL_vz00_5216;

													BgL_vz00_5216 =
														((BgL_typez00_bglt)
														BGl_za2intza2z00zztype_cachez00);
													((((BgL_nodez00_bglt)
																COBJECT(BgL_newzd2nodezd2_5210))->BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_5216), BUNSPEC);
												}
												BgL_auxz00_6107 =
													BGl_inlinezd2nodezd2zzinline_inlinez00
													(BgL_newzd2nodezd2_5210, ((long) 1), BNIL);
									}}}
								else
									{	/* Cfa/tvector.scm 518 */
										BgL_auxz00_6107 =
											((BgL_nodez00_bglt)
											((BgL_vlengthz00_bglt) BgL_nodez00_5039));
									}
							}
						}
					}
				}
				return ((obj_t) BgL_auxz00_6107);
			}
		}

	}



/* &patch!-app1671 */
	obj_t BGl_z62patchz12zd2app1671za2zzcfa_tvectorz00(obj_t BgL_envz00_5040,
		obj_t BgL_nodez00_5041)
	{
		{	/* Cfa/tvector.scm 493 */
			{
				BgL_nodez00_bglt BgL_auxz00_6165;

				BGl_patchza2z12zb0zzcfa_tvectorz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_5041)))->BgL_argsz00));
				{
					BgL_varz00_bglt BgL_auxz00_6169;

					{	/* Cfa/tvector.scm 496 */
						BgL_varz00_bglt BgL_arg1977z00_5218;

						BgL_arg1977z00_5218 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_5041)))->BgL_funz00);
						BgL_auxz00_6169 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(
								((BgL_nodez00_bglt) BgL_arg1977z00_5218)));
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_5041)))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_6169), BUNSPEC);
				}
				{	/* Cfa/tvector.scm 497 */
					BgL_variablez00_bglt BgL_vz00_5219;

					BgL_vz00_5219 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_5041)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Cfa/tvector.scm 498 */
						bool_t BgL_test2512z00_6180;

						{	/* Cfa/tvector.scm 498 */
							bool_t BgL_res2344z00_5220;

							BgL_res2344z00_5220 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_vz00_5219), BGl_globalz00zzast_varz00);
							BgL_test2512z00_6180 = BgL_res2344z00_5220;
						}
						if (BgL_test2512z00_6180)
							{	/* Cfa/tvector.scm 499 */
								bool_t BgL_test2513z00_6183;

								{	/* Cfa/tvector.scm 499 */
									BgL_valuez00_bglt BgL_arg1990z00_5221;

									BgL_arg1990z00_5221 =
										(((BgL_variablez00_bglt) COBJECT(BgL_vz00_5219))->
										BgL_valuez00);
									{	/* Cfa/tvector.scm 499 */
										bool_t BgL_res2345z00_5222;

										BgL_res2345z00_5222 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1990z00_5221), BGl_cfunz00zzast_varz00);
										BgL_test2513z00_6183 = BgL_res2345z00_5222;
									}
								}
								if (BgL_test2513z00_6183)
									{	/* Cfa/tvector.scm 500 */
										obj_t BgL_casezd2valuezd2_5223;

										BgL_casezd2valuezd2_5223 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_vz00_5219))))->BgL_idz00);
										if (
											(BgL_casezd2valuezd2_5223 == CNST_TABLE_REF(((long) 1))))
											{	/* Cfa/tvector.scm 500 */
												BgL_auxz00_6165 =
													BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(
													((BgL_appz00_bglt) BgL_nodez00_5041));
											}
										else
											{	/* Cfa/tvector.scm 500 */
												if (
													(BgL_casezd2valuezd2_5223 ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Cfa/tvector.scm 500 */
														BgL_auxz00_6165 =
															BGl_patchzd2vectorzf3z12z33zzcfa_tvectorz00(
															((BgL_appz00_bglt) BgL_nodez00_5041));
													}
												else
													{	/* Cfa/tvector.scm 500 */
														BgL_auxz00_6165 =
															((BgL_nodez00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_5041));
													}
											}
									}
								else
									{	/* Cfa/tvector.scm 504 */
										bool_t BgL_test2516z00_6202;

										if (
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_vz00_5219))))->
													BgL_idz00) == CNST_TABLE_REF(((long) 20))))
											{	/* Cfa/tvector.scm 504 */
												BgL_test2516z00_6202 =
													(
													(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_vz00_5219)))->
														BgL_modulez00) == CNST_TABLE_REF(((long) 21)));
											}
										else
											{	/* Cfa/tvector.scm 504 */
												BgL_test2516z00_6202 = ((bool_t) 0);
											}
										if (BgL_test2516z00_6202)
											{	/* Cfa/tvector.scm 504 */
												BgL_auxz00_6165 =
													BGl_patchzd2vectorzd2ze3listz12zf1zzcfa_tvectorz00(
													((BgL_appz00_bglt) BgL_nodez00_5041));
											}
										else
											{	/* Cfa/tvector.scm 504 */
												BgL_auxz00_6165 =
													((BgL_nodez00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_5041));
											}
									}
							}
						else
							{	/* Cfa/tvector.scm 498 */
								BgL_auxz00_6165 =
									((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5041));
							}
					}
				}
				return ((obj_t) BgL_auxz00_6165);
			}
		}

	}



/* &patch!-box-ref1669 */
	obj_t BGl_z62patchz12zd2boxzd2ref1669z70zzcfa_tvectorz00(obj_t
		BgL_envz00_5042, obj_t BgL_nodez00_5043)
	{
		{	/* Cfa/tvector.scm 474 */
			{
				BgL_boxzd2refzd2_bglt BgL_auxz00_6220;

				{
					BgL_varz00_bglt BgL_auxz00_6221;

					{	/* Cfa/tvector.scm 476 */
						BgL_varz00_bglt BgL_arg1975z00_5225;

						BgL_arg1975z00_5225 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_5043)))->BgL_varz00);
						BgL_auxz00_6221 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(
								((BgL_nodez00_bglt) BgL_arg1975z00_5225)));
					}
					((((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_5043)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_6221), BUNSPEC);
				}
				BgL_auxz00_6220 = ((BgL_boxzd2refzd2_bglt) BgL_nodez00_5043);
				return ((obj_t) BgL_auxz00_6220);
			}
		}

	}



/* &patch!-box-set!1667 */
	obj_t BGl_z62patchz12zd2boxzd2setz121667z62zzcfa_tvectorz00(obj_t
		BgL_envz00_5044, obj_t BgL_nodez00_5045)
	{
		{	/* Cfa/tvector.scm 465 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_auxz00_6231;

				{
					BgL_varz00_bglt BgL_auxz00_6232;

					{	/* Cfa/tvector.scm 467 */
						BgL_varz00_bglt BgL_arg1973z00_5227;

						BgL_arg1973z00_5227 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5045)))->BgL_varz00);
						BgL_auxz00_6232 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(
								((BgL_nodez00_bglt) BgL_arg1973z00_5227)));
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5045)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_6232), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6240;

					{	/* Cfa/tvector.scm 468 */
						BgL_nodez00_bglt BgL_arg1974z00_5228;

						BgL_arg1974z00_5228 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5045)))->
							BgL_valuez00);
						BgL_auxz00_6240 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1974z00_5228));
					}
					((((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5045)))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_6240), BUNSPEC);
				}
				BgL_auxz00_6231 = ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5045);
				return ((obj_t) BgL_auxz00_6231);
			}
		}

	}



/* &patch!-make-box1665 */
	obj_t BGl_z62patchz12zd2makezd2box1665z70zzcfa_tvectorz00(obj_t
		BgL_envz00_5046, obj_t BgL_nodez00_5047)
	{
		{	/* Cfa/tvector.scm 457 */
			{
				BgL_makezd2boxzd2_bglt BgL_auxz00_6249;

				{
					BgL_nodez00_bglt BgL_auxz00_6250;

					{	/* Cfa/tvector.scm 459 */
						BgL_nodez00_bglt BgL_arg1972z00_5230;

						BgL_arg1972z00_5230 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_5047)))->BgL_valuez00);
						BgL_auxz00_6250 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1972z00_5230));
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_5047)))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_auxz00_6250), BUNSPEC);
				}
				BgL_auxz00_6249 = ((BgL_makezd2boxzd2_bglt) BgL_nodez00_5047);
				return ((obj_t) BgL_auxz00_6249);
			}
		}

	}



/* &patch!-jump-ex-it1663 */
	obj_t BGl_z62patchz12zd2jumpzd2exzd2it1663za2zzcfa_tvectorz00(obj_t
		BgL_envz00_5048, obj_t BgL_nodez00_5049)
	{
		{	/* Cfa/tvector.scm 448 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_6259;

				{
					BgL_nodez00_bglt BgL_auxz00_6260;

					{	/* Cfa/tvector.scm 450 */
						BgL_nodez00_bglt BgL_arg1970z00_5232;

						BgL_arg1970z00_5232 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5049)))->
							BgL_exitz00);
						BgL_auxz00_6260 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1970z00_5232));
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5049)))->
							BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_6260), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6267;

					{	/* Cfa/tvector.scm 451 */
						BgL_nodez00_bglt BgL_arg1971z00_5233;

						BgL_arg1971z00_5233 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5049)))->
							BgL_valuez00);
						BgL_auxz00_6267 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1971z00_5233));
					}
					((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5049)))->
							BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_6267), BUNSPEC);
				}
				BgL_auxz00_6259 = ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5049);
				return ((obj_t) BgL_auxz00_6259);
			}
		}

	}



/* &patch!-set-ex-it1661 */
	obj_t BGl_z62patchz12zd2setzd2exzd2it1661za2zzcfa_tvectorz00(obj_t
		BgL_envz00_5050, obj_t BgL_nodez00_5051)
	{
		{	/* Cfa/tvector.scm 439 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_auxz00_6276;

				{
					BgL_nodez00_bglt BgL_auxz00_6277;

					{	/* Cfa/tvector.scm 441 */
						BgL_nodez00_bglt BgL_arg1968z00_5235;

						BgL_arg1968z00_5235 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5051)))->
							BgL_bodyz00);
						BgL_auxz00_6277 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1968z00_5235));
					}
					((((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5051)))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_6277), BUNSPEC);
				}
				{	/* Cfa/tvector.scm 442 */
					BgL_varz00_bglt BgL_arg1969z00_5236;

					BgL_arg1969z00_5236 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5051)))->BgL_varz00);
					BGl_patchz12z12zzcfa_tvectorz00(
						((BgL_nodez00_bglt) BgL_arg1969z00_5236));
				}
				BgL_auxz00_6276 = ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5051);
				return ((obj_t) BgL_auxz00_6276);
			}
		}

	}



/* &patch!-let-var1659 */
	obj_t BGl_z62patchz12zd2letzd2var1659z70zzcfa_tvectorz00(obj_t
		BgL_envz00_5052, obj_t BgL_nodez00_5053)
	{
		{	/* Cfa/tvector.scm 427 */
			{
				BgL_letzd2varzd2_bglt BgL_auxz00_6290;

				{	/* Cfa/tvector.scm 429 */
					obj_t BgL_g1617z00_5238;

					BgL_g1617z00_5238 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_5053)))->BgL_bindingsz00);
					{
						obj_t BgL_l1615z00_5240;

						BgL_l1615z00_5240 = BgL_g1617z00_5238;
					BgL_zc3z04anonymousza31963ze3z87_5239:
						if (PAIRP(BgL_l1615z00_5240))
							{	/* Cfa/tvector.scm 429 */
								{	/* Cfa/tvector.scm 430 */
									obj_t BgL_bindingz00_5241;

									BgL_bindingz00_5241 = CAR(BgL_l1615z00_5240);
									{	/* Cfa/tvector.scm 430 */
										obj_t BgL_valz00_5242;

										BgL_valz00_5242 = CDR(((obj_t) BgL_bindingz00_5241));
										{	/* Cfa/tvector.scm 431 */
											obj_t BgL_arg1965z00_5243;

											BgL_arg1965z00_5243 =
												BGl_patchz12z12zzcfa_tvectorz00(
												((BgL_nodez00_bglt) BgL_valz00_5242));
											{	/* Cfa/tvector.scm 431 */
												obj_t BgL_tmpz00_6300;

												BgL_tmpz00_6300 = ((obj_t) BgL_bindingz00_5241);
												SET_CDR(BgL_tmpz00_6300, BgL_arg1965z00_5243);
											}
										}
									}
								}
								{
									obj_t BgL_l1615z00_6303;

									BgL_l1615z00_6303 = CDR(BgL_l1615z00_5240);
									BgL_l1615z00_5240 = BgL_l1615z00_6303;
									goto BgL_zc3z04anonymousza31963ze3z87_5239;
								}
							}
						else
							{	/* Cfa/tvector.scm 429 */
								((bool_t) 1);
							}
					}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6305;

					{	/* Cfa/tvector.scm 433 */
						BgL_nodez00_bglt BgL_arg1967z00_5244;

						BgL_arg1967z00_5244 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_5053)))->BgL_bodyz00);
						BgL_auxz00_6305 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1967z00_5244));
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_5053)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6305), BUNSPEC);
				}
				BgL_auxz00_6290 = ((BgL_letzd2varzd2_bglt) BgL_nodez00_5053);
				return ((obj_t) BgL_auxz00_6290);
			}
		}

	}



/* &patch!-let-fun1657 */
	obj_t BGl_z62patchz12zd2letzd2fun1657z70zzcfa_tvectorz00(obj_t
		BgL_envz00_5054, obj_t BgL_nodez00_5055)
	{
		{	/* Cfa/tvector.scm 418 */
			{
				BgL_letzd2funzd2_bglt BgL_auxz00_6314;

				{	/* Cfa/tvector.scm 420 */
					obj_t BgL_g1614z00_5246;

					BgL_g1614z00_5246 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_5055)))->BgL_localsz00);
					{
						obj_t BgL_l1612z00_5248;

						BgL_l1612z00_5248 = BgL_g1614z00_5246;
					BgL_zc3z04anonymousza31958ze3z87_5247:
						if (PAIRP(BgL_l1612z00_5248))
							{	/* Cfa/tvector.scm 420 */
								BGl_patchzd2funz12zc0zzcfa_tvectorz00(CAR(BgL_l1612z00_5248));
								{
									obj_t BgL_l1612z00_6321;

									BgL_l1612z00_6321 = CDR(BgL_l1612z00_5248);
									BgL_l1612z00_5248 = BgL_l1612z00_6321;
									goto BgL_zc3z04anonymousza31958ze3z87_5247;
								}
							}
						else
							{	/* Cfa/tvector.scm 420 */
								((bool_t) 1);
							}
					}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6323;

					{	/* Cfa/tvector.scm 421 */
						BgL_nodez00_bglt BgL_arg1962z00_5249;

						BgL_arg1962z00_5249 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_5055)))->BgL_bodyz00);
						BgL_auxz00_6323 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1962z00_5249));
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_5055)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6323), BUNSPEC);
				}
				BgL_auxz00_6314 = ((BgL_letzd2funzd2_bglt) BgL_nodez00_5055);
				return ((obj_t) BgL_auxz00_6314);
			}
		}

	}



/* &patch!-switch1655 */
	obj_t BGl_z62patchz12zd2switch1655za2zzcfa_tvectorz00(obj_t BgL_envz00_5056,
		obj_t BgL_nodez00_5057)
	{
		{	/* Cfa/tvector.scm 407 */
			{
				BgL_switchz00_bglt BgL_auxz00_6332;

				{
					BgL_nodez00_bglt BgL_auxz00_6333;

					{	/* Cfa/tvector.scm 409 */
						BgL_nodez00_bglt BgL_arg1952z00_5251;

						BgL_arg1952z00_5251 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_5057)))->BgL_testz00);
						BgL_auxz00_6333 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1952z00_5251));
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_5057)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6333), BUNSPEC);
				}
				{	/* Cfa/tvector.scm 410 */
					obj_t BgL_g1611z00_5252;

					BgL_g1611z00_5252 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_5057)))->BgL_clausesz00);
					{
						obj_t BgL_l1609z00_5254;

						BgL_l1609z00_5254 = BgL_g1611z00_5252;
					BgL_zc3z04anonymousza31953ze3z87_5253:
						if (PAIRP(BgL_l1609z00_5254))
							{	/* Cfa/tvector.scm 410 */
								{	/* Cfa/tvector.scm 411 */
									obj_t BgL_clausez00_5255;

									BgL_clausez00_5255 = CAR(BgL_l1609z00_5254);
									{	/* Cfa/tvector.scm 411 */
										obj_t BgL_arg1955z00_5256;

										{	/* Cfa/tvector.scm 411 */
											obj_t BgL_arg1956z00_5257;

											BgL_arg1956z00_5257 = CDR(((obj_t) BgL_clausez00_5255));
											BgL_arg1955z00_5256 =
												BGl_patchz12z12zzcfa_tvectorz00(
												((BgL_nodez00_bglt) BgL_arg1956z00_5257));
										}
										{	/* Cfa/tvector.scm 411 */
											obj_t BgL_tmpz00_6349;

											BgL_tmpz00_6349 = ((obj_t) BgL_clausez00_5255);
											SET_CDR(BgL_tmpz00_6349, BgL_arg1955z00_5256);
										}
									}
								}
								{
									obj_t BgL_l1609z00_6352;

									BgL_l1609z00_6352 = CDR(BgL_l1609z00_5254);
									BgL_l1609z00_5254 = BgL_l1609z00_6352;
									goto BgL_zc3z04anonymousza31953ze3z87_5253;
								}
							}
						else
							{	/* Cfa/tvector.scm 410 */
								((bool_t) 1);
							}
					}
				}
				BgL_auxz00_6332 = ((BgL_switchz00_bglt) BgL_nodez00_5057);
				return ((obj_t) BgL_auxz00_6332);
			}
		}

	}



/* &patch!-fail1653 */
	obj_t BGl_z62patchz12zd2fail1653za2zzcfa_tvectorz00(obj_t BgL_envz00_5058,
		obj_t BgL_nodez00_5059)
	{
		{	/* Cfa/tvector.scm 397 */
			{
				BgL_failz00_bglt BgL_auxz00_6356;

				{
					BgL_nodez00_bglt BgL_auxz00_6357;

					{	/* Cfa/tvector.scm 399 */
						BgL_nodez00_bglt BgL_arg1948z00_5259;

						BgL_arg1948z00_5259 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_procz00);
						BgL_auxz00_6357 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1948z00_5259));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_procz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6357), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6364;

					{	/* Cfa/tvector.scm 400 */
						BgL_nodez00_bglt BgL_arg1949z00_5260;

						BgL_arg1949z00_5260 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_msgz00);
						BgL_auxz00_6364 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1949z00_5260));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_msgz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6364), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6371;

					{	/* Cfa/tvector.scm 401 */
						BgL_nodez00_bglt BgL_arg1951z00_5261;

						BgL_arg1951z00_5261 =
							(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_objz00);
						BgL_auxz00_6371 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1951z00_5261));
					}
					((((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_nodez00_5059)))->BgL_objz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6371), BUNSPEC);
				}
				BgL_auxz00_6356 = ((BgL_failz00_bglt) BgL_nodez00_5059);
				return ((obj_t) BgL_auxz00_6356);
			}
		}

	}



/* &patch!-conditional1651 */
	obj_t BGl_z62patchz12zd2conditional1651za2zzcfa_tvectorz00(obj_t
		BgL_envz00_5060, obj_t BgL_nodez00_5061)
	{
		{	/* Cfa/tvector.scm 387 */
			{
				BgL_conditionalz00_bglt BgL_auxz00_6380;

				{
					BgL_nodez00_bglt BgL_auxz00_6381;

					{	/* Cfa/tvector.scm 389 */
						BgL_nodez00_bglt BgL_arg1945z00_5263;

						BgL_arg1945z00_5263 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->BgL_testz00);
						BgL_auxz00_6381 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1945z00_5263));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6381), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6388;

					{	/* Cfa/tvector.scm 390 */
						BgL_nodez00_bglt BgL_arg1946z00_5264;

						BgL_arg1946z00_5264 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->BgL_truez00);
						BgL_auxz00_6388 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1946z00_5264));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->BgL_truez00) =
						((BgL_nodez00_bglt) BgL_auxz00_6388), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6395;

					{	/* Cfa/tvector.scm 391 */
						BgL_nodez00_bglt BgL_arg1947z00_5265;

						BgL_arg1947z00_5265 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->BgL_falsez00);
						BgL_auxz00_6395 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1947z00_5265));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_5061)))->
							BgL_falsez00) = ((BgL_nodez00_bglt) BgL_auxz00_6395), BUNSPEC);
				}
				BgL_auxz00_6380 = ((BgL_conditionalz00_bglt) BgL_nodez00_5061);
				return ((obj_t) BgL_auxz00_6380);
			}
		}

	}



/* &patch!-setq1649 */
	obj_t BGl_z62patchz12zd2setq1649za2zzcfa_tvectorz00(obj_t BgL_envz00_5062,
		obj_t BgL_nodez00_5063)
	{
		{	/* Cfa/tvector.scm 378 */
			{
				BgL_setqz00_bglt BgL_auxz00_6404;

				{
					BgL_nodez00_bglt BgL_auxz00_6405;

					{	/* Cfa/tvector.scm 380 */
						BgL_nodez00_bglt BgL_arg1943z00_5267;

						BgL_arg1943z00_5267 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_5063)))->BgL_valuez00);
						BgL_auxz00_6405 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1943z00_5267));
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_5063)))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_auxz00_6405), BUNSPEC);
				}
				{
					BgL_varz00_bglt BgL_auxz00_6412;

					{	/* Cfa/tvector.scm 381 */
						BgL_varz00_bglt BgL_arg1944z00_5268;

						BgL_arg1944z00_5268 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_5063)))->BgL_varz00);
						BgL_auxz00_6412 =
							((BgL_varz00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(
								((BgL_nodez00_bglt) BgL_arg1944z00_5268)));
					}
					((((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt) BgL_nodez00_5063)))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_6412), BUNSPEC);
				}
				BgL_auxz00_6404 = ((BgL_setqz00_bglt) BgL_nodez00_5063);
				return ((obj_t) BgL_auxz00_6404);
			}
		}

	}



/* &patch!-cast1647 */
	obj_t BGl_z62patchz12zd2cast1647za2zzcfa_tvectorz00(obj_t BgL_envz00_5064,
		obj_t BgL_nodez00_5065)
	{
		{	/* Cfa/tvector.scm 370 */
			{
				BgL_castz00_bglt BgL_auxz00_6422;

				BGl_patchz12z12zzcfa_tvectorz00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_5065)))->BgL_argz00));
				BgL_auxz00_6422 = ((BgL_castz00_bglt) BgL_nodez00_5065);
				return ((obj_t) BgL_auxz00_6422);
			}
		}

	}



/* &patch!-extern1645 */
	obj_t BGl_z62patchz12zd2extern1645za2zzcfa_tvectorz00(obj_t BgL_envz00_5066,
		obj_t BgL_nodez00_5067)
	{
		{	/* Cfa/tvector.scm 362 */
			{
				BgL_externz00_bglt BgL_auxz00_6428;

				BGl_patchza2z12zb0zzcfa_tvectorz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_5067)))->BgL_exprza2za2));
				BgL_auxz00_6428 = ((BgL_externz00_bglt) BgL_nodez00_5067);
				return ((obj_t) BgL_auxz00_6428);
			}
		}

	}



/* &patch!-funcall1643 */
	obj_t BGl_z62patchz12zd2funcall1643za2zzcfa_tvectorz00(obj_t BgL_envz00_5068,
		obj_t BgL_nodez00_5069)
	{
		{	/* Cfa/tvector.scm 353 */
			{
				BgL_funcallz00_bglt BgL_auxz00_6434;

				{
					BgL_nodez00_bglt BgL_auxz00_6435;

					{	/* Cfa/tvector.scm 355 */
						BgL_nodez00_bglt BgL_arg1939z00_5272;

						BgL_arg1939z00_5272 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_5069)))->BgL_funz00);
						BgL_auxz00_6435 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1939z00_5272));
					}
					((((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_5069)))->BgL_funz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6435), BUNSPEC);
				}
				BGl_patchza2z12zb0zzcfa_tvectorz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_5069)))->BgL_argsz00));
				BgL_auxz00_6434 = ((BgL_funcallz00_bglt) BgL_nodez00_5069);
				return ((obj_t) BgL_auxz00_6434);
			}
		}

	}



/* &patch!-app-ly1641 */
	obj_t BGl_z62patchz12zd2appzd2ly1641z70zzcfa_tvectorz00(obj_t BgL_envz00_5070,
		obj_t BgL_nodez00_5071)
	{
		{	/* Cfa/tvector.scm 344 */
			{
				BgL_appzd2lyzd2_bglt BgL_auxz00_6447;

				{
					BgL_nodez00_bglt BgL_auxz00_6448;

					{	/* Cfa/tvector.scm 346 */
						BgL_nodez00_bglt BgL_arg1937z00_5274;

						BgL_arg1937z00_5274 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5071)))->BgL_funz00);
						BgL_auxz00_6448 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1937z00_5274));
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5071)))->BgL_funz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6448), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6455;

					{	/* Cfa/tvector.scm 347 */
						BgL_nodez00_bglt BgL_arg1938z00_5275;

						BgL_arg1938z00_5275 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5071)))->BgL_argz00);
						BgL_auxz00_6455 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1938z00_5275));
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5071)))->BgL_argz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6455), BUNSPEC);
				}
				BgL_auxz00_6447 = ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5071);
				return ((obj_t) BgL_auxz00_6447);
			}
		}

	}



/* &patch!-sync1639 */
	obj_t BGl_z62patchz12zd2sync1639za2zzcfa_tvectorz00(obj_t BgL_envz00_5072,
		obj_t BgL_nodez00_5073)
	{
		{	/* Cfa/tvector.scm 334 */
			{
				BgL_syncz00_bglt BgL_auxz00_6464;

				{
					BgL_nodez00_bglt BgL_auxz00_6465;

					{	/* Cfa/tvector.scm 336 */
						BgL_nodez00_bglt BgL_arg1934z00_5277;

						BgL_arg1934z00_5277 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_mutexz00);
						BgL_auxz00_6465 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1934z00_5277));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_mutexz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6465), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6472;

					{	/* Cfa/tvector.scm 337 */
						BgL_nodez00_bglt BgL_arg1935z00_5278;

						BgL_arg1935z00_5278 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_prelockz00);
						BgL_auxz00_6472 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1935z00_5278));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_prelockz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6472), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6479;

					{	/* Cfa/tvector.scm 338 */
						BgL_nodez00_bglt BgL_arg1936z00_5279;

						BgL_arg1936z00_5279 =
							(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_bodyz00);
						BgL_auxz00_6479 =
							((BgL_nodez00_bglt)
							BGl_patchz12z12zzcfa_tvectorz00(BgL_arg1936z00_5279));
					}
					((((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_nodez00_5073)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_6479), BUNSPEC);
				}
				BgL_auxz00_6464 = ((BgL_syncz00_bglt) BgL_nodez00_5073);
				return ((obj_t) BgL_auxz00_6464);
			}
		}

	}



/* &patch!-sequence1637 */
	obj_t BGl_z62patchz12zd2sequence1637za2zzcfa_tvectorz00(obj_t BgL_envz00_5074,
		obj_t BgL_nodez00_5075)
	{
		{	/* Cfa/tvector.scm 326 */
			{
				BgL_sequencez00_bglt BgL_auxz00_6488;

				BGl_patchza2z12zb0zzcfa_tvectorz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_5075)))->BgL_nodesz00));
				BgL_auxz00_6488 = ((BgL_sequencez00_bglt) BgL_nodez00_5075);
				return ((obj_t) BgL_auxz00_6488);
			}
		}

	}



/* &patch!-closure1635 */
	obj_t BGl_z62patchz12zd2closure1635za2zzcfa_tvectorz00(obj_t BgL_envz00_5076,
		obj_t BgL_nodez00_5077)
	{
		{	/* Cfa/tvector.scm 320 */
			{	/* Cfa/tvector.scm 321 */
				obj_t BgL_arg1932z00_5282;

				BgL_arg1932z00_5282 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_5077)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2380z00zzcfa_tvectorz00, BGl_string2408z00zzcfa_tvectorz00,
					BgL_arg1932z00_5282);
			}
		}

	}



/* &patch!-var1633 */
	obj_t BGl_z62patchz12zd2var1633za2zzcfa_tvectorz00(obj_t BgL_envz00_5078,
		obj_t BgL_nodez00_5079)
	{
		{	/* Cfa/tvector.scm 314 */
			return ((obj_t) ((BgL_varz00_bglt) BgL_nodez00_5079));
		}

	}



/* &patch!-kwote/node1631 */
	obj_t BGl_z62patchz12zd2kwotezf2node1631z50zzcfa_tvectorz00(obj_t
		BgL_envz00_5080, obj_t BgL_knodez00_5081)
	{
		{	/* Cfa/tvector.scm 297 */
			{
				BgL_kwotez00_bglt BgL_auxz00_6500;

				{	/* Cfa/tvector.scm 299 */
					BgL_approxz00_bglt BgL_approxz00_5285;

					{	/* Cfa/tvector.scm 299 */
						BgL_nodez00_bglt BgL_arg1931z00_5286;

						{
							BgL_kwotezf2nodezf2_bglt BgL_auxz00_6501;

							{
								obj_t BgL_auxz00_6502;

								{	/* Cfa/tvector.scm 299 */
									BgL_objectz00_bglt BgL_tmpz00_6503;

									BgL_tmpz00_6503 =
										((BgL_objectz00_bglt)
										((BgL_kwotez00_bglt) BgL_knodez00_5081));
									BgL_auxz00_6502 = BGL_OBJECT_WIDENING(BgL_tmpz00_6503);
								}
								BgL_auxz00_6501 = ((BgL_kwotezf2nodezf2_bglt) BgL_auxz00_6502);
							}
							BgL_arg1931z00_5286 =
								(((BgL_kwotezf2nodezf2_bglt) COBJECT(BgL_auxz00_6501))->
								BgL_nodez00);
						}
						BgL_approxz00_5285 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1931z00_5286);
					}
					{	/* Cfa/tvector.scm 299 */
						obj_t BgL_tvz00_5287;

						{	/* Cfa/tvector.scm 300 */
							BgL_nodez00_bglt BgL_arg1930z00_5288;

							{
								BgL_kwotezf2nodezf2_bglt BgL_auxz00_6510;

								{
									obj_t BgL_auxz00_6511;

									{	/* Cfa/tvector.scm 300 */
										BgL_objectz00_bglt BgL_tmpz00_6512;

										BgL_tmpz00_6512 =
											((BgL_objectz00_bglt)
											((BgL_kwotez00_bglt) BgL_knodez00_5081));
										BgL_auxz00_6511 = BGL_OBJECT_WIDENING(BgL_tmpz00_6512);
									}
									BgL_auxz00_6510 =
										((BgL_kwotezf2nodezf2_bglt) BgL_auxz00_6511);
								}
								BgL_arg1930z00_5288 =
									(((BgL_kwotezf2nodezf2_bglt) COBJECT(BgL_auxz00_6510))->
									BgL_nodez00);
							}
							BgL_tvz00_5287 =
								BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_5285,
								((obj_t) BgL_arg1930z00_5288));
						}
						{	/* Cfa/tvector.scm 300 */

							if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_5287,
									BGl_tvecz00zztvector_tvectorz00))
								{	/* Cfa/tvector.scm 302 */
									BgL_kwotez00_bglt BgL_knodez00_5289;

									{	/* Cfa/tvector.scm 302 */
										long BgL_arg1923z00_5290;

										{	/* Cfa/tvector.scm 302 */
											obj_t BgL_arg1924z00_5291;

											{	/* Cfa/tvector.scm 302 */
												obj_t BgL_arg1925z00_5292;

												{	/* Cfa/tvector.scm 302 */
													long BgL_arg1816z00_5293;

													{	/* Cfa/tvector.scm 302 */
														long BgL_arg1817z00_5294;

														{	/* Cfa/tvector.scm 302 */
															long BgL_res2332z00_5295;

															BgL_res2332z00_5295 =
																BGL_OBJECT_CLASS_NUM(
																((BgL_objectz00_bglt)
																	((BgL_kwotez00_bglt) BgL_knodez00_5081)));
															BgL_arg1817z00_5294 = BgL_res2332z00_5295;
														}
														BgL_arg1816z00_5293 =
															(BgL_arg1817z00_5294 - OBJECT_TYPE);
													}
													BgL_arg1925z00_5292 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														BgL_arg1816z00_5293);
												}
												BgL_arg1924z00_5291 =
													BGl_classzd2superzd2zz__objectz00
													(BgL_arg1925z00_5292);
											}
											{	/* Cfa/tvector.scm 302 */
												long BgL_res2334z00_5296;

												{	/* Cfa/tvector.scm 302 */
													obj_t BgL_tmpz00_6528;

													BgL_tmpz00_6528 = ((obj_t) BgL_arg1924z00_5291);
													BgL_res2334z00_5296 =
														BGL_CLASS_INDEX(BgL_tmpz00_6528);
												}
												BgL_arg1923z00_5290 = BgL_res2334z00_5296;
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_kwotez00_bglt) BgL_knodez00_5081)),
											BgL_arg1923z00_5290);
									}
									{	/* Cfa/tvector.scm 302 */
										BgL_objectz00_bglt BgL_tmpz00_6534;

										BgL_tmpz00_6534 =
											((BgL_objectz00_bglt)
											((BgL_kwotez00_bglt) BgL_knodez00_5081));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6534, BFALSE);
									}
									((BgL_objectz00_bglt)
										((BgL_kwotez00_bglt) BgL_knodez00_5081));
									BgL_knodez00_5289 = ((BgL_kwotez00_bglt) BgL_knodez00_5081);
									{	/* Cfa/tvector.scm 302 */
										BgL_kwotez00_bglt BgL_nz00_5297;

										{	/* Cfa/tvector.scm 303 */
											BgL_kwotez00_bglt BgL_new1180z00_5298;

											{	/* Cfa/tvector.scm 303 */
												BgL_kwotez00_bglt BgL_new1183z00_5299;

												BgL_new1183z00_5299 =
													((BgL_kwotez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_kwotez00_bgl))));
												{	/* Cfa/tvector.scm 303 */
													long BgL_arg1921z00_5300;

													{	/* Cfa/tvector.scm 303 */
														long BgL_res2335z00_5301;

														BgL_res2335z00_5301 =
															BGL_CLASS_INDEX(BGl_kwotez00zzast_nodez00);
														BgL_arg1921z00_5300 = BgL_res2335z00_5301;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1183z00_5299),
														BgL_arg1921z00_5300);
												}
												{	/* Cfa/tvector.scm 303 */
													BgL_objectz00_bglt BgL_tmpz00_6545;

													BgL_tmpz00_6545 =
														((BgL_objectz00_bglt) BgL_new1183z00_5299);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6545, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1183z00_5299);
												BgL_new1180z00_5298 = BgL_new1183z00_5299;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1180z00_5298)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_knodez00_5289)))->
														BgL_locz00)), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_6553;

												{	/* Cfa/tvector.scm 304 */
													BgL_typez00_bglt BgL_arg1919z00_5302;

													BgL_arg1919z00_5302 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_knodez00_5289)))->
														BgL_typez00);
													BgL_auxz00_6553 =
														BGl_strictzd2nodezd2typez00zzast_nodez00((
															(BgL_typez00_bglt) ((BgL_typez00_bglt)
																BgL_tvz00_5287)), BgL_arg1919z00_5302);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1180z00_5298)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_6553), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_6561;

												{	/* Cfa/tvector.scm 305 */
													obj_t BgL_arg1920z00_5303;

													BgL_arg1920z00_5303 =
														(((BgL_kwotez00_bglt) COBJECT(
																((BgL_kwotez00_bglt)
																	((BgL_kwotez00_bglt) BgL_knodez00_5081))))->
														BgL_valuez00);
													{	/* Cfa/tvector.scm 305 */
														obj_t BgL_newz00_5304;

														BgL_newz00_5304 =
															create_struct(CNST_TABLE_REF(((long) 22)),
															(int) (((long) 2)));
														{	/* Cfa/tvector.scm 305 */
															int BgL_tmpz00_6568;

															BgL_tmpz00_6568 = (int) (((long) 1));
															STRUCT_SET(BgL_newz00_5304, BgL_tmpz00_6568,
																BgL_arg1920z00_5303);
														}
														{	/* Cfa/tvector.scm 305 */
															int BgL_tmpz00_6571;

															BgL_tmpz00_6571 = (int) (((long) 0));
															STRUCT_SET(BgL_newz00_5304, BgL_tmpz00_6571,
																BgL_tvz00_5287);
														}
														BgL_auxz00_6561 = BgL_newz00_5304;
												}}
												((((BgL_kwotez00_bglt) COBJECT(BgL_new1180z00_5298))->
														BgL_valuez00) = ((obj_t) BgL_auxz00_6561), BUNSPEC);
											}
											BgL_nz00_5297 = BgL_new1180z00_5298;
										}
										{	/* Cfa/tvector.scm 303 */

											{	/* Cfa/tvector.scm 306 */
												BgL_kwotezf2cinfozf2_bglt BgL_wide1186z00_5305;

												BgL_wide1186z00_5305 =
													((BgL_kwotezf2cinfozf2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_kwotezf2cinfozf2_bgl))));
												{	/* Cfa/tvector.scm 306 */
													obj_t BgL_auxz00_6579;
													BgL_objectz00_bglt BgL_tmpz00_6576;

													BgL_auxz00_6579 = ((obj_t) BgL_wide1186z00_5305);
													BgL_tmpz00_6576 =
														((BgL_objectz00_bglt)
														((BgL_kwotez00_bglt) BgL_nz00_5297));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6576,
														BgL_auxz00_6579);
												}
												((BgL_objectz00_bglt)
													((BgL_kwotez00_bglt) BgL_nz00_5297));
												{	/* Cfa/tvector.scm 306 */
													long BgL_arg1918z00_5306;

													{	/* Cfa/tvector.scm 306 */
														long BgL_res2336z00_5307;

														BgL_res2336z00_5307 =
															BGL_CLASS_INDEX
															(BGl_kwotezf2Cinfozf2zzcfa_infoz00);
														BgL_arg1918z00_5306 = BgL_res2336z00_5307;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_kwotez00_bglt) BgL_nz00_5297)),
														BgL_arg1918z00_5306);
												}
												((BgL_kwotez00_bglt)
													((BgL_kwotez00_bglt) BgL_nz00_5297));
											}
											{
												BgL_kwotezf2cinfozf2_bglt BgL_auxz00_6590;

												{
													obj_t BgL_auxz00_6591;

													{	/* Cfa/tvector.scm 307 */
														BgL_objectz00_bglt BgL_tmpz00_6592;

														BgL_tmpz00_6592 =
															((BgL_objectz00_bglt)
															((BgL_kwotez00_bglt) BgL_nz00_5297));
														BgL_auxz00_6591 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6592);
													}
													BgL_auxz00_6590 =
														((BgL_kwotezf2cinfozf2_bglt) BgL_auxz00_6591);
												}
												((((BgL_kwotezf2cinfozf2_bglt)
															COBJECT(BgL_auxz00_6590))->BgL_approxz00) =
													((BgL_approxz00_bglt) BgL_approxz00_5285), BUNSPEC);
											}
											BgL_auxz00_6500 = ((BgL_kwotez00_bglt) BgL_nz00_5297);
								}}}
							else
								{	/* Cfa/tvector.scm 308 */
									BgL_kwotez00_bglt BgL_tmp1188z00_5308;

									{	/* Cfa/tvector.scm 308 */
										long BgL_arg1927z00_5309;

										{	/* Cfa/tvector.scm 308 */
											obj_t BgL_arg1928z00_5310;

											{	/* Cfa/tvector.scm 308 */
												obj_t BgL_arg1929z00_5311;

												{	/* Cfa/tvector.scm 308 */
													long BgL_arg1816z00_5312;

													{	/* Cfa/tvector.scm 308 */
														long BgL_arg1817z00_5313;

														{	/* Cfa/tvector.scm 308 */
															long BgL_res2337z00_5314;

															BgL_res2337z00_5314 =
																BGL_OBJECT_CLASS_NUM(
																((BgL_objectz00_bglt)
																	((BgL_kwotez00_bglt) BgL_knodez00_5081)));
															BgL_arg1817z00_5313 = BgL_res2337z00_5314;
														}
														BgL_arg1816z00_5312 =
															(BgL_arg1817z00_5313 - OBJECT_TYPE);
													}
													BgL_arg1929z00_5311 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														BgL_arg1816z00_5312);
												}
												BgL_arg1928z00_5310 =
													BGl_classzd2superzd2zz__objectz00
													(BgL_arg1929z00_5311);
											}
											{	/* Cfa/tvector.scm 308 */
												long BgL_res2339z00_5315;

												{	/* Cfa/tvector.scm 308 */
													obj_t BgL_tmpz00_6605;

													BgL_tmpz00_6605 = ((obj_t) BgL_arg1928z00_5310);
													BgL_res2339z00_5315 =
														BGL_CLASS_INDEX(BgL_tmpz00_6605);
												}
												BgL_arg1927z00_5309 = BgL_res2339z00_5315;
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_kwotez00_bglt) BgL_knodez00_5081)),
											BgL_arg1927z00_5309);
									}
									{	/* Cfa/tvector.scm 308 */
										BgL_objectz00_bglt BgL_tmpz00_6611;

										BgL_tmpz00_6611 =
											((BgL_objectz00_bglt)
											((BgL_kwotez00_bglt) BgL_knodez00_5081));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6611, BFALSE);
									}
									((BgL_objectz00_bglt)
										((BgL_kwotez00_bglt) BgL_knodez00_5081));
									BgL_tmp1188z00_5308 =
										((BgL_kwotez00_bglt)
										((BgL_kwotez00_bglt) BgL_knodez00_5081));
									{	/* Cfa/tvector.scm 308 */
										BgL_kwotezf2cinfozf2_bglt BgL_wide1190z00_5316;

										BgL_wide1190z00_5316 =
											((BgL_kwotezf2cinfozf2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_kwotezf2cinfozf2_bgl))));
										{	/* Cfa/tvector.scm 308 */
											obj_t BgL_auxz00_6623;
											BgL_objectz00_bglt BgL_tmpz00_6620;

											BgL_auxz00_6623 = ((obj_t) BgL_wide1190z00_5316);
											BgL_tmpz00_6620 =
												((BgL_objectz00_bglt)
												((BgL_kwotez00_bglt) BgL_tmp1188z00_5308));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6620, BgL_auxz00_6623);
										}
										((BgL_objectz00_bglt)
											((BgL_kwotez00_bglt) BgL_tmp1188z00_5308));
										{	/* Cfa/tvector.scm 308 */
											long BgL_arg1926z00_5317;

											{	/* Cfa/tvector.scm 308 */
												long BgL_res2340z00_5318;

												BgL_res2340z00_5318 =
													BGL_CLASS_INDEX(BGl_kwotezf2Cinfozf2zzcfa_infoz00);
												BgL_arg1926z00_5317 = BgL_res2340z00_5318;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_kwotez00_bglt) BgL_tmp1188z00_5308)),
												BgL_arg1926z00_5317);
										}
										((BgL_kwotez00_bglt)
											((BgL_kwotez00_bglt) BgL_tmp1188z00_5308));
									}
									{
										BgL_kwotezf2cinfozf2_bglt BgL_auxz00_6634;

										{
											obj_t BgL_auxz00_6635;

											{	/* Cfa/tvector.scm 309 */
												BgL_objectz00_bglt BgL_tmpz00_6636;

												BgL_tmpz00_6636 =
													((BgL_objectz00_bglt)
													((BgL_kwotez00_bglt) BgL_tmp1188z00_5308));
												BgL_auxz00_6635 = BGL_OBJECT_WIDENING(BgL_tmpz00_6636);
											}
											BgL_auxz00_6634 =
												((BgL_kwotezf2cinfozf2_bglt) BgL_auxz00_6635);
										}
										((((BgL_kwotezf2cinfozf2_bglt) COBJECT(BgL_auxz00_6634))->
												BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_approxz00_5285), BUNSPEC);
									}
									BgL_auxz00_6500 = ((BgL_kwotez00_bglt) BgL_tmp1188z00_5308);
				}}}}
				return ((obj_t) BgL_auxz00_6500);
			}
		}

	}



/* &patch!-kwote1629 */
	obj_t BGl_z62patchz12zd2kwote1629za2zzcfa_tvectorz00(obj_t BgL_envz00_5082,
		obj_t BgL_nodez00_5083)
	{
		{	/* Cfa/tvector.scm 291 */
			return ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_5083));
		}

	}



/* &patch!-atom1627 */
	obj_t BGl_z62patchz12zd2atom1627za2zzcfa_tvectorz00(obj_t BgL_envz00_5084,
		obj_t BgL_nodez00_5085)
	{
		{	/* Cfa/tvector.scm 285 */
			return ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_5085));
		}

	}



/* &get-vector-item-type1623 */
	BgL_typez00_bglt
		BGl_z62getzd2vectorzd2itemzd2type1623zb0zzcfa_tvectorz00(obj_t
		BgL_envz00_5086, obj_t BgL_nodez00_5087)
	{
		{	/* Cfa/tvector.scm 213 */
			{	/* Cfa/tvector.scm 215 */
				bool_t BgL_test2522z00_6648;

				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_6649;

					{
						obj_t BgL_auxz00_6650;

						{	/* Cfa/tvector.scm 215 */
							BgL_objectz00_bglt BgL_tmpz00_6651;

							BgL_tmpz00_6651 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_5087));
							BgL_auxz00_6650 = BGL_OBJECT_WIDENING(BgL_tmpz00_6651);
						}
						BgL_auxz00_6649 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_6650);
					}
					BgL_test2522z00_6648 =
						(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_6649))->
						BgL_seenzf3zf3);
				}
				if (BgL_test2522z00_6648)
					{	/* Cfa/tvector.scm 217 */
						BgL_approxz00_bglt BgL_arg1916z00_5322;

						{
							BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_6657;

							{
								obj_t BgL_auxz00_6658;

								{	/* Cfa/tvector.scm 217 */
									BgL_objectz00_bglt BgL_tmpz00_6659;

									BgL_tmpz00_6659 =
										((BgL_objectz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_5087));
									BgL_auxz00_6658 = BGL_OBJECT_WIDENING(BgL_tmpz00_6659);
								}
								BgL_auxz00_6657 =
									((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_6658);
							}
							BgL_arg1916z00_5322 =
								(((BgL_valloczf2cinfozb2optimz40_bglt)
									COBJECT(BgL_auxz00_6657))->BgL_valuezd2approxzd2);
						}
						return
							(((BgL_approxz00_bglt) COBJECT(BgL_arg1916z00_5322))->
							BgL_typez00);
					}
				else
					{	/* Cfa/tvector.scm 215 */
						return ((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00);
					}
			}
		}

	}



/* &get-vector-item-type1621 */
	BgL_typez00_bglt
		BGl_z62getzd2vectorzd2itemzd2type1621zb0zzcfa_tvectorz00(obj_t
		BgL_envz00_5088, obj_t BgL_appz00_5089)
	{
		{	/* Cfa/tvector.scm 204 */
			{	/* Cfa/tvector.scm 206 */
				bool_t BgL_test2523z00_6667;

				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_6668;

					{
						obj_t BgL_auxz00_6669;

						{	/* Cfa/tvector.scm 206 */
							BgL_objectz00_bglt BgL_tmpz00_6670;

							BgL_tmpz00_6670 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_5089));
							BgL_auxz00_6669 = BGL_OBJECT_WIDENING(BgL_tmpz00_6670);
						}
						BgL_auxz00_6668 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_6669);
					}
					BgL_test2523z00_6667 =
						(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_6668))->
						BgL_seenzf3zf3);
				}
				if (BgL_test2523z00_6667)
					{	/* Cfa/tvector.scm 208 */
						BgL_approxz00_bglt BgL_arg1914z00_5324;

						{
							BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_6676;

							{
								obj_t BgL_auxz00_6677;

								{	/* Cfa/tvector.scm 208 */
									BgL_objectz00_bglt BgL_tmpz00_6678;

									BgL_tmpz00_6678 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_5089));
									BgL_auxz00_6677 = BGL_OBJECT_WIDENING(BgL_tmpz00_6678);
								}
								BgL_auxz00_6676 =
									((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_6677);
							}
							BgL_arg1914z00_5324 =
								(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_6676))->
								BgL_valuezd2approxzd2);
						}
						return
							(((BgL_approxz00_bglt) COBJECT(BgL_arg1914z00_5324))->
							BgL_typez00);
					}
				else
					{	/* Cfa/tvector.scm 206 */
						return ((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00);
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_tvectorz00()
	{
		{	/* Cfa/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_typez00(((long) 410404681),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 433305537),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_typez00(((long) 93933701),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(((long) 69163961),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 385476796),
				BSTRING_TO_STRING(BGl_string2409z00zzcfa_tvectorz00));
		}

	}

#ifdef __cplusplus
}
#endif
