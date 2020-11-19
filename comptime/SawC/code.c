/*===========================================================================*/
/*   (SawC/code.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawC/code.scm) */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_cvmz00_bgl
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
	}             *BgL_cvmz00_bglt;

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

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                     *BgL_rtl_vlengthz00_bglt;

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

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

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

	typedef struct BgL_sawciregz00_bgl
	{
		obj_t BgL_indexz00;
	}                  *BgL_sawciregz00_bglt;


	static bool_t BGl_genzd2argszd2zzsaw_c_codez00(obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_genzd2typezd2regsz00zzsaw_c_codez00(obj_t);
	static obj_t BGl_emitzd2pragmazd2zzsaw_c_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static bool_t BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00;
	static obj_t BGl_z62sawzd2cheaderzb0zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62genzd2exprzd2rtl_setfiel1704z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_za2commentza2z00zzsaw_c_codez00;
	static obj_t BGl_genzd2inszd2zzsaw_c_codez00(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_genzd2typezd2regz00zzsaw_c_codez00(obj_t);
	static obj_t BGl_z62acceptzd2foldingzf3zd2cvm1765z91zzsaw_c_codez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
	static bool_t BGl_genbodyz00zzsaw_c_codez00(obj_t);
	static obj_t BGl_headerz00zzsaw_c_codez00();
	static bool_t BGl_za2haspushexitza2z00zzsaw_c_codez00;
	static obj_t BGl_z62genzd2exprzd2rtl_switch1712z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_bbvz00zzsaw_bbvz00(BgL_backendz00_bglt, BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_c_codez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	static bool_t BGl_za2hasprotectza2z00zzsaw_c_codez00;
	static long BGl_za2counterza2z00zzsaw_c_codez00;
	static obj_t BGl_walkze70ze7zzsaw_c_codez00(obj_t);
	static obj_t BGl_genzd2funzd2namez00zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2exprzd2rtl_getfiel1702z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_cast_1763z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2prefix1734zb0zzsaw_c_codez00(obj_t, obj_t);
	static bool_t BGl_declarezd2regszd2zzsaw_c_codez00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2prefixzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_z62genzd2prefixzd2rtl_vref1755z62zzsaw_c_codez00(obj_t,
		obj_t);
	static bool_t BGl_multiplezd2evaluationzd2zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62genzd2prefixzb0zzsaw_c_codez00(obj_t, obj_t);
	extern bool_t BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_loadf1741z62zzsaw_c_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t BGl_genzd2regzf2destz20zzsaw_c_codez00(obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_go1747z62zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2Xfuncallzd2zzsaw_c_codez00(obj_t, obj_t, bool_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_findzd2locationzd2zzsaw_c_codez00(BgL_rtl_insz00_bglt);
	static bool_t BGl_za2traceza2z00zzsaw_c_codez00;
	static obj_t BGl_z62genzd2prefixzd2rtl_loadg1739z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_SawCIregz00zzsaw_c_codez00 = BUNSPEC;
	static obj_t BGl_z62genzd2funzd2namez62zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_c_codez00();
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_vre1720zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2exprzb0zzsaw_c_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_z62sawzd2cepiloguezb0zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static bool_t BGl_cepiloguez00zzsaw_c_codez00();
	extern obj_t BGl_za2stdcza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_thezd2stringze70z35zzsaw_c_codez00(obj_t);
	static obj_t BGl_genfunz00zzsaw_c_codez00(BgL_cvmz00_bglt, BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_loadi1737z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_vse1722zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_val1718zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_reg_namez00zzsaw_c_codez00(obj_t);
	static obj_t BGl_vextraz00zzsaw_c_codez00(BgL_typez00_bglt);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2prefixzd2rtl_cast1761z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2exprzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt, obj_t);
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_c_codez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_z62genzd2prefixzd2rtl_store1743z62zzsaw_c_codez00(obj_t,
		obj_t);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_c_codez00();
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl_genericzd2initzd2zzsaw_c_codez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static bool_t BGl_printzd2locationzf3z21zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	static obj_t BGl_getzd2localszd2zzsaw_c_codez00(obj_t, obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_globa1745z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_inlzd2opzd2zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genzd2regzd2zzsaw_c_codez00(obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_vset1757z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62sawzd2cgenzb0zzsaw_c_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_vallo1753z62zzsaw_c_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static bool_t BGl_deepzd2movzf3z21zzsaw_c_codez00(obj_t);
	static obj_t BGl_z62genzd2exprzd2rtl_lightfu1700z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_outzd2labelzd2zzsaw_c_codez00(int);
	static obj_t BGl_z62genzd2exprzd2rtl_protect1708z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2badzd2macrosza2zd2zzsaw_c_codez00 = BUNSPEC;
	static obj_t BGl_z62genzd2exprzd2rtl_pragma1710z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_za2haspushbeforeza2z00zzsaw_c_codez00;
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_check_funze70ze7zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	static obj_t BGl_z62genzd2prefixzd2rtl_ifne1751z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2name1715z62zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_c_codez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static long BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00;
	static BgL_rtl_regz00_bglt BGl_z62lambda2226z62zzsaw_c_codez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_c_codez00(obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda2229z62zzsaw_c_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static bool_t BGl_za2countza2z00zzsaw_c_codez00;
	static obj_t BGl_z62genzd2prefixzd2rtl_ifeq1749z62zzsaw_c_codez00(obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda2232z62zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_z62lambda2239z62zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00();
	static obj_t BGl_z62lambda2240z62zzsaw_c_codez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cgenzd2zzsaw_c_codez00(BgL_cvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_mov1727zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_codez00();
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	static obj_t BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31822ze3ze5zzsaw_c_codez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cheaderzd2zzsaw_c_codez00();
	static obj_t BGl_z62genzd2funzd2namezd2rtl_vle1725zb0zzsaw_c_codez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t BGl_z62genzd2expr1697zb0zzsaw_c_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_ret1733zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2prefixzd2rtl_vleng1759z62zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_loa1729zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_vfunzd2namezd2zzsaw_c_codez00(obj_t, BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62genzd2funzd2namezd2rtl_loa1731zb0zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_c_codez00(obj_t);
	extern obj_t BGl_cvmz00zzbackend_cvmz00;
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	extern obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
	static obj_t BGl_z62genzd2exprzd2rtl_funcall1706z62zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62genzd2exprzd2rtl_call1714z62zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_STRING(BGl_string3019z00zzsaw_c_codez00,
		BgL_bgl_string3019za700za7za7s3057za7, "accept-folding?", 15);
	      DEFINE_STRING(BGl_string3020z00zzsaw_c_codez00,
		BgL_bgl_string3020za700za7za7s3058za7, "(obj_t) ", 8);
	      DEFINE_STRING(BGl_string3021z00zzsaw_c_codez00,
		BgL_bgl_string3021za700za7za7s3059za7, "return", 6);
	      DEFINE_STRING(BGl_string3022z00zzsaw_c_codez00,
		BgL_bgl_string3022za700za7za7s3060za7, "VLENGTH", 7);
	      DEFINE_STRING(BGl_string3023z00zzsaw_c_codez00,
		BgL_bgl_string3023za700za7za7s3061za7, "VSET", 4);
	      DEFINE_STRING(BGl_string3024z00zzsaw_c_codez00,
		BgL_bgl_string3024za700za7za7s3062za7, "VREF", 4);
	      DEFINE_STRING(BGl_string3025z00zzsaw_c_codez00,
		BgL_bgl_string3025za700za7za7s3063za7, "VALLOC", 6);
	      DEFINE_STRING(BGl_string3026z00zzsaw_c_codez00,
		BgL_bgl_string3026za700za7za7s3064za7, "make_fx_procedure", 17);
	      DEFINE_STRING(BGl_string3027z00zzsaw_c_codez00,
		BgL_bgl_string3027za700za7za7s3065za7, "MAKE_FX_PROCEDURE", 17);
	      DEFINE_STRING(BGl_string3028z00zzsaw_c_codez00,
		BgL_bgl_string3028za700za7za7s3066za7, "make_va_procedure", 17);
	      DEFINE_STRING(BGl_string3029z00zzsaw_c_codez00,
		BgL_bgl_string3029za700za7za7s3067za7, "MAKE_VA_PROCEDURE", 17);
	      DEFINE_STRING(BGl_string3030z00zzsaw_c_codez00,
		BgL_bgl_string3030za700za7za7s3068za7, "MAKE_L_PROCEDURE", 16);
	      DEFINE_STRING(BGl_string3031z00zzsaw_c_codez00,
		BgL_bgl_string3031za700za7za7s3069za7, "(function_t) ", 13);
	      DEFINE_STRING(BGl_string3032z00zzsaw_c_codez00,
		BgL_bgl_string3032za700za7za7s3070za7, "switch(", 7);
	      DEFINE_STRING(BGl_string3033z00zzsaw_c_codez00,
		BgL_bgl_string3033za700za7za7s3071za7, ") {", 3);
	      DEFINE_STRING(BGl_string3034z00zzsaw_c_codez00,
		BgL_bgl_string3034za700za7za7s3072za7, "\n\t default: ", 12);
	      DEFINE_STRING(BGl_string3035z00zzsaw_c_codez00,
		BgL_bgl_string3035za700za7za7s3073za7, "\n\t case ", 8);
	      DEFINE_STRING(BGl_string3036z00zzsaw_c_codez00,
		BgL_bgl_string3036za700za7za7s3074za7, ";", 1);
	      DEFINE_STRING(BGl_string3037z00zzsaw_c_codez00,
		BgL_bgl_string3037za700za7za7s3075za7, " goto L", 7);
	      DEFINE_STRING(BGl_string3038z00zzsaw_c_codez00,
		BgL_bgl_string3038za700za7za7s3076za7, "\n\t}", 3);
	      DEFINE_STRING(BGl_string3039z00zzsaw_c_codez00,
		BgL_bgl_string3039za700za7za7s3077za7, "(obj_t) jmpbuf;\n\t", 17);
	      DEFINE_STRING(BGl_string3040z00zzsaw_c_codez00,
		BgL_bgl_string3040za700za7za7s3078za7, "{BGL_STORE_TRACE();", 19);
	      DEFINE_STRING(BGl_string3041z00zzsaw_c_codez00,
		BgL_bgl_string3041za700za7za7s3079za7,
		"if(SETJMP(jmpbuf)) {BGL_RESTORE_TRACE(); return(BGL_EXIT_VALUE());}}\n",
		69);
	      DEFINE_STRING(BGl_string3042z00zzsaw_c_codez00,
		BgL_bgl_string3042za700za7za7s3080za7, "#if( SIGSETJMP_SAVESIGS == 0 )\n",
		31);
	      DEFINE_STRING(BGl_string3043z00zzsaw_c_codez00,
		BgL_bgl_string3043za700za7za7s3081za7, "  bgl_restore_signal_handlers();\n",
		33);
	      DEFINE_STRING(BGl_string3044z00zzsaw_c_codez00,
		BgL_bgl_string3044za700za7za7s3082za7, "#endif\n", 7);
	      DEFINE_STRING(BGl_string3045z00zzsaw_c_codez00,
		BgL_bgl_string3045za700za7za7s3083za7, "(VA_PROCEDUREP(", 15);
	      DEFINE_STRING(BGl_string3046z00zzsaw_c_codez00,
		BgL_bgl_string3046za700za7za7s3084za7, ") ? ", 4);
	      DEFINE_STRING(BGl_string3047z00zzsaw_c_codez00,
		BgL_bgl_string3047za700za7za7s3085za7, " : ", 3);
	      DEFINE_STRING(BGl_string3048z00zzsaw_c_codez00,
		BgL_bgl_string3048za700za7za7s3086za7, "((", 2);
	      DEFINE_STRING(BGl_string3049z00zzsaw_c_codez00,
		BgL_bgl_string3049za700za7za7s3087za7, ")->", 3);
	      DEFINE_STRING(BGl_string3050z00zzsaw_c_codez00,
		BgL_bgl_string3050za700za7za7s3088za7, "=", 1);
	      DEFINE_STRING(BGl_string3051z00zzsaw_c_codez00,
		BgL_bgl_string3051za700za7za7s3089za7, "L_", 2);
	      DEFINE_STRING(BGl_string3052z00zzsaw_c_codez00,
		BgL_bgl_string3052za700za7za7s3090za7, "saw_c_code", 10);
	      DEFINE_STRING(BGl_string3053z00zzsaw_c_codez00,
		BgL_bgl_string3053za700za7za7s3091za7,
		"else saw_c_code SawCIreg obj index (double llong ullong elong uelong long ulong int uint char uchar byte ubyte bool string int8 uint8 int16 uint16 int32 uint32 int64 uint64) location push-before! push-exit! (\"WRITE_CHAR\" \"BOOLEANP\" \"INTEGERP\" \"NULLP\" \"PAIRP\" \"SYMBOLP\" \"VECTORP\") ",
		280);
	      DEFINE_STRING(BGl_string2900z00zzsaw_c_codez00,
		BgL_bgl_string2900za700za7za7s3092za7, " ", 1);
	      DEFINE_STRING(BGl_string2901z00zzsaw_c_codez00,
		BgL_bgl_string2901za700za7za7s3093za7, " {\n", 3);
	      DEFINE_STRING(BGl_string2902z00zzsaw_c_codez00,
		BgL_bgl_string2902za700za7za7s3094za7, " jmp_buf_t jmpbuf;\n", 19);
	      DEFINE_STRING(BGl_string2903z00zzsaw_c_codez00,
		BgL_bgl_string2903za700za7za7s3095za7, " struct exitd exitd;\n", 21);
	      DEFINE_STRING(BGl_string2904z00zzsaw_c_codez00,
		BgL_bgl_string2904za700za7za7s3096za7, " struct befored befored;\n", 25);
	      DEFINE_STRING(BGl_string2905z00zzsaw_c_codez00,
		BgL_bgl_string2905za700za7za7s3097za7, "\n}\n\n", 4);
	      DEFINE_STRING(BGl_string2906z00zzsaw_c_codez00,
		BgL_bgl_string2906za700za7za7s3098za7, "(", 1);
	      DEFINE_STRING(BGl_string2907z00zzsaw_c_codez00,
		BgL_bgl_string2907za700za7za7s3099za7, ", ", 2);
	      DEFINE_STRING(BGl_string2908z00zzsaw_c_codez00,
		BgL_bgl_string2908za700za7za7s3100za7, ")", 1);
	      DEFINE_STRING(BGl_string2909z00zzsaw_c_codez00,
		BgL_bgl_string2909za700za7za7s3101za7, "V", 1);
	      DEFINE_STRING(BGl_string2910z00zzsaw_c_codez00,
		BgL_bgl_string2910za700za7za7s3102za7, "R", 1);
	      DEFINE_STRING(BGl_string2911z00zzsaw_c_codez00,
		BgL_bgl_string2911za700za7za7s3103za7, ";\n", 2);
	      DEFINE_STRING(BGl_string2912z00zzsaw_c_codez00,
		BgL_bgl_string2912za700za7za7s3104za7, "", 0);
	      DEFINE_STRING(BGl_string2913z00zzsaw_c_codez00,
		BgL_bgl_string2913za700za7za7s3105za7, ":", 1);
	      DEFINE_STRING(BGl_string2914z00zzsaw_c_codez00,
		BgL_bgl_string2914za700za7za7s3106za7, "L", 1);
	      DEFINE_STRING(BGl_string2915z00zzsaw_c_codez00,
		BgL_bgl_string2915za700za7za7s3107za7, "#line ", 6);
	      DEFINE_STRING(BGl_string2916z00zzsaw_c_codez00,
		BgL_bgl_string2916za700za7za7s3108za7, " \"", 2);
	      DEFINE_STRING(BGl_string2917z00zzsaw_c_codez00,
		BgL_bgl_string2917za700za7za7s3109za7, "\"", 1);
	      DEFINE_STRING(BGl_string2918z00zzsaw_c_codez00,
		BgL_bgl_string2918za700za7za7s3110za7, "\t", 1);
	      DEFINE_STRING(BGl_string2919z00zzsaw_c_codez00,
		BgL_bgl_string2919za700za7za7s3111za7, " = ", 3);
	      DEFINE_STRING(BGl_string2920z00zzsaw_c_codez00,
		BgL_bgl_string2920za700za7za7s3112za7, "ENTRY(", 6);
	      DEFINE_STRING(BGl_string2921z00zzsaw_c_codez00,
		BgL_bgl_string2921za700za7za7s3113za7, "PROCEDURE_", 10);
	      DEFINE_STRING(BGl_string2922z00zzsaw_c_codez00,
		BgL_bgl_string2922za700za7za7s3114za7, ")(", 2);
	      DEFINE_STRING(BGl_string2923z00zzsaw_c_codez00,
		BgL_bgl_string2923za700za7za7s3115za7, ", BEOA", 6);
	      DEFINE_STRING(BGl_string2924z00zzsaw_c_codez00,
		BgL_bgl_string2924za700za7za7s3116za7, "BGL_", 4);
	      DEFINE_STRING(BGl_string2925z00zzsaw_c_codez00,
		BgL_bgl_string2925za700za7za7s3117za7, "T", 1);
	      DEFINE_STRING(BGl_string2926z00zzsaw_c_codez00,
		BgL_bgl_string2926za700za7za7s3118za7, "BGL_RTL_", 8);
	      DEFINE_STRING(BGl_string2927z00zzsaw_c_codez00,
		BgL_bgl_string2927za700za7za7s3119za7, "==", 2);
	      DEFINE_STRING(BGl_string2928z00zzsaw_c_codez00,
		BgL_bgl_string2928za700za7za7s3120za7, "BGL_RTL_EQ", 10);
	      DEFINE_STRING(BGl_string2929z00zzsaw_c_codez00,
		BgL_bgl_string2929za700za7za7s3121za7, ">=", 2);
	      DEFINE_STRING(BGl_string2930z00zzsaw_c_codez00,
		BgL_bgl_string2930za700za7za7s3122za7, "BGL_RTL_GE", 10);
	      DEFINE_STRING(BGl_string2931z00zzsaw_c_codez00,
		BgL_bgl_string2931za700za7za7s3123za7, "<=", 2);
	      DEFINE_STRING(BGl_string2932z00zzsaw_c_codez00,
		BgL_bgl_string2932za700za7za7s3124za7, "BGL_RTL_LE", 10);
	      DEFINE_STRING(BGl_string2933z00zzsaw_c_codez00,
		BgL_bgl_string2933za700za7za7s3125za7, ">", 1);
	      DEFINE_STRING(BGl_string2934z00zzsaw_c_codez00,
		BgL_bgl_string2934za700za7za7s3126za7, "BGL_RTL_GT", 10);
	      DEFINE_STRING(BGl_string2935z00zzsaw_c_codez00,
		BgL_bgl_string2935za700za7za7s3127za7, "<", 1);
	      DEFINE_STRING(BGl_string2936z00zzsaw_c_codez00,
		BgL_bgl_string2936za700za7za7s3128za7, "BGL_RTL_LT", 10);
	      DEFINE_STRING(BGl_string2937z00zzsaw_c_codez00,
		BgL_bgl_string2937za700za7za7s3129za7, "|", 1);
	      DEFINE_STRING(BGl_string2938z00zzsaw_c_codez00,
		BgL_bgl_string2938za700za7za7s3130za7, "BGL_RTL_OR", 10);
	      DEFINE_STRING(BGl_string2939z00zzsaw_c_codez00,
		BgL_bgl_string2939za700za7za7s3131za7, "&", 1);
	      DEFINE_STRING(BGl_string2940z00zzsaw_c_codez00,
		BgL_bgl_string2940za700za7za7s3132za7, "BGL_RTL_AND", 11);
	      DEFINE_STRING(BGl_string2941z00zzsaw_c_codez00,
		BgL_bgl_string2941za700za7za7s3133za7, "+", 1);
	      DEFINE_STRING(BGl_string2942z00zzsaw_c_codez00,
		BgL_bgl_string2942za700za7za7s3134za7, "BGL_RTL_ADD", 11);
	      DEFINE_STRING(BGl_string2943z00zzsaw_c_codez00,
		BgL_bgl_string2943za700za7za7s3135za7, "-", 1);
	      DEFINE_STRING(BGl_string2944z00zzsaw_c_codez00,
		BgL_bgl_string2944za700za7za7s3136za7, "BGL_RTL_SUB", 11);
	      DEFINE_STRING(BGl_string2945z00zzsaw_c_codez00,
		BgL_bgl_string2945za700za7za7s3137za7, "*", 1);
	      DEFINE_STRING(BGl_string2946z00zzsaw_c_codez00,
		BgL_bgl_string2946za700za7za7s3138za7, "BGL_RTL_MUL", 11);
	      DEFINE_STRING(BGl_string2947z00zzsaw_c_codez00,
		BgL_bgl_string2947za700za7za7s3139za7, "/", 1);
	      DEFINE_STRING(BGl_string2948z00zzsaw_c_codez00,
		BgL_bgl_string2948za700za7za7s3140za7, "BGL_RTL_DIV", 11);
	      DEFINE_STRING(BGl_string2949z00zzsaw_c_codez00,
		BgL_bgl_string2949za700za7za7s3141za7, "%", 1);
	      DEFINE_STRING(BGl_string2950z00zzsaw_c_codez00,
		BgL_bgl_string2950za700za7za7s3142za7, "BGL_RTL_REM", 11);
	      DEFINE_STRING(BGl_string2951z00zzsaw_c_codez00,
		BgL_bgl_string2951za700za7za7s3143za7, " | ", 3);
	      DEFINE_STRING(BGl_string2952z00zzsaw_c_codez00,
		BgL_bgl_string2952za700za7za7s3144za7, " & ", 3);
	      DEFINE_STRING(BGl_string2953z00zzsaw_c_codez00,
		BgL_bgl_string2953za700za7za7s3145za7, " ^ ", 3);
	      DEFINE_STRING(BGl_string2954z00zzsaw_c_codez00,
		BgL_bgl_string2954za700za7za7s3146za7, "BGL_RTL_XOR", 11);
	      DEFINE_STRING(BGl_string2955z00zzsaw_c_codez00,
		BgL_bgl_string2955za700za7za7s3147za7, " >> ", 4);
	      DEFINE_STRING(BGl_string2956z00zzsaw_c_codez00,
		BgL_bgl_string2956za700za7za7s3148za7, "BGL_RTL_RSH", 11);
	      DEFINE_STRING(BGl_string2957z00zzsaw_c_codez00,
		BgL_bgl_string2957za700za7za7s3149za7, " << ", 4);
	      DEFINE_STRING(BGl_string2958z00zzsaw_c_codez00,
		BgL_bgl_string2958za700za7za7s3150za7, "BGL_RTL_LSH", 11);
	      DEFINE_STRING(BGl_string2959z00zzsaw_c_codez00,
		BgL_bgl_string2959za700za7za7s3151za7, "PUSH_EXIT", 9);
	      DEFINE_STRING(BGl_string2960z00zzsaw_c_codez00,
		BgL_bgl_string2960za700za7za7s3152za7, "BGL_RTL_PUSH_EXIT", 17);
	      DEFINE_STRING(BGl_string2961z00zzsaw_c_codez00,
		BgL_bgl_string2961za700za7za7s3153za7, "PUSH_BEFORE", 11);
	      DEFINE_STRING(BGl_string2962z00zzsaw_c_codez00,
		BgL_bgl_string2962za700za7za7s3154za7, "BGL_RTL_PUSH_BEFORE", 19);
	      DEFINE_STRING(BGl_string2963z00zzsaw_c_codez00,
		BgL_bgl_string2963za700za7za7s3155za7, "PUSH_TRACE", 10);
	      DEFINE_STRING(BGl_string2964z00zzsaw_c_codez00,
		BgL_bgl_string2964za700za7za7s3156za7, "{PUSH_TRACE", 11);
	      DEFINE_STRING(BGl_string2965z00zzsaw_c_codez00,
		BgL_bgl_string2965za700za7za7s3157za7, "BGL_ENV_PUSH_TRACE", 18);
	      DEFINE_STRING(BGl_string2966z00zzsaw_c_codez00,
		BgL_bgl_string2966za700za7za7s3158za7, "{BGL_ENV_PUSH_TRACE", 19);
	      DEFINE_STRING(BGl_string2967z00zzsaw_c_codez00,
		BgL_bgl_string2967za700za7za7s3159za7, "BIGLOO_EXIT", 11);
	      DEFINE_STRING(BGl_string2968z00zzsaw_c_codez00,
		BgL_bgl_string2968za700za7za7s3160za7, "STRING_REF", 10);
	      DEFINE_STRING(BGl_string2969z00zzsaw_c_codez00,
		BgL_bgl_string2969za700za7za7s3161za7, "BGL_RTL_STRING_REF", 18);
	      DEFINE_STRING(BGl_string2970z00zzsaw_c_codez00,
		BgL_bgl_string2970za700za7za7s3162za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2971z00zzsaw_c_codez00,
		BgL_bgl_string2971za700za7za7s3163za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2972z00zzsaw_c_codez00,
		BgL_bgl_string2972za700za7za7s3164za7, "$", 1);
	extern obj_t BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00;
	   
		 
		DEFINE_STRING(BGl_string2980z00zzsaw_c_codez00,
		BgL_bgl_string2980za700za7za7s3165za7, "gen-expr1697", 12);
	      DEFINE_STRING(BGl_string2982z00zzsaw_c_codez00,
		BgL_bgl_string2982za700za7za7s3166za7, "gen-fun-name1715", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2897z00zzsaw_c_codez00,
		BgL_bgl_za762za7c3za704anonymo3167za7,
		BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2984z00zzsaw_c_codez00,
		BgL_bgl_string2984za700za7za7s3168za7, "gen-prefix1734", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2899z00zzsaw_c_codez00,
		BgL_bgl_za762za7c3za704anonymo3169za7,
		BGl_z62zc3z04anonymousza31822ze3ze5zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2986z00zzsaw_c_codez00,
		BgL_bgl_string2986za700za7za7s3170za7, "gen-expr", 8);
	      DEFINE_STRING(BGl_string2995z00zzsaw_c_codez00,
		BgL_bgl_string2995za700za7za7s3171za7, "gen-fun-name", 12);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7b03172za7, BGl_z62genzd2exprzb0zzsaw_c_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3173za7,
		BGl_z62genzd2funzd2namez62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3000z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3174za7,
		BGl_z62genzd2funzd2namezd2rtl_loa1729zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3001z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3175za7,
		BGl_z62genzd2funzd2namezd2rtl_loa1731zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3002z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3176za7,
		BGl_z62genzd2funzd2namezd2rtl_ret1733zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3003z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73177za7,
		BGl_z62genzd2prefixzd2rtl_loadi1737z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3005z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73178za7,
		BGl_z62genzd2prefixzd2rtl_loadg1739z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3006z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73179za7,
		BGl_z62genzd2prefixzd2rtl_loadf1741z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3007z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73180za7,
		BGl_z62genzd2prefixzd2rtl_store1743z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3008z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73181za7,
		BGl_z62genzd2prefixzd2rtl_globa1745z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3009z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73182za7,
		BGl_z62genzd2prefixzd2rtl_go1747z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3010z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73183za7,
		BGl_z62genzd2prefixzd2rtl_ifeq1749z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3011z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73184za7,
		BGl_z62genzd2prefixzd2rtl_ifne1751z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3012z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73185za7,
		BGl_z62genzd2prefixzd2rtl_vallo1753z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3013z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73186za7,
		BGl_z62genzd2prefixzd2rtl_vref1755z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3014z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73187za7,
		BGl_z62genzd2prefixzd2rtl_vset1757z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3015z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73188za7,
		BGl_z62genzd2prefixzd2rtl_vleng1759z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3016z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73189za7,
		BGl_z62genzd2prefixzd2rtl_cast1761z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3017z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73190za7,
		BGl_z62genzd2prefixzd2rtl_cast_1763z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3018z00zzsaw_c_codez00,
		BgL_bgl_za762acceptza7d2fold3191z00,
		BGl_z62acceptzd2foldingzf3zd2cvm1765z91zzsaw_c_codez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cheaderzd2envz00zzsaw_c_codez00,
		BgL_bgl_za762sawza7d2cheader3192z00, BGl_z62sawzd2cheaderzb0zzsaw_c_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cgenzd2envz00zzsaw_c_codez00,
		BgL_bgl_za762sawza7d2cgenza7b03193za7, BGl_z62sawzd2cgenzb0zzsaw_c_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2898z00zzsaw_c_codez00,
		BgL_bgl_string2898za700za7za7s3194za7, "\n", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2973z00zzsaw_c_codez00,
		BgL_bgl_za762lambda2240za7623195z00, BGl_z62lambda2240z62zzsaw_c_codez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2974z00zzsaw_c_codez00,
		BgL_bgl_za762lambda2239za7623196z00, BGl_z62lambda2239z62zzsaw_c_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2975z00zzsaw_c_codez00,
		BgL_bgl_za762lambda2232za7623197z00, BGl_z62lambda2232z62zzsaw_c_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2976z00zzsaw_c_codez00,
		BgL_bgl_za762za7c3za704anonymo3198za7,
		BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2977z00zzsaw_c_codez00,
		BgL_bgl_za762lambda2229za7623199z00, BGl_z62lambda2229z62zzsaw_c_codez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2978z00zzsaw_c_codez00,
		BgL_bgl_za762lambda2226za7623200z00, BGl_z62lambda2226z62zzsaw_c_codez00,
		0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2979z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2expr1693201z00,
		BGl_z62genzd2expr1697zb0zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2981z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3202za7,
		BGl_z62genzd2funzd2name1715z62zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2983z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefix13203z00,
		BGl_z62genzd2prefix1734zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2985z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23204za7,
		BGl_z62genzd2exprzd2rtl_lightfu1700z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2987z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23205za7,
		BGl_z62genzd2exprzd2rtl_getfiel1702z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2988z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23206za7,
		BGl_z62genzd2exprzd2rtl_setfiel1704z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2989z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23207za7,
		BGl_z62genzd2exprzd2rtl_funcall1706z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cepiloguezd2envz00zzsaw_c_codez00,
		BgL_bgl_za762sawza7d2cepilog3208z00,
		BGl_z62sawzd2cepiloguezb0zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2990z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23209za7,
		BGl_z62genzd2exprzd2rtl_protect1708z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2991z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23210za7,
		BGl_z62genzd2exprzd2rtl_pragma1710z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2992z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23211za7,
		BGl_z62genzd2exprzd2rtl_switch1712z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2993z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2exprza7d23212za7,
		BGl_z62genzd2exprzd2rtl_call1714z62zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2994z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3213za7,
		BGl_z62genzd2funzd2namezd2rtl_val1718zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2996z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3214za7,
		BGl_z62genzd2funzd2namezd2rtl_vre1720zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2997z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3215za7,
		BGl_z62genzd2funzd2namezd2rtl_vse1722zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2998z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3216za7,
		BGl_z62genzd2funzd2namezd2rtl_vle1725zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2999z00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2funza7d2n3217za7,
		BGl_z62genzd2funzd2namezd2rtl_mov1727zb0zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3004z00zzsaw_c_codez00,
		BgL_bgl_string3004za700za7za7s3218za7, "gen-prefix", 10);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
		BgL_bgl_za762genza7d2prefixza73219za7,
		BGl_z62genzd2prefixzb0zzsaw_c_codez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_SawCIregz00zzsaw_c_codez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_c_codez00));
		     ADD_ROOT((void *) (&BGl_za2badzd2macrosza2zd2zzsaw_c_codez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_c_codez00(long
		BgL_checksumz00_5591, char *BgL_fromz00_5592)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_c_codez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_c_codez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_c_codez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00();
					BGl_cnstzd2initzd2zzsaw_c_codez00();
					BGl_importedzd2moduleszd2initz00zzsaw_c_codez00();
					BGl_objectzd2initzd2zzsaw_c_codez00();
					BGl_genericzd2initzd2zzsaw_c_codez00();
					BGl_methodzd2initzd2zzsaw_c_codez00();
					return BGl_toplevelzd2initzd2zzsaw_c_codez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_c_code");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			{	/* SawC/code.scm 1 */
				obj_t BgL_cportz00_5358;

				{	/* SawC/code.scm 1 */
					obj_t BgL_stringz00_5366;

					BgL_stringz00_5366 = BGl_string3053z00zzsaw_c_codez00;
					{	/* SawC/code.scm 1 */
						obj_t BgL_startz00_5367;

						BgL_startz00_5367 = BINT(((long) 0));
						{	/* SawC/code.scm 1 */
							obj_t BgL_endz00_5368;

							BgL_endz00_5368 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5366)));
							{	/* SawC/code.scm 1 */

								BgL_cportz00_5358 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5366, BgL_startz00_5367, BgL_endz00_5368);
				}}}}
				{
					long BgL_iz00_5359;

					BgL_iz00_5359 = ((long) 9);
				BgL_loopz00_5360:
					if ((BgL_iz00_5359 == ((long) -1)))
						{	/* SawC/code.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawC/code.scm 1 */
							{	/* SawC/code.scm 1 */
								obj_t BgL_arg3055z00_5362;

								{	/* SawC/code.scm 1 */

									{	/* SawC/code.scm 1 */
										obj_t BgL_locationz00_5364;

										BgL_locationz00_5364 = BBOOL(((bool_t) 0));
										{	/* SawC/code.scm 1 */

											BgL_arg3055z00_5362 =
												BGl_readz00zz__readerz00(BgL_cportz00_5358,
												BgL_locationz00_5364);
										}
									}
								}
								{	/* SawC/code.scm 1 */
									int BgL_tmpz00_5629;

									BgL_tmpz00_5629 = (int) (BgL_iz00_5359);
									CNST_TABLE_SET(BgL_tmpz00_5629, BgL_arg3055z00_5362);
							}}
							{	/* SawC/code.scm 1 */
								int BgL_auxz00_5365;

								BgL_auxz00_5365 = (int) ((BgL_iz00_5359 - ((long) 1)));
								{
									long BgL_iz00_5634;

									BgL_iz00_5634 = (long) (BgL_auxz00_5365);
									BgL_iz00_5359 = BgL_iz00_5634;
									goto BgL_loopz00_5360;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			BGl_za2commentza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2traceza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2countza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00 = ((bool_t) 1);
			BGl_za2counterza2z00zzsaw_c_codez00 = ((long) 0);
			BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2haspushbeforeza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00 = ((long) 0);
			return (BGl_za2badzd2macrosza2zd2zzsaw_c_codez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* saw-cheader */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cheaderzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 42 */
			return
				BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
				BGl_proc2897z00zzsaw_c_codez00);
		}

	}



/* &saw-cheader */
	obj_t BGl_z62sawzd2cheaderzb0zzsaw_c_codez00(obj_t BgL_envz00_5185)
	{
		{	/* SawC/code.scm 42 */
			return BGl_sawzd2cheaderzd2zzsaw_c_codez00();
		}

	}



/* &<@anonymous:1802> */
	obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_c_codez00(obj_t
		BgL_envz00_5186)
	{
		{	/* SawC/code.scm 44 */
			return BGl_headerz00zzsaw_c_codez00();
		}

	}



/* header */
	obj_t BGl_headerz00zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 46 */
			{	/* SawC/code.scm 52 */
				obj_t BgL_arg1820z00_2366;

				{	/* SawC/code.scm 52 */
					obj_t BgL_res2540z00_3934;

					{	/* SawC/code.scm 52 */
						obj_t BgL_tmpz00_5641;

						BgL_tmpz00_5641 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2540z00_3934 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5641);
					}
					BgL_arg1820z00_2366 = BgL_res2540z00_3934;
				}
				return
					bgl_display_string(BGl_string2898z00zzsaw_c_codez00,
					BgL_arg1820z00_2366);
			}
		}

	}



/* saw-cepilogue */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cepiloguezd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 54 */
			return
				BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
				BGl_proc2899z00zzsaw_c_codez00);
		}

	}



/* &saw-cepilogue */
	obj_t BGl_z62sawzd2cepiloguezb0zzsaw_c_codez00(obj_t BgL_envz00_5188)
	{
		{	/* SawC/code.scm 54 */
			return BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
		}

	}



/* &<@anonymous:1822> */
	obj_t BGl_z62zc3z04anonymousza31822ze3ze5zzsaw_c_codez00(obj_t
		BgL_envz00_5189)
	{
		{	/* SawC/code.scm 56 */
			return BBOOL(BGl_cepiloguez00zzsaw_c_codez00());
		}

	}



/* cepilogue */
	bool_t BGl_cepiloguez00zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 58 */
			{	/* SawC/code.scm 59 */
				obj_t BgL_arg1823z00_2370;

				{	/* SawC/code.scm 59 */
					obj_t BgL_res2541z00_3938;

					{	/* SawC/code.scm 59 */
						obj_t BgL_tmpz00_5649;

						BgL_tmpz00_5649 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2541z00_3938 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5649);
					}
					BgL_arg1823z00_2370 = BgL_res2541z00_3938;
				}
				bgl_display_string(BGl_string2898z00zzsaw_c_codez00,
					BgL_arg1823z00_2370);
			}
			return ((bool_t) 0);
		}

	}



