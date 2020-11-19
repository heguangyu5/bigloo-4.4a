/*===========================================================================*/
/*   (SawJvm/compile.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/compile.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		long BgL_indexz00;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		bool_t BgL_virtualzd2overridezd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

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

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;


	extern obj_t BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	extern obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	static bool_t BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(obj_t);
	static obj_t BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_bbvz00zzsaw_bbvz00(BgL_backendz00_bglt, BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_compilez00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_compilez00();
	extern obj_t BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t);
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_z62saw_jvmzd2compilezb0zzsaw_jvm_compilez00(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2catchza2zd2zzengine_paramz00;
	extern obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_compilez00();
	static obj_t BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t);
	static bool_t BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	extern obj_t BGl_openzd2modulezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	extern obj_t
		BGl_modulezd2lightzd2funcallz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	static obj_t BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00 = BUNSPEC;
	extern obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_compilez00();
	static obj_t BGl_constructorz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_compilez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t, BgL_valuez00_bglt);
	extern obj_t BGl_compilezd2slotzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_openzd2globalzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	extern obj_t BGl_closezd2classzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt,
		obj_t);
	extern obj_t BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00;
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	extern obj_t BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern BgL_typez00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_closezd2modulezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_compilez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00();
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00();
	extern obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt);
	extern obj_t BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		obj_t);
	extern obj_t BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_openzd2classzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[74];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_saw_jvmzd2compilezd2envz00zzsaw_jvm_compilez00,
		BgL_bgl_za762saw_jvmza7d2com2028z00,
		BGl_z62saw_jvmzd2compilezb0zzsaw_jvm_compilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2021z00zzsaw_jvm_compilez00,
		BgL_bgl_string2021za700za7za7s2029za7, "emit-cnst", 9);
	      DEFINE_STRING(BGl_string2022z00zzsaw_jvm_compilez00,
		BgL_bgl_string2022za700za7za7s2030za7, "Unknown cnst class", 18);
	      DEFINE_STRING(BGl_string2023z00zzsaw_jvm_compilez00,
		BgL_bgl_string2023za700za7za7s2031za7, "saw_jvm_compile", 15);
	      DEFINE_STRING(BGl_string2024z00zzsaw_jvm_compilez00,
		BgL_bgl_string2024za700za7za7s2032za7,
		"dlopen (aastore) (dastore) (fastore) (lastore) (iastore) (sastore) (castore) (bastore) anewarray newarray float char boolean stvector sgfun (putfield procenv) slfun selfun (putfield procarity) (putfield procindex) (invokespecial init) (dup) (new me) sfun (invokestatic BGL_INT8_TO_BINT8) byte suint8 sint8 (invokestatic BGL_INT16_TO_BINT16) short suint16 sint16 (invokestatic BGL_INT32_TO_BINT32) int suint32 sint32 (invokestatic BGL_INT64_TO_BINT64) suint64 sint64 (invokestatic llong_to_bllong) sllong (invokestatic elong_to_belong) long selong (invokestatic double_to_real) double sreal (invokestatic getbytes) sstring module-initialization (aconst_null) (iconst_0) putstatic (anewarray obj) (putstatic myname) (invokestatic foreign-print) ldc clinit (invokespecial super-init) (aload this) (this) init (invokestatic internalerror) catch (return) (pop) bigloo_main (invokestatic listargv) (aload argv) from (handler from catch catch throwable) (argv) main ",
		959);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_compilez00(long
		BgL_checksumz00_3499, char *BgL_fromz00_3500)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_compilez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00();
					BGl_cnstzd2initzd2zzsaw_jvm_compilez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00();
					return BGl_toplevelzd2initzd2zzsaw_jvm_compilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_jvm_compile");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_jvm_compile");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			{	/* SawJvm/compile.scm 1 */
				obj_t BgL_cportz00_3486;

				{	/* SawJvm/compile.scm 1 */
					obj_t BgL_stringz00_3494;

					BgL_stringz00_3494 = BGl_string2024z00zzsaw_jvm_compilez00;
					{	/* SawJvm/compile.scm 1 */
						obj_t BgL_startz00_3495;

						BgL_startz00_3495 = BINT(((long) 0));
						{	/* SawJvm/compile.scm 1 */
							obj_t BgL_endz00_3496;

							BgL_endz00_3496 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3494)));
							{	/* SawJvm/compile.scm 1 */

								BgL_cportz00_3486 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3494, BgL_startz00_3495, BgL_endz00_3496);
				}}}}
				{
					long BgL_iz00_3487;

					BgL_iz00_3487 = ((long) 73);
				BgL_loopz00_3488:
					if ((BgL_iz00_3487 == ((long) -1)))
						{	/* SawJvm/compile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/compile.scm 1 */
							{	/* SawJvm/compile.scm 1 */
								obj_t BgL_arg2026z00_3490;

								{	/* SawJvm/compile.scm 1 */

									{	/* SawJvm/compile.scm 1 */
										obj_t BgL_locationz00_3492;

										BgL_locationz00_3492 = BBOOL(((bool_t) 0));
										{	/* SawJvm/compile.scm 1 */

											BgL_arg2026z00_3490 =
												BGl_readz00zz__readerz00(BgL_cportz00_3486,
												BgL_locationz00_3492);
										}
									}
								}
								{	/* SawJvm/compile.scm 1 */
									int BgL_tmpz00_3530;

									BgL_tmpz00_3530 = (int) (BgL_iz00_3487);
									CNST_TABLE_SET(BgL_tmpz00_3530, BgL_arg2026z00_3490);
							}}
							{	/* SawJvm/compile.scm 1 */
								int BgL_auxz00_3493;

								BgL_auxz00_3493 = (int) ((BgL_iz00_3487 - ((long) 1)));
								{
									long BgL_iz00_3535;

									BgL_iz00_3535 = (long) (BgL_auxz00_3493);
									BgL_iz00_3487 = BgL_iz00_3535;
									goto BgL_loopz00_3488;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}

	}



/* saw_jvm-compile */
	BGL_EXPORTED_DEF obj_t
		BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_13)
	{
		{	/* SawJvm/compile.scm 40 */
			BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_mez00_13);
			{	/* SawJvm/compile.scm 42 */
				obj_t BgL_g1611z00_2637;

				BgL_g1611z00_2637 = BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
				{
					obj_t BgL_l1609z00_2639;

					BgL_l1609z00_2639 = BgL_g1611z00_2637;
				BgL_zc3z04anonymousza31663ze3z87_2640:
					if (PAIRP(BgL_l1609z00_2639))
						{	/* SawJvm/compile.scm 42 */
							BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_mez00_13,
								CAR(BgL_l1609z00_2639));
							{
								obj_t BgL_l1609z00_3544;

								BgL_l1609z00_3544 = CDR(BgL_l1609z00_2639);
								BgL_l1609z00_2639 = BgL_l1609z00_3544;
								goto BgL_zc3z04anonymousza31663ze3z87_2640;
							}
						}
					else
						{	/* SawJvm/compile.scm 42 */
							((bool_t) 1);
						}
				}
			}
			return BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_mez00_13);
		}

	}



/* &saw_jvm-compile */
	obj_t BGl_z62saw_jvmzd2compilezb0zzsaw_jvm_compilez00(obj_t BgL_envz00_3483,
		obj_t BgL_mez00_3484)
	{
		{	/* SawJvm/compile.scm 40 */
			return
				BGl_saw_jvmzd2compilezd2zzsaw_jvm_compilez00(
				((BgL_jvmz00_bglt) BgL_mez00_3484));
		}

	}



