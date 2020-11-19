/*===========================================================================*/
/*   (SawJvm/code.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/code.scm) */
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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_lightzd2funcallszd2;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                        *BgL_rtl_instanceofz00_bglt;

	typedef struct BgL_rtl_makeboxz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_makeboxz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_setfieldz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_constrz00;
	}                 *BgL_rtl_newz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_funsz00;
		obj_t BgL_rettypez00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_totypez00;
		struct BgL_typez00_bgl *BgL_fromtypez00;
	}                  *BgL_rtl_castz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;

	typedef struct BgL_lregz00_bgl
	{
		obj_t BgL_idz00;
	}              *BgL_lregz00_bglt;

	typedef struct BgL_liveblockz00_bgl
	{
		obj_t BgL_inz00;
		obj_t BgL_outz00;
	}                   *BgL_liveblockz00_bglt;


	static obj_t BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 = BUNSPEC;
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_call1768z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_protecte1812z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl_z62genzd2argszd2genzd2funzb0zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_fail1808z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62genzd2argszd2genzd2funzd2rtl1800z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_globalre1756z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	static obj_t BGl_exprze70ze7zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62modulezd2codezb0zzsaw_jvm_codez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_makeboxz00zzsaw_defsz00;
	static obj_t BGl_regzd2ze3lregze70zd6zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_codez00();
	BGL_IMPORT obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_za2hasprotectza2z00zzsaw_jvm_codez00;
	static obj_t BGl_z62genzd2funzd2rtl_cast1796z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_livezd2argze70z35zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_jumpexitz00zzsaw_defsz00;
	static bool_t BGl_zc3z04anonymousza31939ze3ze70z60zzsaw_jvm_codez00(obj_t,
		obj_t);
	static obj_t BGl_outzd2linezd2zzsaw_jvm_codez00(obj_t, BgL_rtl_funz00_bglt);
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	extern obj_t BGl_rtl_instanceofz00zzsaw_defsz00;
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2funzd2rtl_mov1748z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2argszd2genzd2predica1813zb0zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2argszd2genzd2predica1817zb0zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2106z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda2109z62zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t);
	static obj_t BGl_livezd2argsze70z35zzsaw_jvm_codez00(obj_t, obj_t);
	static bool_t BGl_za2protectresultza2z00zzsaw_jvm_codez00;
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static BgL_blockz00_bglt BGl_z62lambda2112z62zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_storezd2fieldzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62lambda2120z62zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_vlength1784z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2121z62zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_livezd2instrsze70z35zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_vset1782z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2126z62zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2127z62zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2funzb0zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_rtl_failz00zzsaw_defsz00;
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_lregz00zzsaw_jvm_codez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_codez00();
	static obj_t BGl_z62genzd2exprzb0zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	static obj_t BGl_za2bexitregza2z00zzsaw_jvm_codez00 = BUNSPEC;
	static obj_t BGl_z62genzd2funzd2rtl_loadfun1776z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_newobjz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, BgL_typez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t);
	extern obj_t BGl_rtl_effectz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2funcallzd2zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_nop1746z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_doubleze70ze7zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00;
	extern obj_t BGl_localvarz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_switch1764z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	static obj_t BGl_z62genzd2funzd2rtl_boxref1802z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62genzd2funzd2withzd2argszd2rt1772z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62genzd2funzd2withzd2argszd2rt1774z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_fixpointze70ze7zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2funzd2rtl_go1762z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt,
		obj_t);
	static BgL_blockz00_bglt BGl_livezd2initzd2zzsaw_jvm_codez00(obj_t);
	static obj_t BGl_z62genzd2funzd2withzd2args1740zb0zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00 = BUNSPEC;
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_jvm_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	extern obj_t BGl_loadzd2fieldzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_codez00();
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62genzd2argszd2genzd2funzd2rtl1758z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_instance1794z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62genzd2argszd2genzd2funzd2rtl1760z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62genzd2argszd2genzd2funzd2rtl1766z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62genzd2funzd2rtl_storeg1754z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	static obj_t BGl_getzd2localszd2zzsaw_jvm_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_z62genzd2argszd2genzd2funzd2rtl1788z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_cast_nul1798z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_labelz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_branchz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	static obj_t BGl_z62genzd2argszd2genzd2fun1738zb0zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62genzd2funzd2withzd2argszb0zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_jumpexit1806z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static obj_t
		BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_protect1810z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_apply1778z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_livezd2fixzd2zzsaw_jvm_codez00(obj_t);
	static bool_t BGl_includeze70ze7zzsaw_jvm_codez00(obj_t, obj_t);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_check_funze70ze7zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_asz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_intifyz00zzsaw_jvm_codez00(obj_t);
	static obj_t BGl_flatz00zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_vref1780z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_Lze70ze7zzsaw_jvm_codez00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_z62genzd2funzd2rtl_loadg1752z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	extern obj_t BGl_rtl_notseqz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_codez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00();
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda2084z62zzsaw_jvm_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00();
	static obj_t BGl_z62genzd2funzd2rtl_valloc1786z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda2087z62zzsaw_jvm_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static BgL_rtl_regz00_bglt BGl_z62lambda2090z62zzsaw_jvm_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2097z62zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32194ze3ze5zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2098z62zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32089ze3ze5zzsaw_jvm_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32284ze3ze5zzsaw_jvm_codez00(obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2argszd2genzd2predicatezb0zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_getfield1790z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2fun1742zb0zzsaw_jvm_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_loadzd2regzd2zzsaw_jvm_codez00(obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_lightfun1770z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_liveblockz00zzsaw_jvm_codez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_loadi1750z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2rtl_boxset1804z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_rtl_protectedz00zzsaw_defsz00;
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2funzd2rtl_setfield1792z62zzsaw_jvm_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t __cnst[113];


	   
		 
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22701za7,
		BGl_z62genzd2argszd2genzd2funzb0zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7b0za72702z00,
		BGl_z62genzd2funzb0zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2628z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2098za7622703z00, BGl_z62lambda2098z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2629z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2097za7622704z00, BGl_z62lambda2097z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2630z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2090za7622705z00, BGl_z62lambda2090z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2631z00zzsaw_jvm_codez00,
		BgL_bgl_za762za7c3za704anonymo2706za7,
		BGl_z62zc3z04anonymousza32089ze3ze5zzsaw_jvm_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2632z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2087za7622707z00, BGl_z62lambda2087z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2633z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2084za7622708z00, BGl_z62lambda2084z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2634z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2121za7622709z00, BGl_z62lambda2121z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2635z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2120za7622710z00, BGl_z62lambda2120z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2636z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2127za7622711z00, BGl_z62lambda2127z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2637z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2126za7622712z00, BGl_z62lambda2126z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2638z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2112za7622713z00, BGl_z62lambda2112z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2639z00zzsaw_jvm_codez00,
		BgL_bgl_za762za7c3za704anonymo2714za7,
		BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_jvm_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2640z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2109za7622715z00, BGl_z62lambda2109z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2641z00zzsaw_jvm_codez00,
		BgL_bgl_za762lambda2106za7622716z00, BGl_z62lambda2106z62zzsaw_jvm_codez00,
		0L, BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2642z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22717za7,
		BGl_z62genzd2argszd2genzd2fun1738zb0zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2644z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2w2718za7,
		BGl_z62genzd2funzd2withzd2args1740zb0zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2646z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2fun17422719z00,
		BGl_z62genzd2fun1742zb0zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2648z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22720za7,
		BGl_z62genzd2argszd2genzd2predica1813zb0zzsaw_jvm_codez00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2651z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2721za7,
		BGl_z62genzd2funzd2rtl_nop1746z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2653z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2722za7,
		BGl_z62genzd2funzd2rtl_mov1748z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2654z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2723za7,
		BGl_z62genzd2funzd2rtl_loadi1750z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2655z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2724za7,
		BGl_z62genzd2funzd2rtl_loadg1752z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2656z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2725za7,
		BGl_z62genzd2funzd2rtl_storeg1754z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2657z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2726za7,
		BGl_z62genzd2funzd2rtl_globalre1756z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2658z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22727za7,
		BGl_z62genzd2argszd2genzd2funzd2rtl1758z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2660z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22728za7,
		BGl_z62genzd2argszd2genzd2funzd2rtl1760z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2661z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2729za7,
		BGl_z62genzd2funzd2rtl_go1762z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2662z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2730za7,
		BGl_z62genzd2funzd2rtl_switch1764z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2663z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22731za7,
		BGl_z62genzd2argszd2genzd2funzd2rtl1766z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2664z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2732za7,
		BGl_z62genzd2funzd2rtl_call1768z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2665z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2733za7,
		BGl_z62genzd2funzd2rtl_lightfun1770z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2666z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2w2734za7,
		BGl_z62genzd2funzd2withzd2argszd2rt1772z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2668z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2w2735za7,
		BGl_z62genzd2funzd2withzd2argszd2rt1774z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2669z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2736za7,
		BGl_z62genzd2funzd2rtl_loadfun1776z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_REAL(BGl_real2692z00zzsaw_jvm_codez00,
		BgL_bgl_real2692za700za7za7saw2737za7, 0.75);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2670z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2738za7,
		BGl_z62genzd2funzd2rtl_apply1778z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2671z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2739za7,
		BGl_z62genzd2funzd2rtl_vref1780z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2672z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2740za7,
		BGl_z62genzd2funzd2rtl_vset1782z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2673z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2741za7,
		BGl_z62genzd2funzd2rtl_vlength1784z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2674z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2742za7,
		BGl_z62genzd2funzd2rtl_valloc1786z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2675z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22743za7,
		BGl_z62genzd2argszd2genzd2funzd2rtl1788z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2676z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2744za7,
		BGl_z62genzd2funzd2rtl_getfield1790z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2677z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2745za7,
		BGl_z62genzd2funzd2rtl_setfield1792z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2678z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2746za7,
		BGl_z62genzd2funzd2rtl_instance1794z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2679z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2747za7,
		BGl_z62genzd2funzd2rtl_cast1796z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2680z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2748za7,
		BGl_z62genzd2funzd2rtl_cast_nul1798z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2681z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22749za7,
		BGl_z62genzd2argszd2genzd2funzd2rtl1800z62zzsaw_jvm_codez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2682z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2750za7,
		BGl_z62genzd2funzd2rtl_boxref1802z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2683z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2751za7,
		BGl_z62genzd2funzd2rtl_boxset1804z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2684z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2752za7,
		BGl_z62genzd2funzd2rtl_jumpexit1806z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2685z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2753za7,
		BGl_z62genzd2funzd2rtl_fail1808z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2686z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2754za7,
		BGl_z62genzd2funzd2rtl_protect1810z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2687z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2r2755za7,
		BGl_z62genzd2funzd2rtl_protecte1812z62zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2688z00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22756za7,
		BGl_z62genzd2argszd2genzd2predica1817zb0zzsaw_jvm_codez00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2691z00zzsaw_jvm_codez00,
		BgL_bgl_za762za7c3za704anonymo2757za7,
		BGl_z62zc3z04anonymousza32194ze3ze5zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2codezd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762moduleza7d2code2758z00,
		BGl_z62modulezd2codezb0zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genzd2exprzd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2exprza7b02759za7,
		BGl_z62genzd2exprzb0zzsaw_jvm_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2626z00zzsaw_jvm_codez00,
		BgL_bgl_string2626za700za7za7s2760za7, "P", 1);
	      DEFINE_STRING(BGl_string2627z00zzsaw_jvm_codez00,
		BgL_bgl_string2627za700za7za7s2761za7, "V", 1);
	      DEFINE_STRING(BGl_string2643z00zzsaw_jvm_codez00,
		BgL_bgl_string2643za700za7za7s2762za7, "gen-args-gen-fun1738", 20);
	      DEFINE_STRING(BGl_string2645z00zzsaw_jvm_codez00,
		BgL_bgl_string2645za700za7za7s2763za7, "gen-fun-with-args1740", 21);
	      DEFINE_STRING(BGl_string2647z00zzsaw_jvm_codez00,
		BgL_bgl_string2647za700za7za7s2764za7, "gen-fun1742", 11);
	      DEFINE_STRING(BGl_string2649z00zzsaw_jvm_codez00,
		BgL_bgl_string2649za700za7za7s2765za7, "gen-args-gen-predica1813", 24);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2funza7d2w2766za7,
		BGl_z62genzd2funzd2withzd2argszb0zzsaw_jvm_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2650z00zzsaw_jvm_codez00,
		BgL_bgl_string2650za700za7za7s2767za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2652z00zzsaw_jvm_codez00,
		BgL_bgl_string2652za700za7za7s2768za7, "gen-fun", 7);
	      DEFINE_STRING(BGl_string2659z00zzsaw_jvm_codez00,
		BgL_bgl_string2659za700za7za7s2769za7, "gen-args-gen-fun", 16);
	      DEFINE_STRING(BGl_string2667z00zzsaw_jvm_codez00,
		BgL_bgl_string2667za700za7za7s2770za7, "gen-fun-with-args", 17);
	      DEFINE_STRING(BGl_string2689z00zzsaw_jvm_codez00,
		BgL_bgl_string2689za700za7za7s2771za7, "gen-args-gen-predicate", 22);
	      DEFINE_STRING(BGl_string2690z00zzsaw_jvm_codez00,
		BgL_bgl_string2690za700za7za7s2772za7, "I", 1);
	      DEFINE_STRING(BGl_string2693z00zzsaw_jvm_codez00,
		BgL_bgl_string2693za700za7za7s2773za7, "L", 1);
	      DEFINE_STRING(BGl_string2694z00zzsaw_jvm_codez00,
		BgL_bgl_string2694za700za7za7s2774za7, "loadi", 5);
	      DEFINE_STRING(BGl_string2695z00zzsaw_jvm_codez00,
		BgL_bgl_string2695za700za7za7s2775za7, "bad atom value", 14);
	      DEFINE_STRING(BGl_string2696z00zzsaw_jvm_codez00,
		BgL_bgl_string2696za700za7za7s2776za7, "saw_jvm_code", 12);
	      DEFINE_STRING(BGl_string2697z00zzsaw_jvm_codez00,
		BgL_bgl_string2697za700za7za7s2777za7,
		"(invokespecial init_bucs2) (new bucs2) (getstatic *key*) (getstatic *rest*) (getstatic *optional*) (getstatic *eof*) (invokestatic getbytes) getstatic putstatic (putfield procindex) (invokespecial init) (new me) tableswitch lookupswitch if_icmpne else invokestatic (dreturn) (freturn) (lreturn) (ireturn) (return) void (aaload) (daload) (faload) (laload) (iaload) (saload) (caload) (baload) (aastore) (dastore) (fastore) (lastore) (iastore) (sastore) (castore) (bastore) (arraylength) anewarray newarray goto instanceof checkcast aconst_null fconst_0 (invokespecial init_cell) (dup) (new cell) (getfield ccar) (putfield ccar) (checkcast throwable) (invokestatic jumpexit) (athrow) (invokestatic fail) (invokestatic setexit) ok not-inlined gen-fun1742 ifeq ifne liveblock out in saw_jvm_code lreg obj id (invokevirtual pfuncall4) (invokevirtual pfuncall3) (invokevirtual pfuncall2) (invokevirtual pfuncall1) (invokevirtual pfuncall0) (invokevirtual papply) (invokestatic cons) (getstatic *nil*) line location astore dstore fs"
		"tore lstore istore aload dload fload float lload iload int short char byte boolean from (pop) (pop2) (getstatic *unspecified*) no-value _ long double (invokestatic java_exception_handler) catch2 (areturn) (invokestatic debug_handler) (checkcast exit) catch end begin (handler from catch catch2 throwable) (handler from catch catch bexception) ",
		1367);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
		BgL_bgl_za762genza7d2argsza7d22778za7,
		BGl_z62genzd2argszd2genzd2predicatezb0zzsaw_jvm_codez00, 0L, BUNSPEC, 5);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00));
		     ADD_ROOT((void *) (&BGl_lregz00zzsaw_jvm_codez00));
		     ADD_ROOT((void *) (&BGl_za2bexitregza2z00zzsaw_jvm_codez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00));
		     ADD_ROOT((void *) (&BGl_liveblockz00zzsaw_jvm_codez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long
		BgL_checksumz00_5437, char *BgL_fromz00_5438)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_codez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_codez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00();
					BGl_cnstzd2initzd2zzsaw_jvm_codez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00();
					BGl_objectzd2initzd2zzsaw_jvm_codez00();
					BGl_genericzd2initzd2zzsaw_jvm_codez00();
					BGl_methodzd2initzd2zzsaw_jvm_codez00();
					return BGl_toplevelzd2initzd2zzsaw_jvm_codez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__ucs2z00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_jvm_code");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "saw_jvm_code");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			{	/* SawJvm/code.scm 1 */
				obj_t BgL_cportz00_5168;

				{	/* SawJvm/code.scm 1 */
					obj_t BgL_stringz00_5176;

					BgL_stringz00_5176 = BGl_string2697z00zzsaw_jvm_codez00;
					{	/* SawJvm/code.scm 1 */
						obj_t BgL_startz00_5177;

						BgL_startz00_5177 = BINT(((long) 0));
						{	/* SawJvm/code.scm 1 */
							obj_t BgL_endz00_5178;

							BgL_endz00_5178 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5176)));
							{	/* SawJvm/code.scm 1 */

								BgL_cportz00_5168 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5176, BgL_startz00_5177, BgL_endz00_5178);
				}}}}
				{
					long BgL_iz00_5169;

					BgL_iz00_5169 = ((long) 112);
				BgL_loopz00_5170:
					if ((BgL_iz00_5169 == ((long) -1)))
						{	/* SawJvm/code.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/code.scm 1 */
							{	/* SawJvm/code.scm 1 */
								obj_t BgL_arg2699z00_5172;

								{	/* SawJvm/code.scm 1 */

									{	/* SawJvm/code.scm 1 */
										obj_t BgL_locationz00_5174;

										BgL_locationz00_5174 = BBOOL(((bool_t) 0));
										{	/* SawJvm/code.scm 1 */

											BgL_arg2699z00_5172 =
												BGl_readz00zz__readerz00(BgL_cportz00_5168,
												BgL_locationz00_5174);
										}
									}
								}
								{	/* SawJvm/code.scm 1 */
									int BgL_tmpz00_5477;

									BgL_tmpz00_5477 = (int) (BgL_iz00_5169);
									CNST_TABLE_SET(BgL_tmpz00_5477, BgL_arg2699z00_5172);
							}}
							{	/* SawJvm/code.scm 1 */
								int BgL_auxz00_5175;

								BgL_auxz00_5175 = (int) ((BgL_iz00_5169 - ((long) 1)));
								{
									long BgL_iz00_5482;

									BgL_iz00_5482 = (long) (BgL_auxz00_5175);
									BgL_iz00_5169 = BgL_iz00_5482;
									goto BgL_loopz00_5170;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			BGl_za2protectresultza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			BGl_za2bexitregza2z00zzsaw_jvm_codez00 = BFALSE;
			BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 = BINT(((long) -1));
			return BUNSPEC;
		}

	}



/* module-code */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt
		BgL_mez00_71, obj_t BgL_paramsz00_72, obj_t BgL_lz00_73)
	{
		{	/* SawJvm/code.scm 46 */
			{	/* SawJvm/code.scm 47 */
				obj_t BgL_locsz00_2699;

				BgL_locsz00_2699 =
					BGl_getzd2localszd2zzsaw_jvm_codez00(BgL_paramsz00_72, BgL_lz00_73);
				BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_71,
					BGl_doubleze70ze7zzsaw_jvm_codez00(BgL_paramsz00_72),
					BGl_doubleze70ze7zzsaw_jvm_codez00(BgL_locsz00_2699));
			}
			if (BGl_za2hasprotectza2z00zzsaw_jvm_codez00)
				{	/* SawJvm/code.scm 57 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 0)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* SawJvm/code.scm 57 */
					BFALSE;
				}
			{	/* SawJvm/code.scm 62 */
				obj_t BgL_pendingz00_2718;

				BgL_pendingz00_2718 = BUNSPEC;
				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 63 */
						BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_71,
							CNST_TABLE_REF(((long) 2)));
						{
							obj_t BgL_l1666z00_2720;

							BgL_l1666z00_2720 = BgL_lz00_73;
						BgL_zc3z04anonymousza31853ze3z87_2721:
							if (PAIRP(BgL_l1666z00_2720))
								{	/* SawJvm/code.scm 65 */
									BGl_livezd2initzd2zzsaw_jvm_codez00(CAR(BgL_l1666z00_2720));
									{
										obj_t BgL_l1666z00_5503;

										BgL_l1666z00_5503 = CDR(BgL_l1666z00_2720);
										BgL_l1666z00_2720 = BgL_l1666z00_5503;
										goto BgL_zc3z04anonymousza31853ze3z87_2721;
									}
								}
							else
								{	/* SawJvm/code.scm 65 */
									((bool_t) 1);
								}
						}
						{
							obj_t BgL_l1668z00_2727;

							BgL_l1668z00_2727 = BgL_lz00_73;
						BgL_zc3z04anonymousza31857ze3z87_2728:
							if (PAIRP(BgL_l1668z00_2727))
								{	/* SawJvm/code.scm 66 */
									BGl_livezd2fixzd2zzsaw_jvm_codez00(CAR(BgL_l1668z00_2727));
									{
										obj_t BgL_l1668z00_5509;

										BgL_l1668z00_5509 = CDR(BgL_l1668z00_2727);
										BgL_l1668z00_2727 = BgL_l1668z00_5509;
										goto BgL_zc3z04anonymousza31857ze3z87_2728;
									}
								}
							else
								{	/* SawJvm/code.scm 66 */
									((bool_t) 1);
								}
						}
						if (NULLP(BgL_paramsz00_72))
							{	/* SawJvm/code.scm 67 */
								BgL_pendingz00_2718 = BNIL;
							}
						else
							{	/* SawJvm/code.scm 67 */
								obj_t BgL_head1672z00_2735;

								{	/* SawJvm/code.scm 67 */
									obj_t BgL_res2463z00_4289;

									BgL_res2463z00_4289 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1672z00_2735 = BgL_res2463z00_4289;
								}
								{
									obj_t BgL_l1670z00_2737;
									obj_t BgL_tail1673z00_2738;

									BgL_l1670z00_2737 = BgL_paramsz00_72;
									BgL_tail1673z00_2738 = BgL_head1672z00_2735;
								BgL_zc3z04anonymousza31863ze3z87_2739:
									if (NULLP(BgL_l1670z00_2737))
										{	/* SawJvm/code.scm 67 */
											BgL_pendingz00_2718 = CDR(BgL_head1672z00_2735);
										}
									else
										{	/* SawJvm/code.scm 67 */
											obj_t BgL_newtail1674z00_2741;

											{	/* SawJvm/code.scm 67 */
												obj_t BgL_arg1866z00_2743;

												{	/* SawJvm/code.scm 67 */
													obj_t BgL_pz00_2744;

													BgL_pz00_2744 = CAR(((obj_t) BgL_l1670z00_2737));
													BgL_arg1866z00_2743 =
														MAKE_YOUNG_PAIR(BgL_pz00_2744,
														CNST_TABLE_REF(((long) 2)));
												}
												{	/* SawJvm/code.scm 67 */
													obj_t BgL_res2465z00_4293;

													BgL_res2465z00_4293 =
														MAKE_YOUNG_PAIR(BgL_arg1866z00_2743, BNIL);
													BgL_newtail1674z00_2741 = BgL_res2465z00_4293;
											}}
											SET_CDR(BgL_tail1673z00_2738, BgL_newtail1674z00_2741);
											{	/* SawJvm/code.scm 67 */
												obj_t BgL_arg1865z00_2742;

												BgL_arg1865z00_2742 = CDR(((obj_t) BgL_l1670z00_2737));
												{
													obj_t BgL_tail1673z00_5526;
													obj_t BgL_l1670z00_5525;

													BgL_l1670z00_5525 = BgL_arg1865z00_2742;
													BgL_tail1673z00_5526 = BgL_newtail1674z00_2741;
													BgL_tail1673z00_2738 = BgL_tail1673z00_5526;
													BgL_l1670z00_2737 = BgL_l1670z00_5525;
													goto BgL_zc3z04anonymousza31863ze3z87_2739;
												}
											}
										}
								}
							}
					}
				else
					{	/* SawJvm/code.scm 63 */
						BFALSE;
					}
				{
					obj_t BgL_l1678z00_2747;

					BgL_l1678z00_2747 = BgL_lz00_73;
				BgL_zc3z04anonymousza31867ze3z87_2748:
					if (PAIRP(BgL_l1678z00_2747))
						{	/* SawJvm/code.scm 68 */
							{	/* SawJvm/code.scm 69 */
								obj_t BgL_bz00_2750;

								BgL_bz00_2750 = CAR(BgL_l1678z00_2747);
								{	/* SawJvm/code.scm 69 */
									int BgL_arg1870z00_2751;

									BgL_arg1870z00_2751 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_bz00_2750)))->BgL_labelz00);
									BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_71,
										BINT(BgL_arg1870z00_2751));
								}
								if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
									{	/* SawJvm/code.scm 70 */
										BgL_pendingz00_2718 =
											BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_mez00_71,
											BgL_bz00_2750, BgL_pendingz00_2718);
									}
								else
									{	/* SawJvm/code.scm 70 */
										BFALSE;
									}
								{	/* SawJvm/code.scm 71 */
									obj_t BgL_g1677z00_2752;

									BgL_g1677z00_2752 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_bz00_2750)))->BgL_firstz00);
									{
										obj_t BgL_l1675z00_2754;

										BgL_l1675z00_2754 = BgL_g1677z00_2752;
									BgL_zc3z04anonymousza31871ze3z87_2755:
										if (PAIRP(BgL_l1675z00_2754))
											{	/* SawJvm/code.scm 72 */
												{	/* SawJvm/code.scm 71 */
													obj_t BgL_iz00_2757;

													BgL_iz00_2757 = CAR(BgL_l1675z00_2754);
													BgL_pendingz00_2718 =
														BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_mez00_71,
														BgL_iz00_2757, BgL_pendingz00_2718);
												}
												{
													obj_t BgL_l1675z00_5543;

													BgL_l1675z00_5543 = CDR(BgL_l1675z00_2754);
													BgL_l1675z00_2754 = BgL_l1675z00_5543;
													goto BgL_zc3z04anonymousza31871ze3z87_2755;
												}
											}
										else
											{	/* SawJvm/code.scm 72 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l1678z00_5545;

								BgL_l1678z00_5545 = CDR(BgL_l1678z00_2747);
								BgL_l1678z00_2747 = BgL_l1678z00_5545;
								goto BgL_zc3z04anonymousza31867ze3z87_2748;
							}
						}
					else
						{	/* SawJvm/code.scm 68 */
							((bool_t) 1);
						}
				}
				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 74 */
						BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_71,
							CNST_TABLE_REF(((long) 3)));
						{
							obj_t BgL_l1680z00_2763;

							BgL_l1680z00_2763 = BgL_pendingz00_2718;
						BgL_zc3z04anonymousza31875ze3z87_2764:
							if (PAIRP(BgL_l1680z00_2763))
								{	/* SawJvm/code.scm 76 */
									{	/* SawJvm/code.scm 76 */
										obj_t BgL_pz00_2766;

										BgL_pz00_2766 = CAR(BgL_l1680z00_2763);
										{	/* SawJvm/code.scm 76 */
											obj_t BgL_arg1877z00_2767;
											obj_t BgL_arg1878z00_2768;

											BgL_arg1877z00_2767 = CAR(((obj_t) BgL_pz00_2766));
											BgL_arg1878z00_2768 = CDR(((obj_t) BgL_pz00_2766));
											{	/* SawJvm/code.scm 76 */
												obj_t BgL_ez00_4308;

												BgL_ez00_4308 = CNST_TABLE_REF(((long) 3));
												{	/* SawJvm/code.scm 205 */
													obj_t BgL_arg1979z00_4310;

													{
														BgL_lregz00_bglt BgL_auxz00_5559;

														{
															obj_t BgL_auxz00_5560;

															{	/* SawJvm/code.scm 205 */
																BgL_objectz00_bglt BgL_tmpz00_5561;

																BgL_tmpz00_5561 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_arg1877z00_2767));
																BgL_auxz00_5560 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5561);
															}
															BgL_auxz00_5559 =
																((BgL_lregz00_bglt) BgL_auxz00_5560);
														}
														BgL_arg1979z00_4310 =
															(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5559))->
															BgL_idz00);
													}
													BGl_localvarz00zzsaw_jvm_outz00(BgL_mez00_71,
														BgL_arg1877z00_2767, BgL_arg1878z00_2768,
														BgL_ez00_4308, BgL_arg1979z00_4310);
									}}}}
									{
										obj_t BgL_l1680z00_5568;

										BgL_l1680z00_5568 = CDR(BgL_l1680z00_2763);
										BgL_l1680z00_2763 = BgL_l1680z00_5568;
										goto BgL_zc3z04anonymousza31875ze3z87_2764;
									}
								}
							else
								{	/* SawJvm/code.scm 76 */
									((bool_t) 1);
								}
						}
					}
				else
					{	/* SawJvm/code.scm 74 */
						((bool_t) 0);
					}
			}
			if (BGl_za2hasprotectza2z00zzsaw_jvm_codez00)
				{	/* SawJvm/code.scm 79 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 4)));
					BGl_loadzd2regzd2zzsaw_jvm_codez00(
						((obj_t) BgL_mez00_71), BGl_za2bexitregza2z00zzsaw_jvm_codez00);
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 5)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 6)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 7)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 8)));
					BGl_loadzd2regzd2zzsaw_jvm_codez00(
						((obj_t) BgL_mez00_71), BGl_za2bexitregza2z00zzsaw_jvm_codez00);
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 5)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 9)));
					return
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_71,
						CNST_TABLE_REF(((long) 7)));
				}
			else
				{	/* SawJvm/code.scm 79 */
					return BFALSE;
				}
		}

	}



