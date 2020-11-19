/*===========================================================================*/
/*   (Inline/inline.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/inline.scm) */
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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2switch1330z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_makezd2isfunzd2zzinline_inlinez00(long,
		obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_nodez00_bglt,
		obj_t, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2tailreczd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, bool_t);
	static obj_t BGl_z62isfunzd2effectzd2setz12z70zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_isfunzd2tailreczd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2argszd2namez00zzinline_inlinez00(BgL_sfunz00_bglt);
	static BgL_sfunz00_bglt BGl_z62makezd2isfunzb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62isfunzd2classzd2setz12z70zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2classzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2predicatezd2ofz00zzinline_inlinez00(BgL_sfunz00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t BGl_z62isfunzd2failsafezd2setz12z70zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2strengthzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t BGl_objectzd2initzd2zzinline_inlinez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2sync1312z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2fail1328z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2jumpzd2exzd21339z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2effectzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2optionalszb0zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_inlinez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_sfunz00_bglt BGl_z62isfunzd2nilzb0zzinline_inlinez00(obj_t);
	static obj_t BGl_z62isfunzd2classzb0zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2loczd2setz12z70zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2failsafezd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2sequence1310z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isfunzd2loczb0zzinline_inlinez00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62inlinezd2nodezb0zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2thezd2closurez00zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2predicatezd2ofzd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_isfunzd2nilzd2zzinline_inlinez00();
	static BgL_nodez00_bglt
		BGl_z62disablezd2inliningz12zd2le1354z70zzinline_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2dssslzd2keywordszd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2loczd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62isfunzd2recursivezd2callszd2setz12za2zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2funcall1318z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62disablezd2inliningz12za2zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2topzf3zd2setz12z83zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62inlinezd2nodeza2z12z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2effectzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62isfunzd2failsafezb0zzinline_inlinez00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_z62isfunzd2tailreczb0zzinline_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_inlinez00();
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2boxzd2ref1347zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isfunzd2sidezd2effectz62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2effectzb0zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1605z62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1606z62zzinline_inlinez00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62isfunzd2stackzd2allocatorzd2setz12za2zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62isfunzd2propertyzd2setz12z70zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2appzd2ly1316zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62disablezd2inliningz121350za2zzinline_inlinez00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2classzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2propertyzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t BGl_z62isfunzd2bodyzd2setz12z70zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62isfunzd2dssslzd2keywordsz62zzinline_inlinez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62isfunzd2predicatezd2ofzd2setz12za2zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2return1343z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62isfunzd2argszd2setz12z70zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2extern1320z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_isfunzd2arityzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2dssslzd2keywordsz00zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t BGl_z62isfunzd2strengthzb0zzinline_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2recursivezd2callsz00zzinline_inlinez00(BgL_sfunz00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_returnz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2propertyzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_inlinez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt, long,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2app1314z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62isfunzd2argszd2namez62zzinline_inlinez00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62isfunzd2originalzd2bodyz62zzinline_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2thezd2closurezd2globalzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzinline_inlinez00();
	static obj_t BGl_z62isfunzd2recursivezd2callsz62zzinline_inlinez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2cast1322z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2setzd2exzd2i1337z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00;
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2conditio1326z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzinline_inlinez00();
	static obj_t BGl_z62isfunzf3z91zzinline_inlinez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2boxzd2setz121349za2zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2makezd2box1345zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2setq1324z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_disablezd2inliningz12zc0zzinline_inlinez00(BgL_nodez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2letzd2fun1332zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isfunzd2arityzb0zzinline_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2keyszd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2optionalszd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2sidezd2effectz00zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_isfunzd2originalzd2bodyz00zzinline_inlinez00(BgL_sfunz00_bglt);
	extern bool_t BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt,
		long, long, obj_t);
	static obj_t BGl_z62isfunzd2keyszb0zzinline_inlinez00(obj_t, obj_t);
	extern obj_t BGl_za2kfactorza2z00zzinline_walkz00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2bodyzd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t
		BGl_z62isfunzd2dssslzd2keywordszd2setz12za2zzinline_inlinez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_isfunzd2topzf3z21zzinline_inlinez00(BgL_sfunz00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62isfunzd2bodyzb0zzinline_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2recursivezd2callszd2setz12zc0zzinline_inlinez00
		(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_isfunz00zzinline_inlinez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2thezd2closurezd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62isfunzd2topzf3z43zzinline_inlinez00(obj_t, obj_t);
	static obj_t
		BGl_z62isfunzd2thezd2closurezd2globalzd2setz12z70zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62inlinezd2sfunz12za2zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2sidezd2effectzd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62inlinezd2node1301zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2kwote1308z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2loczd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_z62isfunzd2tailreczd2setz12z70zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2argszd2zzinline_inlinez00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2topzf3zd2setz12ze1zzinline_inlinez00(BgL_sfunz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31607ze3ze5zzinline_inlinez00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2letzd2var1335zb0zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isfunzd2strengthzd2setz12z70zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_z62isfunzd2argszb0zzinline_inlinez00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_inlinez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_inlinez00();
	static obj_t BGl_z62isfunzd2predicatezd2ofz62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_inlinez00();
	extern BgL_nodez00_bglt BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2stackzd2allocatorzd2setz12zc0zzinline_inlinez00
		(BgL_sfunz00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2atom1304z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt,
		long, obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2retblock1341z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2stackzd2allocatorz00zzinline_inlinez00(BgL_sfunz00_bglt);
	static obj_t BGl_z62isfunzd2propertyzb0zzinline_inlinez00(obj_t, obj_t);
	extern obj_t BGl_za2inlinezd2modeza2zd2zzinline_walkz00;
	static BgL_sfunz00_bglt BGl_z62lambda1538z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62isfunzd2thezd2closurezd2setz12za2zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isfunzd2thezd2closurez62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2thezd2closurezd2globalzb0zzinline_inlinez00(obj_t,
		obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda1553z62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62isfunzd2sidezd2effectzd2setz12za2zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2failsafezd2zzinline_inlinez00(BgL_sfunz00_bglt);
	static BgL_sfunz00_bglt BGl_z62lambda1560z62zzinline_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_isfunzf3zf3zzinline_inlinez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2strengthzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62isfunzd2stackzd2allocatorz62zzinline_inlinez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2thezd2closurezd2globalzd2setz12z12zzinline_inlinez00
		(BgL_sfunz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_nodez00_bglt BGl_z62lambda1579z62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31559ze3ze5zzinline_inlinez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2var1306z62zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1580z62zzinline_inlinez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31592ze3ze5zzinline_inlinez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2bodyzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62lambda1590z62zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1591z62zzinline_inlinez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isfunzd2argszd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt, obj_t);
	static obj_t __cnst[16];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2030z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2039z00,
		BGl_z62inlinezd2nodezd2boxzd2setz121349za2zzinline_inlinez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2031z00zzinline_inlinez00,
		BgL_bgl_za762disableza7d2inl2040z00,
		BGl_z62disablezd2inliningz12zd2le1354z70zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2keyszd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2keysza72041za7,
		BGl_z62isfunzd2keyszb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2argszd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2argsza72042za7,
		BGl_z62isfunzd2argszd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2nilzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2nilza7b2043za7,
		BGl_z62isfunzd2nilzb0zzinline_inlinez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2classzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2class2044z00,
		BGl_z62isfunzd2classzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2classzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2class2045z00,
		BGl_z62isfunzd2classzd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2propertyzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2prope2046z00,
		BGl_z62isfunzd2propertyzd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2bodyzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2bodyza72047za7,
		BGl_z62isfunzd2bodyzd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2strengthzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2stren2048z00,
		BGl_z62isfunzd2strengthzd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2failsafezd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2fails2049z00,
		BGl_z62isfunzd2failsafezd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2topzf3zd2setz12zd2envz33zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2topza7f2050za7,
		BGl_z62isfunzd2topzf3zd2setz12z83zzinline_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2bodyzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2bodyza72051za7,
		BGl_z62isfunzd2bodyzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2sidezd2effectzd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2sideza72052za7,
		BGl_z62isfunzd2sidezd2effectz62zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2argszd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2argsza72053za7,
		BGl_z62isfunzd2argszb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2recursivezd2callszd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2recur2054z00,
		BGl_z62isfunzd2recursivezd2callszd2setz12za2zzinline_inlinez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2failsafezd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2fails2055z00,
		BGl_z62isfunzd2failsafezb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2originalzd2bodyzd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2origi2056z00,
		BGl_z62isfunzd2originalzd2bodyz62zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2nodeza2z12zd2envzb0zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2057z00,
		BGl_z62inlinezd2nodeza2z12z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzinline_inlinez00,
		BgL_bgl_za762lambda1580za7622058z00, BGl_z62lambda1580z62zzinline_inlinez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzinline_inlinez00,
		BgL_bgl_za762lambda1579za7622059z00, BGl_z62lambda1579z62zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzinline_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2060za7,
		BGl_z62zc3z04anonymousza31592ze3ze5zzinline_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzinline_inlinez00,
		BgL_bgl_za762lambda1591za7622061z00, BGl_z62lambda1591z62zzinline_inlinez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzinline_inlinez00,
		BgL_bgl_za762lambda1590za7622062z00, BGl_z62lambda1590z62zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzinline_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2063za7,
		BGl_z62zc3z04anonymousza31607ze3ze5zzinline_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzinline_inlinez00,
		BgL_bgl_za762lambda1606za7622064z00, BGl_z62lambda1606z62zzinline_inlinez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzinline_inlinez00,
		BgL_bgl_za762lambda1605za7622065z00, BGl_z62lambda1605z62zzinline_inlinez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2argszd2namezd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2argsza72066za7,
		BGl_z62isfunzd2argszd2namez62zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzinline_inlinez00,
		BgL_bgl_za762lambda1560za7622067z00, BGl_z62lambda1560z62zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzinline_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2068za7,
		BGl_z62zc3z04anonymousza31559ze3ze5zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2stackzd2allocatorzd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2stack2069z00,
		BGl_z62isfunzd2stackzd2allocatorzd2setz12za2zzinline_inlinez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2recursivezd2callszd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2recur2070z00,
		BGl_z62isfunzd2recursivezd2callsz62zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2effectzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2effec2071z00,
		BGl_z62isfunzd2effectzd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2dssslzd2keywordszd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2dsssl2072z00,
		BGl_z62isfunzd2dssslzd2keywordszd2setz12za2zzinline_inlinez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2propertyzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2prope2073z00,
		BGl_z62isfunzd2propertyzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2003z00zzinline_inlinez00,
		BgL_bgl_string2003za700za7za7i2074za7, "inline-node1301", 15);
	      DEFINE_STRING(BGl_string2005z00zzinline_inlinez00,
		BgL_bgl_string2005za700za7za7i2075za7, "disable-inlining!1350", 21);
	      DEFINE_STRING(BGl_string2006z00zzinline_inlinez00,
		BgL_bgl_string2006za700za7za7i2076za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2008z00zzinline_inlinez00,
		BgL_bgl_string2008za700za7za7i2077za7, "inline-node", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2topzf3zd2envzf3zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2topza7f2078za7,
		BGl_z62isfunzd2topzf3z43zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2032z00zzinline_inlinez00,
		BgL_bgl_string2032za700za7za7i2079za7, "disable-inlining!::node", 23);
	      DEFINE_STRING(BGl_string2033z00zzinline_inlinez00,
		BgL_bgl_string2033za700za7za7i2080za7, "inline_inline", 13);
	      DEFINE_STRING(BGl_string2034z00zzinline_inlinez00,
		BgL_bgl_string2034za700za7za7i2081za7,
		"read (noinline) noinline inline-node1301 _ inline_inline isfun bool tailrec obj recursive-calls original-body done static cgen all ",
		131);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2isfunzd2envz00zzinline_inlinez00,
		BgL_bgl_za762makeza7d2isfunza72082za7,
		BGl_z62makezd2isfunzb0zzinline_inlinez00, 0L, BUNSPEC, 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2tailreczd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2tailr2083z00,
		BGl_z62isfunzd2tailreczd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2thezd2closurezd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2theza7d2084za7,
		BGl_z62isfunzd2thezd2closurez62zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2effectzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2effec2085z00,
		BGl_z62isfunzd2effectzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2sfunz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2sfun2086z00,
		BGl_z62inlinezd2sfunz12za2zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2strengthzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2stren2087z00,
		BGl_z62isfunzd2strengthzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2predicatezd2ofzd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2predi2088z00,
		BGl_z62isfunzd2predicatezd2ofzd2setz12za2zzinline_inlinez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2arityzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2arity2089z00,
		BGl_z62isfunzd2arityzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzf3zd2envz21zzinline_inlinez00,
		BgL_bgl_za762isfunza7f3za791za7za72090za7,
		BGl_z62isfunzf3z91zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2thezd2closurezd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2theza7d2091za7,
		BGl_z62isfunzd2thezd2closurezd2setz12za2zzinline_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2092z00,
		BGl_z62inlinezd2nodezb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_disablezd2inliningz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762disableza7d2inl2093z00,
		BGl_z62disablezd2inliningz12za2zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2stackzd2allocatorzd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2stack2094z00,
		BGl_z62isfunzd2stackzd2allocatorz62zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2thezd2closurezd2globalzd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2theza7d2095za7,
		BGl_z62isfunzd2thezd2closurezd2globalzd2setz12z70zzinline_inlinez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2thezd2closurezd2globalzd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2theza7d2096za7,
		BGl_z62isfunzd2thezd2closurezd2globalzb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2loczd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2locza7b2097za7,
		BGl_z62isfunzd2loczb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2optionalszd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2optio2098z00,
		BGl_z62isfunzd2optionalszb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2predicatezd2ofzd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2predi2099z00,
		BGl_z62isfunzd2predicatezd2ofz62zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2tailreczd2envz00zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2tailr2100z00,
		BGl_z62isfunzd2tailreczb0zzinline_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2loczd2setz12zd2envzc0zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2locza7d2101za7,
		BGl_z62isfunzd2loczd2setz12z70zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2sidezd2effectzd2setz12zd2envz12zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2sideza72102za7,
		BGl_z62isfunzd2sidezd2effectzd2setz12za2zzinline_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zzinline_inlinez00,
		BgL_bgl_za762lambda1553za7622103z00, BGl_z62lambda1553z62zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zzinline_inlinez00,
		BgL_bgl_za762lambda1538za7622104z00, BGl_z62lambda1538z62zzinline_inlinez00,
		0L, BUNSPEC, 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2105z00,
		BGl_z62inlinezd2node1301zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zzinline_inlinez00,
		BgL_bgl_za762disableza7d2inl2106z00,
		BGl_z62disablezd2inliningz121350za2zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2107z00,
		BGl_z62inlinezd2nodezd2atom1304z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2108z00,
		BGl_z62inlinezd2nodezd2var1306z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2109z00,
		BGl_z62inlinezd2nodezd2kwote1308z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2110z00,
		BGl_z62inlinezd2nodezd2sequence1310z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2111z00,
		BGl_z62inlinezd2nodezd2sync1312z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2112z00,
		BGl_z62inlinezd2nodezd2app1314z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2113z00,
		BGl_z62inlinezd2nodezd2appzd2ly1316zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2114z00,
		BGl_z62inlinezd2nodezd2funcall1318z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2115z00,
		BGl_z62inlinezd2nodezd2extern1320z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2116z00,
		BGl_z62inlinezd2nodezd2cast1322z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2018z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2117z00,
		BGl_z62inlinezd2nodezd2setq1324z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2019z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2118z00,
		BGl_z62inlinezd2nodezd2conditio1326z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2020z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2119z00,
		BGl_z62inlinezd2nodezd2fail1328z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2021z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2120z00,
		BGl_z62inlinezd2nodezd2switch1330z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2022z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2121z00,
		BGl_z62inlinezd2nodezd2letzd2fun1332zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2023z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2122z00,
		BGl_z62inlinezd2nodezd2letzd2var1335zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2024z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2123z00,
		BGl_z62inlinezd2nodezd2setzd2exzd2i1337z62zzinline_inlinez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2025z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2124z00,
		BGl_z62inlinezd2nodezd2jumpzd2exzd21339z62zzinline_inlinez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2026z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2125z00,
		BGl_z62inlinezd2nodezd2retblock1341z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2027z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2126z00,
		BGl_z62inlinezd2nodezd2return1343z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2028z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2127z00,
		BGl_z62inlinezd2nodezd2makezd2box1345zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2029z00zzinline_inlinez00,
		BgL_bgl_za762inlineza7d2node2128z00,
		BGl_z62inlinezd2nodezd2boxzd2ref1347zb0zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isfunzd2dssslzd2keywordszd2envzd2zzinline_inlinez00,
		BgL_bgl_za762isfunza7d2dsssl2129z00,
		BGl_z62isfunzd2dssslzd2keywordsz62zzinline_inlinez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinline_inlinez00));
		     ADD_ROOT((void *) (&BGl_isfunz00zzinline_inlinez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long
		BgL_checksumz00_2892, char *BgL_fromz00_2893)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzinline_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_inlinez00();
					BGl_libraryzd2moduleszd2initz00zzinline_inlinez00();
					BGl_cnstzd2initzd2zzinline_inlinez00();
					BGl_importedzd2moduleszd2initz00zzinline_inlinez00();
					BGl_objectzd2initzd2zzinline_inlinez00();
					BGl_genericzd2initzd2zzinline_inlinez00();
					BGl_methodzd2initzd2zzinline_inlinez00();
					return BGl_toplevelzd2initzd2zzinline_inlinez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_inline");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_inline");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			{	/* Inline/inline.scm 15 */
				obj_t BgL_cportz00_2750;

				{	/* Inline/inline.scm 15 */
					obj_t BgL_stringz00_2758;

					BgL_stringz00_2758 = BGl_string2034z00zzinline_inlinez00;
					{	/* Inline/inline.scm 15 */
						obj_t BgL_startz00_2759;

						BgL_startz00_2759 = BINT(((long) 0));
						{	/* Inline/inline.scm 15 */
							obj_t BgL_endz00_2760;

							BgL_endz00_2760 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2758)));
							{	/* Inline/inline.scm 15 */

								BgL_cportz00_2750 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2758, BgL_startz00_2759, BgL_endz00_2760);
				}}}}
				{
					long BgL_iz00_2751;

					BgL_iz00_2751 = ((long) 15);
				BgL_loopz00_2752:
					if ((BgL_iz00_2751 == ((long) -1)))
						{	/* Inline/inline.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/inline.scm 15 */
							{	/* Inline/inline.scm 15 */
								obj_t BgL_arg2036z00_2754;

								{	/* Inline/inline.scm 15 */

									{	/* Inline/inline.scm 15 */
										obj_t BgL_locationz00_2756;

										BgL_locationz00_2756 = BBOOL(((bool_t) 0));
										{	/* Inline/inline.scm 15 */

											BgL_arg2036z00_2754 =
												BGl_readz00zz__readerz00(BgL_cportz00_2750,
												BgL_locationz00_2756);
										}
									}
								}
								{	/* Inline/inline.scm 15 */
									int BgL_tmpz00_2923;

									BgL_tmpz00_2923 = (int) (BgL_iz00_2751);
									CNST_TABLE_SET(BgL_tmpz00_2923, BgL_arg2036z00_2754);
							}}
							{	/* Inline/inline.scm 15 */
								int BgL_auxz00_2757;

								BgL_auxz00_2757 = (int) ((BgL_iz00_2751 - ((long) 1)));
								{
									long BgL_iz00_2928;

									BgL_iz00_2928 = (long) (BgL_auxz00_2757);
									BgL_iz00_2751 = BgL_iz00_2928;
									goto BgL_loopz00_2752;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			return BUNSPEC;
		}

	}



/* make-isfun */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_makezd2isfunzd2zzinline_inlinez00(long
		BgL_arity1127z00_3, obj_t BgL_sidezd2effect1128zd2_4,
		obj_t BgL_predicatezd2of1129zd2_5, obj_t BgL_stackzd2allocator1130zd2_6,
		bool_t BgL_topzf31131zf3_7, obj_t BgL_thezd2closure1132zd2_8,
		obj_t BgL_effect1133z00_9, obj_t BgL_failsafe1134z00_10,
		obj_t BgL_property1135z00_11, obj_t BgL_args1136z00_12,
		obj_t BgL_argszd2name1137zd2_13, obj_t BgL_body1138z00_14,
		obj_t BgL_class1139z00_15, obj_t BgL_dssslzd2keywords1140zd2_16,
		obj_t BgL_loc1141z00_17, obj_t BgL_optionals1142z00_18,
		obj_t BgL_keys1143z00_19, obj_t BgL_thezd2closurezd2global1144z00_20,
		obj_t BgL_strength1145z00_21,
		BgL_nodez00_bglt BgL_originalzd2body1146zd2_22,
		obj_t BgL_recursivezd2calls1147zd2_23, bool_t BgL_tailrec1148z00_24)
	{
		{	/* Inline/inline.sch 60 */
			{	/* Inline/inline.sch 60 */
				BgL_sfunz00_bglt BgL_new1150z00_2763;

				{	/* Inline/inline.sch 60 */
					BgL_sfunz00_bglt BgL_tmp1148z00_2764;
					BgL_isfunz00_bglt BgL_wide1149z00_2765;

					{
						BgL_sfunz00_bglt BgL_auxz00_2931;

						{	/* Inline/inline.sch 60 */
							BgL_sfunz00_bglt BgL_new1147z00_2766;

							BgL_new1147z00_2766 =
								((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							{	/* Inline/inline.sch 60 */
								long BgL_arg1363z00_2767;

								{	/* Inline/inline.sch 60 */
									long BgL_res1939z00_2768;

									BgL_res1939z00_2768 =
										BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
									BgL_arg1363z00_2767 = BgL_res1939z00_2768;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1147z00_2766),
									BgL_arg1363z00_2767);
							}
							{	/* Inline/inline.sch 60 */
								BgL_objectz00_bglt BgL_tmpz00_2936;

								BgL_tmpz00_2936 = ((BgL_objectz00_bglt) BgL_new1147z00_2766);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2936, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1147z00_2766);
							BgL_auxz00_2931 = BgL_new1147z00_2766;
						}
						BgL_tmp1148z00_2764 = ((BgL_sfunz00_bglt) BgL_auxz00_2931);
					}
					BgL_wide1149z00_2765 =
						((BgL_isfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_isfunz00_bgl))));
					{	/* Inline/inline.sch 60 */
						obj_t BgL_auxz00_2944;
						BgL_objectz00_bglt BgL_tmpz00_2942;

						BgL_auxz00_2944 = ((obj_t) BgL_wide1149z00_2765);
						BgL_tmpz00_2942 = ((BgL_objectz00_bglt) BgL_tmp1148z00_2764);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2942, BgL_auxz00_2944);
					}
					((BgL_objectz00_bglt) BgL_tmp1148z00_2764);
					{	/* Inline/inline.sch 60 */
						long BgL_arg1361z00_2769;

						{	/* Inline/inline.sch 60 */
							long BgL_res1940z00_2770;

							BgL_res1940z00_2770 =
								BGL_CLASS_INDEX(BGl_isfunz00zzinline_inlinez00);
							BgL_arg1361z00_2769 = BgL_res1940z00_2770;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1148z00_2764), BgL_arg1361z00_2769);
					}
					BgL_new1150z00_2763 = ((BgL_sfunz00_bglt) BgL_tmp1148z00_2764);
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1150z00_2763)))->BgL_arityz00) =
					((long) BgL_arity1127z00_3), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1128zd2_4), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1129zd2_5), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1130zd2_6), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31131zf3_7), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1132zd2_8), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_effectz00) = ((obj_t) BgL_effect1133z00_9), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1134z00_10), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1150z00_2763)))->
						BgL_argszd2noescapezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_propertyz00) =
					((obj_t) BgL_property1135z00_11), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_argsz00) =
					((obj_t) BgL_args1136z00_12), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name1137zd2_13), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_bodyz00) =
					((obj_t) BgL_body1138z00_14), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_classz00) =
					((obj_t) BgL_class1139z00_15), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords1140zd2_16), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_locz00) =
					((obj_t) BgL_loc1141z00_17), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_optionalsz00) =
					((obj_t) BgL_optionals1142z00_18), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_keysz00) =
					((obj_t) BgL_keys1143z00_19), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global1144z00_20), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_strengthz00) =
					((obj_t) BgL_strength1145z00_21), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1150z00_2763)))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_isfunz00_bglt BgL_auxz00_2994;

					{
						obj_t BgL_auxz00_2995;

						{	/* Inline/inline.sch 60 */
							BgL_objectz00_bglt BgL_tmpz00_2996;

							BgL_tmpz00_2996 = ((BgL_objectz00_bglt) BgL_new1150z00_2763);
							BgL_auxz00_2995 = BGL_OBJECT_WIDENING(BgL_tmpz00_2996);
						}
						BgL_auxz00_2994 = ((BgL_isfunz00_bglt) BgL_auxz00_2995);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2994))->
							BgL_originalzd2bodyzd2) =
						((BgL_nodez00_bglt) BgL_originalzd2body1146zd2_22), BUNSPEC);
				}
				{
					BgL_isfunz00_bglt BgL_auxz00_3001;

					{
						obj_t BgL_auxz00_3002;

						{	/* Inline/inline.sch 60 */
							BgL_objectz00_bglt BgL_tmpz00_3003;

							BgL_tmpz00_3003 = ((BgL_objectz00_bglt) BgL_new1150z00_2763);
							BgL_auxz00_3002 = BGL_OBJECT_WIDENING(BgL_tmpz00_3003);
						}
						BgL_auxz00_3001 = ((BgL_isfunz00_bglt) BgL_auxz00_3002);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3001))->
							BgL_recursivezd2callszd2) =
						((obj_t) BgL_recursivezd2calls1147zd2_23), BUNSPEC);
				}
				{
					BgL_isfunz00_bglt BgL_auxz00_3008;

					{
						obj_t BgL_auxz00_3009;

						{	/* Inline/inline.sch 60 */
							BgL_objectz00_bglt BgL_tmpz00_3010;

							BgL_tmpz00_3010 = ((BgL_objectz00_bglt) BgL_new1150z00_2763);
							BgL_auxz00_3009 = BGL_OBJECT_WIDENING(BgL_tmpz00_3010);
						}
						BgL_auxz00_3008 = ((BgL_isfunz00_bglt) BgL_auxz00_3009);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3008))->BgL_tailrecz00) =
						((bool_t) BgL_tailrec1148z00_24), BUNSPEC);
				}
				return BgL_new1150z00_2763;
			}
		}

	}



