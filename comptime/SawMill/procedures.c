/*===========================================================================*/
/*   (SawMill/procedures.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/procedures.scm) */
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


	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62getzd2fail1311zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2conditional1273zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62getzd2setq1266zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzsaw_proceduresz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2new1291zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62get1257z62zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_proceduresz00();
	static obj_t BGl_z62getz62zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31326ze3ze5zzsaw_proceduresz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2setzd2exzd2it1307zb0zzsaw_proceduresz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2vlength1299zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2var1262zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_z62getzd2vsetz121297za2zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2castzd2null1303z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62getzd2jumpzd2exzd2it1309zb0zzsaw_proceduresz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2valloc1293zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_proceduresz00();
	static obj_t BGl_z62getzd2procedureszb0zzsaw_proceduresz00(obj_t, obj_t);
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_z62getzd2boxzd2setz121317z70zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2atom1260zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2makezd2box1313z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2appzd2ly1281z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62getzd2funcall1283zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2cast1305zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_proceduresz00 = BUNSPEC;
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_proceduresz00();
	static obj_t BGl_z62getzd2sequence1268zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_proceduresz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62getzd2sync1270zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2pragma1285zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62getzd2letzd2fun1277z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
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
	static obj_t BGl_getz00zzsaw_proceduresz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_z62getzd2vref1295zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_z62getzd2getfield1287zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_z62getzd2app1279zb0zzsaw_proceduresz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzsaw_proceduresz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00();
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static obj_t BGl_z62getzd2setfield1289zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2boxzd2ref1315z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_getza2za2zzsaw_proceduresz00(obj_t, obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_z62getzd2switch1275zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2letzd2var1264z62zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62getzd2instanceof1301zb0zzsaw_proceduresz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1856z00zzsaw_proceduresz00,
		BgL_bgl_string1856za700za7za7s1893za7, "get1257", 7);
	      DEFINE_STRING(BGl_string1857z00zzsaw_proceduresz00,
		BgL_bgl_string1857za700za7za7s1894za7, "hole", 4);
	      DEFINE_STRING(BGl_string1859z00zzsaw_proceduresz00,
		BgL_bgl_string1859za700za7za7s1895za7, "get", 3);
	      DEFINE_STRING(BGl_string1888z00zzsaw_proceduresz00,
		BgL_bgl_string1888za700za7za7s1896za7, "saw_procedures", 14);
	      DEFINE_STRING(BGl_string1889z00zzsaw_proceduresz00,
		BgL_bgl_string1889za700za7za7s1897za7, "__evmeaning_address elight get ",
		31);
	      DEFINE_STATIC_BGL_GENERIC(BGl_getzd2envzd2zzsaw_proceduresz00,
		BgL_bgl_za762getza762za7za7saw_p1898z00, BGl_z62getz62zzsaw_proceduresz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1855z00zzsaw_proceduresz00,
		BgL_bgl_za762get1257za762za7za7s1899z00,
		BGl_z62get1257z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1858z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2atom1261900z00,
		BGl_z62getzd2atom1260zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1860z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2var12621901z00,
		BGl_z62getzd2var1262zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2letza7d2v1902za7,
		BGl_z62getzd2letzd2var1264z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1862z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2setq1261903z00,
		BGl_z62getzd2setq1266zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1863z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2sequenc1904z00,
		BGl_z62getzd2sequence1268zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1864z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2sync1271905z00,
		BGl_z62getzd2sync1270zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1865z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2conditi1906z00,
		BGl_z62getzd2conditional1273zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1866z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2switch11907z00,
		BGl_z62getzd2switch1275zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2letza7d2f1908za7,
		BGl_z62getzd2letzd2fun1277z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1868z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2app12791909z00,
		BGl_z62getzd2app1279zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2appza7d2l1910za7,
		BGl_z62getzd2appzd2ly1281z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1870z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2funcall1911z00,
		BGl_z62getzd2funcall1283zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2pragma11912z00,
		BGl_z62getzd2pragma1285zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2getfiel1913z00,
		BGl_z62getzd2getfield1287zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2setfiel1914z00,
		BGl_z62getzd2setfield1289zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2new12911915z00,
		BGl_z62getzd2new1291zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1875z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2valloc11916z00,
		BGl_z62getzd2valloc1293zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2vref1291917z00,
		BGl_z62getzd2vref1295zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2vsetza7121918za7,
		BGl_z62getzd2vsetz121297za2zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2vlength1919z00,
		BGl_z62getzd2vlength1299zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2instanc1920z00,
		BGl_z62getzd2instanceof1301zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2castza7d21921za7,
		BGl_z62getzd2castzd2null1303z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2cast1301922z00,
		BGl_z62getzd2cast1305zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2setza7d2e1923za7,
		BGl_z62getzd2setzd2exzd2it1307zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2jumpza7d21924za7,
		BGl_z62getzd2jumpzd2exzd2it1309zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2fail1311925z00,
		BGl_z62getzd2fail1311zb0zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2makeza7d21926za7,
		BGl_z62getzd2makezd2box1313z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2boxza7d2r1927za7,
		BGl_z62getzd2boxzd2ref1315z62zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2boxza7d2s1928za7,
		BGl_z62getzd2boxzd2setz121317z70zzsaw_proceduresz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2procedureszd2envz00zzsaw_proceduresz00,
		BgL_bgl_za762getza7d2procedu1929z00,
		BGl_z62getzd2procedureszb0zzsaw_proceduresz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_proceduresz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long
		BgL_checksumz00_2273, char *BgL_fromz00_2274)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_proceduresz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_proceduresz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_proceduresz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00();
					BGl_cnstzd2initzd2zzsaw_proceduresz00();
					BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00();
					BGl_genericzd2initzd2zzsaw_proceduresz00();
					BGl_methodzd2initzd2zzsaw_proceduresz00();
					return BGl_toplevelzd2initzd2zzsaw_proceduresz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_procedures");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_procedures");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_procedures");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			{	/* SawMill/procedures.scm 1 */
				obj_t BgL_cportz00_2154;

				{	/* SawMill/procedures.scm 1 */
					obj_t BgL_stringz00_2162;

					BgL_stringz00_2162 = BGl_string1889z00zzsaw_proceduresz00;
					{	/* SawMill/procedures.scm 1 */
						obj_t BgL_startz00_2163;

						BgL_startz00_2163 = BINT(((long) 0));
						{	/* SawMill/procedures.scm 1 */
							obj_t BgL_endz00_2164;

							BgL_endz00_2164 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2162)));
							{	/* SawMill/procedures.scm 1 */

								BgL_cportz00_2154 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2162, BgL_startz00_2163, BgL_endz00_2164);
				}}}}
				{
					long BgL_iz00_2155;

					BgL_iz00_2155 = ((long) 2);
				BgL_loopz00_2156:
					if ((BgL_iz00_2155 == ((long) -1)))
						{	/* SawMill/procedures.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/procedures.scm 1 */
							{	/* SawMill/procedures.scm 1 */
								obj_t BgL_arg1891z00_2158;

								{	/* SawMill/procedures.scm 1 */

									{	/* SawMill/procedures.scm 1 */
										obj_t BgL_locationz00_2160;

										BgL_locationz00_2160 = BBOOL(((bool_t) 0));
										{	/* SawMill/procedures.scm 1 */

											BgL_arg1891z00_2158 =
												BGl_readz00zz__readerz00(BgL_cportz00_2154,
												BgL_locationz00_2160);
										}
									}
								}
								{	/* SawMill/procedures.scm 1 */
									int BgL_tmpz00_2303;

									BgL_tmpz00_2303 = (int) (BgL_iz00_2155);
									CNST_TABLE_SET(BgL_tmpz00_2303, BgL_arg1891z00_2158);
							}}
							{	/* SawMill/procedures.scm 1 */
								int BgL_auxz00_2161;

								BgL_auxz00_2161 = (int) ((BgL_iz00_2155 - ((long) 1)));
								{
									long BgL_iz00_2308;

									BgL_iz00_2308 = (long) (BgL_auxz00_2161);
									BgL_iz00_2155 = BgL_iz00_2308;
									goto BgL_loopz00_2156;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			return BUNSPEC;
		}

	}



/* get-procedures */
	BGL_EXPORTED_DEF obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* SawMill/procedures.scm 12 */
			{	/* SawMill/procedures.scm 13 */
				obj_t BgL_rz00_2028;

				BgL_rz00_2028 = MAKE_CELL(BNIL);
				{	/* SawMill/procedures.scm 15 */
					obj_t BgL_zc3z04anonymousza31326ze3z87_2021;

					BgL_zc3z04anonymousza31326ze3z87_2021 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31326ze3ze5zzsaw_proceduresz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31326ze3z87_2021,
						(int) (((long) 0)), ((obj_t) BgL_rz00_2028));
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3z04anonymousza31326ze3z87_2021, BNIL);
				}
				{
					obj_t BgL_l1238z00_1399;

					BgL_l1238z00_1399 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31330ze3z87_1400:
					if (PAIRP(BgL_l1238z00_1399))
						{	/* SawMill/procedures.scm 18 */
							{	/* SawMill/procedures.scm 19 */
								obj_t BgL_globalz00_1402;

								BgL_globalz00_1402 = CAR(BgL_l1238z00_1399);
								{	/* SawMill/procedures.scm 19 */
									obj_t BgL_auxz00_2029;

									{	/* SawMill/procedures.scm 19 */
										obj_t BgL_arg1334z00_1403;

										BgL_arg1334z00_1403 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_globalz00_1402))))->BgL_valuez00))))->
											BgL_bodyz00);
										BgL_auxz00_2029 =
											BGl_getz00zzsaw_proceduresz00(((BgL_nodez00_bglt)
												BgL_arg1334z00_1403), CELL_REF(BgL_rz00_2028));
									}
									CELL_SET(BgL_rz00_2028, BgL_auxz00_2029);
								}
							}
							{
								obj_t BgL_l1238z00_2328;

								BgL_l1238z00_2328 = CDR(BgL_l1238z00_1399);
								BgL_l1238z00_1399 = BgL_l1238z00_2328;
								goto BgL_zc3z04anonymousza31330ze3z87_1400;
							}
						}
					else
						{	/* SawMill/procedures.scm 18 */
							((bool_t) 1);
						}
				}
				return CELL_REF(BgL_rz00_2028);
			}
		}

	}