/* double~0 */
	obj_t BGl_doubleze70ze7zzsaw_jvm_codez00(obj_t BgL_lz00_2703)
	{
		{	/* SawJvm/code.scm 55 */
			if (NULLP(BgL_lz00_2703))
				{	/* SawJvm/code.scm 49 */
					return BgL_lz00_2703;
				}
			else
				{	/* SawJvm/code.scm 51 */
					obj_t BgL_regz00_2706;
					obj_t BgL_rz00_2707;

					BgL_regz00_2706 = CAR(((obj_t) BgL_lz00_2703));
					{	/* SawJvm/code.scm 51 */
						obj_t BgL_arg1852z00_2716;

						BgL_arg1852z00_2716 = CDR(((obj_t) BgL_lz00_2703));
						BgL_rz00_2707 =
							BGl_doubleze70ze7zzsaw_jvm_codez00(BgL_arg1852z00_2716);
					}
					{	/* SawJvm/code.scm 52 */
						obj_t BgL_typez00_2708;

						BgL_typez00_2708 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_rtl_regz00_bglt) COBJECT(
												((BgL_rtl_regz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_regz00_2706))))->
										BgL_typez00)))->BgL_namez00);
						{	/* SawJvm/code.scm 53 */
							bool_t BgL_test2794z00_5602;

							if ((BgL_typez00_2708 == CNST_TABLE_REF(((long) 10))))
								{	/* SawJvm/code.scm 53 */
									BgL_test2794z00_5602 = ((bool_t) 1);
								}
							else
								{	/* SawJvm/code.scm 53 */
									BgL_test2794z00_5602 =
										(BgL_typez00_2708 == CNST_TABLE_REF(((long) 11)));
								}
							if (BgL_test2794z00_5602)
								{	/* SawJvm/code.scm 54 */
									obj_t BgL_arg1847z00_2711;
									obj_t BgL_arg1848z00_2712;

									{
										BgL_lregz00_bglt BgL_auxz00_5608;

										{
											obj_t BgL_auxz00_5609;

											{	/* SawJvm/code.scm 54 */
												BgL_objectz00_bglt BgL_tmpz00_5610;

												BgL_tmpz00_5610 =
													((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_regz00_2706));
												BgL_auxz00_5609 = BGL_OBJECT_WIDENING(BgL_tmpz00_5610);
											}
											BgL_auxz00_5608 = ((BgL_lregz00_bglt) BgL_auxz00_5609);
										}
										BgL_arg1847z00_2711 =
											(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5608))->
											BgL_idz00);
									}
									BgL_arg1848z00_2712 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BgL_rz00_2707);
									return
										MAKE_YOUNG_PAIR(BgL_arg1847z00_2711, BgL_arg1848z00_2712);
								}
							else
								{	/* SawJvm/code.scm 55 */
									obj_t BgL_arg1850z00_2713;

									{
										BgL_lregz00_bglt BgL_auxz00_5619;

										{
											obj_t BgL_auxz00_5620;

											{	/* SawJvm/code.scm 55 */
												BgL_objectz00_bglt BgL_tmpz00_5621;

												BgL_tmpz00_5621 =
													((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_regz00_2706));
												BgL_auxz00_5620 = BGL_OBJECT_WIDENING(BgL_tmpz00_5621);
											}
											BgL_auxz00_5619 = ((BgL_lregz00_bglt) BgL_auxz00_5620);
										}
										BgL_arg1850z00_2713 =
											(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5619))->
											BgL_idz00);
									}
									return MAKE_YOUNG_PAIR(BgL_arg1850z00_2713, BgL_rz00_2707);
								}
						}
					}
				}
		}

	}



/* &module-code */
	obj_t BGl_z62modulezd2codezb0zzsaw_jvm_codez00(obj_t BgL_envz00_4894,
		obj_t BgL_mez00_4895, obj_t BgL_paramsz00_4896, obj_t BgL_lz00_4897)
	{
		{	/* SawJvm/code.scm 46 */
			return
				BGl_modulezd2codezd2zzsaw_jvm_codez00(
				((BgL_jvmz00_bglt) BgL_mez00_4895), BgL_paramsz00_4896, BgL_lz00_4897);
		}

	}



/* get-locals */
	obj_t BGl_getzd2localszd2zzsaw_jvm_codez00(obj_t BgL_paramsz00_74,
		obj_t BgL_lz00_75)
	{
		{	/* SawJvm/code.scm 96 */
			BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 0);
			{	/* SawJvm/code.scm 98 */
				struct bgl_cell BgL_box2796_5162z00;
				struct bgl_cell BgL_box2797_5163z00;
				obj_t BgL_nz00_5162;
				obj_t BgL_regsz00_5163;

				BgL_nz00_5162 = MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2796_5162z00);
				BgL_regsz00_5163 = MAKE_CELL_STACK(BNIL, BgL_box2797_5163z00);
				{
					obj_t BgL_ez00_2845;

					{
						obj_t BgL_lz00_2780;

						BgL_lz00_2780 = BgL_paramsz00_74;
					BgL_zc3z04anonymousza31880ze3z87_2781:
						if (NULLP(BgL_lz00_2780))
							{	/* SawJvm/code.scm 134 */
								((bool_t) 0);
							}
						else
							{	/* SawJvm/code.scm 134 */
								{	/* SawJvm/code.scm 135 */
									BgL_rtl_regz00_bglt BgL_tmp1195z00_2783;

									BgL_tmp1195z00_2783 =
										((BgL_rtl_regz00_bglt) CAR(((obj_t) BgL_lz00_2780)));
									{	/* SawJvm/code.scm 135 */
										BgL_lregz00_bglt BgL_wide1197z00_2785;

										BgL_wide1197z00_2785 =
											((BgL_lregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_lregz00_bgl))));
										{	/* SawJvm/code.scm 135 */
											obj_t BgL_auxz00_5640;
											BgL_objectz00_bglt BgL_tmpz00_5637;

											BgL_auxz00_5640 = ((obj_t) BgL_wide1197z00_2785);
											BgL_tmpz00_5637 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5637, BgL_auxz00_5640);
										}
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783));
										{	/* SawJvm/code.scm 135 */
											long BgL_arg1882z00_2786;

											{	/* SawJvm/code.scm 135 */
												long BgL_res2480z00_4353;

												BgL_res2480z00_4353 =
													BGL_CLASS_INDEX(BGl_lregz00zzsaw_jvm_codez00);
												BgL_arg1882z00_2786 = BgL_res2480z00_4353;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783)),
												BgL_arg1882z00_2786);
										}
										((BgL_rtl_regz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783));
									}
									{
										obj_t BgL_auxz00_5658;
										BgL_lregz00_bglt BgL_auxz00_5651;

										{	/* SawJvm/code.scm 135 */
											long BgL_nz00_4357;

											BgL_nz00_4357 = (long) CINT(CELL_REF(BgL_nz00_5162));
											{	/* SawJvm/code.scm 100 */
												obj_t BgL_arg1893z00_4358;

												{	/* SawJvm/code.scm 100 */
													obj_t BgL_arg1895z00_4359;

													{	/* SawJvm/code.scm 100 */

														BgL_arg1895z00_4359 =
															BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
															(BgL_nz00_4357, ((long) 10));
													}
													BgL_arg1893z00_4358 =
														string_append(BGl_string2626z00zzsaw_jvm_codez00,
														BgL_arg1895z00_4359);
												}
												{	/* SawJvm/code.scm 100 */
													obj_t BgL_res2481z00_4363;

													BgL_res2481z00_4363 =
														bstring_to_symbol(BgL_arg1893z00_4358);
													BgL_auxz00_5658 = BgL_res2481z00_4363;
										}}}
										{
											obj_t BgL_auxz00_5652;

											{	/* SawJvm/code.scm 135 */
												BgL_objectz00_bglt BgL_tmpz00_5653;

												BgL_tmpz00_5653 =
													((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783));
												BgL_auxz00_5652 = BGL_OBJECT_WIDENING(BgL_tmpz00_5653);
											}
											BgL_auxz00_5651 = ((BgL_lregz00_bglt) BgL_auxz00_5652);
										}
										((((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5651))->
												BgL_idz00) = ((obj_t) BgL_auxz00_5658), BUNSPEC);
									}
									((BgL_rtl_regz00_bglt) BgL_tmp1195z00_2783);
								}
								{	/* SawJvm/code.scm 136 */
									obj_t BgL_auxz00_5164;

									BgL_auxz00_5164 =
										ADDFX(CELL_REF(BgL_nz00_5162), BINT(((long) 1)));
									CELL_SET(BgL_nz00_5162, BgL_auxz00_5164);
								}
								{	/* SawJvm/code.scm 137 */
									obj_t BgL_arg1883z00_2788;

									BgL_arg1883z00_2788 = CDR(((obj_t) BgL_lz00_2780));
									{
										obj_t BgL_lz00_5669;

										BgL_lz00_5669 = BgL_arg1883z00_2788;
										BgL_lz00_2780 = BgL_lz00_5669;
										goto BgL_zc3z04anonymousza31880ze3z87_2781;
									}
								}
							}
					}
					{
						obj_t BgL_l1691z00_2791;

						BgL_l1691z00_2791 = BgL_lz00_75;
					BgL_zc3z04anonymousza31884ze3z87_2792:
						if (PAIRP(BgL_l1691z00_2791))
							{	/* SawJvm/code.scm 138 */
								{	/* SawJvm/code.scm 138 */
									obj_t BgL_bz00_2794;

									BgL_bz00_2794 = CAR(BgL_l1691z00_2791);
									{	/* SawJvm/code.scm 138 */
										obj_t BgL_g1690z00_2795;

										BgL_g1690z00_2795 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_2794)))->BgL_firstz00);
										{
											obj_t BgL_l1688z00_2797;

											BgL_l1688z00_2797 = BgL_g1690z00_2795;
										BgL_zc3z04anonymousza31886ze3z87_2798:
											if (PAIRP(BgL_l1688z00_2797))
												{	/* SawJvm/code.scm 138 */
													BgL_ez00_2845 = CAR(BgL_l1688z00_2797);
													{	/* SawJvm/code.scm 129 */
														obj_t BgL_destz00_2847;

														BgL_destz00_2847 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_ez00_2845)))->
															BgL_destz00);
														if (CBOOL(BgL_destz00_2847))
															{	/* SawJvm/code.scm 130 */
																BGl_regzd2ze3lregze70zd6zzsaw_jvm_codez00
																	(BgL_regsz00_5163, BgL_nz00_5162,
																	BgL_destz00_2847);
															}
														else
															{	/* SawJvm/code.scm 130 */
																BFALSE;
															}
														BGl_check_funze70ze7zzsaw_jvm_codez00
															(BgL_ez00_2845);
														{	/* SawJvm/code.scm 132 */
															obj_t BgL_g1687z00_2848;

															BgL_g1687z00_2848 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_ez00_2845)))->
																BgL_argsz00);
															{
																obj_t BgL_l1685z00_2850;

																BgL_l1685z00_2850 = BgL_g1687z00_2848;
															BgL_zc3z04anonymousza31913ze3z87_2851:
																if (PAIRP(BgL_l1685z00_2850))
																	{	/* SawJvm/code.scm 132 */
																		BGl_exprze70ze7zzsaw_jvm_codez00
																			(BgL_regsz00_5163, BgL_nz00_5162,
																			CAR(BgL_l1685z00_2850));
																		{
																			obj_t BgL_l1685z00_5689;

																			BgL_l1685z00_5689 =
																				CDR(BgL_l1685z00_2850);
																			BgL_l1685z00_2850 = BgL_l1685z00_5689;
																			goto
																				BgL_zc3z04anonymousza31913ze3z87_2851;
																		}
																	}
																else
																	{	/* SawJvm/code.scm 132 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l1688z00_5692;

														BgL_l1688z00_5692 = CDR(BgL_l1688z00_2797);
														BgL_l1688z00_2797 = BgL_l1688z00_5692;
														goto BgL_zc3z04anonymousza31886ze3z87_2798;
													}
												}
											else
												{	/* SawJvm/code.scm 138 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1691z00_5694;

									BgL_l1691z00_5694 = CDR(BgL_l1691z00_2791);
									BgL_l1691z00_2791 = BgL_l1691z00_5694;
									goto BgL_zc3z04anonymousza31884ze3z87_2792;
								}
							}
						else
							{	/* SawJvm/code.scm 138 */
								((bool_t) 1);
							}
					}
					return bgl_reverse_bang(CELL_REF(BgL_regsz00_5163));
				}
			}
		}

	}



/* reg->lreg~0 */
	obj_t BGl_regzd2ze3lregze70zd6zzsaw_jvm_codez00(obj_t BgL_regsz00_5157,
		obj_t BgL_nz00_5156, obj_t BgL_rz00_2812)
	{
		{	/* SawJvm/code.scm 106 */
			if (BGl_isazf3zf3zz__objectz00(BgL_rz00_2812,
					BGl_lregz00zzsaw_jvm_codez00))
				{	/* SawJvm/code.scm 103 */
					return BFALSE;
				}
			else
				{	/* SawJvm/code.scm 103 */
					{	/* SawJvm/code.scm 104 */
						BgL_lregz00_bglt BgL_wide1190z00_2817;

						BgL_wide1190z00_2817 =
							((BgL_lregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_lregz00_bgl))));
						{	/* SawJvm/code.scm 104 */
							obj_t BgL_auxz00_5704;
							BgL_objectz00_bglt BgL_tmpz00_5700;

							BgL_auxz00_5704 = ((obj_t) BgL_wide1190z00_2817);
							BgL_tmpz00_5700 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2812)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5700, BgL_auxz00_5704);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2812)));
						{	/* SawJvm/code.scm 104 */
							long BgL_arg1898z00_2818;

							{	/* SawJvm/code.scm 104 */
								long BgL_res2471z00_4322;

								BgL_res2471z00_4322 =
									BGL_CLASS_INDEX(BGl_lregz00zzsaw_jvm_codez00);
								BgL_arg1898z00_2818 = BgL_res2471z00_4322;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2812))),
								BgL_arg1898z00_2818);
						}
						((BgL_rtl_regz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2812)));
					}
					{
						obj_t BgL_auxz00_5726;
						BgL_lregz00_bglt BgL_auxz00_5718;

						{	/* SawJvm/code.scm 104 */
							long BgL_nz00_4326;

							BgL_nz00_4326 = (long) CINT(CELL_REF(BgL_nz00_5156));
							{	/* SawJvm/code.scm 100 */
								obj_t BgL_arg1893z00_4327;

								{	/* SawJvm/code.scm 100 */
									obj_t BgL_arg1895z00_4328;

									{	/* SawJvm/code.scm 100 */

										BgL_arg1895z00_4328 =
											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_nz00_4326, ((long) 10));
									}
									BgL_arg1893z00_4327 =
										string_append(BGl_string2627z00zzsaw_jvm_codez00,
										BgL_arg1895z00_4328);
								}
								{	/* SawJvm/code.scm 100 */
									obj_t BgL_res2472z00_4332;

									BgL_res2472z00_4332 = bstring_to_symbol(BgL_arg1893z00_4327);
									BgL_auxz00_5726 = BgL_res2472z00_4332;
						}}}
						{
							obj_t BgL_auxz00_5719;

							{	/* SawJvm/code.scm 104 */
								BgL_objectz00_bglt BgL_tmpz00_5720;

								BgL_tmpz00_5720 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2812)));
								BgL_auxz00_5719 = BGL_OBJECT_WIDENING(BgL_tmpz00_5720);
							}
							BgL_auxz00_5718 = ((BgL_lregz00_bglt) BgL_auxz00_5719);
						}
						((((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5718))->BgL_idz00) =
							((obj_t) BgL_auxz00_5726), BUNSPEC);
					}
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2812));
					{	/* SawJvm/code.scm 105 */
						obj_t BgL_auxz00_5158;

						BgL_auxz00_5158 = ADDFX(CELL_REF(BgL_nz00_5156), BINT(((long) 1)));
						CELL_SET(BgL_nz00_5156, BgL_auxz00_5158);
					}
					{	/* SawJvm/code.scm 106 */
						obj_t BgL_auxz00_5159;

						BgL_auxz00_5159 =
							MAKE_YOUNG_PAIR(BgL_rz00_2812, CELL_REF(BgL_regsz00_5157));
						return CELL_SET(BgL_regsz00_5157, BgL_auxz00_5159);
					}
				}
		}

	}



/* check_fun~0 */
	obj_t BGl_check_funze70ze7zzsaw_jvm_codez00(obj_t BgL_ez00_2829)
	{
		{	/* SawJvm/code.scm 122 */
			{	/* SawJvm/code.scm 117 */
				BgL_rtl_funz00_bglt BgL_funz00_2831;

				BgL_funz00_2831 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_ez00_2829)))->BgL_funz00);
				{	/* SawJvm/code.scm 119 */
					bool_t BgL_test2804z00_5739;

					{	/* SawJvm/code.scm 119 */
						bool_t BgL_res2474z00_4336;

						BgL_res2474z00_4336 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_2831), BGl_rtl_protectz00zzsaw_defsz00);
						BgL_test2804z00_5739 = BgL_res2474z00_4336;
					}
					if (BgL_test2804z00_5739)
						{	/* SawJvm/code.scm 119 */
							BGl_za2hasprotectza2z00zzsaw_jvm_codez00 = ((bool_t) 1);
							return (BGl_za2bexitregza2z00zzsaw_jvm_codez00 =
								(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_ez00_2829)))->BgL_destz00),
								BUNSPEC);
						}
					else
						{	/* SawJvm/code.scm 122 */
							bool_t BgL__ortest_1194z00_2833;

							{	/* SawJvm/code.scm 122 */
								bool_t BgL_res2475z00_4338;

								BgL_res2475z00_4338 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_funz00_2831), BGl_rtl_switchz00zzsaw_defsz00);
								BgL__ortest_1194z00_2833 = BgL_res2475z00_4338;
							}
							if (BgL__ortest_1194z00_2833)
								{	/* SawJvm/code.scm 122 */
									return BBOOL(BgL__ortest_1194z00_2833);
								}
							else
								{	/* SawJvm/code.scm 122 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* expr~0 */
	obj_t BGl_exprze70ze7zzsaw_jvm_codez00(obj_t BgL_regsz00_5161,
		obj_t BgL_nz00_5160, obj_t BgL_ez00_2834)
	{
		{	/* SawJvm/code.scm 127 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2834,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 124 */
					return
						BGl_regzd2ze3lregze70zd6zzsaw_jvm_codez00(BgL_regsz00_5161,
						BgL_nz00_5160, BgL_ez00_2834);
				}
			else
				{	/* SawJvm/code.scm 124 */
					BGl_check_funze70ze7zzsaw_jvm_codez00(BgL_ez00_2834);
					{	/* SawJvm/code.scm 127 */
						obj_t BgL_g1684z00_2837;

						BgL_g1684z00_2837 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_ez00_2834)))->BgL_argsz00);
						{
							obj_t BgL_l1682z00_2839;

							{	/* SawJvm/code.scm 127 */
								bool_t BgL_tmpz00_5754;

								BgL_l1682z00_2839 = BgL_g1684z00_2837;
							BgL_zc3z04anonymousza31908ze3z87_2840:
								if (PAIRP(BgL_l1682z00_2839))
									{	/* SawJvm/code.scm 127 */
										{	/* SawJvm/code.scm 127 */
											obj_t BgL_arg1910z00_2842;

											BgL_arg1910z00_2842 = CAR(BgL_l1682z00_2839);
											BGl_exprze70ze7zzsaw_jvm_codez00(BgL_regsz00_5161,
												BgL_nz00_5160, BgL_arg1910z00_2842);
										}
										{
											obj_t BgL_l1682z00_5759;

											BgL_l1682z00_5759 = CDR(BgL_l1682z00_2839);
											BgL_l1682z00_2839 = BgL_l1682z00_5759;
											goto BgL_zc3z04anonymousza31908ze3z87_2840;
										}
									}
								else
									{	/* SawJvm/code.scm 127 */
										BgL_tmpz00_5754 = ((bool_t) 1);
									}
								return BBOOL(BgL_tmpz00_5754);
							}
						}
					}
				}
		}

	}



/* live-init */
	BgL_blockz00_bglt BGl_livezd2initzd2zzsaw_jvm_codez00(obj_t BgL_bz00_76)
	{
		{	/* SawJvm/code.scm 145 */
			{	/* SawJvm/code.scm 146 */
				BgL_liveblockz00_bglt BgL_wide1201z00_2864;

				BgL_wide1201z00_2864 =
					((BgL_liveblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_liveblockz00_bgl))));
				{	/* SawJvm/code.scm 146 */
					obj_t BgL_auxz00_5767;
					BgL_objectz00_bglt BgL_tmpz00_5763;

					BgL_auxz00_5767 = ((obj_t) BgL_wide1201z00_2864);
					BgL_tmpz00_5763 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5763, BgL_auxz00_5767);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76)));
				{	/* SawJvm/code.scm 146 */
					long BgL_arg1917z00_2865;

					{	/* SawJvm/code.scm 146 */
						long BgL_res2485z00_4376;

						BgL_res2485z00_4376 =
							BGL_CLASS_INDEX(BGl_liveblockz00zzsaw_jvm_codez00);
						BgL_arg1917z00_2865 = BgL_res2485z00_4376;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_76))), BgL_arg1917z00_2865);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76)));
			}
			{
				BgL_liveblockz00_bglt BgL_auxz00_5781;

				{
					obj_t BgL_auxz00_5782;

					{	/* SawJvm/code.scm 146 */
						BgL_objectz00_bglt BgL_tmpz00_5783;

						BgL_tmpz00_5783 =
							((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76)));
						BgL_auxz00_5782 = BGL_OBJECT_WIDENING(BgL_tmpz00_5783);
					}
					BgL_auxz00_5781 = ((BgL_liveblockz00_bglt) BgL_auxz00_5782);
				}
				((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5781))->BgL_inz00) =
					((obj_t) BNIL), BUNSPEC);
			}
			{
				BgL_liveblockz00_bglt BgL_auxz00_5790;

				{
					obj_t BgL_auxz00_5791;

					{	/* SawJvm/code.scm 146 */
						BgL_objectz00_bglt BgL_tmpz00_5792;

						BgL_tmpz00_5792 =
							((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76)));
						BgL_auxz00_5791 = BGL_OBJECT_WIDENING(BgL_tmpz00_5792);
					}
					BgL_auxz00_5790 = ((BgL_liveblockz00_bglt) BgL_auxz00_5791);
				}
				((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5790))->BgL_outz00) =
					((obj_t) BNIL), BUNSPEC);
			}
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_76));
		}

	}



/* live-fix */
	bool_t BGl_livezd2fixzd2zzsaw_jvm_codez00(obj_t BgL_bz00_77)
	{
		{	/* SawJvm/code.scm 148 */
			{	/* SawJvm/code.scm 185 */
				obj_t BgL_arg1918z00_2874;

				{
					BgL_liveblockz00_bglt BgL_auxz00_5801;

					{
						obj_t BgL_auxz00_5802;

						{	/* SawJvm/code.scm 185 */
							BgL_objectz00_bglt BgL_tmpz00_5803;

							BgL_tmpz00_5803 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_77));
							BgL_auxz00_5802 = BGL_OBJECT_WIDENING(BgL_tmpz00_5803);
						}
						BgL_auxz00_5801 = ((BgL_liveblockz00_bglt) BgL_auxz00_5802);
					}
					BgL_arg1918z00_2874 =
						(((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5801))->BgL_outz00);
				}
				return
					BGl_fixpointze70ze7zzsaw_jvm_codez00(BgL_bz00_77,
					BgL_arg1918z00_2874);
			}
		}

	}



/* <@anonymous:1939>~0 */
	bool_t BGl_zc3z04anonymousza31939ze3ze70z60zzsaw_jvm_codez00(obj_t
		BgL_regsz00_5153, obj_t BgL_l1693z00_2904)
	{
		{	/* SawJvm/code.scm 165 */
		BGl_zc3z04anonymousza31939ze3ze70z60zzsaw_jvm_codez00:
			if (PAIRP(BgL_l1693z00_2904))
				{	/* SawJvm/code.scm 165 */
					{	/* SawJvm/code.scm 165 */
						obj_t BgL_az00_2907;

						BgL_az00_2907 = CAR(BgL_l1693z00_2904);
						{	/* SawJvm/code.scm 165 */
							obj_t BgL_auxz00_5154;

							BgL_auxz00_5154 =
								BGl_livezd2argze70z35zzsaw_jvm_codez00(BgL_az00_2907,
								CELL_REF(BgL_regsz00_5153));
							CELL_SET(BgL_regsz00_5153, BgL_auxz00_5154);
						}
					}
					{	/* SawJvm/code.scm 165 */
						obj_t BgL_arg1941z00_2908;

						BgL_arg1941z00_2908 = CDR(BgL_l1693z00_2904);
						{
							obj_t BgL_l1693z00_5815;

							BgL_l1693z00_5815 = BgL_arg1941z00_2908;
							BgL_l1693z00_2904 = BgL_l1693z00_5815;
							goto BGl_zc3z04anonymousza31939ze3ze70z60zzsaw_jvm_codez00;
						}
					}
				}
			else
				{	/* SawJvm/code.scm 165 */
					return ((bool_t) 1);
				}
		}

	}



/* live-args~0 */
	obj_t BGl_livezd2argsze70z35zzsaw_jvm_codez00(obj_t BgL_argsz00_2900,
		obj_t BgL_regsz00_2901)
	{
		{	/* SawJvm/code.scm 165 */
			{	/* SawJvm/code.scm 165 */
				struct bgl_cell BgL_box2809_5155z00;
				obj_t BgL_regsz00_5155;

				BgL_regsz00_5155 =
					MAKE_CELL_STACK(BgL_regsz00_2901, BgL_box2809_5155z00);
				BGl_zc3z04anonymousza31939ze3ze70z60zzsaw_jvm_codez00(BgL_regsz00_5155,
					BgL_argsz00_2900);
				return CELL_REF(BgL_regsz00_5155);
			}
		}

	}



/* live-arg~0 */
	obj_t BGl_livezd2argze70z35zzsaw_jvm_codez00(obj_t BgL_az00_2894,
		obj_t BgL_regsz00_2895)
	{
		{	/* SawJvm/code.scm 163 */
			if (BGl_isazf3zf3zz__objectz00(BgL_az00_2894,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 159 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_az00_2894,
								BgL_regsz00_2895)))
						{	/* SawJvm/code.scm 161 */
							return BgL_regsz00_2895;
						}
					else
						{	/* SawJvm/code.scm 161 */
							return MAKE_YOUNG_PAIR(BgL_az00_2894, BgL_regsz00_2895);
						}
				}
			else
				{	/* SawJvm/code.scm 160 */
					obj_t BgL_arg1937z00_2899;

					BgL_arg1937z00_2899 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_az00_2894)))->BgL_argsz00);
					return
						BGl_livezd2argsze70z35zzsaw_jvm_codez00(BgL_arg1937z00_2899,
						BgL_regsz00_2895);
				}
		}

	}