/* &make-isfun */
	BgL_sfunz00_bglt BGl_z62makezd2isfunzb0zzinline_inlinez00(obj_t
		BgL_envz00_2429, obj_t BgL_arity1127z00_2430,
		obj_t BgL_sidezd2effect1128zd2_2431, obj_t BgL_predicatezd2of1129zd2_2432,
		obj_t BgL_stackzd2allocator1130zd2_2433, obj_t BgL_topzf31131zf3_2434,
		obj_t BgL_thezd2closure1132zd2_2435, obj_t BgL_effect1133z00_2436,
		obj_t BgL_failsafe1134z00_2437, obj_t BgL_property1135z00_2438,
		obj_t BgL_args1136z00_2439, obj_t BgL_argszd2name1137zd2_2440,
		obj_t BgL_body1138z00_2441, obj_t BgL_class1139z00_2442,
		obj_t BgL_dssslzd2keywords1140zd2_2443, obj_t BgL_loc1141z00_2444,
		obj_t BgL_optionals1142z00_2445, obj_t BgL_keys1143z00_2446,
		obj_t BgL_thezd2closurezd2global1144z00_2447,
		obj_t BgL_strength1145z00_2448, obj_t BgL_originalzd2body1146zd2_2449,
		obj_t BgL_recursivezd2calls1147zd2_2450, obj_t BgL_tailrec1148z00_2451)
	{
		{	/* Inline/inline.sch 60 */
			return
				BGl_makezd2isfunzd2zzinline_inlinez00(
				(long) CINT(BgL_arity1127z00_2430), BgL_sidezd2effect1128zd2_2431,
				BgL_predicatezd2of1129zd2_2432, BgL_stackzd2allocator1130zd2_2433,
				CBOOL(BgL_topzf31131zf3_2434), BgL_thezd2closure1132zd2_2435,
				BgL_effect1133z00_2436, BgL_failsafe1134z00_2437,
				BgL_property1135z00_2438, BgL_args1136z00_2439,
				BgL_argszd2name1137zd2_2440, BgL_body1138z00_2441,
				BgL_class1139z00_2442, BgL_dssslzd2keywords1140zd2_2443,
				BgL_loc1141z00_2444, BgL_optionals1142z00_2445, BgL_keys1143z00_2446,
				BgL_thezd2closurezd2global1144z00_2447, BgL_strength1145z00_2448,
				((BgL_nodez00_bglt) BgL_originalzd2body1146zd2_2449),
				BgL_recursivezd2calls1147zd2_2450, CBOOL(BgL_tailrec1148z00_2451));
		}

	}



/* isfun? */
	BGL_EXPORTED_DEF bool_t BGl_isfunzf3zf3zzinline_inlinez00(obj_t BgL_objz00_25)
	{
		{	/* Inline/inline.sch 61 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_25,
				BGl_isfunz00zzinline_inlinez00);
		}

	}



/* &isfun? */
	obj_t BGl_z62isfunzf3z91zzinline_inlinez00(obj_t BgL_envz00_2452,
		obj_t BgL_objz00_2453)
	{
		{	/* Inline/inline.sch 61 */
			return BBOOL(BGl_isfunzf3zf3zzinline_inlinez00(BgL_objz00_2453));
		}

	}



/* isfun-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_isfunzd2nilzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.sch 62 */
			{	/* Inline/inline.sch 62 */
				obj_t BgL_classz00_2165;

				BgL_classz00_2165 = BGl_isfunz00zzinline_inlinez00;
				{	/* Inline/inline.sch 62 */
					obj_t BgL__ortest_1106z00_2166;

					BgL__ortest_1106z00_2166 = BGL_CLASS_NIL(BgL_classz00_2165);
					if (CBOOL(BgL__ortest_1106z00_2166))
						{	/* Inline/inline.sch 62 */
							return ((BgL_sfunz00_bglt) BgL__ortest_1106z00_2166);
						}
					else
						{	/* Inline/inline.sch 62 */
							return
								((BgL_sfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2165));
						}
				}
			}
		}

	}



/* &isfun-nil */
	BgL_sfunz00_bglt BGl_z62isfunzd2nilzb0zzinline_inlinez00(obj_t
		BgL_envz00_2454)
	{
		{	/* Inline/inline.sch 62 */
			return BGl_isfunzd2nilzd2zzinline_inlinez00();
		}

	}



/* isfun-tailrec */
	BGL_EXPORTED_DEF bool_t
		BGl_isfunzd2tailreczd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_26)
	{
		{	/* Inline/inline.sch 63 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3030;

				{
					obj_t BgL_auxz00_3031;

					{	/* Inline/inline.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_3032;

						BgL_tmpz00_3032 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_3031 = BGL_OBJECT_WIDENING(BgL_tmpz00_3032);
					}
					BgL_auxz00_3030 = ((BgL_isfunz00_bglt) BgL_auxz00_3031);
				}
				return (((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3030))->BgL_tailrecz00);
			}
		}

	}



/* &isfun-tailrec */
	obj_t BGl_z62isfunzd2tailreczb0zzinline_inlinez00(obj_t BgL_envz00_2455,
		obj_t BgL_oz00_2456)
	{
		{	/* Inline/inline.sch 63 */
			return
				BBOOL(BGl_isfunzd2tailreczd2zzinline_inlinez00(
					((BgL_sfunz00_bglt) BgL_oz00_2456)));
		}

	}



/* isfun-tailrec-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2tailreczd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_27, bool_t BgL_vz00_28)
	{
		{	/* Inline/inline.sch 64 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3040;

				{
					obj_t BgL_auxz00_3041;

					{	/* Inline/inline.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_3042;

						BgL_tmpz00_3042 = ((BgL_objectz00_bglt) BgL_oz00_27);
						BgL_auxz00_3041 = BGL_OBJECT_WIDENING(BgL_tmpz00_3042);
					}
					BgL_auxz00_3040 = ((BgL_isfunz00_bglt) BgL_auxz00_3041);
				}
				return
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3040))->BgL_tailrecz00) =
					((bool_t) BgL_vz00_28), BUNSPEC);
			}
		}

	}



/* &isfun-tailrec-set! */
	obj_t BGl_z62isfunzd2tailreczd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2457, obj_t BgL_oz00_2458, obj_t BgL_vz00_2459)
	{
		{	/* Inline/inline.sch 64 */
			return
				BGl_isfunzd2tailreczd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2458), CBOOL(BgL_vz00_2459));
		}

	}



