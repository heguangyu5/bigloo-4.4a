/*===========================================================================*/
/*   (Ast/dump.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/dump.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexp1330z53zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2getfield1355z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2new1359z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_dumpz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2setfield1357z81zzast_dumpz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2var1337z81zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_dumpz00();
	static obj_t BGl_z62nodezd2ze3sexpzd2switch1383z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2condition1379z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2vlength1361z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2vsetz121365z93zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2instanceo1369z81zzast_dumpz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2makezd2box1397z53zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2cast1375z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2setq1377z81zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_z62nodezd2ze3sexpzd2jumpzd2exzd2i1391z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_dumpz00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2funcall1351z81zzast_dumpz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2kwote1341z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpz53zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2retblock1393z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2boxzd2ref1399z53zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2valloc1367z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_dumpz00 = BUNSPEC;
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_z62nodezd2ze3sexpzd2atom1335z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2appzd2ly1349z53zzast_dumpz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_dumpz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzast_dumpz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2boxzd2setz121401z41zzast_dumpz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2return1395z81zzast_dumpz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2app1347z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2letzd2fun1385z53zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2sync1345z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2pragma1353z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2sequence1343z81zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2fail1381z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_dumpz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_dumpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_dumpz00();
	static obj_t BGl_z62nodezd2ze3sexpzd2setzd2exzd2it1389z81zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2genpatchi1405z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2castzd2null1372z53zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern obj_t BGl_genpatchidz00zzast_nodez00;
	static obj_t BGl_shapezd2typedzd2nodez00zzast_dumpz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2closure1339z81zzast_dumpz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2patch1403z81zzast_dumpz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2ze3sexpzd2letzd2var1387z53zzast_dumpz00(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62nodezd2ze3sexpzd2vref1363z81zzast_dumpz00(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[44];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2438z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2490za7,
		BGl_z62nodezd2ze3sexp1330z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2441z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2491za7,
		BGl_z62nodezd2ze3sexpzd2atom1335z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2443z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2492za7,
		BGl_z62nodezd2ze3sexpzd2var1337z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2444z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2493za7,
		BGl_z62nodezd2ze3sexpzd2closure1339z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2445z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2494za7,
		BGl_z62nodezd2ze3sexpzd2kwote1341z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2446z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2495za7,
		BGl_z62nodezd2ze3sexpzd2sequence1343z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2447z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2496za7,
		BGl_z62nodezd2ze3sexpzd2sync1345z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2448z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2497za7,
		BGl_z62nodezd2ze3sexpzd2app1347z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2449z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2498za7,
		BGl_z62nodezd2ze3sexpzd2appzd2ly1349z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2450z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2499za7,
		BGl_z62nodezd2ze3sexpzd2funcall1351z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2451z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2500za7,
		BGl_z62nodezd2ze3sexpzd2pragma1353z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2452z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2501za7,
		BGl_z62nodezd2ze3sexpzd2getfield1355z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2453z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2502za7,
		BGl_z62nodezd2ze3sexpzd2setfield1357z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2454z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2503za7,
		BGl_z62nodezd2ze3sexpzd2new1359z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2455z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2504za7,
		BGl_z62nodezd2ze3sexpzd2vlength1361z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2456z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2505za7,
		BGl_z62nodezd2ze3sexpzd2vref1363z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2457z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2506za7,
		BGl_z62nodezd2ze3sexpzd2vsetz121365z93zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2458z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2507za7,
		BGl_z62nodezd2ze3sexpzd2valloc1367z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2459z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2508za7,
		BGl_z62nodezd2ze3sexpzd2instanceo1369z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2460z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2509za7,
		BGl_z62nodezd2ze3sexpzd2castzd2null1372z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2461z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2510za7,
		BGl_z62nodezd2ze3sexpzd2cast1375z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2462z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2511za7,
		BGl_z62nodezd2ze3sexpzd2setq1377z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2463z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2512za7,
		BGl_z62nodezd2ze3sexpzd2condition1379z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2464z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2513za7,
		BGl_z62nodezd2ze3sexpzd2fail1381z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2465z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2514za7,
		BGl_z62nodezd2ze3sexpzd2switch1383z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2466z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2515za7,
		BGl_z62nodezd2ze3sexpzd2letzd2fun1385z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2467z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2516za7,
		BGl_z62nodezd2ze3sexpzd2letzd2var1387z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2468z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2517za7,
		BGl_z62nodezd2ze3sexpzd2setzd2exzd2it1389z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2469z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2518za7,
		BGl_z62nodezd2ze3sexpzd2jumpzd2exzd2i1391z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2470z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2519za7,
		BGl_z62nodezd2ze3sexpzd2retblock1393z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2471z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2520za7,
		BGl_z62nodezd2ze3sexpzd2return1395z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2472z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2521za7,
		BGl_z62nodezd2ze3sexpzd2makezd2box1397z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2473z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2522za7,
		BGl_z62nodezd2ze3sexpzd2boxzd2ref1399z53zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2474z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2523za7,
		BGl_z62nodezd2ze3sexpzd2boxzd2setz121401z41zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2524za7,
		BGl_z62nodezd2ze3sexpzd2patch1403z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2476z00zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2525za7,
		BGl_z62nodezd2ze3sexpzd2genpatchi1405z81zzast_dumpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2437z00zzast_dumpz00,
		BgL_bgl_string2437za700za7za7a2526za7, "::", 2);
	      DEFINE_STRING(BGl_string2439z00zzast_dumpz00,
		BgL_bgl_string2439za700za7za7a2527za7, "node->sexp1330", 14);
	      DEFINE_STRING(BGl_string2440z00zzast_dumpz00,
		BgL_bgl_string2440za700za7za7a2528za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2442z00zzast_dumpz00,
		BgL_bgl_string2442za700za7za7a2529za7, "node->sexp", 10);
	      DEFINE_STRING(BGl_string2477z00zzast_dumpz00,
		BgL_bgl_string2477za700za7za7a2530za7, "side-effect:", 12);
	      DEFINE_STRING(BGl_string2478z00zzast_dumpz00,
		BgL_bgl_string2478za700za7za7a2531za7, "]", 1);
	      DEFINE_STRING(BGl_string2479z00zzast_dumpz00,
		BgL_bgl_string2479za700za7za7a2532za7, "[::", 3);
	      DEFINE_STRING(BGl_string2480z00zzast_dumpz00,
		BgL_bgl_string2480za700za7za7a2533za7, "valloc::", 8);
	      DEFINE_STRING(BGl_string2481z00zzast_dumpz00,
		BgL_bgl_string2481za700za7za7a2534za7, "ftype:", 6);
	      DEFINE_STRING(BGl_string2482z00zzast_dumpz00,
		BgL_bgl_string2482za700za7za7a2535za7, "type:", 5);
	      DEFINE_STRING(BGl_string2483z00zzast_dumpz00,
		BgL_bgl_string2483za700za7za7a2536za7, "~a[::~a]", 8);
	      DEFINE_STRING(BGl_string2484z00zzast_dumpz00,
		BgL_bgl_string2484za700za7za7a2537za7, "~a{~a}", 6);
	      DEFINE_STRING(BGl_string2485z00zzast_dumpz00,
		BgL_bgl_string2485za700za7za7a2538za7, "ast_dump", 8);
	      DEFINE_STRING(BGl_string2486z00zzast_dumpz00,
		BgL_bgl_string2486za700za7za7a2539za7,
		"(quote ()) closure quote a-tvector begin unsafe :prelock synchronize apply funcall funcall-el elight funcall-l light free-pragma pragma getfield setfield new vlength vref vref-ur vset! vset-ur! isa? |cast-null::| cast set! if failure case :stackable labels let set-exit jump-exit retblock return make-box box-ref box-set! patch genpatchid node->sexp1330 ",
		354);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
		BgL_bgl_za762nodeza7d2za7e3sex2540za7,
		BGl_z62nodezd2ze3sexpz53zzast_dumpz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_dumpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long
		BgL_checksumz00_3714, char *BgL_fromz00_3715)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_dumpz00))
				{
					BGl_requirezd2initializa7ationz75zzast_dumpz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_dumpz00();
					BGl_libraryzd2moduleszd2initz00zzast_dumpz00();
					BGl_cnstzd2initzd2zzast_dumpz00();
					BGl_importedzd2moduleszd2initz00zzast_dumpz00();
					BGl_genericzd2initzd2zzast_dumpz00();
					BGl_methodzd2initzd2zzast_dumpz00();
					return BGl_toplevelzd2initzd2zzast_dumpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_dump");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "ast_dump");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_dump");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			{	/* Ast/dump.scm 14 */
				obj_t BgL_cportz00_3000;

				{	/* Ast/dump.scm 14 */
					obj_t BgL_stringz00_3008;

					BgL_stringz00_3008 = BGl_string2486z00zzast_dumpz00;
					{	/* Ast/dump.scm 14 */
						obj_t BgL_startz00_3009;

						BgL_startz00_3009 = BINT(((long) 0));
						{	/* Ast/dump.scm 14 */
							obj_t BgL_endz00_3010;

							BgL_endz00_3010 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3008)));
							{	/* Ast/dump.scm 14 */

								BgL_cportz00_3000 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3008, BgL_startz00_3009, BgL_endz00_3010);
				}}}}
				{
					long BgL_iz00_3001;

					BgL_iz00_3001 = ((long) 43);
				BgL_loopz00_3002:
					if ((BgL_iz00_3001 == ((long) -1)))
						{	/* Ast/dump.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/dump.scm 14 */
							{	/* Ast/dump.scm 14 */
								obj_t BgL_arg2488z00_3004;

								{	/* Ast/dump.scm 14 */

									{	/* Ast/dump.scm 14 */
										obj_t BgL_locationz00_3006;

										BgL_locationz00_3006 = BBOOL(((bool_t) 0));
										{	/* Ast/dump.scm 14 */

											BgL_arg2488z00_3004 =
												BGl_readz00zz__readerz00(BgL_cportz00_3000,
												BgL_locationz00_3006);
										}
									}
								}
								{	/* Ast/dump.scm 14 */
									int BgL_tmpz00_3750;

									BgL_tmpz00_3750 = (int) (BgL_iz00_3001);
									CNST_TABLE_SET(BgL_tmpz00_3750, BgL_arg2488z00_3004);
							}}
							{	/* Ast/dump.scm 14 */
								int BgL_auxz00_3007;

								BgL_auxz00_3007 = (int) ((BgL_iz00_3001 - ((long) 1)));
								{
									long BgL_iz00_3755;

									BgL_iz00_3755 = (long) (BgL_auxz00_3007);
									BgL_iz00_3001 = BgL_iz00_3755;
									goto BgL_loopz00_3002;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			return BUNSPEC;
		}

	}



/* shape-typed-node */
	obj_t BGl_shapezd2typedzd2nodez00zzast_dumpz00(obj_t BgL_idz00_48,
		BgL_typez00_bglt BgL_typez00_49)
	{
		{	/* Ast/dump.scm 422 */
			if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
				{	/* Ast/dump.scm 424 */
					obj_t BgL_arg1462z00_1384;

					{	/* Ast/dump.scm 424 */
						obj_t BgL_arg1464z00_1385;
						obj_t BgL_arg1465z00_1386;

						{	/* Ast/dump.scm 424 */
							obj_t BgL_res2336z00_2402;

							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1466z00_2401;

								BgL_arg1466z00_2401 = SYMBOL_TO_STRING(BgL_idz00_48);
								BgL_res2336z00_2402 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_2401);
							}
							BgL_arg1464z00_1385 = BgL_res2336z00_2402;
						}
						BgL_arg1465z00_1386 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_typez00_49));
						BgL_arg1462z00_1384 =
							string_append_3(BgL_arg1464z00_1385,
							BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_1386);
					}
					return bstring_to_symbol(BgL_arg1462z00_1384);
				}
			else
				{	/* Ast/dump.scm 423 */
					return BgL_idz00_48;
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_proc2438z00zzast_dumpz00,
				BGl_nodez00zzast_nodez00, BGl_string2439z00zzast_dumpz00);
		}

	}



/* &node->sexp1330 */
	obj_t BGl_z62nodezd2ze3sexp1330z53zzast_dumpz00(obj_t BgL_envz00_2890,
		obj_t BgL_nodez00_2891)
	{
		{	/* Ast/dump.scm 37 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string2440z00zzast_dumpz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2891)));
		}

	}



/* node->sexp */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt
		BgL_nodez00_14)
	{
		{	/* Ast/dump.scm 37 */
			{	/* Ast/dump.scm 37 */
				obj_t BgL_method1332z00_1391;

				{	/* Ast/dump.scm 37 */
					obj_t BgL_res2348z00_2441;

					{	/* Ast/dump.scm 37 */
						long BgL_objzd2classzd2numz00_2406;

						{	/* Ast/dump.scm 37 */
							long BgL_res2338z00_2409;

							BgL_res2338z00_2409 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_14));
							BgL_objzd2classzd2numz00_2406 = BgL_res2338z00_2409;
						}
						{	/* Ast/dump.scm 37 */
							obj_t BgL_arg1813z00_2407;

							BgL_arg1813z00_2407 =
								PROCEDURE_REF(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
								(int) (((long) 1)));
							{	/* Ast/dump.scm 37 */
								int BgL_offsetz00_2411;

								BgL_offsetz00_2411 = (int) (BgL_objzd2classzd2numz00_2406);
								{	/* Ast/dump.scm 37 */
									long BgL_offsetz00_2412;

									BgL_offsetz00_2412 =
										((long) (BgL_offsetz00_2411) - OBJECT_TYPE);
									{	/* Ast/dump.scm 37 */
										long BgL_modz00_2413;

										BgL_modz00_2413 =
											(BgL_offsetz00_2412 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/dump.scm 37 */
											long BgL_restz00_2415;

											BgL_restz00_2415 =
												(BgL_offsetz00_2412 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/dump.scm 37 */

												{	/* Ast/dump.scm 37 */
													obj_t BgL_bucketz00_2417;

													BgL_bucketz00_2417 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2407), BgL_modz00_2413);
													BgL_res2348z00_2441 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2417), BgL_restz00_2415);
					}}}}}}}}
					BgL_method1332z00_1391 = BgL_res2348z00_2441;
				}
				return
					PROCEDURE_ENTRY(BgL_method1332z00_1391) (BgL_method1332z00_1391,
					((obj_t) BgL_nodez00_14), BEOA);
			}
		}

	}



/* &node->sexp */
	obj_t BGl_z62nodezd2ze3sexpz53zzast_dumpz00(obj_t BgL_envz00_2892,
		obj_t BgL_nodez00_2893)
	{
		{	/* Ast/dump.scm 37 */
			return
				BGl_nodezd2ze3sexpz31zzast_dumpz00(
				((BgL_nodez00_bglt) BgL_nodez00_2893));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_atomz00zzast_nodez00,
				BGl_proc2441z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_varz00zzast_nodez00,
				BGl_proc2443z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_closurez00zzast_nodez00,
				BGl_proc2444z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_kwotez00zzast_nodez00,
				BGl_proc2445z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2446z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_syncz00zzast_nodez00,
				BGl_proc2447z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_appz00zzast_nodez00,
				BGl_proc2448z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2449z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_funcallz00zzast_nodez00,
				BGl_proc2450z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc2451z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_getfieldz00zzast_nodez00,
				BGl_proc2452z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_setfieldz00zzast_nodez00,
				BGl_proc2453z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_newz00zzast_nodez00,
				BGl_proc2454z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc2455z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vrefz00zzast_nodez00,
				BGl_proc2456z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc2457z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_vallocz00zzast_nodez00,
				BGl_proc2458z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_instanceofz00zzast_nodez00, BGl_proc2459z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc2460z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_castz00zzast_nodez00,
				BGl_proc2461z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_setqz00zzast_nodez00,
				BGl_proc2462z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2463z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_failz00zzast_nodez00,
				BGl_proc2464z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_switchz00zzast_nodez00,
				BGl_proc2465z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2466z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2467z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2468z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2469z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_retblockz00zzast_nodez00,
				BGl_proc2470z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_returnz00zzast_nodez00,
				BGl_proc2471z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2472z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2473z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2474z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00, BGl_patchz00zzast_nodez00,
				BGl_proc2475z00zzast_dumpz00, BGl_string2442z00zzast_dumpz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3sexpzd2envze3zzast_dumpz00,
				BGl_genpatchidz00zzast_nodez00, BGl_proc2476z00zzast_dumpz00,
				BGl_string2442z00zzast_dumpz00);
		}

	}



/* &node->sexp-genpatchi1405 */
	obj_t BGl_z62nodezd2ze3sexpzd2genpatchi1405z81zzast_dumpz00(obj_t
		BgL_envz00_2929, obj_t BgL_nodez00_2930)
	{
		{	/* Ast/dump.scm 437 */
			{	/* Ast/dump.scm 439 */
				obj_t BgL_arg2269z00_3015;

				{	/* Ast/dump.scm 439 */
					long BgL_arg2270z00_3016;

					BgL_arg2270z00_3016 =
						(((BgL_genpatchidz00_bglt) COBJECT(
								((BgL_genpatchidz00_bglt) BgL_nodez00_2930)))->BgL_indexz00);
					BgL_arg2269z00_3015 =
						MAKE_YOUNG_PAIR(BINT(BgL_arg2270z00_3016), BNIL);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BgL_arg2269z00_3015);
		}}

	}



/* &node->sexp-patch1403 */
	obj_t BGl_z62nodezd2ze3sexpzd2patch1403z81zzast_dumpz00(obj_t BgL_envz00_2931,
		obj_t BgL_nodez00_2932)
	{
		{	/* Ast/dump.scm 430 */
			{	/* Ast/dump.scm 432 */
				obj_t BgL_arg2260z00_3018;
				obj_t BgL_arg2261z00_3019;

				{	/* Ast/dump.scm 432 */
					BgL_typez00_bglt BgL_arg2262z00_3020;

					BgL_arg2262z00_3020 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_patchz00_bglt) BgL_nodez00_2932))))->BgL_typez00);
					{	/* Ast/dump.scm 432 */
						obj_t BgL_idz00_3021;

						BgL_idz00_3021 = CNST_TABLE_REF(((long) 2));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3022;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3023;
									obj_t BgL_arg1465z00_3024;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3025;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3026;

											BgL_arg1466z00_3026 = SYMBOL_TO_STRING(BgL_idz00_3021);
											BgL_res2336z00_3025 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3026);
										}
										BgL_arg1464z00_3023 = BgL_res2336z00_3025;
									}
									BgL_arg1465z00_3024 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2262z00_3020));
									BgL_arg1462z00_3022 =
										string_append_3(BgL_arg1464z00_3023,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3024);
								}
								BgL_arg2260z00_3018 = bstring_to_symbol(BgL_arg1462z00_3022);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2260z00_3018 = BgL_idz00_3021;
							}
					}
				}
				{	/* Ast/dump.scm 432 */
					obj_t BgL_arg2263z00_3027;
					obj_t BgL_arg2264z00_3028;

					{	/* Ast/dump.scm 432 */
						BgL_varz00_bglt BgL_arg2265z00_3029;

						BgL_arg2265z00_3029 =
							(((BgL_patchz00_bglt) COBJECT(
									((BgL_patchz00_bglt) BgL_nodez00_2932)))->BgL_refz00);
						BgL_arg2263z00_3027 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							((BgL_nodez00_bglt) BgL_arg2265z00_3029));
					}
					{	/* Ast/dump.scm 432 */
						obj_t BgL_arg2267z00_3030;

						{	/* Ast/dump.scm 432 */
							obj_t BgL_arg2268z00_3031;

							BgL_arg2268z00_3031 =
								(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt)
											((BgL_patchz00_bglt) BgL_nodez00_2932))))->BgL_valuez00);
							BgL_arg2267z00_3030 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								((BgL_nodez00_bglt) BgL_arg2268z00_3031));
						}
						BgL_arg2264z00_3028 = MAKE_YOUNG_PAIR(BgL_arg2267z00_3030, BNIL);
					}
					BgL_arg2261z00_3019 =
						MAKE_YOUNG_PAIR(BgL_arg2263z00_3027, BgL_arg2264z00_3028);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2260z00_3018, BgL_arg2261z00_3019);
			}
		}

	}



/* &node->sexp-box-set!1401 */
	obj_t BGl_z62nodezd2ze3sexpzd2boxzd2setz121401z41zzast_dumpz00(obj_t
		BgL_envz00_2933, obj_t BgL_nodez00_2934)
	{
		{	/* Ast/dump.scm 414 */
			{	/* Ast/dump.scm 416 */
				obj_t BgL_arg2253z00_3033;

				{	/* Ast/dump.scm 416 */
					obj_t BgL_arg2254z00_3034;
					obj_t BgL_arg2256z00_3035;

					{	/* Ast/dump.scm 416 */
						BgL_varz00_bglt BgL_arg2257z00_3036;

						BgL_arg2257z00_3036 =
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2934)))->BgL_varz00);
						BgL_arg2254z00_3034 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							((BgL_nodez00_bglt) BgL_arg2257z00_3036));
					}
					BgL_arg2256z00_3035 =
						MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2934)))->
								BgL_valuez00)), BNIL);
					BgL_arg2253z00_3033 =
						MAKE_YOUNG_PAIR(BgL_arg2254z00_3034, BgL_arg2256z00_3035);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg2253z00_3033);
		}}

	}



/* &node->sexp-box-ref1399 */
	obj_t BGl_z62nodezd2ze3sexpzd2boxzd2ref1399z53zzast_dumpz00(obj_t
		BgL_envz00_2935, obj_t BgL_nodez00_2936)
	{
		{	/* Ast/dump.scm 406 */
			{	/* Ast/dump.scm 408 */
				obj_t BgL_arg2248z00_3038;
				obj_t BgL_arg2249z00_3039;

				{	/* Ast/dump.scm 408 */
					BgL_typez00_bglt BgL_arg2250z00_3040;

					BgL_arg2250z00_3040 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2936))))->BgL_typez00);
					{	/* Ast/dump.scm 408 */
						obj_t BgL_idz00_3041;

						BgL_idz00_3041 = CNST_TABLE_REF(((long) 4));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3042;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3043;
									obj_t BgL_arg1465z00_3044;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3045;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3046;

											BgL_arg1466z00_3046 = SYMBOL_TO_STRING(BgL_idz00_3041);
											BgL_res2336z00_3045 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3046);
										}
										BgL_arg1464z00_3043 = BgL_res2336z00_3045;
									}
									BgL_arg1465z00_3044 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2250z00_3040));
									BgL_arg1462z00_3042 =
										string_append_3(BgL_arg1464z00_3043,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3044);
								}
								BgL_arg2248z00_3038 = bstring_to_symbol(BgL_arg1462z00_3042);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2248z00_3038 = BgL_idz00_3041;
							}
					}
				}
				{	/* Ast/dump.scm 409 */
					obj_t BgL_arg2251z00_3047;

					{	/* Ast/dump.scm 409 */
						BgL_varz00_bglt BgL_arg2252z00_3048;

						BgL_arg2252z00_3048 =
							(((BgL_boxzd2refzd2_bglt) COBJECT(
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2936)))->BgL_varz00);
						BgL_arg2251z00_3047 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							((BgL_nodez00_bglt) BgL_arg2252z00_3048));
					}
					BgL_arg2249z00_3039 = MAKE_YOUNG_PAIR(BgL_arg2251z00_3047, BNIL);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2248z00_3038, BgL_arg2249z00_3039);
			}
		}

	}