/* compile-class */
	obj_t BGl_compilezd2classzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_14,
		obj_t BgL_cz00_15)
	{
		{	/* SawJvm/compile.scm 48 */
			{	/* SawJvm/compile.scm 49 */
				BgL_typez00_bglt BgL_arg1669z00_2645;

				BgL_arg1669z00_2645 =
					BGl_getzd2itszd2superz00zzbackend_cplibz00(
					((BgL_typez00_bglt) BgL_cz00_15));
				BGl_openzd2classzd2zzsaw_jvm_outz00(BgL_mez00_14,
					((BgL_typez00_bglt) BgL_cz00_15), ((obj_t) BgL_arg1669z00_2645));
			}
			{	/* SawJvm/compile.scm 50 */
				obj_t BgL_g1614z00_2646;

				BgL_g1614z00_2646 =
					BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(
					((BgL_typez00_bglt) BgL_cz00_15));
				{
					obj_t BgL_l1612z00_2648;

					BgL_l1612z00_2648 = BgL_g1614z00_2646;
				BgL_zc3z04anonymousza31670ze3z87_2649:
					if (PAIRP(BgL_l1612z00_2648))
						{	/* SawJvm/compile.scm 50 */
							{	/* SawJvm/compile.scm 50 */
								obj_t BgL_fz00_2651;

								BgL_fz00_2651 = CAR(BgL_l1612z00_2648);
								BGl_compilezd2slotzd2zzsaw_jvm_outz00(BgL_mez00_14,
									((BgL_slotz00_bglt) BgL_fz00_2651));
							}
							{
								obj_t BgL_l1612z00_3561;

								BgL_l1612z00_3561 = CDR(BgL_l1612z00_2648);
								BgL_l1612z00_2648 = BgL_l1612z00_3561;
								goto BgL_zc3z04anonymousza31670ze3z87_2649;
							}
						}
					else
						{	/* SawJvm/compile.scm 50 */
							((bool_t) 1);
						}
				}
			}
			BGl_constructorz00zzsaw_jvm_compilez00(BgL_mez00_14);
			return
				BGl_closezd2classzd2zzsaw_jvm_outz00(BgL_mez00_14,
				((BgL_typez00_bglt) BgL_cz00_15));
		}

	}



/* compile-module */
	obj_t BGl_compilezd2modulezd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_16)
	{
		{	/* SawJvm/compile.scm 57 */
			BGl_openzd2modulezd2zzsaw_jvm_outz00(BgL_mez00_16);
			{	/* SawJvm/compile.scm 59 */
				obj_t BgL_g1617z00_2654;

				BgL_g1617z00_2654 =
					BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l1615z00_2656;

					BgL_l1615z00_2656 = BgL_g1617z00_2654;
				BgL_zc3z04anonymousza31673ze3z87_2657:
					if (PAIRP(BgL_l1615z00_2656))
						{	/* SawJvm/compile.scm 60 */
							{	/* SawJvm/compile.scm 59 */
								obj_t BgL_vz00_2659;

								BgL_vz00_2659 = CAR(BgL_l1615z00_2656);
								BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_16,
									((BgL_globalz00_bglt) BgL_vz00_2659));
							}
							{
								obj_t BgL_l1615z00_3573;

								BgL_l1615z00_3573 = CDR(BgL_l1615z00_2656);
								BgL_l1615z00_2656 = BgL_l1615z00_3573;
								goto BgL_zc3z04anonymousza31673ze3z87_2657;
							}
						}
					else
						{	/* SawJvm/compile.scm 60 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawJvm/compile.scm 61 */
				bool_t BgL_test2038z00_3575;

				{	/* SawJvm/compile.scm 61 */
					obj_t BgL_arg1688z00_2665;

					BgL_arg1688z00_2665 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_test2038z00_3575 =
						((long) CINT(BgL_arg1688z00_2665) > ((long) 0));
				}
				if (BgL_test2038z00_3575)
					{	/* SawJvm/compile.scm 61 */
						obj_t BgL_arg1687z00_2664;

						BgL_arg1687z00_2664 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
						BGl_compilezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_16,
							((BgL_globalz00_bglt) BgL_arg1687z00_2664));
					}
				else
					{	/* SawJvm/compile.scm 61 */
						BFALSE;
					}
			}
			{	/* SawJvm/compile.scm 62 */
				bool_t BgL_test2039z00_3582;

				{	/* SawJvm/compile.scm 62 */
					bool_t BgL_res1991z00_3393;

					{	/* SawJvm/compile.scm 62 */
						obj_t BgL_objz00_3392;

						BgL_objz00_3392 = BGl_za2mainza2z00zzmodule_modulez00;
						BgL_res1991z00_3393 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_3392,
							BGl_globalz00zzast_varz00);
					}
					BgL_test2039z00_3582 = BgL_res1991z00_3393;
				}
				if (BgL_test2039z00_3582)
					{	/* SawJvm/compile.scm 62 */
						BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_mez00_16);
					}
				else
					{	/* SawJvm/compile.scm 62 */
						BFALSE;
					}
			}
			BGl_constructorz00zzsaw_jvm_compilez00(BgL_mez00_16);
			BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_mez00_16);
			BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_mez00_16);
			BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_mez00_16);
			BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_mez00_16);
			BGl_modulezd2lightzd2funcallz00zzsaw_jvm_funcallz00(BgL_mez00_16);
			return BGl_closezd2modulezd2zzsaw_jvm_outz00(BgL_mez00_16);
		}

	}



/* module-main */
	obj_t BGl_modulezd2mainzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_17)
	{
		{	/* SawJvm/compile.scm 74 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_17,
				CNST_TABLE_REF(((long) 0)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_17,
				CNST_TABLE_REF(((long) 1)), BNIL);
			if (CBOOL(BGl_za2jvmzd2catchza2zd2zzengine_paramz00))
				{	/* SawJvm/compile.scm 77 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 2)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 3)));
				}
			else
				{	/* SawJvm/compile.scm 77 */
					BFALSE;
				}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 4)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 5)));
			{	/* SawJvm/compile.scm 82 */
				obj_t BgL_arg1692z00_2667;

				{	/* SawJvm/compile.scm 82 */
					obj_t BgL_list1693z00_2668;

					BgL_list1693z00_2668 =
						MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
					BgL_arg1692z00_2667 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
						BgL_list1693z00_2668);
				}
				BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_17,
					((BgL_globalz00_bglt) BgL_arg1692z00_2667));
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 7)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17, CNST_TABLE_REF(((long) 8)));
			if (CBOOL(BGl_za2jvmzd2catchza2zd2zzengine_paramz00))
				{	/* SawJvm/compile.scm 85 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 9)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 10)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_17,
						CNST_TABLE_REF(((long) 8)));
				}
			else
				{	/* SawJvm/compile.scm 85 */
					BFALSE;
				}
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_17);
		}

	}