/* isfun-recursive-calls */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2recursivezd2callsz00zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_29)
	{
		{	/* Inline/inline.sch 65 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3050;

				{
					obj_t BgL_auxz00_3051;

					{	/* Inline/inline.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_3052;

						BgL_tmpz00_3052 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_3051 = BGL_OBJECT_WIDENING(BgL_tmpz00_3052);
					}
					BgL_auxz00_3050 = ((BgL_isfunz00_bglt) BgL_auxz00_3051);
				}
				return
					(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3050))->
					BgL_recursivezd2callszd2);
			}
		}

	}



/* &isfun-recursive-calls */
	obj_t BGl_z62isfunzd2recursivezd2callsz62zzinline_inlinez00(obj_t
		BgL_envz00_2460, obj_t BgL_oz00_2461)
	{
		{	/* Inline/inline.sch 65 */
			return
				BGl_isfunzd2recursivezd2callsz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2461));
		}

	}



/* isfun-recursive-calls-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2recursivezd2callszd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_30, obj_t BgL_vz00_31)
	{
		{	/* Inline/inline.sch 66 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3059;

				{
					obj_t BgL_auxz00_3060;

					{	/* Inline/inline.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_3061;

						BgL_tmpz00_3061 = ((BgL_objectz00_bglt) BgL_oz00_30);
						BgL_auxz00_3060 = BGL_OBJECT_WIDENING(BgL_tmpz00_3061);
					}
					BgL_auxz00_3059 = ((BgL_isfunz00_bglt) BgL_auxz00_3060);
				}
				return
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3059))->
						BgL_recursivezd2callszd2) = ((obj_t) BgL_vz00_31), BUNSPEC);
			}
		}

	}



/* &isfun-recursive-calls-set! */
	obj_t BGl_z62isfunzd2recursivezd2callszd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2462, obj_t BgL_oz00_2463, obj_t BgL_vz00_2464)
	{
		{	/* Inline/inline.sch 66 */
			return
				BGl_isfunzd2recursivezd2callszd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2463), BgL_vz00_2464);
		}

	}



/* isfun-original-body */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_isfunzd2originalzd2bodyz00zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_32)
	{
		{	/* Inline/inline.sch 67 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3068;

				{
					obj_t BgL_auxz00_3069;

					{	/* Inline/inline.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_3070;

						BgL_tmpz00_3070 = ((BgL_objectz00_bglt) BgL_oz00_32);
						BgL_auxz00_3069 = BGL_OBJECT_WIDENING(BgL_tmpz00_3070);
					}
					BgL_auxz00_3068 = ((BgL_isfunz00_bglt) BgL_auxz00_3069);
				}
				return
					(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3068))->
					BgL_originalzd2bodyzd2);
			}
		}

	}



/* &isfun-original-body */
	BgL_nodez00_bglt BGl_z62isfunzd2originalzd2bodyz62zzinline_inlinez00(obj_t
		BgL_envz00_2465, obj_t BgL_oz00_2466)
	{
		{	/* Inline/inline.sch 67 */
			return
				BGl_isfunzd2originalzd2bodyz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2466));
		}

	}



/* isfun-strength */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2strengthzd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_35)
	{
		{	/* Inline/inline.sch 69 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_35)))->BgL_strengthz00);
		}

	}



/* &isfun-strength */
	obj_t BGl_z62isfunzd2strengthzb0zzinline_inlinez00(obj_t BgL_envz00_2467,
		obj_t BgL_oz00_2468)
	{
		{	/* Inline/inline.sch 69 */
			return
				BGl_isfunzd2strengthzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2468));
		}

	}



/* isfun-strength-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2strengthzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_36, obj_t BgL_vz00_37)
	{
		{	/* Inline/inline.sch 70 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_36)))->BgL_strengthz00) =
				((obj_t) BgL_vz00_37), BUNSPEC);
		}

	}



/* &isfun-strength-set! */
	obj_t BGl_z62isfunzd2strengthzd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2469, obj_t BgL_oz00_2470, obj_t BgL_vz00_2471)
	{
		{	/* Inline/inline.sch 70 */
			return
				BGl_isfunzd2strengthzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2470), BgL_vz00_2471);
		}

	}



/* isfun-the-closure-global */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2thezd2closurezd2globalzd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_38)
	{
		{	/* Inline/inline.sch 71 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_38)))->BgL_thezd2closurezd2globalz00);
		}

	}



/* &isfun-the-closure-global */
	obj_t BGl_z62isfunzd2thezd2closurezd2globalzb0zzinline_inlinez00(obj_t
		BgL_envz00_2472, obj_t BgL_oz00_2473)
	{
		{	/* Inline/inline.sch 71 */
			return
				BGl_isfunzd2thezd2closurezd2globalzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2473));
		}

	}



/* isfun-the-closure-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2thezd2closurezd2globalzd2setz12z12zzinline_inlinez00
		(BgL_sfunz00_bglt BgL_oz00_39, obj_t BgL_vz00_40)
	{
		{	/* Inline/inline.sch 72 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_39)))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_40), BUNSPEC);
		}

	}



/* &isfun-the-closure-global-set! */
	obj_t
		BGl_z62isfunzd2thezd2closurezd2globalzd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2474, obj_t BgL_oz00_2475, obj_t BgL_vz00_2476)
	{
		{	/* Inline/inline.sch 72 */
			return
				BGl_isfunzd2thezd2closurezd2globalzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2475), BgL_vz00_2476);
		}

	}



/* isfun-keys */
	BGL_EXPORTED_DEF obj_t BGl_isfunzd2keyszd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_41)
	{
		{	/* Inline/inline.sch 73 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_41)))->BgL_keysz00);
		}

	}



/* &isfun-keys */
	obj_t BGl_z62isfunzd2keyszb0zzinline_inlinez00(obj_t BgL_envz00_2477,
		obj_t BgL_oz00_2478)
	{
		{	/* Inline/inline.sch 73 */
			return
				BGl_isfunzd2keyszd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2478));
		}

	}



/* isfun-optionals */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2optionalszd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_44)
	{
		{	/* Inline/inline.sch 75 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_44)))->BgL_optionalsz00);
		}

	}



/* &isfun-optionals */
	obj_t BGl_z62isfunzd2optionalszb0zzinline_inlinez00(obj_t BgL_envz00_2479,
		obj_t BgL_oz00_2480)
	{
		{	/* Inline/inline.sch 75 */
			return
				BGl_isfunzd2optionalszd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2480));
		}

	}



/* isfun-loc */
	BGL_EXPORTED_DEF obj_t BGl_isfunzd2loczd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_47)
	{
		{	/* Inline/inline.sch 77 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_47)))->BgL_locz00);
		}

	}



/* &isfun-loc */
	obj_t BGl_z62isfunzd2loczb0zzinline_inlinez00(obj_t BgL_envz00_2481,
		obj_t BgL_oz00_2482)
	{
		{	/* Inline/inline.sch 77 */
			return
				BGl_isfunzd2loczd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2482));
		}

	}



/* isfun-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2loczd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_48,
		obj_t BgL_vz00_49)
	{
		{	/* Inline/inline.sch 78 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_48)))->BgL_locz00) =
				((obj_t) BgL_vz00_49), BUNSPEC);
		}

	}



/* &isfun-loc-set! */
	obj_t BGl_z62isfunzd2loczd2setz12z70zzinline_inlinez00(obj_t BgL_envz00_2483,
		obj_t BgL_oz00_2484, obj_t BgL_vz00_2485)
	{
		{	/* Inline/inline.sch 78 */
			return
				BGl_isfunzd2loczd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2484), BgL_vz00_2485);
		}

	}



/* isfun-dsssl-keywords */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2dssslzd2keywordsz00zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_50)
	{
		{	/* Inline/inline.sch 79 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_50)))->BgL_dssslzd2keywordszd2);
		}

	}



/* &isfun-dsssl-keywords */
	obj_t BGl_z62isfunzd2dssslzd2keywordsz62zzinline_inlinez00(obj_t
		BgL_envz00_2486, obj_t BgL_oz00_2487)
	{
		{	/* Inline/inline.sch 79 */
			return
				BGl_isfunzd2dssslzd2keywordsz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2487));
		}

	}



/* isfun-dsssl-keywords-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2dssslzd2keywordszd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_51, obj_t BgL_vz00_52)
	{
		{	/* Inline/inline.sch 80 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_51)))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_52), BUNSPEC);
		}

	}



/* &isfun-dsssl-keywords-set! */
	obj_t BGl_z62isfunzd2dssslzd2keywordszd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2488, obj_t BgL_oz00_2489, obj_t BgL_vz00_2490)
	{
		{	/* Inline/inline.sch 80 */
			return
				BGl_isfunzd2dssslzd2keywordszd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2489), BgL_vz00_2490);
		}

	}



/* isfun-class */
	BGL_EXPORTED_DEF obj_t BGl_isfunzd2classzd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_53)
	{
		{	/* Inline/inline.sch 81 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_53)))->BgL_classz00);
		}

	}



/* &isfun-class */
	obj_t BGl_z62isfunzd2classzb0zzinline_inlinez00(obj_t BgL_envz00_2491,
		obj_t BgL_oz00_2492)
	{
		{	/* Inline/inline.sch 81 */
			return
				BGl_isfunzd2classzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2492));
		}

	}



/* isfun-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2classzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_54, obj_t BgL_vz00_55)
	{
		{	/* Inline/inline.sch 82 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_54)))->BgL_classz00) =
				((obj_t) BgL_vz00_55), BUNSPEC);
		}

	}



/* &isfun-class-set! */
	obj_t BGl_z62isfunzd2classzd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2493, obj_t BgL_oz00_2494, obj_t BgL_vz00_2495)
	{
		{	/* Inline/inline.sch 82 */
			return
				BGl_isfunzd2classzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2494), BgL_vz00_2495);
		}

	}



/* isfun-body */
	BGL_EXPORTED_DEF obj_t BGl_isfunzd2bodyzd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_56)
	{
		{	/* Inline/inline.sch 83 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_56)))->BgL_bodyz00);
		}

	}



/* &isfun-body */
	obj_t BGl_z62isfunzd2bodyzb0zzinline_inlinez00(obj_t BgL_envz00_2496,
		obj_t BgL_oz00_2497)
	{
		{	/* Inline/inline.sch 83 */
			return
				BGl_isfunzd2bodyzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2497));
		}

	}



/* isfun-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2bodyzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_57,
		obj_t BgL_vz00_58)
	{
		{	/* Inline/inline.sch 84 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_57)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_58), BUNSPEC);
		}

	}



/* &isfun-body-set! */
	obj_t BGl_z62isfunzd2bodyzd2setz12z70zzinline_inlinez00(obj_t BgL_envz00_2498,
		obj_t BgL_oz00_2499, obj_t BgL_vz00_2500)
	{
		{	/* Inline/inline.sch 84 */
			return
				BGl_isfunzd2bodyzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2499), BgL_vz00_2500);
		}

	}



/* isfun-args-name */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2argszd2namez00zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_59)
	{
		{	/* Inline/inline.sch 85 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_59)))->BgL_argszd2namezd2);
		}

	}



/* &isfun-args-name */
	obj_t BGl_z62isfunzd2argszd2namez62zzinline_inlinez00(obj_t BgL_envz00_2501,
		obj_t BgL_oz00_2502)
	{
		{	/* Inline/inline.sch 85 */
			return
				BGl_isfunzd2argszd2namez00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2502));
		}

	}



/* isfun-args */
	BGL_EXPORTED_DEF obj_t BGl_isfunzd2argszd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_62)
	{
		{	/* Inline/inline.sch 87 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_62)))->BgL_argsz00);
		}

	}



/* &isfun-args */
	obj_t BGl_z62isfunzd2argszb0zzinline_inlinez00(obj_t BgL_envz00_2503,
		obj_t BgL_oz00_2504)
	{
		{	/* Inline/inline.sch 87 */
			return
				BGl_isfunzd2argszd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2504));
		}

	}



/* isfun-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2argszd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_63,
		obj_t BgL_vz00_64)
	{
		{	/* Inline/inline.sch 88 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_63)))->BgL_argsz00) =
				((obj_t) BgL_vz00_64), BUNSPEC);
		}

	}



/* &isfun-args-set! */
	obj_t BGl_z62isfunzd2argszd2setz12z70zzinline_inlinez00(obj_t BgL_envz00_2505,
		obj_t BgL_oz00_2506, obj_t BgL_vz00_2507)
	{
		{	/* Inline/inline.sch 88 */
			return
				BGl_isfunzd2argszd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2506), BgL_vz00_2507);
		}

	}



/* isfun-property */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2propertyzd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_65)
	{
		{	/* Inline/inline.sch 89 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_65)))->BgL_propertyz00);
		}

	}



/* &isfun-property */
	obj_t BGl_z62isfunzd2propertyzb0zzinline_inlinez00(obj_t BgL_envz00_2508,
		obj_t BgL_oz00_2509)
	{
		{	/* Inline/inline.sch 89 */
			return
				BGl_isfunzd2propertyzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2509));
		}

	}



/* isfun-property-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2propertyzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_66, obj_t BgL_vz00_67)
	{
		{	/* Inline/inline.sch 90 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_66)))->BgL_propertyz00) =
				((obj_t) BgL_vz00_67), BUNSPEC);
		}

	}



/* &isfun-property-set! */
	obj_t BGl_z62isfunzd2propertyzd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2510, obj_t BgL_oz00_2511, obj_t BgL_vz00_2512)
	{
		{	/* Inline/inline.sch 90 */
			return
				BGl_isfunzd2propertyzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2511), BgL_vz00_2512);
		}

	}



/* isfun-failsafe */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2failsafezd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_68)
	{
		{	/* Inline/inline.sch 91 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_68)))->BgL_failsafez00);
		}

	}



/* &isfun-failsafe */
	obj_t BGl_z62isfunzd2failsafezb0zzinline_inlinez00(obj_t BgL_envz00_2513,
		obj_t BgL_oz00_2514)
	{
		{	/* Inline/inline.sch 91 */
			return
				BGl_isfunzd2failsafezd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2514));
		}

	}



/* isfun-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2failsafezd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_69, obj_t BgL_vz00_70)
	{
		{	/* Inline/inline.sch 92 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_69)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_70), BUNSPEC);
		}

	}



/* &isfun-failsafe-set! */
	obj_t BGl_z62isfunzd2failsafezd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2515, obj_t BgL_oz00_2516, obj_t BgL_vz00_2517)
	{
		{	/* Inline/inline.sch 92 */
			return
				BGl_isfunzd2failsafezd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2516), BgL_vz00_2517);
		}

	}



/* isfun-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2effectzd2zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_71)
	{
		{	/* Inline/inline.sch 93 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_71)))->BgL_effectz00);
		}

	}



/* &isfun-effect */
	obj_t BGl_z62isfunzd2effectzb0zzinline_inlinez00(obj_t BgL_envz00_2518,
		obj_t BgL_oz00_2519)
	{
		{	/* Inline/inline.sch 93 */
			return
				BGl_isfunzd2effectzd2zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2519));
		}

	}



/* isfun-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2effectzd2setz12z12zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_72, obj_t BgL_vz00_73)
	{
		{	/* Inline/inline.sch 94 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_72)))->BgL_effectz00) =
				((obj_t) BgL_vz00_73), BUNSPEC);
		}

	}



/* &isfun-effect-set! */
	obj_t BGl_z62isfunzd2effectzd2setz12z70zzinline_inlinez00(obj_t
		BgL_envz00_2520, obj_t BgL_oz00_2521, obj_t BgL_vz00_2522)
	{
		{	/* Inline/inline.sch 94 */
			return
				BGl_isfunzd2effectzd2setz12z12zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2521), BgL_vz00_2522);
		}

	}



/* isfun-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2thezd2closurez00zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_74)
	{
		{	/* Inline/inline.sch 95 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_74)))->BgL_thezd2closurezd2);
		}

	}



/* &isfun-the-closure */
	obj_t BGl_z62isfunzd2thezd2closurez62zzinline_inlinez00(obj_t BgL_envz00_2523,
		obj_t BgL_oz00_2524)
	{
		{	/* Inline/inline.sch 95 */
			return
				BGl_isfunzd2thezd2closurez00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2524));
		}

	}