/* &node->sexp-make-box1397 */
	obj_t BGl_z62nodezd2ze3sexpzd2makezd2box1397z53zzast_dumpz00(obj_t
		BgL_envz00_2937, obj_t BgL_nodez00_2938)
	{
		{	/* Ast/dump.scm 398 */
			{	/* Ast/dump.scm 400 */
				obj_t BgL_arg2243z00_3050;
				obj_t BgL_arg2244z00_3051;

				{	/* Ast/dump.scm 400 */
					BgL_typez00_bglt BgL_arg2245z00_3052;

					BgL_arg2245z00_3052 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2938))))->BgL_typez00);
					{	/* Ast/dump.scm 400 */
						obj_t BgL_idz00_3053;

						BgL_idz00_3053 = CNST_TABLE_REF(((long) 5));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3054;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3055;
									obj_t BgL_arg1465z00_3056;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3057;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3058;

											BgL_arg1466z00_3058 = SYMBOL_TO_STRING(BgL_idz00_3053);
											BgL_res2336z00_3057 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3058);
										}
										BgL_arg1464z00_3055 = BgL_res2336z00_3057;
									}
									BgL_arg1465z00_3056 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2245z00_3052));
									BgL_arg1462z00_3054 =
										string_append_3(BgL_arg1464z00_3055,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3056);
								}
								BgL_arg2243z00_3050 = bstring_to_symbol(BgL_arg1462z00_3054);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2243z00_3050 = BgL_idz00_3053;
							}
					}
				}
				BgL_arg2244z00_3051 =
					MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
						(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2938)))->BgL_valuez00)),
					BNIL);
				return MAKE_YOUNG_PAIR(BgL_arg2243z00_3050, BgL_arg2244z00_3051);
			}
		}

	}



/* &node->sexp-return1395 */
	obj_t BGl_z62nodezd2ze3sexpzd2return1395z81zzast_dumpz00(obj_t
		BgL_envz00_2939, obj_t BgL_nodez00_2940)
	{
		{	/* Ast/dump.scm 390 */
			{	/* Ast/dump.scm 392 */
				obj_t BgL_arg2238z00_3060;
				obj_t BgL_arg2239z00_3061;

				{	/* Ast/dump.scm 392 */
					BgL_typez00_bglt BgL_arg2240z00_3062;

					BgL_arg2240z00_3062 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_returnz00_bglt) BgL_nodez00_2940))))->BgL_typez00);
					{	/* Ast/dump.scm 392 */
						obj_t BgL_idz00_3063;

						BgL_idz00_3063 = CNST_TABLE_REF(((long) 6));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3064;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3065;
									obj_t BgL_arg1465z00_3066;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3067;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3068;

											BgL_arg1466z00_3068 = SYMBOL_TO_STRING(BgL_idz00_3063);
											BgL_res2336z00_3067 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3068);
										}
										BgL_arg1464z00_3065 = BgL_res2336z00_3067;
									}
									BgL_arg1465z00_3066 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2240z00_3062));
									BgL_arg1462z00_3064 =
										string_append_3(BgL_arg1464z00_3065,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3066);
								}
								BgL_arg2238z00_3060 = bstring_to_symbol(BgL_arg1462z00_3064);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2238z00_3060 = BgL_idz00_3063;
							}
					}
				}
				BgL_arg2239z00_3061 =
					MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
						(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nodez00_2940)))->BgL_valuez00)),
					BNIL);
				return MAKE_YOUNG_PAIR(BgL_arg2238z00_3060, BgL_arg2239z00_3061);
			}
		}

	}



/* &node->sexp-retblock1393 */
	obj_t BGl_z62nodezd2ze3sexpzd2retblock1393z81zzast_dumpz00(obj_t
		BgL_envz00_2941, obj_t BgL_nodez00_2942)
	{
		{	/* Ast/dump.scm 382 */
			{	/* Ast/dump.scm 384 */
				obj_t BgL_arg2233z00_3070;
				obj_t BgL_arg2234z00_3071;

				{	/* Ast/dump.scm 384 */
					BgL_typez00_bglt BgL_arg2235z00_3072;

					BgL_arg2235z00_3072 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_retblockz00_bglt) BgL_nodez00_2942))))->BgL_typez00);
					{	/* Ast/dump.scm 384 */
						obj_t BgL_idz00_3073;

						BgL_idz00_3073 = CNST_TABLE_REF(((long) 7));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3074;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3075;
									obj_t BgL_arg1465z00_3076;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3077;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3078;

											BgL_arg1466z00_3078 = SYMBOL_TO_STRING(BgL_idz00_3073);
											BgL_res2336z00_3077 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3078);
										}
										BgL_arg1464z00_3075 = BgL_res2336z00_3077;
									}
									BgL_arg1465z00_3076 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2235z00_3072));
									BgL_arg1462z00_3074 =
										string_append_3(BgL_arg1464z00_3075,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3076);
								}
								BgL_arg2233z00_3070 = bstring_to_symbol(BgL_arg1462z00_3074);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2233z00_3070 = BgL_idz00_3073;
							}
					}
				}
				BgL_arg2234z00_3071 =
					MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
						(((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt) BgL_nodez00_2942)))->BgL_bodyz00)),
					BNIL);
				return MAKE_YOUNG_PAIR(BgL_arg2233z00_3070, BgL_arg2234z00_3071);
			}
		}

	}



/* &node->sexp-jump-ex-i1391 */
	obj_t BGl_z62nodezd2ze3sexpzd2jumpzd2exzd2i1391z81zzast_dumpz00(obj_t
		BgL_envz00_2943, obj_t BgL_nodez00_2944)
	{
		{	/* Ast/dump.scm 373 */
			{	/* Ast/dump.scm 375 */
				obj_t BgL_arg2225z00_3080;
				obj_t BgL_arg2226z00_3081;

				{	/* Ast/dump.scm 375 */
					BgL_typez00_bglt BgL_arg2227z00_3082;

					BgL_arg2227z00_3082 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2944))))->
						BgL_typez00);
					{	/* Ast/dump.scm 375 */
						obj_t BgL_idz00_3083;

						BgL_idz00_3083 = CNST_TABLE_REF(((long) 8));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3084;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3085;
									obj_t BgL_arg1465z00_3086;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3087;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3088;

											BgL_arg1466z00_3088 = SYMBOL_TO_STRING(BgL_idz00_3083);
											BgL_res2336z00_3087 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3088);
										}
										BgL_arg1464z00_3085 = BgL_res2336z00_3087;
									}
									BgL_arg1465z00_3086 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2227z00_3082));
									BgL_arg1462z00_3084 =
										string_append_3(BgL_arg1464z00_3085,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3086);
								}
								BgL_arg2225z00_3080 = bstring_to_symbol(BgL_arg1462z00_3084);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2225z00_3080 = BgL_idz00_3083;
							}
					}
				}
				{	/* Ast/dump.scm 376 */
					obj_t BgL_arg2228z00_3089;
					obj_t BgL_arg2229z00_3090;

					BgL_arg2228z00_3089 =
						BGl_nodezd2ze3sexpz31zzast_dumpz00(
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2944)))->
							BgL_exitz00));
					BgL_arg2229z00_3090 =
						MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(((
									(BgL_jumpzd2exzd2itz00_bglt)
									COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2944)))->
								BgL_valuez00)), BNIL);
					BgL_arg2226z00_3081 =
						MAKE_YOUNG_PAIR(BgL_arg2228z00_3089, BgL_arg2229z00_3090);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2225z00_3080, BgL_arg2226z00_3081);
			}
		}

	}



/* &node->sexp-set-ex-it1389 */
	obj_t BGl_z62nodezd2ze3sexpzd2setzd2exzd2it1389z81zzast_dumpz00(obj_t
		BgL_envz00_2945, obj_t BgL_nodez00_2946)
	{
		{	/* Ast/dump.scm 364 */
			{	/* Ast/dump.scm 366 */
				obj_t BgL_arg2217z00_3092;
				obj_t BgL_arg2218z00_3093;

				{	/* Ast/dump.scm 366 */
					BgL_typez00_bglt BgL_arg2219z00_3094;

					BgL_arg2219z00_3094 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2946))))->
						BgL_typez00);
					{	/* Ast/dump.scm 366 */
						obj_t BgL_idz00_3095;

						BgL_idz00_3095 = CNST_TABLE_REF(((long) 9));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3096;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3097;
									obj_t BgL_arg1465z00_3098;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3099;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3100;

											BgL_arg1466z00_3100 = SYMBOL_TO_STRING(BgL_idz00_3095);
											BgL_res2336z00_3099 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3100);
										}
										BgL_arg1464z00_3097 = BgL_res2336z00_3099;
									}
									BgL_arg1465z00_3098 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2219z00_3094));
									BgL_arg1462z00_3096 =
										string_append_3(BgL_arg1464z00_3097,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3098);
								}
								BgL_arg2217z00_3092 = bstring_to_symbol(BgL_arg1462z00_3096);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_arg2217z00_3092 = BgL_idz00_3095;
							}
					}
				}
				{	/* Ast/dump.scm 367 */
					obj_t BgL_arg2220z00_3101;
					obj_t BgL_arg2221z00_3102;

					{	/* Ast/dump.scm 367 */
						BgL_varz00_bglt BgL_arg2222z00_3103;

						BgL_arg2222z00_3103 =
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2946)))->BgL_varz00);
						BgL_arg2220z00_3101 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							((BgL_nodez00_bglt) BgL_arg2222z00_3103));
					}
					BgL_arg2221z00_3102 =
						MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2946)))->
								BgL_bodyz00)), BNIL);
					BgL_arg2218z00_3093 =
						MAKE_YOUNG_PAIR(BgL_arg2220z00_3101, BgL_arg2221z00_3102);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2217z00_3092, BgL_arg2218z00_3093);
			}
		}

	}



/* &node->sexp-let-var1387 */
	obj_t BGl_z62nodezd2ze3sexpzd2letzd2var1387z53zzast_dumpz00(obj_t
		BgL_envz00_2947, obj_t BgL_nodez00_2948)
	{
		{	/* Ast/dump.scm 347 */
			{	/* Ast/dump.scm 349 */
				obj_t BgL_symz00_3105;

				{	/* Ast/dump.scm 349 */
					BgL_typez00_bglt BgL_arg2216z00_3106;

					BgL_arg2216z00_3106 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2948))))->BgL_typez00);
					{	/* Ast/dump.scm 349 */
						obj_t BgL_idz00_3107;

						BgL_idz00_3107 = CNST_TABLE_REF(((long) 10));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3108;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3109;
									obj_t BgL_arg1465z00_3110;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3111;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3112;

											BgL_arg1466z00_3112 = SYMBOL_TO_STRING(BgL_idz00_3107);
											BgL_res2336z00_3111 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3112);
										}
										BgL_arg1464z00_3109 = BgL_res2336z00_3111;
									}
									BgL_arg1465z00_3110 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2216z00_3106));
									BgL_arg1462z00_3108 =
										string_append_3(BgL_arg1464z00_3109,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3110);
								}
								BgL_symz00_3105 = bstring_to_symbol(BgL_arg1462z00_3108);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_symz00_3105 = BgL_idz00_3107;
							}
					}
				}
				{	/* Ast/dump.scm 350 */
					obj_t BgL_arg2192z00_3113;
					obj_t BgL_arg2193z00_3114;

					BgL_arg2192z00_3113 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2948))))->BgL_locz00);
					{	/* Ast/dump.scm 352 */
						obj_t BgL_arg2194z00_3115;

						{	/* Ast/dump.scm 352 */
							obj_t BgL_arg2195z00_3116;
							obj_t BgL_arg2196z00_3117;

							if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 354 */
									obj_t BgL_arg2197z00_3118;

									{	/* Ast/dump.scm 354 */
										bool_t BgL_arg2199z00_3119;

										BgL_arg2199z00_3119 =
											BGl_sidezd2effectzf3z21zzeffect_effectz00(
											((BgL_nodez00_bglt)
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2948)));
										{	/* Ast/dump.scm 354 */
											obj_t BgL_list2200z00_3120;

											{	/* Ast/dump.scm 354 */
												obj_t BgL_arg2201z00_3121;

												BgL_arg2201z00_3121 =
													MAKE_YOUNG_PAIR(BBOOL(BgL_arg2199z00_3119), BNIL);
												BgL_list2200z00_3120 =
													MAKE_YOUNG_PAIR(BGl_string2477z00zzast_dumpz00,
													BgL_arg2201z00_3121);
											}
											BgL_arg2197z00_3118 = BgL_list2200z00_3120;
										}
									}
									{	/* Ast/dump.scm 353 */
										obj_t BgL_list2198z00_3122;

										BgL_list2198z00_3122 =
											MAKE_YOUNG_PAIR(BgL_arg2197z00_3118, BNIL);
										BgL_arg2195z00_3116 = BgL_list2198z00_3122;
									}
								}
							else
								{	/* Ast/dump.scm 352 */
									BgL_arg2195z00_3116 = BNIL;
								}
							{	/* Ast/dump.scm 356 */
								obj_t BgL_arg2202z00_3123;
								obj_t BgL_arg2203z00_3124;

								{	/* Ast/dump.scm 356 */
									obj_t BgL_l1325z00_3125;

									BgL_l1325z00_3125 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_nodez00_2948)))->
										BgL_bindingsz00);
									if (NULLP(BgL_l1325z00_3125))
										{	/* Ast/dump.scm 356 */
											BgL_arg2202z00_3123 = BNIL;
										}
									else
										{	/* Ast/dump.scm 356 */
											obj_t BgL_head1327z00_3126;

											{	/* Ast/dump.scm 356 */
												obj_t BgL_res2434z00_3127;

												BgL_res2434z00_3127 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_head1327z00_3126 = BgL_res2434z00_3127;
											}
											{
												obj_t BgL_l1325z00_3129;
												obj_t BgL_tail1328z00_3130;

												BgL_l1325z00_3129 = BgL_l1325z00_3125;
												BgL_tail1328z00_3130 = BgL_head1327z00_3126;
											BgL_zc3z04anonymousza32205ze3z87_3128:
												if (NULLP(BgL_l1325z00_3129))
													{	/* Ast/dump.scm 356 */
														BgL_arg2202z00_3123 = CDR(BgL_head1327z00_3126);
													}
												else
													{	/* Ast/dump.scm 356 */
														obj_t BgL_newtail1329z00_3131;

														{	/* Ast/dump.scm 356 */
															obj_t BgL_arg2208z00_3132;

															{	/* Ast/dump.scm 356 */
																obj_t BgL_bz00_3133;

																BgL_bz00_3133 =
																	CAR(((obj_t) BgL_l1325z00_3129));
																{	/* Ast/dump.scm 357 */
																	obj_t BgL_arg2209z00_3134;
																	obj_t BgL_arg2210z00_3135;

																	{	/* Ast/dump.scm 357 */
																		obj_t BgL_arg2211z00_3136;

																		BgL_arg2211z00_3136 =
																			CAR(((obj_t) BgL_bz00_3133));
																		BgL_arg2209z00_3134 =
																			BGl_shapez00zztools_shapez00
																			(BgL_arg2211z00_3136);
																	}
																	{	/* Ast/dump.scm 357 */
																		obj_t BgL_arg2212z00_3137;

																		{	/* Ast/dump.scm 357 */
																			obj_t BgL_arg2213z00_3138;

																			BgL_arg2213z00_3138 =
																				CDR(((obj_t) BgL_bz00_3133));
																			BgL_arg2212z00_3137 =
																				BGl_nodezd2ze3sexpz31zzast_dumpz00(
																				((BgL_nodez00_bglt)
																					BgL_arg2213z00_3138));
																		}
																		BgL_arg2210z00_3135 =
																			MAKE_YOUNG_PAIR(BgL_arg2212z00_3137,
																			BNIL);
																	}
																	BgL_arg2208z00_3132 =
																		MAKE_YOUNG_PAIR(BgL_arg2209z00_3134,
																		BgL_arg2210z00_3135);
																}
															}
															{	/* Ast/dump.scm 356 */
																obj_t BgL_res2436z00_3139;

																BgL_res2436z00_3139 =
																	MAKE_YOUNG_PAIR(BgL_arg2208z00_3132, BNIL);
																BgL_newtail1329z00_3131 = BgL_res2436z00_3139;
															}
														}
														SET_CDR(BgL_tail1328z00_3130,
															BgL_newtail1329z00_3131);
														{	/* Ast/dump.scm 356 */
															obj_t BgL_arg2207z00_3140;

															BgL_arg2207z00_3140 =
																CDR(((obj_t) BgL_l1325z00_3129));
															{
																obj_t BgL_tail1328z00_4039;
																obj_t BgL_l1325z00_4038;

																BgL_l1325z00_4038 = BgL_arg2207z00_3140;
																BgL_tail1328z00_4039 = BgL_newtail1329z00_3131;
																BgL_tail1328z00_3130 = BgL_tail1328z00_4039;
																BgL_l1325z00_3129 = BgL_l1325z00_4038;
																goto BgL_zc3z04anonymousza32205ze3z87_3128;
															}
														}
													}
											}
										}
								}
								BgL_arg2203z00_3124 =
									MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
										(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2948)))->
											BgL_bodyz00)), BNIL);
								BgL_arg2196z00_3117 =
									MAKE_YOUNG_PAIR(BgL_arg2202z00_3123, BgL_arg2203z00_3124);
							}
							BgL_arg2194z00_3115 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2195z00_3116, BgL_arg2196z00_3117);
						}
						BgL_arg2193z00_3114 =
							MAKE_YOUNG_PAIR(BgL_symz00_3105, BgL_arg2194z00_3115);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2192z00_3113,
						BgL_arg2193z00_3114);
				}
			}
		}

	}



