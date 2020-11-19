/*===========================================================================*/
/*   (Coerce/coerce.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/coerce.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

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


	static BgL_nodez00_bglt BGl_z62coercez12z70zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2setzd2exzd2it1327za2zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2vref1307za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_castz00_bglt BGl_castzd2nodezd2zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t);
	extern obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
	static obj_t BGl_objectzd2initzd2zzcoerce_coercez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2valloc1305za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2boxzd2ref1333z70zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcoerce_coercez00();
	static obj_t BGl_z62coercez121280z70zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2kwote1285za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62coercezd2functionz12za2zzcoerce_coercez00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2closure1289za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2atom1283za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt, obj_t,
		BgL_typez00_bglt, bool_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2setfield1301za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_wideningz00zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2vsetz121309zb0zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_coercez00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt BGl_z62coercez12zd2var1287za2zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2cast1313za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2boxzd2setz121335z62zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2makezd2box1331z70zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2setq1315za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t, obj_t,
		BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2letzd2fun1323z70zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2sync1293za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_coercez00 = BUNSPEC;
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_coercez00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_coercez00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt, bool_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2letzd2var1325z70zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2widening1297za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2sequence1291za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_nodez00_bglt BGl_z62coercez12zd2new1303za2zzcoerce_coercez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2exitza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_za2mutexza2z00zztype_cachez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2switch1321za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2predicatezd2ofz00zztype_miscz00(BgL_appz00_bglt);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2conditional1317za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2getfield1299za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcoerce_coercez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00();
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2vlength1311za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_coercez00();
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2extern1295za2zzcoerce_coercez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2jumpzd2exzd2it1329za2zzcoerce_coercez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2fail1319za2zzcoerce_coercez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string2138z00zzcoerce_coercez00,
		BgL_bgl_string2138za700za7za7c2149za7, " test-node-type=", 16);
	      DEFINE_STRING(BGl_string2139z00zzcoerce_coercez00,
		BgL_bgl_string2139za700za7za7c2150za7, "switch test-type=", 17);
	      DEFINE_STRING(BGl_string2140z00zzcoerce_coercez00,
		BgL_bgl_string2140za700za7za7c2151za7, ":", 1);
	      DEFINE_STRING(BGl_string2141z00zzcoerce_coercez00,
		BgL_bgl_string2141za700za7za7c2152za7, ",", 1);
	      DEFINE_STRING(BGl_string2142z00zzcoerce_coercez00,
		BgL_bgl_string2142za700za7za7c2153za7, "Coerce/coerce.scm", 17);
	      DEFINE_STRING(BGl_string2143z00zzcoerce_coercez00,
		BgL_bgl_string2143za700za7za7c2154za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string2144z00zzcoerce_coercez00,
		BgL_bgl_string2144za700za7za7c2155za7, "coerce_coerce", 13);
	      DEFINE_STRING(BGl_string2145z00zzcoerce_coercez00,
		BgL_bgl_string2145za700za7za7c2156za7, "false true coerce!1280 ", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_coercezd2functionz12zd2envz12zzcoerce_coercez00,
		BgL_bgl_za762coerceza7d2func2157z00,
		BGl_z62coercezd2functionz12za2zzcoerce_coercez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2107z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza71212802158z00,
		BGl_z62coercez121280z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2a2159za7,
		BGl_z62coercez12zd2atom1283za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2k2160za7,
		BGl_z62coercez12zd2kwote1285za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2v2161za7,
		BGl_z62coercez12zd2var1287za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2c2162za7,
		BGl_z62coercez12zd2closure1289za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2163za7,
		BGl_z62coercez12zd2sequence1291za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2164za7,
		BGl_z62coercez12zd2sync1293za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2e2165za7,
		BGl_z62coercez12zd2extern1295za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2w2166za7,
		BGl_z62coercez12zd2widening1297za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2g2167za7,
		BGl_z62coercez12zd2getfield1299za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2120z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2168za7,
		BGl_z62coercez12zd2setfield1301za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2121z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2n2169za7,
		BGl_z62coercez12zd2new1303za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2v2170za7,
		BGl_z62coercez12zd2valloc1305za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2123z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2v2171za7,
		BGl_z62coercez12zd2vref1307za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2v2172za7,
		BGl_z62coercez12zd2vsetz121309zb0zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2125z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2v2173za7,
		BGl_z62coercez12zd2vlength1311za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2126z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2c2174za7,
		BGl_z62coercez12zd2cast1313za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2127z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2175za7,
		BGl_z62coercez12zd2setq1315za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2128z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2c2176za7,
		BGl_z62coercez12zd2conditional1317za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2129z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2f2177za7,
		BGl_z62coercez12zd2fail1319za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2130z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2178za7,
		BGl_z62coercez12zd2switch1321za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2131z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2l2179za7,
		BGl_z62coercez12zd2letzd2fun1323z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2132z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2l2180za7,
		BGl_z62coercez12zd2letzd2var1325z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2133z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2s2181za7,
		BGl_z62coercez12zd2setzd2exzd2it1327za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2134z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2j2182za7,
		BGl_z62coercez12zd2jumpzd2exzd2it1329za2zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2m2183za7,
		BGl_z62coercez12zd2makezd2box1331z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2136z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2b2184za7,
		BGl_z62coercez12zd2boxzd2ref1333z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za7d2b2185za7,
		BGl_z62coercez12zd2boxzd2setz121335z62zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_coercez12zd2envzc0zzcoerce_coercez00,
		BgL_bgl_za762coerceza712za770za72186z00,
		BGl_z62coercez12z70zzcoerce_coercez00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2108z00zzcoerce_coercez00,
		BgL_bgl_string2108za700za7za7c2187za7, "coerce!1280", 11);
	      DEFINE_STRING(BGl_string2109z00zzcoerce_coercez00,
		BgL_bgl_string2109za700za7za7c2188za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2111z00zzcoerce_coercez00,
		BgL_bgl_string2111za700za7za7c2189za7, "coerce!", 7);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_thezd2coercedzd2functionz00zzcoerce_coercez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcoerce_coercez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long
		BgL_checksumz00_3112, char *BgL_fromz00_3113)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_coercez00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_coercez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_coercez00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00();
					BGl_cnstzd2initzd2zzcoerce_coercez00();
					BGl_importedzd2moduleszd2initz00zzcoerce_coercez00();
					BGl_genericzd2initzd2zzcoerce_coercez00();
					BGl_methodzd2initzd2zzcoerce_coercez00();
					return BGl_toplevelzd2initzd2zzcoerce_coercez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "coerce_coerce");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_coerce");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			{	/* Coerce/coerce.scm 15 */
				obj_t BgL_cportz00_2847;

				{	/* Coerce/coerce.scm 15 */
					obj_t BgL_stringz00_2855;

					BgL_stringz00_2855 = BGl_string2145z00zzcoerce_coercez00;
					{	/* Coerce/coerce.scm 15 */
						obj_t BgL_startz00_2856;

						BgL_startz00_2856 = BINT(((long) 0));
						{	/* Coerce/coerce.scm 15 */
							obj_t BgL_endz00_2857;

							BgL_endz00_2857 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2855)));
							{	/* Coerce/coerce.scm 15 */

								BgL_cportz00_2847 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2855, BgL_startz00_2856, BgL_endz00_2857);
				}}}}
				{
					long BgL_iz00_2848;

					BgL_iz00_2848 = ((long) 2);
				BgL_loopz00_2849:
					if ((BgL_iz00_2848 == ((long) -1)))
						{	/* Coerce/coerce.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/coerce.scm 15 */
							{	/* Coerce/coerce.scm 15 */
								obj_t BgL_arg2147z00_2851;

								{	/* Coerce/coerce.scm 15 */

									{	/* Coerce/coerce.scm 15 */
										obj_t BgL_locationz00_2853;

										BgL_locationz00_2853 = BBOOL(((bool_t) 0));
										{	/* Coerce/coerce.scm 15 */

											BgL_arg2147z00_2851 =
												BGl_readz00zz__readerz00(BgL_cportz00_2847,
												BgL_locationz00_2853);
										}
									}
								}
								{	/* Coerce/coerce.scm 15 */
									int BgL_tmpz00_3144;

									BgL_tmpz00_3144 = (int) (BgL_iz00_2848);
									CNST_TABLE_SET(BgL_tmpz00_3144, BgL_arg2147z00_2851);
							}}
							{	/* Coerce/coerce.scm 15 */
								int BgL_auxz00_2854;

								BgL_auxz00_2854 = (int) ((BgL_iz00_2848 - ((long) 1)));
								{
									long BgL_iz00_3149;

									BgL_iz00_3149 = (long) (BgL_auxz00_2854);
									BgL_iz00_2848 = BgL_iz00_3149;
									goto BgL_loopz00_2849;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* coerce-function! */
	BGL_EXPORTED_DEF obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt
		BgL_variablez00_3, bool_t BgL_typezd2safezd2_4)
	{
		{	/* Coerce/coerce.scm 46 */
			BGl_enterzd2functionzd2zztools_errorz00(
				(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3))->BgL_idz00));
			{	/* Coerce/coerce.scm 49 */
				BgL_valuez00_bglt BgL_funz00_1666;

				BgL_funz00_1666 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3))->BgL_valuez00);
				{	/* Coerce/coerce.scm 49 */
					obj_t BgL_bodyz00_1667;

					BgL_bodyz00_1667 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1666)))->BgL_bodyz00);
					{	/* Coerce/coerce.scm 50 */
						BgL_typez00_bglt BgL_tresz00_1668;

						BgL_tresz00_1668 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3))->
							BgL_typez00);
						{	/* Coerce/coerce.scm 51 */
							obj_t BgL_cloz00_1669;

							BgL_cloz00_1669 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_1666)))->
								BgL_thezd2closurezd2globalz00);
							{	/* Coerce/coerce.scm 52 */
								bool_t BgL_typezd2safetyzd2enforcedz00_1670;

								{	/* Coerce/coerce.scm 53 */
									obj_t BgL__andtest_1107z00_1680;

									BgL__andtest_1107z00_1680 =
										BGl_za2unsafezd2evalza2zd2zzengine_paramz00;
									if (CBOOL(BgL__andtest_1107z00_1680))
										{	/* Coerce/coerce.scm 53 */
											BgL_typezd2safetyzd2enforcedz00_1670 = ((bool_t) 0);
										}
									else
										{	/* Coerce/coerce.scm 54 */
											bool_t BgL_test2193z00_3162;

											{	/* Coerce/coerce.scm 54 */
												bool_t BgL_res2060z00_2460;

												BgL_res2060z00_2460 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_variablez00_3),
													BGl_globalz00zzast_varz00);
												BgL_test2193z00_3162 = BgL_res2060z00_2460;
											}
											if (BgL_test2193z00_3162)
												{	/* Coerce/coerce.scm 54 */
													if (BGl_isazf3zf3zz__objectz00(BgL_cloz00_1669,
															BGl_globalz00zzast_varz00))
														{	/* Coerce/coerce.scm 55 */
															if (
																(((BgL_globalz00_bglt) COBJECT(
																			((BgL_globalz00_bglt) BgL_cloz00_1669)))->
																	BgL_evaluablezf3zf3))
																{	/* Coerce/coerce.scm 56 */
																	BgL_typezd2safetyzd2enforcedz00_1670 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_cloz00_1669))))->
																		BgL_userzf3zf3);
																}
															else
																{	/* Coerce/coerce.scm 56 */
																	BgL_typezd2safetyzd2enforcedz00_1670 =
																		((bool_t) 0);
																}
														}
													else
														{	/* Coerce/coerce.scm 55 */
															BgL_typezd2safetyzd2enforcedz00_1670 =
																((bool_t) 0);
														}
												}
											else
												{	/* Coerce/coerce.scm 54 */
													BgL_typezd2safetyzd2enforcedz00_1670 = ((bool_t) 0);
												}
										}
								}
								{	/* Coerce/coerce.scm 58 */

									{	/* Coerce/coerce.scm 59 */
										bool_t BgL_test2196z00_3173;

										{	/* Coerce/coerce.scm 59 */
											bool_t BgL_res2062z00_2464;

											BgL_res2062z00_2464 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_variablez00_3), BGl_globalz00zzast_varz00);
											BgL_test2196z00_3173 = BgL_res2062z00_2464;
										}
										if (BgL_test2196z00_3173)
											{	/* Coerce/coerce.scm 59 */
												BNIL;
											}
										else
											{	/* Coerce/coerce.scm 59 */
												BNIL;
											}
									}
									{	/* Coerce/coerce.scm 67 */
										obj_t BgL_notifyz00_1673;

										BgL_notifyz00_1673 =
											BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00;
										if ((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_3))->
												BgL_userzf3zf3))
											{	/* Coerce/coerce.scm 70 */
												bool_t BgL_test2198z00_3178;

												{	/* Coerce/coerce.scm 70 */
													obj_t BgL_arg1351z00_1677;

													BgL_arg1351z00_1677 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_1666)))->
														BgL_thezd2closurezd2globalz00);
													BgL_test2198z00_3178 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1351z00_1677,
														BGl_globalz00zzast_varz00);
												}
												if (BgL_test2198z00_3178)
													{	/* Coerce/coerce.scm 70 */
														BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00
															= BFALSE;
													}
												else
													{	/* Coerce/coerce.scm 70 */
														BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00
															= BTRUE;
													}
											}
										else
											{	/* Coerce/coerce.scm 69 */
												BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00 =
													BFALSE;
											}
										BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(((long) 3),
											BgL_variablez00_3);
										BGl_thezd2coercedzd2functionz00zzcoerce_coercez00 =
											((obj_t) BgL_variablez00_3);
										{	/* Coerce/coerce.scm 73 */
											BgL_nodez00_bglt BgL_arg1352z00_1678;

											{	/* Coerce/coerce.scm 73 */
												bool_t BgL_auxz00_3184;

												if (BgL_typezd2safezd2_4)
													{	/* Coerce/coerce.scm 58 */
														BgL_auxz00_3184 = BgL_typezd2safezd2_4;
													}
												else
													{	/* Coerce/coerce.scm 58 */
														BgL_auxz00_3184 =
															BgL_typezd2safetyzd2enforcedz00_1670;
													}
												BgL_arg1352z00_1678 =
													BGl_coercez12z12zzcoerce_coercez00(
													((BgL_nodez00_bglt) BgL_bodyz00_1667),
													((obj_t) BgL_variablez00_3), BgL_tresz00_1668,
													BgL_auxz00_3184);
											}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1666)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1352z00_1678)), BUNSPEC);
										}
										BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00 =
											BgL_notifyz00_1673;
									}
									return BGl_leavezd2functionzd2zztools_errorz00();
								}
							}
						}
					}
				}
			}
		}

	}



/* &coerce-function! */
	obj_t BGl_z62coercezd2functionz12za2zzcoerce_coercez00(obj_t BgL_envz00_2671,
		obj_t BgL_variablez00_2672, obj_t BgL_typezd2safezd2_2673)
	{
		{	/* Coerce/coerce.scm 46 */
			return
				BGl_coercezd2functionz12zc0zzcoerce_coercez00(
				((BgL_variablez00_bglt) BgL_variablez00_2672),
				CBOOL(BgL_typezd2safezd2_2673));
		}

	}



