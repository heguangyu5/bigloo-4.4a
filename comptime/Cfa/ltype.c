/*===========================================================================*/
/*   (Cfa/ltype.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/ltype.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

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

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

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

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;


	static obj_t BGl_z62typezd2variablez12zd2inter1587z70zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62typezd2nodez12zd2boxzd2setz121635zb0zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2nodez12zd2makezd2box1633za2zzcfa_ltypez00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62typezd2variablez12zd2scnst1581z70zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62typezd2nodez12zd2funcall1607z70zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62typezd2nodez12zd2kwote1593z70zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2app1603z70zzcfa_ltypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t);
	static obj_t BGl_z62typezd2nodez12zd2var1595z70zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62typezd2nodez12zd2boxzd2ref1637za2zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2nodez12zd2setzd2exzd2it1629z70zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_ltypez00();
	static obj_t BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_z62typezd2nodez12zd2sequence1599z70zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62typezd2nodez12zd2vsetz121613z62zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2nodez12zd2sync1601z70zzcfa_ltypez00(obj_t, obj_t);
	static bool_t BGl_typezd2nodeza2z12z62zzcfa_ltypez00(obj_t);
	static obj_t BGl_z62lightzd2typez12za2zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2switch1623z70zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2nodez12zd2fail1621z70zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62typezd2nodez12zd2closure1597z70zzcfa_ltypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_ltypez00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2vref1611z70zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2letzd2fun1625za2zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_ltypez00();
	static obj_t BGl_z62typezd2variablez12zd2sexit1585z70zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2variablez12zd2svarzf21579z82zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62typezd2variablez12zd2cvarzf21583z82zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2condition1619z70zzcfa_ltypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	static obj_t BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(BgL_variablez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62typezd2variablez121576za2zzcfa_ltypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_z62typezd2variablez12za2zzcfa_ltypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2atom1591z70zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2letzd2var1627za2zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
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
	static obj_t BGl_z62typezd2nodez12zd2jumpzd2exzd2i1631z70zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_z62typezd2nodez12zd2appzd2ly1605za2zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zc0zzcfa_ltypez00(BgL_nodez00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_ltypez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_ltypez00();
	static obj_t BGl_z62typezd2nodez121588za2zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12za2zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2cast1615z70zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2nodez12zd2extern1609z70zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2nodez12zd2setq1617z70zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string2120z00zzcfa_ltypez00,
		BgL_bgl_string2120za700za7za7c2127za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2121z00zzcfa_ltypez00,
		BgL_bgl_string2121za700za7za7c2128za7, "cfa_ltype", 9);
	      DEFINE_STRING(BGl_string2122z00zzcfa_ltypez00,
		BgL_bgl_string2122za700za7za7c2129za7, "static nothing type-node!1588 ",
		30);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2084z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2130z00,
		BGl_z62typezd2variablez121576za2zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2086z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712131za7,
		BGl_z62typezd2nodez121588za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2089z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2132z00,
		BGl_z62typezd2variablez12zd2svarzf21579z82zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2091z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2133z00,
		BGl_z62typezd2variablez12zd2scnst1581z70zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2092z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2134z00,
		BGl_z62typezd2variablez12zd2cvarzf21583z82zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2093z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2135z00,
		BGl_z62typezd2variablez12zd2sexit1585z70zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2094z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2136z00,
		BGl_z62typezd2variablez12zd2inter1587z70zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2095z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712137za7,
		BGl_z62typezd2nodez12zd2atom1591z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2097z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712138za7,
		BGl_z62typezd2nodez12zd2kwote1593z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2098z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712139za7,
		BGl_z62typezd2nodez12zd2var1595z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2099z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712140za7,
		BGl_z62typezd2nodez12zd2closure1597z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2variab2141z00,
		BGl_z62typezd2variablez12za2zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lightzd2typez12zd2envz12zzcfa_ltypez00,
		BgL_bgl_za762lightza7d2typeza72142za7,
		BGl_z62lightzd2typez12za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2100z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712143za7,
		BGl_z62typezd2nodez12zd2sequence1599z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2101z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712144za7,
		BGl_z62typezd2nodez12zd2sync1601z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2102z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712145za7,
		BGl_z62typezd2nodez12zd2app1603z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2103z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712146za7,
		BGl_z62typezd2nodez12zd2appzd2ly1605za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2104z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712147za7,
		BGl_z62typezd2nodez12zd2funcall1607z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2105z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712148za7,
		BGl_z62typezd2nodez12zd2extern1609z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2106z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712149za7,
		BGl_z62typezd2nodez12zd2vref1611z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2107z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712150za7,
		BGl_z62typezd2nodez12zd2vsetz121613z62zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2108z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712151za7,
		BGl_z62typezd2nodez12zd2cast1615z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2109z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712152za7,
		BGl_z62typezd2nodez12zd2setq1617z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2110z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712153za7,
		BGl_z62typezd2nodez12zd2condition1619z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2111z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712154za7,
		BGl_z62typezd2nodez12zd2fail1621z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2112z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712155za7,
		BGl_z62typezd2nodez12zd2switch1623z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2113z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712156za7,
		BGl_z62typezd2nodez12zd2letzd2fun1625za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2114z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712157za7,
		BGl_z62typezd2nodez12zd2letzd2var1627za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2115z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712158za7,
		BGl_z62typezd2nodez12zd2setzd2exzd2it1629z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2116z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712159za7,
		BGl_z62typezd2nodez12zd2jumpzd2exzd2i1631z70zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2117z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712160za7,
		BGl_z62typezd2nodez12zd2makezd2box1633za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2118z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712161za7,
		BGl_z62typezd2nodez12zd2boxzd2setz121635zb0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2119z00zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712162za7,
		BGl_z62typezd2nodez12zd2boxzd2ref1637za2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2085z00zzcfa_ltypez00,
		BgL_bgl_string2085za700za7za7c2163za7, "type-variable!1576", 18);
	      DEFINE_STRING(BGl_string2087z00zzcfa_ltypez00,
		BgL_bgl_string2087za700za7za7c2164za7, "type-node!1588", 14);
	      DEFINE_STRING(BGl_string2088z00zzcfa_ltypez00,
		BgL_bgl_string2088za700za7za7c2165za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2090z00zzcfa_ltypez00,
		BgL_bgl_string2090za700za7za7c2166za7, "type-variable!", 14);
	      DEFINE_STRING(BGl_string2096z00zzcfa_ltypez00,
		BgL_bgl_string2096za700za7za7c2167za7, "type-node!", 10);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
		BgL_bgl_za762typeza7d2nodeza712168za7,
		BGl_z62typezd2nodez12za2zzcfa_ltypez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_ltypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long
		BgL_checksumz00_4506, char *BgL_fromz00_4507)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_ltypez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_ltypez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_ltypez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00();
					BGl_cnstzd2initzd2zzcfa_ltypez00();
					BGl_importedzd2moduleszd2initz00zzcfa_ltypez00();
					BGl_genericzd2initzd2zzcfa_ltypez00();
					BGl_methodzd2initzd2zzcfa_ltypez00();
					return BGl_toplevelzd2initzd2zzcfa_ltypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_ltype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			{	/* Cfa/ltype.scm 15 */
				obj_t BgL_cportz00_4422;

				{	/* Cfa/ltype.scm 15 */
					obj_t BgL_stringz00_4430;

					BgL_stringz00_4430 = BGl_string2122z00zzcfa_ltypez00;
					{	/* Cfa/ltype.scm 15 */
						obj_t BgL_startz00_4431;

						BgL_startz00_4431 = BINT(((long) 0));
						{	/* Cfa/ltype.scm 15 */
							obj_t BgL_endz00_4432;

							BgL_endz00_4432 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4430)));
							{	/* Cfa/ltype.scm 15 */

								BgL_cportz00_4422 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4430, BgL_startz00_4431, BgL_endz00_4432);
				}}}}
				{
					long BgL_iz00_4423;

					BgL_iz00_4423 = ((long) 2);
				BgL_loopz00_4424:
					if ((BgL_iz00_4423 == ((long) -1)))
						{	/* Cfa/ltype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/ltype.scm 15 */
							{	/* Cfa/ltype.scm 15 */
								obj_t BgL_arg2125z00_4426;

								{	/* Cfa/ltype.scm 15 */

									{	/* Cfa/ltype.scm 15 */
										obj_t BgL_locationz00_4428;

										BgL_locationz00_4428 = BBOOL(((bool_t) 0));
										{	/* Cfa/ltype.scm 15 */

											BgL_arg2125z00_4426 =
												BGl_readz00zz__readerz00(BgL_cportz00_4422,
												BgL_locationz00_4428);
										}
									}
								}
								{	/* Cfa/ltype.scm 15 */
									int BgL_tmpz00_4536;

									BgL_tmpz00_4536 = (int) (BgL_iz00_4423);
									CNST_TABLE_SET(BgL_tmpz00_4536, BgL_arg2125z00_4426);
							}}
							{	/* Cfa/ltype.scm 15 */
								int BgL_auxz00_4429;

								BgL_auxz00_4429 = (int) ((BgL_iz00_4423 - ((long) 1)));
								{
									long BgL_iz00_4541;

									BgL_iz00_4541 = (long) (BgL_auxz00_4429);
									BgL_iz00_4423 = BgL_iz00_4541;
									goto BgL_loopz00_4424;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			return BUNSPEC;
		}

	}



/* light-type! */
	BGL_EXPORTED_DEF obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/ltype.scm 37 */
			{
				obj_t BgL_l1560z00_3330;

				{	/* Cfa/ltype.scm 38 */
					bool_t BgL_tmpz00_4544;

					BgL_l1560z00_3330 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31641ze3z87_3331:
					if (PAIRP(BgL_l1560z00_3330))
						{	/* Cfa/ltype.scm 38 */
							{	/* Cfa/ltype.scm 38 */
								obj_t BgL_arg1644z00_3333;

								BgL_arg1644z00_3333 = CAR(BgL_l1560z00_3330);
								BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(
									((BgL_variablez00_bglt) BgL_arg1644z00_3333));
							}
							{
								obj_t BgL_l1560z00_4550;

								BgL_l1560z00_4550 = CDR(BgL_l1560z00_3330);
								BgL_l1560z00_3330 = BgL_l1560z00_4550;
								goto BgL_zc3z04anonymousza31641ze3z87_3331;
							}
						}
					else
						{	/* Cfa/ltype.scm 38 */
							BgL_tmpz00_4544 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_4544);
				}
			}
		}

	}