/* &node->sexp-let-fun1385 */
	obj_t BGl_z62nodezd2ze3sexpzd2letzd2fun1385z53zzast_dumpz00(obj_t
		BgL_envz00_2949, obj_t BgL_nodez00_2950)
	{
		{	/* Ast/dump.scm 326 */
			{	/* Ast/dump.scm 328 */
				obj_t BgL_symz00_3142;

				{	/* Ast/dump.scm 328 */
					BgL_typez00_bglt BgL_arg2191z00_3143;

					BgL_arg2191z00_3143 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2950))))->BgL_typez00);
					{	/* Ast/dump.scm 328 */
						obj_t BgL_idz00_3144;

						BgL_idz00_3144 = CNST_TABLE_REF(((long) 11));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3145;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3146;
									obj_t BgL_arg1465z00_3147;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3148;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3149;

											BgL_arg1466z00_3149 = SYMBOL_TO_STRING(BgL_idz00_3144);
											BgL_res2336z00_3148 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3149);
										}
										BgL_arg1464z00_3146 = BgL_res2336z00_3148;
									}
									BgL_arg1465z00_3147 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2191z00_3143));
									BgL_arg1462z00_3145 =
										string_append_3(BgL_arg1464z00_3146,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3147);
								}
								BgL_symz00_3142 = bstring_to_symbol(BgL_arg1462z00_3145);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_symz00_3142 = BgL_idz00_3144;
							}
					}
				}
				{	/* Ast/dump.scm 329 */
					obj_t BgL_arg2156z00_3150;
					obj_t BgL_arg2157z00_3151;

					BgL_arg2156z00_3150 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2950))))->BgL_locz00);
					{	/* Ast/dump.scm 330 */
						obj_t BgL_arg2158z00_3152;

						{	/* Ast/dump.scm 330 */
							obj_t BgL_arg2159z00_3153;
							obj_t BgL_arg2160z00_3154;

							{	/* Ast/dump.scm 330 */
								obj_t BgL_l1320z00_3155;

								BgL_l1320z00_3155 =
									(((BgL_letzd2funzd2_bglt) COBJECT(
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2950)))->
									BgL_localsz00);
								if (NULLP(BgL_l1320z00_3155))
									{	/* Ast/dump.scm 330 */
										BgL_arg2159z00_3153 = BNIL;
									}
								else
									{	/* Ast/dump.scm 330 */
										obj_t BgL_head1322z00_3156;

										{	/* Ast/dump.scm 330 */
											obj_t BgL_res2423z00_3157;

											BgL_res2423z00_3157 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1322z00_3156 = BgL_res2423z00_3157;
										}
										{
											obj_t BgL_l1320z00_3159;
											obj_t BgL_tail1323z00_3160;

											BgL_l1320z00_3159 = BgL_l1320z00_3155;
											BgL_tail1323z00_3160 = BgL_head1322z00_3156;
										BgL_zc3z04anonymousza32162ze3z87_3158:
											if (NULLP(BgL_l1320z00_3159))
												{	/* Ast/dump.scm 330 */
													BgL_arg2159z00_3153 = CDR(BgL_head1322z00_3156);
												}
											else
												{	/* Ast/dump.scm 330 */
													obj_t BgL_newtail1324z00_3161;

													{	/* Ast/dump.scm 330 */
														obj_t BgL_arg2165z00_3162;

														{	/* Ast/dump.scm 330 */
															obj_t BgL_funz00_3163;

															BgL_funz00_3163 =
																CAR(((obj_t) BgL_l1320z00_3159));
															{	/* Ast/dump.scm 331 */
																BgL_valuez00_bglt BgL_fz00_3164;

																BgL_fz00_3164 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_funz00_3163))))->BgL_valuez00);
																{	/* Ast/dump.scm 332 */
																	obj_t BgL_arg2166z00_3165;
																	obj_t BgL_arg2167z00_3166;

																	BgL_arg2166z00_3165 =
																		BGl_shapez00zztools_shapez00
																		(BgL_funz00_3163);
																	{	/* Ast/dump.scm 333 */
																		obj_t BgL_arg2168z00_3167;
																		obj_t BgL_arg2169z00_3168;

																		{	/* Ast/dump.scm 334 */
																			bool_t BgL_test2558z00_4077;

																			{	/* Ast/dump.scm 334 */
																				obj_t BgL_tmpz00_4078;

																				BgL_tmpz00_4078 =
																					(((BgL_sfunz00_bglt) COBJECT(
																							((BgL_sfunz00_bglt)
																								BgL_fz00_3164)))->
																					BgL_stackablez00);
																				BgL_test2558z00_4077 =
																					BOOLEANP(BgL_tmpz00_4078);
																			}
																			if (BgL_test2558z00_4077)
																				{	/* Ast/dump.scm 335 */
																					obj_t BgL_arg2172z00_3169;

																					{	/* Ast/dump.scm 335 */
																						obj_t BgL_arg2173z00_3170;

																						BgL_arg2173z00_3170 =
																							(((BgL_sfunz00_bglt) COBJECT(
																									((BgL_sfunz00_bglt)
																										BgL_fz00_3164)))->
																							BgL_stackablez00);
																						BgL_arg2172z00_3169 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2173z00_3170, BNIL);
																					}
																					BgL_arg2168z00_3167 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 12)),
																						BgL_arg2172z00_3169);
																				}
																			else
																				{	/* Ast/dump.scm 334 */
																					BgL_arg2168z00_3167 = BNIL;
																				}
																		}
																		{	/* Ast/dump.scm 338 */
																			obj_t BgL_arg2175z00_3171;
																			obj_t BgL_arg2176z00_3172;

																			{	/* Ast/dump.scm 338 */
																				obj_t BgL_arg2177z00_3173;
																				long BgL_arg2178z00_3174;

																				{	/* Ast/dump.scm 338 */
																					obj_t BgL_l1314z00_3175;

																					BgL_l1314z00_3175 =
																						(((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_fz00_3164)))->
																						BgL_argsz00);
																					if (NULLP(BgL_l1314z00_3175))
																						{	/* Ast/dump.scm 338 */
																							BgL_arg2177z00_3173 = BNIL;
																						}
																					else
																						{	/* Ast/dump.scm 338 */
																							obj_t BgL_head1316z00_3176;

																							{	/* Ast/dump.scm 338 */
																								obj_t BgL_arg2185z00_3177;

																								{	/* Ast/dump.scm 338 */
																									obj_t BgL_arg2186z00_3178;

																									BgL_arg2186z00_3178 =
																										CAR(
																										((obj_t)
																											BgL_l1314z00_3175));
																									BgL_arg2185z00_3177 =
																										BGl_shapez00zztools_shapez00
																										(BgL_arg2186z00_3178);
																								}
																								{	/* Ast/dump.scm 338 */
																									obj_t BgL_res2427z00_3179;

																									BgL_res2427z00_3179 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2185z00_3177, BNIL);
																									BgL_head1316z00_3176 =
																										BgL_res2427z00_3179;
																								}
																							}
																							{	/* Ast/dump.scm 338 */
																								obj_t BgL_g1319z00_3180;

																								BgL_g1319z00_3180 =
																									CDR(
																									((obj_t) BgL_l1314z00_3175));
																								{
																									obj_t BgL_l1314z00_3182;
																									obj_t BgL_tail1317z00_3183;

																									BgL_l1314z00_3182 =
																										BgL_g1319z00_3180;
																									BgL_tail1317z00_3183 =
																										BgL_head1316z00_3176;
																								BgL_zc3z04anonymousza32180ze3z87_3181:
																									if (NULLP
																										(BgL_l1314z00_3182))
																										{	/* Ast/dump.scm 338 */
																											BgL_arg2177z00_3173 =
																												BgL_head1316z00_3176;
																										}
																									else
																										{	/* Ast/dump.scm 338 */
																											obj_t
																												BgL_newtail1318z00_3184;
																											{	/* Ast/dump.scm 338 */
																												obj_t
																													BgL_arg2183z00_3185;
																												{	/* Ast/dump.scm 338 */
																													obj_t
																														BgL_arg2184z00_3186;
																													BgL_arg2184z00_3186 =
																														CAR(((obj_t)
																															BgL_l1314z00_3182));
																													BgL_arg2183z00_3185 =
																														BGl_shapez00zztools_shapez00
																														(BgL_arg2184z00_3186);
																												}
																												{	/* Ast/dump.scm 338 */
																													obj_t
																														BgL_res2429z00_3187;
																													BgL_res2429z00_3187 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2183z00_3185,
																														BNIL);
																													BgL_newtail1318z00_3184
																														=
																														BgL_res2429z00_3187;
																												}
																											}
																											SET_CDR
																												(BgL_tail1317z00_3183,
																												BgL_newtail1318z00_3184);
																											{	/* Ast/dump.scm 338 */
																												obj_t
																													BgL_arg2182z00_3188;
																												BgL_arg2182z00_3188 =
																													CDR(((obj_t)
																														BgL_l1314z00_3182));
																												{
																													obj_t
																														BgL_tail1317z00_4107;
																													obj_t
																														BgL_l1314z00_4106;
																													BgL_l1314z00_4106 =
																														BgL_arg2182z00_3188;
																													BgL_tail1317z00_4107 =
																														BgL_newtail1318z00_3184;
																													BgL_tail1317z00_3183 =
																														BgL_tail1317z00_4107;
																													BgL_l1314z00_3182 =
																														BgL_l1314z00_4106;
																													goto
																														BgL_zc3z04anonymousza32180ze3z87_3181;
																												}
																											}
																										}
																								}
																							}
																						}
																				}
																				BgL_arg2178z00_3174 =
																					(((BgL_funz00_bglt) COBJECT(
																							((BgL_funz00_bglt)
																								((BgL_sfunz00_bglt)
																									BgL_fz00_3164))))->
																					BgL_arityz00);
																				BgL_arg2175z00_3171 =
																					BGl_argszd2listzd2ze3argsza2z41zztools_argsz00
																					(BgL_arg2177z00_3173,
																					BINT(BgL_arg2178z00_3174));
																			}
																			{	/* Ast/dump.scm 340 */
																				obj_t BgL_arg2187z00_3189;

																				{	/* Ast/dump.scm 340 */
																					obj_t BgL_arg2188z00_3190;

																					BgL_arg2188z00_3190 =
																						(((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_fz00_3164)))->
																						BgL_bodyz00);
																					BgL_arg2187z00_3189 =
																						BGl_nodezd2ze3sexpz31zzast_dumpz00((
																							(BgL_nodez00_bglt)
																							BgL_arg2188z00_3190));
																				}
																				BgL_arg2176z00_3172 =
																					MAKE_YOUNG_PAIR(BgL_arg2187z00_3189,
																					BNIL);
																			}
																			BgL_arg2169z00_3168 =
																				MAKE_YOUNG_PAIR(BgL_arg2175z00_3171,
																				BgL_arg2176z00_3172);
																		}
																		BgL_arg2167z00_3166 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2168z00_3167,
																			BgL_arg2169z00_3168);
																	}
																	BgL_arg2165z00_3162 =
																		MAKE_YOUNG_PAIR(BgL_arg2166z00_3165,
																		BgL_arg2167z00_3166);
																}
															}
														}
														{	/* Ast/dump.scm 330 */
															obj_t BgL_res2430z00_3191;

															BgL_res2430z00_3191 =
																MAKE_YOUNG_PAIR(BgL_arg2165z00_3162, BNIL);
															BgL_newtail1324z00_3161 = BgL_res2430z00_3191;
														}
													}
													SET_CDR(BgL_tail1323z00_3160,
														BgL_newtail1324z00_3161);
													{	/* Ast/dump.scm 330 */
														obj_t BgL_arg2164z00_3192;

														BgL_arg2164z00_3192 =
															CDR(((obj_t) BgL_l1320z00_3159));
														{
															obj_t BgL_tail1323z00_4126;
															obj_t BgL_l1320z00_4125;

															BgL_l1320z00_4125 = BgL_arg2164z00_3192;
															BgL_tail1323z00_4126 = BgL_newtail1324z00_3161;
															BgL_tail1323z00_3160 = BgL_tail1323z00_4126;
															BgL_l1320z00_3159 = BgL_l1320z00_4125;
															goto BgL_zc3z04anonymousza32162ze3z87_3158;
														}
													}
												}
										}
									}
							}
							BgL_arg2160z00_3154 =
								MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
									(((BgL_letzd2funzd2_bglt) COBJECT(
												((BgL_letzd2funzd2_bglt) BgL_nodez00_2950)))->
										BgL_bodyz00)), BNIL);
							BgL_arg2158z00_3152 =
								MAKE_YOUNG_PAIR(BgL_arg2159z00_3153, BgL_arg2160z00_3154);
						}
						BgL_arg2157z00_3151 =
							MAKE_YOUNG_PAIR(BgL_symz00_3142, BgL_arg2158z00_3152);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2156z00_3150,
						BgL_arg2157z00_3151);
				}
			}
		}

	}



/* &node->sexp-switch1383 */
	obj_t BGl_z62nodezd2ze3sexpzd2switch1383z81zzast_dumpz00(obj_t
		BgL_envz00_2951, obj_t BgL_nodez00_2952)
	{
		{	/* Ast/dump.scm 314 */
			{	/* Ast/dump.scm 316 */
				obj_t BgL_arg2136z00_3194;
				obj_t BgL_arg2137z00_3195;

				BgL_arg2136z00_3194 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_switchz00_bglt) BgL_nodez00_2952))))->BgL_locz00);
				{	/* Ast/dump.scm 317 */
					obj_t BgL_arg2138z00_3196;
					obj_t BgL_arg2140z00_3197;

					{	/* Ast/dump.scm 317 */
						BgL_typez00_bglt BgL_arg2141z00_3198;

						BgL_arg2141z00_3198 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_switchz00_bglt) BgL_nodez00_2952))))->BgL_typez00);
						{	/* Ast/dump.scm 317 */
							obj_t BgL_idz00_3199;

							BgL_idz00_3199 = CNST_TABLE_REF(((long) 13));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3200;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3201;
										obj_t BgL_arg1465z00_3202;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3203;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3204;

												BgL_arg1466z00_3204 = SYMBOL_TO_STRING(BgL_idz00_3199);
												BgL_res2336z00_3203 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3204);
											}
											BgL_arg1464z00_3201 = BgL_res2336z00_3203;
										}
										BgL_arg1465z00_3202 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg2141z00_3198));
										BgL_arg1462z00_3200 =
											string_append_3(BgL_arg1464z00_3201,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3202);
									}
									BgL_arg2138z00_3196 = bstring_to_symbol(BgL_arg1462z00_3200);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg2138z00_3196 = BgL_idz00_3199;
								}
						}
					}
					{	/* Ast/dump.scm 318 */
						obj_t BgL_arg2142z00_3205;
						obj_t BgL_arg2143z00_3206;

						BgL_arg2142z00_3205 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2952)))->BgL_testz00));
						{	/* Ast/dump.scm 319 */
							obj_t BgL_arg2145z00_3207;

							{	/* Ast/dump.scm 319 */
								obj_t BgL_l1309z00_3208;

								BgL_l1309z00_3208 =
									(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_2952)))->
									BgL_clausesz00);
								if (NULLP(BgL_l1309z00_3208))
									{	/* Ast/dump.scm 319 */
										BgL_arg2145z00_3207 = BNIL;
									}
								else
									{	/* Ast/dump.scm 319 */
										obj_t BgL_head1311z00_3209;

										{	/* Ast/dump.scm 319 */
											obj_t BgL_res2419z00_3210;

											BgL_res2419z00_3210 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1311z00_3209 = BgL_res2419z00_3210;
										}
										{
											obj_t BgL_l1309z00_3212;
											obj_t BgL_tail1312z00_3213;

											BgL_l1309z00_3212 = BgL_l1309z00_3208;
											BgL_tail1312z00_3213 = BgL_head1311z00_3209;
										BgL_zc3z04anonymousza32147ze3z87_3211:
											if (NULLP(BgL_l1309z00_3212))
												{	/* Ast/dump.scm 319 */
													BgL_arg2145z00_3207 = CDR(BgL_head1311z00_3209);
												}
											else
												{	/* Ast/dump.scm 319 */
													obj_t BgL_newtail1313z00_3214;

													{	/* Ast/dump.scm 319 */
														obj_t BgL_arg2150z00_3215;

														{	/* Ast/dump.scm 319 */
															obj_t BgL_clausez00_3216;

															BgL_clausez00_3216 =
																CAR(((obj_t) BgL_l1309z00_3212));
															{	/* Ast/dump.scm 320 */
																obj_t BgL_arg2152z00_3217;
																obj_t BgL_arg2153z00_3218;

																BgL_arg2152z00_3217 =
																	CAR(((obj_t) BgL_clausez00_3216));
																{	/* Ast/dump.scm 320 */
																	obj_t BgL_arg2154z00_3219;

																	{	/* Ast/dump.scm 320 */
																		obj_t BgL_arg2155z00_3220;

																		BgL_arg2155z00_3220 =
																			CDR(((obj_t) BgL_clausez00_3216));
																		BgL_arg2154z00_3219 =
																			BGl_nodezd2ze3sexpz31zzast_dumpz00(
																			((BgL_nodez00_bglt) BgL_arg2155z00_3220));
																	}
																	BgL_arg2153z00_3218 =
																		MAKE_YOUNG_PAIR(BgL_arg2154z00_3219, BNIL);
																}
																BgL_arg2150z00_3215 =
																	MAKE_YOUNG_PAIR(BgL_arg2152z00_3217,
																	BgL_arg2153z00_3218);
															}
														}
														{	/* Ast/dump.scm 319 */
															obj_t BgL_res2421z00_3221;

															BgL_res2421z00_3221 =
																MAKE_YOUNG_PAIR(BgL_arg2150z00_3215, BNIL);
															BgL_newtail1313z00_3214 = BgL_res2421z00_3221;
														}
													}
													SET_CDR(BgL_tail1312z00_3213,
														BgL_newtail1313z00_3214);
													{	/* Ast/dump.scm 319 */
														obj_t BgL_arg2149z00_3222;

														BgL_arg2149z00_3222 =
															CDR(((obj_t) BgL_l1309z00_3212));
														{
															obj_t BgL_tail1312z00_4175;
															obj_t BgL_l1309z00_4174;

															BgL_l1309z00_4174 = BgL_arg2149z00_3222;
															BgL_tail1312z00_4175 = BgL_newtail1313z00_3214;
															BgL_tail1312z00_3213 = BgL_tail1312z00_4175;
															BgL_l1309z00_3212 = BgL_l1309z00_4174;
															goto BgL_zc3z04anonymousza32147ze3z87_3211;
														}
													}
												}
										}
									}
							}
							BgL_arg2143z00_3206 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2145z00_3207, BNIL);
						}
						BgL_arg2140z00_3197 =
							MAKE_YOUNG_PAIR(BgL_arg2142z00_3205, BgL_arg2143z00_3206);
					}
					BgL_arg2137z00_3195 =
						MAKE_YOUNG_PAIR(BgL_arg2138z00_3196, BgL_arg2140z00_3197);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2136z00_3194,
					BgL_arg2137z00_3195);
			}
		}

	}



/* &node->sexp-fail1381 */
	obj_t BGl_z62nodezd2ze3sexpzd2fail1381z81zzast_dumpz00(obj_t BgL_envz00_2953,
		obj_t BgL_nodez00_2954)
	{
		{	/* Ast/dump.scm 304 */
			{	/* Ast/dump.scm 306 */
				obj_t BgL_arg2125z00_3224;
				obj_t BgL_arg2126z00_3225;

				BgL_arg2125z00_3224 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_failz00_bglt) BgL_nodez00_2954))))->BgL_locz00);
				{	/* Ast/dump.scm 307 */
					obj_t BgL_arg2127z00_3226;

					{	/* Ast/dump.scm 307 */
						obj_t BgL_arg2128z00_3227;
						obj_t BgL_arg2129z00_3228;

						BgL_arg2128z00_3227 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							(((BgL_failz00_bglt) COBJECT(
										((BgL_failz00_bglt) BgL_nodez00_2954)))->BgL_procz00));
						{	/* Ast/dump.scm 308 */
							obj_t BgL_arg2131z00_3229;
							obj_t BgL_arg2132z00_3230;

							BgL_arg2131z00_3229 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_2954)))->BgL_msgz00));
							BgL_arg2132z00_3230 =
								MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
									(((BgL_failz00_bglt) COBJECT(
												((BgL_failz00_bglt) BgL_nodez00_2954)))->BgL_objz00)),
								BNIL);
							BgL_arg2129z00_3228 =
								MAKE_YOUNG_PAIR(BgL_arg2131z00_3229, BgL_arg2132z00_3230);
						}
						BgL_arg2127z00_3226 =
							MAKE_YOUNG_PAIR(BgL_arg2128z00_3227, BgL_arg2129z00_3228);
					}
					BgL_arg2126z00_3225 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg2127z00_3226);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2125z00_3224,
					BgL_arg2126z00_3225);
			}
		}

	}



/* &node->sexp-condition1379 */
	obj_t BGl_z62nodezd2ze3sexpzd2condition1379z81zzast_dumpz00(obj_t
		BgL_envz00_2955, obj_t BgL_nodez00_2956)
	{
		{	/* Ast/dump.scm 293 */
			{	/* Ast/dump.scm 295 */
				obj_t BgL_arg2110z00_3232;
				obj_t BgL_arg2111z00_3233;

				BgL_arg2110z00_3232 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_2956))))->BgL_locz00);
				{	/* Ast/dump.scm 296 */
					obj_t BgL_arg2112z00_3234;
					obj_t BgL_arg2114z00_3235;

					{	/* Ast/dump.scm 296 */
						BgL_typez00_bglt BgL_arg2115z00_3236;

						BgL_arg2115z00_3236 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_conditionalz00_bglt) BgL_nodez00_2956))))->
							BgL_typez00);
						{	/* Ast/dump.scm 296 */
							obj_t BgL_idz00_3237;

							BgL_idz00_3237 = CNST_TABLE_REF(((long) 15));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3238;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3239;
										obj_t BgL_arg1465z00_3240;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3241;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3242;

												BgL_arg1466z00_3242 = SYMBOL_TO_STRING(BgL_idz00_3237);
												BgL_res2336z00_3241 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3242);
											}
											BgL_arg1464z00_3239 = BgL_res2336z00_3241;
										}
										BgL_arg1465z00_3240 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg2115z00_3236));
										BgL_arg1462z00_3238 =
											string_append_3(BgL_arg1464z00_3239,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3240);
									}
									BgL_arg2112z00_3234 = bstring_to_symbol(BgL_arg1462z00_3238);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg2112z00_3234 = BgL_idz00_3237;
								}
						}
					}
					{	/* Ast/dump.scm 297 */
						obj_t BgL_arg2116z00_3243;
						obj_t BgL_arg2117z00_3244;

						BgL_arg2116z00_3243 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2956)))->
								BgL_testz00));
						{	/* Ast/dump.scm 298 */
							obj_t BgL_arg2119z00_3245;
							obj_t BgL_arg2120z00_3246;

							BgL_arg2119z00_3245 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2956)))->
									BgL_truez00));
							BgL_arg2120z00_3246 =
								MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(((
											(BgL_conditionalz00_bglt)
											COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2956)))->
										BgL_falsez00)), BNIL);
							BgL_arg2117z00_3244 =
								MAKE_YOUNG_PAIR(BgL_arg2119z00_3245, BgL_arg2120z00_3246);
						}
						BgL_arg2114z00_3235 =
							MAKE_YOUNG_PAIR(BgL_arg2116z00_3243, BgL_arg2117z00_3244);
					}
					BgL_arg2111z00_3233 =
						MAKE_YOUNG_PAIR(BgL_arg2112z00_3234, BgL_arg2114z00_3235);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2110z00_3232,
					BgL_arg2111z00_3233);
			}
		}

	}



/* &node->sexp-setq1377 */
	obj_t BGl_z62nodezd2ze3sexpzd2setq1377z81zzast_dumpz00(obj_t BgL_envz00_2957,
		obj_t BgL_nodez00_2958)
	{
		{	/* Ast/dump.scm 284 */
			{	/* Ast/dump.scm 286 */
				obj_t BgL_arg2102z00_3248;
				obj_t BgL_arg2103z00_3249;

				BgL_arg2102z00_3248 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_setqz00_bglt) BgL_nodez00_2958))))->BgL_locz00);
				{	/* Ast/dump.scm 287 */
					obj_t BgL_arg2104z00_3250;

					{	/* Ast/dump.scm 287 */
						obj_t BgL_arg2105z00_3251;
						obj_t BgL_arg2106z00_3252;

						{	/* Ast/dump.scm 287 */
							BgL_varz00_bglt BgL_arg2107z00_3253;

							BgL_arg2107z00_3253 =
								(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_2958)))->BgL_varz00);
							BgL_arg2105z00_3251 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								((BgL_nodez00_bglt) BgL_arg2107z00_3253));
						}
						BgL_arg2106z00_3252 =
							MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
								(((BgL_setqz00_bglt) COBJECT(
											((BgL_setqz00_bglt) BgL_nodez00_2958)))->BgL_valuez00)),
							BNIL);
						BgL_arg2104z00_3250 =
							MAKE_YOUNG_PAIR(BgL_arg2105z00_3251, BgL_arg2106z00_3252);
					}
					BgL_arg2103z00_3249 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BgL_arg2104z00_3250);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg2102z00_3248,
					BgL_arg2103z00_3249);
			}
		}

	}



/* &node->sexp-cast1375 */
	obj_t BGl_z62nodezd2ze3sexpzd2cast1375z81zzast_dumpz00(obj_t BgL_envz00_2959,
		obj_t BgL_nodez00_2960)
	{
		{	/* Ast/dump.scm 276 */
			{	/* Ast/dump.scm 279 */
				obj_t BgL_arg2095z00_3255;
				obj_t BgL_arg2096z00_3256;

				{	/* Ast/dump.scm 279 */
					obj_t BgL_arg2097z00_3257;

					BgL_arg2097z00_3257 =
						(((BgL_typez00_bglt) COBJECT(
								(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_castz00_bglt) BgL_nodez00_2960))))->
									BgL_typez00)))->BgL_idz00);
					BgL_arg2095z00_3255 =
						BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
								17)), BgL_arg2097z00_3257);
				}
				BgL_arg2096z00_3256 =
					MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
						(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_2960)))->BgL_argz00)), BNIL);
				return MAKE_YOUNG_PAIR(BgL_arg2095z00_3255, BgL_arg2096z00_3256);
			}
		}

	}



