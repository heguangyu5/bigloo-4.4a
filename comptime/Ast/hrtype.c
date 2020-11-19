/*===========================================================================*/
/*   (Ast/hrtype.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/hrtype.scm) */
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

	typedef struct BgL_wideningz00_bgl
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
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_wideningz00_bglt;

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


	static obj_t
		BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(BgL_variablez00_bglt);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62hrtypezd2nodez12zd2vsetz121287z62zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2app1267z70zzast_hrtypez00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2cast1293z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2setq1295z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2boxzd2ref1315za2zzast_hrtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t);
	static bool_t BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_wideningz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2makezd2bo1311za2zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2sequenc1263z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2instanc1291z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_hrtypez00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2new1281z70zzast_hrtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez121258za2zzast_hrtypez00(obj_t, obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2letzd2fun1303za2zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12za2zzast_hrtypez00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_hrtypez00 = BUNSPEC;
	static obj_t BGl_z62hrtypezd2nodez12zd2vlength1289z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2var1261z70zzast_hrtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_hrtypez00();
	static obj_t BGl_genericzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t
		BGl_z62hrtypezd2nodez12zd2setzd2exzd21307z70zzast_hrtypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2letzd2var1305za2zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2sync1265z70zzast_hrtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2boxzd2set1313za2zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2fail1299z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2funcall1271z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2conditi1297z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	static obj_t BGl_z62hrtypezd2nodez12zd2widenin1279z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2setfiel1277z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_hrtypez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_hrtypez00();
	extern obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2vref1285z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_hrtypez00();
	static obj_t BGl_z62hrtypezd2nodez12zd2valloc1283z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2switch1301z70zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62hrtypezd2nodez12zd2appzd2ly1269za2zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2jumpzd2ex1309za2zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62hrtypezd2nodez12zd2getfiel1275z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z62hrtypezd2nodez12zd2extern1273z70zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1930z00,
		BGl_z62hrtypezd2nodez12zd2extern1273z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1931z00,
		BGl_z62hrtypezd2nodez12zd2getfiel1275z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1932z00,
		BGl_z62hrtypezd2nodez12zd2setfiel1277z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1933z00,
		BGl_z62hrtypezd2nodez12zd2widenin1279z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1934z00,
		BGl_z62hrtypezd2nodez12zd2new1281z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1935z00,
		BGl_z62hrtypezd2nodez12zd2valloc1283z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1936z00,
		BGl_z62hrtypezd2nodez12zd2vref1285z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1907z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1937z00,
		BGl_z62hrtypezd2nodez12zd2vsetz121287z62zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1938z00,
		BGl_z62hrtypezd2nodez12zd2vlength1289z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1939z00,
		BGl_z62hrtypezd2nodez12zd2instanc1291z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1940z00,
		BGl_z62hrtypezd2nodez12zd2cast1293z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1941z00,
		BGl_z62hrtypezd2nodez12zd2setq1295z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1942z00,
		BGl_z62hrtypezd2nodez12zd2conditi1297z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1913z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1943z00,
		BGl_z62hrtypezd2nodez12zd2fail1299z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1914z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1944z00,
		BGl_z62hrtypezd2nodez12zd2switch1301z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1915z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1945z00,
		BGl_z62hrtypezd2nodez12zd2letzd2fun1303za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1916z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1946z00,
		BGl_z62hrtypezd2nodez12zd2letzd2var1305za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1917z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1947z00,
		BGl_z62hrtypezd2nodez12zd2setzd2exzd21307z70zzast_hrtypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1918z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1948z00,
		BGl_z62hrtypezd2nodez12zd2jumpzd2ex1309za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1919z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1949z00,
		BGl_z62hrtypezd2nodez12zd2makezd2bo1311za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1920z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1950z00,
		BGl_z62hrtypezd2nodez12zd2boxzd2set1313za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1921z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1951z00,
		BGl_z62hrtypezd2nodez12zd2boxzd2ref1315za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1892z00zzast_hrtypez00,
		BgL_bgl_string1892za700za7za7a1952za7, "hrtype-node!1258", 16);
	      DEFINE_STRING(BGl_string1894z00zzast_hrtypez00,
		BgL_bgl_string1894za700za7za7a1953za7, "hrtype-node!", 12);
	      DEFINE_STRING(BGl_string1922z00zzast_hrtypez00,
		BgL_bgl_string1922za700za7za7a1954za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1923z00zzast_hrtypez00,
		BgL_bgl_string1923za700za7za7a1955za7, "heap", 4);
	      DEFINE_STRING(BGl_string1924z00zzast_hrtypez00,
		BgL_bgl_string1924za700za7za7a1956za7, "Can't find library variable", 27);
	      DEFINE_STRING(BGl_string1925z00zzast_hrtypez00,
		BgL_bgl_string1925za700za7za7a1957za7, "ast_hrtype", 10);
	      DEFINE_STRING(BGl_string1926z00zzast_hrtypez00,
		BgL_bgl_string1926za700za7za7a1958za7, "static sifun ", 13);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1959z00,
		BGl_z62hrtypezd2nodez12za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1960z00,
		BGl_z62hrtypezd2nodez121258za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1961z00,
		BGl_z62hrtypezd2nodez12zd2var1261z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1962z00,
		BGl_z62hrtypezd2nodez12zd2sequenc1263z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1963z00,
		BGl_z62hrtypezd2nodez12zd2sync1265z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1964z00,
		BGl_z62hrtypezd2nodez12zd2app1267z70zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1965z00,
		BGl_z62hrtypezd2nodez12zd2appzd2ly1269za2zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzast_hrtypez00,
		BgL_bgl_za762hrtypeza7d2node1966z00,
		BGl_z62hrtypezd2nodez12zd2funcall1271z70zzast_hrtypez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_hrtypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long
		BgL_checksumz00_2234, char *BgL_fromz00_2235)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_hrtypez00))
				{
					BGl_requirezd2initializa7ationz75zzast_hrtypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_hrtypez00();
					BGl_libraryzd2moduleszd2initz00zzast_hrtypez00();
					BGl_cnstzd2initzd2zzast_hrtypez00();
					BGl_importedzd2moduleszd2initz00zzast_hrtypez00();
					BGl_genericzd2initzd2zzast_hrtypez00();
					BGl_methodzd2initzd2zzast_hrtypez00();
					return BGl_toplevelzd2initzd2zzast_hrtypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_hrtype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			{	/* Ast/hrtype.scm 17 */
				obj_t BgL_cportz00_2061;

				{	/* Ast/hrtype.scm 17 */
					obj_t BgL_stringz00_2069;

					BgL_stringz00_2069 = BGl_string1926z00zzast_hrtypez00;
					{	/* Ast/hrtype.scm 17 */
						obj_t BgL_startz00_2070;

						BgL_startz00_2070 = BINT(((long) 0));
						{	/* Ast/hrtype.scm 17 */
							obj_t BgL_endz00_2071;

							BgL_endz00_2071 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2069)));
							{	/* Ast/hrtype.scm 17 */

								BgL_cportz00_2061 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2069, BgL_startz00_2070, BgL_endz00_2071);
				}}}}
				{
					long BgL_iz00_2062;

					BgL_iz00_2062 = ((long) 1);
				BgL_loopz00_2063:
					if ((BgL_iz00_2062 == ((long) -1)))
						{	/* Ast/hrtype.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/hrtype.scm 17 */
							{	/* Ast/hrtype.scm 17 */
								obj_t BgL_arg1928z00_2065;

								{	/* Ast/hrtype.scm 17 */

									{	/* Ast/hrtype.scm 17 */
										obj_t BgL_locationz00_2067;

										BgL_locationz00_2067 = BBOOL(((bool_t) 0));
										{	/* Ast/hrtype.scm 17 */

											BgL_arg1928z00_2065 =
												BGl_readz00zz__readerz00(BgL_cportz00_2061,
												BgL_locationz00_2067);
										}
									}
								}
								{	/* Ast/hrtype.scm 17 */
									int BgL_tmpz00_2264;

									BgL_tmpz00_2264 = (int) (BgL_iz00_2062);
									CNST_TABLE_SET(BgL_tmpz00_2264, BgL_arg1928z00_2065);
							}}
							{	/* Ast/hrtype.scm 17 */
								int BgL_auxz00_2068;

								BgL_auxz00_2068 = (int) ((BgL_iz00_2062 - ((long) 1)));
								{
									long BgL_iz00_2269;

									BgL_iz00_2269 = (long) (BgL_auxz00_2068);
									BgL_iz00_2062 = BgL_iz00_2269;
									goto BgL_loopz00_2063;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			return BUNSPEC;
		}

	}



/* hrtype-node*! */
	bool_t BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(obj_t BgL_nodeza2za2_32)
	{
		{	/* Ast/hrtype.scm 372 */
			{
				obj_t BgL_l1256z00_1365;

				BgL_l1256z00_1365 = BgL_nodeza2za2_32;
			BgL_zc3z04anonymousza31320ze3z87_1366:
				if (PAIRP(BgL_l1256z00_1365))
					{	/* Ast/hrtype.scm 373 */
						{	/* Ast/hrtype.scm 373 */
							obj_t BgL_arg1322z00_1368;

							BgL_arg1322z00_1368 = CAR(BgL_l1256z00_1365);
							BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
								((BgL_nodez00_bglt) BgL_arg1322z00_1368));
						}
						{
							obj_t BgL_l1256z00_2277;

							BgL_l1256z00_2277 = CDR(BgL_l1256z00_1365);
							BgL_l1256z00_1365 = BgL_l1256z00_2277;
							goto BgL_zc3z04anonymousza31320ze3z87_1366;
						}
					}
				else
					{	/* Ast/hrtype.scm 373 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* restore-variable-type! */
	obj_t BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(BgL_variablez00_bglt
		BgL_variablez00_33)
	{
		{	/* Ast/hrtype.scm 378 */
			{	/* Ast/hrtype.scm 379 */
				BgL_typez00_bglt BgL_typez00_1371;

				BgL_typez00_1371 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_33))->BgL_typez00);
				return
					((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_33))->BgL_typez00) =
					((BgL_typez00_bglt)
						BGl_findzd2typezd2zztype_envz00((((BgL_typez00_bglt)
									COBJECT(BgL_typez00_1371))->BgL_idz00))), BUNSPEC);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_proc1891z00zzast_hrtypez00, BGl_nodez00zzast_nodez00,
				BGl_string1892z00zzast_hrtypez00);
		}

	}