/* saw-cgen */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cgenzd2zzsaw_c_codez00(BgL_cvmz00_bglt
		BgL_bz00_46, BgL_globalz00_bglt BgL_vz00_47)
	{
		{	/* SawC/code.scm 70 */
			{	/* SawC/code.scm 71 */
				obj_t BgL_lz00_2385;

				BgL_lz00_2385 =
					BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
					((BgL_backendz00_bglt) BgL_bz00_46), BgL_vz00_47);
				BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2haspushbeforeza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00 = ((long) 0);
				{	/* SawC/code.scm 77 */
					obj_t BgL_zc3z04anonymousza31842ze3z87_5190;

					BgL_zc3z04anonymousza31842ze3z87_5190 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_c_codez00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31842ze3z87_5190,
						(int) (((long) 0)), ((obj_t) BgL_bz00_46));
					PROCEDURE_SET(BgL_zc3z04anonymousza31842ze3z87_5190,
						(int) (((long) 1)), ((obj_t) BgL_vz00_47));
					PROCEDURE_SET(BgL_zc3z04anonymousza31842ze3z87_5190,
						(int) (((long) 2)), BgL_lz00_2385);
					return
						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
						(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
						BgL_zc3z04anonymousza31842ze3z87_5190);
				}
			}
		}

	}



/* &saw-cgen */
	obj_t BGl_z62sawzd2cgenzb0zzsaw_c_codez00(obj_t BgL_envz00_5191,
		obj_t BgL_bz00_5192, obj_t BgL_vz00_5193)
	{
		{	/* SawC/code.scm 70 */
			return
				BGl_sawzd2cgenzd2zzsaw_c_codez00(
				((BgL_cvmz00_bglt) BgL_bz00_5192),
				((BgL_globalz00_bglt) BgL_vz00_5193));
		}

	}



/* &<@anonymous:1842> */
	obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_c_codez00(obj_t
		BgL_envz00_5194)
	{
		{	/* SawC/code.scm 77 */
			{	/* SawC/code.scm 77 */
				BgL_cvmz00_bglt BgL_bz00_5195;
				BgL_globalz00_bglt BgL_vz00_5196;
				obj_t BgL_lz00_5197;

				BgL_bz00_5195 =
					((BgL_cvmz00_bglt)
					PROCEDURE_REF(BgL_envz00_5194, (int) (((long) 0))));
				BgL_vz00_5196 =
					((BgL_globalz00_bglt)
					PROCEDURE_REF(BgL_envz00_5194, (int) (((long) 1))));
				BgL_lz00_5197 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5194, (int) (((long) 2))));
				return
					BGl_genfunz00zzsaw_c_codez00(BgL_bz00_5195, BgL_vz00_5196,
					BgL_lz00_5197);
			}
		}

	}



/* genfun */
	obj_t BGl_genfunz00zzsaw_c_codez00(BgL_cvmz00_bglt BgL_bz00_48,
		BgL_globalz00_bglt BgL_vz00_49, obj_t BgL_lz00_50)
	{
		{	/* SawC/code.scm 79 */
			{	/* SawC/code.scm 81 */
				BgL_sfunz00_bglt BgL_i1173z00_2390;

				BgL_i1173z00_2390 =
					((BgL_sfunz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_vz00_49)))->BgL_valuez00));
				{	/* SawC/code.scm 82 */
					obj_t BgL_paramsz00_2391;

					{	/* SawC/code.scm 82 */
						obj_t BgL_l1653z00_2419;

						BgL_l1653z00_2419 =
							(((BgL_sfunz00_bglt) COBJECT(BgL_i1173z00_2390))->BgL_argsz00);
						if (NULLP(BgL_l1653z00_2419))
							{	/* SawC/code.scm 82 */
								BgL_paramsz00_2391 = BNIL;
							}
						else
							{	/* SawC/code.scm 82 */
								obj_t BgL_head1655z00_2421;

								{	/* SawC/code.scm 82 */
									BgL_rtl_regz00_bglt BgL_arg1879z00_2433;

									{	/* SawC/code.scm 82 */
										obj_t BgL_arg1881z00_2434;

										BgL_arg1881z00_2434 = CAR(((obj_t) BgL_l1653z00_2419));
										BgL_arg1879z00_2433 =
											BGl_localzd2ze3regz31zzsaw_node2rtlz00(
											((BgL_localz00_bglt) BgL_arg1881z00_2434));
									}
									{	/* SawC/code.scm 82 */
										obj_t BgL_res2548z00_3963;

										BgL_res2548z00_3963 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1879z00_2433), BNIL);
										BgL_head1655z00_2421 = BgL_res2548z00_3963;
									}
								}
								{	/* SawC/code.scm 82 */
									obj_t BgL_g1658z00_2422;

									BgL_g1658z00_2422 = CDR(((obj_t) BgL_l1653z00_2419));
									{
										obj_t BgL_l1653z00_2424;
										obj_t BgL_tail1656z00_2425;

										BgL_l1653z00_2424 = BgL_g1658z00_2422;
										BgL_tail1656z00_2425 = BgL_head1655z00_2421;
									BgL_zc3z04anonymousza31874ze3z87_2426:
										if (NULLP(BgL_l1653z00_2424))
											{	/* SawC/code.scm 82 */
												BgL_paramsz00_2391 = BgL_head1655z00_2421;
											}
										else
											{	/* SawC/code.scm 82 */
												obj_t BgL_newtail1657z00_2428;

												{	/* SawC/code.scm 82 */
													BgL_rtl_regz00_bglt BgL_arg1877z00_2430;

													{	/* SawC/code.scm 82 */
														obj_t BgL_arg1878z00_2431;

														BgL_arg1878z00_2431 =
															CAR(((obj_t) BgL_l1653z00_2424));
														BgL_arg1877z00_2430 =
															BGl_localzd2ze3regz31zzsaw_node2rtlz00(
															((BgL_localz00_bglt) BgL_arg1878z00_2431));
													}
													{	/* SawC/code.scm 82 */
														obj_t BgL_res2550z00_3967;

														BgL_res2550z00_3967 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1877z00_2430), BNIL);
														BgL_newtail1657z00_2428 = BgL_res2550z00_3967;
													}
												}
												SET_CDR(BgL_tail1656z00_2425, BgL_newtail1657z00_2428);
												{	/* SawC/code.scm 82 */
													obj_t BgL_arg1876z00_2429;

													BgL_arg1876z00_2429 =
														CDR(((obj_t) BgL_l1653z00_2424));
													{
														obj_t BgL_tail1656z00_5706;
														obj_t BgL_l1653z00_5705;

														BgL_l1653z00_5705 = BgL_arg1876z00_2429;
														BgL_tail1656z00_5706 = BgL_newtail1657z00_2428;
														BgL_tail1656z00_2425 = BgL_tail1656z00_5706;
														BgL_l1653z00_2424 = BgL_l1653z00_5705;
														goto BgL_zc3z04anonymousza31874ze3z87_2426;
													}
												}
											}
									}
								}
							}
					}
					BGl_buildzd2treezd2zzsaw_exprz00(
						((BgL_backendz00_bglt) BgL_bz00_48), BgL_paramsz00_2391,
						BgL_lz00_50);
					BgL_lz00_50 =
						BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2((
							(BgL_backendz00_bglt) BgL_bz00_48), BgL_vz00_49,
						BgL_paramsz00_2391, BgL_lz00_50);
					BgL_lz00_50 =
						BGl_bbvz00zzsaw_bbvz00(((BgL_backendz00_bglt) BgL_bz00_48),
						BgL_vz00_49, BgL_paramsz00_2391, BgL_lz00_50);
					{	/* SawC/code.scm 87 */
						obj_t BgL_localsz00_2392;

						BgL_localsz00_2392 =
							BGl_getzd2localszd2zzsaw_c_codez00(BgL_paramsz00_2391,
							BgL_lz00_50);
						{	/* SawC/code.scm 89 */
							obj_t BgL_insz00_2397;

							{	/* SawC/code.scm 89 */
								obj_t BgL_arg1852z00_2402;

								{	/* SawC/code.scm 89 */
									BgL_blockz00_bglt BgL_oz00_3971;

									{	/* SawC/code.scm 89 */
										obj_t BgL_pairz00_3970;

										BgL_pairz00_3970 = BgL_lz00_50;
										BgL_oz00_3971 = ((BgL_blockz00_bglt) CAR(BgL_pairz00_3970));
									}
									BgL_arg1852z00_2402 =
										(((BgL_blockz00_bglt) COBJECT(BgL_oz00_3971))->
										BgL_firstz00);
								}
								BgL_insz00_2397 = CAR(BgL_arg1852z00_2402);
							}
							{	/* SawC/code.scm 90 */
								bool_t BgL_test3224z00_5718;

								if (CBOOL
									(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00))
									{	/* SawC/code.scm 90 */
										if (CBOOL
											(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00))
											{	/* SawC/code.scm 91 */
												BgL_test3224z00_5718 = ((bool_t) 0);
											}
										else
											{	/* SawC/code.scm 91 */
												BgL_test3224z00_5718 = ((bool_t) 1);
											}
									}
								else
									{	/* SawC/code.scm 90 */
										BgL_test3224z00_5718 = ((bool_t) 0);
									}
								if (BgL_test3224z00_5718)
									{	/* SawC/code.scm 92 */
										bool_t BgL__ortest_1174z00_2399;

										BgL__ortest_1174z00_2399 =
											BGl_printzd2locationzf3z21zzsaw_c_codez00(
											(((BgL_sfunz00_bglt) COBJECT(BgL_i1173z00_2390))->
												BgL_locz00));
										if (BgL__ortest_1174z00_2399)
											{	/* SawC/code.scm 92 */
												BgL__ortest_1174z00_2399;
											}
										else
											{	/* SawC/code.scm 93 */
												obj_t BgL_arg1850z00_2400;

												BgL_arg1850z00_2400 =
													BGl_findzd2locationzd2zzsaw_c_codez00(
													((BgL_rtl_insz00_bglt) BgL_insz00_2397));
												BGl_printzd2locationzf3z21zzsaw_c_codez00
													(BgL_arg1850z00_2400);
											}
									}
								else
									{	/* SawC/code.scm 90 */
										((bool_t) 0);
									}
							}
						}
						{	/* SawC/code.scm 94 */
							BgL_typez00_bglt BgL_arg1855z00_2404;

							BgL_arg1855z00_2404 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_vz00_49)))->BgL_typez00);
							{	/* SawC/code.scm 451 */
								obj_t BgL_arg2038z00_3974;

								BgL_arg2038z00_3974 =
									(((BgL_typez00_bglt) COBJECT(BgL_arg1855z00_2404))->
									BgL_namez00);
								{	/* SawC/code.scm 451 */
									obj_t BgL_list2039z00_3975;

									BgL_list2039z00_3975 =
										MAKE_YOUNG_PAIR(BgL_arg2038z00_3974, BNIL);
									BGl_displayza2za2zz__r4_output_6_10_3z00
										(BgL_list2039z00_3975);
								}
							}
						}
						{	/* SawC/code.scm 95 */
							obj_t BgL_arg1856z00_2405;

							{	/* SawC/code.scm 470 */
								obj_t BgL_arg2041z00_3978;

								BgL_arg2041z00_3978 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_vz00_49)))->BgL_namez00);
								BgL_arg1856z00_2405 =
									BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_3978);
							}
							{	/* SawC/code.scm 95 */
								obj_t BgL_list1857z00_2406;

								{	/* SawC/code.scm 95 */
									obj_t BgL_arg1858z00_2407;

									BgL_arg1858z00_2407 =
										MAKE_YOUNG_PAIR(BgL_arg1856z00_2405, BNIL);
									BgL_list1857z00_2406 =
										MAKE_YOUNG_PAIR(BGl_string2900z00zzsaw_c_codez00,
										BgL_arg1858z00_2407);
								}
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1857z00_2406);
							}
						}
						BGl_genzd2typezd2regsz00zzsaw_c_codez00(BgL_paramsz00_2391);
						{	/* SawC/code.scm 97 */
							obj_t BgL_arg1859z00_2408;

							{	/* SawC/code.scm 97 */
								obj_t BgL_res2551z00_3981;

								{	/* SawC/code.scm 97 */
									obj_t BgL_tmpz00_5741;

									BgL_tmpz00_5741 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2551z00_3981 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5741);
								}
								BgL_arg1859z00_2408 = BgL_res2551z00_3981;
							}
							bgl_display_string(BGl_string2901z00zzsaw_c_codez00,
								BgL_arg1859z00_2408);
						}
						if (BGl_za2hasprotectza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 98 */
								obj_t BgL_arg1861z00_2409;

								{	/* SawC/code.scm 98 */
									obj_t BgL_res2552z00_3985;

									{	/* SawC/code.scm 98 */
										obj_t BgL_tmpz00_5746;

										BgL_tmpz00_5746 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2552z00_3985 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5746);
									}
									BgL_arg1861z00_2409 = BgL_res2552z00_3985;
								}
								bgl_display_string(BGl_string2902z00zzsaw_c_codez00,
									BgL_arg1861z00_2409);
							}
						else
							{	/* SawC/code.scm 98 */
								BFALSE;
							}
						if (BGl_za2haspushexitza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 99 */
								obj_t BgL_arg1862z00_2410;

								{	/* SawC/code.scm 99 */
									obj_t BgL_res2553z00_3989;

									{	/* SawC/code.scm 99 */
										obj_t BgL_tmpz00_5751;

										BgL_tmpz00_5751 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2553z00_3989 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5751);
									}
									BgL_arg1862z00_2410 = BgL_res2553z00_3989;
								}
								bgl_display_string(BGl_string2903z00zzsaw_c_codez00,
									BgL_arg1862z00_2410);
							}
						else
							{	/* SawC/code.scm 99 */
								BFALSE;
							}
						if (BGl_za2haspushbeforeza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 100 */
								obj_t BgL_arg1863z00_2411;

								{	/* SawC/code.scm 100 */
									obj_t BgL_res2554z00_3993;

									{	/* SawC/code.scm 100 */
										obj_t BgL_tmpz00_5756;

										BgL_tmpz00_5756 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2554z00_3993 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5756);
									}
									BgL_arg1863z00_2411 = BgL_res2554z00_3993;
								}
								bgl_display_string(BGl_string2904z00zzsaw_c_codez00,
									BgL_arg1863z00_2411);
							}
						else
							{	/* SawC/code.scm 100 */
								BFALSE;
							}
						BGl_declarezd2regszd2zzsaw_c_codez00(BgL_localsz00_2392);
						((bool_t) 0);
					}
				}
			}
			BGl_genbodyz00zzsaw_c_codez00(BgL_lz00_50);
			{	/* SawC/code.scm 104 */
				obj_t BgL_arg1882z00_2435;
				obj_t BgL_arg1883z00_2436;

				BgL_arg1882z00_2435 =
					make_string(BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00,
					((unsigned char) '}'));
				{	/* SawC/code.scm 104 */
					obj_t BgL_res2556z00_3999;

					{	/* SawC/code.scm 104 */
						obj_t BgL_tmpz00_5763;

						BgL_tmpz00_5763 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2556z00_3999 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5763);
					}
					BgL_arg1883z00_2436 = BgL_res2556z00_3999;
				}
				bgl_display_obj(BgL_arg1882z00_2435, BgL_arg1883z00_2436);
			}
			{	/* SawC/code.scm 105 */
				obj_t BgL_arg1884z00_2437;

				{	/* SawC/code.scm 105 */
					obj_t BgL_res2557z00_4001;

					{	/* SawC/code.scm 105 */
						obj_t BgL_tmpz00_5767;

						BgL_tmpz00_5767 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2557z00_4001 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5767);
					}
					BgL_arg1884z00_2437 = BgL_res2557z00_4001;
				}
				return
					bgl_display_string(BGl_string2905z00zzsaw_c_codez00,
					BgL_arg1884z00_2437);
			}
		}

	}



/* get-locals */
	obj_t BGl_getzd2localszd2zzsaw_c_codez00(obj_t BgL_paramsz00_51,
		obj_t BgL_lz00_52)
	{
		{	/* SawC/code.scm 107 */
			{	/* SawC/code.scm 109 */
				struct bgl_cell BgL_box3231_5352z00;
				struct bgl_cell BgL_box3232_5353z00;
				obj_t BgL_nz00_5352;
				obj_t BgL_regsz00_5353;

				BgL_nz00_5352 = MAKE_CELL_STACK(BINT(((long) 0)), BgL_box3231_5352z00);
				BgL_regsz00_5353 = MAKE_CELL_STACK(BNIL, BgL_box3232_5353z00);
				{
					BgL_blockz00_bglt BgL_bz00_2491;

					{
						obj_t BgL_l1671z00_2444;

						BgL_l1671z00_2444 = BgL_paramsz00_51;
					BgL_zc3z04anonymousza31885ze3z87_2445:
						if (PAIRP(BgL_l1671z00_2444))
							{	/* SawC/code.scm 132 */
								BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00(BgL_regsz00_5353,
									BgL_nz00_5352, CAR(BgL_l1671z00_2444));
								{
									obj_t BgL_l1671z00_5776;

									BgL_l1671z00_5776 = CDR(BgL_l1671z00_2444);
									BgL_l1671z00_2444 = BgL_l1671z00_5776;
									goto BgL_zc3z04anonymousza31885ze3z87_2445;
								}
							}
						else
							{	/* SawC/code.scm 132 */
								((bool_t) 1);
							}
					}
					{	/* SawC/code.scm 133 */
						obj_t BgL_auxz00_5354;

						BgL_auxz00_5354 = BNIL;
						CELL_SET(BgL_regsz00_5353, BgL_auxz00_5354);
					}
					{
						obj_t BgL_l1673z00_2451;

						BgL_l1673z00_2451 = BgL_lz00_52;
					BgL_zc3z04anonymousza31889ze3z87_2452:
						if (PAIRP(BgL_l1673z00_2451))
							{	/* SawC/code.scm 134 */
								{	/* SawC/code.scm 134 */
									obj_t BgL_arg1891z00_2454;

									BgL_arg1891z00_2454 = CAR(BgL_l1673z00_2451);
									BgL_bz00_2491 = ((BgL_blockz00_bglt) BgL_arg1891z00_2454);
									{	/* SawC/code.scm 125 */
										obj_t BgL_g1670z00_2493;

										BgL_g1670z00_2493 =
											(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2491))->
											BgL_firstz00);
										{
											obj_t BgL_l1668z00_2495;

											BgL_l1668z00_2495 = BgL_g1670z00_2493;
										BgL_zc3z04anonymousza31912ze3z87_2496:
											if (PAIRP(BgL_l1668z00_2495))
												{	/* SawC/code.scm 131 */
													{	/* SawC/code.scm 127 */
														obj_t BgL_insz00_2498;

														BgL_insz00_2498 = CAR(BgL_l1668z00_2495);
														{	/* SawC/code.scm 128 */
															BgL_rtl_funz00_bglt BgL_arg1914z00_2500;

															BgL_arg1914z00_2500 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_insz00_2498)))->
																BgL_funz00);
															BGl_check_funze70ze7zzsaw_c_codez00
																(BgL_arg1914z00_2500);
														}
														if (CBOOL(
																(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2498)))->BgL_destz00)))
															{	/* SawC/code.scm 129 */
																obj_t BgL_arg1916z00_2502;

																BgL_arg1916z00_2502 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2498)))->BgL_destz00);
																BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00
																	(BgL_regsz00_5353, BgL_nz00_5352,
																	BgL_arg1916z00_2502);
															}
														else
															{	/* SawC/code.scm 129 */
																BFALSE;
															}
														{	/* SawC/code.scm 130 */
															obj_t BgL_g1667z00_2503;

															BgL_g1667z00_2503 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_insz00_2498)))->
																BgL_argsz00);
															{
																obj_t BgL_l1665z00_2505;

																BgL_l1665z00_2505 = BgL_g1667z00_2503;
															BgL_zc3z04anonymousza31917ze3z87_2506:
																if (PAIRP(BgL_l1665z00_2505))
																	{	/* SawC/code.scm 130 */
																		BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00
																			(BgL_regsz00_5353, BgL_nz00_5352,
																			CAR(BgL_l1665z00_2505));
																		{
																			obj_t BgL_l1665z00_5801;

																			BgL_l1665z00_5801 =
																				CDR(BgL_l1665z00_2505);
																			BgL_l1665z00_2505 = BgL_l1665z00_5801;
																			goto
																				BgL_zc3z04anonymousza31917ze3z87_2506;
																		}
																	}
																else
																	{	/* SawC/code.scm 130 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l1668z00_5803;

														BgL_l1668z00_5803 = CDR(BgL_l1668z00_2495);
														BgL_l1668z00_2495 = BgL_l1668z00_5803;
														goto BgL_zc3z04anonymousza31912ze3z87_2496;
													}
												}
											else
												{	/* SawC/code.scm 131 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1673z00_5806;

									BgL_l1673z00_5806 = CDR(BgL_l1673z00_2451);
									BgL_l1673z00_2451 = BgL_l1673z00_5806;
									goto BgL_zc3z04anonymousza31889ze3z87_2452;
								}
							}
						else
							{	/* SawC/code.scm 134 */
								((bool_t) 1);
							}
					}
					return CELL_REF(BgL_regsz00_5353);
				}
			}
		}

	}



/* check_fun~0 */
	obj_t BGl_check_funze70ze7zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_2457)
	{
		{	/* SawC/code.scm 111 */
			{	/* SawC/code.scm 111 */
				bool_t BgL_test3238z00_5808;

				{	/* SawC/code.scm 111 */
					bool_t BgL_res2558z00_4004;

					BgL_res2558z00_4004 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_funz00_2457), BGl_rtl_protectz00zzsaw_defsz00);
					BgL_test3238z00_5808 = BgL_res2558z00_4004;
				}
				if (BgL_test3238z00_5808)
					{	/* SawC/code.scm 111 */
						BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 1);
					}
				else
					{	/* SawC/code.scm 111 */
						BFALSE;
					}
			}
			{	/* SawC/code.scm 112 */
				bool_t BgL_test3239z00_5811;

				{	/* SawC/code.scm 112 */
					bool_t BgL_res2559z00_4005;

					BgL_res2559z00_4005 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_funz00_2457), BGl_rtl_callz00zzsaw_defsz00);
					BgL_test3239z00_5811 = BgL_res2559z00_4005;
				}
				if (BgL_test3239z00_5811)
					{	/* SawC/code.scm 113 */
						obj_t BgL_idz00_2461;

						BgL_idz00_2461 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										(((BgL_rtl_callz00_bglt) COBJECT(
													((BgL_rtl_callz00_bglt) BgL_funz00_2457)))->
											BgL_varz00))))->BgL_idz00);
						if ((BgL_idz00_2461 == CNST_TABLE_REF(((long) 1))))
							{	/* SawC/code.scm 114 */
								BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 1);
							}
						else
							{	/* SawC/code.scm 114 */
								BFALSE;
							}
						if ((BgL_idz00_2461 == CNST_TABLE_REF(((long) 2))))
							{	/* SawC/code.scm 115 */
								return (BGl_za2haspushbeforeza2z00zzsaw_c_codez00 =
									((bool_t) 1), BUNSPEC);
							}
						else
							{	/* SawC/code.scm 115 */
								return BFALSE;
							}
					}
				else
					{	/* SawC/code.scm 112 */
						return BFALSE;
					}
			}
		}

	}