/* &node->sexp-cast-null1372 */
	obj_t BGl_z62nodezd2ze3sexpzd2castzd2null1372z53zzast_dumpz00(obj_t
		BgL_envz00_2961, obj_t BgL_nodez00_2962)
	{
		{	/* Ast/dump.scm 268 */
			{	/* Ast/dump.scm 271 */
				obj_t BgL_arg2092z00_3259;

				{	/* Ast/dump.scm 271 */
					obj_t BgL_arg2093z00_3260;

					BgL_arg2093z00_3260 =
						(((BgL_typez00_bglt) COBJECT(
								(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_castzd2nullzd2_bglt) BgL_nodez00_2962))))->
									BgL_typez00)))->BgL_idz00);
					BgL_arg2092z00_3259 = MAKE_YOUNG_PAIR(BgL_arg2093z00_3260, BNIL);
				}
				return
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)), BgL_arg2092z00_3259);
		}}

	}



/* &node->sexp-instanceo1369 */
	obj_t BGl_z62nodezd2ze3sexpzd2instanceo1369z81zzast_dumpz00(obj_t
		BgL_envz00_2963, obj_t BgL_nodez00_2964)
	{
		{	/* Ast/dump.scm 260 */
			{	/* Ast/dump.scm 263 */
				obj_t BgL_arg2085z00_3262;

				{	/* Ast/dump.scm 263 */
					obj_t BgL_arg2086z00_3263;
					obj_t BgL_arg2087z00_3264;

					{	/* Ast/dump.scm 263 */
						obj_t BgL_arg2088z00_3265;

						{	/* Ast/dump.scm 263 */
							obj_t BgL_pairz00_3266;

							BgL_pairz00_3266 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_instanceofz00_bglt) BgL_nodez00_2964))))->
								BgL_exprza2za2);
							BgL_arg2088z00_3265 = CAR(BgL_pairz00_3266);
						}
						BgL_arg2086z00_3263 =
							BGl_nodezd2ze3sexpz31zzast_dumpz00(
							((BgL_nodez00_bglt) BgL_arg2088z00_3265));
					}
					BgL_arg2087z00_3264 =
						MAKE_YOUNG_PAIR(
						(((BgL_typez00_bglt) COBJECT(
									(((BgL_instanceofz00_bglt) COBJECT(
												((BgL_instanceofz00_bglt) BgL_nodez00_2964)))->
										BgL_classz00)))->BgL_idz00), BNIL);
					BgL_arg2085z00_3262 =
						MAKE_YOUNG_PAIR(BgL_arg2086z00_3263, BgL_arg2087z00_3264);
				}
				return
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)), BgL_arg2085z00_3262);
		}}

	}



/* &node->sexp-valloc1367 */
	obj_t BGl_z62nodezd2ze3sexpzd2valloc1367z81zzast_dumpz00(obj_t
		BgL_envz00_2965, obj_t BgL_nodez00_2966)
	{
		{	/* Ast/dump.scm 248 */
			{	/* Ast/dump.scm 253 */
				obj_t BgL_arg2061z00_3268;
				obj_t BgL_arg2062z00_3269;

				{	/* Ast/dump.scm 253 */
					obj_t BgL_arg2063z00_3270;

					{	/* Ast/dump.scm 253 */
						obj_t BgL_arg2065z00_3271;
						obj_t BgL_arg2066z00_3272;

						{	/* Ast/dump.scm 253 */
							BgL_typez00_bglt BgL_arg2072z00_3273;

							BgL_arg2072z00_3273 =
								BGl_getzd2typezd2zztype_typeofz00(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_nodez00_2966)), ((bool_t) 0));
							BgL_arg2065z00_3271 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2072z00_3273));
						}
						{	/* Ast/dump.scm 254 */
							BgL_typez00_bglt BgL_arg2075z00_3274;

							BgL_arg2075z00_3274 =
								(((BgL_vallocz00_bglt) COBJECT(
										((BgL_vallocz00_bglt) BgL_nodez00_2966)))->BgL_ftypez00);
							BgL_arg2066z00_3272 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2075z00_3274));
						}
						{	/* Ast/dump.scm 252 */
							obj_t BgL_list2067z00_3275;

							{	/* Ast/dump.scm 252 */
								obj_t BgL_arg2068z00_3276;

								{	/* Ast/dump.scm 252 */
									obj_t BgL_arg2069z00_3277;

									{	/* Ast/dump.scm 252 */
										obj_t BgL_arg2070z00_3278;

										{	/* Ast/dump.scm 252 */
											obj_t BgL_arg2071z00_3279;

											BgL_arg2071z00_3279 =
												MAKE_YOUNG_PAIR(BGl_string2478z00zzast_dumpz00, BNIL);
											BgL_arg2070z00_3278 =
												MAKE_YOUNG_PAIR(BgL_arg2066z00_3272,
												BgL_arg2071z00_3279);
										}
										BgL_arg2069z00_3277 =
											MAKE_YOUNG_PAIR(BGl_string2479z00zzast_dumpz00,
											BgL_arg2070z00_3278);
									}
									BgL_arg2068z00_3276 =
										MAKE_YOUNG_PAIR(BgL_arg2065z00_3271, BgL_arg2069z00_3277);
								}
								BgL_list2067z00_3275 =
									MAKE_YOUNG_PAIR(BGl_string2480z00zzast_dumpz00,
									BgL_arg2068z00_3276);
							}
							BgL_arg2063z00_3270 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list2067z00_3275);
					}}
					BgL_arg2061z00_3268 = bstring_to_symbol(BgL_arg2063z00_3270);
				}
				{	/* Ast/dump.scm 255 */
					obj_t BgL_arg2076z00_3280;

					{	/* Ast/dump.scm 255 */
						obj_t BgL_l1303z00_3281;

						BgL_l1303z00_3281 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_2966))))->BgL_exprza2za2);
						if (NULLP(BgL_l1303z00_3281))
							{	/* Ast/dump.scm 255 */
								BgL_arg2076z00_3280 = BNIL;
							}
						else
							{	/* Ast/dump.scm 255 */
								obj_t BgL_head1305z00_3282;

								{	/* Ast/dump.scm 255 */
									obj_t BgL_arg2083z00_3283;

									{	/* Ast/dump.scm 255 */
										obj_t BgL_arg2084z00_3284;

										BgL_arg2084z00_3284 = CAR(BgL_l1303z00_3281);
										BgL_arg2083z00_3283 =
											BGl_nodezd2ze3sexpz31zzast_dumpz00(
											((BgL_nodez00_bglt) BgL_arg2084z00_3284));
									}
									{	/* Ast/dump.scm 255 */
										obj_t BgL_res2415z00_3285;

										BgL_res2415z00_3285 =
											MAKE_YOUNG_PAIR(BgL_arg2083z00_3283, BNIL);
										BgL_head1305z00_3282 = BgL_res2415z00_3285;
									}
								}
								{	/* Ast/dump.scm 255 */
									obj_t BgL_g1308z00_3286;

									BgL_g1308z00_3286 = CDR(BgL_l1303z00_3281);
									{
										obj_t BgL_l1303z00_3288;
										obj_t BgL_tail1306z00_3289;

										BgL_l1303z00_3288 = BgL_g1308z00_3286;
										BgL_tail1306z00_3289 = BgL_head1305z00_3282;
									BgL_zc3z04anonymousza32078ze3z87_3287:
										if (NULLP(BgL_l1303z00_3288))
											{	/* Ast/dump.scm 255 */
												BgL_arg2076z00_3280 = BgL_head1305z00_3282;
											}
										else
											{	/* Ast/dump.scm 255 */
												obj_t BgL_newtail1307z00_3290;

												{	/* Ast/dump.scm 255 */
													obj_t BgL_arg2081z00_3291;

													{	/* Ast/dump.scm 255 */
														obj_t BgL_arg2082z00_3292;

														BgL_arg2082z00_3292 =
															CAR(((obj_t) BgL_l1303z00_3288));
														BgL_arg2081z00_3291 =
															BGl_nodezd2ze3sexpz31zzast_dumpz00(
															((BgL_nodez00_bglt) BgL_arg2082z00_3292));
													}
													{	/* Ast/dump.scm 255 */
														obj_t BgL_res2417z00_3293;

														BgL_res2417z00_3293 =
															MAKE_YOUNG_PAIR(BgL_arg2081z00_3291, BNIL);
														BgL_newtail1307z00_3290 = BgL_res2417z00_3293;
													}
												}
												SET_CDR(BgL_tail1306z00_3289, BgL_newtail1307z00_3290);
												{	/* Ast/dump.scm 255 */
													obj_t BgL_arg2080z00_3294;

													BgL_arg2080z00_3294 =
														CDR(((obj_t) BgL_l1303z00_3288));
													{
														obj_t BgL_tail1306z00_4310;
														obj_t BgL_l1303z00_4309;

														BgL_l1303z00_4309 = BgL_arg2080z00_3294;
														BgL_tail1306z00_4310 = BgL_newtail1307z00_3290;
														BgL_tail1306z00_3289 = BgL_tail1306z00_4310;
														BgL_l1303z00_3288 = BgL_l1303z00_4309;
														goto BgL_zc3z04anonymousza32078ze3z87_3287;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg2062z00_3269 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg2076z00_3280,
						BNIL);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2061z00_3268, BgL_arg2062z00_3269);
			}
		}

	}



/* &node->sexp-vset!1365 */
	obj_t BGl_z62nodezd2ze3sexpzd2vsetz121365z93zzast_dumpz00(obj_t
		BgL_envz00_2967, obj_t BgL_nodez00_2968)
	{
		{	/* Ast/dump.scm 237 */
			{	/* Ast/dump.scm 240 */
				obj_t BgL_idz00_3296;

				{	/* Ast/dump.scm 240 */
					obj_t BgL_arg2057z00_3297;
					BgL_typez00_bglt BgL_arg2059z00_3298;

					if (
						(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2968)))->BgL_unsafez00))
						{	/* Ast/dump.scm 240 */
							BgL_arg2057z00_3297 = CNST_TABLE_REF(((long) 20));
						}
					else
						{	/* Ast/dump.scm 240 */
							BgL_arg2057z00_3297 = CNST_TABLE_REF(((long) 21));
						}
					BgL_arg2059z00_3298 =
						BGl_getzd2typezd2zztype_typeofz00(
						((BgL_nodez00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_2968)), ((bool_t) 0));
					BgL_idz00_3296 =
						BGl_shapezd2typedzd2nodez00zzast_dumpz00(BgL_arg2057z00_3297,
						BgL_arg2059z00_3298);
				}
				if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
					{	/* Ast/dump.scm 242 */
						obj_t BgL_arg2028z00_3299;

						{	/* Ast/dump.scm 242 */
							obj_t BgL_arg2029z00_3300;
							obj_t BgL_arg2031z00_3301;

							{	/* Ast/dump.scm 242 */
								obj_t BgL_v1290z00_3302;

								BgL_v1290z00_3302 = create_vector(((long) 1));
								{	/* Ast/dump.scm 242 */
									obj_t BgL_arg2033z00_3303;

									{	/* Ast/dump.scm 242 */
										BgL_typez00_bglt BgL_arg2034z00_3304;

										BgL_arg2034z00_3304 =
											(((BgL_vsetz12z12_bglt) COBJECT(
													((BgL_vsetz12z12_bglt) BgL_nodez00_2968)))->
											BgL_ftypez00);
										BgL_arg2033z00_3303 =
											BGl_shapez00zztools_shapez00(((obj_t)
												BgL_arg2034z00_3304));
									}
									VECTOR_SET(BgL_v1290z00_3302, ((long) 0),
										BgL_arg2033z00_3303);
								}
								BgL_arg2029z00_3300 = BgL_v1290z00_3302;
							}
							{	/* Ast/dump.scm 242 */
								obj_t BgL_arg2035z00_3305;

								{	/* Ast/dump.scm 242 */
									obj_t BgL_l1291z00_3306;

									BgL_l1291z00_3306 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vsetz12z12_bglt) BgL_nodez00_2968))))->
										BgL_exprza2za2);
									if (NULLP(BgL_l1291z00_3306))
										{	/* Ast/dump.scm 242 */
											BgL_arg2035z00_3305 = BNIL;
										}
									else
										{	/* Ast/dump.scm 242 */
											obj_t BgL_head1293z00_3307;

											{	/* Ast/dump.scm 242 */
												obj_t BgL_arg2043z00_3308;

												{	/* Ast/dump.scm 242 */
													obj_t BgL_arg2044z00_3309;

													BgL_arg2044z00_3309 = CAR(BgL_l1291z00_3306);
													BgL_arg2043z00_3308 =
														BGl_nodezd2ze3sexpz31zzast_dumpz00(
														((BgL_nodez00_bglt) BgL_arg2044z00_3309));
												}
												{	/* Ast/dump.scm 242 */
													obj_t BgL_res2406z00_3310;

													BgL_res2406z00_3310 =
														MAKE_YOUNG_PAIR(BgL_arg2043z00_3308, BNIL);
													BgL_head1293z00_3307 = BgL_res2406z00_3310;
												}
											}
											{	/* Ast/dump.scm 242 */
												obj_t BgL_g1296z00_3311;

												BgL_g1296z00_3311 = CDR(BgL_l1291z00_3306);
												{
													obj_t BgL_l1291z00_3313;
													obj_t BgL_tail1294z00_3314;

													BgL_l1291z00_3313 = BgL_g1296z00_3311;
													BgL_tail1294z00_3314 = BgL_head1293z00_3307;
												BgL_zc3z04anonymousza32037ze3z87_3312:
													if (NULLP(BgL_l1291z00_3313))
														{	/* Ast/dump.scm 242 */
															BgL_arg2035z00_3305 = BgL_head1293z00_3307;
														}
													else
														{	/* Ast/dump.scm 242 */
															obj_t BgL_newtail1295z00_3315;

															{	/* Ast/dump.scm 242 */
																obj_t BgL_arg2040z00_3316;

																{	/* Ast/dump.scm 242 */
																	obj_t BgL_arg2041z00_3317;

																	BgL_arg2041z00_3317 =
																		CAR(((obj_t) BgL_l1291z00_3313));
																	BgL_arg2040z00_3316 =
																		BGl_nodezd2ze3sexpz31zzast_dumpz00(
																		((BgL_nodez00_bglt) BgL_arg2041z00_3317));
																}
																{	/* Ast/dump.scm 242 */
																	obj_t BgL_res2408z00_3318;

																	BgL_res2408z00_3318 =
																		MAKE_YOUNG_PAIR(BgL_arg2040z00_3316, BNIL);
																	BgL_newtail1295z00_3315 = BgL_res2408z00_3318;
																}
															}
															SET_CDR(BgL_tail1294z00_3314,
																BgL_newtail1295z00_3315);
															{	/* Ast/dump.scm 242 */
																obj_t BgL_arg2039z00_3319;

																BgL_arg2039z00_3319 =
																	CDR(((obj_t) BgL_l1291z00_3313));
																{
																	obj_t BgL_tail1294z00_4351;
																	obj_t BgL_l1291z00_4350;

																	BgL_l1291z00_4350 = BgL_arg2039z00_3319;
																	BgL_tail1294z00_4351 =
																		BgL_newtail1295z00_3315;
																	BgL_tail1294z00_3314 = BgL_tail1294z00_4351;
																	BgL_l1291z00_3313 = BgL_l1291z00_4350;
																	goto BgL_zc3z04anonymousza32037ze3z87_3312;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg2031z00_3301 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2035z00_3305, BNIL);
							}
							BgL_arg2028z00_3299 =
								MAKE_YOUNG_PAIR(BgL_arg2029z00_3300, BgL_arg2031z00_3301);
						}
						return MAKE_YOUNG_PAIR(BgL_idz00_3296, BgL_arg2028z00_3299);
					}
				else
					{	/* Ast/dump.scm 243 */
						obj_t BgL_arg2045z00_3320;

						{	/* Ast/dump.scm 243 */
							obj_t BgL_arg2046z00_3321;

							{	/* Ast/dump.scm 243 */
								obj_t BgL_l1297z00_3322;

								BgL_l1297z00_3322 =
									(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_vsetz12z12_bglt) BgL_nodez00_2968))))->
									BgL_exprza2za2);
								if (NULLP(BgL_l1297z00_3322))
									{	/* Ast/dump.scm 243 */
										BgL_arg2046z00_3321 = BNIL;
									}
								else
									{	/* Ast/dump.scm 243 */
										obj_t BgL_head1299z00_3323;

										{	/* Ast/dump.scm 243 */
											obj_t BgL_arg2055z00_3324;

											{	/* Ast/dump.scm 243 */
												obj_t BgL_arg2056z00_3325;

												BgL_arg2056z00_3325 = CAR(BgL_l1297z00_3322);
												BgL_arg2055z00_3324 =
													BGl_nodezd2ze3sexpz31zzast_dumpz00(
													((BgL_nodez00_bglt) BgL_arg2056z00_3325));
											}
											{	/* Ast/dump.scm 243 */
												obj_t BgL_res2410z00_3326;

												BgL_res2410z00_3326 =
													MAKE_YOUNG_PAIR(BgL_arg2055z00_3324, BNIL);
												BgL_head1299z00_3323 = BgL_res2410z00_3326;
											}
										}
										{	/* Ast/dump.scm 243 */
											obj_t BgL_g1302z00_3327;

											BgL_g1302z00_3327 = CDR(BgL_l1297z00_3322);
											{
												obj_t BgL_l1297z00_3329;
												obj_t BgL_tail1300z00_3330;

												BgL_l1297z00_3329 = BgL_g1302z00_3327;
												BgL_tail1300z00_3330 = BgL_head1299z00_3323;
											BgL_zc3z04anonymousza32048ze3z87_3328:
												if (NULLP(BgL_l1297z00_3329))
													{	/* Ast/dump.scm 243 */
														BgL_arg2046z00_3321 = BgL_head1299z00_3323;
													}
												else
													{	/* Ast/dump.scm 243 */
														obj_t BgL_newtail1301z00_3331;

														{	/* Ast/dump.scm 243 */
															obj_t BgL_arg2051z00_3332;

															{	/* Ast/dump.scm 243 */
																obj_t BgL_arg2053z00_3333;

																BgL_arg2053z00_3333 =
																	CAR(((obj_t) BgL_l1297z00_3329));
																BgL_arg2051z00_3332 =
																	BGl_nodezd2ze3sexpz31zzast_dumpz00(
																	((BgL_nodez00_bglt) BgL_arg2053z00_3333));
															}
															{	/* Ast/dump.scm 243 */
																obj_t BgL_res2412z00_3334;

																BgL_res2412z00_3334 =
																	MAKE_YOUNG_PAIR(BgL_arg2051z00_3332, BNIL);
																BgL_newtail1301z00_3331 = BgL_res2412z00_3334;
															}
														}
														SET_CDR(BgL_tail1300z00_3330,
															BgL_newtail1301z00_3331);
														{	/* Ast/dump.scm 243 */
															obj_t BgL_arg2050z00_3335;

															BgL_arg2050z00_3335 =
																CDR(((obj_t) BgL_l1297z00_3329));
															{
																obj_t BgL_tail1300z00_4376;
																obj_t BgL_l1297z00_4375;

																BgL_l1297z00_4375 = BgL_arg2050z00_3335;
																BgL_tail1300z00_4376 = BgL_newtail1301z00_3331;
																BgL_tail1300z00_3330 = BgL_tail1300z00_4376;
																BgL_l1297z00_3329 = BgL_l1297z00_4375;
																goto BgL_zc3z04anonymousza32048ze3z87_3328;
															}
														}
													}
											}
										}
									}
							}
							BgL_arg2045z00_3320 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2046z00_3321, BNIL);
						}
						return MAKE_YOUNG_PAIR(BgL_idz00_3296, BgL_arg2045z00_3320);
					}
			}
		}

	}