/* &light-type! */
	obj_t BGl_z62lightzd2typez12za2zzcfa_ltypez00(obj_t BgL_envz00_4316,
		obj_t BgL_globalsz00_4317)
	{
		{	/* Cfa/ltype.scm 37 */
			return BGl_lightzd2typez12zc0zzcfa_ltypez00(BgL_globalsz00_4317);
		}

	}



/* light-type-fun! */
	obj_t BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(BgL_variablez00_bglt
		BgL_varz00_4)
	{
		{	/* Cfa/ltype.scm 43 */
			{	/* Cfa/ltype.scm 44 */
				BgL_valuez00_bglt BgL_funz00_3336;

				BgL_funz00_3336 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_4))->BgL_valuez00);
				{	/* Cfa/ltype.scm 45 */
					bool_t BgL_test2172z00_4555;

					{	/* Cfa/ltype.scm 45 */
						bool_t BgL_res2055z00_4163;

						BgL_res2055z00_4163 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_3336),
							BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
						BgL_test2172z00_4555 = BgL_res2055z00_4163;
					}
					if (BgL_test2172z00_4555)
						{	/* Cfa/ltype.scm 45 */
							{	/* Cfa/ltype.scm 50 */
								obj_t BgL_g1564z00_3339;

								BgL_g1564z00_3339 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_3336))))->BgL_argsz00);
								{
									obj_t BgL_l1562z00_3341;

									BgL_l1562z00_3341 = BgL_g1564z00_3339;
								BgL_zc3z04anonymousza31654ze3z87_3342:
									if (PAIRP(BgL_l1562z00_3341))
										{	/* Cfa/ltype.scm 50 */
											{	/* Cfa/ltype.scm 51 */
												obj_t BgL_varz00_3344;

												BgL_varz00_3344 = CAR(BgL_l1562z00_3341);
												{	/* Cfa/ltype.scm 51 */
													BgL_valuez00_bglt BgL_arg1662z00_3345;

													BgL_arg1662z00_3345 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_3344))))->
														BgL_valuez00);
													BGl_typezd2variablez12zc0zzcfa_ltypez00
														(BgL_arg1662z00_3345,
														((BgL_variablez00_bglt) BgL_varz00_3344));
												}
											}
											{
												obj_t BgL_l1562z00_4569;

												BgL_l1562z00_4569 = CDR(BgL_l1562z00_3341);
												BgL_l1562z00_3341 = BgL_l1562z00_4569;
												goto BgL_zc3z04anonymousza31654ze3z87_3342;
											}
										}
									else
										{	/* Cfa/ltype.scm 50 */
											((bool_t) 1);
										}
								}
							}
							{	/* Cfa/ltype.scm 54 */
								obj_t BgL_arg1664z00_3348;

								BgL_arg1664z00_3348 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_3336))))->BgL_bodyz00);
								BGl_typezd2nodez12zc0zzcfa_ltypez00(
									((BgL_nodez00_bglt) BgL_arg1664z00_3348));
							}
							{	/* Cfa/ltype.scm 56 */
								obj_t BgL_arg1667z00_3349;

								{	/* Cfa/ltype.scm 56 */
									BgL_approxz00_bglt BgL_arg1669z00_3350;

									{
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_4576;

										{
											obj_t BgL_auxz00_4577;

											{	/* Cfa/ltype.scm 56 */
												BgL_objectz00_bglt BgL_tmpz00_4578;

												BgL_tmpz00_4578 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_3336));
												BgL_auxz00_4577 = BGL_OBJECT_WIDENING(BgL_tmpz00_4578);
											}
											BgL_auxz00_4576 =
												((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_4577);
										}
										BgL_arg1669z00_3350 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_4576))->BgL_approxz00);
									}
									if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00
										(BgL_arg1669z00_3350))
										{	/* Cfa/ltype.scm 62 */
											BgL_arg1667z00_3349 =
												BGl_za2procedurezd2elza2zd2zztype_cachez00;
										}
									else
										{	/* Cfa/ltype.scm 62 */
											BgL_arg1667z00_3349 = BGl_za2_za2z00zztype_cachez00;
										}
								}
								if (
									(((obj_t)
											((BgL_typez00_bglt) BgL_arg1667z00_3349)) ==
										BGl_za2_za2z00zztype_cachez00))
									{	/* Cfa/ltype.scm 115 */
										return BFALSE;
									}
								else
									{	/* Cfa/ltype.scm 115 */
										return
											((((BgL_variablez00_bglt) COBJECT(BgL_varz00_4))->
												BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BgL_arg1667z00_3349)), BUNSPEC);
									}
							}
						}
					else
						{	/* Cfa/ltype.scm 45 */
							return BFALSE;
						}
				}
			}
		}

	}



