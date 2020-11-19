/*===========================================================================*/
/*   (Cgen/cgen.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/cgen.scm) */
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

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_cblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                *BgL_cblockz00_bglt;

	typedef struct BgL_creturnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                 *BgL_creturnz00_bglt;

	typedef struct BgL_cvoidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_cvoidz00_bglt;

	typedef struct BgL_catomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_valuez00;
	}               *BgL_catomz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_ccastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_copz00_bgl *BgL_argz00;
	}               *BgL_ccastz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_nopz00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_cifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		struct BgL_copz00_bgl *BgL_truez00;
		struct BgL_copz00_bgl *BgL_falsez00;
	}             *BgL_cifz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfailz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_procz00;
		struct BgL_copz00_bgl *BgL_msgz00;
		struct BgL_copz00_bgl *BgL_objz00;
	}               *BgL_cfailz00_bglt;

	typedef struct BgL_cswitchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
	}                 *BgL_cswitchz00_bglt;

	typedef struct BgL_cmakezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
		obj_t BgL_stackablez00;
	}                     *BgL_cmakezd2boxzd2_bglt;

	typedef struct BgL_cboxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
	}                    *BgL_cboxzd2refzd2_bglt;

	typedef struct BgL_cboxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                       *BgL_cboxzd2setz12zc0_bglt;

	typedef struct BgL_csetzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_jumpzd2valuezd2;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                        *BgL_csetzd2exzd2itz00_bglt;

	typedef struct BgL_cjumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                         *BgL_cjumpzd2exzd2itz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;

	typedef struct BgL_retblockzf2gotozf2_bgl
	{
		obj_t BgL_localz00;
		obj_t BgL_labelz00;
	}                         *BgL_retblockzf2gotozf2_bglt;


	static bool_t BGl_iszd2pushzd2exitzf3zf3zzcgen_cgenz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_za2stopzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static BgL_cvoidz00_bglt BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static bool_t BGl_simplezd2exprzf3ze70zc6zzcgen_cgenz00(obj_t);
	extern obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_externzd2ze3copz31zzcgen_cgenz00(obj_t, bool_t,
		BgL_externz00_bglt, obj_t, obj_t);
	extern obj_t BGl_clabelz00zzcgen_copz00;
	extern obj_t BGl_cboxzd2refzd2zzcgen_copz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static BgL_retblockz00_bglt BGl_z62lambda1970z62zzcgen_cgenz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_retblockz00_bglt BGl_z62lambda1973z62zzcgen_cgenz00(obj_t, obj_t);
	static BgL_retblockz00_bglt BGl_z62lambda1976z62zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_pregexp1684z00zzcgen_cgenz00 = BUNSPEC;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62lambda1984z62zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1985z62zzcgen_cgenz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2sync1739z81zzcgen_cgenz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1989z62zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_csetzd2exzd2itz00zzcgen_copz00;
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2fail1751z81zzcgen_cgenz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcgen_cgenz00();
	static obj_t BGl_z62cgenzd2functionzb0zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1990z62zzcgen_cgenz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2private1743z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2genpatchid1729z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2letzd2fun1755z53zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31975ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62za2voidzd2kontza2zb0zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	static obj_t BGl_z62nodezd2ze3cop1721z53zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcgen_cgenz00();
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2pragma1741z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04za2idzd2kontza2za31785ze3z37zzcgen_cgenz00(obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_cmakezd2boxzd2zzcgen_copz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2literal1725z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2sequence1737z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2();
	extern obj_t BGl_cboxzd2setz12zc0zzcgen_copz00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2setzd2exzd2it1759z81zzcgen_cgenz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32092ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	extern bool_t BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern BgL_nodez00_bglt
		BGl_synczd2ze3sequencez31zzsync_nodez00(BgL_syncz00_bglt);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2letzd2var1757z53zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_cblockz00zzcgen_copz00;
	extern obj_t BGl_bdbzd2blockzd2zzcgen_copz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcgen_cgenz00();
	static obj_t BGl_z62zc3z04anonymousza32452ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32436ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32509ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2closure1735z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl_makezd2setqzd2kontz00zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunzf2Czf2zzcgen_copz00;
	static BgL_copz00_bglt BGl_z62nodezd2ze3copz53zzcgen_cgenz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfailz00zzcgen_copz00;
	extern obj_t BGl_stopz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_creturnz00zzcgen_copz00;
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2var1733z81zzcgen_cgenz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31906ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzcgen_cgenz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt, obj_t, bool_t);
	static obj_t
		BGl_z62zc3z04za2returnzd2kontza2za31773ze3z37zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_EXPORTED_DEF obj_t BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2idzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2conditiona1749z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2switch1753z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62blockzd2kontzb0zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_returnz00zzast_nodez00;
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_cgenz00 = BUNSPEC;
	static BgL_setqz00_bglt BGl_z62nodezd2setqzb0zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_za2voidza2z00zztype_cachez00;
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2cast1745z81zzcgen_cgenz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
	static obj_t BGl_toplevelzd2initzd2zzcgen_cgenz00();
	extern obj_t BGl_cgotoz00zzcgen_copz00;
	extern obj_t BGl_csequencez00zzcgen_copz00;
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2setq1747z81zzcgen_cgenz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcgen_cgenz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_EXPORTED_DECL BgL_setqz00_bglt
		BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_cvoidz00zzcgen_copz00;
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	static obj_t BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_pregexpz00zz__regexpz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2makezd2box1767z53zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2boxzd2setz121771z41zzcgen_cgenz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04za2stopzd2kontza2za31786ze3z37zzcgen_cgenz00(obj_t,
		obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2jumpzd2exzd2it1761z81zzcgen_cgenz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_localz00_bglt
		BGl_z62makezd2localzd2svarzf2namez90zzcgen_cgenz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_nopz00zzcgen_copz00;
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_cifz00zzcgen_copz00;
	static BgL_copz00_bglt BGl_z62bdbzd2letzd2varz62zzcgen_cgenz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_retblockzf2gotozf2zzcgen_cgenz00 = BUNSPEC;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2kwote1731z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsync_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__regexpz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2patch1727z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_pregexpzd2replaceza2z70zz__regexpz00(obj_t, obj_t,
		obj_t);
	static BgL_cfailz00_bglt
		BGl_z62zc3z04anonymousza32158ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_csetqz00zzcgen_copz00;
	extern obj_t BGl_localzd2varzd2zzcgen_copz00;
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_cswitchz00zzcgen_copz00;
	static obj_t BGl_cnstzd2initzd2zzcgen_cgenz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00();
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_cgenz00();
	extern obj_t BGl_catomz00zzcgen_copz00;
	extern obj_t BGl_retblockz00zzast_nodez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2boxzd2ref1769z53zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2returnzd2kontza2zd2zzcgen_cgenz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_privatez00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza32519ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2retblock1763z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_genpatchidz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza32464ze3ze5zzcgen_cgenz00(obj_t, obj_t);
	extern obj_t BGl_ccastz00zzcgen_copz00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_cjumpzd2exzd2itz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_bglt);
	static obj_t BGl_zc3z04anonymousza32225ze3ze70z60zzcgen_cgenz00(obj_t, obj_t);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2return1765z81zzcgen_cgenz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varcz00zzcgen_copz00;
	static obj_t __cnst[18];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2setqzd2envz00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2setqza7b2943za7, BGl_z62nodezd2setqzb0zzcgen_cgenz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2letzd2varzd2envzd2zzcgen_cgenz00,
		BgL_bgl_za762bdbza7d2letza7d2v2944za7,
		BGl_z62bdbzd2letzd2varz62zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2945za7,
		BGl_z62nodezd2ze3copz53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzd2svarzf2namezd2envz20zzcgen_cgenz00,
		BgL_bgl_za762makeza7d2localza72946za7,
		BGl_z62makezd2localzd2svarzf2namez90zzcgen_cgenz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blockzd2kontzd2envz00zzcgen_cgenz00,
		BgL_bgl_za762blockza7d2kontza72947za7, BGl_z62blockzd2kontzb0zzcgen_cgenz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2900z00zzcgen_cgenz00,
		BgL_bgl_string2900za700za7za7c2948za7, "node->cop1721", 13);
	      DEFINE_STRING(BGl_string2901z00zzcgen_cgenz00,
		BgL_bgl_string2901za700za7za7c2949za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2903z00zzcgen_cgenz00,
		BgL_bgl_string2903za700za7za7c2950za7, "node->cop", 9);
	      DEFINE_STRING(BGl_string2928z00zzcgen_cgenz00,
		BgL_bgl_string2928za700za7za7c2951za7, "jmp_buf_t jmpbuf", 16);
	      DEFINE_STRING(BGl_string2929z00zzcgen_cgenz00,
		BgL_bgl_string2929za700za7za7c2952za7, "BGL_EXIT_VALUE()", 16);
	      DEFINE_STRING(BGl_string2930z00zzcgen_cgenz00,
		BgL_bgl_string2930za700za7za7c2953za7, ")jmpbuf", 7);
	      DEFINE_STRING(BGl_string2931z00zzcgen_cgenz00,
		BgL_bgl_string2931za700za7za7c2954za7, "struct bgl_cell ~a", 18);
	      DEFINE_STRING(BGl_string2932z00zzcgen_cgenz00,
		BgL_bgl_string2932za700za7za7c2955za7, "Unexpected `closure' node", 25);
	      DEFINE_STRING(BGl_string2933z00zzcgen_cgenz00,
		BgL_bgl_string2933za700za7za7c2956za7, "Unexpected `kwote' node", 23);
	      DEFINE_STRING(BGl_string2934z00zzcgen_cgenz00,
		BgL_bgl_string2934za700za7za7c2957za7,
		"BGL_PATCHABLE_CONSTANT_~a($1, $2, $3)", 37);
	      DEFINE_STRING(BGl_string2935z00zzcgen_cgenz00,
		BgL_bgl_string2935za700za7za7c2958za7, "cgen_cgen", 9);
	      DEFINE_STRING(BGl_string2936z00zzcgen_cgenz00,
		BgL_bgl_string2936za700za7za7c2959za7,
		"elong-size test box have-c99-stack-alloc exit __return __retval cellval node->cop1721 cgen_cgen retblock/goto label obj local aux push-exit! export location ",
		157);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2functionzd2envz00zzcgen_cgenz00,
		BgL_bgl_za762cgenza7d2functi2960z00,
		BGl_z62cgenzd2functionzb0zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2875z00zzcgen_cgenz00,
		BgL_bgl_za762za7c3za704za7a2retu2961z00,
		BGl_z62zc3z04za2returnzd2kontza2za31773ze3z37zzcgen_cgenz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2876z00zzcgen_cgenz00,
		BgL_bgl_za762za7c3za704za7a2idza7d2962za7,
		BGl_z62zc3z04za2idzd2kontza2za31785ze3z37zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2877z00zzcgen_cgenz00,
		BgL_bgl_za762za7c3za704za7a2stop2963z00,
		BGl_z62zc3z04za2stopzd2kontza2za31786ze3z37zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2891z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1985za7622964z00, BGl_z62lambda1985z62zzcgen_cgenz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2892z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1984za7622965z00, BGl_z62lambda1984z62zzcgen_cgenz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2893z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1990za7622966z00, BGl_z62lambda1990z62zzcgen_cgenz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2894z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1989za7622967z00, BGl_z62lambda1989z62zzcgen_cgenz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2895z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1976za7622968z00, BGl_z62lambda1976z62zzcgen_cgenz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2896z00zzcgen_cgenz00,
		BgL_bgl_za762za7c3za704anonymo2969za7,
		BGl_z62zc3z04anonymousza31975ze3ze5zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2897z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1973za7622970z00, BGl_z62lambda1973z62zzcgen_cgenz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2898z00zzcgen_cgenz00,
		BgL_bgl_za762lambda1970za7622971z00, BGl_z62lambda1970z62zzcgen_cgenz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2899z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2972za7,
		BGl_z62nodezd2ze3cop1721z53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_za2voidzd2kontza2zd2envz00zzcgen_cgenz00,
		BgL_bgl_za762za7a2voidza7d2kon2973za7,
		BGl_z62za2voidzd2kontza2zb0zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2902z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2974za7,
		BGl_z62nodezd2ze3copzd2literal1725z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2904z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2975za7,
		BGl_z62nodezd2ze3copzd2patch1727z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2905z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2976za7,
		BGl_z62nodezd2ze3copzd2genpatchid1729z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2906z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2977za7,
		BGl_z62nodezd2ze3copzd2kwote1731z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2907z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2978za7,
		BGl_z62nodezd2ze3copzd2var1733z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2908z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2979za7,
		BGl_z62nodezd2ze3copzd2closure1735z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2909z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2980za7,
		BGl_z62nodezd2ze3copzd2sequence1737z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2910z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2981za7,
		BGl_z62nodezd2ze3copzd2sync1739z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2911z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2982za7,
		BGl_z62nodezd2ze3copzd2pragma1741z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2912z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2983za7,
		BGl_z62nodezd2ze3copzd2private1743z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2913z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2984za7,
		BGl_z62nodezd2ze3copzd2cast1745z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2914z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2985za7,
		BGl_z62nodezd2ze3copzd2setq1747z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2915z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2986za7,
		BGl_z62nodezd2ze3copzd2conditiona1749z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2916z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2987za7,
		BGl_z62nodezd2ze3copzd2fail1751z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2917z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2988za7,
		BGl_z62nodezd2ze3copzd2switch1753z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2918z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2989za7,
		BGl_z62nodezd2ze3copzd2letzd2fun1755z53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2919z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2990za7,
		BGl_z62nodezd2ze3copzd2letzd2var1757z53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2920z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2991za7,
		BGl_z62nodezd2ze3copzd2setzd2exzd2it1759z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2921z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2992za7,
		BGl_z62nodezd2ze3copzd2jumpzd2exzd2it1761z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2922z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2993za7,
		BGl_z62nodezd2ze3copzd2retblock1763z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2923z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2994za7,
		BGl_z62nodezd2ze3copzd2return1765z81zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2924z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2995za7,
		BGl_z62nodezd2ze3copzd2makezd2box1767z53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2925z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2996za7,
		BGl_z62nodezd2ze3copzd2boxzd2ref1769z53zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2926z00zzcgen_cgenz00,
		BgL_bgl_za762nodeza7d2za7e3cop2997za7,
		BGl_z62nodezd2ze3copzd2boxzd2setz121771z41zzcgen_cgenz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2927z00zzcgen_cgenz00,
		BgL_bgl_za762za7c3za704anonymo2998za7,
		BGl_z62zc3z04anonymousza32436ze3ze5zzcgen_cgenz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2874z00zzcgen_cgenz00,
		BgL_bgl_string2874za700za7za7c2999za7, "[*]/", 4);
	      DEFINE_STRING(BGl_string2878z00zzcgen_cgenz00,
		BgL_bgl_string2878za700za7za7c3000za7, "/* ", 3);
	      DEFINE_STRING(BGl_string2879z00zzcgen_cgenz00,
		BgL_bgl_string2879za700za7za7c3001za7, "*|", 2);
	      DEFINE_STRING(BGl_string2880z00zzcgen_cgenz00,
		BgL_bgl_string2880za700za7za7c3002za7, " */", 3);
	      DEFINE_STRING(BGl_string2881z00zzcgen_cgenz00,
		BgL_bgl_string2881za700za7za7c3003za7, "{", 1);
	      DEFINE_STRING(BGl_string2882z00zzcgen_cgenz00,
		BgL_bgl_string2882za700za7za7c3004za7,
		"{ obj_t ___ = BUNSPEC; } /* bdb dummy init stmt */", 50);
	      DEFINE_STRING(BGl_string2883z00zzcgen_cgenz00,
		BgL_bgl_string2883za700za7za7c3005za7, "\n}", 2);
	      DEFINE_STRING(BGl_string2884z00zzcgen_cgenz00,
		BgL_bgl_string2884za700za7za7c3006za7, "BGL_EXPORTED_DEF ", 17);
	      DEFINE_STRING(BGl_string2885z00zzcgen_cgenz00,
		BgL_bgl_string2885za700za7za7c3007za7, "()", 2);
	      DEFINE_STRING(BGl_string2886z00zzcgen_cgenz00,
		BgL_bgl_string2886za700za7za7c3008za7, "(", 1);
	      DEFINE_STRING(BGl_string2887z00zzcgen_cgenz00,
		BgL_bgl_string2887za700za7za7c3009za7, ")", 1);
	      DEFINE_STRING(BGl_string2888z00zzcgen_cgenz00,
		BgL_bgl_string2888za700za7za7c3010za7, ", ", 2);
	      DEFINE_STRING(BGl_string2889z00zzcgen_cgenz00,
		BgL_bgl_string2889za700za7za7c3011za7, "make-local-svar/name", 20);
	      DEFINE_STRING(BGl_string2890z00zzcgen_cgenz00,
		BgL_bgl_string2890za700za7za7c3012za7, "Illegal local name", 18);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2stopzd2kontza2zd2zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_pregexp1684z00zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_za2thezd2globalza2zd2zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_za2idzd2kontza2zd2zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_retblockzf2gotozf2zzcgen_cgenz00));
		     ADD_ROOT((void *) (&BGl_za2returnzd2kontza2zd2zzcgen_cgenz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long
		BgL_checksumz00_5600, char *BgL_fromz00_5601)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_cgenz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_cgenz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcgen_cgenz00();
					BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00();
					BGl_cnstzd2initzd2zzcgen_cgenz00();
					BGl_importedzd2moduleszd2initz00zzcgen_cgenz00();
					BGl_objectzd2initzd2zzcgen_cgenz00();
					BGl_genericzd2initzd2zzcgen_cgenz00();
					BGl_methodzd2initzd2zzcgen_cgenz00();
					return BGl_toplevelzd2initzd2zzcgen_cgenz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__regexpz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "cgen_cgen");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cgen_cgen");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			{	/* Cgen/cgen.scm 15 */
				obj_t BgL_cportz00_4802;

				{	/* Cgen/cgen.scm 15 */
					obj_t BgL_stringz00_4810;

					BgL_stringz00_4810 = BGl_string2936z00zzcgen_cgenz00;
					{	/* Cgen/cgen.scm 15 */
						obj_t BgL_startz00_4811;

						BgL_startz00_4811 = BINT(((long) 0));
						{	/* Cgen/cgen.scm 15 */
							obj_t BgL_endz00_4812;

							BgL_endz00_4812 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4810)));
							{	/* Cgen/cgen.scm 15 */

								BgL_cportz00_4802 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4810, BgL_startz00_4811, BgL_endz00_4812);
				}}}}
				{
					long BgL_iz00_4803;

					BgL_iz00_4803 = ((long) 17);
				BgL_loopz00_4804:
					if ((BgL_iz00_4803 == ((long) -1)))
						{	/* Cgen/cgen.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/cgen.scm 15 */
							{	/* Cgen/cgen.scm 15 */
								obj_t BgL_arg2941z00_4806;

								{	/* Cgen/cgen.scm 15 */

									{	/* Cgen/cgen.scm 15 */
										obj_t BgL_locationz00_4808;

										BgL_locationz00_4808 = BBOOL(((bool_t) 0));
										{	/* Cgen/cgen.scm 15 */

											BgL_arg2941z00_4806 =
												BGl_readz00zz__readerz00(BgL_cportz00_4802,
												BgL_locationz00_4808);
										}
									}
								}
								{	/* Cgen/cgen.scm 15 */
									int BgL_tmpz00_5638;

									BgL_tmpz00_5638 = (int) (BgL_iz00_4803);
									CNST_TABLE_SET(BgL_tmpz00_5638, BgL_arg2941z00_4806);
							}}
							{	/* Cgen/cgen.scm 15 */
								int BgL_auxz00_4809;

								BgL_auxz00_4809 = (int) ((BgL_iz00_4803 - ((long) 1)));
								{
									long BgL_iz00_5643;

									BgL_iz00_5643 = (long) (BgL_auxz00_4809);
									BgL_iz00_4803 = BgL_iz00_5643;
									goto BgL_loopz00_4804;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			BGl_pregexp1684z00zzcgen_cgenz00 =
				BGl_pregexpz00zz__regexpz00(BGl_string2874z00zzcgen_cgenz00, BNIL);
			BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = BUNSPEC;
			BGl_za2returnzd2kontza2zd2zzcgen_cgenz00 = BGl_proc2875z00zzcgen_cgenz00;
			BGl_za2idzd2kontza2zd2zzcgen_cgenz00 = BGl_proc2876z00zzcgen_cgenz00;
			BGl_za2stopzd2kontza2zd2zzcgen_cgenz00 = BGl_proc2877z00zzcgen_cgenz00;
			return BUNSPEC;
		}

	}



/* &<@*stop-kont*:1786> */
	obj_t BGl_z62zc3z04za2stopzd2kontza2za31786ze3z37zzcgen_cgenz00(obj_t
		BgL_envz00_4575, obj_t BgL_copz00_4576)
	{
		{	/* Cgen/cgen.scm 185 */
			{
				BgL_stopz00_bglt BgL_auxz00_5647;

				{	/* Cgen/cgen.scm 187 */
					BgL_stopz00_bglt BgL_new1170z00_4815;

					{	/* Cgen/cgen.scm 187 */
						BgL_stopz00_bglt BgL_new1169z00_4816;

						BgL_new1169z00_4816 =
							((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_stopz00_bgl))));
						{	/* Cgen/cgen.scm 187 */
							long BgL_arg1790z00_4817;

							{	/* Cgen/cgen.scm 187 */
								long BgL_res2652z00_4818;

								BgL_res2652z00_4818 = BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
								BgL_arg1790z00_4817 = BgL_res2652z00_4818;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1169z00_4816),
								BgL_arg1790z00_4817);
						}
						BgL_new1170z00_4815 = BgL_new1169z00_4816;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1170z00_4815)))->BgL_locz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_stopz00_bglt) COBJECT(BgL_new1170z00_4815))->BgL_valuez00) =
						((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_copz00_4576)), BUNSPEC);
					BgL_auxz00_5647 = BgL_new1170z00_4815;
				}
				return ((obj_t) BgL_auxz00_5647);
			}
		}

	}



/* &<@*id-kont*:1785> */
	obj_t BGl_z62zc3z04za2idzd2kontza2za31785ze3z37zzcgen_cgenz00(obj_t
		BgL_envz00_4577, obj_t BgL_copz00_4578)
	{
		{	/* Cgen/cgen.scm 173 */
			return BgL_copz00_4578;
		}

	}



/* &<@*return-kont*:1773> */
	obj_t BGl_z62zc3z04za2returnzd2kontza2za31773ze3z37zzcgen_cgenz00(obj_t
		BgL_envz00_4579, obj_t BgL_copz00_4580)
	{
		{	/* Cgen/cgen.scm 156 */
			{
				BgL_creturnz00_bglt BgL_auxz00_5657;

				{	/* Cgen/cgen.scm 158 */
					BgL_creturnz00_bglt BgL_new1162z00_4819;

					{	/* Cgen/cgen.scm 159 */
						BgL_creturnz00_bglt BgL_new1161z00_4820;

						BgL_new1161z00_4820 =
							((BgL_creturnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_creturnz00_bgl))));
						{	/* Cgen/cgen.scm 159 */
							long BgL_arg1784z00_4821;

							{	/* Cgen/cgen.scm 159 */
								long BgL_res2647z00_4822;

								BgL_res2647z00_4822 =
									BGL_CLASS_INDEX(BGl_creturnz00zzcgen_copz00);
								BgL_arg1784z00_4821 = BgL_res2647z00_4822;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1161z00_4820),
								BgL_arg1784z00_4821);
						}
						BgL_new1162z00_4819 = BgL_new1161z00_4820;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1162z00_4819)))->BgL_locz00) =
						((obj_t) (((BgL_copz00_bglt) COBJECT(((BgL_copz00_bglt)
											BgL_copz00_4580)))->BgL_locz00)), BUNSPEC);
					{
						BgL_copz00_bglt BgL_auxz00_5666;

						{	/* Cgen/cgen.scm 161 */
							bool_t BgL_test3015z00_5667;

							{	/* Cgen/cgen.scm 161 */
								bool_t BgL_res2648z00_4823;

								BgL_res2648z00_4823 =
									BGl_isazf3zf3zz__objectz00(BgL_copz00_4580,
									BGl_csetqz00zzcgen_copz00);
								BgL_test3015z00_5667 = BgL_res2648z00_4823;
							}
							if (BgL_test3015z00_5667)
								{	/* Cgen/cgen.scm 162 */
									BgL_csequencez00_bglt BgL_new1164z00_4824;

									{	/* Cgen/cgen.scm 163 */
										BgL_csequencez00_bglt BgL_new1163z00_4825;

										BgL_new1163z00_4825 =
											((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_csequencez00_bgl))));
										{	/* Cgen/cgen.scm 163 */
											long BgL_arg1782z00_4826;

											{	/* Cgen/cgen.scm 163 */
												long BgL_res2649z00_4827;

												{	/* Cgen/cgen.scm 163 */
													obj_t BgL_classz00_4828;

													BgL_classz00_4828 = BGl_csequencez00zzcgen_copz00;
													BgL_res2649z00_4827 =
														BGL_CLASS_INDEX(BgL_classz00_4828);
												}
												BgL_arg1782z00_4826 = BgL_res2649z00_4827;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1163z00_4825),
												BgL_arg1782z00_4826);
										}
										BgL_new1164z00_4824 = BgL_new1163z00_4825;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1164z00_4824)))->
											BgL_locz00) =
										((obj_t) (((BgL_copz00_bglt)
													COBJECT(((BgL_copz00_bglt) ((BgL_csetqz00_bglt)
																BgL_copz00_4580))))->BgL_locz00)), BUNSPEC);
									((((BgL_csequencez00_bglt) COBJECT(BgL_new1164z00_4824))->
											BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									{
										obj_t BgL_auxz00_5679;

										{	/* Cgen/cgen.scm 165 */
											BgL_catomz00_bglt BgL_arg1775z00_4829;

											{	/* Cgen/cgen.scm 165 */
												BgL_catomz00_bglt BgL_new1166z00_4830;

												{	/* Cgen/cgen.scm 165 */
													BgL_catomz00_bglt BgL_new1165z00_4831;

													BgL_new1165z00_4831 =
														((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_catomz00_bgl))));
													{	/* Cgen/cgen.scm 165 */
														long BgL_arg1779z00_4832;

														{	/* Cgen/cgen.scm 165 */
															long BgL_res2650z00_4833;

															{	/* Cgen/cgen.scm 165 */
																obj_t BgL_classz00_4834;

																BgL_classz00_4834 = BGl_catomz00zzcgen_copz00;
																BgL_res2650z00_4833 =
																	BGL_CLASS_INDEX(BgL_classz00_4834);
															}
															BgL_arg1779z00_4832 = BgL_res2650z00_4833;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1165z00_4831),
															BgL_arg1779z00_4832);
													}
													BgL_new1166z00_4830 = BgL_new1165z00_4831;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1166z00_4830)))->
														BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
												((((BgL_catomz00_bglt) COBJECT(BgL_new1166z00_4830))->
														BgL_valuez00) = ((obj_t) BUNSPEC), BUNSPEC);
												BgL_arg1775z00_4829 = BgL_new1166z00_4830;
											}
											{	/* Cgen/cgen.scm 165 */
												obj_t BgL_list1776z00_4835;

												{	/* Cgen/cgen.scm 165 */
													obj_t BgL_arg1778z00_4836;

													BgL_arg1778z00_4836 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1775z00_4829), BNIL);
													BgL_list1776z00_4835 =
														MAKE_YOUNG_PAIR(BgL_copz00_4580,
														BgL_arg1778z00_4836);
												}
												BgL_auxz00_5679 = BgL_list1776z00_4835;
										}}
										((((BgL_csequencez00_bglt) COBJECT(BgL_new1164z00_4824))->
												BgL_copsz00) = ((obj_t) BgL_auxz00_5679), BUNSPEC);
									}
									BgL_auxz00_5666 = ((BgL_copz00_bglt) BgL_new1164z00_4824);
								}
							else
								{	/* Cgen/cgen.scm 161 */
									BgL_auxz00_5666 = ((BgL_copz00_bglt) BgL_copz00_4580);
								}
						}
						((((BgL_creturnz00_bglt) COBJECT(BgL_new1162z00_4819))->
								BgL_valuez00) = ((BgL_copz00_bglt) BgL_auxz00_5666), BUNSPEC);
					}
					BgL_auxz00_5657 = BgL_new1162z00_4819;
				}
				return ((obj_t) BgL_auxz00_5657);
			}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcgen_cgenz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2115;

				BgL_headz00_2115 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2116;
					obj_t BgL_tailz00_2117;

					BgL_prevz00_2116 = BgL_headz00_2115;
					BgL_tailz00_2117 = BgL_l1z00_1;
				BgL_loopz00_2118:
					if (PAIRP(BgL_tailz00_2117))
						{
							obj_t BgL_newzd2prevzd2_2120;

							BgL_newzd2prevzd2_2120 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2117), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2116, BgL_newzd2prevzd2_2120);
							{
								obj_t BgL_tailz00_5702;
								obj_t BgL_prevz00_5701;

								BgL_prevz00_5701 = BgL_newzd2prevzd2_2120;
								BgL_tailz00_5702 = CDR(BgL_tailz00_2117);
								BgL_tailz00_2117 = BgL_tailz00_5702;
								BgL_prevz00_2116 = BgL_prevz00_5701;
								goto BgL_loopz00_2118;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2115);
				}
			}
		}

	}



/* cgen-function */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt
		BgL_globalz00_17)
	{
		{	/* Cgen/cgen.scm 63 */
			if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00
				(BgL_globalz00_17))
				{	/* Cgen/cgen.scm 64 */
					{	/* Cgen/cgen.scm 65 */
						obj_t BgL_arg1826z00_2136;

						BgL_arg1826z00_2136 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_17)))->BgL_idz00);
						BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1826z00_2136);
					}
					BGl_za2thezd2globalza2zd2zzcgen_cgenz00 = ((obj_t) BgL_globalz00_17);
					{	/* Cgen/cgen.scm 70 */
						obj_t BgL_shz00_2137;

						BgL_shz00_2137 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_globalz00_17));
						BUNSPEC;
					}
					{	/* Cgen/cgen.scm 72 */
						BgL_sfunz00_bglt BgL_sfunz00_2138;

						{	/* Cgen/cgen.scm 72 */
							BgL_sfunz00_bglt BgL_tmp1150z00_2160;

							BgL_tmp1150z00_2160 =
								((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_17)))->
									BgL_valuez00));
							{	/* Cgen/cgen.scm 72 */
								BgL_sfunzf2czf2_bglt BgL_wide1152z00_2162;

								BgL_wide1152z00_2162 =
									((BgL_sfunzf2czf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunzf2czf2_bgl))));
								{	/* Cgen/cgen.scm 72 */
									obj_t BgL_auxz00_5720;
									BgL_objectz00_bglt BgL_tmpz00_5717;

									BgL_auxz00_5720 = ((obj_t) BgL_wide1152z00_2162);
									BgL_tmpz00_5717 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_tmp1150z00_2160));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5717, BgL_auxz00_5720);
								}
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1150z00_2160));
								{	/* Cgen/cgen.scm 72 */
									long BgL_arg1846z00_2163;

									{	/* Cgen/cgen.scm 72 */
										long BgL_res2656z00_3740;

										BgL_res2656z00_3740 =
											BGL_CLASS_INDEX(BGl_sfunzf2Czf2zzcgen_copz00);
										BgL_arg1846z00_2163 = BgL_res2656z00_3740;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_tmp1150z00_2160)),
										BgL_arg1846z00_2163);
								}
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_tmp1150z00_2160));
							}
							{
								BgL_clabelz00_bglt BgL_auxz00_5738;
								BgL_sfunzf2czf2_bglt BgL_auxz00_5731;

								{	/* Cgen/cgen.scm 73 */
									BgL_clabelz00_bglt BgL_new1156z00_2165;

									{	/* Cgen/cgen.scm 75 */
										BgL_clabelz00_bglt BgL_new1154z00_2167;

										BgL_new1154z00_2167 =
											((BgL_clabelz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_clabelz00_bgl))));
										{	/* Cgen/cgen.scm 75 */
											long BgL_arg1848z00_2168;

											{	/* Cgen/cgen.scm 75 */
												long BgL_res2657z00_3745;

												{	/* Cgen/cgen.scm 75 */
													obj_t BgL_classz00_3744;

													BgL_classz00_3744 = BGl_clabelz00zzcgen_copz00;
													BgL_res2657z00_3745 =
														BGL_CLASS_INDEX(BgL_classz00_3744);
												}
												BgL_arg1848z00_2168 = BgL_res2657z00_3745;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1154z00_2167),
												BgL_arg1848z00_2168);
										}
										BgL_new1156z00_2165 = BgL_new1154z00_2167;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1156z00_2165)))->
											BgL_locz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) (((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_globalz00_17)))->BgL_valuez00))))->
												BgL_locz00)), BUNSPEC);
									((((BgL_clabelz00_bglt) COBJECT(BgL_new1156z00_2165))->
											BgL_namez00) =
										((obj_t) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_globalz00_17)))->
												BgL_namez00)), BUNSPEC);
									((((BgL_clabelz00_bglt) COBJECT(BgL_new1156z00_2165))->
											BgL_usedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									((((BgL_clabelz00_bglt) COBJECT(BgL_new1156z00_2165))->
											BgL_bodyz00) = ((obj_t) BUNSPEC), BUNSPEC);
									BgL_auxz00_5738 = BgL_new1156z00_2165;
								}
								{
									obj_t BgL_auxz00_5732;

									{	/* Cgen/cgen.scm 73 */
										BgL_objectz00_bglt BgL_tmpz00_5733;

										BgL_tmpz00_5733 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_tmp1150z00_2160));
										BgL_auxz00_5732 = BGL_OBJECT_WIDENING(BgL_tmpz00_5733);
									}
									BgL_auxz00_5731 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_5732);
								}
								((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_5731))->
										BgL_labelz00) =
									((BgL_clabelz00_bglt) BgL_auxz00_5738), BUNSPEC);
							}
							{
								BgL_sfunzf2czf2_bglt BgL_auxz00_5755;

								{
									obj_t BgL_auxz00_5756;

									{	/* Cgen/cgen.scm 76 */
										BgL_objectz00_bglt BgL_tmpz00_5757;

										BgL_tmpz00_5757 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_tmp1150z00_2160));
										BgL_auxz00_5756 = BGL_OBJECT_WIDENING(BgL_tmpz00_5757);
									}
									BgL_auxz00_5755 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_5756);
								}
								((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_5755))->
										BgL_integratedz00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							}
							BgL_sfunz00_2138 = ((BgL_sfunz00_bglt) BgL_tmp1150z00_2160);
						}
						{	/* Cgen/cgen.scm 72 */
							obj_t BgL_locz00_2139;

							BgL_locz00_2139 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_sfunz00_2138)))->BgL_locz00);
							{	/* Cgen/cgen.scm 77 */
								BgL_copz00_bglt BgL_copz00_2140;

								{	/* Cgen/cgen.scm 78 */
									obj_t BgL_arg1838z00_2155;
									obj_t BgL_arg1840z00_2156;

									BgL_arg1838z00_2155 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_sfunz00_2138)))->BgL_bodyz00);
									{	/* Cgen/cgen.scm 79 */
										bool_t BgL_test3018z00_5768;

										{	/* Cgen/cgen.scm 79 */
											BgL_typez00_bglt BgL_arg1845z00_2159;

											BgL_arg1845z00_2159 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_17)))->
												BgL_typez00);
											BgL_test3018z00_5768 =
												(((obj_t) BgL_arg1845z00_2159) ==
												BGl_za2voidza2z00zztype_cachez00);
										}
										if (BgL_test3018z00_5768)
											{	/* Cgen/cgen.scm 79 */
												BgL_arg1840z00_2156 =
													BGl_za2voidzd2kontza2zd2envz00zzcgen_cgenz00;
											}
										else
											{	/* Cgen/cgen.scm 79 */
												BgL_arg1840z00_2156 =
													BGl_za2returnzd2kontza2zd2zzcgen_cgenz00;
											}
									}
									BgL_copz00_2140 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(
										((BgL_nodez00_bglt) BgL_arg1838z00_2155),
										BgL_arg1840z00_2156, ((bool_t) 0));
								}
								{	/* Cgen/cgen.scm 78 */

									BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
									bgl_display_char(((unsigned char) 10),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									bgl_display_char(((unsigned char) 10),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									bgl_display_string(BGl_string2878z00zzcgen_cgenz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									{	/* Cgen/cgen.scm 88 */
										obj_t BgL_arg1827z00_2141;

										{	/* Cgen/cgen.scm 88 */
											obj_t BgL_arg1828z00_2142;

											{	/* Cgen/cgen.scm 88 */
												obj_t BgL_arg1829z00_2143;

												BgL_arg1829z00_2143 =
													BGl_shapez00zztools_shapez00(
													((obj_t) BgL_globalz00_17));
												{	/* Cgen/cgen.scm 88 */
													obj_t BgL_res2658z00_3760;

													BgL_res2658z00_3760 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1829z00_2143));
													BgL_arg1828z00_2142 = BgL_res2658z00_3760;
											}}
											BgL_arg1827z00_2141 =
												BGl_pregexpzd2replaceza2z70zz__regexpz00
												(BGl_pregexp1684z00zzcgen_cgenz00, BgL_arg1828z00_2142,
												BGl_string2879z00zzcgen_cgenz00);
										}
										bgl_display_obj(BgL_arg1827z00_2141,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									}
									bgl_display_string(BGl_string2880z00zzcgen_cgenz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BFALSE);
									BGl_resetzd2bdbzd2locz12z12zzcgen_emitzd2copzd2();
									{	/* Cgen/cgen.scm 99 */
										BgL_clabelz00_bglt BgL_arg1830z00_2144;

										{
											BgL_sfunzf2czf2_bglt BgL_auxz00_5788;

											{
												obj_t BgL_auxz00_5789;

												{	/* Cgen/cgen.scm 99 */
													BgL_objectz00_bglt BgL_tmpz00_5790;

													BgL_tmpz00_5790 =
														((BgL_objectz00_bglt) BgL_sfunz00_2138);
													BgL_auxz00_5789 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5790);
												}
												BgL_auxz00_5788 =
													((BgL_sfunzf2czf2_bglt) BgL_auxz00_5789);
											}
											BgL_arg1830z00_2144 =
												(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_5788))->
												BgL_labelz00);
										}
										((((BgL_clabelz00_bglt) COBJECT(BgL_arg1830z00_2144))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_copz00_2140)), BUNSPEC);
									}
									BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_17);
									{	/* Cgen/cgen.scm 101 */
										obj_t BgL_copz00_2145;

										{	/* Cgen/cgen.scm 101 */
											BgL_clabelz00_bglt BgL_arg1836z00_2154;

											{
												BgL_sfunzf2czf2_bglt BgL_auxz00_5798;

												{
													obj_t BgL_auxz00_5799;

													{	/* Cgen/cgen.scm 101 */
														BgL_objectz00_bglt BgL_tmpz00_5800;

														BgL_tmpz00_5800 =
															((BgL_objectz00_bglt) BgL_sfunz00_2138);
														BgL_auxz00_5799 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5800);
													}
													BgL_auxz00_5798 =
														((BgL_sfunzf2czf2_bglt) BgL_auxz00_5799);
												}
												BgL_arg1836z00_2154 =
													(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_5798))->
													BgL_labelz00);
											}
											BgL_copz00_2145 =
												BGl_blockzd2kontzd2zzcgen_cgenz00(
												((obj_t) BgL_arg1836z00_2154), BgL_locz00_2139);
										}
										bgl_display_string(BGl_string2881z00zzcgen_cgenz00,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{	/* Cgen/cgen.scm 106 */
											bool_t BgL_test3019z00_5808;

											{	/* Cgen/cgen.scm 106 */
												bool_t BgL_test3020z00_5809;

												if (INTEGERP(BGl_za2bdbzd2debugza2zd2zzengine_paramz00))
													{	/* Cgen/cgen.scm 106 */
														BgL_test3020z00_5809 =
															(
															(long)
															CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
															((long) 0));
													}
												else
													{	/* Cgen/cgen.scm 106 */
														BgL_test3020z00_5809 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00
															(BGl_za2bdbzd2debugza2zd2zzengine_paramz00,
															BINT(((long) 0)));
													}
												if (BgL_test3020z00_5809)
													{	/* Cgen/cgen.scm 106 */
														if (STRUCTP(BgL_locz00_2139))
															{	/* Cgen/cgen.scm 106 */
																BgL_test3019z00_5808 =
																	(STRUCT_KEY(BgL_locz00_2139) ==
																	CNST_TABLE_REF(((long) 0)));
															}
														else
															{	/* Cgen/cgen.scm 106 */
																BgL_test3019z00_5808 = ((bool_t) 0);
															}
													}
												else
													{	/* Cgen/cgen.scm 106 */
														BgL_test3019z00_5808 = ((bool_t) 0);
													}
											}
											if (BgL_test3019z00_5808)
												{	/* Cgen/cgen.scm 106 */
													BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
														(BgL_locz00_2139);
													bgl_display_string(BGl_string2882z00zzcgen_cgenz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* Cgen/cgen.scm 106 */
													BFALSE;
												}
										}
										BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
											((BgL_copz00_bglt) BgL_copz00_2145));
										BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2
											(BGl_getzd2currentzd2bdbzd2loczd2zzcgen_emitzd2copzd2());
										{	/* Cgen/cgen.scm 115 */
											obj_t BgL_port1685z00_2153;

											BgL_port1685z00_2153 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											{	/* Cgen/cgen.scm 115 */
												obj_t BgL_tmpz00_5827;

												BgL_tmpz00_5827 = ((obj_t) BgL_port1685z00_2153);
												bgl_display_string(BGl_string2883z00zzcgen_cgenz00,
													BgL_tmpz00_5827);
											}
											{	/* Cgen/cgen.scm 115 */
												obj_t BgL_tmpz00_5830;

												BgL_tmpz00_5830 = ((obj_t) BgL_port1685z00_2153);
												bgl_display_char(((unsigned char) 10), BgL_tmpz00_5830);
									}}}
									BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
									return BGl_leavezd2functionzd2zztools_errorz00();
								}
							}
						}
					}
				}
			else
				{	/* Cgen/cgen.scm 64 */
					return BFALSE;
				}
		}

	}



/* &cgen-function */
	obj_t BGl_z62cgenzd2functionzb0zzcgen_cgenz00(obj_t BgL_envz00_4581,
		obj_t BgL_globalz00_4582)
	{
		{	/* Cgen/cgen.scm 63 */
			return
				BGl_cgenzd2functionzd2zzcgen_cgenz00(
				((BgL_globalz00_bglt) BgL_globalz00_4582));
		}

	}



/* global->c */
	obj_t BGl_globalzd2ze3cz31zzcgen_cgenz00(BgL_globalz00_bglt BgL_gz00_18)
	{
		{	/* Cgen/cgen.scm 129 */
			if (
				((((BgL_globalz00_bglt) COBJECT(BgL_gz00_18))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 1))))
				{	/* Cgen/cgen.scm 131 */
					bgl_display_string(BGl_string2884z00zzcgen_cgenz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* Cgen/cgen.scm 131 */
					BFALSE;
				}
			{	/* Cgen/cgen.scm 132 */
				obj_t BgL_arg1853z00_2173;

				{	/* Cgen/cgen.scm 132 */
					BgL_typez00_bglt BgL_arg1855z00_2174;
					obj_t BgL_arg1856z00_2175;

					BgL_arg1855z00_2174 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_gz00_18)))->BgL_typez00);
					{	/* Cgen/cgen.scm 134 */
						obj_t BgL_arg1857z00_2176;
						obj_t BgL_arg1858z00_2177;

						BgL_arg1857z00_2176 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_gz00_18)))->BgL_namez00);
						if (NULLP(
								(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_gz00_18)))->
													BgL_valuez00))))->BgL_argsz00)))
							{	/* Cgen/cgen.scm 136 */
								BgL_arg1858z00_2177 = BGl_string2885z00zzcgen_cgenz00;
							}
						else
							{	/* Cgen/cgen.scm 140 */
								obj_t BgL_arg1863z00_2181;

								{	/* Cgen/cgen.scm 140 */
									obj_t BgL_g1158z00_2182;

									BgL_g1158z00_2182 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_gz00_18)))->
														BgL_valuez00))))->BgL_argsz00);
									BgL_arg1863z00_2181 =
										BGl_loopze70ze7zzcgen_cgenz00(BgL_g1158z00_2182);
								}
								BgL_arg1858z00_2177 =
									string_append(BGl_string2886z00zzcgen_cgenz00,
									BgL_arg1863z00_2181);
							}
						BgL_arg1856z00_2175 =
							string_append(BgL_arg1857z00_2176, BgL_arg1858z00_2177);
					}
					BgL_arg1853z00_2173 =
						BGl_makezd2typedzd2declarationz00zztype_toolsz00
						(BgL_arg1855z00_2174, BgL_arg1856z00_2175);
				}
				bgl_display_obj(BgL_arg1853z00_2173,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			return BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00();
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzcgen_cgenz00(obj_t BgL_argsz00_2184)
	{
		{	/* Cgen/cgen.scm 140 */
			if (NULLP(CDR(((obj_t) BgL_argsz00_2184))))
				{	/* Cgen/cgen.scm 142 */
					BgL_localz00_bglt BgL_i1159z00_2188;

					BgL_i1159z00_2188 =
						((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_2184)));
					{	/* Cgen/cgen.scm 144 */
						obj_t BgL_arg1868z00_2189;

						{	/* Cgen/cgen.scm 144 */
							BgL_typez00_bglt BgL_arg1870z00_2190;
							obj_t BgL_arg1871z00_2191;

							BgL_arg1870z00_2190 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1159z00_2188)))->BgL_typez00);
							BgL_arg1871z00_2191 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1159z00_2188)))->BgL_namez00);
							BgL_arg1868z00_2189 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg1870z00_2190, BgL_arg1871z00_2191);
						}
						return
							string_append(BgL_arg1868z00_2189,
							BGl_string2887z00zzcgen_cgenz00);
					}
				}
			else
				{	/* Cgen/cgen.scm 145 */
					BgL_localz00_bglt BgL_i1160z00_2192;

					BgL_i1160z00_2192 =
						((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_2184)));
					{	/* Cgen/cgen.scm 147 */
						obj_t BgL_arg1872z00_2193;
						obj_t BgL_arg1873z00_2194;

						{	/* Cgen/cgen.scm 147 */
							BgL_typez00_bglt BgL_arg1874z00_2195;
							obj_t BgL_arg1876z00_2196;

							BgL_arg1874z00_2195 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1160z00_2192)))->BgL_typez00);
							BgL_arg1876z00_2196 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1160z00_2192)))->BgL_namez00);
							BgL_arg1872z00_2193 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg1874z00_2195, BgL_arg1876z00_2196);
						}
						{	/* Cgen/cgen.scm 149 */
							obj_t BgL_arg1877z00_2197;

							BgL_arg1877z00_2197 = CDR(((obj_t) BgL_argsz00_2184));
							BgL_arg1873z00_2194 =
								BGl_loopze70ze7zzcgen_cgenz00(BgL_arg1877z00_2197);
						}
						return
							string_append_3(BgL_arg1872z00_2193,
							BGl_string2888z00zzcgen_cgenz00, BgL_arg1873z00_2194);
					}
				}
		}

	}



/* *void-kont* */
	BgL_cvoidz00_bglt BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(obj_t BgL_copz00_19)
	{
		{	/* Cgen/cgen.scm 178 */
			{	/* Cgen/cgen.scm 180 */
				BgL_cvoidz00_bglt BgL_new1168z00_2203;

				{	/* Cgen/cgen.scm 180 */
					BgL_cvoidz00_bglt BgL_new1167z00_2204;

					BgL_new1167z00_2204 =
						((BgL_cvoidz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cvoidz00_bgl))));
					{	/* Cgen/cgen.scm 180 */
						long BgL_arg1883z00_2205;

						{	/* Cgen/cgen.scm 180 */
							long BgL_res2665z00_3795;

							BgL_res2665z00_3795 = BGL_CLASS_INDEX(BGl_cvoidz00zzcgen_copz00);
							BgL_arg1883z00_2205 = BgL_res2665z00_3795;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1167z00_2204), BgL_arg1883z00_2205);
					}
					BgL_new1168z00_2203 = BgL_new1167z00_2204;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1168z00_2203)))->BgL_locz00) =
					((obj_t) BFALSE), BUNSPEC);
				((((BgL_cvoidz00_bglt) COBJECT(BgL_new1168z00_2203))->BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_copz00_19)), BUNSPEC);
				return BgL_new1168z00_2203;
			}
		}

	}



/* &*void-kont* */
	obj_t BGl_z62za2voidzd2kontza2zb0zzcgen_cgenz00(obj_t BgL_envz00_4583,
		obj_t BgL_copz00_4584)
	{
		{	/* Cgen/cgen.scm 178 */
			return ((obj_t) BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(BgL_copz00_4584));
		}

	}



/* block-kont */
	BGL_EXPORTED_DEF obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t BgL_copz00_20,
		obj_t BgL_locz00_21)
	{
		{	/* Cgen/cgen.scm 192 */
			if (BGl_isazf3zf3zz__objectz00(BgL_copz00_20, BGl_cblockz00zzcgen_copz00))
				{	/* Cgen/cgen.scm 194 */
					return BgL_copz00_20;
				}
			else
				{	/* Cgen/cgen.scm 197 */
					BgL_cblockz00_bglt BgL_new1172z00_2207;

					{	/* Cgen/cgen.scm 199 */
						BgL_cblockz00_bglt BgL_new1171z00_2208;

						BgL_new1171z00_2208 =
							((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cblockz00_bgl))));
						{	/* Cgen/cgen.scm 199 */
							long BgL_arg1885z00_2209;

							{	/* Cgen/cgen.scm 199 */
								long BgL_res2666z00_3799;

								BgL_res2666z00_3799 =
									BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
								BgL_arg1885z00_2209 = BgL_res2666z00_3799;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1171z00_2208),
								BgL_arg1885z00_2209);
						}
						BgL_new1172z00_2207 = BgL_new1171z00_2208;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1172z00_2207)))->BgL_locz00) =
						((obj_t) BgL_locz00_21), BUNSPEC);
					((((BgL_cblockz00_bglt) COBJECT(BgL_new1172z00_2207))->BgL_bodyz00) =
						((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_copz00_20)), BUNSPEC);
					return ((obj_t) BgL_new1172z00_2207);
				}
		}

	}



/* &block-kont */
	obj_t BGl_z62blockzd2kontzb0zzcgen_cgenz00(obj_t BgL_envz00_4585,
		obj_t BgL_copz00_4586, obj_t BgL_locz00_4587)
	{
		{	/* Cgen/cgen.scm 192 */
			return
				BGl_blockzd2kontzd2zzcgen_cgenz00(BgL_copz00_4586, BgL_locz00_4587);
		}

	}



/* make-setq-kont */
	obj_t BGl_makezd2setqzd2kontz00zzcgen_cgenz00(obj_t BgL_varz00_24,
		obj_t BgL_locz00_25, obj_t BgL_kontz00_26)
	{
		{	/* Cgen/cgen.scm 214 */
			{	/* Cgen/cgen.scm 215 */
				obj_t BgL_zc3z04anonymousza31886ze3z87_4588;

				BgL_zc3z04anonymousza31886ze3z87_4588 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31886ze3ze5zzcgen_cgenz00,
					(int) (((long) 1)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31886ze3z87_4588,
					(int) (((long) 0)), BgL_locz00_25);
				PROCEDURE_SET(BgL_zc3z04anonymousza31886ze3z87_4588,
					(int) (((long) 1)), BgL_varz00_24);
				PROCEDURE_SET(BgL_zc3z04anonymousza31886ze3z87_4588,
					(int) (((long) 2)), BgL_kontz00_26);
				return BgL_zc3z04anonymousza31886ze3z87_4588;
			}
		}

	}



/* &<@anonymous:1886> */
	obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4589,
		obj_t BgL_copz00_4593)
	{
		{	/* Cgen/cgen.scm 215 */
			{	/* Cgen/cgen.scm 216 */
				obj_t BgL_locz00_4590;
				obj_t BgL_varz00_4591;
				obj_t BgL_kontz00_4592;

				BgL_locz00_4590 = PROCEDURE_REF(BgL_envz00_4589, (int) (((long) 0)));
				BgL_varz00_4591 = PROCEDURE_REF(BgL_envz00_4589, (int) (((long) 1)));
				BgL_kontz00_4592 = PROCEDURE_REF(BgL_envz00_4589, (int) (((long) 2)));
				if (BGl_isazf3zf3zz__objectz00(BgL_copz00_4593,
						BGl_cfailz00zzcgen_copz00))
					{	/* Cgen/cgen.scm 216 */
						return BgL_copz00_4593;
					}
				else
					{	/* Cgen/cgen.scm 218 */
						BgL_csetqz00_bglt BgL_arg1888z00_4837;

						{	/* Cgen/cgen.scm 218 */
							BgL_csetqz00_bglt BgL_new1174z00_4838;

							{	/* Cgen/cgen.scm 231 */
								BgL_csetqz00_bglt BgL_new1173z00_4839;

								BgL_new1173z00_4839 =
									((BgL_csetqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_csetqz00_bgl))));
								{	/* Cgen/cgen.scm 231 */
									long BgL_arg1897z00_4840;

									{	/* Cgen/cgen.scm 231 */
										long BgL_res2668z00_4841;

										BgL_res2668z00_4841 =
											BGL_CLASS_INDEX(BGl_csetqz00zzcgen_copz00);
										BgL_arg1897z00_4840 = BgL_res2668z00_4841;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1173z00_4839),
										BgL_arg1897z00_4840);
								}
								BgL_new1174z00_4838 = BgL_new1173z00_4839;
							}
							((((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt) BgL_new1174z00_4838)))->BgL_locz00) =
								((obj_t) BgL_locz00_4590), BUNSPEC);
							{
								BgL_varcz00_bglt BgL_auxz00_5932;

								{	/* Cgen/cgen.scm 219 */
									BgL_varcz00_bglt BgL_new1176z00_4842;

									{	/* Cgen/cgen.scm 219 */
										BgL_varcz00_bglt BgL_new1175z00_4843;

										BgL_new1175z00_4843 =
											((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varcz00_bgl))));
										{	/* Cgen/cgen.scm 219 */
											long BgL_arg1889z00_4844;

											{	/* Cgen/cgen.scm 219 */
												long BgL_res2669z00_4845;

												{	/* Cgen/cgen.scm 219 */
													obj_t BgL_classz00_4846;

													BgL_classz00_4846 = BGl_varcz00zzcgen_copz00;
													BgL_res2669z00_4845 =
														BGL_CLASS_INDEX(BgL_classz00_4846);
												}
												BgL_arg1889z00_4844 = BgL_res2669z00_4845;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1175z00_4843),
												BgL_arg1889z00_4844);
										}
										BgL_new1176z00_4842 = BgL_new1175z00_4843;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1176z00_4842)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_varcz00_bglt) COBJECT(BgL_new1176z00_4842))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_4591)), BUNSPEC);
									BgL_auxz00_5932 = BgL_new1176z00_4842;
								}
								((((BgL_csetqz00_bglt) COBJECT(BgL_new1174z00_4838))->
										BgL_varz00) =
									((BgL_varcz00_bglt) BgL_auxz00_5932), BUNSPEC);
							}
							{
								BgL_copz00_bglt BgL_auxz00_5942;

								{	/* Cgen/cgen.scm 221 */
									bool_t BgL_test3028z00_5943;

									{	/* Cgen/cgen.scm 221 */
										bool_t BgL_res2670z00_4847;

										BgL_res2670z00_4847 =
											BGl_isazf3zf3zz__objectz00(BgL_copz00_4593,
											BGl_csetqz00zzcgen_copz00);
										BgL_test3028z00_5943 = BgL_res2670z00_4847;
									}
									if (BgL_test3028z00_5943)
										{	/* Cgen/cgen.scm 222 */
											BgL_csequencez00_bglt BgL_new1178z00_4848;

											{	/* Cgen/cgen.scm 223 */
												BgL_csequencez00_bglt BgL_new1177z00_4849;

												BgL_new1177z00_4849 =
													((BgL_csequencez00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_csequencez00_bgl))));
												{	/* Cgen/cgen.scm 223 */
													long BgL_arg1896z00_4850;

													{	/* Cgen/cgen.scm 223 */
														long BgL_res2671z00_4851;

														{	/* Cgen/cgen.scm 223 */
															obj_t BgL_classz00_4852;

															BgL_classz00_4852 = BGl_csequencez00zzcgen_copz00;
															BgL_res2671z00_4851 =
																BGL_CLASS_INDEX(BgL_classz00_4852);
														}
														BgL_arg1896z00_4850 = BgL_res2671z00_4851;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1177z00_4849),
														BgL_arg1896z00_4850);
												}
												BgL_new1178z00_4848 = BgL_new1177z00_4849;
											}
											((((BgL_copz00_bglt) COBJECT(
															((BgL_copz00_bglt) BgL_new1178z00_4848)))->
													BgL_locz00) =
												((obj_t) (((BgL_copz00_bglt)
															COBJECT(((BgL_copz00_bglt) ((BgL_csetqz00_bglt)
																		BgL_copz00_4593))))->BgL_locz00)), BUNSPEC);
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1178z00_4848))->
													BgL_czd2expzf3z21) =
												((bool_t) ((bool_t) 1)), BUNSPEC);
											{
												obj_t BgL_auxz00_5955;

												{	/* Cgen/cgen.scm 226 */
													BgL_catomz00_bglt BgL_arg1891z00_4853;

													{	/* Cgen/cgen.scm 226 */
														BgL_catomz00_bglt BgL_new1181z00_4854;

														{	/* Cgen/cgen.scm 227 */
															BgL_catomz00_bglt BgL_new1180z00_4855;

															BgL_new1180z00_4855 =
																((BgL_catomz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_catomz00_bgl))));
															{	/* Cgen/cgen.scm 227 */
																long BgL_arg1895z00_4856;

																{	/* Cgen/cgen.scm 227 */
																	long BgL_res2672z00_4857;

																	{	/* Cgen/cgen.scm 227 */
																		obj_t BgL_classz00_4858;

																		BgL_classz00_4858 =
																			BGl_catomz00zzcgen_copz00;
																		BgL_res2672z00_4857 =
																			BGL_CLASS_INDEX(BgL_classz00_4858);
																	}
																	BgL_arg1895z00_4856 = BgL_res2672z00_4857;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1180z00_4855),
																	BgL_arg1895z00_4856);
															}
															BgL_new1181z00_4854 = BgL_new1180z00_4855;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1181z00_4854)))->
																BgL_locz00) =
															((obj_t) (((BgL_copz00_bglt)
																		COBJECT(((BgL_copz00_bglt) (
																					(BgL_csetqz00_bglt)
																					BgL_copz00_4593))))->BgL_locz00)),
															BUNSPEC);
														((((BgL_catomz00_bglt)
																	COBJECT(BgL_new1181z00_4854))->BgL_valuez00) =
															((obj_t) BUNSPEC), BUNSPEC);
														BgL_arg1891z00_4853 = BgL_new1181z00_4854;
													}
													{	/* Cgen/cgen.scm 225 */
														obj_t BgL_list1892z00_4859;

														{	/* Cgen/cgen.scm 225 */
															obj_t BgL_arg1893z00_4860;

															BgL_arg1893z00_4860 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1891z00_4853), BNIL);
															BgL_list1892z00_4859 =
																MAKE_YOUNG_PAIR(BgL_copz00_4593,
																BgL_arg1893z00_4860);
														}
														BgL_auxz00_5955 = BgL_list1892z00_4859;
												}}
												((((BgL_csequencez00_bglt)
															COBJECT(BgL_new1178z00_4848))->BgL_copsz00) =
													((obj_t) BgL_auxz00_5955), BUNSPEC);
											}
											BgL_auxz00_5942 = ((BgL_copz00_bglt) BgL_new1178z00_4848);
										}
									else
										{	/* Cgen/cgen.scm 221 */
											BgL_auxz00_5942 = ((BgL_copz00_bglt) BgL_copz00_4593);
										}
								}
								((((BgL_csetqz00_bglt) COBJECT(BgL_new1174z00_4838))->
										BgL_valuez00) =
									((BgL_copz00_bglt) BgL_auxz00_5942), BUNSPEC);
							}
							BgL_arg1888z00_4837 = BgL_new1174z00_4838;
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_4592) (BgL_kontz00_4592,
							((obj_t) BgL_arg1888z00_4837), BEOA);
					}
			}
		}

	}



/* is-push-exit? */
	bool_t BGl_iszd2pushzd2exitzf3zf3zzcgen_cgenz00(BgL_nodez00_bglt
		BgL_nodez00_51)
	{
		{	/* Cgen/cgen.scm 359 */
			if (BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_nodez00_51), BGl_appz00zzast_nodez00))
				{	/* Cgen/cgen.scm 362 */
					BgL_variablez00_bglt BgL_varz00_2232;

					BgL_varz00_2232 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_51)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Cgen/cgen.scm 363 */
						bool_t BgL_test3030z00_5984;

						{	/* Cgen/cgen.scm 363 */
							bool_t BgL_res2674z00_3824;

							BgL_res2674z00_3824 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_varz00_2232), BGl_globalz00zzast_varz00);
							BgL_test3030z00_5984 = BgL_res2674z00_3824;
						}
						if (BgL_test3030z00_5984)
							{	/* Cgen/cgen.scm 363 */
								return
									(
									(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2232))->
										BgL_idz00) == CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* Cgen/cgen.scm 363 */
								return ((bool_t) 0);
							}
					}
				}
			else
				{	/* Cgen/cgen.scm 360 */
					return ((bool_t) 0);
				}
		}

	}



/* extern->cop */
	obj_t BGl_externzd2ze3copz31zzcgen_cgenz00(obj_t BgL_formatz00_55,
		bool_t BgL_argszd2safezd2_56, BgL_externz00_bglt BgL_nodez00_57,
		obj_t BgL_kontz00_58, obj_t BgL_inpushexitz00_59)
	{
		{	/* Cgen/cgen.scm 375 */
			{	/* Cgen/cgen.scm 380 */
				obj_t BgL_arg1903z00_2237;
				obj_t BgL_arg1904z00_2238;

				BgL_arg1903z00_2237 =
					(((BgL_externz00_bglt) COBJECT(BgL_nodez00_57))->BgL_exprza2za2);
				BgL_arg1904z00_2238 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_nodez00_57)))->BgL_locz00);
				{	/* Cgen/cgen.scm 384 */
					obj_t BgL_zc3z04anonymousza31906ze3z87_4594;

					{
						int BgL_tmpz00_5993;

						BgL_tmpz00_5993 = (int) (((long) 3));
						BgL_zc3z04anonymousza31906ze3z87_4594 =
							MAKE_L_PROCEDURE
							(BGl_z62zc3z04anonymousza31906ze3ze5zzcgen_cgenz00,
							BgL_tmpz00_5993);
					}
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31906ze3z87_4594,
						(int) (((long) 0)), ((obj_t) BgL_nodez00_57));
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31906ze3z87_4594,
						(int) (((long) 1)), BgL_formatz00_55);
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31906ze3z87_4594,
						(int) (((long) 2)), BgL_kontz00_58);
					return
						BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg1903z00_2237,
						BgL_argszd2safezd2_56, BgL_arg1904z00_2238,
						BgL_zc3z04anonymousza31906ze3z87_4594, BgL_inpushexitz00_59);
				}
			}
		}

	}



/* &<@anonymous:1906> */
	obj_t BGl_z62zc3z04anonymousza31906ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4595,
		obj_t BgL_newzd2argszd2_4599)
	{
		{	/* Cgen/cgen.scm 383 */
			{	/* Cgen/cgen.scm 384 */
				BgL_externz00_bglt BgL_i1214z00_4596;
				obj_t BgL_formatz00_4597;
				obj_t BgL_kontz00_4598;

				BgL_i1214z00_4596 =
					((BgL_externz00_bglt)
					PROCEDURE_L_REF(BgL_envz00_4595, (int) (((long) 0))));
				BgL_formatz00_4597 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4595, (int) (((long) 1))));
				BgL_kontz00_4598 = PROCEDURE_L_REF(BgL_envz00_4595, (int) (((long) 2)));
				{	/* Cgen/cgen.scm 384 */
					BgL_cpragmaz00_bglt BgL_arg1907z00_4862;

					{	/* Cgen/cgen.scm 384 */
						BgL_cpragmaz00_bglt BgL_new1216z00_4863;

						{	/* Cgen/cgen.scm 385 */
							BgL_cpragmaz00_bglt BgL_new1215z00_4864;

							BgL_new1215z00_4864 =
								((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_cpragmaz00_bgl))));
							{	/* Cgen/cgen.scm 385 */
								long BgL_arg1908z00_4865;

								{	/* Cgen/cgen.scm 385 */
									long BgL_res2675z00_4866;

									BgL_res2675z00_4866 =
										BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
									BgL_arg1908z00_4865 = BgL_res2675z00_4866;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1215z00_4864),
									BgL_arg1908z00_4865);
							}
							BgL_new1216z00_4863 = BgL_new1215z00_4864;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1216z00_4863)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1214z00_4596)))->BgL_locz00)), BUNSPEC);
						((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1216z00_4863))->
								BgL_formatz00) = ((obj_t) BgL_formatz00_4597), BUNSPEC);
						((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1216z00_4863))->
								BgL_argsz00) = ((obj_t) BgL_newzd2argszd2_4599), BUNSPEC);
						BgL_arg1907z00_4862 = BgL_new1216z00_4863;
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_4598) (BgL_kontz00_4598,
						((obj_t) BgL_arg1907z00_4862), BEOA);
				}
			}
		}

	}



/* bdb-let-var */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt BgL_copz00_87,
		obj_t BgL_locz00_88)
	{
		{	/* Cgen/cgen.scm 662 */
			{	/* Cgen/cgen.scm 663 */
				bool_t BgL_test3031z00_6027;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* Cgen/cgen.scm 663 */
						if (STRUCTP(BgL_locz00_88))
							{	/* Cgen/cgen.scm 663 */
								BgL_test3031z00_6027 =
									(STRUCT_KEY(BgL_locz00_88) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Cgen/cgen.scm 663 */
								BgL_test3031z00_6027 = ((bool_t) 0);
							}
					}
				else
					{	/* Cgen/cgen.scm 663 */
						BgL_test3031z00_6027 = ((bool_t) 0);
					}
				if (BgL_test3031z00_6027)
					{	/* Cgen/cgen.scm 664 */
						BgL_bdbzd2blockzd2_bglt BgL_new1315z00_2249;

						{	/* Cgen/cgen.scm 666 */
							BgL_bdbzd2blockzd2_bglt BgL_new1314z00_2250;

							BgL_new1314z00_2250 =
								((BgL_bdbzd2blockzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_bdbzd2blockzd2_bgl))));
							{	/* Cgen/cgen.scm 666 */
								long BgL_arg1911z00_2251;

								{	/* Cgen/cgen.scm 666 */
									long BgL_res2679z00_3838;

									BgL_res2679z00_3838 =
										BGL_CLASS_INDEX(BGl_bdbzd2blockzd2zzcgen_copz00);
									BgL_arg1911z00_2251 = BgL_res2679z00_3838;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1314z00_2250),
									BgL_arg1911z00_2251);
							}
							BgL_new1315z00_2249 = BgL_new1314z00_2250;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1315z00_2249)))->BgL_locz00) =
							((obj_t) BgL_locz00_88), BUNSPEC);
						((((BgL_bdbzd2blockzd2_bglt) COBJECT(BgL_new1315z00_2249))->
								BgL_bodyz00) = ((BgL_copz00_bglt) BgL_copz00_87), BUNSPEC);
						return ((BgL_copz00_bglt) BgL_new1315z00_2249);
					}
				else
					{	/* Cgen/cgen.scm 663 */
						return BgL_copz00_87;
					}
			}
		}

	}



/* &bdb-let-var */
	BgL_copz00_bglt BGl_z62bdbzd2letzd2varz62zzcgen_cgenz00(obj_t BgL_envz00_4600,
		obj_t BgL_copz00_4601, obj_t BgL_locz00_4602)
	{
		{	/* Cgen/cgen.scm 662 */
			return
				BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
				((BgL_copz00_bglt) BgL_copz00_4601), BgL_locz00_4602);
		}

	}



/* node-setq */
	BGL_EXPORTED_DEF BgL_setqz00_bglt
		BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt BgL_variablez00_110,
		BgL_nodez00_bglt BgL_valuez00_111)
	{
		{	/* Cgen/cgen.scm 926 */
			{	/* Cgen/cgen.scm 927 */
				BgL_setqz00_bglt BgL_new1423z00_2253;

				{	/* Cgen/cgen.scm 928 */
					BgL_setqz00_bglt BgL_new1422z00_2257;

					BgL_new1422z00_2257 =
						((BgL_setqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_setqz00_bgl))));
					{	/* Cgen/cgen.scm 928 */
						long BgL_arg1913z00_2258;

						{	/* Cgen/cgen.scm 928 */
							long BgL_res2680z00_3842;

							BgL_res2680z00_3842 = BGL_CLASS_INDEX(BGl_setqz00zzast_nodez00);
							BgL_arg1913z00_2258 = BgL_res2680z00_3842;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1422z00_2257), BgL_arg1913z00_2258);
					}
					{	/* Cgen/cgen.scm 928 */
						BgL_objectz00_bglt BgL_tmpz00_6050;

						BgL_tmpz00_6050 = ((BgL_objectz00_bglt) BgL_new1422z00_2257);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6050, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1422z00_2257);
					BgL_new1423z00_2253 = BgL_new1422z00_2257;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1423z00_2253)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_valuez00_111))->
							BgL_locz00)), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1423z00_2253)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt)
							BGl_za2unspecza2z00zztype_cachez00)), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_6060;

					{	/* Cgen/cgen.scm 930 */
						BgL_varz00_bglt BgL_new1425z00_2254;

						{	/* Cgen/cgen.scm 931 */
							BgL_varz00_bglt BgL_new1424z00_2255;

							BgL_new1424z00_2255 =
								((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_varz00_bgl))));
							{	/* Cgen/cgen.scm 931 */
								long BgL_arg1912z00_2256;

								{	/* Cgen/cgen.scm 931 */
									long BgL_res2681z00_3848;

									{	/* Cgen/cgen.scm 931 */
										obj_t BgL_classz00_3847;

										BgL_classz00_3847 = BGl_varz00zzast_nodez00;
										BgL_res2681z00_3848 = BGL_CLASS_INDEX(BgL_classz00_3847);
									}
									BgL_arg1912z00_2256 = BgL_res2681z00_3848;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1424z00_2255),
									BgL_arg1912z00_2256);
							}
							BgL_new1425z00_2254 = BgL_new1424z00_2255;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1425z00_2254)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1425z00_2254)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_variablez00_bglt)
										COBJECT(BgL_variablez00_110))->BgL_typez00)), BUNSPEC);
						((((BgL_varz00_bglt) COBJECT(BgL_new1425z00_2254))->
								BgL_variablez00) =
							((BgL_variablez00_bglt) BgL_variablez00_110), BUNSPEC);
						BgL_auxz00_6060 = BgL_new1425z00_2254;
					}
					((((BgL_setqz00_bglt) COBJECT(BgL_new1423z00_2253))->BgL_varz00) =
						((BgL_varz00_bglt) BgL_auxz00_6060), BUNSPEC);
				}
				((((BgL_setqz00_bglt) COBJECT(BgL_new1423z00_2253))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_valuez00_111), BUNSPEC);
				return BgL_new1423z00_2253;
			}
		}

	}



/* &node-setq */
	BgL_setqz00_bglt BGl_z62nodezd2setqzb0zzcgen_cgenz00(obj_t BgL_envz00_4603,
		obj_t BgL_variablez00_4604, obj_t BgL_valuez00_4605)
	{
		{	/* Cgen/cgen.scm 926 */
			return
				BGl_nodezd2setqzd2zzcgen_cgenz00(
				((BgL_variablez00_bglt) BgL_variablez00_4604),
				((BgL_nodez00_bglt) BgL_valuez00_4605));
		}

	}



/* make-local-svar/name */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t BgL_idz00_112,
		BgL_typez00_bglt BgL_typez00_113)
	{
		{	/* Cgen/cgen.scm 939 */
			{	/* Cgen/cgen.scm 940 */
				BgL_localz00_bglt BgL_localz00_2259;

				BgL_localz00_2259 =
					BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_112,
					BgL_typez00_113);
				{	/* Cgen/cgen.scm 941 */
					bool_t BgL_test3034z00_6077;

					{	/* Cgen/cgen.scm 941 */
						obj_t BgL_tmpz00_6078;

						BgL_tmpz00_6078 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_localz00_2259)))->BgL_namez00);
						BgL_test3034z00_6077 = STRINGP(BgL_tmpz00_6078);
					}
					if (BgL_test3034z00_6077)
						{	/* Cgen/cgen.scm 941 */
							BFALSE;
						}
					else
						{	/* Cgen/cgen.scm 941 */
							BGl_errorz00zz__errorz00(BGl_string2889z00zzcgen_cgenz00,
								BGl_string2890z00zzcgen_cgenz00, ((obj_t) BgL_localz00_2259));
						}
				}
				return BgL_localz00_2259;
			}
		}

	}



/* &make-local-svar/name */
	BgL_localz00_bglt BGl_z62makezd2localzd2svarzf2namez90zzcgen_cgenz00(obj_t
		BgL_envz00_4606, obj_t BgL_idz00_4607, obj_t BgL_typez00_4608)
	{
		{	/* Cgen/cgen.scm 939 */
			return
				BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(BgL_idz00_4607,
				((BgL_typez00_bglt) BgL_typez00_4608));
		}

	}



/* no-bdb-newline */
	obj_t BGl_nozd2bdbzd2newlinez00zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 950 */
			if ((BGl_za2bdbzd2debugza2zd2zzengine_paramz00 == BINT(((long) 0))))
				{	/* Cgen/cgen.scm 951 */
					return
						bgl_display_char(((unsigned char) 10),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* Cgen/cgen.scm 951 */
					return BFALSE;
				}
		}

	}



/* node-args->cop */
	obj_t BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(obj_t BgL_argsz00_114,
		bool_t BgL_argszd2safezd2_115, obj_t BgL_locz00_116, obj_t BgL_kontz00_117,
		obj_t BgL_inpushexitz00_118)
	{
		{	/* Cgen/cgen.scm 957 */
			{	/* Cgen/cgen.scm 958 */
				BgL_localz00_bglt BgL_g1427z00_2265;

				{	/* Cgen/cgen.scm 960 */
					BgL_localz00_bglt BgL_res2683z00_3862;

					{	/* Cgen/cgen.scm 960 */
						obj_t BgL_idz00_3855;
						BgL_typez00_bglt BgL_typez00_3856;

						BgL_idz00_3855 = CNST_TABLE_REF(((long) 3));
						BgL_typez00_3856 =
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
						{	/* Cgen/cgen.scm 940 */
							BgL_localz00_bglt BgL_localz00_3857;

							BgL_localz00_3857 =
								BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_3855,
								BgL_typez00_3856);
							{	/* Cgen/cgen.scm 941 */
								bool_t BgL_test3036z00_6093;

								{	/* Cgen/cgen.scm 941 */
									obj_t BgL_tmpz00_6094;

									BgL_tmpz00_6094 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_localz00_3857)))->
										BgL_namez00);
									BgL_test3036z00_6093 = STRINGP(BgL_tmpz00_6094);
								}
								if (BgL_test3036z00_6093)
									{	/* Cgen/cgen.scm 941 */
										BFALSE;
									}
								else
									{	/* Cgen/cgen.scm 941 */
										BGl_errorz00zz__errorz00(BGl_string2889z00zzcgen_cgenz00,
											BGl_string2890z00zzcgen_cgenz00,
											((obj_t) BgL_localz00_3857));
									}
							}
							BgL_res2683z00_3862 = BgL_localz00_3857;
						}
					}
					BgL_g1427z00_2265 = BgL_res2683z00_3862;
				}
				{
					obj_t BgL_oldzd2actualszd2_2269;
					obj_t BgL_newzd2actualszd2_2270;
					BgL_localz00_bglt BgL_auxz00_2271;
					obj_t BgL_auxsz00_2272;
					obj_t BgL_expsz00_2273;

					BgL_oldzd2actualszd2_2269 = BgL_argsz00_114;
					BgL_newzd2actualszd2_2270 = BNIL;
					BgL_auxz00_2271 = BgL_g1427z00_2265;
					BgL_auxsz00_2272 = BNIL;
					BgL_expsz00_2273 = BNIL;
				BgL_zc3z04anonymousza31918ze3z87_2274:
					if (NULLP(BgL_oldzd2actualszd2_2269))
						{	/* Cgen/cgen.scm 963 */
							if (NULLP(BgL_auxsz00_2272))
								{	/* Cgen/cgen.scm 965 */
									obj_t BgL_arg1921z00_2277;

									BgL_arg1921z00_2277 =
										bgl_reverse_bang(BgL_newzd2actualszd2_2270);
									return
										PROCEDURE_L_ENTRY(BgL_kontz00_117) (BgL_kontz00_117,
										BgL_arg1921z00_2277);
								}
							else
								{	/* Cgen/cgen.scm 966 */
									BgL_cblockz00_bglt BgL_new1431z00_2278;

									{	/* Cgen/cgen.scm 966 */
										BgL_cblockz00_bglt BgL_new1430z00_2295;

										BgL_new1430z00_2295 =
											((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cblockz00_bgl))));
										{	/* Cgen/cgen.scm 966 */
											long BgL_arg1933z00_2296;

											{	/* Cgen/cgen.scm 966 */
												long BgL_res2686z00_3866;

												BgL_res2686z00_3866 =
													BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
												BgL_arg1933z00_2296 = BgL_res2686z00_3866;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1430z00_2295),
												BgL_arg1933z00_2296);
										}
										BgL_new1431z00_2278 = BgL_new1430z00_2295;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1431z00_2278)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									{
										BgL_copz00_bglt BgL_auxz00_6115;

										{	/* Cgen/cgen.scm 967 */
											BgL_csequencez00_bglt BgL_new1433z00_2279;

											{	/* Cgen/cgen.scm 968 */
												BgL_csequencez00_bglt BgL_new1432z00_2293;

												BgL_new1432z00_2293 =
													((BgL_csequencez00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_csequencez00_bgl))));
												{	/* Cgen/cgen.scm 968 */
													long BgL_arg1932z00_2294;

													{	/* Cgen/cgen.scm 968 */
														long BgL_res2687z00_3870;

														{	/* Cgen/cgen.scm 968 */
															obj_t BgL_classz00_3869;

															BgL_classz00_3869 = BGl_csequencez00zzcgen_copz00;
															BgL_res2687z00_3870 =
																BGL_CLASS_INDEX(BgL_classz00_3869);
														}
														BgL_arg1932z00_2294 = BgL_res2687z00_3870;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1432z00_2293),
														BgL_arg1932z00_2294);
												}
												BgL_new1433z00_2279 = BgL_new1432z00_2293;
											}
											((((BgL_copz00_bglt) COBJECT(
															((BgL_copz00_bglt) BgL_new1433z00_2279)))->
													BgL_locz00) = ((obj_t) BgL_locz00_116), BUNSPEC);
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1433z00_2279))->
													BgL_czd2expzf3z21) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
											{
												obj_t BgL_auxz00_6123;

												{	/* Cgen/cgen.scm 970 */
													BgL_localzd2varzd2_bglt BgL_arg1923z00_2280;
													BgL_csequencez00_bglt BgL_arg1924z00_2281;
													obj_t BgL_arg1925z00_2282;

													{	/* Cgen/cgen.scm 970 */
														BgL_localzd2varzd2_bglt BgL_new1435z00_2286;

														{	/* Cgen/cgen.scm 972 */
															BgL_localzd2varzd2_bglt BgL_new1434z00_2287;

															BgL_new1434z00_2287 =
																((BgL_localzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzd2varzd2_bgl))));
															{	/* Cgen/cgen.scm 972 */
																long BgL_arg1929z00_2288;

																{	/* Cgen/cgen.scm 972 */
																	long BgL_res2688z00_3874;

																	{	/* Cgen/cgen.scm 972 */
																		obj_t BgL_classz00_3873;

																		BgL_classz00_3873 =
																			BGl_localzd2varzd2zzcgen_copz00;
																		BgL_res2688z00_3874 =
																			BGL_CLASS_INDEX(BgL_classz00_3873);
																	}
																	BgL_arg1929z00_2288 = BgL_res2688z00_3874;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1434z00_2287),
																	BgL_arg1929z00_2288);
															}
															BgL_new1435z00_2286 = BgL_new1434z00_2287;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1435z00_2286)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_116), BUNSPEC);
														((((BgL_localzd2varzd2_bglt)
																	COBJECT(BgL_new1435z00_2286))->BgL_varsz00) =
															((obj_t) BgL_auxsz00_2272), BUNSPEC);
														BgL_arg1923z00_2280 = BgL_new1435z00_2286;
													}
													{	/* Cgen/cgen.scm 973 */
														BgL_csequencez00_bglt BgL_new1437z00_2289;

														{	/* Cgen/cgen.scm 973 */
															BgL_csequencez00_bglt BgL_new1436z00_2290;

															BgL_new1436z00_2290 =
																((BgL_csequencez00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_csequencez00_bgl))));
															{	/* Cgen/cgen.scm 973 */
																long BgL_arg1930z00_2291;

																{	/* Cgen/cgen.scm 973 */
																	long BgL_res2689z00_3878;

																	{	/* Cgen/cgen.scm 973 */
																		obj_t BgL_classz00_3877;

																		BgL_classz00_3877 =
																			BGl_csequencez00zzcgen_copz00;
																		BgL_res2689z00_3878 =
																			BGL_CLASS_INDEX(BgL_classz00_3877);
																	}
																	BgL_arg1930z00_2291 = BgL_res2689z00_3878;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1436z00_2290),
																	BgL_arg1930z00_2291);
															}
															BgL_new1437z00_2289 = BgL_new1436z00_2290;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1437z00_2289)))->
																BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
														((((BgL_csequencez00_bglt)
																	COBJECT(BgL_new1437z00_2289))->
																BgL_czd2expzf3z21) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
														((((BgL_csequencez00_bglt)
																	COBJECT(BgL_new1437z00_2289))->BgL_copsz00) =
															((obj_t) BgL_expsz00_2273), BUNSPEC);
														BgL_arg1924z00_2281 = BgL_new1437z00_2289;
													}
													{	/* Cgen/cgen.scm 974 */
														obj_t BgL_arg1931z00_2292;

														BgL_arg1931z00_2292 =
															bgl_reverse_bang(BgL_newzd2actualszd2_2270);
														BgL_arg1925z00_2282 =
															PROCEDURE_L_ENTRY(BgL_kontz00_117)
															(BgL_kontz00_117, BgL_arg1931z00_2292);
													}
													{	/* Cgen/cgen.scm 969 */
														obj_t BgL_list1926z00_2283;

														{	/* Cgen/cgen.scm 969 */
															obj_t BgL_arg1927z00_2284;

															{	/* Cgen/cgen.scm 969 */
																obj_t BgL_arg1928z00_2285;

																BgL_arg1928z00_2285 =
																	MAKE_YOUNG_PAIR(BgL_arg1925z00_2282, BNIL);
																BgL_arg1927z00_2284 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1924z00_2281),
																	BgL_arg1928z00_2285);
															}
															BgL_list1926z00_2283 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1923z00_2280),
																BgL_arg1927z00_2284);
														}
														BgL_auxz00_6123 = BgL_list1926z00_2283;
												}}
												((((BgL_csequencez00_bglt)
															COBJECT(BgL_new1433z00_2279))->BgL_copsz00) =
													((obj_t) BgL_auxz00_6123), BUNSPEC);
											}
											BgL_auxz00_6115 = ((BgL_copz00_bglt) BgL_new1433z00_2279);
										}
										((((BgL_cblockz00_bglt) COBJECT(BgL_new1431z00_2278))->
												BgL_bodyz00) =
											((BgL_copz00_bglt) BgL_auxz00_6115), BUNSPEC);
									}
									return ((obj_t) BgL_new1431z00_2278);
								}
						}
					else
						{	/* Cgen/cgen.scm 975 */
							BgL_copz00_bglt BgL_copz00_2297;

							{	/* Cgen/cgen.scm 975 */
								BgL_setqz00_bglt BgL_arg1962z00_2335;

								{	/* Cgen/cgen.scm 975 */
									obj_t BgL_arg1963z00_2336;

									BgL_arg1963z00_2336 =
										CAR(((obj_t) BgL_oldzd2actualszd2_2269));
									BgL_arg1962z00_2335 =
										BGl_nodezd2setqzd2zzcgen_cgenz00(
										((BgL_variablez00_bglt) BgL_auxz00_2271),
										((BgL_nodez00_bglt) BgL_arg1963z00_2336));
								}
								BgL_copz00_2297 =
									BGl_nodezd2ze3copz31zzcgen_cgenz00(
									((BgL_nodez00_bglt) BgL_arg1962z00_2335),
									BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
									CBOOL(BgL_inpushexitz00_118));
							}
							{	/* Cgen/cgen.scm 977 */
								bool_t BgL_test3039z00_6161;

								{	/* Cgen/cgen.scm 977 */
									bool_t BgL_test3040z00_6162;

									{	/* Cgen/cgen.scm 977 */
										bool_t BgL_res2691z00_3883;

										BgL_res2691z00_3883 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_copz00_2297), BGl_csetqz00zzcgen_copz00);
										BgL_test3040z00_6162 = BgL_res2691z00_3883;
									}
									if (BgL_test3040z00_6162)
										{	/* Cgen/cgen.scm 977 */
											if (
												(((obj_t)
														(((BgL_varcz00_bglt) COBJECT(
																	(((BgL_csetqz00_bglt) COBJECT(
																				((BgL_csetqz00_bglt)
																					BgL_copz00_2297)))->BgL_varz00)))->
															BgL_variablez00)) == ((obj_t) BgL_auxz00_2271)))
												{	/* Cgen/cgen.scm 978 */
													if (BgL_argszd2safezd2_115)
														{	/* Cgen/cgen.scm 979 */
															BgL_test3039z00_6161 = BgL_argszd2safezd2_115;
														}
													else
														{	/* Cgen/cgen.scm 980 */
															bool_t BgL__ortest_1439z00_2328;

															{	/* Cgen/cgen.scm 980 */
																BgL_copz00_bglt BgL_arg1959z00_2332;

																BgL_arg1959z00_2332 =
																	(((BgL_csetqz00_bglt) COBJECT(
																			((BgL_csetqz00_bglt) BgL_copz00_2297)))->
																	BgL_valuez00);
																{	/* Cgen/cgen.scm 980 */
																	bool_t BgL_res2692z00_3887;

																	BgL_res2692z00_3887 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_arg1959z00_2332),
																		BGl_catomz00zzcgen_copz00);
																	BgL__ortest_1439z00_2328 =
																		BgL_res2692z00_3887;
																}
															}
															if (BgL__ortest_1439z00_2328)
																{	/* Cgen/cgen.scm 980 */
																	BgL_test3039z00_6161 =
																		BgL__ortest_1439z00_2328;
																}
															else
																{	/* Cgen/cgen.scm 981 */
																	bool_t BgL__ortest_1440z00_2329;

																	{	/* Cgen/cgen.scm 981 */
																		BgL_copz00_bglt BgL_arg1958z00_2331;

																		BgL_arg1958z00_2331 =
																			(((BgL_csetqz00_bglt) COBJECT(
																					((BgL_csetqz00_bglt)
																						BgL_copz00_2297)))->BgL_valuez00);
																		{	/* Cgen/cgen.scm 981 */
																			bool_t BgL_res2693z00_3889;

																			BgL_res2693z00_3889 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_arg1958z00_2331),
																				BGl_varcz00zzcgen_copz00);
																			BgL__ortest_1440z00_2329 =
																				BgL_res2693z00_3889;
																		}
																	}
																	if (BgL__ortest_1440z00_2329)
																		{	/* Cgen/cgen.scm 981 */
																			BgL_test3039z00_6161 =
																				BgL__ortest_1440z00_2329;
																		}
																	else
																		{	/* Cgen/cgen.scm 982 */
																			BgL_copz00_bglt BgL_arg1957z00_2330;

																			BgL_arg1957z00_2330 =
																				(((BgL_csetqz00_bglt) COBJECT(
																						((BgL_csetqz00_bglt)
																							BgL_copz00_2297)))->BgL_valuez00);
																			{	/* Cgen/cgen.scm 982 */
																				bool_t BgL_res2694z00_3891;

																				BgL_res2694z00_3891 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_arg1957z00_2330),
																					BGl_cpragmaz00zzcgen_copz00);
																				BgL_test3039z00_6161 =
																					BgL_res2694z00_3891;
																			}
																		}
																}
														}
												}
											else
												{	/* Cgen/cgen.scm 978 */
													BgL_test3039z00_6161 = ((bool_t) 0);
												}
										}
									else
										{	/* Cgen/cgen.scm 977 */
											BgL_test3039z00_6161 = ((bool_t) 0);
										}
								}
								if (BgL_test3039z00_6161)
									{	/* Cgen/cgen.scm 983 */
										obj_t BgL_arg1944z00_2311;
										obj_t BgL_arg1945z00_2312;

										BgL_arg1944z00_2311 =
											CDR(((obj_t) BgL_oldzd2actualszd2_2269));
										{	/* Cgen/cgen.scm 984 */
											BgL_copz00_bglt BgL_arg1946z00_2313;

											BgL_arg1946z00_2313 =
												(((BgL_csetqz00_bglt) COBJECT(
														((BgL_csetqz00_bglt) BgL_copz00_2297)))->
												BgL_valuez00);
											BgL_arg1945z00_2312 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1946z00_2313),
												BgL_newzd2actualszd2_2270);
										}
										{
											obj_t BgL_newzd2actualszd2_6194;
											obj_t BgL_oldzd2actualszd2_6193;

											BgL_oldzd2actualszd2_6193 = BgL_arg1944z00_2311;
											BgL_newzd2actualszd2_6194 = BgL_arg1945z00_2312;
											BgL_newzd2actualszd2_2270 = BgL_newzd2actualszd2_6194;
											BgL_oldzd2actualszd2_2269 = BgL_oldzd2actualszd2_6193;
											goto BgL_zc3z04anonymousza31918ze3z87_2274;
										}
									}
								else
									{	/* Cgen/cgen.scm 977 */
										{	/* Cgen/cgen.scm 989 */
											BgL_typez00_bglt BgL_arg1947z00_2314;

											{	/* Cgen/cgen.scm 989 */
												obj_t BgL_arg1948z00_2315;

												BgL_arg1948z00_2315 =
													CAR(((obj_t) BgL_oldzd2actualszd2_2269));
												BgL_arg1947z00_2314 =
													BGl_getzd2typezd2zztype_typeofz00(
													((BgL_nodez00_bglt) BgL_arg1948z00_2315),
													((bool_t) 0));
											}
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_auxz00_2271)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg1947z00_2314), BUNSPEC);
										}
										{	/* Cgen/cgen.scm 990 */
											obj_t BgL_arg1949z00_2316;
											obj_t BgL_arg1951z00_2317;
											BgL_localz00_bglt BgL_arg1952z00_2318;
											obj_t BgL_arg1953z00_2319;
											obj_t BgL_arg1954z00_2320;

											BgL_arg1949z00_2316 =
												CDR(((obj_t) BgL_oldzd2actualszd2_2269));
											{	/* Cgen/cgen.scm 991 */
												BgL_varcz00_bglt BgL_arg1955z00_2321;

												{	/* Cgen/cgen.scm 991 */
													BgL_varcz00_bglt BgL_new1442z00_2322;

													{	/* Cgen/cgen.scm 992 */
														BgL_varcz00_bglt BgL_new1441z00_2323;

														BgL_new1441z00_2323 =
															((BgL_varcz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varcz00_bgl))));
														{	/* Cgen/cgen.scm 992 */
															long BgL_arg1956z00_2324;

															{	/* Cgen/cgen.scm 992 */
																long BgL_res2695z00_3899;

																BgL_res2695z00_3899 =
																	BGL_CLASS_INDEX(BGl_varcz00zzcgen_copz00);
																BgL_arg1956z00_2324 = BgL_res2695z00_3899;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1441z00_2323),
																BgL_arg1956z00_2324);
														}
														BgL_new1442z00_2322 = BgL_new1441z00_2323;
													}
													((((BgL_copz00_bglt) COBJECT(
																	((BgL_copz00_bglt) BgL_new1442z00_2322)))->
															BgL_locz00) = ((obj_t) BgL_locz00_116), BUNSPEC);
													((((BgL_varcz00_bglt) COBJECT(BgL_new1442z00_2322))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_auxz00_2271)), BUNSPEC);
													BgL_arg1955z00_2321 = BgL_new1442z00_2322;
												}
												BgL_arg1951z00_2317 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_arg1955z00_2321),
													BgL_newzd2actualszd2_2270);
											}
											{	/* Cgen/cgen.scm 995 */
												BgL_localz00_bglt BgL_res2696z00_3909;

												{	/* Cgen/cgen.scm 995 */
													obj_t BgL_idz00_3902;
													BgL_typez00_bglt BgL_typez00_3903;

													BgL_idz00_3902 = CNST_TABLE_REF(((long) 3));
													BgL_typez00_3903 =
														((BgL_typez00_bglt)
														BGl_za2objza2z00zztype_cachez00);
													{	/* Cgen/cgen.scm 940 */
														BgL_localz00_bglt BgL_localz00_3904;

														BgL_localz00_3904 =
															BGl_makezd2localzd2svarz00zzast_localz00
															(BgL_idz00_3902, BgL_typez00_3903);
														{	/* Cgen/cgen.scm 941 */
															bool_t BgL_test3045z00_6216;

															{	/* Cgen/cgen.scm 941 */
																obj_t BgL_tmpz00_6217;

																BgL_tmpz00_6217 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_localz00_3904)))->BgL_namez00);
																BgL_test3045z00_6216 = STRINGP(BgL_tmpz00_6217);
															}
															if (BgL_test3045z00_6216)
																{	/* Cgen/cgen.scm 941 */
																	BFALSE;
																}
															else
																{	/* Cgen/cgen.scm 941 */
																	BGl_errorz00zz__errorz00
																		(BGl_string2889z00zzcgen_cgenz00,
																		BGl_string2890z00zzcgen_cgenz00,
																		((obj_t) BgL_localz00_3904));
																}
														}
														BgL_res2696z00_3909 = BgL_localz00_3904;
													}
												}
												BgL_arg1952z00_2318 = BgL_res2696z00_3909;
											}
											BgL_arg1953z00_2319 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_auxz00_2271), BgL_auxsz00_2272);
											BgL_arg1954z00_2320 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_copz00_2297), BgL_expsz00_2273);
											{
												obj_t BgL_expsz00_6231;
												obj_t BgL_auxsz00_6230;
												BgL_localz00_bglt BgL_auxz00_6229;
												obj_t BgL_newzd2actualszd2_6228;
												obj_t BgL_oldzd2actualszd2_6227;

												BgL_oldzd2actualszd2_6227 = BgL_arg1949z00_2316;
												BgL_newzd2actualszd2_6228 = BgL_arg1951z00_2317;
												BgL_auxz00_6229 = BgL_arg1952z00_2318;
												BgL_auxsz00_6230 = BgL_arg1953z00_2319;
												BgL_expsz00_6231 = BgL_arg1954z00_2320;
												BgL_expsz00_2273 = BgL_expsz00_6231;
												BgL_auxsz00_2272 = BgL_auxsz00_6230;
												BgL_auxz00_2271 = BgL_auxz00_6229;
												BgL_newzd2actualszd2_2270 = BgL_newzd2actualszd2_6228;
												BgL_oldzd2actualszd2_2269 = BgL_oldzd2actualszd2_6227;
												goto BgL_zc3z04anonymousza31918ze3z87_2274;
											}
										}
									}
							}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			{	/* Cgen/cgen.scm 45 */
				obj_t BgL_arg1968z00_2342;
				obj_t BgL_arg1969z00_2343;

				{	/* Cgen/cgen.scm 45 */
					obj_t BgL_v1719z00_2369;

					BgL_v1719z00_2369 = create_vector(((long) 2));
					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_arg1981z00_2370;

						BgL_arg1981z00_2370 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2892z00zzcgen_cgenz00,
							BGl_proc2891z00zzcgen_cgenz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1719z00_2369, ((long) 0), BgL_arg1981z00_2370);
					}
					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_arg1986z00_2380;

						BgL_arg1986z00_2380 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2894z00zzcgen_cgenz00,
							BGl_proc2893z00zzcgen_cgenz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1719z00_2369, ((long) 1), BgL_arg1986z00_2380);
					}
					BgL_arg1968z00_2342 = BgL_v1719z00_2369;
				}
				{	/* Cgen/cgen.scm 45 */
					obj_t BgL_v1720z00_2390;

					BgL_v1720z00_2390 = create_vector(((long) 0));
					BgL_arg1969z00_2343 = BgL_v1720z00_2390;
				}
				return (BGl_retblockzf2gotozf2zzcgen_cgenz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 8)), BGl_retblockz00zzast_nodez00,
						((long) 22797), BGl_proc2898z00zzcgen_cgenz00,
						BGl_proc2897z00zzcgen_cgenz00, BFALSE,
						BGl_proc2896z00zzcgen_cgenz00, BGl_proc2895z00zzcgen_cgenz00,
						BgL_arg1968z00_2342, BgL_arg1969z00_2343), BUNSPEC);
		}}

	}



/* &lambda1976 */
	BgL_retblockz00_bglt BGl_z62lambda1976z62zzcgen_cgenz00(obj_t BgL_envz00_4617,
		obj_t BgL_o1143z00_4618)
	{
		{	/* Cgen/cgen.scm 45 */
			{	/* Cgen/cgen.scm 45 */
				long BgL_arg1977z00_4868;

				{	/* Cgen/cgen.scm 45 */
					obj_t BgL_arg1979z00_4869;

					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_arg1980z00_4870;

						{	/* Cgen/cgen.scm 45 */
							long BgL_arg1816z00_4871;

							{	/* Cgen/cgen.scm 45 */
								long BgL_arg1817z00_4872;

								{	/* Cgen/cgen.scm 45 */
									long BgL_res2700z00_4873;

									BgL_res2700z00_4873 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_retblockz00_bglt) BgL_o1143z00_4618)));
									BgL_arg1817z00_4872 = BgL_res2700z00_4873;
								}
								BgL_arg1816z00_4871 = (BgL_arg1817z00_4872 - OBJECT_TYPE);
							}
							BgL_arg1980z00_4870 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4871);
						}
						BgL_arg1979z00_4869 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1980z00_4870);
					}
					{	/* Cgen/cgen.scm 45 */
						long BgL_res2702z00_4874;

						{	/* Cgen/cgen.scm 45 */
							obj_t BgL_tmpz00_6251;

							BgL_tmpz00_6251 = ((obj_t) BgL_arg1979z00_4869);
							BgL_res2702z00_4874 = BGL_CLASS_INDEX(BgL_tmpz00_6251);
						}
						BgL_arg1977z00_4868 = BgL_res2702z00_4874;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_retblockz00_bglt) BgL_o1143z00_4618)), BgL_arg1977z00_4868);
			}
			{	/* Cgen/cgen.scm 45 */
				BgL_objectz00_bglt BgL_tmpz00_6257;

				BgL_tmpz00_6257 =
					((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_o1143z00_4618));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6257, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_o1143z00_4618));
			return
				((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1143z00_4618));
		}

	}



/* &<@anonymous:1975> */
	obj_t BGl_z62zc3z04anonymousza31975ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4619,
		obj_t BgL_new1142z00_4620)
	{
		{	/* Cgen/cgen.scm 45 */
			{
				BgL_retblockz00_bglt BgL_auxz00_6265;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_retblockz00_bglt) BgL_new1142z00_4620))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_6269;

					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_classz00_4876;

						BgL_classz00_4876 = BGl_typez00zztype_typez00;
						{	/* Cgen/cgen.scm 45 */
							obj_t BgL__ortest_1106z00_4877;

							BgL__ortest_1106z00_4877 = BGL_CLASS_NIL(BgL_classz00_4876);
							if (CBOOL(BgL__ortest_1106z00_4877))
								{	/* Cgen/cgen.scm 45 */
									BgL_auxz00_6269 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_4877);
								}
							else
								{	/* Cgen/cgen.scm 45 */
									BgL_auxz00_6269 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4876));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_retblockz00_bglt) BgL_new1142z00_4620))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_6269), BUNSPEC);
				}
				{
					BgL_nodez00_bglt BgL_auxz00_6279;

					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_classz00_4878;

						BgL_classz00_4878 = BGl_nodez00zzast_nodez00;
						{	/* Cgen/cgen.scm 45 */
							obj_t BgL__ortest_1106z00_4879;

							BgL__ortest_1106z00_4879 = BGL_CLASS_NIL(BgL_classz00_4878);
							if (CBOOL(BgL__ortest_1106z00_4879))
								{	/* Cgen/cgen.scm 45 */
									BgL_auxz00_6279 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_4879);
								}
							else
								{	/* Cgen/cgen.scm 45 */
									BgL_auxz00_6279 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4878));
								}
						}
					}
					((((BgL_retblockz00_bglt) COBJECT(
									((BgL_retblockz00_bglt)
										((BgL_retblockz00_bglt) BgL_new1142z00_4620))))->
							BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_6279), BUNSPEC);
				}
				{
					BgL_retblockzf2gotozf2_bglt BgL_auxz00_6289;

					{
						obj_t BgL_auxz00_6290;

						{	/* Cgen/cgen.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_6291;

							BgL_tmpz00_6291 =
								((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt) BgL_new1142z00_4620));
							BgL_auxz00_6290 = BGL_OBJECT_WIDENING(BgL_tmpz00_6291);
						}
						BgL_auxz00_6289 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6290);
					}
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6289))->
							BgL_localz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_retblockzf2gotozf2_bglt BgL_auxz00_6297;

					{
						obj_t BgL_auxz00_6298;

						{	/* Cgen/cgen.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_6299;

							BgL_tmpz00_6299 =
								((BgL_objectz00_bglt)
								((BgL_retblockz00_bglt) BgL_new1142z00_4620));
							BgL_auxz00_6298 = BGL_OBJECT_WIDENING(BgL_tmpz00_6299);
						}
						BgL_auxz00_6297 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6298);
					}
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6297))->
							BgL_labelz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6265 = ((BgL_retblockz00_bglt) BgL_new1142z00_4620);
				return ((obj_t) BgL_auxz00_6265);
			}
		}

	}



/* &lambda1973 */
	BgL_retblockz00_bglt BGl_z62lambda1973z62zzcgen_cgenz00(obj_t BgL_envz00_4621,
		obj_t BgL_o1139z00_4622)
	{
		{	/* Cgen/cgen.scm 45 */
			{	/* Cgen/cgen.scm 45 */
				BgL_retblockzf2gotozf2_bglt BgL_wide1141z00_4881;

				BgL_wide1141z00_4881 =
					((BgL_retblockzf2gotozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_retblockzf2gotozf2_bgl))));
				{	/* Cgen/cgen.scm 45 */
					obj_t BgL_auxz00_6312;
					BgL_objectz00_bglt BgL_tmpz00_6308;

					BgL_auxz00_6312 = ((obj_t) BgL_wide1141z00_4881);
					BgL_tmpz00_6308 =
						((BgL_objectz00_bglt)
						((BgL_retblockz00_bglt)
							((BgL_retblockz00_bglt) BgL_o1139z00_4622)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6308, BgL_auxz00_6312);
				}
				((BgL_objectz00_bglt)
					((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1139z00_4622)));
				{	/* Cgen/cgen.scm 45 */
					long BgL_arg1974z00_4882;

					{	/* Cgen/cgen.scm 45 */
						long BgL_res2699z00_4883;

						BgL_res2699z00_4883 =
							BGL_CLASS_INDEX(BGl_retblockzf2gotozf2zzcgen_cgenz00);
						BgL_arg1974z00_4882 = BgL_res2699z00_4883;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_retblockz00_bglt)
								((BgL_retblockz00_bglt) BgL_o1139z00_4622))),
						BgL_arg1974z00_4882);
				}
				return
					((BgL_retblockz00_bglt)
					((BgL_retblockz00_bglt) ((BgL_retblockz00_bglt) BgL_o1139z00_4622)));
			}
		}

	}



/* &lambda1970 */
	BgL_retblockz00_bglt BGl_z62lambda1970z62zzcgen_cgenz00(obj_t BgL_envz00_4623,
		obj_t BgL_loc1134z00_4624, obj_t BgL_type1135z00_4625,
		obj_t BgL_body1136z00_4626, obj_t BgL_local1137z00_4627,
		obj_t BgL_label1138z00_4628)
	{
		{	/* Cgen/cgen.scm 45 */
			{	/* Cgen/cgen.scm 45 */
				BgL_retblockz00_bglt BgL_new1446z00_4886;

				{	/* Cgen/cgen.scm 45 */
					BgL_retblockz00_bglt BgL_tmp1444z00_4887;
					BgL_retblockzf2gotozf2_bglt BgL_wide1445z00_4888;

					{
						BgL_retblockz00_bglt BgL_auxz00_6326;

						{	/* Cgen/cgen.scm 45 */
							BgL_retblockz00_bglt BgL_new1443z00_4889;

							BgL_new1443z00_4889 =
								((BgL_retblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_retblockz00_bgl))));
							{	/* Cgen/cgen.scm 45 */
								long BgL_arg1972z00_4890;

								{	/* Cgen/cgen.scm 45 */
									long BgL_res2697z00_4891;

									BgL_res2697z00_4891 =
										BGL_CLASS_INDEX(BGl_retblockz00zzast_nodez00);
									BgL_arg1972z00_4890 = BgL_res2697z00_4891;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1443z00_4889),
									BgL_arg1972z00_4890);
							}
							{	/* Cgen/cgen.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_6331;

								BgL_tmpz00_6331 = ((BgL_objectz00_bglt) BgL_new1443z00_4889);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6331, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1443z00_4889);
							BgL_auxz00_6326 = BgL_new1443z00_4889;
						}
						BgL_tmp1444z00_4887 = ((BgL_retblockz00_bglt) BgL_auxz00_6326);
					}
					BgL_wide1445z00_4888 =
						((BgL_retblockzf2gotozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_retblockzf2gotozf2_bgl))));
					{	/* Cgen/cgen.scm 45 */
						obj_t BgL_auxz00_6339;
						BgL_objectz00_bglt BgL_tmpz00_6337;

						BgL_auxz00_6339 = ((obj_t) BgL_wide1445z00_4888);
						BgL_tmpz00_6337 = ((BgL_objectz00_bglt) BgL_tmp1444z00_4887);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6337, BgL_auxz00_6339);
					}
					((BgL_objectz00_bglt) BgL_tmp1444z00_4887);
					{	/* Cgen/cgen.scm 45 */
						long BgL_arg1971z00_4892;

						{	/* Cgen/cgen.scm 45 */
							long BgL_res2698z00_4893;

							BgL_res2698z00_4893 =
								BGL_CLASS_INDEX(BGl_retblockzf2gotozf2zzcgen_cgenz00);
							BgL_arg1971z00_4892 = BgL_res2698z00_4893;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1444z00_4887), BgL_arg1971z00_4892);
					}
					BgL_new1446z00_4886 = ((BgL_retblockz00_bglt) BgL_tmp1444z00_4887);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1446z00_4886)))->BgL_locz00) =
					((obj_t) BgL_loc1134z00_4624), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1446z00_4886)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1135z00_4625)),
					BUNSPEC);
				((((BgL_retblockz00_bglt) COBJECT(((BgL_retblockz00_bglt)
									BgL_new1446z00_4886)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_body1136z00_4626)),
					BUNSPEC);
				{
					BgL_retblockzf2gotozf2_bglt BgL_auxz00_6355;

					{
						obj_t BgL_auxz00_6356;

						{	/* Cgen/cgen.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_6357;

							BgL_tmpz00_6357 = ((BgL_objectz00_bglt) BgL_new1446z00_4886);
							BgL_auxz00_6356 = BGL_OBJECT_WIDENING(BgL_tmpz00_6357);
						}
						BgL_auxz00_6355 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6356);
					}
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6355))->
							BgL_localz00) = ((obj_t) BgL_local1137z00_4627), BUNSPEC);
				}
				{
					BgL_retblockzf2gotozf2_bglt BgL_auxz00_6362;

					{
						obj_t BgL_auxz00_6363;

						{	/* Cgen/cgen.scm 45 */
							BgL_objectz00_bglt BgL_tmpz00_6364;

							BgL_tmpz00_6364 = ((BgL_objectz00_bglt) BgL_new1446z00_4886);
							BgL_auxz00_6363 = BGL_OBJECT_WIDENING(BgL_tmpz00_6364);
						}
						BgL_auxz00_6362 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6363);
					}
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6362))->
							BgL_labelz00) = ((obj_t) BgL_label1138z00_4628), BUNSPEC);
				}
				return BgL_new1446z00_4886;
			}
		}

	}



/* &lambda1990 */
	obj_t BGl_z62lambda1990z62zzcgen_cgenz00(obj_t BgL_envz00_4629,
		obj_t BgL_oz00_4630, obj_t BgL_vz00_4631)
	{
		{	/* Cgen/cgen.scm 45 */
			{
				BgL_retblockzf2gotozf2_bglt BgL_auxz00_6369;

				{
					obj_t BgL_auxz00_6370;

					{	/* Cgen/cgen.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_6371;

						BgL_tmpz00_6371 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_4630));
						BgL_auxz00_6370 = BGL_OBJECT_WIDENING(BgL_tmpz00_6371);
					}
					BgL_auxz00_6369 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6370);
				}
				return
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6369))->
						BgL_labelz00) = ((obj_t) BgL_vz00_4631), BUNSPEC);
			}
		}

	}



/* &lambda1989 */
	obj_t BGl_z62lambda1989z62zzcgen_cgenz00(obj_t BgL_envz00_4632,
		obj_t BgL_oz00_4633)
	{
		{	/* Cgen/cgen.scm 45 */
			{
				BgL_retblockzf2gotozf2_bglt BgL_auxz00_6377;

				{
					obj_t BgL_auxz00_6378;

					{	/* Cgen/cgen.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_6379;

						BgL_tmpz00_6379 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_4633));
						BgL_auxz00_6378 = BGL_OBJECT_WIDENING(BgL_tmpz00_6379);
					}
					BgL_auxz00_6377 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6378);
				}
				return
					(((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6377))->
					BgL_labelz00);
			}
		}

	}



/* &lambda1985 */
	obj_t BGl_z62lambda1985z62zzcgen_cgenz00(obj_t BgL_envz00_4634,
		obj_t BgL_oz00_4635, obj_t BgL_vz00_4636)
	{
		{	/* Cgen/cgen.scm 45 */
			{
				BgL_retblockzf2gotozf2_bglt BgL_auxz00_6385;

				{
					obj_t BgL_auxz00_6386;

					{	/* Cgen/cgen.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_6387;

						BgL_tmpz00_6387 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_4635));
						BgL_auxz00_6386 = BGL_OBJECT_WIDENING(BgL_tmpz00_6387);
					}
					BgL_auxz00_6385 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6386);
				}
				return
					((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6385))->
						BgL_localz00) = ((obj_t) BgL_vz00_4636), BUNSPEC);
			}
		}

	}



/* &lambda1984 */
	obj_t BGl_z62lambda1984z62zzcgen_cgenz00(obj_t BgL_envz00_4637,
		obj_t BgL_oz00_4638)
	{
		{	/* Cgen/cgen.scm 45 */
			{
				BgL_retblockzf2gotozf2_bglt BgL_auxz00_6393;

				{
					obj_t BgL_auxz00_6394;

					{	/* Cgen/cgen.scm 45 */
						BgL_objectz00_bglt BgL_tmpz00_6395;

						BgL_tmpz00_6395 =
							((BgL_objectz00_bglt) ((BgL_retblockz00_bglt) BgL_oz00_4638));
						BgL_auxz00_6394 = BGL_OBJECT_WIDENING(BgL_tmpz00_6395);
					}
					BgL_auxz00_6393 = ((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6394);
				}
				return
					(((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6393))->
					BgL_localz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_proc2899z00zzcgen_cgenz00, BGl_nodez00zzast_nodez00,
				BGl_string2900z00zzcgen_cgenz00);
		}

	}



/* &node->cop1721 */
	obj_t BGl_z62nodezd2ze3cop1721z53zzcgen_cgenz00(obj_t BgL_envz00_4640,
		obj_t BgL_nodez00_4641, obj_t BgL_kontz00_4642,
		obj_t BgL_inpushexitz00_4643)
	{
		{	/* Cgen/cgen.scm 236 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 9)),
				BGl_string2901z00zzcgen_cgenz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4641)));
		}

	}



/* node->cop */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt BgL_nodez00_27,
		obj_t BgL_kontz00_28, bool_t BgL_inpushexitz00_29)
	{
		{	/* Cgen/cgen.scm 236 */
			{	/* Cgen/cgen.scm 236 */
				obj_t BgL_method1722z00_2401;

				{	/* Cgen/cgen.scm 236 */
					obj_t BgL_res2713z00_3990;

					{	/* Cgen/cgen.scm 236 */
						long BgL_objzd2classzd2numz00_3955;

						{	/* Cgen/cgen.scm 236 */
							long BgL_res2703z00_3958;

							BgL_res2703z00_3958 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_27));
							BgL_objzd2classzd2numz00_3955 = BgL_res2703z00_3958;
						}
						{	/* Cgen/cgen.scm 236 */
							obj_t BgL_arg1813z00_3956;

							BgL_arg1813z00_3956 =
								PROCEDURE_REF(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
								(int) (((long) 1)));
							{	/* Cgen/cgen.scm 236 */
								int BgL_offsetz00_3960;

								BgL_offsetz00_3960 = (int) (BgL_objzd2classzd2numz00_3955);
								{	/* Cgen/cgen.scm 236 */
									long BgL_offsetz00_3961;

									BgL_offsetz00_3961 =
										((long) (BgL_offsetz00_3960) - OBJECT_TYPE);
									{	/* Cgen/cgen.scm 236 */
										long BgL_modz00_3962;

										BgL_modz00_3962 =
											(BgL_offsetz00_3961 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cgen/cgen.scm 236 */
											long BgL_restz00_3964;

											BgL_restz00_3964 =
												(BgL_offsetz00_3961 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cgen/cgen.scm 236 */

												{	/* Cgen/cgen.scm 236 */
													obj_t BgL_bucketz00_3966;

													BgL_bucketz00_3966 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3956), BgL_modz00_3962);
													BgL_res2713z00_3990 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3966), BgL_restz00_3964);
					}}}}}}}}
					BgL_method1722z00_2401 = BgL_res2713z00_3990;
				}
				return
					((BgL_copz00_bglt)
					PROCEDURE_ENTRY(BgL_method1722z00_2401) (BgL_method1722z00_2401,
						((obj_t) BgL_nodez00_27), BgL_kontz00_28,
						BBOOL(BgL_inpushexitz00_29), BEOA));
			}
		}

	}



/* &node->cop */
	BgL_copz00_bglt BGl_z62nodezd2ze3copz53zzcgen_cgenz00(obj_t BgL_envz00_4644,
		obj_t BgL_nodez00_4645, obj_t BgL_kontz00_4646,
		obj_t BgL_inpushexitz00_4647)
	{
		{	/* Cgen/cgen.scm 236 */
			return
				BGl_nodezd2ze3copz31zzcgen_cgenz00(
				((BgL_nodez00_bglt) BgL_nodez00_4645), BgL_kontz00_4646,
				CBOOL(BgL_inpushexitz00_4647));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_literalz00zzast_nodez00,
				BGl_proc2902z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_patchz00zzast_nodez00,
				BGl_proc2904z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_genpatchidz00zzast_nodez00, BGl_proc2905z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_kwotez00zzast_nodez00,
				BGl_proc2906z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_varz00zzast_nodez00,
				BGl_proc2907z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_closurez00zzast_nodez00,
				BGl_proc2908z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2909z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_syncz00zzast_nodez00,
				BGl_proc2910z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc2911z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_privatez00zzast_nodez00,
				BGl_proc2912z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_castz00zzast_nodez00,
				BGl_proc2913z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_setqz00zzast_nodez00,
				BGl_proc2914z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2915z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_failz00zzast_nodez00,
				BGl_proc2916z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_switchz00zzast_nodez00,
				BGl_proc2917z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2918z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2919z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2920z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2921z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_retblockz00zzast_nodez00,
				BGl_proc2922z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_returnz00zzast_nodez00,
				BGl_proc2923z00zzcgen_cgenz00, BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2924z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2925z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2926z00zzcgen_cgenz00,
				BGl_string2903z00zzcgen_cgenz00);
		}

	}



/* &node->cop-box-set!1771 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2boxzd2setz121771z41zzcgen_cgenz00(obj_t
		BgL_envz00_4679, obj_t BgL_nodez00_4680, obj_t BgL_kontz00_4681,
		obj_t BgL_inpushexitz00_4682)
	{
		{	/* Cgen/cgen.scm 908 */
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_vz00_4902;

				BgL_vz00_4902 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4680)))->
								BgL_varz00)))->BgL_variablez00);
				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg2515z00_4903;

					BgL_arg2515z00_4903 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4680)))->BgL_valuez00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_zc3z04anonymousza32519ze3z87_4904;

						BgL_zc3z04anonymousza32519ze3z87_4904 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32519ze3ze5zzcgen_cgenz00,
							(int) (((long) 1)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32519ze3z87_4904,
							(int) (((long) 0)),
							((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4680)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32519ze3z87_4904,
							(int) (((long) 1)), ((obj_t) BgL_vz00_4902));
						PROCEDURE_SET(BgL_zc3z04anonymousza32519ze3z87_4904,
							(int) (((long) 2)), BgL_kontz00_4681);
						return BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_arg2515z00_4903,
							BgL_zc3z04anonymousza32519ze3z87_4904,
							CBOOL(BgL_inpushexitz00_4682));
					}
				}
			}
		}

	}



/* &<@anonymous:2519> */
	obj_t BGl_z62zc3z04anonymousza32519ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4683,
		obj_t BgL_vlz00_4687)
	{
		{	/* Cgen/cgen.scm 915 */
			{	/* Cgen/cgen.scm 915 */
				BgL_boxzd2setz12zc0_bglt BgL_i1417z00_4684;
				BgL_variablez00_bglt BgL_vz00_4685;
				obj_t BgL_kontz00_4686;

				BgL_i1417z00_4684 =
					((BgL_boxzd2setz12zc0_bglt)
					PROCEDURE_REF(BgL_envz00_4683, (int) (((long) 0))));
				BgL_vz00_4685 =
					((BgL_variablez00_bglt)
					PROCEDURE_REF(BgL_envz00_4683, (int) (((long) 1))));
				BgL_kontz00_4686 = PROCEDURE_REF(BgL_envz00_4683, (int) (((long) 2)));
				{	/* Cgen/cgen.scm 915 */
					BgL_cboxzd2setz12zc0_bglt BgL_arg2520z00_4905;

					{	/* Cgen/cgen.scm 915 */
						BgL_cboxzd2setz12zc0_bglt BgL_new1419z00_4906;

						{	/* Cgen/cgen.scm 916 */
							BgL_cboxzd2setz12zc0_bglt BgL_new1418z00_4907;

							BgL_new1418z00_4907 =
								((BgL_cboxzd2setz12zc0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_cboxzd2setz12zc0_bgl))));
							{	/* Cgen/cgen.scm 916 */
								long BgL_arg2522z00_4908;

								{	/* Cgen/cgen.scm 916 */
									long BgL_res2872z00_4909;

									BgL_res2872z00_4909 =
										BGL_CLASS_INDEX(BGl_cboxzd2setz12zc0zzcgen_copz00);
									BgL_arg2522z00_4908 = BgL_res2872z00_4909;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1418z00_4907),
									BgL_arg2522z00_4908);
							}
							BgL_new1419z00_4906 = BgL_new1418z00_4907;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1419z00_4906)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1417z00_4684)))->BgL_locz00)), BUNSPEC);
						{
							BgL_copz00_bglt BgL_auxz00_6502;

							{	/* Cgen/cgen.scm 917 */
								BgL_varcz00_bglt BgL_new1421z00_4910;

								{	/* Cgen/cgen.scm 918 */
									BgL_varcz00_bglt BgL_new1420z00_4911;

									BgL_new1420z00_4911 =
										((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varcz00_bgl))));
									{	/* Cgen/cgen.scm 918 */
										long BgL_arg2521z00_4912;

										{	/* Cgen/cgen.scm 918 */
											long BgL_res2873z00_4913;

											{	/* Cgen/cgen.scm 918 */
												obj_t BgL_classz00_4914;

												BgL_classz00_4914 = BGl_varcz00zzcgen_copz00;
												BgL_res2873z00_4913 =
													BGL_CLASS_INDEX(BgL_classz00_4914);
											}
											BgL_arg2521z00_4912 = BgL_res2873z00_4913;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1420z00_4911),
											BgL_arg2521z00_4912);
									}
									BgL_new1421z00_4910 = BgL_new1420z00_4911;
								}
								((((BgL_copz00_bglt) COBJECT(
												((BgL_copz00_bglt) BgL_new1421z00_4910)))->BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_i1417z00_4684)))->BgL_locz00)), BUNSPEC);
								((((BgL_varcz00_bglt) COBJECT(BgL_new1421z00_4910))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) BgL_vz00_4685), BUNSPEC);
								BgL_auxz00_6502 = ((BgL_copz00_bglt) BgL_new1421z00_4910);
							}
							((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1419z00_4906))->
									BgL_varz00) = ((BgL_copz00_bglt) BgL_auxz00_6502), BUNSPEC);
						}
						((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1419z00_4906))->
								BgL_valuez00) =
							((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vlz00_4687)), BUNSPEC);
						BgL_arg2520z00_4905 = BgL_new1419z00_4906;
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_4686) (BgL_kontz00_4686,
						((obj_t) BgL_arg2520z00_4905), BEOA);
				}
			}
		}

	}



/* &node->cop-box-ref1769 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2boxzd2ref1769z53zzcgen_cgenz00(obj_t
		BgL_envz00_4688, obj_t BgL_nodez00_4689, obj_t BgL_kontz00_4690,
		obj_t BgL_inpushexitz00_4691)
	{
		{	/* Cgen/cgen.scm 894 */
			{	/* Tools/trace.sch 53 */
				BgL_copz00_bglt BgL_arg2504z00_4916;

				{	/* Tools/trace.sch 53 */
					BgL_varz00_bglt BgL_arg2506z00_4917;

					BgL_arg2506z00_4917 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_4689)))->BgL_varz00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_zc3z04anonymousza32509ze3z87_4918;

						BgL_zc3z04anonymousza32509ze3z87_4918 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32509ze3ze5zzcgen_cgenz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32509ze3z87_4918,
							(int) (((long) 0)),
							((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_4689)));
						BgL_arg2504z00_4916 =
							BGl_nodezd2ze3copz31zzcgen_cgenz00(((BgL_nodez00_bglt)
								BgL_arg2506z00_4917), BgL_zc3z04anonymousza32509ze3z87_4918,
							CBOOL(BgL_inpushexitz00_4691));
				}}
				return
					((BgL_copz00_bglt)
					PROCEDURE_ENTRY(BgL_kontz00_4690) (BgL_kontz00_4690,
						((obj_t) BgL_arg2504z00_4916), BEOA));
			}
		}

	}



/* &<@anonymous:2509> */
	obj_t BGl_z62zc3z04anonymousza32509ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4692,
		obj_t BgL_vz00_4694)
	{
		{	/* Cgen/cgen.scm 900 */
			{	/* Cgen/cgen.scm 900 */
				BgL_boxzd2refzd2_bglt BgL_i1414z00_4693;

				BgL_i1414z00_4693 =
					((BgL_boxzd2refzd2_bglt)
					PROCEDURE_REF(BgL_envz00_4692, (int) (((long) 0))));
				{
					BgL_cboxzd2refzd2_bglt BgL_auxz00_6542;

					{	/* Cgen/cgen.scm 900 */
						BgL_cboxzd2refzd2_bglt BgL_new1416z00_4919;

						{	/* Cgen/cgen.scm 901 */
							BgL_cboxzd2refzd2_bglt BgL_new1415z00_4920;

							BgL_new1415z00_4920 =
								((BgL_cboxzd2refzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_cboxzd2refzd2_bgl))));
							{	/* Cgen/cgen.scm 901 */
								long BgL_arg2512z00_4921;

								{	/* Cgen/cgen.scm 901 */
									long BgL_res2871z00_4922;

									BgL_res2871z00_4922 =
										BGL_CLASS_INDEX(BGl_cboxzd2refzd2zzcgen_copz00);
									BgL_arg2512z00_4921 = BgL_res2871z00_4922;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1415z00_4920),
									BgL_arg2512z00_4921);
							}
							BgL_new1416z00_4919 = BgL_new1415z00_4920;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1416z00_4919)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1414z00_4693)))->BgL_locz00)), BUNSPEC);
						((((BgL_cboxzd2refzd2_bglt) COBJECT(BgL_new1416z00_4919))->
								BgL_varz00) =
							((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4694)), BUNSPEC);
						BgL_auxz00_6542 = BgL_new1416z00_4919;
					}
					return ((obj_t) BgL_auxz00_6542);
				}
			}
		}

	}



/* &node->cop-make-box1767 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2makezd2box1767z53zzcgen_cgenz00(obj_t
		BgL_envz00_4695, obj_t BgL_nodez00_4696, obj_t BgL_kontz00_4697,
		obj_t BgL_inpushexitz00_4698)
	{
		{	/* Cgen/cgen.scm 848 */
			{	/* Cgen/cgen.scm 865 */
				bool_t BgL_test3048z00_6554;

				{	/* Cgen/cgen.scm 865 */
					BgL_nodez00_bglt BgL_arg2487z00_4924;

					BgL_arg2487z00_4924 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_4696)))->BgL_valuez00);
					BgL_test3048z00_6554 =
						BGl_simplezd2exprzf3ze70zc6zzcgen_cgenz00(
						((obj_t) BgL_arg2487z00_4924));
				}
				if (BgL_test3048z00_6554)
					{	/* Cgen/cgen.scm 866 */
						BgL_nodez00_bglt BgL_arg2462z00_4925;

						BgL_arg2462z00_4925 =
							(((BgL_makezd2boxzd2_bglt) COBJECT(
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_4696)))->BgL_valuez00);
						{	/* Cgen/cgen.scm 867 */
							obj_t BgL_zc3z04anonymousza32464ze3z87_4926;

							BgL_zc3z04anonymousza32464ze3z87_4926 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza32464ze3ze5zzcgen_cgenz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza32464ze3z87_4926,
								(int) (((long) 0)),
								((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_4696)));
							PROCEDURE_SET(BgL_zc3z04anonymousza32464ze3z87_4926,
								(int) (((long) 1)), BgL_kontz00_4697);
							return BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_arg2462z00_4925,
								BgL_zc3z04anonymousza32464ze3z87_4926,
								CBOOL(BgL_inpushexitz00_4698));
						}
					}
				else
					{	/* Cgen/cgen.scm 872 */
						BgL_localz00_bglt BgL_auxz00_4927;

						{	/* Cgen/cgen.scm 872 */
							BgL_localz00_bglt BgL_res2863z00_4928;

							{	/* Cgen/cgen.scm 872 */
								obj_t BgL_idz00_4929;
								BgL_typez00_bglt BgL_typez00_4930;

								BgL_idz00_4929 = CNST_TABLE_REF(((long) 10));
								BgL_typez00_4930 =
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
								{	/* Cgen/cgen.scm 940 */
									BgL_localz00_bglt BgL_localz00_4931;

									BgL_localz00_4931 =
										BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_4929,
										BgL_typez00_4930);
									{	/* Cgen/cgen.scm 941 */
										bool_t BgL_test3049z00_6575;

										{	/* Cgen/cgen.scm 941 */
											obj_t BgL_tmpz00_6576;

											BgL_tmpz00_6576 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_4931)))->
												BgL_namez00);
											BgL_test3049z00_6575 = STRINGP(BgL_tmpz00_6576);
										}
										if (BgL_test3049z00_6575)
											{	/* Cgen/cgen.scm 941 */
												BFALSE;
											}
										else
											{	/* Cgen/cgen.scm 941 */
												BGl_errorz00zz__errorz00
													(BGl_string2889z00zzcgen_cgenz00,
													BGl_string2890z00zzcgen_cgenz00,
													((obj_t) BgL_localz00_4931));
											}
									}
									BgL_res2863z00_4928 = BgL_localz00_4931;
								}
							}
							BgL_auxz00_4927 = BgL_res2863z00_4928;
						}
						{	/* Cgen/cgen.scm 872 */
							BgL_copz00_bglt BgL_cvalz00_4932;

							{	/* Cgen/cgen.scm 873 */
								BgL_setqz00_bglt BgL_arg2484z00_4933;

								{	/* Cgen/cgen.scm 873 */
									BgL_nodez00_bglt BgL_arg2486z00_4934;

									BgL_arg2486z00_4934 =
										(((BgL_makezd2boxzd2_bglt) COBJECT(
												((BgL_makezd2boxzd2_bglt) BgL_nodez00_4696)))->
										BgL_valuez00);
									BgL_arg2484z00_4933 =
										BGl_nodezd2setqzd2zzcgen_cgenz00(((BgL_variablez00_bglt)
											BgL_auxz00_4927), BgL_arg2486z00_4934);
								}
								BgL_cvalz00_4932 =
									BGl_nodezd2ze3copz31zzcgen_cgenz00(
									((BgL_nodez00_bglt) BgL_arg2484z00_4933),
									BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
									CBOOL(BgL_inpushexitz00_4698));
							}
							{	/* Cgen/cgen.scm 873 */

								{	/* Cgen/cgen.scm 874 */
									BgL_cblockz00_bglt BgL_new1405z00_4935;

									{	/* Cgen/cgen.scm 875 */
										BgL_cblockz00_bglt BgL_new1404z00_4936;

										BgL_new1404z00_4936 =
											((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cblockz00_bgl))));
										{	/* Cgen/cgen.scm 875 */
											long BgL_arg2483z00_4937;

											{	/* Cgen/cgen.scm 875 */
												long BgL_res2864z00_4938;

												BgL_res2864z00_4938 =
													BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
												BgL_arg2483z00_4937 = BgL_res2864z00_4938;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1404z00_4936),
												BgL_arg2483z00_4937);
										}
										BgL_new1405z00_4935 = BgL_new1404z00_4936;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1405z00_4935)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt)
																BgL_nodez00_4696))))->BgL_locz00)), BUNSPEC);
									{
										BgL_copz00_bglt BgL_auxz00_6598;

										{	/* Cgen/cgen.scm 876 */
											BgL_csequencez00_bglt BgL_new1407z00_4939;

											{	/* Cgen/cgen.scm 877 */
												BgL_csequencez00_bglt BgL_new1406z00_4940;

												BgL_new1406z00_4940 =
													((BgL_csequencez00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_csequencez00_bgl))));
												{	/* Cgen/cgen.scm 877 */
													long BgL_arg2482z00_4941;

													{	/* Cgen/cgen.scm 877 */
														long BgL_res2865z00_4942;

														{	/* Cgen/cgen.scm 877 */
															obj_t BgL_classz00_4943;

															BgL_classz00_4943 = BGl_csequencez00zzcgen_copz00;
															BgL_res2865z00_4942 =
																BGL_CLASS_INDEX(BgL_classz00_4943);
														}
														BgL_arg2482z00_4941 = BgL_res2865z00_4942;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1406z00_4940),
														BgL_arg2482z00_4941);
												}
												BgL_new1407z00_4939 = BgL_new1406z00_4940;
											}
											((((BgL_copz00_bglt) COBJECT(
															((BgL_copz00_bglt) BgL_new1407z00_4939)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) (
																		(BgL_makezd2boxzd2_bglt)
																		BgL_nodez00_4696))))->BgL_locz00)),
												BUNSPEC);
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1407z00_4939))->
													BgL_czd2expzf3z21) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
											{
												obj_t BgL_auxz00_6609;

												{	/* Cgen/cgen.scm 879 */
													BgL_localzd2varzd2_bglt BgL_arg2469z00_4944;
													obj_t BgL_arg2470z00_4945;

													{	/* Cgen/cgen.scm 879 */
														BgL_localzd2varzd2_bglt BgL_new1409z00_4946;

														{	/* Cgen/cgen.scm 880 */
															BgL_localzd2varzd2_bglt BgL_new1408z00_4947;

															BgL_new1408z00_4947 =
																((BgL_localzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzd2varzd2_bgl))));
															{	/* Cgen/cgen.scm 880 */
																long BgL_arg2476z00_4948;

																{	/* Cgen/cgen.scm 880 */
																	long BgL_res2866z00_4949;

																	{	/* Cgen/cgen.scm 880 */
																		obj_t BgL_classz00_4950;

																		BgL_classz00_4950 =
																			BGl_localzd2varzd2zzcgen_copz00;
																		BgL_res2866z00_4949 =
																			BGL_CLASS_INDEX(BgL_classz00_4950);
																	}
																	BgL_arg2476z00_4948 = BgL_res2866z00_4949;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1408z00_4947),
																	BgL_arg2476z00_4948);
															}
															BgL_new1409z00_4946 = BgL_new1408z00_4947;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1409z00_4946)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_makezd2boxzd2_bglt)
																					BgL_nodez00_4696))))->BgL_locz00)),
															BUNSPEC);
														{
															obj_t BgL_auxz00_6619;

															{	/* Cgen/cgen.scm 881 */
																obj_t BgL_list2475z00_4951;

																BgL_list2475z00_4951 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_auxz00_4927), BNIL);
																BgL_auxz00_6619 = BgL_list2475z00_4951;
															}
															((((BgL_localzd2varzd2_bglt)
																		COBJECT(BgL_new1409z00_4946))->
																	BgL_varsz00) =
																((obj_t) BgL_auxz00_6619), BUNSPEC);
														}
														BgL_arg2469z00_4944 = BgL_new1409z00_4946;
													}
													{	/* Cgen/cgen.scm 884 */
														BgL_cmakezd2boxzd2_bglt BgL_arg2477z00_4952;

														{	/* Cgen/cgen.scm 884 */
															BgL_cmakezd2boxzd2_bglt BgL_new1411z00_4953;

															{	/* Cgen/cgen.scm 885 */
																BgL_cmakezd2boxzd2_bglt BgL_new1410z00_4954;

																BgL_new1410z00_4954 =
																	((BgL_cmakezd2boxzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_cmakezd2boxzd2_bgl))));
																{	/* Cgen/cgen.scm 885 */
																	long BgL_arg2481z00_4955;

																	{	/* Cgen/cgen.scm 885 */
																		long BgL_res2868z00_4956;

																		{	/* Cgen/cgen.scm 885 */
																			obj_t BgL_classz00_4957;

																			BgL_classz00_4957 =
																				BGl_cmakezd2boxzd2zzcgen_copz00;
																			BgL_res2868z00_4956 =
																				BGL_CLASS_INDEX(BgL_classz00_4957);
																		}
																		BgL_arg2481z00_4955 = BgL_res2868z00_4956;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1410z00_4954),
																		BgL_arg2481z00_4955);
																}
																BgL_new1411z00_4953 = BgL_new1410z00_4954;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1411z00_4953)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_makezd2boxzd2_bglt)
																						BgL_nodez00_4696))))->BgL_locz00)),
																BUNSPEC);
															{
																BgL_copz00_bglt BgL_auxz00_6632;

																{	/* Cgen/cgen.scm 886 */
																	BgL_varcz00_bglt BgL_new1413z00_4958;

																	{	/* Cgen/cgen.scm 887 */
																		BgL_varcz00_bglt BgL_new1412z00_4959;

																		BgL_new1412z00_4959 =
																			((BgL_varcz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varcz00_bgl))));
																		{	/* Cgen/cgen.scm 887 */
																			long BgL_arg2479z00_4960;

																			{	/* Cgen/cgen.scm 887 */
																				long BgL_res2869z00_4961;

																				{	/* Cgen/cgen.scm 887 */
																					obj_t BgL_classz00_4962;

																					BgL_classz00_4962 =
																						BGl_varcz00zzcgen_copz00;
																					BgL_res2869z00_4961 =
																						BGL_CLASS_INDEX(BgL_classz00_4962);
																				}
																				BgL_arg2479z00_4960 =
																					BgL_res2869z00_4961;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1412z00_4959),
																				BgL_arg2479z00_4960);
																		}
																		BgL_new1413z00_4958 = BgL_new1412z00_4959;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1413z00_4958)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_makezd2boxzd2_bglt)
																								BgL_nodez00_4696))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_varcz00_bglt)
																				COBJECT(BgL_new1413z00_4958))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_auxz00_4927)), BUNSPEC);
																	BgL_auxz00_6632 =
																		((BgL_copz00_bglt) BgL_new1413z00_4958);
																}
																((((BgL_cmakezd2boxzd2_bglt)
																			COBJECT(BgL_new1411z00_4953))->
																		BgL_valuez00) =
																	((BgL_copz00_bglt) BgL_auxz00_6632), BUNSPEC);
															}
															((((BgL_cmakezd2boxzd2_bglt)
																		COBJECT(BgL_new1411z00_4953))->
																	BgL_stackablez00) =
																((obj_t) (((BgL_makezd2boxzd2_bglt)
																			COBJECT(((BgL_makezd2boxzd2_bglt)
																					BgL_nodez00_4696)))->
																		BgL_stackablez00)), BUNSPEC);
															BgL_arg2477z00_4952 = BgL_new1411z00_4953;
														}
														BgL_arg2470z00_4945 =
															PROCEDURE_ENTRY(BgL_kontz00_4697)
															(BgL_kontz00_4697, ((obj_t) BgL_arg2477z00_4952),
															BEOA);
													}
													{	/* Cgen/cgen.scm 878 */
														obj_t BgL_list2471z00_4963;

														{	/* Cgen/cgen.scm 878 */
															obj_t BgL_arg2473z00_4964;

															{	/* Cgen/cgen.scm 878 */
																obj_t BgL_arg2474z00_4965;

																BgL_arg2474z00_4965 =
																	MAKE_YOUNG_PAIR(BgL_arg2470z00_4945, BNIL);
																BgL_arg2473z00_4964 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_cvalz00_4932),
																	BgL_arg2474z00_4965);
															}
															BgL_list2471z00_4963 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2469z00_4944),
																BgL_arg2473z00_4964);
														}
														BgL_auxz00_6609 = BgL_list2471z00_4963;
												}}
												((((BgL_csequencez00_bglt)
															COBJECT(BgL_new1407z00_4939))->BgL_copsz00) =
													((obj_t) BgL_auxz00_6609), BUNSPEC);
											}
											BgL_auxz00_6598 = ((BgL_copz00_bglt) BgL_new1407z00_4939);
										}
										((((BgL_cblockz00_bglt) COBJECT(BgL_new1405z00_4935))->
												BgL_bodyz00) =
											((BgL_copz00_bglt) BgL_auxz00_6598), BUNSPEC);
									}
									return ((BgL_copz00_bglt) BgL_new1405z00_4935);
								}
							}
						}
					}
			}
		}

	}



/* simple-expr?~0 */
	bool_t BGl_simplezd2exprzf3ze70zc6zzcgen_cgenz00(obj_t BgL_valuez00_3335)
	{
		{	/* Cgen/cgen.scm 862 */
			{
				obj_t BgL_valuez00_3306;

				{	/* Cgen/cgen.scm 862 */
					bool_t BgL__ortest_1398z00_3337;

					BgL__ortest_1398z00_3337 =
						BGl_isazf3zf3zz__objectz00(BgL_valuez00_3335,
						BGl_varz00zzast_nodez00);
					if (BgL__ortest_1398z00_3337)
						{	/* Cgen/cgen.scm 862 */
							return BgL__ortest_1398z00_3337;
						}
					else
						{	/* Cgen/cgen.scm 862 */
							bool_t BgL__ortest_1399z00_3338;

							BgL__ortest_1399z00_3338 =
								BGl_isazf3zf3zz__objectz00(BgL_valuez00_3335,
								BGl_atomz00zzast_nodez00);
							if (BgL__ortest_1399z00_3338)
								{	/* Cgen/cgen.scm 862 */
									return BgL__ortest_1399z00_3338;
								}
							else
								{	/* Cgen/cgen.scm 862 */
									bool_t BgL__ortest_1400z00_3339;

									BgL__ortest_1400z00_3339 =
										BGl_isazf3zf3zz__objectz00(BgL_valuez00_3335,
										BGl_kwotez00zzast_nodez00);
									if (BgL__ortest_1400z00_3339)
										{	/* Cgen/cgen.scm 862 */
											return BgL__ortest_1400z00_3339;
										}
									else
										{	/* Cgen/cgen.scm 862 */
											BgL_valuez00_3306 = BgL_valuez00_3335;
											if (BGl_isazf3zf3zz__objectz00(BgL_valuez00_3306,
													BGl_appz00zzast_nodez00))
												{	/* Cgen/cgen.scm 856 */
													bool_t BgL_test3054z00_6671;

													{	/* Cgen/cgen.scm 856 */
														obj_t BgL_g1717z00_3325;

														BgL_g1717z00_3325 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_valuez00_3306)))->
															BgL_argsz00);
														{
															obj_t BgL_l1715z00_3327;

															BgL_l1715z00_3327 = BgL_g1717z00_3325;
														BgL_zc3z04anonymousza32500ze3z87_3328:
															if (NULLP(BgL_l1715z00_3327))
																{	/* Cgen/cgen.scm 856 */
																	BgL_test3054z00_6671 = ((bool_t) 1);
																}
															else
																{	/* Cgen/cgen.scm 856 */
																	bool_t BgL_test3056z00_6676;

																	{	/* Cgen/cgen.scm 856 */
																		obj_t BgL_arg2502z00_3333;

																		BgL_arg2502z00_3333 =
																			CAR(((obj_t) BgL_l1715z00_3327));
																		BgL_test3056z00_6676 =
																			BGl_simplezd2exprzf3ze70zc6zzcgen_cgenz00
																			(BgL_arg2502z00_3333);
																	}
																	if (BgL_test3056z00_6676)
																		{	/* Cgen/cgen.scm 856 */
																			obj_t BgL_arg2501z00_3332;

																			BgL_arg2501z00_3332 =
																				CDR(((obj_t) BgL_l1715z00_3327));
																			{
																				obj_t BgL_l1715z00_6682;

																				BgL_l1715z00_6682 = BgL_arg2501z00_3332;
																				BgL_l1715z00_3327 = BgL_l1715z00_6682;
																				goto
																					BgL_zc3z04anonymousza32500ze3z87_3328;
																			}
																		}
																	else
																		{	/* Cgen/cgen.scm 856 */
																			BgL_test3054z00_6671 = ((bool_t) 0);
																		}
																}
														}
													}
													if (BgL_test3054z00_6671)
														{	/* Cgen/cgen.scm 856 */
															if (CBOOL(
																	(((BgL_funz00_bglt) COBJECT(
																				((BgL_funz00_bglt)
																					(((BgL_variablez00_bglt) COBJECT(
																								(((BgL_varz00_bglt) COBJECT(
																											(((BgL_appz00_bglt)
																													COBJECT((
																															(BgL_appz00_bglt)
																															BgL_valuez00_3306)))->
																												BgL_funz00)))->
																									BgL_variablez00)))->
																						BgL_valuez00))))->
																		BgL_sidezd2effectzd2)))
																{	/* Cgen/cgen.scm 859 */
																	return ((bool_t) 0);
																}
															else
																{	/* Cgen/cgen.scm 859 */
																	return ((bool_t) 1);
																}
														}
													else
														{	/* Cgen/cgen.scm 856 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Cgen/cgen.scm 854 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
			}
		}

	}



/* &<@anonymous:2464> */
	obj_t BGl_z62zc3z04anonymousza32464ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4699,
		obj_t BgL_vz00_4702)
	{
		{	/* Cgen/cgen.scm 867 */
			{	/* Cgen/cgen.scm 867 */
				BgL_makezd2boxzd2_bglt BgL_i1401z00_4700;
				obj_t BgL_kontz00_4701;

				BgL_i1401z00_4700 =
					((BgL_makezd2boxzd2_bglt)
					PROCEDURE_REF(BgL_envz00_4699, (int) (((long) 0))));
				BgL_kontz00_4701 = PROCEDURE_REF(BgL_envz00_4699, (int) (((long) 1)));
				{	/* Cgen/cgen.scm 867 */
					BgL_cmakezd2boxzd2_bglt BgL_arg2466z00_4966;

					{	/* Cgen/cgen.scm 867 */
						BgL_cmakezd2boxzd2_bglt BgL_new1403z00_4967;

						{	/* Cgen/cgen.scm 868 */
							BgL_cmakezd2boxzd2_bglt BgL_new1402z00_4968;

							BgL_new1402z00_4968 =
								((BgL_cmakezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_cmakezd2boxzd2_bgl))));
							{	/* Cgen/cgen.scm 868 */
								long BgL_arg2467z00_4969;

								{	/* Cgen/cgen.scm 868 */
									long BgL_res2862z00_4970;

									BgL_res2862z00_4970 =
										BGL_CLASS_INDEX(BGl_cmakezd2boxzd2zzcgen_copz00);
									BgL_arg2467z00_4969 = BgL_res2862z00_4970;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1402z00_4968),
									BgL_arg2467z00_4969);
							}
							BgL_new1403z00_4967 = BgL_new1402z00_4968;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1403z00_4967)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1401z00_4700)))->BgL_locz00)), BUNSPEC);
						((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1403z00_4967))->
								BgL_valuez00) =
							((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4702)), BUNSPEC);
						((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1403z00_4967))->
								BgL_stackablez00) =
							((obj_t) (((BgL_makezd2boxzd2_bglt) COBJECT(BgL_i1401z00_4700))->
									BgL_stackablez00)), BUNSPEC);
						BgL_arg2466z00_4966 = BgL_new1403z00_4967;
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_4701) (BgL_kontz00_4701,
						((obj_t) BgL_arg2466z00_4966), BEOA);
				}
			}
		}

	}



/* &node->cop-return1765 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2return1765z81zzcgen_cgenz00(obj_t
		BgL_envz00_4703, obj_t BgL_nodez00_4704, obj_t BgL_kontz00_4705,
		obj_t BgL_inpushexitz00_4706)
	{
		{	/* Cgen/cgen.scm 830 */
			{	/* Cgen/cgen.scm 832 */
				obj_t BgL_kontz00_4972;

				{	/* Cgen/cgen.scm 832 */
					bool_t BgL_test3058z00_6713;

					{	/* Cgen/cgen.scm 832 */
						BgL_retblockz00_bglt BgL_arg2458z00_4973;

						BgL_arg2458z00_4973 =
							(((BgL_returnz00_bglt) COBJECT(
									((BgL_returnz00_bglt) BgL_nodez00_4704)))->BgL_blockz00);
						BgL_test3058z00_6713 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg2458z00_4973),
							BGl_retblockzf2gotozf2zzcgen_cgenz00);
					}
					if (BgL_test3058z00_6713)
						{	/* Cgen/cgen.scm 833 */
							BgL_retblockz00_bglt BgL_i1390z00_4974;

							BgL_i1390z00_4974 =
								((BgL_retblockz00_bglt)
								(((BgL_returnz00_bglt) COBJECT(
											((BgL_returnz00_bglt) BgL_nodez00_4704)))->BgL_blockz00));
							{	/* Cgen/cgen.scm 834 */
								obj_t BgL_arg2449z00_4975;
								obj_t BgL_arg2450z00_4976;

								{
									BgL_retblockzf2gotozf2_bglt BgL_auxz00_6721;

									{
										obj_t BgL_auxz00_6722;

										{	/* Cgen/cgen.scm 834 */
											BgL_objectz00_bglt BgL_tmpz00_6723;

											BgL_tmpz00_6723 =
												((BgL_objectz00_bglt) BgL_i1390z00_4974);
											BgL_auxz00_6722 = BGL_OBJECT_WIDENING(BgL_tmpz00_6723);
										}
										BgL_auxz00_6721 =
											((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6722);
									}
									BgL_arg2449z00_4975 =
										(((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6721))->
										BgL_localz00);
								}
								BgL_arg2450z00_4976 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_returnz00_bglt) BgL_nodez00_4704))))->BgL_locz00);
								{	/* Cgen/cgen.scm 836 */
									obj_t BgL_zc3z04anonymousza32452ze3z87_4977;

									BgL_zc3z04anonymousza32452ze3z87_4977 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza32452ze3ze5zzcgen_cgenz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3z04anonymousza32452ze3z87_4977,
										(int) (((long) 0)),
										((obj_t) ((BgL_returnz00_bglt) BgL_nodez00_4704)));
									PROCEDURE_SET(BgL_zc3z04anonymousza32452ze3z87_4977,
										(int) (((long) 1)), ((obj_t) BgL_i1390z00_4974));
									BgL_kontz00_4972 =
										BGl_makezd2setqzd2kontz00zzcgen_cgenz00(BgL_arg2449z00_4975,
										BgL_arg2450z00_4976, BgL_zc3z04anonymousza32452ze3z87_4977);
						}}}
					else
						{	/* Cgen/cgen.scm 832 */
							BgL_kontz00_4972 = BgL_kontz00_4705;
						}
				}
				return
					BGl_nodezd2ze3copz31zzcgen_cgenz00(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_4704)))->BgL_valuez00),
					BgL_kontz00_4972, CBOOL(BgL_inpushexitz00_4706));
			}
		}

	}



/* &<@anonymous:2452> */
	obj_t BGl_z62zc3z04anonymousza32452ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4707,
		obj_t BgL_cz00_4710)
	{
		{	/* Cgen/cgen.scm 835 */
			{	/* Cgen/cgen.scm 836 */
				BgL_returnz00_bglt BgL_i1389z00_4708;
				BgL_retblockz00_bglt BgL_i1390z00_4709;

				BgL_i1389z00_4708 =
					((BgL_returnz00_bglt)
					PROCEDURE_REF(BgL_envz00_4707, (int) (((long) 0))));
				BgL_i1390z00_4709 =
					((BgL_retblockz00_bglt)
					PROCEDURE_REF(BgL_envz00_4707, (int) (((long) 1))));
				{
					BgL_csequencez00_bglt BgL_auxz00_6752;

					{	/* Cgen/cgen.scm 836 */
						BgL_csequencez00_bglt BgL_new1392z00_4978;

						{	/* Cgen/cgen.scm 837 */
							BgL_csequencez00_bglt BgL_new1391z00_4979;

							BgL_new1391z00_4979 =
								((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_csequencez00_bgl))));
							{	/* Cgen/cgen.scm 837 */
								long BgL_arg2457z00_4980;

								{	/* Cgen/cgen.scm 837 */
									long BgL_res2854z00_4981;

									BgL_res2854z00_4981 =
										BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
									BgL_arg2457z00_4980 = BgL_res2854z00_4981;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1391z00_4979),
									BgL_arg2457z00_4980);
							}
							BgL_new1392z00_4978 = BgL_new1391z00_4979;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1392z00_4978)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1389z00_4708)))->BgL_locz00)), BUNSPEC);
						((((BgL_csequencez00_bglt) COBJECT(BgL_new1392z00_4978))->
								BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						{
							obj_t BgL_auxz00_6762;

							{	/* Cgen/cgen.scm 839 */
								BgL_cgotoz00_bglt BgL_arg2453z00_4982;

								{	/* Cgen/cgen.scm 839 */
									BgL_cgotoz00_bglt BgL_new1394z00_4983;

									{	/* Cgen/cgen.scm 840 */
										BgL_cgotoz00_bglt BgL_new1393z00_4984;

										BgL_new1393z00_4984 =
											((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cgotoz00_bgl))));
										{	/* Cgen/cgen.scm 840 */
											long BgL_arg2456z00_4985;

											{	/* Cgen/cgen.scm 840 */
												long BgL_res2855z00_4986;

												{	/* Cgen/cgen.scm 840 */
													obj_t BgL_classz00_4987;

													BgL_classz00_4987 = BGl_cgotoz00zzcgen_copz00;
													BgL_res2855z00_4986 =
														BGL_CLASS_INDEX(BgL_classz00_4987);
												}
												BgL_arg2456z00_4985 = BgL_res2855z00_4986;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1393z00_4984),
												BgL_arg2456z00_4985);
										}
										BgL_new1394z00_4983 = BgL_new1393z00_4984;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1394z00_4983)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_i1389z00_4708)))->BgL_locz00)), BUNSPEC);
									{
										BgL_clabelz00_bglt BgL_auxz00_6771;

										{
											obj_t BgL_auxz00_6772;

											{
												BgL_retblockzf2gotozf2_bglt BgL_auxz00_6773;

												{
													obj_t BgL_auxz00_6774;

													{	/* Cgen/cgen.scm 841 */
														BgL_objectz00_bglt BgL_tmpz00_6775;

														BgL_tmpz00_6775 =
															((BgL_objectz00_bglt) BgL_i1390z00_4709);
														BgL_auxz00_6774 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6775);
													}
													BgL_auxz00_6773 =
														((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6774);
												}
												BgL_auxz00_6772 =
													(((BgL_retblockzf2gotozf2_bglt)
														COBJECT(BgL_auxz00_6773))->BgL_labelz00);
											}
											BgL_auxz00_6771 = ((BgL_clabelz00_bglt) BgL_auxz00_6772);
										}
										((((BgL_cgotoz00_bglt) COBJECT(BgL_new1394z00_4983))->
												BgL_labelz00) =
											((BgL_clabelz00_bglt) BgL_auxz00_6771), BUNSPEC);
									}
									BgL_arg2453z00_4982 = BgL_new1394z00_4983;
								}
								{	/* Cgen/cgen.scm 838 */
									obj_t BgL_list2454z00_4988;

									{	/* Cgen/cgen.scm 838 */
										obj_t BgL_arg2455z00_4989;

										BgL_arg2455z00_4989 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg2453z00_4982), BNIL);
										BgL_list2454z00_4988 =
											MAKE_YOUNG_PAIR(BgL_cz00_4710, BgL_arg2455z00_4989);
									}
									BgL_auxz00_6762 = BgL_list2454z00_4988;
							}}
							((((BgL_csequencez00_bglt) COBJECT(BgL_new1392z00_4978))->
									BgL_copsz00) = ((obj_t) BgL_auxz00_6762), BUNSPEC);
						}
						BgL_auxz00_6752 = BgL_new1392z00_4978;
					}
					return ((obj_t) BgL_auxz00_6752);
				}
			}
		}

	}



/* &node->cop-retblock1763 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2retblock1763z81zzcgen_cgenz00(obj_t
		BgL_envz00_4711, obj_t BgL_nodez00_4712, obj_t BgL_kontz00_4713,
		obj_t BgL_inpushexitz00_4714)
	{
		{	/* Cgen/cgen.scm 802 */
			{	/* Cgen/cgen.scm 804 */
				BgL_localz00_bglt BgL_localz00_4991;

				{	/* Cgen/cgen.scm 804 */
					obj_t BgL_arg2443z00_4992;
					BgL_typez00_bglt BgL_arg2444z00_4993;

					BgL_arg2443z00_4992 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 11)));
					BgL_arg2444z00_4993 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_retblockz00_bglt) BgL_nodez00_4712))))->BgL_typez00);
					BgL_localz00_4991 =
						BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg2443z00_4992,
						BgL_arg2444z00_4993);
				}
				{	/* Cgen/cgen.scm 804 */
					BgL_clabelz00_bglt BgL_labelz00_4994;

					{	/* Cgen/cgen.scm 805 */
						BgL_clabelz00_bglt BgL_new1376z00_4995;

						{	/* Cgen/cgen.scm 806 */
							BgL_clabelz00_bglt BgL_new1375z00_4996;

							BgL_new1375z00_4996 =
								((BgL_clabelz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_clabelz00_bgl))));
							{	/* Cgen/cgen.scm 806 */
								long BgL_arg2441z00_4997;

								{	/* Cgen/cgen.scm 806 */
									long BgL_res2845z00_4998;

									BgL_res2845z00_4998 =
										BGL_CLASS_INDEX(BGl_clabelz00zzcgen_copz00);
									BgL_arg2441z00_4997 = BgL_res2845z00_4998;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1375z00_4996),
									BgL_arg2441z00_4997);
							}
							BgL_new1376z00_4995 = BgL_new1375z00_4996;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1376z00_4995)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
													BgL_nodez00_4712))))->BgL_locz00)), BUNSPEC);
						{
							obj_t BgL_auxz00_6802;

							{	/* Cgen/cgen.scm 808 */
								obj_t BgL_arg2437z00_4999;

								BgL_arg2437z00_4999 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											12)));
								{	/* Cgen/cgen.scm 808 */
									obj_t BgL_res2846z00_5000;

									{	/* Cgen/cgen.scm 808 */
										obj_t BgL_arg1466z00_5001;

										BgL_arg1466z00_5001 = SYMBOL_TO_STRING(BgL_arg2437z00_4999);
										BgL_res2846z00_5000 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_5001);
									}
									BgL_auxz00_6802 = BgL_res2846z00_5000;
							}}
							((((BgL_clabelz00_bglt) COBJECT(BgL_new1376z00_4995))->
									BgL_namez00) = ((obj_t) BgL_auxz00_6802), BUNSPEC);
						}
						((((BgL_clabelz00_bglt) COBJECT(BgL_new1376z00_4995))->
								BgL_usedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						{
							obj_t BgL_auxz00_6809;

							{	/* Cgen/cgen.scm 809 */
								BgL_varcz00_bglt BgL_arg2438z00_5002;

								{	/* Cgen/cgen.scm 809 */
									BgL_varcz00_bglt BgL_new1378z00_5003;

									{	/* Cgen/cgen.scm 810 */
										BgL_varcz00_bglt BgL_new1377z00_5004;

										BgL_new1377z00_5004 =
											((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varcz00_bgl))));
										{	/* Cgen/cgen.scm 810 */
											long BgL_arg2439z00_5005;

											{	/* Cgen/cgen.scm 810 */
												long BgL_res2847z00_5006;

												{	/* Cgen/cgen.scm 810 */
													obj_t BgL_classz00_5007;

													BgL_classz00_5007 = BGl_varcz00zzcgen_copz00;
													BgL_res2847z00_5006 =
														BGL_CLASS_INDEX(BgL_classz00_5007);
												}
												BgL_arg2439z00_5005 = BgL_res2847z00_5006;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1377z00_5004),
												BgL_arg2439z00_5005);
										}
										BgL_new1378z00_5003 = BgL_new1377z00_5004;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1378z00_5003)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
																BgL_nodez00_4712))))->BgL_locz00)), BUNSPEC);
									((((BgL_varcz00_bglt) COBJECT(BgL_new1378z00_5003))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_localz00_4991)), BUNSPEC);
									BgL_arg2438z00_5002 = BgL_new1378z00_5003;
								}
								BgL_auxz00_6809 =
									PROCEDURE_ENTRY(BgL_kontz00_4713) (BgL_kontz00_4713,
									((obj_t) BgL_arg2438z00_5002), BEOA);
							}
							((((BgL_clabelz00_bglt) COBJECT(BgL_new1376z00_4995))->
									BgL_bodyz00) = ((obj_t) BgL_auxz00_6809), BUNSPEC);
						}
						BgL_labelz00_4994 = BgL_new1376z00_4995;
					}
					{	/* Cgen/cgen.scm 805 */
						obj_t BgL_retkontz00_5008;

						{	/* Cgen/cgen.scm 812 */
							obj_t BgL_arg2433z00_5009;

							BgL_arg2433z00_5009 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_retblockz00_bglt) BgL_nodez00_4712))))->BgL_locz00);
							BgL_retkontz00_5008 =
								BGl_makezd2setqzd2kontz00zzcgen_cgenz00(
								((obj_t) BgL_localz00_4991), BgL_arg2433z00_5009,
								BGl_proc2927z00zzcgen_cgenz00);
						}
						{	/* Cgen/cgen.scm 812 */

							{	/* Cgen/cgen.scm 813 */
								BgL_retblockzf2gotozf2_bglt BgL_wide1381z00_5011;

								BgL_wide1381z00_5011 =
									((BgL_retblockzf2gotozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_retblockzf2gotozf2_bgl))));
								{	/* Cgen/cgen.scm 813 */
									obj_t BgL_auxz00_6837;
									BgL_objectz00_bglt BgL_tmpz00_6833;

									BgL_auxz00_6837 = ((obj_t) BgL_wide1381z00_5011);
									BgL_tmpz00_6833 =
										((BgL_objectz00_bglt)
										((BgL_retblockz00_bglt)
											((BgL_retblockz00_bglt) BgL_nodez00_4712)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6833, BgL_auxz00_6837);
								}
								((BgL_objectz00_bglt)
									((BgL_retblockz00_bglt)
										((BgL_retblockz00_bglt) BgL_nodez00_4712)));
								{	/* Cgen/cgen.scm 813 */
									long BgL_arg2420z00_5012;

									{	/* Cgen/cgen.scm 813 */
										long BgL_res2848z00_5013;

										BgL_res2848z00_5013 =
											BGL_CLASS_INDEX(BGl_retblockzf2gotozf2zzcgen_cgenz00);
										BgL_arg2420z00_5012 = BgL_res2848z00_5013;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_retblockz00_bglt)
												((BgL_retblockz00_bglt) BgL_nodez00_4712))),
										BgL_arg2420z00_5012);
								}
								((BgL_retblockz00_bglt)
									((BgL_retblockz00_bglt)
										((BgL_retblockz00_bglt) BgL_nodez00_4712)));
							}
							{
								BgL_retblockzf2gotozf2_bglt BgL_auxz00_6851;

								{
									obj_t BgL_auxz00_6852;

									{	/* Cgen/cgen.scm 814 */
										BgL_objectz00_bglt BgL_tmpz00_6853;

										BgL_tmpz00_6853 =
											((BgL_objectz00_bglt)
											((BgL_retblockz00_bglt)
												((BgL_retblockz00_bglt) BgL_nodez00_4712)));
										BgL_auxz00_6852 = BGL_OBJECT_WIDENING(BgL_tmpz00_6853);
									}
									BgL_auxz00_6851 =
										((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6852);
								}
								((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6851))->
										BgL_localz00) =
									((obj_t) ((obj_t) BgL_localz00_4991)), BUNSPEC);
							}
							{
								BgL_retblockzf2gotozf2_bglt BgL_auxz00_6861;

								{
									obj_t BgL_auxz00_6862;

									{	/* Cgen/cgen.scm 815 */
										BgL_objectz00_bglt BgL_tmpz00_6863;

										BgL_tmpz00_6863 =
											((BgL_objectz00_bglt)
											((BgL_retblockz00_bglt)
												((BgL_retblockz00_bglt) BgL_nodez00_4712)));
										BgL_auxz00_6862 = BGL_OBJECT_WIDENING(BgL_tmpz00_6863);
									}
									BgL_auxz00_6861 =
										((BgL_retblockzf2gotozf2_bglt) BgL_auxz00_6862);
								}
								((((BgL_retblockzf2gotozf2_bglt) COBJECT(BgL_auxz00_6861))->
										BgL_labelz00) =
									((obj_t) ((obj_t) BgL_labelz00_4994)), BUNSPEC);
							}
							((BgL_retblockz00_bglt)
								((BgL_retblockz00_bglt) BgL_nodez00_4712));
							{	/* Cgen/cgen.scm 816 */
								BgL_cblockz00_bglt BgL_new1384z00_5014;

								{	/* Cgen/cgen.scm 817 */
									BgL_cblockz00_bglt BgL_new1383z00_5015;

									BgL_new1383z00_5015 =
										((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_cblockz00_bgl))));
									{	/* Cgen/cgen.scm 817 */
										long BgL_arg2431z00_5016;

										{	/* Cgen/cgen.scm 817 */
											long BgL_res2849z00_5017;

											BgL_res2849z00_5017 =
												BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
											BgL_arg2431z00_5016 = BgL_res2849z00_5017;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1383z00_5015),
											BgL_arg2431z00_5016);
									}
									BgL_new1384z00_5014 = BgL_new1383z00_5015;
								}
								((((BgL_copz00_bglt) COBJECT(
												((BgL_copz00_bglt) BgL_new1384z00_5014)))->BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
															BgL_nodez00_4712))))->BgL_locz00)), BUNSPEC);
								{
									BgL_copz00_bglt BgL_auxz00_6882;

									{	/* Cgen/cgen.scm 818 */
										BgL_csequencez00_bglt BgL_new1386z00_5018;

										{	/* Cgen/cgen.scm 819 */
											BgL_csequencez00_bglt BgL_new1385z00_5019;

											BgL_new1385z00_5019 =
												((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_csequencez00_bgl))));
											{	/* Cgen/cgen.scm 819 */
												long BgL_arg2430z00_5020;

												{	/* Cgen/cgen.scm 819 */
													long BgL_res2850z00_5021;

													{	/* Cgen/cgen.scm 819 */
														obj_t BgL_classz00_5022;

														BgL_classz00_5022 = BGl_csequencez00zzcgen_copz00;
														BgL_res2850z00_5021 =
															BGL_CLASS_INDEX(BgL_classz00_5022);
													}
													BgL_arg2430z00_5020 = BgL_res2850z00_5021;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1385z00_5019),
													BgL_arg2430z00_5020);
											}
											BgL_new1386z00_5018 = BgL_new1385z00_5019;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1386z00_5018)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_retblockz00_bglt)
																	BgL_nodez00_4712))))->BgL_locz00)), BUNSPEC);
										((((BgL_csequencez00_bglt) COBJECT(BgL_new1386z00_5018))->
												BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										{
											obj_t BgL_auxz00_6893;

											{	/* Cgen/cgen.scm 821 */
												BgL_localzd2varzd2_bglt BgL_arg2421z00_5023;
												BgL_copz00_bglt BgL_arg2422z00_5024;

												{	/* Cgen/cgen.scm 821 */
													BgL_localzd2varzd2_bglt BgL_new1388z00_5025;

													{	/* Cgen/cgen.scm 822 */
														BgL_localzd2varzd2_bglt BgL_new1387z00_5026;

														BgL_new1387z00_5026 =
															((BgL_localzd2varzd2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_localzd2varzd2_bgl))));
														{	/* Cgen/cgen.scm 822 */
															long BgL_arg2427z00_5027;

															{	/* Cgen/cgen.scm 822 */
																long BgL_res2851z00_5028;

																{	/* Cgen/cgen.scm 822 */
																	obj_t BgL_classz00_5029;

																	BgL_classz00_5029 =
																		BGl_localzd2varzd2zzcgen_copz00;
																	BgL_res2851z00_5028 =
																		BGL_CLASS_INDEX(BgL_classz00_5029);
																}
																BgL_arg2427z00_5027 = BgL_res2851z00_5028;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1387z00_5026),
																BgL_arg2427z00_5027);
														}
														BgL_new1388z00_5025 = BgL_new1387z00_5026;
													}
													((((BgL_copz00_bglt) COBJECT(
																	((BgL_copz00_bglt) BgL_new1388z00_5025)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) (
																				(BgL_retblockz00_bglt)
																				BgL_nodez00_4712))))->BgL_locz00)),
														BUNSPEC);
													{
														obj_t BgL_auxz00_6903;

														{	/* Cgen/cgen.scm 823 */
															obj_t BgL_list2426z00_5030;

															BgL_list2426z00_5030 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_localz00_4991), BNIL);
															BgL_auxz00_6903 = BgL_list2426z00_5030;
														}
														((((BgL_localzd2varzd2_bglt)
																	COBJECT(BgL_new1388z00_5025))->BgL_varsz00) =
															((obj_t) BgL_auxz00_6903), BUNSPEC);
													}
													BgL_arg2421z00_5023 = BgL_new1388z00_5025;
												}
												{	/* Cgen/cgen.scm 824 */
													BgL_nodez00_bglt BgL_arg2428z00_5031;

													BgL_arg2428z00_5031 =
														(((BgL_retblockz00_bglt) COBJECT(
																((BgL_retblockz00_bglt) BgL_nodez00_4712)))->
														BgL_bodyz00);
													BgL_arg2422z00_5024 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00
														(BgL_arg2428z00_5031, BgL_retkontz00_5008,
														CBOOL(BgL_inpushexitz00_4714));
												}
												{	/* Cgen/cgen.scm 820 */
													obj_t BgL_list2423z00_5032;

													{	/* Cgen/cgen.scm 820 */
														obj_t BgL_arg2424z00_5033;

														{	/* Cgen/cgen.scm 820 */
															obj_t BgL_arg2425z00_5034;

															BgL_arg2425z00_5034 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_labelz00_4994), BNIL);
															BgL_arg2424z00_5033 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2422z00_5024),
																BgL_arg2425z00_5034);
														}
														BgL_list2423z00_5032 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2421z00_5023),
															BgL_arg2424z00_5033);
													}
													BgL_auxz00_6893 = BgL_list2423z00_5032;
											}}
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1386z00_5018))->
													BgL_copsz00) = ((obj_t) BgL_auxz00_6893), BUNSPEC);
										}
										BgL_auxz00_6882 = ((BgL_copz00_bglt) BgL_new1386z00_5018);
									}
									((((BgL_cblockz00_bglt) COBJECT(BgL_new1384z00_5014))->
											BgL_bodyz00) =
										((BgL_copz00_bglt) BgL_auxz00_6882), BUNSPEC);
								}
								return ((BgL_copz00_bglt) BgL_new1384z00_5014);
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:2436> */
	obj_t BGl_z62zc3z04anonymousza32436ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4715,
		obj_t BgL_cz00_4716)
	{
		{	/* Cgen/cgen.scm 812 */
			return BgL_cz00_4716;
		}

	}



/* &node->cop-jump-ex-it1761 */
	BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2jumpzd2exzd2it1761z81zzcgen_cgenz00(obj_t
		BgL_envz00_4717, obj_t BgL_nodez00_4718, obj_t BgL_kontz00_4719,
		obj_t BgL_inpushexitz00_4720)
	{
		{	/* Cgen/cgen.scm 724 */
			{	/* Tools/trace.sch 53 */
				BgL_localz00_bglt BgL_vauxz00_5036;

				{	/* Tools/trace.sch 53 */
					BgL_localz00_bglt BgL_res2810z00_5037;

					{	/* Tools/trace.sch 53 */
						obj_t BgL_idz00_5038;
						BgL_typez00_bglt BgL_typez00_5039;

						BgL_idz00_5038 = CNST_TABLE_REF(((long) 3));
						BgL_typez00_5039 =
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
						{	/* Tools/trace.sch 53 */
							BgL_localz00_bglt BgL_localz00_5040;

							BgL_localz00_5040 =
								BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_5038,
								BgL_typez00_5039);
							{	/* Tools/trace.sch 53 */
								bool_t BgL_test3059z00_6924;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_tmpz00_6925;

									BgL_tmpz00_6925 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_localz00_5040)))->
										BgL_namez00);
									BgL_test3059z00_6924 = STRINGP(BgL_tmpz00_6925);
								}
								if (BgL_test3059z00_6924)
									{	/* Tools/trace.sch 53 */
										BFALSE;
									}
								else
									{	/* Tools/trace.sch 53 */
										BGl_errorz00zz__errorz00(BGl_string2889z00zzcgen_cgenz00,
											BGl_string2890z00zzcgen_cgenz00,
											((obj_t) BgL_localz00_5040));
									}
							}
							BgL_res2810z00_5037 = BgL_localz00_5040;
						}
					}
					BgL_vauxz00_5036 = BgL_res2810z00_5037;
				}
				{	/* Tools/trace.sch 53 */
					BgL_copz00_bglt BgL_vcopz00_5041;

					{	/* Tools/trace.sch 53 */
						BgL_setqz00_bglt BgL_arg2418z00_5042;

						{	/* Tools/trace.sch 53 */
							BgL_nodez00_bglt BgL_arg2419z00_5043;

							BgL_arg2419z00_5043 =
								(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
										((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4718)))->
								BgL_valuez00);
							BgL_arg2418z00_5042 =
								BGl_nodezd2setqzd2zzcgen_cgenz00(((BgL_variablez00_bglt)
									BgL_vauxz00_5036), BgL_arg2419z00_5043);
						}
						BgL_vcopz00_5041 =
							BGl_nodezd2ze3copz31zzcgen_cgenz00(
							((BgL_nodez00_bglt) BgL_arg2418z00_5042),
							BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
							CBOOL(BgL_inpushexitz00_4720));
					}
					{	/* Tools/trace.sch 53 */
						BgL_nodez00_bglt BgL_exitz00_5044;

						BgL_exitz00_5044 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4718)))->
							BgL_exitz00);
						{	/* Tools/trace.sch 53 */
							BgL_localz00_bglt BgL_eauxz00_5045;

							{	/* Tools/trace.sch 53 */
								BgL_localz00_bglt BgL_res2811z00_5046;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_idz00_5047;
									BgL_typez00_bglt BgL_typez00_5048;

									BgL_idz00_5047 = CNST_TABLE_REF(((long) 13));
									BgL_typez00_5048 =
										((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00);
									{	/* Tools/trace.sch 53 */
										BgL_localz00_bglt BgL_localz00_5049;

										BgL_localz00_5049 =
											BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_5047,
											BgL_typez00_5048);
										{	/* Tools/trace.sch 53 */
											bool_t BgL_test3060z00_6943;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_tmpz00_6944;

												BgL_tmpz00_6944 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_localz00_5049)))->
													BgL_namez00);
												BgL_test3060z00_6943 = STRINGP(BgL_tmpz00_6944);
											}
											if (BgL_test3060z00_6943)
												{	/* Tools/trace.sch 53 */
													BFALSE;
												}
											else
												{	/* Tools/trace.sch 53 */
													BGl_errorz00zz__errorz00
														(BGl_string2889z00zzcgen_cgenz00,
														BGl_string2890z00zzcgen_cgenz00,
														((obj_t) BgL_localz00_5049));
												}
										}
										BgL_res2811z00_5046 = BgL_localz00_5049;
									}
								}
								BgL_eauxz00_5045 = BgL_res2811z00_5046;
							}
							{	/* Tools/trace.sch 53 */
								BgL_copz00_bglt BgL_ecopz00_5050;

								{	/* Tools/trace.sch 53 */
									BgL_setqz00_bglt BgL_arg2416z00_5051;

									BgL_arg2416z00_5051 =
										BGl_nodezd2setqzd2zzcgen_cgenz00(
										((BgL_variablez00_bglt) BgL_eauxz00_5045),
										BgL_exitz00_5044);
									BgL_ecopz00_5050 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(((BgL_nodez00_bglt)
											BgL_arg2416z00_5051),
										BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
										CBOOL(BgL_inpushexitz00_4720));
								}
								{	/* Tools/trace.sch 53 */

									{	/* Tools/trace.sch 53 */
										bool_t BgL_test3061z00_6955;

										{	/* Tools/trace.sch 53 */
											bool_t BgL_test3062z00_6956;

											{	/* Tools/trace.sch 53 */
												bool_t BgL_res2812z00_5052;

												BgL_res2812z00_5052 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_vcopz00_5041),
													BGl_csetqz00zzcgen_copz00);
												BgL_test3062z00_6956 = BgL_res2812z00_5052;
											}
											if (BgL_test3062z00_6956)
												{	/* Tools/trace.sch 53 */
													if (
														(((obj_t)
																(((BgL_varcz00_bglt) COBJECT(
																			(((BgL_csetqz00_bglt) COBJECT(
																						((BgL_csetqz00_bglt)
																							BgL_vcopz00_5041)))->
																				BgL_varz00)))->BgL_variablez00)) ==
															((obj_t) BgL_vauxz00_5036)))
														{	/* Tools/trace.sch 53 */
															bool_t BgL_test3064z00_6966;

															{	/* Tools/trace.sch 53 */
																bool_t BgL_res2813z00_5053;

																BgL_res2813z00_5053 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_ecopz00_5050),
																	BGl_csetqz00zzcgen_copz00);
																BgL_test3064z00_6966 = BgL_res2813z00_5053;
															}
															if (BgL_test3064z00_6966)
																{	/* Tools/trace.sch 53 */
																	BgL_test3061z00_6955 =
																		(
																		((obj_t)
																			(((BgL_varcz00_bglt) COBJECT(
																						(((BgL_csetqz00_bglt) COBJECT(
																									((BgL_csetqz00_bglt)
																										BgL_ecopz00_5050)))->
																							BgL_varz00)))->
																				BgL_variablez00)) ==
																		((obj_t) BgL_eauxz00_5045));
																}
															else
																{	/* Tools/trace.sch 53 */
																	BgL_test3061z00_6955 = ((bool_t) 0);
																}
														}
													else
														{	/* Tools/trace.sch 53 */
															BgL_test3061z00_6955 = ((bool_t) 0);
														}
												}
											else
												{	/* Tools/trace.sch 53 */
													BgL_test3061z00_6955 = ((bool_t) 0);
												}
										}
										if (BgL_test3061z00_6955)
											{	/* Tools/trace.sch 53 */
												BgL_cjumpzd2exzd2itz00_bglt BgL_arg2340z00_5054;

												{	/* Tools/trace.sch 53 */
													BgL_cjumpzd2exzd2itz00_bglt BgL_new1335z00_5055;

													{	/* Tools/trace.sch 53 */
														BgL_cjumpzd2exzd2itz00_bglt BgL_new1334z00_5056;

														BgL_new1334z00_5056 =
															((BgL_cjumpzd2exzd2itz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_cjumpzd2exzd2itz00_bgl))));
														{	/* Tools/trace.sch 53 */
															long BgL_arg2341z00_5057;

															{	/* Tools/trace.sch 53 */
																long BgL_res2814z00_5058;

																BgL_res2814z00_5058 =
																	BGL_CLASS_INDEX
																	(BGl_cjumpzd2exzd2itz00zzcgen_copz00);
																BgL_arg2341z00_5057 = BgL_res2814z00_5058;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1334z00_5056),
																BgL_arg2341z00_5057);
														}
														BgL_new1335z00_5055 = BgL_new1334z00_5056;
													}
													((((BgL_copz00_bglt) COBJECT(
																	((BgL_copz00_bglt) BgL_new1335z00_5055)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) (
																				(BgL_jumpzd2exzd2itz00_bglt)
																				BgL_nodez00_4718))))->BgL_locz00)),
														BUNSPEC);
													((((BgL_cjumpzd2exzd2itz00_bglt)
																COBJECT(BgL_new1335z00_5055))->BgL_exitz00) =
														((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
																	COBJECT(((BgL_csetqz00_bglt)
																			BgL_ecopz00_5050)))->BgL_valuez00)),
														BUNSPEC);
													((((BgL_cjumpzd2exzd2itz00_bglt)
																COBJECT(BgL_new1335z00_5055))->BgL_valuez00) =
														((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
																	COBJECT(((BgL_csetqz00_bglt)
																			BgL_vcopz00_5041)))->BgL_valuez00)),
														BUNSPEC);
													BgL_arg2340z00_5054 = BgL_new1335z00_5055;
												}
												return ((BgL_copz00_bglt) BgL_arg2340z00_5054);
											}
										else
											{	/* Tools/trace.sch 53 */
												bool_t BgL_test3065z00_6991;

												{	/* Tools/trace.sch 53 */
													bool_t BgL_test3066z00_6992;

													{	/* Tools/trace.sch 53 */
														bool_t BgL_res2815z00_5059;

														BgL_res2815z00_5059 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_vcopz00_5041),
															BGl_csetqz00zzcgen_copz00);
														BgL_test3066z00_6992 = BgL_res2815z00_5059;
													}
													if (BgL_test3066z00_6992)
														{	/* Tools/trace.sch 53 */
															BgL_test3065z00_6991 =
																(
																((obj_t)
																	(((BgL_varcz00_bglt) COBJECT(
																				(((BgL_csetqz00_bglt) COBJECT(
																							((BgL_csetqz00_bglt)
																								BgL_vcopz00_5041)))->
																					BgL_varz00)))->BgL_variablez00)) ==
																((obj_t) BgL_vauxz00_5036));
														}
													else
														{	/* Tools/trace.sch 53 */
															BgL_test3065z00_6991 = ((bool_t) 0);
														}
												}
												if (BgL_test3065z00_6991)
													{	/* Tools/trace.sch 53 */
														BgL_cblockz00_bglt BgL_new1337z00_5060;

														{	/* Tools/trace.sch 53 */
															BgL_cblockz00_bglt BgL_new1336z00_5061;

															BgL_new1336z00_5061 =
																((BgL_cblockz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cblockz00_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg2362z00_5062;

																{	/* Tools/trace.sch 53 */
																	long BgL_res2816z00_5063;

																	BgL_res2816z00_5063 =
																		BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
																	BgL_arg2362z00_5062 = BgL_res2816z00_5063;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1336z00_5061),
																	BgL_arg2362z00_5062);
															}
															BgL_new1337z00_5060 = BgL_new1336z00_5061;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1337z00_5060)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_jumpzd2exzd2itz00_bglt)
																					BgL_nodez00_4718))))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_7010;

															{	/* Tools/trace.sch 53 */
																BgL_csequencez00_bglt BgL_new1339z00_5064;

																{	/* Tools/trace.sch 53 */
																	BgL_csequencez00_bglt BgL_new1338z00_5065;

																	BgL_new1338z00_5065 =
																		((BgL_csequencez00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_csequencez00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg2361z00_5066;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2817z00_5067;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_classz00_5068;

																				BgL_classz00_5068 =
																					BGl_csequencez00zzcgen_copz00;
																				BgL_res2817z00_5067 =
																					BGL_CLASS_INDEX(BgL_classz00_5068);
																			}
																			BgL_arg2361z00_5066 = BgL_res2817z00_5067;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1338z00_5065),
																			BgL_arg2361z00_5066);
																	}
																	BgL_new1339z00_5064 = BgL_new1338z00_5065;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1339z00_5064)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_jumpzd2exzd2itz00_bglt)
																							BgL_nodez00_4718))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_csequencez00_bglt)
																			COBJECT(BgL_new1339z00_5064))->
																		BgL_czd2expzf3z21) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																{
																	obj_t BgL_auxz00_7021;

																	{	/* Tools/trace.sch 53 */
																		BgL_localzd2varzd2_bglt BgL_arg2347z00_5069;
																		BgL_csequencez00_bglt BgL_arg2349z00_5070;
																		BgL_cjumpzd2exzd2itz00_bglt
																			BgL_arg2350z00_5071;
																		{	/* Tools/trace.sch 53 */
																			BgL_localzd2varzd2_bglt
																				BgL_new1341z00_5072;
																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_new1340z00_5073;
																				BgL_new1340z00_5073 =
																					((BgL_localzd2varzd2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_localzd2varzd2_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg2355z00_5074;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2818z00_5075;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_5076;

																							BgL_classz00_5076 =
																								BGl_localzd2varzd2zzcgen_copz00;
																							BgL_res2818z00_5075 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_5076);
																						}
																						BgL_arg2355z00_5074 =
																							BgL_res2818z00_5075;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1340z00_5073),
																						BgL_arg2355z00_5074);
																				}
																				BgL_new1341z00_5072 =
																					BgL_new1340z00_5073;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1341z00_5072)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_jumpzd2exzd2itz00_bglt)
																										BgL_nodez00_4718))))->
																						BgL_locz00)), BUNSPEC);
																			{
																				obj_t BgL_auxz00_7031;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_list2354z00_5077;

																					BgL_list2354z00_5077 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_eauxz00_5045), BNIL);
																					BgL_auxz00_7031 =
																						BgL_list2354z00_5077;
																				}
																				((((BgL_localzd2varzd2_bglt)
																							COBJECT(BgL_new1341z00_5072))->
																						BgL_varsz00) =
																					((obj_t) BgL_auxz00_7031), BUNSPEC);
																			}
																			BgL_arg2347z00_5069 = BgL_new1341z00_5072;
																		}
																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1343z00_5078;

																			{	/* Tools/trace.sch 53 */
																				BgL_csequencez00_bglt
																					BgL_new1342z00_5079;
																				BgL_new1342z00_5079 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg2357z00_5080;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2820z00_5081;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_5082;

																							BgL_classz00_5082 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2820z00_5081 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_5082);
																						}
																						BgL_arg2357z00_5080 =
																							BgL_res2820z00_5081;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1342z00_5079),
																						BgL_arg2357z00_5080);
																				}
																				BgL_new1343z00_5078 =
																					BgL_new1342z00_5079;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1343z00_5078)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_jumpzd2exzd2itz00_bglt)
																										BgL_nodez00_4718))))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1343z00_5078))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			{
																				obj_t BgL_auxz00_7045;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_list2356z00_5083;

																					BgL_list2356z00_5083 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_ecopz00_5050), BNIL);
																					BgL_auxz00_7045 =
																						BgL_list2356z00_5083;
																				}
																				((((BgL_csequencez00_bglt)
																							COBJECT(BgL_new1343z00_5078))->
																						BgL_copsz00) =
																					((obj_t) BgL_auxz00_7045), BUNSPEC);
																			}
																			BgL_arg2349z00_5070 = BgL_new1343z00_5078;
																		}
																		{	/* Tools/trace.sch 53 */
																			BgL_cjumpzd2exzd2itz00_bglt
																				BgL_arg2358z00_5084;
																			{	/* Tools/trace.sch 53 */
																				BgL_cjumpzd2exzd2itz00_bglt
																					BgL_new1345z00_5085;
																				{	/* Tools/trace.sch 53 */
																					BgL_cjumpzd2exzd2itz00_bglt
																						BgL_new1344z00_5086;
																					BgL_new1344z00_5086 =
																						((BgL_cjumpzd2exzd2itz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_cjumpzd2exzd2itz00_bgl))));
																					{	/* Tools/trace.sch 53 */
																						long BgL_arg2360z00_5087;

																						{	/* Tools/trace.sch 53 */
																							long BgL_res2822z00_5088;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_classz00_5089;

																								BgL_classz00_5089 =
																									BGl_cjumpzd2exzd2itz00zzcgen_copz00;
																								BgL_res2822z00_5088 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_5089);
																							}
																							BgL_arg2360z00_5087 =
																								BgL_res2822z00_5088;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1344z00_5086),
																							BgL_arg2360z00_5087);
																					}
																					BgL_new1345z00_5085 =
																						BgL_new1344z00_5086;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1345z00_5085)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt) (
																											(BgL_jumpzd2exzd2itz00_bglt)
																											BgL_nodez00_4718))))->
																							BgL_locz00)), BUNSPEC);
																				{
																					BgL_copz00_bglt BgL_auxz00_7058;

																					{	/* Tools/trace.sch 53 */
																						BgL_varcz00_bglt
																							BgL_new1347z00_5090;
																						{	/* Tools/trace.sch 53 */
																							BgL_varcz00_bglt
																								BgL_new1346z00_5091;
																							BgL_new1346z00_5091 =
																								((BgL_varcz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_varcz00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg2359z00_5092;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2823z00_5093;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_5094;

																										BgL_classz00_5094 =
																											BGl_varcz00zzcgen_copz00;
																										BgL_res2823z00_5093 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_5094);
																									}
																									BgL_arg2359z00_5092 =
																										BgL_res2823z00_5093;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1346z00_5091),
																									BgL_arg2359z00_5092);
																							}
																							BgL_new1347z00_5090 =
																								BgL_new1346z00_5091;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1347z00_5090)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4718))))->BgL_locz00)), BUNSPEC);
																						((((BgL_varcz00_bglt)
																									COBJECT
																									(BgL_new1347z00_5090))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt) (
																									(BgL_variablez00_bglt)
																									BgL_eauxz00_5045)), BUNSPEC);
																						BgL_auxz00_7058 =
																							((BgL_copz00_bglt)
																							BgL_new1347z00_5090);
																					}
																					((((BgL_cjumpzd2exzd2itz00_bglt)
																								COBJECT(BgL_new1345z00_5085))->
																							BgL_exitz00) =
																						((BgL_copz00_bglt) BgL_auxz00_7058),
																						BUNSPEC);
																				}
																				((((BgL_cjumpzd2exzd2itz00_bglt)
																							COBJECT(BgL_new1345z00_5085))->
																						BgL_valuez00) =
																					((BgL_copz00_bglt) ((
																								(BgL_csetqz00_bglt)
																								COBJECT(((BgL_csetqz00_bglt)
																										BgL_vcopz00_5041)))->
																							BgL_valuez00)), BUNSPEC);
																				BgL_arg2358z00_5084 =
																					BgL_new1345z00_5085;
																			}
																			BgL_arg2350z00_5071 = BgL_arg2358z00_5084;
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_list2351z00_5095;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg2352z00_5096;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg2353z00_5097;

																					BgL_arg2353z00_5097 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg2350z00_5071),
																						BNIL);
																					BgL_arg2352z00_5096 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg2349z00_5070),
																						BgL_arg2353z00_5097);
																				}
																				BgL_list2351z00_5095 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg2347z00_5069),
																					BgL_arg2352z00_5096);
																			}
																			BgL_auxz00_7021 = BgL_list2351z00_5095;
																	}}
																	((((BgL_csequencez00_bglt)
																				COBJECT(BgL_new1339z00_5064))->
																			BgL_copsz00) =
																		((obj_t) BgL_auxz00_7021), BUNSPEC);
																}
																BgL_auxz00_7010 =
																	((BgL_copz00_bglt) BgL_new1339z00_5064);
															}
															((((BgL_cblockz00_bglt)
																		COBJECT(BgL_new1337z00_5060))->
																	BgL_bodyz00) =
																((BgL_copz00_bglt) BgL_auxz00_7010), BUNSPEC);
														}
														return ((BgL_copz00_bglt) BgL_new1337z00_5060);
													}
												else
													{	/* Tools/trace.sch 53 */
														bool_t BgL_test3067z00_7085;

														{	/* Tools/trace.sch 53 */
															bool_t BgL_test3068z00_7086;

															{	/* Tools/trace.sch 53 */
																bool_t BgL_res2825z00_5098;

																BgL_res2825z00_5098 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_ecopz00_5050),
																	BGl_csetqz00zzcgen_copz00);
																BgL_test3068z00_7086 = BgL_res2825z00_5098;
															}
															if (BgL_test3068z00_7086)
																{	/* Tools/trace.sch 53 */
																	BgL_test3067z00_7085 =
																		(
																		((obj_t)
																			(((BgL_varcz00_bglt) COBJECT(
																						(((BgL_csetqz00_bglt) COBJECT(
																									((BgL_csetqz00_bglt)
																										BgL_ecopz00_5050)))->
																							BgL_varz00)))->
																				BgL_variablez00)) ==
																		((obj_t) BgL_eauxz00_5045));
																}
															else
																{	/* Tools/trace.sch 53 */
																	BgL_test3067z00_7085 = ((bool_t) 0);
																}
														}
														if (BgL_test3067z00_7085)
															{	/* Tools/trace.sch 53 */
																BgL_cblockz00_bglt BgL_new1349z00_5099;

																{	/* Tools/trace.sch 53 */
																	BgL_cblockz00_bglt BgL_new1348z00_5100;

																	BgL_new1348z00_5100 =
																		((BgL_cblockz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_cblockz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg2382z00_5101;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2826z00_5102;

																			BgL_res2826z00_5102 =
																				BGL_CLASS_INDEX
																				(BGl_cblockz00zzcgen_copz00);
																			BgL_arg2382z00_5101 = BgL_res2826z00_5102;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1348z00_5100),
																			BgL_arg2382z00_5101);
																	}
																	BgL_new1349z00_5099 = BgL_new1348z00_5100;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1349z00_5099)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_jumpzd2exzd2itz00_bglt)
																							BgL_nodez00_4718))))->
																			BgL_locz00)), BUNSPEC);
																{
																	BgL_copz00_bglt BgL_auxz00_7104;

																	{	/* Tools/trace.sch 53 */
																		BgL_csequencez00_bglt BgL_new1351z00_5103;

																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1350z00_5104;

																			BgL_new1350z00_5104 =
																				((BgL_csequencez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_csequencez00_bgl))));
																			{	/* Tools/trace.sch 53 */
																				long BgL_arg2381z00_5105;

																				{	/* Tools/trace.sch 53 */
																					long BgL_res2827z00_5106;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_classz00_5107;

																						BgL_classz00_5107 =
																							BGl_csequencez00zzcgen_copz00;
																						BgL_res2827z00_5106 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_5107);
																					}
																					BgL_arg2381z00_5105 =
																						BgL_res2827z00_5106;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1350z00_5104),
																					BgL_arg2381z00_5105);
																			}
																			BgL_new1351z00_5103 = BgL_new1350z00_5104;
																		}
																		((((BgL_copz00_bglt) COBJECT(
																						((BgL_copz00_bglt)
																							BgL_new1351z00_5103)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt) (
																									(BgL_jumpzd2exzd2itz00_bglt)
																									BgL_nodez00_4718))))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_csequencez00_bglt)
																					COBJECT(BgL_new1351z00_5103))->
																				BgL_czd2expzf3z21) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																		{
																			obj_t BgL_auxz00_7115;

																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_arg2367z00_5108;
																				BgL_csequencez00_bglt
																					BgL_arg2368z00_5109;
																				BgL_cjumpzd2exzd2itz00_bglt
																					BgL_arg2369z00_5110;
																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_new1353z00_5111;
																					{	/* Tools/trace.sch 53 */
																						BgL_localzd2varzd2_bglt
																							BgL_new1352z00_5112;
																						BgL_new1352z00_5112 =
																							((BgL_localzd2varzd2_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_localzd2varzd2_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg2374z00_5113;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2828z00_5114;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_5115;

																									BgL_classz00_5115 =
																										BGl_localzd2varzd2zzcgen_copz00;
																									BgL_res2828z00_5114 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_5115);
																								}
																								BgL_arg2374z00_5113 =
																									BgL_res2828z00_5114;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1352z00_5112),
																								BgL_arg2374z00_5113);
																						}
																						BgL_new1353z00_5111 =
																							BgL_new1352z00_5112;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1353z00_5111)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_jumpzd2exzd2itz00_bglt)
																												BgL_nodez00_4718))))->
																								BgL_locz00)), BUNSPEC);
																					{
																						obj_t BgL_auxz00_7125;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list2373z00_5116;

																							BgL_list2373z00_5116 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_vauxz00_5036),
																								BNIL);
																							BgL_auxz00_7125 =
																								BgL_list2373z00_5116;
																						}
																						((((BgL_localzd2varzd2_bglt)
																									COBJECT
																									(BgL_new1353z00_5111))->
																								BgL_varsz00) =
																							((obj_t) BgL_auxz00_7125),
																							BUNSPEC);
																					}
																					BgL_arg2367z00_5108 =
																						BgL_new1353z00_5111;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_csequencez00_bglt
																						BgL_new1355z00_5117;
																					{	/* Tools/trace.sch 53 */
																						BgL_csequencez00_bglt
																							BgL_new1354z00_5118;
																						BgL_new1354z00_5118 =
																							((BgL_csequencez00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_csequencez00_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg2376z00_5119;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2830z00_5120;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_5121;

																									BgL_classz00_5121 =
																										BGl_csequencez00zzcgen_copz00;
																									BgL_res2830z00_5120 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_5121);
																								}
																								BgL_arg2376z00_5119 =
																									BgL_res2830z00_5120;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1354z00_5118),
																								BgL_arg2376z00_5119);
																						}
																						BgL_new1355z00_5117 =
																							BgL_new1354z00_5118;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1355z00_5117)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_jumpzd2exzd2itz00_bglt)
																												BgL_nodez00_4718))))->
																								BgL_locz00)), BUNSPEC);
																					((((BgL_csequencez00_bglt)
																								COBJECT(BgL_new1355z00_5117))->
																							BgL_czd2expzf3z21) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					{
																						obj_t BgL_auxz00_7139;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list2375z00_5122;

																							BgL_list2375z00_5122 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_vcopz00_5041),
																								BNIL);
																							BgL_auxz00_7139 =
																								BgL_list2375z00_5122;
																						}
																						((((BgL_csequencez00_bglt)
																									COBJECT
																									(BgL_new1355z00_5117))->
																								BgL_copsz00) =
																							((obj_t) BgL_auxz00_7139),
																							BUNSPEC);
																					}
																					BgL_arg2368z00_5109 =
																						BgL_new1355z00_5117;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_cjumpzd2exzd2itz00_bglt
																						BgL_arg2377z00_5123;
																					{	/* Tools/trace.sch 53 */
																						BgL_cjumpzd2exzd2itz00_bglt
																							BgL_new1357z00_5124;
																						{	/* Tools/trace.sch 53 */
																							BgL_cjumpzd2exzd2itz00_bglt
																								BgL_new1356z00_5125;
																							BgL_new1356z00_5125 =
																								((BgL_cjumpzd2exzd2itz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_cjumpzd2exzd2itz00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg2380z00_5126;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2832z00_5127;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_5128;

																										BgL_classz00_5128 =
																											BGl_cjumpzd2exzd2itz00zzcgen_copz00;
																										BgL_res2832z00_5127 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_5128);
																									}
																									BgL_arg2380z00_5126 =
																										BgL_res2832z00_5127;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1356z00_5125),
																									BgL_arg2380z00_5126);
																							}
																							BgL_new1357z00_5124 =
																								BgL_new1356z00_5125;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1357z00_5124)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4718))))->BgL_locz00)), BUNSPEC);
																						((((BgL_cjumpzd2exzd2itz00_bglt)
																									COBJECT
																									(BgL_new1357z00_5124))->
																								BgL_exitz00) =
																							((BgL_copz00_bglt) ((
																										(BgL_csetqz00_bglt)
																										COBJECT(((BgL_csetqz00_bglt)
																												BgL_ecopz00_5050)))->
																									BgL_valuez00)), BUNSPEC);
																						{
																							BgL_copz00_bglt BgL_auxz00_7155;

																							{	/* Tools/trace.sch 53 */
																								BgL_varcz00_bglt
																									BgL_new1359z00_5129;
																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1358z00_5130;
																									BgL_new1358z00_5130 =
																										((BgL_varcz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varcz00_bgl))));
																									{	/* Tools/trace.sch 53 */
																										long BgL_arg2379z00_5131;

																										{	/* Tools/trace.sch 53 */
																											long BgL_res2833z00_5132;

																											{	/* Tools/trace.sch 53 */
																												obj_t BgL_classz00_5133;

																												BgL_classz00_5133 =
																													BGl_varcz00zzcgen_copz00;
																												BgL_res2833z00_5132 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_5133);
																											}
																											BgL_arg2379z00_5131 =
																												BgL_res2833z00_5132;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1358z00_5130),
																											BgL_arg2379z00_5131);
																									}
																									BgL_new1359z00_5129 =
																										BgL_new1358z00_5130;
																								}
																								((((BgL_copz00_bglt) COBJECT(
																												((BgL_copz00_bglt)
																													BgL_new1359z00_5129)))->
																										BgL_locz00) =
																									((obj_t) (((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt) (
																															(BgL_jumpzd2exzd2itz00_bglt)
																															BgL_nodez00_4718))))->
																											BgL_locz00)), BUNSPEC);
																								((((BgL_varcz00_bglt)
																											COBJECT
																											(BgL_new1359z00_5129))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BgL_vauxz00_5036)),
																									BUNSPEC);
																								BgL_auxz00_7155 =
																									((BgL_copz00_bglt)
																									BgL_new1359z00_5129);
																							}
																							((((BgL_cjumpzd2exzd2itz00_bglt)
																										COBJECT
																										(BgL_new1357z00_5124))->
																									BgL_valuez00) =
																								((BgL_copz00_bglt)
																									BgL_auxz00_7155), BUNSPEC);
																						}
																						BgL_arg2377z00_5123 =
																							BgL_new1357z00_5124;
																					}
																					BgL_arg2369z00_5110 =
																						BgL_arg2377z00_5123;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_list2370z00_5134;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg2371z00_5135;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg2372z00_5136;

																							BgL_arg2372z00_5136 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg2369z00_5110),
																								BNIL);
																							BgL_arg2371z00_5135 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg2368z00_5109),
																								BgL_arg2372z00_5136);
																						}
																						BgL_list2370z00_5134 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_arg2367z00_5108),
																							BgL_arg2371z00_5135);
																					}
																					BgL_auxz00_7115 =
																						BgL_list2370z00_5134;
																			}}
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1351z00_5103))->
																					BgL_copsz00) =
																				((obj_t) BgL_auxz00_7115), BUNSPEC);
																		}
																		BgL_auxz00_7104 =
																			((BgL_copz00_bglt) BgL_new1351z00_5103);
																	}
																	((((BgL_cblockz00_bglt)
																				COBJECT(BgL_new1349z00_5099))->
																			BgL_bodyz00) =
																		((BgL_copz00_bglt) BgL_auxz00_7104),
																		BUNSPEC);
																}
																return ((BgL_copz00_bglt) BgL_new1349z00_5099);
															}
														else
															{	/* Tools/trace.sch 53 */
																BgL_cblockz00_bglt BgL_new1361z00_5137;

																{	/* Tools/trace.sch 53 */
																	BgL_cblockz00_bglt BgL_new1360z00_5138;

																	BgL_new1360z00_5138 =
																		((BgL_cblockz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_cblockz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg2405z00_5139;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2835z00_5140;

																			BgL_res2835z00_5140 =
																				BGL_CLASS_INDEX
																				(BGl_cblockz00zzcgen_copz00);
																			BgL_arg2405z00_5139 = BgL_res2835z00_5140;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1360z00_5138),
																			BgL_arg2405z00_5139);
																	}
																	BgL_new1361z00_5137 = BgL_new1360z00_5138;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1361z00_5137)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_jumpzd2exzd2itz00_bglt)
																							BgL_nodez00_4718))))->
																			BgL_locz00)), BUNSPEC);
																{
																	BgL_copz00_bglt BgL_auxz00_7188;

																	{	/* Tools/trace.sch 53 */
																		BgL_csequencez00_bglt BgL_new1363z00_5141;

																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1362z00_5142;

																			BgL_new1362z00_5142 =
																				((BgL_csequencez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_csequencez00_bgl))));
																			{	/* Tools/trace.sch 53 */
																				long BgL_arg2404z00_5143;

																				{	/* Tools/trace.sch 53 */
																					long BgL_res2836z00_5144;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_classz00_5145;

																						BgL_classz00_5145 =
																							BGl_csequencez00zzcgen_copz00;
																						BgL_res2836z00_5144 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_5145);
																					}
																					BgL_arg2404z00_5143 =
																						BgL_res2836z00_5144;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1362z00_5142),
																					BgL_arg2404z00_5143);
																			}
																			BgL_new1363z00_5141 = BgL_new1362z00_5142;
																		}
																		((((BgL_copz00_bglt) COBJECT(
																						((BgL_copz00_bglt)
																							BgL_new1363z00_5141)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt) (
																									(BgL_jumpzd2exzd2itz00_bglt)
																									BgL_nodez00_4718))))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_csequencez00_bglt)
																					COBJECT(BgL_new1363z00_5141))->
																				BgL_czd2expzf3z21) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																		{
																			obj_t BgL_auxz00_7199;

																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_arg2383z00_5146;
																				BgL_csequencez00_bglt
																					BgL_arg2384z00_5147;
																				BgL_cjumpzd2exzd2itz00_bglt
																					BgL_arg2385z00_5148;
																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_new1365z00_5149;
																					{	/* Tools/trace.sch 53 */
																						BgL_localzd2varzd2_bglt
																							BgL_new1364z00_5150;
																						BgL_new1364z00_5150 =
																							((BgL_localzd2varzd2_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_localzd2varzd2_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg2392z00_5151;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2837z00_5152;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_5153;

																									BgL_classz00_5153 =
																										BGl_localzd2varzd2zzcgen_copz00;
																									BgL_res2837z00_5152 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_5153);
																								}
																								BgL_arg2392z00_5151 =
																									BgL_res2837z00_5152;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1364z00_5150),
																								BgL_arg2392z00_5151);
																						}
																						BgL_new1365z00_5149 =
																							BgL_new1364z00_5150;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1365z00_5149)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_jumpzd2exzd2itz00_bglt)
																												BgL_nodez00_4718))))->
																								BgL_locz00)), BUNSPEC);
																					{
																						obj_t BgL_auxz00_7209;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list2390z00_5154;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg2391z00_5155;

																								BgL_arg2391z00_5155 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_vauxz00_5036),
																									BNIL);
																								BgL_list2390z00_5154 =
																									MAKE_YOUNG_PAIR(((obj_t)
																										BgL_eauxz00_5045),
																									BgL_arg2391z00_5155);
																							}
																							BgL_auxz00_7209 =
																								BgL_list2390z00_5154;
																						}
																						((((BgL_localzd2varzd2_bglt)
																									COBJECT
																									(BgL_new1365z00_5149))->
																								BgL_varsz00) =
																							((obj_t) BgL_auxz00_7209),
																							BUNSPEC);
																					}
																					BgL_arg2383z00_5146 =
																						BgL_new1365z00_5149;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_csequencez00_bglt
																						BgL_new1367z00_5156;
																					{	/* Tools/trace.sch 53 */
																						BgL_csequencez00_bglt
																							BgL_new1366z00_5157;
																						BgL_new1366z00_5157 =
																							((BgL_csequencez00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_csequencez00_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg2396z00_5158;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2839z00_5159;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_5160;

																									BgL_classz00_5160 =
																										BGl_csequencez00zzcgen_copz00;
																									BgL_res2839z00_5159 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_5160);
																								}
																								BgL_arg2396z00_5158 =
																									BgL_res2839z00_5159;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1366z00_5157),
																								BgL_arg2396z00_5158);
																						}
																						BgL_new1367z00_5156 =
																							BgL_new1366z00_5157;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1367z00_5156)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_jumpzd2exzd2itz00_bglt)
																												BgL_nodez00_4718))))->
																								BgL_locz00)), BUNSPEC);
																					((((BgL_csequencez00_bglt)
																								COBJECT(BgL_new1367z00_5156))->
																							BgL_czd2expzf3z21) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					{
																						obj_t BgL_auxz00_7225;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list2393z00_5161;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg2395z00_5162;

																								BgL_arg2395z00_5162 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_vcopz00_5041),
																									BNIL);
																								BgL_list2393z00_5161 =
																									MAKE_YOUNG_PAIR(((obj_t)
																										BgL_ecopz00_5050),
																									BgL_arg2395z00_5162);
																							}
																							BgL_auxz00_7225 =
																								BgL_list2393z00_5161;
																						}
																						((((BgL_csequencez00_bglt)
																									COBJECT
																									(BgL_new1367z00_5156))->
																								BgL_copsz00) =
																							((obj_t) BgL_auxz00_7225),
																							BUNSPEC);
																					}
																					BgL_arg2384z00_5147 =
																						BgL_new1367z00_5156;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_cjumpzd2exzd2itz00_bglt
																						BgL_arg2397z00_5163;
																					{	/* Tools/trace.sch 53 */
																						BgL_cjumpzd2exzd2itz00_bglt
																							BgL_new1369z00_5164;
																						{	/* Tools/trace.sch 53 */
																							BgL_cjumpzd2exzd2itz00_bglt
																								BgL_new1368z00_5165;
																							BgL_new1368z00_5165 =
																								((BgL_cjumpzd2exzd2itz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_cjumpzd2exzd2itz00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg2402z00_5166;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2841z00_5167;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_5168;

																										BgL_classz00_5168 =
																											BGl_cjumpzd2exzd2itz00zzcgen_copz00;
																										BgL_res2841z00_5167 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_5168);
																									}
																									BgL_arg2402z00_5166 =
																										BgL_res2841z00_5167;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1368z00_5165),
																									BgL_arg2402z00_5166);
																							}
																							BgL_new1369z00_5164 =
																								BgL_new1368z00_5165;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1369z00_5164)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4718))))->BgL_locz00)), BUNSPEC);
																						{
																							BgL_copz00_bglt BgL_auxz00_7240;

																							{	/* Tools/trace.sch 53 */
																								BgL_varcz00_bglt
																									BgL_new1371z00_5169;
																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1370z00_5170;
																									BgL_new1370z00_5170 =
																										((BgL_varcz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varcz00_bgl))));
																									{	/* Tools/trace.sch 53 */
																										long BgL_arg2398z00_5171;

																										{	/* Tools/trace.sch 53 */
																											long BgL_res2842z00_5172;

																											{	/* Tools/trace.sch 53 */
																												obj_t BgL_classz00_5173;

																												BgL_classz00_5173 =
																													BGl_varcz00zzcgen_copz00;
																												BgL_res2842z00_5172 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_5173);
																											}
																											BgL_arg2398z00_5171 =
																												BgL_res2842z00_5172;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1370z00_5170),
																											BgL_arg2398z00_5171);
																									}
																									BgL_new1371z00_5169 =
																										BgL_new1370z00_5170;
																								}
																								((((BgL_copz00_bglt) COBJECT(
																												((BgL_copz00_bglt)
																													BgL_new1371z00_5169)))->
																										BgL_locz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_varcz00_bglt)
																											COBJECT
																											(BgL_new1371z00_5169))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BgL_eauxz00_5045)),
																									BUNSPEC);
																								BgL_auxz00_7240 =
																									((BgL_copz00_bglt)
																									BgL_new1371z00_5169);
																							}
																							((((BgL_cjumpzd2exzd2itz00_bglt)
																										COBJECT
																										(BgL_new1369z00_5164))->
																									BgL_exitz00) =
																								((BgL_copz00_bglt)
																									BgL_auxz00_7240), BUNSPEC);
																						}
																						{
																							BgL_copz00_bglt BgL_auxz00_7251;

																							{	/* Tools/trace.sch 53 */
																								BgL_varcz00_bglt
																									BgL_new1373z00_5174;
																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1372z00_5175;
																									BgL_new1372z00_5175 =
																										((BgL_varcz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varcz00_bgl))));
																									{	/* Tools/trace.sch 53 */
																										long BgL_arg2399z00_5176;

																										{	/* Tools/trace.sch 53 */
																											long BgL_res2843z00_5177;

																											{	/* Tools/trace.sch 53 */
																												obj_t BgL_classz00_5178;

																												BgL_classz00_5178 =
																													BGl_varcz00zzcgen_copz00;
																												BgL_res2843z00_5177 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_5178);
																											}
																											BgL_arg2399z00_5176 =
																												BgL_res2843z00_5177;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1372z00_5175),
																											BgL_arg2399z00_5176);
																									}
																									BgL_new1373z00_5174 =
																										BgL_new1372z00_5175;
																								}
																								((((BgL_copz00_bglt) COBJECT(
																												((BgL_copz00_bglt)
																													BgL_new1373z00_5174)))->
																										BgL_locz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_varcz00_bglt)
																											COBJECT
																											(BgL_new1373z00_5174))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BgL_vauxz00_5036)),
																									BUNSPEC);
																								BgL_auxz00_7251 =
																									((BgL_copz00_bglt)
																									BgL_new1373z00_5174);
																							}
																							((((BgL_cjumpzd2exzd2itz00_bglt)
																										COBJECT
																										(BgL_new1369z00_5164))->
																									BgL_valuez00) =
																								((BgL_copz00_bglt)
																									BgL_auxz00_7251), BUNSPEC);
																						}
																						BgL_arg2397z00_5163 =
																							BgL_new1369z00_5164;
																					}
																					BgL_arg2385z00_5148 =
																						BgL_arg2397z00_5163;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_list2386z00_5179;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg2388z00_5180;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg2389z00_5181;

																							BgL_arg2389z00_5181 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg2385z00_5148),
																								BNIL);
																							BgL_arg2388z00_5180 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg2384z00_5147),
																								BgL_arg2389z00_5181);
																						}
																						BgL_list2386z00_5179 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_arg2383z00_5146),
																							BgL_arg2388z00_5180);
																					}
																					BgL_auxz00_7199 =
																						BgL_list2386z00_5179;
																			}}
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1363z00_5141))->
																					BgL_copsz00) =
																				((obj_t) BgL_auxz00_7199), BUNSPEC);
																		}
																		BgL_auxz00_7188 =
																			((BgL_copz00_bglt) BgL_new1363z00_5141);
																	}
																	((((BgL_cblockz00_bglt)
																				COBJECT(BgL_new1361z00_5137))->
																			BgL_bodyz00) =
																		((BgL_copz00_bglt) BgL_auxz00_7188),
																		BUNSPEC);
																}
																return ((BgL_copz00_bglt) BgL_new1361z00_5137);
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



/* &node->cop-set-ex-it1759 */
	BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2setzd2exzd2it1759z81zzcgen_cgenz00(obj_t
		BgL_envz00_4721, obj_t BgL_nodez00_4722, obj_t BgL_kontz00_4723,
		obj_t BgL_inpushexitz00_4724)
	{
		{	/* Cgen/cgen.scm 672 */
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_exitz00_5183;

				BgL_exitz00_5183 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4722)))->
								BgL_varz00)))->BgL_variablez00);
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_exitz00_5183);
				{	/* Tools/trace.sch 53 */
					BgL_csequencez00_bglt BgL_new1318z00_5184;

					{	/* Tools/trace.sch 53 */
						BgL_csequencez00_bglt BgL_new1317z00_5185;

						BgL_new1317z00_5185 =
							((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_csequencez00_bgl))));
						{	/* Tools/trace.sch 53 */
							long BgL_arg2327z00_5186;

							{	/* Tools/trace.sch 53 */
								long BgL_res2799z00_5187;

								BgL_res2799z00_5187 =
									BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
								BgL_arg2327z00_5186 = BgL_res2799z00_5187;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1317z00_5185),
								BgL_arg2327z00_5186);
						}
						BgL_new1318z00_5184 = BgL_new1317z00_5185;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1318z00_5184)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
												BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
					((((BgL_csequencez00_bglt) COBJECT(BgL_new1318z00_5184))->
							BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
					{
						obj_t BgL_auxz00_7286;

						{	/* Tools/trace.sch 53 */
							BgL_cpragmaz00_bglt BgL_arg2296z00_5188;
							BgL_localzd2varzd2_bglt BgL_arg2297z00_5189;
							BgL_csetzd2exzd2itz00_bglt BgL_arg2298z00_5190;

							{	/* Tools/trace.sch 53 */
								BgL_cpragmaz00_bglt BgL_new1320z00_5191;

								{	/* Tools/trace.sch 53 */
									BgL_cpragmaz00_bglt BgL_new1319z00_5192;

									BgL_new1319z00_5192 =
										((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_cpragmaz00_bgl))));
									{	/* Tools/trace.sch 53 */
										long BgL_arg2303z00_5193;

										{	/* Tools/trace.sch 53 */
											long BgL_res2800z00_5194;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_classz00_5195;

												BgL_classz00_5195 = BGl_cpragmaz00zzcgen_copz00;
												BgL_res2800z00_5194 =
													BGL_CLASS_INDEX(BgL_classz00_5195);
											}
											BgL_arg2303z00_5193 = BgL_res2800z00_5194;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1319z00_5192),
											BgL_arg2303z00_5193);
									}
									BgL_new1320z00_5191 = BgL_new1319z00_5192;
								}
								((((BgL_copz00_bglt) COBJECT(
												((BgL_copz00_bglt) BgL_new1320z00_5191)))->BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
															BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
								((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1320z00_5191))->
										BgL_formatz00) =
									((obj_t) BGl_string2928z00zzcgen_cgenz00), BUNSPEC);
								((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1320z00_5191))->
										BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_arg2296z00_5188 = BgL_new1320z00_5191;
							}
							{	/* Tools/trace.sch 53 */
								BgL_localzd2varzd2_bglt BgL_new1322z00_5196;

								{	/* Tools/trace.sch 53 */
									BgL_localzd2varzd2_bglt BgL_new1321z00_5197;

									BgL_new1321z00_5197 =
										((BgL_localzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_localzd2varzd2_bgl))));
									{	/* Tools/trace.sch 53 */
										long BgL_arg2308z00_5198;

										{	/* Tools/trace.sch 53 */
											long BgL_res2801z00_5199;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_classz00_5200;

												BgL_classz00_5200 = BGl_localzd2varzd2zzcgen_copz00;
												BgL_res2801z00_5199 =
													BGL_CLASS_INDEX(BgL_classz00_5200);
											}
											BgL_arg2308z00_5198 = BgL_res2801z00_5199;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1321z00_5197),
											BgL_arg2308z00_5198);
									}
									BgL_new1322z00_5196 = BgL_new1321z00_5197;
								}
								((((BgL_copz00_bglt) COBJECT(
												((BgL_copz00_bglt) BgL_new1322z00_5196)))->BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
															BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
								{
									obj_t BgL_auxz00_7307;

									{	/* Tools/trace.sch 53 */
										BgL_variablez00_bglt BgL_arg2305z00_5201;

										BgL_arg2305z00_5201 =
											(((BgL_varz00_bglt) COBJECT(
													(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																((BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_4722)))->BgL_varz00)))->
											BgL_variablez00);
										{	/* Tools/trace.sch 53 */
											obj_t BgL_list2306z00_5202;

											BgL_list2306z00_5202 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg2305z00_5201), BNIL);
											BgL_auxz00_7307 = BgL_list2306z00_5202;
									}}
									((((BgL_localzd2varzd2_bglt) COBJECT(BgL_new1322z00_5196))->
											BgL_varsz00) = ((obj_t) BgL_auxz00_7307), BUNSPEC);
								}
								BgL_arg2297z00_5189 = BgL_new1322z00_5196;
							}
							{	/* Tools/trace.sch 53 */
								BgL_csetzd2exzd2itz00_bglt BgL_new1324z00_5203;

								{	/* Tools/trace.sch 53 */
									BgL_csetzd2exzd2itz00_bglt BgL_new1323z00_5204;

									BgL_new1323z00_5204 =
										((BgL_csetzd2exzd2itz00_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_csetzd2exzd2itz00_bgl))));
									{	/* Tools/trace.sch 53 */
										long BgL_arg2326z00_5205;

										{	/* Tools/trace.sch 53 */
											long BgL_res2803z00_5206;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_classz00_5207;

												BgL_classz00_5207 = BGl_csetzd2exzd2itz00zzcgen_copz00;
												BgL_res2803z00_5206 =
													BGL_CLASS_INDEX(BgL_classz00_5207);
											}
											BgL_arg2326z00_5205 = BgL_res2803z00_5206;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1323z00_5204),
											BgL_arg2326z00_5205);
									}
									BgL_new1324z00_5203 = BgL_new1323z00_5204;
								}
								((((BgL_copz00_bglt) COBJECT(
												((BgL_copz00_bglt) BgL_new1324z00_5203)))->BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
															BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
								{
									BgL_copz00_bglt BgL_auxz00_7323;

									{	/* Tools/trace.sch 53 */
										BgL_varcz00_bglt BgL_new1326z00_5208;

										{	/* Tools/trace.sch 53 */
											BgL_varcz00_bglt BgL_new1325z00_5209;

											BgL_new1325z00_5209 =
												((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varcz00_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2309z00_5210;

												{	/* Tools/trace.sch 53 */
													long BgL_res2804z00_5211;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_classz00_5212;

														BgL_classz00_5212 = BGl_varcz00zzcgen_copz00;
														BgL_res2804z00_5211 =
															BGL_CLASS_INDEX(BgL_classz00_5212);
													}
													BgL_arg2309z00_5210 = BgL_res2804z00_5211;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1325z00_5209),
													BgL_arg2309z00_5210);
											}
											BgL_new1326z00_5208 = BgL_new1325z00_5209;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1326z00_5208)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) (
																	(BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
										((((BgL_varcz00_bglt) COBJECT(BgL_new1326z00_5208))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) BgL_exitz00_5183), BUNSPEC);
										BgL_auxz00_7323 = ((BgL_copz00_bglt) BgL_new1326z00_5208);
									}
									((((BgL_csetzd2exzd2itz00_bglt)
												COBJECT(BgL_new1324z00_5203))->BgL_exitz00) =
										((BgL_copz00_bglt) BgL_auxz00_7323), BUNSPEC);
								}
								{
									BgL_copz00_bglt BgL_auxz00_7336;

									{	/* Tools/trace.sch 53 */
										BgL_pragmaz00_bglt BgL_arg2310z00_5213;

										{	/* Tools/trace.sch 53 */
											BgL_pragmaz00_bglt BgL_new1328z00_5214;

											{	/* Tools/trace.sch 53 */
												BgL_pragmaz00_bglt BgL_new1327z00_5215;

												BgL_new1327z00_5215 =
													((BgL_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_pragmaz00_bgl))));
												{	/* Tools/trace.sch 53 */
													long BgL_arg2311z00_5216;

													{	/* Tools/trace.sch 53 */
														long BgL_res2805z00_5217;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_classz00_5218;

															BgL_classz00_5218 = BGl_pragmaz00zzast_nodez00;
															BgL_res2805z00_5217 =
																BGL_CLASS_INDEX(BgL_classz00_5218);
														}
														BgL_arg2311z00_5216 = BgL_res2805z00_5217;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1327z00_5215),
														BgL_arg2311z00_5216);
												}
												{	/* Tools/trace.sch 53 */
													BgL_objectz00_bglt BgL_tmpz00_7341;

													BgL_tmpz00_7341 =
														((BgL_objectz00_bglt) BgL_new1327z00_5215);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7341, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1327z00_5215);
												BgL_new1328z00_5214 = BgL_new1327z00_5215;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1328z00_5214)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) (
																		(BgL_setzd2exzd2itz00_bglt)
																		BgL_nodez00_4722))))->BgL_locz00)),
												BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1328z00_5214)))->BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1328z00_5214)))->BgL_sidezd2effectzd2) =
												((obj_t) BUNSPEC), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1328z00_5214)))->BgL_keyz00) =
												((obj_t) BINT(((long) -1))), BUNSPEC);
											((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
																BgL_new1328z00_5214)))->BgL_exprza2za2) =
												((obj_t) BNIL), BUNSPEC);
											((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
																BgL_new1328z00_5214)))->BgL_effectz00) =
												((obj_t) BUNSPEC), BUNSPEC);
											((((BgL_pragmaz00_bglt) COBJECT(BgL_new1328z00_5214))->
													BgL_formatz00) =
												((obj_t) BGl_string2929z00zzcgen_cgenz00), BUNSPEC);
											BgL_arg2310z00_5213 = BgL_new1328z00_5214;
										}
										BgL_auxz00_7336 =
											BGl_nodezd2ze3copz31zzcgen_cgenz00(
											((BgL_nodez00_bglt) BgL_arg2310z00_5213),
											BgL_kontz00_4723, CBOOL(BgL_inpushexitz00_4724));
									}
									((((BgL_csetzd2exzd2itz00_bglt)
												COBJECT(BgL_new1324z00_5203))->BgL_jumpzd2valuezd2) =
										((BgL_copz00_bglt) BgL_auxz00_7336), BUNSPEC);
								}
								{
									BgL_copz00_bglt BgL_auxz00_7367;

									{	/* Tools/trace.sch 53 */
										BgL_csequencez00_bglt BgL_new1330z00_5219;

										{	/* Tools/trace.sch 53 */
											BgL_csequencez00_bglt BgL_new1329z00_5220;

											BgL_new1329z00_5220 =
												((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_csequencez00_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2325z00_5221;

												{	/* Tools/trace.sch 53 */
													long BgL_res2806z00_5222;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_classz00_5223;

														BgL_classz00_5223 = BGl_csequencez00zzcgen_copz00;
														BgL_res2806z00_5222 =
															BGL_CLASS_INDEX(BgL_classz00_5223);
													}
													BgL_arg2325z00_5221 = BgL_res2806z00_5222;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1329z00_5220),
													BgL_arg2325z00_5221);
											}
											BgL_new1330z00_5219 = BgL_new1329z00_5220;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1330z00_5219)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) (
																	(BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_4722))))->BgL_locz00)), BUNSPEC);
										((((BgL_csequencez00_bglt) COBJECT(BgL_new1330z00_5219))->
												BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										{
											obj_t BgL_auxz00_7378;

											{	/* Tools/trace.sch 53 */
												BgL_copz00_bglt BgL_arg2312z00_5224;
												BgL_copz00_bglt BgL_arg2313z00_5225;

												{	/* Tools/trace.sch 53 */
													BgL_setqz00_bglt BgL_arg2318z00_5226;

													{	/* Tools/trace.sch 53 */
														BgL_pragmaz00_bglt BgL_arg2319z00_5227;

														{	/* Tools/trace.sch 53 */
															BgL_pragmaz00_bglt BgL_new1332z00_5228;

															{	/* Tools/trace.sch 53 */
																BgL_pragmaz00_bglt BgL_new1331z00_5229;

																BgL_new1331z00_5229 =
																	((BgL_pragmaz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_pragmaz00_bgl))));
																{	/* Tools/trace.sch 53 */
																	long BgL_arg2323z00_5230;

																	{	/* Tools/trace.sch 53 */
																		long BgL_res2807z00_5231;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_classz00_5232;

																			BgL_classz00_5232 =
																				BGl_pragmaz00zzast_nodez00;
																			BgL_res2807z00_5231 =
																				BGL_CLASS_INDEX(BgL_classz00_5232);
																		}
																		BgL_arg2323z00_5230 = BgL_res2807z00_5231;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1331z00_5229),
																		BgL_arg2323z00_5230);
																}
																{	/* Tools/trace.sch 53 */
																	BgL_objectz00_bglt BgL_tmpz00_7383;

																	BgL_tmpz00_7383 =
																		((BgL_objectz00_bglt) BgL_new1331z00_5229);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7383,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1331z00_5229);
																BgL_new1332z00_5228 = BgL_new1331z00_5229;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1332z00_5228)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_setzd2exzd2itz00_bglt)
																						BgL_nodez00_4722))))->BgL_locz00)),
																BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1332z00_5228)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1332z00_5228)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1332z00_5228)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															((((BgL_externz00_bglt)
																		COBJECT(((BgL_externz00_bglt)
																				BgL_new1332z00_5228)))->
																	BgL_exprza2za2) = ((obj_t) BNIL), BUNSPEC);
															((((BgL_externz00_bglt)
																		COBJECT(((BgL_externz00_bglt)
																				BgL_new1332z00_5228)))->BgL_effectz00) =
																((obj_t) BUNSPEC), BUNSPEC);
															{
																obj_t BgL_auxz00_7404;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg2320z00_5233;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg2321z00_5234;

																		BgL_arg2321z00_5234 =
																			(((BgL_typez00_bglt) COBJECT(
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_exitz00_5183))))->
																						BgL_typez00)))->BgL_namez00);
																		BgL_arg2320z00_5233 =
																			BGl_stringzd2sanszd2z42z42zztype_toolsz00
																			(BgL_arg2321z00_5234);
																	}
																	BgL_auxz00_7404 =
																		string_append_3
																		(BGl_string2886z00zzcgen_cgenz00,
																		BgL_arg2320z00_5233,
																		BGl_string2930z00zzcgen_cgenz00);
																}
																((((BgL_pragmaz00_bglt)
																			COBJECT(BgL_new1332z00_5228))->
																		BgL_formatz00) =
																	((obj_t) BgL_auxz00_7404), BUNSPEC);
															}
															BgL_arg2319z00_5227 = BgL_new1332z00_5228;
														}
														BgL_arg2318z00_5226 =
															BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_exitz00_5183,
															((BgL_nodez00_bglt) BgL_arg2319z00_5227));
													}
													BgL_arg2312z00_5224 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00(
														((BgL_nodez00_bglt) BgL_arg2318z00_5226),
														BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
														CBOOL(BgL_inpushexitz00_4724));
												}
												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg2324z00_5235;

													BgL_arg2324z00_5235 =
														(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																((BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_4722)))->BgL_bodyz00);
													BgL_arg2313z00_5225 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00
														(BgL_arg2324z00_5235, BgL_kontz00_4723,
														CBOOL(BgL_inpushexitz00_4724));
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_list2314z00_5236;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2316z00_5237;

														BgL_arg2316z00_5237 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2313z00_5225), BNIL);
														BgL_list2314z00_5236 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2312z00_5224),
															BgL_arg2316z00_5237);
													}
													BgL_auxz00_7378 = BgL_list2314z00_5236;
											}}
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1330z00_5219))->
													BgL_copsz00) = ((obj_t) BgL_auxz00_7378), BUNSPEC);
										}
										BgL_auxz00_7367 = ((BgL_copz00_bglt) BgL_new1330z00_5219);
									}
									((((BgL_csetzd2exzd2itz00_bglt)
												COBJECT(BgL_new1324z00_5203))->BgL_bodyz00) =
										((BgL_copz00_bglt) BgL_auxz00_7367), BUNSPEC);
								}
								BgL_arg2298z00_5190 = BgL_new1324z00_5203;
							}
							{	/* Tools/trace.sch 53 */
								obj_t BgL_list2299z00_5238;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg2300z00_5239;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg2302z00_5240;

										BgL_arg2302z00_5240 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg2298z00_5190), BNIL);
										BgL_arg2300z00_5239 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg2297z00_5189), BgL_arg2302z00_5240);
									}
									BgL_list2299z00_5238 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg2296z00_5188), BgL_arg2300z00_5239);
								}
								BgL_auxz00_7286 = BgL_list2299z00_5238;
						}}
						((((BgL_csequencez00_bglt) COBJECT(BgL_new1318z00_5184))->
								BgL_copsz00) = ((obj_t) BgL_auxz00_7286), BUNSPEC);
					}
					return ((BgL_copz00_bglt) BgL_new1318z00_5184);
				}
			}
		}

	}



/* &node->cop-let-var1757 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2letzd2var1757z53zzcgen_cgenz00(obj_t
		BgL_envz00_4725, obj_t BgL_nodez00_4726, obj_t BgL_kontz00_4727,
		obj_t BgL_inpushexitz00_4728)
	{
		{	/* Cgen/cgen.scm 582 */
			{	/* Cgen/cgen.scm 639 */
				obj_t BgL_g1700z00_5242;

				BgL_g1700z00_5242 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4726)))->BgL_bindingsz00);
				{
					obj_t BgL_l1698z00_5244;

					BgL_l1698z00_5244 = BgL_g1700z00_5242;
				BgL_zc3z04anonymousza32212ze3z87_5243:
					if (PAIRP(BgL_l1698z00_5244))
						{	/* Cgen/cgen.scm 639 */
							{	/* Cgen/cgen.scm 639 */
								obj_t BgL_xz00_5245;

								BgL_xz00_5245 = CAR(BgL_l1698z00_5244);
								{	/* Cgen/cgen.scm 639 */
									obj_t BgL_arg2214z00_5246;

									BgL_arg2214z00_5246 = CAR(((obj_t) BgL_xz00_5245));
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
										((BgL_variablez00_bglt) BgL_arg2214z00_5246));
								}
							}
							{
								obj_t BgL_l1698z00_7445;

								BgL_l1698z00_7445 = CDR(BgL_l1698z00_5244);
								BgL_l1698z00_5244 = BgL_l1698z00_7445;
								goto BgL_zc3z04anonymousza32212ze3z87_5243;
							}
						}
					else
						{	/* Cgen/cgen.scm 639 */
							((bool_t) 1);
						}
				}
			}
			{	/* Cgen/cgen.scm 640 */
				obj_t BgL_allocaz00_5247;
				BgL_localzd2varzd2_bglt BgL_declsz00_5248;
				obj_t BgL_setsz00_5249;
				BgL_stopz00_bglt BgL_bodyz00_5250;

				BgL_allocaz00_5247 =
					BGl_zc3z04anonymousza32225ze3ze70z60zzcgen_cgenz00
					(BgL_inpushexitz00_4728,
					(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
									BgL_nodez00_4726)))->BgL_bindingsz00));
				{	/* Cgen/cgen.scm 641 */
					BgL_localzd2varzd2_bglt BgL_new1308z00_5251;

					{	/* Cgen/cgen.scm 642 */
						BgL_localzd2varzd2_bglt BgL_new1307z00_5252;

						BgL_new1307z00_5252 =
							((BgL_localzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzd2varzd2_bgl))));
						{	/* Cgen/cgen.scm 642 */
							long BgL_arg2239z00_5253;

							{	/* Cgen/cgen.scm 642 */
								long BgL_res2787z00_5254;

								BgL_res2787z00_5254 =
									BGL_CLASS_INDEX(BGl_localzd2varzd2zzcgen_copz00);
								BgL_arg2239z00_5253 = BgL_res2787z00_5254;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1307z00_5252),
								BgL_arg2239z00_5253);
						}
						BgL_new1308z00_5251 = BgL_new1307z00_5252;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1308z00_5251)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
												BgL_nodez00_4726))))->BgL_locz00)), BUNSPEC);
					{
						obj_t BgL_auxz00_7459;

						{	/* Cgen/cgen.scm 643 */
							obj_t BgL_l1704z00_5255;

							BgL_l1704z00_5255 =
								(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_4726)))->
								BgL_bindingsz00);
							if (NULLP(BgL_l1704z00_5255))
								{	/* Cgen/cgen.scm 643 */
									BgL_auxz00_7459 = BNIL;
								}
							else
								{	/* Cgen/cgen.scm 643 */
									obj_t BgL_head1706z00_5256;

									{	/* Cgen/cgen.scm 643 */
										obj_t BgL_arg2237z00_5257;

										{	/* Cgen/cgen.scm 643 */
											obj_t BgL_pairz00_5258;

											BgL_pairz00_5258 = CAR(((obj_t) BgL_l1704z00_5255));
											BgL_arg2237z00_5257 = CAR(BgL_pairz00_5258);
										}
										{	/* Cgen/cgen.scm 643 */
											obj_t BgL_res2789z00_5259;

											BgL_res2789z00_5259 =
												MAKE_YOUNG_PAIR(BgL_arg2237z00_5257, BNIL);
											BgL_head1706z00_5256 = BgL_res2789z00_5259;
										}
									}
									{	/* Cgen/cgen.scm 643 */
										obj_t BgL_g1709z00_5260;

										BgL_g1709z00_5260 = CDR(((obj_t) BgL_l1704z00_5255));
										{
											obj_t BgL_l1704z00_5262;
											obj_t BgL_tail1707z00_5263;

											BgL_l1704z00_5262 = BgL_g1709z00_5260;
											BgL_tail1707z00_5263 = BgL_head1706z00_5256;
										BgL_zc3z04anonymousza32232ze3z87_5261:
											if (NULLP(BgL_l1704z00_5262))
												{	/* Cgen/cgen.scm 643 */
													BgL_auxz00_7459 = BgL_head1706z00_5256;
												}
											else
												{	/* Cgen/cgen.scm 643 */
													obj_t BgL_newtail1708z00_5264;

													{	/* Cgen/cgen.scm 643 */
														obj_t BgL_arg2235z00_5265;

														{	/* Cgen/cgen.scm 643 */
															obj_t BgL_pairz00_5266;

															BgL_pairz00_5266 =
																CAR(((obj_t) BgL_l1704z00_5262));
															BgL_arg2235z00_5265 = CAR(BgL_pairz00_5266);
														}
														{	/* Cgen/cgen.scm 643 */
															obj_t BgL_res2791z00_5267;

															BgL_res2791z00_5267 =
																MAKE_YOUNG_PAIR(BgL_arg2235z00_5265, BNIL);
															BgL_newtail1708z00_5264 = BgL_res2791z00_5267;
														}
													}
													SET_CDR(BgL_tail1707z00_5263,
														BgL_newtail1708z00_5264);
													{	/* Cgen/cgen.scm 643 */
														obj_t BgL_arg2234z00_5268;

														BgL_arg2234z00_5268 =
															CDR(((obj_t) BgL_l1704z00_5262));
														{
															obj_t BgL_tail1707z00_7480;
															obj_t BgL_l1704z00_7479;

															BgL_l1704z00_7479 = BgL_arg2234z00_5268;
															BgL_tail1707z00_7480 = BgL_newtail1708z00_5264;
															BgL_tail1707z00_5263 = BgL_tail1707z00_7480;
															BgL_l1704z00_5262 = BgL_l1704z00_7479;
															goto BgL_zc3z04anonymousza32232ze3z87_5261;
														}
													}
												}
										}
									}
								}
						}
						((((BgL_localzd2varzd2_bglt) COBJECT(BgL_new1308z00_5251))->
								BgL_varsz00) = ((obj_t) BgL_auxz00_7459), BUNSPEC);
					}
					BgL_declsz00_5248 = BgL_new1308z00_5251;
				}
				{	/* Cgen/cgen.scm 644 */
					obj_t BgL_l1710z00_5269;

					BgL_l1710z00_5269 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_4726)))->BgL_bindingsz00);
					if (NULLP(BgL_l1710z00_5269))
						{	/* Cgen/cgen.scm 644 */
							BgL_setsz00_5249 = BNIL;
						}
					else
						{	/* Cgen/cgen.scm 644 */
							obj_t BgL_head1712z00_5270;

							{	/* Cgen/cgen.scm 644 */
								obj_t BgL_res2793z00_5271;

								BgL_res2793z00_5271 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1712z00_5270 = BgL_res2793z00_5271;
							}
							{
								obj_t BgL_l1710z00_5273;
								obj_t BgL_tail1713z00_5274;

								BgL_l1710z00_5273 = BgL_l1710z00_5269;
								BgL_tail1713z00_5274 = BgL_head1712z00_5270;
							BgL_zc3z04anonymousza32241ze3z87_5272:
								if (NULLP(BgL_l1710z00_5273))
									{	/* Cgen/cgen.scm 644 */
										BgL_setsz00_5249 = CDR(BgL_head1712z00_5270);
									}
								else
									{	/* Cgen/cgen.scm 644 */
										obj_t BgL_newtail1714z00_5275;

										{	/* Cgen/cgen.scm 644 */
											BgL_copz00_bglt BgL_arg2244z00_5276;

											{	/* Cgen/cgen.scm 644 */
												obj_t BgL_xz00_5277;

												BgL_xz00_5277 = CAR(((obj_t) BgL_l1710z00_5273));
												{	/* Cgen/cgen.scm 645 */
													BgL_setqz00_bglt BgL_arg2245z00_5278;

													{	/* Cgen/cgen.scm 645 */
														obj_t BgL_arg2246z00_5279;
														obj_t BgL_arg2247z00_5280;

														BgL_arg2246z00_5279 = CAR(((obj_t) BgL_xz00_5277));
														BgL_arg2247z00_5280 = CDR(((obj_t) BgL_xz00_5277));
														BgL_arg2245z00_5278 =
															BGl_nodezd2setqzd2zzcgen_cgenz00(
															((BgL_variablez00_bglt) BgL_arg2246z00_5279),
															((BgL_nodez00_bglt) BgL_arg2247z00_5280));
													}
													BgL_arg2244z00_5276 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00(
														((BgL_nodez00_bglt) BgL_arg2245z00_5278),
														BGl_za2stopzd2kontza2zd2zzcgen_cgenz00,
														CBOOL(BgL_inpushexitz00_4728));
												}
											}
											{	/* Cgen/cgen.scm 644 */
												obj_t BgL_res2795z00_5281;

												BgL_res2795z00_5281 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg2244z00_5276), BNIL);
												BgL_newtail1714z00_5275 = BgL_res2795z00_5281;
											}
										}
										SET_CDR(BgL_tail1713z00_5274, BgL_newtail1714z00_5275);
										{	/* Cgen/cgen.scm 644 */
											obj_t BgL_arg2243z00_5282;

											BgL_arg2243z00_5282 = CDR(((obj_t) BgL_l1710z00_5273));
											{
												obj_t BgL_tail1713z00_7508;
												obj_t BgL_l1710z00_7507;

												BgL_l1710z00_7507 = BgL_arg2243z00_5282;
												BgL_tail1713z00_7508 = BgL_newtail1714z00_5275;
												BgL_tail1713z00_5274 = BgL_tail1713z00_7508;
												BgL_l1710z00_5273 = BgL_l1710z00_7507;
												goto BgL_zc3z04anonymousza32241ze3z87_5272;
											}
										}
									}
							}
						}
				}
				{	/* Cgen/cgen.scm 648 */
					BgL_copz00_bglt BgL_copz00_5283;

					BgL_copz00_5283 =
						BGl_nodezd2ze3copz31zzcgen_cgenz00(
						(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_4726)))->BgL_bodyz00),
						BgL_kontz00_4727, CBOOL(BgL_inpushexitz00_4728));
					{	/* Cgen/cgen.scm 649 */
						BgL_stopz00_bglt BgL_new1310z00_5284;

						{	/* Cgen/cgen.scm 649 */
							BgL_stopz00_bglt BgL_new1309z00_5285;

							BgL_new1309z00_5285 =
								((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_stopz00_bgl))));
							{	/* Cgen/cgen.scm 649 */
								long BgL_arg2248z00_5286;

								{	/* Cgen/cgen.scm 649 */
									long BgL_res2796z00_5287;

									BgL_res2796z00_5287 =
										BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
									BgL_arg2248z00_5286 = BgL_res2796z00_5287;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1309z00_5285),
									BgL_arg2248z00_5286);
							}
							BgL_new1310z00_5284 = BgL_new1309z00_5285;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1310z00_5284)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_stopz00_bglt) COBJECT(BgL_new1310z00_5284))->BgL_valuez00) =
							((BgL_copz00_bglt) BgL_copz00_5283), BUNSPEC);
						BgL_bodyz00_5250 = BgL_new1310z00_5284;
				}}
				{	/* Cgen/cgen.scm 653 */
					BgL_copz00_bglt BgL_arg2216z00_5288;
					obj_t BgL_arg2217z00_5289;

					{	/* Cgen/cgen.scm 653 */
						BgL_csequencez00_bglt BgL_arg2218z00_5290;
						obj_t BgL_arg2219z00_5291;

						{	/* Cgen/cgen.scm 653 */
							BgL_csequencez00_bglt BgL_new1313z00_5292;

							{	/* Cgen/cgen.scm 654 */
								BgL_csequencez00_bglt BgL_new1312z00_5293;

								BgL_new1312z00_5293 =
									((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_csequencez00_bgl))));
								{	/* Cgen/cgen.scm 654 */
									long BgL_arg2224z00_5294;

									{	/* Cgen/cgen.scm 654 */
										long BgL_res2797z00_5295;

										BgL_res2797z00_5295 =
											BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
										BgL_arg2224z00_5294 = BgL_res2797z00_5295;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1312z00_5293),
										BgL_arg2224z00_5294);
								}
								BgL_new1313z00_5292 = BgL_new1312z00_5293;
							}
							((((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt) BgL_new1313z00_5292)))->BgL_locz00) =
								((obj_t) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
														BgL_nodez00_4726))))->BgL_locz00)), BUNSPEC);
							((((BgL_csequencez00_bglt) COBJECT(BgL_new1313z00_5292))->
									BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							{
								obj_t BgL_auxz00_7530;

								{	/* Cgen/cgen.scm 655 */
									obj_t BgL_arg2220z00_5296;

									{	/* Cgen/cgen.scm 655 */
										obj_t BgL_arg2221z00_5297;

										{	/* Cgen/cgen.scm 655 */
											obj_t BgL_arg2222z00_5298;

											{	/* Cgen/cgen.scm 655 */
												obj_t BgL_list2223z00_5299;

												BgL_list2223z00_5299 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_bodyz00_5250), BNIL);
												BgL_arg2222z00_5298 = BgL_list2223z00_5299;
											}
											BgL_arg2221z00_5297 =
												BGl_appendzd221011zd2zzcgen_cgenz00(BgL_setsz00_5249,
												BgL_arg2222z00_5298);
										}
										BgL_arg2220z00_5296 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_declsz00_5248), BgL_arg2221z00_5297);
									}
									BgL_auxz00_7530 =
										BGl_appendzd221011zd2zzcgen_cgenz00(BgL_allocaz00_5247,
										BgL_arg2220z00_5296);
								}
								((((BgL_csequencez00_bglt) COBJECT(BgL_new1313z00_5292))->
										BgL_copsz00) = ((obj_t) BgL_auxz00_7530), BUNSPEC);
							}
							BgL_arg2218z00_5290 = BgL_new1313z00_5292;
						}
						BgL_arg2219z00_5291 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2varzd2_bglt) BgL_nodez00_4726))))->BgL_locz00);
						BgL_arg2216z00_5288 =
							BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
							((BgL_copz00_bglt) BgL_arg2218z00_5290), BgL_arg2219z00_5291);
					}
					BgL_arg2217z00_5289 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_4726))))->BgL_locz00);
					return
						((BgL_copz00_bglt)
						BGl_blockzd2kontzd2zzcgen_cgenz00(
							((obj_t) BgL_arg2216z00_5288), BgL_arg2217z00_5289));
				}
			}
		}

	}



/* <@anonymous:2225>~0 */
	obj_t BGl_zc3z04anonymousza32225ze3ze70z60zzcgen_cgenz00(obj_t
		BgL_inpushexitz00_4800, obj_t BgL_l1702z00_2853)
	{
		{	/* Cgen/cgen.scm 640 */
			{
				obj_t BgL_xz00_2901;

				if (NULLP(BgL_l1702z00_2853))
					{	/* Cgen/cgen.scm 640 */
						return BNIL;
					}
				else
					{	/* Cgen/cgen.scm 640 */
						obj_t BgL_arg2227z00_2856;
						obj_t BgL_arg2228z00_2857;

						{	/* Cgen/cgen.scm 640 */
							obj_t BgL_arg2229z00_2858;

							BgL_arg2229z00_2858 = CAR(((obj_t) BgL_l1702z00_2853));
							BgL_xz00_2901 = BgL_arg2229z00_2858;
							{	/* Cgen/cgen.scm 589 */
								bool_t BgL_test3075z00_7553;

								{	/* Cgen/cgen.scm 589 */
									bool_t BgL_test3076z00_7554;

									{	/* Cgen/cgen.scm 589 */
										obj_t BgL_arg2295z00_2994;

										BgL_arg2295z00_2994 = CDR(((obj_t) BgL_xz00_2901));
										BgL_test3076z00_7554 =
											BGl_isazf3zf3zz__objectz00(BgL_arg2295z00_2994,
											BGl_appz00zzast_nodez00);
									}
									if (BgL_test3076z00_7554)
										{	/* Cgen/cgen.scm 589 */
											if (CBOOL(
													(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt)
																	CDR(
																		((obj_t) BgL_xz00_2901)))))->
														BgL_stackablez00)))
												{	/* Cgen/cgen.scm 590 */
													BgL_test3075z00_7553 =
														CBOOL(BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 14))));
												}
											else
												{	/* Cgen/cgen.scm 590 */
													BgL_test3075z00_7553 = ((bool_t) 0);
												}
										}
									else
										{	/* Cgen/cgen.scm 589 */
											BgL_test3075z00_7553 = ((bool_t) 0);
										}
								}
								if (BgL_test3075z00_7553)
									{	/* Cgen/cgen.scm 592 */
										BgL_appz00_bglt BgL_i1270z00_2910;

										BgL_i1270z00_2910 =
											((BgL_appz00_bglt) CDR(((obj_t) BgL_xz00_2901)));
										{	/* Cgen/cgen.scm 593 */
											BgL_variablez00_bglt BgL_vz00_2911;

											BgL_vz00_2911 =
												(((BgL_varz00_bglt) COBJECT(
														(((BgL_appz00_bglt) COBJECT(BgL_i1270z00_2910))->
															BgL_funz00)))->BgL_variablez00);
											{	/* Cgen/cgen.scm 593 */
												obj_t BgL_saz00_2912;

												BgL_saz00_2912 =
													(((BgL_funz00_bglt) COBJECT(
															((BgL_funz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_vz00_2911))))->BgL_valuez00))))->
													BgL_stackzd2allocatorzd2);
												{	/* Cgen/cgen.scm 594 */

													{	/* Cgen/cgen.scm 596 */
														obj_t BgL_idz00_2913;

														BgL_idz00_2913 =
															BGl_gensymz00zz__r4_symbols_6_4z00(
															(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2911))->
																BgL_idz00));
														{	/* Cgen/cgen.scm 596 */
															BgL_localz00_bglt BgL_declz00_2914;

															{	/* Cgen/cgen.scm 597 */
																BgL_localz00_bglt BgL_dz00_2959;

																{	/* Cgen/cgen.scm 597 */
																	BgL_variablez00_bglt
																		BgL_duplicated1273z00_2960;
																	BgL_localz00_bglt BgL_new1271z00_2961;

																	BgL_duplicated1273z00_2960 =
																		((BgL_variablez00_bglt)
																		CAR(((obj_t) BgL_xz00_2901)));
																	{	/* Cgen/cgen.scm 598 */
																		BgL_localz00_bglt BgL_new1275z00_2963;

																		BgL_new1275z00_2963 =
																			((BgL_localz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_localz00_bgl))));
																		{	/* Cgen/cgen.scm 598 */
																			long BgL_arg2276z00_2964;

																			{	/* Cgen/cgen.scm 598 */
																				long BgL_res2771z00_4216;

																				BgL_res2771z00_4216 =
																					BGL_CLASS_INDEX
																					(BGl_localz00zzast_varz00);
																				BgL_arg2276z00_2964 =
																					BgL_res2771z00_4216;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1275z00_2963),
																				BgL_arg2276z00_2964);
																		}
																		{	/* Cgen/cgen.scm 598 */
																			BgL_objectz00_bglt BgL_tmpz00_7586;

																			BgL_tmpz00_7586 =
																				((BgL_objectz00_bglt)
																				BgL_new1275z00_2963);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7586,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1275z00_2963);
																		BgL_new1271z00_2961 = BgL_new1275z00_2963;
																	}
																	((((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->BgL_idz00) =
																		((obj_t) BgL_idz00_2913), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_namez00) = ((obj_t) BFALSE), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00)),
																		BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_valuez00) =
																		((BgL_valuez00_bglt) ((
																					(BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_valuez00)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_accessz00) =
																		((obj_t) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_accessz00)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_fastzd2alphazd2) =
																		((obj_t) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_fastzd2alphazd2)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_removablez00) =
																		((obj_t) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_removablez00)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_occurrencez00) =
																		((long) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_occurrencez00)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_occurrencewz00) =
																		((long) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_occurrencewz00)), BUNSPEC);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_new1271z00_2961)))->
																			BgL_userzf3zf3) =
																		((bool_t) (((BgL_variablez00_bglt)
																					COBJECT(BgL_duplicated1273z00_2960))->
																				BgL_userzf3zf3)), BUNSPEC);
																	((((BgL_localz00_bglt)
																				COBJECT(BgL_new1271z00_2961))->
																			BgL_keyz00) =
																		((long) (((BgL_localz00_bglt)
																					COBJECT(((BgL_localz00_bglt)
																							BgL_duplicated1273z00_2960)))->
																				BgL_keyz00)), BUNSPEC);
																	BgL_dz00_2959 = BgL_new1271z00_2961;
																}
																BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
																	(((BgL_variablez00_bglt) BgL_dz00_2959));
																BgL_declz00_2914 = BgL_dz00_2959;
															}
															{	/* Cgen/cgen.scm 597 */
																BgL_cpragmaz00_bglt BgL_allocz00_2915;

																{	/* Cgen/cgen.scm 603 */
																	BgL_cpragmaz00_bglt BgL_new1277z00_2940;

																	{	/* Cgen/cgen.scm 604 */
																		BgL_cpragmaz00_bglt BgL_new1276z00_2957;

																		BgL_new1276z00_2957 =
																			((BgL_cpragmaz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_cpragmaz00_bgl))));
																		{	/* Cgen/cgen.scm 604 */
																			long BgL_arg2275z00_2958;

																			{	/* Cgen/cgen.scm 604 */
																				long BgL_res2772z00_4221;

																				BgL_res2772z00_4221 =
																					BGL_CLASS_INDEX
																					(BGl_cpragmaz00zzcgen_copz00);
																				BgL_arg2275z00_2958 =
																					BgL_res2772z00_4221;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1276z00_2957),
																				BgL_arg2275z00_2958);
																		}
																		BgL_new1277z00_2940 = BgL_new1276z00_2957;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1277z00_2940)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_i1270z00_2910)))->
																				BgL_locz00)), BUNSPEC);
																	{
																		obj_t BgL_auxz00_7631;

																		{	/* Cgen/cgen.scm 605 */
																			obj_t BgL_arg2265z00_2941;
																			obj_t BgL_arg2267z00_2942;

																			BgL_arg2265z00_2941 =
																				CAR(((obj_t) BgL_saz00_2912));
																			BgL_arg2267z00_2942 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_declz00_2914)))->BgL_namez00);
																			{	/* Cgen/cgen.scm 605 */
																				obj_t BgL_list2268z00_2943;

																				BgL_list2268z00_2943 =
																					MAKE_YOUNG_PAIR(BgL_arg2267z00_2942,
																					BNIL);
																				BgL_auxz00_7631 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BgL_arg2265z00_2941,
																					BgL_list2268z00_2943);
																		}}
																		((((BgL_cpragmaz00_bglt)
																					COBJECT(BgL_new1277z00_2940))->
																				BgL_formatz00) =
																			((obj_t) BgL_auxz00_7631), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7639;

																		{	/* Cgen/cgen.scm 606 */
																			obj_t BgL_l1693z00_2944;

																			BgL_l1693z00_2944 =
																				(((BgL_appz00_bglt)
																					COBJECT(BgL_i1270z00_2910))->
																				BgL_argsz00);
																			if (NULLP(BgL_l1693z00_2944))
																				{	/* Cgen/cgen.scm 606 */
																					BgL_auxz00_7639 = BNIL;
																				}
																			else
																				{	/* Cgen/cgen.scm 606 */
																					obj_t BgL_head1695z00_2946;

																					{	/* Cgen/cgen.scm 606 */
																						obj_t BgL_res2774z00_4227;

																						BgL_res2774z00_4227 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1695z00_2946 =
																							BgL_res2774z00_4227;
																					}
																					{
																						obj_t BgL_l1693z00_2948;
																						obj_t BgL_tail1696z00_2949;

																						BgL_l1693z00_2948 =
																							BgL_l1693z00_2944;
																						BgL_tail1696z00_2949 =
																							BgL_head1695z00_2946;
																					BgL_zc3z04anonymousza32270ze3z87_2950:
																						if (NULLP
																							(BgL_l1693z00_2948))
																							{	/* Cgen/cgen.scm 606 */
																								BgL_auxz00_7639 =
																									CDR(BgL_head1695z00_2946);
																							}
																						else
																							{	/* Cgen/cgen.scm 606 */
																								obj_t BgL_newtail1697z00_2952;

																								{	/* Cgen/cgen.scm 606 */
																									BgL_copz00_bglt
																										BgL_arg2273z00_2954;
																									{	/* Cgen/cgen.scm 606 */
																										obj_t BgL_az00_2955;

																										BgL_az00_2955 =
																											CAR(
																											((obj_t)
																												BgL_l1693z00_2948));
																										BgL_arg2273z00_2954 =
																											BGl_nodezd2ze3copz31zzcgen_cgenz00
																											(((BgL_nodez00_bglt)
																												BgL_az00_2955),
																											BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
																											CBOOL
																											(BgL_inpushexitz00_4800));
																									}
																									{	/* Cgen/cgen.scm 606 */
																										obj_t BgL_res2776z00_4231;

																										BgL_res2776z00_4231 =
																											MAKE_YOUNG_PAIR(
																											((obj_t)
																												BgL_arg2273z00_2954),
																											BNIL);
																										BgL_newtail1697z00_2952 =
																											BgL_res2776z00_4231;
																									}
																								}
																								SET_CDR(BgL_tail1696z00_2949,
																									BgL_newtail1697z00_2952);
																								{	/* Cgen/cgen.scm 606 */
																									obj_t BgL_arg2272z00_2953;

																									BgL_arg2272z00_2953 =
																										CDR(
																										((obj_t)
																											BgL_l1693z00_2948));
																									{
																										obj_t BgL_tail1696z00_7658;
																										obj_t BgL_l1693z00_7657;

																										BgL_l1693z00_7657 =
																											BgL_arg2272z00_2953;
																										BgL_tail1696z00_7658 =
																											BgL_newtail1697z00_2952;
																										BgL_tail1696z00_2949 =
																											BgL_tail1696z00_7658;
																										BgL_l1693z00_2948 =
																											BgL_l1693z00_7657;
																										goto
																											BgL_zc3z04anonymousza32270ze3z87_2950;
																									}
																								}
																							}
																					}
																				}
																		}
																		((((BgL_cpragmaz00_bglt)
																					COBJECT(BgL_new1277z00_2940))->
																				BgL_argsz00) =
																			((obj_t) BgL_auxz00_7639), BUNSPEC);
																	}
																	BgL_allocz00_2915 = BgL_new1277z00_2940;
																}
																{	/* Cgen/cgen.scm 603 */

																	{
																		BgL_varz00_bglt BgL_auxz00_7660;

																		{	/* Cgen/cgen.scm 610 */
																			BgL_nodez00_bglt
																				BgL_duplicated1280z00_2916;
																			BgL_varz00_bglt BgL_new1278z00_2917;

																			BgL_duplicated1280z00_2916 =
																				((BgL_nodez00_bglt)
																				(((BgL_appz00_bglt)
																						COBJECT(BgL_i1270z00_2910))->
																					BgL_funz00));
																			{	/* Cgen/cgen.scm 611 */
																				BgL_varz00_bglt BgL_new1281z00_2932;

																				BgL_new1281z00_2932 =
																					((BgL_varz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_varz00_bgl))));
																				{	/* Cgen/cgen.scm 611 */
																					long BgL_arg2260z00_2933;

																					{	/* Cgen/cgen.scm 611 */
																						long BgL_res2777z00_4235;

																						{	/* Cgen/cgen.scm 611 */
																							obj_t BgL_classz00_4234;

																							BgL_classz00_4234 =
																								BGl_varz00zzast_nodez00;
																							BgL_res2777z00_4235 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_4234);
																						}
																						BgL_arg2260z00_2933 =
																							BgL_res2777z00_4235;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1281z00_2932),
																						BgL_arg2260z00_2933);
																				}
																				BgL_new1278z00_2917 =
																					BgL_new1281z00_2932;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1278z00_2917)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT
																							(BgL_duplicated1280z00_2916))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1278z00_2917)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																							COBJECT
																							(BgL_duplicated1280z00_2916))->
																						BgL_typez00)), BUNSPEC);
																			{
																				BgL_variablez00_bglt BgL_auxz00_7673;

																				{	/* Cgen/cgen.scm 611 */
																					BgL_globalz00_bglt
																						BgL_new1282z00_2919;
																					{	/* Cgen/cgen.scm 612 */
																						BgL_globalz00_bglt
																							BgL_new1295z00_2930;
																						BgL_new1295z00_2930 =
																							((BgL_globalz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_globalz00_bgl))));
																						{	/* Cgen/cgen.scm 612 */
																							long BgL_arg2259z00_2931;

																							{	/* Cgen/cgen.scm 612 */
																								long BgL_res2778z00_4239;

																								{	/* Cgen/cgen.scm 612 */
																									obj_t BgL_classz00_4238;

																									BgL_classz00_4238 =
																										BGl_globalz00zzast_varz00;
																									BgL_res2778z00_4239 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_4238);
																								}
																								BgL_arg2259z00_2931 =
																									BgL_res2778z00_4239;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1295z00_2930),
																								BgL_arg2259z00_2931);
																						}
																						{	/* Cgen/cgen.scm 612 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7678;
																							BgL_tmpz00_7678 =
																								((BgL_objectz00_bglt)
																								BgL_new1295z00_2930);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_7678, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1295z00_2930);
																						BgL_new1282z00_2919 =
																							BgL_new1295z00_2930;
																					}
																					((((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_idz00) =
																						((obj_t) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_idz00)), BUNSPEC);
																					{
																						obj_t BgL_auxz00_7685;

																						{	/* Cgen/cgen.scm 612 */
																							obj_t BgL_pairz00_4246;

																							BgL_pairz00_4246 =
																								CDR(((obj_t) BgL_saz00_2912));
																							BgL_auxz00_7685 =
																								CAR(BgL_pairz00_4246);
																						}
																						((((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											BgL_new1282z00_2919)))->
																								BgL_namez00) =
																							((obj_t) BgL_auxz00_7685),
																							BUNSPEC);
																					}
																					((((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) ((
																									(BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_typez00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_valuez00) =
																						((BgL_valuez00_bglt) ((
																									(BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_valuez00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_accessz00) =
																						((obj_t) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_accessz00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_fastzd2alphazd2) =
																						((obj_t) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_fastzd2alphazd2)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_removablez00) =
																						((obj_t) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_removablez00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_occurrencez00) =
																						((long) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_occurrencez00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_occurrencewz00) =
																						((long) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_occurrencewz00)), BUNSPEC);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_new1282z00_2919)))->
																							BgL_userzf3zf3) =
																						((bool_t) (((BgL_variablez00_bglt)
																									COBJECT(BgL_vz00_2911))->
																								BgL_userzf3zf3)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_modulez00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_modulez00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_importz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_importz00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_evaluablezf3zf3) =
																						((bool_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_evaluablezf3zf3)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_evalzf3zf3) =
																						((bool_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_evalzf3zf3)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_libraryz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_libraryz00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_pragmaz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_pragmaz00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_srcz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_srcz00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_jvmzd2typezd2namez00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_jvmzd2typezd2namez00)),
																						BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_initz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_initz00)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								COBJECT(BgL_new1282z00_2919))->
																							BgL_aliasz00) =
																						((obj_t) (((BgL_globalz00_bglt)
																									COBJECT(((BgL_globalz00_bglt)
																											BgL_vz00_2911)))->
																								BgL_aliasz00)), BUNSPEC);
																					BgL_auxz00_7673 =
																						((BgL_variablez00_bglt)
																						BgL_new1282z00_2919);
																				}
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_new1278z00_2917))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt)
																						BgL_auxz00_7673), BUNSPEC);
																			}
																			BgL_auxz00_7660 = BgL_new1278z00_2917;
																		}
																		((((BgL_appz00_bglt)
																					COBJECT(BgL_i1270z00_2910))->
																				BgL_funz00) =
																			((BgL_varz00_bglt) BgL_auxz00_7660),
																			BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7748;

																		{	/* Cgen/cgen.scm 613 */
																			BgL_varz00_bglt BgL_arg2261z00_2934;
																			obj_t BgL_arg2262z00_2935;

																			{	/* Cgen/cgen.scm 613 */
																				BgL_varz00_bglt BgL_new1297z00_2936;

																				{	/* Cgen/cgen.scm 616 */
																					BgL_varz00_bglt BgL_new1296z00_2937;

																					BgL_new1296z00_2937 =
																						((BgL_varz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_varz00_bgl))));
																					{	/* Cgen/cgen.scm 616 */
																						long BgL_arg2263z00_2938;

																						{	/* Cgen/cgen.scm 616 */
																							long BgL_res2779z00_4248;

																							{	/* Cgen/cgen.scm 616 */
																								obj_t BgL_classz00_4247;

																								BgL_classz00_4247 =
																									BGl_varz00zzast_nodez00;
																								BgL_res2779z00_4248 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_4247);
																							}
																							BgL_arg2263z00_2938 =
																								BgL_res2779z00_4248;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1296z00_2937),
																							BgL_arg2263z00_2938);
																					}
																					BgL_new1297z00_2936 =
																						BgL_new1296z00_2937;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1297z00_2936)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_i1270z00_2910)))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1297z00_2936)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) (
																							(BgL_typez00_bglt)
																							BGl_za2objza2z00zztype_cachez00)),
																					BUNSPEC);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_new1297z00_2936))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt) (
																							(BgL_variablez00_bglt)
																							BgL_declz00_2914)), BUNSPEC);
																				BgL_arg2261z00_2934 =
																					BgL_new1297z00_2936;
																			}
																			BgL_arg2262z00_2935 =
																				(((BgL_appz00_bglt)
																					COBJECT(BgL_i1270z00_2910))->
																				BgL_argsz00);
																			BgL_auxz00_7748 =
																				MAKE_YOUNG_PAIR(((obj_t)
																					BgL_arg2261z00_2934),
																				BgL_arg2262z00_2935);
																		}
																		((((BgL_appz00_bglt)
																					COBJECT(BgL_i1270z00_2910))->
																				BgL_argsz00) =
																			((obj_t) BgL_auxz00_7748), BUNSPEC);
																	}
																	{	/* Cgen/cgen.scm 618 */
																		obj_t BgL_list2264z00_2939;

																		BgL_list2264z00_2939 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_allocz00_2915), BNIL);
																		BgL_arg2227z00_2856 = BgL_list2264z00_2939;
									}}}}}}}}}
								else
									{	/* Cgen/cgen.scm 619 */
										bool_t BgL_test3080z00_7768;

										{	/* Cgen/cgen.scm 619 */
											bool_t BgL_test3081z00_7769;

											{	/* Cgen/cgen.scm 619 */
												obj_t BgL_arg2292z00_2990;

												BgL_arg2292z00_2990 = CDR(((obj_t) BgL_xz00_2901));
												BgL_test3081z00_7769 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2292z00_2990,
													BGl_makezd2boxzd2zzast_nodez00);
											}
											if (BgL_test3081z00_7769)
												{	/* Cgen/cgen.scm 619 */
													BgL_test3080z00_7768 =
														CBOOL(
														(((BgL_makezd2boxzd2_bglt) COBJECT(
																	((BgL_makezd2boxzd2_bglt)
																		CDR(
																			((obj_t) BgL_xz00_2901)))))->
															BgL_stackablez00));
												}
											else
												{	/* Cgen/cgen.scm 619 */
													BgL_test3080z00_7768 = ((bool_t) 0);
												}
										}
										if (BgL_test3080z00_7768)
											{	/* Cgen/cgen.scm 621 */
												BgL_makezd2boxzd2_bglt BgL_i1298z00_2973;

												BgL_i1298z00_2973 =
													((BgL_makezd2boxzd2_bglt)
													CDR(((obj_t) BgL_xz00_2901)));
												{	/* Cgen/cgen.scm 622 */
													BgL_localz00_bglt BgL_declz00_2974;

													{	/* Cgen/cgen.scm 622 */
														BgL_localz00_bglt BgL_dz00_2982;

														{	/* Cgen/cgen.scm 622 */
															BgL_variablez00_bglt BgL_duplicated1301z00_2983;
															BgL_localz00_bglt BgL_new1299z00_2984;

															BgL_duplicated1301z00_2983 =
																((BgL_variablez00_bglt)
																CAR(((obj_t) BgL_xz00_2901)));
															{	/* Cgen/cgen.scm 623 */
																BgL_localz00_bglt BgL_new1303z00_2986;

																BgL_new1303z00_2986 =
																	((BgL_localz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_localz00_bgl))));
																{	/* Cgen/cgen.scm 623 */
																	long BgL_arg2290z00_2987;

																	{	/* Cgen/cgen.scm 623 */
																		long BgL_res2782z00_4259;

																		BgL_res2782z00_4259 =
																			BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
																		BgL_arg2290z00_2987 = BgL_res2782z00_4259;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1303z00_2986),
																		BgL_arg2290z00_2987);
																}
																{	/* Cgen/cgen.scm 623 */
																	BgL_objectz00_bglt BgL_tmpz00_7788;

																	BgL_tmpz00_7788 =
																		((BgL_objectz00_bglt) BgL_new1303z00_2986);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7788,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1303z00_2986);
																BgL_new1299z00_2984 = BgL_new1303z00_2986;
															}
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->BgL_idz00) =
																((obj_t)
																	BGl_gensymz00zz__r4_symbols_6_4z00
																	(CNST_TABLE_REF(((long) 15)))), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->BgL_namez00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BGl_za2cellza2z00zztype_cachez00)),
																BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->BgL_valuez00) =
																((BgL_valuez00_bglt) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_valuez00)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->BgL_accessz00) =
																((obj_t) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_accessz00)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->
																	BgL_fastzd2alphazd2) =
																((obj_t) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_fastzd2alphazd2)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->
																	BgL_removablez00) =
																((obj_t) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_removablez00)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->
																	BgL_occurrencez00) =
																((long) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_occurrencez00)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->
																	BgL_occurrencewz00) =
																((long) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_occurrencewz00)), BUNSPEC);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_new1299z00_2984)))->
																	BgL_userzf3zf3) =
																((bool_t) (((BgL_variablez00_bglt)
																			COBJECT(BgL_duplicated1301z00_2983))->
																		BgL_userzf3zf3)), BUNSPEC);
															((((BgL_localz00_bglt)
																		COBJECT(BgL_new1299z00_2984))->BgL_keyz00) =
																((long) (((BgL_localz00_bglt)
																			COBJECT(((BgL_localz00_bglt)
																					BgL_duplicated1301z00_2983)))->
																		BgL_keyz00)), BUNSPEC);
															BgL_dz00_2982 = BgL_new1299z00_2984;
														}
														BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
															((BgL_variablez00_bglt) BgL_dz00_2982));
														BgL_declz00_2974 = BgL_dz00_2982;
													}
													{	/* Cgen/cgen.scm 622 */
														BgL_cpragmaz00_bglt BgL_allocz00_2975;

														{	/* Cgen/cgen.scm 628 */
															BgL_cpragmaz00_bglt BgL_new1305z00_2977;

															{	/* Cgen/cgen.scm 629 */
																BgL_cpragmaz00_bglt BgL_new1304z00_2980;

																BgL_new1304z00_2980 =
																	((BgL_cpragmaz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_cpragmaz00_bgl))));
																{	/* Cgen/cgen.scm 629 */
																	long BgL_arg2289z00_2981;

																	{	/* Cgen/cgen.scm 629 */
																		long BgL_res2783z00_4264;

																		BgL_res2783z00_4264 =
																			BGL_CLASS_INDEX
																			(BGl_cpragmaz00zzcgen_copz00);
																		BgL_arg2289z00_2981 = BgL_res2783z00_4264;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1304z00_2980),
																		BgL_arg2289z00_2981);
																}
																BgL_new1305z00_2977 = BgL_new1304z00_2980;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1305z00_2977)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_i1298z00_2973)))->BgL_locz00)),
																BUNSPEC);
															{
																obj_t BgL_auxz00_7835;

																{	/* Cgen/cgen.scm 631 */
																	obj_t BgL_arg2287z00_2978;

																	BgL_arg2287z00_2978 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_declz00_2974)))->BgL_namez00);
																	{	/* Cgen/cgen.scm 630 */
																		obj_t BgL_list2288z00_2979;

																		BgL_list2288z00_2979 =
																			MAKE_YOUNG_PAIR(BgL_arg2287z00_2978,
																			BNIL);
																		BgL_auxz00_7835 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string2931z00zzcgen_cgenz00,
																			BgL_list2288z00_2979);
																}}
																((((BgL_cpragmaz00_bglt)
																			COBJECT(BgL_new1305z00_2977))->
																		BgL_formatz00) =
																	((obj_t) BgL_auxz00_7835), BUNSPEC);
															}
															((((BgL_cpragmaz00_bglt)
																		COBJECT(BgL_new1305z00_2977))->
																	BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
															BgL_allocz00_2975 = BgL_new1305z00_2977;
														}
														{	/* Cgen/cgen.scm 628 */

															((((BgL_makezd2boxzd2_bglt)
																		COBJECT(BgL_i1298z00_2973))->
																	BgL_stackablez00) =
																((obj_t) ((obj_t) BgL_declz00_2974)), BUNSPEC);
															{	/* Cgen/cgen.scm 634 */
																obj_t BgL_list2286z00_2976;

																BgL_list2286z00_2976 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_allocz00_2975), BNIL);
																BgL_arg2227z00_2856 = BgL_list2286z00_2976;
											}}}}}
										else
											{	/* Cgen/cgen.scm 619 */
												BgL_arg2227z00_2856 = BNIL;
											}
									}
							}
						}
						{	/* Cgen/cgen.scm 640 */
							obj_t BgL_arg2230z00_2859;

							BgL_arg2230z00_2859 = CDR(((obj_t) BgL_l1702z00_2853));
							BgL_arg2228z00_2857 =
								BGl_zc3z04anonymousza32225ze3ze70z60zzcgen_cgenz00
								(BgL_inpushexitz00_4800, BgL_arg2230z00_2859);
						}
						return bgl_append2(BgL_arg2227z00_2856, BgL_arg2228z00_2857);
					}
			}
		}

	}



/* &node->cop-let-fun1755 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2letzd2fun1755z53zzcgen_cgenz00(obj_t
		BgL_envz00_4729, obj_t BgL_nodez00_4730, obj_t BgL_kontz00_4731,
		obj_t BgL_inpushexitz00_4732)
	{
		{	/* Cgen/cgen.scm 545 */
			{
				obj_t BgL_localsz00_5302;
				obj_t BgL_allzd2formalszd2_5303;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_arg2190z00_5338;

					BgL_arg2190z00_5338 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_4730)))->BgL_localsz00);
					{
						obj_t BgL_auxz00_7852;

						BgL_localsz00_5302 = BgL_arg2190z00_5338;
						BgL_allzd2formalszd2_5303 = BNIL;
					BgL_loopz00_5301:
						if (NULLP(BgL_localsz00_5302))
							{	/* Tools/trace.sch 53 */
								BgL_copz00_bglt BgL_arg2193z00_5304;

								{	/* Tools/trace.sch 53 */
									BgL_csequencez00_bglt BgL_arg2194z00_5305;
									obj_t BgL_arg2195z00_5306;

									{	/* Tools/trace.sch 53 */
										BgL_csequencez00_bglt BgL_new1261z00_5307;

										{	/* Tools/trace.sch 53 */
											BgL_csequencez00_bglt BgL_new1260z00_5308;

											BgL_new1260z00_5308 =
												((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_csequencez00_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2202z00_5309;

												{	/* Tools/trace.sch 53 */
													long BgL_res2765z00_5310;

													BgL_res2765z00_5310 =
														BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
													BgL_arg2202z00_5309 = BgL_res2765z00_5310;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1260z00_5308),
													BgL_arg2202z00_5309);
											}
											BgL_new1261z00_5307 = BgL_new1260z00_5308;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1261z00_5307)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
																	BgL_nodez00_4730))))->BgL_locz00)), BUNSPEC);
										((((BgL_csequencez00_bglt) COBJECT(BgL_new1261z00_5307))->
												BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										{
											obj_t BgL_auxz00_7865;

											{	/* Tools/trace.sch 53 */
												BgL_localzd2varzd2_bglt BgL_arg2196z00_5311;
												BgL_copz00_bglt BgL_arg2197z00_5312;

												{	/* Tools/trace.sch 53 */
													BgL_localzd2varzd2_bglt BgL_new1263z00_5313;

													{	/* Tools/trace.sch 53 */
														BgL_localzd2varzd2_bglt BgL_new1262z00_5314;

														BgL_new1262z00_5314 =
															((BgL_localzd2varzd2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_localzd2varzd2_bgl))));
														{	/* Tools/trace.sch 53 */
															long BgL_arg2200z00_5315;

															{	/* Tools/trace.sch 53 */
																long BgL_res2766z00_5316;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_classz00_5317;

																	BgL_classz00_5317 =
																		BGl_localzd2varzd2zzcgen_copz00;
																	BgL_res2766z00_5316 =
																		BGL_CLASS_INDEX(BgL_classz00_5317);
																}
																BgL_arg2200z00_5315 = BgL_res2766z00_5316;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1262z00_5314),
																BgL_arg2200z00_5315);
														}
														BgL_new1263z00_5313 = BgL_new1262z00_5314;
													}
													((((BgL_copz00_bglt) COBJECT(
																	((BgL_copz00_bglt) BgL_new1263z00_5313)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt) (
																				(BgL_letzd2funzd2_bglt)
																				BgL_nodez00_4730))))->BgL_locz00)),
														BUNSPEC);
													((((BgL_localzd2varzd2_bglt)
																COBJECT(BgL_new1263z00_5313))->BgL_varsz00) =
														((obj_t) BgL_allzd2formalszd2_5303), BUNSPEC);
													BgL_arg2196z00_5311 = BgL_new1263z00_5313;
												}
												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg2201z00_5318;

													BgL_arg2201z00_5318 =
														(((BgL_letzd2funzd2_bglt) COBJECT(
																((BgL_letzd2funzd2_bglt) BgL_nodez00_4730)))->
														BgL_bodyz00);
													BgL_arg2197z00_5312 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00
														(BgL_arg2201z00_5318, BgL_kontz00_4731,
														CBOOL(BgL_inpushexitz00_4732));
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_list2198z00_5319;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2199z00_5320;

														BgL_arg2199z00_5320 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2197z00_5312), BNIL);
														BgL_list2198z00_5319 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2196z00_5311),
															BgL_arg2199z00_5320);
													}
													BgL_auxz00_7865 = BgL_list2198z00_5319;
											}}
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1261z00_5307))->
													BgL_copsz00) = ((obj_t) BgL_auxz00_7865), BUNSPEC);
										}
										BgL_arg2194z00_5305 = BgL_new1261z00_5307;
									}
									BgL_arg2195z00_5306 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_letzd2funzd2_bglt) BgL_nodez00_4730))))->
										BgL_locz00);
									BgL_arg2193z00_5304 =
										BGl_bdbzd2letzd2varz00zzcgen_cgenz00(((BgL_copz00_bglt)
											BgL_arg2194z00_5305), BgL_arg2195z00_5306);
								}
								BgL_auxz00_7852 =
									BGl_blockzd2kontzd2zzcgen_cgenz00(
									((obj_t) BgL_arg2193z00_5304), BFALSE);
							}
						else
							{	/* Tools/trace.sch 53 */
								obj_t BgL_localz00_5321;

								BgL_localz00_5321 = CAR(((obj_t) BgL_localsz00_5302));
								BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
									((BgL_variablez00_bglt) BgL_localz00_5321));
								{	/* Tools/trace.sch 53 */
									BgL_sfunz00_bglt BgL_funz00_5322;

									{	/* Tools/trace.sch 53 */
										BgL_sfunz00_bglt BgL_tmp1264z00_5323;

										BgL_tmp1264z00_5323 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_localz00_5321))))->
												BgL_valuez00));
										{	/* Tools/trace.sch 53 */
											BgL_sfunzf2czf2_bglt BgL_wide1266z00_5324;

											BgL_wide1266z00_5324 =
												((BgL_sfunzf2czf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_sfunzf2czf2_bgl))));
											{	/* Tools/trace.sch 53 */
												obj_t BgL_auxz00_7904;
												BgL_objectz00_bglt BgL_tmpz00_7901;

												BgL_auxz00_7904 = ((obj_t) BgL_wide1266z00_5324);
												BgL_tmpz00_7901 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_tmp1264z00_5323));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7901,
													BgL_auxz00_7904);
											}
											((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_tmp1264z00_5323));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2209z00_5325;

												{	/* Tools/trace.sch 53 */
													long BgL_res2768z00_5326;

													BgL_res2768z00_5326 =
														BGL_CLASS_INDEX(BGl_sfunzf2Czf2zzcgen_copz00);
													BgL_arg2209z00_5325 = BgL_res2768z00_5326;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_tmp1264z00_5323)),
													BgL_arg2209z00_5325);
											}
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_tmp1264z00_5323));
										}
										{
											BgL_clabelz00_bglt BgL_auxz00_7922;
											BgL_sfunzf2czf2_bglt BgL_auxz00_7915;

											{	/* Tools/trace.sch 53 */
												BgL_clabelz00_bglt BgL_new1269z00_5327;

												{	/* Tools/trace.sch 53 */
													BgL_clabelz00_bglt BgL_new1268z00_5328;

													BgL_new1268z00_5328 =
														((BgL_clabelz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_clabelz00_bgl))));
													{	/* Tools/trace.sch 53 */
														long BgL_arg2211z00_5329;

														{	/* Tools/trace.sch 53 */
															long BgL_res2769z00_5330;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_classz00_5331;

																BgL_classz00_5331 = BGl_clabelz00zzcgen_copz00;
																BgL_res2769z00_5330 =
																	BGL_CLASS_INDEX(BgL_classz00_5331);
															}
															BgL_arg2211z00_5329 = BgL_res2769z00_5330;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1268z00_5328),
															BgL_arg2211z00_5329);
													}
													BgL_new1269z00_5327 = BgL_new1268z00_5328;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1269z00_5327)))->
														BgL_locz00) =
													((obj_t) (((BgL_sfunz00_bglt)
																COBJECT(((BgL_sfunz00_bglt) ((
																				(BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt) (
																							(BgL_localz00_bglt)
																							BgL_localz00_5321))))->
																			BgL_valuez00))))->BgL_locz00)), BUNSPEC);
												((((BgL_clabelz00_bglt) COBJECT(BgL_new1269z00_5327))->
														BgL_namez00) =
													((obj_t) (((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt) (
																			(BgL_localz00_bglt)
																			BgL_localz00_5321))))->BgL_namez00)),
													BUNSPEC);
												((((BgL_clabelz00_bglt) COBJECT(BgL_new1269z00_5327))->
														BgL_usedzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
												((((BgL_clabelz00_bglt) COBJECT(BgL_new1269z00_5327))->
														BgL_bodyz00) = ((obj_t) BUNSPEC), BUNSPEC);
												BgL_auxz00_7922 = BgL_new1269z00_5327;
											}
											{
												obj_t BgL_auxz00_7916;

												{	/* Tools/trace.sch 53 */
													BgL_objectz00_bglt BgL_tmpz00_7917;

													BgL_tmpz00_7917 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_tmp1264z00_5323));
													BgL_auxz00_7916 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_7917);
												}
												BgL_auxz00_7915 =
													((BgL_sfunzf2czf2_bglt) BgL_auxz00_7916);
											}
											((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7915))->
													BgL_labelz00) =
												((BgL_clabelz00_bglt) BgL_auxz00_7922), BUNSPEC);
										}
										{
											BgL_sfunzf2czf2_bglt BgL_auxz00_7941;

											{
												obj_t BgL_auxz00_7942;

												{	/* Tools/trace.sch 53 */
													BgL_objectz00_bglt BgL_tmpz00_7943;

													BgL_tmpz00_7943 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_tmp1264z00_5323));
													BgL_auxz00_7942 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_7943);
												}
												BgL_auxz00_7941 =
													((BgL_sfunzf2czf2_bglt) BgL_auxz00_7942);
											}
											((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7941))->
													BgL_integratedz00) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										BgL_funz00_5322 = ((BgL_sfunz00_bglt) BgL_tmp1264z00_5323);
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_formalsz00_5332;

										BgL_formalsz00_5332 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_5322)))->BgL_argsz00);
										{	/* Tools/trace.sch 53 */

											{
												obj_t BgL_l1691z00_5334;

												BgL_l1691z00_5334 = BgL_formalsz00_5332;
											BgL_zc3z04anonymousza32203ze3z87_5333:
												if (PAIRP(BgL_l1691z00_5334))
													{	/* Tools/trace.sch 53 */
														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg2205z00_5335;

															BgL_arg2205z00_5335 = CAR(BgL_l1691z00_5334);
															BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
																((BgL_variablez00_bglt) BgL_arg2205z00_5335));
														}
														{
															obj_t BgL_l1691z00_7957;

															BgL_l1691z00_7957 = CDR(BgL_l1691z00_5334);
															BgL_l1691z00_5334 = BgL_l1691z00_7957;
															goto BgL_zc3z04anonymousza32203ze3z87_5333;
														}
													}
												else
													{	/* Tools/trace.sch 53 */
														((bool_t) 1);
													}
											}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg2207z00_5336;
												obj_t BgL_arg2208z00_5337;

												BgL_arg2207z00_5336 = CDR(((obj_t) BgL_localsz00_5302));
												BgL_arg2208z00_5337 =
													BGl_appendzd221011zd2zzcgen_cgenz00
													(BgL_formalsz00_5332, BgL_allzd2formalszd2_5303);
												{
													obj_t BgL_allzd2formalszd2_7963;
													obj_t BgL_localsz00_7962;

													BgL_localsz00_7962 = BgL_arg2207z00_5336;
													BgL_allzd2formalszd2_7963 = BgL_arg2208z00_5337;
													BgL_allzd2formalszd2_5303 = BgL_allzd2formalszd2_7963;
													BgL_localsz00_5302 = BgL_localsz00_7962;
													goto BgL_loopz00_5301;
												}
											}
										}
									}
								}
							}
						return ((BgL_copz00_bglt) BgL_auxz00_7852);
					}
				}
			}
		}

	}



/* &node->cop-switch1753 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2switch1753z81zzcgen_cgenz00(obj_t
		BgL_envz00_4733, obj_t BgL_nodez00_4734, obj_t BgL_kontz00_4735,
		obj_t BgL_inpushexitz00_4736)
	{
		{	/* Cgen/cgen.scm 511 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_cclausesz00_5340;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_l1686z00_5341;

					BgL_l1686z00_5341 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_4734)))->BgL_clausesz00);
					if (NULLP(BgL_l1686z00_5341))
						{	/* Tools/trace.sch 53 */
							BgL_cclausesz00_5340 = BNIL;
						}
					else
						{	/* Tools/trace.sch 53 */
							obj_t BgL_head1688z00_5342;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_res2751z00_5343;

								BgL_res2751z00_5343 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1688z00_5342 = BgL_res2751z00_5343;
							}
							{
								obj_t BgL_l1686z00_5345;
								obj_t BgL_tail1689z00_5346;

								BgL_l1686z00_5345 = BgL_l1686z00_5341;
								BgL_tail1689z00_5346 = BgL_head1688z00_5342;
							BgL_zc3z04anonymousza32183ze3z87_5344:
								if (NULLP(BgL_l1686z00_5345))
									{	/* Tools/trace.sch 53 */
										BgL_cclausesz00_5340 = CDR(BgL_head1688z00_5342);
									}
								else
									{	/* Tools/trace.sch 53 */
										obj_t BgL_newtail1690z00_5347;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg2186z00_5348;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_clausez00_5349;

												BgL_clausez00_5349 = CAR(((obj_t) BgL_l1686z00_5345));
												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg2187z00_5350;
													BgL_copz00_bglt BgL_arg2188z00_5351;

													BgL_arg2187z00_5350 =
														CAR(((obj_t) BgL_clausez00_5349));
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2189z00_5352;

														BgL_arg2189z00_5352 =
															CDR(((obj_t) BgL_clausez00_5349));
														BgL_arg2188z00_5351 =
															BGl_nodezd2ze3copz31zzcgen_cgenz00(
															((BgL_nodez00_bglt) BgL_arg2189z00_5352),
															BgL_kontz00_4735, CBOOL(BgL_inpushexitz00_4736));
													}
													BgL_arg2186z00_5348 =
														MAKE_YOUNG_PAIR(BgL_arg2187z00_5350,
														((obj_t) BgL_arg2188z00_5351));
												}
											}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_res2753z00_5353;

												BgL_res2753z00_5353 =
													MAKE_YOUNG_PAIR(BgL_arg2186z00_5348, BNIL);
												BgL_newtail1690z00_5347 = BgL_res2753z00_5353;
											}
										}
										SET_CDR(BgL_tail1689z00_5346, BgL_newtail1690z00_5347);
										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg2185z00_5354;

											BgL_arg2185z00_5354 = CDR(((obj_t) BgL_l1686z00_5345));
											{
												obj_t BgL_tail1689z00_7989;
												obj_t BgL_l1686z00_7988;

												BgL_l1686z00_7988 = BgL_arg2185z00_5354;
												BgL_tail1689z00_7989 = BgL_newtail1690z00_5347;
												BgL_tail1689z00_5346 = BgL_tail1689z00_7989;
												BgL_l1686z00_5345 = BgL_l1686z00_7988;
												goto BgL_zc3z04anonymousza32183ze3z87_5344;
											}
										}
									}
							}
						}
				}
				{	/* Tools/trace.sch 53 */
					BgL_localz00_bglt BgL_auxz00_5355;

					{	/* Tools/trace.sch 53 */
						BgL_typez00_bglt BgL_arg2181z00_5356;

						BgL_arg2181z00_5356 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_4734)))->
							BgL_itemzd2typezd2);
						{	/* Tools/trace.sch 53 */
							BgL_localz00_bglt BgL_res2754z00_5357;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_idz00_5358;

								BgL_idz00_5358 = CNST_TABLE_REF(((long) 3));
								{	/* Tools/trace.sch 53 */
									BgL_localz00_bglt BgL_localz00_5359;

									BgL_localz00_5359 =
										BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_5358,
										BgL_arg2181z00_5356);
									{	/* Tools/trace.sch 53 */
										bool_t BgL_test3086z00_7994;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_tmpz00_7995;

											BgL_tmpz00_7995 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_5359)))->
												BgL_namez00);
											BgL_test3086z00_7994 = STRINGP(BgL_tmpz00_7995);
										}
										if (BgL_test3086z00_7994)
											{	/* Tools/trace.sch 53 */
												BFALSE;
											}
										else
											{	/* Tools/trace.sch 53 */
												BGl_errorz00zz__errorz00
													(BGl_string2889z00zzcgen_cgenz00,
													BGl_string2890z00zzcgen_cgenz00,
													((obj_t) BgL_localz00_5359));
											}
									}
									BgL_res2754z00_5357 = BgL_localz00_5359;
								}
							}
							BgL_auxz00_5355 = BgL_res2754z00_5357;
						}
					}
					{	/* Tools/trace.sch 53 */
						BgL_copz00_bglt BgL_copz00_5360;

						{	/* Tools/trace.sch 53 */
							BgL_setqz00_bglt BgL_arg2179z00_5361;

							{	/* Tools/trace.sch 53 */
								BgL_nodez00_bglt BgL_arg2180z00_5362;

								BgL_arg2180z00_5362 =
									(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_4734)))->BgL_testz00);
								BgL_arg2179z00_5361 =
									BGl_nodezd2setqzd2zzcgen_cgenz00(
									((BgL_variablez00_bglt) BgL_auxz00_5355),
									BgL_arg2180z00_5362);
							}
							BgL_copz00_5360 =
								BGl_nodezd2ze3copz31zzcgen_cgenz00(
								((BgL_nodez00_bglt) BgL_arg2179z00_5361),
								BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
								CBOOL(BgL_inpushexitz00_4736));
						}
						{	/* Tools/trace.sch 53 */

							{	/* Tools/trace.sch 53 */
								bool_t BgL_test3087z00_8008;

								{	/* Tools/trace.sch 53 */
									bool_t BgL_test3088z00_8009;

									{	/* Tools/trace.sch 53 */
										bool_t BgL_res2755z00_5363;

										BgL_res2755z00_5363 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_copz00_5360), BGl_csetqz00zzcgen_copz00);
										BgL_test3088z00_8009 = BgL_res2755z00_5363;
									}
									if (BgL_test3088z00_8009)
										{	/* Tools/trace.sch 53 */
											BgL_test3087z00_8008 =
												(
												((obj_t)
													(((BgL_varcz00_bglt) COBJECT(
																(((BgL_csetqz00_bglt) COBJECT(
																			((BgL_csetqz00_bglt) BgL_copz00_5360)))->
																	BgL_varz00)))->BgL_variablez00)) ==
												((obj_t) BgL_auxz00_5355));
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_test3087z00_8008 = ((bool_t) 0);
										}
								}
								if (BgL_test3087z00_8008)
									{	/* Tools/trace.sch 53 */
										BgL_cswitchz00_bglt BgL_new1246z00_5364;

										{	/* Tools/trace.sch 53 */
											BgL_cswitchz00_bglt BgL_new1245z00_5365;

											BgL_new1245z00_5365 =
												((BgL_cswitchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_cswitchz00_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2165z00_5366;

												{	/* Tools/trace.sch 53 */
													long BgL_res2756z00_5367;

													BgL_res2756z00_5367 =
														BGL_CLASS_INDEX(BGl_cswitchz00zzcgen_copz00);
													BgL_arg2165z00_5366 = BgL_res2756z00_5367;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1245z00_5365),
													BgL_arg2165z00_5366);
											}
											BgL_new1246z00_5364 = BgL_new1245z00_5365;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1246z00_5364)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_switchz00_bglt)
																	BgL_nodez00_4734))))->BgL_locz00)), BUNSPEC);
										((((BgL_cswitchz00_bglt) COBJECT(BgL_new1246z00_5364))->
												BgL_testz00) =
											((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
														COBJECT(((BgL_csetqz00_bglt) BgL_copz00_5360)))->
													BgL_valuez00)), BUNSPEC);
										((((BgL_cswitchz00_bglt) COBJECT(BgL_new1246z00_5364))->
												BgL_clausesz00) =
											((obj_t) BgL_cclausesz00_5340), BUNSPEC);
										return ((BgL_copz00_bglt) BgL_new1246z00_5364);
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL_cblockz00_bglt BgL_new1248z00_5368;

										{	/* Tools/trace.sch 53 */
											BgL_cblockz00_bglt BgL_new1247z00_5369;

											BgL_new1247z00_5369 =
												((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_cblockz00_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg2176z00_5370;

												{	/* Tools/trace.sch 53 */
													long BgL_res2757z00_5371;

													BgL_res2757z00_5371 =
														BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
													BgL_arg2176z00_5370 = BgL_res2757z00_5371;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1247z00_5369),
													BgL_arg2176z00_5370);
											}
											BgL_new1248z00_5368 = BgL_new1247z00_5369;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1248z00_5368)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_switchz00_bglt)
																	BgL_nodez00_4734))))->BgL_locz00)), BUNSPEC);
										{
											BgL_copz00_bglt BgL_auxz00_8041;

											{	/* Tools/trace.sch 53 */
												BgL_csequencez00_bglt BgL_new1250z00_5372;

												{	/* Tools/trace.sch 53 */
													BgL_csequencez00_bglt BgL_new1249z00_5373;

													BgL_new1249z00_5373 =
														((BgL_csequencez00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_csequencez00_bgl))));
													{	/* Tools/trace.sch 53 */
														long BgL_arg2175z00_5374;

														{	/* Tools/trace.sch 53 */
															long BgL_res2758z00_5375;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_classz00_5376;

																BgL_classz00_5376 =
																	BGl_csequencez00zzcgen_copz00;
																BgL_res2758z00_5375 =
																	BGL_CLASS_INDEX(BgL_classz00_5376);
															}
															BgL_arg2175z00_5374 = BgL_res2758z00_5375;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1249z00_5373),
															BgL_arg2175z00_5374);
													}
													BgL_new1250z00_5372 = BgL_new1249z00_5373;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1250z00_5372)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) (
																			(BgL_switchz00_bglt)
																			BgL_nodez00_4734))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_csequencez00_bglt)
															COBJECT(BgL_new1250z00_5372))->
														BgL_czd2expzf3z21) =
													((bool_t) ((bool_t) 0)), BUNSPEC);
												{
													obj_t BgL_auxz00_8052;

													{	/* Tools/trace.sch 53 */
														BgL_localzd2varzd2_bglt BgL_arg2166z00_5377;
														BgL_cswitchz00_bglt BgL_arg2167z00_5378;

														{	/* Tools/trace.sch 53 */
															BgL_localzd2varzd2_bglt BgL_new1252z00_5379;

															{	/* Tools/trace.sch 53 */
																BgL_localzd2varzd2_bglt BgL_new1251z00_5380;

																BgL_new1251z00_5380 =
																	((BgL_localzd2varzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_localzd2varzd2_bgl))));
																{	/* Tools/trace.sch 53 */
																	long BgL_arg2172z00_5381;

																	{	/* Tools/trace.sch 53 */
																		long BgL_res2759z00_5382;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_classz00_5383;

																			BgL_classz00_5383 =
																				BGl_localzd2varzd2zzcgen_copz00;
																			BgL_res2759z00_5382 =
																				BGL_CLASS_INDEX(BgL_classz00_5383);
																		}
																		BgL_arg2172z00_5381 = BgL_res2759z00_5382;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1251z00_5380),
																		BgL_arg2172z00_5381);
																}
																BgL_new1252z00_5379 = BgL_new1251z00_5380;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1252z00_5379)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_switchz00_bglt)
																						BgL_nodez00_4734))))->BgL_locz00)),
																BUNSPEC);
															{
																obj_t BgL_auxz00_8062;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_list2171z00_5384;

																	BgL_list2171z00_5384 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_auxz00_5355), BNIL);
																	BgL_auxz00_8062 = BgL_list2171z00_5384;
																}
																((((BgL_localzd2varzd2_bglt)
																			COBJECT(BgL_new1252z00_5379))->
																		BgL_varsz00) =
																	((obj_t) BgL_auxz00_8062), BUNSPEC);
															}
															BgL_arg2166z00_5377 = BgL_new1252z00_5379;
														}
														{	/* Tools/trace.sch 53 */
															BgL_cswitchz00_bglt BgL_new1254z00_5385;

															{	/* Tools/trace.sch 53 */
																BgL_cswitchz00_bglt BgL_new1253z00_5386;

																BgL_new1253z00_5386 =
																	((BgL_cswitchz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_cswitchz00_bgl))));
																{	/* Tools/trace.sch 53 */
																	long BgL_arg2174z00_5387;

																	{	/* Tools/trace.sch 53 */
																		long BgL_res2761z00_5388;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_classz00_5389;

																			BgL_classz00_5389 =
																				BGl_cswitchz00zzcgen_copz00;
																			BgL_res2761z00_5388 =
																				BGL_CLASS_INDEX(BgL_classz00_5389);
																		}
																		BgL_arg2174z00_5387 = BgL_res2761z00_5388;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1253z00_5386),
																		BgL_arg2174z00_5387);
																}
																BgL_new1254z00_5385 = BgL_new1253z00_5386;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1254z00_5385)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_switchz00_bglt)
																						BgL_nodez00_4734))))->BgL_locz00)),
																BUNSPEC);
															{
																BgL_copz00_bglt BgL_auxz00_8075;

																{	/* Tools/trace.sch 53 */
																	BgL_varcz00_bglt BgL_new1256z00_5390;

																	{	/* Tools/trace.sch 53 */
																		BgL_varcz00_bglt BgL_new1255z00_5391;

																		BgL_new1255z00_5391 =
																			((BgL_varcz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varcz00_bgl))));
																		{	/* Tools/trace.sch 53 */
																			long BgL_arg2173z00_5392;

																			{	/* Tools/trace.sch 53 */
																				long BgL_res2762z00_5393;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_classz00_5394;

																					BgL_classz00_5394 =
																						BGl_varcz00zzcgen_copz00;
																					BgL_res2762z00_5393 =
																						BGL_CLASS_INDEX(BgL_classz00_5394);
																				}
																				BgL_arg2173z00_5392 =
																					BgL_res2762z00_5393;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1255z00_5391),
																				BgL_arg2173z00_5392);
																		}
																		BgL_new1256z00_5390 = BgL_new1255z00_5391;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1256z00_5390)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_switchz00_bglt)
																								BgL_nodez00_4734))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_varcz00_bglt)
																				COBJECT(BgL_new1256z00_5390))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_auxz00_5355)), BUNSPEC);
																	BgL_auxz00_8075 =
																		((BgL_copz00_bglt) BgL_new1256z00_5390);
																}
																((((BgL_cswitchz00_bglt)
																			COBJECT(BgL_new1254z00_5385))->
																		BgL_testz00) =
																	((BgL_copz00_bglt) BgL_auxz00_8075), BUNSPEC);
															}
															((((BgL_cswitchz00_bglt)
																		COBJECT(BgL_new1254z00_5385))->
																	BgL_clausesz00) =
																((obj_t) BgL_cclausesz00_5340), BUNSPEC);
															BgL_arg2167z00_5378 = BgL_new1254z00_5385;
														}
														{	/* Tools/trace.sch 53 */
															obj_t BgL_list2168z00_5395;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg2169z00_5396;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg2170z00_5397;

																	BgL_arg2170z00_5397 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg2167z00_5378), BNIL);
																	BgL_arg2169z00_5396 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_copz00_5360),
																		BgL_arg2170z00_5397);
																}
																BgL_list2168z00_5395 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg2166z00_5377),
																	BgL_arg2169z00_5396);
															}
															BgL_auxz00_8052 = BgL_list2168z00_5395;
													}}
													((((BgL_csequencez00_bglt)
																COBJECT(BgL_new1250z00_5372))->BgL_copsz00) =
														((obj_t) BgL_auxz00_8052), BUNSPEC);
												}
												BgL_auxz00_8041 =
													((BgL_copz00_bglt) BgL_new1250z00_5372);
											}
											((((BgL_cblockz00_bglt) COBJECT(BgL_new1248z00_5368))->
													BgL_bodyz00) =
												((BgL_copz00_bglt) BgL_auxz00_8041), BUNSPEC);
										}
										return ((BgL_copz00_bglt) BgL_new1248z00_5368);
									}
							}
						}
					}
				}
			}
		}

	}



/* &node->cop-fail1751 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2fail1751z81zzcgen_cgenz00(obj_t
		BgL_envz00_4737, obj_t BgL_nodez00_4738, obj_t BgL_kontz00_4739,
		obj_t BgL_inpushexitz00_4740)
	{
		{	/* Cgen/cgen.scm 491 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg2148z00_5399;
				obj_t BgL_arg2149z00_5400;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg2152z00_5401;
					BgL_nodez00_bglt BgL_arg2153z00_5402;
					BgL_nodez00_bglt BgL_arg2154z00_5403;

					BgL_arg2152z00_5401 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_4738)))->BgL_procz00);
					BgL_arg2153z00_5402 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_4738)))->BgL_msgz00);
					BgL_arg2154z00_5403 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_4738)))->BgL_objz00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_list2155z00_5404;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg2156z00_5405;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_arg2157z00_5406;

								BgL_arg2157z00_5406 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg2154z00_5403), BNIL);
								BgL_arg2156z00_5405 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg2153z00_5402), BgL_arg2157z00_5406);
							}
							BgL_list2155z00_5404 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2152z00_5401), BgL_arg2156z00_5405);
						}
						BgL_arg2148z00_5399 = BgL_list2155z00_5404;
					}
				}
				BgL_arg2149z00_5400 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_failz00_bglt) BgL_nodez00_4738))))->BgL_locz00);
				{	/* Tools/trace.sch 53 */
					obj_t BgL_zc3z04anonymousza32158ze3z87_5407;

					{	/* Tools/trace.sch 53 */
						int BgL_tmpz00_8115;

						BgL_tmpz00_8115 = (int) (((long) 1));
						BgL_zc3z04anonymousza32158ze3z87_5407 =
							MAKE_L_PROCEDURE
							(BGl_z62zc3z04anonymousza32158ze3ze5zzcgen_cgenz00,
							BgL_tmpz00_8115);
					}
					PROCEDURE_L_SET(BgL_zc3z04anonymousza32158ze3z87_5407,
						(int) (((long) 0)),
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_4738)));
					return
						((BgL_copz00_bglt)
						BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg2148z00_5399,
							((bool_t) 0), BgL_arg2149z00_5400,
							BgL_zc3z04anonymousza32158ze3z87_5407, BgL_inpushexitz00_4740));
				}
			}
		}

	}



/* &<@anonymous:2158> */
	BgL_cfailz00_bglt BGl_z62zc3z04anonymousza32158ze3ze5zzcgen_cgenz00(obj_t
		BgL_envz00_4741, obj_t BgL_newzd2argszd2_4743)
	{
		{	/* Cgen/cgen.scm 499 */
			{	/* Cgen/cgen.scm 501 */
				BgL_failz00_bglt BgL_i1240z00_4742;

				BgL_i1240z00_4742 =
					((BgL_failz00_bglt)
					PROCEDURE_L_REF(BgL_envz00_4741, (int) (((long) 0))));
				{	/* Cgen/cgen.scm 501 */
					BgL_cfailz00_bglt BgL_arg2159z00_5409;

					{	/* Cgen/cgen.scm 501 */
						BgL_cfailz00_bglt BgL_new1242z00_5410;

						{	/* Cgen/cgen.scm 502 */
							BgL_cfailz00_bglt BgL_new1241z00_5411;

							BgL_new1241z00_5411 =
								((BgL_cfailz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_cfailz00_bgl))));
							{	/* Cgen/cgen.scm 502 */
								long BgL_arg2160z00_5412;

								{	/* Cgen/cgen.scm 502 */
									long BgL_res2749z00_5413;

									BgL_res2749z00_5413 =
										BGL_CLASS_INDEX(BGl_cfailz00zzcgen_copz00);
									BgL_arg2160z00_5412 = BgL_res2749z00_5413;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1241z00_5411),
									BgL_arg2160z00_5412);
							}
							BgL_new1242z00_5410 = BgL_new1241z00_5411;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1242z00_5410)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1240z00_4742)))->BgL_locz00)), BUNSPEC);
						((((BgL_cfailz00_bglt) COBJECT(BgL_new1242z00_5410))->BgL_procz00) =
							((BgL_copz00_bglt) ((BgL_copz00_bglt) CAR(((obj_t)
											BgL_newzd2argszd2_4743)))), BUNSPEC);
						{
							BgL_copz00_bglt BgL_auxz00_8139;

							{	/* Cgen/cgen.scm 504 */
								obj_t BgL_pairz00_5414;

								BgL_pairz00_5414 = CDR(((obj_t) BgL_newzd2argszd2_4743));
								BgL_auxz00_8139 = ((BgL_copz00_bglt) CAR(BgL_pairz00_5414));
							}
							((((BgL_cfailz00_bglt) COBJECT(BgL_new1242z00_5410))->
									BgL_msgz00) = ((BgL_copz00_bglt) BgL_auxz00_8139), BUNSPEC);
						}
						{
							BgL_copz00_bglt BgL_auxz00_8145;

							{	/* Cgen/cgen.scm 505 */
								obj_t BgL_pairz00_5415;

								{	/* Cgen/cgen.scm 505 */
									obj_t BgL_pairz00_5416;

									BgL_pairz00_5416 = CDR(((obj_t) BgL_newzd2argszd2_4743));
									BgL_pairz00_5415 = CDR(BgL_pairz00_5416);
								}
								BgL_auxz00_8145 = ((BgL_copz00_bglt) CAR(BgL_pairz00_5415));
							}
							((((BgL_cfailz00_bglt) COBJECT(BgL_new1242z00_5410))->
									BgL_objz00) = ((BgL_copz00_bglt) BgL_auxz00_8145), BUNSPEC);
						}
						BgL_arg2159z00_5409 = BgL_new1242z00_5410;
					}
					return BgL_arg2159z00_5409;
				}
			}
		}

	}



/* &node->cop-conditiona1749 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2conditiona1749z81zzcgen_cgenz00(obj_t
		BgL_envz00_4744, obj_t BgL_nodez00_4745, obj_t BgL_kontz00_4746,
		obj_t BgL_inpushexitz00_4747)
	{
		{	/* Cgen/cgen.scm 453 */
			{	/* Tools/trace.sch 53 */
				BgL_localz00_bglt BgL_auxz00_5418;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_arg2147z00_5419;

					BgL_arg2147z00_5419 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 16)));
					BgL_auxz00_5418 =
						BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(BgL_arg2147z00_5419,
						((BgL_typez00_bglt) BGl_za2boolza2z00zztype_cachez00));
				}
				{	/* Tools/trace.sch 53 */
					BgL_copz00_bglt BgL_ctestz00_5420;

					{	/* Tools/trace.sch 53 */
						BgL_setqz00_bglt BgL_arg2145z00_5421;

						{	/* Tools/trace.sch 53 */
							BgL_nodez00_bglt BgL_arg2146z00_5422;

							BgL_arg2146z00_5422 =
								(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_4745)))->
								BgL_testz00);
							BgL_arg2145z00_5421 =
								BGl_nodezd2setqzd2zzcgen_cgenz00(((BgL_variablez00_bglt)
									BgL_auxz00_5418), BgL_arg2146z00_5422);
						}
						BgL_ctestz00_5420 =
							BGl_nodezd2ze3copz31zzcgen_cgenz00(
							((BgL_nodez00_bglt) BgL_arg2145z00_5421),
							BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
							CBOOL(BgL_inpushexitz00_4747));
					}
					{	/* Tools/trace.sch 53 */

						{	/* Tools/trace.sch 53 */
							bool_t BgL_test3089z00_8163;

							{	/* Tools/trace.sch 53 */
								bool_t BgL_test3090z00_8164;

								{	/* Tools/trace.sch 53 */
									bool_t BgL_res2739z00_5423;

									BgL_res2739z00_5423 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_ctestz00_5420), BGl_csetqz00zzcgen_copz00);
									BgL_test3090z00_8164 = BgL_res2739z00_5423;
								}
								if (BgL_test3090z00_8164)
									{	/* Tools/trace.sch 53 */
										BgL_test3089z00_8163 =
											(
											((obj_t)
												(((BgL_varcz00_bglt) COBJECT(
															(((BgL_csetqz00_bglt) COBJECT(
																		((BgL_csetqz00_bglt) BgL_ctestz00_5420)))->
																BgL_varz00)))->BgL_variablez00)) ==
											((obj_t) BgL_auxz00_5418));
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL_test3089z00_8163 = ((bool_t) 0);
									}
							}
							if (BgL_test3089z00_8163)
								{	/* Tools/trace.sch 53 */
									BgL_cifz00_bglt BgL_new1229z00_5424;

									{	/* Tools/trace.sch 53 */
										BgL_cifz00_bglt BgL_new1228z00_5425;

										BgL_new1228z00_5425 =
											((BgL_cifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cifz00_bgl))));
										{	/* Tools/trace.sch 53 */
											long BgL_arg2123z00_5426;

											{	/* Tools/trace.sch 53 */
												long BgL_res2740z00_5427;

												BgL_res2740z00_5427 =
													BGL_CLASS_INDEX(BGl_cifz00zzcgen_copz00);
												BgL_arg2123z00_5426 = BgL_res2740z00_5427;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1228z00_5425),
												BgL_arg2123z00_5426);
										}
										BgL_new1229z00_5424 = BgL_new1228z00_5425;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1229z00_5424)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt)
																BgL_nodez00_4745))))->BgL_locz00)), BUNSPEC);
									((((BgL_cifz00_bglt) COBJECT(BgL_new1229z00_5424))->
											BgL_testz00) =
										((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
													COBJECT(((BgL_csetqz00_bglt) BgL_ctestz00_5420)))->
												BgL_valuez00)), BUNSPEC);
									{
										BgL_copz00_bglt BgL_auxz00_8185;

										{	/* Tools/trace.sch 53 */
											BgL_copz00_bglt BgL_arg2117z00_5428;
											obj_t BgL_arg2118z00_5429;

											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_arg2119z00_5430;

												BgL_arg2119z00_5430 =
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_4745)))->
													BgL_truez00);
												BgL_arg2117z00_5428 =
													BGl_nodezd2ze3copz31zzcgen_cgenz00
													(BgL_arg2119z00_5430, BgL_kontz00_4746,
													CBOOL(BgL_inpushexitz00_4747));
											}
											BgL_arg2118z00_5429 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_conditionalz00_bglt) BgL_nodez00_4745))))->
												BgL_locz00);
											BgL_auxz00_8185 =
												((BgL_copz00_bglt)
												BGl_blockzd2kontzd2zzcgen_cgenz00(((obj_t)
														BgL_arg2117z00_5428), BgL_arg2118z00_5429));
										}
										((((BgL_cifz00_bglt) COBJECT(BgL_new1229z00_5424))->
												BgL_truez00) =
											((BgL_copz00_bglt) BgL_auxz00_8185), BUNSPEC);
									}
									{
										BgL_copz00_bglt BgL_auxz00_8197;

										{	/* Tools/trace.sch 53 */
											BgL_copz00_bglt BgL_arg2120z00_5431;
											obj_t BgL_arg2121z00_5432;

											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_arg2122z00_5433;

												BgL_arg2122z00_5433 =
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_4745)))->
													BgL_falsez00);
												BgL_arg2120z00_5431 =
													BGl_nodezd2ze3copz31zzcgen_cgenz00
													(BgL_arg2122z00_5433, BgL_kontz00_4746,
													CBOOL(BgL_inpushexitz00_4747));
											}
											BgL_arg2121z00_5432 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_conditionalz00_bglt) BgL_nodez00_4745))))->
												BgL_locz00);
											BgL_auxz00_8197 =
												((BgL_copz00_bglt)
												BGl_blockzd2kontzd2zzcgen_cgenz00(((obj_t)
														BgL_arg2120z00_5431), BgL_arg2121z00_5432));
										}
										((((BgL_cifz00_bglt) COBJECT(BgL_new1229z00_5424))->
												BgL_falsez00) =
											((BgL_copz00_bglt) BgL_auxz00_8197), BUNSPEC);
									}
									return ((BgL_copz00_bglt) BgL_new1229z00_5424);
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_cblockz00_bglt BgL_new1231z00_5434;

									{	/* Tools/trace.sch 53 */
										BgL_cblockz00_bglt BgL_new1230z00_5435;

										BgL_new1230z00_5435 =
											((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cblockz00_bgl))));
										{	/* Tools/trace.sch 53 */
											long BgL_arg2142z00_5436;

											{	/* Tools/trace.sch 53 */
												long BgL_res2741z00_5437;

												BgL_res2741z00_5437 =
													BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
												BgL_arg2142z00_5436 = BgL_res2741z00_5437;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1230z00_5435),
												BgL_arg2142z00_5436);
										}
										BgL_new1231z00_5434 = BgL_new1230z00_5435;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1231z00_5434)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt)
																BgL_nodez00_4745))))->BgL_locz00)), BUNSPEC);
									{
										BgL_copz00_bglt BgL_auxz00_8219;

										{	/* Tools/trace.sch 53 */
											BgL_csequencez00_bglt BgL_new1233z00_5438;

											{	/* Tools/trace.sch 53 */
												BgL_csequencez00_bglt BgL_new1232z00_5439;

												BgL_new1232z00_5439 =
													((BgL_csequencez00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_csequencez00_bgl))));
												{	/* Tools/trace.sch 53 */
													long BgL_arg2141z00_5440;

													{	/* Tools/trace.sch 53 */
														long BgL_res2742z00_5441;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_classz00_5442;

															BgL_classz00_5442 = BGl_csequencez00zzcgen_copz00;
															BgL_res2742z00_5441 =
																BGL_CLASS_INDEX(BgL_classz00_5442);
														}
														BgL_arg2141z00_5440 = BgL_res2742z00_5441;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1232z00_5439),
														BgL_arg2141z00_5440);
												}
												BgL_new1233z00_5438 = BgL_new1232z00_5439;
											}
											((((BgL_copz00_bglt) COBJECT(
															((BgL_copz00_bglt) BgL_new1233z00_5438)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) (
																		(BgL_conditionalz00_bglt)
																		BgL_nodez00_4745))))->BgL_locz00)),
												BUNSPEC);
											((((BgL_csequencez00_bglt) COBJECT(BgL_new1233z00_5438))->
													BgL_czd2expzf3z21) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
											{
												obj_t BgL_auxz00_8230;

												{	/* Tools/trace.sch 53 */
													BgL_localzd2varzd2_bglt BgL_arg2125z00_5443;
													BgL_cifz00_bglt BgL_arg2126z00_5444;

													{	/* Tools/trace.sch 53 */
														BgL_localzd2varzd2_bglt BgL_new1235z00_5445;

														{	/* Tools/trace.sch 53 */
															BgL_localzd2varzd2_bglt BgL_new1234z00_5446;

															BgL_new1234z00_5446 =
																((BgL_localzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzd2varzd2_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg2131z00_5447;

																{	/* Tools/trace.sch 53 */
																	long BgL_res2743z00_5448;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_classz00_5449;

																		BgL_classz00_5449 =
																			BGl_localzd2varzd2zzcgen_copz00;
																		BgL_res2743z00_5448 =
																			BGL_CLASS_INDEX(BgL_classz00_5449);
																	}
																	BgL_arg2131z00_5447 = BgL_res2743z00_5448;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1234z00_5446),
																	BgL_arg2131z00_5447);
															}
															BgL_new1235z00_5445 = BgL_new1234z00_5446;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1235z00_5445)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_conditionalz00_bglt)
																					BgL_nodez00_4745))))->BgL_locz00)),
															BUNSPEC);
														{
															obj_t BgL_auxz00_8240;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_list2130z00_5450;

																BgL_list2130z00_5450 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_auxz00_5418), BNIL);
																BgL_auxz00_8240 = BgL_list2130z00_5450;
															}
															((((BgL_localzd2varzd2_bglt)
																		COBJECT(BgL_new1235z00_5445))->
																	BgL_varsz00) =
																((obj_t) BgL_auxz00_8240), BUNSPEC);
														}
														BgL_arg2125z00_5443 = BgL_new1235z00_5445;
													}
													{	/* Tools/trace.sch 53 */
														BgL_cifz00_bglt BgL_new1237z00_5451;

														{	/* Tools/trace.sch 53 */
															BgL_cifz00_bglt BgL_new1236z00_5452;

															BgL_new1236z00_5452 =
																((BgL_cifz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cifz00_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg2140z00_5453;

																{	/* Tools/trace.sch 53 */
																	long BgL_res2745z00_5454;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_classz00_5455;

																		BgL_classz00_5455 = BGl_cifz00zzcgen_copz00;
																		BgL_res2745z00_5454 =
																			BGL_CLASS_INDEX(BgL_classz00_5455);
																	}
																	BgL_arg2140z00_5453 = BgL_res2745z00_5454;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1236z00_5452),
																	BgL_arg2140z00_5453);
															}
															BgL_new1237z00_5451 = BgL_new1236z00_5452;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1237z00_5451)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_conditionalz00_bglt)
																					BgL_nodez00_4745))))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_8253;

															{	/* Tools/trace.sch 53 */
																BgL_varcz00_bglt BgL_new1239z00_5456;

																{	/* Tools/trace.sch 53 */
																	BgL_varcz00_bglt BgL_new1238z00_5457;

																	BgL_new1238z00_5457 =
																		((BgL_varcz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varcz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg2132z00_5458;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2746z00_5459;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_classz00_5460;

																				BgL_classz00_5460 =
																					BGl_varcz00zzcgen_copz00;
																				BgL_res2746z00_5459 =
																					BGL_CLASS_INDEX(BgL_classz00_5460);
																			}
																			BgL_arg2132z00_5458 = BgL_res2746z00_5459;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1238z00_5457),
																			BgL_arg2132z00_5458);
																	}
																	BgL_new1239z00_5456 = BgL_new1238z00_5457;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1239z00_5456)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_conditionalz00_bglt)
																							BgL_nodez00_4745))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_varcz00_bglt)
																			COBJECT(BgL_new1239z00_5456))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt) BgL_auxz00_5418)),
																	BUNSPEC);
																BgL_auxz00_8253 =
																	((BgL_copz00_bglt) BgL_new1239z00_5456);
															}
															((((BgL_cifz00_bglt)
																		COBJECT(BgL_new1237z00_5451))->
																	BgL_testz00) =
																((BgL_copz00_bglt) BgL_auxz00_8253), BUNSPEC);
														}
														{
															BgL_copz00_bglt BgL_auxz00_8267;

															{	/* Tools/trace.sch 53 */
																BgL_copz00_bglt BgL_arg2133z00_5461;
																obj_t BgL_arg2134z00_5462;

																{	/* Tools/trace.sch 53 */
																	BgL_nodez00_bglt BgL_arg2135z00_5463;

																	BgL_arg2135z00_5463 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_4745)))->BgL_truez00);
																	BgL_arg2133z00_5461 =
																		BGl_nodezd2ze3copz31zzcgen_cgenz00
																		(BgL_arg2135z00_5463, BgL_kontz00_4746,
																		CBOOL(BgL_inpushexitz00_4747));
																}
																BgL_arg2134z00_5462 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_4745))))->BgL_locz00);
																BgL_auxz00_8267 =
																	((BgL_copz00_bglt)
																	BGl_blockzd2kontzd2zzcgen_cgenz00(((obj_t)
																			BgL_arg2133z00_5461),
																		BgL_arg2134z00_5462));
															}
															((((BgL_cifz00_bglt)
																		COBJECT(BgL_new1237z00_5451))->
																	BgL_truez00) =
																((BgL_copz00_bglt) BgL_auxz00_8267), BUNSPEC);
														}
														{
															BgL_copz00_bglt BgL_auxz00_8279;

															{	/* Tools/trace.sch 53 */
																BgL_copz00_bglt BgL_arg2136z00_5464;
																obj_t BgL_arg2137z00_5465;

																{	/* Tools/trace.sch 53 */
																	BgL_nodez00_bglt BgL_arg2138z00_5466;

																	BgL_arg2138z00_5466 =
																		(((BgL_conditionalz00_bglt) COBJECT(
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_4745)))->BgL_falsez00);
																	BgL_arg2136z00_5464 =
																		BGl_nodezd2ze3copz31zzcgen_cgenz00
																		(BgL_arg2138z00_5466, BgL_kontz00_4746,
																		CBOOL(BgL_inpushexitz00_4747));
																}
																BgL_arg2137z00_5465 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				((BgL_conditionalz00_bglt)
																					BgL_nodez00_4745))))->BgL_locz00);
																BgL_auxz00_8279 =
																	((BgL_copz00_bglt)
																	BGl_blockzd2kontzd2zzcgen_cgenz00(((obj_t)
																			BgL_arg2136z00_5464),
																		BgL_arg2137z00_5465));
															}
															((((BgL_cifz00_bglt)
																		COBJECT(BgL_new1237z00_5451))->
																	BgL_falsez00) =
																((BgL_copz00_bglt) BgL_auxz00_8279), BUNSPEC);
														}
														BgL_arg2126z00_5444 = BgL_new1237z00_5451;
													}
													{	/* Tools/trace.sch 53 */
														obj_t BgL_list2127z00_5467;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg2128z00_5468;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg2129z00_5469;

																BgL_arg2129z00_5469 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg2126z00_5444), BNIL);
																BgL_arg2128z00_5468 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_ctestz00_5420),
																	BgL_arg2129z00_5469);
															}
															BgL_list2127z00_5467 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2125z00_5443),
																BgL_arg2128z00_5468);
														}
														BgL_auxz00_8230 = BgL_list2127z00_5467;
												}}
												((((BgL_csequencez00_bglt)
															COBJECT(BgL_new1233z00_5438))->BgL_copsz00) =
													((obj_t) BgL_auxz00_8230), BUNSPEC);
											}
											BgL_auxz00_8219 = ((BgL_copz00_bglt) BgL_new1233z00_5438);
										}
										((((BgL_cblockz00_bglt) COBJECT(BgL_new1231z00_5434))->
												BgL_bodyz00) =
											((BgL_copz00_bglt) BgL_auxz00_8219), BUNSPEC);
									}
									return ((BgL_copz00_bglt) BgL_new1231z00_5434);
								}
						}
					}
				}
			}
		}

	}



/* &node->cop-setq1747 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2setq1747z81zzcgen_cgenz00(obj_t
		BgL_envz00_4748, obj_t BgL_nodez00_4749, obj_t BgL_kontz00_4750,
		obj_t BgL_inpushexitz00_4751)
	{
		{	/* Cgen/cgen.scm 438 */
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_varz00_5471;

				BgL_varz00_5471 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_4749)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Tools/trace.sch 53 */
					bool_t BgL_test3091z00_8304;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_test3092z00_8305;

						{	/* Tools/trace.sch 53 */
							BgL_nodez00_bglt BgL_arg2110z00_5472;

							BgL_arg2110z00_5472 =
								(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_4749)))->BgL_valuez00);
							{	/* Tools/trace.sch 53 */
								bool_t BgL_res2737z00_5473;

								BgL_res2737z00_5473 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2110z00_5472), BGl_varz00zzast_nodez00);
								BgL_test3092z00_8305 = BgL_res2737z00_5473;
							}
						}
						if (BgL_test3092z00_8305)
							{	/* Tools/trace.sch 53 */
								BgL_test3091z00_8304 =
									(
									((obj_t) BgL_varz00_5471) ==
									((obj_t)
										(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt)
														(((BgL_setqz00_bglt) COBJECT(
																	((BgL_setqz00_bglt) BgL_nodez00_4749)))->
															BgL_valuez00))))->BgL_variablez00)));
							}
						else
							{	/* Tools/trace.sch 53 */
								BgL_test3091z00_8304 = ((bool_t) 0);
							}
					}
					if (BgL_test3091z00_8304)
						{	/* Tools/trace.sch 53 */
							BgL_cvoidz00_bglt BgL_arg2102z00_5474;

							{	/* Tools/trace.sch 53 */
								BgL_catomz00_bglt BgL_arg2103z00_5475;

								{	/* Tools/trace.sch 53 */
									BgL_catomz00_bglt BgL_new1226z00_5476;

									{	/* Tools/trace.sch 53 */
										BgL_catomz00_bglt BgL_new1225z00_5477;

										BgL_new1225z00_5477 =
											((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_catomz00_bgl))));
										{	/* Tools/trace.sch 53 */
											long BgL_arg2104z00_5478;

											{	/* Tools/trace.sch 53 */
												long BgL_res2738z00_5479;

												BgL_res2738z00_5479 =
													BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
												BgL_arg2104z00_5478 = BgL_res2738z00_5479;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1225z00_5477),
												BgL_arg2104z00_5478);
										}
										BgL_new1226z00_5476 = BgL_new1225z00_5477;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1226z00_5476)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																BgL_nodez00_4749))))->BgL_locz00)), BUNSPEC);
									((((BgL_catomz00_bglt) COBJECT(BgL_new1226z00_5476))->
											BgL_valuez00) = ((obj_t) BUNSPEC), BUNSPEC);
									BgL_arg2103z00_5475 = BgL_new1226z00_5476;
								}
								BgL_arg2102z00_5474 =
									BGl_za2voidzd2kontza2zd2zzcgen_cgenz00(
									((obj_t) BgL_arg2103z00_5475));
							}
							return
								((BgL_copz00_bglt)
								PROCEDURE_ENTRY(BgL_kontz00_4750) (BgL_kontz00_4750,
									((obj_t) BgL_arg2102z00_5474), BEOA));
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_nodez00_bglt BgL_arg2105z00_5480;
							obj_t BgL_arg2106z00_5481;

							BgL_arg2105z00_5480 =
								(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_4749)))->BgL_valuez00);
							BgL_arg2106z00_5481 =
								BGl_makezd2setqzd2kontz00zzcgen_cgenz00(
								((obj_t) BgL_varz00_5471),
								(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_setqz00_bglt) BgL_nodez00_4749))))->BgL_locz00),
								BgL_kontz00_4750);
							return BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_arg2105z00_5480,
								BgL_arg2106z00_5481, CBOOL(BgL_inpushexitz00_4751));
						}
				}
			}
		}

	}



/* &node->cop-cast1745 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2cast1745z81zzcgen_cgenz00(obj_t
		BgL_envz00_4752, obj_t BgL_nodez00_4753, obj_t BgL_kontz00_4754,
		obj_t BgL_inpushexitz00_4755)
	{
		{	/* Cgen/cgen.scm 420 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg2087z00_5483;
				obj_t BgL_arg2088z00_5484;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg2090z00_5485;

					BgL_arg2090z00_5485 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_4753)))->BgL_argz00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_list2091z00_5486;

						BgL_list2091z00_5486 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg2090z00_5485), BNIL);
						BgL_arg2087z00_5483 = BgL_list2091z00_5486;
					}
				}
				BgL_arg2088z00_5484 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_castz00_bglt) BgL_nodez00_4753))))->BgL_locz00);
				{	/* Tools/trace.sch 53 */
					obj_t BgL_zc3z04anonymousza32092ze3z87_5487;

					{	/* Tools/trace.sch 53 */
						int BgL_tmpz00_8351;

						BgL_tmpz00_8351 = (int) (((long) 2));
						BgL_zc3z04anonymousza32092ze3z87_5487 =
							MAKE_L_PROCEDURE
							(BGl_z62zc3z04anonymousza32092ze3ze5zzcgen_cgenz00,
							BgL_tmpz00_8351);
					}
					PROCEDURE_L_SET(BgL_zc3z04anonymousza32092ze3z87_5487,
						(int) (((long) 0)),
						((obj_t) ((BgL_castz00_bglt) BgL_nodez00_4753)));
					PROCEDURE_L_SET(BgL_zc3z04anonymousza32092ze3z87_5487,
						(int) (((long) 1)), BgL_kontz00_4754);
					return
						((BgL_copz00_bglt)
						BGl_nodezd2argszd2ze3copze3zzcgen_cgenz00(BgL_arg2087z00_5483,
							((bool_t) 1), BgL_arg2088z00_5484,
							BgL_zc3z04anonymousza32092ze3z87_5487, BgL_inpushexitz00_4755));
				}
			}
		}

	}



/* &<@anonymous:2092> */
	obj_t BGl_z62zc3z04anonymousza32092ze3ze5zzcgen_cgenz00(obj_t BgL_envz00_4756,
		obj_t BgL_newzd2argszd2_4759)
	{
		{	/* Cgen/cgen.scm 428 */
			{	/* Cgen/cgen.scm 429 */
				BgL_castz00_bglt BgL_i1221z00_4757;
				obj_t BgL_kontz00_4758;

				BgL_i1221z00_4757 =
					((BgL_castz00_bglt)
					PROCEDURE_L_REF(BgL_envz00_4756, (int) (((long) 0))));
				BgL_kontz00_4758 = PROCEDURE_L_REF(BgL_envz00_4756, (int) (((long) 1)));
				{	/* Cgen/cgen.scm 429 */
					BgL_ccastz00_bglt BgL_arg2093z00_5489;

					{	/* Cgen/cgen.scm 429 */
						BgL_ccastz00_bglt BgL_new1223z00_5490;

						{	/* Cgen/cgen.scm 431 */
							BgL_ccastz00_bglt BgL_new1222z00_5491;

							BgL_new1222z00_5491 =
								((BgL_ccastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_ccastz00_bgl))));
							{	/* Cgen/cgen.scm 431 */
								long BgL_arg2094z00_5492;

								{	/* Cgen/cgen.scm 431 */
									long BgL_res2736z00_5493;

									BgL_res2736z00_5493 =
										BGL_CLASS_INDEX(BGl_ccastz00zzcgen_copz00);
									BgL_arg2094z00_5492 = BgL_res2736z00_5493;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1222z00_5491),
									BgL_arg2094z00_5492);
							}
							BgL_new1223z00_5490 = BgL_new1222z00_5491;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1223z00_5490)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_i1221z00_4757)))->BgL_locz00)), BUNSPEC);
						((((BgL_ccastz00_bglt) COBJECT(BgL_new1223z00_5490))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) BgL_i1221z00_4757)))->
									BgL_typez00)), BUNSPEC);
						((((BgL_ccastz00_bglt) COBJECT(BgL_new1223z00_5490))->BgL_argz00) =
							((BgL_copz00_bglt) ((BgL_copz00_bglt) CAR(((obj_t)
											BgL_newzd2argszd2_4759)))), BUNSPEC);
						BgL_arg2093z00_5489 = BgL_new1223z00_5490;
					}
					return
						PROCEDURE_ENTRY(BgL_kontz00_4758) (BgL_kontz00_4758,
						((obj_t) BgL_arg2093z00_5489), BEOA);
				}
			}
		}

	}



/* &node->cop-private1743 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2private1743z81zzcgen_cgenz00(obj_t
		BgL_envz00_4760, obj_t BgL_nodez00_4761, obj_t BgL_kontz00_4762,
		obj_t BgL_inpushexitz00_4763)
	{
		{	/* Cgen/cgen.scm 410 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg2086z00_5495;

				BgL_arg2086z00_5495 =
					(((BgL_privatez00_bglt) COBJECT(
							((BgL_privatez00_bglt) BgL_nodez00_4761)))->BgL_czd2formatzd2);
				return
					((BgL_copz00_bglt)
					BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg2086z00_5495,
						((bool_t) 1),
						((BgL_externz00_bglt) ((BgL_privatez00_bglt) BgL_nodez00_4761)),
						BgL_kontz00_4762, BgL_inpushexitz00_4763));
			}
		}

	}



/* &node->cop-pragma1741 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2pragma1741z81zzcgen_cgenz00(obj_t
		BgL_envz00_4764, obj_t BgL_nodez00_4765, obj_t BgL_kontz00_4766,
		obj_t BgL_inpushexitz00_4767)
	{
		{	/* Cgen/cgen.scm 393 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_test3093z00_8393;

				if (
					(STRING_LENGTH(
							(((BgL_pragmaz00_bglt) COBJECT(
										((BgL_pragmaz00_bglt) BgL_nodez00_4765)))->
								BgL_formatz00)) == ((long) 0)))
					{	/* Tools/trace.sch 53 */
						if (NULLP(
								(((BgL_externz00_bglt) COBJECT(
											((BgL_externz00_bglt)
												((BgL_pragmaz00_bglt) BgL_nodez00_4765))))->
									BgL_exprza2za2)))
							{	/* Tools/trace.sch 53 */
								BgL_test3093z00_8393 = ((bool_t) 0);
							}
						else
							{	/* Tools/trace.sch 53 */
								bool_t BgL_test3096z00_8404;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_tmpz00_8405;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_pairz00_5497;

										BgL_pairz00_5497 =
											(((BgL_externz00_bglt) COBJECT(
													((BgL_externz00_bglt)
														((BgL_pragmaz00_bglt) BgL_nodez00_4765))))->
											BgL_exprza2za2);
										BgL_tmpz00_8405 = CDR(BgL_pairz00_5497);
									}
									BgL_test3096z00_8404 = NULLP(BgL_tmpz00_8405);
								}
								if (BgL_test3096z00_8404)
									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg2080z00_5498;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_pairz00_5499;

											BgL_pairz00_5499 =
												(((BgL_externz00_bglt) COBJECT(
														((BgL_externz00_bglt)
															((BgL_pragmaz00_bglt) BgL_nodez00_4765))))->
												BgL_exprza2za2);
											BgL_arg2080z00_5498 = CAR(BgL_pairz00_5499);
										}
										BgL_test3093z00_8393 =
											BGl_isazf3zf3zz__objectz00(BgL_arg2080z00_5498,
											BGl_varz00zzast_nodez00);
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL_test3093z00_8393 = ((bool_t) 0);
									}
							}
					}
				else
					{	/* Tools/trace.sch 53 */
						BgL_test3093z00_8393 = ((bool_t) 0);
					}
				if (BgL_test3093z00_8393)
					{	/* Tools/trace.sch 53 */
						BgL_varz00_bglt BgL_i1218z00_5500;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_pairz00_5501;

							BgL_pairz00_5501 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_pragmaz00_bglt) BgL_nodez00_4765))))->
								BgL_exprza2za2);
							BgL_i1218z00_5500 = ((BgL_varz00_bglt) CAR(BgL_pairz00_5501));
						}
						{	/* Tools/trace.sch 53 */
							BgL_variablez00_bglt BgL_i1219z00_5502;

							BgL_i1219z00_5502 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1218z00_5500))->
								BgL_variablez00);
							{	/* Tools/trace.sch 53 */
								obj_t BgL_arg2077z00_5503;

								BgL_arg2077z00_5503 =
									(((BgL_variablez00_bglt) COBJECT(BgL_i1219z00_5502))->
									BgL_namez00);
								return ((BgL_copz00_bglt)
									BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg2077z00_5503,
										((bool_t) 0),
										((BgL_externz00_bglt) ((BgL_pragmaz00_bglt)
												BgL_nodez00_4765)), BgL_kontz00_4766,
										BgL_inpushexitz00_4767));
							}
						}
					}
				else
					{	/* Tools/trace.sch 53 */
						obj_t BgL_arg2079z00_5504;

						BgL_arg2079z00_5504 =
							(((BgL_pragmaz00_bglt) COBJECT(
									((BgL_pragmaz00_bglt) BgL_nodez00_4765)))->BgL_formatz00);
						return
							((BgL_copz00_bglt)
							BGl_externzd2ze3copz31zzcgen_cgenz00(BgL_arg2079z00_5504,
								((bool_t) 0),
								((BgL_externz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_4765)),
								BgL_kontz00_4766, BgL_inpushexitz00_4767));
					}
			}
		}

	}



/* &node->cop-sync1739 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2sync1739z81zzcgen_cgenz00(obj_t
		BgL_envz00_4768, obj_t BgL_nodez00_4769, obj_t BgL_kontz00_4770,
		obj_t BgL_inpushexitz00_4771)
	{
		{	/* Cgen/cgen.scm 369 */
			return
				BGl_nodezd2ze3copz31zzcgen_cgenz00
				(BGl_synczd2ze3sequencez31zzsync_nodez00(((BgL_syncz00_bglt)
						BgL_nodez00_4769)), BgL_kontz00_4770,
				CBOOL(BgL_inpushexitz00_4771));
		}

	}



/* &node->cop-sequence1737 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2sequence1737z81zzcgen_cgenz00(obj_t
		BgL_envz00_4772, obj_t BgL_nodez00_4773, obj_t BgL_kontz00_4774,
		obj_t BgL_inpushexitz00_4775)
	{
		{	/* Cgen/cgen.scm 328 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_expz00_5507;

				BgL_expz00_5507 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_4773)))->BgL_nodesz00);
				if (NULLP(BgL_expz00_5507))
					{	/* Tools/trace.sch 53 */
						BgL_nopz00_bglt BgL_arg2031z00_5508;

						{	/* Tools/trace.sch 53 */
							BgL_nopz00_bglt BgL_new1206z00_5509;

							{	/* Tools/trace.sch 53 */
								BgL_nopz00_bglt BgL_new1205z00_5510;

								BgL_new1205z00_5510 =
									((BgL_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_nopz00_bgl))));
								{	/* Tools/trace.sch 53 */
									long BgL_arg2033z00_5511;

									{	/* Tools/trace.sch 53 */
										long BgL_res2725z00_5512;

										BgL_res2725z00_5512 =
											BGL_CLASS_INDEX(BGl_nopz00zzcgen_copz00);
										BgL_arg2033z00_5511 = BgL_res2725z00_5512;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1205z00_5510),
										BgL_arg2033z00_5511);
								}
								BgL_new1206z00_5509 = BgL_new1205z00_5510;
							}
							((((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt) BgL_new1206z00_5509)))->BgL_locz00) =
								((obj_t) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_sequencez00_bglt)
														BgL_nodez00_4773))))->BgL_locz00)), BUNSPEC);
							BgL_arg2031z00_5508 = BgL_new1206z00_5509;
						}
						return
							((BgL_copz00_bglt)
							PROCEDURE_ENTRY(BgL_kontz00_4774) (BgL_kontz00_4774,
								((obj_t) BgL_arg2031z00_5508), BEOA));
					}
				else
					{	/* Tools/trace.sch 53 */
						if (NULLP(CDR(BgL_expz00_5507)))
							{	/* Tools/trace.sch 53 */
								BgL_copz00_bglt BgL_copz00_5513;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg2037z00_5514;

									BgL_arg2037z00_5514 = CAR(BgL_expz00_5507);
									BgL_copz00_5513 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(
										((BgL_nodez00_bglt) BgL_arg2037z00_5514), BgL_kontz00_4774,
										CBOOL(BgL_inpushexitz00_4775));
								}
								{	/* Tools/trace.sch 53 */
									BgL_stopz00_bglt BgL_new1208z00_5515;

									{	/* Tools/trace.sch 53 */
										BgL_stopz00_bglt BgL_new1207z00_5516;

										BgL_new1207z00_5516 =
											((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_stopz00_bgl))));
										{	/* Tools/trace.sch 53 */
											long BgL_arg2036z00_5517;

											{	/* Tools/trace.sch 53 */
												long BgL_res2727z00_5518;

												BgL_res2727z00_5518 =
													BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
												BgL_arg2036z00_5517 = BgL_res2727z00_5518;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1207z00_5516),
												BgL_arg2036z00_5517);
										}
										BgL_new1208z00_5515 = BgL_new1207z00_5516;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1208z00_5515)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_stopz00_bglt) COBJECT(BgL_new1208z00_5515))->
											BgL_valuez00) =
										((BgL_copz00_bglt) BgL_copz00_5513), BUNSPEC);
									return ((BgL_copz00_bglt) BgL_new1208z00_5515);
								}
							}
						else
							{	/* Tools/trace.sch 53 */
								obj_t BgL_inpushexitz00_5519;

								if (CBOOL(BgL_inpushexitz00_4775))
									{	/* Tools/trace.sch 53 */
										BgL_inpushexitz00_5519 = BgL_inpushexitz00_4775;
									}
								else
									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg2056z00_5520;

										BgL_arg2056z00_5520 = CAR(BgL_expz00_5507);
										BgL_inpushexitz00_5519 =
											BBOOL(BGl_iszd2pushzd2exitzf3zf3zzcgen_cgenz00(
												((BgL_nodez00_bglt) BgL_arg2056z00_5520)));
									}
								{
									obj_t BgL_expz00_5522;
									obj_t BgL_newz00_5523;

									{
										BgL_csequencez00_bglt BgL_auxz00_8477;

										BgL_expz00_5522 = BgL_expz00_5507;
										BgL_newz00_5523 = BNIL;
									BgL_loopz00_5521:
										if (NULLP(CDR(((obj_t) BgL_expz00_5522))))
											{	/* Tools/trace.sch 53 */
												BgL_copz00_bglt BgL_copz00_5524;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg2044z00_5525;

													BgL_arg2044z00_5525 = CAR(((obj_t) BgL_expz00_5522));
													BgL_copz00_5524 =
														BGl_nodezd2ze3copz31zzcgen_cgenz00(
														((BgL_nodez00_bglt) BgL_arg2044z00_5525),
														BgL_kontz00_4774, CBOOL(BgL_inpushexitz00_5519));
												}
												{	/* Tools/trace.sch 53 */
													BgL_csequencez00_bglt BgL_new1212z00_5526;

													{	/* Tools/trace.sch 53 */
														BgL_csequencez00_bglt BgL_new1211z00_5527;

														BgL_new1211z00_5527 =
															((BgL_csequencez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_csequencez00_bgl))));
														{	/* Tools/trace.sch 53 */
															long BgL_arg2043z00_5528;

															{	/* Tools/trace.sch 53 */
																long BgL_res2729z00_5529;

																BgL_res2729z00_5529 =
																	BGL_CLASS_INDEX
																	(BGl_csequencez00zzcgen_copz00);
																BgL_arg2043z00_5528 = BgL_res2729z00_5529;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1211z00_5527),
																BgL_arg2043z00_5528);
														}
														BgL_new1212z00_5526 = BgL_new1211z00_5527;
													}
													((((BgL_copz00_bglt) COBJECT(
																	((BgL_copz00_bglt) BgL_new1212z00_5526)))->
															BgL_locz00) =
														((obj_t) (((BgL_copz00_bglt)
																	COBJECT(BgL_copz00_5524))->BgL_locz00)),
														BUNSPEC);
													((((BgL_csequencez00_bglt)
																COBJECT(BgL_new1212z00_5526))->
															BgL_czd2expzf3z21) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
													{
														obj_t BgL_auxz00_8495;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg2041z00_5530;

															BgL_arg2041z00_5530 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_copz00_5524), BgL_newz00_5523);
															BgL_auxz00_8495 =
																bgl_reverse_bang(BgL_arg2041z00_5530);
														}
														((((BgL_csequencez00_bglt)
																	COBJECT(BgL_new1212z00_5526))->BgL_copsz00) =
															((obj_t) BgL_auxz00_8495), BUNSPEC);
													}
													BgL_auxz00_8477 = BgL_new1212z00_5526;
											}}
										else
											{	/* Tools/trace.sch 53 */
												bool_t BgL_test3101z00_8500;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg2053z00_5531;

													BgL_arg2053z00_5531 = CAR(((obj_t) BgL_expz00_5522));
													BgL_test3101z00_8500 =
														BGl_sidezd2effectzf3z21zzeffect_effectz00(
														((BgL_nodez00_bglt) BgL_arg2053z00_5531));
												}
												if (BgL_test3101z00_8500)
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2047z00_5532;
														obj_t BgL_arg2048z00_5533;

														BgL_arg2047z00_5532 =
															CDR(((obj_t) BgL_expz00_5522));
														{	/* Tools/trace.sch 53 */
															BgL_copz00_bglt BgL_arg2049z00_5534;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg2050z00_5535;

																BgL_arg2050z00_5535 =
																	CAR(((obj_t) BgL_expz00_5522));
																BgL_arg2049z00_5534 =
																	BGl_nodezd2ze3copz31zzcgen_cgenz00(
																	((BgL_nodez00_bglt) BgL_arg2050z00_5535),
																	BGl_za2stopzd2kontza2zd2zzcgen_cgenz00,
																	CBOOL(BgL_inpushexitz00_5519));
															}
															BgL_arg2048z00_5533 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2049z00_5534), BgL_newz00_5523);
														}
														{
															obj_t BgL_newz00_8515;
															obj_t BgL_expz00_8514;

															BgL_expz00_8514 = BgL_arg2047z00_5532;
															BgL_newz00_8515 = BgL_arg2048z00_5533;
															BgL_newz00_5523 = BgL_newz00_8515;
															BgL_expz00_5522 = BgL_expz00_8514;
															goto BgL_loopz00_5521;
														}
													}
												else
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2051z00_5536;

														BgL_arg2051z00_5536 =
															CDR(((obj_t) BgL_expz00_5522));
														{
															obj_t BgL_expz00_8518;

															BgL_expz00_8518 = BgL_arg2051z00_5536;
															BgL_expz00_5522 = BgL_expz00_8518;
															goto BgL_loopz00_5521;
														}
													}
											}
										return ((BgL_copz00_bglt) BgL_auxz00_8477);
									}
								}
							}
					}
			}
		}

	}



/* &node->cop-closure1735 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2closure1735z81zzcgen_cgenz00(obj_t
		BgL_envz00_4776, obj_t BgL_nodez00_4777, obj_t BgL_kontz00_4778,
		obj_t BgL_inpushexitz00_4779)
	{
		{	/* Cgen/cgen.scm 319 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg2028z00_5538;

				BgL_arg2028z00_5538 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_4777)));
				return
					((BgL_copz00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2903z00zzcgen_cgenz00, BGl_string2932z00zzcgen_cgenz00,
						BgL_arg2028z00_5538));
			}
		}

	}



/* &node->cop-var1733 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2var1733z81zzcgen_cgenz00(obj_t
		BgL_envz00_4780, obj_t BgL_nodez00_4781, obj_t BgL_kontz00_4782,
		obj_t BgL_inpushexitz00_4783)
	{
		{	/* Cgen/cgen.scm 304 */
			{	/* Tools/trace.sch 53 */
				BgL_varcz00_bglt BgL_arg2023z00_5540;

				{	/* Tools/trace.sch 53 */
					BgL_varcz00_bglt BgL_new1203z00_5541;

					{	/* Tools/trace.sch 53 */
						BgL_varcz00_bglt BgL_new1202z00_5542;

						BgL_new1202z00_5542 =
							((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_varcz00_bgl))));
						{	/* Tools/trace.sch 53 */
							long BgL_arg2026z00_5543;

							{	/* Tools/trace.sch 53 */
								long BgL_res2723z00_5544;

								BgL_res2723z00_5544 = BGL_CLASS_INDEX(BGl_varcz00zzcgen_copz00);
								BgL_arg2026z00_5543 = BgL_res2723z00_5544;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1202z00_5542),
								BgL_arg2026z00_5543);
						}
						BgL_new1203z00_5541 = BgL_new1202z00_5542;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1203z00_5541)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
												BgL_nodez00_4781))))->BgL_locz00)), BUNSPEC);
					((((BgL_varcz00_bglt) COBJECT(BgL_new1203z00_5541))->
							BgL_variablez00) =
						((BgL_variablez00_bglt) (((BgL_varz00_bglt)
									COBJECT(((BgL_varz00_bglt) BgL_nodez00_4781)))->
								BgL_variablez00)), BUNSPEC);
					BgL_arg2023z00_5540 = BgL_new1203z00_5541;
				}
				return
					((BgL_copz00_bglt)
					PROCEDURE_ENTRY(BgL_kontz00_4782) (BgL_kontz00_4782,
						((obj_t) BgL_arg2023z00_5540), BEOA));
			}
		}

	}



/* &node->cop-kwote1731 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2kwote1731z81zzcgen_cgenz00(obj_t
		BgL_envz00_4784, obj_t BgL_nodez00_4785, obj_t BgL_kontz00_4786,
		obj_t BgL_inpushexitz00_4787)
	{
		{	/* Cgen/cgen.scm 295 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg2022z00_5546;

				BgL_arg2022z00_5546 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_4785)));
				return
					((BgL_copz00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2903z00zzcgen_cgenz00, BGl_string2933z00zzcgen_cgenz00,
						BgL_arg2022z00_5546));
			}
		}

	}



/* &node->cop-genpatchid1729 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2genpatchid1729z81zzcgen_cgenz00(obj_t
		BgL_envz00_4788, obj_t BgL_nodez00_4789, obj_t BgL_kontz00_4790,
		obj_t BgL_inpushexitz00_4791)
	{
		{	/* Cgen/cgen.scm 282 */
			{	/* Tools/trace.sch 53 */
				BgL_catomz00_bglt BgL_arg2020z00_5548;

				{	/* Tools/trace.sch 53 */
					BgL_catomz00_bglt BgL_new1200z00_5549;

					{	/* Tools/trace.sch 53 */
						BgL_catomz00_bglt BgL_new1199z00_5550;

						BgL_new1199z00_5550 =
							((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_catomz00_bgl))));
						{	/* Tools/trace.sch 53 */
							long BgL_arg2021z00_5551;

							{	/* Tools/trace.sch 53 */
								long BgL_res2722z00_5552;

								BgL_res2722z00_5552 =
									BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
								BgL_arg2021z00_5551 = BgL_res2722z00_5552;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1199z00_5550),
								BgL_arg2021z00_5551);
						}
						BgL_new1200z00_5549 = BgL_new1199z00_5550;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1200z00_5549)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_genpatchidz00_bglt)
												BgL_nodez00_4789))))->BgL_locz00)), BUNSPEC);
					((((BgL_catomz00_bglt) COBJECT(BgL_new1200z00_5549))->BgL_valuez00) =
						((obj_t) BINT((((BgL_genpatchidz00_bglt)
										COBJECT(((BgL_genpatchidz00_bglt) BgL_nodez00_4789)))->
									BgL_indexz00))), BUNSPEC);
					BgL_arg2020z00_5548 = BgL_new1200z00_5549;
				}
				return
					((BgL_copz00_bglt)
					PROCEDURE_ENTRY(BgL_kontz00_4790) (BgL_kontz00_4790,
						((obj_t) BgL_arg2020z00_5548), BEOA));
			}
		}

	}



/* &node->cop-patch1727 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2patch1727z81zzcgen_cgenz00(obj_t
		BgL_envz00_4792, obj_t BgL_nodez00_4793, obj_t BgL_kontz00_4794,
		obj_t BgL_inpushexitz00_4795)
	{
		{	/* Cgen/cgen.scm 253 */
			{	/* Tools/trace.sch 53 */
				BgL_genpatchidz00_bglt BgL_i1186z00_5554;

				BgL_i1186z00_5554 =
					((BgL_genpatchidz00_bglt)
					(((BgL_patchz00_bglt) COBJECT(
								((BgL_patchz00_bglt) BgL_nodez00_4793)))->BgL_patchidz00));
				{	/* Tools/trace.sch 53 */
					BgL_varz00_bglt BgL_i1187z00_5555;

					BgL_i1187z00_5555 =
						((BgL_varz00_bglt)
						(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt)
										((BgL_patchz00_bglt) BgL_nodez00_4793))))->BgL_valuez00));
					{	/* Tools/trace.sch 53 */
						BgL_csequencez00_bglt BgL_new1189z00_5556;

						{	/* Tools/trace.sch 53 */
							BgL_csequencez00_bglt BgL_new1188z00_5557;

							BgL_new1188z00_5557 =
								((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_csequencez00_bgl))));
							{	/* Tools/trace.sch 53 */
								long BgL_arg2018z00_5558;

								{	/* Tools/trace.sch 53 */
									long BgL_res2715z00_5559;

									BgL_res2715z00_5559 =
										BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
									BgL_arg2018z00_5558 = BgL_res2715z00_5559;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1188z00_5557),
									BgL_arg2018z00_5558);
							}
							BgL_new1189z00_5556 = BgL_new1188z00_5557;
						}
						((((BgL_copz00_bglt) COBJECT(
										((BgL_copz00_bglt) BgL_new1189z00_5556)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
													BgL_nodez00_4793))))->BgL_locz00)), BUNSPEC);
						((((BgL_csequencez00_bglt) COBJECT(BgL_new1189z00_5556))->
								BgL_czd2expzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						{
							obj_t BgL_auxz00_8584;

							{	/* Tools/trace.sch 53 */
								BgL_cpragmaz00_bglt BgL_arg1995z00_5560;
								BgL_copz00_bglt BgL_arg1996z00_5561;

								{	/* Tools/trace.sch 53 */
									BgL_cpragmaz00_bglt BgL_new1191z00_5562;

									{	/* Tools/trace.sch 53 */
										BgL_cpragmaz00_bglt BgL_new1190z00_5563;

										BgL_new1190z00_5563 =
											((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_cpragmaz00_bgl))));
										{	/* Tools/trace.sch 53 */
											long BgL_arg2016z00_5564;

											{	/* Tools/trace.sch 53 */
												long BgL_res2716z00_5565;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_classz00_5566;

													BgL_classz00_5566 = BGl_cpragmaz00zzcgen_copz00;
													BgL_res2716z00_5565 =
														BGL_CLASS_INDEX(BgL_classz00_5566);
												}
												BgL_arg2016z00_5564 = BgL_res2716z00_5565;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1190z00_5563),
												BgL_arg2016z00_5564);
										}
										BgL_new1191z00_5562 = BgL_new1190z00_5563;
									}
									((((BgL_copz00_bglt) COBJECT(
													((BgL_copz00_bglt) BgL_new1191z00_5562)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
																BgL_nodez00_4793))))->BgL_locz00)), BUNSPEC);
									{
										obj_t BgL_auxz00_8594;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1999z00_5567;

											{	/* Tools/trace.sch 53 */
												bool_t BgL_test3102z00_8595;

												{	/* Tools/trace.sch 53 */
													BgL_typez00_bglt BgL_arg2003z00_5568;

													BgL_arg2003z00_5568 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_patchz00_bglt) BgL_nodez00_4793))))->
														BgL_typez00);
													BgL_test3102z00_8595 =
														(((obj_t) BgL_arg2003z00_5568) ==
														BGl_za2objza2z00zztype_cachez00);
												}
												if (BgL_test3102z00_8595)
													{	/* Tools/trace.sch 53 */
														BgL_arg1999z00_5567 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 17)));
													}
												else
													{	/* Tools/trace.sch 53 */
														BgL_arg1999z00_5567 = BINT(((long) 32));
											}}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_list2000z00_5569;

												BgL_list2000z00_5569 =
													MAKE_YOUNG_PAIR(BgL_arg1999z00_5567, BNIL);
												BgL_auxz00_8594 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string2934z00zzcgen_cgenz00,
													BgL_list2000z00_5569);
										}}
										((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1191z00_5562))->
												BgL_formatz00) = ((obj_t) BgL_auxz00_8594), BUNSPEC);
									}
									{
										obj_t BgL_auxz00_8607;

										{	/* Tools/trace.sch 53 */
											BgL_catomz00_bglt BgL_arg2004z00_5570;
											BgL_catomz00_bglt BgL_arg2005z00_5571;
											BgL_varcz00_bglt BgL_arg2007z00_5572;

											{	/* Tools/trace.sch 53 */
												BgL_catomz00_bglt BgL_new1193z00_5573;

												{	/* Tools/trace.sch 53 */
													BgL_catomz00_bglt BgL_new1192z00_5574;

													BgL_new1192z00_5574 =
														((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_catomz00_bgl))));
													{	/* Tools/trace.sch 53 */
														long BgL_arg2012z00_5575;

														{	/* Tools/trace.sch 53 */
															long BgL_res2717z00_5576;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_classz00_5577;

																BgL_classz00_5577 = BGl_catomz00zzcgen_copz00;
																BgL_res2717z00_5576 =
																	BGL_CLASS_INDEX(BgL_classz00_5577);
															}
															BgL_arg2012z00_5575 = BgL_res2717z00_5576;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1192z00_5574),
															BgL_arg2012z00_5575);
													}
													BgL_new1193z00_5573 = BgL_new1192z00_5574;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1193z00_5573)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
																			BgL_nodez00_4793))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_catomz00_bglt) COBJECT(BgL_new1193z00_5573))->
														BgL_valuez00) =
													((obj_t) BINT((((BgL_patchz00_bglt)
																	COBJECT(((BgL_patchz00_bglt)
																			BgL_nodez00_4793)))->BgL_indexz00))),
													BUNSPEC);
												BgL_arg2004z00_5570 = BgL_new1193z00_5573;
											}
											{	/* Tools/trace.sch 53 */
												BgL_catomz00_bglt BgL_new1195z00_5578;

												{	/* Tools/trace.sch 53 */
													BgL_catomz00_bglt BgL_new1194z00_5579;

													BgL_new1194z00_5579 =
														((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_catomz00_bgl))));
													{	/* Tools/trace.sch 53 */
														long BgL_arg2013z00_5580;

														{	/* Tools/trace.sch 53 */
															long BgL_res2718z00_5581;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_classz00_5582;

																BgL_classz00_5582 = BGl_catomz00zzcgen_copz00;
																BgL_res2718z00_5581 =
																	BGL_CLASS_INDEX(BgL_classz00_5582);
															}
															BgL_arg2013z00_5580 = BgL_res2718z00_5581;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1194z00_5579),
															BgL_arg2013z00_5580);
													}
													BgL_new1195z00_5578 = BgL_new1194z00_5579;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1195z00_5578)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
																			BgL_nodez00_4793))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_catomz00_bglt) COBJECT(BgL_new1195z00_5578))->
														BgL_valuez00) =
													((obj_t) BINT((((BgL_genpatchidz00_bglt)
																	COBJECT(BgL_i1186z00_5554))->BgL_indexz00))),
													BUNSPEC);
												BgL_arg2005z00_5571 = BgL_new1195z00_5578;
											}
											{	/* Tools/trace.sch 53 */
												BgL_varcz00_bglt BgL_new1197z00_5583;

												{	/* Tools/trace.sch 53 */
													BgL_varcz00_bglt BgL_new1196z00_5584;

													BgL_new1196z00_5584 =
														((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varcz00_bgl))));
													{	/* Tools/trace.sch 53 */
														long BgL_arg2014z00_5585;

														{	/* Tools/trace.sch 53 */
															long BgL_res2719z00_5586;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_classz00_5587;

																BgL_classz00_5587 = BGl_varcz00zzcgen_copz00;
																BgL_res2719z00_5586 =
																	BGL_CLASS_INDEX(BgL_classz00_5587);
															}
															BgL_arg2014z00_5585 = BgL_res2719z00_5586;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1196z00_5584),
															BgL_arg2014z00_5585);
													}
													BgL_new1197z00_5583 = BgL_new1196z00_5584;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1197z00_5583)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_patchz00_bglt)
																			BgL_nodez00_4793))))->BgL_locz00)),
													BUNSPEC);
												((((BgL_varcz00_bglt) COBJECT(BgL_new1197z00_5583))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) (((BgL_varz00_bglt)
																COBJECT(BgL_i1187z00_5555))->BgL_variablez00)),
													BUNSPEC);
												BgL_arg2007z00_5572 = BgL_new1197z00_5583;
											}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_list2008z00_5588;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg2010z00_5589;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg2011z00_5590;

														BgL_arg2011z00_5590 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2007z00_5572), BNIL);
														BgL_arg2010z00_5589 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2005z00_5571),
															BgL_arg2011z00_5590);
													}
													BgL_list2008z00_5588 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg2004z00_5570), BgL_arg2010z00_5589);
												}
												BgL_auxz00_8607 = BgL_list2008z00_5588;
										}}
										((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1191z00_5562))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_8607), BUNSPEC);
									}
									BgL_arg1995z00_5560 = BgL_new1191z00_5562;
								}
								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg2017z00_5591;

									BgL_arg2017z00_5591 =
										(((BgL_atomz00_bglt) COBJECT(
												((BgL_atomz00_bglt)
													((BgL_patchz00_bglt) BgL_nodez00_4793))))->
										BgL_valuez00);
									BgL_arg1996z00_5561 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(((BgL_nodez00_bglt)
											BgL_arg2017z00_5591), BgL_kontz00_4794,
										CBOOL(BgL_inpushexitz00_4795));
								}
								{	/* Tools/trace.sch 53 */
									obj_t BgL_list1997z00_5592;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1998z00_5593;

										BgL_arg1998z00_5593 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1996z00_5561), BNIL);
										BgL_list1997z00_5592 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1995z00_5560), BgL_arg1998z00_5593);
									}
									BgL_auxz00_8584 = BgL_list1997z00_5592;
							}}
							((((BgL_csequencez00_bglt) COBJECT(BgL_new1189z00_5556))->
									BgL_copsz00) = ((obj_t) BgL_auxz00_8584), BUNSPEC);
						}
						return ((BgL_copz00_bglt) BgL_new1189z00_5556);
					}
				}
			}
		}

	}



/* &node->cop-literal1725 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2literal1725z81zzcgen_cgenz00(obj_t
		BgL_envz00_4796, obj_t BgL_nodez00_4797, obj_t BgL_kontz00_4798,
		obj_t BgL_inpushexitz00_4799)
	{
		{	/* Cgen/cgen.scm 241 */
			{	/* Tools/trace.sch 53 */
				BgL_catomz00_bglt BgL_arg1992z00_5595;

				{	/* Tools/trace.sch 53 */
					BgL_catomz00_bglt BgL_new1184z00_5596;

					{	/* Tools/trace.sch 53 */
						BgL_catomz00_bglt BgL_new1183z00_5597;

						BgL_new1183z00_5597 =
							((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_catomz00_bgl))));
						{	/* Tools/trace.sch 53 */
							long BgL_arg1993z00_5598;

							{	/* Tools/trace.sch 53 */
								long BgL_res2714z00_5599;

								BgL_res2714z00_5599 =
									BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
								BgL_arg1993z00_5598 = BgL_res2714z00_5599;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1183z00_5597),
								BgL_arg1993z00_5598);
						}
						BgL_new1184z00_5596 = BgL_new1183z00_5597;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1184z00_5596)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt)
									COBJECT(((BgL_nodez00_bglt) ((BgL_atomz00_bglt) (
													(BgL_literalz00_bglt) BgL_nodez00_4797)))))->
								BgL_locz00)), BUNSPEC);
					((((BgL_catomz00_bglt) COBJECT(BgL_new1184z00_5596))->BgL_valuez00) =
						((obj_t) (((BgL_atomz00_bglt)
									COBJECT(((BgL_atomz00_bglt) ((BgL_literalz00_bglt)
												BgL_nodez00_4797))))->BgL_valuez00)), BUNSPEC);
					BgL_arg1992z00_5595 = BgL_new1184z00_5596;
				}
				return
					((BgL_copz00_bglt)
					PROCEDURE_ENTRY(BgL_kontz00_4798) (BgL_kontz00_4798,
						((obj_t) BgL_arg1992z00_5595), BEOA));
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_cgenz00()
	{
		{	/* Cgen/cgen.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzsync_nodez00(((long) 421078394),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 371489783),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzcgen_cappz00(((long) 426639549),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					395790731), BSTRING_TO_STRING(BGl_string2935z00zzcgen_cgenz00));
		}

	}

#ifdef __cplusplus
}
#endif