/* expr->ireg~0 */
	obj_t BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00(obj_t BgL_regsz00_5349,
		obj_t BgL_nz00_5348, obj_t BgL_ez00_2465)
	{
		{	/* SawC/code.scm 123 */
			{	/* SawC/code.scm 118 */
				bool_t BgL__ortest_1175z00_2467;

				BgL__ortest_1175z00_2467 =
					BGl_isazf3zf3zz__objectz00(BgL_ez00_2465,
					BGl_SawCIregz00zzsaw_c_codez00);
				if (BgL__ortest_1175z00_2467)
					{	/* SawC/code.scm 118 */
						return BBOOL(BgL__ortest_1175z00_2467);
					}
				else
					{	/* SawC/code.scm 118 */
						if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2465,
								BGl_rtl_regz00zzsaw_defsz00))
							{	/* SawC/code.scm 119 */
								{	/* SawC/code.scm 119 */
									BgL_sawciregz00_bglt BgL_wide1178z00_2471;

									BgL_wide1178z00_2471 =
										((BgL_sawciregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_sawciregz00_bgl))));
									{	/* SawC/code.scm 119 */
										obj_t BgL_auxz00_5834;
										BgL_objectz00_bglt BgL_tmpz00_5830;

										BgL_auxz00_5834 = ((obj_t) BgL_wide1178z00_2471);
										BgL_tmpz00_5830 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_ez00_2465)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5830, BgL_auxz00_5834);
									}
									((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_ez00_2465)));
									{	/* SawC/code.scm 119 */
										long BgL_arg1901z00_2472;

										{	/* SawC/code.scm 119 */
											long BgL_res2561z00_4011;

											BgL_res2561z00_4011 =
												BGL_CLASS_INDEX(BGl_SawCIregz00zzsaw_c_codez00);
											BgL_arg1901z00_2472 = BgL_res2561z00_4011;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_ez00_2465))),
											BgL_arg1901z00_2472);
									}
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_ez00_2465)));
								}
								{
									BgL_sawciregz00_bglt BgL_auxz00_5848;

									{
										obj_t BgL_auxz00_5849;

										{	/* SawC/code.scm 119 */
											BgL_objectz00_bglt BgL_tmpz00_5850;

											BgL_tmpz00_5850 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_ez00_2465)));
											BgL_auxz00_5849 = BGL_OBJECT_WIDENING(BgL_tmpz00_5850);
										}
										BgL_auxz00_5848 = ((BgL_sawciregz00_bglt) BgL_auxz00_5849);
									}
									((((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_5848))->
											BgL_indexz00) =
										((obj_t) CELL_REF(BgL_nz00_5348)), BUNSPEC);
								}
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_ez00_2465));
								{	/* SawC/code.scm 120 */
									obj_t BgL_auxz00_5350;

									BgL_auxz00_5350 =
										ADDFX(CELL_REF(BgL_nz00_5348), BINT(((long) 1)));
									CELL_SET(BgL_nz00_5348, BgL_auxz00_5350);
								}
								{	/* SawC/code.scm 121 */
									obj_t BgL_auxz00_5351;

									BgL_auxz00_5351 =
										MAKE_YOUNG_PAIR(BgL_ez00_2465, CELL_REF(BgL_regsz00_5349));
									return CELL_SET(BgL_regsz00_5349, BgL_auxz00_5351);
								}
							}
						else
							{	/* SawC/code.scm 119 */
								{	/* SawC/code.scm 122 */
									BgL_rtl_funz00_bglt BgL_arg1902z00_2474;

									BgL_arg1902z00_2474 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_ez00_2465)))->BgL_funz00);
									BGl_check_funze70ze7zzsaw_c_codez00(BgL_arg1902z00_2474);
								}
								{	/* SawC/code.scm 123 */
									obj_t BgL_l1659z00_2475;

									BgL_l1659z00_2475 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_ez00_2465)))->BgL_argsz00);
									if (NULLP(BgL_l1659z00_2475))
										{	/* SawC/code.scm 123 */
											return BNIL;
										}
									else
										{	/* SawC/code.scm 123 */
											obj_t BgL_head1661z00_2477;

											{	/* SawC/code.scm 123 */
												obj_t BgL_arg1909z00_2489;

												{	/* SawC/code.scm 123 */
													obj_t BgL_arg1910z00_2490;

													BgL_arg1910z00_2490 = CAR(BgL_l1659z00_2475);
													BgL_arg1909z00_2489 =
														BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00
														(BgL_regsz00_5349, BgL_nz00_5348,
														BgL_arg1910z00_2490);
												}
												{	/* SawC/code.scm 123 */
													obj_t BgL_res2564z00_4021;

													BgL_res2564z00_4021 =
														MAKE_YOUNG_PAIR(BgL_arg1909z00_2489, BNIL);
													BgL_head1661z00_2477 = BgL_res2564z00_4021;
												}
											}
											{	/* SawC/code.scm 123 */
												obj_t BgL_g1664z00_2478;

												BgL_g1664z00_2478 = CDR(BgL_l1659z00_2475);
												{
													obj_t BgL_l1659z00_2480;
													obj_t BgL_tail1662z00_2481;

													BgL_l1659z00_2480 = BgL_g1664z00_2478;
													BgL_tail1662z00_2481 = BgL_head1661z00_2477;
												BgL_zc3z04anonymousza31904ze3z87_2482:
													if (NULLP(BgL_l1659z00_2480))
														{	/* SawC/code.scm 123 */
															return BgL_head1661z00_2477;
														}
													else
														{	/* SawC/code.scm 123 */
															obj_t BgL_newtail1663z00_2484;

															{	/* SawC/code.scm 123 */
																obj_t BgL_arg1907z00_2486;

																{	/* SawC/code.scm 123 */
																	obj_t BgL_arg1908z00_2487;

																	BgL_arg1908z00_2487 =
																		CAR(((obj_t) BgL_l1659z00_2480));
																	BgL_arg1907z00_2486 =
																		BGl_exprzd2ze3iregze70zd6zzsaw_c_codez00
																		(BgL_regsz00_5349, BgL_nz00_5348,
																		BgL_arg1908z00_2487);
																}
																{	/* SawC/code.scm 123 */
																	obj_t BgL_res2566z00_4025;

																	BgL_res2566z00_4025 =
																		MAKE_YOUNG_PAIR(BgL_arg1907z00_2486, BNIL);
																	BgL_newtail1663z00_2484 = BgL_res2566z00_4025;
																}
															}
															SET_CDR(BgL_tail1662z00_2481,
																BgL_newtail1663z00_2484);
															{	/* SawC/code.scm 123 */
																obj_t BgL_arg1906z00_2485;

																BgL_arg1906z00_2485 =
																	CDR(((obj_t) BgL_l1659z00_2480));
																{
																	obj_t BgL_tail1662z00_5883;
																	obj_t BgL_l1659z00_5882;

																	BgL_l1659z00_5882 = BgL_arg1906z00_2485;
																	BgL_tail1662z00_5883 =
																		BgL_newtail1663z00_2484;
																	BgL_tail1662z00_2481 = BgL_tail1662z00_5883;
																	BgL_l1659z00_2480 = BgL_l1659z00_5882;
																	goto BgL_zc3z04anonymousza31904ze3z87_2482;
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



/* gen-type-regs */
	obj_t BGl_genzd2typezd2regsz00zzsaw_c_codez00(obj_t BgL_lz00_53)
	{
		{	/* SawC/code.scm 137 */
			{	/* SawC/code.scm 138 */
				obj_t BgL_arg1923z00_2516;

				{	/* SawC/code.scm 138 */
					obj_t BgL_res2571z00_4042;

					{	/* SawC/code.scm 138 */
						obj_t BgL_tmpz00_5884;

						BgL_tmpz00_5884 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2571z00_4042 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5884);
					}
					BgL_arg1923z00_2516 = BgL_res2571z00_4042;
				}
				bgl_display_string(BGl_string2906z00zzsaw_c_codez00,
					BgL_arg1923z00_2516);
			}
			if (NULLP(BgL_lz00_53))
				{	/* SawC/code.scm 139 */
					((bool_t) 0);
				}
			else
				{	/* SawC/code.scm 139 */
					BGl_genzd2typezd2regz00zzsaw_c_codez00(CAR(BgL_lz00_53));
					{	/* SawC/code.scm 142 */
						obj_t BgL_g1677z00_2519;

						BgL_g1677z00_2519 = CDR(BgL_lz00_53);
						{
							obj_t BgL_l1675z00_2521;

							BgL_l1675z00_2521 = BgL_g1677z00_2519;
						BgL_zc3z04anonymousza31926ze3z87_2522:
							if (PAIRP(BgL_l1675z00_2521))
								{	/* SawC/code.scm 143 */
									{	/* SawC/code.scm 142 */
										obj_t BgL_argz00_2524;

										BgL_argz00_2524 = CAR(BgL_l1675z00_2521);
										{	/* SawC/code.scm 142 */
											obj_t BgL_arg1928z00_2525;

											{	/* SawC/code.scm 142 */
												obj_t BgL_res2574z00_4051;

												{	/* SawC/code.scm 142 */
													obj_t BgL_tmpz00_5896;

													BgL_tmpz00_5896 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2574z00_4051 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5896);
												}
												BgL_arg1928z00_2525 = BgL_res2574z00_4051;
											}
											bgl_display_string(BGl_string2907z00zzsaw_c_codez00,
												BgL_arg1928z00_2525);
										}
										BGl_genzd2typezd2regz00zzsaw_c_codez00(BgL_argz00_2524);
									}
									{
										obj_t BgL_l1675z00_5901;

										BgL_l1675z00_5901 = CDR(BgL_l1675z00_2521);
										BgL_l1675z00_2521 = BgL_l1675z00_5901;
										goto BgL_zc3z04anonymousza31926ze3z87_2522;
									}
								}
							else
								{	/* SawC/code.scm 143 */
									((bool_t) 1);
								}
						}
					}
				}
			{	/* SawC/code.scm 144 */
				obj_t BgL_arg1930z00_2528;

				{	/* SawC/code.scm 144 */
					obj_t BgL_res2575z00_4056;

					{	/* SawC/code.scm 144 */
						obj_t BgL_tmpz00_5903;

						BgL_tmpz00_5903 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2575z00_4056 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5903);
					}
					BgL_arg1930z00_2528 = BgL_res2575z00_4056;
				}
				return
					bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
					BgL_arg1930z00_2528);
			}
		}

	}



/* gen-type-reg */
	obj_t BGl_genzd2typezd2regz00zzsaw_c_codez00(obj_t BgL_regz00_54)
	{
		{	/* SawC/code.scm 146 */
			{	/* SawC/code.scm 147 */
				obj_t BgL_arg1931z00_2529;
				obj_t BgL_arg1932z00_2530;

				{	/* SawC/code.scm 147 */
					BgL_typez00_bglt BgL_arg1933z00_2531;
					obj_t BgL_arg1934z00_2532;

					BgL_arg1933z00_2531 =
						(((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_regz00_54)))->BgL_typez00);
					BgL_arg1934z00_2532 = BGl_reg_namez00zzsaw_c_codez00(BgL_regz00_54);
					BgL_arg1931z00_2529 =
						BGl_makezd2typedzd2declarationz00zztype_toolsz00
						(BgL_arg1933z00_2531, BgL_arg1934z00_2532);
				}
				{	/* SawC/code.scm 147 */
					obj_t BgL_res2576z00_4061;

					{	/* SawC/code.scm 147 */
						obj_t BgL_tmpz00_5911;

						BgL_tmpz00_5911 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2576z00_4061 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5911);
					}
					BgL_arg1932z00_2530 = BgL_res2576z00_4061;
				}
				return bgl_display_obj(BgL_arg1931z00_2529, BgL_arg1932z00_2530);
			}
		}

	}



/* reg_name */
	obj_t BGl_reg_namez00zzsaw_c_codez00(obj_t BgL_regz00_55)
	{
		{	/* SawC/code.scm 149 */
			{	/* SawC/code.scm 150 */
				obj_t BgL_arg1935z00_2533;
				obj_t BgL_arg1936z00_2534;

				if (CBOOL(
						(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_regz00_55))))->BgL_varz00)))
					{	/* SawC/code.scm 150 */
						BgL_arg1935z00_2533 = BGl_string2909z00zzsaw_c_codez00;
					}
				else
					{	/* SawC/code.scm 150 */
						BgL_arg1935z00_2533 = BGl_string2910z00zzsaw_c_codez00;
					}
				{	/* SawC/code.scm 151 */
					obj_t BgL_arg1938z00_2536;

					{
						BgL_sawciregz00_bglt BgL_auxz00_5920;

						{
							obj_t BgL_auxz00_5921;

							{	/* SawC/code.scm 151 */
								BgL_objectz00_bglt BgL_tmpz00_5922;

								BgL_tmpz00_5922 =
									((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_55));
								BgL_auxz00_5921 = BGL_OBJECT_WIDENING(BgL_tmpz00_5922);
							}
							BgL_auxz00_5920 = ((BgL_sawciregz00_bglt) BgL_auxz00_5921);
						}
						BgL_arg1938z00_2536 =
							(((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_5920))->BgL_indexz00);
					}
					{	/* SawC/code.scm 151 */

						BgL_arg1936z00_2534 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) CINT(BgL_arg1938z00_2536), ((long) 10));
				}}
				return string_append(BgL_arg1935z00_2533, BgL_arg1936z00_2534);
			}
		}

	}



/* declare-regs */
	bool_t BGl_declarezd2regszd2zzsaw_c_codez00(obj_t BgL_lz00_56)
	{
		{	/* SawC/code.scm 153 */
			{
				obj_t BgL_l1678z00_2540;

				BgL_l1678z00_2540 = BgL_lz00_56;
			BgL_zc3z04anonymousza31939ze3z87_2541:
				if (PAIRP(BgL_l1678z00_2540))
					{	/* SawC/code.scm 154 */
						{	/* SawC/code.scm 155 */
							obj_t BgL_rz00_2543;

							BgL_rz00_2543 = CAR(BgL_l1678z00_2540);
							{	/* SawC/code.scm 155 */
								obj_t BgL_arg1941z00_2544;

								{	/* SawC/code.scm 155 */
									obj_t BgL_res2578z00_4068;

									{	/* SawC/code.scm 155 */
										obj_t BgL_tmpz00_5934;

										BgL_tmpz00_5934 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2578z00_4068 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5934);
									}
									BgL_arg1941z00_2544 = BgL_res2578z00_4068;
								}
								bgl_display_string(BGl_string2900z00zzsaw_c_codez00,
									BgL_arg1941z00_2544);
							}
							BGl_genzd2typezd2regz00zzsaw_c_codez00(BgL_rz00_2543);
							{	/* SawC/code.scm 161 */
								obj_t BgL_arg1949z00_2554;

								{	/* SawC/code.scm 161 */
									obj_t BgL_res2579z00_4073;

									{	/* SawC/code.scm 161 */
										obj_t BgL_tmpz00_5939;

										BgL_tmpz00_5939 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2579z00_4073 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5939);
									}
									BgL_arg1949z00_2554 = BgL_res2579z00_4073;
								}
								bgl_display_string(BGl_string2911z00zzsaw_c_codez00,
									BgL_arg1949z00_2554);
							}
						}
						{
							obj_t BgL_l1678z00_5943;

							BgL_l1678z00_5943 = CDR(BgL_l1678z00_2540);
							BgL_l1678z00_2540 = BgL_l1678z00_5943;
							goto BgL_zc3z04anonymousza31939ze3z87_2541;
						}
					}
				else
					{	/* SawC/code.scm 154 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* genbody */
	bool_t BGl_genbodyz00zzsaw_c_codez00(obj_t BgL_lz00_57)
	{
		{	/* SawC/code.scm 164 */
			{
				obj_t BgL_l1683z00_2558;

				BgL_l1683z00_2558 = BgL_lz00_57;
			BgL_zc3z04anonymousza31952ze3z87_2559:
				if (PAIRP(BgL_l1683z00_2558))
					{	/* SawC/code.scm 165 */
						{	/* SawC/code.scm 166 */
							obj_t BgL_bz00_2561;

							BgL_bz00_2561 = CAR(BgL_l1683z00_2558);
							{	/* SawC/code.scm 166 */
								int BgL_arg1954z00_2562;

								BgL_arg1954z00_2562 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_2561)))->BgL_labelz00);
								BGl_outzd2labelzd2zzsaw_c_codez00(BgL_arg1954z00_2562);
							}
							{	/* SawC/code.scm 167 */
								obj_t BgL_lz00_2563;

								BgL_lz00_2563 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_2561)))->BgL_firstz00);
								{	/* SawC/code.scm 168 */
									bool_t BgL_test3251z00_5953;

									{	/* SawC/code.scm 168 */
										obj_t BgL_arg1958z00_2568;

										{	/* SawC/code.scm 168 */
											obj_t BgL_arg1959z00_2569;

											BgL_arg1959z00_2569 = CAR(BgL_lz00_2563);
											BgL_arg1958z00_2568 =
												BGl_findzd2locationzd2zzsaw_c_codez00(
												((BgL_rtl_insz00_bglt) BgL_arg1959z00_2569));
										}
										if (STRUCTP(BgL_arg1958z00_2568))
											{	/* SawC/code.scm 168 */
												BgL_test3251z00_5953 =
													(STRUCT_KEY(BgL_arg1958z00_2568) ==
													CNST_TABLE_REF(((long) 3)));
											}
										else
											{	/* SawC/code.scm 168 */
												BgL_test3251z00_5953 = ((bool_t) 0);
											}
									}
									if (BgL_test3251z00_5953)
										{	/* SawC/code.scm 168 */
											obj_t BgL_port1680z00_2567;

											{	/* SawC/code.scm 168 */
												obj_t BgL_res2583z00_4088;

												{	/* SawC/code.scm 168 */
													obj_t BgL_tmpz00_5962;

													BgL_tmpz00_5962 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2583z00_4088 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5962);
												}
												BgL_port1680z00_2567 = BgL_res2583z00_4088;
											}
											bgl_display_string(BGl_string2912z00zzsaw_c_codez00,
												BgL_port1680z00_2567);
											bgl_display_char(((unsigned char) 10),
												BgL_port1680z00_2567);
										}
									else
										{	/* SawC/code.scm 168 */
											BFALSE;
										}
								}
								{
									obj_t BgL_l1681z00_2571;

									BgL_l1681z00_2571 = BgL_lz00_2563;
								BgL_zc3z04anonymousza31960ze3z87_2572:
									if (PAIRP(BgL_l1681z00_2571))
										{	/* SawC/code.scm 169 */
											{	/* SawC/code.scm 169 */
												obj_t BgL_arg1962z00_2574;

												BgL_arg1962z00_2574 = CAR(BgL_l1681z00_2571);
												BGl_genzd2inszd2zzsaw_c_codez00(
													((BgL_rtl_insz00_bglt) BgL_arg1962z00_2574));
											}
											{
												obj_t BgL_l1681z00_5972;

												BgL_l1681z00_5972 = CDR(BgL_l1681z00_2571);
												BgL_l1681z00_2571 = BgL_l1681z00_5972;
												goto BgL_zc3z04anonymousza31960ze3z87_2572;
											}
										}
									else
										{	/* SawC/code.scm 169 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l1683z00_5974;

							BgL_l1683z00_5974 = CDR(BgL_l1683z00_2558);
							BgL_l1683z00_2558 = BgL_l1683z00_5974;
							goto BgL_zc3z04anonymousza31952ze3z87_2559;
						}
					}
				else
					{	/* SawC/code.scm 165 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* out-label */
	bool_t BGl_outzd2labelzd2zzsaw_c_codez00(int BgL_labelz00_58)
	{
		{	/* SawC/code.scm 172 */
			{	/* SawC/code.scm 173 */
				obj_t BgL_list1965z00_2579;

				{	/* SawC/code.scm 173 */
					obj_t BgL_arg1966z00_2580;

					{	/* SawC/code.scm 173 */
						obj_t BgL_arg1967z00_2581;

						BgL_arg1967z00_2581 =
							MAKE_YOUNG_PAIR(BGl_string2913z00zzsaw_c_codez00, BNIL);
						BgL_arg1966z00_2580 =
							MAKE_YOUNG_PAIR(BINT(BgL_labelz00_58), BgL_arg1967z00_2581);
					}
					BgL_list1965z00_2579 =
						MAKE_YOUNG_PAIR(BGl_string2914z00zzsaw_c_codez00,
						BgL_arg1966z00_2580);
				}
				BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1965z00_2579);
			}
			return ((bool_t) 0);
		}

	}



/* print-location? */
	bool_t BGl_printzd2locationzf3z21zzsaw_c_codez00(obj_t BgL_locz00_59)
	{
		{	/* SawC/code.scm 179 */
			{	/* SawC/code.scm 180 */
				bool_t BgL_test3254z00_5981;

				if (STRUCTP(BgL_locz00_59))
					{	/* SawC/code.scm 180 */
						BgL_test3254z00_5981 =
							(STRUCT_KEY(BgL_locz00_59) == CNST_TABLE_REF(((long) 3)));
					}
				else
					{	/* SawC/code.scm 180 */
						BgL_test3254z00_5981 = ((bool_t) 0);
					}
				if (BgL_test3254z00_5981)
					{	/* SawC/code.scm 180 */
						{	/* SawC/code.scm 182 */
							obj_t BgL_port1685z00_2590;

							{	/* SawC/code.scm 182 */
								obj_t BgL_res2588z00_4104;

								{	/* SawC/code.scm 182 */
									obj_t BgL_tmpz00_5987;

									BgL_tmpz00_5987 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2588z00_4104 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_5987);
								}
								BgL_port1685z00_2590 = BgL_res2588z00_4104;
							}
							bgl_display_string(BGl_string2915z00zzsaw_c_codez00,
								BgL_port1685z00_2590);
							bgl_display_obj(STRUCT_REF(BgL_locz00_59, (int) (((long) 2))),
								BgL_port1685z00_2590);
							bgl_display_string(BGl_string2916z00zzsaw_c_codez00,
								BgL_port1685z00_2590);
							bgl_display_obj(STRUCT_REF(BgL_locz00_59, (int) (((long) 0))),
								BgL_port1685z00_2590);
							bgl_display_string(BGl_string2917z00zzsaw_c_codez00,
								BgL_port1685z00_2590);
							bgl_display_char(((unsigned char) 10), BgL_port1685z00_2590);
						}
						return ((bool_t) 1);
					}
				else
					{	/* SawC/code.scm 180 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* find-location */
	obj_t BGl_findzd2locationzd2zzsaw_c_codez00(BgL_rtl_insz00_bglt BgL_insz00_60)
	{
		{	/* SawC/code.scm 186 */
			{	/* SawC/code.scm 198 */
				obj_t BgL__andtest_1185z00_2595;

				BgL__andtest_1185z00_2595 =
					BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
				if (CBOOL(BgL__andtest_1185z00_2595))
					{	/* SawC/code.scm 199 */
						obj_t BgL__andtest_1186z00_2596;

						BgL__andtest_1186z00_2596 =
							BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
						if (CBOOL(BgL__andtest_1186z00_2596))
							{	/* SawC/code.scm 199 */
								return BFALSE;
							}
						else
							{	/* SawC/code.scm 199 */
								return BGl_walkze70ze7zzsaw_c_codez00(((obj_t) BgL_insz00_60));
							}
					}
				else
					{	/* SawC/code.scm 198 */
						return BFALSE;
					}
			}
		}

	}



/* walk~0 */
	obj_t BGl_walkze70ze7zzsaw_c_codez00(obj_t BgL_insz00_2603)
	{
		{	/* SawC/code.scm 197 */
			{
				obj_t BgL_lz00_2597;

				if (BGl_isazf3zf3zz__objectz00(BgL_insz00_2603,
						BGl_rtl_insz00zzsaw_defsz00))
					{	/* SawC/code.scm 194 */
						obj_t BgL_locz00_2606;

						BgL_locz00_2606 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_2603)))->BgL_locz00);
						{	/* SawC/code.scm 195 */
							bool_t BgL_test3259z00_6010;

							if (STRUCTP(BgL_locz00_2606))
								{	/* SawC/code.scm 195 */
									BgL_test3259z00_6010 =
										(STRUCT_KEY(BgL_locz00_2606) == CNST_TABLE_REF(((long) 3)));
								}
							else
								{	/* SawC/code.scm 195 */
									BgL_test3259z00_6010 = ((bool_t) 0);
								}
							if (BgL_test3259z00_6010)
								{	/* SawC/code.scm 195 */
									return BgL_locz00_2606;
								}
							else
								{	/* SawC/code.scm 197 */
									obj_t BgL_arg1984z00_2608;

									BgL_arg1984z00_2608 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_2603)))->BgL_argsz00);
									BgL_lz00_2597 = BgL_arg1984z00_2608;
								BgL_zc3z04anonymousza31978ze3z87_2598:
									if (NULLP(BgL_lz00_2597))
										{	/* SawC/code.scm 188 */
											return BFALSE;
										}
									else
										{	/* SawC/code.scm 189 */
											obj_t BgL__ortest_1184z00_2600;

											{	/* SawC/code.scm 189 */
												obj_t BgL_arg1980z00_2602;

												BgL_arg1980z00_2602 = CAR(((obj_t) BgL_lz00_2597));
												BgL__ortest_1184z00_2600 =
													BGl_walkze70ze7zzsaw_c_codez00(BgL_arg1980z00_2602);
											}
											if (CBOOL(BgL__ortest_1184z00_2600))
												{	/* SawC/code.scm 189 */
													return BgL__ortest_1184z00_2600;
												}
											else
												{	/* SawC/code.scm 190 */
													obj_t BgL_arg1979z00_2601;

													BgL_arg1979z00_2601 = CDR(((obj_t) BgL_lz00_2597));
													{
														obj_t BgL_lz00_6027;

														BgL_lz00_6027 = BgL_arg1979z00_2601;
														BgL_lz00_2597 = BgL_lz00_6027;
														goto BgL_zc3z04anonymousza31978ze3z87_2598;
													}
												}
										}
								}
						}
					}
				else
					{	/* SawC/code.scm 192 */
						return BFALSE;
					}
			}
		}

	}



/* gen-ins */
	obj_t BGl_genzd2inszd2zzsaw_c_codez00(BgL_rtl_insz00_bglt BgL_insz00_61)
	{
		{	/* SawC/code.scm 205 */
			BGl_printzd2locationzf3z21zzsaw_c_codez00
				(BGl_findzd2locationzd2zzsaw_c_codez00(BgL_insz00_61));
			{	/* SawC/code.scm 208 */
				obj_t BgL_arg1986z00_2613;

				{	/* SawC/code.scm 208 */
					obj_t BgL_res2593z00_4126;

					{	/* SawC/code.scm 208 */
						obj_t BgL_tmpz00_6030;

						BgL_tmpz00_6030 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2593z00_4126 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6030);
					}
					BgL_arg1986z00_2613 = BgL_res2593z00_4126;
				}
				bgl_display_string(BGl_string2918z00zzsaw_c_codez00,
					BgL_arg1986z00_2613);
			}
			if (CBOOL((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_61))->BgL_destz00)))
				{	/* SawC/code.scm 209 */
					BGl_genzd2regzf2destz20zzsaw_c_codez00(
						(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_61))->BgL_destz00));
					{	/* SawC/code.scm 211 */
						obj_t BgL_arg1989z00_2616;

						{	/* SawC/code.scm 211 */
							obj_t BgL_res2594z00_4130;

							{	/* SawC/code.scm 211 */
								obj_t BgL_tmpz00_6039;

								BgL_tmpz00_6039 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2594z00_4130 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6039);
							}
							BgL_arg1989z00_2616 = BgL_res2594z00_4130;
						}
						bgl_display_string(BGl_string2919z00zzsaw_c_codez00,
							BgL_arg1989z00_2616);
					}
				}
			else
				{	/* SawC/code.scm 209 */
					BFALSE;
				}
			BGl_genzd2exprzd2zzsaw_c_codez00(
				(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_61))->BgL_funz00),
				(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_61))->BgL_argsz00));
			{	/* SawC/code.scm 213 */
				obj_t BgL_arg1992z00_2619;

				{	/* SawC/code.scm 213 */
					obj_t BgL_res2595z00_4134;

					{	/* SawC/code.scm 213 */
						obj_t BgL_tmpz00_6046;

						BgL_tmpz00_6046 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2595z00_4134 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6046);
					}
					BgL_arg1992z00_2619 = BgL_res2595z00_4134;
				}
				return
					bgl_display_string(BGl_string2911z00zzsaw_c_codez00,
					BgL_arg1992z00_2619);
			}
		}

	}



/* gen-args */
	bool_t BGl_genzd2argszd2zzsaw_c_codez00(obj_t BgL_argsz00_64)
	{
		{	/* SawC/code.scm 223 */
			if (NULLP(BgL_argsz00_64))
				{	/* SawC/code.scm 224 */
					return ((bool_t) 0);
				}
			else
				{	/* SawC/code.scm 224 */
					{	/* SawC/code.scm 225 */
						obj_t BgL_arg1995z00_2621;

						BgL_arg1995z00_2621 = CAR(((obj_t) BgL_argsz00_64));
						BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg1995z00_2621);
					}
					{	/* SawC/code.scm 226 */
						obj_t BgL_g1688z00_2622;

						BgL_g1688z00_2622 = CDR(((obj_t) BgL_argsz00_64));
						{
							obj_t BgL_l1686z00_2624;

							BgL_l1686z00_2624 = BgL_g1688z00_2622;
						BgL_zc3z04anonymousza31996ze3z87_2625:
							if (PAIRP(BgL_l1686z00_2624))
								{	/* SawC/code.scm 227 */
									{	/* SawC/code.scm 226 */
										obj_t BgL_rz00_2627;

										BgL_rz00_2627 = CAR(BgL_l1686z00_2624);
										{	/* SawC/code.scm 226 */
											obj_t BgL_arg1998z00_2628;

											{	/* SawC/code.scm 226 */
												obj_t BgL_res2598z00_4143;

												{	/* SawC/code.scm 226 */
													obj_t BgL_tmpz00_6060;

													BgL_tmpz00_6060 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2598z00_4143 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6060);
												}
												BgL_arg1998z00_2628 = BgL_res2598z00_4143;
											}
											bgl_display_string(BGl_string2907z00zzsaw_c_codez00,
												BgL_arg1998z00_2628);
										}
										BGl_genzd2regzd2zzsaw_c_codez00(BgL_rz00_2627);
									}
									{
										obj_t BgL_l1686z00_6065;

										BgL_l1686z00_6065 = CDR(BgL_l1686z00_2624);
										BgL_l1686z00_2624 = BgL_l1686z00_6065;
										goto BgL_zc3z04anonymousza31996ze3z87_2625;
									}
								}
							else
								{	/* SawC/code.scm 227 */
									return ((bool_t) 1);
								}
						}
					}
				}
		}

	}



/* gen-reg */
	obj_t BGl_genzd2regzd2zzsaw_c_codez00(obj_t BgL_regz00_65)
	{
		{	/* SawC/code.scm 229 */
			if (BGl_isazf3zf3zz__objectz00(BgL_regz00_65,
					BGl_SawCIregz00zzsaw_c_codez00))
				{	/* SawC/code.scm 230 */
					return BGl_genzd2regzf2destz20zzsaw_c_codez00(BgL_regz00_65);
				}
			else
				{	/* SawC/code.scm 232 */
					BgL_rtl_funz00_bglt BgL_arg2001z00_2632;
					obj_t BgL_arg2002z00_2633;

					BgL_arg2001z00_2632 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_regz00_65)))->BgL_funz00);
					BgL_arg2002z00_2633 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_regz00_65)))->BgL_argsz00);
					return
						BGl_genzd2exprzd2zzsaw_c_codez00(BgL_arg2001z00_2632,
						BgL_arg2002z00_2633);
				}
		}

	}



/* gen-reg/dest */
	obj_t BGl_genzd2regzf2destz20zzsaw_c_codez00(obj_t BgL_regz00_66)
	{
		{	/* SawC/code.scm 234 */
			{	/* SawC/code.scm 235 */
				obj_t BgL_arg2003z00_2634;
				obj_t BgL_arg2004z00_2635;

				if (CBOOL(
						(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_regz00_66))))->BgL_varz00)))
					{	/* SawC/code.scm 235 */
						BgL_arg2003z00_2634 = BGl_string2909z00zzsaw_c_codez00;
					}
				else
					{	/* SawC/code.scm 235 */
						BgL_arg2003z00_2634 = BGl_string2910z00zzsaw_c_codez00;
					}
				{	/* SawC/code.scm 235 */
					obj_t BgL_res2599z00_4151;

					{	/* SawC/code.scm 235 */
						obj_t BgL_tmpz00_6080;

						BgL_tmpz00_6080 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2599z00_4151 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6080);
					}
					BgL_arg2004z00_2635 = BgL_res2599z00_4151;
				}
				bgl_display_obj(BgL_arg2003z00_2634, BgL_arg2004z00_2635);
			}
			{	/* SawC/code.scm 236 */
				obj_t BgL_arg2007z00_2637;
				obj_t BgL_arg2008z00_2638;

				{
					BgL_sawciregz00_bglt BgL_auxz00_6084;

					{
						obj_t BgL_auxz00_6085;

						{	/* SawC/code.scm 236 */
							BgL_objectz00_bglt BgL_tmpz00_6086;

							BgL_tmpz00_6086 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_regz00_66));
							BgL_auxz00_6085 = BGL_OBJECT_WIDENING(BgL_tmpz00_6086);
						}
						BgL_auxz00_6084 = ((BgL_sawciregz00_bglt) BgL_auxz00_6085);
					}
					BgL_arg2007z00_2637 =
						(((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_6084))->BgL_indexz00);
				}
				{	/* SawC/code.scm 236 */
					obj_t BgL_res2600z00_4155;

					{	/* SawC/code.scm 236 */
						obj_t BgL_tmpz00_6092;

						BgL_tmpz00_6092 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2600z00_4155 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6092);
					}
					BgL_arg2008z00_2638 = BgL_res2600z00_4155;
				}
				return bgl_display_obj(BgL_arg2007z00_2637, BgL_arg2008z00_2638);
			}
		}

	}



/* gen-Xfuncall */
	obj_t BGl_genzd2Xfuncallzd2zzsaw_c_codez00(obj_t BgL_typez00_75,
		obj_t BgL_argsz00_76, bool_t BgL_eoazf3zf3_77)
	{
		{	/* SawC/code.scm 274 */
			{	/* SawC/code.scm 275 */
				obj_t BgL_list2009z00_2639;

				{	/* SawC/code.scm 275 */
					obj_t BgL_arg2010z00_2640;

					{	/* SawC/code.scm 275 */
						obj_t BgL_arg2011z00_2641;

						BgL_arg2011z00_2641 =
							MAKE_YOUNG_PAIR(BGl_string2920z00zzsaw_c_codez00, BNIL);
						BgL_arg2010z00_2640 =
							MAKE_YOUNG_PAIR(BgL_typez00_75, BgL_arg2011z00_2641);
					}
					BgL_list2009z00_2639 =
						MAKE_YOUNG_PAIR(BGl_string2921z00zzsaw_c_codez00,
						BgL_arg2010z00_2640);
				}
				BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2009z00_2639);
			}
			{	/* SawC/code.scm 276 */
				obj_t BgL_arg2012z00_2642;

				BgL_arg2012z00_2642 = CAR(((obj_t) BgL_argsz00_76));
				BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2012z00_2642);
			}
			{	/* SawC/code.scm 277 */
				obj_t BgL_arg2013z00_2643;

				{	/* SawC/code.scm 277 */
					obj_t BgL_res2601z00_4158;

					{	/* SawC/code.scm 277 */
						obj_t BgL_tmpz00_6103;

						BgL_tmpz00_6103 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2601z00_4158 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6103);
					}
					BgL_arg2013z00_2643 = BgL_res2601z00_4158;
				}
				bgl_display_string(BGl_string2922z00zzsaw_c_codez00,
					BgL_arg2013z00_2643);
			}
			BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_76);
			if (BgL_eoazf3zf3_77)
				{	/* SawC/code.scm 279 */
					obj_t BgL_arg2014z00_2644;

					{	/* SawC/code.scm 279 */
						obj_t BgL_res2602z00_4162;

						{	/* SawC/code.scm 279 */
							obj_t BgL_tmpz00_6109;

							BgL_tmpz00_6109 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2602z00_4162 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6109);
						}
						BgL_arg2014z00_2644 = BgL_res2602z00_4162;
					}
					bgl_display_string(BGl_string2923z00zzsaw_c_codez00,
						BgL_arg2014z00_2644);
				}
			else
				{	/* SawC/code.scm 279 */
					BFALSE;
				}
			{	/* SawC/code.scm 280 */
				obj_t BgL_arg2016z00_2645;

				{	/* SawC/code.scm 280 */
					obj_t BgL_res2603z00_4166;

					{	/* SawC/code.scm 280 */
						obj_t BgL_tmpz00_6113;

						BgL_tmpz00_6113 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2603z00_4166 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6113);
					}
					BgL_arg2016z00_2645 = BgL_res2603z00_4166;
				}
				return
					bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
					BgL_arg2016z00_2645);
			}
		}

	}