/* type-node*! */
	bool_t BGl_typezd2nodeza2z12z62zzcfa_ltypez00(obj_t BgL_nodeza2za2_45)
	{
		{	/* Cfa/ltype.scm 323 */
			{
				obj_t BgL_l1574z00_3354;

				BgL_l1574z00_3354 = BgL_nodeza2za2_45;
			BgL_zc3z04anonymousza31672ze3z87_3355:
				if (PAIRP(BgL_l1574z00_3354))
					{	/* Cfa/ltype.scm 324 */
						{	/* Cfa/ltype.scm 324 */
							obj_t BgL_arg1684z00_3357;

							BgL_arg1684z00_3357 = CAR(BgL_l1574z00_3354);
							BGl_typezd2nodez12zc0zzcfa_ltypez00(
								((BgL_nodez00_bglt) BgL_arg1684z00_3357));
						}
						{
							obj_t BgL_l1574z00_4597;

							BgL_l1574z00_4597 = CDR(BgL_l1574z00_3354);
							BgL_l1574z00_3354 = BgL_l1574z00_4597;
							goto BgL_zc3z04anonymousza31672ze3z87_3355;
						}
					}
				else
					{	/* Cfa/ltype.scm 324 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_proc2084z00zzcfa_ltypez00, BGl_valuez00zzast_varz00,
				BGl_string2085z00zzcfa_ltypez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_proc2086z00zzcfa_ltypez00, BGl_nodez00zzast_nodez00,
				BGl_string2087z00zzcfa_ltypez00);
		}

	}



/* &type-node!1588 */
	obj_t BGl_z62typezd2nodez121588za2zzcfa_ltypez00(obj_t BgL_envz00_4320,
		obj_t BgL_nodez00_4321)
	{
		{	/* Cfa/ltype.scm 122 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string2088z00zzcfa_ltypez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4321)));
		}

	}



/* &type-variable!1576 */
	obj_t BGl_z62typezd2variablez121576za2zzcfa_ltypez00(obj_t BgL_envz00_4322,
		obj_t BgL_valuez00_4323, obj_t BgL_variablez00_4324)
	{
		{	/* Cfa/ltype.scm 69 */
			{	/* Cfa/ltype.scm 70 */
				BgL_typez00_bglt BgL_typez00_4438;

				BgL_typez00_4438 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_variablez00_4324)))->BgL_typez00);
				if (
					(((obj_t) BgL_typez00_4438) == BGl_za2procedureza2z00zztype_cachez00))
					{	/* Cfa/ltype.scm 71 */
						if ((((obj_t) BgL_typez00_4438) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/ltype.scm 115 */
								return BFALSE;
							}
						else
							{	/* Cfa/ltype.scm 115 */
								return
									((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_variablez00_4324)))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_typez00_4438), BUNSPEC);
							}
					}
				else
					{	/* Cfa/ltype.scm 71 */
						return CNST_TABLE_REF(((long) 1));
		}}}

	}