/* live-instrs~0 */
	obj_t BGl_livezd2instrsze70z35zzsaw_jvm_codez00(obj_t BgL_lz00_2918,
		obj_t BgL_regsz00_2919)
	{
		{	/* SawJvm/code.scm 173 */
			{
				obj_t BgL_insz00_2910;
				obj_t BgL_regsz00_2911;

				if (NULLP(BgL_lz00_2918))
					{	/* SawJvm/code.scm 171 */
						return BgL_regsz00_2919;
					}
				else
					{	/* SawJvm/code.scm 173 */
						obj_t BgL_arg1949z00_2922;
						obj_t BgL_arg1951z00_2923;

						BgL_arg1949z00_2922 = CAR(((obj_t) BgL_lz00_2918));
						{	/* SawJvm/code.scm 173 */
							obj_t BgL_arg1952z00_2924;

							BgL_arg1952z00_2924 = CDR(((obj_t) BgL_lz00_2918));
							BgL_arg1951z00_2923 =
								BGl_livezd2instrsze70z35zzsaw_jvm_codez00(BgL_arg1952z00_2924,
								BgL_regsz00_2919);
						}
						BgL_insz00_2910 = BgL_arg1949z00_2922;
						BgL_regsz00_2911 = BgL_arg1951z00_2923;
						{	/* SawJvm/code.scm 169 */
							obj_t BgL_arg1943z00_2914;
							obj_t BgL_arg1944z00_2915;

							BgL_arg1943z00_2914 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_2910)))->BgL_argsz00);
							if (CBOOL(
									(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_2910)))->
										BgL_destz00)))
								{	/* SawJvm/code.scm 169 */
									BgL_arg1944z00_2915 =
										bgl_remq(
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_2910)))->
											BgL_destz00), BgL_regsz00_2911);
								}
							else
								{	/* SawJvm/code.scm 169 */
									BgL_arg1944z00_2915 = BgL_regsz00_2911;
								}
							return
								BGl_livezd2argsze70z35zzsaw_jvm_codez00(BgL_arg1943z00_2914,
								BgL_arg1944z00_2915);
						}
					}
			}
		}

	}



/* include~0 */
	bool_t BGl_includeze70ze7zzsaw_jvm_codez00(obj_t BgL_l1z00_2875,
		obj_t BgL_l2z00_2876)
	{
		{	/* SawJvm/code.scm 152 */
		BGl_includeze70ze7zzsaw_jvm_codez00:
			if (NULLP(BgL_l1z00_2875))
				{	/* SawJvm/code.scm 150 */
					return ((bool_t) 1);
				}
			else
				{	/* SawJvm/code.scm 150 */
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
									((obj_t) BgL_l1z00_2875)), BgL_l2z00_2876)))
						{
							obj_t BgL_l1z00_5850;

							BgL_l1z00_5850 = CDR(((obj_t) BgL_l1z00_2875));
							BgL_l1z00_2875 = BgL_l1z00_5850;
							goto BGl_includeze70ze7zzsaw_jvm_codez00;
						}
					else
						{	/* SawJvm/code.scm 151 */
							return ((bool_t) 0);
						}
				}
		}

	}



/* fixpoint~0 */
	bool_t BGl_fixpointze70ze7zzsaw_jvm_codez00(obj_t BgL_bz00_2925,
		obj_t BgL_livez00_2926)
	{
		{	/* SawJvm/code.scm 184 */
			{
				obj_t BgL_l1z00_2883;
				obj_t BgL_l2z00_2884;

				{
					BgL_liveblockz00_bglt BgL_auxz00_5853;

					{
						obj_t BgL_auxz00_5854;

						{	/* SawJvm/code.scm 176 */
							BgL_objectz00_bglt BgL_tmpz00_5855;

							BgL_tmpz00_5855 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2925));
							BgL_auxz00_5854 = BGL_OBJECT_WIDENING(BgL_tmpz00_5855);
						}
						BgL_auxz00_5853 = ((BgL_liveblockz00_bglt) BgL_auxz00_5854);
					}
					((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5853))->BgL_outz00) =
						((obj_t) BgL_livez00_2926), BUNSPEC);
				}
				{	/* SawJvm/code.scm 177 */
					obj_t BgL_nlivez00_2929;

					{	/* SawJvm/code.scm 177 */
						obj_t BgL_arg1962z00_2944;

						BgL_arg1962z00_2944 =
							(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt)
										((BgL_blockz00_bglt) BgL_bz00_2925))))->BgL_firstz00);
						BgL_nlivez00_2929 =
							BGl_livezd2instrsze70z35zzsaw_jvm_codez00(BgL_arg1962z00_2944,
							BgL_livez00_2926);
					}
					{	/* SawJvm/code.scm 178 */
						bool_t BgL_test2816z00_5865;

						{	/* SawJvm/code.scm 178 */
							obj_t BgL_arg1961z00_2943;

							{
								BgL_liveblockz00_bglt BgL_auxz00_5866;

								{
									obj_t BgL_auxz00_5867;

									{	/* SawJvm/code.scm 178 */
										BgL_objectz00_bglt BgL_tmpz00_5868;

										BgL_tmpz00_5868 =
											((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_bz00_2925));
										BgL_auxz00_5867 = BGL_OBJECT_WIDENING(BgL_tmpz00_5868);
									}
									BgL_auxz00_5866 = ((BgL_liveblockz00_bglt) BgL_auxz00_5867);
								}
								BgL_arg1961z00_2943 =
									(((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5866))->
									BgL_inz00);
							}
							BgL_test2816z00_5865 =
								BGl_includeze70ze7zzsaw_jvm_codez00(BgL_nlivez00_2929,
								BgL_arg1961z00_2943);
						}
						if (BgL_test2816z00_5865)
							{	/* SawJvm/code.scm 178 */
								return ((bool_t) 0);
							}
						else
							{	/* SawJvm/code.scm 178 */
								{
									BgL_liveblockz00_bglt BgL_auxz00_5875;

									{
										obj_t BgL_auxz00_5876;

										{	/* SawJvm/code.scm 179 */
											BgL_objectz00_bglt BgL_tmpz00_5877;

											BgL_tmpz00_5877 =
												((BgL_objectz00_bglt)
												((BgL_blockz00_bglt) BgL_bz00_2925));
											BgL_auxz00_5876 = BGL_OBJECT_WIDENING(BgL_tmpz00_5877);
										}
										BgL_auxz00_5875 = ((BgL_liveblockz00_bglt) BgL_auxz00_5876);
									}
									((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5875))->
											BgL_inz00) = ((obj_t) BgL_nlivez00_2929), BUNSPEC);
								}
								{	/* SawJvm/code.scm 180 */
									obj_t BgL_g1697z00_2932;

									BgL_g1697z00_2932 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt)
													((BgL_blockz00_bglt) BgL_bz00_2925))))->BgL_predsz00);
									{
										obj_t BgL_l1695z00_2934;

										BgL_l1695z00_2934 = BgL_g1697z00_2932;
									BgL_zc3z04anonymousza31956ze3z87_2935:
										if (PAIRP(BgL_l1695z00_2934))
											{	/* SawJvm/code.scm 180 */
												{	/* SawJvm/code.scm 181 */
													obj_t BgL_pz00_2937;

													BgL_pz00_2937 = CAR(BgL_l1695z00_2934);
													{	/* SawJvm/code.scm 181 */
														obj_t BgL_oz00_2938;

														{
															BgL_liveblockz00_bglt BgL_auxz00_5889;

															{
																obj_t BgL_auxz00_5890;

																{	/* SawJvm/code.scm 181 */
																	BgL_objectz00_bglt BgL_tmpz00_5891;

																	BgL_tmpz00_5891 =
																		((BgL_objectz00_bglt)
																		((BgL_blockz00_bglt) BgL_pz00_2937));
																	BgL_auxz00_5890 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5891);
																}
																BgL_auxz00_5889 =
																	((BgL_liveblockz00_bglt) BgL_auxz00_5890);
															}
															BgL_oz00_2938 =
																(((BgL_liveblockz00_bglt)
																	COBJECT(BgL_auxz00_5889))->BgL_outz00);
														}
														if (BGl_includeze70ze7zzsaw_jvm_codez00
															(BgL_nlivez00_2929, BgL_oz00_2938))
															{	/* SawJvm/code.scm 182 */
																((bool_t) 0);
															}
														else
															{	/* SawJvm/code.scm 183 */
																obj_t BgL_auxz00_5899;

																BgL_l1z00_2883 = BgL_nlivez00_2929;
																BgL_l2z00_2884 = BgL_oz00_2938;
															BgL_zc3z04anonymousza31925ze3z87_2885:
																if (NULLP(BgL_l1z00_2883))
																	{	/* SawJvm/code.scm 154 */
																		BgL_auxz00_5899 = BgL_l2z00_2884;
																	}
																else
																	{	/* SawJvm/code.scm 154 */
																		if (CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(((obj_t) BgL_l1z00_2883)),
																					BgL_l2z00_2884)))
																			{	/* SawJvm/code.scm 155 */
																				obj_t BgL_arg1929z00_2889;

																				BgL_arg1929z00_2889 =
																					CDR(((obj_t) BgL_l1z00_2883));
																				{
																					obj_t BgL_l1z00_5909;

																					BgL_l1z00_5909 = BgL_arg1929z00_2889;
																					BgL_l1z00_2883 = BgL_l1z00_5909;
																					goto
																						BgL_zc3z04anonymousza31925ze3z87_2885;
																				}
																			}
																		else
																			{	/* SawJvm/code.scm 156 */
																				obj_t BgL_arg1930z00_2890;
																				obj_t BgL_arg1931z00_2891;

																				BgL_arg1930z00_2890 =
																					CDR(((obj_t) BgL_l1z00_2883));
																				{	/* SawJvm/code.scm 156 */
																					obj_t BgL_arg1932z00_2892;

																					BgL_arg1932z00_2892 =
																						CAR(((obj_t) BgL_l1z00_2883));
																					BgL_arg1931z00_2891 =
																						MAKE_YOUNG_PAIR(BgL_arg1932z00_2892,
																						BgL_l2z00_2884);
																				}
																				{
																					obj_t BgL_l2z00_5916;
																					obj_t BgL_l1z00_5915;

																					BgL_l1z00_5915 = BgL_arg1930z00_2890;
																					BgL_l2z00_5916 = BgL_arg1931z00_2891;
																					BgL_l2z00_2884 = BgL_l2z00_5916;
																					BgL_l1z00_2883 = BgL_l1z00_5915;
																					goto
																						BgL_zc3z04anonymousza31925ze3z87_2885;
																				}
																			}
																	}
																BGl_fixpointze70ze7zzsaw_jvm_codez00
																	(BgL_pz00_2937, BgL_auxz00_5899);
															}
													}
												}
												{
													obj_t BgL_l1695z00_5918;

													BgL_l1695z00_5918 = CDR(BgL_l1695z00_2934);
													BgL_l1695z00_2934 = BgL_l1695z00_5918;
													goto BgL_zc3z04anonymousza31956ze3z87_2935;
												}
											}
										else
											{	/* SawJvm/code.scm 180 */
												return ((bool_t) 1);
											}
									}
								}
							}
					}
				}
			}
		}

	}



/* live-reset */
	obj_t BGl_livezd2resetzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_78,
		obj_t BgL_bz00_79, obj_t BgL_pendingz00_80)
	{
		{	/* SawJvm/code.scm 187 */
			{	/* SawJvm/code.scm 188 */
				obj_t BgL_labz00_2952;
				obj_t BgL_npendingz00_2953;

				{	/* SawJvm/code.scm 188 */

					{	/* SawJvm/code.scm 188 */

						BgL_labz00_2952 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				BgL_npendingz00_2953 = BNIL;
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_78, BgL_labz00_2952);
				{
					obj_t BgL_l1698z00_2956;

					BgL_l1698z00_2956 = BgL_pendingz00_80;
				BgL_zc3z04anonymousza31963ze3z87_2957:
					if (PAIRP(BgL_l1698z00_2956))
						{	/* SawJvm/code.scm 191 */
							{	/* SawJvm/code.scm 192 */
								obj_t BgL_pz00_2959;

								BgL_pz00_2959 = CAR(BgL_l1698z00_2956);
								{	/* SawJvm/code.scm 192 */
									bool_t BgL_test2822z00_5925;

									{	/* SawJvm/code.scm 192 */
										obj_t BgL_arg1970z00_2965;
										obj_t BgL_arg1971z00_2966;

										BgL_arg1970z00_2965 = CAR(((obj_t) BgL_pz00_2959));
										{
											BgL_liveblockz00_bglt BgL_auxz00_5928;

											{
												obj_t BgL_auxz00_5929;

												{	/* SawJvm/code.scm 192 */
													BgL_objectz00_bglt BgL_tmpz00_5930;

													BgL_tmpz00_5930 =
														((BgL_objectz00_bglt)
														((BgL_blockz00_bglt) BgL_bz00_79));
													BgL_auxz00_5929 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5930);
												}
												BgL_auxz00_5928 =
													((BgL_liveblockz00_bglt) BgL_auxz00_5929);
											}
											BgL_arg1971z00_2966 =
												(((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5928))->
												BgL_inz00);
										}
										BgL_test2822z00_5925 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1970z00_2965, BgL_arg1971z00_2966));
									}
									if (BgL_test2822z00_5925)
										{	/* SawJvm/code.scm 192 */
											BgL_npendingz00_2953 =
												MAKE_YOUNG_PAIR(BgL_pz00_2959, BgL_npendingz00_2953);
										}
									else
										{	/* SawJvm/code.scm 194 */
											obj_t BgL_arg1968z00_2963;
											obj_t BgL_arg1969z00_2964;

											BgL_arg1968z00_2963 = CAR(((obj_t) BgL_pz00_2959));
											BgL_arg1969z00_2964 = CDR(((obj_t) BgL_pz00_2959));
											{	/* SawJvm/code.scm 205 */
												obj_t BgL_arg1979z00_4414;

												{
													BgL_lregz00_bglt BgL_auxz00_5943;

													{
														obj_t BgL_auxz00_5944;

														{	/* SawJvm/code.scm 205 */
															BgL_objectz00_bglt BgL_tmpz00_5945;

															BgL_tmpz00_5945 =
																((BgL_objectz00_bglt)
																((BgL_rtl_regz00_bglt) BgL_arg1968z00_2963));
															BgL_auxz00_5944 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5945);
														}
														BgL_auxz00_5943 =
															((BgL_lregz00_bglt) BgL_auxz00_5944);
													}
													BgL_arg1979z00_4414 =
														(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_5943))->
														BgL_idz00);
												}
												BGl_localvarz00zzsaw_jvm_outz00(BgL_mez00_78,
													BgL_arg1968z00_2963, BgL_arg1969z00_2964,
													BgL_labz00_2952, BgL_arg1979z00_4414);
											}
										}
								}
							}
							{
								obj_t BgL_l1698z00_5952;

								BgL_l1698z00_5952 = CDR(BgL_l1698z00_2956);
								BgL_l1698z00_2956 = BgL_l1698z00_5952;
								goto BgL_zc3z04anonymousza31963ze3z87_2957;
							}
						}
					else
						{	/* SawJvm/code.scm 191 */
							((bool_t) 1);
						}
				}
				{	/* SawJvm/code.scm 196 */
					obj_t BgL_g1702z00_2969;

					{
						BgL_liveblockz00_bglt BgL_auxz00_5954;

						{
							obj_t BgL_auxz00_5955;

							{	/* SawJvm/code.scm 196 */
								BgL_objectz00_bglt BgL_tmpz00_5956;

								BgL_tmpz00_5956 =
									((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_79));
								BgL_auxz00_5955 = BGL_OBJECT_WIDENING(BgL_tmpz00_5956);
							}
							BgL_auxz00_5954 = ((BgL_liveblockz00_bglt) BgL_auxz00_5955);
						}
						BgL_g1702z00_2969 =
							(((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_5954))->BgL_inz00);
					}
					{
						obj_t BgL_l1700z00_2971;

						BgL_l1700z00_2971 = BgL_g1702z00_2969;
					BgL_zc3z04anonymousza31973ze3z87_2972:
						if (PAIRP(BgL_l1700z00_2971))
							{	/* SawJvm/code.scm 196 */
								{	/* SawJvm/code.scm 197 */
									obj_t BgL_iz00_2974;

									BgL_iz00_2974 = CAR(BgL_l1700z00_2971);
									if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_iz00_2974, BgL_npendingz00_2953)))
										{	/* SawJvm/code.scm 197 */
											BFALSE;
										}
									else
										{	/* SawJvm/code.scm 198 */
											obj_t BgL_arg1976z00_2976;

											BgL_arg1976z00_2976 =
												MAKE_YOUNG_PAIR(BgL_iz00_2974, BgL_labz00_2952);
											BgL_npendingz00_2953 =
												MAKE_YOUNG_PAIR(BgL_arg1976z00_2976,
												BgL_npendingz00_2953);
										}
								}
								{
									obj_t BgL_l1700z00_5970;

									BgL_l1700z00_5970 = CDR(BgL_l1700z00_2971);
									BgL_l1700z00_2971 = BgL_l1700z00_5970;
									goto BgL_zc3z04anonymousza31973ze3z87_2972;
								}
							}
						else
							{	/* SawJvm/code.scm 196 */
								((bool_t) 1);
							}
					}
				}
				return BgL_npendingz00_2953;
			}
		}

	}



/* gen-ins */
	obj_t BGl_genzd2inszd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_85,
		obj_t BgL_insz00_86, obj_t BgL_pz00_87)
	{
		{	/* SawJvm/code.scm 210 */
			{	/* SawJvm/code.scm 213 */
				bool_t BgL_test2825z00_5972;

				{	/* SawJvm/code.scm 213 */
					obj_t BgL_arg2002z00_3007;

					{	/* SawJvm/code.scm 213 */
						BgL_rtl_funz00_bglt BgL_arg2003z00_3008;
						obj_t BgL_arg2004z00_3009;

						BgL_arg2003z00_3008 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_funz00);
						BgL_arg2004z00_3009 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_argsz00);
						BgL_arg2002z00_3007 =
							BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00
							(BgL_arg2003z00_3008, ((obj_t) BgL_mez00_85),
							BgL_arg2004z00_3009);
					}
					BgL_test2825z00_5972 =
						(BgL_arg2002z00_3007 == CNST_TABLE_REF(((long) 13)));
				}
				if (BgL_test2825z00_5972)
					{	/* SawJvm/code.scm 213 */
						if (CBOOL(
								(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00)))
							{	/* SawJvm/code.scm 214 */
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_85,
									CNST_TABLE_REF(((long) 14)));
								{	/* SawJvm/code.scm 216 */
									obj_t BgL_arg1985z00_2988;

									BgL_arg1985z00_2988 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00);
									BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_mez00_85,
										BgL_arg1985z00_2988);
							}}
						else
							{	/* SawJvm/code.scm 214 */
								BFALSE;
							}
					}
				else
					{	/* SawJvm/code.scm 213 */
						if (CBOOL(
								(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00)))
							{	/* SawJvm/code.scm 218 */
								obj_t BgL_arg1987z00_2990;

								BgL_arg1987z00_2990 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00);
								BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_mez00_85,
									BgL_arg1987z00_2990);
							}
						else
							{	/* SawJvm/code.scm 220 */
								bool_t BgL_test2828z00_5997;

								{	/* SawJvm/code.scm 220 */
									bool_t BgL_test2829z00_5998;

									{	/* SawJvm/code.scm 220 */
										BgL_rtl_funz00_bglt BgL_arg2001z00_3006;

										BgL_arg2001z00_3006 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_funz00);
										{	/* SawJvm/code.scm 220 */
											bool_t BgL_res2494z00_4424;

											BgL_res2494z00_4424 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg2001z00_3006),
												BGl_rtl_lastz00zzsaw_defsz00);
											BgL_test2829z00_5998 = BgL_res2494z00_4424;
										}
									}
									if (BgL_test2829z00_5998)
										{	/* SawJvm/code.scm 220 */
											BgL_test2828z00_5997 = ((bool_t) 1);
										}
									else
										{	/* SawJvm/code.scm 221 */
											bool_t BgL_test2830z00_6003;

											{	/* SawJvm/code.scm 221 */
												BgL_rtl_funz00_bglt BgL_arg2000z00_3005;

												BgL_arg2000z00_3005 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_insz00_86)))->
													BgL_funz00);
												{	/* SawJvm/code.scm 221 */
													bool_t BgL_res2495z00_4425;

													BgL_res2495z00_4425 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg2000z00_3005),
														BGl_rtl_notseqz00zzsaw_defsz00);
													BgL_test2830z00_6003 = BgL_res2495z00_4425;
												}
											}
											if (BgL_test2830z00_6003)
												{	/* SawJvm/code.scm 221 */
													BgL_test2828z00_5997 = ((bool_t) 1);
												}
											else
												{	/* SawJvm/code.scm 222 */
													BgL_rtl_funz00_bglt BgL_arg1999z00_3004;

													BgL_arg1999z00_3004 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_insz00_86)))->
														BgL_funz00);
													{	/* SawJvm/code.scm 222 */
														bool_t BgL_res2496z00_4426;

														BgL_res2496z00_4426 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_arg1999z00_3004),
															BGl_rtl_effectz00zzsaw_defsz00);
														BgL_test2828z00_5997 = BgL_res2496z00_4426;
													}
												}
										}
								}
								if (BgL_test2828z00_5997)
									{	/* SawJvm/code.scm 220 */
										BFALSE;
									}
								else
									{	/* SawJvm/code.scm 223 */
										int BgL_nz00_2999;

										BgL_nz00_2999 =
											BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_insz00_86);
										if (((long) (BgL_nz00_2999) > ((long) 0)))
											{	/* SawJvm/code.scm 224 */
												if (((long) (BgL_nz00_2999) > ((long) 1)))
													{	/* SawJvm/code.scm 225 */
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_85,
															CNST_TABLE_REF(((long) 15)));
													}
												else
													{	/* SawJvm/code.scm 225 */
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_85,
															CNST_TABLE_REF(((long) 16)));
											}}
										else
											{	/* SawJvm/code.scm 224 */
												BFALSE;
											}
									}
							}
					}
			}
			{	/* SawJvm/code.scm 228 */
				bool_t BgL_test2833z00_6023;

				{	/* SawJvm/code.scm 228 */
					BgL_rtl_funz00_bglt BgL_arg2007z00_3012;

					BgL_arg2007z00_3012 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_funz00);
					{	/* SawJvm/code.scm 228 */
						bool_t BgL_res2499z00_4431;

						BgL_res2499z00_4431 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg2007z00_3012), BGl_rtl_protectz00zzsaw_defsz00);
						BgL_test2833z00_6023 = BgL_res2499z00_4431;
					}
				}
				if (BgL_test2833z00_6023)
					{	/* SawJvm/code.scm 228 */
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_85,
							CNST_TABLE_REF(((long) 17)));
					}
				else
					{	/* SawJvm/code.scm 228 */
						BFALSE;
					}
			}
			{	/* SawJvm/code.scm 229 */
				bool_t BgL_test2834z00_6030;

				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* SawJvm/code.scm 229 */
						BgL_test2834z00_6030 =
							CBOOL(
							(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00));
					}
				else
					{	/* SawJvm/code.scm 229 */
						BgL_test2834z00_6030 = ((bool_t) 0);
					}
				if (BgL_test2834z00_6030)
					{	/* SawJvm/code.scm 230 */
						bool_t BgL_test2836z00_6036;

						{	/* SawJvm/code.scm 230 */
							obj_t BgL_arg2014z00_3020;

							BgL_arg2014z00_3020 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00);
							BgL_test2836z00_6036 =
								CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
								(BgL_arg2014z00_3020, BgL_pz00_87));
						}
						if (BgL_test2836z00_6036)
							{	/* SawJvm/code.scm 230 */
								BFALSE;
							}
						else
							{	/* SawJvm/code.scm 231 */
								obj_t BgL_labz00_3016;

								{	/* SawJvm/code.scm 231 */

									{	/* SawJvm/code.scm 231 */

										BgL_labz00_3016 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
									}
								}
								BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_85, BgL_labz00_3016);
								{	/* SawJvm/code.scm 233 */
									obj_t BgL_arg2012z00_3017;

									{	/* SawJvm/code.scm 233 */
										obj_t BgL_arg2013z00_3018;

										BgL_arg2013z00_3018 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_86)))->BgL_destz00);
										BgL_arg2012z00_3017 =
											MAKE_YOUNG_PAIR(BgL_arg2013z00_3018, BgL_labz00_3016);
									}
									BgL_pz00_87 =
										MAKE_YOUNG_PAIR(BgL_arg2012z00_3017, BgL_pz00_87);
								}
							}
					}
				else
					{	/* SawJvm/code.scm 229 */
						BFALSE;
					}
			}
			return BgL_pz00_87;
		}

	}



/* gen-expr */
	BGL_EXPORTED_DEF obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt
		BgL_mez00_88, obj_t BgL_insz00_89)
	{
		{	/* SawJvm/code.scm 236 */
			if (BGl_isazf3zf3zz__objectz00(BgL_insz00_89,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/code.scm 237 */
					return
						BGl_loadzd2regzd2zzsaw_jvm_codez00(
						((obj_t) BgL_mez00_88), BgL_insz00_89);
				}
			else
				{	/* SawJvm/code.scm 240 */
					bool_t BgL_test2838z00_6051;

					{	/* SawJvm/code.scm 240 */
						obj_t BgL_arg2020z00_3027;

						{	/* SawJvm/code.scm 240 */
							BgL_rtl_funz00_bglt BgL_arg2021z00_3028;
							obj_t BgL_arg2022z00_3029;

							BgL_arg2021z00_3028 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_89)))->BgL_funz00);
							BgL_arg2022z00_3029 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_89)))->BgL_argsz00);
							BgL_arg2020z00_3027 =
								BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00
								(BgL_arg2021z00_3028, ((obj_t) BgL_mez00_88),
								BgL_arg2022z00_3029);
						}
						BgL_test2838z00_6051 =
							(BgL_arg2020z00_3027 == CNST_TABLE_REF(((long) 13)));
					}
					if (BgL_test2838z00_6051)
						{	/* SawJvm/code.scm 240 */
							return
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_88,
								CNST_TABLE_REF(((long) 14)));
						}
					else
						{	/* SawJvm/code.scm 240 */
							return BFALSE;
						}
				}
		}

	}



/* &gen-expr */
	obj_t BGl_z62genzd2exprzb0zzsaw_jvm_codez00(obj_t BgL_envz00_4898,
		obj_t BgL_mez00_4899, obj_t BgL_insz00_4900)
	{
		{	/* SawJvm/code.scm 236 */
			return
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
				((BgL_jvmz00_bglt) BgL_mez00_4899), BgL_insz00_4900);
		}

	}