/* &get-procedures */
	obj_t BGl_z62getzd2procedureszb0zzsaw_proceduresz00(obj_t BgL_envz00_2022,
		obj_t BgL_globalsz00_2023)
	{
		{	/* SawMill/procedures.scm 12 */
			return BGl_getzd2procedureszd2zzsaw_proceduresz00(BgL_globalsz00_2023);
		}

	}



/* &<@anonymous:1326> */
	obj_t BGl_z62zc3z04anonymousza31326ze3ze5zzsaw_proceduresz00(obj_t
		BgL_envz00_2024, obj_t BgL_globalz00_2026)
	{
		{	/* SawMill/procedures.scm 14 */
			{	/* SawMill/procedures.scm 15 */
				obj_t BgL_rz00_2025;

				BgL_rz00_2025 = PROCEDURE_REF(BgL_envz00_2024, (int) (((long) 0)));
				{	/* SawMill/procedures.scm 15 */
					bool_t BgL_test1933z00_2333;

					if (CBOOL(BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(
								((BgL_globalz00_bglt) BgL_globalz00_2026))))
						{	/* SawMill/procedures.scm 15 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_globalz00_2026, CELL_REF(BgL_rz00_2025))))
								{	/* SawMill/procedures.scm 16 */
									BgL_test1933z00_2333 = ((bool_t) 0);
								}
							else
								{	/* SawMill/procedures.scm 16 */
									BgL_test1933z00_2333 = ((bool_t) 1);
								}
						}
					else
						{	/* SawMill/procedures.scm 15 */
							BgL_test1933z00_2333 = ((bool_t) 0);
						}
					if (BgL_test1933z00_2333)
						{	/* SawMill/procedures.scm 17 */
							obj_t BgL_auxz00_2167;

							BgL_auxz00_2167 =
								MAKE_YOUNG_PAIR(BgL_globalz00_2026, CELL_REF(BgL_rz00_2025));
							return CELL_SET(BgL_rz00_2025, BgL_auxz00_2167);
						}
					else
						{	/* SawMill/procedures.scm 15 */
							return BFALSE;
						}
				}
			}
		}

	}