/* isfun-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2thezd2closurezd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_75, obj_t BgL_vz00_76)
	{
		{	/* Inline/inline.sch 96 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_75)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_76), BUNSPEC);
		}

	}



/* &isfun-the-closure-set! */
	obj_t BGl_z62isfunzd2thezd2closurezd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2525, obj_t BgL_oz00_2526, obj_t BgL_vz00_2527)
	{
		{	/* Inline/inline.sch 96 */
			return
				BGl_isfunzd2thezd2closurezd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2526), BgL_vz00_2527);
		}

	}



/* isfun-top? */
	BGL_EXPORTED_DEF bool_t
		BGl_isfunzd2topzf3z21zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_77)
	{
		{	/* Inline/inline.sch 97 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_77)))->BgL_topzf3zf3);
		}

	}



/* &isfun-top? */
	obj_t BGl_z62isfunzd2topzf3z43zzinline_inlinez00(obj_t BgL_envz00_2528,
		obj_t BgL_oz00_2529)
	{
		{	/* Inline/inline.sch 97 */
			return
				BBOOL(BGl_isfunzd2topzf3z21zzinline_inlinez00(
					((BgL_sfunz00_bglt) BgL_oz00_2529)));
		}

	}



/* isfun-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2topzf3zd2setz12ze1zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_78, bool_t BgL_vz00_79)
	{
		{	/* Inline/inline.sch 98 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_78)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_79), BUNSPEC);
		}

	}



/* &isfun-top?-set! */
	obj_t BGl_z62isfunzd2topzf3zd2setz12z83zzinline_inlinez00(obj_t
		BgL_envz00_2530, obj_t BgL_oz00_2531, obj_t BgL_vz00_2532)
	{
		{	/* Inline/inline.sch 98 */
			return
				BGl_isfunzd2topzf3zd2setz12ze1zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2531), CBOOL(BgL_vz00_2532));
		}

	}



/* isfun-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2stackzd2allocatorz00zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_80)
	{
		{	/* Inline/inline.sch 99 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_80)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &isfun-stack-allocator */
	obj_t BGl_z62isfunzd2stackzd2allocatorz62zzinline_inlinez00(obj_t
		BgL_envz00_2533, obj_t BgL_oz00_2534)
	{
		{	/* Inline/inline.sch 99 */
			return
				BGl_isfunzd2stackzd2allocatorz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2534));
		}

	}



/* isfun-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2stackzd2allocatorzd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_81, obj_t BgL_vz00_82)
	{
		{	/* Inline/inline.sch 100 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_81)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_82), BUNSPEC);
		}

	}



/* &isfun-stack-allocator-set! */
	obj_t BGl_z62isfunzd2stackzd2allocatorzd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2535, obj_t BgL_oz00_2536, obj_t BgL_vz00_2537)
	{
		{	/* Inline/inline.sch 100 */
			return
				BGl_isfunzd2stackzd2allocatorzd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2536), BgL_vz00_2537);
		}

	}



/* isfun-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2predicatezd2ofz00zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_83)
	{
		{	/* Inline/inline.sch 101 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_83)))->BgL_predicatezd2ofzd2);
		}

	}



/* &isfun-predicate-of */
	obj_t BGl_z62isfunzd2predicatezd2ofz62zzinline_inlinez00(obj_t
		BgL_envz00_2538, obj_t BgL_oz00_2539)
	{
		{	/* Inline/inline.sch 101 */
			return
				BGl_isfunzd2predicatezd2ofz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2539));
		}

	}



/* isfun-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2predicatezd2ofzd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_84, obj_t BgL_vz00_85)
	{
		{	/* Inline/inline.sch 102 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_84)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_85), BUNSPEC);
		}

	}



/* &isfun-predicate-of-set! */
	obj_t BGl_z62isfunzd2predicatezd2ofzd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2540, obj_t BgL_oz00_2541, obj_t BgL_vz00_2542)
	{
		{	/* Inline/inline.sch 102 */
			return
				BGl_isfunzd2predicatezd2ofzd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2541), BgL_vz00_2542);
		}

	}



/* isfun-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2sidezd2effectz00zzinline_inlinez00(BgL_sfunz00_bglt BgL_oz00_86)
	{
		{	/* Inline/inline.sch 103 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_86)))->BgL_sidezd2effectzd2);
		}

	}



/* &isfun-side-effect */
	obj_t BGl_z62isfunzd2sidezd2effectz62zzinline_inlinez00(obj_t BgL_envz00_2543,
		obj_t BgL_oz00_2544)
	{
		{	/* Inline/inline.sch 103 */
			return
				BGl_isfunzd2sidezd2effectz00zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2544));
		}

	}



/* isfun-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_isfunzd2sidezd2effectzd2setz12zc0zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_87, obj_t BgL_vz00_88)
	{
		{	/* Inline/inline.sch 104 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_87)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_88), BUNSPEC);
		}

	}



/* &isfun-side-effect-set! */
	obj_t BGl_z62isfunzd2sidezd2effectzd2setz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2545, obj_t BgL_oz00_2546, obj_t BgL_vz00_2547)
	{
		{	/* Inline/inline.sch 104 */
			return
				BGl_isfunzd2sidezd2effectzd2setz12zc0zzinline_inlinez00(
				((BgL_sfunz00_bglt) BgL_oz00_2546), BgL_vz00_2547);
		}

	}



/* isfun-arity */
	BGL_EXPORTED_DEF long BGl_isfunzd2arityzd2zzinline_inlinez00(BgL_sfunz00_bglt
		BgL_oz00_89)
	{
		{	/* Inline/inline.sch 105 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_89)))->BgL_arityz00);
		}

	}



/* &isfun-arity */
	obj_t BGl_z62isfunzd2arityzb0zzinline_inlinez00(obj_t BgL_envz00_2548,
		obj_t BgL_oz00_2549)
	{
		{	/* Inline/inline.sch 105 */
			return
				BINT(BGl_isfunzd2arityzd2zzinline_inlinez00(
					((BgL_sfunz00_bglt) BgL_oz00_2549)));
		}

	}



/* inline-sfun! */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt
		BgL_variablez00_92, long BgL_kfactorz00_93, obj_t BgL_stackz00_94)
	{
		{	/* Inline/inline.scm 38 */
			{	/* Inline/inline.scm 42 */
				BgL_valuez00_bglt BgL_sfunz00_1499;

				BgL_sfunz00_1499 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_92))->BgL_valuez00);
				{	/* Inline/inline.scm 42 */
					BgL_valuez00_bglt BgL_isfunz00_1500;

					{	/* Inline/inline.scm 45 */
						BgL_isfunz00_bglt BgL_wide1153z00_1537;

						BgL_wide1153z00_1537 =
							((BgL_isfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_isfunz00_bgl))));
						{	/* Inline/inline.scm 45 */
							obj_t BgL_auxz00_3222;
							BgL_objectz00_bglt BgL_tmpz00_3218;

							BgL_auxz00_3222 = ((obj_t) BgL_wide1153z00_1537);
							BgL_tmpz00_3218 =
								((BgL_objectz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3218, BgL_auxz00_3222);
						}
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
						{	/* Inline/inline.scm 45 */
							long BgL_arg1476z00_1538;

							{	/* Inline/inline.scm 45 */
								long BgL_res1942z00_2176;

								BgL_res1942z00_2176 =
									BGL_CLASS_INDEX(BGl_isfunz00zzinline_inlinez00);
								BgL_arg1476z00_1538 = BgL_res1942z00_2176;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt)
										((BgL_sfunz00_bglt) BgL_sfunz00_1499))),
								BgL_arg1476z00_1538);
						}
						((BgL_sfunz00_bglt)
							((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
					}
					{
						BgL_isfunz00_bglt BgL_auxz00_3236;

						{
							obj_t BgL_auxz00_3237;

							{	/* Inline/inline.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_3238;

								BgL_tmpz00_3238 =
									((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
								BgL_auxz00_3237 = BGL_OBJECT_WIDENING(BgL_tmpz00_3238);
							}
							BgL_auxz00_3236 = ((BgL_isfunz00_bglt) BgL_auxz00_3237);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3236))->
								BgL_originalzd2bodyzd2) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) BgL_sfunz00_1499)))->
										BgL_bodyz00))), BUNSPEC);
					}
					{
						BgL_isfunz00_bglt BgL_auxz00_3248;

						{
							obj_t BgL_auxz00_3249;

							{	/* Inline/inline.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_3250;

								BgL_tmpz00_3250 =
									((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
								BgL_auxz00_3249 = BGL_OBJECT_WIDENING(BgL_tmpz00_3250);
							}
							BgL_auxz00_3248 = ((BgL_isfunz00_bglt) BgL_auxz00_3249);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3248))->
								BgL_recursivezd2callszd2) = ((obj_t) BUNSPEC), BUNSPEC);
					}
					{
						BgL_isfunz00_bglt BgL_auxz00_3257;

						{
							obj_t BgL_auxz00_3258;

							{	/* Inline/inline.scm 45 */
								BgL_objectz00_bglt BgL_tmpz00_3259;

								BgL_tmpz00_3259 =
									((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
								BgL_auxz00_3258 = BGL_OBJECT_WIDENING(BgL_tmpz00_3259);
							}
							BgL_auxz00_3257 = ((BgL_isfunz00_bglt) BgL_auxz00_3258);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3257))->BgL_tailrecz00) =
							((bool_t) ((bool_t) 1)), BUNSPEC);
					}
					BgL_isfunz00_1500 =
						((BgL_valuez00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1499)));
					{	/* Inline/inline.scm 43 */
						BgL_nodez00_bglt BgL_ozd2bodyzd2_1501;

						{
							BgL_isfunz00_bglt BgL_auxz00_3269;

							{
								obj_t BgL_auxz00_3270;

								{	/* Inline/inline.scm 46 */
									BgL_objectz00_bglt BgL_tmpz00_3271;

									BgL_tmpz00_3271 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_isfunz00_1500));
									BgL_auxz00_3270 = BGL_OBJECT_WIDENING(BgL_tmpz00_3271);
								}
								BgL_auxz00_3269 = ((BgL_isfunz00_bglt) BgL_auxz00_3270);
							}
							BgL_ozd2bodyzd2_1501 =
								(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3269))->
								BgL_originalzd2bodyzd2);
						}
						{	/* Inline/inline.scm 46 */
							BgL_nodez00_bglt BgL_inlzd2bodyzd2_1502;

							{	/* Inline/inline.scm 47 */
								bool_t BgL_test2133z00_3277;

								{	/* Inline/inline.scm 48 */
									long BgL_arg1464z00_1531;

									BgL_arg1464z00_1531 =
										(((long) 1) +
										bgl_list_length(
											(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_sfunz00_1499)))->
												BgL_argsz00)));
									BgL_test2133z00_3277 =
										BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_92,
										(long) CINT(BGl_za2kfactorza2z00zzinline_walkz00),
										BgL_arg1464z00_1531, BNIL);
								}
								if (BgL_test2133z00_3277)
									{	/* Inline/inline.scm 47 */
										BgL_inlzd2bodyzd2_1502 =
											BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL, BFALSE,
											BgL_ozd2bodyzd2_1501);
									}
								else
									{	/* Inline/inline.scm 47 */
										BgL_inlzd2bodyzd2_1502 = BgL_ozd2bodyzd2_1501;
									}
							}
							{	/* Inline/inline.scm 47 */

								{	/* Inline/inline.scm 57 */
									BgL_nodez00_bglt BgL_arg1364z00_1503;

									{	/* Inline/inline.scm 57 */
										bool_t BgL_test2134z00_3285;

										if (
											(BGl_za2inlinezd2modeza2zd2zzinline_walkz00 ==
												CNST_TABLE_REF(((long) 0))))
											{	/* Inline/inline.scm 57 */
												BgL_test2134z00_3285 = ((bool_t) 1);
											}
										else
											{	/* Inline/inline.scm 58 */
												bool_t BgL_test2136z00_3289;

												if (
													((((BgL_variablez00_bglt)
																COBJECT(BgL_variablez00_92))->
															BgL_occurrencez00) > ((long) 0)))
													{	/* Inline/inline.scm 58 */
														BgL_test2136z00_3289 = ((bool_t) 1);
													}
												else
													{	/* Inline/inline.scm 58 */
														BgL_test2136z00_3289 =
															(
															(((BgL_variablez00_bglt)
																	COBJECT(BgL_variablez00_92))->
																BgL_removablez00) ==
															CNST_TABLE_REF(((long) 1)));
													}
												if (BgL_test2136z00_3289)
													{	/* Inline/inline.scm 58 */
														BgL_test2134z00_3285 = ((bool_t) 1);
													}
												else
													{	/* Inline/inline.scm 60 */
														bool_t BgL_test2138z00_3296;

														{	/* Inline/inline.scm 60 */
															bool_t BgL_res1945z00_2192;

															BgL_res1945z00_2192 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_variablez00_92),
																BGl_globalz00zzast_varz00);
															BgL_test2138z00_3296 = BgL_res1945z00_2192;
														}
														if (BgL_test2138z00_3296)
															{	/* Inline/inline.scm 60 */
																if (
																	((((BgL_globalz00_bglt) COBJECT(
																					((BgL_globalz00_bglt)
																						BgL_variablez00_92)))->
																			BgL_importz00) ==
																		CNST_TABLE_REF(((long) 2))))
																	{	/* Inline/inline.scm 61 */
																		BgL_test2134z00_3285 = ((bool_t) 0);
																	}
																else
																	{	/* Inline/inline.scm 61 */
																		BgL_test2134z00_3285 = ((bool_t) 1);
																	}
															}
														else
															{	/* Inline/inline.scm 60 */
																BgL_test2134z00_3285 = ((bool_t) 0);
															}
													}
											}
										if (BgL_test2134z00_3285)
											{	/* Inline/inline.scm 62 */
												obj_t BgL_arg1421z00_1518;

												BgL_arg1421z00_1518 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_variablez00_92), BgL_stackz00_94);
												BgL_arg1364z00_1503 =
													BGl_inlinezd2nodezd2zzinline_inlinez00
													(BgL_inlzd2bodyzd2_1502, BgL_kfactorz00_93,
													BgL_arg1421z00_1518);
											}
										else
											{	/* Inline/inline.scm 57 */
												BgL_arg1364z00_1503 = BgL_inlzd2bodyzd2_1502;
											}
									}
									((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_1499)))->
											BgL_bodyz00) =
										((obj_t) ((obj_t) BgL_arg1364z00_1503)), BUNSPEC);
								}
							}
						}
					}
				}
			}
			return BNIL;
		}

	}



/* &inline-sfun! */
	obj_t BGl_z62inlinezd2sfunz12za2zzinline_inlinez00(obj_t BgL_envz00_2550,
		obj_t BgL_variablez00_2551, obj_t BgL_kfactorz00_2552,
		obj_t BgL_stackz00_2553)
	{
		{	/* Inline/inline.scm 38 */
			return
				BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
				((BgL_variablez00_bglt) BgL_variablez00_2551),
				(long) CINT(BgL_kfactorz00_2552), BgL_stackz00_2553);
		}

	}



/* inline-node*! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t
		BgL_nodeza2za2_167, obj_t BgL_kfactorz00_168, obj_t BgL_stackz00_169)
	{
		{	/* Inline/inline.scm 287 */
		BGl_inlinezd2nodeza2z12z62zzinline_inlinez00:
			if (NULLP(BgL_nodeza2za2_167))
				{	/* Inline/inline.scm 288 */
					return CNST_TABLE_REF(((long) 3));
				}
			else
				{	/* Inline/inline.scm 288 */
					{	/* Inline/inline.scm 291 */
						BgL_nodez00_bglt BgL_arg1489z00_1541;

						{	/* Inline/inline.scm 291 */
							obj_t BgL_arg1493z00_1542;

							BgL_arg1493z00_1542 = CAR(((obj_t) BgL_nodeza2za2_167));
							BgL_arg1489z00_1541 =
								BGl_inlinezd2nodezd2zzinline_inlinez00(
								((BgL_nodez00_bglt) BgL_arg1493z00_1542),
								(long) CINT(BgL_kfactorz00_168), BgL_stackz00_169);
						}
						{	/* Inline/inline.scm 291 */
							obj_t BgL_auxz00_3323;
							obj_t BgL_tmpz00_3321;

							BgL_auxz00_3323 = ((obj_t) BgL_arg1489z00_1541);
							BgL_tmpz00_3321 = ((obj_t) BgL_nodeza2za2_167);
							SET_CAR(BgL_tmpz00_3321, BgL_auxz00_3323);
					}}
					{	/* Inline/inline.scm 292 */
						obj_t BgL_arg1495z00_1543;

						BgL_arg1495z00_1543 = CDR(((obj_t) BgL_nodeza2za2_167));
						{
							obj_t BgL_nodeza2za2_3328;

							BgL_nodeza2za2_3328 = BgL_arg1495z00_1543;
							BgL_nodeza2za2_167 = BgL_nodeza2za2_3328;
							goto BGl_inlinezd2nodeza2z12z62zzinline_inlinez00;
						}
					}
				}
		}

	}