/* &hrtype-node!1258 */
	obj_t BGl_z62hrtypezd2nodez121258za2zzast_hrtypez00(obj_t BgL_envz00_1973,
		obj_t BgL_nodez00_1974)
	{
		{	/* Ast/hrtype.scm 32 */
			{
				BgL_typez00_bglt BgL_auxz00_2284;

				{	/* Ast/hrtype.scm 35 */
					obj_t BgL_arg1331z00_2075;

					BgL_arg1331z00_2075 =
						(((BgL_typez00_bglt) COBJECT(
								(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_nodez00_1974)))->BgL_typez00)))->
						BgL_idz00);
					BgL_auxz00_2284 =
						BGl_findzd2typezd2zztype_envz00(BgL_arg1331z00_2075);
				}
				return
					((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_nodez00_1974)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_auxz00_2284), BUNSPEC);
			}
		}

	}



/* hrtype-node! */
	BGL_EXPORTED_DEF obj_t BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		{	/* Ast/hrtype.scm 32 */
			{	/* Ast/hrtype.scm 32 */
				obj_t BgL_method1259z00_1385;

				{	/* Ast/hrtype.scm 32 */
					obj_t BgL_res1876z00_1909;

					{	/* Ast/hrtype.scm 32 */
						long BgL_objzd2classzd2numz00_1874;

						{	/* Ast/hrtype.scm 32 */
							long BgL_res1866z00_1877;

							BgL_res1866z00_1877 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_3));
							BgL_objzd2classzd2numz00_1874 = BgL_res1866z00_1877;
						}
						{	/* Ast/hrtype.scm 32 */
							obj_t BgL_arg1813z00_1875;

							BgL_arg1813z00_1875 =
								PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
								(int) (((long) 1)));
							{	/* Ast/hrtype.scm 32 */
								int BgL_offsetz00_1879;

								BgL_offsetz00_1879 = (int) (BgL_objzd2classzd2numz00_1874);
								{	/* Ast/hrtype.scm 32 */
									long BgL_offsetz00_1880;

									BgL_offsetz00_1880 =
										((long) (BgL_offsetz00_1879) - OBJECT_TYPE);
									{	/* Ast/hrtype.scm 32 */
										long BgL_modz00_1881;

										BgL_modz00_1881 =
											(BgL_offsetz00_1880 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/hrtype.scm 32 */
											long BgL_restz00_1883;

											BgL_restz00_1883 =
												(BgL_offsetz00_1880 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/hrtype.scm 32 */

												{	/* Ast/hrtype.scm 32 */
													obj_t BgL_bucketz00_1885;

													BgL_bucketz00_1885 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1875), BgL_modz00_1881);
													BgL_res1876z00_1909 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1885), BgL_restz00_1883);
					}}}}}}}}
					BgL_method1259z00_1385 = BgL_res1876z00_1909;
				}
				return
					PROCEDURE_ENTRY(BgL_method1259z00_1385) (BgL_method1259z00_1385,
					((obj_t) BgL_nodez00_3), BEOA);
			}
		}

	}



/* &hrtype-node! */
	obj_t BGl_z62hrtypezd2nodez12za2zzast_hrtypez00(obj_t BgL_envz00_1975,
		obj_t BgL_nodez00_1976)
	{
		{	/* Ast/hrtype.scm 32 */
			return
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
				((BgL_nodez00_bglt) BgL_nodez00_1976));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_varz00zzast_nodez00,
				BGl_proc1893z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1895z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_syncz00zzast_nodez00,
				BGl_proc1896z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_appz00zzast_nodez00,
				BGl_proc1897z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1898z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1899z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_externz00zzast_nodez00, BGl_proc1900z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_getfieldz00zzast_nodez00, BGl_proc1901z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_setfieldz00zzast_nodez00, BGl_proc1902z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_wideningz00zzast_nodez00, BGl_proc1903z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_newz00zzast_nodez00,
				BGl_proc1904z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_vallocz00zzast_nodez00, BGl_proc1905z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_vrefz00zzast_nodez00,
				BGl_proc1906z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc1907z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_vlengthz00zzast_nodez00, BGl_proc1908z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_instanceofz00zzast_nodez00, BGl_proc1909z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_castz00zzast_nodez00,
				BGl_proc1910z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_setqz00zzast_nodez00,
				BGl_proc1911z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1912z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_failz00zzast_nodez00,
				BGl_proc1913z00zzast_hrtypez00, BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_switchz00zzast_nodez00, BGl_proc1914z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1915z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1916z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1917z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1918z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1919z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1920z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1921z00zzast_hrtypez00,
				BGl_string1894z00zzast_hrtypez00);
		}

	}