/* load-reg */
	obj_t BGl_loadzd2regzd2zzsaw_jvm_codez00(obj_t BgL_mez00_90,
		obj_t BgL_rz00_91)
	{
		{	/* SawJvm/code.scm 243 */
			{	/* SawJvm/code.scm 245 */
				obj_t BgL_arg2023z00_3030;

				{	/* SawJvm/code.scm 245 */
					obj_t BgL_arg2026z00_3031;
					obj_t BgL_arg2028z00_3032;

					{	/* SawJvm/code.scm 245 */
						obj_t BgL_casezd2valuezd2_3033;

						BgL_casezd2valuezd2_3033 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_rtl_regz00_bglt) COBJECT(
												((BgL_rtl_regz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_rz00_91))))->
										BgL_typez00)))->BgL_namez00);
						{	/* SawJvm/code.scm 245 */
							bool_t BgL_test2839z00_6068;

							{	/* SawJvm/code.scm 245 */
								bool_t BgL__ortest_1209z00_3043;

								BgL__ortest_1209z00_3043 =
									(BgL_casezd2valuezd2_3033 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_1209z00_3043)
									{	/* SawJvm/code.scm 245 */
										BgL_test2839z00_6068 = BgL__ortest_1209z00_3043;
									}
								else
									{	/* SawJvm/code.scm 245 */
										bool_t BgL__ortest_1210z00_3044;

										BgL__ortest_1210z00_3044 =
											(BgL_casezd2valuezd2_3033 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_1210z00_3044)
											{	/* SawJvm/code.scm 245 */
												BgL_test2839z00_6068 = BgL__ortest_1210z00_3044;
											}
										else
											{	/* SawJvm/code.scm 245 */
												bool_t BgL__ortest_1211z00_3045;

												BgL__ortest_1211z00_3045 =
													(BgL_casezd2valuezd2_3033 ==
													CNST_TABLE_REF(((long) 20)));
												if (BgL__ortest_1211z00_3045)
													{	/* SawJvm/code.scm 245 */
														BgL_test2839z00_6068 = BgL__ortest_1211z00_3045;
													}
												else
													{	/* SawJvm/code.scm 245 */
														bool_t BgL__ortest_1212z00_3046;

														BgL__ortest_1212z00_3046 =
															(BgL_casezd2valuezd2_3033 ==
															CNST_TABLE_REF(((long) 21)));
														if (BgL__ortest_1212z00_3046)
															{	/* SawJvm/code.scm 245 */
																BgL_test2839z00_6068 = BgL__ortest_1212z00_3046;
															}
														else
															{	/* SawJvm/code.scm 245 */
																BgL_test2839z00_6068 =
																	(BgL_casezd2valuezd2_3033 ==
																	CNST_TABLE_REF(((long) 22)));
							}}}}}
							if (BgL_test2839z00_6068)
								{	/* SawJvm/code.scm 245 */
									BgL_arg2026z00_3031 = CNST_TABLE_REF(((long) 23));
								}
							else
								{	/* SawJvm/code.scm 245 */
									if ((BgL_casezd2valuezd2_3033 == CNST_TABLE_REF(((long) 11))))
										{	/* SawJvm/code.scm 245 */
											BgL_arg2026z00_3031 = CNST_TABLE_REF(((long) 24));
										}
									else
										{	/* SawJvm/code.scm 245 */
											if (
												(BgL_casezd2valuezd2_3033 ==
													CNST_TABLE_REF(((long) 25))))
												{	/* SawJvm/code.scm 245 */
													BgL_arg2026z00_3031 = CNST_TABLE_REF(((long) 26));
												}
											else
												{	/* SawJvm/code.scm 245 */
													if (
														(BgL_casezd2valuezd2_3033 ==
															CNST_TABLE_REF(((long) 10))))
														{	/* SawJvm/code.scm 245 */
															BgL_arg2026z00_3031 = CNST_TABLE_REF(((long) 27));
														}
													else
														{	/* SawJvm/code.scm 245 */
															BgL_arg2026z00_3031 = CNST_TABLE_REF(((long) 28));
					}}}}}}
					{	/* SawJvm/code.scm 251 */
						obj_t BgL_arg2034z00_3048;

						{
							BgL_lregz00_bglt BgL_auxz00_6097;

							{
								obj_t BgL_auxz00_6098;

								{	/* SawJvm/code.scm 251 */
									BgL_objectz00_bglt BgL_tmpz00_6099;

									BgL_tmpz00_6099 =
										((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_91));
									BgL_auxz00_6098 = BGL_OBJECT_WIDENING(BgL_tmpz00_6099);
								}
								BgL_auxz00_6097 = ((BgL_lregz00_bglt) BgL_auxz00_6098);
							}
							BgL_arg2034z00_3048 =
								(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6097))->BgL_idz00);
						}
						BgL_arg2028z00_3032 = MAKE_YOUNG_PAIR(BgL_arg2034z00_3048, BNIL);
					}
					BgL_arg2023z00_3030 =
						MAKE_YOUNG_PAIR(BgL_arg2026z00_3031, BgL_arg2028z00_3032);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_90), BgL_arg2023z00_3030);
			}
		}

	}



/* store-reg */
	obj_t BGl_storezd2regzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt BgL_mez00_92,
		obj_t BgL_rz00_93)
	{
		{	/* SawJvm/code.scm 253 */
			{	/* SawJvm/code.scm 255 */
				obj_t BgL_arg2035z00_3049;

				{	/* SawJvm/code.scm 255 */
					obj_t BgL_arg2036z00_3050;
					obj_t BgL_arg2037z00_3051;

					{	/* SawJvm/code.scm 255 */
						obj_t BgL_casezd2valuezd2_3052;

						BgL_casezd2valuezd2_3052 =
							(((BgL_typez00_bglt) COBJECT(
									(((BgL_rtl_regz00_bglt) COBJECT(
												((BgL_rtl_regz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_rz00_93))))->
										BgL_typez00)))->BgL_namez00);
						{	/* SawJvm/code.scm 255 */
							bool_t BgL_test2847z00_6113;

							{	/* SawJvm/code.scm 255 */
								bool_t BgL__ortest_1213z00_3062;

								BgL__ortest_1213z00_3062 =
									(BgL_casezd2valuezd2_3052 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_1213z00_3062)
									{	/* SawJvm/code.scm 255 */
										BgL_test2847z00_6113 = BgL__ortest_1213z00_3062;
									}
								else
									{	/* SawJvm/code.scm 255 */
										bool_t BgL__ortest_1214z00_3063;

										BgL__ortest_1214z00_3063 =
											(BgL_casezd2valuezd2_3052 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_1214z00_3063)
											{	/* SawJvm/code.scm 255 */
												BgL_test2847z00_6113 = BgL__ortest_1214z00_3063;
											}
										else
											{	/* SawJvm/code.scm 255 */
												bool_t BgL__ortest_1215z00_3064;

												BgL__ortest_1215z00_3064 =
													(BgL_casezd2valuezd2_3052 ==
													CNST_TABLE_REF(((long) 20)));
												if (BgL__ortest_1215z00_3064)
													{	/* SawJvm/code.scm 255 */
														BgL_test2847z00_6113 = BgL__ortest_1215z00_3064;
													}
												else
													{	/* SawJvm/code.scm 255 */
														bool_t BgL__ortest_1216z00_3065;

														BgL__ortest_1216z00_3065 =
															(BgL_casezd2valuezd2_3052 ==
															CNST_TABLE_REF(((long) 21)));
														if (BgL__ortest_1216z00_3065)
															{	/* SawJvm/code.scm 255 */
																BgL_test2847z00_6113 = BgL__ortest_1216z00_3065;
															}
														else
															{	/* SawJvm/code.scm 255 */
																BgL_test2847z00_6113 =
																	(BgL_casezd2valuezd2_3052 ==
																	CNST_TABLE_REF(((long) 22)));
							}}}}}
							if (BgL_test2847z00_6113)
								{	/* SawJvm/code.scm 255 */
									BgL_arg2036z00_3050 = CNST_TABLE_REF(((long) 29));
								}
							else
								{	/* SawJvm/code.scm 255 */
									if ((BgL_casezd2valuezd2_3052 == CNST_TABLE_REF(((long) 11))))
										{	/* SawJvm/code.scm 255 */
											BgL_arg2036z00_3050 = CNST_TABLE_REF(((long) 30));
										}
									else
										{	/* SawJvm/code.scm 255 */
											if (
												(BgL_casezd2valuezd2_3052 ==
													CNST_TABLE_REF(((long) 25))))
												{	/* SawJvm/code.scm 255 */
													BgL_arg2036z00_3050 = CNST_TABLE_REF(((long) 31));
												}
											else
												{	/* SawJvm/code.scm 255 */
													if (
														(BgL_casezd2valuezd2_3052 ==
															CNST_TABLE_REF(((long) 10))))
														{	/* SawJvm/code.scm 255 */
															BgL_arg2036z00_3050 = CNST_TABLE_REF(((long) 32));
														}
													else
														{	/* SawJvm/code.scm 255 */
															BgL_arg2036z00_3050 = CNST_TABLE_REF(((long) 33));
					}}}}}}
					{	/* SawJvm/code.scm 261 */
						obj_t BgL_arg2044z00_3067;

						{
							BgL_lregz00_bglt BgL_auxz00_6142;

							{
								obj_t BgL_auxz00_6143;

								{	/* SawJvm/code.scm 261 */
									BgL_objectz00_bglt BgL_tmpz00_6144;

									BgL_tmpz00_6144 =
										((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_93));
									BgL_auxz00_6143 = BGL_OBJECT_WIDENING(BgL_tmpz00_6144);
								}
								BgL_auxz00_6142 = ((BgL_lregz00_bglt) BgL_auxz00_6143);
							}
							BgL_arg2044z00_3067 =
								(((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6142))->BgL_idz00);
						}
						BgL_arg2037z00_3051 = MAKE_YOUNG_PAIR(BgL_arg2044z00_3067, BNIL);
					}
					BgL_arg2035z00_3049 =
						MAKE_YOUNG_PAIR(BgL_arg2036z00_3050, BgL_arg2037z00_3051);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_92, BgL_arg2035z00_3049);
			}
		}

	}



/* out-line */
	obj_t BGl_outzd2linezd2zzsaw_jvm_codez00(obj_t BgL_mez00_94,
		BgL_rtl_funz00_bglt BgL_funz00_95)
	{
		{	/* SawJvm/code.scm 267 */
			{	/* SawJvm/code.scm 268 */
				obj_t BgL_locz00_3068;

				BgL_locz00_3068 =
					(((BgL_rtl_funz00_bglt) COBJECT(BgL_funz00_95))->BgL_locz00);
				{	/* SawJvm/code.scm 269 */
					bool_t BgL_test2855z00_6154;

					if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
						{	/* SawJvm/code.scm 269 */
							if (STRUCTP(BgL_locz00_3068))
								{	/* SawJvm/code.scm 269 */
									BgL_test2855z00_6154 =
										(STRUCT_KEY(BgL_locz00_3068) ==
										CNST_TABLE_REF(((long) 34)));
								}
							else
								{	/* SawJvm/code.scm 269 */
									BgL_test2855z00_6154 = ((bool_t) 0);
								}
						}
					else
						{	/* SawJvm/code.scm 269 */
							BgL_test2855z00_6154 = ((bool_t) 0);
						}
					if (BgL_test2855z00_6154)
						{	/* SawJvm/code.scm 270 */
							obj_t BgL_nz00_3070;

							BgL_nz00_3070 = STRUCT_REF(BgL_locz00_3068, (int) (((long) 2)));
							{	/* SawJvm/code.scm 270 */
								long BgL_pz00_3071;

								BgL_pz00_3071 =
									(
									(long) CINT(STRUCT_REF(BgL_locz00_3068,
											(int) (((long) 1)))) + ((long) 1));
								{	/* SawJvm/code.scm 271 */
									obj_t BgL_lastz00_3072;

									if (CBOOL(BGl_za2jvmzd2charzd2infoza2z00zzjas_asz00))
										{	/* SawJvm/code.scm 272 */
											BgL_lastz00_3072 = BINT(BgL_pz00_3071);
										}
									else
										{	/* SawJvm/code.scm 272 */
											BgL_lastz00_3072 = BgL_nz00_3070;
										}
									{	/* SawJvm/code.scm 272 */

										if (
											((long) CINT(BgL_lastz00_3072) ==
												(long) CINT(BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00)))
											{	/* SawJvm/code.scm 275 */
												return BFALSE;
											}
										else
											{	/* SawJvm/code.scm 275 */
												BGl_za2lastzd2lineza2zd2zzsaw_jvm_codez00 =
													BgL_lastz00_3072;
												{	/* SawJvm/code.scm 277 */
													obj_t BgL_arg2047z00_3074;

													{	/* SawJvm/code.scm 277 */
														obj_t BgL_arg2048z00_3075;

														{	/* SawJvm/code.scm 277 */
															obj_t BgL_arg2049z00_3076;

															BgL_arg2049z00_3076 =
																MAKE_YOUNG_PAIR(BINT(BgL_pz00_3071), BNIL);
															BgL_arg2048z00_3075 =
																MAKE_YOUNG_PAIR(BgL_nz00_3070,
																BgL_arg2049z00_3076);
														}
														BgL_arg2047z00_3074 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
															BgL_arg2048z00_3075);
													}
													return
														BGl_codez12z12zzsaw_jvm_outz00(
														((BgL_jvmz00_bglt) BgL_mez00_94),
														BgL_arg2047z00_3074);
												}
											}
									}
								}
							}
						}
					else
						{	/* SawJvm/code.scm 269 */
							return BFALSE;
						}
				}
			}
		}

	}



/* intify */
	obj_t BGl_intifyz00zzsaw_jvm_codez00(obj_t BgL_xz00_124)
	{
		{	/* SawJvm/code.scm 400 */
			if (INTEGERP(BgL_xz00_124))
				{	/* SawJvm/code.scm 402 */
					return BgL_xz00_124;
				}
			else
				{	/* SawJvm/code.scm 402 */
					if (BGL_UINT32P(BgL_xz00_124))
						{	/* SawJvm/code.scm 403 */
							long BgL_res2513z00_4469;

							{	/* SawJvm/code.scm 403 */
								uint32_t BgL_xz00_4468;

								BgL_xz00_4468 = BGL_BUINT32_TO_UINT32(BgL_xz00_124);
								BgL_res2513z00_4469 = (long) (BgL_xz00_4468);
							}
							return BINT(BgL_res2513z00_4469);
						}
					else
						{	/* SawJvm/code.scm 403 */
							if (BGL_INT32P(BgL_xz00_124))
								{	/* SawJvm/code.scm 404 */
									long BgL_res2516z00_4475;

									{	/* SawJvm/code.scm 404 */
										int32_t BgL_xz00_4471;

										BgL_xz00_4471 = BGL_BINT32_TO_INT32(BgL_xz00_124);
										{	/* SawJvm/code.scm 404 */
											long BgL_arg1456z00_4472;

											BgL_arg1456z00_4472 = (long) (BgL_xz00_4471);
											{	/* SawJvm/code.scm 404 */
												long BgL_res2515z00_4474;

												BgL_res2515z00_4474 = (long) (BgL_arg1456z00_4472);
												BgL_res2516z00_4475 = BgL_res2515z00_4474;
									}}}
									return BINT(BgL_res2516z00_4475);
								}
							else
								{	/* SawJvm/code.scm 404 */
									return BgL_xz00_124;
								}
						}
				}
		}

	}



/* flat */
	obj_t BGl_flatz00zzsaw_jvm_codez00(obj_t BgL_alz00_127, obj_t BgL_ldefz00_128)
	{
		{	/* SawJvm/code.scm 438 */
			{
				obj_t BgL_alz00_3083;
				obj_t BgL_iz00_3084;
				obj_t BgL_rz00_3085;

				{	/* SawJvm/code.scm 445 */
					obj_t BgL_arg2055z00_3082;

					{	/* SawJvm/code.scm 445 */
						obj_t BgL_pairz00_4504;

						BgL_pairz00_4504 = CAR(((obj_t) BgL_alz00_127));
						BgL_arg2055z00_3082 = CAR(BgL_pairz00_4504);
					}
					BgL_alz00_3083 = BgL_alz00_127;
					BgL_iz00_3084 = BgL_arg2055z00_3082;
					BgL_rz00_3085 = BNIL;
				BgL_zc3z04anonymousza32056ze3z87_3086:
					if (NULLP(BgL_alz00_3083))
						{	/* SawJvm/code.scm 441 */
							return bgl_reverse_bang(BgL_rz00_3085);
						}
					else
						{	/* SawJvm/code.scm 442 */
							bool_t BgL_test2864z00_6201;

							{	/* SawJvm/code.scm 442 */
								long BgL_tmpz00_6202;

								{	/* SawJvm/code.scm 442 */
									obj_t BgL_pairz00_4480;

									BgL_pairz00_4480 = CAR(((obj_t) BgL_alz00_3083));
									BgL_tmpz00_6202 = (long) CINT(CAR(BgL_pairz00_4480));
								}
								BgL_test2864z00_6201 =
									((long) CINT(BgL_iz00_3084) == BgL_tmpz00_6202);
							}
							if (BgL_test2864z00_6201)
								{	/* SawJvm/code.scm 442 */
									obj_t BgL_arg2061z00_3090;
									long BgL_arg2062z00_3091;
									obj_t BgL_arg2063z00_3092;

									BgL_arg2061z00_3090 = CDR(((obj_t) BgL_alz00_3083));
									BgL_arg2062z00_3091 =
										((long) CINT(BgL_iz00_3084) + ((long) 1));
									{	/* SawJvm/code.scm 442 */
										obj_t BgL_arg2065z00_3093;

										{	/* SawJvm/code.scm 442 */
											obj_t BgL_pairz00_4490;

											BgL_pairz00_4490 = CAR(((obj_t) BgL_alz00_3083));
											BgL_arg2065z00_3093 = CDR(BgL_pairz00_4490);
										}
										BgL_arg2063z00_3092 =
											MAKE_YOUNG_PAIR(BgL_arg2065z00_3093, BgL_rz00_3085);
									}
									{
										obj_t BgL_rz00_6220;
										obj_t BgL_iz00_6218;
										obj_t BgL_alz00_6217;

										BgL_alz00_6217 = BgL_arg2061z00_3090;
										BgL_iz00_6218 = BINT(BgL_arg2062z00_3091);
										BgL_rz00_6220 = BgL_arg2063z00_3092;
										BgL_rz00_3085 = BgL_rz00_6220;
										BgL_iz00_3084 = BgL_iz00_6218;
										BgL_alz00_3083 = BgL_alz00_6217;
										goto BgL_zc3z04anonymousza32056ze3z87_3086;
									}
								}
							else
								{	/* SawJvm/code.scm 443 */
									bool_t BgL_test2865z00_6221;

									{	/* SawJvm/code.scm 443 */
										long BgL_tmpz00_6222;

										{	/* SawJvm/code.scm 443 */
											obj_t BgL_pairz00_4494;

											BgL_pairz00_4494 = CAR(((obj_t) BgL_alz00_3083));
											BgL_tmpz00_6222 = (long) CINT(CAR(BgL_pairz00_4494));
										}
										BgL_test2865z00_6221 =
											((long) CINT(BgL_iz00_3084) > BgL_tmpz00_6222);
									}
									if (BgL_test2865z00_6221)
										{	/* SawJvm/code.scm 443 */
											obj_t BgL_arg2068z00_3096;

											BgL_arg2068z00_3096 = CDR(((obj_t) BgL_alz00_3083));
											{
												obj_t BgL_alz00_6231;

												BgL_alz00_6231 = BgL_arg2068z00_3096;
												BgL_alz00_3083 = BgL_alz00_6231;
												goto BgL_zc3z04anonymousza32056ze3z87_3086;
											}
										}
									else
										{	/* SawJvm/code.scm 444 */
											long BgL_arg2069z00_3097;
											obj_t BgL_arg2070z00_3098;

											BgL_arg2069z00_3097 =
												((long) CINT(BgL_iz00_3084) + ((long) 1));
											BgL_arg2070z00_3098 =
												MAKE_YOUNG_PAIR(BgL_ldefz00_128, BgL_rz00_3085);
											{
												obj_t BgL_rz00_6237;
												obj_t BgL_iz00_6235;

												BgL_iz00_6235 = BINT(BgL_arg2069z00_3097);
												BgL_rz00_6237 = BgL_arg2070z00_3098;
												BgL_rz00_3085 = BgL_rz00_6237;
												BgL_iz00_3084 = BgL_iz00_6235;
												goto BgL_zc3z04anonymousza32056ze3z87_3086;
											}
										}
								}
						}
				}
			}
		}

	}



/* gen-funcall */
	obj_t BGl_genzd2funcallzd2zzsaw_jvm_codez00(obj_t BgL_mez00_139,
		obj_t BgL_argsz00_140)
	{
		{	/* SawJvm/code.scm 482 */
			{	/* SawJvm/code.scm 483 */
				long BgL_nz00_3102;

				BgL_nz00_3102 = (bgl_list_length(BgL_argsz00_140) - ((long) 1));
				{

					switch (BgL_nz00_3102)
						{
						case ((long) 0):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 39)));
							break;
						case ((long) 1):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 40)));
							break;
						case ((long) 2):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 41)));
							break;
						case ((long) 3):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 42)));
							break;
						case ((long) 4):

							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 43)));
							break;
						default:
							BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 36)));
							{	/* SawJvm/code.scm 492 */
								obj_t BgL_g1729z00_3106;

								BgL_g1729z00_3106 = CDR(((obj_t) BgL_argsz00_140));
								{
									obj_t BgL_l1727z00_3108;

									BgL_l1727z00_3108 = BgL_g1729z00_3106;
								BgL_zc3z04anonymousza32074ze3z87_3109:
									if (PAIRP(BgL_l1727z00_3108))
										{	/* SawJvm/code.scm 492 */
											BGl_codez12z12zzsaw_jvm_outz00(
												((BgL_jvmz00_bglt) BgL_mez00_139),
												CNST_TABLE_REF(((long) 37)));
											{
												obj_t BgL_l1727z00_6265;

												BgL_l1727z00_6265 = CDR(BgL_l1727z00_3108);
												BgL_l1727z00_3108 = BgL_l1727z00_6265;
												goto BgL_zc3z04anonymousza32074ze3z87_3109;
											}
										}
									else
										{	/* SawJvm/code.scm 492 */
											((bool_t) 1);
										}
								}
							}
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_139), CNST_TABLE_REF(((long) 38)));
		}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			{	/* SawJvm/code.scm 27 */
				obj_t BgL_arg2082z00_3119;
				obj_t BgL_arg2083z00_3120;

				{	/* SawJvm/code.scm 27 */
					obj_t BgL_v1734z00_3148;

					BgL_v1734z00_3148 = create_vector(((long) 1));
					{	/* SawJvm/code.scm 27 */
						obj_t BgL_arg2094z00_3149;

						BgL_arg2094z00_3149 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2629z00zzsaw_jvm_codez00,
							BGl_proc2628z00zzsaw_jvm_codez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 45)));
						VECTOR_SET(BgL_v1734z00_3148, ((long) 0), BgL_arg2094z00_3149);
					}
					BgL_arg2082z00_3119 = BgL_v1734z00_3148;
				}
				{	/* SawJvm/code.scm 27 */
					obj_t BgL_v1735z00_3159;

					BgL_v1735z00_3159 = create_vector(((long) 0));
					BgL_arg2083z00_3120 = BgL_v1735z00_3159;
				}
				BGl_lregz00zzsaw_jvm_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 46)),
					CNST_TABLE_REF(((long) 47)), BGl_rtl_regz00zzsaw_defsz00,
					((long) 43918), BGl_proc2633z00zzsaw_jvm_codez00,
					BGl_proc2632z00zzsaw_jvm_codez00, BFALSE,
					BGl_proc2631z00zzsaw_jvm_codez00, BGl_proc2630z00zzsaw_jvm_codez00,
					BgL_arg2082z00_3119, BgL_arg2083z00_3120);
			}
			{	/* SawJvm/code.scm 28 */
				obj_t BgL_arg2104z00_3168;
				obj_t BgL_arg2105z00_3169;

				{	/* SawJvm/code.scm 28 */
					obj_t BgL_v1736z00_3196;

					BgL_v1736z00_3196 = create_vector(((long) 2));
					{	/* SawJvm/code.scm 28 */
						obj_t BgL_arg2117z00_3197;

						BgL_arg2117z00_3197 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2635z00zzsaw_jvm_codez00,
							BGl_proc2634z00zzsaw_jvm_codez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 45)));
						VECTOR_SET(BgL_v1736z00_3196, ((long) 0), BgL_arg2117z00_3197);
					}
					{	/* SawJvm/code.scm 28 */
						obj_t BgL_arg2122z00_3207;

						BgL_arg2122z00_3207 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									49)), BGl_proc2637z00zzsaw_jvm_codez00,
							BGl_proc2636z00zzsaw_jvm_codez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 45)));
						VECTOR_SET(BgL_v1736z00_3196, ((long) 1), BgL_arg2122z00_3207);
					}
					BgL_arg2104z00_3168 = BgL_v1736z00_3196;
				}
				{	/* SawJvm/code.scm 28 */
					obj_t BgL_v1737z00_3217;

					BgL_v1737z00_3217 = create_vector(((long) 0));
					BgL_arg2105z00_3169 = BgL_v1737z00_3217;
				}
				return (BGl_liveblockz00zzsaw_jvm_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 50)),
						CNST_TABLE_REF(((long) 47)), BGl_blockz00zzsaw_defsz00,
						((long) 41307), BGl_proc2641z00zzsaw_jvm_codez00,
						BGl_proc2640z00zzsaw_jvm_codez00, BFALSE,
						BGl_proc2639z00zzsaw_jvm_codez00, BGl_proc2638z00zzsaw_jvm_codez00,
						BgL_arg2104z00_3168, BgL_arg2105z00_3169), BUNSPEC);
		}}

	}



/* &lambda2112 */
	BgL_blockz00_bglt BGl_z62lambda2112z62zzsaw_jvm_codez00(obj_t BgL_envz00_4915,
		obj_t BgL_o1178z00_4916)
	{
		{	/* SawJvm/code.scm 28 */
			{	/* SawJvm/code.scm 28 */
				long BgL_arg2114z00_5182;

				{	/* SawJvm/code.scm 28 */
					obj_t BgL_arg2115z00_5183;

					{	/* SawJvm/code.scm 28 */
						obj_t BgL_arg2116z00_5184;

						{	/* SawJvm/code.scm 28 */
							long BgL_arg1816z00_5185;

							{	/* SawJvm/code.scm 28 */
								long BgL_arg1817z00_5186;

								{	/* SawJvm/code.scm 28 */
									long BgL_res2533z00_5187;

									BgL_res2533z00_5187 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1178z00_4916)));
									BgL_arg1817z00_5186 = BgL_res2533z00_5187;
								}
								BgL_arg1816z00_5185 = (BgL_arg1817z00_5186 - OBJECT_TYPE);
							}
							BgL_arg2116z00_5184 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5185);
						}
						BgL_arg2115z00_5183 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2116z00_5184);
					}
					{	/* SawJvm/code.scm 28 */
						long BgL_res2535z00_5188;

						{	/* SawJvm/code.scm 28 */
							obj_t BgL_tmpz00_6299;

							BgL_tmpz00_6299 = ((obj_t) BgL_arg2115z00_5183);
							BgL_res2535z00_5188 = BGL_CLASS_INDEX(BgL_tmpz00_6299);
						}
						BgL_arg2114z00_5182 = BgL_res2535z00_5188;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1178z00_4916)), BgL_arg2114z00_5182);
			}
			{	/* SawJvm/code.scm 28 */
				BgL_objectz00_bglt BgL_tmpz00_6305;

				BgL_tmpz00_6305 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1178z00_4916));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6305, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1178z00_4916));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1178z00_4916));
		}

	}



/* &<@anonymous:2111> */
	obj_t BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_jvm_codez00(obj_t
		BgL_envz00_4917, obj_t BgL_new1177z00_4918)
	{
		{	/* SawJvm/code.scm 28 */
			{
				BgL_blockz00_bglt BgL_auxz00_6313;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1177z00_4918))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1177z00_4918))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1177z00_4918))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1177z00_4918))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_liveblockz00_bglt BgL_auxz00_6328;

					{
						obj_t BgL_auxz00_6329;

						{	/* SawJvm/code.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_6330;

							BgL_tmpz00_6330 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1177z00_4918));
							BgL_auxz00_6329 = BGL_OBJECT_WIDENING(BgL_tmpz00_6330);
						}
						BgL_auxz00_6328 = ((BgL_liveblockz00_bglt) BgL_auxz00_6329);
					}
					((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6328))->BgL_inz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_liveblockz00_bglt BgL_auxz00_6336;

					{
						obj_t BgL_auxz00_6337;

						{	/* SawJvm/code.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_6338;

							BgL_tmpz00_6338 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1177z00_4918));
							BgL_auxz00_6337 = BGL_OBJECT_WIDENING(BgL_tmpz00_6338);
						}
						BgL_auxz00_6336 = ((BgL_liveblockz00_bglt) BgL_auxz00_6337);
					}
					((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6336))->BgL_outz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6313 = ((BgL_blockz00_bglt) BgL_new1177z00_4918);
				return ((obj_t) BgL_auxz00_6313);
			}
		}

	}



/* &lambda2109 */
	BgL_blockz00_bglt BGl_z62lambda2109z62zzsaw_jvm_codez00(obj_t BgL_envz00_4919,
		obj_t BgL_o1174z00_4920)
	{
		{	/* SawJvm/code.scm 28 */
			{	/* SawJvm/code.scm 28 */
				BgL_liveblockz00_bglt BgL_wide1176z00_5191;

				BgL_wide1176z00_5191 =
					((BgL_liveblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_liveblockz00_bgl))));
				{	/* SawJvm/code.scm 28 */
					obj_t BgL_auxz00_6351;
					BgL_objectz00_bglt BgL_tmpz00_6347;

					BgL_auxz00_6351 = ((obj_t) BgL_wide1176z00_5191);
					BgL_tmpz00_6347 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_4920)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6347, BgL_auxz00_6351);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_4920)));
				{	/* SawJvm/code.scm 28 */
					long BgL_arg2110z00_5192;

					{	/* SawJvm/code.scm 28 */
						long BgL_res2532z00_5193;

						BgL_res2532z00_5193 =
							BGL_CLASS_INDEX(BGl_liveblockz00zzsaw_jvm_codez00);
						BgL_arg2110z00_5192 = BgL_res2532z00_5193;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1174z00_4920))), BgL_arg2110z00_5192);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_4920)));
			}
		}

	}