/* type-variable! */
	obj_t BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_valuez00_bglt
		BgL_valuez00_6, BgL_variablez00_bglt BgL_variablez00_7)
	{
		{	/* Cfa/ltype.scm 69 */
			{	/* Cfa/ltype.scm 69 */
				obj_t BgL_method1577z00_3371;

				{	/* Cfa/ltype.scm 69 */
					obj_t BgL_res2068z00_4226;

					{	/* Cfa/ltype.scm 69 */
						long BgL_objzd2classzd2numz00_4191;

						{	/* Cfa/ltype.scm 69 */
							long BgL_res2058z00_4194;

							BgL_res2058z00_4194 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_6));
							BgL_objzd2classzd2numz00_4191 = BgL_res2058z00_4194;
						}
						{	/* Cfa/ltype.scm 69 */
							obj_t BgL_arg1813z00_4192;

							BgL_arg1813z00_4192 =
								PROCEDURE_REF(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
								(int) (((long) 1)));
							{	/* Cfa/ltype.scm 69 */
								int BgL_offsetz00_4196;

								BgL_offsetz00_4196 = (int) (BgL_objzd2classzd2numz00_4191);
								{	/* Cfa/ltype.scm 69 */
									long BgL_offsetz00_4197;

									BgL_offsetz00_4197 =
										((long) (BgL_offsetz00_4196) - OBJECT_TYPE);
									{	/* Cfa/ltype.scm 69 */
										long BgL_modz00_4198;

										BgL_modz00_4198 =
											(BgL_offsetz00_4197 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/ltype.scm 69 */
											long BgL_restz00_4200;

											BgL_restz00_4200 =
												(BgL_offsetz00_4197 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/ltype.scm 69 */

												{	/* Cfa/ltype.scm 69 */
													obj_t BgL_bucketz00_4202;

													BgL_bucketz00_4202 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4192), BgL_modz00_4198);
													BgL_res2068z00_4226 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4202), BgL_restz00_4200);
					}}}}}}}}
					BgL_method1577z00_3371 = BgL_res2068z00_4226;
				}
				return
					PROCEDURE_ENTRY(BgL_method1577z00_3371) (BgL_method1577z00_3371,
					((obj_t) BgL_valuez00_6), ((obj_t) BgL_variablez00_7), BEOA);
			}
		}

	}



/* &type-variable! */
	obj_t BGl_z62typezd2variablez12za2zzcfa_ltypez00(obj_t BgL_envz00_4325,
		obj_t BgL_valuez00_4326, obj_t BgL_variablez00_4327)
	{
		{	/* Cfa/ltype.scm 69 */
			return
				BGl_typezd2variablez12zc0zzcfa_ltypez00(
				((BgL_valuez00_bglt) BgL_valuez00_4326),
				((BgL_variablez00_bglt) BgL_variablez00_4327));
		}

	}



/* type-node! */
	obj_t BGl_typezd2nodez12zc0zzcfa_ltypez00(BgL_nodez00_bglt BgL_nodez00_20)
	{
		{	/* Cfa/ltype.scm 122 */
			{	/* Cfa/ltype.scm 122 */
				obj_t BgL_method1589z00_3372;

				{	/* Cfa/ltype.scm 122 */
					obj_t BgL_res2079z00_4263;

					{	/* Cfa/ltype.scm 122 */
						long BgL_objzd2classzd2numz00_4228;

						{	/* Cfa/ltype.scm 122 */
							long BgL_res2069z00_4231;

							BgL_res2069z00_4231 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_20));
							BgL_objzd2classzd2numz00_4228 = BgL_res2069z00_4231;
						}
						{	/* Cfa/ltype.scm 122 */
							obj_t BgL_arg1813z00_4229;

							BgL_arg1813z00_4229 =
								PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
								(int) (((long) 1)));
							{	/* Cfa/ltype.scm 122 */
								int BgL_offsetz00_4233;

								BgL_offsetz00_4233 = (int) (BgL_objzd2classzd2numz00_4228);
								{	/* Cfa/ltype.scm 122 */
									long BgL_offsetz00_4234;

									BgL_offsetz00_4234 =
										((long) (BgL_offsetz00_4233) - OBJECT_TYPE);
									{	/* Cfa/ltype.scm 122 */
										long BgL_modz00_4235;

										BgL_modz00_4235 =
											(BgL_offsetz00_4234 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/ltype.scm 122 */
											long BgL_restz00_4237;

											BgL_restz00_4237 =
												(BgL_offsetz00_4234 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/ltype.scm 122 */

												{	/* Cfa/ltype.scm 122 */
													obj_t BgL_bucketz00_4239;

													BgL_bucketz00_4239 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4229), BgL_modz00_4235);
													BgL_res2079z00_4263 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4239), BgL_restz00_4237);
					}}}}}}}}
					BgL_method1589z00_3372 = BgL_res2079z00_4263;
				}
				return
					PROCEDURE_ENTRY(BgL_method1589z00_3372) (BgL_method1589z00_3372,
					((obj_t) BgL_nodez00_20), BEOA);
			}
		}

	}



/* &type-node! */
	obj_t BGl_z62typezd2nodez12za2zzcfa_ltypez00(obj_t BgL_envz00_4328,
		obj_t BgL_nodez00_4329)
	{
		{	/* Cfa/ltype.scm 122 */
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				((BgL_nodez00_bglt) BgL_nodez00_4329));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc2089z00zzcfa_ltypez00,
				BGl_string2090z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc2091z00zzcfa_ltypez00,
				BGl_string2090z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc2092z00zzcfa_ltypez00,
				BGl_string2090z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc2093z00zzcfa_ltypez00,
				BGl_string2090z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00,
				BGl_proc2094z00zzcfa_ltypez00, BGl_string2090z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_atomz00zzast_nodez00,
				BGl_proc2095z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_kwotez00zzast_nodez00,
				BGl_proc2097z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_varz00zzast_nodez00,
				BGl_proc2098z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_closurez00zzast_nodez00,
				BGl_proc2099z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc2100z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_syncz00zzast_nodez00,
				BGl_proc2101z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_appz00zzast_nodez00,
				BGl_proc2102z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2103z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_funcallz00zzast_nodez00,
				BGl_proc2104z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_externz00zzast_nodez00,
				BGl_proc2105z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_vrefz00zzast_nodez00,
				BGl_proc2106z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc2107z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_castz00zzast_nodez00,
				BGl_proc2108z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_setqz00zzast_nodez00,
				BGl_proc2109z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2110z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_failz00zzast_nodez00,
				BGl_proc2111z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_switchz00zzast_nodez00,
				BGl_proc2112z00zzcfa_ltypez00, BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2113z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2114z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2115z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2116z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2117z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2118z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2119z00zzcfa_ltypez00,
				BGl_string2096z00zzcfa_ltypez00);
		}

	}