/* get* */
	obj_t BGl_getza2za2zzsaw_proceduresz00(obj_t BgL_lz00_4, obj_t BgL_rz00_5)
	{
		{	/* SawMill/procedures.scm 23 */
		BGl_getza2za2zzsaw_proceduresz00:
			if (NULLP(BgL_lz00_4))
				{	/* SawMill/procedures.scm 24 */
					return BgL_rz00_5;
				}
			else
				{	/* SawMill/procedures.scm 26 */
					obj_t BgL_arg1344z00_1408;
					obj_t BgL_arg1345z00_1409;

					BgL_arg1344z00_1408 = CDR(((obj_t) BgL_lz00_4));
					{	/* SawMill/procedures.scm 26 */
						obj_t BgL_arg1346z00_1410;

						BgL_arg1346z00_1410 = CAR(((obj_t) BgL_lz00_4));
						BgL_arg1345z00_1409 =
							BGl_getz00zzsaw_proceduresz00(
							((BgL_nodez00_bglt) BgL_arg1346z00_1410), BgL_rz00_5);
					}
					{
						obj_t BgL_rz00_2351;
						obj_t BgL_lz00_2350;

						BgL_lz00_2350 = BgL_arg1344z00_1408;
						BgL_rz00_2351 = BgL_arg1345z00_1409;
						BgL_rz00_5 = BgL_rz00_2351;
						BgL_lz00_4 = BgL_lz00_2350;
						goto BGl_getza2za2zzsaw_proceduresz00;
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00,
				BGl_proc1855z00zzsaw_proceduresz00, BGl_nodez00zzast_nodez00,
				BGl_string1856z00zzsaw_proceduresz00);
		}

	}



/* &get1257 */
	obj_t BGl_z62get1257z62zzsaw_proceduresz00(obj_t BgL_envz00_2032,
		obj_t BgL_ez00_2033, obj_t BgL_rz00_2034)
	{
		{	/* SawMill/procedures.scm 31 */
			{	/* SawMill/procedures.scm 32 */
				obj_t BgL_arg1348z00_2169;

				{	/* SawMill/procedures.scm 32 */
					obj_t BgL_arg1351z00_2170;

					{	/* SawMill/procedures.scm 32 */
						long BgL_arg1816z00_2171;

						{	/* SawMill/procedures.scm 32 */
							long BgL_arg1817z00_2172;

							{	/* SawMill/procedures.scm 32 */
								long BgL_res1827z00_2173;

								BgL_res1827z00_2173 =
									BGL_OBJECT_CLASS_NUM(
									((BgL_objectz00_bglt) ((BgL_nodez00_bglt) BgL_ez00_2033)));
								BgL_arg1817z00_2172 = BgL_res1827z00_2173;
							}
							BgL_arg1816z00_2171 = (BgL_arg1817z00_2172 - OBJECT_TYPE);
						}
						BgL_arg1351z00_2170 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_2171);
					}
					BgL_arg1348z00_2169 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg1351z00_2170);
				}
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string1857z00zzsaw_proceduresz00, BgL_arg1348z00_2169);
		}}

	}



/* get */
	obj_t BGl_getz00zzsaw_proceduresz00(BgL_nodez00_bglt BgL_ez00_6,
		obj_t BgL_rz00_7)
	{
		{	/* SawMill/procedures.scm 31 */
			{	/* SawMill/procedures.scm 31 */
				obj_t BgL_method1258z00_1418;

				{	/* SawMill/procedures.scm 31 */
					obj_t BgL_res1839z00_1938;

					{	/* SawMill/procedures.scm 31 */
						long BgL_objzd2classzd2numz00_1903;

						{	/* SawMill/procedures.scm 31 */
							long BgL_res1829z00_1906;

							BgL_res1829z00_1906 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_6));
							BgL_objzd2classzd2numz00_1903 = BgL_res1829z00_1906;
						}
						{	/* SawMill/procedures.scm 31 */
							obj_t BgL_arg1813z00_1904;

							BgL_arg1813z00_1904 =
								PROCEDURE_REF(BGl_getzd2envzd2zzsaw_proceduresz00,
								(int) (((long) 1)));
							{	/* SawMill/procedures.scm 31 */
								int BgL_offsetz00_1908;

								BgL_offsetz00_1908 = (int) (BgL_objzd2classzd2numz00_1903);
								{	/* SawMill/procedures.scm 31 */
									long BgL_offsetz00_1909;

									BgL_offsetz00_1909 =
										((long) (BgL_offsetz00_1908) - OBJECT_TYPE);
									{	/* SawMill/procedures.scm 31 */
										long BgL_modz00_1910;

										BgL_modz00_1910 =
											(BgL_offsetz00_1909 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/procedures.scm 31 */
											long BgL_restz00_1912;

											BgL_restz00_1912 =
												(BgL_offsetz00_1909 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/procedures.scm 31 */

												{	/* SawMill/procedures.scm 31 */
													obj_t BgL_bucketz00_1914;

													BgL_bucketz00_1914 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1904), BgL_modz00_1910);
													BgL_res1839z00_1938 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1914), BgL_restz00_1912);
					}}}}}}}}
					BgL_method1258z00_1418 = BgL_res1839z00_1938;
				}
				return
					PROCEDURE_ENTRY(BgL_method1258z00_1418) (BgL_method1258z00_1418,
					((obj_t) BgL_ez00_6), BgL_rz00_7, BEOA);
			}
		}

	}



/* &get */
	obj_t BGl_z62getz62zzsaw_proceduresz00(obj_t BgL_envz00_2035,
		obj_t BgL_ez00_2036, obj_t BgL_rz00_2037)
	{
		{	/* SawMill/procedures.scm 31 */
			return
				BGl_getz00zzsaw_proceduresz00(
				((BgL_nodez00_bglt) BgL_ez00_2036), BgL_rz00_2037);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_atomz00zzast_nodez00,
				BGl_proc1858z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_varz00zzast_nodez00,
				BGl_proc1860z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1861z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setqz00zzast_nodez00,
				BGl_proc1862z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1863z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_syncz00zzast_nodez00,
				BGl_proc1864z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc1865z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_switchz00zzast_nodez00,
				BGl_proc1866z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1867z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_appz00zzast_nodez00,
				BGl_proc1868z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1869z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1870z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc1871z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_getfieldz00zzast_nodez00,
				BGl_proc1872z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setfieldz00zzast_nodez00,
				BGl_proc1873z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_newz00zzast_nodez00,
				BGl_proc1874z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vallocz00zzast_nodez00,
				BGl_proc1875z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vrefz00zzast_nodez00,
				BGl_proc1876z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc1877z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_vlengthz00zzast_nodez00,
				BGl_proc1878z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_instanceofz00zzast_nodez00,
				BGl_proc1879z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_castzd2nullzd2zzast_nodez00,
				BGl_proc1880z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_castz00zzast_nodez00,
				BGl_proc1881z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc1882z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1883z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_failz00zzast_nodez00,
				BGl_proc1884z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1885z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1886z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2envzd2zzsaw_proceduresz00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc1887z00zzsaw_proceduresz00,
				BGl_string1859z00zzsaw_proceduresz00);
		}

	}



