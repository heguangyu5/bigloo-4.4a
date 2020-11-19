/*===========================================================================*/
/*   (Ast/toccur.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/toccur.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	static obj_t
		BGl_z62occurzd2nodez12zd2conditio1311z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2makezd2box1325za2zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzast_typezd2occurzd2();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2setq1309z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2instance1299z70zzast_typezd2occurzd2(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_typezd2occurzd2();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62occurzd2nodez12zd2app1281z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2sequence1277z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2sync1279z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2retblock1331z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2boxzd2ref1327za2zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_gczd2rootszd2initz00zzast_typezd2occurzd2();
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(BgL_nodez00_bglt);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2
		(BgL_globalz00_bglt);
	static obj_t
		BGl_z62occurzd2nodez12zd2getfield1289z70zzast_typezd2occurzd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2switch1315z70zzast_typezd2occurzd2(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2appzd2ly1283za2zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2setfield1291z70zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2vsetz121305z62zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2new1293z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2 = BUNSPEC;
	static obj_t BGl_za2globalza2z00zzast_typezd2occurzd2 = BUNSPEC;
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2jumpzd2exzd21323z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2extern1287z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2letzd2fun1317za2zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_z62occurzd2nodez12za2zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez121272za2zzast_typezd2occurzd2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_typezd2occurzd2();
	static obj_t
		BGl_z62typezd2incrementzd2globalz12z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_typezd2occurzd2();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	static obj_t BGl_z62occurzd2nodez12zd2var1275z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2fail1313z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62occurzd2nodez12zd2cast1295z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2castzd2nul1297za2zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2letzd2var1319za2zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
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
	static obj_t BGl_z62occurzd2nodez12zd2vref1303z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2valloc1307z70zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2funcall1285z70zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_typezd2occurzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2();
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_instanceofz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static bool_t BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2vlength1301z70zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t
		BGl_z62occurzd2nodez12zd2boxzd2setz121329zb0zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62occurzd2nodez12zd2setzd2exzd2i1321z70zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2incrementzd2globalz12zd2envzc0zzast_typezd2occurzd2,
		BgL_bgl_za762typeza7d2increm1897z00,
		BGl_z62typezd2incrementzd2globalz12z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1860z00zzast_typezd2occurzd2,
		BgL_bgl_string1860za700za7za7a1898za7, "occur-node!1272", 15);
	      DEFINE_STRING(BGl_string1862z00zzast_typezd2occurzd2,
		BgL_bgl_string1862za700za7za7a1899za7, "occur-node!", 11);
	      DEFINE_STRING(BGl_string1891z00zzast_typezd2occurzd2,
		BgL_bgl_string1891za700za7za7a1900za7, "ast_type-occur", 14);
	      DEFINE_STRING(BGl_string1892z00zzast_typezd2occurzd2,
		BgL_bgl_string1892za700za7za7a1901za7, "done ", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1859z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71902za7,
		BGl_z62occurzd2nodez121272za2zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71903za7,
		BGl_z62occurzd2nodez12zd2var1275z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1863z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71904za7,
		BGl_z62occurzd2nodez12zd2sequence1277z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1864z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71905za7,
		BGl_z62occurzd2nodez12zd2sync1279z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1865z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71906za7,
		BGl_z62occurzd2nodez12zd2app1281z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1866z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71907za7,
		BGl_z62occurzd2nodez12zd2appzd2ly1283za2zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71908za7,
		BGl_z62occurzd2nodez12zd2funcall1285z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1868z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71909za7,
		BGl_z62occurzd2nodez12zd2extern1287z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71910za7,
		BGl_z62occurzd2nodez12zd2getfield1289z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1870z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71911za7,
		BGl_z62occurzd2nodez12zd2setfield1291z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71912za7,
		BGl_z62occurzd2nodez12zd2new1293z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71913za7,
		BGl_z62occurzd2nodez12zd2cast1295z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71914za7,
		BGl_z62occurzd2nodez12zd2castzd2nul1297za2zzast_typezd2occurzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71915za7,
		BGl_z62occurzd2nodez12zd2instance1299z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1875z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71916za7,
		BGl_z62occurzd2nodez12zd2vlength1301z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71917za7,
		BGl_z62occurzd2nodez12zd2vref1303z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71918za7,
		BGl_z62occurzd2nodez12zd2vsetz121305z62zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71919za7,
		BGl_z62occurzd2nodez12zd2valloc1307z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71920za7,
		BGl_z62occurzd2nodez12zd2setq1309z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71921za7,
		BGl_z62occurzd2nodez12zd2conditio1311z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71922za7,
		BGl_z62occurzd2nodez12zd2fail1313z70zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71923za7,
		BGl_z62occurzd2nodez12zd2switch1315z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71924za7,
		BGl_z62occurzd2nodez12zd2letzd2fun1317za2zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71925za7,
		BGl_z62occurzd2nodez12zd2letzd2var1319za2zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71926za7,
		BGl_z62occurzd2nodez12zd2setzd2exzd2i1321z70zzast_typezd2occurzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71927za7,
		BGl_z62occurzd2nodez12zd2jumpzd2exzd21323z70zzast_typezd2occurzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71928za7,
		BGl_z62occurzd2nodez12zd2makezd2box1325za2zzast_typezd2occurzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71929za7,
		BGl_z62occurzd2nodez12zd2boxzd2ref1327za2zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71930za7,
		BGl_z62occurzd2nodez12zd2boxzd2setz121329zb0zzast_typezd2occurzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71931za7,
		BGl_z62occurzd2nodez12zd2retblock1331z70zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
		BgL_bgl_za762occurza7d2nodeza71932za7,
		BGl_z62occurzd2nodez12za2zzast_typezd2occurzd2, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2));
		     ADD_ROOT((void *) (&BGl_za2globalza2z00zzast_typezd2occurzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long
		BgL_checksumz00_2347, char *BgL_fromz00_2348)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_typezd2occurzd2();
					BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2();
					BGl_cnstzd2initzd2zzast_typezd2occurzd2();
					BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2();
					BGl_genericzd2initzd2zzast_typezd2occurzd2();
					BGl_methodzd2initzd2zzast_typezd2occurzd2();
					return BGl_toplevelzd2initzd2zzast_typezd2occurzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_type-occur");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			{	/* Ast/toccur.scm 14 */
				obj_t BgL_cportz00_2240;

				{	/* Ast/toccur.scm 14 */
					obj_t BgL_stringz00_2248;

					BgL_stringz00_2248 = BGl_string1892z00zzast_typezd2occurzd2;
					{	/* Ast/toccur.scm 14 */
						obj_t BgL_startz00_2249;

						BgL_startz00_2249 = BINT(((long) 0));
						{	/* Ast/toccur.scm 14 */
							obj_t BgL_endz00_2250;

							BgL_endz00_2250 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2248)));
							{	/* Ast/toccur.scm 14 */

								BgL_cportz00_2240 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2248, BgL_startz00_2249, BgL_endz00_2250);
				}}}}
				{
					long BgL_iz00_2241;

					BgL_iz00_2241 = ((long) 0);
				BgL_loopz00_2242:
					if ((BgL_iz00_2241 == ((long) -1)))
						{	/* Ast/toccur.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/toccur.scm 14 */
							{	/* Ast/toccur.scm 14 */
								obj_t BgL_arg1895z00_2244;

								{	/* Ast/toccur.scm 14 */

									{	/* Ast/toccur.scm 14 */
										obj_t BgL_locationz00_2246;

										BgL_locationz00_2246 = BBOOL(((bool_t) 0));
										{	/* Ast/toccur.scm 14 */

											BgL_arg1895z00_2244 =
												BGl_readz00zz__readerz00(BgL_cportz00_2240,
												BgL_locationz00_2246);
										}
									}
								}
								{	/* Ast/toccur.scm 14 */
									int BgL_tmpz00_2376;

									BgL_tmpz00_2376 = (int) (BgL_iz00_2241);
									CNST_TABLE_SET(BgL_tmpz00_2376, BgL_arg1895z00_2244);
							}}
							{	/* Ast/toccur.scm 14 */
								int BgL_auxz00_2247;

								BgL_auxz00_2247 = (int) ((BgL_iz00_2241 - ((long) 1)));
								{
									long BgL_iz00_2381;

									BgL_iz00_2381 = (long) (BgL_auxz00_2247);
									BgL_iz00_2241 = BgL_iz00_2381;
									goto BgL_loopz00_2242;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			BGl_za2globalza2z00zzast_typezd2occurzd2 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* type-increment-global! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(BgL_globalz00_bglt
		BgL_globalz00_3)
	{
		{	/* Ast/toccur.scm 33 */
			{	/* Ast/toccur.scm 34 */
				bool_t BgL_test1935z00_2384;

				{	/* Ast/toccur.scm 34 */
					BgL_valuez00_bglt BgL_arg1345z00_1587;

					BgL_arg1345z00_1587 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_valuez00);
					{	/* Ast/toccur.scm 34 */
						bool_t BgL_res1834z00_2046;

						BgL_res1834z00_2046 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1345z00_1587), BGl_sfunz00zzast_varz00);
						BgL_test1935z00_2384 = BgL_res1834z00_2046;
					}
				}
				if (BgL_test1935z00_2384)
					{	/* Ast/toccur.scm 34 */
						return
							BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(
							((obj_t) BgL_globalz00_3));
					}
				else
					{	/* Ast/toccur.scm 36 */
						BgL_typez00_bglt BgL_arg1344z00_1586;

						BgL_arg1344z00_1586 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_typez00);
						return
							BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
							(BgL_arg1344z00_1586);
					}
			}
		}

	}