/* &inline-node*! */
	obj_t BGl_z62inlinezd2nodeza2z12z00zzinline_inlinez00(obj_t BgL_envz00_2554,
		obj_t BgL_nodeza2za2_2555, obj_t BgL_kfactorz00_2556,
		obj_t BgL_stackz00_2557)
	{
		{	/* Inline/inline.scm 287 */
			return
				BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_nodeza2za2_2555,
				BgL_kfactorz00_2556, BgL_stackz00_2557);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			{	/* Inline/inline.scm 28 */
				obj_t BgL_arg1536z00_1548;
				obj_t BgL_arg1537z00_1549;

				{	/* Inline/inline.scm 28 */
					obj_t BgL_v1299z00_1594;

					BgL_v1299z00_1594 = create_vector(((long) 3));
					{	/* Inline/inline.scm 28 */
						obj_t BgL_arg1573z00_1595;

						BgL_arg1573z00_1595 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc1991z00zzinline_inlinez00,
							BGl_proc1990z00zzinline_inlinez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_nodez00zzast_nodez00);
						VECTOR_SET(BgL_v1299z00_1594, ((long) 0), BgL_arg1573z00_1595);
					}
					{	/* Inline/inline.scm 28 */
						obj_t BgL_arg1582z00_1605;

						BgL_arg1582z00_1605 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1994z00zzinline_inlinez00,
							BGl_proc1993z00zzinline_inlinez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1992z00zzinline_inlinez00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1299z00_1594, ((long) 1), BgL_arg1582z00_1605);
					}
					{	/* Inline/inline.scm 28 */
						obj_t BgL_arg1593z00_1618;

						BgL_arg1593z00_1618 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc1997z00zzinline_inlinez00,
							BGl_proc1996z00zzinline_inlinez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1995z00zzinline_inlinez00,
							CNST_TABLE_REF(((long) 8)));
						VECTOR_SET(BgL_v1299z00_1594, ((long) 2), BgL_arg1593z00_1618);
					}
					BgL_arg1536z00_1548 = BgL_v1299z00_1594;
				}
				{	/* Inline/inline.scm 28 */
					obj_t BgL_v1300z00_1631;

					BgL_v1300z00_1631 = create_vector(((long) 0));
					BgL_arg1537z00_1549 = BgL_v1300z00_1631;
				}
				return (BGl_isfunz00zzinline_inlinez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 9)),
						CNST_TABLE_REF(((long) 10)), BGl_sfunz00zzast_varz00,
						((long) 31945), BGl_proc2001z00zzinline_inlinez00,
						BGl_proc2000z00zzinline_inlinez00, BFALSE,
						BGl_proc1999z00zzinline_inlinez00,
						BGl_proc1998z00zzinline_inlinez00, BgL_arg1536z00_1548,
						BgL_arg1537z00_1549), BUNSPEC);
		}}

	}



/* &lambda1560 */
	BgL_sfunz00_bglt BGl_z62lambda1560z62zzinline_inlinez00(obj_t BgL_envz00_2570,
		obj_t BgL_o1129z00_2571)
	{
		{	/* Inline/inline.scm 28 */
			{	/* Inline/inline.scm 28 */
				long BgL_arg1561z00_2772;

				{	/* Inline/inline.scm 28 */
					obj_t BgL_arg1564z00_2773;

					{	/* Inline/inline.scm 28 */
						obj_t BgL_arg1565z00_2774;

						{	/* Inline/inline.scm 28 */
							long BgL_arg1816z00_2775;

							{	/* Inline/inline.scm 28 */
								long BgL_arg1817z00_2776;

								{	/* Inline/inline.scm 28 */
									long BgL_res1951z00_2777;

									BgL_res1951z00_2777 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_o1129z00_2571)));
									BgL_arg1817z00_2776 = BgL_res1951z00_2777;
								}
								BgL_arg1816z00_2775 = (BgL_arg1817z00_2776 - OBJECT_TYPE);
							}
							BgL_arg1565z00_2774 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2775);
						}
						BgL_arg1564z00_2773 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1565z00_2774);
					}
					{	/* Inline/inline.scm 28 */
						long BgL_res1954z00_2778;

						{	/* Inline/inline.scm 28 */
							obj_t BgL_tmpz00_3352;

							BgL_tmpz00_3352 = ((obj_t) BgL_arg1564z00_2773);
							BgL_res1954z00_2778 = BGL_CLASS_INDEX(BgL_tmpz00_3352);
						}
						BgL_arg1561z00_2772 = BgL_res1954z00_2778;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) BgL_o1129z00_2571)), BgL_arg1561z00_2772);
			}
			{	/* Inline/inline.scm 28 */
				BgL_objectz00_bglt BgL_tmpz00_3358;

				BgL_tmpz00_3358 =
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1129z00_2571));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3358, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1129z00_2571));
			return ((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1129z00_2571));
		}

	}



/* &<@anonymous:1559> */
	obj_t BGl_z62zc3z04anonymousza31559ze3ze5zzinline_inlinez00(obj_t
		BgL_envz00_2572, obj_t BgL_new1128z00_2573)
	{
		{	/* Inline/inline.scm 28 */
			{
				BgL_sfunz00_bglt BgL_auxz00_3366;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1128z00_2573))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 11))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1128z00_2573))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_nodez00_bglt BgL_auxz00_3438;
					BgL_isfunz00_bglt BgL_auxz00_3431;

					{	/* Inline/inline.scm 28 */
						obj_t BgL_classz00_2780;

						BgL_classz00_2780 = BGl_nodez00zzast_nodez00;
						{	/* Inline/inline.scm 28 */
							obj_t BgL__ortest_1106z00_2781;

							BgL__ortest_1106z00_2781 = BGL_CLASS_NIL(BgL_classz00_2780);
							if (CBOOL(BgL__ortest_1106z00_2781))
								{	/* Inline/inline.scm 28 */
									BgL_auxz00_3438 =
										((BgL_nodez00_bglt) BgL__ortest_1106z00_2781);
								}
							else
								{	/* Inline/inline.scm 28 */
									BgL_auxz00_3438 =
										((BgL_nodez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2780));
								}
						}
					}
					{
						obj_t BgL_auxz00_3432;

						{	/* Inline/inline.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3433;

							BgL_tmpz00_3433 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1128z00_2573));
							BgL_auxz00_3432 = BGL_OBJECT_WIDENING(BgL_tmpz00_3433);
						}
						BgL_auxz00_3431 = ((BgL_isfunz00_bglt) BgL_auxz00_3432);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3431))->
							BgL_originalzd2bodyzd2) =
						((BgL_nodez00_bglt) BgL_auxz00_3438), BUNSPEC);
				}
				{
					BgL_isfunz00_bglt BgL_auxz00_3446;

					{
						obj_t BgL_auxz00_3447;

						{	/* Inline/inline.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3448;

							BgL_tmpz00_3448 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1128z00_2573));
							BgL_auxz00_3447 = BGL_OBJECT_WIDENING(BgL_tmpz00_3448);
						}
						BgL_auxz00_3446 = ((BgL_isfunz00_bglt) BgL_auxz00_3447);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3446))->
							BgL_recursivezd2callszd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_isfunz00_bglt BgL_auxz00_3454;

					{
						obj_t BgL_auxz00_3455;

						{	/* Inline/inline.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3456;

							BgL_tmpz00_3456 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1128z00_2573));
							BgL_auxz00_3455 = BGL_OBJECT_WIDENING(BgL_tmpz00_3456);
						}
						BgL_auxz00_3454 = ((BgL_isfunz00_bglt) BgL_auxz00_3455);
					}
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3454))->BgL_tailrecz00) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_3366 = ((BgL_sfunz00_bglt) BgL_new1128z00_2573);
				return ((obj_t) BgL_auxz00_3366);
			}
		}

	}



/* &lambda1553 */
	BgL_sfunz00_bglt BGl_z62lambda1553z62zzinline_inlinez00(obj_t BgL_envz00_2574,
		obj_t BgL_o1125z00_2575)
	{
		{	/* Inline/inline.scm 28 */
			{	/* Inline/inline.scm 28 */
				BgL_isfunz00_bglt BgL_wide1127z00_2783;

				BgL_wide1127z00_2783 =
					((BgL_isfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_isfunz00_bgl))));
				{	/* Inline/inline.scm 28 */
					obj_t BgL_auxz00_3469;
					BgL_objectz00_bglt BgL_tmpz00_3465;

					BgL_auxz00_3469 = ((obj_t) BgL_wide1127z00_2783);
					BgL_tmpz00_3465 =
						((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1125z00_2575)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3465, BgL_auxz00_3469);
				}
				((BgL_objectz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1125z00_2575)));
				{	/* Inline/inline.scm 28 */
					long BgL_arg1558z00_2784;

					{	/* Inline/inline.scm 28 */
						long BgL_res1949z00_2785;

						BgL_res1949z00_2785 =
							BGL_CLASS_INDEX(BGl_isfunz00zzinline_inlinez00);
						BgL_arg1558z00_2784 = BgL_res1949z00_2785;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_o1125z00_2575))), BgL_arg1558z00_2784);
				}
				return
					((BgL_sfunz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1125z00_2575)));
			}
		}

	}