/* &node->sexp-vref1363 */
	obj_t BGl_z62nodezd2ze3sexpzd2vref1363z81zzast_dumpz00(obj_t BgL_envz00_2969,
		obj_t BgL_nodez00_2970)
	{
		{	/* Ast/dump.scm 221 */
			{	/* Ast/dump.scm 224 */
				obj_t BgL_idz00_3337;

				if (
					(((BgL_vrefz00_bglt) COBJECT(
								((BgL_vrefz00_bglt) BgL_nodez00_2970)))->BgL_unsafez00))
					{	/* Ast/dump.scm 224 */
						BgL_idz00_3337 = CNST_TABLE_REF(((long) 22));
					}
				else
					{	/* Ast/dump.scm 224 */
						BgL_idz00_3337 = CNST_TABLE_REF(((long) 23));
					}
				if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
					{	/* Ast/dump.scm 227 */
						obj_t BgL_arg1989z00_3338;
						obj_t BgL_arg1990z00_3339;

						{	/* Ast/dump.scm 227 */
							obj_t BgL_arg1991z00_3340;

							{	/* Ast/dump.scm 227 */
								obj_t BgL_arg1992z00_3341;
								obj_t BgL_arg1993z00_3342;
								obj_t BgL_arg1995z00_3343;

								{	/* Ast/dump.scm 227 */
									obj_t BgL_res2395z00_3344;

									{	/* Ast/dump.scm 227 */
										obj_t BgL_arg1466z00_3345;

										BgL_arg1466z00_3345 = SYMBOL_TO_STRING(BgL_idz00_3337);
										BgL_res2395z00_3344 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_3345);
									}
									BgL_arg1992z00_3341 = BgL_res2395z00_3344;
								}
								{	/* Ast/dump.scm 229 */
									BgL_typez00_bglt BgL_arg2002z00_3346;

									BgL_arg2002z00_3346 =
										BGl_getzd2typezd2zztype_typeofz00(
										((BgL_nodez00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_2970)), ((bool_t) 0));
									BgL_arg1993z00_3342 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2002z00_3346));
								}
								{	/* Ast/dump.scm 230 */
									BgL_typez00_bglt BgL_arg2003z00_3347;

									BgL_arg2003z00_3347 =
										(((BgL_vrefz00_bglt) COBJECT(
												((BgL_vrefz00_bglt) BgL_nodez00_2970)))->BgL_ftypez00);
									BgL_arg1995z00_3343 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg2003z00_3347));
								}
								{	/* Ast/dump.scm 227 */
									obj_t BgL_list1996z00_3348;

									{	/* Ast/dump.scm 227 */
										obj_t BgL_arg1997z00_3349;

										{	/* Ast/dump.scm 227 */
											obj_t BgL_arg1998z00_3350;

											{	/* Ast/dump.scm 227 */
												obj_t BgL_arg1999z00_3351;

												{	/* Ast/dump.scm 227 */
													obj_t BgL_arg2000z00_3352;

													{	/* Ast/dump.scm 227 */
														obj_t BgL_arg2001z00_3353;

														BgL_arg2001z00_3353 =
															MAKE_YOUNG_PAIR(BGl_string2478z00zzast_dumpz00,
															BNIL);
														BgL_arg2000z00_3352 =
															MAKE_YOUNG_PAIR(BgL_arg1995z00_3343,
															BgL_arg2001z00_3353);
													}
													BgL_arg1999z00_3351 =
														MAKE_YOUNG_PAIR(BGl_string2479z00zzast_dumpz00,
														BgL_arg2000z00_3352);
												}
												BgL_arg1998z00_3350 =
													MAKE_YOUNG_PAIR(BgL_arg1993z00_3342,
													BgL_arg1999z00_3351);
											}
											BgL_arg1997z00_3349 =
												MAKE_YOUNG_PAIR(BGl_string2437z00zzast_dumpz00,
												BgL_arg1998z00_3350);
										}
										BgL_list1996z00_3348 =
											MAKE_YOUNG_PAIR(BgL_arg1992z00_3341, BgL_arg1997z00_3349);
									}
									BgL_arg1991z00_3340 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1996z00_3348);
								}
							}
							BgL_arg1989z00_3338 = bstring_to_symbol(BgL_arg1991z00_3340);
						}
						{	/* Ast/dump.scm 231 */
							obj_t BgL_arg2004z00_3354;

							{	/* Ast/dump.scm 231 */
								obj_t BgL_l1278z00_3355;

								BgL_l1278z00_3355 =
									(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_vrefz00_bglt) BgL_nodez00_2970))))->
									BgL_exprza2za2);
								if (NULLP(BgL_l1278z00_3355))
									{	/* Ast/dump.scm 231 */
										BgL_arg2004z00_3354 = BNIL;
									}
								else
									{	/* Ast/dump.scm 231 */
										obj_t BgL_head1280z00_3356;

										{	/* Ast/dump.scm 231 */
											obj_t BgL_arg2012z00_3357;

											{	/* Ast/dump.scm 231 */
												obj_t BgL_arg2013z00_3358;

												BgL_arg2013z00_3358 = CAR(BgL_l1278z00_3355);
												BgL_arg2012z00_3357 =
													BGl_nodezd2ze3sexpz31zzast_dumpz00(
													((BgL_nodez00_bglt) BgL_arg2013z00_3358));
											}
											{	/* Ast/dump.scm 231 */
												obj_t BgL_res2398z00_3359;

												BgL_res2398z00_3359 =
													MAKE_YOUNG_PAIR(BgL_arg2012z00_3357, BNIL);
												BgL_head1280z00_3356 = BgL_res2398z00_3359;
											}
										}
										{	/* Ast/dump.scm 231 */
											obj_t BgL_g1283z00_3360;

											BgL_g1283z00_3360 = CDR(BgL_l1278z00_3355);
											{
												obj_t BgL_l1278z00_3362;
												obj_t BgL_tail1281z00_3363;

												BgL_l1278z00_3362 = BgL_g1283z00_3360;
												BgL_tail1281z00_3363 = BgL_head1280z00_3356;
											BgL_zc3z04anonymousza32006ze3z87_3361:
												if (NULLP(BgL_l1278z00_3362))
													{	/* Ast/dump.scm 231 */
														BgL_arg2004z00_3354 = BgL_head1280z00_3356;
													}
												else
													{	/* Ast/dump.scm 231 */
														obj_t BgL_newtail1282z00_3364;

														{	/* Ast/dump.scm 231 */
															obj_t BgL_arg2010z00_3365;

															{	/* Ast/dump.scm 231 */
																obj_t BgL_arg2011z00_3366;

																BgL_arg2011z00_3366 =
																	CAR(((obj_t) BgL_l1278z00_3362));
																BgL_arg2010z00_3365 =
																	BGl_nodezd2ze3sexpz31zzast_dumpz00(
																	((BgL_nodez00_bglt) BgL_arg2011z00_3366));
															}
															{	/* Ast/dump.scm 231 */
																obj_t BgL_res2400z00_3367;

																BgL_res2400z00_3367 =
																	MAKE_YOUNG_PAIR(BgL_arg2010z00_3365, BNIL);
																BgL_newtail1282z00_3364 = BgL_res2400z00_3367;
															}
														}
														SET_CDR(BgL_tail1281z00_3363,
															BgL_newtail1282z00_3364);
														{	/* Ast/dump.scm 231 */
															obj_t BgL_arg2008z00_3368;

															BgL_arg2008z00_3368 =
																CDR(((obj_t) BgL_l1278z00_3362));
															{
																obj_t BgL_tail1281z00_4426;
																obj_t BgL_l1278z00_4425;

																BgL_l1278z00_4425 = BgL_arg2008z00_3368;
																BgL_tail1281z00_4426 = BgL_newtail1282z00_3364;
																BgL_tail1281z00_3363 = BgL_tail1281z00_4426;
																BgL_l1278z00_3362 = BgL_l1278z00_4425;
																goto BgL_zc3z04anonymousza32006ze3z87_3361;
															}
														}
													}
											}
										}
									}
							}
							BgL_arg1990z00_3339 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2004z00_3354, BNIL);
						}
						return MAKE_YOUNG_PAIR(BgL_arg1989z00_3338, BgL_arg1990z00_3339);
					}
				else
					{	/* Ast/dump.scm 232 */
						obj_t BgL_arg2014z00_3369;

						{	/* Ast/dump.scm 232 */
							obj_t BgL_arg2016z00_3370;

							{	/* Ast/dump.scm 232 */
								obj_t BgL_l1284z00_3371;

								BgL_l1284z00_3371 =
									(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_vrefz00_bglt) BgL_nodez00_2970))))->
									BgL_exprza2za2);
								if (NULLP(BgL_l1284z00_3371))
									{	/* Ast/dump.scm 232 */
										BgL_arg2016z00_3370 = BNIL;
									}
								else
									{	/* Ast/dump.scm 232 */
										obj_t BgL_head1286z00_3372;

										{	/* Ast/dump.scm 232 */
											obj_t BgL_arg2023z00_3373;

											{	/* Ast/dump.scm 232 */
												obj_t BgL_arg2026z00_3374;

												BgL_arg2026z00_3374 = CAR(BgL_l1284z00_3371);
												BgL_arg2023z00_3373 =
													BGl_nodezd2ze3sexpz31zzast_dumpz00(
													((BgL_nodez00_bglt) BgL_arg2026z00_3374));
											}
											{	/* Ast/dump.scm 232 */
												obj_t BgL_res2402z00_3375;

												BgL_res2402z00_3375 =
													MAKE_YOUNG_PAIR(BgL_arg2023z00_3373, BNIL);
												BgL_head1286z00_3372 = BgL_res2402z00_3375;
											}
										}
										{	/* Ast/dump.scm 232 */
											obj_t BgL_g1289z00_3376;

											BgL_g1289z00_3376 = CDR(BgL_l1284z00_3371);
											{
												obj_t BgL_l1284z00_3378;
												obj_t BgL_tail1287z00_3379;

												BgL_l1284z00_3378 = BgL_g1289z00_3376;
												BgL_tail1287z00_3379 = BgL_head1286z00_3372;
											BgL_zc3z04anonymousza32018ze3z87_3377:
												if (NULLP(BgL_l1284z00_3378))
													{	/* Ast/dump.scm 232 */
														BgL_arg2016z00_3370 = BgL_head1286z00_3372;
													}
												else
													{	/* Ast/dump.scm 232 */
														obj_t BgL_newtail1288z00_3380;

														{	/* Ast/dump.scm 232 */
															obj_t BgL_arg2021z00_3381;

															{	/* Ast/dump.scm 232 */
																obj_t BgL_arg2022z00_3382;

																BgL_arg2022z00_3382 =
																	CAR(((obj_t) BgL_l1284z00_3378));
																BgL_arg2021z00_3381 =
																	BGl_nodezd2ze3sexpz31zzast_dumpz00(
																	((BgL_nodez00_bglt) BgL_arg2022z00_3382));
															}
															{	/* Ast/dump.scm 232 */
																obj_t BgL_res2404z00_3383;

																BgL_res2404z00_3383 =
																	MAKE_YOUNG_PAIR(BgL_arg2021z00_3381, BNIL);
																BgL_newtail1288z00_3380 = BgL_res2404z00_3383;
															}
														}
														SET_CDR(BgL_tail1287z00_3379,
															BgL_newtail1288z00_3380);
														{	/* Ast/dump.scm 232 */
															obj_t BgL_arg2020z00_3384;

															BgL_arg2020z00_3384 =
																CDR(((obj_t) BgL_l1284z00_3378));
															{
																obj_t BgL_tail1287z00_4450;
																obj_t BgL_l1284z00_4449;

																BgL_l1284z00_4449 = BgL_arg2020z00_3384;
																BgL_tail1287z00_4450 = BgL_newtail1288z00_3380;
																BgL_tail1287z00_3379 = BgL_tail1287z00_4450;
																BgL_l1284z00_3378 = BgL_l1284z00_4449;
																goto BgL_zc3z04anonymousza32018ze3z87_3377;
															}
														}
													}
											}
										}
									}
							}
							BgL_arg2014z00_3369 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2016z00_3370, BNIL);
						}
						return MAKE_YOUNG_PAIR(BgL_idz00_3337, BgL_arg2014z00_3369);
					}
			}
		}

	}



/* &node->sexp-vlength1361 */
	obj_t BGl_z62nodezd2ze3sexpzd2vlength1361z81zzast_dumpz00(obj_t
		BgL_envz00_2971, obj_t BgL_nodez00_2972)
	{
		{	/* Ast/dump.scm 210 */
			{	/* Ast/dump.scm 213 */
				obj_t BgL_arg1975z00_3386;
				obj_t BgL_arg1976z00_3387;

				BgL_arg1975z00_3386 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_vlengthz00_bglt) BgL_nodez00_2972))))->BgL_locz00);
				{	/* Ast/dump.scm 214 */
					obj_t BgL_arg1977z00_3388;
					obj_t BgL_arg1979z00_3389;

					{	/* Ast/dump.scm 214 */
						BgL_typez00_bglt BgL_arg1980z00_3390;

						BgL_arg1980z00_3390 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vlengthz00_bglt) BgL_nodez00_2972))))->BgL_typez00);
						{	/* Ast/dump.scm 214 */
							obj_t BgL_idz00_3391;

							BgL_idz00_3391 = CNST_TABLE_REF(((long) 24));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3392;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3393;
										obj_t BgL_arg1465z00_3394;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3395;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3396;

												BgL_arg1466z00_3396 = SYMBOL_TO_STRING(BgL_idz00_3391);
												BgL_res2336z00_3395 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3396);
											}
											BgL_arg1464z00_3393 = BgL_res2336z00_3395;
										}
										BgL_arg1465z00_3394 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg1980z00_3390));
										BgL_arg1462z00_3392 =
											string_append_3(BgL_arg1464z00_3393,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3394);
									}
									BgL_arg1977z00_3388 = bstring_to_symbol(BgL_arg1462z00_3392);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg1977z00_3388 = BgL_idz00_3391;
								}
						}
					}
					{	/* Ast/dump.scm 215 */
						obj_t BgL_arg1981z00_3397;
						obj_t BgL_arg1982z00_3398;

						{	/* Ast/dump.scm 215 */
							obj_t BgL_arg1983z00_3399;

							BgL_arg1983z00_3399 =
								MAKE_YOUNG_PAIR(BGl_shapez00zztools_shapez00(
									(((BgL_vlengthz00_bglt) COBJECT(
												((BgL_vlengthz00_bglt) BgL_nodez00_2972)))->
										BgL_ftypez00)), BNIL);
							BgL_arg1981z00_3397 =
								MAKE_YOUNG_PAIR(BGl_string2481z00zzast_dumpz00,
								BgL_arg1983z00_3399);
						}
						{	/* Ast/dump.scm 216 */
							obj_t BgL_arg1986z00_3400;

							{	/* Ast/dump.scm 216 */
								obj_t BgL_arg1987z00_3401;

								{	/* Ast/dump.scm 216 */
									obj_t BgL_pairz00_3402;

									BgL_pairz00_3402 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vlengthz00_bglt) BgL_nodez00_2972))))->
										BgL_exprza2za2);
									BgL_arg1987z00_3401 = CAR(BgL_pairz00_3402);
								}
								BgL_arg1986z00_3400 =
									BGl_nodezd2ze3sexpz31zzast_dumpz00(
									((BgL_nodez00_bglt) BgL_arg1987z00_3401));
							}
							BgL_arg1982z00_3398 = MAKE_YOUNG_PAIR(BgL_arg1986z00_3400, BNIL);
						}
						BgL_arg1979z00_3389 =
							MAKE_YOUNG_PAIR(BgL_arg1981z00_3397, BgL_arg1982z00_3398);
					}
					BgL_arg1976z00_3387 =
						MAKE_YOUNG_PAIR(BgL_arg1977z00_3388, BgL_arg1979z00_3389);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1975z00_3386,
					BgL_arg1976z00_3387);
			}
		}

	}



/* &node->sexp-new1359 */
	obj_t BGl_z62nodezd2ze3sexpzd2new1359z81zzast_dumpz00(obj_t BgL_envz00_2973,
		obj_t BgL_nodez00_2974)
	{
		{	/* Ast/dump.scm 200 */
			{	/* Ast/dump.scm 203 */
				obj_t BgL_arg1957z00_3404;
				obj_t BgL_arg1958z00_3405;

				BgL_arg1957z00_3404 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_newz00_bglt) BgL_nodez00_2974))))->BgL_locz00);
				{	/* Ast/dump.scm 204 */
					obj_t BgL_arg1959z00_3406;
					obj_t BgL_arg1960z00_3407;

					{	/* Ast/dump.scm 204 */
						BgL_typez00_bglt BgL_arg1961z00_3408;

						BgL_arg1961z00_3408 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_newz00_bglt) BgL_nodez00_2974))))->BgL_typez00);
						{	/* Ast/dump.scm 204 */
							obj_t BgL_idz00_3409;

							BgL_idz00_3409 = CNST_TABLE_REF(((long) 25));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3410;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3411;
										obj_t BgL_arg1465z00_3412;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3413;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3414;

												BgL_arg1466z00_3414 = SYMBOL_TO_STRING(BgL_idz00_3409);
												BgL_res2336z00_3413 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3414);
											}
											BgL_arg1464z00_3411 = BgL_res2336z00_3413;
										}
										BgL_arg1465z00_3412 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg1961z00_3408));
										BgL_arg1462z00_3410 =
											string_append_3(BgL_arg1464z00_3411,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3412);
									}
									BgL_arg1959z00_3406 = bstring_to_symbol(BgL_arg1462z00_3410);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg1959z00_3406 = BgL_idz00_3409;
								}
						}
					}
					{	/* Ast/dump.scm 205 */
						obj_t BgL_arg1962z00_3415;
						obj_t BgL_arg1963z00_3416;

						{	/* Ast/dump.scm 205 */
							obj_t BgL_arg1964z00_3417;

							BgL_arg1964z00_3417 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_newz00_bglt) BgL_nodez00_2974))))->
											BgL_typez00)))->BgL_idz00);
							BgL_arg1962z00_3415 = MAKE_YOUNG_PAIR(BgL_arg1964z00_3417, BNIL);
						}
						{	/* Ast/dump.scm 205 */
							obj_t BgL_arg1966z00_3418;

							{	/* Ast/dump.scm 205 */
								obj_t BgL_l1272z00_3419;

								BgL_l1272z00_3419 =
									(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_newz00_bglt) BgL_nodez00_2974))))->
									BgL_exprza2za2);
								if (NULLP(BgL_l1272z00_3419))
									{	/* Ast/dump.scm 205 */
										BgL_arg1966z00_3418 = BNIL;
									}
								else
									{	/* Ast/dump.scm 205 */
										obj_t BgL_head1274z00_3420;

										{	/* Ast/dump.scm 205 */
											obj_t BgL_arg1973z00_3421;

											{	/* Ast/dump.scm 205 */
												obj_t BgL_arg1974z00_3422;

												BgL_arg1974z00_3422 = CAR(BgL_l1272z00_3419);
												BgL_arg1973z00_3421 =
													BGl_nodezd2ze3sexpz31zzast_dumpz00(
													((BgL_nodez00_bglt) BgL_arg1974z00_3422));
											}
											{	/* Ast/dump.scm 205 */
												obj_t BgL_res2392z00_3423;

												BgL_res2392z00_3423 =
													MAKE_YOUNG_PAIR(BgL_arg1973z00_3421, BNIL);
												BgL_head1274z00_3420 = BgL_res2392z00_3423;
											}
										}
										{	/* Ast/dump.scm 205 */
											obj_t BgL_g1277z00_3424;

											BgL_g1277z00_3424 = CDR(BgL_l1272z00_3419);
											{
												obj_t BgL_l1272z00_3426;
												obj_t BgL_tail1275z00_3427;

												BgL_l1272z00_3426 = BgL_g1277z00_3424;
												BgL_tail1275z00_3427 = BgL_head1274z00_3420;
											BgL_zc3z04anonymousza31968ze3z87_3425:
												if (NULLP(BgL_l1272z00_3426))
													{	/* Ast/dump.scm 205 */
														BgL_arg1966z00_3418 = BgL_head1274z00_3420;
													}
												else
													{	/* Ast/dump.scm 205 */
														obj_t BgL_newtail1276z00_3428;

														{	/* Ast/dump.scm 205 */
															obj_t BgL_arg1971z00_3429;

															{	/* Ast/dump.scm 205 */
																obj_t BgL_arg1972z00_3430;

																BgL_arg1972z00_3430 =
																	CAR(((obj_t) BgL_l1272z00_3426));
																BgL_arg1971z00_3429 =
																	BGl_nodezd2ze3sexpz31zzast_dumpz00(
																	((BgL_nodez00_bglt) BgL_arg1972z00_3430));
															}
															{	/* Ast/dump.scm 205 */
																obj_t BgL_res2394z00_3431;

																BgL_res2394z00_3431 =
																	MAKE_YOUNG_PAIR(BgL_arg1971z00_3429, BNIL);
																BgL_newtail1276z00_3428 = BgL_res2394z00_3431;
															}
														}
														SET_CDR(BgL_tail1275z00_3427,
															BgL_newtail1276z00_3428);
														{	/* Ast/dump.scm 205 */
															obj_t BgL_arg1970z00_3432;

															BgL_arg1970z00_3432 =
																CDR(((obj_t) BgL_l1272z00_3426));
															{
																obj_t BgL_tail1275z00_4524;
																obj_t BgL_l1272z00_4523;

																BgL_l1272z00_4523 = BgL_arg1970z00_3432;
																BgL_tail1275z00_4524 = BgL_newtail1276z00_3428;
																BgL_tail1275z00_3427 = BgL_tail1275z00_4524;
																BgL_l1272z00_3426 = BgL_l1272z00_4523;
																goto BgL_zc3z04anonymousza31968ze3z87_3425;
															}
														}
													}
											}
										}
									}
							}
							BgL_arg1963z00_3416 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1966z00_3418, BNIL);
						}
						BgL_arg1960z00_3407 =
							MAKE_YOUNG_PAIR(BgL_arg1962z00_3415, BgL_arg1963z00_3416);
					}
					BgL_arg1958z00_3405 =
						MAKE_YOUNG_PAIR(BgL_arg1959z00_3406, BgL_arg1960z00_3407);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1957z00_3404,
					BgL_arg1958z00_3405);
			}
		}

	}



/* &node->sexp-setfield1357 */
	obj_t BGl_z62nodezd2ze3sexpzd2setfield1357z81zzast_dumpz00(obj_t
		BgL_envz00_2975, obj_t BgL_nodez00_2976)
	{
		{	/* Ast/dump.scm 190 */
			{	/* Ast/dump.scm 193 */
				obj_t BgL_arg1936z00_3434;
				obj_t BgL_arg1937z00_3435;

				BgL_arg1936z00_3434 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_2976))))->BgL_locz00);
				{	/* Ast/dump.scm 194 */
					obj_t BgL_arg1938z00_3436;

					{	/* Ast/dump.scm 194 */
						obj_t BgL_arg1939z00_3437;
						obj_t BgL_arg1940z00_3438;

						{	/* Ast/dump.scm 194 */
							obj_t BgL_arg1941z00_3439;
							obj_t BgL_arg1942z00_3440;

							BgL_arg1941z00_3439 =
								(((BgL_setfieldz00_bglt) COBJECT(
										((BgL_setfieldz00_bglt) BgL_nodez00_2976)))->BgL_fnamez00);
							BgL_arg1942z00_3440 =
								MAKE_YOUNG_PAIR(
								(((BgL_typez00_bglt) COBJECT(
											(((BgL_setfieldz00_bglt) COBJECT(
														((BgL_setfieldz00_bglt) BgL_nodez00_2976)))->
												BgL_ftypez00)))->BgL_idz00), BNIL);
							BgL_arg1939z00_3437 =
								MAKE_YOUNG_PAIR(BgL_arg1941z00_3439, BgL_arg1942z00_3440);
						}
						{	/* Ast/dump.scm 195 */
							obj_t BgL_arg1945z00_3441;
							obj_t BgL_arg1946z00_3442;

							BgL_arg1945z00_3441 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_setfieldz00_bglt) COBJECT(
													((BgL_setfieldz00_bglt) BgL_nodez00_2976)))->
											BgL_otypez00)))->BgL_idz00);
							{	/* Ast/dump.scm 195 */
								obj_t BgL_arg1948z00_3443;

								{	/* Ast/dump.scm 195 */
									obj_t BgL_l1266z00_3444;

									BgL_l1266z00_3444 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_setfieldz00_bglt) BgL_nodez00_2976))))->
										BgL_exprza2za2);
									if (NULLP(BgL_l1266z00_3444))
										{	/* Ast/dump.scm 195 */
											BgL_arg1948z00_3443 = BNIL;
										}
									else
										{	/* Ast/dump.scm 195 */
											obj_t BgL_head1268z00_3445;

											{	/* Ast/dump.scm 195 */
												obj_t BgL_arg1955z00_3446;

												{	/* Ast/dump.scm 195 */
													obj_t BgL_arg1956z00_3447;

													BgL_arg1956z00_3447 = CAR(BgL_l1266z00_3444);
													BgL_arg1955z00_3446 =
														BGl_nodezd2ze3sexpz31zzast_dumpz00(
														((BgL_nodez00_bglt) BgL_arg1956z00_3447));
												}
												{	/* Ast/dump.scm 195 */
													obj_t BgL_res2388z00_3448;

													BgL_res2388z00_3448 =
														MAKE_YOUNG_PAIR(BgL_arg1955z00_3446, BNIL);
													BgL_head1268z00_3445 = BgL_res2388z00_3448;
												}
											}
											{	/* Ast/dump.scm 195 */
												obj_t BgL_g1271z00_3449;

												BgL_g1271z00_3449 = CDR(BgL_l1266z00_3444);
												{
													obj_t BgL_l1266z00_3451;
													obj_t BgL_tail1269z00_3452;

													BgL_l1266z00_3451 = BgL_g1271z00_3449;
													BgL_tail1269z00_3452 = BgL_head1268z00_3445;
												BgL_zc3z04anonymousza31950ze3z87_3450:
													if (NULLP(BgL_l1266z00_3451))
														{	/* Ast/dump.scm 195 */
															BgL_arg1948z00_3443 = BgL_head1268z00_3445;
														}
													else
														{	/* Ast/dump.scm 195 */
															obj_t BgL_newtail1270z00_3453;

															{	/* Ast/dump.scm 195 */
																obj_t BgL_arg1953z00_3454;

																{	/* Ast/dump.scm 195 */
																	obj_t BgL_arg1954z00_3455;

																	BgL_arg1954z00_3455 =
																		CAR(((obj_t) BgL_l1266z00_3451));
																	BgL_arg1953z00_3454 =
																		BGl_nodezd2ze3sexpz31zzast_dumpz00(
																		((BgL_nodez00_bglt) BgL_arg1954z00_3455));
																}
																{	/* Ast/dump.scm 195 */
																	obj_t BgL_res2390z00_3456;

																	BgL_res2390z00_3456 =
																		MAKE_YOUNG_PAIR(BgL_arg1953z00_3454, BNIL);
																	BgL_newtail1270z00_3453 = BgL_res2390z00_3456;
																}
															}
															SET_CDR(BgL_tail1269z00_3452,
																BgL_newtail1270z00_3453);
															{	/* Ast/dump.scm 195 */
																obj_t BgL_arg1952z00_3457;

																BgL_arg1952z00_3457 =
																	CDR(((obj_t) BgL_l1266z00_3451));
																{
																	obj_t BgL_tail1269z00_4563;
																	obj_t BgL_l1266z00_4562;

																	BgL_l1266z00_4562 = BgL_arg1952z00_3457;
																	BgL_tail1269z00_4563 =
																		BgL_newtail1270z00_3453;
																	BgL_tail1269z00_3452 = BgL_tail1269z00_4563;
																	BgL_l1266z00_3451 = BgL_l1266z00_4562;
																	goto BgL_zc3z04anonymousza31950ze3z87_3450;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg1946z00_3442 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1948z00_3443, BNIL);
							}
							BgL_arg1940z00_3438 =
								MAKE_YOUNG_PAIR(BgL_arg1945z00_3441, BgL_arg1946z00_3442);
						}
						BgL_arg1938z00_3436 =
							MAKE_YOUNG_PAIR(BgL_arg1939z00_3437, BgL_arg1940z00_3438);
					}
					BgL_arg1937z00_3435 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)), BgL_arg1938z00_3436);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1936z00_3434,
					BgL_arg1937z00_3435);
			}
		}

	}