/* cast-node */
	BgL_castz00_bglt BGl_castzd2nodezd2zzcoerce_coercez00(BgL_nodez00_bglt
		BgL_nodez00_105, obj_t BgL_toz00_106)
	{
		{	/* Coerce/coerce.scm 490 */
			{	/* Coerce/coerce.scm 492 */
				BgL_castz00_bglt BgL_new1146z00_1685;

				{	/* Coerce/coerce.scm 493 */
					BgL_castz00_bglt BgL_new1145z00_1686;

					BgL_new1145z00_1686 =
						((BgL_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_castz00_bgl))));
					{	/* Coerce/coerce.scm 493 */
						long BgL_arg1357z00_1687;

						{	/* Coerce/coerce.scm 493 */
							long BgL_res2064z00_2470;

							BgL_res2064z00_2470 = BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
							BgL_arg1357z00_1687 = BgL_res2064z00_2470;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1145z00_1686), BgL_arg1357z00_1687);
					}
					{	/* Coerce/coerce.scm 493 */
						BgL_objectz00_bglt BgL_tmpz00_3200;

						BgL_tmpz00_3200 = ((BgL_objectz00_bglt) BgL_new1145z00_1686);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3200, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1145z00_1686);
					BgL_new1146z00_1685 = BgL_new1145z00_1686;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1146z00_1685)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_105))->BgL_locz00)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1146z00_1685)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_toz00_106)), BUNSPEC);
				((((BgL_castz00_bglt) COBJECT(BgL_new1146z00_1685))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_nodez00_105), BUNSPEC);
				return BgL_new1146z00_1685;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_proc2107z00zzcoerce_coercez00, BGl_nodez00zzast_nodez00,
				BGl_string2108z00zzcoerce_coercez00);
		}

	}



/* &coerce!1280 */
	obj_t BGl_z62coercez121280z70zzcoerce_coercez00(obj_t BgL_envz00_2675,
		obj_t BgL_nodez00_2676, obj_t BgL_callerz00_2677, obj_t BgL_toz00_2678,
		obj_t BgL_safez00_2679)
	{
		{	/* Coerce/coerce.scm 80 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string2109z00zzcoerce_coercez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2676)));
		}

	}



/* coerce! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt BgL_nodez00_5,
		obj_t BgL_callerz00_6, BgL_typez00_bglt BgL_toz00_7, bool_t BgL_safez00_8)
	{
		{	/* Coerce/coerce.scm 80 */
			{	/* Coerce/coerce.scm 80 */
				obj_t BgL_method1281z00_1695;

				{	/* Coerce/coerce.scm 80 */
					obj_t BgL_res2075z00_2510;

					{	/* Coerce/coerce.scm 80 */
						long BgL_objzd2classzd2numz00_2475;

						{	/* Coerce/coerce.scm 80 */
							long BgL_res2065z00_2478;

							BgL_res2065z00_2478 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_2475 = BgL_res2065z00_2478;
						}
						{	/* Coerce/coerce.scm 80 */
							obj_t BgL_arg1813z00_2476;

							BgL_arg1813z00_2476 =
								PROCEDURE_REF(BGl_coercez12zd2envzc0zzcoerce_coercez00,
								(int) (((long) 1)));
							{	/* Coerce/coerce.scm 80 */
								int BgL_offsetz00_2480;

								BgL_offsetz00_2480 = (int) (BgL_objzd2classzd2numz00_2475);
								{	/* Coerce/coerce.scm 80 */
									long BgL_offsetz00_2481;

									BgL_offsetz00_2481 =
										((long) (BgL_offsetz00_2480) - OBJECT_TYPE);
									{	/* Coerce/coerce.scm 80 */
										long BgL_modz00_2482;

										BgL_modz00_2482 =
											(BgL_offsetz00_2481 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Coerce/coerce.scm 80 */
											long BgL_restz00_2484;

											BgL_restz00_2484 =
												(BgL_offsetz00_2481 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Coerce/coerce.scm 80 */

												{	/* Coerce/coerce.scm 80 */
													obj_t BgL_bucketz00_2486;

													BgL_bucketz00_2486 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2476), BgL_modz00_2482);
													BgL_res2075z00_2510 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2486), BgL_restz00_2484);
					}}}}}}}}
					BgL_method1281z00_1695 = BgL_res2075z00_2510;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1281z00_1695) (BgL_method1281z00_1695,
						((obj_t) BgL_nodez00_5), BgL_callerz00_6,
						((obj_t) BgL_toz00_7), BBOOL(BgL_safez00_8), BEOA));
			}
		}

	}



/* &coerce! */
	BgL_nodez00_bglt BGl_z62coercez12z70zzcoerce_coercez00(obj_t BgL_envz00_2680,
		obj_t BgL_nodez00_2681, obj_t BgL_callerz00_2682, obj_t BgL_toz00_2683,
		obj_t BgL_safez00_2684)
	{
		{	/* Coerce/coerce.scm 80 */
			return
				BGl_coercez12z12zzcoerce_coercez00(
				((BgL_nodez00_bglt) BgL_nodez00_2681), BgL_callerz00_2682,
				((BgL_typez00_bglt) BgL_toz00_2683), CBOOL(BgL_safez00_2684));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_atomz00zzast_nodez00,
				BGl_proc2110z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_kwotez00zzast_nodez00,
				BGl_proc2112z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_varz00zzast_nodez00,
				BGl_proc2113z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_closurez00zzast_nodez00,
				BGl_proc2114z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_sequencez00zzast_nodez00,
				BGl_proc2115z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_syncz00zzast_nodez00,
				BGl_proc2116z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_externz00zzast_nodez00,
				BGl_proc2117z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_wideningz00zzast_nodez00,
				BGl_proc2118z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_getfieldz00zzast_nodez00,
				BGl_proc2119z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_setfieldz00zzast_nodez00,
				BGl_proc2120z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_newz00zzast_nodez00,
				BGl_proc2121z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vallocz00zzast_nodez00,
				BGl_proc2122z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vrefz00zzast_nodez00,
				BGl_proc2123z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc2124z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_vlengthz00zzast_nodez00,
				BGl_proc2125z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_castz00zzast_nodez00,
				BGl_proc2126z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_setqz00zzast_nodez00,
				BGl_proc2127z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2128z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_failz00zzast_nodez00,
				BGl_proc2129z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_switchz00zzast_nodez00,
				BGl_proc2130z00zzcoerce_coercez00, BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2131z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2132z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2133z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2134z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2135z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2136z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2137z00zzcoerce_coercez00,
				BGl_string2111z00zzcoerce_coercez00);
		}

	}



/* &coerce!-box-set!1335 */
	BgL_nodez00_bglt
		BGl_z62coercez12zd2boxzd2setz121335z62zzcoerce_coercez00(obj_t
		BgL_envz00_2712, obj_t BgL_nodez00_2713, obj_t BgL_callerz00_2714,
		obj_t BgL_toz00_2715, obj_t BgL_safez00_2716)
	{
		{	/* Coerce/coerce.scm 521 */
			{	/* Coerce/coerce.scm 523 */
				BgL_nodez00_bglt BgL_vtz00_2864;

				BgL_vtz00_2864 =
					BGl_coercez12z12zzcoerce_coercez00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2713)))->BgL_valuez00),
					BgL_callerz00_2714,
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(((BgL_boxzd2setz12zc0_bglt)
									BgL_nodez00_2713)))->BgL_vtypez00), CBOOL(BgL_safez00_2716));
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(((BgL_boxzd2setz12zc0_bglt)
									BgL_nodez00_2713)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BGl_coercez12z12zzcoerce_coercez00(BgL_vtz00_2864,
							BgL_callerz00_2714,
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
							CBOOL(BgL_safez00_2716))), BUNSPEC);
			}
			{	/* Coerce/coerce.scm 525 */
				BgL_typez00_bglt BgL_arg1986z00_2865;

				BgL_arg1986z00_2865 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2713))))->BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2713)), BgL_arg1986z00_2865,
					((BgL_typez00_bglt) BgL_toz00_2715), CBOOL(BgL_safez00_2716));
			}
		}

	}



/* &coerce!-box-ref1333 */
	BgL_nodez00_bglt BGl_z62coercez12zd2boxzd2ref1333z70zzcoerce_coercez00(obj_t
		BgL_envz00_2717, obj_t BgL_nodez00_2718, obj_t BgL_callerz00_2719,
		obj_t BgL_toz00_2720, obj_t BgL_safez00_2721)
	{
		{	/* Coerce/coerce.scm 511 */
			{	/* Coerce/coerce.scm 513 */
				BgL_nodez00_bglt BgL_cnodez00_2867;

				{	/* Coerce/coerce.scm 513 */
					BgL_typez00_bglt BgL_arg1983z00_2868;

					BgL_arg1983z00_2868 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2718)))->BgL_vtypez00);
					BgL_cnodez00_2867 =
						BGl_convertz12z12zzcoerce_convertz00(
						((BgL_nodez00_bglt)
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2718)), BgL_arg1983z00_2868,
						((BgL_typez00_bglt) BgL_toz00_2720), CBOOL(BgL_safez00_2721));
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_toz00_2720,
						BGl_tclassz00zzobject_classz00))
					{	/* Coerce/coerce.scm 514 */
						return
							((BgL_nodez00_bglt)
							BGl_castzd2nodezd2zzcoerce_coercez00(BgL_cnodez00_2867,
								BgL_toz00_2720));
					}
				else
					{	/* Coerce/coerce.scm 514 */
						return BgL_cnodez00_2867;
					}
			}
		}

	}



/* &coerce!-make-box1331 */
	BgL_nodez00_bglt BGl_z62coercez12zd2makezd2box1331z70zzcoerce_coercez00(obj_t
		BgL_envz00_2722, obj_t BgL_nodez00_2723, obj_t BgL_callerz00_2724,
		obj_t BgL_toz00_2725, obj_t BgL_safez00_2726)
	{
		{	/* Coerce/coerce.scm 500 */
			{	/* Coerce/coerce.scm 502 */
				BgL_nodez00_bglt BgL_nodevz00_2870;

				BgL_nodevz00_2870 =
					BGl_coercez12z12zzcoerce_coercez00(
					(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2723)))->BgL_valuez00),
					BgL_callerz00_2724,
					(((BgL_makezd2boxzd2_bglt) COBJECT(((BgL_makezd2boxzd2_bglt)
									BgL_nodez00_2723)))->BgL_vtypez00), CBOOL(BgL_safez00_2726));
				{	/* Coerce/coerce.scm 503 */
					bool_t BgL_test2201z00_3319;

					{	/* Coerce/coerce.scm 503 */
						BgL_typez00_bglt BgL_arg1979z00_2871;

						BgL_arg1979z00_2871 =
							BGl_getzd2typezd2zztype_typeofz00(BgL_nodevz00_2870,
							((bool_t) 0));
						{	/* Coerce/coerce.scm 503 */
							bool_t BgL_res2105z00_2872;

							BgL_res2105z00_2872 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1979z00_2871), BGl_tclassz00zzobject_classz00);
							BgL_test2201z00_3319 = BgL_res2105z00_2872;
						}
					}
					if (BgL_test2201z00_3319)
						{	/* Coerce/coerce.scm 503 */
							((((BgL_makezd2boxzd2_bglt) COBJECT(
											((BgL_makezd2boxzd2_bglt) BgL_nodez00_2723)))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
										BGl_castzd2nodezd2zzcoerce_coercez00(BgL_nodevz00_2870,
											BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
						}
					else
						{	/* Coerce/coerce.scm 503 */
							((((BgL_makezd2boxzd2_bglt) COBJECT(
											((BgL_makezd2boxzd2_bglt) BgL_nodez00_2723)))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_nodevz00_2870), BUNSPEC);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2723));
		}

	}



/* &coerce!-jump-ex-it1329 */
	BgL_nodez00_bglt
		BGl_z62coercez12zd2jumpzd2exzd2it1329za2zzcoerce_coercez00(obj_t
		BgL_envz00_2727, obj_t BgL_nodez00_2728, obj_t BgL_callerz00_2729,
		obj_t BgL_toz00_2730, obj_t BgL_safez00_2731)
	{
		{	/* Coerce/coerce.scm 481 */
			{
				BgL_nodez00_bglt BgL_auxz00_3331;

				{	/* Coerce/coerce.scm 483 */
					BgL_nodez00_bglt BgL_arg1971z00_2874;

					BgL_arg1971z00_2874 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)))->BgL_exitz00);
					BgL_auxz00_3331 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1971z00_2874,
						BgL_callerz00_2729,
						((BgL_typez00_bglt) BGl_za2exitza2z00zztype_cachez00),
						CBOOL(BgL_safez00_2731));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3331), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3339;

				{	/* Coerce/coerce.scm 484 */
					BgL_nodez00_bglt BgL_arg1972z00_2875;
					BgL_typez00_bglt BgL_arg1973z00_2876;

					BgL_arg1972z00_2875 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)))->
						BgL_valuez00);
					{	/* Coerce/coerce.scm 484 */
						BgL_nodez00_bglt BgL_arg1974z00_2877;

						BgL_arg1974z00_2877 =
							(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)))->
							BgL_valuez00);
						BgL_arg1973z00_2876 =
							BGl_getzd2typezd2zztype_typeofz00(BgL_arg1974z00_2877,
							((bool_t) 0));
					}
					BgL_auxz00_3339 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1972z00_2875,
						BgL_callerz00_2729, BgL_arg1973z00_2876, CBOOL(BgL_safez00_2731));
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3339), BUNSPEC);
			}
			{	/* Coerce/coerce.scm 485 */
				BgL_typez00_bglt BgL_arg1975z00_2878;

				BgL_arg1975z00_2878 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728))))->
					BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(((BgL_nodez00_bglt) (
							(BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2728)),
					BgL_arg1975z00_2878, ((BgL_typez00_bglt) BgL_toz00_2730),
					CBOOL(BgL_safez00_2731));
			}
		}

	}



/* &coerce!-set-ex-it1327 */
	BgL_nodez00_bglt
		BGl_z62coercez12zd2setzd2exzd2it1327za2zzcoerce_coercez00(obj_t
		BgL_envz00_2732, obj_t BgL_nodez00_2733, obj_t BgL_callerz00_2734,
		obj_t BgL_toz00_2735, obj_t BgL_safez00_2736)
	{
		{	/* Coerce/coerce.scm 471 */
			{
				BgL_varz00_bglt BgL_auxz00_3357;

				{	/* Coerce/coerce.scm 473 */
					BgL_varz00_bglt BgL_arg1967z00_2880;

					BgL_arg1967z00_2880 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733)))->BgL_varz00);
					BgL_auxz00_3357 =
						((BgL_varz00_bglt)
						BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1967z00_2880), BgL_callerz00_2734,
							((BgL_typez00_bglt) BGl_za2exitza2z00zztype_cachez00),
							CBOOL(BgL_safez00_2736)));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3357), BUNSPEC);
			}
			BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
				(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733)))->
								BgL_varz00)))->BgL_variablez00));
			{
				BgL_nodez00_bglt BgL_auxz00_3371;

				{	/* Coerce/coerce.scm 475 */
					BgL_nodez00_bglt BgL_arg1970z00_2881;

					BgL_arg1970z00_2881 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733)))->BgL_bodyz00);
					BgL_auxz00_3371 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1970z00_2881,
						BgL_callerz00_2734, ((BgL_typez00_bglt) BgL_toz00_2735),
						CBOOL(BgL_safez00_2736));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3371), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2733));
		}

	}