/* &lambda1538 */
	BgL_sfunz00_bglt BGl_z62lambda1538z62zzinline_inlinez00(obj_t BgL_envz00_2576,
		obj_t BgL_arity1101z00_2577, obj_t BgL_sidezd2effect1102zd2_2578,
		obj_t BgL_predicatezd2of1103zd2_2579,
		obj_t BgL_stackzd2allocator1104zd2_2580, obj_t BgL_topzf31105zf3_2581,
		obj_t BgL_thezd2closure1106zd2_2582, obj_t BgL_effect1107z00_2583,
		obj_t BgL_failsafe1108z00_2584, obj_t BgL_argszd2noescape1109zd2_2585,
		obj_t BgL_property1110z00_2586, obj_t BgL_args1111z00_2587,
		obj_t BgL_argszd2name1112zd2_2588, obj_t BgL_body1113z00_2589,
		obj_t BgL_class1114z00_2590, obj_t BgL_dssslzd2keywords1115zd2_2591,
		obj_t BgL_loc1116z00_2592, obj_t BgL_optionals1117z00_2593,
		obj_t BgL_keys1118z00_2594, obj_t BgL_thezd2closurezd2global1119z00_2595,
		obj_t BgL_strength1120z00_2596, obj_t BgL_stackable1121z00_2597,
		obj_t BgL_originalzd2body1122zd2_2598,
		obj_t BgL_recursivezd2calls1123zd2_2599, obj_t BgL_tailrec1124z00_2600)
	{
		{	/* Inline/inline.scm 28 */
			{	/* Inline/inline.scm 28 */
				long BgL_arity1101z00_2786;
				bool_t BgL_topzf31105zf3_2787;
				bool_t BgL_tailrec1124z00_2790;

				BgL_arity1101z00_2786 = (long) CINT(BgL_arity1101z00_2577);
				BgL_topzf31105zf3_2787 = CBOOL(BgL_topzf31105zf3_2581);
				BgL_tailrec1124z00_2790 = CBOOL(BgL_tailrec1124z00_2600);
				{	/* Inline/inline.scm 28 */
					BgL_sfunz00_bglt BgL_new1176z00_2791;

					{	/* Inline/inline.scm 28 */
						BgL_sfunz00_bglt BgL_tmp1174z00_2792;
						BgL_isfunz00_bglt BgL_wide1175z00_2793;

						{
							BgL_sfunz00_bglt BgL_auxz00_3486;

							{	/* Inline/inline.scm 28 */
								BgL_sfunz00_bglt BgL_new1173z00_2794;

								BgL_new1173z00_2794 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Inline/inline.scm 28 */
									long BgL_arg1552z00_2795;

									{	/* Inline/inline.scm 28 */
										long BgL_res1947z00_2796;

										BgL_res1947z00_2796 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg1552z00_2795 = BgL_res1947z00_2796;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1173z00_2794),
										BgL_arg1552z00_2795);
								}
								{	/* Inline/inline.scm 28 */
									BgL_objectz00_bglt BgL_tmpz00_3491;

									BgL_tmpz00_3491 = ((BgL_objectz00_bglt) BgL_new1173z00_2794);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3491, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1173z00_2794);
								BgL_auxz00_3486 = BgL_new1173z00_2794;
							}
							BgL_tmp1174z00_2792 = ((BgL_sfunz00_bglt) BgL_auxz00_3486);
						}
						BgL_wide1175z00_2793 =
							((BgL_isfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_isfunz00_bgl))));
						{	/* Inline/inline.scm 28 */
							obj_t BgL_auxz00_3499;
							BgL_objectz00_bglt BgL_tmpz00_3497;

							BgL_auxz00_3499 = ((obj_t) BgL_wide1175z00_2793);
							BgL_tmpz00_3497 = ((BgL_objectz00_bglt) BgL_tmp1174z00_2792);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3497, BgL_auxz00_3499);
						}
						((BgL_objectz00_bglt) BgL_tmp1174z00_2792);
						{	/* Inline/inline.scm 28 */
							long BgL_arg1540z00_2797;

							{	/* Inline/inline.scm 28 */
								long BgL_res1948z00_2798;

								BgL_res1948z00_2798 =
									BGL_CLASS_INDEX(BGl_isfunz00zzinline_inlinez00);
								BgL_arg1540z00_2797 = BgL_res1948z00_2798;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1174z00_2792),
								BgL_arg1540z00_2797);
						}
						BgL_new1176z00_2791 = ((BgL_sfunz00_bglt) BgL_tmp1174z00_2792);
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1176z00_2791)))->BgL_arityz00) =
						((long) BgL_arity1101z00_2786), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1102zd2_2578), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1103zd2_2579), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1104zd2_2580), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31105zf3_2787), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1106zd2_2582), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_effectz00) =
						((obj_t) BgL_effect1107z00_2583), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1108z00_2584), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1176z00_2791)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1109zd2_2585), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_propertyz00) =
						((obj_t) BgL_property1110z00_2586), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_argsz00) =
						((obj_t) BgL_args1111z00_2587), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1112zd2_2588), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_bodyz00) =
						((obj_t) BgL_body1113z00_2589), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_classz00) =
						((obj_t) BgL_class1114z00_2590), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1115zd2_2591), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_locz00) =
						((obj_t) BgL_loc1116z00_2592), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_optionalsz00) =
						((obj_t) BgL_optionals1117z00_2593), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_keysz00) =
						((obj_t) BgL_keys1118z00_2594), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1119z00_2595), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1120z00_2596)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1176z00_2791)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1121z00_2597), BUNSPEC);
					{
						BgL_isfunz00_bglt BgL_auxz00_3550;

						{
							obj_t BgL_auxz00_3551;

							{	/* Inline/inline.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_3552;

								BgL_tmpz00_3552 = ((BgL_objectz00_bglt) BgL_new1176z00_2791);
								BgL_auxz00_3551 = BGL_OBJECT_WIDENING(BgL_tmpz00_3552);
							}
							BgL_auxz00_3550 = ((BgL_isfunz00_bglt) BgL_auxz00_3551);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3550))->
								BgL_originalzd2bodyzd2) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
									BgL_originalzd2body1122zd2_2598)), BUNSPEC);
					}
					{
						BgL_isfunz00_bglt BgL_auxz00_3558;

						{
							obj_t BgL_auxz00_3559;

							{	/* Inline/inline.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_3560;

								BgL_tmpz00_3560 = ((BgL_objectz00_bglt) BgL_new1176z00_2791);
								BgL_auxz00_3559 = BGL_OBJECT_WIDENING(BgL_tmpz00_3560);
							}
							BgL_auxz00_3558 = ((BgL_isfunz00_bglt) BgL_auxz00_3559);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3558))->
								BgL_recursivezd2callszd2) =
							((obj_t) BgL_recursivezd2calls1123zd2_2599), BUNSPEC);
					}
					{
						BgL_isfunz00_bglt BgL_auxz00_3565;

						{
							obj_t BgL_auxz00_3566;

							{	/* Inline/inline.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_3567;

								BgL_tmpz00_3567 = ((BgL_objectz00_bglt) BgL_new1176z00_2791);
								BgL_auxz00_3566 = BGL_OBJECT_WIDENING(BgL_tmpz00_3567);
							}
							BgL_auxz00_3565 = ((BgL_isfunz00_bglt) BgL_auxz00_3566);
						}
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3565))->BgL_tailrecz00) =
							((bool_t) BgL_tailrec1124z00_2790), BUNSPEC);
					}
					return BgL_new1176z00_2791;
				}
			}
		}

	}



/* &<@anonymous:1607> */
	obj_t BGl_z62zc3z04anonymousza31607ze3ze5zzinline_inlinez00(obj_t
		BgL_envz00_2601)
	{
		{	/* Inline/inline.scm 28 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1606 */
	obj_t BGl_z62lambda1606z62zzinline_inlinez00(obj_t BgL_envz00_2602,
		obj_t BgL_oz00_2603, obj_t BgL_vz00_2604)
	{
		{	/* Inline/inline.scm 28 */
			{	/* Inline/inline.scm 28 */
				bool_t BgL_vz00_2800;

				BgL_vz00_2800 = CBOOL(BgL_vz00_2604);
				{
					BgL_isfunz00_bglt BgL_auxz00_3574;

					{
						obj_t BgL_auxz00_3575;

						{	/* Inline/inline.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3576;

							BgL_tmpz00_3576 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2603));
							BgL_auxz00_3575 = BGL_OBJECT_WIDENING(BgL_tmpz00_3576);
						}
						BgL_auxz00_3574 = ((BgL_isfunz00_bglt) BgL_auxz00_3575);
					}
					return
						((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3574))->BgL_tailrecz00) =
						((bool_t) BgL_vz00_2800), BUNSPEC);
				}
			}
		}

	}



/* &lambda1605 */
	obj_t BGl_z62lambda1605z62zzinline_inlinez00(obj_t BgL_envz00_2605,
		obj_t BgL_oz00_2606)
	{
		{	/* Inline/inline.scm 28 */
			{	/* Inline/inline.scm 28 */
				bool_t BgL_tmpz00_3582;

				{
					BgL_isfunz00_bglt BgL_auxz00_3583;

					{
						obj_t BgL_auxz00_3584;

						{	/* Inline/inline.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_3585;

							BgL_tmpz00_3585 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2606));
							BgL_auxz00_3584 = BGL_OBJECT_WIDENING(BgL_tmpz00_3585);
						}
						BgL_auxz00_3583 = ((BgL_isfunz00_bglt) BgL_auxz00_3584);
					}
					BgL_tmpz00_3582 =
						(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3583))->BgL_tailrecz00);
				}
				return BBOOL(BgL_tmpz00_3582);
			}
		}

	}



/* &<@anonymous:1592> */
	obj_t BGl_z62zc3z04anonymousza31592ze3ze5zzinline_inlinez00(obj_t
		BgL_envz00_2607)
	{
		{	/* Inline/inline.scm 28 */
			return BUNSPEC;
		}

	}



/* &lambda1591 */
	obj_t BGl_z62lambda1591z62zzinline_inlinez00(obj_t BgL_envz00_2608,
		obj_t BgL_oz00_2609, obj_t BgL_vz00_2610)
	{
		{	/* Inline/inline.scm 28 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3592;

				{
					obj_t BgL_auxz00_3593;

					{	/* Inline/inline.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_3594;

						BgL_tmpz00_3594 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2609));
						BgL_auxz00_3593 = BGL_OBJECT_WIDENING(BgL_tmpz00_3594);
					}
					BgL_auxz00_3592 = ((BgL_isfunz00_bglt) BgL_auxz00_3593);
				}
				return
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3592))->
						BgL_recursivezd2callszd2) = ((obj_t) BgL_vz00_2610), BUNSPEC);
			}
		}

	}



/* &lambda1590 */
	obj_t BGl_z62lambda1590z62zzinline_inlinez00(obj_t BgL_envz00_2611,
		obj_t BgL_oz00_2612)
	{
		{	/* Inline/inline.scm 28 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3600;

				{
					obj_t BgL_auxz00_3601;

					{	/* Inline/inline.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_3602;

						BgL_tmpz00_3602 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2612));
						BgL_auxz00_3601 = BGL_OBJECT_WIDENING(BgL_tmpz00_3602);
					}
					BgL_auxz00_3600 = ((BgL_isfunz00_bglt) BgL_auxz00_3601);
				}
				return
					(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3600))->
					BgL_recursivezd2callszd2);
			}
		}

	}



/* &lambda1580 */
	obj_t BGl_z62lambda1580z62zzinline_inlinez00(obj_t BgL_envz00_2613,
		obj_t BgL_oz00_2614, obj_t BgL_vz00_2615)
	{
		{	/* Inline/inline.scm 28 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3608;

				{
					obj_t BgL_auxz00_3609;

					{	/* Inline/inline.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_3610;

						BgL_tmpz00_3610 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2614));
						BgL_auxz00_3609 = BGL_OBJECT_WIDENING(BgL_tmpz00_3610);
					}
					BgL_auxz00_3608 = ((BgL_isfunz00_bglt) BgL_auxz00_3609);
				}
				return
					((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3608))->
						BgL_originalzd2bodyzd2) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_vz00_2615)), BUNSPEC);
			}
		}

	}



/* &lambda1579 */
	BgL_nodez00_bglt BGl_z62lambda1579z62zzinline_inlinez00(obj_t BgL_envz00_2616,
		obj_t BgL_oz00_2617)
	{
		{	/* Inline/inline.scm 28 */
			{
				BgL_isfunz00_bglt BgL_auxz00_3617;

				{
					obj_t BgL_auxz00_3618;

					{	/* Inline/inline.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_3619;

						BgL_tmpz00_3619 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_2617));
						BgL_auxz00_3618 = BGL_OBJECT_WIDENING(BgL_tmpz00_3619);
					}
					BgL_auxz00_3617 = ((BgL_isfunz00_bglt) BgL_auxz00_3618);
				}
				return
					(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3617))->
					BgL_originalzd2bodyzd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_proc2002z00zzinline_inlinez00, BGl_nodez00zzast_nodez00,
				BGl_string2003z00zzinline_inlinez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_disablezd2inliningz12zd2envz12zzinline_inlinez00,
				BGl_proc2004z00zzinline_inlinez00, BGl_nodez00zzast_nodez00,
				BGl_string2005z00zzinline_inlinez00);
		}

	}



/* &disable-inlining!1350 */
	obj_t BGl_z62disablezd2inliningz121350za2zzinline_inlinez00(obj_t
		BgL_envz00_2622, obj_t BgL_nz00_2623)
	{
		{	/* Inline/inline.scm 297 */
			return
				((obj_t)
				BGl_walk0z12z12zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nz00_2623),
					BGl_disablezd2inliningz12zd2envz12zzinline_inlinez00));
		}

	}



/* &inline-node1301 */
	obj_t BGl_z62inlinezd2node1301zb0zzinline_inlinez00(obj_t BgL_envz00_2624,
		obj_t BgL_nodez00_2625, obj_t BgL_kfactorz00_2626, obj_t BgL_stackz00_2627)
	{
		{	/* Inline/inline.scm 70 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 12)),
				BGl_string2006z00zzinline_inlinez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2625)));
		}

	}



/* inline-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt BgL_nodez00_95,
		long BgL_kfactorz00_96, obj_t BgL_stackz00_97)
	{
		{	/* Inline/inline.scm 70 */
			{	/* Inline/inline.scm 70 */
				obj_t BgL_method1302z00_1657;

				{	/* Inline/inline.scm 70 */
					obj_t BgL_res1965z00_2289;

					{	/* Inline/inline.scm 70 */
						long BgL_objzd2classzd2numz00_2254;

						{	/* Inline/inline.scm 70 */
							long BgL_res1955z00_2257;

							BgL_res1955z00_2257 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_95));
							BgL_objzd2classzd2numz00_2254 = BgL_res1955z00_2257;
						}
						{	/* Inline/inline.scm 70 */
							obj_t BgL_arg1813z00_2255;

							BgL_arg1813z00_2255 =
								PROCEDURE_REF(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
								(int) (((long) 1)));
							{	/* Inline/inline.scm 70 */
								int BgL_offsetz00_2259;

								BgL_offsetz00_2259 = (int) (BgL_objzd2classzd2numz00_2254);
								{	/* Inline/inline.scm 70 */
									long BgL_offsetz00_2260;

									BgL_offsetz00_2260 =
										((long) (BgL_offsetz00_2259) - OBJECT_TYPE);
									{	/* Inline/inline.scm 70 */
										long BgL_modz00_2261;

										BgL_modz00_2261 =
											(BgL_offsetz00_2260 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/inline.scm 70 */
											long BgL_restz00_2263;

											BgL_restz00_2263 =
												(BgL_offsetz00_2260 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/inline.scm 70 */

												{	/* Inline/inline.scm 70 */
													obj_t BgL_bucketz00_2265;

													BgL_bucketz00_2265 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2255), BgL_modz00_2261);
													BgL_res1965z00_2289 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2265), BgL_restz00_2263);
					}}}}}}}}
					BgL_method1302z00_1657 = BgL_res1965z00_2289;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1302z00_1657) (BgL_method1302z00_1657,
						((obj_t) BgL_nodez00_95),
						BINT(BgL_kfactorz00_96), BgL_stackz00_97, BEOA));
			}
		}

	}



/* &inline-node */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezb0zzinline_inlinez00(obj_t
		BgL_envz00_2628, obj_t BgL_nodez00_2629, obj_t BgL_kfactorz00_2630,
		obj_t BgL_stackz00_2631)
	{
		{	/* Inline/inline.scm 70 */
			return
				BGl_inlinezd2nodezd2zzinline_inlinez00(
				((BgL_nodez00_bglt) BgL_nodez00_2629),
				(long) CINT(BgL_kfactorz00_2630), BgL_stackz00_2631);
		}

	}



/* disable-inlining! */
	BgL_nodez00_bglt
		BGl_disablezd2inliningz12zc0zzinline_inlinez00(BgL_nodez00_bglt
		BgL_nz00_170)
	{
		{	/* Inline/inline.scm 297 */
			{	/* Inline/inline.scm 297 */
				obj_t BgL_method1352z00_1658;

				{	/* Inline/inline.scm 297 */
					obj_t BgL_res1978z00_2326;

					{	/* Inline/inline.scm 297 */
						long BgL_objzd2classzd2numz00_2291;

						{	/* Inline/inline.scm 297 */
							long BgL_res1967z00_2294;

							BgL_res1967z00_2294 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_170));
							BgL_objzd2classzd2numz00_2291 = BgL_res1967z00_2294;
						}
						{	/* Inline/inline.scm 297 */
							obj_t BgL_arg1813z00_2292;

							BgL_arg1813z00_2292 =
								PROCEDURE_REF
								(BGl_disablezd2inliningz12zd2envz12zzinline_inlinez00,
								(int) (((long) 1)));
							{	/* Inline/inline.scm 297 */
								int BgL_offsetz00_2296;

								BgL_offsetz00_2296 = (int) (BgL_objzd2classzd2numz00_2291);
								{	/* Inline/inline.scm 297 */
									long BgL_offsetz00_2297;

									BgL_offsetz00_2297 =
										((long) (BgL_offsetz00_2296) - OBJECT_TYPE);
									{	/* Inline/inline.scm 297 */
										long BgL_modz00_2298;

										BgL_modz00_2298 =
											(BgL_offsetz00_2297 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/inline.scm 297 */
											long BgL_restz00_2300;

											BgL_restz00_2300 =
												(BgL_offsetz00_2297 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/inline.scm 297 */

												{	/* Inline/inline.scm 297 */
													obj_t BgL_bucketz00_2302;

													BgL_bucketz00_2302 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2292), BgL_modz00_2298);
													BgL_res1978z00_2326 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2302), BgL_restz00_2300);
					}}}}}}}}
					BgL_method1352z00_1658 = BgL_res1978z00_2326;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1352z00_1658) (BgL_method1352z00_1658,
						((obj_t) BgL_nz00_170), BEOA));
			}
		}

	}



/* &disable-inlining! */
	BgL_nodez00_bglt BGl_z62disablezd2inliningz12za2zzinline_inlinez00(obj_t
		BgL_envz00_2619, obj_t BgL_nz00_2620)
	{
		{	/* Inline/inline.scm 297 */
			return
				BGl_disablezd2inliningz12zc0zzinline_inlinez00(
				((BgL_nodez00_bglt) BgL_nz00_2620));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_atomz00zzast_nodez00,
				BGl_proc2007z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_varz00zzast_nodez00,
				BGl_proc2009z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_kwotez00zzast_nodez00, BGl_proc2010z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_sequencez00zzast_nodez00, BGl_proc2011z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_syncz00zzast_nodez00,
				BGl_proc2012z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_appz00zzast_nodez00,
				BGl_proc2013z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2014z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_funcallz00zzast_nodez00, BGl_proc2015z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_externz00zzast_nodez00, BGl_proc2016z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_castz00zzast_nodez00,
				BGl_proc2017z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_setqz00zzast_nodez00,
				BGl_proc2018z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2019z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_failz00zzast_nodez00,
				BGl_proc2020z00zzinline_inlinez00, BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_switchz00zzast_nodez00, BGl_proc2021z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2022z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2023z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2024z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2025z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_retblockz00zzast_nodez00, BGl_proc2026z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_returnz00zzast_nodez00, BGl_proc2027z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2028z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2029z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2030z00zzinline_inlinez00,
				BGl_string2008z00zzinline_inlinez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_disablezd2inliningz12zd2envz12zzinline_inlinez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2031z00zzinline_inlinez00,
				BGl_string2032z00zzinline_inlinez00);
		}

	}



/* &disable-inlining!-le1354 */
	BgL_nodez00_bglt
		BGl_z62disablezd2inliningz12zd2le1354z70zzinline_inlinez00(obj_t
		BgL_envz00_2656, obj_t BgL_nz00_2657)
	{
		{	/* Inline/inline.scm 303 */
			{
				obj_t BgL_bodyz00_2812;

				{	/* Inline/inline.scm 311 */
					obj_t BgL_g1298z00_2813;

					BgL_g1298z00_2813 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nz00_2657)))->BgL_localsz00);
					{
						obj_t BgL_l1296z00_2815;

						BgL_l1296z00_2815 = BgL_g1298z00_2813;
					BgL_zc3z04anonymousza31862ze3z87_2814:
						if (PAIRP(BgL_l1296z00_2815))
							{	/* Inline/inline.scm 311 */
								{	/* Inline/inline.scm 312 */
									obj_t BgL_funz00_2816;

									BgL_funz00_2816 = CAR(BgL_l1296z00_2815);
									{	/* Inline/inline.scm 313 */
										BgL_sfunz00_bglt BgL_i1169z00_2817;

										BgL_i1169z00_2817 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_funz00_2816))))->
												BgL_valuez00));
										{	/* Inline/inline.scm 314 */
											obj_t BgL_arg1865z00_2818;

											BgL_arg1865z00_2818 =
												(((BgL_sfunz00_bglt) COBJECT(BgL_i1169z00_2817))->
												BgL_bodyz00);
											BGl_disablezd2inliningz12zc0zzinline_inlinez00((
													(BgL_nodez00_bglt) BgL_arg1865z00_2818));
										}
										{	/* Inline/inline.scm 315 */
											bool_t BgL_test2143z00_3740;

											{	/* Inline/inline.scm 315 */
												obj_t BgL_tmpz00_3741;

												BgL_bodyz00_2812 =
													(((BgL_sfunz00_bglt) COBJECT(BgL_i1169z00_2817))->
													BgL_bodyz00);
												if (BGl_isazf3zf3zz__objectz00(BgL_bodyz00_2812,
														BGl_sequencez00zzast_nodez00))
													{	/* Inline/inline.scm 306 */
														BgL_tmpz00_3741 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 13)),
															(((BgL_sequencez00_bglt)
																	COBJECT(((BgL_sequencez00_bglt)
																			BgL_bodyz00_2812)))->BgL_metaz00));
													}
												else
													{	/* Inline/inline.scm 306 */
														BgL_tmpz00_3741 = BFALSE;
													}
												BgL_test2143z00_3740 = CBOOL(BgL_tmpz00_3741);
											}
											if (BgL_test2143z00_3740)
												{	/* Inline/inline.scm 315 */
													BFALSE;
												}
											else
												{	/* Inline/inline.scm 316 */
													BgL_nodez00_bglt BgL_i1170z00_2819;

													BgL_i1170z00_2819 =
														((BgL_nodez00_bglt)
														(((BgL_sfunz00_bglt) COBJECT(BgL_i1169z00_2817))->
															BgL_bodyz00));
													{
														obj_t BgL_auxz00_3752;

														{	/* Inline/inline.scm 318 */
															BgL_sequencez00_bglt BgL_new1172z00_2820;

															{	/* Inline/inline.scm 321 */
																BgL_sequencez00_bglt BgL_new1171z00_2821;

																BgL_new1171z00_2821 =
																	((BgL_sequencez00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_sequencez00_bgl))));
																{	/* Inline/inline.scm 321 */
																	long BgL_arg1870z00_2822;

																	{	/* Inline/inline.scm 321 */
																		long BgL_res1988z00_2823;

																		{	/* Inline/inline.scm 321 */
																			obj_t BgL_classz00_2824;

																			BgL_classz00_2824 =
																				BGl_sequencez00zzast_nodez00;
																			BgL_res1988z00_2823 =
																				BGL_CLASS_INDEX(BgL_classz00_2824);
																		}
																		BgL_arg1870z00_2822 = BgL_res1988z00_2823;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1171z00_2821),
																		BgL_arg1870z00_2822);
																}
																{	/* Inline/inline.scm 321 */
																	BgL_objectz00_bglt BgL_tmpz00_3757;

																	BgL_tmpz00_3757 =
																		((BgL_objectz00_bglt) BgL_new1171z00_2821);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3757,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1171z00_2821);
																BgL_new1172z00_2820 = BgL_new1171z00_2821;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1172z00_2820)))->BgL_locz00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1172z00_2820)))->BgL_typez00) =
																((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																			COBJECT(BgL_i1170z00_2819))->
																		BgL_typez00)), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1172z00_2820)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1172z00_2820)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															{
																obj_t BgL_auxz00_3771;

																{	/* Inline/inline.scm 319 */
																	obj_t BgL_arg1868z00_2825;

																	BgL_arg1868z00_2825 =
																		(((BgL_sfunz00_bglt)
																			COBJECT(BgL_i1169z00_2817))->BgL_bodyz00);
																	{	/* Inline/inline.scm 319 */
																		obj_t BgL_list1869z00_2826;

																		BgL_list1869z00_2826 =
																			MAKE_YOUNG_PAIR(BgL_arg1868z00_2825,
																			BNIL);
																		BgL_auxz00_3771 = BgL_list1869z00_2826;
																}}
																((((BgL_sequencez00_bglt)
																			COBJECT(BgL_new1172z00_2820))->
																		BgL_nodesz00) =
																	((obj_t) BgL_auxz00_3771), BUNSPEC);
															}
															((((BgL_sequencez00_bglt)
																		COBJECT(BgL_new1172z00_2820))->
																	BgL_unsafez00) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
															((((BgL_sequencez00_bglt)
																		COBJECT(BgL_new1172z00_2820))->
																	BgL_metaz00) =
																((obj_t) CNST_TABLE_REF(((long) 14))), BUNSPEC);
															BgL_auxz00_3752 = ((obj_t) BgL_new1172z00_2820);
														}
														((((BgL_sfunz00_bglt) COBJECT(BgL_i1169z00_2817))->
																BgL_bodyz00) =
															((obj_t) BgL_auxz00_3752), BUNSPEC);
								}}}}}
								{
									obj_t BgL_l1296z00_3780;

									BgL_l1296z00_3780 = CDR(BgL_l1296z00_2815);
									BgL_l1296z00_2815 = BgL_l1296z00_3780;
									goto BgL_zc3z04anonymousza31862ze3z87_2814;
								}
							}
						else
							{	/* Inline/inline.scm 311 */
								((bool_t) 1);
							}
					}
				}
				{
					BgL_nodez00_bglt BgL_auxz00_3782;

					{	/* Inline/inline.scm 323 */
						BgL_nodez00_bglt BgL_arg1873z00_2827;

						BgL_arg1873z00_2827 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_2657)))->BgL_bodyz00);
						BgL_auxz00_3782 =
							BGl_disablezd2inliningz12zc0zzinline_inlinez00
							(BgL_arg1873z00_2827);
					}
					((((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nz00_2657)))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3782), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nz00_2657));
			}
		}

	}