/* constructor */
	obj_t BGl_constructorz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_18)
	{
		{	/* SawJvm/compile.scm 94 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_18,
				CNST_TABLE_REF(((long) 11)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_18,
				CNST_TABLE_REF(((long) 12)), BNIL);
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18, CNST_TABLE_REF(((long) 13)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18, CNST_TABLE_REF(((long) 14)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_18);
		}

	}



/* module-init */
	obj_t BGl_modulezd2initzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_19)
	{
		{	/* SawJvm/compile.scm 105 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_19,
				CNST_TABLE_REF(((long) 15)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_19, BNIL, BNIL);
			{	/* SawJvm/compile.scm 109 */
				bool_t BgL_test2042z00_3638;

				if (INTEGERP(BGl_za2debugzd2moduleza2zd2zzengine_paramz00))
					{	/* SawJvm/compile.scm 109 */
						BgL_test2042z00_3638 =
							(
							(long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
							((long) 0));
					}
				else
					{	/* SawJvm/compile.scm 109 */
						BgL_test2042z00_3638 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00
							(BGl_za2debugzd2moduleza2zd2zzengine_paramz00, BINT(((long) 0)));
					}
				if (BgL_test2042z00_3638)
					{	/* SawJvm/compile.scm 109 */
						{	/* SawJvm/compile.scm 110 */
							obj_t BgL_arg1696z00_2671;

							{	/* SawJvm/compile.scm 110 */
								obj_t BgL_arg1697z00_2672;

								{	/* SawJvm/compile.scm 110 */
									obj_t BgL_arg1704z00_2673;

									{	/* SawJvm/compile.scm 110 */
										obj_t BgL_res1994z00_3400;

										{	/* SawJvm/compile.scm 110 */
											obj_t BgL_symbolz00_3398;

											BgL_symbolz00_3398 =
												BGl_za2moduleza2z00zzmodule_modulez00;
											{	/* SawJvm/compile.scm 110 */
												obj_t BgL_arg1466z00_3399;

												BgL_arg1466z00_3399 =
													SYMBOL_TO_STRING(BgL_symbolz00_3398);
												BgL_res1994z00_3400 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_3399);
											}
										}
										BgL_arg1704z00_2673 = BgL_res1994z00_3400;
									}
									BgL_arg1697z00_2672 =
										MAKE_YOUNG_PAIR(BgL_arg1704z00_2673, BNIL);
								}
								BgL_arg1696z00_2671 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
									BgL_arg1697z00_2672);
							}
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, BgL_arg1696z00_2671);
						}
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
							CNST_TABLE_REF(((long) 17)));
					}
				else
					{	/* SawJvm/compile.scm 109 */
						BFALSE;
					}
			}
			{	/* SawJvm/compile.scm 113 */
				obj_t BgL_arg1707z00_2675;

				{	/* SawJvm/compile.scm 113 */
					obj_t BgL_arg1708z00_2676;

					{	/* SawJvm/compile.scm 113 */
						obj_t BgL_arg1711z00_2677;

						{	/* SawJvm/compile.scm 113 */
							obj_t BgL_res1995z00_3403;

							{	/* SawJvm/compile.scm 113 */
								obj_t BgL_symbolz00_3401;

								BgL_symbolz00_3401 = BGl_za2moduleza2z00zzmodule_modulez00;
								{	/* SawJvm/compile.scm 113 */
									obj_t BgL_arg1466z00_3402;

									BgL_arg1466z00_3402 = SYMBOL_TO_STRING(BgL_symbolz00_3401);
									BgL_res1995z00_3403 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_3402);
								}
							}
							BgL_arg1711z00_2677 = BgL_res1995z00_3403;
						}
						BgL_arg1708z00_2676 = MAKE_YOUNG_PAIR(BgL_arg1711z00_2677, BNIL);
					}
					BgL_arg1707z00_2675 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BgL_arg1708z00_2676);
				}
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, BgL_arg1707z00_2675);
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, CNST_TABLE_REF(((long) 18)));
			{	/* SawJvm/compile.scm 116 */
				obj_t BgL_siza7eza7_2678;

				BgL_siza7eza7_2678 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
				if (((long) CINT(BgL_siza7eza7_2678) > ((long) 0)))
					{	/* SawJvm/compile.scm 117 */
						BGl_pushzd2intzd2zzsaw_jvm_outz00(BgL_mez00_19, BgL_siza7eza7_2678);
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
							CNST_TABLE_REF(((long) 19)));
						{	/* SawJvm/compile.scm 120 */
							obj_t BgL_arg1719z00_2680;

							{	/* SawJvm/compile.scm 120 */
								obj_t BgL_arg1725z00_2681;

								{	/* SawJvm/compile.scm 120 */
									obj_t BgL_arg1726z00_2682;

									{	/* SawJvm/compile.scm 120 */
										obj_t BgL_arg1727z00_2683;

										BgL_arg1727z00_2683 =
											BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
										BgL_arg1726z00_2682 =
											BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_19,
											((BgL_globalz00_bglt) BgL_arg1727z00_2683));
									}
									BgL_arg1725z00_2681 =
										MAKE_YOUNG_PAIR(BgL_arg1726z00_2682, BNIL);
								}
								BgL_arg1719z00_2680 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
									BgL_arg1725z00_2681);
							}
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, BgL_arg1719z00_2680);
					}}
				else
					{	/* SawJvm/compile.scm 117 */
						BFALSE;
					}
			}
			{	/* SawJvm/compile.scm 122 */
				obj_t BgL_g1620z00_2684;

				BgL_g1620z00_2684 =
					BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
					(BGl_za2moduleza2z00zzmodule_modulez00);
				{
					obj_t BgL_l1618z00_2686;

					BgL_l1618z00_2686 = BgL_g1620z00_2684;
				BgL_zc3z04anonymousza31728ze3z87_2687:
					if (PAIRP(BgL_l1618z00_2686))
						{	/* SawJvm/compile.scm 123 */
							{	/* SawJvm/compile.scm 122 */
								obj_t BgL_vz00_2689;

								BgL_vz00_2689 = CAR(BgL_l1618z00_2686);
								{	/* SawJvm/compile.scm 122 */
									BgL_valuez00_bglt BgL_arg1731z00_2690;

									BgL_arg1731z00_2690 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_vz00_2689))))->
										BgL_valuez00);
									BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_mez00_19,
										BgL_vz00_2689, BgL_arg1731z00_2690);
								}
							}
							{
								obj_t BgL_l1618z00_3683;

								BgL_l1618z00_3683 = CDR(BgL_l1618z00_2686);
								BgL_l1618z00_2686 = BgL_l1618z00_3683;
								goto BgL_zc3z04anonymousza31728ze3z87_2687;
							}
						}
					else
						{	/* SawJvm/compile.scm 123 */
							((bool_t) 1);
						}
				}
			}
			if (CBOOL(BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00))
				{	/* SawJvm/compile.scm 124 */
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
						CNST_TABLE_REF(((long) 21)));
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
						CNST_TABLE_REF(((long) 22)));
					{	/* SawJvm/compile.scm 128 */
						obj_t BgL_arg1733z00_2693;

						{	/* SawJvm/compile.scm 128 */
							obj_t BgL_list1734z00_2694;

							BgL_list1734z00_2694 =
								MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
							BgL_arg1733z00_2693 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)),
								BgL_list1734z00_2694);
						}
						BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_19,
							((BgL_globalz00_bglt) BgL_arg1733z00_2693));
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19,
						CNST_TABLE_REF(((long) 7)));
				}
			else
				{	/* SawJvm/compile.scm 124 */
					BFALSE;
				}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_19, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_19);
		}

	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(obj_t BgL_vz00_20)
	{
		{	/* SawJvm/compile.scm 133 */
			{	/* SawJvm/compile.scm 134 */
				BgL_globalz00_bglt BgL_vz00_2695;

				BgL_vz00_2695 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					((BgL_globalz00_bglt) BgL_vz00_20));
				{	/* SawJvm/compile.scm 135 */
					BgL_valuez00_bglt BgL_valz00_2696;

					BgL_valz00_2696 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_vz00_2695)))->BgL_valuez00);
					{	/* SawJvm/compile.scm 136 */
						bool_t BgL_test2047z00_3705;

						{	/* SawJvm/compile.scm 136 */
							bool_t BgL_res1998z00_3411;

							BgL_res1998z00_3411 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valz00_2696), BGl_sfunz00zzast_varz00);
							BgL_test2047z00_3705 = BgL_res1998z00_3411;
						}
						if (BgL_test2047z00_3705)
							{	/* SawJvm/compile.scm 137 */
								obj_t BgL_cloz00_2698;

								BgL_cloz00_2698 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_valz00_2696)))->
									BgL_thezd2closurezd2globalz00);
								{	/* SawJvm/compile.scm 138 */
									bool_t BgL_oz00_2699;
									bool_t BgL_kz00_2700;

									BgL_oz00_2699 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_2698);
									BgL_kz00_2700 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_2698);
									if (BgL_oz00_2699)
										{	/* SawJvm/compile.scm 139 */
											return BgL_oz00_2699;
										}
									else
										{	/* SawJvm/compile.scm 139 */
											return BgL_kz00_2700;
										}
								}
							}
						else
							{	/* SawJvm/compile.scm 136 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* module-init-cnst */
	obj_t BGl_modulezd2initzd2cnstz00zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_21, obj_t BgL_varz00_22, BgL_valuez00_bglt BgL_valz00_23)
	{
		{	/* SawJvm/compile.scm 141 */
			{	/* SawJvm/compile.scm 143 */
				obj_t BgL_casezd2valuezd2_2703;

				BgL_casezd2valuezd2_2703 =
					(((BgL_scnstz00_bglt) COBJECT(
							((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_classz00);
				if ((BgL_casezd2valuezd2_2703 == CNST_TABLE_REF(((long) 24))))
					{	/* SawJvm/compile.scm 143 */
						{	/* SawJvm/compile.scm 145 */
							obj_t BgL_arg1738z00_2705;

							BgL_arg1738z00_2705 =
								(((BgL_scnstz00_bglt) COBJECT(
										((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_nodez00);
							BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_mez00_21,
								BgL_arg1738z00_2705);
						}
						BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
							CNST_TABLE_REF(((long) 25)));
					}
				else
					{	/* SawJvm/compile.scm 143 */
						if ((BgL_casezd2valuezd2_2703 == CNST_TABLE_REF(((long) 26))))
							{	/* SawJvm/compile.scm 143 */
								{	/* SawJvm/compile.scm 148 */
									obj_t BgL_arg1740z00_2707;

									BgL_arg1740z00_2707 =
										(((BgL_scnstz00_bglt) COBJECT(
												((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_nodez00);
									BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_21,
										BgL_arg1740z00_2707, CNST_TABLE_REF(((long) 27)));
								}
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
									CNST_TABLE_REF(((long) 28)));
							}
						else
							{	/* SawJvm/compile.scm 143 */
								if ((BgL_casezd2valuezd2_2703 == CNST_TABLE_REF(((long) 29))))
									{	/* SawJvm/compile.scm 143 */
										{	/* SawJvm/compile.scm 151 */
											obj_t BgL_arg1742z00_2709;

											BgL_arg1742z00_2709 =
												(((BgL_scnstz00_bglt) COBJECT(
														((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_nodez00);
											BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_21,
												BgL_arg1742z00_2709, CNST_TABLE_REF(((long) 30)));
										}
										BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
											CNST_TABLE_REF(((long) 31)));
									}
								else
									{	/* SawJvm/compile.scm 143 */
										if (
											(BgL_casezd2valuezd2_2703 == CNST_TABLE_REF(((long) 32))))
											{	/* SawJvm/compile.scm 143 */
												{	/* SawJvm/compile.scm 154 */
													obj_t BgL_arg1744z00_2711;

													BgL_arg1744z00_2711 =
														(((BgL_scnstz00_bglt) COBJECT(
																((BgL_scnstz00_bglt) BgL_valz00_23)))->
														BgL_nodez00);
													BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_21,
														BgL_arg1744z00_2711, CNST_TABLE_REF(((long) 30)));
												}
												BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
													CNST_TABLE_REF(((long) 33)));
											}
										else
											{	/* SawJvm/compile.scm 143 */
												bool_t BgL_test2053z00_3750;

												{	/* SawJvm/compile.scm 143 */
													bool_t BgL__ortest_1164z00_2804;

													BgL__ortest_1164z00_2804 =
														(BgL_casezd2valuezd2_2703 ==
														CNST_TABLE_REF(((long) 34)));
													if (BgL__ortest_1164z00_2804)
														{	/* SawJvm/compile.scm 143 */
															BgL_test2053z00_3750 = BgL__ortest_1164z00_2804;
														}
													else
														{	/* SawJvm/compile.scm 143 */
															BgL_test2053z00_3750 =
																(BgL_casezd2valuezd2_2703 ==
																CNST_TABLE_REF(((long) 35)));
												}}
												if (BgL_test2053z00_3750)
													{	/* SawJvm/compile.scm 143 */
														{	/* SawJvm/compile.scm 157 */
															obj_t BgL_arg1746z00_2714;

															BgL_arg1746z00_2714 =
																(((BgL_scnstz00_bglt) COBJECT(
																		((BgL_scnstz00_bglt) BgL_valz00_23)))->
																BgL_nodez00);
															BGl_pushzd2numzd2zzsaw_jvm_outz00(BgL_mez00_21,
																BgL_arg1746z00_2714,
																CNST_TABLE_REF(((long) 30)));
														}
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
															CNST_TABLE_REF(((long) 36)));
													}
												else
													{	/* SawJvm/compile.scm 143 */
														bool_t BgL_test2055z00_3762;

														{	/* SawJvm/compile.scm 143 */
															bool_t BgL__ortest_1165z00_2803;

															BgL__ortest_1165z00_2803 =
																(BgL_casezd2valuezd2_2703 ==
																CNST_TABLE_REF(((long) 37)));
															if (BgL__ortest_1165z00_2803)
																{	/* SawJvm/compile.scm 143 */
																	BgL_test2055z00_3762 =
																		BgL__ortest_1165z00_2803;
																}
															else
																{	/* SawJvm/compile.scm 143 */
																	BgL_test2055z00_3762 =
																		(BgL_casezd2valuezd2_2703 ==
																		CNST_TABLE_REF(((long) 38)));
														}}
														if (BgL_test2055z00_3762)
															{	/* SawJvm/compile.scm 143 */
																{	/* SawJvm/compile.scm 160 */
																	obj_t BgL_arg1754z00_2717;

																	BgL_arg1754z00_2717 =
																		(((BgL_scnstz00_bglt) COBJECT(
																				((BgL_scnstz00_bglt) BgL_valz00_23)))->
																		BgL_nodez00);
																	BGl_pushzd2numzd2zzsaw_jvm_outz00
																		(BgL_mez00_21, BgL_arg1754z00_2717,
																		CNST_TABLE_REF(((long) 39)));
																}
																BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
																	CNST_TABLE_REF(((long) 40)));
															}
														else
															{	/* SawJvm/compile.scm 143 */
																bool_t BgL_test2057z00_3774;

																{	/* SawJvm/compile.scm 143 */
																	bool_t BgL__ortest_1166z00_2802;

																	BgL__ortest_1166z00_2802 =
																		(BgL_casezd2valuezd2_2703 ==
																		CNST_TABLE_REF(((long) 41)));
																	if (BgL__ortest_1166z00_2802)
																		{	/* SawJvm/compile.scm 143 */
																			BgL_test2057z00_3774 =
																				BgL__ortest_1166z00_2802;
																		}
																	else
																		{	/* SawJvm/compile.scm 143 */
																			BgL_test2057z00_3774 =
																				(BgL_casezd2valuezd2_2703 ==
																				CNST_TABLE_REF(((long) 42)));
																}}
																if (BgL_test2057z00_3774)
																	{	/* SawJvm/compile.scm 143 */
																		{	/* SawJvm/compile.scm 163 */
																			obj_t BgL_arg1756z00_2720;

																			BgL_arg1756z00_2720 =
																				(((BgL_scnstz00_bglt) COBJECT(
																						((BgL_scnstz00_bglt)
																							BgL_valz00_23)))->BgL_nodez00);
																			BGl_pushzd2numzd2zzsaw_jvm_outz00
																				(BgL_mez00_21, BgL_arg1756z00_2720,
																				CNST_TABLE_REF(((long) 43)));
																		}
																		BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21,
																			CNST_TABLE_REF(((long) 44)));
																	}
																else
																	{	/* SawJvm/compile.scm 143 */
																		bool_t BgL_test2059z00_3786;

																		{	/* SawJvm/compile.scm 143 */
																			bool_t BgL__ortest_1167z00_2801;

																			BgL__ortest_1167z00_2801 =
																				(BgL_casezd2valuezd2_2703 ==
																				CNST_TABLE_REF(((long) 45)));
																			if (BgL__ortest_1167z00_2801)
																				{	/* SawJvm/compile.scm 143 */
																					BgL_test2059z00_3786 =
																						BgL__ortest_1167z00_2801;
																				}
																			else
																				{	/* SawJvm/compile.scm 143 */
																					BgL_test2059z00_3786 =
																						(BgL_casezd2valuezd2_2703 ==
																						CNST_TABLE_REF(((long) 46)));
																		}}
																		if (BgL_test2059z00_3786)
																			{	/* SawJvm/compile.scm 143 */
																				{	/* SawJvm/compile.scm 166 */
																					obj_t BgL_arg1759z00_2723;

																					BgL_arg1759z00_2723 =
																						(((BgL_scnstz00_bglt) COBJECT(
																								((BgL_scnstz00_bglt)
																									BgL_valz00_23)))->
																						BgL_nodez00);
																					BGl_pushzd2numzd2zzsaw_jvm_outz00
																						(BgL_mez00_21, BgL_arg1759z00_2723,
																						CNST_TABLE_REF(((long) 47)));
																				}
																				BGl_codez12z12zzsaw_jvm_outz00
																					(BgL_mez00_21,
																					CNST_TABLE_REF(((long) 48)));
																			}
																		else
																			{	/* SawJvm/compile.scm 143 */
																				if (
																					(BgL_casezd2valuezd2_2703 ==
																						CNST_TABLE_REF(((long) 49))))
																					{	/* SawJvm/compile.scm 143 */
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 50)));
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 51)));
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 52)));
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 51)));
																						{	/* SawJvm/compile.scm 173 */
																							int BgL_arg1761z00_2725;

																							{
																								BgL_indexedz00_bglt
																									BgL_auxz00_3809;
																								{
																									obj_t BgL_auxz00_3810;

																									{	/* SawJvm/compile.scm 173 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_3811;
																										BgL_tmpz00_3811 =
																											((BgL_objectz00_bglt) (
																												(BgL_globalz00_bglt)
																												BgL_varz00_22));
																										BgL_auxz00_3810 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_3811);
																									}
																									BgL_auxz00_3809 =
																										((BgL_indexedz00_bglt)
																										BgL_auxz00_3810);
																								}
																								BgL_arg1761z00_2725 =
																									(((BgL_indexedz00_bglt)
																										COBJECT(BgL_auxz00_3809))->
																									BgL_indexz00);
																							}
																							BGl_pushzd2intzd2zzsaw_jvm_outz00
																								(BgL_mez00_21,
																								BINT(BgL_arg1761z00_2725));
																						}
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 53)));
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 51)));
																						{	/* SawJvm/compile.scm 176 */
																							obj_t BgL_arg1768z00_2726;

																							if (BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(BgL_varz00_22))
																								{	/* SawJvm/compile.scm 176 */
																									BgL_arg1768z00_2726 =
																										BINT(((long) -1));
																								}
																							else
																								{	/* SawJvm/compile.scm 176 */
																									BgL_arg1768z00_2726 =
																										BGl_globalzd2arityzd2zzbackend_cplibz00
																										(((BgL_globalz00_bglt)
																											BgL_varz00_22));
																								}
																							BGl_pushzd2intzd2zzsaw_jvm_outz00
																								(BgL_mez00_21,
																								BgL_arg1768z00_2726);
																						}
																						BGl_codez12z12zzsaw_jvm_outz00
																							(BgL_mez00_21,
																							CNST_TABLE_REF(((long) 54)));
																					}
																				else
																					{	/* SawJvm/compile.scm 143 */
																						if (
																							(BgL_casezd2valuezd2_2703 ==
																								CNST_TABLE_REF(((long) 55))))
																							{	/* SawJvm/compile.scm 143 */
																								BGl_codez12z12zzsaw_jvm_outz00
																									(BgL_mez00_21,
																									CNST_TABLE_REF(((long) 22)));
																							}
																						else
																							{	/* SawJvm/compile.scm 143 */
																								if (
																									(BgL_casezd2valuezd2_2703 ==
																										CNST_TABLE_REF(((long)
																												56))))
																									{	/* SawJvm/compile.scm 143 */
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													50)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													51)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													52)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													51)));
																										{	/* SawJvm/compile.scm 186 */
																											int BgL_arg1775z00_2730;

																											{
																												BgL_indexedz00_bglt
																													BgL_auxz00_3847;
																												{
																													obj_t BgL_auxz00_3848;

																													{	/* SawJvm/compile.scm 186 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_3849;
																														BgL_tmpz00_3849 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_globalz00_bglt) BgL_varz00_22));
																														BgL_auxz00_3848 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_3849);
																													}
																													BgL_auxz00_3847 =
																														(
																														(BgL_indexedz00_bglt)
																														BgL_auxz00_3848);
																												}
																												BgL_arg1775z00_2730 =
																													(((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_3847))->BgL_indexz00);
																											}
																											BGl_pushzd2intzd2zzsaw_jvm_outz00
																												(BgL_mez00_21,
																												BINT
																												(BgL_arg1775z00_2730));
																										}
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													53)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													51)));
																										BGl_pushzd2intzd2zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											BINT(((long) 0)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													19)));
																										BGl_codez12z12zzsaw_jvm_outz00
																											(BgL_mez00_21,
																											CNST_TABLE_REF(((long)
																													57)));
																									}
																								else
																									{	/* SawJvm/compile.scm 143 */
																										if (
																											(BgL_casezd2valuezd2_2703
																												==
																												CNST_TABLE_REF(((long)
																														58))))
																											{	/* SawJvm/compile.scm 143 */
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															50)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															51)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															52)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															51)));
																												{	/* SawJvm/compile.scm 197 */
																													int
																														BgL_arg1778z00_2732;
																													{
																														BgL_indexedz00_bglt
																															BgL_auxz00_3878;
																														{
																															obj_t
																																BgL_auxz00_3879;
																															{	/* SawJvm/compile.scm 197 */
																																BgL_objectz00_bglt
																																	BgL_tmpz00_3880;
																																BgL_tmpz00_3880
																																	=
																																	(
																																	(BgL_objectz00_bglt)
																																	((BgL_globalz00_bglt) BgL_varz00_22));
																																BgL_auxz00_3879
																																	=
																																	BGL_OBJECT_WIDENING
																																	(BgL_tmpz00_3880);
																															}
																															BgL_auxz00_3878 =
																																(
																																(BgL_indexedz00_bglt)
																																BgL_auxz00_3879);
																														}
																														BgL_arg1778z00_2732
																															=
																															(((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_3878))->BgL_indexz00);
																													}
																													BGl_pushzd2intzd2zzsaw_jvm_outz00
																														(BgL_mez00_21,
																														BINT
																														(BgL_arg1778z00_2732));
																												}
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															53)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															51)));
																												{	/* SawJvm/compile.scm 200 */
																													obj_t
																														BgL_arg1779z00_2733;
																													if (BGl_keyzd2optzf3z21zzsaw_jvm_compilez00(BgL_varz00_22))
																														{	/* SawJvm/compile.scm 200 */
																															BgL_arg1779z00_2733
																																=
																																BINT(((long)
																																	-1));
																														}
																													else
																														{	/* SawJvm/compile.scm 200 */
																															BgL_arg1779z00_2733
																																=
																																BGl_globalzd2arityzd2zzbackend_cplibz00
																																(((BgL_globalz00_bglt) BgL_varz00_22));
																														}
																													BGl_pushzd2intzd2zzsaw_jvm_outz00
																														(BgL_mez00_21,
																														BgL_arg1779z00_2733);
																												}
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															54)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															51)));
																												BGl_pushzd2intzd2zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													BINT(((long) 3)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															19)));
																												BGl_codez12z12zzsaw_jvm_outz00
																													(BgL_mez00_21,
																													CNST_TABLE_REF(((long)
																															57)));
																											}
																										else
																											{	/* SawJvm/compile.scm 143 */
																												if (
																													(BgL_casezd2valuezd2_2703
																														==
																														CNST_TABLE_REF((
																																(long) 59))))
																													{	/* SawJvm/compile.scm 208 */
																														obj_t
																															BgL_vecz00_2736;
																														{	/* SawJvm/compile.scm 208 */
																															obj_t
																																BgL_sz00_3437;
																															BgL_sz00_3437 =
																																(((BgL_scnstz00_bglt) COBJECT(((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_nodez00);
																															BgL_vecz00_2736 =
																																STRUCT_REF
																																(BgL_sz00_3437,
																																(int) (((long)
																																		1)));
																														}
																														{	/* SawJvm/compile.scm 208 */
																															BgL_typez00_bglt
																																BgL_typez00_2737;
																															{	/* SawJvm/compile.scm 209 */
																																BgL_typez00_bglt
																																	BgL_oz00_3439;
																																{	/* SawJvm/compile.scm 209 */
																																	obj_t
																																		BgL_sz00_3438;
																																	BgL_sz00_3438
																																		=
																																		(((BgL_scnstz00_bglt) COBJECT(((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_nodez00);
																																	BgL_oz00_3439
																																		=
																																		(
																																		(BgL_typez00_bglt)
																																		STRUCT_REF
																																		(BgL_sz00_3438,
																																			(int) ((
																																					(long)
																																					0))));
																																}
																																{
																																	BgL_tvecz00_bglt
																																		BgL_auxz00_3920;
																																	{
																																		obj_t
																																			BgL_auxz00_3921;
																																		{	/* SawJvm/compile.scm 209 */
																																			BgL_objectz00_bglt
																																				BgL_tmpz00_3922;
																																			BgL_tmpz00_3922
																																				=
																																				(
																																				(BgL_objectz00_bglt)
																																				BgL_oz00_3439);
																																			BgL_auxz00_3921
																																				=
																																				BGL_OBJECT_WIDENING
																																				(BgL_tmpz00_3922);
																																		}
																																		BgL_auxz00_3920
																																			=
																																			(
																																			(BgL_tvecz00_bglt)
																																			BgL_auxz00_3921);
																																	}
																																	BgL_typez00_2737
																																		=
																																		(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_3920))->BgL_itemzd2typezd2);
																															}}
																															{	/* SawJvm/compile.scm 209 */
																																obj_t
																																	BgL_idz00_2738;
																																BgL_idz00_2738 =
																																	(((BgL_typez00_bglt) COBJECT(BgL_typez00_2737))->BgL_namez00);
																																{	/* SawJvm/compile.scm 211 */

																																	BGl_pushzd2intzd2zzsaw_jvm_outz00
																																		(BgL_mez00_21,
																																		BINT
																																		(VECTOR_LENGTH
																																			(((obj_t)
																																					BgL_vecz00_2736))));
																																	{	/* SawJvm/compile.scm 213 */
																																		bool_t
																																			BgL_test2068z00_3932;
																																		{	/* SawJvm/compile.scm 213 */
																																			bool_t
																																				BgL__ortest_1168z00_2755;
																																			BgL__ortest_1168z00_2755
																																				=
																																				(BgL_idz00_2738
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						60)));
																																			if (BgL__ortest_1168z00_2755)
																																				{	/* SawJvm/compile.scm 213 */
																																					BgL_test2068z00_3932
																																						=
																																						BgL__ortest_1168z00_2755;
																																				}
																																			else
																																				{	/* SawJvm/compile.scm 213 */
																																					bool_t
																																						BgL__ortest_1169z00_2756;
																																					BgL__ortest_1169z00_2756
																																						=
																																						(BgL_idz00_2738
																																						==
																																						CNST_TABLE_REF
																																						(((long) 47)));
																																					if (BgL__ortest_1169z00_2756)
																																						{	/* SawJvm/compile.scm 213 */
																																							BgL_test2068z00_3932
																																								=
																																								BgL__ortest_1169z00_2756;
																																						}
																																					else
																																						{	/* SawJvm/compile.scm 213 */
																																							bool_t
																																								BgL__ortest_1170z00_2757;
																																							BgL__ortest_1170z00_2757
																																								=
																																								(BgL_idz00_2738
																																								==
																																								CNST_TABLE_REF
																																								(((long) 61)));
																																							if (BgL__ortest_1170z00_2757)
																																								{	/* SawJvm/compile.scm 213 */
																																									BgL_test2068z00_3932
																																										=
																																										BgL__ortest_1170z00_2757;
																																								}
																																							else
																																								{	/* SawJvm/compile.scm 213 */
																																									bool_t
																																										BgL__ortest_1171z00_2758;
																																									BgL__ortest_1171z00_2758
																																										=
																																										(BgL_idz00_2738
																																										==
																																										CNST_TABLE_REF
																																										(((long) 43)));
																																									if (BgL__ortest_1171z00_2758)
																																										{	/* SawJvm/compile.scm 213 */
																																											BgL_test2068z00_3932
																																												=
																																												BgL__ortest_1171z00_2758;
																																										}
																																									else
																																										{	/* SawJvm/compile.scm 213 */
																																											bool_t
																																												BgL__ortest_1172z00_2759;
																																											BgL__ortest_1172z00_2759
																																												=
																																												(BgL_idz00_2738
																																												==
																																												CNST_TABLE_REF
																																												(((long) 39)));
																																											if (BgL__ortest_1172z00_2759)
																																												{	/* SawJvm/compile.scm 213 */
																																													BgL_test2068z00_3932
																																														=
																																														BgL__ortest_1172z00_2759;
																																												}
																																											else
																																												{	/* SawJvm/compile.scm 213 */
																																													bool_t
																																														BgL__ortest_1173z00_2760;
																																													BgL__ortest_1173z00_2760
																																														=
																																														(BgL_idz00_2738
																																														==
																																														CNST_TABLE_REF
																																														(((long) 30)));
																																													if (BgL__ortest_1173z00_2760)
																																														{	/* SawJvm/compile.scm 213 */
																																															BgL_test2068z00_3932
																																																=
																																																BgL__ortest_1173z00_2760;
																																														}
																																													else
																																														{	/* SawJvm/compile.scm 213 */
																																															bool_t
																																																BgL__ortest_1174z00_2761;
																																															BgL__ortest_1174z00_2761
																																																=
																																																(BgL_idz00_2738
																																																==
																																																CNST_TABLE_REF
																																																(((long) 62)));
																																															if (BgL__ortest_1174z00_2761)
																																																{	/* SawJvm/compile.scm 213 */
																																																	BgL_test2068z00_3932
																																																		=
																																																		BgL__ortest_1174z00_2761;
																																																}
																																															else
																																																{	/* SawJvm/compile.scm 213 */
																																																	BgL_test2068z00_3932
																																																		=
																																																		(BgL_idz00_2738
																																																		==
																																																		CNST_TABLE_REF
																																																		(((long) 27)));
																																		}}}}}}}}
																																		if (BgL_test2068z00_3932)
																																			{	/* SawJvm/compile.scm 215 */
																																				obj_t
																																					BgL_arg1784z00_2749;
																																				{	/* SawJvm/compile.scm 215 */
																																					obj_t
																																						BgL_arg1790z00_2750;
																																					BgL_arg1790z00_2750
																																						=
																																						MAKE_YOUNG_PAIR
																																						((((BgL_typez00_bglt) COBJECT(BgL_typez00_2737))->BgL_namez00), BNIL);
																																					BgL_arg1784z00_2749
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 63)), BgL_arg1790z00_2750);
																																				}
																																				BGl_codez12z12zzsaw_jvm_outz00
																																					(BgL_mez00_21,
																																					BgL_arg1784z00_2749);
																																			}
																																		else
																																			{	/* SawJvm/compile.scm 217 */
																																				obj_t
																																					BgL_arg1798z00_2752;
																																				{	/* SawJvm/compile.scm 217 */
																																					obj_t
																																						BgL_arg1801z00_2753;
																																					BgL_arg1801z00_2753
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_compilezd2typezd2zzsaw_jvm_outz00
																																						(BgL_mez00_21,
																																							BgL_typez00_2737),
																																						BNIL);
																																					BgL_arg1798z00_2752
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 64)), BgL_arg1801z00_2753);
																																				}
																																				BGl_codez12z12zzsaw_jvm_outz00
																																					(BgL_mez00_21,
																																					BgL_arg1798z00_2752);
																																	}}
																																	{
																																		long
																																			BgL_iz00_2763;
																																		{	/* SawJvm/compile.scm 218 */
																																			bool_t
																																				BgL_tmpz00_3966;
																																			BgL_iz00_2763
																																				=
																																				((long)
																																				0);
																																		BgL_zc3z04anonymousza31809ze3z87_2764:
																																			if (
																																				(BgL_iz00_2763
																																					==
																																					VECTOR_LENGTH
																																					(((obj_t) BgL_vecz00_2736))))
																																				{	/* SawJvm/compile.scm 219 */
																																					BgL_tmpz00_3966
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			else
																																				{	/* SawJvm/compile.scm 219 */
																																					BGl_codez12z12zzsaw_jvm_outz00
																																						(BgL_mez00_21,
																																						CNST_TABLE_REF
																																						(((long) 51)));
																																					BGl_pushzd2intzd2zzsaw_jvm_outz00
																																						(BgL_mez00_21,
																																						BINT
																																						(BgL_iz00_2763));
																																					{	/* SawJvm/compile.scm 223 */
																																						bool_t
																																							BgL_test2077z00_3975;
																																						{	/* SawJvm/compile.scm 223 */
																																							bool_t
																																								BgL__ortest_1175z00_2777;
																																							BgL__ortest_1175z00_2777
																																								=
																																								(BgL_idz00_2738
																																								==
																																								CNST_TABLE_REF
																																								(((long) 60)));
																																							if (BgL__ortest_1175z00_2777)
																																								{	/* SawJvm/compile.scm 223 */
																																									BgL_test2077z00_3975
																																										=
																																										BgL__ortest_1175z00_2777;
																																								}
																																							else
																																								{	/* SawJvm/compile.scm 223 */
																																									bool_t
																																										BgL__ortest_1176z00_2778;
																																									BgL__ortest_1176z00_2778
																																										=
																																										(BgL_idz00_2738
																																										==
																																										CNST_TABLE_REF
																																										(((long) 47)));
																																									if (BgL__ortest_1176z00_2778)
																																										{	/* SawJvm/compile.scm 223 */
																																											BgL_test2077z00_3975
																																												=
																																												BgL__ortest_1176z00_2778;
																																										}
																																									else
																																										{	/* SawJvm/compile.scm 223 */
																																											bool_t
																																												BgL__ortest_1177z00_2779;
																																											BgL__ortest_1177z00_2779
																																												=
																																												(BgL_idz00_2738
																																												==
																																												CNST_TABLE_REF
																																												(((long) 61)));
																																											if (BgL__ortest_1177z00_2779)
																																												{	/* SawJvm/compile.scm 223 */
																																													BgL_test2077z00_3975
																																														=
																																														BgL__ortest_1177z00_2779;
																																												}
																																											else
																																												{	/* SawJvm/compile.scm 223 */
																																													bool_t
																																														BgL__ortest_1178z00_2780;
																																													BgL__ortest_1178z00_2780
																																														=
																																														(BgL_idz00_2738
																																														==
																																														CNST_TABLE_REF
																																														(((long) 43)));
																																													if (BgL__ortest_1178z00_2780)
																																														{	/* SawJvm/compile.scm 223 */
																																															BgL_test2077z00_3975
																																																=
																																																BgL__ortest_1178z00_2780;
																																														}
																																													else
																																														{	/* SawJvm/compile.scm 223 */
																																															bool_t
																																																BgL__ortest_1179z00_2781;
																																															BgL__ortest_1179z00_2781
																																																=
																																																(BgL_idz00_2738
																																																==
																																																CNST_TABLE_REF
																																																(((long) 39)));
																																															if (BgL__ortest_1179z00_2781)
																																																{	/* SawJvm/compile.scm 223 */
																																																	BgL_test2077z00_3975
																																																		=
																																																		BgL__ortest_1179z00_2781;
																																																}
																																															else
																																																{	/* SawJvm/compile.scm 223 */
																																																	bool_t
																																																		BgL__ortest_1180z00_2782;
																																																	BgL__ortest_1180z00_2782
																																																		=
																																																		(BgL_idz00_2738
																																																		==
																																																		CNST_TABLE_REF
																																																		(((long) 30)));
																																																	if (BgL__ortest_1180z00_2782)
																																																		{	/* SawJvm/compile.scm 223 */
																																																			BgL_test2077z00_3975
																																																				=
																																																				BgL__ortest_1180z00_2782;
																																																		}
																																																	else
																																																		{	/* SawJvm/compile.scm 223 */
																																																			bool_t
																																																				BgL__ortest_1181z00_2783;
																																																			BgL__ortest_1181z00_2783
																																																				=
																																																				(BgL_idz00_2738
																																																				==
																																																				CNST_TABLE_REF
																																																				(((long) 62)));
																																																			if (BgL__ortest_1181z00_2783)
																																																				{	/* SawJvm/compile.scm 223 */
																																																					BgL_test2077z00_3975
																																																						=
																																																						BgL__ortest_1181z00_2783;
																																																				}
																																																			else
																																																				{	/* SawJvm/compile.scm 223 */
																																																					BgL_test2077z00_3975
																																																						=
																																																						(BgL_idz00_2738
																																																						==
																																																						CNST_TABLE_REF
																																																						(((long) 27)));
																																						}}}}}}}}
																																						if (BgL_test2077z00_3975)
																																							{	/* SawJvm/compile.scm 225 */
																																								obj_t
																																									BgL_arg1820z00_2775;
																																								BgL_arg1820z00_2775
																																									=
																																									VECTOR_REF
																																									(
																																									((obj_t) BgL_vecz00_2736), BgL_iz00_2763);
																																								BGl_pushzd2numzd2zzsaw_jvm_outz00
																																									(BgL_mez00_21,
																																									BgL_arg1820z00_2775,
																																									BgL_idz00_2738);
																																							}
																																						else
																																							{	/* SawJvm/compile.scm 223 */
																																								{	/* SawJvm/compile.scm 227 */
																																									obj_t
																																										BgL_arg1821z00_2776;
																																									BgL_arg1821z00_2776
																																										=
																																										VECTOR_REF
																																										(
																																										((obj_t) BgL_vecz00_2736), BgL_iz00_2763);
																																									BGl_pushzd2stringzd2zzsaw_jvm_outz00
																																										(BgL_mez00_21,
																																										BgL_arg1821z00_2776);
																																								}
																																								BGl_codez12z12zzsaw_jvm_outz00
																																									(BgL_mez00_21,
																																									CNST_TABLE_REF
																																									(((long) 25)));
																																					}}
																																					{	/* SawJvm/compile.scm 229 */
																																						obj_t
																																							BgL_arg1822z00_2784;
																																						{	/* SawJvm/compile.scm 229 */
																																							bool_t
																																								BgL_test2085z00_4007;
																																							{	/* SawJvm/compile.scm 229 */
																																								bool_t
																																									BgL__ortest_1182z00_2794;
																																								BgL__ortest_1182z00_2794
																																									=
																																									(BgL_idz00_2738
																																									==
																																									CNST_TABLE_REF
																																									(((long) 60)));
																																								if (BgL__ortest_1182z00_2794)
																																									{	/* SawJvm/compile.scm 229 */
																																										BgL_test2085z00_4007
																																											=
																																											BgL__ortest_1182z00_2794;
																																									}
																																								else
																																									{	/* SawJvm/compile.scm 229 */
																																										BgL_test2085z00_4007
																																											=
																																											(BgL_idz00_2738
																																											==
																																											CNST_TABLE_REF
																																											(((long) 47)));
																																							}}
																																							if (BgL_test2085z00_4007)
																																								{	/* SawJvm/compile.scm 229 */
																																									BgL_arg1822z00_2784
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 65));
																																								}
																																							else
																																								{	/* SawJvm/compile.scm 229 */
																																									if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 61))))
																																										{	/* SawJvm/compile.scm 229 */
																																											BgL_arg1822z00_2784
																																												=
																																												CNST_TABLE_REF
																																												(
																																												((long) 66));
																																										}
																																									else
																																										{	/* SawJvm/compile.scm 229 */
																																											if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 43))))
																																												{	/* SawJvm/compile.scm 229 */
																																													BgL_arg1822z00_2784
																																														=
																																														CNST_TABLE_REF
																																														(
																																														((long) 67));
																																												}
																																											else
																																												{	/* SawJvm/compile.scm 229 */
																																													if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 39))))
																																														{	/* SawJvm/compile.scm 229 */
																																															BgL_arg1822z00_2784
																																																=
																																																CNST_TABLE_REF
																																																(
																																																((long) 68));
																																														}
																																													else
																																														{	/* SawJvm/compile.scm 229 */
																																															if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 30))))
																																																{	/* SawJvm/compile.scm 229 */
																																																	BgL_arg1822z00_2784
																																																		=
																																																		CNST_TABLE_REF
																																																		(
																																																		((long) 69));
																																																}
																																															else
																																																{	/* SawJvm/compile.scm 229 */
																																																	if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 62))))
																																																		{	/* SawJvm/compile.scm 229 */
																																																			BgL_arg1822z00_2784
																																																				=
																																																				CNST_TABLE_REF
																																																				(
																																																				((long) 70));
																																																		}
																																																	else
																																																		{	/* SawJvm/compile.scm 229 */
																																																			if ((BgL_idz00_2738 == CNST_TABLE_REF(((long) 27))))
																																																				{	/* SawJvm/compile.scm 229 */
																																																					BgL_arg1822z00_2784
																																																						=
																																																						CNST_TABLE_REF
																																																						(
																																																						((long) 71));
																																																				}
																																																			else
																																																				{	/* SawJvm/compile.scm 229 */
																																																					BgL_arg1822z00_2784
																																																						=
																																																						CNST_TABLE_REF
																																																						(
																																																						((long) 72));
																																						}}}}}}}}
																																						BGl_codez12z12zzsaw_jvm_outz00
																																							(BgL_mez00_21,
																																							BgL_arg1822z00_2784);
																																					}
																																					{
																																						long
																																							BgL_iz00_4040;
																																						BgL_iz00_4040
																																							=
																																							(BgL_iz00_2763
																																							+
																																							((long) 1));
																																						BgL_iz00_2763
																																							=
																																							BgL_iz00_4040;
																																						goto
																																							BgL_zc3z04anonymousza31809ze3z87_2764;
																																					}
																																				}
																																			BBOOL
																																				(BgL_tmpz00_3966);
																																		}
																																	}
																																}
																															}
																														}
																													}
																												else
																													{	/* SawJvm/compile.scm 240 */
																														obj_t
																															BgL_arg1835z00_2800;
																														BgL_arg1835z00_2800
																															=
																															(((BgL_scnstz00_bglt) COBJECT(((BgL_scnstz00_bglt) BgL_valz00_23)))->BgL_classz00);
																														BGl_internalzd2errorzd2zztools_errorz00
																															(BGl_string2021z00zzsaw_jvm_compilez00,
																															BGl_string2022z00zzsaw_jvm_compilez00,
																															BgL_arg1835z00_2800);
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
			{	/* SawJvm/compile.scm 241 */
				obj_t BgL_arg1836z00_2805;

				{	/* SawJvm/compile.scm 241 */
					obj_t BgL_arg1838z00_2806;

					{	/* SawJvm/compile.scm 241 */
						obj_t BgL_arg1840z00_2807;

						BgL_arg1840z00_2807 =
							BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_mez00_21,
							((BgL_globalz00_bglt) BgL_varz00_22));
						BgL_arg1838z00_2806 = MAKE_YOUNG_PAIR(BgL_arg1840z00_2807, BNIL);
					}
					BgL_arg1836z00_2805 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)), BgL_arg1838z00_2806);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_21, BgL_arg1836z00_2805);
			}
		}

	}