/* &coerce!-let-var1325 */
	BgL_nodez00_bglt BGl_z62coercez12zd2letzd2var1325z70zzcoerce_coercez00(obj_t
		BgL_envz00_2737, obj_t BgL_nodez00_2738, obj_t BgL_callerz00_2739,
		obj_t BgL_toz00_2740, obj_t BgL_safez00_2741)
	{
		{	/* Coerce/coerce.scm 451 */
			BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
			{	/* Tools/trace.sch 53 */
				obj_t BgL_g1279z00_2883;

				BgL_g1279z00_2883 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2738)))->BgL_bindingsz00);
				{
					obj_t BgL_l1277z00_2885;

					BgL_l1277z00_2885 = BgL_g1279z00_2883;
				BgL_zc3z04anonymousza31955ze3z87_2884:
					if (PAIRP(BgL_l1277z00_2885))
						{	/* Tools/trace.sch 53 */
							{	/* Tools/trace.sch 53 */
								obj_t BgL_bindingz00_2886;

								BgL_bindingz00_2886 = CAR(BgL_l1277z00_2885);
								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1957z00_2887;

									BgL_arg1957z00_2887 = CAR(((obj_t) BgL_bindingz00_2886));
									BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
										((BgL_variablez00_bglt) BgL_arg1957z00_2887));
								}
								{	/* Tools/trace.sch 53 */
									BgL_nodez00_bglt BgL_arg1958z00_2888;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1959z00_2889;
										BgL_typez00_bglt BgL_arg1960z00_2890;

										BgL_arg1959z00_2889 = CDR(((obj_t) BgL_bindingz00_2886));
										BgL_arg1960z00_2890 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(
																((obj_t) BgL_bindingz00_2886))))))->
											BgL_typez00);
										BgL_arg1958z00_2888 =
											BGl_coercez12z12zzcoerce_coercez00(((BgL_nodez00_bglt)
												BgL_arg1959z00_2889), BgL_callerz00_2739,
											BgL_arg1960z00_2890, CBOOL(BgL_safez00_2741));
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_auxz00_3403;
										obj_t BgL_tmpz00_3401;

										BgL_auxz00_3403 = ((obj_t) BgL_arg1958z00_2888);
										BgL_tmpz00_3401 = ((obj_t) BgL_bindingz00_2886);
										SET_CDR(BgL_tmpz00_3401, BgL_auxz00_3403);
							}}}
							{
								obj_t BgL_l1277z00_3406;

								BgL_l1277z00_3406 = CDR(BgL_l1277z00_2885);
								BgL_l1277z00_2885 = BgL_l1277z00_3406;
								goto BgL_zc3z04anonymousza31955ze3z87_2884;
							}
						}
					else
						{	/* Tools/trace.sch 53 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3408;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1963z00_2891;

					BgL_arg1963z00_2891 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2738)))->BgL_bodyz00);
					BgL_auxz00_3408 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1963z00_2891,
						BgL_callerz00_2739, ((BgL_typez00_bglt) BgL_toz00_2740),
						CBOOL(BgL_safez00_2741));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2738)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3408), BUNSPEC);
			}
			{
				BgL_typez00_bglt BgL_auxz00_3416;

				{	/* Tools/trace.sch 53 */
					BgL_typez00_bglt BgL_arg1964z00_2892;
					BgL_typez00_bglt BgL_arg1965z00_2893;

					BgL_arg1964z00_2892 =
						(((BgL_nodez00_bglt) COBJECT(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2738)))->
									BgL_bodyz00)))->BgL_typez00);
					BgL_arg1965z00_2893 =
						(((BgL_nodez00_bglt)
							COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
										BgL_nodez00_2738))))->BgL_typez00);
					BgL_auxz00_3416 =
						BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1964z00_2892,
						BgL_arg1965z00_2893);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2738))))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_auxz00_3416), BUNSPEC);
			}
			BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2738));
		}

	}



/* &coerce!-let-fun1323 */
	BgL_nodez00_bglt BGl_z62coercez12zd2letzd2fun1323z70zzcoerce_coercez00(obj_t
		BgL_envz00_2742, obj_t BgL_nodez00_2743, obj_t BgL_callerz00_2744,
		obj_t BgL_toz00_2745, obj_t BgL_safez00_2746)
	{
		{	/* Coerce/coerce.scm 439 */
			BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
			{	/* Coerce/coerce.scm 442 */
				obj_t BgL_g1276z00_2895;

				BgL_g1276z00_2895 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2743)))->BgL_localsz00);
				{
					obj_t BgL_l1274z00_2897;

					BgL_l1274z00_2897 = BgL_g1276z00_2895;
				BgL_zc3z04anonymousza31946ze3z87_2896:
					if (PAIRP(BgL_l1274z00_2897))
						{	/* Coerce/coerce.scm 442 */
							{	/* Coerce/coerce.scm 442 */
								obj_t BgL_fz00_2898;

								BgL_fz00_2898 = CAR(BgL_l1274z00_2897);
								{	/* Coerce/coerce.scm 442 */
									bool_t BgL_arg1948z00_2899;

									if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
										{	/* Coerce/coerce.scm 442 */
											BgL_arg1948z00_2899 = ((bool_t) 0);
										}
									else
										{	/* Coerce/coerce.scm 442 */
											BgL_arg1948z00_2899 = ((bool_t) 1);
										}
									BGl_coercezd2functionz12zc0zzcoerce_coercez00(
										((BgL_variablez00_bglt) BgL_fz00_2898),
										BgL_arg1948z00_2899);
								}
							}
							{
								obj_t BgL_l1274z00_3440;

								BgL_l1274z00_3440 = CDR(BgL_l1274z00_2897);
								BgL_l1274z00_2897 = BgL_l1274z00_3440;
								goto BgL_zc3z04anonymousza31946ze3z87_2896;
							}
						}
					else
						{	/* Coerce/coerce.scm 442 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3442;

				{	/* Coerce/coerce.scm 443 */
					BgL_nodez00_bglt BgL_arg1951z00_2900;

					BgL_arg1951z00_2900 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2743)))->BgL_bodyz00);
					BgL_auxz00_3442 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1951z00_2900,
						BgL_callerz00_2744, ((BgL_typez00_bglt) BgL_toz00_2745),
						CBOOL(BgL_safez00_2746));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2743)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3442), BUNSPEC);
			}
			{
				BgL_typez00_bglt BgL_auxz00_3450;

				{	/* Coerce/coerce.scm 444 */
					BgL_typez00_bglt BgL_arg1952z00_2901;
					BgL_typez00_bglt BgL_arg1953z00_2902;

					BgL_arg1952z00_2901 =
						(((BgL_nodez00_bglt) COBJECT(
								(((BgL_letzd2funzd2_bglt) COBJECT(
											((BgL_letzd2funzd2_bglt) BgL_nodez00_2743)))->
									BgL_bodyz00)))->BgL_typez00);
					BgL_arg1953z00_2902 =
						(((BgL_nodez00_bglt)
							COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
										BgL_nodez00_2743))))->BgL_typez00);
					BgL_auxz00_3450 =
						BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1952z00_2901,
						BgL_arg1953z00_2902);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2743))))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_auxz00_3450), BUNSPEC);
			}
			BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2743));
		}

	}



/* &coerce!-switch1321 */
	BgL_nodez00_bglt BGl_z62coercez12zd2switch1321za2zzcoerce_coercez00(obj_t
		BgL_envz00_2747, obj_t BgL_nodez00_2748, obj_t BgL_callerz00_2749,
		obj_t BgL_toz00_2750, obj_t BgL_safez00_2751)
	{
		{	/* Coerce/coerce.scm 409 */
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_switchz00_bglt) BgL_nodez00_2748))))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_toz00_2750)), BUNSPEC);
			{	/* Coerce/coerce.scm 412 */
				obj_t BgL_clausesz00_2904;
				BgL_typez00_bglt BgL_testzd2typezd2_2905;
				BgL_typez00_bglt BgL_testzd2nodezd2typez00_2906;

				BgL_clausesz00_2904 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2748)))->BgL_clausesz00);
				BgL_testzd2typezd2_2905 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2748)))->BgL_itemzd2typezd2);
				BgL_testzd2nodezd2typez00_2906 =
					BGl_getzd2typezd2zztype_typeofz00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2748)))->BgL_testz00),
					((bool_t) 0));
				if (BGl_coercerzd2existszf3z21zztype_coercionz00
					(BgL_testzd2nodezd2typez00_2906, BgL_testzd2typezd2_2905))
					{	/* Coerce/coerce.scm 415 */
						BFALSE;
					}
				else
					{	/* Coerce/coerce.scm 416 */
						obj_t BgL_arg1921z00_2907;
						obj_t BgL_arg1923z00_2908;
						obj_t BgL_arg1924z00_2909;

						{	/* Coerce/coerce.scm 416 */
							obj_t BgL_res2101z00_2910;

							{	/* Coerce/coerce.scm 416 */
								obj_t BgL_tmpz00_3477;

								BgL_tmpz00_3477 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2101z00_2910 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3477);
							}
							BgL_arg1921z00_2907 = BgL_res2101z00_2910;
						}
						BgL_arg1923z00_2908 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_testzd2typezd2_2905));
						BgL_arg1924z00_2909 =
							BGl_shapez00zztools_shapez00(
							((obj_t) BgL_testzd2nodezd2typez00_2906));
						{	/* Coerce/coerce.scm 416 */
							obj_t BgL_list1925z00_2911;

							{	/* Coerce/coerce.scm 416 */
								obj_t BgL_arg1926z00_2912;

								{	/* Coerce/coerce.scm 416 */
									obj_t BgL_arg1927z00_2913;

									{	/* Coerce/coerce.scm 416 */
										obj_t BgL_arg1928z00_2914;

										{	/* Coerce/coerce.scm 416 */
											obj_t BgL_arg1929z00_2915;

											{	/* Coerce/coerce.scm 416 */
												obj_t BgL_arg1930z00_2916;

												{	/* Coerce/coerce.scm 416 */
													obj_t BgL_arg1931z00_2917;

													{	/* Coerce/coerce.scm 416 */
														obj_t BgL_arg1932z00_2918;

														BgL_arg1932z00_2918 =
															MAKE_YOUNG_PAIR(BgL_arg1924z00_2909, BNIL);
														BgL_arg1931z00_2917 =
															MAKE_YOUNG_PAIR
															(BGl_string2138z00zzcoerce_coercez00,
															BgL_arg1932z00_2918);
													}
													BgL_arg1930z00_2916 =
														MAKE_YOUNG_PAIR(BgL_arg1923z00_2908,
														BgL_arg1931z00_2917);
												}
												BgL_arg1929z00_2915 =
													MAKE_YOUNG_PAIR(BGl_string2139z00zzcoerce_coercez00,
													BgL_arg1930z00_2916);
											}
											BgL_arg1928z00_2914 =
												MAKE_YOUNG_PAIR(BGl_string2140z00zzcoerce_coercez00,
												BgL_arg1929z00_2915);
										}
										BgL_arg1927z00_2913 =
											MAKE_YOUNG_PAIR(BINT(((long) 416)), BgL_arg1928z00_2914);
									}
									BgL_arg1926z00_2912 =
										MAKE_YOUNG_PAIR(BGl_string2141z00zzcoerce_coercez00,
										BgL_arg1927z00_2913);
								}
								BgL_list1925z00_2911 =
									MAKE_YOUNG_PAIR(BGl_string2142z00zzcoerce_coercez00,
									BgL_arg1926z00_2912);
							}
							BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1921z00_2907,
								BgL_list1925z00_2911);
					}}
				if (BGl_coercerzd2existszf3z21zztype_coercionz00
					(BgL_testzd2nodezd2typez00_2906, BgL_testzd2typezd2_2905))
					{	/* Coerce/coerce.scm 425 */
						((((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2748)))->BgL_testz00) =
							((BgL_nodez00_bglt)
								BGl_coercez12z12zzcoerce_coercez00((((BgL_switchz00_bglt)
											COBJECT(((BgL_switchz00_bglt) BgL_nodez00_2748)))->
										BgL_testz00), BgL_callerz00_2749, BgL_testzd2typezd2_2905,
									CBOOL(BgL_safez00_2751))), BUNSPEC);
						{
							obj_t BgL_l1272z00_2920;

							BgL_l1272z00_2920 = BgL_clausesz00_2904;
						BgL_zc3z04anonymousza31936ze3z87_2919:
							if (PAIRP(BgL_l1272z00_2920))
								{	/* Coerce/coerce.scm 428 */
									{	/* Coerce/coerce.scm 429 */
										obj_t BgL_clausez00_2921;

										BgL_clausez00_2921 = CAR(BgL_l1272z00_2920);
										{	/* Coerce/coerce.scm 430 */
											BgL_nodez00_bglt BgL_arg1938z00_2922;

											{	/* Coerce/coerce.scm 430 */
												obj_t BgL_arg1939z00_2923;

												BgL_arg1939z00_2923 = CDR(((obj_t) BgL_clausez00_2921));
												BgL_arg1938z00_2922 =
													BGl_coercez12z12zzcoerce_coercez00(
													((BgL_nodez00_bglt) BgL_arg1939z00_2923),
													BgL_callerz00_2749,
													((BgL_typez00_bglt) BgL_toz00_2750),
													CBOOL(BgL_safez00_2751));
											}
											{	/* Coerce/coerce.scm 429 */
												obj_t BgL_auxz00_3513;
												obj_t BgL_tmpz00_3511;

												BgL_auxz00_3513 = ((obj_t) BgL_arg1938z00_2922);
												BgL_tmpz00_3511 = ((obj_t) BgL_clausez00_2921);
												SET_CDR(BgL_tmpz00_3511, BgL_auxz00_3513);
											}
										}
									}
									{
										obj_t BgL_l1272z00_3516;

										BgL_l1272z00_3516 = CDR(BgL_l1272z00_2920);
										BgL_l1272z00_2920 = BgL_l1272z00_3516;
										goto BgL_zc3z04anonymousza31936ze3z87_2919;
									}
								}
							else
								{	/* Coerce/coerce.scm 428 */
									((bool_t) 1);
								}
						}
						return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2748));
					}
				else
					{	/* Coerce/coerce.scm 433 */
						obj_t BgL_arg1941z00_2924;

						{	/* Coerce/coerce.scm 433 */
							obj_t BgL_arg1942z00_2925;
							obj_t BgL_arg1943z00_2926;
							BgL_nodez00_bglt BgL_arg1944z00_2927;

							BgL_arg1942z00_2925 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_switchz00_bglt) BgL_nodez00_2748))))->BgL_locz00);
							BgL_arg1943z00_2926 =
								(((BgL_typez00_bglt) COBJECT(BgL_testzd2typezd2_2905))->
								BgL_idz00);
							BgL_arg1944z00_2927 =
								(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt)
											BgL_nodez00_2748)))->BgL_testz00);
							BgL_arg1941z00_2924 =
								BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
								(BgL_arg1942z00_2925, BgL_arg1943z00_2926, BgL_arg1944z00_2927);
						}
						return
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1941z00_2924), BgL_callerz00_2749,
							((BgL_typez00_bglt) BgL_toz00_2750), CBOOL(BgL_safez00_2751));
					}
			}
		}

	}



/* &coerce!-fail1319 */
	BgL_nodez00_bglt BGl_z62coercez12zd2fail1319za2zzcoerce_coercez00(obj_t
		BgL_envz00_2752, obj_t BgL_nodez00_2753, obj_t BgL_callerz00_2754,
		obj_t BgL_toz00_2755, obj_t BgL_safez00_2756)
	{
		{	/* Coerce/coerce.scm 399 */
			{
				BgL_nodez00_bglt BgL_auxz00_3531;

				{	/* Coerce/coerce.scm 401 */
					BgL_nodez00_bglt BgL_arg1917z00_2929;

					BgL_arg1917z00_2929 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_procz00);
					BgL_auxz00_3531 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1917z00_2929,
						BgL_callerz00_2754,
						((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
						CBOOL(BgL_safez00_2756));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3531), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3539;

				{	/* Coerce/coerce.scm 402 */
					BgL_nodez00_bglt BgL_arg1918z00_2930;

					BgL_arg1918z00_2930 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_msgz00);
					BgL_auxz00_3539 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1918z00_2930,
						BgL_callerz00_2754,
						((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
						CBOOL(BgL_safez00_2756));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3539), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3547;

				{	/* Coerce/coerce.scm 403 */
					BgL_nodez00_bglt BgL_arg1919z00_2931;

					BgL_arg1919z00_2931 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_objz00);
					BgL_auxz00_3547 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1919z00_2931,
						BgL_callerz00_2754,
						((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
						CBOOL(BgL_safez00_2756));
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2753)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3547), BUNSPEC);
			}
			return
				BGl_convertz12z12zzcoerce_convertz00(
				((BgL_nodez00_bglt)
					((BgL_failz00_bglt) BgL_nodez00_2753)),
				((BgL_typez00_bglt) BGl_za2magicza2z00zztype_cachez00),
				((BgL_typez00_bglt) BgL_toz00_2755), CBOOL(BgL_safez00_2756));
		}

	}