/* gen-upcase */
	obj_t BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_87)
	{
		{	/* SawC/code.scm 363 */
			{	/* SawC/code.scm 365 */
				obj_t BgL_arg2017z00_2646;

				{	/* SawC/code.scm 365 */
					obj_t BgL_arg2021z00_2649;

					{	/* SawC/code.scm 365 */
						obj_t BgL_arg2022z00_2650;

						{	/* SawC/code.scm 365 */
							obj_t BgL_arg2023z00_2651;

							{	/* SawC/code.scm 365 */
								long BgL_arg1816z00_4170;

								{	/* SawC/code.scm 365 */
									long BgL_arg1817z00_4171;

									{	/* SawC/code.scm 365 */
										long BgL_res2604z00_4173;

										BgL_res2604z00_4173 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt) BgL_funz00_87));
										BgL_arg1817z00_4171 = BgL_res2604z00_4173;
									}
									BgL_arg1816z00_4170 = (BgL_arg1817z00_4171 - OBJECT_TYPE);
								}
								BgL_arg2023z00_2651 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_4170);
							}
							BgL_arg2022z00_2650 =
								BGl_classzd2namezd2zz__objectz00(BgL_arg2023z00_2651);
						}
						{	/* SawC/code.scm 365 */
							obj_t BgL_res2606z00_4181;

							{	/* SawC/code.scm 365 */
								obj_t BgL_arg1466z00_4180;

								BgL_arg1466z00_4180 = SYMBOL_TO_STRING(BgL_arg2022z00_2650);
								BgL_res2606z00_4181 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_4180);
							}
							BgL_arg2021z00_2649 = BgL_res2606z00_4181;
					}}
					BgL_arg2017z00_2646 =
						BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg2021z00_2649);
				}
				{	/* SawC/code.scm 364 */
					obj_t BgL_list2018z00_2647;

					{	/* SawC/code.scm 364 */
						obj_t BgL_arg2020z00_2648;

						BgL_arg2020z00_2648 = MAKE_YOUNG_PAIR(BgL_arg2017z00_2646, BNIL);
						BgL_list2018z00_2647 =
							MAKE_YOUNG_PAIR(BGl_string2924z00zzsaw_c_codez00,
							BgL_arg2020z00_2648);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2018z00_2647);
				}
			}
		}

	}



/* vfun-name */
	obj_t BGl_vfunzd2namezd2zzsaw_c_codez00(obj_t BgL_fz00_88,
		BgL_typez00_bglt BgL_typez00_89)
	{
		{	/* SawC/code.scm 367 */
			{	/* SawC/code.scm 368 */
				obj_t BgL_arg2026z00_2652;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_89))->BgL_idz00),
							CNST_TABLE_REF(((long) 4)))))
					{	/* SawC/code.scm 368 */
						BgL_arg2026z00_2652 = BGl_string2925z00zzsaw_c_codez00;
					}
				else
					{	/* SawC/code.scm 368 */
						BgL_arg2026z00_2652 = BGl_string2912z00zzsaw_c_codez00;
					}
				{	/* SawC/code.scm 368 */
					obj_t BgL_list2027z00_2653;

					{	/* SawC/code.scm 368 */
						obj_t BgL_arg2028z00_2654;

						{	/* SawC/code.scm 368 */
							obj_t BgL_arg2029z00_2655;

							BgL_arg2029z00_2655 = MAKE_YOUNG_PAIR(BgL_fz00_88, BNIL);
							BgL_arg2028z00_2654 =
								MAKE_YOUNG_PAIR(BgL_arg2026z00_2652, BgL_arg2029z00_2655);
						}
						BgL_list2027z00_2653 =
							MAKE_YOUNG_PAIR(BGl_string2926z00zzsaw_c_codez00,
							BgL_arg2028z00_2654);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2027z00_2653);
				}
			}
		}

	}



/* vextra */
	obj_t BGl_vextraz00zzsaw_c_codez00(BgL_typez00_bglt BgL_typez00_108)
	{
		{	/* SawC/code.scm 423 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						(((BgL_typez00_bglt) COBJECT(BgL_typez00_108))->BgL_idz00),
						CNST_TABLE_REF(((long) 4)))))
				{	/* SawC/code.scm 425 */
					obj_t BgL_tnz00_2658;

					BgL_tnz00_2658 =
						(((BgL_typez00_bglt) COBJECT(BgL_typez00_108))->BgL_namez00);
					{	/* SawC/code.scm 426 */
						obj_t BgL_arg2033z00_2659;

						BgL_arg2033z00_2659 = bigloo_mangle(BgL_tnz00_2658);
						{	/* SawC/code.scm 426 */
							obj_t BgL_list2034z00_2660;

							{	/* SawC/code.scm 426 */
								obj_t BgL_arg2035z00_2661;

								{	/* SawC/code.scm 426 */
									obj_t BgL_arg2036z00_2662;

									{	/* SawC/code.scm 426 */
										obj_t BgL_arg2037z00_2663;

										BgL_arg2037z00_2663 =
											MAKE_YOUNG_PAIR(BGl_string2907z00zzsaw_c_codez00, BNIL);
										BgL_arg2036z00_2662 =
											MAKE_YOUNG_PAIR(BgL_tnz00_2658, BgL_arg2037z00_2663);
									}
									BgL_arg2035z00_2661 =
										MAKE_YOUNG_PAIR(BGl_string2907z00zzsaw_c_codez00,
										BgL_arg2036z00_2662);
								}
								BgL_list2034z00_2660 =
									MAKE_YOUNG_PAIR(BgL_arg2033z00_2659, BgL_arg2035z00_2661);
							}
							return
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2034z00_2660);
						}
					}
				}
			else
				{	/* SawC/code.scm 424 */
					return BFALSE;
				}
		}

	}