/* &type-node!-box-ref1637 */
	obj_t BGl_z62typezd2nodez12zd2boxzd2ref1637za2zzcfa_ltypez00(obj_t
		BgL_envz00_4359, obj_t BgL_nodez00_4360)
	{
		{	/* Cfa/ltype.scm 316 */
			{	/* Cfa/ltype.scm 318 */
				BgL_varz00_bglt BgL_arg1840z00_4440;

				BgL_arg1840z00_4440 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_4360)))->BgL_varz00);
				return
					BGl_typezd2nodez12zc0zzcfa_ltypez00(
					((BgL_nodez00_bglt) BgL_arg1840z00_4440));
			}
		}

	}



/* &type-node!-box-set!1635 */
	obj_t BGl_z62typezd2nodez12zd2boxzd2setz121635zb0zzcfa_ltypez00(obj_t
		BgL_envz00_4361, obj_t BgL_nodez00_4362)
	{
		{	/* Cfa/ltype.scm 308 */
			{	/* Cfa/ltype.scm 310 */
				BgL_varz00_bglt BgL_arg1836z00_4442;

				BgL_arg1836z00_4442 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4362)))->BgL_varz00);
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
					((BgL_nodez00_bglt) BgL_arg1836z00_4442));
			}
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4362)))->BgL_valuez00));
		}

	}



/* &type-node!-make-box1633 */
	obj_t BGl_z62typezd2nodez12zd2makezd2box1633za2zzcfa_ltypez00(obj_t
		BgL_envz00_4363, obj_t BgL_nodez00_4364)
	{
		{	/* Cfa/ltype.scm 301 */
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_4364)))->BgL_valuez00));
		}

	}



/* &type-node!-jump-ex-i1631 */
	obj_t BGl_z62typezd2nodez12zd2jumpzd2exzd2i1631z70zzcfa_ltypez00(obj_t
		BgL_envz00_4365, obj_t BgL_nodez00_4366)
	{
		{	/* Cfa/ltype.scm 293 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4366)))->BgL_exitz00));
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4366)))->BgL_valuez00));
		}

	}



/* &type-node!-set-ex-it1629 */
	obj_t BGl_z62typezd2nodez12zd2setzd2exzd2it1629z70zzcfa_ltypez00(obj_t
		BgL_envz00_4367, obj_t BgL_nodez00_4368)
	{
		{	/* Cfa/ltype.scm 283 */
			{	/* Cfa/ltype.scm 285 */
				BgL_variablez00_bglt BgL_vz00_4446;

				BgL_vz00_4446 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4368)))->
								BgL_varz00)))->BgL_variablez00);
				{	/* Cfa/ltype.scm 286 */
					BgL_valuez00_bglt BgL_arg1828z00_4447;

					BgL_arg1828z00_4447 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_vz00_4446))))->BgL_valuez00);
					BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_arg1828z00_4447,
						BgL_vz00_4446);
				}
			}
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4368)))->BgL_bodyz00));
			{	/* Cfa/ltype.scm 288 */
				BgL_varz00_bglt BgL_arg1831z00_4448;

				BgL_arg1831z00_4448 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4368)))->BgL_varz00);
				return
					BGl_typezd2nodez12zc0zzcfa_ltypez00(
					((BgL_nodez00_bglt) BgL_arg1831z00_4448));
			}
		}

	}



/* &type-node!-let-var1627 */
	obj_t BGl_z62typezd2nodez12zd2letzd2var1627za2zzcfa_ltypez00(obj_t
		BgL_envz00_4369, obj_t BgL_nodez00_4370)
	{
		{	/* Cfa/ltype.scm 270 */
			{	/* Cfa/ltype.scm 272 */
				obj_t BgL_g1573z00_4450;

				BgL_g1573z00_4450 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4370)))->BgL_bindingsz00);
				{
					obj_t BgL_l1571z00_4452;

					BgL_l1571z00_4452 = BgL_g1573z00_4450;
				BgL_zc3z04anonymousza31823ze3z87_4451:
					if (PAIRP(BgL_l1571z00_4452))
						{	/* Cfa/ltype.scm 272 */
							{	/* Cfa/ltype.scm 273 */
								obj_t BgL_bindingz00_4453;

								BgL_bindingz00_4453 = CAR(BgL_l1571z00_4452);
								{	/* Cfa/ltype.scm 273 */
									obj_t BgL_varz00_4454;
									obj_t BgL_valz00_4455;

									BgL_varz00_4454 = CAR(((obj_t) BgL_bindingz00_4453));
									BgL_valz00_4455 = CDR(((obj_t) BgL_bindingz00_4453));
									BGl_typezd2nodez12zc0zzcfa_ltypez00(
										((BgL_nodez00_bglt) BgL_valz00_4455));
									{	/* Cfa/ltype.scm 276 */
										BgL_valuez00_bglt BgL_arg1825z00_4456;

										BgL_arg1825z00_4456 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_varz00_4454))))->
											BgL_valuez00);
										BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_arg1825z00_4456,
											((BgL_variablez00_bglt) BgL_varz00_4454));
									}
								}
							}
							{
								obj_t BgL_l1571z00_4762;

								BgL_l1571z00_4762 = CDR(BgL_l1571z00_4452);
								BgL_l1571z00_4452 = BgL_l1571z00_4762;
								goto BgL_zc3z04anonymousza31823ze3z87_4451;
							}
						}
					else
						{	/* Cfa/ltype.scm 272 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4370)))->BgL_bodyz00));
		}

	}



/* &type-node!-let-fun1625 */
	obj_t BGl_z62typezd2nodez12zd2letzd2fun1625za2zzcfa_ltypez00(obj_t
		BgL_envz00_4371, obj_t BgL_nodez00_4372)
	{
		{	/* Cfa/ltype.scm 262 */
			{	/* Cfa/ltype.scm 264 */
				obj_t BgL_g1570z00_4458;

				BgL_g1570z00_4458 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_4372)))->BgL_localsz00);
				{
					obj_t BgL_l1568z00_4460;

					BgL_l1568z00_4460 = BgL_g1570z00_4458;
				BgL_zc3z04anonymousza31810ze3z87_4459:
					if (PAIRP(BgL_l1568z00_4460))
						{	/* Cfa/ltype.scm 264 */
							{	/* Cfa/ltype.scm 264 */
								obj_t BgL_arg1820z00_4461;

								BgL_arg1820z00_4461 = CAR(BgL_l1568z00_4460);
								BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(
									((BgL_variablez00_bglt) BgL_arg1820z00_4461));
							}
							{
								obj_t BgL_l1568z00_4774;

								BgL_l1568z00_4774 = CDR(BgL_l1568z00_4460);
								BgL_l1568z00_4460 = BgL_l1568z00_4774;
								goto BgL_zc3z04anonymousza31810ze3z87_4459;
							}
						}
					else
						{	/* Cfa/ltype.scm 264 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_4372)))->BgL_bodyz00));
		}

	}



/* &type-node!-switch1623 */
	obj_t BGl_z62typezd2nodez12zd2switch1623z70zzcfa_ltypez00(obj_t
		BgL_envz00_4373, obj_t BgL_nodez00_4374)
	{
		{	/* Cfa/ltype.scm 252 */
			{	/* Cfa/ltype.scm 253 */
				bool_t BgL_tmpz00_4779;

				BGl_typezd2nodez12zc0zzcfa_ltypez00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_4374)))->BgL_testz00));
				{	/* Cfa/ltype.scm 255 */
					obj_t BgL_g1567z00_4463;

					BgL_g1567z00_4463 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_4374)))->BgL_clausesz00);
					{
						obj_t BgL_l1565z00_4465;

						BgL_l1565z00_4465 = BgL_g1567z00_4463;
					BgL_zc3z04anonymousza31802ze3z87_4464:
						if (PAIRP(BgL_l1565z00_4465))
							{	/* Cfa/ltype.scm 255 */
								{	/* Cfa/ltype.scm 256 */
									obj_t BgL_clausez00_4466;

									BgL_clausez00_4466 = CAR(BgL_l1565z00_4465);
									{	/* Cfa/ltype.scm 256 */
										obj_t BgL_arg1808z00_4467;

										BgL_arg1808z00_4467 = CDR(((obj_t) BgL_clausez00_4466));
										BGl_typezd2nodez12zc0zzcfa_ltypez00(
											((BgL_nodez00_bglt) BgL_arg1808z00_4467));
									}
								}
								{
									obj_t BgL_l1565z00_4792;

									BgL_l1565z00_4792 = CDR(BgL_l1565z00_4465);
									BgL_l1565z00_4465 = BgL_l1565z00_4792;
									goto BgL_zc3z04anonymousza31802ze3z87_4464;
								}
							}
						else
							{	/* Cfa/ltype.scm 255 */
								BgL_tmpz00_4779 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4779);
			}
		}

	}