/* &type-increment-global! */
	obj_t BGl_z62typezd2incrementzd2globalz12z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2146, obj_t BgL_globalz00_2147)
	{
		{	/* Ast/toccur.scm 33 */
			return
				BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(
				((BgL_globalz00_bglt) BgL_globalz00_2147));
		}

	}



/* type-increment-sfun! */
	obj_t BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(obj_t
		BgL_varz00_4)
	{
		{	/* Ast/toccur.scm 41 */
			{	/* Ast/toccur.scm 43 */
				BgL_typez00_bglt BgL_arg1346z00_1589;

				BgL_arg1346z00_1589 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_typez00);
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
					(BgL_arg1346z00_1589);
			}
			{	/* Ast/toccur.scm 44 */
				obj_t BgL_g1254z00_1590;

				BgL_g1254z00_1590 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_4)))->
									BgL_valuez00))))->BgL_argsz00);
				{
					obj_t BgL_l1252z00_1592;

					BgL_l1252z00_1592 = BgL_g1254z00_1590;
				BgL_zc3z04anonymousza31347ze3z87_1593:
					if (PAIRP(BgL_l1252z00_1592))
						{	/* Ast/toccur.scm 50 */
							{	/* Ast/toccur.scm 46 */
								obj_t BgL_az00_1595;

								BgL_az00_1595 = CAR(BgL_l1252z00_1592);
								if (BGl_isazf3zf3zz__objectz00(BgL_az00_1595,
										BGl_typez00zztype_typez00))
									{	/* Ast/toccur.scm 46 */
										BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
											((BgL_typez00_bglt) BgL_az00_1595));
									}
								else
									{	/* Ast/toccur.scm 46 */
										if (BGl_isazf3zf3zz__objectz00(BgL_az00_1595,
												BGl_localz00zzast_varz00))
											{	/* Ast/toccur.scm 49 */
												BgL_typez00_bglt BgL_arg1357z00_1598;

												BgL_arg1357z00_1598 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_az00_1595))))->
													BgL_typez00);
												BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
													(BgL_arg1357z00_1598);
											}
										else
											{	/* Ast/toccur.scm 48 */
												BFALSE;
											}
									}
							}
							{
								obj_t BgL_l1252z00_2416;

								BgL_l1252z00_2416 = CDR(BgL_l1252z00_1592);
								BgL_l1252z00_1592 = BgL_l1252z00_2416;
								goto BgL_zc3z04anonymousza31347ze3z87_1593;
							}
						}
					else
						{	/* Ast/toccur.scm 50 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/toccur.scm 51 */
				obj_t BgL_nodez00_1602;

				BgL_nodez00_1602 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_4)))->
									BgL_valuez00))))->BgL_bodyz00);
				if (BGl_isazf3zf3zz__objectz00(BgL_nodez00_1602,
						BGl_nodez00zzast_nodez00))
					{	/* Ast/toccur.scm 52 */
						return
							BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
							((BgL_nodez00_bglt) BgL_nodez00_1602));
					}
				else
					{	/* Ast/toccur.scm 52 */
						return BFALSE;
					}
			}
		}

	}