/* &inline-node-box-set!1349 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2boxzd2setz121349za2zzinline_inlinez00(obj_t
		BgL_envz00_2658, obj_t BgL_nodez00_2659, obj_t BgL_kfactorz00_2660,
		obj_t BgL_stackz00_2661)
	{
		{	/* Inline/inline.scm 278 */
			{
				BgL_varz00_bglt BgL_auxz00_3790;

				{	/* Inline/inline.scm 280 */
					BgL_varz00_bglt BgL_arg1859z00_2829;

					BgL_arg1859z00_2829 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2659)))->BgL_varz00);
					BgL_auxz00_3790 =
						((BgL_varz00_bglt)
						BGl_inlinezd2nodezd2zzinline_inlinez00(
							((BgL_nodez00_bglt) BgL_arg1859z00_2829),
							(long) CINT(BgL_kfactorz00_2660), BgL_stackz00_2661));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2659)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3790), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3799;

				{	/* Inline/inline.scm 281 */
					BgL_nodez00_bglt BgL_arg1861z00_2830;

					BgL_arg1861z00_2830 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2659)))->BgL_valuez00);
					BgL_auxz00_3799 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1861z00_2830,
						(long) CINT(BgL_kfactorz00_2660), BgL_stackz00_2661);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2659)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3799), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2659));
		}

	}



/* &inline-node-box-ref1347 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2boxzd2ref1347zb0zzinline_inlinez00(obj_t
		BgL_envz00_2662, obj_t BgL_nodez00_2663, obj_t BgL_kfactorz00_2664,
		obj_t BgL_stackz00_2665)
	{
		{	/* Inline/inline.scm 271 */
			{	/* Inline/inline.scm 272 */
				BgL_nodez00_bglt BgL_arg1857z00_2832;

				{	/* Inline/inline.scm 272 */
					BgL_varz00_bglt BgL_arg1858z00_2833;

					BgL_arg1858z00_2833 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2663)))->BgL_varz00);
					BgL_arg1857z00_2832 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(
						((BgL_nodez00_bglt) BgL_arg1858z00_2833),
						(long) CINT(BgL_kfactorz00_2664), BgL_stackz00_2665);
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2663)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1857z00_2832)), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2663));
		}

	}



/* &inline-node-make-box1345 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2makezd2box1345zb0zzinline_inlinez00(obj_t
		BgL_envz00_2666, obj_t BgL_nodez00_2667, obj_t BgL_kfactorz00_2668,
		obj_t BgL_stackz00_2669)
	{
		{	/* Inline/inline.scm 264 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2667)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_2667)))->
							BgL_valuez00), (long) CINT(BgL_kfactorz00_2668),
						BgL_stackz00_2669)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2667));
		}

	}



/* &inline-node-return1343 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2return1343z62zzinline_inlinez00(obj_t
		BgL_envz00_2670, obj_t BgL_nodez00_2671, obj_t BgL_kfactorz00_2672,
		obj_t BgL_stackz00_2673)
	{
		{	/* Inline/inline.scm 257 */
			((((BgL_returnz00_bglt) COBJECT(
							((BgL_returnz00_bglt) BgL_nodez00_2671)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_returnz00_bglt)
								COBJECT(((BgL_returnz00_bglt) BgL_nodez00_2671)))->
							BgL_valuez00), (long) CINT(BgL_kfactorz00_2672),
						BgL_stackz00_2673)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_returnz00_bglt) BgL_nodez00_2671));
		}

	}



/* &inline-node-retblock1341 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2retblock1341z62zzinline_inlinez00(obj_t
		BgL_envz00_2674, obj_t BgL_nodez00_2675, obj_t BgL_kfactorz00_2676,
		obj_t BgL_stackz00_2677)
	{
		{	/* Inline/inline.scm 250 */
			((((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nodez00_2675)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_retblockz00_bglt)
								COBJECT(((BgL_retblockz00_bglt) BgL_nodez00_2675)))->
							BgL_bodyz00), (long) CINT(BgL_kfactorz00_2676),
						BgL_stackz00_2677)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_retblockz00_bglt) BgL_nodez00_2675));
		}

	}



/* &inline-node-jump-ex-1339 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2jumpzd2exzd21339z62zzinline_inlinez00(obj_t
		BgL_envz00_2678, obj_t BgL_nodez00_2679, obj_t BgL_kfactorz00_2680,
		obj_t BgL_stackz00_2681)
	{
		{	/* Inline/inline.scm 241 */
			{
				BgL_nodez00_bglt BgL_auxz00_3842;

				{	/* Inline/inline.scm 243 */
					BgL_nodez00_bglt BgL_arg1847z00_2838;

					BgL_arg1847z00_2838 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2679)))->BgL_exitz00);
					BgL_auxz00_3842 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1847z00_2838,
						(long) CINT(BgL_kfactorz00_2680), BgL_stackz00_2681);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2679)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3842), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3849;

				{	/* Inline/inline.scm 244 */
					BgL_nodez00_bglt BgL_arg1848z00_2839;

					BgL_arg1848z00_2839 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2679)))->
						BgL_valuez00);
					BgL_auxz00_3849 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1848z00_2839,
						(long) CINT(BgL_kfactorz00_2680), BgL_stackz00_2681);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2679)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3849), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2679));
		}

	}



/* &inline-node-set-ex-i1337 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2setzd2exzd2i1337z62zzinline_inlinez00(obj_t
		BgL_envz00_2682, obj_t BgL_nodez00_2683, obj_t BgL_kfactorz00_2684,
		obj_t BgL_stackz00_2685)
	{
		{	/* Inline/inline.scm 234 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2683)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2683)))->
							BgL_bodyz00), (long) CINT(BgL_kfactorz00_2684),
						BgL_stackz00_2685)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2683));
		}

	}



/* &inline-node-let-var1335 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2letzd2var1335zb0zzinline_inlinez00(obj_t
		BgL_envz00_2686, obj_t BgL_nodez00_2687, obj_t BgL_kfactorz00_2688,
		obj_t BgL_stackz00_2689)
	{
		{	/* Inline/inline.scm 222 */
			{	/* Inline/inline.scm 223 */
				obj_t BgL_g1295z00_2842;

				BgL_g1295z00_2842 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2687)))->BgL_bindingsz00);
				{
					obj_t BgL_l1293z00_2844;

					BgL_l1293z00_2844 = BgL_g1295z00_2842;
				BgL_zc3z04anonymousza31834ze3z87_2843:
					if (PAIRP(BgL_l1293z00_2844))
						{	/* Inline/inline.scm 227 */
							{	/* Inline/inline.scm 225 */
								obj_t BgL_bindingz00_2845;

								BgL_bindingz00_2845 = CAR(BgL_l1293z00_2844);
								{	/* Inline/inline.scm 226 */
									BgL_nodez00_bglt BgL_arg1836z00_2846;

									{	/* Inline/inline.scm 226 */
										obj_t BgL_arg1838z00_2847;

										BgL_arg1838z00_2847 = CDR(((obj_t) BgL_bindingz00_2845));
										BgL_arg1836z00_2846 =
											BGl_inlinezd2nodezd2zzinline_inlinez00(
											((BgL_nodez00_bglt) BgL_arg1838z00_2847),
											(long) CINT(BgL_kfactorz00_2688), BgL_stackz00_2689);
									}
									{	/* Inline/inline.scm 226 */
										obj_t BgL_auxz00_3878;
										obj_t BgL_tmpz00_3876;

										BgL_auxz00_3878 = ((obj_t) BgL_arg1836z00_2846);
										BgL_tmpz00_3876 = ((obj_t) BgL_bindingz00_2845);
										SET_CDR(BgL_tmpz00_3876, BgL_auxz00_3878);
							}}}
							{
								obj_t BgL_l1293z00_3881;

								BgL_l1293z00_3881 = CDR(BgL_l1293z00_2844);
								BgL_l1293z00_2844 = BgL_l1293z00_3881;
								goto BgL_zc3z04anonymousza31834ze3z87_2843;
							}
						}
					else
						{	/* Inline/inline.scm 227 */
							((bool_t) 1);
						}
				}
			}
			((((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2687)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_letzd2varzd2_bglt)
								COBJECT(((BgL_letzd2varzd2_bglt) BgL_nodez00_2687)))->
							BgL_bodyz00), (long) CINT(BgL_kfactorz00_2688),
						BgL_stackz00_2689)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2687));
		}

	}



/* &inline-node-let-fun1332 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2letzd2fun1332zb0zzinline_inlinez00(obj_t
		BgL_envz00_2690, obj_t BgL_nodez00_2691, obj_t BgL_kfactorz00_2692,
		obj_t BgL_stackz00_2693)
	{
		{	/* Inline/inline.scm 207 */
			{	/* Inline/inline.scm 211 */
				obj_t BgL_g1292z00_2849;

				BgL_g1292z00_2849 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2691)))->BgL_localsz00);
				{
					obj_t BgL_l1290z00_2851;

					BgL_l1290z00_2851 = BgL_g1292z00_2849;
				BgL_zc3z04anonymousza31829ze3z87_2850:
					if (PAIRP(BgL_l1290z00_2851))
						{	/* Inline/inline.scm 213 */
							{	/* Inline/inline.scm 212 */
								obj_t BgL_localz00_2852;

								BgL_localz00_2852 = CAR(BgL_l1290z00_2851);
								BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
									((BgL_variablez00_bglt) BgL_localz00_2852),
									(long) CINT(BgL_kfactorz00_2692), BgL_stackz00_2693);
							}
							{
								obj_t BgL_l1290z00_3899;

								BgL_l1290z00_3899 = CDR(BgL_l1290z00_2851);
								BgL_l1290z00_2851 = BgL_l1290z00_3899;
								goto BgL_zc3z04anonymousza31829ze3z87_2850;
							}
						}
					else
						{	/* Inline/inline.scm 213 */
							((bool_t) 1);
						}
				}
			}
			((((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2691)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_letzd2funzd2_bglt)
								COBJECT(((BgL_letzd2funzd2_bglt) BgL_nodez00_2691)))->
							BgL_bodyz00), (long) CINT(BgL_kfactorz00_2692),
						BgL_stackz00_2693)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2691));
		}

	}