/* &type-node!-fail1621 */
	obj_t BGl_z62typezd2nodez12zd2fail1621z70zzcfa_ltypez00(obj_t BgL_envz00_4375,
		obj_t BgL_nodez00_4376)
	{
		{	/* Cfa/ltype.scm 243 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4376)))->BgL_procz00));
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4376)))->BgL_msgz00));
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4376)))->BgL_objz00));
		}

	}



/* &type-node!-condition1619 */
	obj_t BGl_z62typezd2nodez12zd2condition1619z70zzcfa_ltypez00(obj_t
		BgL_envz00_4377, obj_t BgL_nodez00_4378)
	{
		{	/* Cfa/ltype.scm 234 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4378)))->BgL_testz00));
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4378)))->BgL_truez00));
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4378)))->BgL_falsez00));
		}

	}



/* &type-node!-setq1617 */
	obj_t BGl_z62typezd2nodez12zd2setq1617z70zzcfa_ltypez00(obj_t BgL_envz00_4379,
		obj_t BgL_nodez00_4380)
	{
		{	/* Cfa/ltype.scm 226 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_4380)))->BgL_valuez00));
			{	/* Cfa/ltype.scm 229 */
				BgL_varz00_bglt BgL_arg1778z00_4471;

				BgL_arg1778z00_4471 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_4380)))->BgL_varz00);
				return
					BGl_typezd2nodez12zc0zzcfa_ltypez00(
					((BgL_nodez00_bglt) BgL_arg1778z00_4471));
			}
		}

	}



/* &type-node!-cast1615 */
	obj_t BGl_z62typezd2nodez12zd2cast1615z70zzcfa_ltypez00(obj_t BgL_envz00_4381,
		obj_t BgL_nodez00_4382)
	{
		{	/* Cfa/ltype.scm 219 */
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_4382)))->BgL_argz00));
		}

	}



/* &type-node!-vset!1613 */
	obj_t BGl_z62typezd2nodez12zd2vsetz121613z62zzcfa_ltypez00(obj_t
		BgL_envz00_4383, obj_t BgL_nodez00_4384)
	{
		{	/* Cfa/ltype.scm 210 */
			{

				{	/* Cfa/ltype.scm 210 */
					obj_t BgL_nextzd2method1612zd2_4475;

					BgL_nextzd2method1612zd2_4475 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_4384)),
						BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
						BGl_vsetz12z12zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1612zd2_4475)
						(BgL_nextzd2method1612zd2_4475,
						((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_4384)), BEOA);
				}
				{	/* Cfa/ltype.scm 213 */
					bool_t BgL_test2182z00_4832;

					{	/* Cfa/ltype.scm 213 */
						BgL_typez00_bglt BgL_arg1768z00_4476;

						BgL_arg1768z00_4476 =
							(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_4384)))->BgL_ftypez00);
						BgL_test2182z00_4832 =
							(((obj_t) BgL_arg1768z00_4476) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2182z00_4832)
						{	/* Cfa/ltype.scm 213 */
							return
								((((BgL_vsetz12z12_bglt) COBJECT(
											((BgL_vsetz12z12_bglt) BgL_nodez00_4384)))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
						}
					else
						{	/* Cfa/ltype.scm 213 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &type-node!-vref1611 */
	obj_t BGl_z62typezd2nodez12zd2vref1611z70zzcfa_ltypez00(obj_t BgL_envz00_4385,
		obj_t BgL_nodez00_4386)
	{
		{	/* Cfa/ltype.scm 201 */
			{

				{	/* Cfa/ltype.scm 201 */
					obj_t BgL_nextzd2method1610zd2_4479;

					BgL_nextzd2method1610zd2_4479 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vrefz00_bglt) BgL_nodez00_4386)),
						BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
						BGl_vrefz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1610zd2_4479)
						(BgL_nextzd2method1610zd2_4479,
						((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_4386)), BEOA);
				}
				{	/* Cfa/ltype.scm 204 */
					bool_t BgL_test2183z00_4849;

					{	/* Cfa/ltype.scm 204 */
						BgL_typez00_bglt BgL_arg1759z00_4480;

						BgL_arg1759z00_4480 =
							(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_4386)))->BgL_ftypez00);
						BgL_test2183z00_4849 =
							(((obj_t) BgL_arg1759z00_4480) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2183z00_4849)
						{	/* Cfa/ltype.scm 204 */
							return
								((((BgL_vrefz00_bglt) COBJECT(
											((BgL_vrefz00_bglt) BgL_nodez00_4386)))->BgL_ftypez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
						}
					else
						{	/* Cfa/ltype.scm 204 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &type-node!-extern1609 */
	obj_t BGl_z62typezd2nodez12zd2extern1609z70zzcfa_ltypez00(obj_t
		BgL_envz00_4387, obj_t BgL_nodez00_4388)
	{
		{	/* Cfa/ltype.scm 194 */
			return
				BBOOL(BGl_typezd2nodeza2z12z62zzcfa_ltypez00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_4388)))->BgL_exprza2za2)));
		}

	}