/* occur-node*! */
	bool_t BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(obj_t BgL_nodeza2za2_37)
	{
		{	/* Ast/toccur.scm 328 */
			{
				obj_t BgL_l1270z00_1606;

				BgL_l1270z00_1606 = BgL_nodeza2za2_37;
			BgL_zc3z04anonymousza31364ze3z87_1607:
				if (PAIRP(BgL_l1270z00_1606))
					{	/* Ast/toccur.scm 329 */
						{	/* Ast/toccur.scm 329 */
							obj_t BgL_arg1367z00_1609;

							BgL_arg1367z00_1609 = CAR(BgL_l1270z00_1606);
							BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
								((BgL_nodez00_bglt) BgL_arg1367z00_1609));
						}
						{
							obj_t BgL_l1270z00_2431;

							BgL_l1270z00_2431 = CDR(BgL_l1270z00_1606);
							BgL_l1270z00_1606 = BgL_l1270z00_2431;
							goto BgL_zc3z04anonymousza31364ze3z87_1607;
						}
					}
				else
					{	/* Ast/toccur.scm 329 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_proc1859z00zzast_typezd2occurzd2, BGl_nodez00zzast_nodez00,
				BGl_string1860z00zzast_typezd2occurzd2);
		}

	}



/* &occur-node!1272 */
	obj_t BGl_z62occurzd2nodez121272za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2149, obj_t BgL_nodez00_2150)
	{
		{	/* Ast/toccur.scm 70 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* occur-node! */
	obj_t BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(BgL_nodez00_bglt
		BgL_nodez00_7)
	{
		{	/* Ast/toccur.scm 70 */
			{	/* Ast/toccur.scm 70 */
				obj_t BgL_method1273z00_1616;

				{	/* Ast/toccur.scm 70 */
					obj_t BgL_res1850z00_2099;

					{	/* Ast/toccur.scm 70 */
						long BgL_objzd2classzd2numz00_2064;

						{	/* Ast/toccur.scm 70 */
							long BgL_res1840z00_2067;

							BgL_res1840z00_2067 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_7));
							BgL_objzd2classzd2numz00_2064 = BgL_res1840z00_2067;
						}
						{	/* Ast/toccur.scm 70 */
							obj_t BgL_arg1813z00_2065;

							BgL_arg1813z00_2065 =
								PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
								(int) (((long) 1)));
							{	/* Ast/toccur.scm 70 */
								int BgL_offsetz00_2069;

								BgL_offsetz00_2069 = (int) (BgL_objzd2classzd2numz00_2064);
								{	/* Ast/toccur.scm 70 */
									long BgL_offsetz00_2070;

									BgL_offsetz00_2070 =
										((long) (BgL_offsetz00_2069) - OBJECT_TYPE);
									{	/* Ast/toccur.scm 70 */
										long BgL_modz00_2071;

										BgL_modz00_2071 =
											(BgL_offsetz00_2070 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/toccur.scm 70 */
											long BgL_restz00_2073;

											BgL_restz00_2073 =
												(BgL_offsetz00_2070 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/toccur.scm 70 */

												{	/* Ast/toccur.scm 70 */
													obj_t BgL_bucketz00_2075;

													BgL_bucketz00_2075 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2065), BgL_modz00_2071);
													BgL_res1850z00_2099 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2075), BgL_restz00_2073);
					}}}}}}}}
					BgL_method1273z00_1616 = BgL_res1850z00_2099;
				}
				return
					PROCEDURE_ENTRY(BgL_method1273z00_1616) (BgL_method1273z00_1616,
					((obj_t) BgL_nodez00_7), BEOA);
			}
		}

	}



/* &occur-node! */
	obj_t BGl_z62occurzd2nodez12za2zzast_typezd2occurzd2(obj_t BgL_envz00_2151,
		obj_t BgL_nodez00_2152)
	{
		{	/* Ast/toccur.scm 70 */
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				((BgL_nodez00_bglt) BgL_nodez00_2152));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_varz00zzast_nodez00, BGl_proc1861z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc1863z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_syncz00zzast_nodez00, BGl_proc1864z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_appz00zzast_nodez00, BGl_proc1865z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1866z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc1867z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_externz00zzast_nodez00, BGl_proc1868z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_getfieldz00zzast_nodez00, BGl_proc1869z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_setfieldz00zzast_nodez00, BGl_proc1870z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_newz00zzast_nodez00, BGl_proc1871z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_castz00zzast_nodez00, BGl_proc1872z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc1873z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_instanceofz00zzast_nodez00, BGl_proc1874z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_vlengthz00zzast_nodez00, BGl_proc1875z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_vrefz00zzast_nodez00, BGl_proc1876z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_vsetz12z12zzast_nodez00, BGl_proc1877z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_vallocz00zzast_nodez00, BGl_proc1878z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_setqz00zzast_nodez00, BGl_proc1879z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_conditionalz00zzast_nodez00, BGl_proc1880z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_failz00zzast_nodez00, BGl_proc1881z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_switchz00zzast_nodez00, BGl_proc1882z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1883z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1884z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1885z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1886z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1887z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1888z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1889z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_retblockz00zzast_nodez00, BGl_proc1890z00zzast_typezd2occurzd2,
				BGl_string1862z00zzast_typezd2occurzd2);
		}

	}