/* &node->sexp-getfield1355 */
	obj_t BGl_z62nodezd2ze3sexpzd2getfield1355z81zzast_dumpz00(obj_t
		BgL_envz00_2977, obj_t BgL_nodez00_2978)
	{
		{	/* Ast/dump.scm 179 */
			{	/* Ast/dump.scm 182 */
				obj_t BgL_arg1918z00_3459;
				obj_t BgL_arg1919z00_3460;

				BgL_arg1918z00_3459 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_2978))))->BgL_locz00);
				{	/* Ast/dump.scm 183 */
					obj_t BgL_arg1920z00_3461;
					obj_t BgL_arg1921z00_3462;

					{	/* Ast/dump.scm 183 */
						BgL_typez00_bglt BgL_arg1923z00_3463;

						BgL_arg1923z00_3463 =
							BGl_getzd2typezd2zztype_typeofz00(
							((BgL_nodez00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_2978)), ((bool_t) 0));
						{	/* Ast/dump.scm 183 */
							obj_t BgL_idz00_3464;

							BgL_idz00_3464 = CNST_TABLE_REF(((long) 27));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3465;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3466;
										obj_t BgL_arg1465z00_3467;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3468;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3469;

												BgL_arg1466z00_3469 = SYMBOL_TO_STRING(BgL_idz00_3464);
												BgL_res2336z00_3468 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3469);
											}
											BgL_arg1464z00_3466 = BgL_res2336z00_3468;
										}
										BgL_arg1465z00_3467 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg1923z00_3463));
										BgL_arg1462z00_3465 =
											string_append_3(BgL_arg1464z00_3466,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3467);
									}
									BgL_arg1920z00_3461 = bstring_to_symbol(BgL_arg1462z00_3465);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg1920z00_3461 = BgL_idz00_3464;
								}
						}
					}
					{	/* Ast/dump.scm 184 */
						obj_t BgL_arg1924z00_3470;
						obj_t BgL_arg1925z00_3471;

						{	/* Ast/dump.scm 184 */
							obj_t BgL_arg1926z00_3472;
							obj_t BgL_arg1927z00_3473;

							BgL_arg1926z00_3472 =
								(((BgL_getfieldz00_bglt) COBJECT(
										((BgL_getfieldz00_bglt) BgL_nodez00_2978)))->BgL_fnamez00);
							BgL_arg1927z00_3473 =
								MAKE_YOUNG_PAIR(
								(((BgL_typez00_bglt) COBJECT(
											(((BgL_getfieldz00_bglt) COBJECT(
														((BgL_getfieldz00_bglt) BgL_nodez00_2978)))->
												BgL_ftypez00)))->BgL_idz00), BNIL);
							BgL_arg1924z00_3470 =
								MAKE_YOUNG_PAIR(BgL_arg1926z00_3472, BgL_arg1927z00_3473);
						}
						{	/* Ast/dump.scm 185 */
							obj_t BgL_arg1930z00_3474;
							obj_t BgL_arg1931z00_3475;

							BgL_arg1930z00_3474 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_getfieldz00_bglt) COBJECT(
													((BgL_getfieldz00_bglt) BgL_nodez00_2978)))->
											BgL_otypez00)))->BgL_idz00);
							{	/* Ast/dump.scm 185 */
								obj_t BgL_arg1933z00_3476;

								{	/* Ast/dump.scm 185 */
									obj_t BgL_arg1934z00_3477;

									{	/* Ast/dump.scm 185 */
										obj_t BgL_pairz00_3478;

										BgL_pairz00_3478 =
											(((BgL_externz00_bglt) COBJECT(
													((BgL_externz00_bglt)
														((BgL_getfieldz00_bglt) BgL_nodez00_2978))))->
											BgL_exprza2za2);
										BgL_arg1934z00_3477 = CAR(BgL_pairz00_3478);
									}
									BgL_arg1933z00_3476 =
										BGl_nodezd2ze3sexpz31zzast_dumpz00(
										((BgL_nodez00_bglt) BgL_arg1934z00_3477));
								}
								BgL_arg1931z00_3475 =
									MAKE_YOUNG_PAIR(BgL_arg1933z00_3476, BNIL);
							}
							BgL_arg1925z00_3471 =
								MAKE_YOUNG_PAIR(BgL_arg1930z00_3474, BgL_arg1931z00_3475);
						}
						BgL_arg1921z00_3462 =
							MAKE_YOUNG_PAIR(BgL_arg1924z00_3470, BgL_arg1925z00_3471);
					}
					BgL_arg1919z00_3460 =
						MAKE_YOUNG_PAIR(BgL_arg1920z00_3461, BgL_arg1921z00_3462);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1918z00_3459,
					BgL_arg1919z00_3460);
			}
		}

	}



/* &node->sexp-pragma1353 */
	obj_t BGl_z62nodezd2ze3sexpzd2pragma1353z81zzast_dumpz00(obj_t
		BgL_envz00_2979, obj_t BgL_nodez00_2980)
	{
		{	/* Ast/dump.scm 166 */
			{	/* Ast/dump.scm 168 */
				obj_t BgL_arg1901z00_3480;
				obj_t BgL_arg1902z00_3481;

				BgL_arg1901z00_3480 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_pragmaz00_bglt) BgL_nodez00_2980))))->BgL_locz00);
				{	/* Ast/dump.scm 169 */
					obj_t BgL_pz00_3482;

					if (CBOOL(
							(((BgL_nodezf2effectzf2_bglt) COBJECT(
										((BgL_nodezf2effectzf2_bglt)
											((BgL_pragmaz00_bglt) BgL_nodez00_2980))))->
								BgL_sidezd2effectzd2)))
						{	/* Ast/dump.scm 169 */
							BgL_pz00_3482 = CNST_TABLE_REF(((long) 28));
						}
					else
						{	/* Ast/dump.scm 169 */
							BgL_pz00_3482 = CNST_TABLE_REF(((long) 29));
						}
					{	/* Ast/dump.scm 172 */
						obj_t BgL_arg1903z00_3483;
						obj_t BgL_arg1904z00_3484;

						{	/* Ast/dump.scm 172 */
							BgL_typez00_bglt BgL_arg1905z00_3485;

							BgL_arg1905z00_3485 =
								BGl_getzd2typezd2zztype_typeofz00(
								((BgL_nodez00_bglt)
									((BgL_pragmaz00_bglt) BgL_nodez00_2980)), ((bool_t) 0));
							BgL_arg1903z00_3483 =
								BGl_shapezd2typedzd2nodez00zzast_dumpz00(BgL_pz00_3482,
								BgL_arg1905z00_3485);
						}
						{	/* Ast/dump.scm 173 */
							obj_t BgL_arg1906z00_3486;
							obj_t BgL_arg1907z00_3487;

							BgL_arg1906z00_3486 =
								(((BgL_pragmaz00_bglt) COBJECT(
										((BgL_pragmaz00_bglt) BgL_nodez00_2980)))->BgL_formatz00);
							{	/* Ast/dump.scm 174 */
								obj_t BgL_arg1908z00_3488;

								{	/* Ast/dump.scm 174 */
									obj_t BgL_l1260z00_3489;

									BgL_l1260z00_3489 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_pragmaz00_bglt) BgL_nodez00_2980))))->
										BgL_exprza2za2);
									if (NULLP(BgL_l1260z00_3489))
										{	/* Ast/dump.scm 174 */
											BgL_arg1908z00_3488 = BNIL;
										}
									else
										{	/* Ast/dump.scm 174 */
											obj_t BgL_head1262z00_3490;

											{	/* Ast/dump.scm 174 */
												obj_t BgL_arg1915z00_3491;

												{	/* Ast/dump.scm 174 */
													obj_t BgL_arg1916z00_3492;

													BgL_arg1916z00_3492 = CAR(BgL_l1260z00_3489);
													BgL_arg1915z00_3491 =
														BGl_nodezd2ze3sexpz31zzast_dumpz00(
														((BgL_nodez00_bglt) BgL_arg1916z00_3492));
												}
												{	/* Ast/dump.scm 174 */
													obj_t BgL_res2384z00_3493;

													BgL_res2384z00_3493 =
														MAKE_YOUNG_PAIR(BgL_arg1915z00_3491, BNIL);
													BgL_head1262z00_3490 = BgL_res2384z00_3493;
												}
											}
											{	/* Ast/dump.scm 174 */
												obj_t BgL_g1265z00_3494;

												BgL_g1265z00_3494 = CDR(BgL_l1260z00_3489);
												{
													obj_t BgL_l1260z00_3496;
													obj_t BgL_tail1263z00_3497;

													BgL_l1260z00_3496 = BgL_g1265z00_3494;
													BgL_tail1263z00_3497 = BgL_head1262z00_3490;
												BgL_zc3z04anonymousza31910ze3z87_3495:
													if (NULLP(BgL_l1260z00_3496))
														{	/* Ast/dump.scm 174 */
															BgL_arg1908z00_3488 = BgL_head1262z00_3490;
														}
													else
														{	/* Ast/dump.scm 174 */
															obj_t BgL_newtail1264z00_3498;

															{	/* Ast/dump.scm 174 */
																obj_t BgL_arg1913z00_3499;

																{	/* Ast/dump.scm 174 */
																	obj_t BgL_arg1914z00_3500;

																	BgL_arg1914z00_3500 =
																		CAR(((obj_t) BgL_l1260z00_3496));
																	BgL_arg1913z00_3499 =
																		BGl_nodezd2ze3sexpz31zzast_dumpz00(
																		((BgL_nodez00_bglt) BgL_arg1914z00_3500));
																}
																{	/* Ast/dump.scm 174 */
																	obj_t BgL_res2386z00_3501;

																	BgL_res2386z00_3501 =
																		MAKE_YOUNG_PAIR(BgL_arg1913z00_3499, BNIL);
																	BgL_newtail1264z00_3498 = BgL_res2386z00_3501;
																}
															}
															SET_CDR(BgL_tail1263z00_3497,
																BgL_newtail1264z00_3498);
															{	/* Ast/dump.scm 174 */
																obj_t BgL_arg1912z00_3502;

																BgL_arg1912z00_3502 =
																	CDR(((obj_t) BgL_l1260z00_3496));
																{
																	obj_t BgL_tail1263z00_4643;
																	obj_t BgL_l1260z00_4642;

																	BgL_l1260z00_4642 = BgL_arg1912z00_3502;
																	BgL_tail1263z00_4643 =
																		BgL_newtail1264z00_3498;
																	BgL_tail1263z00_3497 = BgL_tail1263z00_4643;
																	BgL_l1260z00_3496 = BgL_l1260z00_4642;
																	goto BgL_zc3z04anonymousza31910ze3z87_3495;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg1907z00_3487 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1908z00_3488, BNIL);
							}
							BgL_arg1904z00_3484 =
								MAKE_YOUNG_PAIR(BgL_arg1906z00_3486, BgL_arg1907z00_3487);
						}
						BgL_arg1902z00_3481 =
							MAKE_YOUNG_PAIR(BgL_arg1903z00_3483, BgL_arg1904z00_3484);
					}
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1901z00_3480,
					BgL_arg1902z00_3481);
			}
		}

	}



/* &node->sexp-funcall1351 */
	obj_t BGl_z62nodezd2ze3sexpzd2funcall1351z81zzast_dumpz00(obj_t
		BgL_envz00_2981, obj_t BgL_nodez00_2982)
	{
		{	/* Ast/dump.scm 151 */
			{	/* Ast/dump.scm 153 */
				obj_t BgL_opz00_3504;

				{	/* Ast/dump.scm 153 */
					obj_t BgL_casezd2valuezd2_3505;

					BgL_casezd2valuezd2_3505 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2982)))->BgL_strengthz00);
					if ((BgL_casezd2valuezd2_3505 == CNST_TABLE_REF(((long) 30))))
						{	/* Ast/dump.scm 153 */
							BgL_opz00_3504 = CNST_TABLE_REF(((long) 31));
						}
					else
						{	/* Ast/dump.scm 153 */
							if ((BgL_casezd2valuezd2_3505 == CNST_TABLE_REF(((long) 32))))
								{	/* Ast/dump.scm 153 */
									BgL_opz00_3504 = CNST_TABLE_REF(((long) 33));
								}
							else
								{	/* Ast/dump.scm 153 */
									BgL_opz00_3504 = CNST_TABLE_REF(((long) 34));
				}}}
				{	/* Ast/dump.scm 153 */
					obj_t BgL_topz00_3506;

					{	/* Ast/dump.scm 157 */
						BgL_typez00_bglt BgL_arg1897z00_3507;

						BgL_arg1897z00_3507 =
							BGl_getzd2typezd2zztype_typeofz00(
							((BgL_nodez00_bglt)
								((BgL_funcallz00_bglt) BgL_nodez00_2982)), ((bool_t) 0));
						BgL_topz00_3506 =
							BGl_shapezd2typedzd2nodez00zzast_dumpz00(BgL_opz00_3504,
							BgL_arg1897z00_3507);
					}
					{	/* Ast/dump.scm 157 */

						{	/* Ast/dump.scm 158 */
							obj_t BgL_arg1879z00_3508;
							obj_t BgL_arg1881z00_3509;

							BgL_arg1879z00_3508 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_funcallz00_bglt) BgL_nodez00_2982))))->BgL_locz00);
							{	/* Ast/dump.scm 160 */
								obj_t BgL_arg1882z00_3510;

								{	/* Ast/dump.scm 160 */
									obj_t BgL_arg1883z00_3511;
									obj_t BgL_arg1884z00_3512;

									BgL_arg1883z00_3511 =
										BGl_nodezd2ze3sexpz31zzast_dumpz00(
										(((BgL_funcallz00_bglt) COBJECT(
													((BgL_funcallz00_bglt) BgL_nodez00_2982)))->
											BgL_funz00));
									{	/* Ast/dump.scm 161 */
										obj_t BgL_arg1886z00_3513;

										{	/* Ast/dump.scm 161 */
											obj_t BgL_l1253z00_3514;

											BgL_l1253z00_3514 =
												(((BgL_funcallz00_bglt) COBJECT(
														((BgL_funcallz00_bglt) BgL_nodez00_2982)))->
												BgL_argsz00);
											if (NULLP(BgL_l1253z00_3514))
												{	/* Ast/dump.scm 161 */
													BgL_arg1886z00_3513 = BNIL;
												}
											else
												{	/* Ast/dump.scm 161 */
													obj_t BgL_head1255z00_3515;

													{	/* Ast/dump.scm 161 */
														obj_t BgL_arg1895z00_3516;

														{	/* Ast/dump.scm 161 */
															obj_t BgL_arg1896z00_3517;

															BgL_arg1896z00_3517 =
																CAR(((obj_t) BgL_l1253z00_3514));
															BgL_arg1895z00_3516 =
																BGl_nodezd2ze3sexpz31zzast_dumpz00(
																((BgL_nodez00_bglt) BgL_arg1896z00_3517));
														}
														{	/* Ast/dump.scm 161 */
															obj_t BgL_res2380z00_3518;

															BgL_res2380z00_3518 =
																MAKE_YOUNG_PAIR(BgL_arg1895z00_3516, BNIL);
															BgL_head1255z00_3515 = BgL_res2380z00_3518;
														}
													}
													{	/* Ast/dump.scm 161 */
														obj_t BgL_g1259z00_3519;

														BgL_g1259z00_3519 =
															CDR(((obj_t) BgL_l1253z00_3514));
														{
															obj_t BgL_l1253z00_3521;
															obj_t BgL_tail1256z00_3522;

															BgL_l1253z00_3521 = BgL_g1259z00_3519;
															BgL_tail1256z00_3522 = BgL_head1255z00_3515;
														BgL_zc3z04anonymousza31888ze3z87_3520:
															if (NULLP(BgL_l1253z00_3521))
																{	/* Ast/dump.scm 161 */
																	BgL_arg1886z00_3513 = BgL_head1255z00_3515;
																}
															else
																{	/* Ast/dump.scm 161 */
																	obj_t BgL_newtail1257z00_3523;

																	{	/* Ast/dump.scm 161 */
																		obj_t BgL_arg1892z00_3524;

																		{	/* Ast/dump.scm 161 */
																			obj_t BgL_arg1893z00_3525;

																			BgL_arg1893z00_3525 =
																				CAR(((obj_t) BgL_l1253z00_3521));
																			BgL_arg1892z00_3524 =
																				BGl_nodezd2ze3sexpz31zzast_dumpz00(
																				((BgL_nodez00_bglt)
																					BgL_arg1893z00_3525));
																		}
																		{	/* Ast/dump.scm 161 */
																			obj_t BgL_res2382z00_3526;

																			BgL_res2382z00_3526 =
																				MAKE_YOUNG_PAIR(BgL_arg1892z00_3524,
																				BNIL);
																			BgL_newtail1257z00_3523 =
																				BgL_res2382z00_3526;
																		}
																	}
																	SET_CDR(BgL_tail1256z00_3522,
																		BgL_newtail1257z00_3523);
																	{	/* Ast/dump.scm 161 */
																		obj_t BgL_arg1891z00_3527;

																		BgL_arg1891z00_3527 =
																			CDR(((obj_t) BgL_l1253z00_3521));
																		{
																			obj_t BgL_tail1256z00_4691;
																			obj_t BgL_l1253z00_4690;

																			BgL_l1253z00_4690 = BgL_arg1891z00_3527;
																			BgL_tail1256z00_4691 =
																				BgL_newtail1257z00_3523;
																			BgL_tail1256z00_3522 =
																				BgL_tail1256z00_4691;
																			BgL_l1253z00_3521 = BgL_l1253z00_4690;
																			goto
																				BgL_zc3z04anonymousza31888ze3z87_3520;
																		}
																	}
																}
														}
													}
												}
										}
										BgL_arg1884z00_3512 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1886z00_3513, BNIL);
									}
									BgL_arg1882z00_3510 =
										MAKE_YOUNG_PAIR(BgL_arg1883z00_3511, BgL_arg1884z00_3512);
								}
								BgL_arg1881z00_3509 =
									MAKE_YOUNG_PAIR(BgL_topz00_3506, BgL_arg1882z00_3510);
							}
							return
								BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1879z00_3508,
								BgL_arg1881z00_3509);
						}
					}
				}
			}
		}

	}



/* &node->sexp-app-ly1349 */
	obj_t BGl_z62nodezd2ze3sexpzd2appzd2ly1349z53zzast_dumpz00(obj_t
		BgL_envz00_2983, obj_t BgL_nodez00_2984)
	{
		{	/* Ast/dump.scm 141 */
			{	/* Ast/dump.scm 143 */
				obj_t BgL_topz00_3529;

				{	/* Ast/dump.scm 143 */
					obj_t BgL_arg1877z00_3530;

					{	/* Ast/dump.scm 143 */
						BgL_typez00_bglt BgL_arg1878z00_3531;

						BgL_arg1878z00_3531 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2984))))->BgL_typez00);
						BgL_arg1877z00_3530 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1878z00_3531));
					}
					{	/* Ast/dump.scm 143 */
						obj_t BgL_idz00_3532;

						BgL_idz00_3532 = CNST_TABLE_REF(((long) 35));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3533;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3534;
									obj_t BgL_arg1465z00_3535;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3536;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3537;

											BgL_arg1466z00_3537 = SYMBOL_TO_STRING(BgL_idz00_3532);
											BgL_res2336z00_3536 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3537);
										}
										BgL_arg1464z00_3534 = BgL_res2336z00_3536;
									}
									BgL_arg1465z00_3535 =
										BGl_shapez00zztools_shapez00(BgL_arg1877z00_3530);
									BgL_arg1462z00_3533 =
										string_append_3(BgL_arg1464z00_3534,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3535);
								}
								BgL_topz00_3529 = bstring_to_symbol(BgL_arg1462z00_3533);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_topz00_3529 = BgL_idz00_3532;
							}
					}
				}
				{	/* Ast/dump.scm 144 */
					obj_t BgL_arg1866z00_3538;
					obj_t BgL_arg1868z00_3539;

					BgL_arg1866z00_3538 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2984))))->BgL_locz00);
					{	/* Ast/dump.scm 145 */
						obj_t BgL_arg1870z00_3540;

						{	/* Ast/dump.scm 145 */
							obj_t BgL_arg1871z00_3541;
							obj_t BgL_arg1872z00_3542;

							BgL_arg1871z00_3541 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								(((BgL_appzd2lyzd2_bglt) COBJECT(
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_2984)))->BgL_funz00));
							BgL_arg1872z00_3542 =
								MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(
									(((BgL_appzd2lyzd2_bglt) COBJECT(
												((BgL_appzd2lyzd2_bglt) BgL_nodez00_2984)))->
										BgL_argz00)), BNIL);
							BgL_arg1870z00_3540 =
								MAKE_YOUNG_PAIR(BgL_arg1871z00_3541, BgL_arg1872z00_3542);
						}
						BgL_arg1868z00_3539 =
							MAKE_YOUNG_PAIR(BgL_topz00_3529, BgL_arg1870z00_3540);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1866z00_3538,
						BgL_arg1868z00_3539);
				}
			}
		}

	}