/* &type-node!-funcall1607 */
	obj_t BGl_z62typezd2nodez12zd2funcall1607z70zzcfa_ltypez00(obj_t
		BgL_envz00_4389, obj_t BgL_nodez00_4390)
	{
		{	/* Cfa/ltype.scm 186 */
			{	/* Cfa/ltype.scm 187 */
				bool_t BgL_tmpz00_4861;

				BGl_typezd2nodez12zc0zzcfa_ltypez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_4390)))->BgL_funz00));
				BgL_tmpz00_4861 =
					BGl_typezd2nodeza2z12z62zzcfa_ltypez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_4390)))->BgL_argsz00));
				return BBOOL(BgL_tmpz00_4861);
			}
		}

	}



/* &type-node!-app-ly1605 */
	obj_t BGl_z62typezd2nodez12zd2appzd2ly1605za2zzcfa_ltypez00(obj_t
		BgL_envz00_4391, obj_t BgL_nodez00_4392)
	{
		{	/* Cfa/ltype.scm 178 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_4392)))->BgL_funz00));
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_4392)))->BgL_argz00));
		}

	}



/* &type-node!-app1603 */
	obj_t BGl_z62typezd2nodez12zd2app1603z70zzcfa_ltypez00(obj_t BgL_envz00_4393,
		obj_t BgL_nodez00_4394)
	{
		{	/* Cfa/ltype.scm 171 */
			return
				BBOOL(BGl_typezd2nodeza2z12z62zzcfa_ltypez00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_4394)))->BgL_argsz00)));
		}

	}



/* &type-node!-sync1601 */
	obj_t BGl_z62typezd2nodez12zd2sync1601z70zzcfa_ltypez00(obj_t BgL_envz00_4395,
		obj_t BgL_nodez00_4396)
	{
		{	/* Cfa/ltype.scm 162 */
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4396)))->BgL_mutexz00));
			BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4396)))->BgL_prelockz00));
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4396)))->BgL_bodyz00));
		}

	}



/* &type-node!-sequence1599 */
	obj_t BGl_z62typezd2nodez12zd2sequence1599z70zzcfa_ltypez00(obj_t
		BgL_envz00_4397, obj_t BgL_nodez00_4398)
	{
		{	/* Cfa/ltype.scm 155 */
			return
				BBOOL(BGl_typezd2nodeza2z12z62zzcfa_ltypez00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_4398)))->BgL_nodesz00)));
		}

	}



/* &type-node!-closure1597 */
	obj_t BGl_z62typezd2nodez12zd2closure1597z70zzcfa_ltypez00(obj_t
		BgL_envz00_4399, obj_t BgL_nodez00_4400)
	{
		{	/* Cfa/ltype.scm 149 */
			{	/* Cfa/ltype.scm 150 */
				obj_t BgL_arg1740z00_4488;

				BgL_arg1740z00_4488 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_4400)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2096z00zzcfa_ltypez00, BGl_string2120z00zzcfa_ltypez00,
					BgL_arg1740z00_4488);
			}
		}

	}



/* &type-node!-var1595 */
	obj_t BGl_z62typezd2nodez12zd2var1595z70zzcfa_ltypez00(obj_t BgL_envz00_4401,
		obj_t BgL_nodez00_4402)
	{
		{	/* Cfa/ltype.scm 139 */
			{	/* Cfa/ltype.scm 141 */
				bool_t BgL_test2184z00_4896;

				{	/* Cfa/ltype.scm 141 */
					bool_t BgL_test2185z00_4897;

					{	/* Cfa/ltype.scm 141 */
						BgL_variablez00_bglt BgL_arg1729z00_4490;

						BgL_arg1729z00_4490 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_nodez00_4402)))->BgL_variablez00);
						{	/* Cfa/ltype.scm 141 */
							bool_t BgL_res2080z00_4491;

							BgL_res2080z00_4491 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1729z00_4490), BGl_globalz00zzast_varz00);
							BgL_test2185z00_4897 = BgL_res2080z00_4491;
						}
					}
					if (BgL_test2185z00_4897)
						{	/* Cfa/ltype.scm 141 */
							BgL_test2184z00_4896 =
								(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt)
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_4402)))->
													BgL_variablez00))))->BgL_importz00) ==
								CNST_TABLE_REF(((long) 2)));
						}
					else
						{	/* Cfa/ltype.scm 141 */
							BgL_test2184z00_4896 = ((bool_t) 0);
						}
				}
				if (BgL_test2184z00_4896)
					{	/* Cfa/ltype.scm 142 */
						BgL_valuez00_bglt BgL_arg1719z00_4492;
						BgL_variablez00_bglt BgL_arg1725z00_4493;

						BgL_arg1719z00_4492 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt)
											(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_4402)))->
												BgL_variablez00)))))->BgL_valuez00);
						BgL_arg1725z00_4493 =
							(((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
										BgL_nodez00_4402)))->BgL_variablez00);
						BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_arg1719z00_4492,
							BgL_arg1725z00_4493);
					}
				else
					{	/* Cfa/ltype.scm 141 */
						BFALSE;
					}
			}
			{	/* Cfa/ltype.scm 143 */
				bool_t BgL_test2186z00_4916;

				{	/* Cfa/ltype.scm 143 */
					BgL_typez00_bglt BgL_arg1738z00_4494;

					BgL_arg1738z00_4494 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_4402)))->
									BgL_variablez00)))->BgL_typez00);
					BgL_test2186z00_4916 =
						(((obj_t) BgL_arg1738z00_4494) ==
						BGl_za2procedurezd2elza2zd2zztype_cachez00);
				}
				if (BgL_test2186z00_4916)
					{	/* Cfa/ltype.scm 143 */
						return
							((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_4402))))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_za2procedurezd2elza2zd2zztype_cachez00)), BUNSPEC);
					}
				else
					{	/* Cfa/ltype.scm 143 */
						return BFALSE;
					}
			}
		}

	}