/* inl-op */
	obj_t BGl_inlzd2opzd2zzsaw_c_codez00(obj_t BgL_sz00_118)
	{
		{	/* SawC/code.scm 472 */
			{	/* SawC/code.scm 474 */
				bool_t BgL_test3271z00_6149;

				{	/* SawC/code.scm 474 */
					bool_t BgL_res2611z00_4211;

					{	/* SawC/code.scm 474 */
						long BgL_l1z00_4198;

						BgL_l1z00_4198 = STRING_LENGTH(((obj_t) BgL_sz00_118));
						if ((BgL_l1z00_4198 == ((long) 2)))
							{	/* SawC/code.scm 474 */
								int BgL_arg1267z00_4201;

								{	/* SawC/code.scm 474 */
									char *BgL_auxz00_6157;
									char *BgL_tmpz00_6154;

									BgL_auxz00_6157 =
										BSTRING_TO_STRING(BGl_string2927z00zzsaw_c_codez00);
									BgL_tmpz00_6154 = BSTRING_TO_STRING(((obj_t) BgL_sz00_118));
									BgL_arg1267z00_4201 =
										memcmp(BgL_tmpz00_6154, BgL_auxz00_6157, BgL_l1z00_4198);
								}
								BgL_res2611z00_4211 =
									((long) (BgL_arg1267z00_4201) == ((long) 0));
							}
						else
							{	/* SawC/code.scm 474 */
								BgL_res2611z00_4211 = ((bool_t) 0);
							}
					}
					BgL_test3271z00_6149 = BgL_res2611z00_4211;
				}
				if (BgL_test3271z00_6149)
					{	/* SawC/code.scm 474 */
						return BGl_string2928z00zzsaw_c_codez00;
					}
				else
					{	/* SawC/code.scm 475 */
						bool_t BgL_test3273z00_6162;

						{	/* SawC/code.scm 475 */
							bool_t BgL_res2616z00_4227;

							{	/* SawC/code.scm 475 */
								long BgL_l1z00_4214;

								BgL_l1z00_4214 = STRING_LENGTH(((obj_t) BgL_sz00_118));
								if ((BgL_l1z00_4214 == ((long) 2)))
									{	/* SawC/code.scm 475 */
										int BgL_arg1267z00_4217;

										{	/* SawC/code.scm 475 */
											char *BgL_auxz00_6170;
											char *BgL_tmpz00_6167;

											BgL_auxz00_6170 =
												BSTRING_TO_STRING(BGl_string2929z00zzsaw_c_codez00);
											BgL_tmpz00_6167 =
												BSTRING_TO_STRING(((obj_t) BgL_sz00_118));
											BgL_arg1267z00_4217 =
												memcmp(BgL_tmpz00_6167, BgL_auxz00_6170,
												BgL_l1z00_4214);
										}
										BgL_res2616z00_4227 =
											((long) (BgL_arg1267z00_4217) == ((long) 0));
									}
								else
									{	/* SawC/code.scm 475 */
										BgL_res2616z00_4227 = ((bool_t) 0);
									}
							}
							BgL_test3273z00_6162 = BgL_res2616z00_4227;
						}
						if (BgL_test3273z00_6162)
							{	/* SawC/code.scm 475 */
								return BGl_string2930z00zzsaw_c_codez00;
							}
						else
							{	/* SawC/code.scm 476 */
								bool_t BgL_test3275z00_6175;

								{	/* SawC/code.scm 476 */
									bool_t BgL_res2621z00_4243;

									{	/* SawC/code.scm 476 */
										long BgL_l1z00_4230;

										BgL_l1z00_4230 = STRING_LENGTH(((obj_t) BgL_sz00_118));
										if ((BgL_l1z00_4230 == ((long) 2)))
											{	/* SawC/code.scm 476 */
												int BgL_arg1267z00_4233;

												{	/* SawC/code.scm 476 */
													char *BgL_auxz00_6183;
													char *BgL_tmpz00_6180;

													BgL_auxz00_6183 =
														BSTRING_TO_STRING(BGl_string2931z00zzsaw_c_codez00);
													BgL_tmpz00_6180 =
														BSTRING_TO_STRING(((obj_t) BgL_sz00_118));
													BgL_arg1267z00_4233 =
														memcmp(BgL_tmpz00_6180, BgL_auxz00_6183,
														BgL_l1z00_4230);
												}
												BgL_res2621z00_4243 =
													((long) (BgL_arg1267z00_4233) == ((long) 0));
											}
										else
											{	/* SawC/code.scm 476 */
												BgL_res2621z00_4243 = ((bool_t) 0);
											}
									}
									BgL_test3275z00_6175 = BgL_res2621z00_4243;
								}
								if (BgL_test3275z00_6175)
									{	/* SawC/code.scm 476 */
										return BGl_string2932z00zzsaw_c_codez00;
									}
								else
									{	/* SawC/code.scm 477 */
										bool_t BgL_test3277z00_6188;

										{	/* SawC/code.scm 477 */
											bool_t BgL_res2626z00_4259;

											{	/* SawC/code.scm 477 */
												long BgL_l1z00_4246;

												BgL_l1z00_4246 = STRING_LENGTH(((obj_t) BgL_sz00_118));
												if ((BgL_l1z00_4246 == ((long) 1)))
													{	/* SawC/code.scm 477 */
														int BgL_arg1267z00_4249;

														{	/* SawC/code.scm 477 */
															char *BgL_auxz00_6196;
															char *BgL_tmpz00_6193;

															BgL_auxz00_6196 =
																BSTRING_TO_STRING
																(BGl_string2933z00zzsaw_c_codez00);
															BgL_tmpz00_6193 =
																BSTRING_TO_STRING(((obj_t) BgL_sz00_118));
															BgL_arg1267z00_4249 =
																memcmp(BgL_tmpz00_6193, BgL_auxz00_6196,
																BgL_l1z00_4246);
														}
														BgL_res2626z00_4259 =
															((long) (BgL_arg1267z00_4249) == ((long) 0));
													}
												else
													{	/* SawC/code.scm 477 */
														BgL_res2626z00_4259 = ((bool_t) 0);
													}
											}
											BgL_test3277z00_6188 = BgL_res2626z00_4259;
										}
										if (BgL_test3277z00_6188)
											{	/* SawC/code.scm 477 */
												return BGl_string2934z00zzsaw_c_codez00;
											}
										else
											{	/* SawC/code.scm 478 */
												bool_t BgL_test3279z00_6201;

												{	/* SawC/code.scm 478 */
													bool_t BgL_res2631z00_4275;

													{	/* SawC/code.scm 478 */
														long BgL_l1z00_4262;

														BgL_l1z00_4262 =
															STRING_LENGTH(((obj_t) BgL_sz00_118));
														if ((BgL_l1z00_4262 == ((long) 1)))
															{	/* SawC/code.scm 478 */
																int BgL_arg1267z00_4265;

																{	/* SawC/code.scm 478 */
																	char *BgL_auxz00_6209;
																	char *BgL_tmpz00_6206;

																	BgL_auxz00_6209 =
																		BSTRING_TO_STRING
																		(BGl_string2935z00zzsaw_c_codez00);
																	BgL_tmpz00_6206 =
																		BSTRING_TO_STRING(((obj_t) BgL_sz00_118));
																	BgL_arg1267z00_4265 =
																		memcmp(BgL_tmpz00_6206, BgL_auxz00_6209,
																		BgL_l1z00_4262);
																}
																BgL_res2631z00_4275 =
																	((long) (BgL_arg1267z00_4265) == ((long) 0));
															}
														else
															{	/* SawC/code.scm 478 */
																BgL_res2631z00_4275 = ((bool_t) 0);
															}
													}
													BgL_test3279z00_6201 = BgL_res2631z00_4275;
												}
												if (BgL_test3279z00_6201)
													{	/* SawC/code.scm 478 */
														return BGl_string2936z00zzsaw_c_codez00;
													}
												else
													{	/* SawC/code.scm 479 */
														bool_t BgL_test3281z00_6214;

														{	/* SawC/code.scm 479 */
															bool_t BgL_res2636z00_4291;

															{	/* SawC/code.scm 479 */
																long BgL_l1z00_4278;

																BgL_l1z00_4278 =
																	STRING_LENGTH(((obj_t) BgL_sz00_118));
																if ((BgL_l1z00_4278 == ((long) 1)))
																	{	/* SawC/code.scm 479 */
																		int BgL_arg1267z00_4281;

																		{	/* SawC/code.scm 479 */
																			char *BgL_auxz00_6222;
																			char *BgL_tmpz00_6219;

																			BgL_auxz00_6222 =
																				BSTRING_TO_STRING
																				(BGl_string2937z00zzsaw_c_codez00);
																			BgL_tmpz00_6219 =
																				BSTRING_TO_STRING(((obj_t)
																					BgL_sz00_118));
																			BgL_arg1267z00_4281 =
																				memcmp(BgL_tmpz00_6219, BgL_auxz00_6222,
																				BgL_l1z00_4278);
																		}
																		BgL_res2636z00_4291 =
																			(
																			(long) (BgL_arg1267z00_4281) ==
																			((long) 0));
																	}
																else
																	{	/* SawC/code.scm 479 */
																		BgL_res2636z00_4291 = ((bool_t) 0);
																	}
															}
															BgL_test3281z00_6214 = BgL_res2636z00_4291;
														}
														if (BgL_test3281z00_6214)
															{	/* SawC/code.scm 479 */
																return BGl_string2938z00zzsaw_c_codez00;
															}
														else
															{	/* SawC/code.scm 480 */
																bool_t BgL_test3283z00_6227;

																{	/* SawC/code.scm 480 */
																	bool_t BgL_res2641z00_4307;

																	{	/* SawC/code.scm 480 */
																		long BgL_l1z00_4294;

																		BgL_l1z00_4294 =
																			STRING_LENGTH(((obj_t) BgL_sz00_118));
																		if ((BgL_l1z00_4294 == ((long) 1)))
																			{	/* SawC/code.scm 480 */
																				int BgL_arg1267z00_4297;

																				{	/* SawC/code.scm 480 */
																					char *BgL_auxz00_6235;
																					char *BgL_tmpz00_6232;

																					BgL_auxz00_6235 =
																						BSTRING_TO_STRING
																						(BGl_string2939z00zzsaw_c_codez00);
																					BgL_tmpz00_6232 =
																						BSTRING_TO_STRING(((obj_t)
																							BgL_sz00_118));
																					BgL_arg1267z00_4297 =
																						memcmp(BgL_tmpz00_6232,
																						BgL_auxz00_6235, BgL_l1z00_4294);
																				}
																				BgL_res2641z00_4307 =
																					(
																					(long) (BgL_arg1267z00_4297) ==
																					((long) 0));
																			}
																		else
																			{	/* SawC/code.scm 480 */
																				BgL_res2641z00_4307 = ((bool_t) 0);
																			}
																	}
																	BgL_test3283z00_6227 = BgL_res2641z00_4307;
																}
																if (BgL_test3283z00_6227)
																	{	/* SawC/code.scm 480 */
																		return BGl_string2940z00zzsaw_c_codez00;
																	}
																else
																	{	/* SawC/code.scm 481 */
																		bool_t BgL_test3285z00_6240;

																		{	/* SawC/code.scm 481 */
																			bool_t BgL_res2646z00_4323;

																			{	/* SawC/code.scm 481 */
																				long BgL_l1z00_4310;

																				BgL_l1z00_4310 =
																					STRING_LENGTH(((obj_t) BgL_sz00_118));
																				if ((BgL_l1z00_4310 == ((long) 1)))
																					{	/* SawC/code.scm 481 */
																						int BgL_arg1267z00_4313;

																						{	/* SawC/code.scm 481 */
																							char *BgL_auxz00_6248;
																							char *BgL_tmpz00_6245;

																							BgL_auxz00_6248 =
																								BSTRING_TO_STRING
																								(BGl_string2941z00zzsaw_c_codez00);
																							BgL_tmpz00_6245 =
																								BSTRING_TO_STRING(((obj_t)
																									BgL_sz00_118));
																							BgL_arg1267z00_4313 =
																								memcmp(BgL_tmpz00_6245,
																								BgL_auxz00_6248,
																								BgL_l1z00_4310);
																						}
																						BgL_res2646z00_4323 =
																							(
																							(long) (BgL_arg1267z00_4313) ==
																							((long) 0));
																					}
																				else
																					{	/* SawC/code.scm 481 */
																						BgL_res2646z00_4323 = ((bool_t) 0);
																					}
																			}
																			BgL_test3285z00_6240 =
																				BgL_res2646z00_4323;
																		}
																		if (BgL_test3285z00_6240)
																			{	/* SawC/code.scm 481 */
																				return BGl_string2942z00zzsaw_c_codez00;
																			}
																		else
																			{	/* SawC/code.scm 482 */
																				bool_t BgL_test3287z00_6253;

																				{	/* SawC/code.scm 482 */
																					bool_t BgL_res2651z00_4339;

																					{	/* SawC/code.scm 482 */
																						long BgL_l1z00_4326;

																						BgL_l1z00_4326 =
																							STRING_LENGTH(
																							((obj_t) BgL_sz00_118));
																						if ((BgL_l1z00_4326 == ((long) 1)))
																							{	/* SawC/code.scm 482 */
																								int BgL_arg1267z00_4329;

																								{	/* SawC/code.scm 482 */
																									char *BgL_auxz00_6261;
																									char *BgL_tmpz00_6258;

																									BgL_auxz00_6261 =
																										BSTRING_TO_STRING
																										(BGl_string2943z00zzsaw_c_codez00);
																									BgL_tmpz00_6258 =
																										BSTRING_TO_STRING(((obj_t)
																											BgL_sz00_118));
																									BgL_arg1267z00_4329 =
																										memcmp(BgL_tmpz00_6258,
																										BgL_auxz00_6261,
																										BgL_l1z00_4326);
																								}
																								BgL_res2651z00_4339 =
																									(
																									(long) (BgL_arg1267z00_4329)
																									== ((long) 0));
																							}
																						else
																							{	/* SawC/code.scm 482 */
																								BgL_res2651z00_4339 =
																									((bool_t) 0);
																							}
																					}
																					BgL_test3287z00_6253 =
																						BgL_res2651z00_4339;
																				}
																				if (BgL_test3287z00_6253)
																					{	/* SawC/code.scm 482 */
																						return
																							BGl_string2944z00zzsaw_c_codez00;
																					}
																				else
																					{	/* SawC/code.scm 483 */
																						bool_t BgL_test3289z00_6266;

																						{	/* SawC/code.scm 483 */
																							bool_t BgL_res2656z00_4355;

																							{	/* SawC/code.scm 483 */
																								long BgL_l1z00_4342;

																								BgL_l1z00_4342 =
																									STRING_LENGTH(
																									((obj_t) BgL_sz00_118));
																								if (
																									(BgL_l1z00_4342 ==
																										((long) 1)))
																									{	/* SawC/code.scm 483 */
																										int BgL_arg1267z00_4345;

																										{	/* SawC/code.scm 483 */
																											char *BgL_auxz00_6274;
																											char *BgL_tmpz00_6271;

																											BgL_auxz00_6274 =
																												BSTRING_TO_STRING
																												(BGl_string2945z00zzsaw_c_codez00);
																											BgL_tmpz00_6271 =
																												BSTRING_TO_STRING((
																													(obj_t)
																													BgL_sz00_118));
																											BgL_arg1267z00_4345 =
																												memcmp(BgL_tmpz00_6271,
																												BgL_auxz00_6274,
																												BgL_l1z00_4342);
																										}
																										BgL_res2656z00_4355 =
																											(
																											(long)
																											(BgL_arg1267z00_4345) ==
																											((long) 0));
																									}
																								else
																									{	/* SawC/code.scm 483 */
																										BgL_res2656z00_4355 =
																											((bool_t) 0);
																									}
																							}
																							BgL_test3289z00_6266 =
																								BgL_res2656z00_4355;
																						}
																						if (BgL_test3289z00_6266)
																							{	/* SawC/code.scm 483 */
																								return
																									BGl_string2946z00zzsaw_c_codez00;
																							}
																						else
																							{	/* SawC/code.scm 484 */
																								bool_t BgL_test3291z00_6279;

																								{	/* SawC/code.scm 484 */
																									bool_t BgL_res2661z00_4371;

																									{	/* SawC/code.scm 484 */
																										long BgL_l1z00_4358;

																										BgL_l1z00_4358 =
																											STRING_LENGTH(
																											((obj_t) BgL_sz00_118));
																										if (
																											(BgL_l1z00_4358 ==
																												((long) 1)))
																											{	/* SawC/code.scm 484 */
																												int BgL_arg1267z00_4361;

																												{	/* SawC/code.scm 484 */
																													char *BgL_auxz00_6287;
																													char *BgL_tmpz00_6284;

																													BgL_auxz00_6287 =
																														BSTRING_TO_STRING
																														(BGl_string2947z00zzsaw_c_codez00);
																													BgL_tmpz00_6284 =
																														BSTRING_TO_STRING((
																															(obj_t)
																															BgL_sz00_118));
																													BgL_arg1267z00_4361 =
																														memcmp
																														(BgL_tmpz00_6284,
																														BgL_auxz00_6287,
																														BgL_l1z00_4358);
																												}
																												BgL_res2661z00_4371 =
																													(
																													(long)
																													(BgL_arg1267z00_4361)
																													== ((long) 0));
																											}
																										else
																											{	/* SawC/code.scm 484 */
																												BgL_res2661z00_4371 =
																													((bool_t) 0);
																											}
																									}
																									BgL_test3291z00_6279 =
																										BgL_res2661z00_4371;
																								}
																								if (BgL_test3291z00_6279)
																									{	/* SawC/code.scm 484 */
																										return
																											BGl_string2948z00zzsaw_c_codez00;
																									}
																								else
																									{	/* SawC/code.scm 485 */
																										bool_t BgL_test3293z00_6292;

																										{	/* SawC/code.scm 485 */
																											bool_t
																												BgL_res2666z00_4387;
																											{	/* SawC/code.scm 485 */
																												long BgL_l1z00_4374;

																												BgL_l1z00_4374 =
																													STRING_LENGTH(
																													((obj_t)
																														BgL_sz00_118));
																												if ((BgL_l1z00_4374 ==
																														((long) 1)))
																													{	/* SawC/code.scm 485 */
																														int
																															BgL_arg1267z00_4377;
																														{	/* SawC/code.scm 485 */
																															char
																																*BgL_auxz00_6300;
																															char
																																*BgL_tmpz00_6297;
																															BgL_auxz00_6300 =
																																BSTRING_TO_STRING
																																(BGl_string2949z00zzsaw_c_codez00);
																															BgL_tmpz00_6297 =
																																BSTRING_TO_STRING
																																(((obj_t)
																																	BgL_sz00_118));
																															BgL_arg1267z00_4377
																																=
																																memcmp
																																(BgL_tmpz00_6297,
																																BgL_auxz00_6300,
																																BgL_l1z00_4374);
																														}
																														BgL_res2666z00_4387
																															=
																															((long)
																															(BgL_arg1267z00_4377)
																															== ((long) 0));
																													}
																												else
																													{	/* SawC/code.scm 485 */
																														BgL_res2666z00_4387
																															= ((bool_t) 0);
																													}
																											}
																											BgL_test3293z00_6292 =
																												BgL_res2666z00_4387;
																										}
																										if (BgL_test3293z00_6292)
																											{	/* SawC/code.scm 485 */
																												return
																													BGl_string2950z00zzsaw_c_codez00;
																											}
																										else
																											{	/* SawC/code.scm 486 */
																												bool_t
																													BgL_test3295z00_6305;
																												{	/* SawC/code.scm 486 */
																													bool_t
																														BgL_res2671z00_4403;
																													{	/* SawC/code.scm 486 */
																														long BgL_l1z00_4390;

																														BgL_l1z00_4390 =
																															STRING_LENGTH(
																															((obj_t)
																																BgL_sz00_118));
																														if ((BgL_l1z00_4390
																																== ((long) 3)))
																															{	/* SawC/code.scm 486 */
																																int
																																	BgL_arg1267z00_4393;
																																{	/* SawC/code.scm 486 */
																																	char
																																		*BgL_auxz00_6313;
																																	char
																																		*BgL_tmpz00_6310;
																																	BgL_auxz00_6313
																																		=
																																		BSTRING_TO_STRING
																																		(BGl_string2951z00zzsaw_c_codez00);
																																	BgL_tmpz00_6310
																																		=
																																		BSTRING_TO_STRING
																																		(((obj_t)
																																			BgL_sz00_118));
																																	BgL_arg1267z00_4393
																																		=
																																		memcmp
																																		(BgL_tmpz00_6310,
																																		BgL_auxz00_6313,
																																		BgL_l1z00_4390);
																																}
																																BgL_res2671z00_4403
																																	=
																																	((long)
																																	(BgL_arg1267z00_4393)
																																	==
																																	((long) 0));
																															}
																														else
																															{	/* SawC/code.scm 486 */
																																BgL_res2671z00_4403
																																	=
																																	((bool_t) 0);
																															}
																													}
																													BgL_test3295z00_6305 =
																														BgL_res2671z00_4403;
																												}
																												if (BgL_test3295z00_6305)
																													{	/* SawC/code.scm 486 */
																														return
																															BGl_string2938z00zzsaw_c_codez00;
																													}
																												else
																													{	/* SawC/code.scm 487 */
																														bool_t
																															BgL_test3297z00_6318;
																														{	/* SawC/code.scm 487 */
																															bool_t
																																BgL_res2676z00_4419;
																															{	/* SawC/code.scm 487 */
																																long
																																	BgL_l1z00_4406;
																																BgL_l1z00_4406 =
																																	STRING_LENGTH(
																																	((obj_t)
																																		BgL_sz00_118));
																																if (
																																	(BgL_l1z00_4406
																																		==
																																		((long) 3)))
																																	{	/* SawC/code.scm 487 */
																																		int
																																			BgL_arg1267z00_4409;
																																		{	/* SawC/code.scm 487 */
																																			char
																																				*BgL_auxz00_6326;
																																			char
																																				*BgL_tmpz00_6323;
																																			BgL_auxz00_6326
																																				=
																																				BSTRING_TO_STRING
																																				(BGl_string2952z00zzsaw_c_codez00);
																																			BgL_tmpz00_6323
																																				=
																																				BSTRING_TO_STRING
																																				(((obj_t) BgL_sz00_118));
																																			BgL_arg1267z00_4409
																																				=
																																				memcmp
																																				(BgL_tmpz00_6323,
																																				BgL_auxz00_6326,
																																				BgL_l1z00_4406);
																																		}
																																		BgL_res2676z00_4419
																																			=
																																			((long)
																																			(BgL_arg1267z00_4409)
																																			==
																																			((long)
																																				0));
																																	}
																																else
																																	{	/* SawC/code.scm 487 */
																																		BgL_res2676z00_4419
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															BgL_test3297z00_6318
																																=
																																BgL_res2676z00_4419;
																														}
																														if (BgL_test3297z00_6318)
																															{	/* SawC/code.scm 487 */
																																return
																																	BGl_string2940z00zzsaw_c_codez00;
																															}
																														else
																															{	/* SawC/code.scm 488 */
																																bool_t
																																	BgL_test3299z00_6331;
																																{	/* SawC/code.scm 488 */
																																	bool_t
																																		BgL_res2681z00_4435;
																																	{	/* SawC/code.scm 488 */
																																		long
																																			BgL_l1z00_4422;
																																		BgL_l1z00_4422
																																			=
																																			STRING_LENGTH
																																			(((obj_t)
																																				BgL_sz00_118));
																																		if (
																																			(BgL_l1z00_4422
																																				==
																																				((long)
																																					3)))
																																			{	/* SawC/code.scm 488 */
																																				int
																																					BgL_arg1267z00_4425;
																																				{	/* SawC/code.scm 488 */
																																					char
																																						*BgL_auxz00_6339;
																																					char
																																						*BgL_tmpz00_6336;
																																					BgL_auxz00_6339
																																						=
																																						BSTRING_TO_STRING
																																						(BGl_string2953z00zzsaw_c_codez00);
																																					BgL_tmpz00_6336
																																						=
																																						BSTRING_TO_STRING
																																						(((obj_t) BgL_sz00_118));
																																					BgL_arg1267z00_4425
																																						=
																																						memcmp
																																						(BgL_tmpz00_6336,
																																						BgL_auxz00_6339,
																																						BgL_l1z00_4422);
																																				}
																																				BgL_res2681z00_4435
																																					=
																																					(
																																					(long)
																																					(BgL_arg1267z00_4425)
																																					==
																																					((long) 0));
																																			}
																																		else
																																			{	/* SawC/code.scm 488 */
																																				BgL_res2681z00_4435
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																	BgL_test3299z00_6331
																																		=
																																		BgL_res2681z00_4435;
																																}
																																if (BgL_test3299z00_6331)
																																	{	/* SawC/code.scm 488 */
																																		return
																																			BGl_string2954z00zzsaw_c_codez00;
																																	}
																																else
																																	{	/* SawC/code.scm 489 */
																																		bool_t
																																			BgL_test3301z00_6344;
																																		{	/* SawC/code.scm 489 */
																																			bool_t
																																				BgL_res2686z00_4451;
																																			{	/* SawC/code.scm 489 */
																																				long
																																					BgL_l1z00_4438;
																																				BgL_l1z00_4438
																																					=
																																					STRING_LENGTH
																																					(((obj_t) BgL_sz00_118));
																																				if (
																																					(BgL_l1z00_4438
																																						==
																																						((long) 4)))
																																					{	/* SawC/code.scm 489 */
																																						int
																																							BgL_arg1267z00_4441;
																																						{	/* SawC/code.scm 489 */
																																							char
																																								*BgL_auxz00_6352;
																																							char
																																								*BgL_tmpz00_6349;
																																							BgL_auxz00_6352
																																								=
																																								BSTRING_TO_STRING
																																								(BGl_string2955z00zzsaw_c_codez00);
																																							BgL_tmpz00_6349
																																								=
																																								BSTRING_TO_STRING
																																								(
																																								((obj_t) BgL_sz00_118));
																																							BgL_arg1267z00_4441
																																								=
																																								memcmp
																																								(BgL_tmpz00_6349,
																																								BgL_auxz00_6352,
																																								BgL_l1z00_4438);
																																						}
																																						BgL_res2686z00_4451
																																							=
																																							(
																																							(long)
																																							(BgL_arg1267z00_4441)
																																							==
																																							((long) 0));
																																					}
																																				else
																																					{	/* SawC/code.scm 489 */
																																						BgL_res2686z00_4451
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			BgL_test3301z00_6344
																																				=
																																				BgL_res2686z00_4451;
																																		}
																																		if (BgL_test3301z00_6344)
																																			{	/* SawC/code.scm 489 */
																																				return
																																					BGl_string2956z00zzsaw_c_codez00;
																																			}
																																		else
																																			{	/* SawC/code.scm 490 */
																																				bool_t
																																					BgL_test3303z00_6357;
																																				{	/* SawC/code.scm 490 */
																																					bool_t
																																						BgL_res2691z00_4467;
																																					{	/* SawC/code.scm 490 */
																																						long
																																							BgL_l1z00_4454;
																																						BgL_l1z00_4454
																																							=
																																							STRING_LENGTH
																																							(((obj_t) BgL_sz00_118));
																																						if (
																																							(BgL_l1z00_4454
																																								==
																																								((long) 4)))
																																							{	/* SawC/code.scm 490 */
																																								int
																																									BgL_arg1267z00_4457;
																																								{	/* SawC/code.scm 490 */
																																									char
																																										*BgL_auxz00_6365;
																																									char
																																										*BgL_tmpz00_6362;
																																									BgL_auxz00_6365
																																										=
																																										BSTRING_TO_STRING
																																										(BGl_string2957z00zzsaw_c_codez00);
																																									BgL_tmpz00_6362
																																										=
																																										BSTRING_TO_STRING
																																										(
																																										((obj_t) BgL_sz00_118));
																																									BgL_arg1267z00_4457
																																										=
																																										memcmp
																																										(BgL_tmpz00_6362,
																																										BgL_auxz00_6365,
																																										BgL_l1z00_4454);
																																								}
																																								BgL_res2691z00_4467
																																									=
																																									(
																																									(long)
																																									(BgL_arg1267z00_4457)
																																									==
																																									((long) 0));
																																							}
																																						else
																																							{	/* SawC/code.scm 490 */
																																								BgL_res2691z00_4467
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																					BgL_test3303z00_6357
																																						=
																																						BgL_res2691z00_4467;
																																				}
																																				if (BgL_test3303z00_6357)
																																					{	/* SawC/code.scm 490 */
																																						return
																																							BGl_string2958z00zzsaw_c_codez00;
																																					}
																																				else
																																					{	/* SawC/code.scm 491 */
																																						bool_t
																																							BgL_test3305z00_6370;
																																						{	/* SawC/code.scm 491 */
																																							bool_t
																																								BgL_res2696z00_4483;
																																							{	/* SawC/code.scm 491 */
																																								long
																																									BgL_l1z00_4470;
																																								BgL_l1z00_4470
																																									=
																																									STRING_LENGTH
																																									(
																																									((obj_t) BgL_sz00_118));
																																								if ((BgL_l1z00_4470 == ((long) 9)))
																																									{	/* SawC/code.scm 491 */
																																										int
																																											BgL_arg1267z00_4473;
																																										{	/* SawC/code.scm 491 */
																																											char
																																												*BgL_auxz00_6378;
																																											char
																																												*BgL_tmpz00_6375;
																																											BgL_auxz00_6378
																																												=
																																												BSTRING_TO_STRING
																																												(BGl_string2959z00zzsaw_c_codez00);
																																											BgL_tmpz00_6375
																																												=
																																												BSTRING_TO_STRING
																																												(
																																												((obj_t) BgL_sz00_118));
																																											BgL_arg1267z00_4473
																																												=
																																												memcmp
																																												(BgL_tmpz00_6375,
																																												BgL_auxz00_6378,
																																												BgL_l1z00_4470);
																																										}
																																										BgL_res2696z00_4483
																																											=
																																											(
																																											(long)
																																											(BgL_arg1267z00_4473)
																																											==
																																											((long) 0));
																																									}
																																								else
																																									{	/* SawC/code.scm 491 */
																																										BgL_res2696z00_4483
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							BgL_test3305z00_6370
																																								=
																																								BgL_res2696z00_4483;
																																						}
																																						if (BgL_test3305z00_6370)
																																							{	/* SawC/code.scm 491 */
																																								return
																																									BGl_string2960z00zzsaw_c_codez00;
																																							}
																																						else
																																							{	/* SawC/code.scm 492 */
																																								bool_t
																																									BgL_test3307z00_6383;
																																								{	/* SawC/code.scm 492 */
																																									bool_t
																																										BgL_res2701z00_4499;
																																									{	/* SawC/code.scm 492 */
																																										long
																																											BgL_l1z00_4486;
																																										BgL_l1z00_4486
																																											=
																																											STRING_LENGTH
																																											(
																																											((obj_t) BgL_sz00_118));
																																										if ((BgL_l1z00_4486 == ((long) 11)))
																																											{	/* SawC/code.scm 492 */
																																												int
																																													BgL_arg1267z00_4489;
																																												{	/* SawC/code.scm 492 */
																																													char
																																														*BgL_auxz00_6391;
																																													char
																																														*BgL_tmpz00_6388;
																																													BgL_auxz00_6391
																																														=
																																														BSTRING_TO_STRING
																																														(BGl_string2961z00zzsaw_c_codez00);
																																													BgL_tmpz00_6388
																																														=
																																														BSTRING_TO_STRING
																																														(
																																														((obj_t) BgL_sz00_118));
																																													BgL_arg1267z00_4489
																																														=
																																														memcmp
																																														(BgL_tmpz00_6388,
																																														BgL_auxz00_6391,
																																														BgL_l1z00_4486);
																																												}
																																												BgL_res2701z00_4499
																																													=
																																													(
																																													(long)
																																													(BgL_arg1267z00_4489)
																																													==
																																													((long) 0));
																																											}
																																										else
																																											{	/* SawC/code.scm 492 */
																																												BgL_res2701z00_4499
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																									BgL_test3307z00_6383
																																										=
																																										BgL_res2701z00_4499;
																																								}
																																								if (BgL_test3307z00_6383)
																																									{	/* SawC/code.scm 492 */
																																										return
																																											BGl_string2962z00zzsaw_c_codez00;
																																									}
																																								else
																																									{	/* SawC/code.scm 493 */
																																										bool_t
																																											BgL_test3309z00_6396;
																																										{	/* SawC/code.scm 493 */
																																											bool_t
																																												BgL_res2706z00_4515;
																																											{	/* SawC/code.scm 493 */
																																												long
																																													BgL_l1z00_4502;
																																												BgL_l1z00_4502
																																													=
																																													STRING_LENGTH
																																													(
																																													((obj_t) BgL_sz00_118));
																																												if ((BgL_l1z00_4502 == ((long) 10)))
																																													{	/* SawC/code.scm 493 */
																																														int
																																															BgL_arg1267z00_4505;
																																														{	/* SawC/code.scm 493 */
																																															char
																																																*BgL_auxz00_6404;
																																															char
																																																*BgL_tmpz00_6401;
																																															BgL_auxz00_6404
																																																=
																																																BSTRING_TO_STRING
																																																(BGl_string2963z00zzsaw_c_codez00);
																																															BgL_tmpz00_6401
																																																=
																																																BSTRING_TO_STRING
																																																(
																																																((obj_t) BgL_sz00_118));
																																															BgL_arg1267z00_4505
																																																=
																																																memcmp
																																																(BgL_tmpz00_6401,
																																																BgL_auxz00_6404,
																																																BgL_l1z00_4502);
																																														}
																																														BgL_res2706z00_4515
																																															=
																																															(
																																															(long)
																																															(BgL_arg1267z00_4505)
																																															==
																																															((long) 0));
																																													}
																																												else
																																													{	/* SawC/code.scm 493 */
																																														BgL_res2706z00_4515
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																											BgL_test3309z00_6396
																																												=
																																												BgL_res2706z00_4515;
																																										}
																																										if (BgL_test3309z00_6396)
																																											{	/* SawC/code.scm 493 */
																																												BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00
																																													=
																																													(
																																													((long) 1) + BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00);
																																												return
																																													BGl_string2964z00zzsaw_c_codez00;
																																											}
																																										else
																																											{	/* SawC/code.scm 496 */
																																												bool_t
																																													BgL_test3311z00_6410;
																																												{	/* SawC/code.scm 496 */
																																													bool_t
																																														BgL_res2712z00_4533;
																																													{	/* SawC/code.scm 496 */
																																														long
																																															BgL_l1z00_4520;
																																														BgL_l1z00_4520
																																															=
																																															STRING_LENGTH
																																															(
																																															((obj_t) BgL_sz00_118));
																																														if ((BgL_l1z00_4520 == ((long) 18)))
																																															{	/* SawC/code.scm 496 */
																																																int
																																																	BgL_arg1267z00_4523;
																																																{	/* SawC/code.scm 496 */
																																																	char
																																																		*BgL_auxz00_6418;
																																																	char
																																																		*BgL_tmpz00_6415;
																																																	BgL_auxz00_6418
																																																		=
																																																		BSTRING_TO_STRING
																																																		(BGl_string2965z00zzsaw_c_codez00);
																																																	BgL_tmpz00_6415
																																																		=
																																																		BSTRING_TO_STRING
																																																		(
																																																		((obj_t) BgL_sz00_118));
																																																	BgL_arg1267z00_4523
																																																		=
																																																		memcmp
																																																		(BgL_tmpz00_6415,
																																																		BgL_auxz00_6418,
																																																		BgL_l1z00_4520);
																																																}
																																																BgL_res2712z00_4533
																																																	=
																																																	(
																																																	(long)
																																																	(BgL_arg1267z00_4523)
																																																	==
																																																	((long) 0));
																																															}
																																														else
																																															{	/* SawC/code.scm 496 */
																																																BgL_res2712z00_4533
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																													}
																																													BgL_test3311z00_6410
																																														=
																																														BgL_res2712z00_4533;
																																												}
																																												if (BgL_test3311z00_6410)
																																													{	/* SawC/code.scm 496 */
																																														BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00
																																															=
																																															(
																																															((long) 1) + BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00);
																																														return
																																															BGl_string2966z00zzsaw_c_codez00;
																																													}
																																												else
																																													{	/* SawC/code.scm 499 */
																																														bool_t
																																															BgL_test3313z00_6424;
																																														{	/* SawC/code.scm 499 */
																																															bool_t
																																																BgL_res2718z00_4551;
																																															{	/* SawC/code.scm 499 */
																																																long
																																																	BgL_l1z00_4538;
																																																BgL_l1z00_4538
																																																	=
																																																	STRING_LENGTH
																																																	(
																																																	((obj_t) BgL_sz00_118));
																																																if ((BgL_l1z00_4538 == ((long) 11)))
																																																	{	/* SawC/code.scm 499 */
																																																		int
																																																			BgL_arg1267z00_4541;
																																																		{	/* SawC/code.scm 499 */
																																																			char
																																																				*BgL_auxz00_6432;
																																																			char
																																																				*BgL_tmpz00_6429;
																																																			BgL_auxz00_6432
																																																				=
																																																				BSTRING_TO_STRING
																																																				(BGl_string2967z00zzsaw_c_codez00);
																																																			BgL_tmpz00_6429
																																																				=
																																																				BSTRING_TO_STRING
																																																				(
																																																				((obj_t) BgL_sz00_118));
																																																			BgL_arg1267z00_4541
																																																				=
																																																				memcmp
																																																				(BgL_tmpz00_6429,
																																																				BgL_auxz00_6432,
																																																				BgL_l1z00_4538);
																																																		}
																																																		BgL_res2718z00_4551
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_arg1267z00_4541)
																																																			==
																																																			((long) 0));
																																																	}
																																																else
																																																	{	/* SawC/code.scm 499 */
																																																		BgL_res2718z00_4551
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																															}
																																															BgL_test3313z00_6424
																																																=
																																																BgL_res2718z00_4551;
																																														}
																																														if (BgL_test3313z00_6424)
																																															{	/* SawC/code.scm 499 */
																																																return
																																																	BgL_sz00_118;
																																															}
																																														else
																																															{	/* SawC/code.scm 502 */
																																																bool_t
																																																	BgL_test3315z00_6437;
																																																{	/* SawC/code.scm 502 */
																																																	bool_t
																																																		BgL_res2723z00_4567;
																																																	{	/* SawC/code.scm 502 */
																																																		long
																																																			BgL_l1z00_4554;
																																																		BgL_l1z00_4554
																																																			=
																																																			STRING_LENGTH
																																																			(
																																																			((obj_t) BgL_sz00_118));
																																																		if ((BgL_l1z00_4554 == ((long) 10)))
																																																			{	/* SawC/code.scm 502 */
																																																				int
																																																					BgL_arg1267z00_4557;
																																																				{	/* SawC/code.scm 502 */
																																																					char
																																																						*BgL_auxz00_6445;
																																																					char
																																																						*BgL_tmpz00_6442;
																																																					BgL_auxz00_6445
																																																						=
																																																						BSTRING_TO_STRING
																																																						(BGl_string2968z00zzsaw_c_codez00);
																																																					BgL_tmpz00_6442
																																																						=
																																																						BSTRING_TO_STRING
																																																						(
																																																						((obj_t) BgL_sz00_118));
																																																					BgL_arg1267z00_4557
																																																						=
																																																						memcmp
																																																						(BgL_tmpz00_6442,
																																																						BgL_auxz00_6445,
																																																						BgL_l1z00_4554);
																																																				}
																																																				BgL_res2723z00_4567
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_arg1267z00_4557)
																																																					==
																																																					((long) 0));
																																																			}
																																																		else
																																																			{	/* SawC/code.scm 502 */
																																																				BgL_res2723z00_4567
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																	}
																																																	BgL_test3315z00_6437
																																																		=
																																																		BgL_res2723z00_4567;
																																																}
																																																if (BgL_test3315z00_6437)
																																																	{	/* SawC/code.scm 502 */
																																																		return
																																																			BGl_string2969z00zzsaw_c_codez00;
																																																	}
																																																else
																																																	{	/* SawC/code.scm 502 */
																																																		return
																																																			BgL_sz00_118;
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



/* deep-mov? */
	bool_t BGl_deepzd2movzf3z21zzsaw_c_codez00(obj_t BgL_insz00_122)
	{
		{	/* SawC/code.scm 512 */
		BGl_deepzd2movzf3z21zzsaw_c_codez00:
			{	/* SawC/code.scm 513 */
				bool_t BgL__ortest_1191z00_2692;

				BgL__ortest_1191z00_2692 =
					BGl_isazf3zf3zz__objectz00(BgL_insz00_122,
					BGl_rtl_regz00zzsaw_defsz00);
				if (BgL__ortest_1191z00_2692)
					{	/* SawC/code.scm 513 */
						return BgL__ortest_1191z00_2692;
					}
				else
					{	/* SawC/code.scm 514 */
						bool_t BgL_test3318z00_6452;

						{	/* SawC/code.scm 514 */
							BgL_rtl_funz00_bglt BgL_arg2068z00_2696;

							BgL_arg2068z00_2696 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_122)))->BgL_funz00);
							{	/* SawC/code.scm 514 */
								bool_t BgL_res2725z00_4570;

								BgL_res2725z00_4570 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2068z00_2696), BGl_rtl_movz00zzsaw_defsz00);
								BgL_test3318z00_6452 = BgL_res2725z00_4570;
							}
						}
						if (BgL_test3318z00_6452)
							{	/* SawC/code.scm 515 */
								obj_t BgL_arg2065z00_2694;

								{	/* SawC/code.scm 515 */
									obj_t BgL_pairz00_4572;

									BgL_pairz00_4572 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_122)))->BgL_argsz00);
									BgL_arg2065z00_2694 = CAR(BgL_pairz00_4572);
								}
								{
									obj_t BgL_insz00_6460;

									BgL_insz00_6460 = BgL_arg2065z00_2694;
									BgL_insz00_122 = BgL_insz00_6460;
									goto BGl_deepzd2movzf3z21zzsaw_c_codez00;
								}
							}
						else
							{	/* SawC/code.scm 514 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* multiple-evaluation */
	bool_t BGl_multiplezd2evaluationzd2zzsaw_c_codez00(obj_t BgL_insz00_123,
		obj_t BgL_treez00_124)
	{
		{	/* SawC/code.scm 517 */
			{	/* SawC/code.scm 518 */
				BgL_rtl_funz00_bglt BgL_funz00_2697;

				BgL_funz00_2697 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_insz00_123)))->BgL_funz00);
				{	/* SawC/code.scm 520 */
					bool_t BgL__ortest_1193z00_2698;

					{	/* SawC/code.scm 520 */
						bool_t BgL_res2726z00_4574;

						BgL_res2726z00_4574 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_2697), BGl_rtl_vallocz00zzsaw_defsz00);
						BgL__ortest_1193z00_2698 = BgL_res2726z00_4574;
					}
					if (BgL__ortest_1193z00_2698)
						{	/* SawC/code.scm 520 */
							return BgL__ortest_1193z00_2698;
						}
					else
						{	/* SawC/code.scm 521 */
							bool_t BgL__ortest_1194z00_2699;

							{	/* SawC/code.scm 521 */
								bool_t BgL_test3320z00_6466;

								{	/* SawC/code.scm 521 */
									bool_t BgL_res2727z00_4575;

									BgL_res2727z00_4575 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_2697),
										BGl_rtl_lightfuncallz00zzsaw_defsz00);
									BgL_test3320z00_6466 = BgL_res2727z00_4575;
								}
								if (BgL_test3320z00_6466)
									{	/* SawC/code.scm 522 */
										obj_t BgL_tmpz00_6469;

										{	/* SawC/code.scm 522 */
											obj_t BgL_pairz00_4577;

											BgL_pairz00_4577 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_123)))->
												BgL_argsz00);
											BgL_tmpz00_6469 = CAR(BgL_pairz00_4577);
										}
										BgL__ortest_1194z00_2699 =
											(BgL_tmpz00_6469 ==
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_treez00_124)))->
												BgL_destz00));
									}
								else
									{	/* SawC/code.scm 521 */
										BgL__ortest_1194z00_2699 = ((bool_t) 0);
									}
							}
							if (BgL__ortest_1194z00_2699)
								{	/* SawC/code.scm 521 */
									return BgL__ortest_1194z00_2699;
								}
							else
								{	/* SawC/code.scm 524 */
									bool_t BgL__ortest_1195z00_2700;

									{	/* SawC/code.scm 524 */
										bool_t BgL_test3322z00_6477;

										{	/* SawC/code.scm 524 */
											bool_t BgL_res2728z00_4579;

											BgL_res2728z00_4579 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_funz00_2697),
												BGl_rtl_funcallz00zzsaw_defsz00);
											BgL_test3322z00_6477 = BgL_res2728z00_4579;
										}
										if (BgL_test3322z00_6477)
											{	/* SawC/code.scm 525 */
												obj_t BgL_tmpz00_6480;

												{	/* SawC/code.scm 525 */
													obj_t BgL_pairz00_4581;

													BgL_pairz00_4581 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_insz00_123)))->
														BgL_argsz00);
													BgL_tmpz00_6480 = CAR(BgL_pairz00_4581);
												}
												BgL__ortest_1195z00_2700 =
													(BgL_tmpz00_6480 ==
													(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_treez00_124)))->
														BgL_destz00));
											}
										else
											{	/* SawC/code.scm 524 */
												BgL__ortest_1195z00_2700 = ((bool_t) 0);
											}
									}
									if (BgL__ortest_1195z00_2700)
										{	/* SawC/code.scm 524 */
											return BgL__ortest_1195z00_2700;
										}
									else
										{	/* SawC/code.scm 527 */
											bool_t BgL_test3324z00_6488;

											{	/* SawC/code.scm 527 */
												bool_t BgL_res2729z00_4583;

												BgL_res2729z00_4583 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_funz00_2697),
													BGl_rtl_callz00zzsaw_defsz00);
												BgL_test3324z00_6488 = BgL_res2729z00_4583;
											}
											if (BgL_test3324z00_6488)
												{	/* SawC/code.scm 527 */
													if (BGl_globalzd2argszd2safezf3zf3zzast_varz00(
															(((BgL_rtl_callz00_bglt) COBJECT(
																		((BgL_rtl_callz00_bglt) BgL_funz00_2697)))->
																BgL_varz00)))
														{	/* SawC/code.scm 539 */
															return ((bool_t) 0);
														}
													else
														{	/* SawC/code.scm 539 */
															return ((bool_t) 1);
														}
												}
											else
												{	/* SawC/code.scm 527 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
			}
		}

	}



/* emit-pragma */
	obj_t BGl_emitzd2pragmazd2zzsaw_c_codez00(obj_t BgL_formatz00_126,
		obj_t BgL_argsz00_127)
	{
		{	/* SawC/code.scm 544 */
			if (NULLP(BgL_argsz00_127))
				{	/* SawC/code.scm 545 */
					return
						bgl_display_obj(BgL_formatz00_126,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* SawC/code.scm 547 */
					obj_t BgL_sportz00_2713;

					{	/* SawC/code.scm 547 */
						long BgL_endz00_2999;

						BgL_endz00_2999 = STRING_LENGTH(BgL_formatz00_126);
						{	/* SawC/code.scm 547 */

							BgL_sportz00_2713 =
								BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
								(BgL_formatz00_126, BINT(((long) 0)), BINT(BgL_endz00_2999));
					}}
					{	/* SawC/code.scm 547 */
						obj_t BgL_argsz00_2714;

						BgL_argsz00_2714 =
							BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_argsz00_127);
						{
							obj_t BgL_iportz00_2717;

							{	/* SawC/code.scm 549 */

								BgL_iportz00_2717 = BgL_sportz00_2713;
								{
									obj_t BgL_iportz00_2752;
									long BgL_lastzd2matchzd2_2753;
									long BgL_forwardz00_2754;
									long BgL_bufposz00_2755;
									obj_t BgL_iportz00_2765;
									long BgL_lastzd2matchzd2_2766;
									long BgL_forwardz00_2767;
									long BgL_bufposz00_2768;
									obj_t BgL_iportz00_2788;
									long BgL_lastzd2matchzd2_2789;
									long BgL_forwardz00_2790;
									long BgL_bufposz00_2791;
									obj_t BgL_iportz00_2801;
									long BgL_lastzd2matchzd2_2802;
									long BgL_forwardz00_2803;
									long BgL_bufposz00_2804;
									obj_t BgL_iportz00_2814;
									long BgL_lastzd2matchzd2_2815;
									long BgL_forwardz00_2816;
									long BgL_bufposz00_2817;

								BgL_zc3z04anonymousza32212ze3z87_2947:
									{	/* SawC/code.scm 549 */
										long BgL_res2784z00_4714;

										BgL_res2784z00_4714 = RGC_START_MATCH(BgL_iportz00_2717);
										BgL_res2784z00_4714;
									}
									{	/* SawC/code.scm 549 */
										long BgL_matchz00_2948;

										{	/* SawC/code.scm 549 */
											long BgL_arg2218z00_2961;
											long BgL_arg2219z00_2962;

											{	/* SawC/code.scm 549 */
												long BgL_res2785z00_4716;

												BgL_res2785z00_4716 =
													RGC_BUFFER_FORWARD(BgL_iportz00_2717);
												BgL_arg2218z00_2961 = BgL_res2785z00_4716;
											}
											{	/* SawC/code.scm 549 */
												long BgL_res2786z00_4718;

												BgL_res2786z00_4718 =
													RGC_BUFFER_BUFPOS(BgL_iportz00_2717);
												BgL_arg2219z00_2962 = BgL_res2786z00_4718;
											}
											BgL_iportz00_2801 = BgL_iportz00_2717;
											BgL_lastzd2matchzd2_2802 = ((long) 3);
											BgL_forwardz00_2803 = BgL_arg2218z00_2961;
											BgL_bufposz00_2804 = BgL_arg2219z00_2962;
										BgL_zc3z04anonymousza32106ze3z87_2805:
											if ((BgL_forwardz00_2803 == BgL_bufposz00_2804))
												{	/* SawC/code.scm 549 */
													if (rgc_fill_buffer(BgL_iportz00_2801))
														{	/* SawC/code.scm 549 */
															long BgL_arg2109z00_2808;
															long BgL_arg2110z00_2809;

															{	/* SawC/code.scm 549 */
																long BgL_res2763z00_4667;

																BgL_res2763z00_4667 =
																	RGC_BUFFER_FORWARD(BgL_iportz00_2801);
																BgL_arg2109z00_2808 = BgL_res2763z00_4667;
															}
															{	/* SawC/code.scm 549 */
																long BgL_res2764z00_4669;

																BgL_res2764z00_4669 =
																	RGC_BUFFER_BUFPOS(BgL_iportz00_2801);
																BgL_arg2110z00_2809 = BgL_res2764z00_4669;
															}
															{
																long BgL_bufposz00_6513;
																long BgL_forwardz00_6512;

																BgL_forwardz00_6512 = BgL_arg2109z00_2808;
																BgL_bufposz00_6513 = BgL_arg2110z00_2809;
																BgL_bufposz00_2804 = BgL_bufposz00_6513;
																BgL_forwardz00_2803 = BgL_forwardz00_6512;
																goto BgL_zc3z04anonymousza32106ze3z87_2805;
															}
														}
													else
														{	/* SawC/code.scm 549 */
															BgL_matchz00_2948 = BgL_lastzd2matchzd2_2802;
														}
												}
											else
												{	/* SawC/code.scm 549 */
													int BgL_curz00_2810;

													{	/* SawC/code.scm 549 */
														int BgL_res2765z00_4672;

														BgL_res2765z00_4672 =
															RGC_BUFFER_GET_CHAR(BgL_iportz00_2801,
															BgL_forwardz00_2803);
														BgL_curz00_2810 = BgL_res2765z00_4672;
													}
													{	/* SawC/code.scm 549 */

														if (((long) (BgL_curz00_2810) == ((long) 36)))
															{	/* SawC/code.scm 549 */
																BgL_iportz00_2765 = BgL_iportz00_2801;
																BgL_lastzd2matchzd2_2766 =
																	BgL_lastzd2matchzd2_2802;
																BgL_forwardz00_2767 =
																	(((long) 1) + BgL_forwardz00_2803);
																BgL_bufposz00_2768 = BgL_bufposz00_2804;
															BgL_zc3z04anonymousza32088ze3z87_2769:
																{	/* SawC/code.scm 549 */
																	long BgL_newzd2matchzd2_2770;

																	{	/* SawC/code.scm 549 */
																		long BgL_res2740z00_4611;

																		BgL_res2740z00_4611 =
																			RGC_STOP_MATCH(BgL_iportz00_2765,
																			BgL_forwardz00_2767);
																		BgL_res2740z00_4611;
																	}
																	BgL_newzd2matchzd2_2770 = ((long) 3);
																	if (
																		(BgL_forwardz00_2767 == BgL_bufposz00_2768))
																		{	/* SawC/code.scm 549 */
																			if (rgc_fill_buffer(BgL_iportz00_2765))
																				{	/* SawC/code.scm 549 */
																					long BgL_arg2091z00_2773;
																					long BgL_arg2092z00_2774;

																					{	/* SawC/code.scm 549 */
																						long BgL_res2743z00_4618;

																						BgL_res2743z00_4618 =
																							RGC_BUFFER_FORWARD
																							(BgL_iportz00_2765);
																						BgL_arg2091z00_2773 =
																							BgL_res2743z00_4618;
																					}
																					{	/* SawC/code.scm 549 */
																						long BgL_res2744z00_4620;

																						BgL_res2744z00_4620 =
																							RGC_BUFFER_BUFPOS
																							(BgL_iportz00_2765);
																						BgL_arg2092z00_2774 =
																							BgL_res2744z00_4620;
																					}
																					{
																						long BgL_bufposz00_6526;
																						long BgL_forwardz00_6525;

																						BgL_forwardz00_6525 =
																							BgL_arg2091z00_2773;
																						BgL_bufposz00_6526 =
																							BgL_arg2092z00_2774;
																						BgL_bufposz00_2768 =
																							BgL_bufposz00_6526;
																						BgL_forwardz00_2767 =
																							BgL_forwardz00_6525;
																						goto
																							BgL_zc3z04anonymousza32088ze3z87_2769;
																					}
																				}
																			else
																				{	/* SawC/code.scm 549 */
																					BgL_matchz00_2948 =
																						BgL_newzd2matchzd2_2770;
																				}
																		}
																	else
																		{	/* SawC/code.scm 549 */
																			int BgL_curz00_2775;

																			{	/* SawC/code.scm 549 */
																				int BgL_res2745z00_4623;

																				BgL_res2745z00_4623 =
																					RGC_BUFFER_GET_CHAR(BgL_iportz00_2765,
																					BgL_forwardz00_2767);
																				BgL_curz00_2775 = BgL_res2745z00_4623;
																			}
																			{	/* SawC/code.scm 549 */

																				{	/* SawC/code.scm 549 */
																					bool_t BgL_test3332z00_6528;

																					if (
																						((long) (BgL_curz00_2775) >=
																							((long) 48)))
																						{	/* SawC/code.scm 549 */
																							BgL_test3332z00_6528 =
																								(
																								(long) (BgL_curz00_2775) <
																								((long) 58));
																						}
																					else
																						{	/* SawC/code.scm 549 */
																							BgL_test3332z00_6528 =
																								((bool_t) 0);
																						}
																					if (BgL_test3332z00_6528)
																						{	/* SawC/code.scm 549 */
																							BgL_iportz00_2814 =
																								BgL_iportz00_2765;
																							BgL_lastzd2matchzd2_2815 =
																								BgL_newzd2matchzd2_2770;
																							BgL_forwardz00_2816 =
																								(((long) 1) +
																								BgL_forwardz00_2767);
																							BgL_bufposz00_2817 =
																								BgL_bufposz00_2768;
																						BgL_zc3z04anonymousza32115ze3z87_2818:
																							{	/* SawC/code.scm 549 */
																								long BgL_newzd2matchzd2_2819;

																								{	/* SawC/code.scm 549 */
																									long BgL_res2769z00_4681;

																									BgL_res2769z00_4681 =
																										RGC_STOP_MATCH
																										(BgL_iportz00_2814,
																										BgL_forwardz00_2816);
																									BgL_res2769z00_4681;
																								}
																								BgL_newzd2matchzd2_2819 =
																									((long) 0);
																								if ((BgL_forwardz00_2816 ==
																										BgL_bufposz00_2817))
																									{	/* SawC/code.scm 549 */
																										if (rgc_fill_buffer
																											(BgL_iportz00_2814))
																											{	/* SawC/code.scm 549 */
																												long
																													BgL_arg2118z00_2822;
																												long
																													BgL_arg2119z00_2823;
																												{	/* SawC/code.scm 549 */
																													long
																														BgL_res2772z00_4688;
																													BgL_res2772z00_4688 =
																														RGC_BUFFER_FORWARD
																														(BgL_iportz00_2814);
																													BgL_arg2118z00_2822 =
																														BgL_res2772z00_4688;
																												}
																												{	/* SawC/code.scm 549 */
																													long
																														BgL_res2773z00_4690;
																													BgL_res2773z00_4690 =
																														RGC_BUFFER_BUFPOS
																														(BgL_iportz00_2814);
																													BgL_arg2119z00_2823 =
																														BgL_res2773z00_4690;
																												}
																												{
																													long
																														BgL_bufposz00_6542;
																													long
																														BgL_forwardz00_6541;
																													BgL_forwardz00_6541 =
																														BgL_arg2118z00_2822;
																													BgL_bufposz00_6542 =
																														BgL_arg2119z00_2823;
																													BgL_bufposz00_2817 =
																														BgL_bufposz00_6542;
																													BgL_forwardz00_2816 =
																														BgL_forwardz00_6541;
																													goto
																														BgL_zc3z04anonymousza32115ze3z87_2818;
																												}
																											}
																										else
																											{	/* SawC/code.scm 549 */
																												BgL_matchz00_2948 =
																													BgL_newzd2matchzd2_2819;
																											}
																									}
																								else
																									{	/* SawC/code.scm 549 */
																										int BgL_curz00_2824;

																										{	/* SawC/code.scm 549 */
																											int BgL_res2774z00_4693;

																											BgL_res2774z00_4693 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_iportz00_2814,
																												BgL_forwardz00_2816);
																											BgL_curz00_2824 =
																												BgL_res2774z00_4693;
																										}
																										{	/* SawC/code.scm 549 */

																											{	/* SawC/code.scm 549 */
																												bool_t
																													BgL_test3336z00_6544;
																												if (((long)
																														(BgL_curz00_2824) >=
																														((long) 48)))
																													{	/* SawC/code.scm 549 */
																														BgL_test3336z00_6544
																															=
																															((long)
																															(BgL_curz00_2824)
																															< ((long) 58));
																													}
																												else
																													{	/* SawC/code.scm 549 */
																														BgL_test3336z00_6544
																															= ((bool_t) 0);
																													}
																												if (BgL_test3336z00_6544)
																													{
																														long
																															BgL_forwardz00_6551;
																														long
																															BgL_lastzd2matchzd2_6550;
																														BgL_lastzd2matchzd2_6550
																															=
																															BgL_newzd2matchzd2_2819;
																														BgL_forwardz00_6551
																															=
																															(((long) 1) +
																															BgL_forwardz00_2816);
																														BgL_forwardz00_2816
																															=
																															BgL_forwardz00_6551;
																														BgL_lastzd2matchzd2_2815
																															=
																															BgL_lastzd2matchzd2_6550;
																														goto
																															BgL_zc3z04anonymousza32115ze3z87_2818;
																													}
																												else
																													{	/* SawC/code.scm 549 */
																														BgL_matchz00_2948 =
																															BgL_newzd2matchzd2_2819;
																													}
																											}
																										}
																									}
																							}
																						}
																					else
																						{	/* SawC/code.scm 549 */
																							if (
																								((long) (BgL_curz00_2775) ==
																									((long) 36)))
																								{	/* SawC/code.scm 549 */
																									long BgL_arg2097z00_2780;

																									BgL_arg2097z00_2780 =
																										(((long) 1) +
																										BgL_forwardz00_2767);
																									{	/* SawC/code.scm 549 */
																										long
																											BgL_newzd2matchzd2_4634;
																										{	/* SawC/code.scm 549 */
																											long BgL_res2751z00_4637;

																											BgL_res2751z00_4637 =
																												RGC_STOP_MATCH
																												(BgL_iportz00_2765,
																												BgL_arg2097z00_2780);
																											BgL_res2751z00_4637;
																										}
																										BgL_newzd2matchzd2_4634 =
																											((long) 2);
																										BgL_matchz00_2948 =
																											BgL_newzd2matchzd2_4634;
																								}}
																							else
																								{	/* SawC/code.scm 549 */
																									BgL_matchz00_2948 =
																										BgL_newzd2matchzd2_2770;
																								}
																						}
																				}
																			}
																		}
																}
															}
														else
															{	/* SawC/code.scm 549 */
																BgL_iportz00_2788 = BgL_iportz00_2801;
																BgL_lastzd2matchzd2_2789 =
																	BgL_lastzd2matchzd2_2802;
																BgL_forwardz00_2790 =
																	(((long) 1) + BgL_forwardz00_2803);
																BgL_bufposz00_2791 = BgL_bufposz00_2804;
															BgL_zc3z04anonymousza32099ze3z87_2792:
																{	/* SawC/code.scm 549 */
																	long BgL_newzd2matchzd2_2793;

																	{	/* SawC/code.scm 549 */
																		long BgL_res2753z00_4644;

																		BgL_res2753z00_4644 =
																			RGC_STOP_MATCH(BgL_iportz00_2788,
																			BgL_forwardz00_2790);
																		BgL_res2753z00_4644;
																	}
																	BgL_newzd2matchzd2_2793 = ((long) 1);
																	if (
																		(BgL_forwardz00_2790 == BgL_bufposz00_2791))
																		{	/* SawC/code.scm 549 */
																			if (rgc_fill_buffer(BgL_iportz00_2788))
																				{	/* SawC/code.scm 549 */
																					long BgL_arg2102z00_2796;
																					long BgL_arg2103z00_2797;

																					{	/* SawC/code.scm 549 */
																						long BgL_res2756z00_4651;

																						BgL_res2756z00_4651 =
																							RGC_BUFFER_FORWARD
																							(BgL_iportz00_2788);
																						BgL_arg2102z00_2796 =
																							BgL_res2756z00_4651;
																					}
																					{	/* SawC/code.scm 549 */
																						long BgL_res2757z00_4653;

																						BgL_res2757z00_4653 =
																							RGC_BUFFER_BUFPOS
																							(BgL_iportz00_2788);
																						BgL_arg2103z00_2797 =
																							BgL_res2757z00_4653;
																					}
																					{
																						long BgL_bufposz00_6568;
																						long BgL_forwardz00_6567;

																						BgL_forwardz00_6567 =
																							BgL_arg2102z00_2796;
																						BgL_bufposz00_6568 =
																							BgL_arg2103z00_2797;
																						BgL_bufposz00_2791 =
																							BgL_bufposz00_6568;
																						BgL_forwardz00_2790 =
																							BgL_forwardz00_6567;
																						goto
																							BgL_zc3z04anonymousza32099ze3z87_2792;
																					}
																				}
																			else
																				{	/* SawC/code.scm 549 */
																					BgL_matchz00_2948 =
																						BgL_newzd2matchzd2_2793;
																				}
																		}
																	else
																		{	/* SawC/code.scm 549 */
																			int BgL_curz00_2798;

																			{	/* SawC/code.scm 549 */
																				int BgL_res2758z00_4656;

																				BgL_res2758z00_4656 =
																					RGC_BUFFER_GET_CHAR(BgL_iportz00_2788,
																					BgL_forwardz00_2790);
																				BgL_curz00_2798 = BgL_res2758z00_4656;
																			}
																			{	/* SawC/code.scm 549 */

																				if (
																					((long) (BgL_curz00_2798) ==
																						((long) 36)))
																					{	/* SawC/code.scm 549 */
																						BgL_matchz00_2948 =
																							BgL_newzd2matchzd2_2793;
																					}
																				else
																					{	/* SawC/code.scm 549 */
																						BgL_iportz00_2752 =
																							BgL_iportz00_2788;
																						BgL_lastzd2matchzd2_2753 =
																							BgL_newzd2matchzd2_2793;
																						BgL_forwardz00_2754 =
																							(((long) 1) +
																							BgL_forwardz00_2790);
																						BgL_bufposz00_2755 =
																							BgL_bufposz00_2791;
																					BgL_zc3z04anonymousza32081ze3z87_2756:
																						{	/* SawC/code.scm 549 */
																							long BgL_newzd2matchzd2_2757;

																							{	/* SawC/code.scm 549 */
																								long BgL_res2732z00_4592;

																								BgL_res2732z00_4592 =
																									RGC_STOP_MATCH
																									(BgL_iportz00_2752,
																									BgL_forwardz00_2754);
																								BgL_res2732z00_4592;
																							}
																							BgL_newzd2matchzd2_2757 =
																								((long) 1);
																							if ((BgL_forwardz00_2754 ==
																									BgL_bufposz00_2755))
																								{	/* SawC/code.scm 549 */
																									if (rgc_fill_buffer
																										(BgL_iportz00_2752))
																										{	/* SawC/code.scm 549 */
																											long BgL_arg2084z00_2760;
																											long BgL_arg2085z00_2761;

																											{	/* SawC/code.scm 549 */
																												long
																													BgL_res2735z00_4599;
																												BgL_res2735z00_4599 =
																													RGC_BUFFER_FORWARD
																													(BgL_iportz00_2752);
																												BgL_arg2084z00_2760 =
																													BgL_res2735z00_4599;
																											}
																											{	/* SawC/code.scm 549 */
																												long
																													BgL_res2736z00_4601;
																												BgL_res2736z00_4601 =
																													RGC_BUFFER_BUFPOS
																													(BgL_iportz00_2752);
																												BgL_arg2085z00_2761 =
																													BgL_res2736z00_4601;
																											}
																											{
																												long BgL_bufposz00_6581;
																												long
																													BgL_forwardz00_6580;
																												BgL_forwardz00_6580 =
																													BgL_arg2084z00_2760;
																												BgL_bufposz00_6581 =
																													BgL_arg2085z00_2761;
																												BgL_bufposz00_2755 =
																													BgL_bufposz00_6581;
																												BgL_forwardz00_2754 =
																													BgL_forwardz00_6580;
																												goto
																													BgL_zc3z04anonymousza32081ze3z87_2756;
																											}
																										}
																									else
																										{	/* SawC/code.scm 549 */
																											BgL_matchz00_2948 =
																												BgL_newzd2matchzd2_2757;
																										}
																								}
																							else
																								{	/* SawC/code.scm 549 */
																									int BgL_curz00_2762;

																									{	/* SawC/code.scm 549 */
																										int BgL_res2737z00_4604;

																										BgL_res2737z00_4604 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_iportz00_2752,
																											BgL_forwardz00_2754);
																										BgL_curz00_2762 =
																											BgL_res2737z00_4604;
																									}
																									{	/* SawC/code.scm 549 */

																										if (
																											((long) (BgL_curz00_2762)
																												== ((long) 36)))
																											{	/* SawC/code.scm 549 */
																												BgL_matchz00_2948 =
																													BgL_newzd2matchzd2_2757;
																											}
																										else
																											{
																												long
																													BgL_forwardz00_6587;
																												long
																													BgL_lastzd2matchzd2_6586;
																												BgL_lastzd2matchzd2_6586
																													=
																													BgL_newzd2matchzd2_2757;
																												BgL_forwardz00_6587 =
																													(((long) 1) +
																													BgL_forwardz00_2754);
																												BgL_forwardz00_2754 =
																													BgL_forwardz00_6587;
																												BgL_lastzd2matchzd2_2753
																													=
																													BgL_lastzd2matchzd2_6586;
																												goto
																													BgL_zc3z04anonymousza32081ze3z87_2756;
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
										RGC_SET_FILEPOS(BgL_iportz00_2717);
										{

											switch (BgL_matchz00_2948)
												{
												case ((long) 3):

													{	/* SawC/code.scm 549 */
														bool_t BgL_test3345z00_6592;

														{	/* SawC/code.scm 549 */
															long BgL_arg2206z00_2938;

															{	/* SawC/code.scm 549 */
																long BgL_res2781z00_4708;

																BgL_res2781z00_4708 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_2717);
																BgL_arg2206z00_2938 = BgL_res2781z00_4708;
															}
															BgL_test3345z00_6592 =
																(BgL_arg2206z00_2938 == ((long) 0));
														}
														if (BgL_test3345z00_6592)
															{	/* SawC/code.scm 549 */
																BEOF;
															}
														else
															{	/* SawC/code.scm 549 */
																unsigned char BgL_res2783z00_4712;

																BgL_res2783z00_4712 =
																	RGC_BUFFER_CHARACTER(BgL_iportz00_2717);
																BCHAR(BgL_res2783z00_4712);
													}} break;
												case ((long) 2):

													bgl_display_string(BGl_string2972z00zzsaw_c_codez00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													goto BgL_zc3z04anonymousza32212ze3z87_2947;
													break;
												case ((long) 1):

													{	/* SawC/code.scm 558 */
														obj_t BgL_arg2214z00_2952;

														BgL_arg2214z00_2952 =
															BGl_thezd2stringze70z35zzsaw_c_codez00
															(BgL_iportz00_2717);
														bgl_display_obj(BgL_arg2214z00_2952,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}
													goto BgL_zc3z04anonymousza32212ze3z87_2947;
													break;
												case ((long) 0):

													{	/* SawC/code.scm 551 */
														obj_t BgL_strz00_2953;

														BgL_strz00_2953 =
															BGl_thezd2stringze70z35zzsaw_c_codez00
															(BgL_iportz00_2717);
														{	/* SawC/code.scm 551 */
															long BgL_lenz00_2954;

															{	/* SawC/code.scm 549 */
																long BgL_res2787z00_4723;

																BgL_res2787z00_4723 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_2717);
																BgL_lenz00_2954 = BgL_res2787z00_4723;
															}
															{	/* SawC/code.scm 552 */
																obj_t BgL_indexz00_2955;

																{	/* SawC/code.scm 554 */
																	obj_t BgL_arg2217z00_2958;

																	BgL_arg2217z00_2958 =
																		c_substring(BgL_strz00_2953, ((long) 1),
																		BgL_lenz00_2954);
																	{	/* SawC/code.scm 553 */

																		BgL_indexz00_2955 =
																			BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																			(BgL_arg2217z00_2958, BINT(((long) 10)));
																}}
																{	/* SawC/code.scm 553 */

																	BGl_genzd2regzd2zzsaw_c_codez00(VECTOR_REF
																		(BgL_argsz00_2714,
																			((long) CINT(BgL_indexz00_2955) -
																				((long) 1))));
																	goto BgL_zc3z04anonymousza32212ze3z87_2947;
																}
															}
														}
													}
													break;
												default:
													BGl_errorz00zz__errorz00
														(BGl_string2970z00zzsaw_c_codez00,
														BGl_string2971z00zzsaw_c_codez00,
														BINT(BgL_matchz00_2948));
												}
										}
									}
								}
								return BTRUE;
							}
						}
					}
				}
		}

	}



/* the-string~0 */
	obj_t BGl_thezd2stringze70z35zzsaw_c_codez00(obj_t BgL_iportz00_5347)
	{
		{	/* SawC/code.scm 549 */
			{	/* SawC/code.scm 549 */
				long BgL_arg2129z00_2840;

				{	/* SawC/code.scm 549 */
					long BgL_res2778z00_4701;

					BgL_res2778z00_4701 = RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5347);
					BgL_arg2129z00_2840 = BgL_res2778z00_4701;
				}
				return
					rgc_buffer_substring(BgL_iportz00_5347, ((long) 0),
					BgL_arg2129z00_2840);
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			{	/* SawC/code.scm 29 */
				obj_t BgL_arg2224z00_3004;
				obj_t BgL_arg2225z00_3005;

				{	/* SawC/code.scm 29 */
					obj_t BgL_v1695z00_3033;

					BgL_v1695z00_3033 = create_vector(((long) 1));
					{	/* SawC/code.scm 29 */
						obj_t BgL_arg2236z00_3034;

						BgL_arg2236z00_3034 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc2974z00zzsaw_c_codez00,
							BGl_proc2973z00zzsaw_c_codez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1695z00_3033, ((long) 0), BgL_arg2236z00_3034);
					}
					BgL_arg2224z00_3004 = BgL_v1695z00_3033;
				}
				{	/* SawC/code.scm 29 */
					obj_t BgL_v1696z00_3044;

					BgL_v1696z00_3044 = create_vector(((long) 0));
					BgL_arg2225z00_3005 = BgL_v1696z00_3044;
				}
				return (BGl_SawCIregz00zzsaw_c_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 8)), BGl_rtl_regz00zzsaw_defsz00,
						((long) 48727), BGl_proc2978z00zzsaw_c_codez00,
						BGl_proc2977z00zzsaw_c_codez00, BFALSE,
						BGl_proc2976z00zzsaw_c_codez00, BGl_proc2975z00zzsaw_c_codez00,
						BgL_arg2224z00_3004, BgL_arg2225z00_3005), BUNSPEC);
		}}

	}



/* &lambda2232 */
	BgL_rtl_regz00_bglt BGl_z62lambda2232z62zzsaw_c_codez00(obj_t BgL_envz00_5204,
		obj_t BgL_o1163z00_5205)
	{
		{	/* SawC/code.scm 29 */
			{	/* SawC/code.scm 29 */
				long BgL_arg2233z00_5372;

				{	/* SawC/code.scm 29 */
					obj_t BgL_arg2234z00_5373;

					{	/* SawC/code.scm 29 */
						obj_t BgL_arg2235z00_5374;

						{	/* SawC/code.scm 29 */
							long BgL_arg1816z00_5375;

							{	/* SawC/code.scm 29 */
								long BgL_arg1817z00_5376;

								{	/* SawC/code.scm 29 */
									long BgL_res2793z00_5377;

									BgL_res2793z00_5377 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1163z00_5205)));
									BgL_arg1817z00_5376 = BgL_res2793z00_5377;
								}
								BgL_arg1816z00_5375 = (BgL_arg1817z00_5376 - OBJECT_TYPE);
							}
							BgL_arg2235z00_5374 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5375);
						}
						BgL_arg2234z00_5373 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2235z00_5374);
					}
					{	/* SawC/code.scm 29 */
						long BgL_res2795z00_5378;

						{	/* SawC/code.scm 29 */
							obj_t BgL_tmpz00_6629;

							BgL_tmpz00_6629 = ((obj_t) BgL_arg2234z00_5373);
							BgL_res2795z00_5378 = BGL_CLASS_INDEX(BgL_tmpz00_6629);
						}
						BgL_arg2233z00_5372 = BgL_res2795z00_5378;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1163z00_5205)), BgL_arg2233z00_5372);
			}
			{	/* SawC/code.scm 29 */
				BgL_objectz00_bglt BgL_tmpz00_6635;

				BgL_tmpz00_6635 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1163z00_5205));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6635, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1163z00_5205));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1163z00_5205));
		}

	}



/* &<@anonymous:2231> */
	obj_t BGl_z62zc3z04anonymousza32231ze3ze5zzsaw_c_codez00(obj_t
		BgL_envz00_5206, obj_t BgL_new1162z00_5207)
	{
		{	/* SawC/code.scm 29 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_6643;

				{
					BgL_typez00_bglt BgL_auxz00_6644;

					{	/* SawC/code.scm 29 */
						obj_t BgL_classz00_5380;

						BgL_classz00_5380 = BGl_typez00zztype_typez00;
						{	/* SawC/code.scm 29 */
							obj_t BgL__ortest_1106z00_5381;

							BgL__ortest_1106z00_5381 = BGL_CLASS_NIL(BgL_classz00_5380);
							if (CBOOL(BgL__ortest_1106z00_5381))
								{	/* SawC/code.scm 29 */
									BgL_auxz00_6644 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5381);
								}
							else
								{	/* SawC/code.scm 29 */
									BgL_auxz00_6644 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5380));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1162z00_5207))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_6644), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1162z00_5207))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1162z00_5207))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1162z00_5207))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1162z00_5207))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1162z00_5207))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_sawciregz00_bglt BgL_auxz00_6669;

					{
						obj_t BgL_auxz00_6670;

						{	/* SawC/code.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_6671;

							BgL_tmpz00_6671 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1162z00_5207));
							BgL_auxz00_6670 = BGL_OBJECT_WIDENING(BgL_tmpz00_6671);
						}
						BgL_auxz00_6669 = ((BgL_sawciregz00_bglt) BgL_auxz00_6670);
					}
					((((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_6669))->BgL_indexz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_6643 = ((BgL_rtl_regz00_bglt) BgL_new1162z00_5207);
				return ((obj_t) BgL_auxz00_6643);
			}
		}

	}



/* &lambda2229 */
	BgL_rtl_regz00_bglt BGl_z62lambda2229z62zzsaw_c_codez00(obj_t BgL_envz00_5208,
		obj_t BgL_o1159z00_5209)
	{
		{	/* SawC/code.scm 29 */
			{	/* SawC/code.scm 29 */
				BgL_sawciregz00_bglt BgL_wide1161z00_5383;

				BgL_wide1161z00_5383 =
					((BgL_sawciregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawciregz00_bgl))));
				{	/* SawC/code.scm 29 */
					obj_t BgL_auxz00_6684;
					BgL_objectz00_bglt BgL_tmpz00_6680;

					BgL_auxz00_6684 = ((obj_t) BgL_wide1161z00_5383);
					BgL_tmpz00_6680 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1159z00_5209)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6680, BgL_auxz00_6684);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1159z00_5209)));
				{	/* SawC/code.scm 29 */
					long BgL_arg2230z00_5384;

					{	/* SawC/code.scm 29 */
						long BgL_res2792z00_5385;

						BgL_res2792z00_5385 =
							BGL_CLASS_INDEX(BGl_SawCIregz00zzsaw_c_codez00);
						BgL_arg2230z00_5384 = BgL_res2792z00_5385;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1159z00_5209))),
						BgL_arg2230z00_5384);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1159z00_5209)));
			}
		}

	}