/* &coerce!-conditional1317 */
	BgL_nodez00_bglt BGl_z62coercez12zd2conditional1317za2zzcoerce_coercez00(obj_t
		BgL_envz00_2757, obj_t BgL_nodez00_2758, obj_t BgL_callerz00_2759,
		obj_t BgL_toz00_2760, obj_t BgL_safez00_2761)
	{
		{	/* Coerce/coerce.scm 288 */
			{
				BgL_appz00_bglt BgL_nodez00_2974;
				BgL_letzd2varzd2_bglt BgL_nodez00_2954;
				obj_t BgL_nodez00_2939;
				obj_t BgL_typecz00_2940;
				obj_t BgL_nodez00_2937;

				{
					BgL_nodez00_bglt BgL_auxz00_3561;

					{	/* Coerce/coerce.scm 384 */
						BgL_nodez00_bglt BgL_arg1747z00_2979;

						BgL_arg1747z00_2979 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->BgL_testz00);
						BgL_auxz00_3561 =
							BGl_coercez12z12zzcoerce_coercez00(BgL_arg1747z00_2979,
							BgL_callerz00_2759,
							((BgL_typez00_bglt) BGl_za2boolza2z00zztype_cachez00),
							CBOOL(BgL_safez00_2761));
					}
					((((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_auxz00_3561), BUNSPEC);
				}
				{	/* Coerce/coerce.scm 385 */
					obj_t BgL_casezd2valuezd2_2980;

					{	/* Coerce/coerce.scm 385 */
						BgL_nodez00_bglt BgL_arg1760z00_2981;

						BgL_arg1760z00_2981 =
							(((BgL_conditionalz00_bglt) COBJECT(
									((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->BgL_testz00);
						BgL_nodez00_2937 = ((obj_t) BgL_arg1760z00_2981);
					BgL_testzd2staticzd2valuez00_2933:
						{	/* Coerce/coerce.scm 373 */
							obj_t BgL_g1135z00_2938;

							BgL_g1135z00_2938 =
								BGl_isazd2ofzd2zztype_miscz00(
								((BgL_nodez00_bglt) BgL_nodez00_2937));
							if (CBOOL(BgL_g1135z00_2938))
								{	/* Coerce/coerce.scm 373 */
									BgL_nodez00_2939 = BgL_nodez00_2937;
									BgL_typecz00_2940 = BgL_g1135z00_2938;
									{	/* Coerce/coerce.scm 355 */
										obj_t BgL_typevz00_2941;

										{	/* Coerce/coerce.scm 356 */
											bool_t BgL_test2209z00_3575;

											{	/* Coerce/coerce.scm 356 */
												obj_t BgL_arg1912z00_2942;

												{	/* Coerce/coerce.scm 356 */
													obj_t BgL_pairz00_2943;

													BgL_pairz00_2943 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2939)))->
														BgL_argsz00);
													BgL_arg1912z00_2942 = CAR(BgL_pairz00_2943);
												}
												BgL_test2209z00_3575 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1912z00_2942,
													BGl_varz00zzast_nodez00);
											}
											if (BgL_test2209z00_3575)
												{	/* Coerce/coerce.scm 357 */
													obj_t BgL_arg1895z00_2944;

													{	/* Coerce/coerce.scm 357 */
														obj_t BgL_pairz00_2945;

														BgL_pairz00_2945 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2939)))->
															BgL_argsz00);
														BgL_arg1895z00_2944 = CAR(BgL_pairz00_2945);
													}
													BgL_typevz00_2941 =
														((obj_t)
														BGl_getzd2typezd2zztype_typeofz00(
															((BgL_nodez00_bglt) BgL_arg1895z00_2944),
															((bool_t) 0)));
												}
											else
												{	/* Coerce/coerce.scm 358 */
													bool_t BgL_test2210z00_3586;

													{	/* Coerce/coerce.scm 358 */
														obj_t BgL_arg1910z00_2946;

														{	/* Coerce/coerce.scm 358 */
															obj_t BgL_pairz00_2947;

															BgL_pairz00_2947 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_2939)))->
																BgL_argsz00);
															BgL_arg1910z00_2946 = CAR(BgL_pairz00_2947);
														}
														BgL_test2210z00_3586 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1910z00_2946,
															BGl_castz00zzast_nodez00);
													}
													if (BgL_test2210z00_3586)
														{	/* Coerce/coerce.scm 359 */
															BgL_castz00_bglt BgL_i1134z00_2948;

															{	/* Coerce/coerce.scm 359 */
																obj_t BgL_pairz00_2949;

																BgL_pairz00_2949 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2939)))->
																	BgL_argsz00);
																BgL_i1134z00_2948 =
																	((BgL_castz00_bglt) CAR(BgL_pairz00_2949));
															}
															{	/* Coerce/coerce.scm 360 */
																bool_t BgL_test2211z00_3595;

																{	/* Coerce/coerce.scm 360 */
																	bool_t BgL_test2212z00_3596;

																	{	/* Coerce/coerce.scm 360 */
																		BgL_typez00_bglt BgL_arg1908z00_2950;

																		BgL_arg1908z00_2950 =
																			(((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_i1134z00_2948)))->BgL_typez00);
																		BgL_test2212z00_3596 =
																			(((obj_t) BgL_arg1908z00_2950) ==
																			BGl_za2objza2z00zztype_cachez00);
																	}
																	if (BgL_test2212z00_3596)
																		{	/* Coerce/coerce.scm 360 */
																			BgL_nodez00_bglt BgL_arg1907z00_2951;

																			BgL_arg1907z00_2951 =
																				(((BgL_castz00_bglt)
																					COBJECT(BgL_i1134z00_2948))->
																				BgL_argz00);
																			{	/* Coerce/coerce.scm 360 */
																				bool_t BgL_res2095z00_2952;

																				BgL_res2095z00_2952 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_arg1907z00_2951),
																					BGl_varz00zzast_nodez00);
																				BgL_test2211z00_3595 =
																					BgL_res2095z00_2952;
																			}
																		}
																	else
																		{	/* Coerce/coerce.scm 360 */
																			BgL_test2211z00_3595 = ((bool_t) 0);
																		}
																}
																if (BgL_test2211z00_3595)
																	{	/* Coerce/coerce.scm 361 */
																		BgL_nodez00_bglt BgL_arg1906z00_2953;

																		BgL_arg1906z00_2953 =
																			(((BgL_castz00_bglt)
																				COBJECT(BgL_i1134z00_2948))->
																			BgL_argz00);
																		BgL_typevz00_2941 =
																			((obj_t)
																			BGl_getzd2typezd2zztype_typeofz00
																			(BgL_arg1906z00_2953, ((bool_t) 0)));
																	}
																else
																	{	/* Coerce/coerce.scm 360 */
																		BgL_typevz00_2941 = BFALSE;
																	}
															}
														}
													else
														{	/* Coerce/coerce.scm 358 */
															BgL_typevz00_2941 = BFALSE;
														}
												}
										}
										if (BGl_isazf3zf3zz__objectz00(BgL_typevz00_2941,
												BGl_typez00zztype_typez00))
											{	/* Coerce/coerce.scm 363 */
												if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(
														((BgL_typez00_bglt) BgL_typecz00_2940),
														((BgL_typez00_bglt) BgL_typevz00_2941)))
													{	/* Coerce/coerce.scm 365 */
														BgL_casezd2valuezd2_2980 =
															CNST_TABLE_REF(((long) 1));
													}
												else
													{	/* Coerce/coerce.scm 365 */
														if (BGl_typezd2disjointzf3z21zztype_miscz00(
																((BgL_typez00_bglt) BgL_typecz00_2940),
																((BgL_typez00_bglt) BgL_typevz00_2941)))
															{	/* Coerce/coerce.scm 367 */
																BgL_casezd2valuezd2_2980 =
																	CNST_TABLE_REF(((long) 2));
															}
														else
															{	/* Coerce/coerce.scm 367 */
																BgL_casezd2valuezd2_2980 = BFALSE;
															}
													}
											}
										else
											{	/* Coerce/coerce.scm 363 */
												BgL_casezd2valuezd2_2980 = BFALSE;
											}
									}
								}
							else
								{	/* Coerce/coerce.scm 373 */
									if (BGl_isazf3zf3zz__objectz00(BgL_nodez00_2937,
											BGl_appz00zzast_nodez00))
										{	/* Coerce/coerce.scm 377 */
											BgL_nodez00_2974 = ((BgL_appz00_bglt) BgL_nodez00_2937);
											{	/* Coerce/coerce.scm 291 */
												bool_t BgL_test2217z00_3621;

												{	/* Coerce/coerce.scm 291 */
													obj_t BgL_tmpz00_3622;

													BgL_tmpz00_3622 =
														(((BgL_appz00_bglt) COBJECT(BgL_nodez00_2974))->
														BgL_argsz00);
													BgL_test2217z00_3621 = PAIRP(BgL_tmpz00_3622);
												}
												if (BgL_test2217z00_3621)
													{	/* Coerce/coerce.scm 291 */
														if (NULLP(CDR(
																	(((BgL_appz00_bglt)
																			COBJECT(BgL_nodez00_2974))->
																		BgL_argsz00))))
															{	/* Coerce/coerce.scm 293 */
																bool_t BgL_test2219z00_3629;

																{	/* Coerce/coerce.scm 293 */
																	obj_t BgL_arg1775z00_2975;

																	BgL_arg1775z00_2975 =
																		CAR(
																		(((BgL_appz00_bglt)
																				COBJECT(BgL_nodez00_2974))->
																			BgL_argsz00));
																	BgL_test2219z00_3629 =
																		BGl_sidezd2effectzf3z21zzeffect_effectz00((
																			(BgL_nodez00_bglt) BgL_arg1775z00_2975));
																}
																if (BgL_test2219z00_3629)
																	{	/* Coerce/coerce.scm 293 */
																		BgL_casezd2valuezd2_2980 = BFALSE;
																	}
																else
																	{	/* Coerce/coerce.scm 294 */
																		obj_t BgL_typecz00_2976;

																		BgL_typecz00_2976 =
																			BGl_appzd2predicatezd2ofz00zztype_miscz00
																			(BgL_nodez00_2974);
																		{	/* Coerce/coerce.scm 294 */
																			BgL_typez00_bglt BgL_typevz00_2977;

																			{	/* Coerce/coerce.scm 295 */
																				obj_t BgL_arg1768z00_2978;

																				BgL_arg1768z00_2978 =
																					CAR(
																					(((BgL_appz00_bglt)
																							COBJECT(BgL_nodez00_2974))->
																						BgL_argsz00));
																				BgL_typevz00_2977 =
																					BGl_getzd2typezd2zztype_typeofz00((
																						(BgL_nodez00_bglt)
																						BgL_arg1768z00_2978), ((bool_t) 0));
																			}
																			{	/* Coerce/coerce.scm 295 */

																				if (BGl_isazf3zf3zz__objectz00
																					(BgL_typecz00_2976,
																						BGl_typez00zztype_typez00))
																					{	/* Coerce/coerce.scm 297 */
																						if (
																							(((obj_t) BgL_typevz00_2977) ==
																								BGl_za2objza2z00zztype_cachez00))
																							{	/* Coerce/coerce.scm 300 */
																								BgL_casezd2valuezd2_2980 =
																									BFALSE;
																							}
																						else
																							{	/* Coerce/coerce.scm 300 */
																								if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(((BgL_typez00_bglt) BgL_typecz00_2976), BgL_typevz00_2977))
																									{	/* Coerce/coerce.scm 303 */
																										BgL_casezd2valuezd2_2980 =
																											CNST_TABLE_REF(((long)
																												1));
																									}
																								else
																									{	/* Coerce/coerce.scm 303 */
																										if (BGl_typezd2disjointzf3z21zztype_miscz00(((BgL_typez00_bglt) BgL_typecz00_2976), BgL_typevz00_2977))
																											{	/* Coerce/coerce.scm 305 */
																												BgL_casezd2valuezd2_2980
																													=
																													CNST_TABLE_REF(((long)
																														2));
																											}
																										else
																											{	/* Coerce/coerce.scm 305 */
																												BgL_casezd2valuezd2_2980
																													= BFALSE;
																											}
																									}
																							}
																					}
																				else
																					{	/* Coerce/coerce.scm 297 */
																						BgL_casezd2valuezd2_2980 = BFALSE;
																					}
																			}
																		}
																	}
															}
														else
															{	/* Coerce/coerce.scm 292 */
																BgL_casezd2valuezd2_2980 = BFALSE;
															}
													}
												else
													{	/* Coerce/coerce.scm 291 */
														BgL_casezd2valuezd2_2980 = BFALSE;
													}
											}
										}
									else
										{	/* Coerce/coerce.scm 377 */
											if (BGl_isazf3zf3zz__objectz00(BgL_nodez00_2937,
													BGl_letzd2varzd2zzast_nodez00))
												{	/* Coerce/coerce.scm 379 */
													BgL_nodez00_2954 =
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2937);
													{	/* Coerce/coerce.scm 311 */
														bool_t BgL_test2225z00_3655;

														{	/* Coerce/coerce.scm 311 */
															bool_t BgL_test2226z00_3656;

															{	/* Coerce/coerce.scm 311 */
																obj_t BgL_tmpz00_3657;

																BgL_tmpz00_3657 =
																	(((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_nodez00_2954))->
																	BgL_bindingsz00);
																BgL_test2226z00_3656 = PAIRP(BgL_tmpz00_3657);
															}
															if (BgL_test2226z00_3656)
																{	/* Coerce/coerce.scm 311 */
																	BgL_test2225z00_3655 =
																		NULLP(CDR(
																			(((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_nodez00_2954))->
																				BgL_bindingsz00)));
																}
															else
																{	/* Coerce/coerce.scm 311 */
																	BgL_test2225z00_3655 = ((bool_t) 0);
																}
														}
														if (BgL_test2225z00_3655)
															{	/* Coerce/coerce.scm 313 */
																bool_t BgL_test2227z00_3663;

																{	/* Coerce/coerce.scm 313 */
																	BgL_nodez00_bglt BgL_arg1882z00_2955;

																	BgL_arg1882z00_2955 =
																		(((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_nodez00_2954))->BgL_bodyz00);
																	{	/* Coerce/coerce.scm 313 */
																		bool_t BgL_res2084z00_2956;

																		BgL_res2084z00_2956 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_arg1882z00_2955),
																			BGl_appz00zzast_nodez00);
																		BgL_test2227z00_3663 = BgL_res2084z00_2956;
																	}
																}
																if (BgL_test2227z00_3663)
																	{	/* Coerce/coerce.scm 314 */
																		obj_t BgL_varz00_2957;

																		{	/* Coerce/coerce.scm 314 */
																			obj_t BgL_argsz00_2958;

																			BgL_argsz00_2958 =
																				(((BgL_appz00_bglt) COBJECT(
																						((BgL_appz00_bglt)
																							(((BgL_letzd2varzd2_bglt)
																									COBJECT(BgL_nodez00_2954))->
																								BgL_bodyz00))))->BgL_argsz00);
																			if (PAIRP(BgL_argsz00_2958))
																				{	/* Coerce/coerce.scm 318 */
																					bool_t BgL_test2229z00_3672;

																					if (NULLP(CDR(BgL_argsz00_2958)))
																						{	/* Coerce/coerce.scm 318 */
																							obj_t BgL_arg1859z00_2959;

																							BgL_arg1859z00_2959 =
																								CAR(BgL_argsz00_2958);
																							BgL_test2229z00_3672 =
																								BGl_isazf3zf3zz__objectz00
																								(BgL_arg1859z00_2959,
																								BGl_varz00zzast_nodez00);
																						}
																					else
																						{	/* Coerce/coerce.scm 318 */
																							BgL_test2229z00_3672 =
																								((bool_t) 0);
																						}
																					if (BgL_test2229z00_3672)
																						{	/* Coerce/coerce.scm 318 */
																							BgL_varz00_2957 =
																								((obj_t)
																								(((BgL_varz00_bglt) COBJECT(
																											((BgL_varz00_bglt)
																												CAR
																												(BgL_argsz00_2958))))->
																									BgL_variablez00));
																						}
																					else
																						{	/* Coerce/coerce.scm 321 */
																							bool_t BgL_test2231z00_3682;

																							{	/* Coerce/coerce.scm 321 */
																								obj_t BgL_tmpz00_3683;

																								BgL_tmpz00_3683 =
																									CDR(BgL_argsz00_2958);
																								BgL_test2231z00_3682 =
																									PAIRP(BgL_tmpz00_3683);
																							}
																							if (BgL_test2231z00_3682)
																								{	/* Coerce/coerce.scm 323 */
																									bool_t BgL_test2232z00_3686;

																									if (NULLP(CDR(CDR
																												(BgL_argsz00_2958))))
																										{	/* Coerce/coerce.scm 323 */
																											obj_t BgL_arg1856z00_2960;

																											BgL_arg1856z00_2960 =
																												CAR(BgL_argsz00_2958);
																											BgL_test2232z00_3686 =
																												BGl_isazf3zf3zz__objectz00
																												(BgL_arg1856z00_2960,
																												BGl_varz00zzast_nodez00);
																										}
																									else
																										{	/* Coerce/coerce.scm 323 */
																											BgL_test2232z00_3686 =
																												((bool_t) 0);
																										}
																									if (BgL_test2232z00_3686)
																										{	/* Coerce/coerce.scm 323 */
																											BgL_varz00_2957 =
																												((obj_t)
																												(((BgL_varz00_bglt)
																														COBJECT((
																																(BgL_varz00_bglt)
																																CAR
																																(BgL_argsz00_2958))))->
																													BgL_variablez00));
																										}
																									else
																										{	/* Coerce/coerce.scm 323 */
																											BgL_varz00_2957 = BFALSE;
																										}
																								}
																							else
																								{	/* Coerce/coerce.scm 321 */
																									BgL_varz00_2957 = BFALSE;
																								}
																						}
																				}
																			else
																				{	/* Coerce/coerce.scm 316 */
																					BgL_varz00_2957 = BFALSE;
																				}
																		}
																		{	/* Coerce/coerce.scm 314 */
																			obj_t BgL_typecz00_2961;

																			{	/* Coerce/coerce.scm 328 */
																				BgL_nodez00_bglt BgL_arg1838z00_2962;

																				BgL_arg1838z00_2962 =
																					(((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_nodez00_2954))->
																					BgL_bodyz00);
																				BgL_typecz00_2961 =
																					BGl_appzd2predicatezd2ofz00zztype_miscz00
																					(((BgL_appz00_bglt)
																						BgL_arg1838z00_2962));
																			}
																			{	/* Coerce/coerce.scm 328 */
																				BgL_typez00_bglt BgL_typepz00_2963;

																				{
																					BgL_variablez00_bglt BgL_auxz00_3700;

																					{	/* Coerce/coerce.scm 329 */
																						obj_t BgL_pairz00_2964;

																						{	/* Coerce/coerce.scm 329 */
																							obj_t BgL_pairz00_2965;

																							BgL_pairz00_2965 =
																								(((BgL_letzd2varzd2_bglt)
																									COBJECT(BgL_nodez00_2954))->
																								BgL_bindingsz00);
																							BgL_pairz00_2964 =
																								CAR(BgL_pairz00_2965);
																						}
																						BgL_auxz00_3700 =
																							((BgL_variablez00_bglt)
																							CAR(BgL_pairz00_2964));
																					}
																					BgL_typepz00_2963 =
																						(((BgL_variablez00_bglt)
																							COBJECT(BgL_auxz00_3700))->
																						BgL_typez00);
																				}
																				{	/* Coerce/coerce.scm 329 */
																					BgL_typez00_bglt BgL_typevz00_2966;

																					if (
																						(((obj_t) BgL_typepz00_2963) ==
																							BGl_za2objza2z00zztype_cachez00))
																						{	/* Coerce/coerce.scm 331 */
																							obj_t BgL_arg1830z00_2967;

																							BgL_arg1830z00_2967 =
																								CDR(CAR(
																									(((BgL_letzd2varzd2_bglt)
																											COBJECT
																											(BgL_nodez00_2954))->
																										BgL_bindingsz00)));
																							BgL_typevz00_2966 =
																								BGl_getzd2typezd2zztype_typeofz00
																								(((BgL_nodez00_bglt)
																									BgL_arg1830z00_2967),
																								((bool_t) 0));
																						}
																					else
																						{	/* Coerce/coerce.scm 330 */
																							BgL_typevz00_2966 =
																								BgL_typepz00_2963;
																						}
																					{	/* Coerce/coerce.scm 330 */

																						if (BGl_isazf3zf3zz__objectz00
																							(BgL_typecz00_2961,
																								BGl_typez00zztype_typez00))
																							{	/* Coerce/coerce.scm 337 */
																								bool_t BgL_test2236z00_3716;

																								{	/* Coerce/coerce.scm 337 */
																									obj_t BgL_tmpz00_3717;

																									{	/* Coerce/coerce.scm 337 */
																										obj_t BgL_pairz00_2968;

																										BgL_pairz00_2968 =
																											(((BgL_letzd2varzd2_bglt)
																												COBJECT
																												(BgL_nodez00_2954))->
																											BgL_bindingsz00);
																										BgL_tmpz00_3717 =
																											CAR(CAR
																											(BgL_pairz00_2968));
																									}
																									BgL_test2236z00_3716 =
																										(BgL_varz00_2957 ==
																										BgL_tmpz00_3717);
																								}
																								if (BgL_test2236z00_3716)
																									{	/* Coerce/coerce.scm 337 */
																										if (
																											(((obj_t)
																													BgL_typevz00_2966) ==
																												BGl_za2objza2z00zztype_cachez00))
																											{	/* Coerce/coerce.scm 340 */
																												BgL_casezd2valuezd2_2980
																													= BFALSE;
																											}
																										else
																											{	/* Coerce/coerce.scm 340 */
																												if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(((BgL_typez00_bglt) BgL_typecz00_2961), BgL_typevz00_2966))
																													{	/* Coerce/coerce.scm 343 */
																														BgL_casezd2valuezd2_2980
																															=
																															CNST_TABLE_REF((
																																(long) 1));
																													}
																												else
																													{	/* Coerce/coerce.scm 343 */
																														if (BGl_typezd2disjointzf3z21zztype_miscz00(((BgL_typez00_bglt) BgL_typecz00_2961), BgL_typevz00_2966))
																															{	/* Coerce/coerce.scm 345 */
																																BgL_casezd2valuezd2_2980
																																	=
																																	CNST_TABLE_REF
																																	(((long) 2));
																															}
																														else
																															{	/* Coerce/coerce.scm 345 */
																																BgL_casezd2valuezd2_2980
																																	= BFALSE;
																															}
																													}
																											}
																									}
																								else
																									{	/* Coerce/coerce.scm 337 */
																										BgL_casezd2valuezd2_2980 =
																											BFALSE;
																									}
																							}
																						else
																							{	/* Coerce/coerce.scm 334 */
																								BgL_casezd2valuezd2_2980 =
																									BFALSE;
																							}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Coerce/coerce.scm 349 */
																		bool_t BgL_test2240z00_3733;

																		{	/* Coerce/coerce.scm 349 */
																			bool_t BgL_test2241z00_3734;

																			{	/* Coerce/coerce.scm 349 */
																				BgL_nodez00_bglt BgL_arg1881z00_2969;

																				BgL_arg1881z00_2969 =
																					(((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_nodez00_2954))->
																					BgL_bodyz00);
																				{	/* Coerce/coerce.scm 349 */
																					bool_t BgL_res2092z00_2970;

																					BgL_res2092z00_2970 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_arg1881z00_2969),
																						BGl_varz00zzast_nodez00);
																					BgL_test2241z00_3734 =
																						BgL_res2092z00_2970;
																				}
																			}
																			if (BgL_test2241z00_3734)
																				{	/* Coerce/coerce.scm 349 */
																					obj_t BgL_tmpz00_3738;

																					{	/* Coerce/coerce.scm 349 */
																						obj_t BgL_pairz00_2971;

																						BgL_pairz00_2971 =
																							(((BgL_letzd2varzd2_bglt)
																								COBJECT(BgL_nodez00_2954))->
																							BgL_bindingsz00);
																						BgL_tmpz00_3738 =
																							CAR(CAR(BgL_pairz00_2971));
																					}
																					BgL_test2240z00_3733 =
																						(
																						((obj_t)
																							(((BgL_varz00_bglt) COBJECT(
																										((BgL_varz00_bglt)
																											(((BgL_letzd2varzd2_bglt)
																													COBJECT
																													(BgL_nodez00_2954))->
																												BgL_bodyz00))))->
																								BgL_variablez00)) ==
																						BgL_tmpz00_3738);
																				}
																			else
																				{	/* Coerce/coerce.scm 349 */
																					BgL_test2240z00_3733 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test2240z00_3733)
																			{	/* Coerce/coerce.scm 350 */
																				obj_t BgL_arg1873z00_2972;

																				{	/* Coerce/coerce.scm 350 */
																					obj_t BgL_pairz00_2973;

																					BgL_pairz00_2973 =
																						(((BgL_letzd2varzd2_bglt)
																							COBJECT(BgL_nodez00_2954))->
																						BgL_bindingsz00);
																					BgL_arg1873z00_2972 =
																						CDR(CAR(BgL_pairz00_2973));
																				}
																				{
																					obj_t BgL_nodez00_3750;

																					BgL_nodez00_3750 =
																						BgL_arg1873z00_2972;
																					BgL_nodez00_2937 = BgL_nodez00_3750;
																					goto
																						BgL_testzd2staticzd2valuez00_2933;
																				}
																			}
																		else
																			{	/* Coerce/coerce.scm 349 */
																				BgL_casezd2valuezd2_2980 = BFALSE;
																			}
																	}
															}
														else
															{	/* Coerce/coerce.scm 311 */
																BgL_casezd2valuezd2_2980 = BFALSE;
															}
													}
												}
											else
												{	/* Coerce/coerce.scm 379 */
													BgL_casezd2valuezd2_2980 = BFALSE;
												}
										}
								}
						}
					}
					if ((BgL_casezd2valuezd2_2980 == CNST_TABLE_REF(((long) 1))))
						{	/* Coerce/coerce.scm 387 */
							BgL_nodez00_bglt BgL_arg1754z00_2982;

							BgL_arg1754z00_2982 =
								(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
								BgL_truez00);
							return BGl_coercez12z12zzcoerce_coercez00(BgL_arg1754z00_2982,
								BgL_callerz00_2759, ((BgL_typez00_bglt) BgL_toz00_2760),
								CBOOL(BgL_safez00_2761));
						}
					else
						{	/* Coerce/coerce.scm 385 */
							if ((BgL_casezd2valuezd2_2980 == CNST_TABLE_REF(((long) 2))))
								{	/* Coerce/coerce.scm 389 */
									BgL_nodez00_bglt BgL_arg1756z00_2983;

									BgL_arg1756z00_2983 =
										(((BgL_conditionalz00_bglt) COBJECT(
												((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
										BgL_falsez00);
									return BGl_coercez12z12zzcoerce_coercez00(BgL_arg1756z00_2983,
										BgL_callerz00_2759, ((BgL_typez00_bglt) BgL_toz00_2760),
										CBOOL(BgL_safez00_2761));
								}
							else
								{	/* Coerce/coerce.scm 385 */
									{
										BgL_nodez00_bglt BgL_auxz00_3769;

										{	/* Coerce/coerce.scm 391 */
											BgL_nodez00_bglt BgL_arg1757z00_2984;

											BgL_arg1757z00_2984 =
												(((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
												BgL_truez00);
											BgL_auxz00_3769 =
												BGl_coercez12z12zzcoerce_coercez00(BgL_arg1757z00_2984,
												BgL_callerz00_2759, ((BgL_typez00_bglt) BgL_toz00_2760),
												CBOOL(BgL_safez00_2761));
										}
										((((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
												BgL_truez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3769), BUNSPEC);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3777;

										{	/* Coerce/coerce.scm 392 */
											BgL_nodez00_bglt BgL_arg1759z00_2985;

											BgL_arg1759z00_2985 =
												(((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
												BgL_falsez00);
											BgL_auxz00_3777 =
												BGl_coercez12z12zzcoerce_coercez00(BgL_arg1759z00_2985,
												BgL_callerz00_2759, ((BgL_typez00_bglt) BgL_toz00_2760),
												CBOOL(BgL_safez00_2761));
										}
										((((BgL_conditionalz00_bglt) COBJECT(
														((BgL_conditionalz00_bglt) BgL_nodez00_2758)))->
												BgL_falsez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3777), BUNSPEC);
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_conditionalz00_bglt) BgL_nodez00_2758))))->
											BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_toz00_2760)),
										BUNSPEC);
									return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt)
											BgL_nodez00_2758));
								}
						}
				}
			}
		}

	}