/* &lambda2106 */
	BgL_blockz00_bglt BGl_z62lambda2106z62zzsaw_jvm_codez00(obj_t BgL_envz00_4921,
		obj_t BgL_label1168z00_4922, obj_t BgL_preds1169z00_4923,
		obj_t BgL_succs1170z00_4924, obj_t BgL_first1171z00_4925,
		obj_t BgL_in1172z00_4926, obj_t BgL_out1173z00_4927)
	{
		{	/* SawJvm/code.scm 28 */
			{	/* SawJvm/code.scm 28 */
				int BgL_label1168z00_5194;

				BgL_label1168z00_5194 = CINT(BgL_label1168z00_4922);
				{	/* SawJvm/code.scm 28 */
					BgL_blockz00_bglt BgL_new1248z00_5198;

					{	/* SawJvm/code.scm 28 */
						BgL_blockz00_bglt BgL_tmp1246z00_5199;
						BgL_liveblockz00_bglt BgL_wide1247z00_5200;

						{
							BgL_blockz00_bglt BgL_auxz00_6366;

							{	/* SawJvm/code.scm 28 */
								BgL_blockz00_bglt BgL_new1245z00_5201;

								BgL_new1245z00_5201 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawJvm/code.scm 28 */
									long BgL_arg2108z00_5202;

									{	/* SawJvm/code.scm 28 */
										long BgL_res2530z00_5203;

										BgL_res2530z00_5203 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg2108z00_5202 = BgL_res2530z00_5203;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1245z00_5201),
										BgL_arg2108z00_5202);
								}
								{	/* SawJvm/code.scm 28 */
									BgL_objectz00_bglt BgL_tmpz00_6371;

									BgL_tmpz00_6371 = ((BgL_objectz00_bglt) BgL_new1245z00_5201);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6371, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1245z00_5201);
								BgL_auxz00_6366 = BgL_new1245z00_5201;
							}
							BgL_tmp1246z00_5199 = ((BgL_blockz00_bglt) BgL_auxz00_6366);
						}
						BgL_wide1247z00_5200 =
							((BgL_liveblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_liveblockz00_bgl))));
						{	/* SawJvm/code.scm 28 */
							obj_t BgL_auxz00_6379;
							BgL_objectz00_bglt BgL_tmpz00_6377;

							BgL_auxz00_6379 = ((obj_t) BgL_wide1247z00_5200);
							BgL_tmpz00_6377 = ((BgL_objectz00_bglt) BgL_tmp1246z00_5199);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6377, BgL_auxz00_6379);
						}
						((BgL_objectz00_bglt) BgL_tmp1246z00_5199);
						{	/* SawJvm/code.scm 28 */
							long BgL_arg2107z00_5204;

							{	/* SawJvm/code.scm 28 */
								long BgL_res2531z00_5205;

								BgL_res2531z00_5205 =
									BGL_CLASS_INDEX(BGl_liveblockz00zzsaw_jvm_codez00);
								BgL_arg2107z00_5204 = BgL_res2531z00_5205;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1246z00_5199),
								BgL_arg2107z00_5204);
						}
						BgL_new1248z00_5198 = ((BgL_blockz00_bglt) BgL_tmp1246z00_5199);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1248z00_5198)))->BgL_labelz00) =
						((int) BgL_label1168z00_5194), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1248z00_5198)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1169z00_4923)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1248z00_5198)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1170z00_4924)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1248z00_5198)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1171z00_4925)), BUNSPEC);
					{
						BgL_liveblockz00_bglt BgL_auxz00_6398;

						{
							obj_t BgL_auxz00_6399;

							{	/* SawJvm/code.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_6400;

								BgL_tmpz00_6400 = ((BgL_objectz00_bglt) BgL_new1248z00_5198);
								BgL_auxz00_6399 = BGL_OBJECT_WIDENING(BgL_tmpz00_6400);
							}
							BgL_auxz00_6398 = ((BgL_liveblockz00_bglt) BgL_auxz00_6399);
						}
						((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6398))->BgL_inz00) =
							((obj_t) BgL_in1172z00_4926), BUNSPEC);
					}
					{
						BgL_liveblockz00_bglt BgL_auxz00_6405;

						{
							obj_t BgL_auxz00_6406;

							{	/* SawJvm/code.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_6407;

								BgL_tmpz00_6407 = ((BgL_objectz00_bglt) BgL_new1248z00_5198);
								BgL_auxz00_6406 = BGL_OBJECT_WIDENING(BgL_tmpz00_6407);
							}
							BgL_auxz00_6405 = ((BgL_liveblockz00_bglt) BgL_auxz00_6406);
						}
						((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6405))->BgL_outz00) =
							((obj_t) BgL_out1173z00_4927), BUNSPEC);
					}
					return BgL_new1248z00_5198;
				}
			}
		}

	}



/* &lambda2127 */
	obj_t BGl_z62lambda2127z62zzsaw_jvm_codez00(obj_t BgL_envz00_4928,
		obj_t BgL_oz00_4929, obj_t BgL_vz00_4930)
	{
		{	/* SawJvm/code.scm 28 */
			{
				BgL_liveblockz00_bglt BgL_auxz00_6412;

				{
					obj_t BgL_auxz00_6413;

					{	/* SawJvm/code.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_6414;

						BgL_tmpz00_6414 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4929));
						BgL_auxz00_6413 = BGL_OBJECT_WIDENING(BgL_tmpz00_6414);
					}
					BgL_auxz00_6412 = ((BgL_liveblockz00_bglt) BgL_auxz00_6413);
				}
				return
					((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6412))->BgL_outz00) =
					((obj_t) BgL_vz00_4930), BUNSPEC);
			}
		}

	}



/* &lambda2126 */
	obj_t BGl_z62lambda2126z62zzsaw_jvm_codez00(obj_t BgL_envz00_4931,
		obj_t BgL_oz00_4932)
	{
		{	/* SawJvm/code.scm 28 */
			{
				BgL_liveblockz00_bglt BgL_auxz00_6420;

				{
					obj_t BgL_auxz00_6421;

					{	/* SawJvm/code.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_6422;

						BgL_tmpz00_6422 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4932));
						BgL_auxz00_6421 = BGL_OBJECT_WIDENING(BgL_tmpz00_6422);
					}
					BgL_auxz00_6420 = ((BgL_liveblockz00_bglt) BgL_auxz00_6421);
				}
				return (((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6420))->BgL_outz00);
			}
		}

	}



/* &lambda2121 */
	obj_t BGl_z62lambda2121z62zzsaw_jvm_codez00(obj_t BgL_envz00_4933,
		obj_t BgL_oz00_4934, obj_t BgL_vz00_4935)
	{
		{	/* SawJvm/code.scm 28 */
			{
				BgL_liveblockz00_bglt BgL_auxz00_6428;

				{
					obj_t BgL_auxz00_6429;

					{	/* SawJvm/code.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_6430;

						BgL_tmpz00_6430 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4934));
						BgL_auxz00_6429 = BGL_OBJECT_WIDENING(BgL_tmpz00_6430);
					}
					BgL_auxz00_6428 = ((BgL_liveblockz00_bglt) BgL_auxz00_6429);
				}
				return
					((((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6428))->BgL_inz00) =
					((obj_t) BgL_vz00_4935), BUNSPEC);
			}
		}

	}



/* &lambda2120 */
	obj_t BGl_z62lambda2120z62zzsaw_jvm_codez00(obj_t BgL_envz00_4936,
		obj_t BgL_oz00_4937)
	{
		{	/* SawJvm/code.scm 28 */
			{
				BgL_liveblockz00_bglt BgL_auxz00_6436;

				{
					obj_t BgL_auxz00_6437;

					{	/* SawJvm/code.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_6438;

						BgL_tmpz00_6438 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4937));
						BgL_auxz00_6437 = BGL_OBJECT_WIDENING(BgL_tmpz00_6438);
					}
					BgL_auxz00_6436 = ((BgL_liveblockz00_bglt) BgL_auxz00_6437);
				}
				return (((BgL_liveblockz00_bglt) COBJECT(BgL_auxz00_6436))->BgL_inz00);
			}
		}

	}



/* &lambda2090 */
	BgL_rtl_regz00_bglt BGl_z62lambda2090z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_4938, obj_t BgL_o1166z00_4939)
	{
		{	/* SawJvm/code.scm 27 */
			{	/* SawJvm/code.scm 27 */
				long BgL_arg2091z00_5211;

				{	/* SawJvm/code.scm 27 */
					obj_t BgL_arg2092z00_5212;

					{	/* SawJvm/code.scm 27 */
						obj_t BgL_arg2093z00_5213;

						{	/* SawJvm/code.scm 27 */
							long BgL_arg1816z00_5214;

							{	/* SawJvm/code.scm 27 */
								long BgL_arg1817z00_5215;

								{	/* SawJvm/code.scm 27 */
									long BgL_res2527z00_5216;

									BgL_res2527z00_5216 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1166z00_4939)));
									BgL_arg1817z00_5215 = BgL_res2527z00_5216;
								}
								BgL_arg1816z00_5214 = (BgL_arg1817z00_5215 - OBJECT_TYPE);
							}
							BgL_arg2093z00_5213 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5214);
						}
						BgL_arg2092z00_5212 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2093z00_5213);
					}
					{	/* SawJvm/code.scm 27 */
						long BgL_res2529z00_5217;

						{	/* SawJvm/code.scm 27 */
							obj_t BgL_tmpz00_6450;

							BgL_tmpz00_6450 = ((obj_t) BgL_arg2092z00_5212);
							BgL_res2529z00_5217 = BGL_CLASS_INDEX(BgL_tmpz00_6450);
						}
						BgL_arg2091z00_5211 = BgL_res2529z00_5217;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1166z00_4939)), BgL_arg2091z00_5211);
			}
			{	/* SawJvm/code.scm 27 */
				BgL_objectz00_bglt BgL_tmpz00_6456;

				BgL_tmpz00_6456 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1166z00_4939));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6456, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1166z00_4939));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1166z00_4939));
		}

	}



/* &<@anonymous:2089> */
	obj_t BGl_z62zc3z04anonymousza32089ze3ze5zzsaw_jvm_codez00(obj_t
		BgL_envz00_4940, obj_t BgL_new1165z00_4941)
	{
		{	/* SawJvm/code.scm 27 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_6464;

				{
					BgL_typez00_bglt BgL_auxz00_6465;

					{	/* SawJvm/code.scm 27 */
						obj_t BgL_classz00_5219;

						BgL_classz00_5219 = BGl_typez00zztype_typez00;
						{	/* SawJvm/code.scm 27 */
							obj_t BgL__ortest_1106z00_5220;

							BgL__ortest_1106z00_5220 = BGL_CLASS_NIL(BgL_classz00_5219);
							if (CBOOL(BgL__ortest_1106z00_5220))
								{	/* SawJvm/code.scm 27 */
									BgL_auxz00_6465 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5220);
								}
							else
								{	/* SawJvm/code.scm 27 */
									BgL_auxz00_6465 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5219));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1165z00_4941))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_6465), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1165z00_4941))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1165z00_4941))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1165z00_4941))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1165z00_4941))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1165z00_4941))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_lregz00_bglt BgL_auxz00_6490;

					{
						obj_t BgL_auxz00_6491;

						{	/* SawJvm/code.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_6492;

							BgL_tmpz00_6492 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1165z00_4941));
							BgL_auxz00_6491 = BGL_OBJECT_WIDENING(BgL_tmpz00_6492);
						}
						BgL_auxz00_6490 = ((BgL_lregz00_bglt) BgL_auxz00_6491);
					}
					((((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6490))->BgL_idz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6464 = ((BgL_rtl_regz00_bglt) BgL_new1165z00_4941);
				return ((obj_t) BgL_auxz00_6464);
			}
		}

	}



/* &lambda2087 */
	BgL_rtl_regz00_bglt BGl_z62lambda2087z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_4942, obj_t BgL_o1162z00_4943)
	{
		{	/* SawJvm/code.scm 27 */
			{	/* SawJvm/code.scm 27 */
				BgL_lregz00_bglt BgL_wide1164z00_5222;

				BgL_wide1164z00_5222 =
					((BgL_lregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_lregz00_bgl))));
				{	/* SawJvm/code.scm 27 */
					obj_t BgL_auxz00_6505;
					BgL_objectz00_bglt BgL_tmpz00_6501;

					BgL_auxz00_6505 = ((obj_t) BgL_wide1164z00_5222);
					BgL_tmpz00_6501 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_4943)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6501, BgL_auxz00_6505);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_4943)));
				{	/* SawJvm/code.scm 27 */
					long BgL_arg2088z00_5223;

					{	/* SawJvm/code.scm 27 */
						long BgL_res2526z00_5224;

						BgL_res2526z00_5224 = BGL_CLASS_INDEX(BGl_lregz00zzsaw_jvm_codez00);
						BgL_arg2088z00_5223 = BgL_res2526z00_5224;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1162z00_4943))),
						BgL_arg2088z00_5223);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_4943)));
			}
		}

	}



/* &lambda2084 */
	BgL_rtl_regz00_bglt BGl_z62lambda2084z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_4944, obj_t BgL_type1155z00_4945, obj_t BgL_var1156z00_4946,
		obj_t BgL_onexprzf31157zf3_4947, obj_t BgL_name1158z00_4948,
		obj_t BgL_key1159z00_4949, obj_t BgL_hardware1160z00_4950,
		obj_t BgL_id1161z00_4951)
	{
		{	/* SawJvm/code.scm 27 */
			{	/* SawJvm/code.scm 27 */
				BgL_rtl_regz00_bglt BgL_new1243z00_5226;

				{	/* SawJvm/code.scm 27 */
					BgL_rtl_regz00_bglt BgL_tmp1241z00_5227;
					BgL_lregz00_bglt BgL_wide1242z00_5228;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_6519;

						{	/* SawJvm/code.scm 27 */
							BgL_rtl_regz00_bglt BgL_new1240z00_5229;

							BgL_new1240z00_5229 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawJvm/code.scm 27 */
								long BgL_arg2086z00_5230;

								{	/* SawJvm/code.scm 27 */
									long BgL_res2524z00_5231;

									BgL_res2524z00_5231 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg2086z00_5230 = BgL_res2524z00_5231;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1240z00_5229),
									BgL_arg2086z00_5230);
							}
							{	/* SawJvm/code.scm 27 */
								BgL_objectz00_bglt BgL_tmpz00_6524;

								BgL_tmpz00_6524 = ((BgL_objectz00_bglt) BgL_new1240z00_5229);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6524, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1240z00_5229);
							BgL_auxz00_6519 = BgL_new1240z00_5229;
						}
						BgL_tmp1241z00_5227 = ((BgL_rtl_regz00_bglt) BgL_auxz00_6519);
					}
					BgL_wide1242z00_5228 =
						((BgL_lregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_lregz00_bgl))));
					{	/* SawJvm/code.scm 27 */
						obj_t BgL_auxz00_6532;
						BgL_objectz00_bglt BgL_tmpz00_6530;

						BgL_auxz00_6532 = ((obj_t) BgL_wide1242z00_5228);
						BgL_tmpz00_6530 = ((BgL_objectz00_bglt) BgL_tmp1241z00_5227);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6530, BgL_auxz00_6532);
					}
					((BgL_objectz00_bglt) BgL_tmp1241z00_5227);
					{	/* SawJvm/code.scm 27 */
						long BgL_arg2085z00_5232;

						{	/* SawJvm/code.scm 27 */
							long BgL_res2525z00_5233;

							BgL_res2525z00_5233 =
								BGL_CLASS_INDEX(BGl_lregz00zzsaw_jvm_codez00);
							BgL_arg2085z00_5232 = BgL_res2525z00_5233;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1241z00_5227), BgL_arg2085z00_5232);
					}
					BgL_new1243z00_5226 = ((BgL_rtl_regz00_bglt) BgL_tmp1241z00_5227);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1243z00_5226)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1155z00_4945)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1243z00_5226)))->BgL_varz00) =
					((obj_t) BgL_var1156z00_4946), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1243z00_5226)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31157zf3_4947), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1243z00_5226)))->BgL_namez00) =
					((obj_t) BgL_name1158z00_4948), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1243z00_5226)))->BgL_keyz00) =
					((obj_t) BgL_key1159z00_4949), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1243z00_5226)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1160z00_4950), BUNSPEC);
				{
					BgL_lregz00_bglt BgL_auxz00_6553;

					{
						obj_t BgL_auxz00_6554;

						{	/* SawJvm/code.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_6555;

							BgL_tmpz00_6555 = ((BgL_objectz00_bglt) BgL_new1243z00_5226);
							BgL_auxz00_6554 = BGL_OBJECT_WIDENING(BgL_tmpz00_6555);
						}
						BgL_auxz00_6553 = ((BgL_lregz00_bglt) BgL_auxz00_6554);
					}
					((((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6553))->BgL_idz00) =
						((obj_t) BgL_id1161z00_4951), BUNSPEC);
				}
				return BgL_new1243z00_5226;
			}
		}

	}



/* &lambda2098 */
	obj_t BGl_z62lambda2098z62zzsaw_jvm_codez00(obj_t BgL_envz00_4952,
		obj_t BgL_oz00_4953, obj_t BgL_vz00_4954)
	{
		{	/* SawJvm/code.scm 27 */
			{
				BgL_lregz00_bglt BgL_auxz00_6560;

				{
					obj_t BgL_auxz00_6561;

					{	/* SawJvm/code.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_6562;

						BgL_tmpz00_6562 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_4953));
						BgL_auxz00_6561 = BGL_OBJECT_WIDENING(BgL_tmpz00_6562);
					}
					BgL_auxz00_6560 = ((BgL_lregz00_bglt) BgL_auxz00_6561);
				}
				return
					((((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6560))->BgL_idz00) =
					((obj_t) BgL_vz00_4954), BUNSPEC);
			}
		}

	}



/* &lambda2097 */
	obj_t BGl_z62lambda2097z62zzsaw_jvm_codez00(obj_t BgL_envz00_4955,
		obj_t BgL_oz00_4956)
	{
		{	/* SawJvm/code.scm 27 */
			{
				BgL_lregz00_bglt BgL_auxz00_6568;

				{
					obj_t BgL_auxz00_6569;

					{	/* SawJvm/code.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_6570;

						BgL_tmpz00_6570 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_4956));
						BgL_auxz00_6569 = BGL_OBJECT_WIDENING(BgL_tmpz00_6570);
					}
					BgL_auxz00_6568 = ((BgL_lregz00_bglt) BgL_auxz00_6569);
				}
				return (((BgL_lregz00_bglt) COBJECT(BgL_auxz00_6568))->BgL_idz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_proc2642z00zzsaw_jvm_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2643z00zzsaw_jvm_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_proc2644z00zzsaw_jvm_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2645z00zzsaw_jvm_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_proc2646z00zzsaw_jvm_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2647z00zzsaw_jvm_codez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
				BGl_proc2648z00zzsaw_jvm_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2649z00zzsaw_jvm_codez00);
		}

	}



/* &gen-args-gen-predica1813 */
	obj_t BGl_z62genzd2argszd2genzd2predica1813zb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_4961, obj_t BgL_funz00_4962, obj_t BgL_mez00_4963,
		obj_t BgL_argsz00_4964, obj_t BgL_onzf3zf3_4965, obj_t BgL_labz00_4966)
	{
		{	/* SawJvm/code.scm 638 */
			BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4962), BgL_mez00_4963,
				BgL_argsz00_4964);
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_4963,
				((BgL_rtl_funz00_bglt) BgL_funz00_4962));
			{	/* SawJvm/code.scm 642 */
				obj_t BgL_arg2135z00_5237;

				if (CBOOL(BgL_onzf3zf3_4965))
					{	/* SawJvm/code.scm 642 */
						BgL_arg2135z00_5237 = CNST_TABLE_REF(((long) 51));
					}
				else
					{	/* SawJvm/code.scm 642 */
						BgL_arg2135z00_5237 = CNST_TABLE_REF(((long) 52));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_4963), BgL_arg2135z00_5237,
					BgL_labz00_4966);
			}
		}

	}



/* &gen-fun1742 */
	obj_t BGl_z62genzd2fun1742zb0zzsaw_jvm_codez00(obj_t BgL_envz00_4967,
		obj_t BgL_funz00_4968, obj_t BgL_mez00_4969)
	{
		{	/* SawJvm/code.scm 308 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 53)),
				BGl_string2650z00zzsaw_jvm_codez00,
				((obj_t) ((BgL_rtl_funz00_bglt) BgL_funz00_4968)));
		}

	}



/* &gen-fun-with-args1740 */
	obj_t BGl_z62genzd2funzd2withzd2args1740zb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_4970, obj_t BgL_funz00_4971, obj_t BgL_mez00_4972,
		obj_t BgL_argsz00_4973)
	{
		{	/* SawJvm/code.scm 294 */
			return
				BGl_genzd2funzd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4971), BgL_mez00_4972);
		}

	}



/* &gen-args-gen-fun1738 */
	obj_t BGl_z62genzd2argszd2genzd2fun1738zb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_4974, obj_t BgL_funz00_4975, obj_t BgL_mez00_4976,
		obj_t BgL_argsz00_4977)
	{
		{	/* SawJvm/code.scm 284 */
			{
				obj_t BgL_l1703z00_5242;

				BgL_l1703z00_5242 = BgL_argsz00_4977;
			BgL_zc3z04anonymousza32129ze3z87_5241:
				if (PAIRP(BgL_l1703z00_5242))
					{	/* SawJvm/code.scm 286 */
						{	/* SawJvm/code.scm 286 */
							obj_t BgL_az00_5243;

							BgL_az00_5243 = CAR(BgL_l1703z00_5242);
							BGl_genzd2exprzd2zzsaw_jvm_codez00(
								((BgL_jvmz00_bglt) BgL_mez00_4976), BgL_az00_5243);
						}
						{
							obj_t BgL_l1703z00_6601;

							BgL_l1703z00_6601 = CDR(BgL_l1703z00_5242);
							BgL_l1703z00_5242 = BgL_l1703z00_6601;
							goto BgL_zc3z04anonymousza32129ze3z87_5241;
						}
					}
				else
					{	/* SawJvm/code.scm 286 */
						((bool_t) 1);
					}
			}
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_4976,
				((BgL_rtl_funz00_bglt) BgL_funz00_4975));
			return
				BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4975), BgL_mez00_4976,
				BgL_argsz00_4977);
		}

	}



/* gen-args-gen-fun */
	obj_t BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_96, obj_t BgL_mez00_97, obj_t BgL_argsz00_98)
	{
		{	/* SawJvm/code.scm 284 */
			{	/* SawJvm/code.scm 284 */
				obj_t BgL_method1739z00_3255;

				{	/* SawJvm/code.scm 284 */
					obj_t BgL_res2547z00_4628;

					{	/* SawJvm/code.scm 284 */
						long BgL_objzd2classzd2numz00_4593;

						{	/* SawJvm/code.scm 284 */
							long BgL_res2537z00_4596;

							BgL_res2537z00_4596 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_96));
							BgL_objzd2classzd2numz00_4593 = BgL_res2537z00_4596;
						}
						{	/* SawJvm/code.scm 284 */
							obj_t BgL_arg1813z00_4594;

							BgL_arg1813z00_4594 =
								PROCEDURE_REF
								(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 284 */
								int BgL_offsetz00_4598;

								BgL_offsetz00_4598 = (int) (BgL_objzd2classzd2numz00_4593);
								{	/* SawJvm/code.scm 284 */
									long BgL_offsetz00_4599;

									BgL_offsetz00_4599 =
										((long) (BgL_offsetz00_4598) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 284 */
										long BgL_modz00_4600;

										BgL_modz00_4600 =
											(BgL_offsetz00_4599 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/code.scm 284 */
											long BgL_restz00_4602;

											BgL_restz00_4602 =
												(BgL_offsetz00_4599 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/code.scm 284 */

												{	/* SawJvm/code.scm 284 */
													obj_t BgL_bucketz00_4604;

													BgL_bucketz00_4604 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4594), BgL_modz00_4600);
													BgL_res2547z00_4628 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4604), BgL_restz00_4602);
					}}}}}}}}
					BgL_method1739z00_3255 = BgL_res2547z00_4628;
				}
				return
					PROCEDURE_ENTRY(BgL_method1739z00_3255) (BgL_method1739z00_3255,
					((obj_t) BgL_funz00_96), BgL_mez00_97, BgL_argsz00_98, BEOA);
			}
		}

	}



/* &gen-args-gen-fun */
	obj_t BGl_z62genzd2argszd2genzd2funzb0zzsaw_jvm_codez00(obj_t BgL_envz00_4978,
		obj_t BgL_funz00_4979, obj_t BgL_mez00_4980, obj_t BgL_argsz00_4981)
	{
		{	/* SawJvm/code.scm 284 */
			return
				BGl_genzd2argszd2genzd2funzd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4979), BgL_mez00_4980,
				BgL_argsz00_4981);
		}

	}



/* gen-fun-with-args */
	obj_t BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_99, obj_t BgL_mez00_100, obj_t BgL_argsz00_101)
	{
		{	/* SawJvm/code.scm 294 */
			{	/* SawJvm/code.scm 294 */
				obj_t BgL_method1741z00_3256;

				{	/* SawJvm/code.scm 294 */
					obj_t BgL_res2558z00_4665;

					{	/* SawJvm/code.scm 294 */
						long BgL_objzd2classzd2numz00_4630;

						{	/* SawJvm/code.scm 294 */
							long BgL_res2548z00_4633;

							BgL_res2548z00_4633 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_99));
							BgL_objzd2classzd2numz00_4630 = BgL_res2548z00_4633;
						}
						{	/* SawJvm/code.scm 294 */
							obj_t BgL_arg1813z00_4631;

							BgL_arg1813z00_4631 =
								PROCEDURE_REF
								(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 294 */
								int BgL_offsetz00_4635;

								BgL_offsetz00_4635 = (int) (BgL_objzd2classzd2numz00_4630);
								{	/* SawJvm/code.scm 294 */
									long BgL_offsetz00_4636;

									BgL_offsetz00_4636 =
										((long) (BgL_offsetz00_4635) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 294 */
										long BgL_modz00_4637;

										BgL_modz00_4637 =
											(BgL_offsetz00_4636 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/code.scm 294 */
											long BgL_restz00_4639;

											BgL_restz00_4639 =
												(BgL_offsetz00_4636 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/code.scm 294 */

												{	/* SawJvm/code.scm 294 */
													obj_t BgL_bucketz00_4641;

													BgL_bucketz00_4641 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4631), BgL_modz00_4637);
													BgL_res2558z00_4665 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4641), BgL_restz00_4639);
					}}}}}}}}
					BgL_method1741z00_3256 = BgL_res2558z00_4665;
				}
				return
					PROCEDURE_ENTRY(BgL_method1741z00_3256) (BgL_method1741z00_3256,
					((obj_t) BgL_funz00_99), BgL_mez00_100, BgL_argsz00_101, BEOA);
			}
		}

	}



