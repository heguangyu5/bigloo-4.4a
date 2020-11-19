/*===========================================================================*/
/*   (Cfa/collect.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/collect.scm) */
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

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

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

	typedef struct BgL_prezd2makezd2boxz00_bgl
	{
	}                          *BgL_prezd2makezd2boxz00_bglt;

	typedef struct BgL_prezd2arithmeticzd2appz00_bgl
	{
		obj_t BgL_speczd2typeszd2;
	}                                *BgL_prezd2arithmeticzd2appz00_bglt;

	typedef struct BgL_prezd2makezd2procedurezd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                     
		*BgL_prezd2makezd2procedurezd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2refzd2appzd2_bgl
	{
	}                                    
		*BgL_prezd2procedurezd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2procedurezd2setz12zd2appzc0_bgl
	{
	}                                       
		*BgL_prezd2procedurezd2setz12zd2appzc0_bglt;

	typedef struct BgL_prezd2makezd2vectorzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2vectorzd2appzd2_bglt;

	typedef struct BgL_prezd2conszd2appz00_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                          *BgL_prezd2conszd2appz00_bglt;

	typedef struct BgL_prezd2conszd2refzd2appzd2_bgl
	{
		obj_t BgL_getz00;
	}                                *BgL_prezd2conszd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2conszd2setz12zd2appzc0_bgl
	{
		obj_t BgL_getz00;
	}                                   *BgL_prezd2conszd2setz12zd2appzc0_bglt;

	typedef struct BgL_prezd2makezd2structzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2structzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2refzd2appzd2_bgl
	{
	}                                  *BgL_prezd2structzd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2setz12zd2appzc0_bgl
	{
	}                                    
		*BgL_prezd2structzd2setz12zd2appzc0_bglt;

	typedef struct BgL_prezd2valloczf2cinfoz20_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                              *BgL_prezd2valloczf2cinfoz20_bglt;


	static obj_t BGl_z62nodezd2collectz12zd2appzd2ly1720za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2setzd2ex1741za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62nodezd2collectz12zd2extern1725z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_z62nodezd2collectz12zd2condit1731z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt);
	static bool_t BGl_nodezd2collectza2z12z62zzcfa_collectz00(obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2boxz00zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00;
	static obj_t BGl_z62nodezd2collectz12zd2boxzd2re1749za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_pairzd2optimzd2quotezd2maxlenzd2zzcfa_pairz00();
	static obj_t BGl_z62nodezd2collectz12zd2var1710z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd2collectz12zd2atom1706z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00;
	extern bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00();
	static obj_t BGl_z62nodezd2collectz12zd2boxzd2se1747za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2kwote1708z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12za2zzcfa_collectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2sequen1712z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_getzd2atypeze70z35zzcfa_collectz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00;
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_collectz00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	extern obj_t BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00;
	extern obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00;
	extern obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzcfa_collectz00(obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2sync1714z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_za2usedzd2allocza2zd2zzcfa_collectz00 = BUNSPEC;
	static obj_t BGl_z62nodezd2collectz12zd2fail1733z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz121702za2zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_z62nodezd2collectz12zd2funcal1722z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl_z62collectzd2allzd2approxz12z70zzcfa_collectz00(obj_t,
		obj_t);
	extern obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_collectz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_pairzd2optimzf3z21zzcfa_pairz00();
	static obj_t BGl_toplevelzd2initzd2zzcfa_collectz00();
	static obj_t BGl_z62nodezd2collectz12zd2switch1735z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00;
	static obj_t BGl_genericzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2makezd2b1745za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2jumpzd2e1743za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2collectz12zd2app1716z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00;
	extern obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_collectz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_collectz00();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_z62getzd2allocszb0zzcfa_collectz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_collectz00();
	extern obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00;
	static obj_t BGl_z62nodezd2collectz12zd2cast1727z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2collectz12zd2letzd2va1739za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2letzd2fu1737za2zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2valloc1718z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2collectz12zd2setq1729z70zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_prezd2conszd2appz00zzcfa_info2z00;
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	static obj_t BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[23];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2274z00,
		BGl_z62nodezd2collectz12za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2275z00,
		BGl_z62nodezd2collectz121702za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2276z00,
		BGl_z62nodezd2collectz12zd2atom1706z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2277z00,
		BGl_z62nodezd2collectz12zd2kwote1708z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2278z00,
		BGl_z62nodezd2collectz12zd2var1710z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2279z00,
		BGl_z62nodezd2collectz12zd2sequen1712z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2280z00,
		BGl_z62nodezd2collectz12zd2sync1714z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2281z00,
		BGl_z62nodezd2collectz12zd2app1716z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2253z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2282z00,
		BGl_z62nodezd2collectz12zd2valloc1718z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2283z00,
		BGl_z62nodezd2collectz12zd2appzd2ly1720za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2255z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2284z00,
		BGl_z62nodezd2collectz12zd2funcal1722z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2285z00,
		BGl_z62nodezd2collectz12zd2extern1725z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2257z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2286z00,
		BGl_z62nodezd2collectz12zd2cast1727z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2287z00,
		BGl_z62nodezd2collectz12zd2setq1729z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2259z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2288z00,
		BGl_z62nodezd2collectz12zd2condit1731z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2260z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2289z00,
		BGl_z62nodezd2collectz12zd2fail1733z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2261z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2290z00,
		BGl_z62nodezd2collectz12zd2switch1735z70zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2262z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2291z00,
		BGl_z62nodezd2collectz12zd2letzd2fu1737za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2263z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2292z00,
		BGl_z62nodezd2collectz12zd2letzd2va1739za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2264z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2293z00,
		BGl_z62nodezd2collectz12zd2setzd2ex1741za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2265z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2294z00,
		BGl_z62nodezd2collectz12zd2jumpzd2e1743za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2266z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2295z00,
		BGl_z62nodezd2collectz12zd2makezd2b1745za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2267z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2296z00,
		BGl_z62nodezd2collectz12zd2boxzd2se1747za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2268z00zzcfa_collectz00,
		BgL_bgl_za762nodeza7d2collec2297z00,
		BGl_z62nodezd2collectz12zd2boxzd2re1749za2zzcfa_collectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_collectzd2allzd2approxz12zd2envzc0zzcfa_collectz00,
		BgL_bgl_za762collectza7d2all2298z00,
		BGl_z62collectzd2allzd2approxz12z70zzcfa_collectz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STRING(BGl_string2244z00zzcfa_collectz00,
		BgL_bgl_string2244za700za7za7c2299za7, "node-collect!1702", 17);
	      DEFINE_STRING(BGl_string2245z00zzcfa_collectz00,
		BgL_bgl_string2245za700za7za7c2300za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2247z00zzcfa_collectz00,
		BgL_bgl_string2247za700za7za7c2301za7, "node-collect!", 13);
	      DEFINE_STRING(BGl_string2269z00zzcfa_collectz00,
		BgL_bgl_string2269za700za7za7c2302za7, "cfa_collect", 11);
	      DEFINE_STRING(BGl_string2270z00zzcfa_collectz00,
		BgL_bgl_string2270za700za7za7c2303za7,
		"real string boolean char integer quote (quote ()) (pragma::obj \"\") $set-cdr! $set-car! $cdr $car $cons $struct-set! $struct-ref $make-struct $make-vector procedure-set! procedure-ref make-va-procedure make-fx-procedure c-eq? node-collect!1702 ",
		243);
	BGL_IMPORT obj_t BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2allocszd2envz00zzcfa_collectz00,
		BgL_bgl_za762getza7d2allocsza72304za7,
		BGl_z62getzd2allocszb0zzcfa_collectz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2usedzd2allocza2zd2zzcfa_collectz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_collectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long
		BgL_checksumz00_5007, char *BgL_fromz00_5008)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_collectz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_collectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_collectz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_collectz00();
					BGl_cnstzd2initzd2zzcfa_collectz00();
					BGl_importedzd2moduleszd2initz00zzcfa_collectz00();
					BGl_genericzd2initzd2zzcfa_collectz00();
					BGl_methodzd2initzd2zzcfa_collectz00();
					return BGl_toplevelzd2initzd2zzcfa_collectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_collect");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_collect");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			{	/* Cfa/collect.scm 15 */
				obj_t BgL_cportz00_4829;

				{	/* Cfa/collect.scm 15 */
					obj_t BgL_stringz00_4837;

					BgL_stringz00_4837 = BGl_string2270z00zzcfa_collectz00;
					{	/* Cfa/collect.scm 15 */
						obj_t BgL_startz00_4838;

						BgL_startz00_4838 = BINT(((long) 0));
						{	/* Cfa/collect.scm 15 */
							obj_t BgL_endz00_4839;

							BgL_endz00_4839 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4837)));
							{	/* Cfa/collect.scm 15 */

								BgL_cportz00_4829 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4837, BgL_startz00_4838, BgL_endz00_4839);
				}}}}
				{
					long BgL_iz00_4830;

					BgL_iz00_4830 = ((long) 22);
				BgL_loopz00_4831:
					if ((BgL_iz00_4830 == ((long) -1)))
						{	/* Cfa/collect.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/collect.scm 15 */
							{	/* Cfa/collect.scm 15 */
								obj_t BgL_arg2272z00_4833;

								{	/* Cfa/collect.scm 15 */

									{	/* Cfa/collect.scm 15 */
										obj_t BgL_locationz00_4835;

										BgL_locationz00_4835 = BBOOL(((bool_t) 0));
										{	/* Cfa/collect.scm 15 */

											BgL_arg2272z00_4833 =
												BGl_readz00zz__readerz00(BgL_cportz00_4829,
												BgL_locationz00_4835);
										}
									}
								}
								{	/* Cfa/collect.scm 15 */
									int BgL_tmpz00_5042;

									BgL_tmpz00_5042 = (int) (BgL_iz00_4830);
									CNST_TABLE_SET(BgL_tmpz00_5042, BgL_arg2272z00_4833);
							}}
							{	/* Cfa/collect.scm 15 */
								int BgL_auxz00_4836;

								BgL_auxz00_4836 = (int) ((BgL_iz00_4830 - ((long) 1)));
								{
									long BgL_iz00_5047;

									BgL_iz00_5047 = (long) (BgL_auxz00_4836);
									BgL_iz00_4830 = BgL_iz00_5047;
									goto BgL_loopz00_4831;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			return (BGl_za2usedzd2allocza2zd2zzcfa_collectz00 = BNIL, BUNSPEC);
		}

	}



/* collect-all-approx! */
	BGL_EXPORTED_DEF obj_t BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/collect.scm 46 */
			{
				obj_t BgL_l1689z00_3376;

				{	/* Cfa/collect.scm 48 */
					bool_t BgL_tmpz00_5050;

					BgL_l1689z00_3376 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31756ze3z87_3377:
					if (PAIRP(BgL_l1689z00_3376))
						{	/* Cfa/collect.scm 48 */
							{	/* Cfa/collect.scm 48 */
								obj_t BgL_globalz00_3379;

								BgL_globalz00_3379 = CAR(BgL_l1689z00_3376);
								{	/* Cfa/collect.scm 48 */
									BgL_valuez00_bglt BgL_arg1759z00_3380;

									BgL_arg1759z00_3380 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_3379))))->
										BgL_valuez00);
									{	/* Cfa/collect.scm 55 */
										obj_t BgL_arg1761z00_4436;

										BgL_arg1761z00_4436 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_arg1759z00_3380)))->
											BgL_bodyz00);
										BGl_nodezd2collectz12zc0zzcfa_collectz00(((BgL_nodez00_bglt)
												BgL_arg1761z00_4436),
											((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
													BgL_globalz00_3379)));
									}
								}
							}
							{
								obj_t BgL_l1689z00_5063;

								BgL_l1689z00_5063 = CDR(BgL_l1689z00_3376);
								BgL_l1689z00_3376 = BgL_l1689z00_5063;
								goto BgL_zc3z04anonymousza31756ze3z87_3377;
							}
						}
					else
						{	/* Cfa/collect.scm 48 */
							BgL_tmpz00_5050 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_5050);
				}
			}
		}

	}



/* &collect-all-approx! */
	obj_t BGl_z62collectzd2allzd2approxz12z70zzcfa_collectz00(obj_t
		BgL_envz00_4727, obj_t BgL_globalsz00_4728)
	{
		{	/* Cfa/collect.scm 46 */
			return
				BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(BgL_globalsz00_4728);
		}

	}