/* &lambda2226 */
	BgL_rtl_regz00_bglt BGl_z62lambda2226z62zzsaw_c_codez00(obj_t BgL_envz00_5210,
		obj_t BgL_type1152z00_5211, obj_t BgL_var1153z00_5212,
		obj_t BgL_onexprzf31154zf3_5213, obj_t BgL_name1155z00_5214,
		obj_t BgL_key1156z00_5215, obj_t BgL_hardware1157z00_5216,
		obj_t BgL_index1158z00_5217)
	{
		{	/* SawC/code.scm 29 */
			{	/* SawC/code.scm 29 */
				BgL_rtl_regz00_bglt BgL_new1211z00_5387;

				{	/* SawC/code.scm 29 */
					BgL_rtl_regz00_bglt BgL_tmp1209z00_5388;
					BgL_sawciregz00_bglt BgL_wide1210z00_5389;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_6698;

						{	/* SawC/code.scm 29 */
							BgL_rtl_regz00_bglt BgL_new1208z00_5390;

							BgL_new1208z00_5390 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawC/code.scm 29 */
								long BgL_arg2228z00_5391;

								{	/* SawC/code.scm 29 */
									long BgL_res2790z00_5392;

									BgL_res2790z00_5392 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg2228z00_5391 = BgL_res2790z00_5392;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1208z00_5390),
									BgL_arg2228z00_5391);
							}
							{	/* SawC/code.scm 29 */
								BgL_objectz00_bglt BgL_tmpz00_6703;

								BgL_tmpz00_6703 = ((BgL_objectz00_bglt) BgL_new1208z00_5390);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6703, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1208z00_5390);
							BgL_auxz00_6698 = BgL_new1208z00_5390;
						}
						BgL_tmp1209z00_5388 = ((BgL_rtl_regz00_bglt) BgL_auxz00_6698);
					}
					BgL_wide1210z00_5389 =
						((BgL_sawciregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sawciregz00_bgl))));
					{	/* SawC/code.scm 29 */
						obj_t BgL_auxz00_6711;
						BgL_objectz00_bglt BgL_tmpz00_6709;

						BgL_auxz00_6711 = ((obj_t) BgL_wide1210z00_5389);
						BgL_tmpz00_6709 = ((BgL_objectz00_bglt) BgL_tmp1209z00_5388);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6709, BgL_auxz00_6711);
					}
					((BgL_objectz00_bglt) BgL_tmp1209z00_5388);
					{	/* SawC/code.scm 29 */
						long BgL_arg2227z00_5393;

						{	/* SawC/code.scm 29 */
							long BgL_res2791z00_5394;

							BgL_res2791z00_5394 =
								BGL_CLASS_INDEX(BGl_SawCIregz00zzsaw_c_codez00);
							BgL_arg2227z00_5393 = BgL_res2791z00_5394;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1209z00_5388), BgL_arg2227z00_5393);
					}
					BgL_new1211z00_5387 = ((BgL_rtl_regz00_bglt) BgL_tmp1209z00_5388);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1211z00_5387)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1152z00_5211)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1211z00_5387)))->BgL_varz00) =
					((obj_t) BgL_var1153z00_5212), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1211z00_5387)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31154zf3_5213), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1211z00_5387)))->BgL_namez00) =
					((obj_t) BgL_name1155z00_5214), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1211z00_5387)))->BgL_keyz00) =
					((obj_t) BgL_key1156z00_5215), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1211z00_5387)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1157z00_5216), BUNSPEC);
				{
					BgL_sawciregz00_bglt BgL_auxz00_6732;

					{
						obj_t BgL_auxz00_6733;

						{	/* SawC/code.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_6734;

							BgL_tmpz00_6734 = ((BgL_objectz00_bglt) BgL_new1211z00_5387);
							BgL_auxz00_6733 = BGL_OBJECT_WIDENING(BgL_tmpz00_6734);
						}
						BgL_auxz00_6732 = ((BgL_sawciregz00_bglt) BgL_auxz00_6733);
					}
					((((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_6732))->BgL_indexz00) =
						((obj_t) BgL_index1158z00_5217), BUNSPEC);
				}
				return BgL_new1211z00_5387;
			}
		}

	}



/* &lambda2240 */
	obj_t BGl_z62lambda2240z62zzsaw_c_codez00(obj_t BgL_envz00_5218,
		obj_t BgL_oz00_5219, obj_t BgL_vz00_5220)
	{
		{	/* SawC/code.scm 29 */
			{
				BgL_sawciregz00_bglt BgL_auxz00_6739;

				{
					obj_t BgL_auxz00_6740;

					{	/* SawC/code.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_6741;

						BgL_tmpz00_6741 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_5219));
						BgL_auxz00_6740 = BGL_OBJECT_WIDENING(BgL_tmpz00_6741);
					}
					BgL_auxz00_6739 = ((BgL_sawciregz00_bglt) BgL_auxz00_6740);
				}
				return
					((((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_6739))->BgL_indexz00) =
					((obj_t) BgL_vz00_5220), BUNSPEC);
			}
		}

	}



/* &lambda2239 */
	obj_t BGl_z62lambda2239z62zzsaw_c_codez00(obj_t BgL_envz00_5221,
		obj_t BgL_oz00_5222)
	{
		{	/* SawC/code.scm 29 */
			{
				BgL_sawciregz00_bglt BgL_auxz00_6747;

				{
					obj_t BgL_auxz00_6748;

					{	/* SawC/code.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_6749;

						BgL_tmpz00_6749 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_5222));
						BgL_auxz00_6748 = BGL_OBJECT_WIDENING(BgL_tmpz00_6749);
					}
					BgL_auxz00_6747 = ((BgL_sawciregz00_bglt) BgL_auxz00_6748);
				}
				return
					(((BgL_sawciregz00_bglt) COBJECT(BgL_auxz00_6747))->BgL_indexz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_proc2979z00zzsaw_c_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string2980z00zzsaw_c_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_proc2981z00zzsaw_c_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2982z00zzsaw_c_codez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_proc2983z00zzsaw_c_codez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string2984z00zzsaw_c_codez00);
		}

	}



/* &gen-prefix1734 */
	obj_t BGl_z62genzd2prefix1734zb0zzsaw_c_codez00(obj_t BgL_envz00_5226,
		obj_t BgL_funz00_5227)
	{
		{	/* SawC/code.scm 396 */
			return BGl_string2912z00zzsaw_c_codez00;
		}

	}



/* &gen-fun-name1715 */
	obj_t BGl_z62genzd2funzd2name1715z62zzsaw_c_codez00(obj_t BgL_envz00_5228,
		obj_t BgL_funz00_5229)
	{
		{	/* SawC/code.scm 359 */
			return
				BGl_genzd2upcasezd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5229));
		}

	}



/* &gen-expr1697 */
	obj_t BGl_z62genzd2expr1697zb0zzsaw_c_codez00(obj_t BgL_envz00_5230,
		obj_t BgL_funz00_5231, obj_t BgL_argsz00_5232)
	{
		{	/* SawC/code.scm 215 */
			BGl_genzd2funzd2namez00zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5231));
			{	/* SawC/code.scm 218 */
				obj_t BgL_arg2242z00_5400;

				{	/* SawC/code.scm 218 */
					obj_t BgL_res2796z00_5401;

					{	/* SawC/code.scm 218 */
						obj_t BgL_tmpz00_6762;

						BgL_tmpz00_6762 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2796z00_5401 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6762);
					}
					BgL_arg2242z00_5400 = BgL_res2796z00_5401;
				}
				bgl_display_string(BGl_string2906z00zzsaw_c_codez00,
					BgL_arg2242z00_5400);
			}
			BGl_genzd2prefixzd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5231));
			BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_5232);
			{	/* SawC/code.scm 221 */
				obj_t BgL_arg2243z00_5402;

				{	/* SawC/code.scm 221 */
					obj_t BgL_res2797z00_5403;

					{	/* SawC/code.scm 221 */
						obj_t BgL_tmpz00_6769;

						BgL_tmpz00_6769 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2797z00_5403 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6769);
					}
					BgL_arg2243z00_5402 = BgL_res2797z00_5403;
				}
				return
					bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
					BgL_arg2243z00_5402);
			}
		}

	}



/* gen-expr */
	obj_t BGl_genzd2exprzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_62,
		obj_t BgL_argsz00_63)
	{
		{	/* SawC/code.scm 215 */
			{	/* SawC/code.scm 215 */
				obj_t BgL_method1698z00_3064;

				{	/* SawC/code.scm 215 */
					obj_t BgL_res2808z00_4812;

					{	/* SawC/code.scm 215 */
						long BgL_objzd2classzd2numz00_4777;

						{	/* SawC/code.scm 215 */
							long BgL_res2798z00_4780;

							BgL_res2798z00_4780 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_62));
							BgL_objzd2classzd2numz00_4777 = BgL_res2798z00_4780;
						}
						{	/* SawC/code.scm 215 */
							obj_t BgL_arg1813z00_4778;

							BgL_arg1813z00_4778 =
								PROCEDURE_REF(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 215 */
								int BgL_offsetz00_4782;

								BgL_offsetz00_4782 = (int) (BgL_objzd2classzd2numz00_4777);
								{	/* SawC/code.scm 215 */
									long BgL_offsetz00_4783;

									BgL_offsetz00_4783 =
										((long) (BgL_offsetz00_4782) - OBJECT_TYPE);
									{	/* SawC/code.scm 215 */
										long BgL_modz00_4784;

										BgL_modz00_4784 =
											(BgL_offsetz00_4783 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawC/code.scm 215 */
											long BgL_restz00_4786;

											BgL_restz00_4786 =
												(BgL_offsetz00_4783 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawC/code.scm 215 */

												{	/* SawC/code.scm 215 */
													obj_t BgL_bucketz00_4788;

													BgL_bucketz00_4788 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4778), BgL_modz00_4784);
													BgL_res2808z00_4812 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4788), BgL_restz00_4786);
					}}}}}}}}
					BgL_method1698z00_3064 = BgL_res2808z00_4812;
				}
				return
					PROCEDURE_ENTRY(BgL_method1698z00_3064) (BgL_method1698z00_3064,
					((obj_t) BgL_funz00_62), BgL_argsz00_63, BEOA);
			}
		}

	}



/* &gen-expr */
	obj_t BGl_z62genzd2exprzb0zzsaw_c_codez00(obj_t BgL_envz00_5233,
		obj_t BgL_funz00_5234, obj_t BgL_argsz00_5235)
	{
		{	/* SawC/code.scm 215 */
			return
				BGl_genzd2exprzd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5234), BgL_argsz00_5235);
		}

	}



/* gen-fun-name */
	obj_t BGl_genzd2funzd2namez00zzsaw_c_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_86)
	{
		{	/* SawC/code.scm 359 */
			{	/* SawC/code.scm 359 */
				obj_t BgL_method1716z00_3065;

				{	/* SawC/code.scm 359 */
					obj_t BgL_res2819z00_4849;

					{	/* SawC/code.scm 359 */
						long BgL_objzd2classzd2numz00_4814;

						{	/* SawC/code.scm 359 */
							long BgL_res2809z00_4817;

							BgL_res2809z00_4817 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_86));
							BgL_objzd2classzd2numz00_4814 = BgL_res2809z00_4817;
						}
						{	/* SawC/code.scm 359 */
							obj_t BgL_arg1813z00_4815;

							BgL_arg1813z00_4815 =
								PROCEDURE_REF(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 359 */
								int BgL_offsetz00_4819;

								BgL_offsetz00_4819 = (int) (BgL_objzd2classzd2numz00_4814);
								{	/* SawC/code.scm 359 */
									long BgL_offsetz00_4820;

									BgL_offsetz00_4820 =
										((long) (BgL_offsetz00_4819) - OBJECT_TYPE);
									{	/* SawC/code.scm 359 */
										long BgL_modz00_4821;

										BgL_modz00_4821 =
											(BgL_offsetz00_4820 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawC/code.scm 359 */
											long BgL_restz00_4823;

											BgL_restz00_4823 =
												(BgL_offsetz00_4820 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawC/code.scm 359 */

												{	/* SawC/code.scm 359 */
													obj_t BgL_bucketz00_4825;

													BgL_bucketz00_4825 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4815), BgL_modz00_4821);
													BgL_res2819z00_4849 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4825), BgL_restz00_4823);
					}}}}}}}}
					BgL_method1716z00_3065 = BgL_res2819z00_4849;
				}
				return
					PROCEDURE_ENTRY(BgL_method1716z00_3065) (BgL_method1716z00_3065,
					((obj_t) BgL_funz00_86), BEOA);
			}
		}

	}