/* &gen-fun-with-args */
	obj_t BGl_z62genzd2funzd2withzd2argszb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_4982, obj_t BgL_funz00_4983, obj_t BgL_mez00_4984,
		obj_t BgL_argsz00_4985)
	{
		{	/* SawJvm/code.scm 294 */
			return
				BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4983), BgL_mez00_4984,
				BgL_argsz00_4985);
		}

	}



/* gen-fun */
	obj_t BGl_genzd2funzd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt BgL_funz00_102,
		obj_t BgL_mez00_103)
	{
		{	/* SawJvm/code.scm 308 */
			{	/* SawJvm/code.scm 308 */
				obj_t BgL_method1744z00_3257;

				{	/* SawJvm/code.scm 308 */
					obj_t BgL_res2569z00_4702;

					{	/* SawJvm/code.scm 308 */
						long BgL_objzd2classzd2numz00_4667;

						{	/* SawJvm/code.scm 308 */
							long BgL_res2559z00_4670;

							BgL_res2559z00_4670 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_102));
							BgL_objzd2classzd2numz00_4667 = BgL_res2559z00_4670;
						}
						{	/* SawJvm/code.scm 308 */
							obj_t BgL_arg1813z00_4668;

							BgL_arg1813z00_4668 =
								PROCEDURE_REF(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 308 */
								int BgL_offsetz00_4672;

								BgL_offsetz00_4672 = (int) (BgL_objzd2classzd2numz00_4667);
								{	/* SawJvm/code.scm 308 */
									long BgL_offsetz00_4673;

									BgL_offsetz00_4673 =
										((long) (BgL_offsetz00_4672) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 308 */
										long BgL_modz00_4674;

										BgL_modz00_4674 =
											(BgL_offsetz00_4673 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/code.scm 308 */
											long BgL_restz00_4676;

											BgL_restz00_4676 =
												(BgL_offsetz00_4673 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/code.scm 308 */

												{	/* SawJvm/code.scm 308 */
													obj_t BgL_bucketz00_4678;

													BgL_bucketz00_4678 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4668), BgL_modz00_4674);
													BgL_res2569z00_4702 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4678), BgL_restz00_4676);
					}}}}}}}}
					BgL_method1744z00_3257 = BgL_res2569z00_4702;
				}
				return
					PROCEDURE_ENTRY(BgL_method1744z00_3257) (BgL_method1744z00_3257,
					((obj_t) BgL_funz00_102), BgL_mez00_103, BEOA);
			}
		}

	}



/* &gen-fun */
	obj_t BGl_z62genzd2funzb0zzsaw_jvm_codez00(obj_t BgL_envz00_4986,
		obj_t BgL_funz00_4987, obj_t BgL_mez00_4988)
	{
		{	/* SawJvm/code.scm 308 */
			return
				BGl_genzd2funzd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4987), BgL_mez00_4988);
		}

	}



/* gen-args-gen-predicate */
	obj_t BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_184, obj_t BgL_mez00_185, obj_t BgL_argsz00_186,
		obj_t BgL_onzf3zf3_187, obj_t BgL_labz00_188)
	{
		{	/* SawJvm/code.scm 638 */
			{	/* SawJvm/code.scm 638 */
				obj_t BgL_method1815z00_3258;

				{	/* SawJvm/code.scm 638 */
					obj_t BgL_res2580z00_4739;

					{	/* SawJvm/code.scm 638 */
						long BgL_objzd2classzd2numz00_4704;

						{	/* SawJvm/code.scm 638 */
							long BgL_res2570z00_4707;

							BgL_res2570z00_4707 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_184));
							BgL_objzd2classzd2numz00_4704 = BgL_res2570z00_4707;
						}
						{	/* SawJvm/code.scm 638 */
							obj_t BgL_arg1813z00_4705;

							BgL_arg1813z00_4705 =
								PROCEDURE_REF
								(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
								(int) (((long) 1)));
							{	/* SawJvm/code.scm 638 */
								int BgL_offsetz00_4709;

								BgL_offsetz00_4709 = (int) (BgL_objzd2classzd2numz00_4704);
								{	/* SawJvm/code.scm 638 */
									long BgL_offsetz00_4710;

									BgL_offsetz00_4710 =
										((long) (BgL_offsetz00_4709) - OBJECT_TYPE);
									{	/* SawJvm/code.scm 638 */
										long BgL_modz00_4711;

										BgL_modz00_4711 =
											(BgL_offsetz00_4710 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/code.scm 638 */
											long BgL_restz00_4713;

											BgL_restz00_4713 =
												(BgL_offsetz00_4710 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/code.scm 638 */

												{	/* SawJvm/code.scm 638 */
													obj_t BgL_bucketz00_4715;

													BgL_bucketz00_4715 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4705), BgL_modz00_4711);
													BgL_res2580z00_4739 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4715), BgL_restz00_4713);
					}}}}}}}}
					BgL_method1815z00_3258 = BgL_res2580z00_4739;
				}
				return
					PROCEDURE_ENTRY(BgL_method1815z00_3258) (BgL_method1815z00_3258,
					((obj_t) BgL_funz00_184), BgL_mez00_185, BgL_argsz00_186,
					BgL_onzf3zf3_187, BgL_labz00_188, BEOA);
			}
		}

	}



/* &gen-args-gen-predicate */
	obj_t BGl_z62genzd2argszd2genzd2predicatezb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_4989, obj_t BgL_funz00_4990, obj_t BgL_mez00_4991,
		obj_t BgL_argsz00_4992, obj_t BgL_onzf3zf3_4993, obj_t BgL_labz00_4994)
	{
		{	/* SawJvm/code.scm 638 */
			return
				BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_4990), BgL_mez00_4991,
				BgL_argsz00_4992, BgL_onzf3zf3_4993, BgL_labz00_4994);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_nopz00zzsaw_defsz00,
				BGl_proc2651z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_movz00zzsaw_defsz00,
				BGl_proc2653z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_loadiz00zzsaw_defsz00,
				BGl_proc2654z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc2655z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc2656z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc2657z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_ifeqz00zzsaw_defsz00, BGl_proc2658z00zzsaw_jvm_codez00,
				BGl_string2659z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_ifnez00zzsaw_defsz00, BGl_proc2660z00zzsaw_jvm_codez00,
				BGl_string2659z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc2661z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_switchz00zzsaw_defsz00, BGl_proc2662z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc2663z00zzsaw_jvm_codez00,
				BGl_string2659z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc2664z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc2665z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc2666z00zzsaw_jvm_codez00,
				BGl_string2667z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2withzd2argszd2envz00zzsaw_jvm_codez00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc2668z00zzsaw_jvm_codez00,
				BGl_string2667z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc2669z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc2670z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc2671z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc2672z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc2673z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc2674z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc2675z00zzsaw_jvm_codez00,
				BGl_string2659z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc2676z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc2677z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_instanceofz00zzsaw_defsz00, BGl_proc2678z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc2679z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc2680z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_makeboxz00zzsaw_defsz00, BGl_proc2681z00zzsaw_jvm_codez00,
				BGl_string2659z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_boxrefz00zzsaw_defsz00, BGl_proc2682z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_boxsetz00zzsaw_defsz00, BGl_proc2683z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_jumpexitz00zzsaw_defsz00, BGl_proc2684z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00, BGl_rtl_failz00zzsaw_defsz00,
				BGl_proc2685z00zzsaw_jvm_codez00, BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc2686z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2envz00zzsaw_jvm_codez00,
				BGl_rtl_protectedz00zzsaw_defsz00, BGl_proc2687z00zzsaw_jvm_codez00,
				BGl_string2652z00zzsaw_jvm_codez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2argszd2genzd2predicatezd2envz00zzsaw_jvm_codez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc2688z00zzsaw_jvm_codez00,
				BGl_string2689z00zzsaw_jvm_codez00);
		}

	}



/* &gen-args-gen-predica1817 */
	obj_t BGl_z62genzd2argszd2genzd2predica1817zb0zzsaw_jvm_codez00(obj_t
		BgL_envz00_5032, obj_t BgL_funz00_5033, obj_t BgL_mez00_5034,
		obj_t BgL_argsz00_5035, obj_t BgL_onzf3zf3_5036, obj_t BgL_labz00_5037)
	{
		{	/* SawJvm/code.scm 645 */
			{
				obj_t BgL_l1732z00_5246;

				BgL_l1732z00_5246 = BgL_argsz00_5035;
			BgL_zc3z04anonymousza32313ze3z87_5245:
				if (PAIRP(BgL_l1732z00_5246))
					{	/* SawJvm/code.scm 646 */
						{	/* SawJvm/code.scm 646 */
							obj_t BgL_az00_5247;

							BgL_az00_5247 = CAR(BgL_l1732z00_5246);
							BGl_genzd2exprzd2zzsaw_jvm_codez00(
								((BgL_jvmz00_bglt) BgL_mez00_5034), BgL_az00_5247);
						}
						{
							obj_t BgL_l1732z00_6784;

							BgL_l1732z00_6784 = CDR(BgL_l1732z00_5246);
							BgL_l1732z00_5246 = BgL_l1732z00_6784;
							goto BgL_zc3z04anonymousza32313ze3z87_5245;
						}
					}
				else
					{	/* SawJvm/code.scm 646 */
						((bool_t) 1);
					}
			}
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_5034,
				((BgL_rtl_funz00_bglt) ((BgL_rtl_callz00_bglt) BgL_funz00_5033)));
			{	/* SawJvm/code.scm 648 */
				obj_t BgL_rz00_5248;

				{	/* SawJvm/code.scm 648 */
					BgL_globalz00_bglt BgL_arg2319z00_5249;

					BgL_arg2319z00_5249 =
						(((BgL_rtl_callz00_bglt) COBJECT(
								((BgL_rtl_callz00_bglt) BgL_funz00_5033)))->BgL_varz00);
					BgL_rz00_5248 =
						BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(
						((BgL_jvmz00_bglt) BgL_mez00_5034), BgL_arg2319z00_5249,
						BgL_onzf3zf3_5036, BgL_labz00_5037);
				}
				if ((BgL_rz00_5248 == CNST_TABLE_REF(((long) 54))))
					{	/* SawJvm/code.scm 649 */
						BGl_genzd2funzd2withzd2argszd2zzsaw_jvm_codez00(
							((BgL_rtl_funz00_bglt)
								((BgL_rtl_callz00_bglt) BgL_funz00_5033)), BgL_mez00_5034,
							BgL_argsz00_5035);
						{	/* SawJvm/code.scm 651 */
							obj_t BgL_arg2318z00_5250;

							if (CBOOL(BgL_onzf3zf3_5036))
								{	/* SawJvm/code.scm 651 */
									BgL_arg2318z00_5250 = CNST_TABLE_REF(((long) 51));
								}
							else
								{	/* SawJvm/code.scm 651 */
									BgL_arg2318z00_5250 = CNST_TABLE_REF(((long) 52));
								}
							return
								BGl_branchz00zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5034), BgL_arg2318z00_5250,
								BgL_labz00_5037);
						}
					}
				else
					{	/* SawJvm/code.scm 649 */
						return BgL_rz00_5248;
					}
			}
		}

	}



/* &gen-fun-rtl_protecte1812 */
	obj_t BGl_z62genzd2funzd2rtl_protecte1812z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5038, obj_t BgL_funz00_5039, obj_t BgL_mez00_5040)
	{
		{	/* SawJvm/code.scm 629 */
			return CNST_TABLE_REF(((long) 55));
		}

	}



/* &gen-fun-rtl_protect1810 */
	obj_t BGl_z62genzd2funzd2rtl_protect1810z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5041, obj_t BgL_funz00_5042, obj_t BgL_mez00_5043)
	{
		{	/* SawJvm/code.scm 626 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5043), CNST_TABLE_REF(((long) 56)));
		}

	}



/* &gen-fun-rtl_fail1808 */
	obj_t BGl_z62genzd2funzd2rtl_fail1808z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5044, obj_t BgL_funz00_5045, obj_t BgL_mez00_5046)
	{
		{	/* SawJvm/code.scm 621 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5046), CNST_TABLE_REF(((long) 57)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5046), CNST_TABLE_REF(((long) 58)));
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-fun-rtl_jumpexit1806 */
	obj_t BGl_z62genzd2funzd2rtl_jumpexit1806z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5047, obj_t BgL_funz00_5048, obj_t BgL_mez00_5049)
	{
		{	/* SawJvm/code.scm 614 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5049), CNST_TABLE_REF(((long) 59)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5049), CNST_TABLE_REF(((long) 60)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5049), CNST_TABLE_REF(((long) 58)));
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-fun-rtl_boxset1804 */
	obj_t BGl_z62genzd2funzd2rtl_boxset1804z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5050, obj_t BgL_funz00_5051, obj_t BgL_mez00_5052)
	{
		{	/* SawJvm/code.scm 607 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5052), CNST_TABLE_REF(((long) 61)));
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-fun-rtl_boxref1802 */
	obj_t BGl_z62genzd2funzd2rtl_boxref1802z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5053, obj_t BgL_funz00_5054, obj_t BgL_mez00_5055)
	{
		{	/* SawJvm/code.scm 604 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5055), CNST_TABLE_REF(((long) 62)));
		}

	}



/* &gen-args-gen-fun-rtl1800 */
	obj_t BGl_z62genzd2argszd2genzd2funzd2rtl1800z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5056, obj_t BgL_funz00_5057, obj_t BgL_mez00_5058,
		obj_t BgL_argsz00_5059)
	{
		{	/* SawJvm/code.scm 597 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5058), CNST_TABLE_REF(((long) 63)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5058), CNST_TABLE_REF(((long) 64)));
			{	/* SawJvm/code.scm 600 */
				obj_t BgL_arg2312z00_5258;

				BgL_arg2312z00_5258 = CAR(((obj_t) BgL_argsz00_5059));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_5058), BgL_arg2312z00_5258);
			}
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_5058,
				((BgL_rtl_funz00_bglt) ((BgL_rtl_makeboxz00_bglt) BgL_funz00_5057)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5058), CNST_TABLE_REF(((long) 65)));
		}

	}



/* &gen-fun-rtl_cast_nul1798 */
	obj_t BGl_z62genzd2funzd2rtl_cast_nul1798z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5060, obj_t BgL_funz00_5061, obj_t BgL_mez00_5062)
	{
		{	/* SawJvm/code.scm 588 */
			{	/* SawJvm/code.scm 589 */
				BgL_typez00_bglt BgL_typez00_5260;

				BgL_typez00_5260 =
					(((BgL_rtl_cast_nullz00_bglt) COBJECT(
							((BgL_rtl_cast_nullz00_bglt) BgL_funz00_5061)))->BgL_typez00);
				if (
					((((BgL_typez00_bglt) COBJECT(BgL_typez00_5260))->BgL_namez00) ==
						CNST_TABLE_REF(((long) 25))))
					{	/* SawJvm/code.scm 591 */
						obj_t BgL_arg2309z00_5261;

						BgL_arg2309z00_5261 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 66)), BNIL);
						return
							BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_5062), BgL_arg2309z00_5261);
					}
				else
					{	/* SawJvm/code.scm 592 */
						obj_t BgL_arg2310z00_5262;

						BgL_arg2310z00_5262 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 67)), BNIL);
						return
							BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_5062), BgL_arg2310z00_5262);
					}
			}
		}

	}



/* &gen-fun-rtl_cast1796 */
	obj_t BGl_z62genzd2funzd2rtl_cast1796z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5063, obj_t BgL_funz00_5064, obj_t BgL_mez00_5065)
	{
		{	/* SawJvm/code.scm 582 */
			if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
				{	/* SawJvm/code.scm 584 */
					BgL_typez00_bglt BgL_typez00_5264;

					BgL_typez00_5264 =
						(((BgL_rtl_castz00_bglt) COBJECT(
								((BgL_rtl_castz00_bglt) BgL_funz00_5064)))->BgL_totypez00);
					if (
						((((BgL_typez00_bglt) COBJECT(BgL_typez00_5264))->BgL_namez00) ==
							CNST_TABLE_REF(((long) 45))))
						{	/* SawJvm/code.scm 585 */
							return BFALSE;
						}
					else
						{	/* SawJvm/code.scm 586 */
							obj_t BgL_arg2302z00_5265;

							{	/* SawJvm/code.scm 586 */
								obj_t BgL_arg2303z00_5266;

								{	/* SawJvm/code.scm 586 */
									obj_t BgL_arg2305z00_5267;

									BgL_arg2305z00_5267 =
										BGl_compilezd2typezd2zzsaw_jvm_outz00(
										((BgL_jvmz00_bglt) BgL_mez00_5065), BgL_typez00_5264);
									BgL_arg2303z00_5266 =
										MAKE_YOUNG_PAIR(BgL_arg2305z00_5267, BNIL);
								}
								BgL_arg2302z00_5265 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 68)),
									BgL_arg2303z00_5266);
							}
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5065), BgL_arg2302z00_5265);
						}
				}
			else
				{	/* SawJvm/code.scm 583 */
					return BFALSE;
				}
		}

	}



/* &gen-fun-rtl_instance1794 */
	obj_t BGl_z62genzd2funzd2rtl_instance1794z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5066, obj_t BgL_funz00_5067, obj_t BgL_mez00_5068)
	{
		{	/* SawJvm/code.scm 572 */
			{	/* SawJvm/code.scm 573 */
				obj_t BgL_arg2295z00_5269;

				{	/* SawJvm/code.scm 573 */
					obj_t BgL_arg2296z00_5270;

					{	/* SawJvm/code.scm 573 */
						obj_t BgL_arg2297z00_5271;

						{	/* SawJvm/code.scm 573 */
							BgL_typez00_bglt BgL_arg2298z00_5272;

							BgL_arg2298z00_5272 =
								(((BgL_rtl_instanceofz00_bglt) COBJECT(
										((BgL_rtl_instanceofz00_bglt) BgL_funz00_5067)))->
								BgL_typez00);
							BgL_arg2297z00_5271 =
								BGl_compilezd2typezd2zzsaw_jvm_outz00(((BgL_jvmz00_bglt)
									BgL_mez00_5068), BgL_arg2298z00_5272);
						}
						BgL_arg2296z00_5270 = MAKE_YOUNG_PAIR(BgL_arg2297z00_5271, BNIL);
					}
					BgL_arg2295z00_5269 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 69)), BgL_arg2296z00_5270);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5068), BgL_arg2295z00_5269);
			}
			{	/* SawJvm/code.scm 574 */
				obj_t BgL_l1z00_5273;
				obj_t BgL_l2z00_5274;

				BgL_l1z00_5273 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string2690z00zzsaw_jvm_codez00);
				BgL_l2z00_5274 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string2690z00zzsaw_jvm_codez00);
				BGl_branchz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					CNST_TABLE_REF(((long) 52)), BgL_l1z00_5273);
				BGl_pushzd2intzd2zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					BINT(((long) 1)));
				BGl_branchz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					CNST_TABLE_REF(((long) 70)), BgL_l2z00_5274);
				BGl_labelz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					BgL_l1z00_5273);
				BGl_pushzd2intzd2zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					BINT(((long) 0)));
				return BGl_labelz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5068),
					BgL_l2z00_5274);
			}
		}

	}



/* &gen-fun-rtl_setfield1792 */
	obj_t BGl_z62genzd2funzd2rtl_setfield1792z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5069, obj_t BgL_funz00_5070, obj_t BgL_mez00_5071)
	{
		{	/* SawJvm/code.scm 567 */
			{	/* SawJvm/code.scm 569 */
				BgL_typez00_bglt BgL_arg2291z00_5276;
				BgL_typez00_bglt BgL_arg2292z00_5277;
				obj_t BgL_arg2294z00_5278;

				BgL_arg2291z00_5276 =
					(((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_funz00_5070)))->BgL_typez00);
				BgL_arg2292z00_5277 =
					(((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_funz00_5070)))->BgL_objtypez00);
				BgL_arg2294z00_5278 =
					(((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_funz00_5070)))->BgL_namez00);
				BGl_storezd2fieldzd2zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5071), BgL_arg2291z00_5276,
					BgL_arg2292z00_5277, BgL_arg2294z00_5278);
			}
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-fun-rtl_getfield1790 */
	obj_t BGl_z62genzd2funzd2rtl_getfield1790z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5072, obj_t BgL_funz00_5073, obj_t BgL_mez00_5074)
	{
		{	/* SawJvm/code.scm 563 */
			{	/* SawJvm/code.scm 565 */
				BgL_typez00_bglt BgL_arg2288z00_5280;
				BgL_typez00_bglt BgL_arg2289z00_5281;
				obj_t BgL_arg2290z00_5282;

				BgL_arg2288z00_5280 =
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_funz00_5073)))->BgL_typez00);
				BgL_arg2289z00_5281 =
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_funz00_5073)))->BgL_objtypez00);
				BgL_arg2290z00_5282 =
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_funz00_5073)))->BgL_namez00);
				return
					BGl_loadzd2fieldzd2zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5074), BgL_arg2288z00_5280,
					BgL_arg2289z00_5281, BgL_arg2290z00_5282);
			}
		}

	}



/* &gen-args-gen-fun-rtl1788 */
	obj_t BGl_z62genzd2argszd2genzd2funzd2rtl1788z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5075, obj_t BgL_funz00_5076, obj_t BgL_mez00_5077,
		obj_t BgL_argsz00_5078)
	{
		{	/* SawJvm/code.scm 557 */
			BGl_outzd2linezd2zzsaw_jvm_codez00(BgL_mez00_5077,
				((BgL_rtl_funz00_bglt) ((BgL_rtl_newz00_bglt) BgL_funz00_5076)));
			{	/* SawJvm/code.scm 559 */
				BgL_typez00_bglt BgL_arg2281z00_5284;
				obj_t BgL_arg2283z00_5285;

				BgL_arg2281z00_5284 =
					(((BgL_rtl_newz00_bglt) COBJECT(
							((BgL_rtl_newz00_bglt) BgL_funz00_5076)))->BgL_typez00);
				BgL_arg2283z00_5285 =
					(((BgL_rtl_newz00_bglt) COBJECT(
							((BgL_rtl_newz00_bglt) BgL_funz00_5076)))->BgL_constrz00);
				{	/* SawJvm/code.scm 560 */
					obj_t BgL_zc3z04anonymousza32284ze3z87_5286;

					BgL_zc3z04anonymousza32284ze3z87_5286 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32284ze3ze5zzsaw_jvm_codez00,
						(int) (((long) 0)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32284ze3z87_5286,
						(int) (((long) 0)), BgL_mez00_5077);
					PROCEDURE_SET(BgL_zc3z04anonymousza32284ze3z87_5286,
						(int) (((long) 1)), BgL_argsz00_5078);
					return BGl_newobjz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt)
							BgL_mez00_5077), BgL_arg2281z00_5284,
						BgL_zc3z04anonymousza32284ze3z87_5286, BgL_arg2283z00_5285);
				}
			}
		}

	}



/* &<@anonymous:2284> */
	obj_t BGl_z62zc3z04anonymousza32284ze3ze5zzsaw_jvm_codez00(obj_t
		BgL_envz00_5079)
	{
		{	/* SawJvm/code.scm 560 */
			{	/* SawJvm/code.scm 560 */
				obj_t BgL_mez00_5080;
				obj_t BgL_argsz00_5081;

				BgL_mez00_5080 = PROCEDURE_REF(BgL_envz00_5079, (int) (((long) 0)));
				BgL_argsz00_5081 = PROCEDURE_REF(BgL_envz00_5079, (int) (((long) 1)));
				{	/* SawJvm/code.scm 560 */
					bool_t BgL_tmpz00_6942;

					{
						obj_t BgL_l1730z00_5288;

						BgL_l1730z00_5288 = BgL_argsz00_5081;
					BgL_zc3z04anonymousza32285ze3z87_5287:
						if (PAIRP(BgL_l1730z00_5288))
							{	/* SawJvm/code.scm 560 */
								{	/* SawJvm/code.scm 560 */
									obj_t BgL_az00_5289;

									BgL_az00_5289 = CAR(BgL_l1730z00_5288);
									BGl_genzd2exprzd2zzsaw_jvm_codez00(
										((BgL_jvmz00_bglt) BgL_mez00_5080), BgL_az00_5289);
								}
								{
									obj_t BgL_l1730z00_6948;

									BgL_l1730z00_6948 = CDR(BgL_l1730z00_5288);
									BgL_l1730z00_5288 = BgL_l1730z00_6948;
									goto BgL_zc3z04anonymousza32285ze3z87_5287;
								}
							}
						else
							{	/* SawJvm/code.scm 560 */
								BgL_tmpz00_6942 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_6942);
				}
			}
		}

	}



/* &gen-fun-rtl_valloc1786 */
	obj_t BGl_z62genzd2funzd2rtl_valloc1786z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5082, obj_t BgL_funz00_5083, obj_t BgL_mez00_5084)
	{
		{	/* SawJvm/code.scm 546 */
			{	/* SawJvm/code.scm 547 */
				obj_t BgL_typez00_5291;

				{	/* SawJvm/code.scm 547 */
					BgL_typez00_bglt BgL_arg2280z00_5292;

					BgL_arg2280z00_5292 =
						(((BgL_rtl_vallocz00_bglt) COBJECT(
								((BgL_rtl_vallocz00_bglt) BgL_funz00_5083)))->BgL_typez00);
					BgL_typez00_5291 =
						BGl_compilezd2typezd2zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5084), BgL_arg2280z00_5292);
				}
				{	/* SawJvm/code.scm 548 */
					obj_t BgL_arg2276z00_5293;

					{	/* SawJvm/code.scm 548 */
						obj_t BgL_arg2277z00_5294;
						obj_t BgL_arg2278z00_5295;

						{	/* SawJvm/code.scm 548 */
							bool_t BgL_test2877z00_6955;

							{	/* SawJvm/code.scm 548 */
								bool_t BgL__ortest_1231z00_5296;

								BgL__ortest_1231z00_5296 =
									(BgL_typez00_5291 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_1231z00_5296)
									{	/* SawJvm/code.scm 548 */
										BgL_test2877z00_6955 = BgL__ortest_1231z00_5296;
									}
								else
									{	/* SawJvm/code.scm 548 */
										bool_t BgL__ortest_1232z00_5297;

										BgL__ortest_1232z00_5297 =
											(BgL_typez00_5291 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_1232z00_5297)
											{	/* SawJvm/code.scm 548 */
												BgL_test2877z00_6955 = BgL__ortest_1232z00_5297;
											}
										else
											{	/* SawJvm/code.scm 548 */
												bool_t BgL__ortest_1233z00_5298;

												BgL__ortest_1233z00_5298 =
													(BgL_typez00_5291 == CNST_TABLE_REF(((long) 20)));
												if (BgL__ortest_1233z00_5298)
													{	/* SawJvm/code.scm 548 */
														BgL_test2877z00_6955 = BgL__ortest_1233z00_5298;
													}
												else
													{	/* SawJvm/code.scm 548 */
														bool_t BgL__ortest_1234z00_5299;

														BgL__ortest_1234z00_5299 =
															(BgL_typez00_5291 == CNST_TABLE_REF(((long) 21)));
														if (BgL__ortest_1234z00_5299)
															{	/* SawJvm/code.scm 548 */
																BgL_test2877z00_6955 = BgL__ortest_1234z00_5299;
															}
														else
															{	/* SawJvm/code.scm 548 */
																bool_t BgL__ortest_1235z00_5300;

																BgL__ortest_1235z00_5300 =
																	(BgL_typez00_5291 ==
																	CNST_TABLE_REF(((long) 22)));
																if (BgL__ortest_1235z00_5300)
																	{	/* SawJvm/code.scm 548 */
																		BgL_test2877z00_6955 =
																			BgL__ortest_1235z00_5300;
																	}
																else
																	{	/* SawJvm/code.scm 548 */
																		bool_t BgL__ortest_1236z00_5301;

																		BgL__ortest_1236z00_5301 =
																			(BgL_typez00_5291 ==
																			CNST_TABLE_REF(((long) 11)));
																		if (BgL__ortest_1236z00_5301)
																			{	/* SawJvm/code.scm 548 */
																				BgL_test2877z00_6955 =
																					BgL__ortest_1236z00_5301;
																			}
																		else
																			{	/* SawJvm/code.scm 548 */
																				bool_t BgL__ortest_1237z00_5302;

																				BgL__ortest_1237z00_5302 =
																					(BgL_typez00_5291 ==
																					CNST_TABLE_REF(((long) 25)));
																				if (BgL__ortest_1237z00_5302)
																					{	/* SawJvm/code.scm 548 */
																						BgL_test2877z00_6955 =
																							BgL__ortest_1237z00_5302;
																					}
																				else
																					{	/* SawJvm/code.scm 548 */
																						BgL_test2877z00_6955 =
																							(BgL_typez00_5291 ==
																							CNST_TABLE_REF(((long) 10)));
							}}}}}}}}
							if (BgL_test2877z00_6955)
								{	/* SawJvm/code.scm 548 */
									BgL_arg2277z00_5294 = CNST_TABLE_REF(((long) 71));
								}
							else
								{	/* SawJvm/code.scm 548 */
									BgL_arg2277z00_5294 = CNST_TABLE_REF(((long) 72));
						}}
						BgL_arg2278z00_5295 = MAKE_YOUNG_PAIR(BgL_typez00_5291, BNIL);
						BgL_arg2276z00_5293 =
							MAKE_YOUNG_PAIR(BgL_arg2277z00_5294, BgL_arg2278z00_5295);
					}
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5084), BgL_arg2276z00_5293);
				}
			}
		}

	}