/* &get-box-set!1317 */
	obj_t BGl_z62getzd2boxzd2setz121317z70zzsaw_proceduresz00(obj_t
		BgL_envz00_2067, obj_t BgL_ez00_2068, obj_t BgL_rz00_2069)
	{
		{	/* SawMill/procedures.scm 188 */
			{	/* SawMill/procedures.scm 190 */
				BgL_varz00_bglt BgL_arg1687z00_2175;
				obj_t BgL_arg1688z00_2176;

				BgL_arg1687z00_2175 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_ez00_2068)))->BgL_varz00);
				BgL_arg1688z00_2176 =
					BGl_getz00zzsaw_proceduresz00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_ez00_2068)))->BgL_valuez00),
					BgL_rz00_2069);
				return BGl_getz00zzsaw_proceduresz00(((BgL_nodez00_bglt)
						BgL_arg1687z00_2175), BgL_arg1688z00_2176);
			}
		}

	}



/* &get-box-ref1315 */
	obj_t BGl_z62getzd2boxzd2ref1315z62zzsaw_proceduresz00(obj_t BgL_envz00_2070,
		obj_t BgL_ez00_2071, obj_t BgL_rz00_2072)
	{
		{	/* SawMill/procedures.scm 183 */
			{	/* SawMill/procedures.scm 185 */
				BgL_varz00_bglt BgL_arg1686z00_2178;

				BgL_arg1686z00_2178 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_ez00_2071)))->BgL_varz00);
				return
					BGl_getz00zzsaw_proceduresz00(
					((BgL_nodez00_bglt) BgL_arg1686z00_2178), BgL_rz00_2072);
			}
		}

	}



/* &get-make-box1313 */
	obj_t BGl_z62getzd2makezd2box1313z62zzsaw_proceduresz00(obj_t BgL_envz00_2073,
		obj_t BgL_ez00_2074, obj_t BgL_rz00_2075)
	{
		{	/* SawMill/procedures.scm 178 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_ez00_2074)))->BgL_valuez00),
				BgL_rz00_2075);
		}

	}



/* &get-fail1311 */
	obj_t BGl_z62getzd2fail1311zb0zzsaw_proceduresz00(obj_t BgL_envz00_2076,
		obj_t BgL_ez00_2077, obj_t BgL_rz00_2078)
	{
		{	/* SawMill/procedures.scm 173 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_ez00_2077)))->BgL_procz00),
				BGl_getz00zzsaw_proceduresz00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_ez00_2077)))->BgL_msgz00),
					BGl_getz00zzsaw_proceduresz00(
						(((BgL_failz00_bglt) COBJECT(
									((BgL_failz00_bglt) BgL_ez00_2077)))->BgL_objz00),
						BgL_rz00_2078)));
		}

	}



/* &get-jump-ex-it1309 */
	obj_t BGl_z62getzd2jumpzd2exzd2it1309zb0zzsaw_proceduresz00(obj_t
		BgL_envz00_2079, obj_t BgL_ez00_2080, obj_t BgL_rz00_2081)
	{
		{	/* SawMill/procedures.scm 168 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_ez00_2080)))->BgL_exitz00),
				BGl_getz00zzsaw_proceduresz00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_ez00_2080)))->BgL_valuez00),
					BgL_rz00_2081));
		}

	}



/* &get-set-ex-it1307 */
	obj_t BGl_z62getzd2setzd2exzd2it1307zb0zzsaw_proceduresz00(obj_t
		BgL_envz00_2082, obj_t BgL_ez00_2083, obj_t BgL_rz00_2084)
	{
		{	/* SawMill/procedures.scm 163 */
			{	/* SawMill/procedures.scm 165 */
				BgL_varz00_bglt BgL_arg1640z00_2183;
				obj_t BgL_arg1641z00_2184;

				BgL_arg1640z00_2183 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_ez00_2083)))->BgL_varz00);
				BgL_arg1641z00_2184 =
					BGl_getz00zzsaw_proceduresz00(
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_ez00_2083)))->BgL_bodyz00),
					BgL_rz00_2084);
				return BGl_getz00zzsaw_proceduresz00(((BgL_nodez00_bglt)
						BgL_arg1640z00_2183), BgL_arg1641z00_2184);
			}
		}

	}



/* &get-cast1305 */
	obj_t BGl_z62getzd2cast1305zb0zzsaw_proceduresz00(obj_t BgL_envz00_2085,
		obj_t BgL_ez00_2086, obj_t BgL_rz00_2087)
	{
		{	/* SawMill/procedures.scm 158 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_ez00_2086)))->BgL_argz00), BgL_rz00_2087);
		}

	}



/* &get-cast-null1303 */
	obj_t BGl_z62getzd2castzd2null1303z62zzsaw_proceduresz00(obj_t
		BgL_envz00_2088, obj_t BgL_ez00_2089, obj_t BgL_rz00_2090)
	{
		{	/* SawMill/procedures.scm 154 */
			return BgL_rz00_2090;
		}

	}



/* &get-instanceof1301 */
	obj_t BGl_z62getzd2instanceof1301zb0zzsaw_proceduresz00(obj_t BgL_envz00_2091,
		obj_t BgL_ez00_2092, obj_t BgL_rz00_2093)
	{
		{	/* SawMill/procedures.scm 149 */
			{	/* SawMill/procedures.scm 151 */
				obj_t BgL_arg1634z00_2188;

				BgL_arg1634z00_2188 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_instanceofz00_bglt) BgL_ez00_2092))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1634z00_2188, BgL_rz00_2093);
			}
		}

	}



/* &get-vlength1299 */
	obj_t BGl_z62getzd2vlength1299zb0zzsaw_proceduresz00(obj_t BgL_envz00_2094,
		obj_t BgL_ez00_2095, obj_t BgL_rz00_2096)
	{
		{	/* SawMill/procedures.scm 144 */
			{	/* SawMill/procedures.scm 146 */
				obj_t BgL_arg1631z00_2190;

				BgL_arg1631z00_2190 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vlengthz00_bglt) BgL_ez00_2095))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1631z00_2190, BgL_rz00_2096);
			}
		}

	}



/* &get-vset!1297 */
	obj_t BGl_z62getzd2vsetz121297za2zzsaw_proceduresz00(obj_t BgL_envz00_2097,
		obj_t BgL_ez00_2098, obj_t BgL_rz00_2099)
	{
		{	/* SawMill/procedures.scm 139 */
			{	/* SawMill/procedures.scm 141 */
				obj_t BgL_arg1627z00_2192;

				BgL_arg1627z00_2192 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vsetz12z12_bglt) BgL_ez00_2098))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1627z00_2192, BgL_rz00_2099);
			}
		}

	}