/* &occur-node!-retblock1331 */
	obj_t BGl_z62occurzd2nodez12zd2retblock1331z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2182, obj_t BgL_nodez00_2183)
	{
		{	/* Ast/toccur.scm 321 */
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_retblockz00_bglt) COBJECT(
							((BgL_retblockz00_bglt) BgL_nodez00_2183)))->BgL_bodyz00));
		}

	}



/* &occur-node!-box-set!1329 */
	obj_t BGl_z62occurzd2nodez12zd2boxzd2setz121329zb0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2184, obj_t BgL_nodez00_2185)
	{
		{	/* Ast/toccur.scm 313 */
			{	/* Ast/toccur.scm 315 */
				BgL_varz00_bglt BgL_arg1695z00_2256;

				BgL_arg1695z00_2256 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2185)))->BgL_varz00);
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					((BgL_nodez00_bglt) BgL_arg1695z00_2256));
			}
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2185)))->BgL_valuez00));
		}

	}



/* &occur-node!-box-ref1327 */
	obj_t BGl_z62occurzd2nodez12zd2boxzd2ref1327za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2186, obj_t BgL_nodez00_2187)
	{
		{	/* Ast/toccur.scm 307 */
			{	/* Ast/toccur.scm 308 */
				BgL_varz00_bglt BgL_arg1692z00_2258;

				BgL_arg1692z00_2258 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2187)))->BgL_varz00);
				return
					BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					((BgL_nodez00_bglt) BgL_arg1692z00_2258));
			}
		}

	}



/* &occur-node!-make-box1325 */
	obj_t BGl_z62occurzd2nodez12zd2makezd2box1325za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2188, obj_t BgL_nodez00_2189)
	{
		{	/* Ast/toccur.scm 301 */
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2189)))->BgL_valuez00));
		}

	}



/* &occur-node!-jump-ex-1323 */
	obj_t BGl_z62occurzd2nodez12zd2jumpzd2exzd21323z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2190, obj_t BgL_nodez00_2191)
	{
		{	/* Ast/toccur.scm 293 */
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2191)))->BgL_exitz00));
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2191)))->BgL_valuez00));
		}

	}



/* &occur-node!-set-ex-i1321 */
	obj_t BGl_z62occurzd2nodez12zd2setzd2exzd2i1321z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2192, obj_t BgL_nodez00_2193)
	{
		{	/* Ast/toccur.scm 286 */
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2193)))->BgL_bodyz00));
		}

	}



/* &occur-node!-let-var1319 */
	obj_t BGl_z62occurzd2nodez12zd2letzd2var1319za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2194, obj_t BgL_nodez00_2195)
	{
		{	/* Ast/toccur.scm 274 */
			{	/* Ast/toccur.scm 276 */
				obj_t BgL_g1269z00_2263;

				BgL_g1269z00_2263 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2195)))->BgL_bindingsz00);
				{
					obj_t BgL_l1267z00_2265;

					BgL_l1267z00_2265 = BgL_g1269z00_2263;
				BgL_zc3z04anonymousza31663ze3z87_2264:
					if (PAIRP(BgL_l1267z00_2265))
						{	/* Ast/toccur.scm 276 */
							{	/* Ast/toccur.scm 278 */
								obj_t BgL_bindingz00_2266;

								BgL_bindingz00_2266 = CAR(BgL_l1267z00_2265);
								{	/* Ast/toccur.scm 277 */
									BgL_localz00_bglt BgL_i1124z00_2267;

									BgL_i1124z00_2267 =
										((BgL_localz00_bglt) CAR(((obj_t) BgL_bindingz00_2266)));
									{	/* Ast/toccur.scm 278 */
										BgL_typez00_bglt BgL_arg1667z00_2268;

										BgL_arg1667z00_2268 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_i1124z00_2267)))->
											BgL_typez00);
										BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
											(BgL_arg1667z00_2268);
									}
								}
								{	/* Ast/toccur.scm 279 */
									obj_t BgL_arg1669z00_2269;

									BgL_arg1669z00_2269 = CDR(((obj_t) BgL_bindingz00_2266));
									BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
										((BgL_nodez00_bglt) BgL_arg1669z00_2269));
								}
							}
							{
								obj_t BgL_l1267z00_2537;

								BgL_l1267z00_2537 = CDR(BgL_l1267z00_2265);
								BgL_l1267z00_2265 = BgL_l1267z00_2537;
								goto BgL_zc3z04anonymousza31663ze3z87_2264;
							}
						}
					else
						{	/* Ast/toccur.scm 276 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2195)))->BgL_bodyz00));
		}

	}



/* &occur-node!-let-fun1317 */
	obj_t BGl_z62occurzd2nodez12zd2letzd2fun1317za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2196, obj_t BgL_nodez00_2197)
	{
		{	/* Ast/toccur.scm 266 */
			{	/* Ast/toccur.scm 268 */
				obj_t BgL_g1266z00_2271;

				BgL_g1266z00_2271 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2197)))->BgL_localsz00);
				{
					obj_t BgL_l1264z00_2273;

					BgL_l1264z00_2273 = BgL_g1266z00_2271;
				BgL_zc3z04anonymousza31640ze3z87_2272:
					if (PAIRP(BgL_l1264z00_2273))
						{	/* Ast/toccur.scm 268 */
							BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(CAR
								(BgL_l1264z00_2273));
							{
								obj_t BgL_l1264z00_2548;

								BgL_l1264z00_2548 = CDR(BgL_l1264z00_2273);
								BgL_l1264z00_2273 = BgL_l1264z00_2548;
								goto BgL_zc3z04anonymousza31640ze3z87_2272;
							}
						}
					else
						{	/* Ast/toccur.scm 268 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2197)))->BgL_bodyz00));
		}

	}



/* &occur-node!-switch1315 */
	obj_t BGl_z62occurzd2nodez12zd2switch1315z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2198, obj_t BgL_nodez00_2199)
	{
		{	/* Ast/toccur.scm 256 */
			{	/* Ast/toccur.scm 257 */
				bool_t BgL_tmpz00_2553;

				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2199)))->BgL_testz00));
				{	/* Ast/toccur.scm 259 */
					obj_t BgL_g1263z00_2275;

					BgL_g1263z00_2275 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2199)))->BgL_clausesz00);
					{
						obj_t BgL_l1261z00_2277;

						BgL_l1261z00_2277 = BgL_g1263z00_2275;
					BgL_zc3z04anonymousza31632ze3z87_2276:
						if (PAIRP(BgL_l1261z00_2277))
							{	/* Ast/toccur.scm 259 */
								{	/* Ast/toccur.scm 260 */
									obj_t BgL_clausez00_2278;

									BgL_clausez00_2278 = CAR(BgL_l1261z00_2277);
									{	/* Ast/toccur.scm 260 */
										obj_t BgL_arg1634z00_2279;

										BgL_arg1634z00_2279 = CDR(((obj_t) BgL_clausez00_2278));
										BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
											((BgL_nodez00_bglt) BgL_arg1634z00_2279));
									}
								}
								{
									obj_t BgL_l1261z00_2566;

									BgL_l1261z00_2566 = CDR(BgL_l1261z00_2277);
									BgL_l1261z00_2277 = BgL_l1261z00_2566;
									goto BgL_zc3z04anonymousza31632ze3z87_2276;
								}
							}
						else
							{	/* Ast/toccur.scm 259 */
								BgL_tmpz00_2553 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2553);
			}
		}

	}