/* module-dlopen */
	obj_t BGl_modulezd2dlopenzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt BgL_mez00_24)
	{
		{	/* SawJvm/compile.scm 246 */
			BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_24,
				CNST_TABLE_REF(((long) 73)));
			BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_24, BNIL, BNIL);
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_24, CNST_TABLE_REF(((long) 21)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_24, CNST_TABLE_REF(((long) 22)));
			{	/* SawJvm/compile.scm 251 */
				obj_t BgL_arg1841z00_2808;

				{	/* SawJvm/compile.scm 251 */
					obj_t BgL_list1842z00_2809;

					BgL_list1842z00_2809 =
						MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
					BgL_arg1841z00_2808 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)),
						BgL_list1842z00_2809);
				}
				BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_24,
					((BgL_globalz00_bglt) BgL_arg1841z00_2808));
			}
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_24, CNST_TABLE_REF(((long) 7)));
			BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_24, CNST_TABLE_REF(((long) 8)));
			return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_24);
		}

	}



/* module-functions */
	bool_t BGl_modulezd2functionszd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_25)
	{
		{	/* SawJvm/compile.scm 259 */
			{	/* SawJvm/compile.scm 260 */
				obj_t BgL_g1623z00_2810;

				BgL_g1623z00_2810 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_mez00_25)))->BgL_functionsz00);
				{
					obj_t BgL_l1621z00_2812;

					BgL_l1621z00_2812 = BgL_g1623z00_2810;
				BgL_zc3z04anonymousza31843ze3z87_2813:
					if (PAIRP(BgL_l1621z00_2812))
						{	/* SawJvm/compile.scm 260 */
							BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_mez00_25,
								CAR(BgL_l1621z00_2812));
							{
								obj_t BgL_l1621z00_4075;

								BgL_l1621z00_4075 = CDR(BgL_l1621z00_2812);
								BgL_l1621z00_2812 = BgL_l1621z00_4075;
								goto BgL_zc3z04anonymousza31843ze3z87_2813;
							}
						}
					else
						{	/* SawJvm/compile.scm 260 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* module-function */
	obj_t BGl_modulezd2functionzd2zzsaw_jvm_compilez00(BgL_jvmz00_bglt
		BgL_mez00_26, obj_t BgL_vz00_27)
	{
		{	/* SawJvm/compile.scm 262 */
			{	/* SawJvm/compile.scm 264 */
				obj_t BgL_codez00_2819;
				obj_t BgL_paramsz00_2820;

				BgL_codez00_2819 =
					BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
					((BgL_backendz00_bglt) BgL_mez00_26),
					((BgL_globalz00_bglt) BgL_vz00_27));
				{	/* SawJvm/compile.scm 265 */
					obj_t BgL_l1624z00_2821;

					BgL_l1624z00_2821 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_vz00_27))))->
										BgL_valuez00))))->BgL_argsz00);
					if (NULLP(BgL_l1624z00_2821))
						{	/* SawJvm/compile.scm 265 */
							BgL_paramsz00_2820 = BNIL;
						}
					else
						{	/* SawJvm/compile.scm 265 */
							obj_t BgL_head1626z00_2823;

							{	/* SawJvm/compile.scm 265 */
								BgL_rtl_regz00_bglt BgL_arg1853z00_2835;

								{	/* SawJvm/compile.scm 265 */
									obj_t BgL_arg1855z00_2836;

									BgL_arg1855z00_2836 = CAR(((obj_t) BgL_l1624z00_2821));
									BgL_arg1853z00_2835 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										((BgL_localz00_bglt) BgL_arg1855z00_2836));
								}
								{	/* SawJvm/compile.scm 265 */
									obj_t BgL_res2018z00_3473;

									BgL_res2018z00_3473 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_arg1853z00_2835), BNIL);
									BgL_head1626z00_2823 = BgL_res2018z00_3473;
								}
							}
							{	/* SawJvm/compile.scm 265 */
								obj_t BgL_g1629z00_2824;

								BgL_g1629z00_2824 = CDR(((obj_t) BgL_l1624z00_2821));
								{
									obj_t BgL_l1624z00_2826;
									obj_t BgL_tail1627z00_2827;

									BgL_l1624z00_2826 = BgL_g1629z00_2824;
									BgL_tail1627z00_2827 = BgL_head1626z00_2823;
								BgL_zc3z04anonymousza31847ze3z87_2828:
									if (NULLP(BgL_l1624z00_2826))
										{	/* SawJvm/compile.scm 265 */
											BgL_paramsz00_2820 = BgL_head1626z00_2823;
										}
									else
										{	/* SawJvm/compile.scm 265 */
											obj_t BgL_newtail1628z00_2830;

											{	/* SawJvm/compile.scm 265 */
												BgL_rtl_regz00_bglt BgL_arg1851z00_2832;

												{	/* SawJvm/compile.scm 265 */
													obj_t BgL_arg1852z00_2833;

													BgL_arg1852z00_2833 =
														CAR(((obj_t) BgL_l1624z00_2826));
													BgL_arg1851z00_2832 =
														BGl_localzd2ze3regz31zzsaw_node2rtlz00(
														((BgL_localz00_bglt) BgL_arg1852z00_2833));
												}
												{	/* SawJvm/compile.scm 265 */
													obj_t BgL_res2020z00_3477;

													BgL_res2020z00_3477 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1851z00_2832), BNIL);
													BgL_newtail1628z00_2830 = BgL_res2020z00_3477;
												}
											}
											SET_CDR(BgL_tail1627z00_2827, BgL_newtail1628z00_2830);
											{	/* SawJvm/compile.scm 265 */
												obj_t BgL_arg1850z00_2831;

												BgL_arg1850z00_2831 = CDR(((obj_t) BgL_l1624z00_2826));
												{
													obj_t BgL_tail1627z00_4107;
													obj_t BgL_l1624z00_4106;

													BgL_l1624z00_4106 = BgL_arg1850z00_2831;
													BgL_tail1627z00_4107 = BgL_newtail1628z00_2830;
													BgL_tail1627z00_2827 = BgL_tail1627z00_4107;
													BgL_l1624z00_2826 = BgL_l1624z00_4106;
													goto BgL_zc3z04anonymousza31847ze3z87_2828;
												}
											}
										}
								}
							}
						}
				}
				BGl_openzd2globalzd2methodz00zzsaw_jvm_outz00(BgL_mez00_26,
					((BgL_globalz00_bglt) BgL_vz00_27));
				BGl_buildzd2treezd2zzsaw_exprz00(
					((BgL_backendz00_bglt) BgL_mez00_26), BgL_paramsz00_2820,
					BgL_codez00_2819);
				BgL_codez00_2819 =
					BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2((
						(BgL_backendz00_bglt) BgL_mez00_26),
					((BgL_globalz00_bglt) BgL_vz00_27), BgL_paramsz00_2820,
					BgL_codez00_2819);
				BgL_codez00_2819 =
					BGl_bbvz00zzsaw_bbvz00(((BgL_backendz00_bglt) BgL_mez00_26),
					((BgL_globalz00_bglt) BgL_vz00_27), BgL_paramsz00_2820,
					BgL_codez00_2819);
				BGl_modulezd2codezd2zzsaw_jvm_codez00(BgL_mez00_26, BgL_paramsz00_2820,
					BgL_codez00_2819);
				return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_26);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_compilez00()
	{
		{	/* SawJvm/compile.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 321177294),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(((long) 352965226),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_exprz00(((long) 142712633),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					250697389), BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_bbvz00(((long) 263563901),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 179871455),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 441640642),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(((long) 282450758),
				BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
			return BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(((long)
					44766332), BSTRING_TO_STRING(BGl_string2023z00zzsaw_jvm_compilez00));
		}

	}

#ifdef __cplusplus
}
#endif