/* &get-vref1295 */
	obj_t BGl_z62getzd2vref1295zb0zzsaw_proceduresz00(obj_t BgL_envz00_2100,
		obj_t BgL_ez00_2101, obj_t BgL_rz00_2102)
	{
		{	/* SawMill/procedures.scm 134 */
			{	/* SawMill/procedures.scm 136 */
				obj_t BgL_arg1626z00_2194;

				BgL_arg1626z00_2194 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vrefz00_bglt) BgL_ez00_2101))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1626z00_2194, BgL_rz00_2102);
			}
		}

	}



/* &get-valloc1293 */
	obj_t BGl_z62getzd2valloc1293zb0zzsaw_proceduresz00(obj_t BgL_envz00_2103,
		obj_t BgL_ez00_2104, obj_t BgL_rz00_2105)
	{
		{	/* SawMill/procedures.scm 129 */
			{	/* SawMill/procedures.scm 131 */
				obj_t BgL_arg1624z00_2196;

				BgL_arg1624z00_2196 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_ez00_2104))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1624z00_2196, BgL_rz00_2105);
			}
		}

	}



/* &get-new1291 */
	obj_t BGl_z62getzd2new1291zb0zzsaw_proceduresz00(obj_t BgL_envz00_2106,
		obj_t BgL_ez00_2107, obj_t BgL_rz00_2108)
	{
		{	/* SawMill/procedures.scm 125 */
			return BgL_rz00_2108;
		}

	}



/* &get-setfield1289 */
	obj_t BGl_z62getzd2setfield1289zb0zzsaw_proceduresz00(obj_t BgL_envz00_2109,
		obj_t BgL_ez00_2110, obj_t BgL_rz00_2111)
	{
		{	/* SawMill/procedures.scm 120 */
			{	/* SawMill/procedures.scm 122 */
				obj_t BgL_arg1613z00_2199;

				BgL_arg1613z00_2199 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_setfieldz00_bglt) BgL_ez00_2110))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1613z00_2199, BgL_rz00_2111);
			}
		}

	}



/* &get-getfield1287 */
	obj_t BGl_z62getzd2getfield1287zb0zzsaw_proceduresz00(obj_t BgL_envz00_2112,
		obj_t BgL_ez00_2113, obj_t BgL_rz00_2114)
	{
		{	/* SawMill/procedures.scm 115 */
			{	/* SawMill/procedures.scm 117 */
				obj_t BgL_arg1612z00_2201;

				BgL_arg1612z00_2201 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_getfieldz00_bglt) BgL_ez00_2113))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1612z00_2201, BgL_rz00_2114);
			}
		}

	}



/* &get-pragma1285 */
	obj_t BGl_z62getzd2pragma1285zb0zzsaw_proceduresz00(obj_t BgL_envz00_2115,
		obj_t BgL_ez00_2116, obj_t BgL_rz00_2117)
	{
		{	/* SawMill/procedures.scm 110 */
			{	/* SawMill/procedures.scm 112 */
				obj_t BgL_arg1611z00_2203;

				BgL_arg1611z00_2203 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_pragmaz00_bglt) BgL_ez00_2116))))->BgL_exprza2za2);
				return
					BGl_getza2za2zzsaw_proceduresz00(BgL_arg1611z00_2203, BgL_rz00_2117);
			}
		}

	}



/* &get-funcall1283 */
	obj_t BGl_z62getzd2funcall1283zb0zzsaw_proceduresz00(obj_t BgL_envz00_2118,
		obj_t BgL_ez00_2119, obj_t BgL_rz00_2120)
	{
		{	/* SawMill/procedures.scm 103 */
			if (
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_ez00_2119)))->BgL_strengthz00) ==
					CNST_TABLE_REF(((long) 1))))
				{	/* SawMill/procedures.scm 105 */
					return
						BGl_getza2za2zzsaw_proceduresz00(
						(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_ez00_2119)))->BgL_argsz00),
						BgL_rz00_2120);
				}
			else
				{	/* SawMill/procedures.scm 105 */
					return
						BGl_getz00zzsaw_proceduresz00(
						(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_ez00_2119)))->BgL_funz00),
						BGl_getza2za2zzsaw_proceduresz00(
							(((BgL_funcallz00_bglt) COBJECT(
										((BgL_funcallz00_bglt) BgL_ez00_2119)))->BgL_argsz00),
							BgL_rz00_2120));
				}
		}

	}



/* &get-app-ly1281 */
	obj_t BGl_z62getzd2appzd2ly1281z62zzsaw_proceduresz00(obj_t BgL_envz00_2121,
		obj_t BgL_ez00_2122, obj_t BgL_rz00_2123)
	{
		{	/* SawMill/procedures.scm 98 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_ez00_2122)))->BgL_funz00),
				BGl_getz00zzsaw_proceduresz00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_ez00_2122)))->BgL_argz00),
					BgL_rz00_2123));
		}

	}



/* &get-app1279 */
	obj_t BGl_z62getzd2app1279zb0zzsaw_proceduresz00(obj_t BgL_envz00_2124,
		obj_t BgL_ez00_2125, obj_t BgL_rz00_2126)
	{
		{	/* SawMill/procedures.scm 84 */
			{	/* SawMill/procedures.scm 86 */
				obj_t BgL_rz00_2207;
				BgL_variablez00_bglt BgL_vz00_2208;

				BgL_rz00_2207 =
					BGl_getza2za2zzsaw_proceduresz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_ez00_2125)))->BgL_argsz00),
					BgL_rz00_2126);
				BgL_vz00_2208 =
					(((BgL_varz00_bglt) COBJECT((((BgL_appz00_bglt)
									COBJECT(((BgL_appz00_bglt) BgL_ez00_2125)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* SawMill/procedures.scm 87 */
					bool_t BgL_test1938z00_2520;

					{	/* SawMill/procedures.scm 87 */
						bool_t BgL_res1854z00_2209;

						BgL_res1854z00_2209 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_vz00_2208), BGl_localz00zzast_varz00);
						BgL_test1938z00_2520 = BgL_res1854z00_2209;
					}
					if (BgL_test1938z00_2520)
						{	/* SawMill/procedures.scm 87 */
							return BgL_rz00_2207;
						}
					else
						{	/* SawMill/procedures.scm 89 */
							obj_t BgL_idz00_2210;

							BgL_idz00_2210 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_vz00_2208))))->BgL_idz00);
							if ((BgL_idz00_2210 == CNST_TABLE_REF(((long) 2))))
								{	/* SawMill/procedures.scm 91 */
									BgL_variablez00_bglt BgL_gz00_2211;

									{
										BgL_varz00_bglt BgL_auxz00_2529;

										{	/* SawMill/procedures.scm 91 */
											obj_t BgL_pairz00_2212;

											BgL_pairz00_2212 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_ez00_2125)))->BgL_argsz00);
											BgL_auxz00_2529 =
												((BgL_varz00_bglt) CAR(BgL_pairz00_2212));
										}
										BgL_gz00_2211 =
											(((BgL_varz00_bglt) COBJECT(BgL_auxz00_2529))->
											BgL_variablez00);
									}
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												((obj_t) BgL_gz00_2211), BgL_rz00_2207)))
										{	/* SawMill/procedures.scm 92 */
											return BgL_rz00_2207;
										}
									else
										{	/* SawMill/procedures.scm 92 */
											return
												MAKE_YOUNG_PAIR(((obj_t) BgL_gz00_2211), BgL_rz00_2207);
										}
								}
							else
								{	/* SawMill/procedures.scm 90 */
									return BgL_rz00_2207;
								}
						}
				}
			}
		}

	}