/* &occur-node!-fail1313 */
	obj_t BGl_z62occurzd2nodez12zd2fail1313z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2200, obj_t BgL_nodez00_2201)
	{
		{	/* Ast/toccur.scm 247 */
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2201)))->BgL_procz00));
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2201)))->BgL_msgz00));
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2201)))->BgL_objz00));
		}

	}



/* &occur-node!-conditio1311 */
	obj_t BGl_z62occurzd2nodez12zd2conditio1311z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2202, obj_t BgL_nodez00_2203)
	{
		{	/* Ast/toccur.scm 238 */
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2203)))->BgL_testz00));
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2203)))->BgL_truez00));
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2203)))->BgL_falsez00));
		}

	}



/* &occur-node!-setq1309 */
	obj_t BGl_z62occurzd2nodez12zd2setq1309z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2204, obj_t BgL_nodez00_2205)
	{
		{	/* Ast/toccur.scm 230 */
			{	/* Ast/toccur.scm 232 */
				BgL_varz00_bglt BgL_arg1605z00_2283;

				BgL_arg1605z00_2283 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2205)))->BgL_varz00);
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					((BgL_nodez00_bglt) BgL_arg1605z00_2283));
			}
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2205)))->BgL_valuez00));
		}

	}



/* &occur-node!-valloc1307 */
	obj_t BGl_z62occurzd2nodez12zd2valloc1307z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2206, obj_t BgL_nodez00_2207)
	{
		{	/* Ast/toccur.scm 220 */
			{

				{	/* Ast/toccur.scm 222 */
					BgL_typez00_bglt BgL_arg1597z00_2287;

					BgL_arg1597z00_2287 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_nodez00_2207))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1597z00_2287);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vallocz00_bglt) COBJECT(
								((BgL_vallocz00_bglt) BgL_nodez00_2207)))->BgL_ftypez00));
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vallocz00_bglt) COBJECT(
								((BgL_vallocz00_bglt) BgL_nodez00_2207)))->BgL_otypez00));
				{	/* Ast/toccur.scm 220 */
					obj_t BgL_nextzd2method1306zd2_2286;

					BgL_nextzd2method1306zd2_2286 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt) BgL_nodez00_2207)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_vallocz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1306zd2_2286)
						(BgL_nextzd2method1306zd2_2286,
						((obj_t) ((BgL_vallocz00_bglt) BgL_nodez00_2207)), BEOA);
				}
			}
		}

	}



/* &occur-node!-vset!1305 */
	obj_t BGl_z62occurzd2nodez12zd2vsetz121305z62zzast_typezd2occurzd2(obj_t
		BgL_envz00_2208, obj_t BgL_nodez00_2209)
	{
		{	/* Ast/toccur.scm 210 */
			{

				{	/* Ast/toccur.scm 212 */
					BgL_typez00_bglt BgL_arg1589z00_2291;

					BgL_arg1589z00_2291 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_2209))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1589z00_2291);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vsetz12z12_bglt) COBJECT(
								((BgL_vsetz12z12_bglt) BgL_nodez00_2209)))->BgL_ftypez00));
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vsetz12z12_bglt) COBJECT(
								((BgL_vsetz12z12_bglt) BgL_nodez00_2209)))->BgL_otypez00));
				{	/* Ast/toccur.scm 210 */
					obj_t BgL_nextzd2method1304zd2_2290;

					BgL_nextzd2method1304zd2_2290 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_2209)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_vsetz12z12zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1304zd2_2290)
						(BgL_nextzd2method1304zd2_2290,
						((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_2209)), BEOA);
				}
			}
		}

	}