/* &coerce!-setq1315 */
	BgL_nodez00_bglt BGl_z62coercez12zd2setq1315za2zzcoerce_coercez00(obj_t
		BgL_envz00_2762, obj_t BgL_nodez00_2763, obj_t BgL_callerz00_2764,
		obj_t BgL_toz00_2765, obj_t BgL_safez00_2766)
	{
		{	/* Coerce/coerce.scm 264 */
			{
				BgL_nodez00_bglt BgL_auxz00_3791;

				{	/* Coerce/coerce.scm 266 */
					BgL_nodez00_bglt BgL_arg1743z00_2987;
					BgL_typez00_bglt BgL_arg1744z00_2988;

					BgL_arg1743z00_2987 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2763)))->BgL_valuez00);
					BgL_arg1744z00_2988 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											(((BgL_setqz00_bglt) COBJECT(
														((BgL_setqz00_bglt) BgL_nodez00_2763)))->
												BgL_varz00)))->BgL_variablez00)))->BgL_typez00);
					BgL_auxz00_3791 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1743z00_2987,
						BgL_callerz00_2764, BgL_arg1744z00_2988, CBOOL(BgL_safez00_2766));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2763)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3791), BUNSPEC);
			}
			return
				BGl_convertz12z12zzcoerce_convertz00(
				((BgL_nodez00_bglt)
					((BgL_setqz00_bglt) BgL_nodez00_2763)),
				((BgL_typez00_bglt) BGl_za2unspecza2z00zztype_cachez00),
				((BgL_typez00_bglt) BgL_toz00_2765), CBOOL(BgL_safez00_2766));
		}

	}