/* &type-node!-kwote1593 */
	obj_t BGl_z62typezd2nodez12zd2kwote1593z70zzcfa_ltypez00(obj_t
		BgL_envz00_4403, obj_t BgL_nodez00_4404)
	{
		{	/* Cfa/ltype.scm 133 */
			return BUNSPEC;
		}

	}



/* &type-node!-atom1591 */
	obj_t BGl_z62typezd2nodez12zd2atom1591z70zzcfa_ltypez00(obj_t BgL_envz00_4405,
		obj_t BgL_nodez00_4406)
	{
		{	/* Cfa/ltype.scm 127 */
			return BUNSPEC;
		}

	}



/* &type-variable!-inter1587 */
	obj_t BGl_z62typezd2variablez12zd2inter1587z70zzcfa_ltypez00(obj_t
		BgL_envz00_4407, obj_t BgL_valuez00_4408, obj_t BgL_variablez00_4409)
	{
		{	/* Cfa/ltype.scm 108 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &type-variable!-sexit1585 */
	obj_t BGl_z62typezd2variablez12zd2sexit1585z70zzcfa_ltypez00(obj_t
		BgL_envz00_4410, obj_t BgL_valuez00_4411, obj_t BgL_variablez00_4412)
	{
		{	/* Cfa/ltype.scm 98 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &type-variable!-cvar/1583 */
	obj_t BGl_z62typezd2variablez12zd2cvarzf21583z82zzcfa_ltypez00(obj_t
		BgL_envz00_4413, obj_t BgL_valuez00_4414, obj_t BgL_variablez00_4415)
	{
		{	/* Cfa/ltype.scm 91 */
			{	/* Cfa/ltype.scm 93 */
				obj_t BgL_arg1696z00_4500;

				{	/* Cfa/ltype.scm 93 */
					BgL_approxz00_bglt BgL_arg1697z00_4501;

					{
						BgL_cvarzf2cinfozf2_bglt BgL_auxz00_4928;

						{
							obj_t BgL_auxz00_4929;

							{	/* Cfa/ltype.scm 93 */
								BgL_objectz00_bglt BgL_tmpz00_4930;

								BgL_tmpz00_4930 =
									((BgL_objectz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_4414));
								BgL_auxz00_4929 = BGL_OBJECT_WIDENING(BgL_tmpz00_4930);
							}
							BgL_auxz00_4928 = ((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_4929);
						}
						BgL_arg1697z00_4501 =
							(((BgL_cvarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4928))->
							BgL_approxz00);
					}
					if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00
						(BgL_arg1697z00_4501))
						{	/* Cfa/ltype.scm 62 */
							BgL_arg1696z00_4500 = BGl_za2procedurezd2elza2zd2zztype_cachez00;
						}
					else
						{	/* Cfa/ltype.scm 62 */
							BgL_arg1696z00_4500 = BGl_za2_za2z00zztype_cachez00;
						}
				}
				if (
					(((obj_t)
							((BgL_typez00_bglt) BgL_arg1696z00_4500)) ==
						BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/ltype.scm 115 */
						return BFALSE;
					}
				else
					{	/* Cfa/ltype.scm 115 */
						return
							((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_4415)))->
								BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_arg1696z00_4500)),
							BUNSPEC);
					}
			}
		}

	}



/* &type-variable!-scnst1581 */
	obj_t BGl_z62typezd2variablez12zd2scnst1581z70zzcfa_ltypez00(obj_t
		BgL_envz00_4416, obj_t BgL_valuez00_4417, obj_t BgL_variablez00_4418)
	{
		{	/* Cfa/ltype.scm 85 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &type-variable!-svar/1579 */
	obj_t BGl_z62typezd2variablez12zd2svarzf21579z82zzcfa_ltypez00(obj_t
		BgL_envz00_4419, obj_t BgL_valuez00_4420, obj_t BgL_variablez00_4421)
	{
		{	/* Cfa/ltype.scm 78 */
			{	/* Cfa/ltype.scm 80 */
				obj_t BgL_arg1692z00_4504;

				{	/* Cfa/ltype.scm 80 */
					BgL_approxz00_bglt BgL_arg1695z00_4505;

					{
						BgL_svarzf2cinfozf2_bglt BgL_auxz00_4946;

						{
							obj_t BgL_auxz00_4947;

							{	/* Cfa/ltype.scm 80 */
								BgL_objectz00_bglt BgL_tmpz00_4948;

								BgL_tmpz00_4948 =
									((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_4420));
								BgL_auxz00_4947 = BGL_OBJECT_WIDENING(BgL_tmpz00_4948);
							}
							BgL_auxz00_4946 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_4947);
						}
						BgL_arg1695z00_4505 =
							(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4946))->
							BgL_approxz00);
					}
					if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00
						(BgL_arg1695z00_4505))
						{	/* Cfa/ltype.scm 62 */
							BgL_arg1692z00_4504 = BGl_za2procedurezd2elza2zd2zztype_cachez00;
						}
					else
						{	/* Cfa/ltype.scm 62 */
							BgL_arg1692z00_4504 = BGl_za2_za2z00zztype_cachez00;
						}
				}
				if (
					(((obj_t)
							((BgL_typez00_bglt) BgL_arg1692z00_4504)) ==
						BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/ltype.scm 115 */
						return BFALSE;
					}
				else
					{	/* Cfa/ltype.scm 115 */
						return
							((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_4421)))->
								BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_arg1692z00_4504)),
							BUNSPEC);
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_ltypez00()
	{
		{	/* Cfa/ltype.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string2121z00zzcfa_ltypez00));
		}

	}

#ifdef __cplusplus
}
#endif