/* &get-let-fun1277 */
	obj_t BGl_z62getzd2letzd2fun1277z62zzsaw_proceduresz00(obj_t BgL_envz00_2127,
		obj_t BgL_ez00_2128, obj_t BgL_rz00_2129)
	{
		{	/* SawMill/procedures.scm 78 */
			{	/* SawMill/procedures.scm 80 */
				obj_t BgL_arg1540z00_2214;
				obj_t BgL_arg1552z00_2215;

				{	/* SawMill/procedures.scm 80 */
					obj_t BgL_l1252z00_2216;

					BgL_l1252z00_2216 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_ez00_2128)))->BgL_localsz00);
					if (NULLP(BgL_l1252z00_2216))
						{	/* SawMill/procedures.scm 80 */
							BgL_arg1540z00_2214 = BNIL;
						}
					else
						{	/* SawMill/procedures.scm 80 */
							obj_t BgL_head1254z00_2217;

							{	/* SawMill/procedures.scm 80 */
								obj_t BgL_res1851z00_2218;

								BgL_res1851z00_2218 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1254z00_2217 = BgL_res1851z00_2218;
							}
							{
								obj_t BgL_l1252z00_2220;
								obj_t BgL_tail1255z00_2221;

								BgL_l1252z00_2220 = BgL_l1252z00_2216;
								BgL_tail1255z00_2221 = BgL_head1254z00_2217;
							BgL_zc3z04anonymousza31554ze3z87_2219:
								if (NULLP(BgL_l1252z00_2220))
									{	/* SawMill/procedures.scm 80 */
										BgL_arg1540z00_2214 = CDR(BgL_head1254z00_2217);
									}
								else
									{	/* SawMill/procedures.scm 80 */
										obj_t BgL_newtail1256z00_2222;

										{	/* SawMill/procedures.scm 80 */
											obj_t BgL_arg1561z00_2223;

											BgL_arg1561z00_2223 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				CAR(
																					((obj_t) BgL_l1252z00_2220))))))->
																BgL_valuez00))))->BgL_bodyz00);
											{	/* SawMill/procedures.scm 80 */
												obj_t BgL_res1853z00_2224;

												BgL_res1853z00_2224 =
													MAKE_YOUNG_PAIR(BgL_arg1561z00_2223, BNIL);
												BgL_newtail1256z00_2222 = BgL_res1853z00_2224;
											}
										}
										SET_CDR(BgL_tail1255z00_2221, BgL_newtail1256z00_2222);
										{	/* SawMill/procedures.scm 80 */
											obj_t BgL_arg1558z00_2225;

											BgL_arg1558z00_2225 = CDR(((obj_t) BgL_l1252z00_2220));
											{
												obj_t BgL_tail1255z00_2561;
												obj_t BgL_l1252z00_2560;

												BgL_l1252z00_2560 = BgL_arg1558z00_2225;
												BgL_tail1255z00_2561 = BgL_newtail1256z00_2222;
												BgL_tail1255z00_2221 = BgL_tail1255z00_2561;
												BgL_l1252z00_2220 = BgL_l1252z00_2560;
												goto BgL_zc3z04anonymousza31554ze3z87_2219;
											}
										}
									}
							}
						}
				}
				BgL_arg1552z00_2215 =
					BGl_getz00zzsaw_proceduresz00(
					(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_ez00_2128)))->BgL_bodyz00),
					BgL_rz00_2129);
				return BGl_getza2za2zzsaw_proceduresz00(BgL_arg1540z00_2214,
					BgL_arg1552z00_2215);
			}
		}

	}