/* &node->sexp-app1347 */
	obj_t BGl_z62nodezd2ze3sexpzd2app1347z81zzast_dumpz00(obj_t BgL_envz00_2985,
		obj_t BgL_nodez00_2986)
	{
		{	/* Ast/dump.scm 118 */
			{	/* Ast/dump.scm 120 */
				obj_t BgL_arg1768z00_3544;
				obj_t BgL_arg1771z00_3545;

				BgL_arg1768z00_3544 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_2986))))->BgL_locz00);
				if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
					{	/* Ast/dump.scm 123 */
						obj_t BgL_arg1775z00_3546;
						obj_t BgL_arg1778z00_3547;

						{	/* Ast/dump.scm 123 */
							BgL_varz00_bglt BgL_arg1779z00_3548;

							BgL_arg1779z00_3548 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2986)))->BgL_funz00);
							BgL_arg1775z00_3546 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								((BgL_nodez00_bglt) BgL_arg1779z00_3548));
						}
						{	/* Ast/dump.scm 124 */
							obj_t BgL_arg1782z00_3549;
							obj_t BgL_arg1784z00_3550;

							if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 126 */
									obj_t BgL_arg1790z00_3551;

									{	/* Ast/dump.scm 126 */
										bool_t BgL_arg1796z00_3552;

										BgL_arg1796z00_3552 =
											BGl_sidezd2effectzf3z21zzeffect_effectz00(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_2986)));
										{	/* Ast/dump.scm 126 */
											obj_t BgL_list1797z00_3553;

											{	/* Ast/dump.scm 126 */
												obj_t BgL_arg1798z00_3554;

												BgL_arg1798z00_3554 =
													MAKE_YOUNG_PAIR(BBOOL(BgL_arg1796z00_3552), BNIL);
												BgL_list1797z00_3553 =
													MAKE_YOUNG_PAIR(BGl_string2477z00zzast_dumpz00,
													BgL_arg1798z00_3554);
											}
											BgL_arg1790z00_3551 = BgL_list1797z00_3553;
										}
									}
									{	/* Ast/dump.scm 125 */
										obj_t BgL_list1791z00_3555;

										BgL_list1791z00_3555 =
											MAKE_YOUNG_PAIR(BgL_arg1790z00_3551, BNIL);
										BgL_arg1782z00_3549 = BgL_list1791z00_3555;
									}
								}
							else
								{	/* Ast/dump.scm 124 */
									BgL_arg1782z00_3549 = BNIL;
								}
							{	/* Ast/dump.scm 128 */
								obj_t BgL_arg1801z00_3556;
								obj_t BgL_arg1808z00_3557;

								{	/* Ast/dump.scm 128 */
									obj_t BgL_arg1809z00_3558;

									{	/* Ast/dump.scm 128 */
										BgL_typez00_bglt BgL_arg1820z00_3559;

										BgL_arg1820z00_3559 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_2986))))->
											BgL_typez00);
										BgL_arg1809z00_3558 =
											BGl_shapez00zztools_shapez00(((obj_t)
												BgL_arg1820z00_3559));
									}
									{	/* Ast/dump.scm 128 */
										obj_t BgL_list1810z00_3560;

										{	/* Ast/dump.scm 128 */
											obj_t BgL_arg1811z00_3561;

											BgL_arg1811z00_3561 =
												MAKE_YOUNG_PAIR(BgL_arg1809z00_3558, BNIL);
											BgL_list1810z00_3560 =
												MAKE_YOUNG_PAIR(BGl_string2482z00zzast_dumpz00,
												BgL_arg1811z00_3561);
										}
										BgL_arg1801z00_3556 = BgL_list1810z00_3560;
									}
								}
								{	/* Ast/dump.scm 129 */
									obj_t BgL_arg1821z00_3562;

									{	/* Ast/dump.scm 129 */
										obj_t BgL_l1235z00_3563;

										BgL_l1235z00_3563 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2986)))->BgL_argsz00);
										if (NULLP(BgL_l1235z00_3563))
											{	/* Ast/dump.scm 129 */
												BgL_arg1821z00_3562 = BNIL;
											}
										else
											{	/* Ast/dump.scm 129 */
												obj_t BgL_head1237z00_3564;

												{	/* Ast/dump.scm 129 */
													obj_t BgL_arg1829z00_3565;

													{	/* Ast/dump.scm 129 */
														obj_t BgL_arg1830z00_3566;

														BgL_arg1830z00_3566 =
															CAR(((obj_t) BgL_l1235z00_3563));
														BgL_arg1829z00_3565 =
															BGl_nodezd2ze3sexpz31zzast_dumpz00(
															((BgL_nodez00_bglt) BgL_arg1830z00_3566));
													}
													{	/* Ast/dump.scm 129 */
														obj_t BgL_res2365z00_3567;

														BgL_res2365z00_3567 =
															MAKE_YOUNG_PAIR(BgL_arg1829z00_3565, BNIL);
														BgL_head1237z00_3564 = BgL_res2365z00_3567;
													}
												}
												{	/* Ast/dump.scm 129 */
													obj_t BgL_g1240z00_3568;

													BgL_g1240z00_3568 = CDR(((obj_t) BgL_l1235z00_3563));
													{
														obj_t BgL_l1235z00_3570;
														obj_t BgL_tail1238z00_3571;

														BgL_l1235z00_3570 = BgL_g1240z00_3568;
														BgL_tail1238z00_3571 = BgL_head1237z00_3564;
													BgL_zc3z04anonymousza31824ze3z87_3569:
														if (NULLP(BgL_l1235z00_3570))
															{	/* Ast/dump.scm 129 */
																BgL_arg1821z00_3562 = BgL_head1237z00_3564;
															}
														else
															{	/* Ast/dump.scm 129 */
																obj_t BgL_newtail1239z00_3572;

																{	/* Ast/dump.scm 129 */
																	obj_t BgL_arg1827z00_3573;

																	{	/* Ast/dump.scm 129 */
																		obj_t BgL_arg1828z00_3574;

																		BgL_arg1828z00_3574 =
																			CAR(((obj_t) BgL_l1235z00_3570));
																		BgL_arg1827z00_3573 =
																			BGl_nodezd2ze3sexpz31zzast_dumpz00(
																			((BgL_nodez00_bglt) BgL_arg1828z00_3574));
																	}
																	{	/* Ast/dump.scm 129 */
																		obj_t BgL_res2367z00_3575;

																		BgL_res2367z00_3575 =
																			MAKE_YOUNG_PAIR(BgL_arg1827z00_3573,
																			BNIL);
																		BgL_newtail1239z00_3572 =
																			BgL_res2367z00_3575;
																	}
																}
																SET_CDR(BgL_tail1238z00_3571,
																	BgL_newtail1239z00_3572);
																{	/* Ast/dump.scm 129 */
																	obj_t BgL_arg1826z00_3576;

																	BgL_arg1826z00_3576 =
																		CDR(((obj_t) BgL_l1235z00_3570));
																	{
																		obj_t BgL_tail1238z00_4769;
																		obj_t BgL_l1235z00_4768;

																		BgL_l1235z00_4768 = BgL_arg1826z00_3576;
																		BgL_tail1238z00_4769 =
																			BgL_newtail1239z00_3572;
																		BgL_tail1238z00_3571 = BgL_tail1238z00_4769;
																		BgL_l1235z00_3570 = BgL_l1235z00_4768;
																		goto BgL_zc3z04anonymousza31824ze3z87_3569;
																	}
																}
															}
													}
												}
											}
									}
									BgL_arg1808z00_3557 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1821z00_3562, BNIL);
								}
								BgL_arg1784z00_3550 =
									MAKE_YOUNG_PAIR(BgL_arg1801z00_3556, BgL_arg1808z00_3557);
							}
							BgL_arg1778z00_3547 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1782z00_3549, BgL_arg1784z00_3550);
						}
						BgL_arg1771z00_3545 =
							MAKE_YOUNG_PAIR(BgL_arg1775z00_3546, BgL_arg1778z00_3547);
					}
				else
					{	/* Ast/dump.scm 122 */
						if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 131 */
								obj_t BgL_arg1831z00_3577;
								obj_t BgL_arg1832z00_3578;

								{	/* Ast/dump.scm 131 */
									BgL_varz00_bglt BgL_arg1833z00_3579;

									BgL_arg1833z00_3579 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_2986)))->BgL_funz00);
									BgL_arg1831z00_3577 =
										BGl_nodezd2ze3sexpz31zzast_dumpz00(
										((BgL_nodez00_bglt) BgL_arg1833z00_3579));
								}
								{	/* Ast/dump.scm 132 */
									obj_t BgL_arg1835z00_3580;
									obj_t BgL_arg1836z00_3581;

									{	/* Ast/dump.scm 132 */
										bool_t BgL_arg1838z00_3582;

										BgL_arg1838z00_3582 =
											BGl_sidezd2effectzf3z21zzeffect_effectz00(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_2986)));
										{	/* Ast/dump.scm 132 */
											obj_t BgL_list1839z00_3583;

											{	/* Ast/dump.scm 132 */
												obj_t BgL_arg1840z00_3584;

												BgL_arg1840z00_3584 =
													MAKE_YOUNG_PAIR(BBOOL(BgL_arg1838z00_3582), BNIL);
												BgL_list1839z00_3583 =
													MAKE_YOUNG_PAIR(BGl_string2477z00zzast_dumpz00,
													BgL_arg1840z00_3584);
											}
											BgL_arg1835z00_3580 = BgL_list1839z00_3583;
										}
									}
									{	/* Ast/dump.scm 133 */
										obj_t BgL_arg1841z00_3585;

										{	/* Ast/dump.scm 133 */
											obj_t BgL_l1241z00_3586;

											BgL_l1241z00_3586 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2986)))->
												BgL_argsz00);
											if (NULLP(BgL_l1241z00_3586))
												{	/* Ast/dump.scm 133 */
													BgL_arg1841z00_3585 = BNIL;
												}
											else
												{	/* Ast/dump.scm 133 */
													obj_t BgL_head1243z00_3587;

													{	/* Ast/dump.scm 133 */
														obj_t BgL_arg1848z00_3588;

														{	/* Ast/dump.scm 133 */
															obj_t BgL_arg1850z00_3589;

															BgL_arg1850z00_3589 =
																CAR(((obj_t) BgL_l1241z00_3586));
															BgL_arg1848z00_3588 =
																BGl_nodezd2ze3sexpz31zzast_dumpz00(
																((BgL_nodez00_bglt) BgL_arg1850z00_3589));
														}
														{	/* Ast/dump.scm 133 */
															obj_t BgL_res2370z00_3590;

															BgL_res2370z00_3590 =
																MAKE_YOUNG_PAIR(BgL_arg1848z00_3588, BNIL);
															BgL_head1243z00_3587 = BgL_res2370z00_3590;
														}
													}
													{	/* Ast/dump.scm 133 */
														obj_t BgL_g1246z00_3591;

														BgL_g1246z00_3591 =
															CDR(((obj_t) BgL_l1241z00_3586));
														{
															obj_t BgL_l1241z00_3593;
															obj_t BgL_tail1244z00_3594;

															BgL_l1241z00_3593 = BgL_g1246z00_3591;
															BgL_tail1244z00_3594 = BgL_head1243z00_3587;
														BgL_zc3z04anonymousza31843ze3z87_3592:
															if (NULLP(BgL_l1241z00_3593))
																{	/* Ast/dump.scm 133 */
																	BgL_arg1841z00_3585 = BgL_head1243z00_3587;
																}
															else
																{	/* Ast/dump.scm 133 */
																	obj_t BgL_newtail1245z00_3595;

																	{	/* Ast/dump.scm 133 */
																		obj_t BgL_arg1846z00_3596;

																		{	/* Ast/dump.scm 133 */
																			obj_t BgL_arg1847z00_3597;

																			BgL_arg1847z00_3597 =
																				CAR(((obj_t) BgL_l1241z00_3593));
																			BgL_arg1846z00_3596 =
																				BGl_nodezd2ze3sexpz31zzast_dumpz00(
																				((BgL_nodez00_bglt)
																					BgL_arg1847z00_3597));
																		}
																		{	/* Ast/dump.scm 133 */
																			obj_t BgL_res2372z00_3598;

																			BgL_res2372z00_3598 =
																				MAKE_YOUNG_PAIR(BgL_arg1846z00_3596,
																				BNIL);
																			BgL_newtail1245z00_3595 =
																				BgL_res2372z00_3598;
																		}
																	}
																	SET_CDR(BgL_tail1244z00_3594,
																		BgL_newtail1245z00_3595);
																	{	/* Ast/dump.scm 133 */
																		obj_t BgL_arg1845z00_3599;

																		BgL_arg1845z00_3599 =
																			CDR(((obj_t) BgL_l1241z00_3593));
																		{
																			obj_t BgL_tail1244z00_4808;
																			obj_t BgL_l1241z00_4807;

																			BgL_l1241z00_4807 = BgL_arg1845z00_3599;
																			BgL_tail1244z00_4808 =
																				BgL_newtail1245z00_3595;
																			BgL_tail1244z00_3594 =
																				BgL_tail1244z00_4808;
																			BgL_l1241z00_3593 = BgL_l1241z00_4807;
																			goto
																				BgL_zc3z04anonymousza31843ze3z87_3592;
																		}
																	}
																}
														}
													}
												}
										}
										BgL_arg1836z00_3581 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1841z00_3585, BNIL);
									}
									BgL_arg1832z00_3578 =
										MAKE_YOUNG_PAIR(BgL_arg1835z00_3580, BgL_arg1836z00_3581);
								}
								BgL_arg1771z00_3545 =
									MAKE_YOUNG_PAIR(BgL_arg1831z00_3577, BgL_arg1832z00_3578);
							}
						else
							{	/* Ast/dump.scm 135 */
								obj_t BgL_arg1851z00_3600;
								obj_t BgL_arg1852z00_3601;

								{	/* Ast/dump.scm 135 */
									BgL_varz00_bglt BgL_arg1853z00_3602;

									BgL_arg1853z00_3602 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_2986)))->BgL_funz00);
									BgL_arg1851z00_3600 =
										BGl_nodezd2ze3sexpz31zzast_dumpz00(
										((BgL_nodez00_bglt) BgL_arg1853z00_3602));
								}
								{	/* Ast/dump.scm 136 */
									obj_t BgL_arg1855z00_3603;

									{	/* Ast/dump.scm 136 */
										obj_t BgL_l1247z00_3604;

										BgL_l1247z00_3604 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2986)))->BgL_argsz00);
										if (NULLP(BgL_l1247z00_3604))
											{	/* Ast/dump.scm 136 */
												BgL_arg1855z00_3603 = BNIL;
											}
										else
											{	/* Ast/dump.scm 136 */
												obj_t BgL_head1249z00_3605;

												{	/* Ast/dump.scm 136 */
													obj_t BgL_arg1863z00_3606;

													{	/* Ast/dump.scm 136 */
														obj_t BgL_arg1865z00_3607;

														BgL_arg1865z00_3607 =
															CAR(((obj_t) BgL_l1247z00_3604));
														BgL_arg1863z00_3606 =
															BGl_nodezd2ze3sexpz31zzast_dumpz00(
															((BgL_nodez00_bglt) BgL_arg1865z00_3607));
													}
													{	/* Ast/dump.scm 136 */
														obj_t BgL_res2374z00_3608;

														BgL_res2374z00_3608 =
															MAKE_YOUNG_PAIR(BgL_arg1863z00_3606, BNIL);
														BgL_head1249z00_3605 = BgL_res2374z00_3608;
													}
												}
												{	/* Ast/dump.scm 136 */
													obj_t BgL_g1252z00_3609;

													BgL_g1252z00_3609 = CDR(((obj_t) BgL_l1247z00_3604));
													{
														obj_t BgL_l1247z00_3611;
														obj_t BgL_tail1250z00_3612;

														BgL_l1247z00_3611 = BgL_g1252z00_3609;
														BgL_tail1250z00_3612 = BgL_head1249z00_3605;
													BgL_zc3z04anonymousza31857ze3z87_3610:
														if (NULLP(BgL_l1247z00_3611))
															{	/* Ast/dump.scm 136 */
																BgL_arg1855z00_3603 = BgL_head1249z00_3605;
															}
														else
															{	/* Ast/dump.scm 136 */
																obj_t BgL_newtail1251z00_3613;

																{	/* Ast/dump.scm 136 */
																	obj_t BgL_arg1861z00_3614;

																	{	/* Ast/dump.scm 136 */
																		obj_t BgL_arg1862z00_3615;

																		BgL_arg1862z00_3615 =
																			CAR(((obj_t) BgL_l1247z00_3611));
																		BgL_arg1861z00_3614 =
																			BGl_nodezd2ze3sexpz31zzast_dumpz00(
																			((BgL_nodez00_bglt) BgL_arg1862z00_3615));
																	}
																	{	/* Ast/dump.scm 136 */
																		obj_t BgL_res2376z00_3616;

																		BgL_res2376z00_3616 =
																			MAKE_YOUNG_PAIR(BgL_arg1861z00_3614,
																			BNIL);
																		BgL_newtail1251z00_3613 =
																			BgL_res2376z00_3616;
																	}
																}
																SET_CDR(BgL_tail1250z00_3612,
																	BgL_newtail1251z00_3613);
																{	/* Ast/dump.scm 136 */
																	obj_t BgL_arg1859z00_3617;

																	BgL_arg1859z00_3617 =
																		CDR(((obj_t) BgL_l1247z00_3611));
																	{
																		obj_t BgL_tail1250z00_4838;
																		obj_t BgL_l1247z00_4837;

																		BgL_l1247z00_4837 = BgL_arg1859z00_3617;
																		BgL_tail1250z00_4838 =
																			BgL_newtail1251z00_3613;
																		BgL_tail1250z00_3612 = BgL_tail1250z00_4838;
																		BgL_l1247z00_3611 = BgL_l1247z00_4837;
																		goto BgL_zc3z04anonymousza31857ze3z87_3610;
																	}
																}
															}
													}
												}
											}
									}
									BgL_arg1852z00_3601 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1855z00_3603, BNIL);
								}
								BgL_arg1771z00_3545 =
									MAKE_YOUNG_PAIR(BgL_arg1851z00_3600, BgL_arg1852z00_3601);
							}
					}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1768z00_3544,
					BgL_arg1771z00_3545);
			}
		}

	}



/* &node->sexp-sync1345 */
	obj_t BGl_z62nodezd2ze3sexpzd2sync1345z81zzast_dumpz00(obj_t BgL_envz00_2987,
		obj_t BgL_nodez00_2988)
	{
		{	/* Ast/dump.scm 107 */
			{	/* Ast/dump.scm 109 */
				obj_t BgL_symz00_3619;

				{	/* Ast/dump.scm 109 */
					BgL_typez00_bglt BgL_arg1761z00_3620;

					BgL_arg1761z00_3620 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2988))))->BgL_typez00);
					{	/* Ast/dump.scm 109 */
						obj_t BgL_idz00_3621;

						BgL_idz00_3621 = CNST_TABLE_REF(((long) 36));
						if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 424 */
								obj_t BgL_arg1462z00_3622;

								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1464z00_3623;
									obj_t BgL_arg1465z00_3624;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_res2336z00_3625;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_arg1466z00_3626;

											BgL_arg1466z00_3626 = SYMBOL_TO_STRING(BgL_idz00_3621);
											BgL_res2336z00_3625 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3626);
										}
										BgL_arg1464z00_3623 = BgL_res2336z00_3625;
									}
									BgL_arg1465z00_3624 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1761z00_3620));
									BgL_arg1462z00_3622 =
										string_append_3(BgL_arg1464z00_3623,
										BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3624);
								}
								BgL_symz00_3619 = bstring_to_symbol(BgL_arg1462z00_3622);
							}
						else
							{	/* Ast/dump.scm 423 */
								BgL_symz00_3619 = BgL_idz00_3621;
							}
					}
				}
				{	/* Ast/dump.scm 110 */
					obj_t BgL_arg1742z00_3627;
					obj_t BgL_arg1743z00_3628;

					BgL_arg1742z00_3627 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2988))))->BgL_locz00);
					{	/* Ast/dump.scm 111 */
						obj_t BgL_arg1744z00_3629;

						{	/* Ast/dump.scm 111 */
							obj_t BgL_arg1745z00_3630;
							obj_t BgL_arg1746z00_3631;

							BgL_arg1745z00_3630 =
								BGl_nodezd2ze3sexpz31zzast_dumpz00(
								(((BgL_syncz00_bglt) COBJECT(
											((BgL_syncz00_bglt) BgL_nodez00_2988)))->BgL_mutexz00));
							{	/* Ast/dump.scm 112 */
								obj_t BgL_arg1754z00_3632;

								{	/* Ast/dump.scm 112 */
									obj_t BgL_arg1755z00_3633;
									obj_t BgL_arg1756z00_3634;

									BgL_arg1755z00_3633 =
										BGl_nodezd2ze3sexpz31zzast_dumpz00(
										(((BgL_syncz00_bglt) COBJECT(
													((BgL_syncz00_bglt) BgL_nodez00_2988)))->
											BgL_prelockz00));
									BgL_arg1756z00_3634 =
										MAKE_YOUNG_PAIR(BGl_nodezd2ze3sexpz31zzast_dumpz00(((
													(BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt)
															BgL_nodez00_2988)))->BgL_bodyz00)), BNIL);
									BgL_arg1754z00_3632 =
										MAKE_YOUNG_PAIR(BgL_arg1755z00_3633, BgL_arg1756z00_3634);
								}
								BgL_arg1746z00_3631 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
									BgL_arg1754z00_3632);
							}
							BgL_arg1744z00_3629 =
								MAKE_YOUNG_PAIR(BgL_arg1745z00_3630, BgL_arg1746z00_3631);
						}
						BgL_arg1743z00_3628 =
							MAKE_YOUNG_PAIR(BgL_symz00_3619, BgL_arg1744z00_3629);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1742z00_3627,
						BgL_arg1743z00_3628);
				}
			}
		}

	}