/* node-collect*! */
	bool_t BGl_nodezd2collectza2z12z62zzcfa_collectz00(obj_t BgL_nodeza2za2_52,
		obj_t BgL_ownerz00_53)
	{
		{	/* Cfa/collect.scm 392 */
			{
				obj_t BgL_l1700z00_3385;

				BgL_l1700z00_3385 = BgL_nodeza2za2_52;
			BgL_zc3z04anonymousza31762ze3z87_3386:
				if (PAIRP(BgL_l1700z00_3385))
					{	/* Cfa/collect.scm 393 */
						{	/* Cfa/collect.scm 393 */
							obj_t BgL_nodez00_3388;

							BgL_nodez00_3388 = CAR(BgL_l1700z00_3385);
							BGl_nodezd2collectz12zc0zzcfa_collectz00(
								((BgL_nodez00_bglt) BgL_nodez00_3388),
								((BgL_variablez00_bglt) BgL_ownerz00_53));
						}
						{
							obj_t BgL_l1700z00_5073;

							BgL_l1700z00_5073 = CDR(BgL_l1700z00_3385);
							BgL_l1700z00_3385 = BgL_l1700z00_5073;
							goto BgL_zc3z04anonymousza31762ze3z87_3386;
						}
					}
				else
					{	/* Cfa/collect.scm 393 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* get-allocs */
	BGL_EXPORTED_DEF obj_t BGl_getzd2allocszd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 415 */
			return BGl_za2usedzd2allocza2zd2zzcfa_collectz00;
		}

	}



/* &get-allocs */
	obj_t BGl_z62getzd2allocszb0zzcfa_collectz00(obj_t BgL_envz00_4729)
	{
		{	/* Cfa/collect.scm 415 */
			return BGl_getzd2allocszd2zzcfa_collectz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_proc2243z00zzcfa_collectz00, BGl_nodez00zzast_nodez00,
				BGl_string2244z00zzcfa_collectz00);
		}

	}



/* &node-collect!1702 */
	obj_t BGl_z62nodezd2collectz121702za2zzcfa_collectz00(obj_t BgL_envz00_4731,
		obj_t BgL_nodez00_4732, obj_t BgL_ownerz00_4733)
	{
		{	/* Cfa/collect.scm 60 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string2245z00zzcfa_collectz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4732)));
		}

	}



/* node-collect! */
	obj_t BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_nodez00_bglt BgL_nodez00_6,
		BgL_variablez00_bglt BgL_ownerz00_7)
	{
		{	/* Cfa/collect.scm 60 */
			{	/* Cfa/collect.scm 60 */
				obj_t BgL_method1704z00_3396;

				{	/* Cfa/collect.scm 60 */
					obj_t BgL_res2183z00_4480;

					{	/* Cfa/collect.scm 60 */
						long BgL_objzd2classzd2numz00_4445;

						{	/* Cfa/collect.scm 60 */
							long BgL_res2173z00_4448;

							BgL_res2173z00_4448 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_6));
							BgL_objzd2classzd2numz00_4445 = BgL_res2173z00_4448;
						}
						{	/* Cfa/collect.scm 60 */
							obj_t BgL_arg1813z00_4446;

							BgL_arg1813z00_4446 =
								PROCEDURE_REF(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
								(int) (((long) 1)));
							{	/* Cfa/collect.scm 60 */
								int BgL_offsetz00_4450;

								BgL_offsetz00_4450 = (int) (BgL_objzd2classzd2numz00_4445);
								{	/* Cfa/collect.scm 60 */
									long BgL_offsetz00_4451;

									BgL_offsetz00_4451 =
										((long) (BgL_offsetz00_4450) - OBJECT_TYPE);
									{	/* Cfa/collect.scm 60 */
										long BgL_modz00_4452;

										BgL_modz00_4452 =
											(BgL_offsetz00_4451 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/collect.scm 60 */
											long BgL_restz00_4454;

											BgL_restz00_4454 =
												(BgL_offsetz00_4451 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/collect.scm 60 */

												{	/* Cfa/collect.scm 60 */
													obj_t BgL_bucketz00_4456;

													BgL_bucketz00_4456 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4446), BgL_modz00_4452);
													BgL_res2183z00_4480 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4456), BgL_restz00_4454);
					}}}}}}}}
					BgL_method1704z00_3396 = BgL_res2183z00_4480;
				}
				return
					PROCEDURE_ENTRY(BgL_method1704z00_3396) (BgL_method1704z00_3396,
					((obj_t) BgL_nodez00_6), ((obj_t) BgL_ownerz00_7), BEOA);
			}
		}

	}



/* &node-collect! */
	obj_t BGl_z62nodezd2collectz12za2zzcfa_collectz00(obj_t BgL_envz00_4734,
		obj_t BgL_nodez00_4735, obj_t BgL_ownerz00_4736)
	{
		{	/* Cfa/collect.scm 60 */
			return
				BGl_nodezd2collectz12zc0zzcfa_collectz00(
				((BgL_nodez00_bglt) BgL_nodez00_4735),
				((BgL_variablez00_bglt) BgL_ownerz00_4736));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_atomz00zzast_nodez00, BGl_proc2246z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc2248z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_varz00zzast_nodez00, BGl_proc2249z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2250z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_syncz00zzast_nodez00, BGl_proc2251z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_appz00zzast_nodez00, BGl_proc2252z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_vallocz00zzast_nodez00, BGl_proc2253z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2254z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2255z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_externz00zzast_nodez00, BGl_proc2256z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_castz00zzast_nodez00, BGl_proc2257z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_setqz00zzast_nodez00, BGl_proc2258z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2259z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_failz00zzast_nodez00, BGl_proc2260z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_switchz00zzast_nodez00, BGl_proc2261z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2262z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2263z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2264z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2265z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2266z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2267z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2268z00zzcfa_collectz00,
				BGl_string2247z00zzcfa_collectz00);
		}

	}



/* &node-collect!-box-re1749 */
	obj_t BGl_z62nodezd2collectz12zd2boxzd2re1749za2zzcfa_collectz00(obj_t
		BgL_envz00_4763, obj_t BgL_nodez00_4764, obj_t BgL_ownerz00_4765)
	{
		{	/* Cfa/collect.scm 385 */
			{	/* Cfa/collect.scm 387 */
				BgL_varz00_bglt BgL_arg1963z00_4845;

				BgL_arg1963z00_4845 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_4764)))->BgL_varz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(
					((BgL_nodez00_bglt) BgL_arg1963z00_4845),
					((BgL_variablez00_bglt) BgL_ownerz00_4765));
			}
		}

	}



/* &node-collect!-box-se1747 */
	obj_t BGl_z62nodezd2collectz12zd2boxzd2se1747za2zzcfa_collectz00(obj_t
		BgL_envz00_4766, obj_t BgL_nodez00_4767, obj_t BgL_ownerz00_4768)
	{
		{	/* Cfa/collect.scm 377 */
			{	/* Cfa/collect.scm 379 */
				BgL_varz00_bglt BgL_arg1961z00_4847;

				BgL_arg1961z00_4847 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4767)))->BgL_varz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(
					((BgL_nodez00_bglt) BgL_arg1961z00_4847),
					((BgL_variablez00_bglt) BgL_ownerz00_4768));
			}
			{	/* Cfa/collect.scm 380 */
				BgL_nodez00_bglt BgL_arg1962z00_4848;

				BgL_arg1962z00_4848 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4767)))->BgL_valuez00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1962z00_4848,
					((BgL_variablez00_bglt) BgL_ownerz00_4768));
			}
		}

	}



/* &node-collect!-make-b1745 */
	obj_t BGl_z62nodezd2collectz12zd2makezd2b1745za2zzcfa_collectz00(obj_t
		BgL_envz00_4769, obj_t BgL_nodez00_4770, obj_t BgL_ownerz00_4771)
	{
		{	/* Cfa/collect.scm 367 */
			{	/* Cfa/collect.scm 368 */
				BgL_nodez00_bglt BgL_arg1958z00_4850;

				BgL_arg1958z00_4850 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)))->BgL_valuez00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1958z00_4850,
					((BgL_variablez00_bglt) BgL_ownerz00_4771));
			}
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
				{	/* Cfa/collect.scm 369 */
					BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
						MAKE_YOUNG_PAIR(
						((obj_t)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)),
						BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
					{	/* Cfa/collect.scm 372 */
						BgL_prezd2makezd2boxz00_bglt BgL_wide1260z00_4851;

						BgL_wide1260z00_4851 =
							((BgL_prezd2makezd2boxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_prezd2makezd2boxz00_bgl))));
						{	/* Cfa/collect.scm 372 */
							obj_t BgL_auxz00_5167;
							BgL_objectz00_bglt BgL_tmpz00_5163;

							BgL_auxz00_5167 = ((obj_t) BgL_wide1260z00_4851);
							BgL_tmpz00_5163 =
								((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5163, BgL_auxz00_5167);
						}
						((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)));
						{	/* Cfa/collect.scm 372 */
							long BgL_arg1960z00_4852;

							{	/* Cfa/collect.scm 372 */
								long BgL_res2242z00_4853;

								BgL_res2242z00_4853 =
									BGL_CLASS_INDEX(BGl_prezd2makezd2boxz00zzcfa_infoz00);
								BgL_arg1960z00_4852 = BgL_res2242z00_4853;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_makezd2boxzd2_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770))),
								BgL_arg1960z00_4852);
						}
						((BgL_makezd2boxzd2_bglt)
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)));
					}
					return
						((obj_t)
						((BgL_makezd2boxzd2_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_4770)));
				}
			else
				{	/* Cfa/collect.scm 369 */
					return BFALSE;
				}
		}

	}



/* &node-collect!-jump-e1743 */
	obj_t BGl_z62nodezd2collectz12zd2jumpzd2e1743za2zzcfa_collectz00(obj_t
		BgL_envz00_4772, obj_t BgL_nodez00_4773, obj_t BgL_ownerz00_4774)
	{
		{	/* Cfa/collect.scm 359 */
			{	/* Cfa/collect.scm 361 */
				BgL_nodez00_bglt BgL_arg1956z00_4855;

				BgL_arg1956z00_4855 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4773)))->BgL_exitz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1956z00_4855,
					((BgL_variablez00_bglt) BgL_ownerz00_4774));
			}
			{	/* Cfa/collect.scm 362 */
				BgL_nodez00_bglt BgL_arg1957z00_4856;

				BgL_arg1957z00_4856 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4773)))->BgL_valuez00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1957z00_4856,
					((BgL_variablez00_bglt) BgL_ownerz00_4774));
			}
		}

	}



/* &node-collect!-set-ex1741 */
	obj_t BGl_z62nodezd2collectz12zd2setzd2ex1741za2zzcfa_collectz00(obj_t
		BgL_envz00_4775, obj_t BgL_nodez00_4776, obj_t BgL_ownerz00_4777)
	{
		{	/* Cfa/collect.scm 352 */
			{	/* Cfa/collect.scm 354 */
				BgL_nodez00_bglt BgL_arg1955z00_4858;

				BgL_arg1955z00_4858 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4776)))->BgL_bodyz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1955z00_4858,
					((BgL_variablez00_bglt) BgL_ownerz00_4777));
			}
		}

	}



/* &node-collect!-let-va1739 */
	obj_t BGl_z62nodezd2collectz12zd2letzd2va1739za2zzcfa_collectz00(obj_t
		BgL_envz00_4778, obj_t BgL_nodez00_4779, obj_t BgL_ownerz00_4780)
	{
		{	/* Cfa/collect.scm 342 */
			{	/* Cfa/collect.scm 344 */
				obj_t BgL_g1699z00_4860;

				BgL_g1699z00_4860 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4779)))->BgL_bindingsz00);
				{
					obj_t BgL_l1697z00_4862;

					BgL_l1697z00_4862 = BgL_g1699z00_4860;
				BgL_zc3z04anonymousza31950ze3z87_4861:
					if (PAIRP(BgL_l1697z00_4862))
						{	/* Cfa/collect.scm 344 */
							{	/* Cfa/collect.scm 345 */
								obj_t BgL_bindingz00_4863;

								BgL_bindingz00_4863 = CAR(BgL_l1697z00_4862);
								{	/* Cfa/collect.scm 345 */
									obj_t BgL_arg1952z00_4864;

									BgL_arg1952z00_4864 = CDR(((obj_t) BgL_bindingz00_4863));
									BGl_nodezd2collectz12zc0zzcfa_collectz00(
										((BgL_nodez00_bglt) BgL_arg1952z00_4864),
										((BgL_variablez00_bglt) BgL_ownerz00_4780));
								}
							}
							{
								obj_t BgL_l1697z00_5206;

								BgL_l1697z00_5206 = CDR(BgL_l1697z00_4862);
								BgL_l1697z00_4862 = BgL_l1697z00_5206;
								goto BgL_zc3z04anonymousza31950ze3z87_4861;
							}
						}
					else
						{	/* Cfa/collect.scm 344 */
							((bool_t) 1);
						}
				}
			}
			{	/* Cfa/collect.scm 347 */
				BgL_nodez00_bglt BgL_arg1954z00_4865;

				BgL_arg1954z00_4865 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4779)))->BgL_bodyz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1954z00_4865,
					((BgL_variablez00_bglt) BgL_ownerz00_4780));
			}
		}

	}



/* &node-collect!-let-fu1737 */
	obj_t BGl_z62nodezd2collectz12zd2letzd2fu1737za2zzcfa_collectz00(obj_t
		BgL_envz00_4781, obj_t BgL_nodez00_4782, obj_t BgL_ownerz00_4783)
	{
		{	/* Cfa/collect.scm 331 */
			{	/* Cfa/collect.scm 333 */
				obj_t BgL_g1696z00_4867;

				BgL_g1696z00_4867 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_4782)))->BgL_localsz00);
				{
					obj_t BgL_l1694z00_4869;

					BgL_l1694z00_4869 = BgL_g1696z00_4867;
				BgL_zc3z04anonymousza31945ze3z87_4868:
					if (PAIRP(BgL_l1694z00_4869))
						{	/* Cfa/collect.scm 333 */
							{	/* Cfa/collect.scm 334 */
								obj_t BgL_lz00_4870;

								BgL_lz00_4870 = CAR(BgL_l1694z00_4869);
								{	/* Cfa/collect.scm 334 */
									BgL_valuez00_bglt BgL_fz00_4871;

									BgL_fz00_4871 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_lz00_4870))))->BgL_valuez00);
									{	/* Cfa/collect.scm 335 */
										obj_t BgL_arg1947z00_4872;

										BgL_arg1947z00_4872 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_4871)))->BgL_bodyz00);
										BGl_nodezd2collectz12zc0zzcfa_collectz00(
											((BgL_nodez00_bglt) BgL_arg1947z00_4872),
											((BgL_variablez00_bglt) BgL_lz00_4870));
									}
								}
							}
							{
								obj_t BgL_l1694z00_5225;

								BgL_l1694z00_5225 = CDR(BgL_l1694z00_4869);
								BgL_l1694z00_4869 = BgL_l1694z00_5225;
								goto BgL_zc3z04anonymousza31945ze3z87_4868;
							}
						}
					else
						{	/* Cfa/collect.scm 333 */
							((bool_t) 1);
						}
				}
			}
			{	/* Cfa/collect.scm 337 */
				BgL_nodez00_bglt BgL_arg1949z00_4873;

				BgL_arg1949z00_4873 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_4782)))->BgL_bodyz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1949z00_4873,
					((BgL_variablez00_bglt) BgL_ownerz00_4783));
			}
		}

	}