/* &inline-node-switch1330 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2switch1330z62zzinline_inlinez00(obj_t
		BgL_envz00_2694, obj_t BgL_nodez00_2695, obj_t BgL_kfactorz00_2696,
		obj_t BgL_stackz00_2697)
	{
		{	/* Inline/inline.scm 197 */
			((((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2695)))->BgL_testz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_switchz00_bglt)
								COBJECT(((BgL_switchz00_bglt) BgL_nodez00_2695)))->BgL_testz00),
						(long) CINT(BgL_kfactorz00_2696), BgL_stackz00_2697)), BUNSPEC);
			{	/* Inline/inline.scm 199 */
				obj_t BgL_g1289z00_2854;

				BgL_g1289z00_2854 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2695)))->BgL_clausesz00);
				{
					obj_t BgL_l1287z00_2856;

					BgL_l1287z00_2856 = BgL_g1289z00_2854;
				BgL_zc3z04anonymousza31824ze3z87_2855:
					if (PAIRP(BgL_l1287z00_2856))
						{	/* Inline/inline.scm 201 */
							{	/* Inline/inline.scm 200 */
								obj_t BgL_clausez00_2857;

								BgL_clausez00_2857 = CAR(BgL_l1287z00_2856);
								{	/* Inline/inline.scm 200 */
									BgL_nodez00_bglt BgL_arg1826z00_2858;

									{	/* Inline/inline.scm 200 */
										obj_t BgL_arg1827z00_2859;

										BgL_arg1827z00_2859 = CDR(((obj_t) BgL_clausez00_2857));
										BgL_arg1826z00_2858 =
											BGl_inlinezd2nodezd2zzinline_inlinez00(
											((BgL_nodez00_bglt) BgL_arg1827z00_2859),
											(long) CINT(BgL_kfactorz00_2696), BgL_stackz00_2697);
									}
									{	/* Inline/inline.scm 200 */
										obj_t BgL_auxz00_3927;
										obj_t BgL_tmpz00_3925;

										BgL_auxz00_3927 = ((obj_t) BgL_arg1826z00_2858);
										BgL_tmpz00_3925 = ((obj_t) BgL_clausez00_2857);
										SET_CDR(BgL_tmpz00_3925, BgL_auxz00_3927);
							}}}
							{
								obj_t BgL_l1287z00_3930;

								BgL_l1287z00_3930 = CDR(BgL_l1287z00_2856);
								BgL_l1287z00_2856 = BgL_l1287z00_3930;
								goto BgL_zc3z04anonymousza31824ze3z87_2855;
							}
						}
					else
						{	/* Inline/inline.scm 201 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2695));
		}

	}



/* &inline-node-fail1328 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2fail1328z62zzinline_inlinez00(obj_t
		BgL_envz00_2698, obj_t BgL_nodez00_2699, obj_t BgL_kfactorz00_2700,
		obj_t BgL_stackz00_2701)
	{
		{	/* Inline/inline.scm 187 */
			{
				BgL_nodez00_bglt BgL_auxz00_3934;

				{	/* Inline/inline.scm 189 */
					BgL_nodez00_bglt BgL_arg1811z00_2861;

					BgL_arg1811z00_2861 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_procz00);
					BgL_auxz00_3934 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1811z00_2861,
						(long) CINT(BgL_kfactorz00_2700), BgL_stackz00_2701);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3934), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3941;

				{	/* Inline/inline.scm 190 */
					BgL_nodez00_bglt BgL_arg1820z00_2862;

					BgL_arg1820z00_2862 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_msgz00);
					BgL_auxz00_3941 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1820z00_2862,
						(long) CINT(BgL_kfactorz00_2700), BgL_stackz00_2701);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3941), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3948;

				{	/* Inline/inline.scm 191 */
					BgL_nodez00_bglt BgL_arg1821z00_2863;

					BgL_arg1821z00_2863 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_objz00);
					BgL_auxz00_3948 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1821z00_2863,
						(long) CINT(BgL_kfactorz00_2700), BgL_stackz00_2701);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2699)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3948), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2699));
		}

	}



/* &inline-node-conditio1326 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2conditio1326z62zzinline_inlinez00(obj_t
		BgL_envz00_2702, obj_t BgL_nodez00_2703, obj_t BgL_kfactorz00_2704,
		obj_t BgL_stackz00_2705)
	{
		{	/* Inline/inline.scm 175 */
			{
				BgL_nodez00_bglt BgL_auxz00_3957;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1801z00_2865;

					BgL_arg1801z00_2865 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_testz00);
					BgL_auxz00_3957 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1801z00_2865,
						(long) CINT(BgL_kfactorz00_2704), BgL_stackz00_2705);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3957), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3964;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1808z00_2866;

					BgL_arg1808z00_2866 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_truez00);
					BgL_auxz00_3964 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1808z00_2866,
						(long) CINT(BgL_kfactorz00_2704), BgL_stackz00_2705);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3964), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3971;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1809z00_2867;

					BgL_arg1809z00_2867 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_falsez00);
					BgL_auxz00_3971 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1809z00_2867,
						(long) CINT(BgL_kfactorz00_2704), BgL_stackz00_2705);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2703)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3971), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2703));
		}

	}



/* &inline-node-setq1324 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2setq1324z62zzinline_inlinez00(obj_t
		BgL_envz00_2706, obj_t BgL_nodez00_2707, obj_t BgL_kfactorz00_2708,
		obj_t BgL_stackz00_2709)
	{
		{	/* Inline/inline.scm 168 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2707)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_2707)))->BgL_valuez00),
						(long) CINT(BgL_kfactorz00_2708), BgL_stackz00_2709)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2707));
		}

	}



/* &inline-node-cast1322 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2cast1322z62zzinline_inlinez00(obj_t
		BgL_envz00_2710, obj_t BgL_nodez00_2711, obj_t BgL_kfactorz00_2712,
		obj_t BgL_stackz00_2713)
	{
		{	/* Inline/inline.scm 161 */
			((((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2711)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_castz00_bglt)
								COBJECT(((BgL_castz00_bglt) BgL_nodez00_2711)))->BgL_argz00),
						(long) CINT(BgL_kfactorz00_2712), BgL_stackz00_2713)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2711));
		}

	}



/* &inline-node-extern1320 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2extern1320z62zzinline_inlinez00(obj_t
		BgL_envz00_2714, obj_t BgL_nodez00_2715, obj_t BgL_kfactorz00_2716,
		obj_t BgL_stackz00_2717)
	{
		{	/* Inline/inline.scm 154 */
			BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2715)))->BgL_exprza2za2),
				BgL_kfactorz00_2716, BgL_stackz00_2717);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2715));
		}

	}



/* &inline-node-funcall1318 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2funcall1318z62zzinline_inlinez00(obj_t
		BgL_envz00_2718, obj_t BgL_nodez00_2719, obj_t BgL_kfactorz00_2720,
		obj_t BgL_stackz00_2721)
	{
		{	/* Inline/inline.scm 144 */
			BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
				ADDFX(BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00,
				BINT(((long) 1)));
			((((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2719)))->BgL_funz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_funcallz00_bglt)
								COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_2719)))->BgL_funz00),
						(long) CINT(BgL_kfactorz00_2720), BgL_stackz00_2721)), BUNSPEC);
			BGl_inlinezd2nodeza2z12z62zzinline_inlinez00((((BgL_funcallz00_bglt)
						COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_2719)))->BgL_argsz00),
				BgL_kfactorz00_2720, BgL_stackz00_2721);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2719));
		}

	}



/* &inline-node-app-ly1316 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2appzd2ly1316zb0zzinline_inlinez00(obj_t
		BgL_envz00_2722, obj_t BgL_nodez00_2723, obj_t BgL_kfactorz00_2724,
		obj_t BgL_stackz00_2725)
	{
		{	/* Inline/inline.scm 135 */
			{
				BgL_nodez00_bglt BgL_auxz00_4014;

				{	/* Inline/inline.scm 137 */
					BgL_nodez00_bglt BgL_arg1768z00_2873;

					BgL_arg1768z00_2873 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2723)))->BgL_funz00);
					BgL_auxz00_4014 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1768z00_2873,
						(long) CINT(BgL_kfactorz00_2724), BgL_stackz00_2725);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2723)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4014), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4021;

				{	/* Inline/inline.scm 138 */
					BgL_nodez00_bglt BgL_arg1771z00_2874;

					BgL_arg1771z00_2874 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2723)))->BgL_argz00);
					BgL_auxz00_4021 =
						BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_arg1771z00_2874,
						(long) CINT(BgL_kfactorz00_2724), BgL_stackz00_2725);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2723)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4021), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2723));
		}

	}



/* &inline-node-app1314 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2app1314z62zzinline_inlinez00(obj_t
		BgL_envz00_2726, obj_t BgL_nodez00_2727, obj_t BgL_kfactorz00_2728,
		obj_t BgL_stackz00_2729)
	{
		{	/* Inline/inline.scm 128 */
			BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2727)))->BgL_argsz00),
				BgL_kfactorz00_2728, BgL_stackz00_2729);
			return BGl_inlinezd2appzd2zzinline_appz00(((BgL_appz00_bglt)
					BgL_nodez00_2727), (long) CINT(BgL_kfactorz00_2728),
				BgL_stackz00_2729);
		}

	}



/* &inline-node-sync1312 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2sync1312z62zzinline_inlinez00(obj_t
		BgL_envz00_2730, obj_t BgL_nodez00_2731, obj_t BgL_kfactorz00_2732,
		obj_t BgL_stackz00_2733)
	{
		{	/* Inline/inline.scm 119 */
			((((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2731)))->BgL_mutexz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2731)))->BgL_mutexz00),
						(long) CINT(BgL_kfactorz00_2732), BgL_stackz00_2733)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2731)))->
					BgL_prelockz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2731)))->
							BgL_prelockz00), (long) CINT(BgL_kfactorz00_2732),
						BgL_stackz00_2733)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2731)))->
					BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_inlinezd2nodezd2zzinline_inlinez00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2731)))->BgL_bodyz00),
						(long) CINT(BgL_kfactorz00_2732), BgL_stackz00_2733)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2731));
		}

	}



/* &inline-node-sequence1310 */
	BgL_nodez00_bglt
		BGl_z62inlinezd2nodezd2sequence1310z62zzinline_inlinez00(obj_t
		BgL_envz00_2734, obj_t BgL_nodez00_2735, obj_t BgL_kfactorz00_2736,
		obj_t BgL_stackz00_2737)
	{
		{	/* Inline/inline.scm 107 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long)
								13)),
						(((BgL_sequencez00_bglt) COBJECT(((BgL_sequencez00_bglt)
										BgL_nodez00_2735)))->BgL_metaz00))))
				{	/* Tools/trace.sch 53 */
					((obj_t)
						BGl_disablezd2inliningz12zc0zzinline_inlinez00(
							((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2735))));
				}
			else
				{	/* Tools/trace.sch 53 */
					BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(
						(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_2735)))->BgL_nodesz00),
						BgL_kfactorz00_2736, BgL_stackz00_2737);
				}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2735));
		}

	}



/* &inline-node-kwote1308 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2kwote1308z62zzinline_inlinez00(obj_t
		BgL_envz00_2738, obj_t BgL_nodez00_2739, obj_t BgL_kfactorz00_2740,
		obj_t BgL_stackz00_2741)
	{
		{	/* Inline/inline.scm 101 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2739));
		}

	}



/* &inline-node-var1306 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2var1306z62zzinline_inlinez00(obj_t
		BgL_envz00_2742, obj_t BgL_nodez00_2743, obj_t BgL_kfactorz00_2744,
		obj_t BgL_stackz00_2745)
	{
		{	/* Inline/inline.scm 81 */
			{	/* Inline/inline.scm 83 */
				bool_t BgL_test2149z00_4073;

				if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) > ((long) 0)))
					{	/* Inline/inline.scm 84 */
						bool_t BgL_test2151z00_4077;

						{	/* Inline/inline.scm 84 */
							BgL_variablez00_bglt BgL_arg1743z00_2882;

							BgL_arg1743z00_2882 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2743)))->BgL_variablez00);
							{	/* Inline/inline.scm 84 */
								bool_t BgL_res1980z00_2883;

								BgL_res1980z00_2883 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1743z00_2882), BGl_globalz00zzast_varz00);
								BgL_test2151z00_4077 = BgL_res1980z00_2883;
						}}
						if (BgL_test2151z00_4077)
							{	/* Inline/inline.scm 84 */
								if (
									((((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_nodez00_2743)))->
															BgL_variablez00))))->BgL_importz00) ==
										CNST_TABLE_REF(((long) 2))))
									{	/* Inline/inline.scm 85 */
										if (
											(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt)
															(((BgL_varz00_bglt) COBJECT(
																		((BgL_varz00_bglt) BgL_nodez00_2743)))->
																BgL_variablez00))))->BgL_evalzf3zf3))
											{	/* Inline/inline.scm 86 */
												BgL_test2149z00_4073 = ((bool_t) 0);
											}
										else
											{	/* Inline/inline.scm 87 */
												bool_t BgL_test2154z00_4094;

												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_nodez00_2743)))->
																				BgL_variablez00)))))->BgL_accessz00) ==
														CNST_TABLE_REF(((long) 15))))
													{	/* Inline/inline.scm 87 */
														BgL_test2154z00_4094 = ((bool_t) 1);
													}
												else
													{	/* Inline/inline.scm 87 */
														if (
															((((BgL_globalz00_bglt) COBJECT(
																			((BgL_globalz00_bglt)
																				(((BgL_varz00_bglt) COBJECT(
																							((BgL_varz00_bglt)
																								BgL_nodez00_2743)))->
																					BgL_variablez00))))->BgL_initz00) ==
																BTRUE))
															{	/* Inline/inline.scm 88 */
																BgL_test2154z00_4094 =
																	(
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						(((BgL_varz00_bglt) COBJECT(
																									((BgL_varz00_bglt)
																										BgL_nodez00_2743)))->
																							BgL_variablez00)))))->
																		BgL_occurrencewz00) == ((long) 1));
															}
														else
															{	/* Inline/inline.scm 88 */
																BgL_test2154z00_4094 = ((bool_t) 0);
															}
													}
												if (BgL_test2154z00_4094)
													{	/* Inline/inline.scm 90 */
														bool_t BgL__ortest_1158z00_2886;

														{	/* Inline/inline.scm 90 */
															obj_t BgL_arg1727z00_2887;

															BgL_arg1727z00_2887 =
																(((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_nodez00_2743)))->
																				BgL_variablez00))))->BgL_srcz00);
															BgL__ortest_1158z00_2886 =
																BGl_isazf3zf3zz__objectz00(BgL_arg1727z00_2887,
																BGl_atomz00zzast_nodez00);
														}
														if (BgL__ortest_1158z00_2886)
															{	/* Inline/inline.scm 90 */
																BgL_test2149z00_4073 = BgL__ortest_1158z00_2886;
															}
														else
															{	/* Inline/inline.scm 91 */
																bool_t BgL_test2158z00_4121;

																{	/* Inline/inline.scm 91 */
																	obj_t BgL_arg1725z00_2888;

																	BgL_arg1725z00_2888 =
																		(((BgL_globalz00_bglt) COBJECT(
																				((BgL_globalz00_bglt)
																					(((BgL_varz00_bglt) COBJECT(
																								((BgL_varz00_bglt)
																									BgL_nodez00_2743)))->
																						BgL_variablez00))))->BgL_srcz00);
																	BgL_test2158z00_4121 =
																		BGl_isazf3zf3zz__objectz00
																		(BgL_arg1725z00_2888,
																		BGl_kwotez00zzast_nodez00);
																}
																if (BgL_test2158z00_4121)
																	{	/* Inline/inline.scm 91 */
																		BgL_test2149z00_4073 =
																			(BGl_za2inlinezd2modeza2zd2zzinline_walkz00
																			== CNST_TABLE_REF(((long) 0)));
																	}
																else
																	{	/* Inline/inline.scm 91 */
																		BgL_test2149z00_4073 = ((bool_t) 0);
																	}
															}
													}
												else
													{	/* Inline/inline.scm 87 */
														BgL_test2149z00_4073 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Inline/inline.scm 85 */
										BgL_test2149z00_4073 = ((bool_t) 0);
									}
							}
						else
							{	/* Inline/inline.scm 84 */
								BgL_test2149z00_4073 = ((bool_t) 0);
							}
					}
				else
					{	/* Inline/inline.scm 83 */
						BgL_test2149z00_4073 = ((bool_t) 0);
					}
				if (BgL_test2149z00_4073)
					{	/* Inline/inline.scm 83 */
						{	/* Inline/inline.scm 95 */
							obj_t BgL_arg1711z00_2889;
							obj_t BgL_arg1712z00_2890;

							BgL_arg1711z00_2889 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_2743))))->BgL_locz00);
							BgL_arg1712z00_2890 =
								(((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt)
											(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_2743)))->
												BgL_variablez00))))->BgL_srcz00);
							return BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL,
								BgL_arg1711z00_2889, ((BgL_nodez00_bglt) BgL_arg1712z00_2890));
						}
					}
				else
					{	/* Inline/inline.scm 83 */
						return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2743));
					}
			}
		}

	}



/* &inline-node-atom1304 */
	BgL_nodez00_bglt BGl_z62inlinezd2nodezd2atom1304z62zzinline_inlinez00(obj_t
		BgL_envz00_2746, obj_t BgL_nodez00_2747, obj_t BgL_kfactorz00_2748,
		obj_t BgL_stackz00_2749)
	{
		{	/* Inline/inline.scm 75 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2747));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_inlinez00()
	{
		{	/* Inline/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 385476796),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzinline_appz00(((long) 148760837),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 53595756),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2033z00zzinline_inlinez00));
		}

	}

#ifdef __cplusplus
}
#endif