/* &gen-fun-name */
	obj_t BGl_z62genzd2funzd2namez62zzsaw_c_codez00(obj_t BgL_envz00_5236,
		obj_t BgL_funz00_5237)
	{
		{	/* SawC/code.scm 359 */
			return
				BGl_genzd2funzd2namez00zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5237));
		}

	}



/* gen-prefix */
	obj_t BGl_genzd2prefixzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_99)
	{
		{	/* SawC/code.scm 396 */
			{	/* SawC/code.scm 396 */
				obj_t BgL_method1735z00_3066;

				{	/* SawC/code.scm 396 */
					obj_t BgL_res2830z00_4886;

					{	/* SawC/code.scm 396 */
						long BgL_objzd2classzd2numz00_4851;

						{	/* SawC/code.scm 396 */
							long BgL_res2820z00_4854;

							BgL_res2820z00_4854 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_99));
							BgL_objzd2classzd2numz00_4851 = BgL_res2820z00_4854;
						}
						{	/* SawC/code.scm 396 */
							obj_t BgL_arg1813z00_4852;

							BgL_arg1813z00_4852 =
								PROCEDURE_REF(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 396 */
								int BgL_offsetz00_4856;

								BgL_offsetz00_4856 = (int) (BgL_objzd2classzd2numz00_4851);
								{	/* SawC/code.scm 396 */
									long BgL_offsetz00_4857;

									BgL_offsetz00_4857 =
										((long) (BgL_offsetz00_4856) - OBJECT_TYPE);
									{	/* SawC/code.scm 396 */
										long BgL_modz00_4858;

										BgL_modz00_4858 =
											(BgL_offsetz00_4857 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawC/code.scm 396 */
											long BgL_restz00_4860;

											BgL_restz00_4860 =
												(BgL_offsetz00_4857 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawC/code.scm 396 */

												{	/* SawC/code.scm 396 */
													obj_t BgL_bucketz00_4862;

													BgL_bucketz00_4862 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4852), BgL_modz00_4858);
													BgL_res2830z00_4886 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4862), BgL_restz00_4860);
					}}}}}}}}
					BgL_method1735z00_3066 = BgL_res2830z00_4886;
				}
				return
					PROCEDURE_ENTRY(BgL_method1735z00_3066) (BgL_method1735z00_3066,
					((obj_t) BgL_funz00_99), BEOA);
			}
		}

	}



/* &gen-prefix */
	obj_t BGl_z62genzd2prefixzb0zzsaw_c_codez00(obj_t BgL_envz00_5238,
		obj_t BgL_funz00_5239)
	{
		{	/* SawC/code.scm 396 */
			return
				BGl_genzd2prefixzd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_5239));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc2985z00zzsaw_c_codez00,
				BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc2987z00zzsaw_c_codez00,
				BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_setfieldz00zzsaw_defsz00, BGl_proc2988z00zzsaw_c_codez00,
				BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc2989z00zzsaw_c_codez00,
				BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc2990z00zzsaw_c_codez00,
				BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_pragmaz00zzsaw_defsz00,
				BGl_proc2991z00zzsaw_c_codez00, BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_switchz00zzsaw_defsz00,
				BGl_proc2992z00zzsaw_c_codez00, BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc2993z00zzsaw_c_codez00, BGl_string2986z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc2994z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc2996z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc2997z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc2998z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc2999z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc3000z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc3001z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc3002z00zzsaw_c_codez00,
				BGl_string2995z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc3003z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc3005z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc3006z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc3007z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc3008z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc3009z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_ifeqz00zzsaw_defsz00,
				BGl_proc3010z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_ifnez00zzsaw_defsz00,
				BGl_proc3011z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc3012z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc3013z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc3014z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc3015z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc3016z00zzsaw_c_codez00, BGl_string3004z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc3017z00zzsaw_c_codez00,
				BGl_string3004z00zzsaw_c_codez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc3018z00zzsaw_c_codez00,
				BGl_string3019z00zzsaw_c_codez00);
		}

	}



/* &accept-folding?-cvm1765 */
	obj_t BGl_z62acceptzd2foldingzf3zd2cvm1765z91zzsaw_c_codez00(obj_t
		BgL_envz00_5271, obj_t BgL_bz00_5272, obj_t BgL_insz00_5273,
		obj_t BgL_treez00_5274)
	{
		{	/* SawC/code.scm 508 */
			{	/* SawC/code.scm 509 */
				bool_t BgL__ortest_1190z00_5405;

				BgL__ortest_1190z00_5405 =
					BGl_deepzd2movzf3z21zzsaw_c_codez00(BgL_treez00_5274);
				if (BgL__ortest_1190z00_5405)
					{	/* SawC/code.scm 509 */
						return BBOOL(BgL__ortest_1190z00_5405);
					}
				else
					{	/* SawC/code.scm 509 */
						if (BGl_multiplezd2evaluationzd2zzsaw_c_codez00(BgL_insz00_5273,
								BgL_treez00_5274))
							{	/* SawC/code.scm 510 */
								return BFALSE;
							}
						else
							{	/* SawC/code.scm 510 */
								return BTRUE;
							}
					}
			}
		}

	}



/* &gen-prefix-rtl_cast_1763 */
	obj_t BGl_z62genzd2prefixzd2rtl_cast_1763z62zzsaw_c_codez00(obj_t
		BgL_envz00_5275, obj_t BgL_funz00_5276)
	{
		{	/* SawC/code.scm 444 */
			{	/* SawC/code.scm 445 */
				obj_t BgL_arg2382z00_5407;
				obj_t BgL_arg2383z00_5408;

				BgL_arg2382z00_5407 =
					BGl_makezd2typedzd2declarationz00zztype_toolsz00(
					(((BgL_rtl_cast_nullz00_bglt) COBJECT(
								((BgL_rtl_cast_nullz00_bglt) BgL_funz00_5276)))->BgL_typez00),
					BGl_string2912z00zzsaw_c_codez00);
				{	/* SawC/code.scm 445 */
					obj_t BgL_res2893z00_5409;

					{	/* SawC/code.scm 445 */
						obj_t BgL_tmpz00_6909;

						BgL_tmpz00_6909 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2893z00_5409 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6909);
					}
					BgL_arg2383z00_5408 = BgL_res2893z00_5409;
				}
				return bgl_display_obj(BgL_arg2382z00_5407, BgL_arg2383z00_5408);
			}
		}

	}



/* &gen-prefix-rtl_cast1761 */
	obj_t BGl_z62genzd2prefixzd2rtl_cast1761z62zzsaw_c_codez00(obj_t
		BgL_envz00_5277, obj_t BgL_funz00_5278)
	{
		{	/* SawC/code.scm 440 */
			{	/* SawC/code.scm 441 */
				obj_t BgL_arg2377z00_5411;
				obj_t BgL_arg2379z00_5412;

				BgL_arg2377z00_5411 =
					BGl_makezd2typedzd2declarationz00zztype_toolsz00(
					(((BgL_rtl_castz00_bglt) COBJECT(
								((BgL_rtl_castz00_bglt) BgL_funz00_5278)))->BgL_totypez00),
					BGl_string2912z00zzsaw_c_codez00);
				{	/* SawC/code.scm 441 */
					obj_t BgL_res2891z00_5413;

					{	/* SawC/code.scm 441 */
						obj_t BgL_tmpz00_6916;

						BgL_tmpz00_6916 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2891z00_5413 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6916);
					}
					BgL_arg2379z00_5412 = BgL_res2891z00_5413;
				}
				bgl_display_obj(BgL_arg2377z00_5411, BgL_arg2379z00_5412);
			}
			{	/* SawC/code.scm 442 */
				obj_t BgL_arg2381z00_5414;

				{	/* SawC/code.scm 442 */
					obj_t BgL_res2892z00_5415;

					{	/* SawC/code.scm 442 */
						obj_t BgL_tmpz00_6920;

						BgL_tmpz00_6920 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2892z00_5415 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6920);
					}
					BgL_arg2381z00_5414 = BgL_res2892z00_5415;
				}
				return
					bgl_display_string(BGl_string2907z00zzsaw_c_codez00,
					BgL_arg2381z00_5414);
			}
		}

	}



/* &gen-prefix-rtl_vleng1759 */
	obj_t BGl_z62genzd2prefixzd2rtl_vleng1759z62zzsaw_c_codez00(obj_t
		BgL_envz00_5279, obj_t BgL_funz00_5280)
	{
		{	/* SawC/code.scm 437 */
			return
				BGl_vextraz00zzsaw_c_codez00(
				(((BgL_rtl_vlengthz00_bglt) COBJECT(
							((BgL_rtl_vlengthz00_bglt) BgL_funz00_5280)))->BgL_typez00));
		}

	}



/* &gen-prefix-rtl_vset1757 */
	obj_t BGl_z62genzd2prefixzd2rtl_vset1757z62zzsaw_c_codez00(obj_t
		BgL_envz00_5281, obj_t BgL_funz00_5282)
	{
		{	/* SawC/code.scm 434 */
			return
				BGl_vextraz00zzsaw_c_codez00(
				(((BgL_rtl_vsetz00_bglt) COBJECT(
							((BgL_rtl_vsetz00_bglt) BgL_funz00_5282)))->BgL_typez00));
		}

	}



/* &gen-prefix-rtl_vref1755 */
	obj_t BGl_z62genzd2prefixzd2rtl_vref1755z62zzsaw_c_codez00(obj_t
		BgL_envz00_5283, obj_t BgL_funz00_5284)
	{
		{	/* SawC/code.scm 431 */
			return
				BGl_vextraz00zzsaw_c_codez00(
				(((BgL_rtl_vrefz00_bglt) COBJECT(
							((BgL_rtl_vrefz00_bglt) BgL_funz00_5284)))->BgL_typez00));
		}

	}



/* &gen-prefix-rtl_vallo1753 */
	obj_t BGl_z62genzd2prefixzd2rtl_vallo1753z62zzsaw_c_codez00(obj_t
		BgL_envz00_5285, obj_t BgL_funz00_5286)
	{
		{	/* SawC/code.scm 428 */
			return
				BGl_vextraz00zzsaw_c_codez00(
				(((BgL_rtl_vallocz00_bglt) COBJECT(
							((BgL_rtl_vallocz00_bglt) BgL_funz00_5286)))->BgL_typez00));
		}

	}



/* &gen-prefix-rtl_ifne1751 */
	obj_t BGl_z62genzd2prefixzd2rtl_ifne1751z62zzsaw_c_codez00(obj_t
		BgL_envz00_5287, obj_t BgL_funz00_5288)
	{
		{	/* SawC/code.scm 420 */
			{	/* SawC/code.scm 421 */
				int BgL_arg2366z00_5421;

				BgL_arg2366z00_5421 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifnez00_bglt) COBJECT(
										((BgL_rtl_ifnez00_bglt) BgL_funz00_5288)))->BgL_thenz00)))->
					BgL_labelz00);
				{	/* SawC/code.scm 421 */
					obj_t BgL_list2367z00_5422;

					{	/* SawC/code.scm 421 */
						obj_t BgL_arg2368z00_5423;

						{	/* SawC/code.scm 421 */
							obj_t BgL_arg2369z00_5424;

							BgL_arg2369z00_5424 =
								MAKE_YOUNG_PAIR(BGl_string2907z00zzsaw_c_codez00, BNIL);
							BgL_arg2368z00_5423 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg2366z00_5421), BgL_arg2369z00_5424);
						}
						BgL_list2367z00_5422 =
							MAKE_YOUNG_PAIR(BGl_string2914z00zzsaw_c_codez00,
							BgL_arg2368z00_5423);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2367z00_5422);
				}
			}
		}

	}



/* &gen-prefix-rtl_ifeq1749 */
	obj_t BGl_z62genzd2prefixzd2rtl_ifeq1749z62zzsaw_c_codez00(obj_t
		BgL_envz00_5289, obj_t BgL_funz00_5290)
	{
		{	/* SawC/code.scm 417 */
			{	/* SawC/code.scm 418 */
				int BgL_arg2361z00_5426;

				BgL_arg2361z00_5426 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_ifeqz00_bglt) COBJECT(
										((BgL_rtl_ifeqz00_bglt) BgL_funz00_5290)))->BgL_thenz00)))->
					BgL_labelz00);
				{	/* SawC/code.scm 418 */
					obj_t BgL_list2362z00_5427;

					{	/* SawC/code.scm 418 */
						obj_t BgL_arg2363z00_5428;

						{	/* SawC/code.scm 418 */
							obj_t BgL_arg2364z00_5429;

							BgL_arg2364z00_5429 =
								MAKE_YOUNG_PAIR(BGl_string2907z00zzsaw_c_codez00, BNIL);
							BgL_arg2363z00_5428 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg2361z00_5426), BgL_arg2364z00_5429);
						}
						BgL_list2362z00_5427 =
							MAKE_YOUNG_PAIR(BGl_string2914z00zzsaw_c_codez00,
							BgL_arg2363z00_5428);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2362z00_5427);
				}
			}
		}

	}



/* &gen-prefix-rtl_go1747 */
	obj_t BGl_z62genzd2prefixzd2rtl_go1747z62zzsaw_c_codez00(obj_t
		BgL_envz00_5291, obj_t BgL_funz00_5292)
	{
		{	/* SawC/code.scm 414 */
			{	/* SawC/code.scm 415 */
				int BgL_arg2357z00_5431;

				BgL_arg2357z00_5431 =
					(((BgL_blockz00_bglt) COBJECT(
							(((BgL_rtl_goz00_bglt) COBJECT(
										((BgL_rtl_goz00_bglt) BgL_funz00_5292)))->BgL_toz00)))->
					BgL_labelz00);
				{	/* SawC/code.scm 415 */
					obj_t BgL_list2358z00_5432;

					{	/* SawC/code.scm 415 */
						obj_t BgL_arg2359z00_5433;

						BgL_arg2359z00_5433 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg2357z00_5431), BNIL);
						BgL_list2358z00_5432 =
							MAKE_YOUNG_PAIR(BGl_string2914z00zzsaw_c_codez00,
							BgL_arg2359z00_5433);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2358z00_5432);
				}
			}
		}

	}



/* &gen-prefix-rtl_globa1745 */
	obj_t BGl_z62genzd2prefixzd2rtl_globa1745z62zzsaw_c_codez00(obj_t
		BgL_envz00_5293, obj_t BgL_funz00_5294)
	{
		{	/* SawC/code.scm 411 */
			{	/* SawC/code.scm 412 */
				obj_t BgL_arg2354z00_5435;

				{	/* SawC/code.scm 412 */
					BgL_globalz00_bglt BgL_arg2356z00_5436;

					BgL_arg2356z00_5436 =
						(((BgL_rtl_globalrefz00_bglt) COBJECT(
								((BgL_rtl_globalrefz00_bglt) BgL_funz00_5294)))->BgL_varz00);
					{	/* SawC/code.scm 470 */
						obj_t BgL_arg2041z00_5437;

						BgL_arg2041z00_5437 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_arg2356z00_5436)))->BgL_namez00);
						BgL_arg2354z00_5435 =
							BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_5437);
					}
				}
				{	/* SawC/code.scm 412 */
					obj_t BgL_list2355z00_5438;

					BgL_list2355z00_5438 = MAKE_YOUNG_PAIR(BgL_arg2354z00_5435, BNIL);
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2355z00_5438);
				}
			}
		}

	}



/* &gen-prefix-rtl_store1743 */
	obj_t BGl_z62genzd2prefixzd2rtl_store1743z62zzsaw_c_codez00(obj_t
		BgL_envz00_5295, obj_t BgL_funz00_5296)
	{
		{	/* SawC/code.scm 408 */
			{	/* SawC/code.scm 409 */
				obj_t BgL_arg2350z00_5440;

				{	/* SawC/code.scm 409 */
					BgL_globalz00_bglt BgL_arg2353z00_5441;

					BgL_arg2353z00_5441 =
						(((BgL_rtl_storegz00_bglt) COBJECT(
								((BgL_rtl_storegz00_bglt) BgL_funz00_5296)))->BgL_varz00);
					{	/* SawC/code.scm 470 */
						obj_t BgL_arg2041z00_5442;

						BgL_arg2041z00_5442 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_arg2353z00_5441)))->BgL_namez00);
						BgL_arg2350z00_5440 =
							BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_5442);
					}
				}
				{	/* SawC/code.scm 409 */
					obj_t BgL_list2351z00_5443;

					{	/* SawC/code.scm 409 */
						obj_t BgL_arg2352z00_5444;

						BgL_arg2352z00_5444 =
							MAKE_YOUNG_PAIR(BGl_string2907z00zzsaw_c_codez00, BNIL);
						BgL_list2351z00_5443 =
							MAKE_YOUNG_PAIR(BgL_arg2350z00_5440, BgL_arg2352z00_5444);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2351z00_5443);
				}
			}
		}

	}



/* &gen-prefix-rtl_loadf1741 */
	obj_t BGl_z62genzd2prefixzd2rtl_loadf1741z62zzsaw_c_codez00(obj_t
		BgL_envz00_5297, obj_t BgL_funz00_5298)
	{
		{	/* SawC/code.scm 405 */
			{	/* SawC/code.scm 406 */
				obj_t BgL_arg2345z00_5446;

				{	/* SawC/code.scm 406 */
					BgL_globalz00_bglt BgL_arg2349z00_5447;

					BgL_arg2349z00_5447 =
						(((BgL_rtl_loadfunz00_bglt) COBJECT(
								((BgL_rtl_loadfunz00_bglt) BgL_funz00_5298)))->BgL_varz00);
					{	/* SawC/code.scm 470 */
						obj_t BgL_arg2041z00_5448;

						BgL_arg2041z00_5448 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_arg2349z00_5447)))->BgL_namez00);
						BgL_arg2345z00_5446 =
							BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_5448);
					}
				}
				{	/* SawC/code.scm 406 */
					obj_t BgL_list2346z00_5449;

					{	/* SawC/code.scm 406 */
						obj_t BgL_arg2347z00_5450;

						BgL_arg2347z00_5450 = MAKE_YOUNG_PAIR(BgL_arg2345z00_5446, BNIL);
						BgL_list2346z00_5449 =
							MAKE_YOUNG_PAIR(BGl_string3020z00zzsaw_c_codez00,
							BgL_arg2347z00_5450);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2346z00_5449);
				}
			}
		}

	}



/* &gen-prefix-rtl_loadg1739 */
	obj_t BGl_z62genzd2prefixzd2rtl_loadg1739z62zzsaw_c_codez00(obj_t
		BgL_envz00_5299, obj_t BgL_funz00_5300)
	{
		{	/* SawC/code.scm 402 */
			{	/* SawC/code.scm 403 */
				obj_t BgL_arg2341z00_5452;
				obj_t BgL_arg2342z00_5453;

				{	/* SawC/code.scm 403 */
					BgL_globalz00_bglt BgL_arg2343z00_5454;

					BgL_arg2343z00_5454 =
						(((BgL_rtl_loadgz00_bglt) COBJECT(
								((BgL_rtl_loadgz00_bglt) BgL_funz00_5300)))->BgL_varz00);
					{	/* SawC/code.scm 470 */
						obj_t BgL_arg2041z00_5455;

						BgL_arg2041z00_5455 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_arg2343z00_5454)))->BgL_namez00);
						BgL_arg2341z00_5452 =
							BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_5455);
					}
				}
				{	/* SawC/code.scm 403 */
					obj_t BgL_res2890z00_5456;

					{	/* SawC/code.scm 403 */
						obj_t BgL_tmpz00_6987;

						BgL_tmpz00_6987 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2890z00_5456 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6987);
					}
					BgL_arg2342z00_5453 = BgL_res2890z00_5456;
				}
				return bgl_display_obj(BgL_arg2341z00_5452, BgL_arg2342z00_5453);
			}
		}

	}



/* &gen-prefix-rtl_loadi1737 */
	obj_t BGl_z62genzd2prefixzd2rtl_loadi1737z62zzsaw_c_codez00(obj_t
		BgL_envz00_5301, obj_t BgL_funz00_5302)
	{
		{	/* SawC/code.scm 399 */
			return
				BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(
				(((BgL_atomz00_bglt) COBJECT(
							(((BgL_rtl_loadiz00_bglt) COBJECT(
										((BgL_rtl_loadiz00_bglt) BgL_funz00_5302)))->
								BgL_constantz00)))->BgL_valuez00));
		}

	}



/* &gen-fun-name-rtl_ret1733 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_ret1733zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5303, obj_t BgL_funz00_5304)
	{
		{	/* SawC/code.scm 390 */
			{	/* SawC/code.scm 391 */
				obj_t BgL_arg2338z00_5459;

				{	/* SawC/code.scm 391 */
					obj_t BgL_res2889z00_5460;

					{	/* SawC/code.scm 391 */
						obj_t BgL_tmpz00_6995;

						BgL_tmpz00_6995 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2889z00_5460 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6995);
					}
					BgL_arg2338z00_5459 = BgL_res2889z00_5460;
				}
				return
					bgl_display_string(BGl_string3021z00zzsaw_c_codez00,
					BgL_arg2338z00_5459);
			}
		}

	}



/* &gen-fun-name-rtl_loa1731 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_loa1731zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5305, obj_t BgL_funz00_5306)
	{
		{	/* SawC/code.scm 388 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &gen-fun-name-rtl_loa1729 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_loa1729zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5307, obj_t BgL_funz00_5308)
	{
		{	/* SawC/code.scm 387 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &gen-fun-name-rtl_mov1727 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_mov1727zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5309, obj_t BgL_funz00_5310)
	{
		{	/* SawC/code.scm 386 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &gen-fun-name-rtl_vle1725 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_vle1725zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5311, obj_t BgL_funz00_5312)
	{
		{	/* SawC/code.scm 379 */
			return
				BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string3022z00zzsaw_c_codez00,
				(((BgL_rtl_vlengthz00_bglt) COBJECT(
							((BgL_rtl_vlengthz00_bglt) BgL_funz00_5312)))->BgL_typez00));
		}

	}



/* &gen-fun-name-rtl_vse1722 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_vse1722zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5313, obj_t BgL_funz00_5314)
	{
		{	/* SawC/code.scm 376 */
			return
				BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string3023z00zzsaw_c_codez00,
				(((BgL_rtl_vsetz00_bglt) COBJECT(
							((BgL_rtl_vsetz00_bglt) BgL_funz00_5314)))->BgL_typez00));
		}

	}



/* &gen-fun-name-rtl_vre1720 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_vre1720zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5315, obj_t BgL_funz00_5316)
	{
		{	/* SawC/code.scm 373 */
			return
				BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string3024z00zzsaw_c_codez00,
				(((BgL_rtl_vrefz00_bglt) COBJECT(
							((BgL_rtl_vrefz00_bglt) BgL_funz00_5316)))->BgL_typez00));
		}

	}



/* &gen-fun-name-rtl_val1718 */
	obj_t BGl_z62genzd2funzd2namezd2rtl_val1718zb0zzsaw_c_codez00(obj_t
		BgL_envz00_5317, obj_t BgL_funz00_5318)
	{
		{	/* SawC/code.scm 370 */
			return
				BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string3025z00zzsaw_c_codez00,
				(((BgL_rtl_vallocz00_bglt) COBJECT(
							((BgL_rtl_vallocz00_bglt) BgL_funz00_5318)))->BgL_typez00));
		}

	}