/* &occur-node!-vref1303 */
	obj_t BGl_z62occurzd2nodez12zd2vref1303z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2210, obj_t BgL_nodez00_2211)
	{
		{	/* Ast/toccur.scm 200 */
			{

				{	/* Ast/toccur.scm 202 */
					BgL_typez00_bglt BgL_arg1582z00_2295;

					BgL_arg1582z00_2295 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vrefz00_bglt) BgL_nodez00_2211))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1582z00_2295);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vrefz00_bglt) COBJECT(
								((BgL_vrefz00_bglt) BgL_nodez00_2211)))->BgL_ftypez00));
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vrefz00_bglt) COBJECT(
								((BgL_vrefz00_bglt) BgL_nodez00_2211)))->BgL_otypez00));
				{	/* Ast/toccur.scm 200 */
					obj_t BgL_nextzd2method1302zd2_2294;

					BgL_nextzd2method1302zd2_2294 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vrefz00_bglt) BgL_nodez00_2211)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_vrefz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1302zd2_2294)
						(BgL_nextzd2method1302zd2_2294,
						((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_2211)), BEOA);
				}
			}
		}

	}



/* &occur-node!-vlength1301 */
	obj_t BGl_z62occurzd2nodez12zd2vlength1301z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2212, obj_t BgL_nodez00_2213)
	{
		{	/* Ast/toccur.scm 191 */
			{

				{	/* Ast/toccur.scm 193 */
					BgL_typez00_bglt BgL_arg1575z00_2299;

					BgL_arg1575z00_2299 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vlengthz00_bglt) BgL_nodez00_2213))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1575z00_2299);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_vlengthz00_bglt) COBJECT(
								((BgL_vlengthz00_bglt) BgL_nodez00_2213)))->BgL_vtypez00));
				{	/* Ast/toccur.scm 191 */
					obj_t BgL_nextzd2method1300zd2_2298;

					BgL_nextzd2method1300zd2_2298 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt) BgL_nodez00_2213)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_vlengthz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1300zd2_2298)
						(BgL_nextzd2method1300zd2_2298,
						((obj_t) ((BgL_vlengthz00_bglt) BgL_nodez00_2213)), BEOA);
				}
			}
		}

	}



/* &occur-node!-instance1299 */
	obj_t BGl_z62occurzd2nodez12zd2instance1299z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2214, obj_t BgL_nodez00_2215)
	{
		{	/* Ast/toccur.scm 182 */
			{

				{	/* Ast/toccur.scm 184 */
					BgL_typez00_bglt BgL_arg1565z00_2303;

					BgL_arg1565z00_2303 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_instanceofz00_bglt) BgL_nodez00_2215))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1565z00_2303);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_instanceofz00_bglt) COBJECT(
								((BgL_instanceofz00_bglt) BgL_nodez00_2215)))->BgL_classz00));
				{	/* Ast/toccur.scm 182 */
					obj_t BgL_nextzd2method1298zd2_2302;

					BgL_nextzd2method1298zd2_2302 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt) BgL_nodez00_2215)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_instanceofz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1298zd2_2302)
						(BgL_nextzd2method1298zd2_2302,
						((obj_t) ((BgL_instanceofz00_bglt) BgL_nodez00_2215)), BEOA);
				}
			}
		}

	}



/* &occur-node!-cast-nul1297 */
	obj_t BGl_z62occurzd2nodez12zd2castzd2nul1297za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2216, obj_t BgL_nodez00_2217)
	{
		{	/* Ast/toccur.scm 175 */
			{	/* Ast/toccur.scm 177 */
				BgL_typez00_bglt BgL_arg1564z00_2305;

				BgL_arg1564z00_2305 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_castzd2nullzd2_bglt) BgL_nodez00_2217))))->BgL_typez00);
				return
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
					(BgL_arg1564z00_2305);
			}
		}

	}



/* &occur-node!-cast1295 */
	obj_t BGl_z62occurzd2nodez12zd2cast1295z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2218, obj_t BgL_nodez00_2219)
	{
		{	/* Ast/toccur.scm 166 */
			{

				{	/* Ast/toccur.scm 168 */
					BgL_typez00_bglt BgL_arg1558z00_2309;

					BgL_arg1558z00_2309 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_castz00_bglt) BgL_nodez00_2219))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1558z00_2309);
				}
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2219)))->BgL_argz00));
				{	/* Ast/toccur.scm 166 */
					obj_t BgL_nextzd2method1294zd2_2308;

					BgL_nextzd2method1294zd2_2308 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_castz00_bglt) BgL_nodez00_2219)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_castz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1294zd2_2308)
						(BgL_nextzd2method1294zd2_2308,
						((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2219)), BEOA);
				}
			}
		}

	}