/* &gen-fun-rtl_vlength1784 */
	obj_t BGl_z62genzd2funzd2rtl_vlength1784z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5085, obj_t BgL_funz00_5086, obj_t BgL_mez00_5087)
	{
		{	/* SawJvm/code.scm 543 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5087), CNST_TABLE_REF(((long) 73)));
		}

	}



/* &gen-fun-rtl_vset1782 */
	obj_t BGl_z62genzd2funzd2rtl_vset1782z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5088, obj_t BgL_funz00_5089, obj_t BgL_mez00_5090)
	{
		{	/* SawJvm/code.scm 530 */
			{	/* SawJvm/code.scm 531 */
				obj_t BgL_typez00_5305;

				{	/* SawJvm/code.scm 531 */
					BgL_typez00_bglt BgL_arg2275z00_5306;

					BgL_arg2275z00_5306 =
						(((BgL_rtl_vsetz00_bglt) COBJECT(
								((BgL_rtl_vsetz00_bglt) BgL_funz00_5089)))->BgL_typez00);
					BgL_typez00_5305 =
						BGl_compilezd2typezd2zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5090), BgL_arg2275z00_5306);
				}
				{	/* SawJvm/code.scm 532 */
					obj_t BgL_arg2267z00_5307;

					{	/* SawJvm/code.scm 532 */
						bool_t BgL_test2885z00_6992;

						{	/* SawJvm/code.scm 532 */
							bool_t BgL__ortest_1230z00_5308;

							BgL__ortest_1230z00_5308 =
								(BgL_typez00_5305 == CNST_TABLE_REF(((long) 18)));
							if (BgL__ortest_1230z00_5308)
								{	/* SawJvm/code.scm 532 */
									BgL_test2885z00_6992 = BgL__ortest_1230z00_5308;
								}
							else
								{	/* SawJvm/code.scm 532 */
									BgL_test2885z00_6992 =
										(BgL_typez00_5305 == CNST_TABLE_REF(((long) 19)));
						}}
						if (BgL_test2885z00_6992)
							{	/* SawJvm/code.scm 532 */
								BgL_arg2267z00_5307 = CNST_TABLE_REF(((long) 74));
							}
						else
							{	/* SawJvm/code.scm 532 */
								if ((BgL_typez00_5305 == CNST_TABLE_REF(((long) 20))))
									{	/* SawJvm/code.scm 532 */
										BgL_arg2267z00_5307 = CNST_TABLE_REF(((long) 75));
									}
								else
									{	/* SawJvm/code.scm 532 */
										if ((BgL_typez00_5305 == CNST_TABLE_REF(((long) 21))))
											{	/* SawJvm/code.scm 532 */
												BgL_arg2267z00_5307 = CNST_TABLE_REF(((long) 76));
											}
										else
											{	/* SawJvm/code.scm 532 */
												if ((BgL_typez00_5305 == CNST_TABLE_REF(((long) 22))))
													{	/* SawJvm/code.scm 532 */
														BgL_arg2267z00_5307 = CNST_TABLE_REF(((long) 77));
													}
												else
													{	/* SawJvm/code.scm 532 */
														if (
															(BgL_typez00_5305 == CNST_TABLE_REF(((long) 11))))
															{	/* SawJvm/code.scm 532 */
																BgL_arg2267z00_5307 =
																	CNST_TABLE_REF(((long) 78));
															}
														else
															{	/* SawJvm/code.scm 532 */
																if (
																	(BgL_typez00_5305 ==
																		CNST_TABLE_REF(((long) 25))))
																	{	/* SawJvm/code.scm 532 */
																		BgL_arg2267z00_5307 =
																			CNST_TABLE_REF(((long) 79));
																	}
																else
																	{	/* SawJvm/code.scm 532 */
																		if (
																			(BgL_typez00_5305 ==
																				CNST_TABLE_REF(((long) 10))))
																			{	/* SawJvm/code.scm 532 */
																				BgL_arg2267z00_5307 =
																					CNST_TABLE_REF(((long) 80));
																			}
																		else
																			{	/* SawJvm/code.scm 532 */
																				BgL_arg2267z00_5307 =
																					CNST_TABLE_REF(((long) 81));
					}}}}}}}}
					BGl_codez12z12zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5090), BgL_arg2267z00_5307);
				}
				return CNST_TABLE_REF(((long) 13));
		}}

	}



/* &gen-fun-rtl_vref1780 */
	obj_t BGl_z62genzd2funzd2rtl_vref1780z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5091, obj_t BgL_funz00_5092, obj_t BgL_mez00_5093)
	{
		{	/* SawJvm/code.scm 518 */
			{	/* SawJvm/code.scm 519 */
				obj_t BgL_typez00_5310;

				{	/* SawJvm/code.scm 519 */
					BgL_typez00_bglt BgL_arg2265z00_5311;

					BgL_arg2265z00_5311 =
						(((BgL_rtl_vrefz00_bglt) COBJECT(
								((BgL_rtl_vrefz00_bglt) BgL_funz00_5092)))->BgL_typez00);
					BgL_typez00_5310 =
						BGl_compilezd2typezd2zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5093), BgL_arg2265z00_5311);
				}
				{	/* SawJvm/code.scm 520 */
					obj_t BgL_arg2257z00_5312;

					{	/* SawJvm/code.scm 520 */
						bool_t BgL_test2893z00_7031;

						{	/* SawJvm/code.scm 520 */
							bool_t BgL__ortest_1229z00_5313;

							BgL__ortest_1229z00_5313 =
								(BgL_typez00_5310 == CNST_TABLE_REF(((long) 18)));
							if (BgL__ortest_1229z00_5313)
								{	/* SawJvm/code.scm 520 */
									BgL_test2893z00_7031 = BgL__ortest_1229z00_5313;
								}
							else
								{	/* SawJvm/code.scm 520 */
									BgL_test2893z00_7031 =
										(BgL_typez00_5310 == CNST_TABLE_REF(((long) 19)));
						}}
						if (BgL_test2893z00_7031)
							{	/* SawJvm/code.scm 520 */
								BgL_arg2257z00_5312 = CNST_TABLE_REF(((long) 82));
							}
						else
							{	/* SawJvm/code.scm 520 */
								if ((BgL_typez00_5310 == CNST_TABLE_REF(((long) 20))))
									{	/* SawJvm/code.scm 520 */
										BgL_arg2257z00_5312 = CNST_TABLE_REF(((long) 83));
									}
								else
									{	/* SawJvm/code.scm 520 */
										if ((BgL_typez00_5310 == CNST_TABLE_REF(((long) 21))))
											{	/* SawJvm/code.scm 520 */
												BgL_arg2257z00_5312 = CNST_TABLE_REF(((long) 84));
											}
										else
											{	/* SawJvm/code.scm 520 */
												if ((BgL_typez00_5310 == CNST_TABLE_REF(((long) 22))))
													{	/* SawJvm/code.scm 520 */
														BgL_arg2257z00_5312 = CNST_TABLE_REF(((long) 85));
													}
												else
													{	/* SawJvm/code.scm 520 */
														if (
															(BgL_typez00_5310 == CNST_TABLE_REF(((long) 11))))
															{	/* SawJvm/code.scm 520 */
																BgL_arg2257z00_5312 =
																	CNST_TABLE_REF(((long) 86));
															}
														else
															{	/* SawJvm/code.scm 520 */
																if (
																	(BgL_typez00_5310 ==
																		CNST_TABLE_REF(((long) 25))))
																	{	/* SawJvm/code.scm 520 */
																		BgL_arg2257z00_5312 =
																			CNST_TABLE_REF(((long) 87));
																	}
																else
																	{	/* SawJvm/code.scm 520 */
																		if (
																			(BgL_typez00_5310 ==
																				CNST_TABLE_REF(((long) 10))))
																			{	/* SawJvm/code.scm 520 */
																				BgL_arg2257z00_5312 =
																					CNST_TABLE_REF(((long) 88));
																			}
																		else
																			{	/* SawJvm/code.scm 520 */
																				BgL_arg2257z00_5312 =
																					CNST_TABLE_REF(((long) 89));
					}}}}}}}}
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5093), BgL_arg2257z00_5312);
				}
			}
		}

	}



/* &gen-fun-rtl_apply1778 */
	obj_t BGl_z62genzd2funzd2rtl_apply1778z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5094, obj_t BgL_funz00_5095, obj_t BgL_mez00_5096)
	{
		{	/* SawJvm/code.scm 512 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_5096), CNST_TABLE_REF(((long) 38)));
		}

	}



/* &gen-fun-rtl_loadfun1776 */
	obj_t BGl_z62genzd2funzd2rtl_loadfun1776z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5097, obj_t BgL_funz00_5098, obj_t BgL_mez00_5099)
	{
		{	/* SawJvm/code.scm 508 */
			{	/* SawJvm/code.scm 509 */
				BgL_globalz00_bglt BgL_varz00_5316;

				BgL_varz00_5316 =
					(((BgL_rtl_loadfunz00_bglt) COBJECT(
							((BgL_rtl_loadfunz00_bglt) BgL_funz00_5098)))->BgL_varz00);
				{	/* SawJvm/code.scm 510 */
					int BgL_arg2256z00_5317;

					{
						BgL_indexedz00_bglt BgL_auxz00_7070;

						{
							obj_t BgL_auxz00_7071;

							{	/* SawJvm/code.scm 510 */
								BgL_objectz00_bglt BgL_tmpz00_7072;

								BgL_tmpz00_7072 =
									((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5316));
								BgL_auxz00_7071 = BGL_OBJECT_WIDENING(BgL_tmpz00_7072);
							}
							BgL_auxz00_7070 = ((BgL_indexedz00_bglt) BgL_auxz00_7071);
						}
						BgL_arg2256z00_5317 =
							(((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_7070))->BgL_indexz00);
					}
					return
						BGl_pushzd2intzd2zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5099), BINT(BgL_arg2256z00_5317));
				}
			}
		}

	}



/* &gen-fun-with-args-rt1774 */
	obj_t BGl_z62genzd2funzd2withzd2argszd2rt1774z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5100, obj_t BgL_funz00_5101, obj_t BgL_mez00_5102,
		obj_t BgL_argsz00_5103)
	{
		{	/* SawJvm/code.scm 495 */
			{	/* SawJvm/code.scm 496 */
				obj_t BgL_az00_5319;

				BgL_az00_5319 = CAR(((obj_t) BgL_argsz00_5103));
				{	/* SawJvm/code.scm 497 */
					obj_t BgL_regz00_5320;

					if (BGl_isazf3zf3zz__objectz00(BgL_az00_5319,
							BGl_rtl_regz00zzsaw_defsz00))
						{	/* SawJvm/code.scm 497 */
							BgL_regz00_5320 = BgL_az00_5319;
						}
					else
						{	/* SawJvm/code.scm 497 */
							BgL_regz00_5320 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_az00_5319)))->BgL_destz00);
						}
					{	/* SawJvm/code.scm 499 */
						obj_t BgL_arg2247z00_5321;

						{	/* SawJvm/code.scm 499 */
							obj_t BgL_casezd2valuezd2_5322;

							BgL_casezd2valuezd2_5322 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_rtl_regz00_bglt) COBJECT(
													((BgL_rtl_regz00_bglt) BgL_regz00_5320)))->
											BgL_typez00)))->BgL_namez00);
							if ((BgL_casezd2valuezd2_5322 == CNST_TABLE_REF(((long) 90))))
								{	/* SawJvm/code.scm 499 */
									BgL_arg2247z00_5321 = CNST_TABLE_REF(((long) 91));
								}
							else
								{	/* SawJvm/code.scm 499 */
									bool_t BgL_test2903z00_7094;

									{	/* SawJvm/code.scm 499 */
										bool_t BgL__ortest_1225z00_5323;

										BgL__ortest_1225z00_5323 =
											(BgL_casezd2valuezd2_5322 == CNST_TABLE_REF(((long) 18)));
										if (BgL__ortest_1225z00_5323)
											{	/* SawJvm/code.scm 499 */
												BgL_test2903z00_7094 = BgL__ortest_1225z00_5323;
											}
										else
											{	/* SawJvm/code.scm 499 */
												bool_t BgL__ortest_1226z00_5324;

												BgL__ortest_1226z00_5324 =
													(BgL_casezd2valuezd2_5322 ==
													CNST_TABLE_REF(((long) 19)));
												if (BgL__ortest_1226z00_5324)
													{	/* SawJvm/code.scm 499 */
														BgL_test2903z00_7094 = BgL__ortest_1226z00_5324;
													}
												else
													{	/* SawJvm/code.scm 499 */
														bool_t BgL__ortest_1227z00_5325;

														BgL__ortest_1227z00_5325 =
															(BgL_casezd2valuezd2_5322 ==
															CNST_TABLE_REF(((long) 20)));
														if (BgL__ortest_1227z00_5325)
															{	/* SawJvm/code.scm 499 */
																BgL_test2903z00_7094 = BgL__ortest_1227z00_5325;
															}
														else
															{	/* SawJvm/code.scm 499 */
																bool_t BgL__ortest_1228z00_5326;

																BgL__ortest_1228z00_5326 =
																	(BgL_casezd2valuezd2_5322 ==
																	CNST_TABLE_REF(((long) 21)));
																if (BgL__ortest_1228z00_5326)
																	{	/* SawJvm/code.scm 499 */
																		BgL_test2903z00_7094 =
																			BgL__ortest_1228z00_5326;
																	}
																else
																	{	/* SawJvm/code.scm 499 */
																		BgL_test2903z00_7094 =
																			(BgL_casezd2valuezd2_5322 ==
																			CNST_TABLE_REF(((long) 22)));
									}}}}}
									if (BgL_test2903z00_7094)
										{	/* SawJvm/code.scm 499 */
											BgL_arg2247z00_5321 = CNST_TABLE_REF(((long) 92));
										}
									else
										{	/* SawJvm/code.scm 499 */
											if (
												(BgL_casezd2valuezd2_5322 ==
													CNST_TABLE_REF(((long) 11))))
												{	/* SawJvm/code.scm 499 */
													BgL_arg2247z00_5321 = CNST_TABLE_REF(((long) 93));
												}
											else
												{	/* SawJvm/code.scm 499 */
													if (
														(BgL_casezd2valuezd2_5322 ==
															CNST_TABLE_REF(((long) 25))))
														{	/* SawJvm/code.scm 499 */
															BgL_arg2247z00_5321 = CNST_TABLE_REF(((long) 94));
														}
													else
														{	/* SawJvm/code.scm 499 */
															if (
																(BgL_casezd2valuezd2_5322 ==
																	CNST_TABLE_REF(((long) 10))))
																{	/* SawJvm/code.scm 499 */
																	BgL_arg2247z00_5321 =
																		CNST_TABLE_REF(((long) 95));
																}
															else
																{	/* SawJvm/code.scm 499 */
																	BgL_arg2247z00_5321 =
																		CNST_TABLE_REF(((long) 7));
						}}}}}}
						BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_5102), BgL_arg2247z00_5321);
					}
					return CNST_TABLE_REF(((long) 13));
		}}}

	}



/* &gen-fun-with-args-rt1772 */
	obj_t BGl_z62genzd2funzd2withzd2argszd2rt1772z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5104, obj_t BgL_funz00_5105, obj_t BgL_mez00_5106,
		obj_t BgL_argsz00_5107)
	{
		{	/* SawJvm/code.scm 479 */
			return
				BGl_genzd2funcallzd2zzsaw_jvm_codez00(BgL_mez00_5106, BgL_argsz00_5107);
		}

	}



/* &gen-fun-rtl_lightfun1770 */
	obj_t BGl_z62genzd2funzd2rtl_lightfun1770z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5108, obj_t BgL_funz00_5109, obj_t BgL_mez00_5110)
	{
		{	/* SawJvm/code.scm 471 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						((obj_t)
							((BgL_rtl_lightfuncallz00_bglt) BgL_funz00_5109)),
						(((BgL_jvmz00_bglt) COBJECT(
									((BgL_jvmz00_bglt) BgL_mez00_5110)))->
							BgL_lightzd2funcallszd2))))
				{	/* SawJvm/code.scm 474 */
					BFALSE;
				}
			else
				{
					obj_t BgL_auxz00_7134;

					{	/* SawJvm/code.scm 475 */
						obj_t BgL_arg2242z00_5329;

						BgL_arg2242z00_5329 =
							(((BgL_jvmz00_bglt) COBJECT(
									((BgL_jvmz00_bglt) BgL_mez00_5110)))->
							BgL_lightzd2funcallszd2);
						BgL_auxz00_7134 =
							MAKE_YOUNG_PAIR(((obj_t) ((BgL_rtl_lightfuncallz00_bglt)
									BgL_funz00_5109)), BgL_arg2242z00_5329);
					}
					((((BgL_jvmz00_bglt) COBJECT(
									((BgL_jvmz00_bglt) BgL_mez00_5110)))->
							BgL_lightzd2funcallszd2) = ((obj_t) BgL_auxz00_7134), BUNSPEC);
				}
			{	/* SawJvm/code.scm 476 */
				obj_t BgL_arg2244z00_5330;

				{	/* SawJvm/code.scm 476 */
					obj_t BgL_arg2245z00_5331;

					BgL_arg2245z00_5331 =
						MAKE_YOUNG_PAIR(
						(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
									((BgL_rtl_lightfuncallz00_bglt) BgL_funz00_5109)))->
							BgL_namez00), BNIL);
					BgL_arg2244z00_5330 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 96)), BgL_arg2245z00_5331);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5110), BgL_arg2244z00_5330);
			}
		}

	}



/* &gen-fun-rtl_call1768 */
	obj_t BGl_z62genzd2funzd2rtl_call1768z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5111, obj_t BgL_funz00_5112, obj_t BgL_mez00_5113)
	{
		{	/* SawJvm/code.scm 457 */
			{	/* SawJvm/code.scm 458 */
				BgL_globalz00_bglt BgL_varz00_5333;

				BgL_varz00_5333 =
					(((BgL_rtl_callz00_bglt) COBJECT(
							((BgL_rtl_callz00_bglt) BgL_funz00_5112)))->BgL_varz00);
				{	/* SawJvm/code.scm 459 */
					obj_t BgL_rz00_5334;

					BgL_rz00_5334 =
						BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(
						((BgL_jvmz00_bglt) BgL_mez00_5113), BgL_varz00_5333);
					if ((BgL_rz00_5334 == CNST_TABLE_REF(((long) 54))))
						{	/* SawJvm/code.scm 460 */
							BGl_callzd2globalzd2zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5113), BgL_varz00_5333);
							if (
								((((BgL_typez00_bglt) COBJECT(
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_5333)))->
													BgL_typez00)))->BgL_namez00) ==
									CNST_TABLE_REF(((long) 90))))
								{	/* SawJvm/code.scm 463 */
									return CNST_TABLE_REF(((long) 13));
								}
							else
								{	/* SawJvm/code.scm 463 */
									return CNST_TABLE_REF(((long) 55));
						}}
					else
						{	/* SawJvm/code.scm 460 */
							return BgL_rz00_5334;
						}
				}
			}
		}

	}



/* &gen-args-gen-fun-rtl1766 */
	obj_t BGl_z62genzd2argszd2genzd2funzd2rtl1766z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5114, obj_t BgL_funz00_5115, obj_t BgL_mez00_5116,
		obj_t BgL_argsz00_5117)
	{
		{	/* SawJvm/code.scm 450 */
			{	/* SawJvm/code.scm 451 */
				obj_t BgL_rz00_5336;

				{	/* SawJvm/code.scm 451 */
					BgL_globalz00_bglt BgL_arg2233z00_5337;

					BgL_arg2233z00_5337 =
						(((BgL_rtl_callz00_bglt) COBJECT(
								((BgL_rtl_callz00_bglt) BgL_funz00_5115)))->BgL_varz00);
					BgL_rz00_5336 =
						BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(
						((BgL_jvmz00_bglt) BgL_mez00_5116), BgL_arg2233z00_5337,
						BgL_argsz00_5117);
				}
				if ((BgL_rz00_5336 == CNST_TABLE_REF(((long) 54))))
					{	/* SawJvm/code.scm 452 */
						{
							obj_t BgL_l1725z00_5339;

							BgL_l1725z00_5339 = BgL_argsz00_5117;
						BgL_zc3z04anonymousza32230ze3z87_5338:
							if (PAIRP(BgL_l1725z00_5339))
								{	/* SawJvm/code.scm 453 */
									{	/* SawJvm/code.scm 453 */
										obj_t BgL_az00_5340;

										BgL_az00_5340 = CAR(BgL_l1725z00_5339);
										BGl_genzd2exprzd2zzsaw_jvm_codez00(
											((BgL_jvmz00_bglt) BgL_mez00_5116), BgL_az00_5340);
									}
									{
										obj_t BgL_l1725z00_7178;

										BgL_l1725z00_7178 = CDR(BgL_l1725z00_5339);
										BgL_l1725z00_5339 = BgL_l1725z00_7178;
										goto BgL_zc3z04anonymousza32230ze3z87_5338;
									}
								}
							else
								{	/* SawJvm/code.scm 453 */
									((bool_t) 1);
								}
						}
						return
							BGl_genzd2funzd2zzsaw_jvm_codez00(
							((BgL_rtl_funz00_bglt)
								((BgL_rtl_callz00_bglt) BgL_funz00_5115)), BgL_mez00_5116);
					}
				else
					{	/* SawJvm/code.scm 452 */
						return BgL_rz00_5336;
					}
			}
		}

	}