/* &hrtype-node!-box-ref1315 */
	obj_t BGl_z62hrtypezd2nodez12zd2boxzd2ref1315za2zzast_hrtypez00(obj_t
		BgL_envz00_2005, obj_t BgL_nodez00_2006)
	{
		{	/* Ast/hrtype.scm 364 */
			{

				{	/* Ast/hrtype.scm 366 */
					BgL_varz00_bglt BgL_arg1755z00_2079;

					BgL_arg1755z00_2079 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2006)))->BgL_varz00);
					BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
						((BgL_nodez00_bglt) BgL_arg1755z00_2079));
				}
				{	/* Ast/hrtype.scm 364 */
					obj_t BgL_nextzd2method1314zd2_2078;

					BgL_nextzd2method1314zd2_2078 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2006)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_boxzd2refzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1314zd2_2078)
						(BgL_nextzd2method1314zd2_2078,
						((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2006)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-box-set1313 */
	obj_t BGl_z62hrtypezd2nodez12zd2boxzd2set1313za2zzast_hrtypez00(obj_t
		BgL_envz00_2007, obj_t BgL_nodez00_2008)
	{
		{	/* Ast/hrtype.scm 355 */
			{

				{	/* Ast/hrtype.scm 357 */
					BgL_varz00_bglt BgL_arg1747z00_2083;

					BgL_arg1747z00_2083 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2008)))->BgL_varz00);
					BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
						((BgL_nodez00_bglt) BgL_arg1747z00_2083));
				}
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2008)))->BgL_valuez00));
				{	/* Ast/hrtype.scm 355 */
					obj_t BgL_nextzd2method1312zd2_2082;

					BgL_nextzd2method1312zd2_2082 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2008)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_boxzd2setz12zc0zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1312zd2_2082)
						(BgL_nextzd2method1312zd2_2082,
						((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2008)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-make-bo1311 */
	obj_t BGl_z62hrtypezd2nodez12zd2makezd2bo1311za2zzast_hrtypez00(obj_t
		BgL_envz00_2009, obj_t BgL_nodez00_2010)
	{
		{	/* Ast/hrtype.scm 347 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2010)))->BgL_valuez00));
				{	/* Ast/hrtype.scm 347 */
					obj_t BgL_nextzd2method1310zd2_2086;

					BgL_nextzd2method1310zd2_2086 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2010)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_makezd2boxzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1310zd2_2086)
						(BgL_nextzd2method1310zd2_2086,
						((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2010)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-jump-ex1309 */
	obj_t BGl_z62hrtypezd2nodez12zd2jumpzd2ex1309za2zzast_hrtypez00(obj_t
		BgL_envz00_2011, obj_t BgL_nodez00_2012)
	{
		{	/* Ast/hrtype.scm 338 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2012)))->
						BgL_exitz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00((((BgL_jumpzd2exzd2itz00_bglt)
							COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2012)))->
						BgL_valuez00));
				{	/* Ast/hrtype.scm 338 */
					obj_t BgL_nextzd2method1308zd2_2089;

					BgL_nextzd2method1308zd2_2089 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2012)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_jumpzd2exzd2itz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1308zd2_2089)
						(BgL_nextzd2method1308zd2_2089,
						((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2012)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-set-ex-1307 */
	obj_t BGl_z62hrtypezd2nodez12zd2setzd2exzd21307z70zzast_hrtypez00(obj_t
		BgL_envz00_2013, obj_t BgL_nodez00_2014)
	{
		{	/* Ast/hrtype.scm 328 */
			{

				BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(
					(((BgL_varz00_bglt) COBJECT(
								(((BgL_setzd2exzd2itz00_bglt) COBJECT(
											((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2014)))->
									BgL_varz00)))->BgL_variablez00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00((((BgL_setzd2exzd2itz00_bglt)
							COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2014)))->
						BgL_bodyz00));
				{	/* Ast/hrtype.scm 332 */
					BgL_varz00_bglt BgL_arg1743z00_2093;

					BgL_arg1743z00_2093 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2014)))->BgL_varz00);
					BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
						((BgL_nodez00_bglt) BgL_arg1743z00_2093));
				}
				{	/* Ast/hrtype.scm 328 */
					obj_t BgL_nextzd2method1306zd2_2092;

					BgL_nextzd2method1306zd2_2092 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2014)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_setzd2exzd2itz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1306zd2_2092)
						(BgL_nextzd2method1306zd2_2092,
						((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2014)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-let-var1305 */
	obj_t BGl_z62hrtypezd2nodez12zd2letzd2var1305za2zzast_hrtypez00(obj_t
		BgL_envz00_2015, obj_t BgL_nodez00_2016)
	{
		{	/* Ast/hrtype.scm 314 */
			{

				{	/* Ast/hrtype.scm 316 */
					obj_t BgL_g1255z00_2097;

					BgL_g1255z00_2097 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2016)))->BgL_bindingsz00);
					{
						obj_t BgL_l1253z00_2099;

						BgL_l1253z00_2099 = BgL_g1255z00_2097;
					BgL_zc3z04anonymousza31733ze3z87_2098:
						if (PAIRP(BgL_l1253z00_2099))
							{	/* Ast/hrtype.scm 316 */
								{	/* Ast/hrtype.scm 317 */
									obj_t BgL_bindingz00_2100;

									BgL_bindingz00_2100 = CAR(BgL_l1253z00_2099);
									{	/* Ast/hrtype.scm 317 */
										obj_t BgL_varz00_2101;
										obj_t BgL_valz00_2102;

										BgL_varz00_2101 = CAR(((obj_t) BgL_bindingz00_2100));
										BgL_valz00_2102 = CDR(((obj_t) BgL_bindingz00_2100));
										BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
											((BgL_nodez00_bglt) BgL_valz00_2102));
										BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(
											((BgL_variablez00_bglt) BgL_varz00_2101));
									}
								}
								{
									obj_t BgL_l1253z00_2440;

									BgL_l1253z00_2440 = CDR(BgL_l1253z00_2099);
									BgL_l1253z00_2099 = BgL_l1253z00_2440;
									goto BgL_zc3z04anonymousza31733ze3z87_2098;
								}
							}
						else
							{	/* Ast/hrtype.scm 316 */
								((bool_t) 1);
							}
					}
				}
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2016)))->BgL_bodyz00));
				{	/* Ast/hrtype.scm 314 */
					obj_t BgL_nextzd2method1304zd2_2096;

					BgL_nextzd2method1304zd2_2096 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2016)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_letzd2varzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1304zd2_2096)
						(BgL_nextzd2method1304zd2_2096,
						((obj_t) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2016)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-let-fun1303 */
	obj_t BGl_z62hrtypezd2nodez12zd2letzd2fun1303za2zzast_hrtypez00(obj_t
		BgL_envz00_2017, obj_t BgL_nodez00_2018)
	{
		{	/* Ast/hrtype.scm 288 */
			{

				{	/* Ast/hrtype.scm 290 */
					obj_t BgL_g1252z00_2106;

					BgL_g1252z00_2106 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2018)))->BgL_localsz00);
					{
						obj_t BgL_l1250z00_2108;

						BgL_l1250z00_2108 = BgL_g1252z00_2106;
					BgL_zc3z04anonymousza31708ze3z87_2107:
						if (PAIRP(BgL_l1250z00_2108))
							{	/* Ast/hrtype.scm 290 */
								{	/* Ast/hrtype.scm 291 */
									obj_t BgL_localz00_2109;

									BgL_localz00_2109 = CAR(BgL_l1250z00_2108);
									{	/* Ast/hrtype.scm 291 */
										BgL_valuez00_bglt BgL_sfunz00_2110;

										BgL_sfunz00_2110 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_localz00_2109))))->
											BgL_valuez00);
										{	/* Ast/hrtype.scm 292 */
											obj_t BgL_g1125z00_2111;

											BgL_g1125z00_2111 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_sfunz00_2110)))->
												BgL_argsz00);
											{
												obj_t BgL_argsz00_2113;

												BgL_argsz00_2113 = BgL_g1125z00_2111;
											BgL_loopz00_2112:
												if (PAIRP(BgL_argsz00_2113))
													{	/* Ast/hrtype.scm 294 */
														obj_t BgL_argz00_2114;

														BgL_argz00_2114 = CAR(BgL_argsz00_2113);
														if (BGl_isazf3zf3zz__objectz00(BgL_argz00_2114,
																BGl_typez00zztype_typez00))
															{	/* Ast/hrtype.scm 297 */
																BgL_typez00_bglt BgL_arg1719z00_2115;

																{	/* Ast/hrtype.scm 297 */
																	obj_t BgL_arg1725z00_2116;

																	BgL_arg1725z00_2116 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt) BgL_argz00_2114)))->
																		BgL_idz00);
																	BgL_arg1719z00_2115 =
																		BGl_findzd2typezd2zztype_envz00
																		(BgL_arg1725z00_2116);
																}
																{	/* Ast/hrtype.scm 297 */
																	obj_t BgL_tmpz00_2472;

																	BgL_tmpz00_2472 =
																		((obj_t) BgL_arg1719z00_2115);
																	SET_CAR(BgL_argsz00_2113, BgL_tmpz00_2472);
																}
															}
														else
															{	/* Ast/hrtype.scm 296 */
																if (BGl_isazf3zf3zz__objectz00(BgL_argz00_2114,
																		BGl_localz00zzast_varz00))
																	{	/* Ast/hrtype.scm 298 */
																		BGl_restorezd2variablezd2typez12z12zzast_hrtypez00
																			(((BgL_variablez00_bglt) (
																					(BgL_localz00_bglt)
																					BgL_argz00_2114)));
																	}
																else
																	{	/* Ast/hrtype.scm 298 */
																		BGl_errorz00zz__errorz00
																			(BGl_string1894z00zzast_hrtypez00,
																			BGl_string1922z00zzast_hrtypez00,
																			BGl_shapez00zztools_shapez00
																			(BgL_argz00_2114));
																	}
															}
														{
															obj_t BgL_argsz00_2482;

															BgL_argsz00_2482 = CDR(BgL_argsz00_2113);
															BgL_argsz00_2113 = BgL_argsz00_2482;
															goto BgL_loopz00_2112;
														}
													}
												else
													{	/* Ast/hrtype.scm 293 */
														((bool_t) 0);
													}
											}
										}
										BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(
											((BgL_variablez00_bglt) BgL_localz00_2109));
										{	/* Ast/hrtype.scm 306 */
											obj_t BgL_arg1729z00_2117;

											BgL_arg1729z00_2117 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_sfunz00_2110)))->
												BgL_bodyz00);
											BGl_hrtypezd2nodez12zc0zzast_hrtypez00(((BgL_nodez00_bglt)
													BgL_arg1729z00_2117));
										}
									}
								}
								{
									obj_t BgL_l1250z00_2490;

									BgL_l1250z00_2490 = CDR(BgL_l1250z00_2108);
									BgL_l1250z00_2108 = BgL_l1250z00_2490;
									goto BgL_zc3z04anonymousza31708ze3z87_2107;
								}
							}
						else
							{	/* Ast/hrtype.scm 290 */
								((bool_t) 1);
							}
					}
				}
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2018)))->BgL_bodyz00));
				{	/* Ast/hrtype.scm 288 */
					obj_t BgL_nextzd2method1302zd2_2105;

					BgL_nextzd2method1302zd2_2105 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2018)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_letzd2funzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1302zd2_2105)
						(BgL_nextzd2method1302zd2_2105,
						((obj_t) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2018)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-switch1301 */
	obj_t BGl_z62hrtypezd2nodez12zd2switch1301z70zzast_hrtypez00(obj_t
		BgL_envz00_2019, obj_t BgL_nodez00_2020)
	{
		{	/* Ast/hrtype.scm 276 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2504;

					{	/* Ast/hrtype.scm 278 */
						obj_t BgL_arg1695z00_2121;

						BgL_arg1695z00_2121 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_switchz00_bglt) COBJECT(
												((BgL_switchz00_bglt) BgL_nodez00_2020)))->
										BgL_itemzd2typezd2)))->BgL_idz00);
						BgL_auxz00_2504 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1695z00_2121);
					}
					((((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2020)))->
							BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_auxz00_2504), BUNSPEC);
				}
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2020)))->BgL_testz00));
				{	/* Ast/hrtype.scm 280 */
					obj_t BgL_g1249z00_2122;

					BgL_g1249z00_2122 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2020)))->BgL_clausesz00);
					{
						obj_t BgL_l1247z00_2124;

						BgL_l1247z00_2124 = BgL_g1249z00_2122;
					BgL_zc3z04anonymousza31698ze3z87_2123:
						if (PAIRP(BgL_l1247z00_2124))
							{	/* Ast/hrtype.scm 280 */
								{	/* Ast/hrtype.scm 281 */
									obj_t BgL_clausez00_2125;

									BgL_clausez00_2125 = CAR(BgL_l1247z00_2124);
									{	/* Ast/hrtype.scm 281 */
										obj_t BgL_arg1704z00_2126;

										BgL_arg1704z00_2126 = CDR(((obj_t) BgL_clausez00_2125));
										BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
											((BgL_nodez00_bglt) BgL_arg1704z00_2126));
									}
								}
								{
									obj_t BgL_l1247z00_2523;

									BgL_l1247z00_2523 = CDR(BgL_l1247z00_2124);
									BgL_l1247z00_2124 = BgL_l1247z00_2523;
									goto BgL_zc3z04anonymousza31698ze3z87_2123;
								}
							}
						else
							{	/* Ast/hrtype.scm 280 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/hrtype.scm 276 */
					obj_t BgL_nextzd2method1300zd2_2120;

					BgL_nextzd2method1300zd2_2120 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_switchz00_bglt) BgL_nodez00_2020)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_switchz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1300zd2_2120)
						(BgL_nextzd2method1300zd2_2120,
						((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2020)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-fail1299 */
	obj_t BGl_z62hrtypezd2nodez12zd2fail1299z70zzast_hrtypez00(obj_t
		BgL_envz00_2021, obj_t BgL_nodez00_2022)
	{
		{	/* Ast/hrtype.scm 266 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2022)))->BgL_procz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2022)))->BgL_msgz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2022)))->BgL_objz00));
				{	/* Ast/hrtype.scm 266 */
					obj_t BgL_nextzd2method1298zd2_2129;

					BgL_nextzd2method1298zd2_2129 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_failz00_bglt) BgL_nodez00_2022)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_failz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1298zd2_2129)
						(BgL_nextzd2method1298zd2_2129,
						((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2022)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-conditi1297 */
	obj_t BGl_z62hrtypezd2nodez12zd2conditi1297z70zzast_hrtypez00(obj_t
		BgL_envz00_2023, obj_t BgL_nodez00_2024)
	{
		{	/* Ast/hrtype.scm 256 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2024)))->BgL_testz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2024)))->BgL_truez00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2024)))->BgL_falsez00));
				{	/* Ast/hrtype.scm 256 */
					obj_t BgL_nextzd2method1296zd2_2132;

					BgL_nextzd2method1296zd2_2132 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt) BgL_nodez00_2024)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_conditionalz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1296zd2_2132)
						(BgL_nextzd2method1296zd2_2132,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2024)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-setq1295 */
	obj_t BGl_z62hrtypezd2nodez12zd2setq1295z70zzast_hrtypez00(obj_t
		BgL_envz00_2025, obj_t BgL_nodez00_2026)
	{
		{	/* Ast/hrtype.scm 247 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2026)))->BgL_valuez00));
				{	/* Ast/hrtype.scm 250 */
					BgL_varz00_bglt BgL_arg1672z00_2136;

					BgL_arg1672z00_2136 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2026)))->BgL_varz00);
					BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
						((BgL_nodez00_bglt) BgL_arg1672z00_2136));
				}
				{	/* Ast/hrtype.scm 247 */
					obj_t BgL_nextzd2method1294zd2_2135;

					BgL_nextzd2method1294zd2_2135 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setqz00_bglt) BgL_nodez00_2026)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_setqz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1294zd2_2135)
						(BgL_nextzd2method1294zd2_2135,
						((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2026)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-cast1293 */
	obj_t BGl_z62hrtypezd2nodez12zd2cast1293z70zzast_hrtypez00(obj_t
		BgL_envz00_2027, obj_t BgL_nodez00_2028)
	{
		{	/* Ast/hrtype.scm 239 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2028)))->BgL_argz00));
				{	/* Ast/hrtype.scm 239 */
					obj_t BgL_nextzd2method1292zd2_2139;

					BgL_nextzd2method1292zd2_2139 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_castz00_bglt) BgL_nodez00_2028)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_castz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1292zd2_2139)
						(BgL_nextzd2method1292zd2_2139,
						((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2028)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-instanc1291 */
	obj_t BGl_z62hrtypezd2nodez12zd2instanc1291z70zzast_hrtypez00(obj_t
		BgL_envz00_2029, obj_t BgL_nodez00_2030)
	{
		{	/* Ast/hrtype.scm 231 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2598;

					{	/* Ast/hrtype.scm 233 */
						obj_t BgL_arg1663z00_2143;

						BgL_arg1663z00_2143 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_instanceofz00_bglt) COBJECT(
												((BgL_instanceofz00_bglt) BgL_nodez00_2030)))->
										BgL_classz00)))->BgL_idz00);
						BgL_auxz00_2598 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1663z00_2143);
					}
					((((BgL_instanceofz00_bglt) COBJECT(
									((BgL_instanceofz00_bglt) BgL_nodez00_2030)))->BgL_classz00) =
						((BgL_typez00_bglt) BgL_auxz00_2598), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 231 */
					obj_t BgL_nextzd2method1290zd2_2142;

					BgL_nextzd2method1290zd2_2142 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt) BgL_nodez00_2030)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_instanceofz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1290zd2_2142)
						(BgL_nextzd2method1290zd2_2142,
						((obj_t) ((BgL_instanceofz00_bglt) BgL_nodez00_2030)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-vlength1289 */
	obj_t BGl_z62hrtypezd2nodez12zd2vlength1289z70zzast_hrtypez00(obj_t
		BgL_envz00_2031, obj_t BgL_nodez00_2032)
	{
		{	/* Ast/hrtype.scm 223 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2614;

					{	/* Ast/hrtype.scm 225 */
						obj_t BgL_arg1652z00_2147;

						BgL_arg1652z00_2147 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vlengthz00_bglt) COBJECT(
												((BgL_vlengthz00_bglt) BgL_nodez00_2032)))->
										BgL_vtypez00)))->BgL_idz00);
						BgL_auxz00_2614 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1652z00_2147);
					}
					((((BgL_vlengthz00_bglt) COBJECT(
									((BgL_vlengthz00_bglt) BgL_nodez00_2032)))->BgL_vtypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2614), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 223 */
					obj_t BgL_nextzd2method1288zd2_2146;

					BgL_nextzd2method1288zd2_2146 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt) BgL_nodez00_2032)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_vlengthz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1288zd2_2146)
						(BgL_nextzd2method1288zd2_2146,
						((obj_t) ((BgL_vlengthz00_bglt) BgL_nodez00_2032)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-vset!1287 */
	obj_t BGl_z62hrtypezd2nodez12zd2vsetz121287z62zzast_hrtypez00(obj_t
		BgL_envz00_2033, obj_t BgL_nodez00_2034)
	{
		{	/* Ast/hrtype.scm 213 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2630;

					{	/* Ast/hrtype.scm 215 */
						obj_t BgL_arg1631z00_2151;

						BgL_arg1631z00_2151 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vsetz12z12_bglt) COBJECT(
												((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->
										BgL_ftypez00)))->BgL_idz00);
						BgL_auxz00_2630 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1631z00_2151);
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2630), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2637;

					{	/* Ast/hrtype.scm 216 */
						obj_t BgL_arg1639z00_2152;

						BgL_arg1639z00_2152 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vsetz12z12_bglt) COBJECT(
												((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2637 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1639z00_2152);
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2637), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2644;

					{	/* Ast/hrtype.scm 217 */
						obj_t BgL_arg1641z00_2153;

						BgL_arg1641z00_2153 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vsetz12z12_bglt) COBJECT(
												((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->
										BgL_vtypez00)))->BgL_idz00);
						BgL_auxz00_2644 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1641z00_2153);
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2034)))->BgL_vtypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2644), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 213 */
					obj_t BgL_nextzd2method1286zd2_2150;

					BgL_nextzd2method1286zd2_2150 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_2034)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_vsetz12z12zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1286zd2_2150)
						(BgL_nextzd2method1286zd2_2150,
						((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_2034)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-vref1285 */
	obj_t BGl_z62hrtypezd2nodez12zd2vref1285z70zzast_hrtypez00(obj_t
		BgL_envz00_2035, obj_t BgL_nodez00_2036)
	{
		{	/* Ast/hrtype.scm 203 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2660;

					{	/* Ast/hrtype.scm 205 */
						obj_t BgL_arg1611z00_2157;

						BgL_arg1611z00_2157 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vrefz00_bglt) COBJECT(
												((BgL_vrefz00_bglt) BgL_nodez00_2036)))->
										BgL_ftypez00)))->BgL_idz00);
						BgL_auxz00_2660 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1611z00_2157);
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2036)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2660), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2667;

					{	/* Ast/hrtype.scm 206 */
						obj_t BgL_arg1613z00_2158;

						BgL_arg1613z00_2158 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vrefz00_bglt) COBJECT(
												((BgL_vrefz00_bglt) BgL_nodez00_2036)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2667 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1613z00_2158);
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2036)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2667), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2674;

					{	/* Ast/hrtype.scm 207 */
						obj_t BgL_arg1626z00_2159;

						BgL_arg1626z00_2159 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vrefz00_bglt) COBJECT(
												((BgL_vrefz00_bglt) BgL_nodez00_2036)))->
										BgL_vtypez00)))->BgL_idz00);
						BgL_auxz00_2674 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1626z00_2159);
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2036)))->BgL_vtypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2674), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 203 */
					obj_t BgL_nextzd2method1284zd2_2156;

					BgL_nextzd2method1284zd2_2156 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vrefz00_bglt) BgL_nodez00_2036)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_vrefz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1284zd2_2156)
						(BgL_nextzd2method1284zd2_2156,
						((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_2036)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-valloc1283 */
	obj_t BGl_z62hrtypezd2nodez12zd2valloc1283z70zzast_hrtypez00(obj_t
		BgL_envz00_2037, obj_t BgL_nodez00_2038)
	{
		{	/* Ast/hrtype.scm 194 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2690;

					{	/* Ast/hrtype.scm 196 */
						obj_t BgL_arg1599z00_2163;

						BgL_arg1599z00_2163 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vallocz00_bglt) COBJECT(
												((BgL_vallocz00_bglt) BgL_nodez00_2038)))->
										BgL_ftypez00)))->BgL_idz00);
						BgL_auxz00_2690 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1599z00_2163);
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt) BgL_nodez00_2038)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2690), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2697;

					{	/* Ast/hrtype.scm 197 */
						obj_t BgL_arg1605z00_2164;

						BgL_arg1605z00_2164 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_vallocz00_bglt) COBJECT(
												((BgL_vallocz00_bglt) BgL_nodez00_2038)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2697 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1605z00_2164);
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt) BgL_nodez00_2038)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2697), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 194 */
					obj_t BgL_nextzd2method1282zd2_2162;

					BgL_nextzd2method1282zd2_2162 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt) BgL_nodez00_2038)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_vallocz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1282zd2_2162)
						(BgL_nextzd2method1282zd2_2162,
						((obj_t) ((BgL_vallocz00_bglt) BgL_nodez00_2038)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-new1281 */
	obj_t BGl_z62hrtypezd2nodez12zd2new1281z70zzast_hrtypez00(obj_t
		BgL_envz00_2039, obj_t BgL_nodez00_2040)
	{
		{	/* Ast/hrtype.scm 186 */
			{

				{
					obj_t BgL_auxz00_2713;

					{	/* Ast/hrtype.scm 188 */
						obj_t BgL_l01246z00_2168;

						BgL_l01246z00_2168 =
							(((BgL_newz00_bglt) COBJECT(
									((BgL_newz00_bglt) BgL_nodez00_2040)))->BgL_argszd2typezd2);
						{
							obj_t BgL_l1245z00_2170;

							BgL_l1245z00_2170 = BgL_l01246z00_2168;
						BgL_zc3z04anonymousza31590ze3z87_2169:
							if (NULLP(BgL_l1245z00_2170))
								{	/* Ast/hrtype.scm 188 */
									BgL_auxz00_2713 = BgL_l01246z00_2168;
								}
							else
								{	/* Ast/hrtype.scm 188 */
									{	/* Ast/hrtype.scm 188 */
										BgL_typez00_bglt BgL_arg1592z00_2171;

										{	/* Ast/hrtype.scm 188 */
											obj_t BgL_tz00_2172;

											BgL_tz00_2172 = CAR(((obj_t) BgL_l1245z00_2170));
											{	/* Ast/hrtype.scm 188 */
												obj_t BgL_arg1593z00_2173;

												BgL_arg1593z00_2173 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_tz00_2172)))->BgL_idz00);
												BgL_arg1592z00_2171 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg1593z00_2173);
											}
										}
										{	/* Ast/hrtype.scm 188 */
											obj_t BgL_auxz00_2726;
											obj_t BgL_tmpz00_2724;

											BgL_auxz00_2726 = ((obj_t) BgL_arg1592z00_2171);
											BgL_tmpz00_2724 = ((obj_t) BgL_l1245z00_2170);
											SET_CAR(BgL_tmpz00_2724, BgL_auxz00_2726);
										}
									}
									{	/* Ast/hrtype.scm 188 */
										obj_t BgL_arg1597z00_2174;

										BgL_arg1597z00_2174 = CDR(((obj_t) BgL_l1245z00_2170));
										{
											obj_t BgL_l1245z00_2731;

											BgL_l1245z00_2731 = BgL_arg1597z00_2174;
											BgL_l1245z00_2170 = BgL_l1245z00_2731;
											goto BgL_zc3z04anonymousza31590ze3z87_2169;
										}
									}
								}
						}
					}
					((((BgL_newz00_bglt) COBJECT(
									((BgL_newz00_bglt) BgL_nodez00_2040)))->BgL_argszd2typezd2) =
						((obj_t) BgL_auxz00_2713), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 186 */
					obj_t BgL_nextzd2method1280zd2_2167;

					BgL_nextzd2method1280zd2_2167 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_newz00_bglt) BgL_nodez00_2040)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_newz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1280zd2_2167)
						(BgL_nextzd2method1280zd2_2167,
						((obj_t) ((BgL_newz00_bglt) BgL_nodez00_2040)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-widenin1279 */
	obj_t BGl_z62hrtypezd2nodez12zd2widenin1279z70zzast_hrtypez00(obj_t
		BgL_envz00_2041, obj_t BgL_nodez00_2042)
	{
		{	/* Ast/hrtype.scm 178 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2742;

					{	/* Ast/hrtype.scm 180 */
						obj_t BgL_arg1588z00_2178;

						BgL_arg1588z00_2178 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_wideningz00_bglt) COBJECT(
												((BgL_wideningz00_bglt) BgL_nodez00_2042)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2742 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1588z00_2178);
					}
					((((BgL_wideningz00_bglt) COBJECT(
									((BgL_wideningz00_bglt) BgL_nodez00_2042)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2742), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 178 */
					obj_t BgL_nextzd2method1278zd2_2177;

					BgL_nextzd2method1278zd2_2177 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_wideningz00_bglt) BgL_nodez00_2042)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_wideningz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1278zd2_2177)
						(BgL_nextzd2method1278zd2_2177,
						((obj_t) ((BgL_wideningz00_bglt) BgL_nodez00_2042)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-setfiel1277 */
	obj_t BGl_z62hrtypezd2nodez12zd2setfiel1277z70zzast_hrtypez00(obj_t
		BgL_envz00_2043, obj_t BgL_nodez00_2044)
	{
		{	/* Ast/hrtype.scm 169 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2758;

					{	/* Ast/hrtype.scm 171 */
						obj_t BgL_arg1575z00_2182;

						BgL_arg1575z00_2182 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_setfieldz00_bglt) COBJECT(
												((BgL_setfieldz00_bglt) BgL_nodez00_2044)))->
										BgL_ftypez00)))->BgL_idz00);
						BgL_auxz00_2758 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1575z00_2182);
					}
					((((BgL_setfieldz00_bglt) COBJECT(
									((BgL_setfieldz00_bglt) BgL_nodez00_2044)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2758), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2765;

					{	/* Ast/hrtype.scm 172 */
						obj_t BgL_arg1582z00_2183;

						BgL_arg1582z00_2183 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_setfieldz00_bglt) COBJECT(
												((BgL_setfieldz00_bglt) BgL_nodez00_2044)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2765 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1582z00_2183);
					}
					((((BgL_setfieldz00_bglt) COBJECT(
									((BgL_setfieldz00_bglt) BgL_nodez00_2044)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2765), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 169 */
					obj_t BgL_nextzd2method1276zd2_2181;

					BgL_nextzd2method1276zd2_2181 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_setfieldz00_bglt) BgL_nodez00_2044)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_setfieldz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1276zd2_2181)
						(BgL_nextzd2method1276zd2_2181,
						((obj_t) ((BgL_setfieldz00_bglt) BgL_nodez00_2044)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-getfiel1275 */
	obj_t BGl_z62hrtypezd2nodez12zd2getfiel1275z70zzast_hrtypez00(obj_t
		BgL_envz00_2045, obj_t BgL_nodez00_2046)
	{
		{	/* Ast/hrtype.scm 160 */
			{

				{
					BgL_typez00_bglt BgL_auxz00_2781;

					{	/* Ast/hrtype.scm 162 */
						obj_t BgL_arg1561z00_2187;

						BgL_arg1561z00_2187 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_getfieldz00_bglt) COBJECT(
												((BgL_getfieldz00_bglt) BgL_nodez00_2046)))->
										BgL_ftypez00)))->BgL_idz00);
						BgL_auxz00_2781 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1561z00_2187);
					}
					((((BgL_getfieldz00_bglt) COBJECT(
									((BgL_getfieldz00_bglt) BgL_nodez00_2046)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2781), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_2788;

					{	/* Ast/hrtype.scm 163 */
						obj_t BgL_arg1565z00_2188;

						BgL_arg1565z00_2188 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_getfieldz00_bglt) COBJECT(
												((BgL_getfieldz00_bglt) BgL_nodez00_2046)))->
										BgL_otypez00)))->BgL_idz00);
						BgL_auxz00_2788 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1565z00_2188);
					}
					((((BgL_getfieldz00_bglt) COBJECT(
									((BgL_getfieldz00_bglt) BgL_nodez00_2046)))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_2788), BUNSPEC);
				}
				{	/* Ast/hrtype.scm 160 */
					obj_t BgL_nextzd2method1274zd2_2186;

					BgL_nextzd2method1274zd2_2186 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_getfieldz00_bglt) BgL_nodez00_2046)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_getfieldz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1274zd2_2186)
						(BgL_nextzd2method1274zd2_2186,
						((obj_t) ((BgL_getfieldz00_bglt) BgL_nodez00_2046)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-extern1273 */
	obj_t BGl_z62hrtypezd2nodez12zd2extern1273z70zzast_hrtypez00(obj_t
		BgL_envz00_2047, obj_t BgL_nodez00_2048)
	{
		{	/* Ast/hrtype.scm 152 */
			{

				BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2048)))->BgL_exprza2za2));
				{	/* Ast/hrtype.scm 152 */
					obj_t BgL_nextzd2method1272zd2_2191;

					BgL_nextzd2method1272zd2_2191 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_externz00_bglt) BgL_nodez00_2048)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_externz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1272zd2_2191)
						(BgL_nextzd2method1272zd2_2191,
						((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2048)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-funcall1271 */
	obj_t BGl_z62hrtypezd2nodez12zd2funcall1271z70zzast_hrtypez00(obj_t
		BgL_envz00_2049, obj_t BgL_nodez00_2050)
	{
		{	/* Ast/hrtype.scm 143 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2050)))->BgL_funz00));
				BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2050)))->BgL_argsz00));
				{	/* Ast/hrtype.scm 143 */
					obj_t BgL_nextzd2method1270zd2_2194;

					BgL_nextzd2method1270zd2_2194 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_funcallz00_bglt) BgL_nodez00_2050)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_funcallz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1270zd2_2194)
						(BgL_nextzd2method1270zd2_2194,
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2050)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-app-ly1269 */
	obj_t BGl_z62hrtypezd2nodez12zd2appzd2ly1269za2zzast_hrtypez00(obj_t
		BgL_envz00_2051, obj_t BgL_nodez00_2052)
	{
		{	/* Ast/hrtype.scm 134 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2052)))->BgL_funz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2052)))->BgL_argz00));
				{	/* Ast/hrtype.scm 134 */
					obj_t BgL_nextzd2method1268zd2_2197;

					BgL_nextzd2method1268zd2_2197 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2052)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_appzd2lyzd2zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1268zd2_2197)
						(BgL_nextzd2method1268zd2_2197,
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2052)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-app1267 */
	obj_t BGl_z62hrtypezd2nodez12zd2app1267z70zzast_hrtypez00(obj_t
		BgL_envz00_2053, obj_t BgL_nodez00_2054)
	{
		{	/* Ast/hrtype.scm 95 */
			{

				{	/* Ast/hrtype.scm 97 */
					BgL_varz00_bglt BgL_i1106z00_2201;

					BgL_i1106z00_2201 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2054)))->BgL_funz00);
					{	/* Ast/hrtype.scm 98 */
						bool_t BgL_test1977z00_2848;

						{	/* Ast/hrtype.scm 98 */
							BgL_variablez00_bglt BgL_arg1521z00_2202;

							BgL_arg1521z00_2202 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1106z00_2201))->
								BgL_variablez00);
							{	/* Ast/hrtype.scm 98 */
								bool_t BgL_res1879z00_2203;

								BgL_res1879z00_2203 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1521z00_2202), BGl_globalz00zzast_varz00);
								BgL_test1977z00_2848 = BgL_res1879z00_2203;
							}
						}
						if (BgL_test1977z00_2848)
							{	/* Ast/hrtype.scm 99 */
								BgL_valuez00_bglt BgL_valuez00_2204;

								BgL_valuez00_2204 =
									(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varz00_bglt) COBJECT(BgL_i1106z00_2201))->
												BgL_variablez00)))->BgL_valuez00);
								{	/* Ast/hrtype.scm 101 */
									bool_t BgL_test1978z00_2854;

									{	/* Ast/hrtype.scm 101 */
										bool_t BgL_res1880z00_2205;

										BgL_res1880z00_2205 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_valuez00_2204), BGl_cfunz00zzast_varz00);
										BgL_test1978z00_2854 = BgL_res1880z00_2205;
									}
									if (BgL_test1978z00_2854)
										{	/* Ast/hrtype.scm 102 */
											BgL_variablez00_bglt BgL_arg1394z00_2206;

											BgL_arg1394z00_2206 =
												(((BgL_varz00_bglt) COBJECT(BgL_i1106z00_2201))->
												BgL_variablez00);
											BGl_restorezd2globalz12zc0zzast_envz00(((obj_t)
													BgL_arg1394z00_2206));
										}
									else
										{	/* Ast/hrtype.scm 103 */
											bool_t BgL_test1979z00_2860;

											{	/* Ast/hrtype.scm 103 */
												bool_t BgL_res1881z00_2207;

												BgL_res1881z00_2207 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_valuez00_2204), BGl_sfunz00zzast_varz00);
												BgL_test1979z00_2860 = BgL_res1881z00_2207;
											}
											if (BgL_test1979z00_2860)
												{	/* Ast/hrtype.scm 104 */
													bool_t BgL_test1980z00_2863;

													if (
														((((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt) BgL_valuez00_2204)))->
																BgL_classz00) == CNST_TABLE_REF(((long) 0))))
														{	/* Ast/hrtype.scm 106 */
															bool_t BgL_test1982z00_2869;

															{	/* Ast/hrtype.scm 106 */
																BgL_variablez00_bglt BgL_arg1495z00_2208;

																BgL_arg1495z00_2208 =
																	(((BgL_varz00_bglt)
																		COBJECT(BgL_i1106z00_2201))->
																	BgL_variablez00);
																BgL_test1982z00_2869 =
																	CBOOL(BGl_alreadyzd2restoredzf3z21zzast_envz00
																	(((obj_t) BgL_arg1495z00_2208)));
															}
															if (BgL_test1982z00_2869)
																{	/* Ast/hrtype.scm 106 */
																	BgL_test1980z00_2863 = ((bool_t) 0);
																}
															else
																{	/* Ast/hrtype.scm 106 */
																	BgL_test1980z00_2863 = ((bool_t) 1);
																}
														}
													else
														{	/* Ast/hrtype.scm 104 */
															BgL_test1980z00_2863 = ((bool_t) 0);
														}
													if (BgL_test1980z00_2863)
														{	/* Ast/hrtype.scm 110 */
															BgL_variablez00_bglt BgL_arg1441z00_2209;

															BgL_arg1441z00_2209 =
																(((BgL_varz00_bglt)
																	COBJECT(BgL_i1106z00_2201))->BgL_variablez00);
															BGl_restorezd2globalz12zc0zzast_envz00(((obj_t)
																	BgL_arg1441z00_2209));
														}
													else
														{	/* Ast/hrtype.scm 116 */
															obj_t BgL_gz00_2210;

															{	/* Ast/hrtype.scm 116 */
																obj_t BgL_arg1476z00_2211;
																obj_t BgL_arg1477z00_2212;

																BgL_arg1476z00_2211 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					(((BgL_varz00_bglt)
																							COBJECT(BgL_i1106z00_2201))->
																						BgL_variablez00)))))->BgL_idz00);
																BgL_arg1477z00_2212 =
																	(((BgL_globalz00_bglt)
																		COBJECT(((BgL_globalz00_bglt) ((
																						(BgL_varz00_bglt)
																						COBJECT(BgL_i1106z00_2201))->
																					BgL_variablez00))))->BgL_modulez00);
																{	/* Ast/hrtype.scm 116 */
																	obj_t BgL_list1478z00_2213;

																	BgL_list1478z00_2213 =
																		MAKE_YOUNG_PAIR(BgL_arg1477z00_2212, BNIL);
																	BgL_gz00_2210 =
																		BGl_findzd2globalzd2zzast_envz00
																		(BgL_arg1476z00_2211, BgL_list1478z00_2213);
																}
															}
															if (BGl_isazf3zf3zz__objectz00(BgL_gz00_2210,
																	BGl_variablez00zzast_varz00))
																{	/* Ast/hrtype.scm 118 */
																	((((BgL_varz00_bglt)
																				COBJECT(BgL_i1106z00_2201))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt) BgL_gz00_2210)),
																		BUNSPEC);
																}
															else
																{	/* Ast/hrtype.scm 119 */
																	obj_t BgL_newzd2gzd2_2214;

																	{	/* Ast/hrtype.scm 119 */
																		obj_t BgL_arg1465z00_2215;

																		BgL_arg1465z00_2215 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							(((BgL_varz00_bglt)
																									COBJECT(BgL_i1106z00_2201))->
																								BgL_variablez00)))))->
																			BgL_idz00);
																		{	/* Ast/hrtype.scm 119 */
																			obj_t BgL_list1466z00_2216;

																			BgL_list1466z00_2216 =
																				MAKE_YOUNG_PAIR
																				(BGl_za2moduleza2z00zzmodule_modulez00,
																				BNIL);
																			BgL_newzd2gzd2_2214 =
																				BGl_findzd2globalzd2zzast_envz00
																				(BgL_arg1465z00_2215,
																				BgL_list1466z00_2216);
																		}
																	}
																	{	/* Ast/hrtype.scm 121 */
																		bool_t BgL_test1984z00_2896;

																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_newzd2gzd2_2214,
																				BGl_globalz00zzast_varz00))
																			{	/* Ast/hrtype.scm 121 */
																				BgL_test1984z00_2896 =
																					(
																					(((BgL_globalz00_bglt) COBJECT(
																								((BgL_globalz00_bglt)
																									BgL_newzd2gzd2_2214)))->
																						BgL_importz00) ==
																					CNST_TABLE_REF(((long) 1)));
																			}
																		else
																			{	/* Ast/hrtype.scm 121 */
																				BgL_test1984z00_2896 = ((bool_t) 0);
																			}
																		if (BgL_test1984z00_2896)
																			{	/* Ast/hrtype.scm 121 */
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_i1106z00_2201))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt) (
																							(BgL_variablez00_bglt) (
																								(BgL_globalz00_bglt)
																								BgL_newzd2gzd2_2214))),
																					BUNSPEC);
																			}
																		else
																			{	/* Ast/hrtype.scm 125 */
																				obj_t BgL_arg1461z00_2217;

																				BgL_arg1461z00_2217 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									(((BgL_varz00_bglt)
																											COBJECT
																											(BgL_i1106z00_2201))->
																										BgL_variablez00)))))->
																					BgL_idz00);
																				BGl_errorz00zz__errorz00
																					(BGl_string1923z00zzast_hrtypez00,
																					BGl_string1924z00zzast_hrtypez00,
																					BgL_arg1461z00_2217);
																			}
																	}
																}
														}
												}
											else
												{	/* Ast/hrtype.scm 103 */
													BFALSE;
												}
										}
								}
							}
						else
							{	/* Ast/hrtype.scm 98 */
								BFALSE;
							}
					}
				}
				BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2054)))->BgL_argsz00));
				{	/* Ast/hrtype.scm 95 */
					obj_t BgL_nextzd2method1266zd2_2200;

					BgL_nextzd2method1266zd2_2200 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_2054)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_appz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1266zd2_2200)
						(BgL_nextzd2method1266zd2_2200,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2054)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-sync1265 */
	obj_t BGl_z62hrtypezd2nodez12zd2sync1265z70zzast_hrtypez00(obj_t
		BgL_envz00_2055, obj_t BgL_nodez00_2056)
	{
		{	/* Ast/hrtype.scm 85 */
			{

				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2056)))->BgL_mutexz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2056)))->BgL_prelockz00));
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2056)))->BgL_bodyz00));
				{	/* Ast/hrtype.scm 85 */
					obj_t BgL_nextzd2method1264zd2_2220;

					BgL_nextzd2method1264zd2_2220 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_syncz00_bglt) BgL_nodez00_2056)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_syncz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1264zd2_2220)
						(BgL_nextzd2method1264zd2_2220,
						((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2056)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-sequenc1263 */
	obj_t BGl_z62hrtypezd2nodez12zd2sequenc1263z70zzast_hrtypez00(obj_t
		BgL_envz00_2057, obj_t BgL_nodez00_2058)
	{
		{	/* Ast/hrtype.scm 77 */
			{

				BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2058)))->BgL_nodesz00));
				{	/* Ast/hrtype.scm 77 */
					obj_t BgL_nextzd2method1262zd2_2223;

					BgL_nextzd2method1262zd2_2223 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_sequencez00_bglt) BgL_nodez00_2058)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_sequencez00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1262zd2_2223)
						(BgL_nextzd2method1262zd2_2223,
						((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2058)), BEOA);
				}
			}
		}

	}