/* &get-switch1275 */
	obj_t BGl_z62getzd2switch1275zb0zzsaw_proceduresz00(obj_t BgL_envz00_2130,
		obj_t BgL_ez00_2131, obj_t BgL_rz00_2132)
	{
		{	/* SawMill/procedures.scm 73 */
			{	/* SawMill/procedures.scm 75 */
				BgL_nodez00_bglt BgL_arg1489z00_2227;
				obj_t BgL_arg1493z00_2228;

				BgL_arg1489z00_2227 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_ez00_2131)))->BgL_testz00);
				{	/* SawMill/procedures.scm 75 */
					obj_t BgL_arg1495z00_2229;

					{	/* SawMill/procedures.scm 75 */
						obj_t BgL_l1246z00_2230;

						BgL_l1246z00_2230 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_ez00_2131)))->BgL_clausesz00);
						if (NULLP(BgL_l1246z00_2230))
							{	/* SawMill/procedures.scm 75 */
								BgL_arg1495z00_2229 = BNIL;
							}
						else
							{	/* SawMill/procedures.scm 75 */
								obj_t BgL_head1248z00_2231;

								{	/* SawMill/procedures.scm 75 */
									obj_t BgL_arg1536z00_2232;

									{	/* SawMill/procedures.scm 75 */
										obj_t BgL_pairz00_2233;

										BgL_pairz00_2233 = CAR(((obj_t) BgL_l1246z00_2230));
										BgL_arg1536z00_2232 = CDR(BgL_pairz00_2233);
									}
									{	/* SawMill/procedures.scm 75 */
										obj_t BgL_res1847z00_2234;

										BgL_res1847z00_2234 =
											MAKE_YOUNG_PAIR(BgL_arg1536z00_2232, BNIL);
										BgL_head1248z00_2231 = BgL_res1847z00_2234;
									}
								}
								{	/* SawMill/procedures.scm 75 */
									obj_t BgL_g1251z00_2235;

									BgL_g1251z00_2235 = CDR(((obj_t) BgL_l1246z00_2230));
									{
										obj_t BgL_l1246z00_2237;
										obj_t BgL_tail1249z00_2238;

										BgL_l1246z00_2237 = BgL_g1251z00_2235;
										BgL_tail1249z00_2238 = BgL_head1248z00_2231;
									BgL_zc3z04anonymousza31497ze3z87_2236:
										if (NULLP(BgL_l1246z00_2237))
											{	/* SawMill/procedures.scm 75 */
												BgL_arg1495z00_2229 = BgL_head1248z00_2231;
											}
										else
											{	/* SawMill/procedures.scm 75 */
												obj_t BgL_newtail1250z00_2239;

												{	/* SawMill/procedures.scm 75 */
													obj_t BgL_arg1521z00_2240;

													{	/* SawMill/procedures.scm 75 */
														obj_t BgL_pairz00_2241;

														BgL_pairz00_2241 = CAR(((obj_t) BgL_l1246z00_2237));
														BgL_arg1521z00_2240 = CDR(BgL_pairz00_2241);
													}
													{	/* SawMill/procedures.scm 75 */
														obj_t BgL_res1849z00_2242;

														BgL_res1849z00_2242 =
															MAKE_YOUNG_PAIR(BgL_arg1521z00_2240, BNIL);
														BgL_newtail1250z00_2239 = BgL_res1849z00_2242;
													}
												}
												SET_CDR(BgL_tail1249z00_2238, BgL_newtail1250z00_2239);
												{	/* SawMill/procedures.scm 75 */
													obj_t BgL_arg1518z00_2243;

													BgL_arg1518z00_2243 =
														CDR(((obj_t) BgL_l1246z00_2237));
													{
														obj_t BgL_tail1249z00_2588;
														obj_t BgL_l1246z00_2587;

														BgL_l1246z00_2587 = BgL_arg1518z00_2243;
														BgL_tail1249z00_2588 = BgL_newtail1250z00_2239;
														BgL_tail1249z00_2238 = BgL_tail1249z00_2588;
														BgL_l1246z00_2237 = BgL_l1246z00_2587;
														goto BgL_zc3z04anonymousza31497ze3z87_2236;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1493z00_2228 =
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg1495z00_2229,
						BgL_rz00_2132);
				}
				return
					BGl_getz00zzsaw_proceduresz00(BgL_arg1489z00_2227,
					BgL_arg1493z00_2228);
			}
		}

	}



/* &get-conditional1273 */
	obj_t BGl_z62getzd2conditional1273zb0zzsaw_proceduresz00(obj_t
		BgL_envz00_2133, obj_t BgL_ez00_2134, obj_t BgL_rz00_2135)
	{
		{	/* SawMill/procedures.scm 68 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_ez00_2134)))->BgL_testz00),
				BGl_getz00zzsaw_proceduresz00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_ez00_2134)))->BgL_truez00),
					BGl_getz00zzsaw_proceduresz00(
						(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_ez00_2134)))->BgL_falsez00),
						BgL_rz00_2135)));
		}

	}



/* &get-sync1270 */
	obj_t BGl_z62getzd2sync1270zb0zzsaw_proceduresz00(obj_t BgL_envz00_2136,
		obj_t BgL_ez00_2137, obj_t BgL_rz00_2138)
	{
		{	/* SawMill/procedures.scm 63 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_ez00_2137)))->BgL_prelockz00),
				BGl_getz00zzsaw_proceduresz00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_ez00_2137)))->BgL_mutexz00),
					BGl_getz00zzsaw_proceduresz00(
						(((BgL_syncz00_bglt) COBJECT(
									((BgL_syncz00_bglt) BgL_ez00_2137)))->BgL_bodyz00),
						BgL_rz00_2138)));
		}

	}



/* &get-sequence1268 */
	obj_t BGl_z62getzd2sequence1268zb0zzsaw_proceduresz00(obj_t BgL_envz00_2139,
		obj_t BgL_ez00_2140, obj_t BgL_rz00_2141)
	{
		{	/* SawMill/procedures.scm 58 */
			return
				BGl_getza2za2zzsaw_proceduresz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_ez00_2140)))->BgL_nodesz00),
				BgL_rz00_2141);
		}

	}



/* &get-setq1266 */
	obj_t BGl_z62getzd2setq1266zb0zzsaw_proceduresz00(obj_t BgL_envz00_2142,
		obj_t BgL_ez00_2143, obj_t BgL_rz00_2144)
	{
		{	/* SawMill/procedures.scm 53 */
			return
				BGl_getz00zzsaw_proceduresz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_ez00_2143)))->BgL_valuez00),
				BgL_rz00_2144);
		}

	}