/* &coerce!-cast1313 */
	BgL_nodez00_bglt BGl_z62coercez12zd2cast1313za2zzcoerce_coercez00(obj_t
		BgL_envz00_2767, obj_t BgL_nodez00_2768, obj_t BgL_callerz00_2769,
		obj_t BgL_toz00_2770, obj_t BgL_safez00_2771)
	{
		{	/* Coerce/coerce.scm 254 */
			{
				BgL_nodez00_bglt BgL_auxz00_3808;

				{	/* Coerce/coerce.scm 258 */
					BgL_nodez00_bglt BgL_arg1739z00_2990;
					BgL_typez00_bglt BgL_arg1740z00_2991;

					BgL_arg1739z00_2990 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2768)))->BgL_argz00);
					{	/* Coerce/coerce.scm 258 */
						BgL_nodez00_bglt BgL_arg1741z00_2992;

						BgL_arg1741z00_2992 =
							(((BgL_castz00_bglt) COBJECT(
									((BgL_castz00_bglt) BgL_nodez00_2768)))->BgL_argz00);
						BgL_arg1740z00_2991 =
							BGl_getzd2typezd2zztype_typeofz00(BgL_arg1741z00_2992,
							((bool_t) 0));
					}
					BgL_auxz00_3808 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1739z00_2990,
						BgL_callerz00_2769, BgL_arg1740z00_2991, CBOOL(BgL_safez00_2771));
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2768)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3808), BUNSPEC);
			}
			{	/* Coerce/coerce.scm 259 */
				BgL_typez00_bglt BgL_arg1742z00_2993;

				BgL_arg1742z00_2993 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_castz00_bglt) BgL_nodez00_2768))))->BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_castz00_bglt) BgL_nodez00_2768)), BgL_arg1742z00_2993,
					((BgL_typez00_bglt) BgL_toz00_2770), CBOOL(BgL_safez00_2771));
			}
		}

	}



/* &coerce!-vlength1311 */
	BgL_nodez00_bglt BGl_z62coercez12zd2vlength1311za2zzcoerce_coercez00(obj_t
		BgL_envz00_2772, obj_t BgL_nodez00_2773, obj_t BgL_callerz00_2774,
		obj_t BgL_toz00_2775, obj_t BgL_safez00_2776)
	{
		{	/* Coerce/coerce.scm 246 */
			{	/* Coerce/coerce.scm 248 */
				obj_t BgL_arg1728z00_2995;
				BgL_nodez00_bglt BgL_arg1729z00_2996;

				BgL_arg1728z00_2995 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vlengthz00_bglt) BgL_nodez00_2773))))->BgL_exprza2za2);
				{	/* Coerce/coerce.scm 248 */
					obj_t BgL_arg1731z00_2997;
					BgL_typez00_bglt BgL_arg1732z00_2998;

					{	/* Coerce/coerce.scm 248 */
						obj_t BgL_pairz00_2999;

						BgL_pairz00_2999 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vlengthz00_bglt) BgL_nodez00_2773))))->
							BgL_exprza2za2);
						BgL_arg1731z00_2997 = CAR(BgL_pairz00_2999);
					}
					BgL_arg1732z00_2998 =
						(((BgL_vlengthz00_bglt) COBJECT(
								((BgL_vlengthz00_bglt) BgL_nodez00_2773)))->BgL_vtypez00);
					BgL_arg1729z00_2996 =
						BGl_coercez12z12zzcoerce_coercez00(
						((BgL_nodez00_bglt) BgL_arg1731z00_2997), BgL_callerz00_2774,
						BgL_arg1732z00_2998, CBOOL(BgL_safez00_2776));
				}
				{	/* Coerce/coerce.scm 248 */
					obj_t BgL_auxz00_3840;
					obj_t BgL_tmpz00_3838;

					BgL_auxz00_3840 = ((obj_t) BgL_arg1729z00_2996);
					BgL_tmpz00_3838 = ((obj_t) BgL_arg1728z00_2995);
					SET_CAR(BgL_tmpz00_3838, BgL_auxz00_3840);
				}
			}
			{	/* Coerce/coerce.scm 249 */
				BgL_typez00_bglt BgL_arg1738z00_3000;

				BgL_arg1738z00_3000 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_vlengthz00_bglt) BgL_nodez00_2773))))->BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_vlengthz00_bglt) BgL_nodez00_2773)), BgL_arg1738z00_3000,
					((BgL_typez00_bglt) BgL_toz00_2775), CBOOL(BgL_safez00_2776));
			}
		}

	}



/* &coerce!-vset!1309 */
	BgL_nodez00_bglt BGl_z62coercez12zd2vsetz121309zb0zzcoerce_coercez00(obj_t
		BgL_envz00_2777, obj_t BgL_nodez00_2778, obj_t BgL_callerz00_2779,
		obj_t BgL_toz00_2780, obj_t BgL_safez00_2781)
	{
		{	/* Coerce/coerce.scm 234 */
			{	/* Coerce/coerce.scm 237 */
				obj_t BgL_ftypez00_3002;

				{	/* Coerce/coerce.scm 237 */
					bool_t BgL_test2244z00_3851;

					{	/* Coerce/coerce.scm 237 */
						BgL_typez00_bglt BgL_arg1727z00_3003;

						BgL_arg1727z00_3003 =
							(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2778)))->BgL_ftypez00);
						BgL_test2244z00_3851 =
							(((obj_t) BgL_arg1727z00_3003) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2244z00_3851)
						{	/* Coerce/coerce.scm 237 */
							BgL_ftypez00_3002 = BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Coerce/coerce.scm 237 */
							BgL_ftypez00_3002 =
								((obj_t)
								(((BgL_vsetz12z12_bglt) COBJECT(
											((BgL_vsetz12z12_bglt) BgL_nodez00_2778)))->
									BgL_ftypez00));
						}
				}
				{	/* Coerce/coerce.scm 238 */
					obj_t BgL_arg1669z00_3004;
					BgL_nodez00_bglt BgL_arg1672z00_3005;

					BgL_arg1669z00_3004 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->BgL_exprza2za2);
					{	/* Coerce/coerce.scm 238 */
						obj_t BgL_arg1684z00_3006;
						BgL_typez00_bglt BgL_arg1685z00_3007;

						{	/* Coerce/coerce.scm 238 */
							obj_t BgL_pairz00_3008;

							BgL_pairz00_3008 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->
								BgL_exprza2za2);
							BgL_arg1684z00_3006 = CAR(BgL_pairz00_3008);
						}
						BgL_arg1685z00_3007 =
							(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2778)))->BgL_vtypez00);
						BgL_arg1672z00_3005 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1684z00_3006), BgL_callerz00_2779,
							BgL_arg1685z00_3007, CBOOL(BgL_safez00_2781));
					}
					{	/* Coerce/coerce.scm 238 */
						obj_t BgL_auxz00_3873;
						obj_t BgL_tmpz00_3871;

						BgL_auxz00_3873 = ((obj_t) BgL_arg1672z00_3005);
						BgL_tmpz00_3871 = ((obj_t) BgL_arg1669z00_3004);
						SET_CAR(BgL_tmpz00_3871, BgL_auxz00_3873);
					}
				}
				{	/* Coerce/coerce.scm 239 */
					obj_t BgL_arg1687z00_3009;
					BgL_nodez00_bglt BgL_arg1688z00_3010;

					{	/* Coerce/coerce.scm 239 */
						obj_t BgL_pairz00_3011;

						BgL_pairz00_3011 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->
							BgL_exprza2za2);
						BgL_arg1687z00_3009 = CDR(BgL_pairz00_3011);
					}
					{	/* Coerce/coerce.scm 239 */
						obj_t BgL_arg1695z00_3012;
						BgL_typez00_bglt BgL_arg1696z00_3013;

						{	/* Coerce/coerce.scm 239 */
							obj_t BgL_pairz00_3014;

							BgL_pairz00_3014 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->
								BgL_exprza2za2);
							BgL_arg1695z00_3012 = CAR(CDR(BgL_pairz00_3014));
						}
						BgL_arg1696z00_3013 =
							(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_2778)))->BgL_otypez00);
						BgL_arg1688z00_3010 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1695z00_3012), BgL_callerz00_2779,
							BgL_arg1696z00_3013, CBOOL(BgL_safez00_2781));
					}
					{	/* Coerce/coerce.scm 239 */
						obj_t BgL_auxz00_3892;
						obj_t BgL_tmpz00_3890;

						BgL_auxz00_3892 = ((obj_t) BgL_arg1688z00_3010);
						BgL_tmpz00_3890 = ((obj_t) BgL_arg1687z00_3009);
						SET_CAR(BgL_tmpz00_3890, BgL_auxz00_3892);
					}
				}
				{	/* Coerce/coerce.scm 240 */
					obj_t BgL_arg1704z00_3015;
					BgL_nodez00_bglt BgL_arg1707z00_3016;

					{	/* Coerce/coerce.scm 240 */
						obj_t BgL_pairz00_3017;

						BgL_pairz00_3017 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->
							BgL_exprza2za2);
						BgL_arg1704z00_3015 = CDR(CDR(BgL_pairz00_3017));
					}
					{	/* Coerce/coerce.scm 240 */
						obj_t BgL_arg1711z00_3018;

						{	/* Coerce/coerce.scm 240 */
							obj_t BgL_pairz00_3019;

							BgL_pairz00_3019 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->
								BgL_exprza2za2);
							BgL_arg1711z00_3018 = CAR(CDR(CDR(BgL_pairz00_3019)));
						}
						BgL_arg1707z00_3016 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1711z00_3018), BgL_callerz00_2779,
							((BgL_typez00_bglt) BgL_ftypez00_3002), CBOOL(BgL_safez00_2781));
					}
					{	/* Coerce/coerce.scm 240 */
						obj_t BgL_auxz00_3912;
						obj_t BgL_tmpz00_3910;

						BgL_auxz00_3912 = ((obj_t) BgL_arg1707z00_3016);
						BgL_tmpz00_3910 = ((obj_t) BgL_arg1704z00_3015);
						SET_CAR(BgL_tmpz00_3910, BgL_auxz00_3912);
					}
				}
				{	/* Coerce/coerce.scm 241 */
					BgL_typez00_bglt BgL_arg1719z00_3020;

					BgL_arg1719z00_3020 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vsetz12z12_bglt) BgL_nodez00_2778))))->BgL_typez00);
					return
						BGl_convertz12z12zzcoerce_convertz00(
						((BgL_nodez00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_2778)), BgL_arg1719z00_3020,
						((BgL_typez00_bglt) BgL_toz00_2780), CBOOL(BgL_safez00_2781));
				}
			}
		}

	}



/* &coerce!-vref1307 */
	BgL_nodez00_bglt BGl_z62coercez12zd2vref1307za2zzcoerce_coercez00(obj_t
		BgL_envz00_2782, obj_t BgL_nodez00_2783, obj_t BgL_callerz00_2784,
		obj_t BgL_toz00_2785, obj_t BgL_safez00_2786)
	{
		{	/* Coerce/coerce.scm 218 */
			{	/* Coerce/coerce.scm 226 */
				obj_t BgL_ftypez00_3022;

				{	/* Coerce/coerce.scm 226 */
					bool_t BgL_test2245z00_3923;

					{	/* Coerce/coerce.scm 226 */
						BgL_typez00_bglt BgL_arg1667z00_3023;

						BgL_arg1667z00_3023 =
							(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2783)))->BgL_ftypez00);
						BgL_test2245z00_3923 =
							(((obj_t) BgL_arg1667z00_3023) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2245z00_3923)
						{	/* Coerce/coerce.scm 226 */
							BgL_ftypez00_3022 = BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Coerce/coerce.scm 226 */
							BgL_ftypez00_3022 =
								((obj_t)
								(((BgL_vrefz00_bglt) COBJECT(
											((BgL_vrefz00_bglt) BgL_nodez00_2783)))->BgL_ftypez00));
						}
				}
				{	/* Coerce/coerce.scm 227 */
					obj_t BgL_arg1624z00_3024;
					BgL_nodez00_bglt BgL_arg1626z00_3025;

					BgL_arg1624z00_3024 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vrefz00_bglt) BgL_nodez00_2783))))->BgL_exprza2za2);
					{	/* Coerce/coerce.scm 227 */
						obj_t BgL_arg1627z00_3026;
						BgL_typez00_bglt BgL_arg1631z00_3027;

						{	/* Coerce/coerce.scm 227 */
							obj_t BgL_pairz00_3028;

							BgL_pairz00_3028 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_2783))))->BgL_exprza2za2);
							BgL_arg1627z00_3026 = CAR(BgL_pairz00_3028);
						}
						BgL_arg1631z00_3027 =
							(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2783)))->BgL_vtypez00);
						BgL_arg1626z00_3025 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1627z00_3026), BgL_callerz00_2784,
							BgL_arg1631z00_3027, CBOOL(BgL_safez00_2786));
					}
					{	/* Coerce/coerce.scm 227 */
						obj_t BgL_auxz00_3945;
						obj_t BgL_tmpz00_3943;

						BgL_auxz00_3945 = ((obj_t) BgL_arg1626z00_3025);
						BgL_tmpz00_3943 = ((obj_t) BgL_arg1624z00_3024);
						SET_CAR(BgL_tmpz00_3943, BgL_auxz00_3945);
					}
				}
				{	/* Coerce/coerce.scm 228 */
					obj_t BgL_arg1639z00_3029;
					BgL_nodez00_bglt BgL_arg1640z00_3030;

					{	/* Coerce/coerce.scm 228 */
						obj_t BgL_pairz00_3031;

						BgL_pairz00_3031 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vrefz00_bglt) BgL_nodez00_2783))))->BgL_exprza2za2);
						BgL_arg1639z00_3029 = CDR(BgL_pairz00_3031);
					}
					{	/* Coerce/coerce.scm 228 */
						obj_t BgL_arg1644z00_3032;
						BgL_typez00_bglt BgL_arg1652z00_3033;

						{	/* Coerce/coerce.scm 228 */
							obj_t BgL_pairz00_3034;

							BgL_pairz00_3034 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_vrefz00_bglt) BgL_nodez00_2783))))->BgL_exprza2za2);
							BgL_arg1644z00_3032 = CAR(CDR(BgL_pairz00_3034));
						}
						BgL_arg1652z00_3033 =
							(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_2783)))->BgL_otypez00);
						BgL_arg1640z00_3030 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1644z00_3032), BgL_callerz00_2784,
							BgL_arg1652z00_3033, CBOOL(BgL_safez00_2786));
					}
					{	/* Coerce/coerce.scm 228 */
						obj_t BgL_auxz00_3964;
						obj_t BgL_tmpz00_3962;

						BgL_auxz00_3964 = ((obj_t) BgL_arg1640z00_3030);
						BgL_tmpz00_3962 = ((obj_t) BgL_arg1639z00_3029);
						SET_CAR(BgL_tmpz00_3962, BgL_auxz00_3964);
					}
				}
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_vrefz00_bglt) BgL_nodez00_2783)),
					((BgL_typez00_bglt) BgL_ftypez00_3022),
					((BgL_typez00_bglt) BgL_toz00_2785), CBOOL(BgL_safez00_2786));
			}
		}

	}