/* &hrtype-node!-var1261 */
	obj_t BGl_z62hrtypezd2nodez12zd2var1261z70zzast_hrtypez00(obj_t
		BgL_envz00_2059, obj_t BgL_nodez00_2060)
	{
		{	/* Ast/hrtype.scm 40 */
			{

				{	/* Ast/hrtype.scm 65 */
					bool_t BgL_test1986z00_2953;

					{	/* Ast/hrtype.scm 65 */
						bool_t BgL_test1987z00_2954;

						{	/* Ast/hrtype.scm 65 */
							BgL_variablez00_bglt BgL_arg1371z00_2227;

							BgL_arg1371z00_2227 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2060)))->BgL_variablez00);
							{	/* Ast/hrtype.scm 65 */
								bool_t BgL_res1877z00_2228;

								BgL_res1877z00_2228 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1371z00_2227), BGl_globalz00zzast_varz00);
								BgL_test1987z00_2954 = BgL_res1877z00_2228;
							}
						}
						if (BgL_test1987z00_2954)
							{	/* Ast/hrtype.scm 66 */
								obj_t BgL_arg1363z00_2229;
								obj_t BgL_arg1364z00_2230;

								BgL_arg1363z00_2229 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2060)))->
														BgL_variablez00)))))->BgL_idz00);
								BgL_arg1364z00_2230 =
									(((BgL_globalz00_bglt)
										COBJECT(((BgL_globalz00_bglt) (((BgL_varz00_bglt)
														COBJECT(((BgL_varz00_bglt) BgL_nodez00_2060)))->
													BgL_variablez00))))->BgL_modulez00);
								BgL_test1986z00_2953 =
									CBOOL(BGl_globalzd2bucketzd2positionz00zzast_envz00
									(BgL_arg1363z00_2229, BgL_arg1364z00_2230));
							}
						else
							{	/* Ast/hrtype.scm 65 */
								BgL_test1986z00_2953 = ((bool_t) 0);
							}
					}
					if (BgL_test1986z00_2953)
						{	/* Ast/hrtype.scm 68 */
							obj_t BgL_nz00_2231;

							{	/* Ast/hrtype.scm 68 */
								obj_t BgL_arg1352z00_2232;
								obj_t BgL_arg1357z00_2233;

								BgL_arg1352z00_2232 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2060)))->
														BgL_variablez00)))))->BgL_idz00);
								BgL_arg1357z00_2233 =
									(((BgL_globalz00_bglt)
										COBJECT(((BgL_globalz00_bglt) (((BgL_varz00_bglt)
														COBJECT(((BgL_varz00_bglt) BgL_nodez00_2060)))->
													BgL_variablez00))))->BgL_modulez00);
								BgL_nz00_2231 =
									BGl_findzd2globalzf2modulez20zzast_envz00(BgL_arg1352z00_2232,
									BgL_arg1357z00_2233);
							}
							if (BGl_isazf3zf3zz__objectz00(BgL_nz00_2231,
									BGl_globalz00zzast_varz00))
								{	/* Ast/hrtype.scm 70 */
									((((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_nodez00_2060)))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
													(BgL_globalz00_bglt) BgL_nz00_2231))), BUNSPEC);
								}
							else
								{	/* Ast/hrtype.scm 70 */
									BFALSE;
								}
						}
					else
						{	/* Ast/hrtype.scm 65 */
							BFALSE;
						}
				}
				{	/* Ast/hrtype.scm 40 */
					obj_t BgL_nextzd2method1260zd2_2226;

					BgL_nextzd2method1260zd2_2226 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_varz00_bglt) BgL_nodez00_2060)),
						BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
						BGl_varz00zzast_nodez00);
					return
						PROCEDURE_ENTRY(BgL_nextzd2method1260zd2_2226)
						(BgL_nextzd2method1260zd2_2226,
						((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2060)), BEOA);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_hrtypez00()
	{
		{	/* Ast/hrtype.scm 17 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1925z00zzast_hrtypez00));
		}

	}

#ifdef __cplusplus
}
#endif