/* &gen-fun-rtl_switch1764 */
	obj_t BGl_z62genzd2funzd2rtl_switch1764z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5118, obj_t BgL_funz00_5119, obj_t BgL_mez00_5120)
	{
		{	/* SawJvm/code.scm 407 */
			{	/* SawJvm/code.scm 410 */
				obj_t BgL_ldefz00_5342;
				obj_t BgL_num2labz00_5343;

				BgL_ldefz00_5342 = BUNSPEC;
				BgL_num2labz00_5343 = BNIL;
				{
					obj_t BgL_nz00_5345;
					obj_t BgL_labz00_5346;

					{	/* SawJvm/code.scm 415 */
						obj_t BgL_g1716z00_5348;
						obj_t BgL_g1717z00_5349;

						BgL_g1716z00_5348 =
							(((BgL_rtl_selectz00_bglt) COBJECT(
									((BgL_rtl_selectz00_bglt)
										((BgL_rtl_switchz00_bglt) BgL_funz00_5119))))->
							BgL_patternsz00);
						{	/* SawJvm/code.scm 420 */
							obj_t BgL_l1707z00_5350;

							BgL_l1707z00_5350 =
								(((BgL_rtl_switchz00_bglt) COBJECT(
										((BgL_rtl_switchz00_bglt) BgL_funz00_5119)))->
								BgL_labelsz00);
							if (NULLP(BgL_l1707z00_5350))
								{	/* SawJvm/code.scm 420 */
									BgL_g1717z00_5349 = BNIL;
								}
							else
								{	/* SawJvm/code.scm 420 */
									obj_t BgL_head1709z00_5351;

									{	/* SawJvm/code.scm 420 */
										int BgL_arg2187z00_5352;

										BgL_arg2187z00_5352 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt)
														CAR(((obj_t) BgL_l1707z00_5350)))))->BgL_labelz00);
										{	/* SawJvm/code.scm 420 */
											obj_t BgL_res2593z00_5353;

											BgL_res2593z00_5353 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg2187z00_5352), BNIL);
											BgL_head1709z00_5351 = BgL_res2593z00_5353;
									}}
									{	/* SawJvm/code.scm 420 */
										obj_t BgL_g1712z00_5354;

										BgL_g1712z00_5354 = CDR(((obj_t) BgL_l1707z00_5350));
										{
											obj_t BgL_l1707z00_5356;
											obj_t BgL_tail1710z00_5357;

											BgL_l1707z00_5356 = BgL_g1712z00_5354;
											BgL_tail1710z00_5357 = BgL_head1709z00_5351;
										BgL_zc3z04anonymousza32182ze3z87_5355:
											if (NULLP(BgL_l1707z00_5356))
												{	/* SawJvm/code.scm 420 */
													BgL_g1717z00_5349 = BgL_head1709z00_5351;
												}
											else
												{	/* SawJvm/code.scm 420 */
													obj_t BgL_newtail1711z00_5358;

													{	/* SawJvm/code.scm 420 */
														int BgL_arg2185z00_5359;

														BgL_arg2185z00_5359 =
															(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt)
																		CAR(
																			((obj_t) BgL_l1707z00_5356)))))->
															BgL_labelz00);
														{	/* SawJvm/code.scm 420 */
															obj_t BgL_res2595z00_5360;

															BgL_res2595z00_5360 =
																MAKE_YOUNG_PAIR(BINT(BgL_arg2185z00_5359),
																BNIL);
															BgL_newtail1711z00_5358 = BgL_res2595z00_5360;
													}}
													SET_CDR(BgL_tail1710z00_5357,
														BgL_newtail1711z00_5358);
													{	/* SawJvm/code.scm 420 */
														obj_t BgL_arg2184z00_5361;

														BgL_arg2184z00_5361 =
															CDR(((obj_t) BgL_l1707z00_5356));
														{
															obj_t BgL_tail1710z00_7210;
															obj_t BgL_l1707z00_7209;

															BgL_l1707z00_7209 = BgL_arg2184z00_5361;
															BgL_tail1710z00_7210 = BgL_newtail1711z00_5358;
															BgL_tail1710z00_5357 = BgL_tail1710z00_7210;
															BgL_l1707z00_5356 = BgL_l1707z00_7209;
															goto BgL_zc3z04anonymousza32182ze3z87_5355;
														}
													}
												}
										}
									}
								}
						}
						{
							obj_t BgL_ll1713z00_5363;
							obj_t BgL_ll1714z00_5364;

							BgL_ll1713z00_5363 = BgL_g1716z00_5348;
							BgL_ll1714z00_5364 = BgL_g1717z00_5349;
						BgL_zc3z04anonymousza32173ze3z87_5362:
							if (NULLP(BgL_ll1713z00_5363))
								{	/* SawJvm/code.scm 415 */
									((bool_t) 1);
								}
							else
								{	/* SawJvm/code.scm 415 */
									{	/* SawJvm/code.scm 416 */
										obj_t BgL_patz00_5365;
										obj_t BgL_labz00_5366;

										BgL_patz00_5365 = CAR(((obj_t) BgL_ll1713z00_5363));
										BgL_labz00_5366 = CAR(((obj_t) BgL_ll1714z00_5364));
										if ((BgL_patz00_5365 == CNST_TABLE_REF(((long) 97))))
											{	/* SawJvm/code.scm 416 */
												BgL_ldefz00_5342 =
													BGl_Lze70ze7zzsaw_jvm_codez00(BgL_labz00_5366);
											}
										else
											{
												obj_t BgL_l1705z00_5368;

												{	/* SawJvm/code.scm 418 */
													bool_t BgL_tmpz00_7221;

													BgL_l1705z00_5368 = BgL_patz00_5365;
												BgL_zc3z04anonymousza32176ze3z87_5367:
													if (PAIRP(BgL_l1705z00_5368))
														{	/* SawJvm/code.scm 418 */
															BgL_nz00_5345 = CAR(BgL_l1705z00_5368);
															BgL_labz00_5346 = BgL_labz00_5366;
															{	/* SawJvm/code.scm 414 */
																obj_t BgL_arg2226z00_5347;

																BgL_arg2226z00_5347 =
																	MAKE_YOUNG_PAIR(BGl_intifyz00zzsaw_jvm_codez00
																	(BgL_nz00_5345),
																	BGl_Lze70ze7zzsaw_jvm_codez00
																	(BgL_labz00_5346));
																BgL_num2labz00_5343 =
																	MAKE_YOUNG_PAIR(BgL_arg2226z00_5347,
																	BgL_num2labz00_5343);
															}
															{
																obj_t BgL_l1705z00_7229;

																BgL_l1705z00_7229 = CDR(BgL_l1705z00_5368);
																BgL_l1705z00_5368 = BgL_l1705z00_7229;
																goto BgL_zc3z04anonymousza32176ze3z87_5367;
															}
														}
													else
														{	/* SawJvm/code.scm 418 */
															BgL_tmpz00_7221 = ((bool_t) 1);
														}
													BBOOL(BgL_tmpz00_7221);
												}
											}
									}
									{	/* SawJvm/code.scm 415 */
										obj_t BgL_arg2179z00_5369;
										obj_t BgL_arg2180z00_5370;

										BgL_arg2179z00_5369 = CDR(((obj_t) BgL_ll1713z00_5363));
										BgL_arg2180z00_5370 = CDR(((obj_t) BgL_ll1714z00_5364));
										{
											obj_t BgL_ll1714z00_7237;
											obj_t BgL_ll1713z00_7236;

											BgL_ll1713z00_7236 = BgL_arg2179z00_5369;
											BgL_ll1714z00_7237 = BgL_arg2180z00_5370;
											BgL_ll1714z00_5364 = BgL_ll1714z00_7237;
											BgL_ll1713z00_5363 = BgL_ll1713z00_7236;
											goto BgL_zc3z04anonymousza32173ze3z87_5362;
										}
									}
								}
						}
					}
					if (NULLP(CDR(BgL_num2labz00_5343)))
						{	/* SawJvm/code.scm 422 */
							{	/* SawJvm/code.scm 423 */
								obj_t BgL_arg2191z00_5371;

								{	/* SawJvm/code.scm 423 */
									obj_t BgL_pairz00_5372;

									BgL_pairz00_5372 = BgL_num2labz00_5343;
									BgL_arg2191z00_5371 = CAR(CAR(BgL_pairz00_5372));
								}
								BGl_pushzd2intzd2zzsaw_jvm_outz00(
									((BgL_jvmz00_bglt) BgL_mez00_5120), BgL_arg2191z00_5371);
							}
							BGl_branchz00zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5120),
								CNST_TABLE_REF(((long) 98)), BgL_ldefz00_5342);
							{	/* SawJvm/code.scm 425 */
								obj_t BgL_arg2192z00_5373;

								{	/* SawJvm/code.scm 425 */
									obj_t BgL_pairz00_5374;

									BgL_pairz00_5374 = BgL_num2labz00_5343;
									BgL_arg2192z00_5373 = CDR(CAR(BgL_pairz00_5374));
								}
								BGl_branchz00zzsaw_jvm_outz00(
									((BgL_jvmz00_bglt) BgL_mez00_5120),
									CNST_TABLE_REF(((long) 70)), BgL_arg2192z00_5373);
						}}
					else
						{	/* SawJvm/code.scm 422 */
							BgL_num2labz00_5343 =
								BGl_sortz00zz__r4_vectors_6_8z00(BgL_num2labz00_5343,
								BGl_proc2691z00zzsaw_jvm_codez00);
							{	/* SawJvm/code.scm 428 */
								obj_t BgL_numsz00_5376;

								{	/* SawJvm/code.scm 428 */
									obj_t BgL_l1718z00_5377;

									BgL_l1718z00_5377 = BgL_num2labz00_5343;
									if (NULLP(BgL_l1718z00_5377))
										{	/* SawJvm/code.scm 428 */
											BgL_numsz00_5376 = BNIL;
										}
									else
										{	/* SawJvm/code.scm 428 */
											obj_t BgL_head1720z00_5378;

											{	/* SawJvm/code.scm 428 */
												obj_t BgL_arg2219z00_5379;

												{	/* SawJvm/code.scm 428 */
													obj_t BgL_pairz00_5380;

													BgL_pairz00_5380 = CAR(((obj_t) BgL_l1718z00_5377));
													BgL_arg2219z00_5379 = CAR(BgL_pairz00_5380);
												}
												{	/* SawJvm/code.scm 428 */
													obj_t BgL_res2601z00_5381;

													BgL_res2601z00_5381 =
														MAKE_YOUNG_PAIR(BgL_arg2219z00_5379, BNIL);
													BgL_head1720z00_5378 = BgL_res2601z00_5381;
												}
											}
											{	/* SawJvm/code.scm 428 */
												obj_t BgL_g1723z00_5382;

												BgL_g1723z00_5382 = CDR(((obj_t) BgL_l1718z00_5377));
												{
													obj_t BgL_l1718z00_5384;
													obj_t BgL_tail1721z00_5385;

													BgL_l1718z00_5384 = BgL_g1723z00_5382;
													BgL_tail1721z00_5385 = BgL_head1720z00_5378;
												BgL_zc3z04anonymousza32214ze3z87_5383:
													if (NULLP(BgL_l1718z00_5384))
														{	/* SawJvm/code.scm 428 */
															BgL_numsz00_5376 = BgL_head1720z00_5378;
														}
													else
														{	/* SawJvm/code.scm 428 */
															obj_t BgL_newtail1722z00_5386;

															{	/* SawJvm/code.scm 428 */
																obj_t BgL_arg2217z00_5387;

																{	/* SawJvm/code.scm 428 */
																	obj_t BgL_pairz00_5388;

																	BgL_pairz00_5388 =
																		CAR(((obj_t) BgL_l1718z00_5384));
																	BgL_arg2217z00_5387 = CAR(BgL_pairz00_5388);
																}
																{	/* SawJvm/code.scm 428 */
																	obj_t BgL_res2603z00_5389;

																	BgL_res2603z00_5389 =
																		MAKE_YOUNG_PAIR(BgL_arg2217z00_5387, BNIL);
																	BgL_newtail1722z00_5386 = BgL_res2603z00_5389;
																}
															}
															SET_CDR(BgL_tail1721z00_5385,
																BgL_newtail1722z00_5386);
															{	/* SawJvm/code.scm 428 */
																obj_t BgL_arg2216z00_5390;

																BgL_arg2216z00_5390 =
																	CDR(((obj_t) BgL_l1718z00_5384));
																{
																	obj_t BgL_tail1721z00_7272;
																	obj_t BgL_l1718z00_7271;

																	BgL_l1718z00_7271 = BgL_arg2216z00_5390;
																	BgL_tail1721z00_7272 =
																		BgL_newtail1722z00_5386;
																	BgL_tail1721z00_5385 = BgL_tail1721z00_7272;
																	BgL_l1718z00_5384 = BgL_l1718z00_7271;
																	goto BgL_zc3z04anonymousza32214ze3z87_5383;
																}
															}
														}
												}
											}
										}
								}
								{	/* SawJvm/code.scm 428 */
									obj_t BgL_minz00_5391;

									BgL_minz00_5391 = CAR(((obj_t) BgL_numsz00_5376));
									{	/* SawJvm/code.scm 429 */
										obj_t BgL_maxz00_5392;

										BgL_maxz00_5392 =
											CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_numsz00_5376));
										{	/* SawJvm/code.scm 430 */
											long BgL_nz00_5393;

											BgL_nz00_5393 = bgl_list_length(BgL_numsz00_5376);
											{	/* SawJvm/code.scm 431 */

												if (BGl_2zc3zc3zz__r4_numbers_6_5z00
													(BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_nz00_5393),
															BINT((((long) 1) + ((long) CINT(BgL_maxz00_5392) -
																		(long) CINT(BgL_minz00_5391))))),
														BGL_REAL_CNST(BGl_real2692z00zzsaw_jvm_codez00)))
													{	/* SawJvm/code.scm 433 */
														obj_t BgL_arg2201z00_5394;

														{	/* SawJvm/code.scm 433 */
															obj_t BgL_arg2202z00_5395;

															{	/* SawJvm/code.scm 433 */
																obj_t BgL_arg2203z00_5396;

																BgL_arg2203z00_5396 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_num2labz00_5343, BNIL);
																BgL_arg2202z00_5395 =
																	MAKE_YOUNG_PAIR(BgL_ldefz00_5342,
																	BgL_arg2203z00_5396);
															}
															BgL_arg2201z00_5394 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 99)),
																BgL_arg2202z00_5395);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_5120),
															BgL_arg2201z00_5394);
													}
												else
													{	/* SawJvm/code.scm 435 */
														obj_t BgL_arg2204z00_5397;

														{	/* SawJvm/code.scm 435 */
															obj_t BgL_arg2205z00_5398;

															{	/* SawJvm/code.scm 435 */
																obj_t BgL_arg2206z00_5399;

																BgL_arg2206z00_5399 =
																	MAKE_YOUNG_PAIR(BgL_minz00_5391,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_flatz00zzsaw_jvm_codez00
																		(BgL_num2labz00_5343, BgL_ldefz00_5342),
																		BNIL));
																BgL_arg2205z00_5398 =
																	MAKE_YOUNG_PAIR(BgL_ldefz00_5342,
																	BgL_arg2206z00_5399);
															}
															BgL_arg2204z00_5397 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 100)),
																BgL_arg2205z00_5398);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_5120),
															BgL_arg2204z00_5397);
						}}}}}}}
					return CNST_TABLE_REF(((long) 13));
		}}}

	}



/* L~0 */
	obj_t BGl_Lze70ze7zzsaw_jvm_codez00(obj_t BgL_nz00_3443)
	{
		{	/* SawJvm/code.scm 412 */
			{	/* SawJvm/code.scm 412 */
				obj_t BgL_arg2223z00_3445;

				{	/* SawJvm/code.scm 412 */
					obj_t BgL_arg2224z00_3446;

					{	/* SawJvm/code.scm 412 */

						BgL_arg2224z00_3446 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) CINT(BgL_nz00_3443), ((long) 10));
					}
					BgL_arg2223z00_3445 =
						string_append(BGl_string2693z00zzsaw_jvm_codez00,
						BgL_arg2224z00_3446);
				}
				return bstring_to_symbol(BgL_arg2223z00_3445);
			}
		}

	}



/* &<@anonymous:2194> */
	obj_t BGl_z62zc3z04anonymousza32194ze3ze5zzsaw_jvm_codez00(obj_t
		BgL_envz00_5121, obj_t BgL_xz00_5122, obj_t BgL_yz00_5123)
	{
		{	/* SawJvm/code.scm 427 */
			return
				BBOOL(
				((long) CINT(CAR(
							((obj_t) BgL_xz00_5122))) <
					(long) CINT(CAR(((obj_t) BgL_yz00_5123)))));
		}

	}



/* &gen-fun-rtl_go1762 */
	obj_t BGl_z62genzd2funzd2rtl_go1762z62zzsaw_jvm_codez00(obj_t BgL_envz00_5124,
		obj_t BgL_funz00_5125, obj_t BgL_mez00_5126)
	{
		{	/* SawJvm/code.scm 396 */
			{	/* SawJvm/code.scm 397 */
				int BgL_arg2170z00_5401;

				BgL_arg2170z00_5401 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_goz00_bglt) COBJECT(
										((BgL_rtl_goz00_bglt) BgL_funz00_5125)))->BgL_toz00)))->
					BgL_labelz00);
				BGl_branchz00zzsaw_jvm_outz00(((BgL_jvmz00_bglt) BgL_mez00_5126),
					CNST_TABLE_REF(((long) 70)), BINT(BgL_arg2170z00_5401));
			}
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-args-gen-fun-rtl1760 */
	obj_t BGl_z62genzd2argszd2genzd2funzd2rtl1760z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5127, obj_t BgL_funz00_5128, obj_t BgL_mez00_5129,
		obj_t BgL_argsz00_5130)
	{
		{	/* SawJvm/code.scm 387 */
			{	/* SawJvm/code.scm 388 */
				obj_t BgL_argz00_5403;
				int BgL_labz00_5404;

				BgL_argz00_5403 = CAR(((obj_t) BgL_argsz00_5130));
				BgL_labz00_5404 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifnez00_bglt) COBJECT(
										((BgL_rtl_ifnez00_bglt) BgL_funz00_5128)))->BgL_thenz00)))->
					BgL_labelz00);
				if (BGl_isazf3zf3zz__objectz00(BgL_argz00_5403,
						BGl_rtl_regz00zzsaw_defsz00))
					{	/* SawJvm/code.scm 389 */
						BGl_loadzd2regzd2zzsaw_jvm_codez00(BgL_mez00_5129, BgL_argz00_5403);
						BGl_branchz00zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_5129),
							CNST_TABLE_REF(((long) 51)), BINT(BgL_labz00_5404));
					}
				else
					{	/* SawJvm/code.scm 393 */
						BgL_rtl_funz00_bglt BgL_arg2167z00_5405;
						obj_t BgL_arg2168z00_5406;

						BgL_arg2167z00_5405 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_argz00_5403)))->BgL_funz00);
						BgL_arg2168z00_5406 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_argz00_5403)))->BgL_argsz00);
						BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00
							(BgL_arg2167z00_5405, BgL_mez00_5129, BgL_arg2168z00_5406, BTRUE,
							BINT(BgL_labz00_5404));
					}
				return CNST_TABLE_REF(((long) 13));
		}}

	}



/* &gen-args-gen-fun-rtl1758 */
	obj_t BGl_z62genzd2argszd2genzd2funzd2rtl1758z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5131, obj_t BgL_funz00_5132, obj_t BgL_mez00_5133,
		obj_t BgL_argsz00_5134)
	{
		{	/* SawJvm/code.scm 378 */
			{	/* SawJvm/code.scm 379 */
				obj_t BgL_argz00_5408;
				int BgL_labz00_5409;

				BgL_argz00_5408 = CAR(((obj_t) BgL_argsz00_5134));
				BgL_labz00_5409 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifeqz00_bglt) COBJECT(
										((BgL_rtl_ifeqz00_bglt) BgL_funz00_5132)))->BgL_thenz00)))->
					BgL_labelz00);
				if (BGl_isazf3zf3zz__objectz00(BgL_argz00_5408,
						BGl_rtl_regz00zzsaw_defsz00))
					{	/* SawJvm/code.scm 380 */
						BGl_loadzd2regzd2zzsaw_jvm_codez00(BgL_mez00_5133, BgL_argz00_5408);
						BGl_branchz00zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_5133),
							CNST_TABLE_REF(((long) 52)), BINT(BgL_labz00_5409));
					}
				else
					{	/* SawJvm/code.scm 384 */
						BgL_rtl_funz00_bglt BgL_arg2163z00_5410;
						obj_t BgL_arg2164z00_5411;

						BgL_arg2163z00_5410 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_argz00_5408)))->BgL_funz00);
						BgL_arg2164z00_5411 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_argz00_5408)))->BgL_argsz00);
						BGl_genzd2argszd2genzd2predicatezd2zzsaw_jvm_codez00
							(BgL_arg2163z00_5410, BgL_mez00_5133, BgL_arg2164z00_5411, BFALSE,
							BINT(BgL_labz00_5409));
					}
				return CNST_TABLE_REF(((long) 13));
		}}

	}



/* &gen-fun-rtl_globalre1756 */
	obj_t BGl_z62genzd2funzd2rtl_globalre1756z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5135, obj_t BgL_funz00_5136, obj_t BgL_mez00_5137)
	{
		{	/* SawJvm/code.scm 366 */
			{	/* SawJvm/code.scm 367 */
				BgL_globalz00_bglt BgL_varz00_5413;

				BgL_varz00_5413 =
					(((BgL_rtl_globalrefz00_bglt) COBJECT(
							((BgL_rtl_globalrefz00_bglt) BgL_funz00_5136)))->BgL_varz00);
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5137), CNST_TABLE_REF(((long) 101)));
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5137), CNST_TABLE_REF(((long) 64)));
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5137), CNST_TABLE_REF(((long) 102)));
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5137), CNST_TABLE_REF(((long) 64)));
				{	/* SawJvm/code.scm 372 */
					int BgL_arg2161z00_5414;

					{
						BgL_indexedz00_bglt BgL_auxz00_7374;

						{
							obj_t BgL_auxz00_7375;

							{	/* SawJvm/code.scm 372 */
								BgL_objectz00_bglt BgL_tmpz00_7376;

								BgL_tmpz00_7376 =
									((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5413));
								BgL_auxz00_7375 = BGL_OBJECT_WIDENING(BgL_tmpz00_7376);
							}
							BgL_auxz00_7374 = ((BgL_indexedz00_bglt) BgL_auxz00_7375);
						}
						BgL_arg2161z00_5414 =
							(((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_7374))->BgL_indexz00);
					}
					BGl_pushzd2intzd2zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_5137), BINT(BgL_arg2161z00_5414));
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5137), CNST_TABLE_REF(((long) 103)));
		}}

	}



/* &gen-fun-rtl_storeg1754 */
	obj_t BGl_z62genzd2funzd2rtl_storeg1754z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5138, obj_t BgL_funz00_5139, obj_t BgL_mez00_5140)
	{
		{	/* SawJvm/code.scm 362 */
			{	/* SawJvm/code.scm 363 */
				obj_t BgL_arg2157z00_5416;

				{	/* SawJvm/code.scm 363 */
					obj_t BgL_arg2158z00_5417;

					{	/* SawJvm/code.scm 363 */
						obj_t BgL_arg2159z00_5418;

						{	/* SawJvm/code.scm 363 */
							BgL_globalz00_bglt BgL_arg2160z00_5419;

							BgL_arg2160z00_5419 =
								(((BgL_rtl_storegz00_bglt) COBJECT(
										((BgL_rtl_storegz00_bglt) BgL_funz00_5139)))->BgL_varz00);
							BgL_arg2159z00_5418 =
								BGl_declarezd2globalzd2zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5140), BgL_arg2160z00_5419);
						}
						BgL_arg2158z00_5417 = MAKE_YOUNG_PAIR(BgL_arg2159z00_5418, BNIL);
					}
					BgL_arg2157z00_5416 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 104)), BgL_arg2158z00_5417);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5140), BgL_arg2157z00_5416);
			}
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &gen-fun-rtl_loadg1752 */
	obj_t BGl_z62genzd2funzd2rtl_loadg1752z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5141, obj_t BgL_funz00_5142, obj_t BgL_mez00_5143)
	{
		{	/* SawJvm/code.scm 359 */
			{	/* SawJvm/code.scm 360 */
				obj_t BgL_arg2153z00_5421;

				{	/* SawJvm/code.scm 360 */
					obj_t BgL_arg2154z00_5422;

					{	/* SawJvm/code.scm 360 */
						obj_t BgL_arg2155z00_5423;

						{	/* SawJvm/code.scm 360 */
							BgL_globalz00_bglt BgL_arg2156z00_5424;

							BgL_arg2156z00_5424 =
								(((BgL_rtl_loadgz00_bglt) COBJECT(
										((BgL_rtl_loadgz00_bglt) BgL_funz00_5142)))->BgL_varz00);
							BgL_arg2155z00_5423 =
								BGl_declarezd2globalzd2zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_5143), BgL_arg2156z00_5424);
						}
						BgL_arg2154z00_5422 = MAKE_YOUNG_PAIR(BgL_arg2155z00_5423, BNIL);
					}
					BgL_arg2153z00_5421 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 105)), BgL_arg2154z00_5422);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_5143), BgL_arg2153z00_5421);
			}
		}

	}



/* &gen-fun-rtl_loadi1750 */
	obj_t BGl_z62genzd2funzd2rtl_loadi1750z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5144, obj_t BgL_funz00_5145, obj_t BgL_mez00_5146)
	{
		{	/* SawJvm/code.scm 322 */
			{	/* SawJvm/code.scm 323 */
				BgL_atomz00_bglt BgL_constantz00_5426;

				BgL_constantz00_5426 =
					(((BgL_rtl_loadiz00_bglt) COBJECT(
							((BgL_rtl_loadiz00_bglt) BgL_funz00_5145)))->BgL_constantz00);
				{	/* SawJvm/code.scm 324 */
					obj_t BgL_valuez00_5427;

					BgL_valuez00_5427 =
						(((BgL_atomz00_bglt) COBJECT(BgL_constantz00_5426))->BgL_valuez00);
					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_5427))
						{	/* SawJvm/code.scm 327 */
							obj_t BgL_arg2137z00_5428;

							BgL_arg2137z00_5428 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_constantz00_5426)))->
											BgL_typez00)))->BgL_namez00);
							return BGl_pushzd2numzd2zzsaw_jvm_outz00(((BgL_jvmz00_bglt)
									BgL_mez00_5146), BgL_valuez00_5427, BgL_arg2137z00_5428);
						}
					else
						{	/* SawJvm/code.scm 326 */
							if (NULLP(BgL_valuez00_5427))
								{	/* SawJvm/code.scm 328 */
									return
										BGl_codez12z12zzsaw_jvm_outz00(
										((BgL_jvmz00_bglt) BgL_mez00_5146),
										CNST_TABLE_REF(((long) 36)));
								}
							else
								{	/* SawJvm/code.scm 328 */
									if (BOOLEANP(BgL_valuez00_5427))
										{	/* SawJvm/code.scm 331 */
											long BgL_arg2141z00_5429;

											if (CBOOL(BgL_valuez00_5427))
												{	/* SawJvm/code.scm 331 */
													BgL_arg2141z00_5429 = ((long) 1);
												}
											else
												{	/* SawJvm/code.scm 331 */
													BgL_arg2141z00_5429 = ((long) 0);
												}
											return
												BGl_pushzd2intzd2zzsaw_jvm_outz00(
												((BgL_jvmz00_bglt) BgL_mez00_5146),
												BINT(BgL_arg2141z00_5429));
										}
									else
										{	/* SawJvm/code.scm 330 */
											if (CHARP(BgL_valuez00_5427))
												{	/* SawJvm/code.scm 333 */
													long BgL_arg2143z00_5430;

													BgL_arg2143z00_5430 = (CCHAR(BgL_valuez00_5427));
													return
														BGl_pushzd2intzd2zzsaw_jvm_outz00(
														((BgL_jvmz00_bglt) BgL_mez00_5146),
														BINT(BgL_arg2143z00_5430));
												}
											else
												{	/* SawJvm/code.scm 332 */
													if (STRINGP(BgL_valuez00_5427))
														{	/* SawJvm/code.scm 334 */
															BGl_pushzd2stringzd2zzsaw_jvm_outz00(
																((BgL_jvmz00_bglt) BgL_mez00_5146),
																BgL_valuez00_5427);
															return
																BGl_codez12z12zzsaw_jvm_outz00((
																	(BgL_jvmz00_bglt) BgL_mez00_5146),
																CNST_TABLE_REF(((long) 106)));
														}
													else
														{	/* SawJvm/code.scm 338 */
															bool_t BgL_test2933z00_7443;

															{	/* SawJvm/code.scm 338 */
																bool_t BgL_res2586z00_5431;

																BgL_res2586z00_5431 =
																	EOF_OBJECTP(BgL_valuez00_5427);
																BgL_test2933z00_7443 = BgL_res2586z00_5431;
															}
															if (BgL_test2933z00_7443)
																{	/* SawJvm/code.scm 338 */
																	return
																		BGl_codez12z12zzsaw_jvm_outz00(
																		((BgL_jvmz00_bglt) BgL_mez00_5146),
																		CNST_TABLE_REF(((long) 107)));
																}
															else
																{	/* SawJvm/code.scm 338 */
																	if ((BgL_valuez00_5427 == (BOPTIONAL)))
																		{	/* SawJvm/code.scm 340 */
																			return
																				BGl_codez12z12zzsaw_jvm_outz00(
																				((BgL_jvmz00_bglt) BgL_mez00_5146),
																				CNST_TABLE_REF(((long) 108)));
																		}
																	else
																		{	/* SawJvm/code.scm 340 */
																			if ((BgL_valuez00_5427 == (BREST)))
																				{	/* SawJvm/code.scm 342 */
																					return
																						BGl_codez12z12zzsaw_jvm_outz00(
																						((BgL_jvmz00_bglt) BgL_mez00_5146),
																						CNST_TABLE_REF(((long) 109)));
																				}
																			else
																				{	/* SawJvm/code.scm 342 */
																					if ((BgL_valuez00_5427 == (BKEY)))
																						{	/* SawJvm/code.scm 344 */
																							return
																								BGl_codez12z12zzsaw_jvm_outz00(
																								((BgL_jvmz00_bglt)
																									BgL_mez00_5146),
																								CNST_TABLE_REF(((long) 110)));
																						}
																					else
																						{	/* SawJvm/code.scm 344 */
																							if (
																								(BgL_valuez00_5427 == BUNSPEC))
																								{	/* SawJvm/code.scm 346 */
																									return
																										BGl_codez12z12zzsaw_jvm_outz00
																										(((BgL_jvmz00_bglt)
																											BgL_mez00_5146),
																										CNST_TABLE_REF(((long)
																												14)));
																								}
																							else
																								{	/* SawJvm/code.scm 346 */
																									if (UCS2P(BgL_valuez00_5427))
																										{	/* SawJvm/code.scm 348 */
																											BGl_codez12z12zzsaw_jvm_outz00
																												(((BgL_jvmz00_bglt)
																													BgL_mez00_5146),
																												CNST_TABLE_REF(((long)
																														111)));
																											BGl_codez12z12zzsaw_jvm_outz00
																												(((BgL_jvmz00_bglt)
																													BgL_mez00_5146),
																												CNST_TABLE_REF(((long)
																														64)));
																											{	/* SawJvm/code.scm 352 */
																												int BgL_arg2152z00_5432;

																												{	/* SawJvm/code.scm 352 */
																													int
																														BgL_res2588z00_5433;
																													{	/* SawJvm/code.scm 352 */
																														ucs2_t
																															BgL_ucs2z00_5434;
																														BgL_ucs2z00_5434 =
																															CUCS2
																															(BgL_valuez00_5427);
																														{	/* SawJvm/code.scm 352 */
																															obj_t
																																BgL_tmpz00_7477;
																															BgL_tmpz00_7477 =
																																BUCS2
																																(BgL_ucs2z00_5434);
																															BgL_res2588z00_5433
																																=
																																CUCS2
																																(BgL_tmpz00_7477);
																													}}
																													BgL_arg2152z00_5432 =
																														BgL_res2588z00_5433;
																												}
																												BGl_pushzd2intzd2zzsaw_jvm_outz00
																													(((BgL_jvmz00_bglt)
																														BgL_mez00_5146),
																													BINT
																													(BgL_arg2152z00_5432));
																											}
																											return
																												BGl_codez12z12zzsaw_jvm_outz00
																												(((BgL_jvmz00_bglt)
																													BgL_mez00_5146),
																												CNST_TABLE_REF(((long)
																														112)));
																										}
																									else
																										{	/* SawJvm/code.scm 348 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string2694z00zzsaw_jvm_codez00,
																												BGl_string2695z00zzsaw_jvm_codez00,
																												BgL_valuez00_5427);
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



/* &gen-fun-rtl_mov1748 */
	obj_t BGl_z62genzd2funzd2rtl_mov1748z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5147, obj_t BgL_funz00_5148, obj_t BgL_mez00_5149)
	{
		{	/* SawJvm/code.scm 316 */
			return CNST_TABLE_REF(((long) 55));
		}

	}



/* &gen-fun-rtl_nop1746 */
	obj_t BGl_z62genzd2funzd2rtl_nop1746z62zzsaw_jvm_codez00(obj_t
		BgL_envz00_5150, obj_t BgL_funz00_5151, obj_t BgL_mez00_5152)
	{
		{	/* SawJvm/code.scm 313 */
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_codez00()
	{
		{	/* SawJvm/code.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 321177294),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 179871455),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(((long) 437600224),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 441640642),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(((long) 282450758),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(((long) 252555412),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_asz00(((long) 476839606),
				BSTRING_TO_STRING(BGl_string2696z00zzsaw_jvm_codez00));
		}

	}

#ifdef __cplusplus
}
#endif