/* &node-collect!-switch1735 */
	obj_t BGl_z62nodezd2collectz12zd2switch1735z70zzcfa_collectz00(obj_t
		BgL_envz00_4784, obj_t BgL_nodez00_4785, obj_t BgL_ownerz00_4786)
	{
		{	/* Cfa/collect.scm 321 */
			{	/* Cfa/collect.scm 322 */
				bool_t BgL_tmpz00_5231;

				{	/* Cfa/collect.scm 323 */
					BgL_nodez00_bglt BgL_arg1940z00_4875;

					BgL_arg1940z00_4875 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_4785)))->BgL_testz00);
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1940z00_4875,
						((BgL_variablez00_bglt) BgL_ownerz00_4786));
				}
				{	/* Cfa/collect.scm 324 */
					obj_t BgL_g1693z00_4876;

					BgL_g1693z00_4876 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_4785)))->BgL_clausesz00);
					{
						obj_t BgL_l1691z00_4878;

						BgL_l1691z00_4878 = BgL_g1693z00_4876;
					BgL_zc3z04anonymousza31941ze3z87_4877:
						if (PAIRP(BgL_l1691z00_4878))
							{	/* Cfa/collect.scm 324 */
								{	/* Cfa/collect.scm 325 */
									obj_t BgL_clausez00_4879;

									BgL_clausez00_4879 = CAR(BgL_l1691z00_4878);
									{	/* Cfa/collect.scm 325 */
										obj_t BgL_arg1943z00_4880;

										BgL_arg1943z00_4880 = CDR(((obj_t) BgL_clausez00_4879));
										BGl_nodezd2collectz12zc0zzcfa_collectz00(
											((BgL_nodez00_bglt) BgL_arg1943z00_4880),
											((BgL_variablez00_bglt) BgL_ownerz00_4786));
									}
								}
								{
									obj_t BgL_l1691z00_5246;

									BgL_l1691z00_5246 = CDR(BgL_l1691z00_4878);
									BgL_l1691z00_4878 = BgL_l1691z00_5246;
									goto BgL_zc3z04anonymousza31941ze3z87_4877;
								}
							}
						else
							{	/* Cfa/collect.scm 324 */
								BgL_tmpz00_5231 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_5231);
			}
		}

	}



/* &node-collect!-fail1733 */
	obj_t BGl_z62nodezd2collectz12zd2fail1733z70zzcfa_collectz00(obj_t
		BgL_envz00_4787, obj_t BgL_nodez00_4788, obj_t BgL_ownerz00_4789)
	{
		{	/* Cfa/collect.scm 312 */
			{	/* Cfa/collect.scm 314 */
				BgL_nodez00_bglt BgL_arg1937z00_4882;

				BgL_arg1937z00_4882 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4788)))->BgL_procz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1937z00_4882,
					((BgL_variablez00_bglt) BgL_ownerz00_4789));
			}
			{	/* Cfa/collect.scm 315 */
				BgL_nodez00_bglt BgL_arg1938z00_4883;

				BgL_arg1938z00_4883 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4788)))->BgL_msgz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1938z00_4883,
					((BgL_variablez00_bglt) BgL_ownerz00_4789));
			}
			{	/* Cfa/collect.scm 316 */
				BgL_nodez00_bglt BgL_arg1939z00_4884;

				BgL_arg1939z00_4884 =
					(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_4788)))->BgL_objz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1939z00_4884,
					((BgL_variablez00_bglt) BgL_ownerz00_4789));
			}
		}

	}



/* &node-collect!-condit1731 */
	obj_t BGl_z62nodezd2collectz12zd2condit1731z70zzcfa_collectz00(obj_t
		BgL_envz00_4790, obj_t BgL_nodez00_4791, obj_t BgL_ownerz00_4792)
	{
		{	/* Cfa/collect.scm 303 */
			{	/* Cfa/collect.scm 305 */
				BgL_nodez00_bglt BgL_arg1934z00_4886;

				BgL_arg1934z00_4886 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4791)))->BgL_testz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1934z00_4886,
					((BgL_variablez00_bglt) BgL_ownerz00_4792));
			}
			{	/* Cfa/collect.scm 306 */
				BgL_nodez00_bglt BgL_arg1935z00_4887;

				BgL_arg1935z00_4887 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4791)))->BgL_truez00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1935z00_4887,
					((BgL_variablez00_bglt) BgL_ownerz00_4792));
			}
			{	/* Cfa/collect.scm 307 */
				BgL_nodez00_bglt BgL_arg1936z00_4888;

				BgL_arg1936z00_4888 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_4791)))->BgL_falsez00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1936z00_4888,
					((BgL_variablez00_bglt) BgL_ownerz00_4792));
			}
		}

	}



/* &node-collect!-setq1729 */
	obj_t BGl_z62nodezd2collectz12zd2setq1729z70zzcfa_collectz00(obj_t
		BgL_envz00_4793, obj_t BgL_nodez00_4794, obj_t BgL_ownerz00_4795)
	{
		{	/* Cfa/collect.scm 296 */
			{	/* Cfa/collect.scm 298 */
				BgL_nodez00_bglt BgL_arg1933z00_4890;

				BgL_arg1933z00_4890 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_4794)))->BgL_valuez00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1933z00_4890,
					((BgL_variablez00_bglt) BgL_ownerz00_4795));
			}
		}

	}



/* &node-collect!-cast1727 */
	obj_t BGl_z62nodezd2collectz12zd2cast1727z70zzcfa_collectz00(obj_t
		BgL_envz00_4796, obj_t BgL_nodez00_4797, obj_t BgL_ownerz00_4798)
	{
		{	/* Cfa/collect.scm 289 */
			{	/* Cfa/collect.scm 291 */
				BgL_nodez00_bglt BgL_arg1932z00_4892;

				BgL_arg1932z00_4892 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_4797)))->BgL_argz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1932z00_4892,
					((BgL_variablez00_bglt) BgL_ownerz00_4798));
			}
		}

	}



/* &node-collect!-extern1725 */
	obj_t BGl_z62nodezd2collectz12zd2extern1725z70zzcfa_collectz00(obj_t
		BgL_envz00_4799, obj_t BgL_nodez00_4800, obj_t BgL_ownerz00_4801)
	{
		{	/* Cfa/collect.scm 282 */
			return
				BBOOL(BGl_nodezd2collectza2z12z62zzcfa_collectz00(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_4800)))->BgL_exprza2za2),
					BgL_ownerz00_4801));
		}

	}



/* &node-collect!-funcal1722 */
	obj_t BGl_z62nodezd2collectz12zd2funcal1722z70zzcfa_collectz00(obj_t
		BgL_envz00_4802, obj_t BgL_nodez00_4803, obj_t BgL_ownerz00_4804)
	{
		{	/* Cfa/collect.scm 273 */
			{	/* Cfa/collect.scm 274 */
				bool_t BgL_tmpz00_5285;

				BGl_addzd2funcallz12zc0zzcfa_closurez00(
					((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_4803)));
				{	/* Cfa/collect.scm 276 */
					BgL_nodez00_bglt BgL_arg1929z00_4895;

					BgL_arg1929z00_4895 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_4803)))->BgL_funz00);
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1929z00_4895,
						((BgL_variablez00_bglt) BgL_ownerz00_4804));
				}
				BgL_tmpz00_5285 =
					BGl_nodezd2collectza2z12z62zzcfa_collectz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_4803)))->BgL_argsz00),
					BgL_ownerz00_4804);
				return BBOOL(BgL_tmpz00_5285);
			}
		}

	}



/* &node-collect!-app-ly1720 */
	obj_t BGl_z62nodezd2collectz12zd2appzd2ly1720za2zzcfa_collectz00(obj_t
		BgL_envz00_4805, obj_t BgL_nodez00_4806, obj_t BgL_ownerz00_4807)
	{
		{	/* Cfa/collect.scm 265 */
			{	/* Cfa/collect.scm 267 */
				BgL_nodez00_bglt BgL_arg1927z00_4897;

				BgL_arg1927z00_4897 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_4806)))->BgL_funz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1927z00_4897,
					((BgL_variablez00_bglt) BgL_ownerz00_4807));
			}
			{	/* Cfa/collect.scm 268 */
				BgL_nodez00_bglt BgL_arg1928z00_4898;

				BgL_arg1928z00_4898 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_4806)))->BgL_argz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1928z00_4898,
					((BgL_variablez00_bglt) BgL_ownerz00_4807));
			}
		}

	}



/* &node-collect!-valloc1718 */
	obj_t BGl_z62nodezd2collectz12zd2valloc1718z70zzcfa_collectz00(obj_t
		BgL_envz00_4808, obj_t BgL_nodez00_4809, obj_t BgL_ownerz00_4810)
	{
		{	/* Cfa/collect.scm 255 */
			{	/* Cfa/collect.scm 257 */
				obj_t BgL_arg1924z00_4900;

				BgL_arg1924z00_4900 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_vallocz00_bglt) BgL_nodez00_4809))))->BgL_exprza2za2);
				BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg1924z00_4900,
					BgL_ownerz00_4810);
			}
			if (BGl_vectorzd2optimzf3z21zzcfa_vectorz00())
				{	/* Cfa/collect.scm 258 */
					BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
						MAKE_YOUNG_PAIR(
						((obj_t)
							((BgL_vallocz00_bglt) BgL_nodez00_4809)),
						BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
					{	/* Cfa/collect.scm 260 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_wide1243z00_4901;

						BgL_wide1243z00_4901 =
							((BgL_prezd2valloczf2cinfoz20_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_prezd2valloczf2cinfoz20_bgl))));
						{	/* Cfa/collect.scm 260 */
							obj_t BgL_auxz00_5319;
							BgL_objectz00_bglt BgL_tmpz00_5315;

							BgL_auxz00_5319 = ((obj_t) BgL_wide1243z00_4901);
							BgL_tmpz00_5315 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4809)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5315, BgL_auxz00_5319);
						}
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4809)));
						{	/* Cfa/collect.scm 260 */
							long BgL_arg1926z00_4902;

							{	/* Cfa/collect.scm 260 */
								long BgL_res2237z00_4903;

								BgL_res2237z00_4903 =
									BGL_CLASS_INDEX(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
								BgL_arg1926z00_4902 = BgL_res2237z00_4903;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4809))),
								BgL_arg1926z00_4902);
						}
						((BgL_vallocz00_bglt)
							((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4809)));
					}
					{
						BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_5333;

						{
							obj_t BgL_auxz00_5334;

							{	/* Cfa/collect.scm 260 */
								BgL_objectz00_bglt BgL_tmpz00_5335;

								BgL_tmpz00_5335 =
									((BgL_objectz00_bglt)
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_4809)));
								BgL_auxz00_5334 = BGL_OBJECT_WIDENING(BgL_tmpz00_5335);
							}
							BgL_auxz00_5333 =
								((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_5334);
						}
						((((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_5333))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_ownerz00_4810)), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_4809)));
				}
			else
				{	/* Cfa/collect.scm 258 */
					return BFALSE;
				}
		}

	}