/* &coerce!-valloc1305 */
	BgL_nodez00_bglt BGl_z62coercez12zd2valloc1305za2zzcoerce_coercez00(obj_t
		BgL_envz00_2787, obj_t BgL_nodez00_2788, obj_t BgL_callerz00_2789,
		obj_t BgL_toz00_2790, obj_t BgL_safez00_2791)
	{
		{	/* Coerce/coerce.scm 210 */
			{	/* Coerce/coerce.scm 212 */
				obj_t BgL_arg1604z00_3036;
				BgL_nodez00_bglt BgL_arg1605z00_3037;

				BgL_arg1604z00_3036 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_2788))))->BgL_exprza2za2);
				{	/* Coerce/coerce.scm 212 */
					obj_t BgL_arg1606z00_3038;
					BgL_typez00_bglt BgL_arg1611z00_3039;

					{	/* Coerce/coerce.scm 212 */
						obj_t BgL_pairz00_3040;

						BgL_pairz00_3040 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_2788))))->BgL_exprza2za2);
						BgL_arg1606z00_3038 = CAR(BgL_pairz00_3040);
					}
					BgL_arg1611z00_3039 =
						(((BgL_vallocz00_bglt) COBJECT(
								((BgL_vallocz00_bglt) BgL_nodez00_2788)))->BgL_otypez00);
					BgL_arg1605z00_3037 =
						BGl_coercez12z12zzcoerce_coercez00(
						((BgL_nodez00_bglt) BgL_arg1606z00_3038), BgL_callerz00_2789,
						BgL_arg1611z00_3039, CBOOL(BgL_safez00_2791));
				}
				{	/* Coerce/coerce.scm 212 */
					obj_t BgL_auxz00_3987;
					obj_t BgL_tmpz00_3985;

					BgL_auxz00_3987 = ((obj_t) BgL_arg1605z00_3037);
					BgL_tmpz00_3985 = ((obj_t) BgL_arg1604z00_3036);
					SET_CAR(BgL_tmpz00_3985, BgL_auxz00_3987);
				}
			}
			{	/* Coerce/coerce.scm 213 */
				BgL_typez00_bglt BgL_arg1613z00_3041;

				BgL_arg1613z00_3041 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_2788))))->BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_vallocz00_bglt) BgL_nodez00_2788)), BgL_arg1613z00_3041,
					((BgL_typez00_bglt) BgL_toz00_2790), CBOOL(BgL_safez00_2791));
			}
		}

	}



/* &coerce!-new1303 */
	BgL_nodez00_bglt BGl_z62coercez12zd2new1303za2zzcoerce_coercez00(obj_t
		BgL_envz00_2792, obj_t BgL_nodez00_2793, obj_t BgL_callerz00_2794,
		obj_t BgL_toz00_2795, obj_t BgL_safez00_2796)
	{
		{	/* Coerce/coerce.scm 196 */
			{
				obj_t BgL_lz00_3044;

				{	/* Coerce/coerce.scm 198 */
					obj_t BgL_arg1588z00_3050;

					BgL_arg1588z00_3050 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_newz00_bglt) BgL_nodez00_2793))))->BgL_exprza2za2);
					BgL_lz00_3044 = BgL_arg1588z00_3050;
				BgL_loopz00_3043:
					if (NULLP(BgL_lz00_3044))
						{	/* Coerce/coerce.scm 200 */
							BgL_typez00_bglt BgL_arg1592z00_3045;

							BgL_arg1592z00_3045 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_newz00_bglt) BgL_nodez00_2793))))->BgL_typez00);
							BGl_convertz12z12zzcoerce_convertz00(
								((BgL_nodez00_bglt)
									((BgL_newz00_bglt) BgL_nodez00_2793)), BgL_arg1592z00_3045,
								((BgL_typez00_bglt) BgL_toz00_2795), CBOOL(BgL_safez00_2796));
						}
					else
						{	/* Coerce/coerce.scm 201 */
							obj_t BgL_vz00_3046;

							BgL_vz00_3046 = CAR(((obj_t) BgL_lz00_3044));
							{	/* Coerce/coerce.scm 201 */
								BgL_nodez00_bglt BgL_nvz00_3047;

								{	/* Coerce/coerce.scm 202 */
									BgL_typez00_bglt BgL_arg1597z00_3048;

									BgL_arg1597z00_3048 =
										BGl_getzd2typezd2zztype_typeofz00(
										((BgL_nodez00_bglt) BgL_vz00_3046), ((bool_t) 0));
									BgL_nvz00_3047 =
										BGl_coercez12z12zzcoerce_coercez00(
										((BgL_nodez00_bglt) BgL_vz00_3046), BgL_callerz00_2794,
										BgL_arg1597z00_3048, CBOOL(BgL_safez00_2796));
								}
								{	/* Coerce/coerce.scm 202 */

									{	/* Coerce/coerce.scm 203 */
										obj_t BgL_auxz00_4020;
										obj_t BgL_tmpz00_4018;

										BgL_auxz00_4020 = ((obj_t) BgL_nvz00_3047);
										BgL_tmpz00_4018 = ((obj_t) BgL_lz00_3044);
										SET_CAR(BgL_tmpz00_4018, BgL_auxz00_4020);
									}
									{	/* Coerce/coerce.scm 204 */
										obj_t BgL_arg1593z00_3049;

										BgL_arg1593z00_3049 = CDR(((obj_t) BgL_lz00_3044));
										{
											obj_t BgL_lz00_4025;

											BgL_lz00_4025 = BgL_arg1593z00_3049;
											BgL_lz00_3044 = BgL_lz00_4025;
											goto BgL_loopz00_3043;
										}
									}
								}
							}
						}
				}
			}
			{	/* Coerce/coerce.scm 205 */
				BgL_typez00_bglt BgL_arg1599z00_3051;

				BgL_arg1599z00_3051 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_newz00_bglt) BgL_nodez00_2793))))->BgL_typez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_newz00_bglt) BgL_nodez00_2793)), BgL_arg1599z00_3051,
					((BgL_typez00_bglt) BgL_toz00_2795), CBOOL(BgL_safez00_2796));
			}
		}

	}



/* &coerce!-setfield1301 */
	BgL_nodez00_bglt BGl_z62coercez12zd2setfield1301za2zzcoerce_coercez00(obj_t
		BgL_envz00_2797, obj_t BgL_nodez00_2798, obj_t BgL_callerz00_2799,
		obj_t BgL_toz00_2800, obj_t BgL_safez00_2801)
	{
		{	/* Coerce/coerce.scm 187 */
			{	/* Coerce/coerce.scm 189 */
				obj_t BgL_arg1540z00_3053;
				BgL_nodez00_bglt BgL_arg1552z00_3054;

				BgL_arg1540z00_3053 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_2798))))->BgL_exprza2za2);
				{	/* Coerce/coerce.scm 189 */
					obj_t BgL_arg1558z00_3055;
					BgL_typez00_bglt BgL_arg1561z00_3056;

					{	/* Coerce/coerce.scm 189 */
						obj_t BgL_pairz00_3057;

						BgL_pairz00_3057 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_setfieldz00_bglt) BgL_nodez00_2798))))->
							BgL_exprza2za2);
						BgL_arg1558z00_3055 = CAR(BgL_pairz00_3057);
					}
					BgL_arg1561z00_3056 =
						(((BgL_setfieldz00_bglt) COBJECT(
								((BgL_setfieldz00_bglt) BgL_nodez00_2798)))->BgL_otypez00);
					BgL_arg1552z00_3054 =
						BGl_coercez12z12zzcoerce_coercez00(
						((BgL_nodez00_bglt) BgL_arg1558z00_3055), BgL_callerz00_2799,
						BgL_arg1561z00_3056, CBOOL(BgL_safez00_2801));
				}
				{	/* Coerce/coerce.scm 189 */
					obj_t BgL_auxz00_4048;
					obj_t BgL_tmpz00_4046;

					BgL_auxz00_4048 = ((obj_t) BgL_arg1552z00_3054);
					BgL_tmpz00_4046 = ((obj_t) BgL_arg1540z00_3053);
					SET_CAR(BgL_tmpz00_4046, BgL_auxz00_4048);
				}
			}
			{	/* Coerce/coerce.scm 190 */
				obj_t BgL_arg1565z00_3058;
				BgL_nodez00_bglt BgL_arg1573z00_3059;

				{	/* Coerce/coerce.scm 190 */
					obj_t BgL_pairz00_3060;

					BgL_pairz00_3060 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_setfieldz00_bglt) BgL_nodez00_2798))))->BgL_exprza2za2);
					BgL_arg1565z00_3058 = CDR(BgL_pairz00_3060);
				}
				{	/* Coerce/coerce.scm 190 */
					obj_t BgL_arg1578z00_3061;
					BgL_typez00_bglt BgL_arg1582z00_3062;

					{	/* Coerce/coerce.scm 190 */
						obj_t BgL_pairz00_3063;

						BgL_pairz00_3063 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_setfieldz00_bglt) BgL_nodez00_2798))))->
							BgL_exprza2za2);
						BgL_arg1578z00_3061 = CAR(CDR(BgL_pairz00_3063));
					}
					BgL_arg1582z00_3062 =
						(((BgL_setfieldz00_bglt) COBJECT(
								((BgL_setfieldz00_bglt) BgL_nodez00_2798)))->BgL_ftypez00);
					BgL_arg1573z00_3059 =
						BGl_coercez12z12zzcoerce_coercez00(
						((BgL_nodez00_bglt) BgL_arg1578z00_3061), BgL_callerz00_2799,
						BgL_arg1582z00_3062, CBOOL(BgL_safez00_2801));
				}
				{	/* Coerce/coerce.scm 190 */
					obj_t BgL_auxz00_4067;
					obj_t BgL_tmpz00_4065;

					BgL_auxz00_4067 = ((obj_t) BgL_arg1573z00_3059);
					BgL_tmpz00_4065 = ((obj_t) BgL_arg1565z00_3058);
					SET_CAR(BgL_tmpz00_4065, BgL_auxz00_4067);
				}
			}
			return
				BGl_convertz12z12zzcoerce_convertz00(
				((BgL_nodez00_bglt)
					((BgL_setfieldz00_bglt) BgL_nodez00_2798)),
				((BgL_typez00_bglt) BGl_za2unspecza2z00zztype_cachez00),
				((BgL_typez00_bglt) BgL_toz00_2800), CBOOL(BgL_safez00_2801));
		}

	}



/* &coerce!-getfield1299 */
	BgL_nodez00_bglt BGl_z62coercez12zd2getfield1299za2zzcoerce_coercez00(obj_t
		BgL_envz00_2802, obj_t BgL_nodez00_2803, obj_t BgL_callerz00_2804,
		obj_t BgL_toz00_2805, obj_t BgL_safez00_2806)
	{
		{	/* Coerce/coerce.scm 179 */
			{	/* Coerce/coerce.scm 181 */
				obj_t BgL_arg1497z00_3065;
				BgL_nodez00_bglt BgL_arg1518z00_3066;

				BgL_arg1497z00_3065 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_2803))))->BgL_exprza2za2);
				{	/* Coerce/coerce.scm 181 */
					obj_t BgL_arg1521z00_3067;
					BgL_typez00_bglt BgL_arg1528z00_3068;

					{	/* Coerce/coerce.scm 181 */
						obj_t BgL_pairz00_3069;

						BgL_pairz00_3069 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt)
										((BgL_getfieldz00_bglt) BgL_nodez00_2803))))->
							BgL_exprza2za2);
						BgL_arg1521z00_3067 = CAR(BgL_pairz00_3069);
					}
					BgL_arg1528z00_3068 =
						(((BgL_getfieldz00_bglt) COBJECT(
								((BgL_getfieldz00_bglt) BgL_nodez00_2803)))->BgL_otypez00);
					BgL_arg1518z00_3066 =
						BGl_coercez12z12zzcoerce_coercez00(
						((BgL_nodez00_bglt) BgL_arg1521z00_3067), BgL_callerz00_2804,
						BgL_arg1528z00_3068, CBOOL(BgL_safez00_2806));
				}
				{	/* Coerce/coerce.scm 181 */
					obj_t BgL_auxz00_4090;
					obj_t BgL_tmpz00_4088;

					BgL_auxz00_4090 = ((obj_t) BgL_arg1518z00_3066);
					BgL_tmpz00_4088 = ((obj_t) BgL_arg1497z00_3065);
					SET_CAR(BgL_tmpz00_4088, BgL_auxz00_4090);
				}
			}
			{	/* Coerce/coerce.scm 182 */
				BgL_typez00_bglt BgL_arg1537z00_3070;

				BgL_arg1537z00_3070 =
					(((BgL_getfieldz00_bglt) COBJECT(
							((BgL_getfieldz00_bglt) BgL_nodez00_2803)))->BgL_ftypez00);
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_getfieldz00_bglt) BgL_nodez00_2803)), BgL_arg1537z00_3070,
					((BgL_typez00_bglt) BgL_toz00_2805), CBOOL(BgL_safez00_2806));
			}
		}

	}



/* &coerce!-widening1297 */
	BgL_nodez00_bglt BGl_z62coercez12zd2widening1297za2zzcoerce_coercez00(obj_t
		BgL_envz00_2807, obj_t BgL_nodez00_2808, obj_t BgL_callerz00_2809,
		obj_t BgL_toz00_2810, obj_t BgL_safez00_2811)
	{
		{	/* Coerce/coerce.scm 168 */
			{	/* Coerce/coerce.scm 172 */
				obj_t BgL_superz00_3072;

				{	/* Coerce/coerce.scm 172 */
					BgL_typez00_bglt BgL_oz00_3073;

					BgL_oz00_3073 =
						((BgL_typez00_bglt)
						(((BgL_wideningz00_bglt) COBJECT(
									((BgL_wideningz00_bglt) BgL_nodez00_2808)))->BgL_otypez00));
					{
						BgL_tclassz00_bglt BgL_auxz00_4103;

						{
							obj_t BgL_auxz00_4104;

							{	/* Coerce/coerce.scm 172 */
								BgL_objectz00_bglt BgL_tmpz00_4105;

								BgL_tmpz00_4105 = ((BgL_objectz00_bglt) BgL_oz00_3073);
								BgL_auxz00_4104 = BGL_OBJECT_WIDENING(BgL_tmpz00_4105);
							}
							BgL_auxz00_4103 = ((BgL_tclassz00_bglt) BgL_auxz00_4104);
						}
						BgL_superz00_3072 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4103))->
							BgL_itszd2superzd2);
					}
				}
				{	/* Coerce/coerce.scm 173 */
					obj_t BgL_arg1476z00_3074;
					BgL_nodez00_bglt BgL_arg1477z00_3075;

					BgL_arg1476z00_3074 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_wideningz00_bglt) BgL_nodez00_2808))))->BgL_exprza2za2);
					{	/* Coerce/coerce.scm 173 */
						obj_t BgL_arg1489z00_3076;

						{	/* Coerce/coerce.scm 173 */
							obj_t BgL_pairz00_3077;

							BgL_pairz00_3077 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt)
											((BgL_wideningz00_bglt) BgL_nodez00_2808))))->
								BgL_exprza2za2);
							BgL_arg1489z00_3076 = CAR(BgL_pairz00_3077);
						}
						BgL_arg1477z00_3075 =
							BGl_coercez12z12zzcoerce_coercez00(
							((BgL_nodez00_bglt) BgL_arg1489z00_3076), BgL_callerz00_2809,
							((BgL_typez00_bglt) BgL_superz00_3072), CBOOL(BgL_safez00_2811));
					}
					{	/* Coerce/coerce.scm 173 */
						obj_t BgL_auxz00_4123;
						obj_t BgL_tmpz00_4121;

						BgL_auxz00_4123 = ((obj_t) BgL_arg1477z00_3075);
						BgL_tmpz00_4121 = ((obj_t) BgL_arg1476z00_3074);
						SET_CAR(BgL_tmpz00_4121, BgL_auxz00_4123);
					}
				}
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_wideningz00_bglt) BgL_nodez00_2808)),
					((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
					((BgL_typez00_bglt) BgL_toz00_2810), CBOOL(BgL_safez00_2811));
			}
		}

	}