/* &occur-node!-new1293 */
	obj_t BGl_z62occurzd2nodez12zd2new1293z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2220, obj_t BgL_nodez00_2221)
	{
		{	/* Ast/toccur.scm 157 */
			{

				{	/* Ast/toccur.scm 159 */
					BgL_typez00_bglt BgL_arg1536z00_2313;

					BgL_arg1536z00_2313 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_newz00_bglt) BgL_nodez00_2221))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1536z00_2313);
				}
				{	/* Ast/toccur.scm 160 */
					obj_t BgL_g1260z00_2314;

					BgL_g1260z00_2314 =
						(((BgL_newz00_bglt) COBJECT(
								((BgL_newz00_bglt) BgL_nodez00_2221)))->BgL_argszd2typezd2);
					{
						obj_t BgL_l1258z00_2316;

						BgL_l1258z00_2316 = BgL_g1260z00_2314;
					BgL_zc3z04anonymousza31537ze3z87_2315:
						if (PAIRP(BgL_l1258z00_2316))
							{	/* Ast/toccur.scm 160 */
								{	/* Ast/toccur.scm 160 */
									obj_t BgL_arg1540z00_2317;

									BgL_arg1540z00_2317 = CAR(BgL_l1258z00_2316);
									BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
										((BgL_typez00_bglt) BgL_arg1540z00_2317));
								}
								{
									obj_t BgL_l1258z00_2714;

									BgL_l1258z00_2714 = CDR(BgL_l1258z00_2316);
									BgL_l1258z00_2316 = BgL_l1258z00_2714;
									goto BgL_zc3z04anonymousza31537ze3z87_2315;
								}
							}
						else
							{	/* Ast/toccur.scm 160 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/toccur.scm 157 */
					obj_t BgL_nextzd2method1292zd2_2312;

					BgL_nextzd2method1292zd2_2312 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_newz00_bglt) BgL_nodez00_2221)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_newz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1292zd2_2312)
						(BgL_nextzd2method1292zd2_2312,
						((obj_t) ((BgL_newz00_bglt) BgL_nodez00_2221)), BEOA);
				}
			}
		}

	}



/* &occur-node!-setfield1291 */
	obj_t BGl_z62occurzd2nodez12zd2setfield1291z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2222, obj_t BgL_nodez00_2223)
	{
		{	/* Ast/toccur.scm 147 */
			{

				{	/* Ast/toccur.scm 149 */
					BgL_typez00_bglt BgL_arg1518z00_2321;

					BgL_arg1518z00_2321 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setfieldz00_bglt) BgL_nodez00_2223))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1518z00_2321);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_setfieldz00_bglt) COBJECT(
								((BgL_setfieldz00_bglt) BgL_nodez00_2223)))->BgL_otypez00));
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_setfieldz00_bglt) COBJECT(
								((BgL_setfieldz00_bglt) BgL_nodez00_2223)))->BgL_ftypez00));
				{	/* Ast/toccur.scm 147 */
					obj_t BgL_nextzd2method1290zd2_2320;

					BgL_nextzd2method1290zd2_2320 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setfieldz00_bglt) BgL_nodez00_2223)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_setfieldz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1290zd2_2320)
						(BgL_nextzd2method1290zd2_2320,
						((obj_t) ((BgL_setfieldz00_bglt) BgL_nodez00_2223)), BEOA);
				}
			}
		}

	}



/* &occur-node!-getfield1289 */
	obj_t BGl_z62occurzd2nodez12zd2getfield1289z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2224, obj_t BgL_nodez00_2225)
	{
		{	/* Ast/toccur.scm 137 */
			{

				{	/* Ast/toccur.scm 139 */
					BgL_typez00_bglt BgL_arg1493z00_2325;

					BgL_arg1493z00_2325 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_getfieldz00_bglt) BgL_nodez00_2225))))->BgL_typez00);
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1493z00_2325);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_getfieldz00_bglt) COBJECT(
								((BgL_getfieldz00_bglt) BgL_nodez00_2225)))->BgL_otypez00));
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
					(((BgL_getfieldz00_bglt) COBJECT(
								((BgL_getfieldz00_bglt) BgL_nodez00_2225)))->BgL_ftypez00));
				{	/* Ast/toccur.scm 137 */
					obj_t BgL_nextzd2method1288zd2_2324;

					BgL_nextzd2method1288zd2_2324 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_getfieldz00_bglt) BgL_nodez00_2225)),
						BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
						BGl_getfieldz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1288zd2_2324)
						(BgL_nextzd2method1288zd2_2324,
						((obj_t) ((BgL_getfieldz00_bglt) BgL_nodez00_2225)), BEOA);
				}
			}
		}

	}



/* &occur-node!-extern1287 */
	obj_t BGl_z62occurzd2nodez12zd2extern1287z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2226, obj_t BgL_nodez00_2227)
	{
		{	/* Ast/toccur.scm 129 */
			return
				BBOOL(BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2227)))->BgL_exprza2za2)));
		}

	}



/* &occur-node!-funcall1285 */
	obj_t BGl_z62occurzd2nodez12zd2funcall1285z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2228, obj_t BgL_nodez00_2229)
	{
		{	/* Ast/toccur.scm 120 */
			{	/* Ast/toccur.scm 121 */
				bool_t BgL_tmpz00_2767;

				{	/* Ast/toccur.scm 122 */
					BgL_typez00_bglt BgL_arg1476z00_2328;

					BgL_arg1476z00_2328 =
						BGl_getzd2typezd2zztype_typeofz00(
						((BgL_nodez00_bglt)
							((BgL_funcallz00_bglt) BgL_nodez00_2229)), ((bool_t) 0));
					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
						(BgL_arg1476z00_2328);
				}
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2229)))->BgL_funz00));
				BgL_tmpz00_2767 =
					BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2229)))->BgL_argsz00));
				return BBOOL(BgL_tmpz00_2767);
			}
		}

	}



/* &occur-node!-app-ly1283 */
	obj_t BGl_z62occurzd2nodez12zd2appzd2ly1283za2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2230, obj_t BgL_nodez00_2231)
	{
		{	/* Ast/toccur.scm 112 */
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2231)))->BgL_funz00));
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2231)))->BgL_argz00));
		}

	}