/* &node->sexp-sequence1343 */
	obj_t BGl_z62nodezd2ze3sexpzd2sequence1343z81zzast_dumpz00(obj_t
		BgL_envz00_2989, obj_t BgL_nodez00_2990)
	{
		{	/* Ast/dump.scm 95 */
			{	/* Ast/dump.scm 98 */
				obj_t BgL_symz00_3636;

				{	/* Ast/dump.scm 99 */
					obj_t BgL_arg1739z00_3637;
					BgL_typez00_bglt BgL_arg1740z00_3638;

					if (
						(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_2990)))->BgL_unsafez00))
						{	/* Ast/dump.scm 99 */
							BgL_arg1739z00_3637 = CNST_TABLE_REF(((long) 38));
						}
					else
						{	/* Ast/dump.scm 99 */
							BgL_arg1739z00_3637 = CNST_TABLE_REF(((long) 39));
						}
					BgL_arg1740z00_3638 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_2990))))->BgL_typez00);
					BgL_symz00_3636 =
						BGl_shapezd2typedzd2nodez00zzast_dumpz00(BgL_arg1739z00_3637,
						BgL_arg1740z00_3638);
				}
				{	/* Ast/dump.scm 100 */
					obj_t BgL_arg1695z00_3639;
					obj_t BgL_arg1696z00_3640;

					BgL_arg1695z00_3639 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_2990))))->BgL_locz00);
					{	/* Ast/dump.scm 101 */
						obj_t BgL_arg1697z00_3641;

						{	/* Ast/dump.scm 101 */
							obj_t BgL_arg1704z00_3642;
							obj_t BgL_arg1707z00_3643;

							if (NULLP(
									(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_2990)))->
										BgL_metaz00)))
								{	/* Ast/dump.scm 101 */
									BgL_arg1704z00_3642 = BNIL;
								}
							else
								{	/* Ast/dump.scm 101 */
									obj_t BgL_arg1711z00_3644;

									BgL_arg1711z00_3644 =
										(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_2990)))->
										BgL_metaz00);
									{	/* Ast/dump.scm 101 */
										obj_t BgL_list1712z00_3645;

										BgL_list1712z00_3645 =
											MAKE_YOUNG_PAIR(BgL_arg1711z00_3644, BNIL);
										BgL_arg1704z00_3642 = BgL_list1712z00_3645;
									}
								}
							{	/* Ast/dump.scm 102 */
								obj_t BgL_arg1725z00_3646;

								{	/* Ast/dump.scm 102 */
									obj_t BgL_l1229z00_3647;

									BgL_l1229z00_3647 =
										(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_2990)))->
										BgL_nodesz00);
									if (NULLP(BgL_l1229z00_3647))
										{	/* Ast/dump.scm 102 */
											BgL_arg1725z00_3646 = BNIL;
										}
									else
										{	/* Ast/dump.scm 102 */
											obj_t BgL_head1231z00_3648;

											{	/* Ast/dump.scm 102 */
												obj_t BgL_arg1733z00_3649;

												{	/* Ast/dump.scm 102 */
													obj_t BgL_arg1738z00_3650;

													BgL_arg1738z00_3650 = CAR(BgL_l1229z00_3647);
													BgL_arg1733z00_3649 =
														BGl_nodezd2ze3sexpz31zzast_dumpz00(
														((BgL_nodez00_bglt) BgL_arg1738z00_3650));
												}
												{	/* Ast/dump.scm 102 */
													obj_t BgL_res2358z00_3651;

													BgL_res2358z00_3651 =
														MAKE_YOUNG_PAIR(BgL_arg1733z00_3649, BNIL);
													BgL_head1231z00_3648 = BgL_res2358z00_3651;
												}
											}
											{	/* Ast/dump.scm 102 */
												obj_t BgL_g1234z00_3652;

												BgL_g1234z00_3652 = CDR(BgL_l1229z00_3647);
												{
													obj_t BgL_l1229z00_3654;
													obj_t BgL_tail1232z00_3655;

													BgL_l1229z00_3654 = BgL_g1234z00_3652;
													BgL_tail1232z00_3655 = BgL_head1231z00_3648;
												BgL_zc3z04anonymousza31727ze3z87_3653:
													if (NULLP(BgL_l1229z00_3654))
														{	/* Ast/dump.scm 102 */
															BgL_arg1725z00_3646 = BgL_head1231z00_3648;
														}
													else
														{	/* Ast/dump.scm 102 */
															obj_t BgL_newtail1233z00_3656;

															{	/* Ast/dump.scm 102 */
																obj_t BgL_arg1731z00_3657;

																{	/* Ast/dump.scm 102 */
																	obj_t BgL_arg1732z00_3658;

																	BgL_arg1732z00_3658 =
																		CAR(((obj_t) BgL_l1229z00_3654));
																	BgL_arg1731z00_3657 =
																		BGl_nodezd2ze3sexpz31zzast_dumpz00(
																		((BgL_nodez00_bglt) BgL_arg1732z00_3658));
																}
																{	/* Ast/dump.scm 102 */
																	obj_t BgL_res2360z00_3659;

																	BgL_res2360z00_3659 =
																		MAKE_YOUNG_PAIR(BgL_arg1731z00_3657, BNIL);
																	BgL_newtail1233z00_3656 = BgL_res2360z00_3659;
																}
															}
															SET_CDR(BgL_tail1232z00_3655,
																BgL_newtail1233z00_3656);
															{	/* Ast/dump.scm 102 */
																obj_t BgL_arg1729z00_3660;

																BgL_arg1729z00_3660 =
																	CDR(((obj_t) BgL_l1229z00_3654));
																{
																	obj_t BgL_tail1232z00_4912;
																	obj_t BgL_l1229z00_4911;

																	BgL_l1229z00_4911 = BgL_arg1729z00_3660;
																	BgL_tail1232z00_4912 =
																		BgL_newtail1233z00_3656;
																	BgL_tail1232z00_3655 = BgL_tail1232z00_4912;
																	BgL_l1229z00_3654 = BgL_l1229z00_4911;
																	goto BgL_zc3z04anonymousza31727ze3z87_3653;
																}
															}
														}
												}
											}
										}
								}
								BgL_arg1707z00_3643 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1725z00_3646, BNIL);
							}
							BgL_arg1697z00_3641 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1704z00_3642, BgL_arg1707z00_3643);
						}
						BgL_arg1696z00_3640 =
							MAKE_YOUNG_PAIR(BgL_symz00_3636, BgL_arg1697z00_3641);
					}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1695z00_3639,
						BgL_arg1696z00_3640);
				}
			}
		}

	}



/* &node->sexp-kwote1341 */
	obj_t BGl_z62nodezd2ze3sexpzd2kwote1341z81zzast_dumpz00(obj_t BgL_envz00_2991,
		obj_t BgL_nodez00_2992)
	{
		{	/* Ast/dump.scm 83 */
			{	/* Ast/dump.scm 85 */
				obj_t BgL_arg1669z00_3662;
				obj_t BgL_arg1672z00_3663;

				BgL_arg1669z00_3662 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_kwotez00_bglt) BgL_nodez00_2992))))->BgL_locz00);
				{	/* Ast/dump.scm 86 */
					obj_t BgL_valuez00_3664;

					BgL_valuez00_3664 =
						(((BgL_kwotez00_bglt) COBJECT(
								((BgL_kwotez00_bglt) BgL_nodez00_2992)))->BgL_valuez00);
					{	/* Ast/dump.scm 87 */
						bool_t BgL_test2608z00_4922;

						if (STRUCTP(BgL_valuez00_3664))
							{	/* Ast/dump.scm 87 */
								BgL_test2608z00_4922 =
									(STRUCT_KEY(BgL_valuez00_3664) ==
									CNST_TABLE_REF(((long) 40)));
							}
						else
							{	/* Ast/dump.scm 87 */
								BgL_test2608z00_4922 = ((bool_t) 0);
							}
						if (BgL_test2608z00_4922)
							{	/* Ast/dump.scm 88 */
								obj_t BgL_arg1684z00_3665;

								{	/* Ast/dump.scm 88 */
									obj_t BgL_arg1685z00_3666;

									{	/* Ast/dump.scm 88 */
										obj_t BgL_arg1686z00_3667;
										obj_t BgL_arg1687z00_3668;

										BgL_arg1686z00_3667 =
											BGl_shapez00zztools_shapez00(STRUCT_REF(BgL_valuez00_3664,
												(int) (((long) 0))));
										BgL_arg1687z00_3668 =
											STRUCT_REF(BgL_valuez00_3664, (int) (((long) 1)));
										{	/* Ast/dump.scm 88 */
											obj_t BgL_newz00_3669;

											BgL_newz00_3669 =
												create_struct(CNST_TABLE_REF(((long) 40)),
												(int) (((long) 2)));
											{	/* Ast/dump.scm 88 */
												int BgL_tmpz00_4936;

												BgL_tmpz00_4936 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_3669, BgL_tmpz00_4936,
													BgL_arg1687z00_3668);
											}
											{	/* Ast/dump.scm 88 */
												int BgL_tmpz00_4939;

												BgL_tmpz00_4939 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_3669, BgL_tmpz00_4939,
													BgL_arg1686z00_3667);
											}
											BgL_arg1685z00_3666 = BgL_newz00_3669;
									}}
									BgL_arg1684z00_3665 =
										MAKE_YOUNG_PAIR(BgL_arg1685z00_3666, BNIL);
								}
								BgL_arg1672z00_3663 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)),
									BgL_arg1684z00_3665);
							}
						else
							{	/* Ast/dump.scm 90 */
								obj_t BgL_arg1692z00_3670;

								BgL_arg1692z00_3670 = MAKE_YOUNG_PAIR(BgL_valuez00_3664, BNIL);
								BgL_arg1672z00_3663 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)),
									BgL_arg1692z00_3670);
				}}}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1669z00_3662,
					BgL_arg1672z00_3663);
			}
		}

	}



/* &node->sexp-closure1339 */
	obj_t BGl_z62nodezd2ze3sexpzd2closure1339z81zzast_dumpz00(obj_t
		BgL_envz00_2993, obj_t BgL_nodez00_2994)
	{
		{	/* Ast/dump.scm 74 */
			{	/* Ast/dump.scm 76 */
				obj_t BgL_arg1641z00_3672;
				obj_t BgL_arg1644z00_3673;

				BgL_arg1641z00_3672 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_closurez00_bglt) BgL_nodez00_2994))))->BgL_locz00);
				{	/* Ast/dump.scm 77 */
					obj_t BgL_arg1652z00_3674;
					obj_t BgL_arg1662z00_3675;

					{	/* Ast/dump.scm 77 */
						BgL_typez00_bglt BgL_arg1663z00_3676;

						BgL_arg1663z00_3676 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_closurez00_bglt) BgL_nodez00_2994))))->BgL_typez00);
						{	/* Ast/dump.scm 77 */
							obj_t BgL_idz00_3677;

							BgL_idz00_3677 = CNST_TABLE_REF(((long) 42));
							if (CBOOL(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00))
								{	/* Ast/dump.scm 424 */
									obj_t BgL_arg1462z00_3678;

									{	/* Ast/dump.scm 424 */
										obj_t BgL_arg1464z00_3679;
										obj_t BgL_arg1465z00_3680;

										{	/* Ast/dump.scm 424 */
											obj_t BgL_res2336z00_3681;

											{	/* Ast/dump.scm 424 */
												obj_t BgL_arg1466z00_3682;

												BgL_arg1466z00_3682 = SYMBOL_TO_STRING(BgL_idz00_3677);
												BgL_res2336z00_3681 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3682);
											}
											BgL_arg1464z00_3679 = BgL_res2336z00_3681;
										}
										BgL_arg1465z00_3680 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg1663z00_3676));
										BgL_arg1462z00_3678 =
											string_append_3(BgL_arg1464z00_3679,
											BGl_string2437z00zzast_dumpz00, BgL_arg1465z00_3680);
									}
									BgL_arg1652z00_3674 = bstring_to_symbol(BgL_arg1462z00_3678);
								}
							else
								{	/* Ast/dump.scm 423 */
									BgL_arg1652z00_3674 = BgL_idz00_3677;
								}
						}
					}
					{	/* Ast/dump.scm 78 */
						obj_t BgL_arg1664z00_3683;

						{	/* Ast/dump.scm 78 */
							BgL_variablez00_bglt BgL_arg1667z00_3684;

							BgL_arg1667z00_3684 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt)
											((BgL_closurez00_bglt) BgL_nodez00_2994))))->
								BgL_variablez00);
							BgL_arg1664z00_3683 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1667z00_3684));
						}
						BgL_arg1662z00_3675 = MAKE_YOUNG_PAIR(BgL_arg1664z00_3683, BNIL);
					}
					BgL_arg1644z00_3673 =
						MAKE_YOUNG_PAIR(BgL_arg1652z00_3674, BgL_arg1662z00_3675);
				}
				return
					BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1641z00_3672,
					BgL_arg1644z00_3673);
			}
		}

	}



/* &node->sexp-var1337 */
	obj_t BGl_z62nodezd2ze3sexpzd2var1337z81zzast_dumpz00(obj_t BgL_envz00_2995,
		obj_t BgL_nodez00_2996)
	{
		{	/* Ast/dump.scm 56 */
			{	/* Ast/dump.scm 59 */
				obj_t BgL_vshapez00_3686;

				{	/* Ast/dump.scm 59 */
					BgL_variablez00_bglt BgL_arg1640z00_3687;

					BgL_arg1640z00_3687 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_2996)))->BgL_variablez00);
					BgL_vshapez00_3686 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1640z00_3687));
				}
				{	/* Ast/dump.scm 59 */
					obj_t BgL_tvshapez00_3688;

					{	/* Ast/dump.scm 60 */
						bool_t BgL_test2611z00_4976;

						if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 61 */
								bool_t BgL_test2613z00_4979;

								{	/* Ast/dump.scm 61 */
									BgL_valuez00_bglt BgL_arg1634z00_3689;

									BgL_arg1634z00_3689 =
										(((BgL_variablez00_bglt) COBJECT(
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_2996)))->
													BgL_variablez00)))->BgL_valuez00);
									{	/* Ast/dump.scm 61 */
										bool_t BgL_res2350z00_3690;

										BgL_res2350z00_3690 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1634z00_3689), BGl_sfunz00zzast_varz00);
										BgL_test2613z00_4979 = BgL_res2350z00_3690;
									}
								}
								if (BgL_test2613z00_4979)
									{	/* Ast/dump.scm 61 */
										BgL_test2611z00_4976 = ((bool_t) 0);
									}
								else
									{	/* Ast/dump.scm 61 */
										if (
											(((obj_t)
													(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_varz00_bglt) BgL_nodez00_2996))))->
														BgL_typez00)) ==
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT((((BgL_varz00_bglt)
																		COBJECT(((BgL_varz00_bglt)
																				BgL_nodez00_2996)))->
																	BgL_variablez00)))->BgL_typez00))))
											{	/* Ast/dump.scm 62 */
												BgL_test2611z00_4976 = ((bool_t) 0);
											}
										else
											{	/* Ast/dump.scm 62 */
												BgL_test2611z00_4976 = ((bool_t) 1);
											}
									}
							}
						else
							{	/* Ast/dump.scm 60 */
								BgL_test2611z00_4976 = ((bool_t) 0);
							}
						if (BgL_test2611z00_4976)
							{	/* Ast/dump.scm 63 */
								obj_t BgL_arg1606z00_3691;

								{	/* Ast/dump.scm 63 */
									obj_t BgL_arg1611z00_3692;

									{	/* Ast/dump.scm 63 */
										BgL_typez00_bglt BgL_arg1624z00_3693;

										BgL_arg1624z00_3693 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_2996))))->
											BgL_typez00);
										BgL_arg1611z00_3692 =
											BGl_shapez00zztools_shapez00(((obj_t)
												BgL_arg1624z00_3693));
									}
									{	/* Ast/dump.scm 63 */
										obj_t BgL_list1612z00_3694;

										{	/* Ast/dump.scm 63 */
											obj_t BgL_arg1613z00_3695;

											BgL_arg1613z00_3695 =
												MAKE_YOUNG_PAIR(BgL_arg1611z00_3692, BNIL);
											BgL_list1612z00_3694 =
												MAKE_YOUNG_PAIR(BgL_vshapez00_3686,
												BgL_arg1613z00_3695);
										}
										BgL_arg1606z00_3691 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string2483z00zzast_dumpz00, BgL_list1612z00_3694);
									}
								}
								BgL_tvshapez00_3688 = bstring_to_symbol(BgL_arg1606z00_3691);
							}
						else
							{	/* Ast/dump.scm 60 */
								BgL_tvshapez00_3688 = BgL_vshapez00_3686;
							}
					}
					{	/* Ast/dump.scm 60 */
						obj_t BgL_tvshapez00_3696;

						if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
							{	/* Ast/dump.scm 67 */
								obj_t BgL_arg1564z00_3697;

								{	/* Ast/dump.scm 67 */
									obj_t BgL_arg1565z00_3698;

									BgL_arg1565z00_3698 =
										(((BgL_variablez00_bglt) COBJECT(
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_2996)))->
													BgL_variablez00)))->BgL_accessz00);
									{	/* Ast/dump.scm 67 */
										obj_t BgL_list1566z00_3699;

										{	/* Ast/dump.scm 67 */
											obj_t BgL_arg1573z00_3700;

											BgL_arg1573z00_3700 =
												MAKE_YOUNG_PAIR(BgL_arg1565z00_3698, BNIL);
											BgL_list1566z00_3699 =
												MAKE_YOUNG_PAIR(BgL_tvshapez00_3688,
												BgL_arg1573z00_3700);
										}
										BgL_arg1564z00_3697 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string2484z00zzast_dumpz00, BgL_list1566z00_3699);
									}
								}
								BgL_tvshapez00_3696 = bstring_to_symbol(BgL_arg1564z00_3697);
							}
						else
							{	/* Ast/dump.scm 65 */
								BgL_tvshapez00_3696 = BgL_tvshapez00_3688;
							}
						{	/* Ast/dump.scm 65 */

							{	/* Ast/dump.scm 69 */
								obj_t BgL_arg1561z00_3701;

								BgL_arg1561z00_3701 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_varz00_bglt) BgL_nodez00_2996))))->BgL_locz00);
								return
									BGl_locationzd2shapezd2zztools_locationz00
									(BgL_arg1561z00_3701, BgL_tvshapez00_3696);
							}
						}
					}
				}
			}
		}

	}



/* &node->sexp-atom1335 */
	obj_t BGl_z62nodezd2ze3sexpzd2atom1335z81zzast_dumpz00(obj_t BgL_envz00_2997,
		obj_t BgL_nodez00_2998)
	{
		{	/* Ast/dump.scm 42 */
			if (NULLP(
					(((BgL_atomz00_bglt) COBJECT(
								((BgL_atomz00_bglt) BgL_nodez00_2998)))->BgL_valuez00)))
				{	/* Ast/dump.scm 45 */
					obj_t BgL_arg1489z00_3703;

					BgL_arg1489z00_3703 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_atomz00_bglt) BgL_nodez00_2998))))->BgL_locz00);
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1489z00_3703,
						CNST_TABLE_REF(((long) 43)));
				}
			else
				{	/* Ast/dump.scm 46 */
					obj_t BgL_arg1493z00_3704;
					obj_t BgL_arg1495z00_3705;

					BgL_arg1493z00_3704 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_atomz00_bglt) BgL_nodez00_2998))))->BgL_locz00);
					if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
						{	/* Ast/dump.scm 48 */
							obj_t BgL_arg1497z00_3706;

							{	/* Ast/dump.scm 48 */
								obj_t BgL_arg1518z00_3707;
								obj_t BgL_arg1521z00_3708;

								BgL_arg1518z00_3707 =
									(((BgL_atomz00_bglt) COBJECT(
											((BgL_atomz00_bglt) BgL_nodez00_2998)))->BgL_valuez00);
								{	/* Ast/dump.scm 49 */
									obj_t BgL_arg1528z00_3709;
									obj_t BgL_arg1536z00_3710;

									{	/* Ast/dump.scm 49 */
										BgL_typez00_bglt BgL_arg1537z00_3711;

										BgL_arg1537z00_3711 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt)
												((BgL_atomz00_bglt) BgL_nodez00_2998)), ((bool_t) 0));
										BgL_arg1528z00_3709 =
											BGl_shapez00zztools_shapez00(
											((obj_t) BgL_arg1537z00_3711));
									}
									{	/* Ast/dump.scm 50 */
										obj_t BgL_arg1540z00_3712;

										{	/* Ast/dump.scm 50 */
											BgL_typez00_bglt BgL_arg1552z00_3713;

											BgL_arg1552z00_3713 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_atomz00_bglt) BgL_nodez00_2998))))->
												BgL_typez00);
											BgL_arg1540z00_3712 =
												BGl_shapez00zztools_shapez00(((obj_t)
													BgL_arg1552z00_3713));
										}
										BgL_arg1536z00_3710 =
											MAKE_YOUNG_PAIR(BgL_arg1540z00_3712, BNIL);
									}
									BgL_arg1521z00_3708 =
										MAKE_YOUNG_PAIR(BgL_arg1528z00_3709, BgL_arg1536z00_3710);
								}
								BgL_arg1497z00_3706 =
									MAKE_YOUNG_PAIR(BgL_arg1518z00_3707, BgL_arg1521z00_3708);
							}
							BgL_arg1495z00_3705 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BgL_arg1497z00_3706);
						}
					else
						{	/* Ast/dump.scm 47 */
							BgL_arg1495z00_3705 =
								(((BgL_atomz00_bglt) COBJECT(
										((BgL_atomz00_bglt) BgL_nodez00_2998)))->BgL_valuez00);
						}
					return
						BGl_locationzd2shapezd2zztools_locationz00(BgL_arg1493z00_3704,
						BgL_arg1495z00_3705);
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_dumpz00()
	{
		{	/* Ast/dump.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string2485z00zzast_dumpz00));
		}

	}

#ifdef __cplusplus
}
#endif