/* &node-collect!-app1716 */
	obj_t BGl_z62nodezd2collectz12zd2app1716z70zzcfa_collectz00(obj_t
		BgL_envz00_4811, obj_t BgL_nodez00_4812, obj_t BgL_ownerz00_4813)
	{
		{	/* Cfa/collect.scm 181 */
			BGl_nodezd2collectza2z12z62zzcfa_collectz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_4812)))->BgL_argsz00),
				BgL_ownerz00_4813);
			{	/* Cfa/collect.scm 184 */
				BgL_varz00_bglt BgL_arg1874z00_4905;

				BgL_arg1874z00_4905 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_4812)))->BgL_funz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(
					((BgL_nodez00_bglt) BgL_arg1874z00_4905),
					((BgL_variablez00_bglt) BgL_ownerz00_4813));
			}
			{	/* Cfa/collect.scm 185 */
				BgL_variablez00_bglt BgL_vz00_4906;

				BgL_vz00_4906 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_4812)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Cfa/collect.scm 186 */
					bool_t BgL_test2314z00_5357;

					{	/* Cfa/collect.scm 186 */
						bool_t BgL_res2202z00_4907;

						BgL_res2202z00_4907 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_vz00_4906), BGl_globalz00zzast_varz00);
						BgL_test2314z00_5357 = BgL_res2202z00_4907;
					}
					if (BgL_test2314z00_5357)
						{	/* Cfa/collect.scm 187 */
							bool_t BgL_test2315z00_5360;

							{	/* Cfa/collect.scm 187 */
								BgL_valuez00_bglt BgL_arg1921z00_4908;

								BgL_arg1921z00_4908 =
									(((BgL_variablez00_bglt) COBJECT(BgL_vz00_4906))->
									BgL_valuez00);
								{	/* Cfa/collect.scm 187 */
									bool_t BgL_res2203z00_4909;

									BgL_res2203z00_4909 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1921z00_4908), BGl_cfunz00zzast_varz00);
									BgL_test2315z00_5360 = BgL_res2203z00_4909;
								}
							}
							if (BgL_test2315z00_5360)
								{	/* Cfa/collect.scm 193 */
									obj_t BgL_casezd2valuezd2_4910;

									BgL_casezd2valuezd2_4910 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_vz00_4906))))->BgL_idz00);
									if ((BgL_casezd2valuezd2_4910 == CNST_TABLE_REF(((long) 1))))
										{	/* Cfa/collect.scm 195 */
											bool_t BgL_test2317z00_5370;

											if (CBOOL
												(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
												{	/* Cfa/collect.scm 195 */
													BgL_test2317z00_5370 = ((bool_t) 1);
												}
											else
												{	/* Cfa/collect.scm 195 */
													BgL_test2317z00_5370 =
														CBOOL
														(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00);
												}
											if (BgL_test2317z00_5370)
												{	/* Cfa/collect.scm 195 */
													{	/* Cfa/collect.scm 197 */
														BgL_prezd2arithmeticzd2appz00_bglt
															BgL_wide1182z00_4911;
														BgL_wide1182z00_4911 =
															((BgL_prezd2arithmeticzd2appz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_prezd2arithmeticzd2appz00_bgl))));
														{	/* Cfa/collect.scm 197 */
															obj_t BgL_auxz00_5379;
															BgL_objectz00_bglt BgL_tmpz00_5375;

															BgL_auxz00_5379 = ((obj_t) BgL_wide1182z00_4911);
															BgL_tmpz00_5375 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_4812)));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5375,
																BgL_auxz00_5379);
														}
														((BgL_objectz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4812)));
														{	/* Cfa/collect.scm 197 */
															long BgL_arg1881z00_4912;

															{	/* Cfa/collect.scm 197 */
																long BgL_res2205z00_4913;

																BgL_res2205z00_4913 =
																	BGL_CLASS_INDEX
																	(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
																BgL_arg1881z00_4912 = BgL_res2205z00_4913;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812))),
																BgL_arg1881z00_4912);
														}
														((BgL_appz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4812)));
													}
													{
														BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_5393;

														{
															obj_t BgL_auxz00_5394;

															{	/* Cfa/collect.scm 198 */
																BgL_objectz00_bglt BgL_tmpz00_5395;

																BgL_tmpz00_5395 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
																BgL_auxz00_5394 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5395);
															}
															BgL_auxz00_5393 =
																((BgL_prezd2arithmeticzd2appz00_bglt)
																BgL_auxz00_5394);
														}
														((((BgL_prezd2arithmeticzd2appz00_bglt)
																	COBJECT(BgL_auxz00_5393))->
																BgL_speczd2typeszd2) =
															((obj_t)
																BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7
																(((BgL_globalz00_bglt) BgL_vz00_4906))),
															BUNSPEC);
													}
													return
														((obj_t)
														((BgL_appz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_4812)));
												}
											else
												{	/* Cfa/collect.scm 195 */
													return BFALSE;
												}
										}
									else
										{	/* Cfa/collect.scm 193 */
											if (
												(BgL_casezd2valuezd2_4910 ==
													CNST_TABLE_REF(((long) 2))))
												{	/* Cfa/collect.scm 193 */
													BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
														MAKE_YOUNG_PAIR(
														((obj_t)
															((BgL_appz00_bglt) BgL_nodez00_4812)),
														BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
													{	/* Cfa/collect.scm 201 */
														BgL_prezd2makezd2procedurezd2appzd2_bglt
															BgL_wide1186z00_4914;
														BgL_wide1186z00_4914 =
															((BgL_prezd2makezd2procedurezd2appzd2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_prezd2makezd2procedurezd2appzd2_bgl))));
														{	/* Cfa/collect.scm 201 */
															obj_t BgL_auxz00_5418;
															BgL_objectz00_bglt BgL_tmpz00_5414;

															BgL_auxz00_5418 = ((obj_t) BgL_wide1186z00_4914);
															BgL_tmpz00_5414 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_4812)));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5414,
																BgL_auxz00_5418);
														}
														((BgL_objectz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4812)));
														{	/* Cfa/collect.scm 201 */
															long BgL_arg1883z00_4915;

															{	/* Cfa/collect.scm 201 */
																long BgL_res2207z00_4916;

																BgL_res2207z00_4916 =
																	BGL_CLASS_INDEX
																	(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
																BgL_arg1883z00_4915 = BgL_res2207z00_4916;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812))),
																BgL_arg1883z00_4915);
														}
														((BgL_appz00_bglt)
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_4812)));
													}
													{
														BgL_prezd2makezd2procedurezd2appzd2_bglt
															BgL_auxz00_5432;
														{
															obj_t BgL_auxz00_5433;

															{	/* Cfa/collect.scm 201 */
																BgL_objectz00_bglt BgL_tmpz00_5434;

																BgL_tmpz00_5434 =
																	((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
																BgL_auxz00_5433 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5434);
															}
															BgL_auxz00_5432 =
																((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																BgL_auxz00_5433);
														}
														((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																	COBJECT(BgL_auxz00_5432))->BgL_ownerz00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_ownerz00_4813)), BUNSPEC);
													}
													return
														((obj_t)
														((BgL_appz00_bglt)
															((BgL_appz00_bglt) BgL_nodez00_4812)));
												}
											else
												{	/* Cfa/collect.scm 193 */
													if (
														(BgL_casezd2valuezd2_4910 ==
															CNST_TABLE_REF(((long) 3))))
														{	/* Cfa/collect.scm 193 */
															BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
																MAKE_YOUNG_PAIR(
																((obj_t)
																	((BgL_appz00_bglt) BgL_nodez00_4812)),
																BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
															{	/* Cfa/collect.scm 204 */
																BgL_prezd2makezd2procedurezd2appzd2_bglt
																	BgL_wide1190z00_4917;
																BgL_wide1190z00_4917 =
																	((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_prezd2makezd2procedurezd2appzd2_bgl))));
																{	/* Cfa/collect.scm 204 */
																	obj_t BgL_auxz00_5456;
																	BgL_objectz00_bglt BgL_tmpz00_5452;

																	BgL_auxz00_5456 =
																		((obj_t) BgL_wide1190z00_4917);
																	BgL_tmpz00_5452 =
																		((BgL_objectz00_bglt)
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt) BgL_nodez00_4812)));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5452,
																		BgL_auxz00_5456);
																}
																((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
																{	/* Cfa/collect.scm 204 */
																	long BgL_arg1885z00_4918;

																	{	/* Cfa/collect.scm 204 */
																		long BgL_res2209z00_4919;

																		BgL_res2209z00_4919 =
																			BGL_CLASS_INDEX
																			(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
																		BgL_arg1885z00_4918 = BgL_res2209z00_4919;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812))),
																		BgL_arg1885z00_4918);
																}
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
															}
															{
																BgL_prezd2makezd2procedurezd2appzd2_bglt
																	BgL_auxz00_5470;
																{
																	obj_t BgL_auxz00_5471;

																	{	/* Cfa/collect.scm 204 */
																		BgL_objectz00_bglt BgL_tmpz00_5472;

																		BgL_tmpz00_5472 =
																			((BgL_objectz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812)));
																		BgL_auxz00_5471 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5472);
																	}
																	BgL_auxz00_5470 =
																		((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																		BgL_auxz00_5471);
																}
																((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
																			COBJECT(BgL_auxz00_5470))->BgL_ownerz00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt)
																			BgL_ownerz00_4813)), BUNSPEC);
															}
															return
																((obj_t)
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_4812)));
														}
													else
														{	/* Cfa/collect.scm 193 */
															if (
																(BgL_casezd2valuezd2_4910 ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Cfa/collect.scm 193 */
																	{	/* Cfa/collect.scm 206 */
																		BgL_prezd2procedurezd2refzd2appzd2_bglt
																			BgL_wide1194z00_4920;
																		BgL_wide1194z00_4920 =
																			((BgL_prezd2procedurezd2refzd2appzd2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_prezd2procedurezd2refzd2appzd2_bgl))));
																		{	/* Cfa/collect.scm 206 */
																			obj_t BgL_auxz00_5491;
																			BgL_objectz00_bglt BgL_tmpz00_5487;

																			BgL_auxz00_5491 =
																				((obj_t) BgL_wide1194z00_4920);
																			BgL_tmpz00_5487 =
																				((BgL_objectz00_bglt)
																				((BgL_appz00_bglt)
																					((BgL_appz00_bglt)
																						BgL_nodez00_4812)));
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5487,
																				BgL_auxz00_5491);
																		}
																		((BgL_objectz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812)));
																		{	/* Cfa/collect.scm 206 */
																			long BgL_arg1887z00_4921;

																			{	/* Cfa/collect.scm 206 */
																				long BgL_res2211z00_4922;

																				BgL_res2211z00_4922 =
																					BGL_CLASS_INDEX
																					(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
																				BgL_arg1887z00_4921 =
																					BgL_res2211z00_4922;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_nodez00_4812))),
																				BgL_arg1887z00_4921);
																		}
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812)));
																	}
																	return
																		((obj_t)
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt) BgL_nodez00_4812)));
																}
															else
																{	/* Cfa/collect.scm 193 */
																	if (
																		(BgL_casezd2valuezd2_4910 ==
																			CNST_TABLE_REF(((long) 5))))
																		{	/* Cfa/collect.scm 193 */
																			{	/* Cfa/collect.scm 208 */
																				BgL_prezd2procedurezd2setz12zd2appzc0_bglt
																					BgL_wide1198z00_4923;
																				BgL_wide1198z00_4923 =
																					(
																					(BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_prezd2procedurezd2setz12zd2appzc0_bgl))));
																				{	/* Cfa/collect.scm 208 */
																					obj_t BgL_auxz00_5516;
																					BgL_objectz00_bglt BgL_tmpz00_5512;

																					BgL_auxz00_5516 =
																						((obj_t) BgL_wide1198z00_4923);
																					BgL_tmpz00_5512 =
																						((BgL_objectz00_bglt)
																						((BgL_appz00_bglt)
																							((BgL_appz00_bglt)
																								BgL_nodez00_4812)));
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_5512, BgL_auxz00_5516);
																				}
																				((BgL_objectz00_bglt)
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_nodez00_4812)));
																				{	/* Cfa/collect.scm 208 */
																					long BgL_arg1889z00_4924;

																					{	/* Cfa/collect.scm 208 */
																						long BgL_res2213z00_4925;

																						BgL_res2213z00_4925 =
																							BGL_CLASS_INDEX
																							(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
																						BgL_arg1889z00_4924 =
																							BgL_res2213z00_4925;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							((BgL_appz00_bglt)
																								((BgL_appz00_bglt)
																									BgL_nodez00_4812))),
																						BgL_arg1889z00_4924);
																				}
																				((BgL_appz00_bglt)
																					((BgL_appz00_bglt)
																						((BgL_appz00_bglt)
																							BgL_nodez00_4812)));
																			}
																			return
																				((obj_t)
																				((BgL_appz00_bglt)
																					((BgL_appz00_bglt)
																						BgL_nodez00_4812)));
																		}
																	else
																		{	/* Cfa/collect.scm 193 */
																			if (
																				(BgL_casezd2valuezd2_4910 ==
																					CNST_TABLE_REF(((long) 6))))
																				{	/* Cfa/collect.scm 193 */
																					if (BGl_vectorzd2optimzf3z21zzcfa_vectorz00())
																						{	/* Cfa/collect.scm 210 */
																							BGl_za2usedzd2allocza2zd2zzcfa_collectz00
																								=
																								MAKE_YOUNG_PAIR(((obj_t) (
																										(BgL_appz00_bglt)
																										BgL_nodez00_4812)),
																								BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
																							{	/* Cfa/collect.scm 212 */
																								BgL_prezd2makezd2vectorzd2appzd2_bglt
																									BgL_wide1202z00_4926;
																								BgL_wide1202z00_4926 =
																									(
																									(BgL_prezd2makezd2vectorzd2appzd2_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_prezd2makezd2vectorzd2appzd2_bgl))));
																								{	/* Cfa/collect.scm 212 */
																									obj_t BgL_auxz00_5546;
																									BgL_objectz00_bglt
																										BgL_tmpz00_5542;
																									BgL_auxz00_5546 =
																										((obj_t)
																										BgL_wide1202z00_4926);
																									BgL_tmpz00_5542 =
																										((BgL_objectz00_bglt) (
																											(BgL_appz00_bglt) (
																												(BgL_appz00_bglt)
																												BgL_nodez00_4812)));
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_5542,
																										BgL_auxz00_5546);
																								}
																								((BgL_objectz00_bglt)
																									((BgL_appz00_bglt)
																										((BgL_appz00_bglt)
																											BgL_nodez00_4812)));
																								{	/* Cfa/collect.scm 212 */
																									long BgL_arg1892z00_4927;

																									{	/* Cfa/collect.scm 212 */
																										long BgL_res2215z00_4928;

																										BgL_res2215z00_4928 =
																											BGL_CLASS_INDEX
																											(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
																										BgL_arg1892z00_4927 =
																											BgL_res2215z00_4928;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											((BgL_appz00_bglt)
																												((BgL_appz00_bglt)
																													BgL_nodez00_4812))),
																										BgL_arg1892z00_4927);
																								}
																								((BgL_appz00_bglt)
																									((BgL_appz00_bglt)
																										((BgL_appz00_bglt)
																											BgL_nodez00_4812)));
																							}
																							{
																								BgL_prezd2makezd2vectorzd2appzd2_bglt
																									BgL_auxz00_5560;
																								{
																									obj_t BgL_auxz00_5561;

																									{	/* Cfa/collect.scm 212 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_5562;
																										BgL_tmpz00_5562 =
																											((BgL_objectz00_bglt) (
																												(BgL_appz00_bglt) (
																													(BgL_appz00_bglt)
																													BgL_nodez00_4812)));
																										BgL_auxz00_5561 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_5562);
																									}
																									BgL_auxz00_5560 =
																										(
																										(BgL_prezd2makezd2vectorzd2appzd2_bglt)
																										BgL_auxz00_5561);
																								}
																								((((BgL_prezd2makezd2vectorzd2appzd2_bglt) COBJECT(BgL_auxz00_5560))->BgL_ownerz00) = ((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_ownerz00_4813)), BUNSPEC);
																							}
																							return
																								((obj_t)
																								((BgL_appz00_bglt)
																									((BgL_appz00_bglt)
																										BgL_nodez00_4812)));
																						}
																					else
																						{	/* Cfa/collect.scm 210 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Cfa/collect.scm 193 */
																					if (
																						(BgL_casezd2valuezd2_4910 ==
																							CNST_TABLE_REF(((long) 7))))
																						{	/* Cfa/collect.scm 193 */
																							if (
																								((long)
																									CINT
																									(BGl_za2optimza2z00zzengine_paramz00)
																									>= ((long) 2)))
																								{	/* Cfa/collect.scm 214 */
																									BGl_za2usedzd2allocza2zd2zzcfa_collectz00
																										=
																										MAKE_YOUNG_PAIR(((obj_t) (
																												(BgL_appz00_bglt)
																												BgL_nodez00_4812)),
																										BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
																									{	/* Cfa/collect.scm 216 */
																										BgL_prezd2makezd2structzd2appzd2_bglt
																											BgL_wide1206z00_4929;
																										BgL_wide1206z00_4929 =
																											(
																											(BgL_prezd2makezd2structzd2appzd2_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_prezd2makezd2structzd2appzd2_bgl))));
																										{	/* Cfa/collect.scm 216 */
																											obj_t BgL_auxz00_5587;
																											BgL_objectz00_bglt
																												BgL_tmpz00_5583;
																											BgL_auxz00_5587 =
																												((obj_t)
																												BgL_wide1206z00_4929);
																											BgL_tmpz00_5583 =
																												((BgL_objectz00_bglt) (
																													(BgL_appz00_bglt) (
																														(BgL_appz00_bglt)
																														BgL_nodez00_4812)));
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_5583,
																												BgL_auxz00_5587);
																										}
																										((BgL_objectz00_bglt)
																											((BgL_appz00_bglt)
																												((BgL_appz00_bglt)
																													BgL_nodez00_4812)));
																										{	/* Cfa/collect.scm 216 */
																											long BgL_arg1895z00_4930;

																											{	/* Cfa/collect.scm 216 */
																												long
																													BgL_res2218z00_4931;
																												BgL_res2218z00_4931 =
																													BGL_CLASS_INDEX
																													(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
																												BgL_arg1895z00_4930 =
																													BgL_res2218z00_4931;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													((BgL_appz00_bglt)
																														((BgL_appz00_bglt)
																															BgL_nodez00_4812))),
																												BgL_arg1895z00_4930);
																										}
																										((BgL_appz00_bglt)
																											((BgL_appz00_bglt)
																												((BgL_appz00_bglt)
																													BgL_nodez00_4812)));
																									}
																									{
																										BgL_prezd2makezd2structzd2appzd2_bglt
																											BgL_auxz00_5601;
																										{
																											obj_t BgL_auxz00_5602;

																											{	/* Cfa/collect.scm 216 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_5603;
																												BgL_tmpz00_5603 =
																													((BgL_objectz00_bglt)
																													((BgL_appz00_bglt) (
																															(BgL_appz00_bglt)
																															BgL_nodez00_4812)));
																												BgL_auxz00_5602 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_5603);
																											}
																											BgL_auxz00_5601 =
																												(
																												(BgL_prezd2makezd2structzd2appzd2_bglt)
																												BgL_auxz00_5602);
																										}
																										((((BgL_prezd2makezd2structzd2appzd2_bglt) COBJECT(BgL_auxz00_5601))->BgL_ownerz00) = ((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_ownerz00_4813)), BUNSPEC);
																									}
																									return
																										((obj_t)
																										((BgL_appz00_bglt)
																											((BgL_appz00_bglt)
																												BgL_nodez00_4812)));
																								}
																							else
																								{	/* Cfa/collect.scm 214 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Cfa/collect.scm 193 */
																							if (
																								(BgL_casezd2valuezd2_4910 ==
																									CNST_TABLE_REF(((long) 8))))
																								{	/* Cfa/collect.scm 193 */
																									if (
																										((long)
																											CINT
																											(BGl_za2optimza2z00zzengine_paramz00)
																											>= ((long) 2)))
																										{	/* Cfa/collect.scm 218 */
																											{	/* Cfa/collect.scm 219 */
																												BgL_prezd2structzd2refzd2appzd2_bglt
																													BgL_wide1210z00_4932;
																												BgL_wide1210z00_4932 =
																													(
																													(BgL_prezd2structzd2refzd2appzd2_bglt)
																													BOBJECT(GC_MALLOC
																														(sizeof(struct
																																BgL_prezd2structzd2refzd2appzd2_bgl))));
																												{	/* Cfa/collect.scm 219 */
																													obj_t BgL_auxz00_5625;
																													BgL_objectz00_bglt
																														BgL_tmpz00_5621;
																													BgL_auxz00_5625 =
																														((obj_t)
																														BgL_wide1210z00_4932);
																													BgL_tmpz00_5621 =
																														(
																														(BgL_objectz00_bglt)
																														((BgL_appz00_bglt) (
																																(BgL_appz00_bglt)
																																BgL_nodez00_4812)));
																													BGL_OBJECT_WIDENING_SET
																														(BgL_tmpz00_5621,
																														BgL_auxz00_5625);
																												}
																												((BgL_objectz00_bglt)
																													((BgL_appz00_bglt)
																														((BgL_appz00_bglt)
																															BgL_nodez00_4812)));
																												{	/* Cfa/collect.scm 219 */
																													long
																														BgL_arg1898z00_4933;
																													{	/* Cfa/collect.scm 219 */
																														long
																															BgL_res2221z00_4934;
																														BgL_res2221z00_4934
																															=
																															BGL_CLASS_INDEX
																															(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
																														BgL_arg1898z00_4933
																															=
																															BgL_res2221z00_4934;
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1898z00_4933);
																												}
																												((BgL_appz00_bglt)
																													((BgL_appz00_bglt)
																														((BgL_appz00_bglt)
																															BgL_nodez00_4812)));
																											}
																											return
																												((obj_t)
																												((BgL_appz00_bglt)
																													((BgL_appz00_bglt)
																														BgL_nodez00_4812)));
																										}
																									else
																										{	/* Cfa/collect.scm 218 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Cfa/collect.scm 193 */
																									if (
																										(BgL_casezd2valuezd2_4910 ==
																											CNST_TABLE_REF(((long)
																													9))))
																										{	/* Cfa/collect.scm 193 */
																											if (
																												((long)
																													CINT
																													(BGl_za2optimza2z00zzengine_paramz00)
																													>= ((long) 2)))
																												{	/* Cfa/collect.scm 221 */
																													{	/* Cfa/collect.scm 222 */
																														BgL_prezd2structzd2setz12zd2appzc0_bglt
																															BgL_wide1214z00_4935;
																														BgL_wide1214z00_4935
																															=
																															(
																															(BgL_prezd2structzd2setz12zd2appzc0_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_prezd2structzd2setz12zd2appzc0_bgl))));
																														{	/* Cfa/collect.scm 222 */
																															obj_t
																																BgL_auxz00_5653;
																															BgL_objectz00_bglt
																																BgL_tmpz00_5649;
																															BgL_auxz00_5653 =
																																((obj_t)
																																BgL_wide1214z00_4935);
																															BgL_tmpz00_5649 =
																																(
																																(BgL_objectz00_bglt)
																																((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																															BGL_OBJECT_WIDENING_SET
																																(BgL_tmpz00_5649,
																																BgL_auxz00_5653);
																														}
																														((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																														{	/* Cfa/collect.scm 222 */
																															long
																																BgL_arg1901z00_4936;
																															{	/* Cfa/collect.scm 222 */
																																long
																																	BgL_res2224z00_4937;
																																BgL_res2224z00_4937
																																	=
																																	BGL_CLASS_INDEX
																																	(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
																																BgL_arg1901z00_4936
																																	=
																																	BgL_res2224z00_4937;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1901z00_4936);
																														}
																														((BgL_appz00_bglt)
																															((BgL_appz00_bglt)
																																((BgL_appz00_bglt) BgL_nodez00_4812)));
																													}
																													return
																														((obj_t)
																														((BgL_appz00_bglt)
																															((BgL_appz00_bglt)
																																BgL_nodez00_4812)));
																												}
																											else
																												{	/* Cfa/collect.scm 221 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Cfa/collect.scm 193 */
																											if (
																												(BgL_casezd2valuezd2_4910
																													==
																													CNST_TABLE_REF(((long)
																															10))))
																												{	/* Cfa/collect.scm 193 */
																													if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
																														{	/* Cfa/collect.scm 224 */
																															BGl_za2usedzd2allocza2zd2zzcfa_collectz00
																																=
																																MAKE_YOUNG_PAIR(
																																((obj_t) (
																																		(BgL_appz00_bglt)
																																		BgL_nodez00_4812)),
																																BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
																															{	/* Cfa/collect.scm 226 */
																																BgL_prezd2conszd2appz00_bglt
																																	BgL_wide1218z00_4938;
																																BgL_wide1218z00_4938
																																	=
																																	(
																																	(BgL_prezd2conszd2appz00_bglt)
																																	BOBJECT
																																	(GC_MALLOC
																																		(sizeof
																																			(struct
																																				BgL_prezd2conszd2appz00_bgl))));
																																{	/* Cfa/collect.scm 226 */
																																	obj_t
																																		BgL_auxz00_5683;
																																	BgL_objectz00_bglt
																																		BgL_tmpz00_5679;
																																	BgL_auxz00_5683
																																		=
																																		((obj_t)
																																		BgL_wide1218z00_4938);
																																	BgL_tmpz00_5679
																																		=
																																		(
																																		(BgL_objectz00_bglt)
																																		((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																	BGL_OBJECT_WIDENING_SET
																																		(BgL_tmpz00_5679,
																																		BgL_auxz00_5683);
																																}
																																((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																{	/* Cfa/collect.scm 226 */
																																	long
																																		BgL_arg1904z00_4939;
																																	{	/* Cfa/collect.scm 226 */
																																		long
																																			BgL_res2226z00_4940;
																																		BgL_res2226z00_4940
																																			=
																																			BGL_CLASS_INDEX
																																			(BGl_prezd2conszd2appz00zzcfa_info2z00);
																																		BgL_arg1904z00_4939
																																			=
																																			BgL_res2226z00_4940;
																																	}
																																	BGL_OBJECT_CLASS_NUM_SET
																																		(((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1904z00_4939);
																																}
																																((BgL_appz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																															}
																															{
																																BgL_prezd2conszd2appz00_bglt
																																	BgL_auxz00_5697;
																																{
																																	obj_t
																																		BgL_auxz00_5698;
																																	{	/* Cfa/collect.scm 226 */
																																		BgL_objectz00_bglt
																																			BgL_tmpz00_5699;
																																		BgL_tmpz00_5699
																																			=
																																			(
																																			(BgL_objectz00_bglt)
																																			((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																		BgL_auxz00_5698
																																			=
																																			BGL_OBJECT_WIDENING
																																			(BgL_tmpz00_5699);
																																	}
																																	BgL_auxz00_5697
																																		=
																																		(
																																		(BgL_prezd2conszd2appz00_bglt)
																																		BgL_auxz00_5698);
																																}
																																((((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_5697))->BgL_ownerz00) = ((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_ownerz00_4813)), BUNSPEC);
																															}
																															return
																																((obj_t)
																																((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																														}
																													else
																														{	/* Cfa/collect.scm 224 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Cfa/collect.scm 193 */
																													if (
																														(BgL_casezd2valuezd2_4910
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Cfa/collect.scm 193 */
																															if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
																																{	/* Cfa/collect.scm 228 */
																																	{	/* Cfa/collect.scm 229 */
																																		BgL_prezd2conszd2refzd2appzd2_bglt
																																			BgL_wide1222z00_4941;
																																		BgL_wide1222z00_4941
																																			=
																																			(
																																			(BgL_prezd2conszd2refzd2appzd2_bglt)
																																			BOBJECT
																																			(GC_MALLOC
																																				(sizeof
																																					(struct
																																						BgL_prezd2conszd2refzd2appzd2_bgl))));
																																		{	/* Cfa/collect.scm 229 */
																																			obj_t
																																				BgL_auxz00_5720;
																																			BgL_objectz00_bglt
																																				BgL_tmpz00_5716;
																																			BgL_auxz00_5720
																																				=
																																				((obj_t)
																																				BgL_wide1222z00_4941);
																																			BgL_tmpz00_5716
																																				=
																																				(
																																				(BgL_objectz00_bglt)
																																				((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																			BGL_OBJECT_WIDENING_SET
																																				(BgL_tmpz00_5716,
																																				BgL_auxz00_5720);
																																		}
																																		((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																		{	/* Cfa/collect.scm 229 */
																																			long
																																				BgL_arg1907z00_4942;
																																			{	/* Cfa/collect.scm 229 */
																																				long
																																					BgL_res2228z00_4943;
																																				BgL_res2228z00_4943
																																					=
																																					BGL_CLASS_INDEX
																																					(BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
																																				BgL_arg1907z00_4942
																																					=
																																					BgL_res2228z00_4943;
																																			}
																																			BGL_OBJECT_CLASS_NUM_SET
																																				(((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1907z00_4942);
																																		}
																																		((BgL_appz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																	}
																																	{
																																		BgL_prezd2conszd2refzd2appzd2_bglt
																																			BgL_auxz00_5734;
																																		{
																																			obj_t
																																				BgL_auxz00_5735;
																																			{	/* Cfa/collect.scm 230 */
																																				BgL_objectz00_bglt
																																					BgL_tmpz00_5736;
																																				BgL_tmpz00_5736
																																					=
																																					(
																																					(BgL_objectz00_bglt)
																																					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																				BgL_auxz00_5735
																																					=
																																					BGL_OBJECT_WIDENING
																																					(BgL_tmpz00_5736);
																																			}
																																			BgL_auxz00_5734
																																				=
																																				(
																																				(BgL_prezd2conszd2refzd2appzd2_bglt)
																																				BgL_auxz00_5735);
																																		}
																																		((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_5734))->BgL_getz00) = ((obj_t) BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
																																	}
																																	return
																																		((obj_t)
																																		((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																}
																															else
																																{	/* Cfa/collect.scm 228 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Cfa/collect.scm 193 */
																															if (
																																(BgL_casezd2valuezd2_4910
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			12))))
																																{	/* Cfa/collect.scm 193 */
																																	if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
																																		{	/* Cfa/collect.scm 232 */
																																			{	/* Cfa/collect.scm 233 */
																																				BgL_prezd2conszd2refzd2appzd2_bglt
																																					BgL_wide1226z00_4944;
																																				BgL_wide1226z00_4944
																																					=
																																					(
																																					(BgL_prezd2conszd2refzd2appzd2_bglt)
																																					BOBJECT
																																					(GC_MALLOC
																																						(sizeof
																																							(struct
																																								BgL_prezd2conszd2refzd2appzd2_bgl))));
																																				{	/* Cfa/collect.scm 233 */
																																					obj_t
																																						BgL_auxz00_5756;
																																					BgL_objectz00_bglt
																																						BgL_tmpz00_5752;
																																					BgL_auxz00_5756
																																						=
																																						(
																																						(obj_t)
																																						BgL_wide1226z00_4944);
																																					BgL_tmpz00_5752
																																						=
																																						(
																																						(BgL_objectz00_bglt)
																																						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																					BGL_OBJECT_WIDENING_SET
																																						(BgL_tmpz00_5752,
																																						BgL_auxz00_5756);
																																				}
																																				((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																				{	/* Cfa/collect.scm 233 */
																																					long
																																						BgL_arg1910z00_4945;
																																					{	/* Cfa/collect.scm 233 */
																																						long
																																							BgL_res2230z00_4946;
																																						BgL_res2230z00_4946
																																							=
																																							BGL_CLASS_INDEX
																																							(BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
																																						BgL_arg1910z00_4945
																																							=
																																							BgL_res2230z00_4946;
																																					}
																																					BGL_OBJECT_CLASS_NUM_SET
																																						(((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1910z00_4945);
																																				}
																																				((BgL_appz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																			}
																																			{
																																				BgL_prezd2conszd2refzd2appzd2_bglt
																																					BgL_auxz00_5770;
																																				{
																																					obj_t
																																						BgL_auxz00_5771;
																																					{	/* Cfa/collect.scm 234 */
																																						BgL_objectz00_bglt
																																							BgL_tmpz00_5772;
																																						BgL_tmpz00_5772
																																							=
																																							(
																																							(BgL_objectz00_bglt)
																																							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																						BgL_auxz00_5771
																																							=
																																							BGL_OBJECT_WIDENING
																																							(BgL_tmpz00_5772);
																																					}
																																					BgL_auxz00_5770
																																						=
																																						(
																																						(BgL_prezd2conszd2refzd2appzd2_bglt)
																																						BgL_auxz00_5771);
																																				}
																																				((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_5770))->BgL_getz00) = ((obj_t) BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
																																			}
																																			return
																																				((obj_t)
																																				((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																		}
																																	else
																																		{	/* Cfa/collect.scm 232 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Cfa/collect.scm 193 */
																																	if (
																																		(BgL_casezd2valuezd2_4910
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					13))))
																																		{	/* Cfa/collect.scm 193 */
																																			if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
																																				{	/* Cfa/collect.scm 236 */
																																					{	/* Cfa/collect.scm 237 */
																																						BgL_prezd2conszd2setz12zd2appzc0_bglt
																																							BgL_wide1230z00_4947;
																																						BgL_wide1230z00_4947
																																							=
																																							(
																																							(BgL_prezd2conszd2setz12zd2appzc0_bglt)
																																							BOBJECT
																																							(GC_MALLOC
																																								(sizeof
																																									(struct
																																										BgL_prezd2conszd2setz12zd2appzc0_bgl))));
																																						{	/* Cfa/collect.scm 237 */
																																							obj_t
																																								BgL_auxz00_5792;
																																							BgL_objectz00_bglt
																																								BgL_tmpz00_5788;
																																							BgL_auxz00_5792
																																								=
																																								(
																																								(obj_t)
																																								BgL_wide1230z00_4947);
																																							BgL_tmpz00_5788
																																								=
																																								(
																																								(BgL_objectz00_bglt)
																																								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																							BGL_OBJECT_WIDENING_SET
																																								(BgL_tmpz00_5788,
																																								BgL_auxz00_5792);
																																						}
																																						((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																						{	/* Cfa/collect.scm 237 */
																																							long
																																								BgL_arg1913z00_4948;
																																							{	/* Cfa/collect.scm 237 */
																																								long
																																									BgL_res2232z00_4949;
																																								BgL_res2232z00_4949
																																									=
																																									BGL_CLASS_INDEX
																																									(BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
																																								BgL_arg1913z00_4948
																																									=
																																									BgL_res2232z00_4949;
																																							}
																																							BGL_OBJECT_CLASS_NUM_SET
																																								(
																																								((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1913z00_4948);
																																						}
																																						((BgL_appz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																					}
																																					{
																																						BgL_prezd2conszd2setz12zd2appzc0_bglt
																																							BgL_auxz00_5806;
																																						{
																																							obj_t
																																								BgL_auxz00_5807;
																																							{	/* Cfa/collect.scm 238 */
																																								BgL_objectz00_bglt
																																									BgL_tmpz00_5808;
																																								BgL_tmpz00_5808
																																									=
																																									(
																																									(BgL_objectz00_bglt)
																																									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																								BgL_auxz00_5807
																																									=
																																									BGL_OBJECT_WIDENING
																																									(BgL_tmpz00_5808);
																																							}
																																							BgL_auxz00_5806
																																								=
																																								(
																																								(BgL_prezd2conszd2setz12zd2appzc0_bglt)
																																								BgL_auxz00_5807);
																																						}
																																						((((BgL_prezd2conszd2setz12zd2appzc0_bglt) COBJECT(BgL_auxz00_5806))->BgL_getz00) = ((obj_t) BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
																																					}
																																					return
																																						(
																																						(obj_t)
																																						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																				}
																																			else
																																				{	/* Cfa/collect.scm 236 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Cfa/collect.scm 193 */
																																			if (
																																				(BgL_casezd2valuezd2_4910
																																					==
																																					CNST_TABLE_REF
																																					(((long) 14))))
																																				{	/* Cfa/collect.scm 193 */
																																					if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
																																						{	/* Cfa/collect.scm 240 */
																																							{	/* Cfa/collect.scm 241 */
																																								BgL_prezd2conszd2setz12zd2appzc0_bglt
																																									BgL_wide1234z00_4950;
																																								BgL_wide1234z00_4950
																																									=
																																									(
																																									(BgL_prezd2conszd2setz12zd2appzc0_bglt)
																																									BOBJECT
																																									(GC_MALLOC
																																										(sizeof
																																											(struct
																																												BgL_prezd2conszd2setz12zd2appzc0_bgl))));
																																								{	/* Cfa/collect.scm 241 */
																																									obj_t
																																										BgL_auxz00_5828;
																																									BgL_objectz00_bglt
																																										BgL_tmpz00_5824;
																																									BgL_auxz00_5828
																																										=
																																										(
																																										(obj_t)
																																										BgL_wide1234z00_4950);
																																									BgL_tmpz00_5824
																																										=
																																										(
																																										(BgL_objectz00_bglt)
																																										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																									BGL_OBJECT_WIDENING_SET
																																										(BgL_tmpz00_5824,
																																										BgL_auxz00_5828);
																																								}
																																								((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																								{	/* Cfa/collect.scm 241 */
																																									long
																																										BgL_arg1916z00_4951;
																																									{	/* Cfa/collect.scm 241 */
																																										long
																																											BgL_res2234z00_4952;
																																										BgL_res2234z00_4952
																																											=
																																											BGL_CLASS_INDEX
																																											(BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
																																										BgL_arg1916z00_4951
																																											=
																																											BgL_res2234z00_4952;
																																									}
																																									BGL_OBJECT_CLASS_NUM_SET
																																										(
																																										((BgL_objectz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812))), BgL_arg1916z00_4951);
																																								}
																																								((BgL_appz00_bglt) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																							}
																																							{
																																								BgL_prezd2conszd2setz12zd2appzc0_bglt
																																									BgL_auxz00_5842;
																																								{
																																									obj_t
																																										BgL_auxz00_5843;
																																									{	/* Cfa/collect.scm 242 */
																																										BgL_objectz00_bglt
																																											BgL_tmpz00_5844;
																																										BgL_tmpz00_5844
																																											=
																																											(
																																											(BgL_objectz00_bglt)
																																											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																										BgL_auxz00_5843
																																											=
																																											BGL_OBJECT_WIDENING
																																											(BgL_tmpz00_5844);
																																									}
																																									BgL_auxz00_5842
																																										=
																																										(
																																										(BgL_prezd2conszd2setz12zd2appzc0_bglt)
																																										BgL_auxz00_5843);
																																								}
																																								((((BgL_prezd2conszd2setz12zd2appzc0_bglt) COBJECT(BgL_auxz00_5842))->BgL_getz00) = ((obj_t) BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
																																							}
																																							return
																																								(
																																								(obj_t)
																																								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_4812)));
																																						}
																																					else
																																						{	/* Cfa/collect.scm 240 */
																																							return
																																								BFALSE;
																																						}
																																				}
																																			else
																																				{	/* Cfa/collect.scm 193 */
																																					return
																																						BUNSPEC;
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
												}
										}
								}
							else
								{	/* Cfa/collect.scm 244 */
									bool_t BgL_test2341z00_5854;

									if (CBOOL
										(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
										{	/* Cfa/collect.scm 244 */
											BgL_test2341z00_5854 = ((bool_t) 1);
										}
									else
										{	/* Cfa/collect.scm 244 */
											BgL_test2341z00_5854 =
												CBOOL
												(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00);
										}
									if (BgL_test2341z00_5854)
										{	/* Cfa/collect.scm 244 */
											if (CBOOL
												(BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7((
															(BgL_globalz00_bglt) BgL_vz00_4906))))
												{	/* Cfa/collect.scm 247 */
													obj_t BgL_typesz00_4953;

													BgL_typesz00_4953 =
														BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7
														(((BgL_globalz00_bglt) BgL_vz00_4906));
													if (PAIRP(BgL_typesz00_4953))
														{	/* Cfa/collect.scm 248 */
															{	/* Cfa/collect.scm 249 */
																BgL_prezd2arithmeticzd2appz00_bglt
																	BgL_wide1238z00_4954;
																BgL_wide1238z00_4954 =
																	((BgL_prezd2arithmeticzd2appz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_prezd2arithmeticzd2appz00_bgl))));
																{	/* Cfa/collect.scm 249 */
																	obj_t BgL_auxz00_5871;
																	BgL_objectz00_bglt BgL_tmpz00_5867;

																	BgL_auxz00_5871 =
																		((obj_t) BgL_wide1238z00_4954);
																	BgL_tmpz00_5867 =
																		((BgL_objectz00_bglt)
																		((BgL_appz00_bglt)
																			((BgL_appz00_bglt) BgL_nodez00_4812)));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5867,
																		BgL_auxz00_5871);
																}
																((BgL_objectz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
																{	/* Cfa/collect.scm 249 */
																	long BgL_arg1920z00_4955;

																	{	/* Cfa/collect.scm 249 */
																		long BgL_res2236z00_4956;

																		BgL_res2236z00_4956 =
																			BGL_CLASS_INDEX
																			(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
																		BgL_arg1920z00_4955 = BgL_res2236z00_4956;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812))),
																		BgL_arg1920z00_4955);
																}
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_4812)));
															}
															{
																BgL_prezd2arithmeticzd2appz00_bglt
																	BgL_auxz00_5885;
																{
																	obj_t BgL_auxz00_5886;

																	{	/* Cfa/collect.scm 250 */
																		BgL_objectz00_bglt BgL_tmpz00_5887;

																		BgL_tmpz00_5887 =
																			((BgL_objectz00_bglt)
																			((BgL_appz00_bglt)
																				((BgL_appz00_bglt) BgL_nodez00_4812)));
																		BgL_auxz00_5886 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5887);
																	}
																	BgL_auxz00_5885 =
																		((BgL_prezd2arithmeticzd2appz00_bglt)
																		BgL_auxz00_5886);
																}
																((((BgL_prezd2arithmeticzd2appz00_bglt)
																			COBJECT(BgL_auxz00_5885))->
																		BgL_speczd2typeszd2) =
																	((obj_t) BgL_typesz00_4953), BUNSPEC);
															}
															return
																((obj_t)
																((BgL_appz00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_4812)));
														}
													else
														{	/* Cfa/collect.scm 248 */
															return BFALSE;
														}
												}
											else
												{	/* Cfa/collect.scm 246 */
													return BFALSE;
												}
										}
									else
										{	/* Cfa/collect.scm 244 */
											return BFALSE;
										}
								}
						}
					else
						{	/* Cfa/collect.scm 186 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &node-collect!-sync1714 */
	obj_t BGl_z62nodezd2collectz12zd2sync1714z70zzcfa_collectz00(obj_t
		BgL_envz00_4814, obj_t BgL_nodez00_4815, obj_t BgL_ownerz00_4816)
	{
		{	/* Cfa/collect.scm 173 */
			{	/* Cfa/collect.scm 174 */
				BgL_nodez00_bglt BgL_arg1870z00_4958;

				BgL_arg1870z00_4958 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4815)))->BgL_mutexz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1870z00_4958,
					((BgL_variablez00_bglt) BgL_ownerz00_4816));
			}
			{	/* Cfa/collect.scm 175 */
				BgL_nodez00_bglt BgL_arg1871z00_4959;

				BgL_arg1871z00_4959 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4815)))->BgL_prelockz00);
				BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1871z00_4959,
					((BgL_variablez00_bglt) BgL_ownerz00_4816));
			}
			{	/* Cfa/collect.scm 176 */
				BgL_nodez00_bglt BgL_arg1872z00_4960;

				BgL_arg1872z00_4960 =
					(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4815)))->BgL_bodyz00);
				return
					BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_arg1872z00_4960,
					((BgL_variablez00_bglt) BgL_ownerz00_4816));
			}
		}

	}



/* &node-collect!-sequen1712 */
	obj_t BGl_z62nodezd2collectz12zd2sequen1712z70zzcfa_collectz00(obj_t
		BgL_envz00_4817, obj_t BgL_nodez00_4818, obj_t BgL_ownerz00_4819)
	{
		{	/* Cfa/collect.scm 167 */
			return
				BBOOL(BGl_nodezd2collectza2z12z62zzcfa_collectz00(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_4818)))->BgL_nodesz00),
					BgL_ownerz00_4819));
		}

	}



/* &node-collect!-var1710 */
	obj_t BGl_z62nodezd2collectz12zd2var1710z70zzcfa_collectz00(obj_t
		BgL_envz00_4820, obj_t BgL_nodez00_4821, obj_t BgL_ownerz00_4822)
	{
		{	/* Cfa/collect.scm 150 */
			{	/* Cfa/collect.scm 151 */
				BgL_variablez00_bglt BgL_vz00_4963;

				BgL_vz00_4963 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_4821)))->BgL_variablez00);
				{	/* Cfa/collect.scm 152 */
					bool_t BgL_test2345z00_5915;

					{	/* Cfa/collect.scm 152 */
						bool_t BgL_test2346z00_5916;

						{	/* Cfa/collect.scm 152 */
							bool_t BgL_res2200z00_4964;

							BgL_res2200z00_4964 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_vz00_4963), BGl_globalz00zzast_varz00);
							BgL_test2346z00_5916 = BgL_res2200z00_4964;
						}
						if (BgL_test2346z00_5916)
							{	/* Cfa/collect.scm 153 */
								bool_t BgL_test2347z00_5919;

								{	/* Cfa/collect.scm 153 */
									obj_t BgL_arg1866z00_4965;

									BgL_arg1866z00_4965 =
										(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_vz00_4963)))->BgL_modulez00);
									BgL_test2347z00_5919 =
										(BgL_arg1866z00_4965 ==
										BGl_za2moduleza2z00zzmodule_modulez00);
								}
								if (BgL_test2347z00_5919)
									{	/* Cfa/collect.scm 154 */
										bool_t BgL_test2348z00_5923;

										{	/* Cfa/collect.scm 154 */
											BgL_valuez00_bglt BgL_arg1865z00_4966;

											BgL_arg1865z00_4966 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_vz00_4963))))->
												BgL_valuez00);
											{	/* Cfa/collect.scm 154 */
												bool_t BgL_res2201z00_4967;

												BgL_res2201z00_4967 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_arg1865z00_4966),
													BGl_scnstz00zzast_varz00);
												BgL_test2348z00_5923 = BgL_res2201z00_4967;
											}
										}
										if (BgL_test2348z00_5923)
											{	/* Cfa/collect.scm 155 */
												bool_t BgL_test2349z00_5929;

												{	/* Cfa/collect.scm 155 */
													obj_t BgL_arg1862z00_4968;

													BgL_arg1862z00_4968 =
														(((BgL_scnstz00_bglt) COBJECT(
																((BgL_scnstz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_vz00_4963))))->
																		BgL_valuez00))))->BgL_nodez00);
													BgL_test2349z00_5929 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1862z00_4968,
															BGl_za2usedzd2allocza2zd2zzcfa_collectz00));
												}
												if (BgL_test2349z00_5929)
													{	/* Cfa/collect.scm 155 */
														BgL_test2345z00_5915 = ((bool_t) 0);
													}
												else
													{	/* Cfa/collect.scm 155 */
														BgL_test2345z00_5915 = ((bool_t) 1);
													}
											}
										else
											{	/* Cfa/collect.scm 154 */
												BgL_test2345z00_5915 = ((bool_t) 0);
											}
									}
								else
									{	/* Cfa/collect.scm 153 */
										BgL_test2345z00_5915 = ((bool_t) 0);
									}
							}
						else
							{	/* Cfa/collect.scm 152 */
								BgL_test2345z00_5915 = ((bool_t) 0);
							}
					}
					if (BgL_test2345z00_5915)
						{	/* Cfa/collect.scm 152 */
							{	/* Cfa/collect.scm 161 */
								obj_t BgL_arg1859z00_4969;

								BgL_arg1859z00_4969 =
									(((BgL_scnstz00_bglt) COBJECT(
											((BgL_scnstz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_vz00_4963))))->
													BgL_valuez00))))->BgL_nodez00);
								BGl_nodezd2collectz12zc0zzcfa_collectz00(((BgL_nodez00_bglt)
										BgL_arg1859z00_4969),
									((BgL_variablez00_bglt) BgL_ownerz00_4822));
							}
						}
					else
						{	/* Cfa/collect.scm 152 */
							BFALSE;
						}
				}
			}
			return BUNSPEC;
		}

	}



/* &node-collect!-kwote1708 */
	obj_t BGl_z62nodezd2collectz12zd2kwote1708z70zzcfa_collectz00(obj_t
		BgL_envz00_4823, obj_t BgL_nodez00_4824, obj_t BgL_ownerz00_4825)
	{
		{	/* Cfa/collect.scm 71 */
			{
				obj_t BgL_valuez00_4992;
				obj_t BgL_valuez00_4978;
				obj_t BgL_vectorz00_4974;

				{	/* Cfa/collect.scm 137 */
					obj_t BgL_valuez00_5003;

					BgL_valuez00_5003 =
						(((BgL_kwotez00_bglt) COBJECT(
								((BgL_kwotez00_bglt) BgL_nodez00_4824)))->BgL_valuez00);
					{	/* Cfa/collect.scm 139 */
						bool_t BgL_test2350z00_5947;

						if (VECTORP(BgL_valuez00_5003))
							{	/* Cfa/collect.scm 139 */
								BgL_test2350z00_5947 =
									BGl_vectorzd2optimzf3z21zzcfa_vectorz00();
							}
						else
							{	/* Cfa/collect.scm 139 */
								BgL_test2350z00_5947 = ((bool_t) 0);
							}
						if (BgL_test2350z00_5947)
							{	/* Cfa/collect.scm 139 */
								BgL_valuez00_4978 = BgL_valuez00_5003;
								{	/* Cfa/collect.scm 101 */
									int BgL_warningz00_4979;

									{	/* Cfa/collect.scm 101 */
										int BgL_wanz00_4980;

										BgL_wanz00_4980 = BGl_bigloozd2warningzd2zz__paramz00();
										BGl_bigloozd2warningzd2setz12z12zz__paramz00(
											(int) (((long) 0)));
										BgL_warningz00_4979 = BgL_wanz00_4980;
									}
									{	/* Cfa/collect.scm 101 */
										obj_t BgL_backendz00_4981;

										BgL_backendz00_4981 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										{	/* Cfa/collect.scm 104 */
											bool_t BgL_pragmazf3zf3_4982;

											{	/* Cfa/collect.scm 105 */
												bool_t BgL_tgtz00_4983;

												BgL_tgtz00_4983 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_backendz00_4981)))->
													BgL_pragmazd2supportzd2);
												((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
																	BgL_backendz00_4981)))->
														BgL_pragmazd2supportzd2) =
													((bool_t) ((bool_t) 1)), BUNSPEC);
												BgL_pragmazf3zf3_4982 = BgL_tgtz00_4983;
											}
											{	/* Cfa/collect.scm 105 */
												BgL_nodez00_bglt BgL_dummyz00_4984;

												{	/* Cfa/collect.scm 109 */
													obj_t BgL_arg1823z00_4985;

													{	/* Cfa/collect.scm 109 */
														obj_t BgL_arg1824z00_4986;

														{	/* Cfa/collect.scm 109 */
															obj_t BgL_arg1826z00_4987;

															{	/* Cfa/collect.scm 110 */
																obj_t BgL_arg1827z00_4988;

																{	/* Cfa/collect.scm 110 */
																	bool_t BgL_test2352z00_5959;

																	BgL_vectorz00_4974 = BgL_valuez00_4978;
																	if (
																		(VECTOR_LENGTH(BgL_vectorz00_4974) ==
																			((long) 0)))
																		{	/* Cfa/collect.scm 83 */
																			BgL_test2352z00_5959 = ((bool_t) 0);
																		}
																	else
																		{	/* Cfa/collect.scm 85 */
																			obj_t BgL_atypez00_4975;

																			BgL_atypez00_4975 =
																				BGl_getzd2atypeze70z35zzcfa_collectz00
																				(VECTOR_REF(BgL_vectorz00_4974,
																					((long) 0)));
																			{
																				long BgL_iz00_4977;

																				BgL_iz00_4977 = ((long) 1);
																			BgL_loopz00_4976:
																				if (CBOOL(BgL_atypez00_4975))
																					{	/* Cfa/collect.scm 88 */
																						if (
																							(BgL_iz00_4977 ==
																								VECTOR_LENGTH
																								(BgL_vectorz00_4974)))
																							{	/* Cfa/collect.scm 90 */
																								BgL_test2352z00_5959 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Cfa/collect.scm 90 */
																								if (
																									(BGl_getzd2atypeze70z35zzcfa_collectz00
																										(VECTOR_REF
																											(BgL_vectorz00_4974,
																												BgL_iz00_4977)) ==
																										BgL_atypez00_4975))
																									{
																										long BgL_iz00_5974;

																										BgL_iz00_5974 =
																											(BgL_iz00_4977 +
																											((long) 1));
																										BgL_iz00_4977 =
																											BgL_iz00_5974;
																										goto BgL_loopz00_4976;
																									}
																								else
																									{	/* Cfa/collect.scm 92 */
																										BgL_test2352z00_5959 =
																											((bool_t) 0);
																									}
																							}
																					}
																				else
																					{	/* Cfa/collect.scm 88 */
																						BgL_test2352z00_5959 = ((bool_t) 0);
																					}
																			}
																		}
																	if (BgL_test2352z00_5959)
																		{	/* Cfa/collect.scm 110 */
																			BgL_arg1827z00_4988 =
																				VECTOR_REF(BgL_valuez00_4978,
																				((long) 0));
																		}
																	else
																		{	/* Cfa/collect.scm 110 */
																			BgL_arg1827z00_4988 =
																				CNST_TABLE_REF(((long) 15));
																}}
																BgL_arg1826z00_4987 =
																	MAKE_YOUNG_PAIR(BgL_arg1827z00_4988, BNIL);
															}
															BgL_arg1824z00_4986 =
																MAKE_YOUNG_PAIR(BINT(VECTOR_LENGTH
																	(BgL_valuez00_4978)), BgL_arg1826z00_4987);
														}
														BgL_arg1823z00_4985 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
															BgL_arg1824z00_4986);
													}
													BgL_dummyz00_4984 =
														BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
														(BgL_arg1823z00_4985, BFALSE);
												}
												{	/* Cfa/collect.scm 108 */

													((((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_backendz00_4981)))->
															BgL_pragmazd2supportzd2) =
														((bool_t) BgL_pragmazf3zf3_4982), BUNSPEC);
													BGl_bigloozd2warningzd2setz12z12zz__paramz00
														(BgL_warningz00_4979);
													{	/* Cfa/collect.scm 116 */
														BgL_kwotezf2nodezf2_bglt BgL_wide1173z00_4989;

														BgL_wide1173z00_4989 =
															((BgL_kwotezf2nodezf2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_kwotezf2nodezf2_bgl))));
														{	/* Cfa/collect.scm 116 */
															obj_t BgL_auxz00_5993;
															BgL_objectz00_bglt BgL_tmpz00_5989;

															BgL_auxz00_5993 = ((obj_t) BgL_wide1173z00_4989);
															BgL_tmpz00_5989 =
																((BgL_objectz00_bglt)
																((BgL_kwotez00_bglt)
																	((BgL_kwotez00_bglt) BgL_nodez00_4824)));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5989,
																BgL_auxz00_5993);
														}
														((BgL_objectz00_bglt)
															((BgL_kwotez00_bglt)
																((BgL_kwotez00_bglt) BgL_nodez00_4824)));
														{	/* Cfa/collect.scm 116 */
															long BgL_arg1822z00_4990;

															{	/* Cfa/collect.scm 116 */
																long BgL_res2193z00_4991;

																BgL_res2193z00_4991 =
																	BGL_CLASS_INDEX
																	(BGl_kwotezf2nodezf2zzcfa_infoz00);
																BgL_arg1822z00_4990 = BgL_res2193z00_4991;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_kwotez00_bglt)
																		((BgL_kwotez00_bglt) BgL_nodez00_4824))),
																BgL_arg1822z00_4990);
														}
														((BgL_kwotez00_bglt)
															((BgL_kwotez00_bglt)
																((BgL_kwotez00_bglt) BgL_nodez00_4824)));
													}
													{
														BgL_kwotezf2nodezf2_bglt BgL_auxz00_6007;

														{
															obj_t BgL_auxz00_6008;

															{	/* Cfa/collect.scm 116 */
																BgL_objectz00_bglt BgL_tmpz00_6009;

																BgL_tmpz00_6009 =
																	((BgL_objectz00_bglt)
																	((BgL_kwotez00_bglt)
																		((BgL_kwotez00_bglt) BgL_nodez00_4824)));
																BgL_auxz00_6008 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_6009);
															}
															BgL_auxz00_6007 =
																((BgL_kwotezf2nodezf2_bglt) BgL_auxz00_6008);
														}
														((((BgL_kwotezf2nodezf2_bglt)
																	COBJECT(BgL_auxz00_6007))->BgL_nodez00) =
															((BgL_nodez00_bglt) BgL_dummyz00_4984), BUNSPEC);
													}
													((BgL_kwotez00_bglt)
														((BgL_kwotez00_bglt) BgL_nodez00_4824));
													return
														BGl_nodezd2collectz12zc0zzcfa_collectz00
														(BgL_dummyz00_4984,
														((BgL_variablez00_bglt) BgL_ownerz00_4825));
												}
											}
										}
									}
								}
							}
						else
							{	/* Cfa/collect.scm 142 */
								bool_t BgL_test2357z00_6020;

								if (PAIRP(BgL_valuez00_5003))
									{	/* Cfa/collect.scm 142 */
										if (BGl_pairzd2optimzf3z21zzcfa_pairz00())
											{	/* Cfa/collect.scm 142 */
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_valuez00_5003))
													{	/* Cfa/collect.scm 143 */
														long BgL_arg1782z00_5004;
														obj_t BgL_arg1784z00_5005;

														BgL_arg1782z00_5004 =
															bgl_list_length(BgL_valuez00_5003);
														BgL_arg1784z00_5005 =
															BGl_pairzd2optimzd2quotezd2maxlenzd2zzcfa_pairz00
															();
														BgL_test2357z00_6020 =
															(BgL_arg1782z00_5004 <
															(long) CINT(BgL_arg1784z00_5005));
													}
												else
													{	/* Cfa/collect.scm 142 */
														BgL_test2357z00_6020 = ((bool_t) 0);
													}
											}
										else
											{	/* Cfa/collect.scm 142 */
												BgL_test2357z00_6020 = ((bool_t) 0);
											}
									}
								else
									{	/* Cfa/collect.scm 142 */
										BgL_test2357z00_6020 = ((bool_t) 0);
									}
								if (BgL_test2357z00_6020)
									{	/* Cfa/collect.scm 142 */
										BgL_valuez00_4992 = BgL_valuez00_5003;
										{	/* Cfa/collect.scm 120 */
											int BgL_warningz00_4993;

											{	/* Cfa/collect.scm 120 */
												int BgL_wanz00_4994;

												BgL_wanz00_4994 = BGl_bigloozd2warningzd2zz__paramz00();
												BGl_bigloozd2warningzd2setz12z12zz__paramz00(
													(int) (((long) 0)));
												BgL_warningz00_4993 = BgL_wanz00_4994;
											}
											{	/* Cfa/collect.scm 120 */
												obj_t BgL_backendz00_4995;

												BgL_backendz00_4995 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{	/* Cfa/collect.scm 123 */
													bool_t BgL_pragmazf3zf3_4996;

													{	/* Cfa/collect.scm 124 */
														bool_t BgL_tgtz00_4997;

														BgL_tgtz00_4997 =
															(((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_backendz00_4995)))->
															BgL_pragmazd2supportzd2);
														((((BgL_backendz00_bglt)
																	COBJECT(((BgL_backendz00_bglt)
																			BgL_backendz00_4995)))->
																BgL_pragmazd2supportzd2) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														BgL_pragmazf3zf3_4996 = BgL_tgtz00_4997;
													}
													{	/* Cfa/collect.scm 124 */
														obj_t BgL_expz00_4998;

														BgL_expz00_4998 =
															BGl_loopze70ze7zzcfa_collectz00
															(BgL_valuez00_4992);
														{	/* Cfa/collect.scm 127 */
															BgL_nodez00_bglt BgL_dummyz00_4999;

															BgL_dummyz00_4999 =
																BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																(BgL_expz00_4998, BFALSE);
															{	/* Cfa/collect.scm 131 */

																((((BgL_backendz00_bglt) COBJECT(
																				((BgL_backendz00_bglt)
																					BgL_backendz00_4995)))->
																		BgL_pragmazd2supportzd2) =
																	((bool_t) BgL_pragmazf3zf3_4996), BUNSPEC);
																BGl_bigloozd2warningzd2setz12z12zz__paramz00
																	(BgL_warningz00_4993);
																{	/* Cfa/collect.scm 134 */
																	BgL_kwotezf2nodezf2_bglt BgL_wide1177z00_5000;

																	BgL_wide1177z00_5000 =
																		((BgL_kwotezf2nodezf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_kwotezf2nodezf2_bgl))));
																	{	/* Cfa/collect.scm 134 */
																		obj_t BgL_auxz00_6049;
																		BgL_objectz00_bglt BgL_tmpz00_6045;

																		BgL_auxz00_6049 =
																			((obj_t) BgL_wide1177z00_5000);
																		BgL_tmpz00_6045 =
																			((BgL_objectz00_bglt)
																			((BgL_kwotez00_bglt)
																				((BgL_kwotez00_bglt)
																					BgL_nodez00_4824)));
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6045,
																			BgL_auxz00_6049);
																	}
																	((BgL_objectz00_bglt)
																		((BgL_kwotez00_bglt)
																			((BgL_kwotez00_bglt) BgL_nodez00_4824)));
																	{	/* Cfa/collect.scm 134 */
																		long BgL_arg1830z00_5001;

																		{	/* Cfa/collect.scm 134 */
																			long BgL_res2196z00_5002;

																			BgL_res2196z00_5002 =
																				BGL_CLASS_INDEX
																				(BGl_kwotezf2nodezf2zzcfa_infoz00);
																			BgL_arg1830z00_5001 = BgL_res2196z00_5002;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				((BgL_kwotez00_bglt)
																					((BgL_kwotez00_bglt)
																						BgL_nodez00_4824))),
																			BgL_arg1830z00_5001);
																	}
																	((BgL_kwotez00_bglt)
																		((BgL_kwotez00_bglt)
																			((BgL_kwotez00_bglt) BgL_nodez00_4824)));
																}
																{
																	BgL_kwotezf2nodezf2_bglt BgL_auxz00_6063;

																	{
																		obj_t BgL_auxz00_6064;

																		{	/* Cfa/collect.scm 134 */
																			BgL_objectz00_bglt BgL_tmpz00_6065;

																			BgL_tmpz00_6065 =
																				((BgL_objectz00_bglt)
																				((BgL_kwotez00_bglt)
																					((BgL_kwotez00_bglt)
																						BgL_nodez00_4824)));
																			BgL_auxz00_6064 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6065);
																		}
																		BgL_auxz00_6063 =
																			((BgL_kwotezf2nodezf2_bglt)
																			BgL_auxz00_6064);
																	}
																	((((BgL_kwotezf2nodezf2_bglt)
																				COBJECT(BgL_auxz00_6063))->
																			BgL_nodez00) =
																		((BgL_nodez00_bglt) BgL_dummyz00_4999),
																		BUNSPEC);
																}
																((BgL_kwotez00_bglt)
																	((BgL_kwotez00_bglt) BgL_nodez00_4824));
																return
																	BGl_nodezd2collectz12zc0zzcfa_collectz00
																	(BgL_dummyz00_4999,
																	((BgL_variablez00_bglt) BgL_ownerz00_4825));
															}
														}
													}
												}
											}
										}
									}
								else
									{	/* Cfa/collect.scm 142 */
										return BFALSE;
									}
							}
					}
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzcfa_collectz00(obj_t BgL_vz00_3486)
	{
		{	/* Cfa/collect.scm 127 */
			if (NULLP(BgL_vz00_3486))
				{	/* Cfa/collect.scm 128 */
					return CNST_TABLE_REF(((long) 16));
				}
			else
				{	/* Cfa/collect.scm 130 */
					obj_t BgL_arg1833z00_3489;

					{	/* Cfa/collect.scm 130 */
						obj_t BgL_arg1835z00_3490;
						obj_t BgL_arg1836z00_3491;

						{	/* Cfa/collect.scm 130 */
							obj_t BgL_arg1838z00_3492;

							{	/* Cfa/collect.scm 130 */
								obj_t BgL_arg1840z00_3493;

								BgL_arg1840z00_3493 = CAR(((obj_t) BgL_vz00_3486));
								BgL_arg1838z00_3492 =
									MAKE_YOUNG_PAIR(BgL_arg1840z00_3493, BNIL);
							}
							BgL_arg1835z00_3490 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
								BgL_arg1838z00_3492);
						}
						{	/* Cfa/collect.scm 130 */
							obj_t BgL_arg1841z00_3494;

							{	/* Cfa/collect.scm 130 */
								obj_t BgL_arg1842z00_3495;

								BgL_arg1842z00_3495 = CDR(((obj_t) BgL_vz00_3486));
								BgL_arg1841z00_3494 =
									BGl_loopze70ze7zzcfa_collectz00(BgL_arg1842z00_3495);
							}
							BgL_arg1836z00_3491 = MAKE_YOUNG_PAIR(BgL_arg1841z00_3494, BNIL);
						}
						BgL_arg1833z00_3489 =
							MAKE_YOUNG_PAIR(BgL_arg1835z00_3490, BgL_arg1836z00_3491);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BgL_arg1833z00_3489);
		}}

	}



/* get-atype~0 */
	obj_t BGl_getzd2atypeze70z35zzcfa_collectz00(obj_t BgL_valuez00_3443)
	{
		{	/* Cfa/collect.scm 81 */
			if (INTEGERP(BgL_valuez00_3443))
				{	/* Cfa/collect.scm 76 */
					return CNST_TABLE_REF(((long) 18));
				}
			else
				{	/* Cfa/collect.scm 76 */
					if (CHARP(BgL_valuez00_3443))
						{	/* Cfa/collect.scm 77 */
							return CNST_TABLE_REF(((long) 19));
						}
					else
						{	/* Cfa/collect.scm 77 */
							if (BOOLEANP(BgL_valuez00_3443))
								{	/* Cfa/collect.scm 78 */
									return CNST_TABLE_REF(((long) 20));
								}
							else
								{	/* Cfa/collect.scm 78 */
									if (STRINGP(BgL_valuez00_3443))
										{	/* Cfa/collect.scm 79 */
											return CNST_TABLE_REF(((long) 21));
										}
									else
										{	/* Cfa/collect.scm 80 */
											bool_t BgL_test2366z00_6103;

											if (INTEGERP(BgL_valuez00_3443))
												{	/* Cfa/collect.scm 80 */
													BgL_test2366z00_6103 = ((bool_t) 1);
												}
											else
												{	/* Cfa/collect.scm 80 */
													BgL_test2366z00_6103 = REALP(BgL_valuez00_3443);
												}
											if (BgL_test2366z00_6103)
												{	/* Cfa/collect.scm 80 */
													return CNST_TABLE_REF(((long) 22));
												}
											else
												{	/* Cfa/collect.scm 80 */
													return BFALSE;
												}
										}
								}
						}
				}
		}

	}



/* &node-collect!-atom1706 */
	obj_t BGl_z62nodezd2collectz12zd2atom1706z70zzcfa_collectz00(obj_t
		BgL_envz00_4826, obj_t BgL_nodez00_4827, obj_t BgL_ownerz00_4828)
	{
		{	/* Cfa/collect.scm 65 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_collectz00()
	{
		{	/* Cfa/collect.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(((long) 185547369),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(((long) 374743244),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 227653907),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_vectorz00(((long) 146804595),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_pairz00(((long) 37668580),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_structz00(((long) 306923854),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_boxz00(((long) 370344653),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string2269z00zzcfa_collectz00));
		}

	}

#ifdef __cplusplus
}
#endif