/* &gen-expr-rtl_call1714 */
	obj_t BGl_z62genzd2exprzd2rtl_call1714z62zzsaw_c_codez00(obj_t
		BgL_envz00_5319, obj_t BgL_funz00_5320, obj_t BgL_argsz00_5321)
	{
		{	/* SawC/code.scm 317 */
			{
				obj_t BgL_namez00_5494;
				obj_t BgL_argsz00_5495;
				obj_t BgL_namez00_5471;
				obj_t BgL_argsz00_5472;

				{	/* SawC/code.scm 347 */
					BgL_globalz00_bglt BgL_varz00_5511;

					BgL_varz00_5511 =
						(((BgL_rtl_callz00_bglt) COBJECT(
								((BgL_rtl_callz00_bglt) BgL_funz00_5320)))->BgL_varz00);
					{	/* SawC/code.scm 347 */
						obj_t BgL_namez00_5512;

						{	/* SawC/code.scm 470 */
							obj_t BgL_arg2041z00_5513;

							BgL_arg2041z00_5513 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_varz00_5511)))->BgL_namez00);
							BgL_namez00_5512 =
								BGl_inlzd2opzd2zzsaw_c_codez00(BgL_arg2041z00_5513);
						}
						{	/* SawC/code.scm 348 */

							{	/* SawC/code.scm 349 */
								bool_t BgL_test3349z00_7019;

								{	/* SawC/code.scm 350 */
									bool_t BgL_test3350z00_7020;

									{	/* SawC/code.scm 350 */
										BgL_valuez00_bglt BgL_arg2303z00_5514;

										BgL_arg2303z00_5514 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_varz00_5511)))->
											BgL_valuez00);
										BgL_test3350z00_7020 =
											BGl_isazf3zf3zz__objectz00(((obj_t) BgL_arg2303z00_5514),
											BGl_cfunz00zzast_varz00);
									}
									if (BgL_test3350z00_7020)
										{	/* SawC/code.scm 350 */
											if (
												(((BgL_cfunz00_bglt) COBJECT(
															((BgL_cfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_varz00_5511)))->BgL_valuez00))))->
													BgL_infixzf3zf3))
												{	/* SawC/code.scm 352 */
													bool_t BgL_test3352z00_7030;

													if (
														((((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_5511)))->
																BgL_namez00) == BgL_namez00_5512))
														{	/* SawC/code.scm 320 */
															BgL_test3352z00_7030 = ((bool_t) 0);
														}
													else
														{	/* SawC/code.scm 320 */
															BgL_test3352z00_7030 = ((bool_t) 1);
														}
													if (BgL_test3352z00_7030)
														{	/* SawC/code.scm 352 */
															BgL_test3349z00_7019 = ((bool_t) 0);
														}
													else
														{	/* SawC/code.scm 352 */
															BgL_test3349z00_7019 = ((bool_t) 1);
														}
												}
											else
												{	/* SawC/code.scm 351 */
													BgL_test3349z00_7019 = ((bool_t) 0);
												}
										}
									else
										{	/* SawC/code.scm 350 */
											BgL_test3349z00_7019 = ((bool_t) 0);
										}
								}
								if (BgL_test3349z00_7019)
									{	/* SawC/code.scm 349 */
										BgL_namez00_5494 = BgL_namez00_5512;
										BgL_argsz00_5495 = BgL_argsz00_5321;
										if (NULLP(BgL_argsz00_5495))
											{	/* SawC/code.scm 324 */
												obj_t BgL_list2310z00_5496;

												{	/* SawC/code.scm 324 */
													obj_t BgL_arg2311z00_5497;

													{	/* SawC/code.scm 324 */
														obj_t BgL_arg2312z00_5498;

														BgL_arg2312z00_5498 =
															MAKE_YOUNG_PAIR(BGl_string2908z00zzsaw_c_codez00,
															BNIL);
														BgL_arg2311z00_5497 =
															MAKE_YOUNG_PAIR(BgL_namez00_5494,
															BgL_arg2312z00_5498);
													}
													BgL_list2310z00_5496 =
														MAKE_YOUNG_PAIR(BGl_string2906z00zzsaw_c_codez00,
														BgL_arg2311z00_5497);
												}
												return
													BGl_displayza2za2zz__r4_output_6_10_3z00
													(BgL_list2310z00_5496);
											}
										else
											{	/* SawC/code.scm 323 */
												{	/* SawC/code.scm 326 */
													obj_t BgL_arg2313z00_5499;

													{	/* SawC/code.scm 326 */
														obj_t BgL_res2856z00_5500;

														{	/* SawC/code.scm 326 */
															obj_t BgL_tmpz00_7041;

															BgL_tmpz00_7041 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2856z00_5500 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7041);
														}
														BgL_arg2313z00_5499 = BgL_res2856z00_5500;
													}
													bgl_display_string(BGl_string2906z00zzsaw_c_codez00,
														BgL_arg2313z00_5499);
												}
												{	/* SawC/code.scm 327 */
													obj_t BgL_arg2314z00_5501;

													BgL_arg2314z00_5501 = CAR(((obj_t) BgL_argsz00_5495));
													BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2314z00_5501);
												}
												{	/* SawC/code.scm 328 */
													obj_t BgL_arg2316z00_5502;

													{	/* SawC/code.scm 328 */
														obj_t BgL_res2857z00_5503;

														{	/* SawC/code.scm 328 */
															obj_t BgL_tmpz00_7048;

															BgL_tmpz00_7048 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2857z00_5503 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7048);
														}
														BgL_arg2316z00_5502 = BgL_res2857z00_5503;
													}
													bgl_display_obj(BgL_namez00_5494,
														BgL_arg2316z00_5502);
												}
												{	/* SawC/code.scm 329 */
													obj_t BgL_g1188z00_5504;

													BgL_g1188z00_5504 = CDR(((obj_t) BgL_argsz00_5495));
													{
														obj_t BgL_argsz00_5506;

														BgL_argsz00_5506 = BgL_g1188z00_5504;
													BgL_loopz00_5505:
														if (PAIRP(BgL_argsz00_5506))
															{	/* SawC/code.scm 330 */
																BGl_genzd2regzd2zzsaw_c_codez00(CAR
																	(BgL_argsz00_5506));
																{	/* SawC/code.scm 332 */
																	obj_t BgL_arg2320z00_5507;

																	{	/* SawC/code.scm 332 */
																		obj_t BgL_res2859z00_5508;

																		{	/* SawC/code.scm 332 */
																			obj_t BgL_tmpz00_7058;

																			BgL_tmpz00_7058 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res2859z00_5508 =
																				BGL_ENV_CURRENT_OUTPUT_PORT
																				(BgL_tmpz00_7058);
																		}
																		BgL_arg2320z00_5507 = BgL_res2859z00_5508;
																	}
																	bgl_display_obj(BgL_namez00_5494,
																		BgL_arg2320z00_5507);
																}
																{
																	obj_t BgL_argsz00_7062;

																	BgL_argsz00_7062 = CDR(BgL_argsz00_5506);
																	BgL_argsz00_5506 = BgL_argsz00_7062;
																	goto BgL_loopz00_5505;
																}
															}
														else
															{	/* SawC/code.scm 330 */
																((bool_t) 0);
															}
													}
												}
												{	/* SawC/code.scm 334 */
													obj_t BgL_arg2322z00_5509;

													{	/* SawC/code.scm 334 */
														obj_t BgL_res2860z00_5510;

														{	/* SawC/code.scm 334 */
															obj_t BgL_tmpz00_7064;

															BgL_tmpz00_7064 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2860z00_5510 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7064);
														}
														BgL_arg2322z00_5509 = BgL_res2860z00_5510;
													}
													return
														bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
														BgL_arg2322z00_5509);
												}
											}
									}
								else
									{	/* SawC/code.scm 349 */
										BgL_namez00_5471 = BgL_namez00_5512;
										BgL_argsz00_5472 = BgL_argsz00_5321;
										{	/* SawC/code.scm 337 */
											obj_t BgL_list2324z00_5473;

											{	/* SawC/code.scm 337 */
												obj_t BgL_arg2325z00_5474;

												BgL_arg2325z00_5474 =
													MAKE_YOUNG_PAIR(BGl_string2906z00zzsaw_c_codez00,
													BNIL);
												BgL_list2324z00_5473 =
													MAKE_YOUNG_PAIR(BgL_namez00_5471,
													BgL_arg2325z00_5474);
											}
											BGl_displayza2za2zz__r4_output_6_10_3z00
												(BgL_list2324z00_5473);
										}
										{	/* SawC/code.scm 338 */
											bool_t BgL_test3356z00_7071;

											{	/* SawC/code.scm 338 */
												bool_t BgL_test3357z00_7072;

												{	/* SawC/code.scm 338 */
													bool_t BgL_res2865z00_5475;

													{	/* SawC/code.scm 338 */
														long BgL_l1z00_5476;

														BgL_l1z00_5476 =
															STRING_LENGTH(((obj_t) BgL_namez00_5471));
														if ((BgL_l1z00_5476 == ((long) 17)))
															{	/* SawC/code.scm 338 */
																int BgL_arg1267z00_5477;

																{	/* SawC/code.scm 338 */
																	char *BgL_auxz00_7080;
																	char *BgL_tmpz00_7077;

																	BgL_auxz00_7080 =
																		BSTRING_TO_STRING
																		(BGl_string3026z00zzsaw_c_codez00);
																	BgL_tmpz00_7077 =
																		BSTRING_TO_STRING(((obj_t)
																			BgL_namez00_5471));
																	BgL_arg1267z00_5477 =
																		memcmp(BgL_tmpz00_7077, BgL_auxz00_7080,
																		BgL_l1z00_5476);
																}
																BgL_res2865z00_5475 =
																	((long) (BgL_arg1267z00_5477) == ((long) 0));
															}
														else
															{	/* SawC/code.scm 338 */
																BgL_res2865z00_5475 = ((bool_t) 0);
															}
													}
													BgL_test3357z00_7072 = BgL_res2865z00_5475;
												}
												if (BgL_test3357z00_7072)
													{	/* SawC/code.scm 338 */
														BgL_test3356z00_7071 = ((bool_t) 1);
													}
												else
													{	/* SawC/code.scm 339 */
														bool_t BgL_test3359z00_7085;

														{	/* SawC/code.scm 339 */
															bool_t BgL_res2870z00_5478;

															{	/* SawC/code.scm 339 */
																long BgL_l1z00_5479;

																BgL_l1z00_5479 =
																	STRING_LENGTH(((obj_t) BgL_namez00_5471));
																if ((BgL_l1z00_5479 == ((long) 17)))
																	{	/* SawC/code.scm 339 */
																		int BgL_arg1267z00_5480;

																		{	/* SawC/code.scm 339 */
																			char *BgL_auxz00_7093;
																			char *BgL_tmpz00_7090;

																			BgL_auxz00_7093 =
																				BSTRING_TO_STRING
																				(BGl_string3027z00zzsaw_c_codez00);
																			BgL_tmpz00_7090 =
																				BSTRING_TO_STRING(((obj_t)
																					BgL_namez00_5471));
																			BgL_arg1267z00_5480 =
																				memcmp(BgL_tmpz00_7090, BgL_auxz00_7093,
																				BgL_l1z00_5479);
																		}
																		BgL_res2870z00_5478 =
																			(
																			(long) (BgL_arg1267z00_5480) ==
																			((long) 0));
																	}
																else
																	{	/* SawC/code.scm 339 */
																		BgL_res2870z00_5478 = ((bool_t) 0);
																	}
															}
															BgL_test3359z00_7085 = BgL_res2870z00_5478;
														}
														if (BgL_test3359z00_7085)
															{	/* SawC/code.scm 339 */
																BgL_test3356z00_7071 = ((bool_t) 1);
															}
														else
															{	/* SawC/code.scm 340 */
																bool_t BgL_test3361z00_7098;

																{	/* SawC/code.scm 340 */
																	bool_t BgL_res2875z00_5481;

																	{	/* SawC/code.scm 340 */
																		long BgL_l1z00_5482;

																		BgL_l1z00_5482 =
																			STRING_LENGTH(((obj_t) BgL_namez00_5471));
																		if ((BgL_l1z00_5482 == ((long) 17)))
																			{	/* SawC/code.scm 340 */
																				int BgL_arg1267z00_5483;

																				{	/* SawC/code.scm 340 */
																					char *BgL_auxz00_7106;
																					char *BgL_tmpz00_7103;

																					BgL_auxz00_7106 =
																						BSTRING_TO_STRING
																						(BGl_string3028z00zzsaw_c_codez00);
																					BgL_tmpz00_7103 =
																						BSTRING_TO_STRING(((obj_t)
																							BgL_namez00_5471));
																					BgL_arg1267z00_5483 =
																						memcmp(BgL_tmpz00_7103,
																						BgL_auxz00_7106, BgL_l1z00_5482);
																				}
																				BgL_res2875z00_5481 =
																					(
																					(long) (BgL_arg1267z00_5483) ==
																					((long) 0));
																			}
																		else
																			{	/* SawC/code.scm 340 */
																				BgL_res2875z00_5481 = ((bool_t) 0);
																			}
																	}
																	BgL_test3361z00_7098 = BgL_res2875z00_5481;
																}
																if (BgL_test3361z00_7098)
																	{	/* SawC/code.scm 340 */
																		BgL_test3356z00_7071 = ((bool_t) 1);
																	}
																else
																	{	/* SawC/code.scm 341 */
																		bool_t BgL_test3363z00_7111;

																		{	/* SawC/code.scm 341 */
																			bool_t BgL_res2880z00_5484;

																			{	/* SawC/code.scm 341 */
																				long BgL_l1z00_5485;

																				BgL_l1z00_5485 =
																					STRING_LENGTH(
																					((obj_t) BgL_namez00_5471));
																				if ((BgL_l1z00_5485 == ((long) 17)))
																					{	/* SawC/code.scm 341 */
																						int BgL_arg1267z00_5486;

																						{	/* SawC/code.scm 341 */
																							char *BgL_auxz00_7119;
																							char *BgL_tmpz00_7116;

																							BgL_auxz00_7119 =
																								BSTRING_TO_STRING
																								(BGl_string3029z00zzsaw_c_codez00);
																							BgL_tmpz00_7116 =
																								BSTRING_TO_STRING(((obj_t)
																									BgL_namez00_5471));
																							BgL_arg1267z00_5486 =
																								memcmp(BgL_tmpz00_7116,
																								BgL_auxz00_7119,
																								BgL_l1z00_5485);
																						}
																						BgL_res2880z00_5484 =
																							(
																							(long) (BgL_arg1267z00_5486) ==
																							((long) 0));
																					}
																				else
																					{	/* SawC/code.scm 341 */
																						BgL_res2880z00_5484 = ((bool_t) 0);
																					}
																			}
																			BgL_test3363z00_7111 =
																				BgL_res2880z00_5484;
																		}
																		if (BgL_test3363z00_7111)
																			{	/* SawC/code.scm 341 */
																				BgL_test3356z00_7071 = ((bool_t) 1);
																			}
																		else
																			{	/* SawC/code.scm 342 */
																				bool_t BgL_res2885z00_5487;

																				{	/* SawC/code.scm 342 */
																					long BgL_l1z00_5488;

																					BgL_l1z00_5488 =
																						STRING_LENGTH(
																						((obj_t) BgL_namez00_5471));
																					if ((BgL_l1z00_5488 == ((long) 16)))
																						{	/* SawC/code.scm 342 */
																							int BgL_arg1267z00_5489;

																							{	/* SawC/code.scm 342 */
																								char *BgL_auxz00_7131;
																								char *BgL_tmpz00_7128;

																								BgL_auxz00_7131 =
																									BSTRING_TO_STRING
																									(BGl_string3030z00zzsaw_c_codez00);
																								BgL_tmpz00_7128 =
																									BSTRING_TO_STRING(((obj_t)
																										BgL_namez00_5471));
																								BgL_arg1267z00_5489 =
																									memcmp(BgL_tmpz00_7128,
																									BgL_auxz00_7131,
																									BgL_l1z00_5488);
																							}
																							BgL_res2885z00_5487 =
																								(
																								(long) (BgL_arg1267z00_5489) ==
																								((long) 0));
																						}
																					else
																						{	/* SawC/code.scm 342 */
																							BgL_res2885z00_5487 =
																								((bool_t) 0);
																						}
																				}
																				BgL_test3356z00_7071 =
																					BgL_res2885z00_5487;
																			}
																	}
															}
													}
											}
											if (BgL_test3356z00_7071)
												{	/* SawC/code.scm 343 */
													obj_t BgL_arg2331z00_5490;

													{	/* SawC/code.scm 343 */
														obj_t BgL_res2886z00_5491;

														{	/* SawC/code.scm 343 */
															obj_t BgL_tmpz00_7136;

															BgL_tmpz00_7136 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2886z00_5491 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7136);
														}
														BgL_arg2331z00_5490 = BgL_res2886z00_5491;
													}
													bgl_display_string(BGl_string3031z00zzsaw_c_codez00,
														BgL_arg2331z00_5490);
												}
											else
												{	/* SawC/code.scm 338 */
													BFALSE;
												}
										}
										BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_5472);
										{	/* SawC/code.scm 345 */
											obj_t BgL_arg2332z00_5492;

											{	/* SawC/code.scm 345 */
												obj_t BgL_res2887z00_5493;

												{	/* SawC/code.scm 345 */
													obj_t BgL_tmpz00_7141;

													BgL_tmpz00_7141 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2887z00_5493 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7141);
												}
												BgL_arg2332z00_5492 = BgL_res2887z00_5493;
											}
											return
												bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
												BgL_arg2332z00_5492);
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* &gen-expr-rtl_switch1712 */
	obj_t BGl_z62genzd2exprzd2rtl_switch1712z62zzsaw_c_codez00(obj_t
		BgL_envz00_5322, obj_t BgL_funz00_5323, obj_t BgL_argsz00_5324)
	{
		{	/* SawC/code.scm 298 */
			{	/* SawC/code.scm 299 */
				obj_t BgL_patsz00_5516;

				BgL_patsz00_5516 =
					(((BgL_rtl_selectz00_bglt) COBJECT(
							((BgL_rtl_selectz00_bglt)
								((BgL_rtl_switchz00_bglt) BgL_funz00_5323))))->BgL_patternsz00);
				{	/* SawC/code.scm 300 */
					obj_t BgL_arg2273z00_5517;

					{	/* SawC/code.scm 300 */
						obj_t BgL_res2848z00_5518;

						{	/* SawC/code.scm 300 */
							obj_t BgL_tmpz00_7148;

							BgL_tmpz00_7148 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2848z00_5518 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7148);
						}
						BgL_arg2273z00_5517 = BgL_res2848z00_5518;
					}
					bgl_display_string(BGl_string3032z00zzsaw_c_codez00,
						BgL_arg2273z00_5517);
				}
				{	/* SawC/code.scm 301 */
					obj_t BgL_arg2275z00_5519;

					BgL_arg2275z00_5519 = CAR(((obj_t) BgL_argsz00_5324));
					BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2275z00_5519);
				}
				{	/* SawC/code.scm 302 */
					obj_t BgL_arg2276z00_5520;

					{	/* SawC/code.scm 302 */
						obj_t BgL_res2849z00_5521;

						{	/* SawC/code.scm 302 */
							obj_t BgL_tmpz00_7155;

							BgL_tmpz00_7155 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2849z00_5521 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7155);
						}
						BgL_arg2276z00_5520 = BgL_res2849z00_5521;
					}
					bgl_display_string(BGl_string3033z00zzsaw_c_codez00,
						BgL_arg2276z00_5520);
				}
				{	/* SawC/code.scm 303 */
					obj_t BgL_g1694z00_5522;

					BgL_g1694z00_5522 =
						(((BgL_rtl_switchz00_bglt) COBJECT(
								((BgL_rtl_switchz00_bglt) BgL_funz00_5323)))->BgL_labelsz00);
					{
						obj_t BgL_ll1691z00_5524;
						obj_t BgL_ll1692z00_5525;

						BgL_ll1691z00_5524 = BgL_patsz00_5516;
						BgL_ll1692z00_5525 = BgL_g1694z00_5522;
					BgL_zc3z04anonymousza32277ze3z87_5523:
						if (NULLP(BgL_ll1691z00_5524))
							{	/* SawC/code.scm 303 */
								((bool_t) 1);
							}
						else
							{	/* SawC/code.scm 303 */
								{	/* SawC/code.scm 310 */
									obj_t BgL_patz00_5526;
									obj_t BgL_labz00_5527;

									BgL_patz00_5526 = CAR(((obj_t) BgL_ll1691z00_5524));
									BgL_labz00_5527 = CAR(((obj_t) BgL_ll1692z00_5525));
									if ((BgL_patz00_5526 == CNST_TABLE_REF(((long) 9))))
										{	/* SawC/code.scm 305 */
											obj_t BgL_list2280z00_5528;

											BgL_list2280z00_5528 =
												MAKE_YOUNG_PAIR(BGl_string3034z00zzsaw_c_codez00, BNIL);
											BGl_displayza2za2zz__r4_output_6_10_3z00
												(BgL_list2280z00_5528);
										}
									else
										{
											obj_t BgL_l1689z00_5530;

											{	/* SawC/code.scm 306 */
												bool_t BgL_tmpz00_7172;

												BgL_l1689z00_5530 = BgL_patz00_5526;
											BgL_zc3z04anonymousza32281ze3z87_5529:
												if (PAIRP(BgL_l1689z00_5530))
													{	/* SawC/code.scm 306 */
														{	/* SawC/code.scm 307 */
															obj_t BgL_nz00_5531;

															BgL_nz00_5531 = CAR(BgL_l1689z00_5530);
															{	/* SawC/code.scm 307 */
																obj_t BgL_arg2283z00_5532;

																{	/* SawC/code.scm 307 */
																	obj_t BgL_res2852z00_5533;

																	{	/* SawC/code.scm 307 */
																		obj_t BgL_tmpz00_7176;

																		BgL_tmpz00_7176 = BGL_CURRENT_DYNAMIC_ENV();
																		BgL_res2852z00_5533 =
																			BGL_ENV_CURRENT_OUTPUT_PORT
																			(BgL_tmpz00_7176);
																	}
																	BgL_arg2283z00_5532 = BgL_res2852z00_5533;
																}
																bgl_display_string
																	(BGl_string3035z00zzsaw_c_codez00,
																	BgL_arg2283z00_5532);
															}
															BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00
																(BgL_nz00_5531);
															{	/* SawC/code.scm 309 */
																obj_t BgL_arg2284z00_5534;

																{	/* SawC/code.scm 309 */
																	obj_t BgL_res2853z00_5535;

																	{	/* SawC/code.scm 309 */
																		obj_t BgL_tmpz00_7181;

																		BgL_tmpz00_7181 = BGL_CURRENT_DYNAMIC_ENV();
																		BgL_res2853z00_5535 =
																			BGL_ENV_CURRENT_OUTPUT_PORT
																			(BgL_tmpz00_7181);
																	}
																	BgL_arg2284z00_5534 = BgL_res2853z00_5535;
																}
																bgl_display_string
																	(BGl_string2913z00zzsaw_c_codez00,
																	BgL_arg2284z00_5534);
															}
														}
														{
															obj_t BgL_l1689z00_7185;

															BgL_l1689z00_7185 = CDR(BgL_l1689z00_5530);
															BgL_l1689z00_5530 = BgL_l1689z00_7185;
															goto BgL_zc3z04anonymousza32281ze3z87_5529;
														}
													}
												else
													{	/* SawC/code.scm 306 */
														BgL_tmpz00_7172 = ((bool_t) 1);
													}
												BBOOL(BgL_tmpz00_7172);
											}
										}
									{	/* SawC/code.scm 311 */
										int BgL_arg2286z00_5536;

										BgL_arg2286z00_5536 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_labz00_5527)))->
											BgL_labelz00);
										{	/* SawC/code.scm 311 */
											obj_t BgL_list2287z00_5537;

											{	/* SawC/code.scm 311 */
												obj_t BgL_arg2288z00_5538;

												{	/* SawC/code.scm 311 */
													obj_t BgL_arg2289z00_5539;

													BgL_arg2289z00_5539 =
														MAKE_YOUNG_PAIR(BGl_string3036z00zzsaw_c_codez00,
														BNIL);
													BgL_arg2288z00_5538 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2286z00_5536),
														BgL_arg2289z00_5539);
												}
												BgL_list2287z00_5537 =
													MAKE_YOUNG_PAIR(BGl_string3037z00zzsaw_c_codez00,
													BgL_arg2288z00_5538);
											}
											BGl_displayza2za2zz__r4_output_6_10_3z00
												(BgL_list2287z00_5537);
								}}}
								{	/* SawC/code.scm 303 */
									obj_t BgL_arg2290z00_5540;
									obj_t BgL_arg2291z00_5541;

									BgL_arg2290z00_5540 = CDR(((obj_t) BgL_ll1691z00_5524));
									BgL_arg2291z00_5541 = CDR(((obj_t) BgL_ll1692z00_5525));
									{
										obj_t BgL_ll1692z00_7200;
										obj_t BgL_ll1691z00_7199;

										BgL_ll1691z00_7199 = BgL_arg2290z00_5540;
										BgL_ll1692z00_7200 = BgL_arg2291z00_5541;
										BgL_ll1692z00_5525 = BgL_ll1692z00_7200;
										BgL_ll1691z00_5524 = BgL_ll1691z00_7199;
										goto BgL_zc3z04anonymousza32277ze3z87_5523;
									}
								}
							}
					}
				}
				{	/* SawC/code.scm 314 */
					obj_t BgL_arg2292z00_5542;

					{	/* SawC/code.scm 314 */
						obj_t BgL_res2854z00_5543;

						{	/* SawC/code.scm 314 */
							obj_t BgL_tmpz00_7201;

							BgL_tmpz00_7201 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2854z00_5543 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7201);
						}
						BgL_arg2292z00_5542 = BgL_res2854z00_5543;
					}
					return
						bgl_display_string(BGl_string3038z00zzsaw_c_codez00,
						BgL_arg2292z00_5542);
				}
			}
		}

	}



/* &gen-expr-rtl_pragma1710 */
	obj_t BGl_z62genzd2exprzd2rtl_pragma1710z62zzsaw_c_codez00(obj_t
		BgL_envz00_5325, obj_t BgL_funz00_5326, obj_t BgL_argsz00_5327)
	{
		{	/* SawC/code.scm 293 */
			BGl_emitzd2pragmazd2zzsaw_c_codez00(
				(((BgL_rtl_pragmaz00_bglt) COBJECT(
							((BgL_rtl_pragmaz00_bglt) BgL_funz00_5326)))->BgL_formatz00),
				BgL_argsz00_5327);
			{	/* SawC/code.scm 295 */
				obj_t BgL_arg2272z00_5545;

				{	/* SawC/code.scm 295 */
					obj_t BgL_res2847z00_5546;

					{	/* SawC/code.scm 295 */
						obj_t BgL_tmpz00_7208;

						BgL_tmpz00_7208 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2847z00_5546 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7208);
					}
					BgL_arg2272z00_5545 = BgL_res2847z00_5546;
				}
				return
					bgl_display_string(BGl_string2912z00zzsaw_c_codez00,
					BgL_arg2272z00_5545);
			}
		}

	}



/* &gen-expr-rtl_protect1708 */
	obj_t BGl_z62genzd2exprzd2rtl_protect1708z62zzsaw_c_codez00(obj_t
		BgL_envz00_5328, obj_t BgL_funz00_5329, obj_t BgL_argsz00_5330)
	{
		{	/* SawC/code.scm 283 */
			{	/* SawC/code.scm 285 */
				obj_t BgL_arg2267z00_5548;

				{	/* SawC/code.scm 285 */
					obj_t BgL_res2844z00_5549;

					{	/* SawC/code.scm 285 */
						obj_t BgL_tmpz00_7212;

						BgL_tmpz00_7212 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2844z00_5549 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7212);
					}
					BgL_arg2267z00_5548 = BgL_res2844z00_5549;
				}
				bgl_display_string(BGl_string3039z00zzsaw_c_codez00,
					BgL_arg2267z00_5548);
			}
			{	/* SawC/code.scm 286 */
				obj_t BgL_arg2268z00_5550;

				{	/* SawC/code.scm 286 */
					obj_t BgL_res2845z00_5551;

					{	/* SawC/code.scm 286 */
						obj_t BgL_tmpz00_7216;

						BgL_tmpz00_7216 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2845z00_5551 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7216);
					}
					BgL_arg2268z00_5550 = BgL_res2845z00_5551;
				}
				bgl_display_string(BGl_string3040z00zzsaw_c_codez00,
					BgL_arg2268z00_5550);
			}
			{	/* SawC/code.scm 287 */
				obj_t BgL_arg2269z00_5552;

				{	/* SawC/code.scm 287 */
					obj_t BgL_res2846z00_5553;

					{	/* SawC/code.scm 287 */
						obj_t BgL_tmpz00_7220;

						BgL_tmpz00_7220 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2846z00_5553 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7220);
					}
					BgL_arg2269z00_5552 = BgL_res2846z00_5553;
				}
				bgl_display_string(BGl_string3041z00zzsaw_c_codez00,
					BgL_arg2269z00_5552);
			}
			bgl_display_string(BGl_string3042z00zzsaw_c_codez00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			bgl_display_string(BGl_string3043z00zzsaw_c_codez00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			return bgl_display_string(BGl_string3044z00zzsaw_c_codez00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &gen-expr-rtl_funcall1706 */
	obj_t BGl_z62genzd2exprzd2rtl_funcall1706z62zzsaw_c_codez00(obj_t
		BgL_envz00_5331, obj_t BgL_funz00_5332, obj_t BgL_argsz00_5333)
	{
		{	/* SawC/code.scm 263 */
			if (CBOOL(BGl_za2stdcza2z00zzengine_paramz00))
				{	/* SawC/code.scm 264 */
					{	/* SawC/code.scm 265 */
						obj_t BgL_arg2261z00_5555;

						{	/* SawC/code.scm 265 */
							obj_t BgL_res2840z00_5556;

							{	/* SawC/code.scm 265 */
								obj_t BgL_tmpz00_7229;

								BgL_tmpz00_7229 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2840z00_5556 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7229);
							}
							BgL_arg2261z00_5555 = BgL_res2840z00_5556;
						}
						bgl_display_string(BGl_string3045z00zzsaw_c_codez00,
							BgL_arg2261z00_5555);
					}
					{	/* SawC/code.scm 266 */
						obj_t BgL_arg2262z00_5557;

						BgL_arg2262z00_5557 = CAR(((obj_t) BgL_argsz00_5333));
						BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2262z00_5557);
					}
					{	/* SawC/code.scm 267 */
						obj_t BgL_arg2263z00_5558;

						{	/* SawC/code.scm 267 */
							obj_t BgL_res2841z00_5559;

							{	/* SawC/code.scm 267 */
								obj_t BgL_tmpz00_7236;

								BgL_tmpz00_7236 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2841z00_5559 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7236);
							}
							BgL_arg2263z00_5558 = BgL_res2841z00_5559;
						}
						bgl_display_string(BGl_string3046z00zzsaw_c_codez00,
							BgL_arg2263z00_5558);
					}
					BGl_genzd2Xfuncallzd2zzsaw_c_codez00(BGl_string2912z00zzsaw_c_codez00,
						BgL_argsz00_5333, ((bool_t) 1));
					{	/* SawC/code.scm 269 */
						obj_t BgL_arg2264z00_5560;

						{	/* SawC/code.scm 269 */
							obj_t BgL_res2842z00_5561;

							{	/* SawC/code.scm 269 */
								obj_t BgL_tmpz00_7241;

								BgL_tmpz00_7241 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2842z00_5561 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7241);
							}
							BgL_arg2264z00_5560 = BgL_res2842z00_5561;
						}
						bgl_display_string(BGl_string3047z00zzsaw_c_codez00,
							BgL_arg2264z00_5560);
					}
					BGl_genzd2Xfuncallzd2zzsaw_c_codez00(BGl_string2912z00zzsaw_c_codez00,
						BgL_argsz00_5333, ((bool_t) 0));
					{	/* SawC/code.scm 271 */
						obj_t BgL_arg2265z00_5562;

						{	/* SawC/code.scm 271 */
							obj_t BgL_res2843z00_5563;

							{	/* SawC/code.scm 271 */
								obj_t BgL_tmpz00_7246;

								BgL_tmpz00_7246 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2843z00_5563 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7246);
							}
							BgL_arg2265z00_5562 = BgL_res2843z00_5563;
						}
						return
							bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
							BgL_arg2265z00_5562);
					}
				}
			else
				{	/* SawC/code.scm 264 */
					return
						BGl_genzd2Xfuncallzd2zzsaw_c_codez00
						(BGl_string2912z00zzsaw_c_codez00, BgL_argsz00_5333, ((bool_t) 1));
				}
		}

	}



/* &gen-expr-rtl_setfiel1704 */
	obj_t BGl_z62genzd2exprzd2rtl_setfiel1704z62zzsaw_c_codez00(obj_t
		BgL_envz00_5334, obj_t BgL_funz00_5335, obj_t BgL_argsz00_5336)
	{
		{	/* SawC/code.scm 252 */
			{	/* SawC/code.scm 253 */
				obj_t BgL_arg2252z00_5565;

				{	/* SawC/code.scm 253 */
					obj_t BgL_res2835z00_5566;

					{	/* SawC/code.scm 253 */
						obj_t BgL_tmpz00_7251;

						BgL_tmpz00_7251 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2835z00_5566 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7251);
					}
					BgL_arg2252z00_5565 = BgL_res2835z00_5566;
				}
				bgl_display_string(BGl_string3048z00zzsaw_c_codez00,
					BgL_arg2252z00_5565);
			}
			BGl_genzd2prefixzd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) ((BgL_rtl_setfieldz00_bglt) BgL_funz00_5335)));
			{	/* SawC/code.scm 255 */
				obj_t BgL_arg2253z00_5567;

				BgL_arg2253z00_5567 = CAR(((obj_t) BgL_argsz00_5336));
				BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2253z00_5567);
			}
			{	/* SawC/code.scm 256 */
				obj_t BgL_arg2254z00_5568;

				{	/* SawC/code.scm 256 */
					obj_t BgL_res2836z00_5569;

					{	/* SawC/code.scm 256 */
						obj_t BgL_tmpz00_7261;

						BgL_tmpz00_7261 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2836z00_5569 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7261);
					}
					BgL_arg2254z00_5568 = BgL_res2836z00_5569;
				}
				bgl_display_string(BGl_string3049z00zzsaw_c_codez00,
					BgL_arg2254z00_5568);
			}
			{	/* SawC/code.scm 257 */
				obj_t BgL_arg2256z00_5570;
				obj_t BgL_arg2257z00_5571;

				BgL_arg2256z00_5570 =
					(((BgL_rtl_setfieldz00_bglt) COBJECT(
							((BgL_rtl_setfieldz00_bglt) BgL_funz00_5335)))->BgL_namez00);
				{	/* SawC/code.scm 257 */
					obj_t BgL_res2837z00_5572;

					{	/* SawC/code.scm 257 */
						obj_t BgL_tmpz00_7267;

						BgL_tmpz00_7267 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2837z00_5572 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7267);
					}
					BgL_arg2257z00_5571 = BgL_res2837z00_5572;
				}
				bgl_display_obj(BgL_arg2256z00_5570, BgL_arg2257z00_5571);
			}
			{	/* SawC/code.scm 258 */
				obj_t BgL_arg2258z00_5573;

				{	/* SawC/code.scm 258 */
					obj_t BgL_res2838z00_5574;

					{	/* SawC/code.scm 258 */
						obj_t BgL_tmpz00_7271;

						BgL_tmpz00_7271 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2838z00_5574 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7271);
					}
					BgL_arg2258z00_5573 = BgL_res2838z00_5574;
				}
				bgl_display_string(BGl_string3050z00zzsaw_c_codez00,
					BgL_arg2258z00_5573);
			}
			{	/* SawC/code.scm 259 */
				obj_t BgL_arg2259z00_5575;

				{	/* SawC/code.scm 259 */
					obj_t BgL_pairz00_5576;

					BgL_pairz00_5576 = CDR(((obj_t) BgL_argsz00_5336));
					BgL_arg2259z00_5575 = CAR(BgL_pairz00_5576);
				}
				BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2259z00_5575);
			}
			{	/* SawC/code.scm 260 */
				obj_t BgL_arg2260z00_5577;

				{	/* SawC/code.scm 260 */
					obj_t BgL_res2839z00_5578;

					{	/* SawC/code.scm 260 */
						obj_t BgL_tmpz00_7279;

						BgL_tmpz00_7279 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2839z00_5578 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7279);
					}
					BgL_arg2260z00_5577 = BgL_res2839z00_5578;
				}
				return
					bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
					BgL_arg2260z00_5577);
			}
		}

	}



/* &gen-expr-rtl_getfiel1702 */
	obj_t BGl_z62genzd2exprzd2rtl_getfiel1702z62zzsaw_c_codez00(obj_t
		BgL_envz00_5337, obj_t BgL_funz00_5338, obj_t BgL_argsz00_5339)
	{
		{	/* SawC/code.scm 244 */
			{	/* SawC/code.scm 245 */
				obj_t BgL_arg2246z00_5580;

				{	/* SawC/code.scm 245 */
					obj_t BgL_res2831z00_5581;

					{	/* SawC/code.scm 245 */
						obj_t BgL_tmpz00_7283;

						BgL_tmpz00_7283 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2831z00_5581 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7283);
					}
					BgL_arg2246z00_5580 = BgL_res2831z00_5581;
				}
				bgl_display_string(BGl_string3048z00zzsaw_c_codez00,
					BgL_arg2246z00_5580);
			}
			BGl_genzd2prefixzd2zzsaw_c_codez00(
				((BgL_rtl_funz00_bglt) ((BgL_rtl_getfieldz00_bglt) BgL_funz00_5338)));
			{	/* SawC/code.scm 247 */
				obj_t BgL_arg2247z00_5582;

				BgL_arg2247z00_5582 = CAR(((obj_t) BgL_argsz00_5339));
				BGl_genzd2regzd2zzsaw_c_codez00(BgL_arg2247z00_5582);
			}
			{	/* SawC/code.scm 248 */
				obj_t BgL_arg2248z00_5583;

				{	/* SawC/code.scm 248 */
					obj_t BgL_res2832z00_5584;

					{	/* SawC/code.scm 248 */
						obj_t BgL_tmpz00_7293;

						BgL_tmpz00_7293 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2832z00_5584 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7293);
					}
					BgL_arg2248z00_5583 = BgL_res2832z00_5584;
				}
				bgl_display_string(BGl_string3049z00zzsaw_c_codez00,
					BgL_arg2248z00_5583);
			}
			{	/* SawC/code.scm 249 */
				obj_t BgL_arg2249z00_5585;
				obj_t BgL_arg2250z00_5586;

				BgL_arg2249z00_5585 =
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
							((BgL_rtl_getfieldz00_bglt) BgL_funz00_5338)))->BgL_namez00);
				{	/* SawC/code.scm 249 */
					obj_t BgL_res2833z00_5587;

					{	/* SawC/code.scm 249 */
						obj_t BgL_tmpz00_7299;

						BgL_tmpz00_7299 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2833z00_5587 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7299);
					}
					BgL_arg2250z00_5586 = BgL_res2833z00_5587;
				}
				bgl_display_obj(BgL_arg2249z00_5585, BgL_arg2250z00_5586);
			}
			{	/* SawC/code.scm 250 */
				obj_t BgL_arg2251z00_5588;

				{	/* SawC/code.scm 250 */
					obj_t BgL_res2834z00_5589;

					{	/* SawC/code.scm 250 */
						obj_t BgL_tmpz00_7303;

						BgL_tmpz00_7303 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2834z00_5589 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_7303);
					}
					BgL_arg2251z00_5588 = BgL_res2834z00_5589;
				}
				return
					bgl_display_string(BGl_string2908z00zzsaw_c_codez00,
					BgL_arg2251z00_5588);
			}
		}

	}



/* &gen-expr-rtl_lightfu1700 */
	obj_t BGl_z62genzd2exprzd2rtl_lightfu1700z62zzsaw_c_codez00(obj_t
		BgL_envz00_5340, obj_t BgL_funz00_5341, obj_t BgL_argsz00_5342)
	{
		{	/* SawC/code.scm 241 */
			return
				BGl_genzd2Xfuncallzd2zzsaw_c_codez00(BGl_string3051z00zzsaw_c_codez00,
				BgL_argsz00_5342, ((bool_t) 0));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_codez00()
	{
		{	/* SawC/code.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 18449014),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(((long) 352965226),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_exprz00(((long) 142712633),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					250697389), BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
			return BGl_modulezd2initializa7ationz75zzsaw_bbvz00(((long) 263563901),
				BSTRING_TO_STRING(BGl_string3052z00zzsaw_c_codez00));
		}

	}

#ifdef __cplusplus
}
#endif