/* &get-let-var1264 */
	obj_t BGl_z62getzd2letzd2var1264z62zzsaw_proceduresz00(obj_t BgL_envz00_2145,
		obj_t BgL_ez00_2146, obj_t BgL_rz00_2147)
	{
		{	/* SawMill/procedures.scm 48 */
			{	/* SawMill/procedures.scm 50 */
				BgL_nodez00_bglt BgL_arg1386z00_2249;
				obj_t BgL_arg1387z00_2250;

				BgL_arg1386z00_2249 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_ez00_2146)))->BgL_bodyz00);
				{	/* SawMill/procedures.scm 50 */
					obj_t BgL_arg1388z00_2251;

					{	/* SawMill/procedures.scm 50 */
						obj_t BgL_l1240z00_2252;

						BgL_l1240z00_2252 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_ez00_2146)))->BgL_bindingsz00);
						if (NULLP(BgL_l1240z00_2252))
							{	/* SawMill/procedures.scm 50 */
								BgL_arg1388z00_2251 = BNIL;
							}
						else
							{	/* SawMill/procedures.scm 50 */
								obj_t BgL_head1242z00_2253;

								{	/* SawMill/procedures.scm 50 */
									obj_t BgL_arg1418z00_2254;

									{	/* SawMill/procedures.scm 50 */
										obj_t BgL_pairz00_2255;

										BgL_pairz00_2255 = CAR(((obj_t) BgL_l1240z00_2252));
										BgL_arg1418z00_2254 = CDR(BgL_pairz00_2255);
									}
									{	/* SawMill/procedures.scm 50 */
										obj_t BgL_res1843z00_2256;

										BgL_res1843z00_2256 =
											MAKE_YOUNG_PAIR(BgL_arg1418z00_2254, BNIL);
										BgL_head1242z00_2253 = BgL_res1843z00_2256;
									}
								}
								{	/* SawMill/procedures.scm 50 */
									obj_t BgL_g1245z00_2257;

									BgL_g1245z00_2257 = CDR(((obj_t) BgL_l1240z00_2252));
									{
										obj_t BgL_l1240z00_2259;
										obj_t BgL_tail1243z00_2260;

										BgL_l1240z00_2259 = BgL_g1245z00_2257;
										BgL_tail1243z00_2260 = BgL_head1242z00_2253;
									BgL_zc3z04anonymousza31390ze3z87_2258:
										if (NULLP(BgL_l1240z00_2259))
											{	/* SawMill/procedures.scm 50 */
												BgL_arg1388z00_2251 = BgL_head1242z00_2253;
											}
										else
											{	/* SawMill/procedures.scm 50 */
												obj_t BgL_newtail1244z00_2261;

												{	/* SawMill/procedures.scm 50 */
													obj_t BgL_arg1396z00_2262;

													{	/* SawMill/procedures.scm 50 */
														obj_t BgL_pairz00_2263;

														BgL_pairz00_2263 = CAR(((obj_t) BgL_l1240z00_2259));
														BgL_arg1396z00_2262 = CDR(BgL_pairz00_2263);
													}
													{	/* SawMill/procedures.scm 50 */
														obj_t BgL_res1845z00_2264;

														BgL_res1845z00_2264 =
															MAKE_YOUNG_PAIR(BgL_arg1396z00_2262, BNIL);
														BgL_newtail1244z00_2261 = BgL_res1845z00_2264;
													}
												}
												SET_CDR(BgL_tail1243z00_2260, BgL_newtail1244z00_2261);
												{	/* SawMill/procedures.scm 50 */
													obj_t BgL_arg1394z00_2265;

													BgL_arg1394z00_2265 =
														CDR(((obj_t) BgL_l1240z00_2259));
													{
														obj_t BgL_tail1243z00_2637;
														obj_t BgL_l1240z00_2636;

														BgL_l1240z00_2636 = BgL_arg1394z00_2265;
														BgL_tail1243z00_2637 = BgL_newtail1244z00_2261;
														BgL_tail1243z00_2260 = BgL_tail1243z00_2637;
														BgL_l1240z00_2259 = BgL_l1240z00_2636;
														goto BgL_zc3z04anonymousza31390ze3z87_2258;
													}
												}
											}
									}
								}
							}
					}
					BgL_arg1387z00_2250 =
						BGl_getza2za2zzsaw_proceduresz00(BgL_arg1388z00_2251,
						BgL_rz00_2147);
				}
				return
					BGl_getz00zzsaw_proceduresz00(BgL_arg1386z00_2249,
					BgL_arg1387z00_2250);
			}
		}

	}



/* &get-var1262 */
	obj_t BGl_z62getzd2var1262zb0zzsaw_proceduresz00(obj_t BgL_envz00_2148,
		obj_t BgL_ez00_2149, obj_t BgL_rz00_2150)
	{
		{	/* SawMill/procedures.scm 39 */
			{	/* SawMill/procedures.scm 41 */
				bool_t BgL_test1947z00_2640;

				{	/* SawMill/procedures.scm 41 */
					bool_t BgL_test1948z00_2641;

					{	/* SawMill/procedures.scm 41 */
						BgL_variablez00_bglt BgL_arg1385z00_2267;

						BgL_arg1385z00_2267 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_ez00_2149)))->BgL_variablez00);
						{	/* SawMill/procedures.scm 41 */
							bool_t BgL_res1840z00_2268;

							BgL_res1840z00_2268 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1385z00_2267), BGl_globalz00zzast_varz00);
							BgL_test1948z00_2641 = BgL_res1840z00_2268;
						}
					}
					if (BgL_test1948z00_2641)
						{	/* SawMill/procedures.scm 42 */
							bool_t BgL_test1949z00_2646;

							{	/* SawMill/procedures.scm 42 */
								BgL_valuez00_bglt BgL_arg1383z00_2269;

								BgL_arg1383z00_2269 =
									(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_ez00_2149)))->
												BgL_variablez00)))->BgL_valuez00);
								{	/* SawMill/procedures.scm 42 */
									bool_t BgL_res1841z00_2270;

									BgL_res1841z00_2270 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1383z00_2269), BGl_sfunz00zzast_varz00);
									BgL_test1949z00_2646 = BgL_res1841z00_2270;
								}
							}
							if (BgL_test1949z00_2646)
								{	/* SawMill/procedures.scm 42 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												((obj_t)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_ez00_2149)))->
														BgL_variablez00)), BgL_rz00_2150)))
										{	/* SawMill/procedures.scm 43 */
											BgL_test1947z00_2640 = ((bool_t) 0);
										}
									else
										{	/* SawMill/procedures.scm 43 */
											BgL_test1947z00_2640 = ((bool_t) 1);
										}
								}
							else
								{	/* SawMill/procedures.scm 42 */
									BgL_test1947z00_2640 = ((bool_t) 0);
								}
						}
					else
						{	/* SawMill/procedures.scm 41 */
							BgL_test1947z00_2640 = ((bool_t) 0);
						}
				}
				if (BgL_test1947z00_2640)
					{	/* SawMill/procedures.scm 44 */
						BgL_variablez00_bglt BgL_arg1381z00_2271;

						BgL_arg1381z00_2271 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_ez00_2149)))->BgL_variablez00);
						return
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg1381z00_2271), BgL_rz00_2150);
					}
				else
					{	/* SawMill/procedures.scm 41 */
						return BgL_rz00_2150;
					}
			}
		}

	}



/* &get-atom1260 */
	obj_t BGl_z62getzd2atom1260zb0zzsaw_proceduresz00(obj_t BgL_envz00_2151,
		obj_t BgL_ez00_2152, obj_t BgL_rz00_2153)
	{
		{	/* SawMill/procedures.scm 35 */
			return BgL_rz00_2153;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_proceduresz00()
	{
		{	/* SawMill/procedures.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1888z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1888z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1888z00zzsaw_proceduresz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1888z00zzsaw_proceduresz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(((long) 10714047),
				BSTRING_TO_STRING(BGl_string1888z00zzsaw_proceduresz00));
		}

	}

#ifdef __cplusplus
}
#endif