/* &occur-node!-app1281 */
	obj_t BGl_z62occurzd2nodez12zd2app1281z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2232, obj_t BgL_nodez00_2233)
	{
		{	/* Ast/toccur.scm 99 */
			{	/* Ast/toccur.scm 100 */
				bool_t BgL_tmpz00_2785;

				{	/* Ast/toccur.scm 101 */
					BgL_varz00_bglt BgL_arg1441z00_2331;

					BgL_arg1441z00_2331 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2233)))->BgL_funz00);
					BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
						((BgL_nodez00_bglt) BgL_arg1441z00_2331));
				}
				BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2233)))->BgL_argsz00));
				{	/* Ast/toccur.scm 103 */
					BgL_variablez00_bglt BgL_varz00_2332;

					BgL_varz00_2332 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2233)))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Ast/toccur.scm 103 */
						BgL_valuez00_bglt BgL_valz00_2333;

						BgL_valz00_2333 =
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2332))->BgL_valuez00);
						{	/* Ast/toccur.scm 104 */

							{	/* Ast/toccur.scm 105 */
								bool_t BgL_test1945z00_2797;

								{	/* Ast/toccur.scm 105 */
									bool_t BgL_res1853z00_2334;

									BgL_res1853z00_2334 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_valz00_2333), BGl_cfunz00zzast_varz00);
									BgL_test1945z00_2797 = BgL_res1853z00_2334;
								}
								if (BgL_test1945z00_2797)
									{	/* Ast/toccur.scm 105 */
										BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
											(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2332))->
												BgL_typez00));
										{	/* Ast/toccur.scm 107 */
											obj_t BgL_g1257z00_2335;

											BgL_g1257z00_2335 =
												(((BgL_cfunz00_bglt) COBJECT(
														((BgL_cfunz00_bglt) BgL_valz00_2333)))->
												BgL_argszd2typezd2);
											{
												obj_t BgL_l1255z00_2337;

												BgL_l1255z00_2337 = BgL_g1257z00_2335;
											BgL_zc3z04anonymousza31449ze3z87_2336:
												if (PAIRP(BgL_l1255z00_2337))
													{	/* Ast/toccur.scm 107 */
														{	/* Ast/toccur.scm 107 */
															obj_t BgL_arg1461z00_2338;

															BgL_arg1461z00_2338 = CAR(BgL_l1255z00_2337);
															BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																(((BgL_typez00_bglt) BgL_arg1461z00_2338));
														}
														{
															obj_t BgL_l1255z00_2809;

															BgL_l1255z00_2809 = CDR(BgL_l1255z00_2337);
															BgL_l1255z00_2337 = BgL_l1255z00_2809;
															goto BgL_zc3z04anonymousza31449ze3z87_2336;
														}
													}
												else
													{	/* Ast/toccur.scm 107 */
														BgL_tmpz00_2785 = ((bool_t) 1);
													}
											}
										}
									}
								else
									{	/* Ast/toccur.scm 105 */
										BgL_tmpz00_2785 = ((bool_t) 0);
									}
							}
						}
					}
				}
				return BBOOL(BgL_tmpz00_2785);
			}
		}

	}



/* &occur-node!-sync1279 */
	obj_t BGl_z62occurzd2nodez12zd2sync1279z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2234, obj_t BgL_nodez00_2235)
	{
		{	/* Ast/toccur.scm 91 */
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2235)))->BgL_mutexz00));
			BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2235)))->BgL_prelockz00));
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2235)))->BgL_bodyz00));
		}

	}



/* &occur-node!-sequence1277 */
	obj_t BGl_z62occurzd2nodez12zd2sequence1277z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2236, obj_t BgL_nodez00_2237)
	{
		{	/* Ast/toccur.scm 85 */
			return
				BBOOL(BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2237)))->BgL_nodesz00)));
		}

	}



/* &occur-node!-var1275 */
	obj_t BGl_z62occurzd2nodez12zd2var1275z70zzast_typezd2occurzd2(obj_t
		BgL_envz00_2238, obj_t BgL_nodez00_2239)
	{
		{	/* Ast/toccur.scm 76 */
			{	/* Ast/toccur.scm 77 */
				BgL_variablez00_bglt BgL_vz00_2342;

				BgL_vz00_2342 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2239)))->BgL_variablez00);
				{	/* Ast/toccur.scm 78 */
					BgL_valuez00_bglt BgL_valuez00_2343;

					BgL_valuez00_2343 =
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2342))->BgL_valuez00);
					{	/* Ast/toccur.scm 79 */
						bool_t BgL_test1947z00_2828;

						{	/* Ast/toccur.scm 79 */
							bool_t BgL_test1948z00_2829;

							{	/* Ast/toccur.scm 79 */
								bool_t BgL_res1851z00_2344;

								BgL_res1851z00_2344 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_valuez00_2343), BGl_scnstz00zzast_varz00);
								BgL_test1948z00_2829 = BgL_res1851z00_2344;
							}
							if (BgL_test1948z00_2829)
								{	/* Ast/toccur.scm 79 */
									obj_t BgL_arg1396z00_2345;

									BgL_arg1396z00_2345 =
										(((BgL_scnstz00_bglt) COBJECT(
												((BgL_scnstz00_bglt) BgL_valuez00_2343)))->BgL_nodez00);
									BgL_test1947z00_2828 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1396z00_2345,
										BGl_nodez00zzast_nodez00);
								}
							else
								{	/* Ast/toccur.scm 79 */
									BgL_test1947z00_2828 = ((bool_t) 0);
								}
						}
						if (BgL_test1947z00_2828)
							{	/* Ast/toccur.scm 80 */
								obj_t BgL_arg1394z00_2346;

								BgL_arg1394z00_2346 =
									(((BgL_scnstz00_bglt) COBJECT(
											((BgL_scnstz00_bglt) BgL_valuez00_2343)))->BgL_nodez00);
								return
									BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
									((BgL_nodez00_bglt) BgL_arg1394z00_2346));
							}
						else
							{	/* Ast/toccur.scm 79 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2()
	{
		{	/* Ast/toccur.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
			return
				BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1891z00zzast_typezd2occurzd2));
		}

	}

#ifdef __cplusplus
}
#endif