/* &coerce!-extern1295 */
	BgL_nodez00_bglt BGl_z62coercez12zd2extern1295za2zzcoerce_coercez00(obj_t
		BgL_envz00_2812, obj_t BgL_nodez00_2813, obj_t BgL_callerz00_2814,
		obj_t BgL_toz00_2815, obj_t BgL_safez00_2816)
	{
		{	/* Coerce/coerce.scm 155 */
			{
				obj_t BgL_valuesz00_3080;

				BgL_valuesz00_3080 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2813)))->BgL_exprza2za2);
			BgL_loopz00_3079:
				if (NULLP(BgL_valuesz00_3080))
					{	/* Coerce/coerce.scm 159 */
						BgL_typez00_bglt BgL_arg1464z00_3081;

						BgL_arg1464z00_3081 =
							BGl_getzd2typezd2zztype_typeofz00(
							((BgL_nodez00_bglt)
								((BgL_externz00_bglt) BgL_nodez00_2813)), ((bool_t) 0));
						return
							BGl_convertz12z12zzcoerce_convertz00(
							((BgL_nodez00_bglt)
								((BgL_externz00_bglt) BgL_nodez00_2813)), BgL_arg1464z00_3081,
							((BgL_typez00_bglt) BgL_toz00_2815), CBOOL(BgL_safez00_2816));
					}
				else
					{	/* Coerce/coerce.scm 160 */
						obj_t BgL_vz00_3082;

						BgL_vz00_3082 = CAR(((obj_t) BgL_valuesz00_3080));
						{	/* Coerce/coerce.scm 160 */
							BgL_nodez00_bglt BgL_nvz00_3083;

							{	/* Coerce/coerce.scm 161 */
								BgL_typez00_bglt BgL_arg1474z00_3084;

								BgL_arg1474z00_3084 =
									BGl_getzd2typezd2zztype_typeofz00(
									((BgL_nodez00_bglt) BgL_vz00_3082), ((bool_t) 0));
								BgL_nvz00_3083 =
									BGl_coercez12z12zzcoerce_coercez00(
									((BgL_nodez00_bglt) BgL_vz00_3082), BgL_callerz00_2814,
									BgL_arg1474z00_3084, CBOOL(BgL_safez00_2816));
							}
							{	/* Coerce/coerce.scm 161 */

								{	/* Coerce/coerce.scm 162 */
									obj_t BgL_auxz00_4151;
									obj_t BgL_tmpz00_4149;

									BgL_auxz00_4151 = ((obj_t) BgL_nvz00_3083);
									BgL_tmpz00_4149 = ((obj_t) BgL_valuesz00_3080);
									SET_CAR(BgL_tmpz00_4149, BgL_auxz00_4151);
								}
								{	/* Coerce/coerce.scm 163 */
									obj_t BgL_arg1465z00_3085;

									BgL_arg1465z00_3085 = CDR(((obj_t) BgL_valuesz00_3080));
									{
										obj_t BgL_valuesz00_4156;

										BgL_valuesz00_4156 = BgL_arg1465z00_3085;
										BgL_valuesz00_3080 = BgL_valuesz00_4156;
										goto BgL_loopz00_3079;
									}
								}
							}
						}
					}
			}
		}

	}



/* &coerce!-sync1293 */
	BgL_nodez00_bglt BGl_z62coercez12zd2sync1293za2zzcoerce_coercez00(obj_t
		BgL_envz00_2817, obj_t BgL_nodez00_2818, obj_t BgL_callerz00_2819,
		obj_t BgL_toz00_2820, obj_t BgL_safez00_2821)
	{
		{	/* Coerce/coerce.scm 144 */
			{
				BgL_nodez00_bglt BgL_auxz00_4159;

				{	/* Coerce/coerce.scm 146 */
					BgL_nodez00_bglt BgL_arg1441z00_3087;

					BgL_arg1441z00_3087 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_mutexz00);
					BgL_auxz00_4159 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1441z00_3087,
						BgL_callerz00_2819,
						((BgL_typez00_bglt) BGl_za2mutexza2z00zztype_cachez00),
						CBOOL(BgL_safez00_2821));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4159), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4167;

				{	/* Coerce/coerce.scm 147 */
					BgL_nodez00_bglt BgL_arg1442z00_3088;

					BgL_arg1442z00_3088 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_prelockz00);
					BgL_auxz00_4167 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1442z00_3088,
						BgL_callerz00_2819,
						((BgL_typez00_bglt) BGl_za2pairzd2nilza2zd2zztype_cachez00),
						CBOOL(BgL_safez00_2821));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4167), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_4175;

				{	/* Coerce/coerce.scm 148 */
					BgL_nodez00_bglt BgL_arg1448z00_3089;

					BgL_arg1448z00_3089 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_bodyz00);
					BgL_auxz00_4175 =
						BGl_coercez12z12zzcoerce_coercez00(BgL_arg1448z00_3089,
						BgL_callerz00_2819, ((BgL_typez00_bglt) BgL_toz00_2820),
						CBOOL(BgL_safez00_2821));
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2818)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_4175), BUNSPEC);
			}
			{
				BgL_typez00_bglt BgL_auxz00_4183;

				{	/* Coerce/coerce.scm 149 */
					BgL_typez00_bglt BgL_arg1449z00_3090;

					BgL_arg1449z00_3090 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2818))))->BgL_typez00);
					BgL_auxz00_4183 =
						BGl_strictzd2nodezd2typez00zzast_nodez00(
						((BgL_typez00_bglt) BgL_toz00_2820), BgL_arg1449z00_3090);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2818))))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_auxz00_4183), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2818));
		}

	}



/* &coerce!-sequence1291 */
	BgL_nodez00_bglt BGl_z62coercez12zd2sequence1291za2zzcoerce_coercez00(obj_t
		BgL_envz00_2822, obj_t BgL_nodez00_2823, obj_t BgL_callerz00_2824,
		obj_t BgL_toz00_2825, obj_t BgL_safez00_2826)
	{
		{	/* Coerce/coerce.scm 127 */
			{	/* Coerce/coerce.scm 129 */
				obj_t BgL_sz00_3092;

				if (
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2823)))->BgL_unsafez00))
					{	/* Coerce/coerce.scm 129 */
						BgL_sz00_3092 = BFALSE;
					}
				else
					{	/* Coerce/coerce.scm 129 */
						BgL_sz00_3092 = BgL_safez00_2826;
					}
				{
					obj_t BgL_nodesz00_3094;

					{	/* Coerce/coerce.scm 130 */
						obj_t BgL_arg1372z00_3101;

						BgL_arg1372z00_3101 =
							(((BgL_sequencez00_bglt) COBJECT(
									((BgL_sequencez00_bglt) BgL_nodez00_2823)))->BgL_nodesz00);
						{
							BgL_sequencez00_bglt BgL_auxz00_4199;

							BgL_nodesz00_3094 = BgL_arg1372z00_3101;
						BgL_loopz00_3093:
							{	/* Coerce/coerce.scm 131 */
								obj_t BgL_nz00_3095;

								BgL_nz00_3095 = CAR(((obj_t) BgL_nodesz00_3094));
								if (NULLP(CDR(((obj_t) BgL_nodesz00_3094))))
									{	/* Coerce/coerce.scm 132 */
										{	/* Coerce/coerce.scm 134 */
											BgL_nodez00_bglt BgL_arg1394z00_3096;

											BgL_arg1394z00_3096 =
												BGl_coercez12z12zzcoerce_coercez00(
												((BgL_nodez00_bglt) BgL_nz00_3095), BgL_callerz00_2824,
												((BgL_typez00_bglt) BgL_toz00_2825),
												CBOOL(BgL_sz00_3092));
											{	/* Coerce/coerce.scm 134 */
												obj_t BgL_auxz00_4212;
												obj_t BgL_tmpz00_4210;

												BgL_auxz00_4212 = ((obj_t) BgL_arg1394z00_3096);
												BgL_tmpz00_4210 = ((obj_t) BgL_nodesz00_3094);
												SET_CAR(BgL_tmpz00_4210, BgL_auxz00_4212);
											}
										}
										{
											BgL_typez00_bglt BgL_auxz00_4215;

											{	/* Coerce/coerce.scm 135 */
												BgL_typez00_bglt BgL_arg1396z00_3097;

												BgL_arg1396z00_3097 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_sequencez00_bglt) BgL_nodez00_2823))))->
													BgL_typez00);
												BgL_auxz00_4215 =
													BGl_strictzd2nodezd2typez00zzast_nodez00((
														(BgL_typez00_bglt) BgL_toz00_2825),
													BgL_arg1396z00_3097);
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_sequencez00_bglt) BgL_nodez00_2823))))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_4215), BUNSPEC);
										}
										BgL_auxz00_4199 = ((BgL_sequencez00_bglt) BgL_nodez00_2823);
									}
								else
									{	/* Coerce/coerce.scm 132 */
										{	/* Coerce/coerce.scm 138 */
											BgL_nodez00_bglt BgL_arg1417z00_3098;

											{	/* Coerce/coerce.scm 138 */
												BgL_typez00_bglt BgL_arg1418z00_3099;

												BgL_arg1418z00_3099 =
													BGl_getzd2typezd2zztype_typeofz00(
													((BgL_nodez00_bglt) BgL_nz00_3095), ((bool_t) 0));
												BgL_arg1417z00_3098 =
													BGl_coercez12z12zzcoerce_coercez00(
													((BgL_nodez00_bglt) BgL_nz00_3095),
													BgL_callerz00_2824, BgL_arg1418z00_3099,
													CBOOL(BgL_sz00_3092));
											}
											{	/* Coerce/coerce.scm 138 */
												obj_t BgL_auxz00_4232;
												obj_t BgL_tmpz00_4230;

												BgL_auxz00_4232 = ((obj_t) BgL_arg1417z00_3098);
												BgL_tmpz00_4230 = ((obj_t) BgL_nodesz00_3094);
												SET_CAR(BgL_tmpz00_4230, BgL_auxz00_4232);
											}
										}
										{	/* Coerce/coerce.scm 139 */
											obj_t BgL_arg1421z00_3100;

											BgL_arg1421z00_3100 = CDR(((obj_t) BgL_nodesz00_3094));
											{
												obj_t BgL_nodesz00_4237;

												BgL_nodesz00_4237 = BgL_arg1421z00_3100;
												BgL_nodesz00_3094 = BgL_nodesz00_4237;
												goto BgL_loopz00_3093;
											}
										}
									}
							}
							return ((BgL_nodez00_bglt) BgL_auxz00_4199);
						}
					}
				}
			}
		}

	}



/* &coerce!-closure1289 */
	BgL_nodez00_bglt BGl_z62coercez12zd2closure1289za2zzcoerce_coercez00(obj_t
		BgL_envz00_2827, obj_t BgL_nodez00_2828, obj_t BgL_callerz00_2829,
		obj_t BgL_toz00_2830, obj_t BgL_safez00_2831)
	{
		{	/* Coerce/coerce.scm 121 */
			{	/* Coerce/coerce.scm 122 */
				obj_t BgL_arg1371z00_3103;

				BgL_arg1371z00_3103 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2828)));
				return
					((BgL_nodez00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2111z00zzcoerce_coercez00,
						BGl_string2143z00zzcoerce_coercez00, BgL_arg1371z00_3103));
			}
		}

	}



/* &coerce!-var1287 */
	BgL_nodez00_bglt BGl_z62coercez12zd2var1287za2zzcoerce_coercez00(obj_t
		BgL_envz00_2832, obj_t BgL_nodez00_2833, obj_t BgL_callerz00_2834,
		obj_t BgL_toz00_2835, obj_t BgL_safez00_2836)
	{
		{	/* Coerce/coerce.scm 106 */
			{	/* Coerce/coerce.scm 108 */
				BgL_typez00_bglt BgL_ntypez00_3105;
				BgL_typez00_bglt BgL_vtypez00_3106;

				BgL_ntypez00_3105 =
					BGl_getzd2typezd2zztype_typeofz00(
					((BgL_nodez00_bglt)
						((BgL_varz00_bglt) BgL_nodez00_2833)), ((bool_t) 0));
				BgL_vtypez00_3106 =
					(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2833)))->BgL_variablez00)))->
					BgL_typez00);
				if ((((obj_t) BgL_vtypez00_3106) == BgL_toz00_2835))
					{	/* Coerce/coerce.scm 111 */
						return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2833));
					}
				else
					{	/* Coerce/coerce.scm 111 */
						if ((((obj_t) BgL_ntypez00_3105) == ((obj_t) BgL_vtypez00_3106)))
							{	/* Coerce/coerce.scm 113 */
								return
									BGl_convertz12z12zzcoerce_convertz00(
									((BgL_nodez00_bglt)
										((BgL_varz00_bglt) BgL_nodez00_2833)), BgL_ntypez00_3105,
									((BgL_typez00_bglt) BgL_toz00_2835), CBOOL(BgL_safez00_2836));
							}
						else
							{	/* Coerce/coerce.scm 116 */
								BgL_nodez00_bglt BgL_arg1367z00_3107;

								BgL_arg1367z00_3107 =
									BGl_convertz12z12zzcoerce_convertz00(
									((BgL_nodez00_bglt)
										((BgL_varz00_bglt) BgL_nodez00_2833)), BgL_vtypez00_3106,
									BgL_ntypez00_3105, ((bool_t) 0));
								return BGl_convertz12z12zzcoerce_convertz00(BgL_arg1367z00_3107,
									BgL_ntypez00_3105, ((BgL_typez00_bglt) BgL_toz00_2835),
									CBOOL(BgL_safez00_2836));
							}
					}
			}
		}

	}



/* &coerce!-kwote1285 */
	BgL_nodez00_bglt BGl_z62coercez12zd2kwote1285za2zzcoerce_coercez00(obj_t
		BgL_envz00_2837, obj_t BgL_nodez00_2838, obj_t BgL_callerz00_2839,
		obj_t BgL_toz00_2840, obj_t BgL_safez00_2841)
	{
		{	/* Coerce/coerce.scm 91 */
			{	/* Coerce/coerce.scm 92 */
				BgL_typez00_bglt BgL_arg1363z00_3109;

				BgL_arg1363z00_3109 =
					BGl_getzd2typezd2zztype_typeofz00(
					((BgL_nodez00_bglt)
						((BgL_kwotez00_bglt) BgL_nodez00_2838)), ((bool_t) 0));
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_kwotez00_bglt) BgL_nodez00_2838)), BgL_arg1363z00_3109,
					((BgL_typez00_bglt) BgL_toz00_2840), CBOOL(BgL_safez00_2841));
			}
		}

	}



/* &coerce!-atom1283 */
	BgL_nodez00_bglt BGl_z62coercez12zd2atom1283za2zzcoerce_coercez00(obj_t
		BgL_envz00_2842, obj_t BgL_nodez00_2843, obj_t BgL_callerz00_2844,
		obj_t BgL_toz00_2845, obj_t BgL_safez00_2846)
	{
		{	/* Coerce/coerce.scm 85 */
			{	/* Coerce/coerce.scm 86 */
				BgL_typez00_bglt BgL_arg1361z00_3111;

				BgL_arg1361z00_3111 =
					BGl_getzd2typezd2zztype_typeofz00(
					((BgL_nodez00_bglt)
						((BgL_atomz00_bglt) BgL_nodez00_2843)), ((bool_t) 0));
				return
					BGl_convertz12z12zzcoerce_convertz00(
					((BgL_nodez00_bglt)
						((BgL_atomz00_bglt) BgL_nodez00_2843)), BgL_arg1361z00_3111,
					((BgL_typez00_bglt) BgL_toz00_2845), CBOOL(BgL_safez00_2846));
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_coercez00()
	{
		{	/* Coerce/coerce.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(((long) 44915242),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 87995526),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_appz00(((long) 419328915),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_applyz00(((long) 435902388),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(((long) 40876347),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string2144z00zzcoerce_coercez00));
		}

	}

#ifdef __cplusplus
}
#endif
