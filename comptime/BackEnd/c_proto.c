/*===========================================================================*/
/*   (BackEnd/c_proto.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_proto.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;


	static obj_t BGl_emitzd2cnstzd2uint64z00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt, obj_t);
	static obj_t
		BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00
		(BgL_valuez00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_za2czd2splitzd2stringza2z00zzengine_paramz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2czd2scope1408z62zzbackend_c_prototypez00(obj_t,
		obj_t);
	static obj_t BGl_emitzd2cnstzd2selfunz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t BGl_objectzd2initzd2zzbackend_c_prototypez00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62getzd2czd2scopezd2local1413zb0zzbackend_c_prototypez00(obj_t, obj_t);
	static obj_t BGl_emitzd2cnstzd2int32z00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t, obj_t);
	static obj_t BGl_z62emitzd2prototypezb0zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62emitzd2prototypeszb0zzbackend_c_prototypez00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_c_prototypez00();
	static obj_t BGl_emitzd2cnstzd2int64z00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00;
	extern obj_t BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00(obj_t);
	BGL_IMPORT obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	extern obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t);
	extern bool_t BGl_emitzd2copzd2zzcgen_emitzd2copzd2(BgL_copz00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t
		BGl_z62getzd2czd2scopezd2global1411zb0zzbackend_c_prototypez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62emitzd2prototypezd2svar1399z62zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62emitzd2prototypezd2scnst1401z62zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_emitzd2cnstzd2slfunz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_c_prototypez00();
	extern obj_t BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt);
	extern obj_t BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_emitzd2cnstzd2zzbackend_c_prototypez00(BgL_scnstz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_c_prototypez00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzbackend_c_prototypez00(long, obj_t);
	static obj_t BGl_loopze71ze7zzbackend_c_prototypez00(obj_t);
	static obj_t BGl_loopze72ze7zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	static obj_t
		BGl_z62zc3z04anonymousza31497ze3ze5zzbackend_c_prototypez00(obj_t, obj_t);
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t
		BGl_z62emitzd2prototypezd2sfun1403z62zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00 =
		BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_getzd2czd2scopez00zzbackend_c_prototypez00(BgL_variablez00_bglt);
	static obj_t BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzbackend_c_prototypez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_c_prototypez00();
	extern obj_t BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00(obj_t);
	static obj_t BGl_z62requirezd2prototypezf3z43zzbackend_c_prototypez00(obj_t,
		obj_t);
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_crosszd2namezd2zzbackend_c_prototypez00(obj_t);
	static obj_t BGl_z62getzd2czd2scopez62zzbackend_c_prototypez00(obj_t, obj_t);
	static obj_t BGl_emitzd2slotze70z35zzbackend_c_prototypez00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t
		BGl_funzd2vazd2stackablezf3zf3zzbackend_c_prototypez00
		(BgL_variablez00_bglt);
	extern obj_t BGl_getzd2staticzd2pragmasz00zzast_pragmaz00();
	static obj_t
		BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static obj_t BGl_z62emitzd2classzd2typesz62zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62emitzd2prototypezd2cfun1405z62zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t string_for_read(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
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
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzbackend_c_prototypez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00();
	extern obj_t BGl_scnstz00zzast_varz00;
	BGL_EXPORTED_DECL bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	static obj_t BGl_z62emitzd2prototype1396zb0zzbackend_c_prototypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00();
	BGL_IMPORT obj_t bgl_display_fixnum(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
	static obj_t BGl_z62emitzd2cnstszb0zzbackend_c_prototypez00(obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_emitzd2cnstzd2uint32z00zzbackend_c_prototypez00(obj_t,
		BgL_globalz00_bglt);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static obj_t
		BGl_z62emitzd2prototypezd2cvar1407z62zzbackend_c_prototypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[23];


	   
		 
		DEFINE_STRING(BGl_string2309z00zzbackend_c_prototypez00,
		BgL_bgl_string2309za700za7za7b2401za7, "static BGL_THREAD_DECL", 22);
	      DEFINE_STRING(BGl_string2310z00zzbackend_c_prototypez00,
		BgL_bgl_string2310za700za7za7b2402za7, "static", 6);
	      DEFINE_STRING(BGl_string2311z00zzbackend_c_prototypez00,
		BgL_bgl_string2311za700za7za7b2403za7, " = BUNSPEC;", 11);
	      DEFINE_STRING(BGl_string2312z00zzbackend_c_prototypez00,
		BgL_bgl_string2312za700za7za7b2404za7, "BGL_THREAD_DECL ", 16);
	      DEFINE_STRING(BGl_string2313z00zzbackend_c_prototypez00,
		BgL_bgl_string2313za700za7za7b2405za7, "BGL_EXPORTED_DEF ", 17);
	      DEFINE_STRING(BGl_string2314z00zzbackend_c_prototypez00,
		BgL_bgl_string2314za700za7za7b2406za7, "(", 1);
	      DEFINE_STRING(BGl_string2315z00zzbackend_c_prototypez00,
		BgL_bgl_string2315za700za7za7b2407za7, ")", 1);
	      DEFINE_STRING(BGl_string2316z00zzbackend_c_prototypez00,
		BgL_bgl_string2316za700za7za7b2408za7, ", ", 2);
	      DEFINE_STRING(BGl_string2317z00zzbackend_c_prototypez00,
		BgL_bgl_string2317za700za7za7b2409za7, "()", 2);
	      DEFINE_STRING(BGl_string2318z00zzbackend_c_prototypez00,
		BgL_bgl_string2318za700za7za7b2410za7, "PROCEDURE", 9);
	      DEFINE_STRING(BGl_string2319z00zzbackend_c_prototypez00,
		BgL_bgl_string2319za700za7za7b2411za7, "GENERIC", 7);
	      DEFINE_STRING(BGl_string2320z00zzbackend_c_prototypez00,
		BgL_bgl_string2320za700za7za7b2412za7, "Unknown cnst class \"~a\"", 23);
	      DEFINE_STRING(BGl_string2321z00zzbackend_c_prototypez00,
		BgL_bgl_string2321za700za7za7b2413za7, "backend:emit-cnst", 17);
	      DEFINE_STRING(BGl_string2322z00zzbackend_c_prototypez00,
		BgL_bgl_string2322za700za7za7b2414za7, "DEFINE_STRING_START( ", 21);
	      DEFINE_STRING(BGl_string2323z00zzbackend_c_prototypez00,
		BgL_bgl_string2323za700za7za7b2415za7, "), ", 3);
	      DEFINE_STRING(BGl_string2324z00zzbackend_c_prototypez00,
		BgL_bgl_string2324za700za7za7b2416za7, "{", 1);
	      DEFINE_STRING(BGl_string2325z00zzbackend_c_prototypez00,
		BgL_bgl_string2325za700za7za7b2417za7, "0 } \n", 5);
	      DEFINE_STRING(BGl_string2326z00zzbackend_c_prototypez00,
		BgL_bgl_string2326za700za7za7b2418za7, "DEFINE_STRING_STOP( ", 20);
	      DEFINE_STRING(BGl_string2327z00zzbackend_c_prototypez00,
		BgL_bgl_string2327za700za7za7b2419za7, ");", 2);
	      DEFINE_STRING(BGl_string2328z00zzbackend_c_prototypez00,
		BgL_bgl_string2328za700za7za7b2420za7, ",", 1);
	      DEFINE_STRING(BGl_string2329z00zzbackend_c_prototypez00,
		BgL_bgl_string2329za700za7za7b2421za7, "DEFINE_STRING( ", 15);
	      DEFINE_STRING(BGl_string2330z00zzbackend_c_prototypez00,
		BgL_bgl_string2330za700za7za7b2422za7, ", \"", 3);
	      DEFINE_STRING(BGl_string2331z00zzbackend_c_prototypez00,
		BgL_bgl_string2331za700za7za7b2423za7, "\", ", 3);
	      DEFINE_STRING(BGl_string2332z00zzbackend_c_prototypez00,
		BgL_bgl_string2332za700za7za7b2424za7, " );", 3);
	      DEFINE_STRING(BGl_string2333z00zzbackend_c_prototypez00,
		BgL_bgl_string2333za700za7za7b2425za7, "emit-cnst-string", 16);
	      DEFINE_STRING(BGl_string2334z00zzbackend_c_prototypez00,
		BgL_bgl_string2334za700za7za7b2426za7, "Can't emit string", 17);
	      DEFINE_STRING(BGl_string2335z00zzbackend_c_prototypez00,
		BgL_bgl_string2335za700za7za7b2427za7, "\"\n\"", 3);
	      DEFINE_STRING(BGl_string2336z00zzbackend_c_prototypez00,
		BgL_bgl_string2336za700za7za7b2428za7, "#define ", 8);
	      DEFINE_STRING(BGl_string2337z00zzbackend_c_prototypez00,
		BgL_bgl_string2337za700za7za7b2429za7, " bigloo_nan", 11);
	      DEFINE_STRING(BGl_string2338z00zzbackend_c_prototypez00,
		BgL_bgl_string2338za700za7za7b2430za7, " bigloo_infinity", 16);
	      DEFINE_STRING(BGl_string2339z00zzbackend_c_prototypez00,
		BgL_bgl_string2339za700za7za7b2431za7, " bigloo_minfinity", 17);
	      DEFINE_STRING(BGl_string2340z00zzbackend_c_prototypez00,
		BgL_bgl_string2340za700za7za7b2432za7, "DEFINE_REAL( ", 13);
	      DEFINE_STRING(BGl_string2341z00zzbackend_c_prototypez00,
		BgL_bgl_string2341za700za7za7b2433za7, "DEFINE_ELONG( ", 14);
	      DEFINE_STRING(BGl_string2342z00zzbackend_c_prototypez00,
		BgL_bgl_string2342za700za7za7b2434za7, "DEFINE_LLONG( ", 14);
	      DEFINE_STRING(BGl_string2343z00zzbackend_c_prototypez00,
		BgL_bgl_string2343za700za7za7b2435za7, "DEFINE_INT32( ", 14);
	      DEFINE_STRING(BGl_string2344z00zzbackend_c_prototypez00,
		BgL_bgl_string2344za700za7za7b2436za7, "DEFINE_UINT32( ", 15);
	      DEFINE_STRING(BGl_string2345z00zzbackend_c_prototypez00,
		BgL_bgl_string2345za700za7za7b2437za7, "DEFINE_INT64( ", 14);
	      DEFINE_STRING(BGl_string2346z00zzbackend_c_prototypez00,
		BgL_bgl_string2346za700za7za7b2438za7, "DEFINE_UINT64( ", 15);
	      DEFINE_STRING(BGl_string2347z00zzbackend_c_prototypez00,
		BgL_bgl_string2347za700za7za7b2439za7, "DEFINE_STATIC_BGL_", 18);
	      DEFINE_STRING(BGl_string2348z00zzbackend_c_prototypez00,
		BgL_bgl_string2348za700za7za7b2440za7, "( ", 2);
	      DEFINE_STRING(BGl_string2349z00zzbackend_c_prototypez00,
		BgL_bgl_string2349za700za7za7b2441za7, "DEFINE_EXPORT_BGL_", 18);
	      DEFINE_STRING(BGl_string2350z00zzbackend_c_prototypez00,
		BgL_bgl_string2350za700za7za7b2442za7, ", opt_generic_entry", 19);
	      DEFINE_STRING(BGl_string2351z00zzbackend_c_prototypez00,
		BgL_bgl_string2351za700za7za7b2443za7, ", BFALSE, ", 10);
	      DEFINE_STRING(BGl_string2352z00zzbackend_c_prototypez00,
		BgL_bgl_string2352za700za7za7b2444za7, ", 0L, BUNSPEC, ", 15);
	      DEFINE_STRING(BGl_string2353z00zzbackend_c_prototypez00,
		BgL_bgl_string2353za700za7za7b2445za7, ", bgl_va_stack_entry", 20);
	      DEFINE_STRING(BGl_string2354z00zzbackend_c_prototypez00,
		BgL_bgl_string2354za700za7za7b2446za7, ", va_generic_entry", 18);
	      DEFINE_STRING(BGl_string2355z00zzbackend_c_prototypez00,
		BgL_bgl_string2355za700za7za7b2447za7, ", BUNSPEC, ", 11);
	      DEFINE_STRING(BGl_string2356z00zzbackend_c_prototypez00,
		BgL_bgl_string2356za700za7za7b2448za7, "static obj_t ", 13);
	      DEFINE_STRING(BGl_string2357z00zzbackend_c_prototypez00,
		BgL_bgl_string2357za700za7za7b2449za7, ";", 1);
	      DEFINE_STRING(BGl_string2358z00zzbackend_c_prototypez00,
		BgL_bgl_string2358za700za7za7b2450za7, "DEFINE_BGL_L_PROCEDURE(", 23);
	      DEFINE_STRING(BGl_string2359z00zzbackend_c_prototypez00,
		BgL_bgl_string2359za700za7za7b2451za7, "DEFINE_TVECTOR_START( ", 22);
	      DEFINE_STRING(BGl_string2360z00zzbackend_c_prototypez00,
		BgL_bgl_string2360za700za7za7b2452za7, " ) ", 3);
	      DEFINE_STRING(BGl_string2361z00zzbackend_c_prototypez00,
		BgL_bgl_string2361za700za7za7b2453za7, " DEFINE_TVECTOR_STOP( ", 22);
	      DEFINE_STRING(BGl_string2362z00zzbackend_c_prototypez00,
		BgL_bgl_string2362za700za7za7b2454za7, "typedef ", 8);
	      DEFINE_STRING(BGl_string2363z00zzbackend_c_prototypez00,
		BgL_bgl_string2363za700za7za7b2455za7, " {", 2);
	      DEFINE_STRING(BGl_string2364z00zzbackend_c_prototypez00,
		BgL_bgl_string2364za700za7za7b2456za7, "   char dummy;", 14);
	      DEFINE_STRING(BGl_string2365z00zzbackend_c_prototypez00,
		BgL_bgl_string2365za700za7za7b2457za7, "} *", 3);
	      DEFINE_STRING(BGl_string2366z00zzbackend_c_prototypez00,
		BgL_bgl_string2366za700za7za7b2458za7, ";\n", 2);
	      DEFINE_STRING(BGl_string2367z00zzbackend_c_prototypez00,
		BgL_bgl_string2367za700za7za7b2459za7, "   header_t header;", 19);
	      DEFINE_STRING(BGl_string2368z00zzbackend_c_prototypez00,
		BgL_bgl_string2368za700za7za7b2460za7, "   obj_t widening;", 18);
	      DEFINE_STRING(BGl_string2369z00zzbackend_c_prototypez00,
		BgL_bgl_string2369za700za7za7b2461za7, "/* object type definitions */", 29);
	      DEFINE_STRING(BGl_string2370z00zzbackend_c_prototypez00,
		BgL_bgl_string2370za700za7za7b2462za7, "   ", 3);
	      DEFINE_STRING(BGl_string2371z00zzbackend_c_prototypez00,
		BgL_bgl_string2371za700za7za7b2463za7, " ", 1);
	      DEFINE_STRING(BGl_string2372z00zzbackend_c_prototypez00,
		BgL_bgl_string2372za700za7za7b2464za7, " *", 2);
	      DEFINE_STRING(BGl_string2374z00zzbackend_c_prototypez00,
		BgL_bgl_string2374za700za7za7b2465za7, "emit-prototype1396", 18);
	      DEFINE_STRING(BGl_string2376z00zzbackend_c_prototypez00,
		BgL_bgl_string2376za700za7za7b2466za7, "get-c-scope1408", 15);
	      DEFINE_STRING(BGl_string2377z00zzbackend_c_prototypez00,
		BgL_bgl_string2377za700za7za7b2467za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2379z00zzbackend_c_prototypez00,
		BgL_bgl_string2379za700za7za7b2468za7, "emit-prototype", 14);
	      DEFINE_STRING(BGl_string2385z00zzbackend_c_prototypez00,
		BgL_bgl_string2385za700za7za7b2469za7, "get-c-scope", 11);
	      DEFINE_STRING(BGl_string2387z00zzbackend_c_prototypez00,
		BgL_bgl_string2387za700za7za7b2470za7, "BGL_IMPORT", 10);
	      DEFINE_STRING(BGl_string2388z00zzbackend_c_prototypez00,
		BgL_bgl_string2388za700za7za7b2471za7, "extern", 6);
	      DEFINE_STRING(BGl_string2389z00zzbackend_c_prototypez00,
		BgL_bgl_string2389za700za7za7b2472za7, "BGL_EXPORTED_DECL", 17);
	      DEFINE_STRING(BGl_string2390z00zzbackend_c_prototypez00,
		BgL_bgl_string2390za700za7za7b2473za7, "Unknown importation", 19);
	      DEFINE_STRING(BGl_string2391z00zzbackend_c_prototypez00,
		BgL_bgl_string2391za700za7za7b2474za7, " BGL_THREAD_DECL", 16);
	      DEFINE_STRING(BGl_string2392z00zzbackend_c_prototypez00,
		BgL_bgl_string2392za700za7za7b2475za7, "BGL_IMPORT ", 11);
	      DEFINE_STRING(BGl_string2393z00zzbackend_c_prototypez00,
		BgL_bgl_string2393za700za7za7b2476za7, "extern ", 7);
	      DEFINE_STRING(BGl_string2394z00zzbackend_c_prototypez00,
		BgL_bgl_string2394za700za7za7b2477za7, ", ...)", 6);
	      DEFINE_STRING(BGl_string2395z00zzbackend_c_prototypez00,
		BgL_bgl_string2395za700za7za7b2478za7, "...)", 4);
	      DEFINE_STRING(BGl_string2396z00zzbackend_c_prototypez00,
		BgL_bgl_string2396za700za7za7b2479za7, "backend_c_prototype", 19);
	      DEFINE_STRING(BGl_string2397z00zzbackend_c_prototypez00,
		BgL_bgl_string2397za700za7za7b2480za7,
		"emit-prototype1396 get-c-scope1408 * import stvector slfun selfun sgfun sfun suint64 sint64 suint32 sint32 sllong selong sreal sstring thread-local bigloo-initialized! __param never export static ",
		196);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_requirezd2prototypezf3zd2envzf3zzbackend_c_prototypez00,
		BgL_bgl_za762requireza7d2pro2481z00,
		BGl_z62requirezd2prototypezf3z43zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2482z00,
		BGl_z62emitzd2prototypezb0zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2prototypeszd2envz00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2483z00,
		BGl_z62emitzd2prototypeszb0zzbackend_c_prototypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
		BgL_bgl_za762getza7d2cza7d2sco2484za7,
		BGl_z62getzd2czd2scopez62zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2307z00zzbackend_c_prototypez00,
		BgL_bgl_za762za7c3za704anonymo2485za7,
		BGl_z62zc3z04anonymousza31497ze3ze5zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2308z00zzbackend_c_prototypez00,
		BgL_bgl_za762za7c3za704anonymo2486za7,
		BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2487z00,
		BGl_z62emitzd2prototype1396zb0zzbackend_c_prototypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2375z00zzbackend_c_prototypez00,
		BgL_bgl_za762getza7d2cza7d2sco2488za7,
		BGl_z62getzd2czd2scope1408z62zzbackend_c_prototypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2489z00,
		BGl_z62emitzd2prototypezd2svar1399z62zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2380z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2490z00,
		BGl_z62emitzd2prototypezd2scnst1401z62zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2491z00,
		BGl_z62emitzd2prototypezd2sfun1403z62zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2492z00,
		BGl_z62emitzd2prototypezd2cfun1405z62zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2383z00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2protot2493z00,
		BGl_z62emitzd2prototypezd2cvar1407z62zzbackend_c_prototypez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2384z00zzbackend_c_prototypez00,
		BgL_bgl_za762getza7d2cza7d2sco2494za7,
		BGl_z62getzd2czd2scopezd2global1411zb0zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzbackend_c_prototypez00,
		BgL_bgl_za762getza7d2cza7d2sco2495za7,
		BGl_z62getzd2czd2scopezd2local1413zb0zzbackend_c_prototypez00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2cnstszd2envz00zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2cnstsza72496za7,
		BGl_z62emitzd2cnstszb0zzbackend_c_prototypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2classzd2typeszd2envzd2zzbackend_c_prototypez00,
		BgL_bgl_za762emitza7d2classza72497za7,
		BGl_z62emitzd2classzd2typesz62zzbackend_c_prototypez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long
		BgL_checksumz00_3616, char *BgL_fromz00_3617)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_prototypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_c_prototypez00();
					BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00();
					BGl_cnstzd2initzd2zzbackend_c_prototypez00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00();
					BGl_genericzd2initzd2zzbackend_c_prototypez00();
					BGl_methodzd2initzd2zzbackend_c_prototypez00();
					return BGl_toplevelzd2initzd2zzbackend_c_prototypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"backend_c_prototype");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"backend_c_prototype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			{	/* BackEnd/c_proto.scm 15 */
				obj_t BgL_cportz00_3560;

				{	/* BackEnd/c_proto.scm 15 */
					obj_t BgL_stringz00_3568;

					BgL_stringz00_3568 = BGl_string2397z00zzbackend_c_prototypez00;
					{	/* BackEnd/c_proto.scm 15 */
						obj_t BgL_startz00_3569;

						BgL_startz00_3569 = BINT(((long) 0));
						{	/* BackEnd/c_proto.scm 15 */
							obj_t BgL_endz00_3570;

							BgL_endz00_3570 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3568)));
							{	/* BackEnd/c_proto.scm 15 */

								BgL_cportz00_3560 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3568, BgL_startz00_3569, BgL_endz00_3570);
				}}}}
				{
					long BgL_iz00_3561;

					BgL_iz00_3561 = ((long) 22);
				BgL_loopz00_3562:
					if ((BgL_iz00_3561 == ((long) -1)))
						{	/* BackEnd/c_proto.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_proto.scm 15 */
							{	/* BackEnd/c_proto.scm 15 */
								obj_t BgL_arg2399z00_3564;

								{	/* BackEnd/c_proto.scm 15 */

									{	/* BackEnd/c_proto.scm 15 */
										obj_t BgL_locationz00_3566;

										BgL_locationz00_3566 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_proto.scm 15 */

											BgL_arg2399z00_3564 =
												BGl_readz00zz__readerz00(BgL_cportz00_3560,
												BgL_locationz00_3566);
										}
									}
								}
								{	/* BackEnd/c_proto.scm 15 */
									int BgL_tmpz00_3654;

									BgL_tmpz00_3654 = (int) (BgL_iz00_3561);
									CNST_TABLE_SET(BgL_tmpz00_3654, BgL_arg2399z00_3564);
							}}
							{	/* BackEnd/c_proto.scm 15 */
								int BgL_auxz00_3567;

								BgL_auxz00_3567 = (int) ((BgL_iz00_3561 - ((long) 1)));
								{
									long BgL_iz00_3659;

									BgL_iz00_3659 = (long) (BgL_auxz00_3567);
									BgL_iz00_3561 = BgL_iz00_3659;
									goto BgL_loopz00_3562;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			return BUNSPEC;
		}

	}



/* require-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt
		BgL_globalz00_13)
	{
		{	/* BackEnd/c_proto.scm 49 */
			{	/* BackEnd/c_proto.scm 50 */
				bool_t BgL_test2500z00_3662;

				{	/* BackEnd/c_proto.scm 50 */
					bool_t BgL__ortest_1137z00_2050;

					{	/* BackEnd/c_proto.scm 50 */
						obj_t BgL_arg1493z00_2054;

						BgL_arg1493z00_2054 =
							(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_13))->BgL_modulez00);
						BgL__ortest_1137z00_2050 =
							(BgL_arg1493z00_2054 == BGl_za2moduleza2z00zzmodule_modulez00);
					}
					if (BgL__ortest_1137z00_2050)
						{	/* BackEnd/c_proto.scm 50 */
							BgL_test2500z00_3662 = BgL__ortest_1137z00_2050;
						}
					else
						{	/* BackEnd/c_proto.scm 50 */
							if (
								((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_13))->
										BgL_importz00) == CNST_TABLE_REF(((long) 0))))
								{	/* BackEnd/c_proto.scm 51 */
									BgL_test2500z00_3662 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/c_proto.scm 51 */
									BgL_test2500z00_3662 = ((bool_t) 1);
								}
						}
				}
				if (BgL_test2500z00_3662)
					{	/* BackEnd/c_proto.scm 52 */
						bool_t BgL__ortest_1138z00_2043;

						{	/* BackEnd/c_proto.scm 52 */
							bool_t BgL_test2503z00_3670;

							{	/* BackEnd/c_proto.scm 52 */
								obj_t BgL_arg1474z00_2049;

								BgL_arg1474z00_2049 =
									(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_13))->
									BgL_modulez00);
								BgL_test2503z00_3670 =
									(BgL_arg1474z00_2049 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_test2503z00_3670)
								{	/* BackEnd/c_proto.scm 52 */
									BgL__ortest_1138z00_2043 =
										(
										(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_13))->
											BgL_importz00) == CNST_TABLE_REF(((long) 1)));
								}
							else
								{	/* BackEnd/c_proto.scm 52 */
									BgL__ortest_1138z00_2043 = ((bool_t) 0);
								}
						}
						if (BgL__ortest_1138z00_2043)
							{	/* BackEnd/c_proto.scm 52 */
								return BgL__ortest_1138z00_2043;
							}
						else
							{	/* BackEnd/c_proto.scm 54 */
								bool_t BgL__ortest_1139z00_2044;

								BgL__ortest_1139z00_2044 =
									(
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_globalz00_13)))->
										BgL_occurrencez00) > ((long) 0));
								if (BgL__ortest_1139z00_2044)
									{	/* BackEnd/c_proto.scm 54 */
										return BgL__ortest_1139z00_2044;
									}
								else
									{	/* BackEnd/c_proto.scm 54 */
										return
											(
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_13)))->
												BgL_removablez00) == CNST_TABLE_REF(((long) 2)));
					}}}
				else
					{	/* BackEnd/c_proto.scm 50 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &require-prototype? */
	obj_t BGl_z62requirezd2prototypezf3z43zzbackend_c_prototypez00(obj_t
		BgL_envz00_3506, obj_t BgL_globalz00_3507)
	{
		{	/* BackEnd/c_proto.scm 49 */
			return
				BBOOL(BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
					((BgL_globalz00_bglt) BgL_globalz00_3507)));
		}

	}



/* emit-prototypes */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 60 */
			{	/* BackEnd/c_proto.scm 63 */
				obj_t BgL_initz00_2055;

				{	/* BackEnd/c_proto.scm 63 */
					obj_t BgL_list1494z00_2056;

					BgL_list1494z00_2056 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
					BgL_initz00_2055 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
						BgL_list1494z00_2056);
				}
				if (CBOOL(BgL_initz00_2055))
					{	/* BackEnd/c_proto.scm 64 */
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
							((BgL_variablez00_bglt) BgL_initz00_2055));
					}
				else
					{	/* BackEnd/c_proto.scm 64 */
						BFALSE;
					}
			}
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc2307z00zzbackend_c_prototypez00, BNIL);
			{	/* BackEnd/c_proto.scm 74 */
				obj_t BgL_cnstzd2initzd2_2071;

				BgL_cnstzd2initzd2_2071 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* BackEnd/c_proto.scm 75 */
					BgL_valuez00_bglt BgL_arg1537z00_2072;

					BgL_arg1537z00_2072 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_cnstzd2initzd2_2071))))->
						BgL_valuez00);
					BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_arg1537z00_2072,
						((BgL_variablez00_bglt) BgL_cnstzd2initzd2_2071));
				}
			}
			{	/* BackEnd/c_proto.scm 77 */
				obj_t BgL_pragmasz00_2073;

				BgL_pragmasz00_2073 = BGl_getzd2staticzd2pragmasz00zzast_pragmaz00();
				if (NULLP(BgL_pragmasz00_2073))
					{	/* BackEnd/c_proto.scm 78 */
						BFALSE;
					}
				else
					{	/* BackEnd/c_proto.scm 78 */
						{
							obj_t BgL_l1351z00_2076;

							BgL_l1351z00_2076 = BgL_pragmasz00_2073;
						BgL_zc3z04anonymousza31539ze3z87_2077:
							if (PAIRP(BgL_l1351z00_2076))
								{	/* BackEnd/c_proto.scm 79 */
									{	/* BackEnd/c_proto.scm 80 */
										BgL_pragmaz00_bglt BgL_pz00_2079;

										BgL_pz00_2079 =
											((BgL_pragmaz00_bglt) CAR(BgL_l1351z00_2076));
										{	/* BackEnd/c_proto.scm 80 */
											BgL_cpragmaz00_bglt BgL_arg1552z00_2080;

											{	/* BackEnd/c_proto.scm 80 */
												BgL_cpragmaz00_bglt BgL_new1142z00_2081;

												{	/* BackEnd/c_proto.scm 82 */
													BgL_cpragmaz00_bglt BgL_new1141z00_2082;

													BgL_new1141z00_2082 =
														((BgL_cpragmaz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_cpragmaz00_bgl))));
													{	/* BackEnd/c_proto.scm 82 */
														long BgL_arg1558z00_2083;

														{	/* BackEnd/c_proto.scm 82 */
															long BgL_res2199z00_2909;

															BgL_res2199z00_2909 =
																BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
															BgL_arg1558z00_2083 = BgL_res2199z00_2909;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1141z00_2082),
															BgL_arg1558z00_2083);
													}
													BgL_new1142z00_2081 = BgL_new1141z00_2082;
												}
												((((BgL_copz00_bglt) COBJECT(
																((BgL_copz00_bglt) BgL_new1142z00_2081)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) BgL_pz00_2079)))->
															BgL_locz00)), BUNSPEC);
												((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1142z00_2081))->
														BgL_formatz00) =
													((obj_t) (((BgL_pragmaz00_bglt)
																COBJECT(BgL_pz00_2079))->BgL_formatz00)),
													BUNSPEC);
												((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1142z00_2081))->
														BgL_argsz00) =
													((obj_t) (((BgL_externz00_bglt)
																COBJECT(((BgL_externz00_bglt) BgL_pz00_2079)))->
															BgL_exprza2za2)), BUNSPEC);
												BgL_arg1552z00_2080 = BgL_new1142z00_2081;
											}
											BGl_emitzd2copzd2zzcgen_emitzd2copzd2(
												((BgL_copz00_bglt) BgL_arg1552z00_2080));
									}}
									{
										obj_t BgL_l1351z00_3725;

										BgL_l1351z00_3725 = CDR(BgL_l1351z00_2076);
										BgL_l1351z00_2076 = BgL_l1351z00_3725;
										goto BgL_zc3z04anonymousza31539ze3z87_2077;
									}
								}
							else
								{	/* BackEnd/c_proto.scm 79 */
									((bool_t) 1);
								}
						}
						bgl_display_char(((unsigned char) 10),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}}
			BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			return bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &emit-prototypes */
	obj_t BGl_z62emitzd2prototypeszb0zzbackend_c_prototypez00(obj_t
		BgL_envz00_3509)
	{
		{	/* BackEnd/c_proto.scm 60 */
			return BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
		}

	}



/* &<@anonymous:1497> */
	obj_t BGl_z62zc3z04anonymousza31497ze3ze5zzbackend_c_prototypez00(obj_t
		BgL_envz00_3510, obj_t BgL_globalz00_3511)
	{
		{	/* BackEnd/c_proto.scm 67 */
			{	/* BackEnd/c_proto.scm 68 */
				bool_t BgL_test2509z00_3731;

				if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
						((BgL_globalz00_bglt) BgL_globalz00_3511)))
					{	/* BackEnd/c_proto.scm 69 */
						bool_t BgL_test2511z00_3735;

						{	/* BackEnd/c_proto.scm 69 */
							BgL_valuez00_bglt BgL_arg1536z00_3573;

							BgL_arg1536z00_3573 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_3511))))->
								BgL_valuez00);
							{	/* BackEnd/c_proto.scm 69 */
								bool_t BgL_res2196z00_3574;

								BgL_res2196z00_3574 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1536z00_3573), BGl_scnstz00zzast_varz00);
								BgL_test2511z00_3735 = BgL_res2196z00_3574;
							}
						}
						if (BgL_test2511z00_3735)
							{	/* BackEnd/c_proto.scm 69 */
								BgL_test2509z00_3731 = ((bool_t) 0);
							}
						else
							{	/* BackEnd/c_proto.scm 69 */
								BgL_test2509z00_3731 = ((bool_t) 1);
							}
					}
				else
					{	/* BackEnd/c_proto.scm 68 */
						BgL_test2509z00_3731 = ((bool_t) 0);
					}
				if (BgL_test2509z00_3731)
					{	/* BackEnd/c_proto.scm 70 */
						BgL_valuez00_bglt BgL_arg1528z00_3575;

						BgL_arg1528z00_3575 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_globalz00_3511))))->BgL_valuez00);
						return
							BGl_emitzd2prototypezd2zzbackend_c_prototypez00
							(BgL_arg1528z00_3575,
							((BgL_variablez00_bglt) BgL_globalz00_3511));
					}
				else
					{	/* BackEnd/c_proto.scm 68 */
						return BFALSE;
					}
			}
		}

	}



/* emit-cnsts */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 94 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc2308z00zzbackend_c_prototypez00, BNIL);
			return bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &emit-cnsts */
	obj_t BGl_z62emitzd2cnstszb0zzbackend_c_prototypez00(obj_t BgL_envz00_3513)
	{
		{	/* BackEnd/c_proto.scm 94 */
			return BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
		}

	}



/* &<@anonymous:1566> */
	obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_c_prototypez00(obj_t
		BgL_envz00_3514, obj_t BgL_globalz00_3515)
	{
		{	/* BackEnd/c_proto.scm 96 */
			{	/* BackEnd/c_proto.scm 97 */
				bool_t BgL_test2512z00_3749;

				if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
						((BgL_globalz00_bglt) BgL_globalz00_3515)))
					{	/* BackEnd/c_proto.scm 98 */
						BgL_valuez00_bglt BgL_arg1578z00_3576;

						BgL_arg1578z00_3576 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_globalz00_3515))))->BgL_valuez00);
						{	/* BackEnd/c_proto.scm 98 */
							bool_t BgL_res2200z00_3577;

							BgL_res2200z00_3577 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1578z00_3576), BGl_scnstz00zzast_varz00);
							BgL_test2512z00_3749 = BgL_res2200z00_3577;
						}
					}
				else
					{	/* BackEnd/c_proto.scm 97 */
						BgL_test2512z00_3749 = ((bool_t) 0);
					}
				if (BgL_test2512z00_3749)
					{	/* BackEnd/c_proto.scm 99 */
						BgL_valuez00_bglt BgL_arg1575z00_3578;

						BgL_arg1575z00_3578 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_globalz00_3515))))->BgL_valuez00);
						return
							BGl_emitzd2cnstzd2zzbackend_c_prototypez00(
							((BgL_scnstz00_bglt) BgL_arg1575z00_3578),
							((BgL_globalz00_bglt) BgL_globalz00_3515));
					}
				else
					{	/* BackEnd/c_proto.scm 97 */
						return BFALSE;
					}
			}
		}

	}



/* emit-prototype/svar/scnst */
	obj_t
		BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00
		(BgL_valuez00_bglt BgL_valuez00_20, obj_t BgL_variablez00_21)
	{
		{	/* BackEnd/c_proto.scm 122 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_variablez00_21));
			if (
				((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_variablez00_21)))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 0))))
				{	/* BackEnd/c_proto.scm 127 */
					obj_t BgL_port1353z00_2100;

					BgL_port1353z00_2100 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_proto.scm 128 */
						obj_t BgL_arg1584z00_2101;

						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 5)),
									(((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
													BgL_variablez00_21)))->BgL_pragmaz00))))
							{	/* BackEnd/c_proto.scm 128 */
								BgL_arg1584z00_2101 = BGl_string2309z00zzbackend_c_prototypez00;
							}
						else
							{	/* BackEnd/c_proto.scm 128 */
								BgL_arg1584z00_2101 = BGl_string2310z00zzbackend_c_prototypez00;
							}
						bgl_display_obj(BgL_arg1584z00_2101, BgL_port1353z00_2100);
					}
					{	/* BackEnd/c_proto.scm 127 */
						obj_t BgL_tmpz00_3778;

						BgL_tmpz00_3778 = ((obj_t) BgL_port1353z00_2100);
						bgl_display_char(((unsigned char) ' '), BgL_tmpz00_3778);
					}
					{	/* BackEnd/c_proto.scm 132 */
						obj_t BgL_arg1593z00_2105;

						{	/* BackEnd/c_proto.scm 132 */
							BgL_typez00_bglt BgL_arg1597z00_2106;
							obj_t BgL_arg1599z00_2107;

							BgL_arg1597z00_2106 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_21)))->BgL_typez00);
							BgL_arg1599z00_2107 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_21)))->BgL_namez00);
							BgL_arg1593z00_2105 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg1597z00_2106, BgL_arg1599z00_2107);
						}
						bgl_display_obj(BgL_arg1593z00_2105, BgL_port1353z00_2100);
					}
					{	/* BackEnd/c_proto.scm 133 */
						obj_t BgL_arg1604z00_2108;

						{	/* BackEnd/c_proto.scm 133 */
							bool_t BgL_test2516z00_3787;

							{	/* BackEnd/c_proto.scm 133 */
								BgL_typez00_bglt BgL_arg1611z00_2111;

								BgL_arg1611z00_2111 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_variablez00_21)))->
									BgL_typez00);
								BgL_test2516z00_3787 =
									BGl_subzd2typezf3z21zztype_envz00(BgL_arg1611z00_2111,
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
							}
							if (BgL_test2516z00_3787)
								{	/* BackEnd/c_proto.scm 133 */
									BgL_arg1604z00_2108 =
										BGl_string2311z00zzbackend_c_prototypez00;
								}
							else
								{	/* BackEnd/c_proto.scm 133 */
									BgL_arg1604z00_2108 = BCHAR(((unsigned char) ';'));
						}}
						bgl_display_obj(BgL_arg1604z00_2108, BgL_port1353z00_2100);
					}
					{	/* BackEnd/c_proto.scm 127 */
						obj_t BgL_tmpz00_3794;

						BgL_tmpz00_3794 = ((obj_t) BgL_port1353z00_2100);
						return bgl_display_char(((unsigned char) 10), BgL_tmpz00_3794);
				}}
			else
				{	/* BackEnd/c_proto.scm 126 */
					if (
						((((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_variablez00_21)))->
								BgL_importz00) == CNST_TABLE_REF(((long) 1))))
						{	/* BackEnd/c_proto.scm 135 */
							obj_t BgL_port1354z00_2114;

							BgL_port1354z00_2114 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_proto.scm 136 */
								obj_t BgL_arg1624z00_2115;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(CNST_TABLE_REF(((long) 5)),
											(((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
															BgL_variablez00_21)))->BgL_pragmaz00))))
									{	/* BackEnd/c_proto.scm 136 */
										BgL_arg1624z00_2115 =
											BGl_string2312z00zzbackend_c_prototypez00;
									}
								else
									{	/* BackEnd/c_proto.scm 136 */
										BgL_arg1624z00_2115 =
											BGl_string2313z00zzbackend_c_prototypez00;
									}
								bgl_display_obj(BgL_arg1624z00_2115, BgL_port1354z00_2114);
							}
							{	/* BackEnd/c_proto.scm 139 */
								obj_t BgL_arg1634z00_2119;

								{	/* BackEnd/c_proto.scm 139 */
									BgL_typez00_bglt BgL_arg1639z00_2120;
									obj_t BgL_arg1640z00_2121;

									BgL_arg1639z00_2120 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_variablez00_21)))->
										BgL_typez00);
									BgL_arg1640z00_2121 =
										(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
													BgL_variablez00_21)))->BgL_namez00);
									BgL_arg1634z00_2119 =
										BGl_makezd2typedzd2declarationz00zztype_toolsz00
										(BgL_arg1639z00_2120, BgL_arg1640z00_2121);
								}
								bgl_display_obj(BgL_arg1634z00_2119, BgL_port1354z00_2114);
							}
							{	/* BackEnd/c_proto.scm 140 */
								obj_t BgL_arg1641z00_2122;

								{	/* BackEnd/c_proto.scm 140 */
									bool_t BgL_test2519z00_3815;

									{	/* BackEnd/c_proto.scm 140 */
										BgL_typez00_bglt BgL_arg1652z00_2125;

										BgL_arg1652z00_2125 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_variablez00_21)))->
											BgL_typez00);
										BgL_test2519z00_3815 =
											BGl_subzd2typezf3z21zztype_envz00(BgL_arg1652z00_2125,
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
									}
									if (BgL_test2519z00_3815)
										{	/* BackEnd/c_proto.scm 140 */
											BgL_arg1641z00_2122 =
												BGl_string2311z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 140 */
											BgL_arg1641z00_2122 = BCHAR(((unsigned char) ';'));
								}}
								bgl_display_obj(BgL_arg1641z00_2122, BgL_port1354z00_2114);
							}
							{	/* BackEnd/c_proto.scm 135 */
								obj_t BgL_tmpz00_3822;

								BgL_tmpz00_3822 = ((obj_t) BgL_port1354z00_2114);
								return bgl_display_char(((unsigned char) 10), BgL_tmpz00_3822);
						}}
					else
						{	/* BackEnd/c_proto.scm 142 */
							obj_t BgL_port1355z00_2126;

							BgL_port1355z00_2126 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_proto.scm 143 */
								obj_t BgL_arg1662z00_2127;

								BgL_arg1662z00_2127 =
									BGl_getzd2czd2scopez00zzbackend_c_prototypez00(
									((BgL_variablez00_bglt) BgL_variablez00_21));
								bgl_display_obj(BgL_arg1662z00_2127, BgL_port1355z00_2126);
							}
							{	/* BackEnd/c_proto.scm 142 */
								obj_t BgL_tmpz00_3828;

								BgL_tmpz00_3828 = ((obj_t) BgL_port1355z00_2126);
								bgl_display_char(((unsigned char) ' '), BgL_tmpz00_3828);
							}
							{	/* BackEnd/c_proto.scm 145 */
								obj_t BgL_arg1663z00_2128;

								{	/* BackEnd/c_proto.scm 145 */
									BgL_typez00_bglt BgL_arg1664z00_2129;
									obj_t BgL_arg1667z00_2130;

									BgL_arg1664z00_2129 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_variablez00_21)))->
										BgL_typez00);
									BgL_arg1667z00_2130 =
										(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
													BgL_variablez00_21)))->BgL_namez00);
									BgL_arg1663z00_2128 =
										BGl_makezd2typedzd2declarationz00zztype_toolsz00
										(BgL_arg1664z00_2129, BgL_arg1667z00_2130);
								}
								bgl_display_obj(BgL_arg1663z00_2128, BgL_port1355z00_2126);
							}
							{	/* BackEnd/c_proto.scm 142 */
								obj_t BgL_tmpz00_3837;

								BgL_tmpz00_3837 = ((obj_t) BgL_port1355z00_2126);
								bgl_display_char(((unsigned char) ';'), BgL_tmpz00_3837);
							}
							{	/* BackEnd/c_proto.scm 142 */
								obj_t BgL_tmpz00_3840;

								BgL_tmpz00_3840 = ((obj_t) BgL_port1355z00_2126);
								return bgl_display_char(((unsigned char) 10), BgL_tmpz00_3840);
		}}}}

	}



/* emit-prototype-formal-types */
	obj_t BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00(obj_t
		BgL_typesz00_24)
	{
		{	/* BackEnd/c_proto.scm 170 */
			return
				string_append(BGl_string2314z00zzbackend_c_prototypez00,
				BGl_loopze72ze7zzbackend_c_prototypez00(BgL_typesz00_24));
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzbackend_c_prototypez00(obj_t BgL_typesz00_2136)
	{
		{	/* BackEnd/c_proto.scm 175 */
			if (NULLP(CDR(((obj_t) BgL_typesz00_2136))))
				{	/* BackEnd/c_proto.scm 177 */
					obj_t BgL_arg1688z00_2140;

					{	/* BackEnd/c_proto.scm 177 */
						obj_t BgL_arg1692z00_2141;

						BgL_arg1692z00_2141 = CAR(((obj_t) BgL_typesz00_2136));
						BgL_arg1688z00_2140 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							((BgL_typez00_bglt) BgL_arg1692z00_2141));
					}
					return
						string_append(BgL_arg1688z00_2140,
						BGl_string2315z00zzbackend_c_prototypez00);
				}
			else
				{	/* BackEnd/c_proto.scm 179 */
					obj_t BgL_arg1695z00_2142;
					obj_t BgL_arg1696z00_2143;

					{	/* BackEnd/c_proto.scm 179 */
						obj_t BgL_arg1697z00_2144;

						BgL_arg1697z00_2144 = CAR(((obj_t) BgL_typesz00_2136));
						BgL_arg1695z00_2142 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							((BgL_typez00_bglt) BgL_arg1697z00_2144));
					}
					{	/* BackEnd/c_proto.scm 180 */
						obj_t BgL_arg1704z00_2145;

						BgL_arg1704z00_2145 = CDR(((obj_t) BgL_typesz00_2136));
						BgL_arg1696z00_2143 =
							BGl_loopze72ze7zzbackend_c_prototypez00(BgL_arg1704z00_2145);
					}
					return
						string_append_3(BgL_arg1695z00_2142,
						BGl_string2316z00zzbackend_c_prototypez00, BgL_arg1696z00_2143);
				}
		}

	}



/* emit-prototype-formals */
	obj_t BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00(obj_t
		BgL_argsz00_25)
	{
		{	/* BackEnd/c_proto.scm 185 */
			if (NULLP(BgL_argsz00_25))
				{	/* BackEnd/c_proto.scm 186 */
					return BGl_string2317z00zzbackend_c_prototypez00;
				}
			else
				{	/* BackEnd/c_proto.scm 186 */
					return
						string_append(BGl_string2314z00zzbackend_c_prototypez00,
						BGl_loopze71ze7zzbackend_c_prototypez00(BgL_argsz00_25));
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzbackend_c_prototypez00(obj_t BgL_argsz00_2151)
	{
		{	/* BackEnd/c_proto.scm 190 */
			if (NULLP(CDR(((obj_t) BgL_argsz00_2151))))
				{	/* BackEnd/c_proto.scm 192 */
					BgL_localz00_bglt BgL_i1145z00_2155;

					BgL_i1145z00_2155 =
						((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_2151)));
					{	/* BackEnd/c_proto.scm 193 */
						obj_t BgL_arg1725z00_2156;

						{	/* BackEnd/c_proto.scm 193 */
							BgL_typez00_bglt BgL_arg1726z00_2157;

							BgL_arg1726z00_2157 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1145z00_2155)))->BgL_typez00);
							BgL_arg1725z00_2156 =
								BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
								(BgL_arg1726z00_2157);
						}
						return
							string_append(BgL_arg1725z00_2156,
							BGl_string2315z00zzbackend_c_prototypez00);
					}
				}
			else
				{	/* BackEnd/c_proto.scm 194 */
					BgL_localz00_bglt BgL_i1146z00_2158;

					BgL_i1146z00_2158 =
						((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_2151)));
					{	/* BackEnd/c_proto.scm 195 */
						obj_t BgL_arg1727z00_2159;
						obj_t BgL_arg1728z00_2160;

						{	/* BackEnd/c_proto.scm 195 */
							BgL_typez00_bglt BgL_arg1729z00_2161;

							BgL_arg1729z00_2161 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_i1146z00_2158)))->BgL_typez00);
							BgL_arg1727z00_2159 =
								BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
								(BgL_arg1729z00_2161);
						}
						{	/* BackEnd/c_proto.scm 196 */
							obj_t BgL_arg1731z00_2162;

							BgL_arg1731z00_2162 = CDR(((obj_t) BgL_argsz00_2151));
							BgL_arg1728z00_2160 =
								BGl_loopze71ze7zzbackend_c_prototypez00(BgL_arg1731z00_2162);
						}
						return
							string_append_3(BgL_arg1727z00_2159,
							BGl_string2316z00zzbackend_c_prototypez00, BgL_arg1728z00_2160);
					}
				}
		}

	}



/* emit-cnst */
	obj_t BGl_emitzd2cnstzd2zzbackend_c_prototypez00(BgL_scnstz00_bglt
		BgL_valuez00_30, BgL_globalz00_bglt BgL_variablez00_31)
	{
		{	/* BackEnd/c_proto.scm 244 */
			{	/* BackEnd/c_proto.scm 246 */
				obj_t BgL_casezd2valuezd2_2166;

				BgL_casezd2valuezd2_2166 =
					(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_classz00);
				if ((BgL_casezd2valuezd2_2166 == CNST_TABLE_REF(((long) 6))))
					{	/* BackEnd/c_proto.scm 246 */
						return
							BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00(
							(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_nodez00),
							BgL_variablez00_31);
					}
				else
					{	/* BackEnd/c_proto.scm 246 */
						if ((BgL_casezd2valuezd2_2166 == CNST_TABLE_REF(((long) 7))))
							{	/* BackEnd/c_proto.scm 246 */
								return
									BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00(
									(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_nodez00),
									BgL_variablez00_31);
							}
						else
							{	/* BackEnd/c_proto.scm 246 */
								if ((BgL_casezd2valuezd2_2166 == CNST_TABLE_REF(((long) 8))))
									{	/* BackEnd/c_proto.scm 246 */
										return
											BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00(
											(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->
												BgL_nodez00), BgL_variablez00_31);
									}
								else
									{	/* BackEnd/c_proto.scm 246 */
										if (
											(BgL_casezd2valuezd2_2166 == CNST_TABLE_REF(((long) 9))))
											{	/* BackEnd/c_proto.scm 246 */
												return
													BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00(
													(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->
														BgL_nodez00), BgL_variablez00_31);
											}
										else
											{	/* BackEnd/c_proto.scm 246 */
												if (
													(BgL_casezd2valuezd2_2166 ==
														CNST_TABLE_REF(((long) 10))))
													{	/* BackEnd/c_proto.scm 246 */
														return
															BGl_emitzd2cnstzd2int32z00zzbackend_c_prototypez00
															((((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->
																BgL_nodez00), BgL_variablez00_31);
													}
												else
													{	/* BackEnd/c_proto.scm 246 */
														if (
															(BgL_casezd2valuezd2_2166 ==
																CNST_TABLE_REF(((long) 11))))
															{	/* BackEnd/c_proto.scm 246 */
																return
																	BGl_emitzd2cnstzd2uint32z00zzbackend_c_prototypez00
																	((((BgL_scnstz00_bglt)
																			COBJECT(BgL_valuez00_30))->BgL_nodez00),
																	BgL_variablez00_31);
															}
														else
															{	/* BackEnd/c_proto.scm 246 */
																if (
																	(BgL_casezd2valuezd2_2166 ==
																		CNST_TABLE_REF(((long) 12))))
																	{	/* BackEnd/c_proto.scm 246 */
																		return
																			BGl_emitzd2cnstzd2int64z00zzbackend_c_prototypez00
																			((((BgL_scnstz00_bglt)
																					COBJECT(BgL_valuez00_30))->
																				BgL_nodez00), BgL_variablez00_31);
																	}
																else
																	{	/* BackEnd/c_proto.scm 246 */
																		if (
																			(BgL_casezd2valuezd2_2166 ==
																				CNST_TABLE_REF(((long) 13))))
																			{	/* BackEnd/c_proto.scm 246 */
																				return
																					BGl_emitzd2cnstzd2uint64z00zzbackend_c_prototypez00
																					((((BgL_scnstz00_bglt)
																							COBJECT(BgL_valuez00_30))->
																						BgL_nodez00), BgL_variablez00_31);
																			}
																		else
																			{	/* BackEnd/c_proto.scm 246 */
																				if (
																					(BgL_casezd2valuezd2_2166 ==
																						CNST_TABLE_REF(((long) 14))))
																					{	/* BackEnd/c_proto.scm 246 */
																						return
																							BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00
																							((((BgL_scnstz00_bglt)
																									COBJECT(BgL_valuez00_30))->
																								BgL_nodez00),
																							BgL_variablez00_31,
																							BGl_string2318z00zzbackend_c_prototypez00);
																					}
																				else
																					{	/* BackEnd/c_proto.scm 246 */
																						if (
																							(BgL_casezd2valuezd2_2166 ==
																								CNST_TABLE_REF(((long) 15))))
																							{	/* BackEnd/c_proto.scm 246 */
																								return
																									BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00
																									((((BgL_scnstz00_bglt)
																											COBJECT
																											(BgL_valuez00_30))->
																										BgL_nodez00),
																									BgL_variablez00_31,
																									BGl_string2319z00zzbackend_c_prototypez00);
																							}
																						else
																							{	/* BackEnd/c_proto.scm 246 */
																								if (
																									(BgL_casezd2valuezd2_2166 ==
																										CNST_TABLE_REF(((long)
																												16))))
																									{	/* BackEnd/c_proto.scm 246 */
																										return
																											BGl_emitzd2cnstzd2selfunz00zzbackend_c_prototypez00
																											((((BgL_scnstz00_bglt)
																													COBJECT
																													(BgL_valuez00_30))->
																												BgL_nodez00),
																											BgL_variablez00_31);
																									}
																								else
																									{	/* BackEnd/c_proto.scm 246 */
																										if (
																											(BgL_casezd2valuezd2_2166
																												==
																												CNST_TABLE_REF(((long)
																														17))))
																											{	/* BackEnd/c_proto.scm 246 */
																												return
																													BGl_emitzd2cnstzd2slfunz00zzbackend_c_prototypez00
																													((((BgL_scnstz00_bglt)
																															COBJECT
																															(BgL_valuez00_30))->
																														BgL_nodez00),
																													BgL_variablez00_31);
																											}
																										else
																											{	/* BackEnd/c_proto.scm 246 */
																												if (
																													(BgL_casezd2valuezd2_2166
																														==
																														CNST_TABLE_REF((
																																(long) 18))))
																													{	/* BackEnd/c_proto.scm 246 */
																														return
																															BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00
																															((((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_nodez00), BgL_variablez00_31);
																													}
																												else
																													{	/* BackEnd/c_proto.scm 275 */
																														obj_t
																															BgL_arg1779z00_2193;
																														obj_t
																															BgL_arg1782z00_2194;
																														{	/* BackEnd/c_proto.scm 275 */
																															obj_t
																																BgL_arg1784z00_2195;
																															BgL_arg1784z00_2195
																																=
																																(((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_classz00);
																															{	/* BackEnd/c_proto.scm 275 */
																																obj_t
																																	BgL_list1785z00_2196;
																																BgL_list1785z00_2196
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1784z00_2195,
																																	BNIL);
																																BgL_arg1779z00_2193
																																	=
																																	BGl_formatz00zz__r4_output_6_10_3z00
																																	(BGl_string2320z00zzbackend_c_prototypez00,
																																	BgL_list1785z00_2196);
																															}
																														}
																														BgL_arg1782z00_2194
																															=
																															BGl_shapez00zztools_shapez00
																															((((BgL_scnstz00_bglt) COBJECT(BgL_valuez00_30))->BgL_nodez00));
																														return
																															BGl_internalzd2errorzd2zztools_errorz00
																															(BGl_string2321z00zzbackend_c_prototypez00,
																															BgL_arg1779z00_2193,
																															BgL_arg1782z00_2194);
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



/* emit-cnst-string */
	obj_t BGl_emitzd2cnstzd2stringz00zzbackend_c_prototypez00(obj_t
		BgL_ostrz00_32, BgL_globalz00_bglt BgL_globalz00_33)
	{
		{	/* BackEnd/c_proto.scm 281 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_33));
			{	/* BackEnd/c_proto.scm 283 */
				bool_t BgL_test2536z00_3961;

				{	/* BackEnd/c_proto.scm 283 */
					bool_t BgL_test2537z00_3962;

					{	/* BackEnd/c_proto.scm 283 */
						long BgL_arg1893z00_2292;

						BgL_arg1893z00_2292 = STRING_LENGTH(((obj_t) BgL_ostrz00_32));
						BgL_test2537z00_3962 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg1893z00_2292),
							BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00);
					}
					if (BgL_test2537z00_3962)
						{	/* BackEnd/c_proto.scm 283 */
							BgL_test2536z00_3961 =
								CBOOL(BGl_za2czd2splitzd2stringza2z00zzengine_paramz00);
						}
					else
						{	/* BackEnd/c_proto.scm 283 */
							BgL_test2536z00_3961 = ((bool_t) 0);
						}
				}
				if (BgL_test2536z00_3961)
					{	/* BackEnd/c_proto.scm 286 */
						obj_t BgL_auxz00_2202;

						{	/* BackEnd/c_proto.scm 286 */
							obj_t BgL_arg1823z00_2217;

							{	/* BackEnd/c_proto.scm 286 */
								obj_t BgL_arg1824z00_2218;

								BgL_arg1824z00_2218 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_33)))->BgL_namez00);
								BgL_arg1823z00_2217 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1824z00_2218);
							}
							BgL_auxz00_2202 =
								BGl_idzd2ze3namez31zzast_identz00(BgL_arg1823z00_2217);
						}
						{	/* BackEnd/c_proto.scm 287 */
							obj_t BgL_port1359z00_2203;

							BgL_port1359z00_2203 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_tmpz00_3972;

								BgL_tmpz00_3972 = ((obj_t) BgL_port1359z00_2203);
								bgl_display_string(BGl_string2322z00zzbackend_c_prototypez00,
									BgL_tmpz00_3972);
							}
							{	/* BackEnd/c_proto.scm 289 */
								obj_t BgL_arg1801z00_2204;

								BgL_arg1801z00_2204 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_33)))->BgL_namez00);
								bgl_display_obj(BgL_arg1801z00_2204, BgL_port1359z00_2203);
							}
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_tmpz00_3978;

								BgL_tmpz00_3978 = ((obj_t) BgL_port1359z00_2203);
								bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
									BgL_tmpz00_3978);
							}
							bgl_display_obj(BgL_auxz00_2202, BgL_port1359z00_2203);
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_tmpz00_3982;

								BgL_tmpz00_3982 = ((obj_t) BgL_port1359z00_2203);
								bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
									BgL_tmpz00_3982);
							}
							{	/* BackEnd/c_proto.scm 293 */
								long BgL_arg1808z00_2205;

								BgL_arg1808z00_2205 = STRING_LENGTH(((obj_t) BgL_ostrz00_32));
								bgl_display_obj(BINT(BgL_arg1808z00_2205),
									BgL_port1359z00_2203);
							}
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_tmpz00_3989;

								BgL_tmpz00_3989 = ((obj_t) BgL_port1359z00_2203);
								bgl_display_string(BGl_string2323z00zzbackend_c_prototypez00,
									BgL_tmpz00_3989);
							}
							{	/* BackEnd/c_proto.scm 287 */
								obj_t BgL_tmpz00_3992;

								BgL_tmpz00_3992 = ((obj_t) BgL_port1359z00_2203);
								bgl_display_char(((unsigned char) 10), BgL_tmpz00_3992);
						}}
						bgl_display_string(BGl_string2324z00zzbackend_c_prototypez00,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						{	/* BackEnd/c_proto.scm 296 */
							long BgL_rlenz00_2206;

							BgL_rlenz00_2206 = STRING_LENGTH(((obj_t) BgL_ostrz00_32));
							{
								long BgL_iz00_2208;

								BgL_iz00_2208 = ((long) 0);
							BgL_zc3z04anonymousza31809ze3z87_2209:
								if ((BgL_iz00_2208 == BgL_rlenz00_2206))
									{	/* BackEnd/c_proto.scm 299 */
										obj_t BgL_port1360z00_2211;

										BgL_port1360z00_2211 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										{	/* BackEnd/c_proto.scm 299 */
											obj_t BgL_tmpz00_4000;

											BgL_tmpz00_4000 = ((obj_t) BgL_port1360z00_2211);
											bgl_display_string
												(BGl_string2325z00zzbackend_c_prototypez00,
												BgL_tmpz00_4000);
										}
										{	/* BackEnd/c_proto.scm 299 */
											obj_t BgL_tmpz00_4003;

											BgL_tmpz00_4003 = ((obj_t) BgL_port1360z00_2211);
											bgl_display_string
												(BGl_string2326z00zzbackend_c_prototypez00,
												BgL_tmpz00_4003);
										}
										{	/* BackEnd/c_proto.scm 302 */
											obj_t BgL_arg1811z00_2212;

											BgL_arg1811z00_2212 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_33)))->
												BgL_namez00);
											bgl_display_obj(BgL_arg1811z00_2212,
												BgL_port1360z00_2211);
										}
										{	/* BackEnd/c_proto.scm 299 */
											obj_t BgL_tmpz00_4009;

											BgL_tmpz00_4009 = ((obj_t) BgL_port1360z00_2211);
											bgl_display_string
												(BGl_string2316z00zzbackend_c_prototypez00,
												BgL_tmpz00_4009);
										}
										bgl_display_obj(BgL_auxz00_2202, BgL_port1360z00_2211);
										{	/* BackEnd/c_proto.scm 299 */
											obj_t BgL_tmpz00_4013;

											BgL_tmpz00_4013 = ((obj_t) BgL_port1360z00_2211);
											bgl_display_string
												(BGl_string2327z00zzbackend_c_prototypez00,
												BgL_tmpz00_4013);
										}
										{	/* BackEnd/c_proto.scm 299 */
											obj_t BgL_tmpz00_4016;

											BgL_tmpz00_4016 = ((obj_t) BgL_port1360z00_2211);
											return
												bgl_display_char(((unsigned char) 10), BgL_tmpz00_4016);
									}}
								else
									{	/* BackEnd/c_proto.scm 298 */
										{	/* BackEnd/c_proto.scm 307 */
											long BgL_arg1820z00_2213;

											BgL_arg1820z00_2213 =
												(STRING_REF(((obj_t) BgL_ostrz00_32), BgL_iz00_2208));
											bgl_display_obj(BINT(BgL_arg1820z00_2213),
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
										bgl_display_string
											(BGl_string2328z00zzbackend_c_prototypez00,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										{
											long BgL_iz00_4025;

											BgL_iz00_4025 = (BgL_iz00_2208 + ((long) 1));
											BgL_iz00_2208 = BgL_iz00_4025;
											goto BgL_zc3z04anonymousza31809ze3z87_2209;
										}
									}
							}
						}
					}
				else
					{	/* BackEnd/c_proto.scm 310 */
						obj_t BgL_strz00_2219;

						{	/* BackEnd/c_proto.scm 310 */
							obj_t BgL_res2225z00_3015;

							BgL_res2225z00_3015 = string_for_read(((obj_t) BgL_ostrz00_32));
							BgL_strz00_2219 = BgL_res2225z00_3015;
						}
						{	/* BackEnd/c_proto.scm 312 */
							obj_t BgL_port1150z00_2220;

							BgL_port1150z00_2220 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_proto.scm 312 */
								obj_t BgL_tmpz00_4029;

								BgL_tmpz00_4029 = ((obj_t) BgL_port1150z00_2220);
								bgl_display_string(BGl_string2329z00zzbackend_c_prototypez00,
									BgL_tmpz00_4029);
							}
							{	/* BackEnd/c_proto.scm 314 */
								obj_t BgL_arg1825z00_2221;

								BgL_arg1825z00_2221 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_33)))->BgL_namez00);
								bgl_display_obj(BgL_arg1825z00_2221, BgL_port1150z00_2220);
							}
							{	/* BackEnd/c_proto.scm 312 */
								obj_t BgL_tmpz00_4035;

								BgL_tmpz00_4035 = ((obj_t) BgL_port1150z00_2220);
								bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
									BgL_tmpz00_4035);
							}
							{	/* BackEnd/c_proto.scm 316 */
								obj_t BgL_arg1826z00_2222;

								{	/* BackEnd/c_proto.scm 316 */
									obj_t BgL_arg1827z00_2223;

									{	/* BackEnd/c_proto.scm 316 */
										obj_t BgL_arg1828z00_2224;

										BgL_arg1828z00_2224 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_33)))->
											BgL_namez00);
										BgL_arg1827z00_2223 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1828z00_2224);
									}
									BgL_arg1826z00_2222 =
										BGl_idzd2ze3namez31zzast_identz00(BgL_arg1827z00_2223);
								}
								bgl_display_obj(BgL_arg1826z00_2222, BgL_port1150z00_2220);
							}
							{	/* BackEnd/c_proto.scm 312 */
								obj_t BgL_tmpz00_4043;

								BgL_tmpz00_4043 = ((obj_t) BgL_port1150z00_2220);
								bgl_display_string(BGl_string2330z00zzbackend_c_prototypez00,
									BgL_tmpz00_4043);
							}
						}
						{	/* BackEnd/c_proto.scm 318 */
							long BgL_g1153z00_2225;

							BgL_g1153z00_2225 = STRING_LENGTH(BgL_strz00_2219);
							{
								long BgL_readz00_2227;
								long BgL_rlenz00_2228;

								BgL_readz00_2227 = ((long) 0);
								BgL_rlenz00_2228 = BgL_g1153z00_2225;
							BgL_zc3z04anonymousza31829ze3z87_2229:
								if (
									(BgL_rlenz00_2228 <=
										(long)
										CINT
										(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00)))
									{	/* BackEnd/c_proto.scm 321 */
										{	/* BackEnd/c_proto.scm 322 */
											obj_t BgL_arg1831z00_2231;

											BgL_arg1831z00_2231 =
												BGl_untrigraphz00zzbackend_c_emitz00(c_substring
												(BgL_strz00_2219, BgL_readz00_2227,
													(BgL_readz00_2227 + BgL_rlenz00_2228)));
											bgl_display_obj(BgL_arg1831z00_2231,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
										{	/* BackEnd/c_proto.scm 324 */
											obj_t BgL_port1361z00_2234;

											BgL_port1361z00_2234 =
												BGl_za2czd2portza2zd2zzbackend_c_emitz00;
											{	/* BackEnd/c_proto.scm 324 */
												obj_t BgL_tmpz00_4054;

												BgL_tmpz00_4054 = ((obj_t) BgL_port1361z00_2234);
												bgl_display_string
													(BGl_string2331z00zzbackend_c_prototypez00,
													BgL_tmpz00_4054);
											}
											{	/* BackEnd/c_proto.scm 324 */
												long BgL_arg1835z00_2235;

												BgL_arg1835z00_2235 =
													STRING_LENGTH(((obj_t) BgL_ostrz00_32));
												bgl_display_obj(BINT(BgL_arg1835z00_2235),
													BgL_port1361z00_2234);
											}
											{	/* BackEnd/c_proto.scm 324 */
												obj_t BgL_tmpz00_4061;

												BgL_tmpz00_4061 = ((obj_t) BgL_port1361z00_2234);
												bgl_display_string
													(BGl_string2332z00zzbackend_c_prototypez00,
													BgL_tmpz00_4061);
											}
											{	/* BackEnd/c_proto.scm 324 */
												obj_t BgL_tmpz00_4064;

												BgL_tmpz00_4064 = ((obj_t) BgL_port1361z00_2234);
												return
													bgl_display_char(((unsigned char) 10),
													BgL_tmpz00_4064);
									}}}
								else
									{	/* BackEnd/c_proto.scm 326 */
										long BgL_g1154z00_2236;

										BgL_g1154z00_2236 =
											(BgL_readz00_2227 +
											(long)
											CINT
											(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00));
										{
											long BgL_offsetz00_2238;

											BgL_offsetz00_2238 = BgL_g1154z00_2236;
										BgL_zc3z04anonymousza31836ze3z87_2239:
											if (
												((BgL_readz00_2227 + ((long) 3)) >= BgL_offsetz00_2238))
												{	/* BackEnd/c_proto.scm 328 */
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_string2333z00zzbackend_c_prototypez00,
														BGl_string2334z00zzbackend_c_prototypez00,
														BgL_ostrz00_32);
												}
											else
												{	/* BackEnd/c_proto.scm 328 */
													if (
														(STRING_REF(BgL_strz00_2219,
																(BgL_offsetz00_2238 - ((long) 1))) ==
															((unsigned char) '\\')))
														{
															long BgL_offsetz00_4077;

															BgL_offsetz00_4077 =
																(BgL_offsetz00_2238 - ((long) 1));
															BgL_offsetz00_2238 = BgL_offsetz00_4077;
															goto BgL_zc3z04anonymousza31836ze3z87_2239;
														}
													else
														{	/* BackEnd/c_proto.scm 334 */
															bool_t BgL_test2542z00_4079;

															if (
																(STRING_REF(BgL_strz00_2219,
																		(BgL_offsetz00_2238 - ((long) 2))) ==
																	((unsigned char) '\\')))
																{	/* BackEnd/c_proto.scm 335 */
																	unsigned char BgL_arg1885z00_2282;

																	BgL_arg1885z00_2282 =
																		STRING_REF(BgL_strz00_2219,
																		(BgL_offsetz00_2238 - ((long) 1)));
																	{	/* BackEnd/c_proto.scm 335 */
																		bool_t BgL_res2243z00_3075;

																		BgL_res2243z00_3075 =
																			isdigit(BgL_arg1885z00_2282);
																		BgL_test2542z00_4079 = BgL_res2243z00_3075;
																}}
															else
																{	/* BackEnd/c_proto.scm 334 */
																	BgL_test2542z00_4079 = ((bool_t) 0);
																}
															if (BgL_test2542z00_4079)
																{
																	long BgL_offsetz00_4087;

																	BgL_offsetz00_4087 =
																		(BgL_offsetz00_2238 - ((long) 2));
																	BgL_offsetz00_2238 = BgL_offsetz00_4087;
																	goto BgL_zc3z04anonymousza31836ze3z87_2239;
																}
															else
																{	/* BackEnd/c_proto.scm 337 */
																	bool_t BgL_test2544z00_4089;

																	if (
																		(STRING_REF(BgL_strz00_2219,
																				(BgL_offsetz00_2238 - ((long) 3))) ==
																			((unsigned char) '\\')))
																		{	/* BackEnd/c_proto.scm 338 */
																			bool_t BgL_test2546z00_4094;

																			{	/* BackEnd/c_proto.scm 338 */
																				unsigned char BgL_arg1881z00_2277;

																				BgL_arg1881z00_2277 =
																					STRING_REF(BgL_strz00_2219,
																					(BgL_offsetz00_2238 - ((long) 2)));
																				{	/* BackEnd/c_proto.scm 338 */
																					bool_t BgL_res2250z00_3092;

																					BgL_res2250z00_3092 =
																						isdigit(BgL_arg1881z00_2277);
																					BgL_test2546z00_4094 =
																						BgL_res2250z00_3092;
																			}}
																			if (BgL_test2546z00_4094)
																				{	/* BackEnd/c_proto.scm 339 */
																					unsigned char BgL_arg1878z00_2275;

																					BgL_arg1878z00_2275 =
																						STRING_REF(BgL_strz00_2219,
																						(BgL_offsetz00_2238 - ((long) 1)));
																					{	/* BackEnd/c_proto.scm 339 */
																						bool_t BgL_res2253z00_3099;

																						BgL_res2253z00_3099 =
																							isdigit(BgL_arg1878z00_2275);
																						BgL_test2544z00_4089 =
																							BgL_res2253z00_3099;
																				}}
																			else
																				{	/* BackEnd/c_proto.scm 338 */
																					BgL_test2544z00_4089 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* BackEnd/c_proto.scm 337 */
																			BgL_test2544z00_4089 = ((bool_t) 0);
																		}
																	if (BgL_test2544z00_4089)
																		{
																			long BgL_offsetz00_4101;

																			BgL_offsetz00_4101 =
																				(BgL_offsetz00_2238 - ((long) 3));
																			BgL_offsetz00_2238 = BgL_offsetz00_4101;
																			goto
																				BgL_zc3z04anonymousza31836ze3z87_2239;
																		}
																	else
																		{	/* BackEnd/c_proto.scm 337 */
																			{	/* BackEnd/c_proto.scm 342 */
																				obj_t BgL_port1155z00_2269;

																				BgL_port1155z00_2269 =
																					BGl_za2czd2portza2zd2zzbackend_c_emitz00;
																				bgl_display_obj(c_substring
																					(BgL_strz00_2219, BgL_readz00_2227,
																						BgL_offsetz00_2238),
																					BgL_port1155z00_2269);
																				{	/* BackEnd/c_proto.scm 342 */
																					obj_t BgL_tmpz00_4105;

																					BgL_tmpz00_4105 =
																						((obj_t) BgL_port1155z00_2269);
																					bgl_display_string
																						(BGl_string2335z00zzbackend_c_prototypez00,
																						BgL_tmpz00_4105);
																				}
																			}
																			{
																				long BgL_rlenz00_4109;
																				long BgL_readz00_4108;

																				BgL_readz00_4108 = BgL_offsetz00_2238;
																				BgL_rlenz00_4109 =
																					(BgL_rlenz00_2228 -
																					(BgL_offsetz00_2238 -
																						BgL_readz00_2227));
																				BgL_rlenz00_2228 = BgL_rlenz00_4109;
																				BgL_readz00_2227 = BgL_readz00_4108;
																				goto
																					BgL_zc3z04anonymousza31829ze3z87_2229;
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



/* emit-cnst-real */
	obj_t BGl_emitzd2cnstzd2realz00zzbackend_c_prototypez00(obj_t BgL_realz00_34,
		BgL_globalz00_bglt BgL_globalz00_35)
	{
		{	/* BackEnd/c_proto.scm 350 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_35));
			if (BGL_IS_NAN(REAL_TO_DOUBLE(BgL_realz00_34)))
				{	/* BackEnd/c_proto.scm 354 */
					obj_t BgL_port1362z00_2294;

					BgL_port1362z00_2294 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_proto.scm 354 */
						obj_t BgL_tmpz00_4117;

						BgL_tmpz00_4117 = ((obj_t) BgL_port1362z00_2294);
						bgl_display_string(BGl_string2336z00zzbackend_c_prototypez00,
							BgL_tmpz00_4117);
					}
					{	/* BackEnd/c_proto.scm 354 */
						obj_t BgL_arg1895z00_2295;

						BgL_arg1895z00_2295 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_35)))->BgL_namez00);
						bgl_display_obj(BgL_arg1895z00_2295, BgL_port1362z00_2294);
					}
					{	/* BackEnd/c_proto.scm 354 */
						obj_t BgL_tmpz00_4123;

						BgL_tmpz00_4123 = ((obj_t) BgL_port1362z00_2294);
						bgl_display_string(BGl_string2337z00zzbackend_c_prototypez00,
							BgL_tmpz00_4123);
					}
					{	/* BackEnd/c_proto.scm 354 */
						obj_t BgL_tmpz00_4126;

						BgL_tmpz00_4126 = ((obj_t) BgL_port1362z00_2294);
						return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4126);
				}}
			else
				{	/* BackEnd/c_proto.scm 355 */
					bool_t BgL_test2548z00_4129;

					if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_realz00_34)))
						{	/* BackEnd/c_proto.scm 355 */
							BgL_test2548z00_4129 =
								(REAL_TO_DOUBLE(BgL_realz00_34) > ((double) 0.0));
						}
					else
						{	/* BackEnd/c_proto.scm 355 */
							BgL_test2548z00_4129 = ((bool_t) 0);
						}
					if (BgL_test2548z00_4129)
						{	/* BackEnd/c_proto.scm 356 */
							obj_t BgL_port1363z00_2298;

							BgL_port1363z00_2298 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							{	/* BackEnd/c_proto.scm 356 */
								obj_t BgL_tmpz00_4135;

								BgL_tmpz00_4135 = ((obj_t) BgL_port1363z00_2298);
								bgl_display_string(BGl_string2336z00zzbackend_c_prototypez00,
									BgL_tmpz00_4135);
							}
							{	/* BackEnd/c_proto.scm 356 */
								obj_t BgL_arg1898z00_2299;

								BgL_arg1898z00_2299 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_35)))->BgL_namez00);
								bgl_display_obj(BgL_arg1898z00_2299, BgL_port1363z00_2298);
							}
							{	/* BackEnd/c_proto.scm 356 */
								obj_t BgL_tmpz00_4141;

								BgL_tmpz00_4141 = ((obj_t) BgL_port1363z00_2298);
								bgl_display_string(BGl_string2338z00zzbackend_c_prototypez00,
									BgL_tmpz00_4141);
							}
							{	/* BackEnd/c_proto.scm 356 */
								obj_t BgL_tmpz00_4144;

								BgL_tmpz00_4144 = ((obj_t) BgL_port1363z00_2298);
								return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4144);
						}}
					else
						{	/* BackEnd/c_proto.scm 355 */
							if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_realz00_34)))
								{	/* BackEnd/c_proto.scm 358 */
									obj_t BgL_port1364z00_2301;

									BgL_port1364z00_2301 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_proto.scm 358 */
										obj_t BgL_tmpz00_4150;

										BgL_tmpz00_4150 = ((obj_t) BgL_port1364z00_2301);
										bgl_display_string
											(BGl_string2336z00zzbackend_c_prototypez00,
											BgL_tmpz00_4150);
									}
									{	/* BackEnd/c_proto.scm 358 */
										obj_t BgL_arg1901z00_2302;

										BgL_arg1901z00_2302 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_35)))->
											BgL_namez00);
										bgl_display_obj(BgL_arg1901z00_2302, BgL_port1364z00_2301);
									}
									{	/* BackEnd/c_proto.scm 358 */
										obj_t BgL_tmpz00_4156;

										BgL_tmpz00_4156 = ((obj_t) BgL_port1364z00_2301);
										bgl_display_string
											(BGl_string2339z00zzbackend_c_prototypez00,
											BgL_tmpz00_4156);
									}
									{	/* BackEnd/c_proto.scm 358 */
										obj_t BgL_tmpz00_4159;

										BgL_tmpz00_4159 = ((obj_t) BgL_port1364z00_2301);
										return
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_4159);
								}}
							else
								{	/* BackEnd/c_proto.scm 360 */
									obj_t BgL_port1365z00_2303;

									BgL_port1365z00_2303 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_proto.scm 360 */
										obj_t BgL_tmpz00_4162;

										BgL_tmpz00_4162 = ((obj_t) BgL_port1365z00_2303);
										bgl_display_string
											(BGl_string2340z00zzbackend_c_prototypez00,
											BgL_tmpz00_4162);
									}
									{	/* BackEnd/c_proto.scm 361 */
										obj_t BgL_arg1902z00_2304;

										BgL_arg1902z00_2304 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_35)))->
											BgL_namez00);
										bgl_display_obj(BgL_arg1902z00_2304, BgL_port1365z00_2303);
									}
									{	/* BackEnd/c_proto.scm 360 */
										obj_t BgL_tmpz00_4168;

										BgL_tmpz00_4168 = ((obj_t) BgL_port1365z00_2303);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4168);
									}
									{	/* BackEnd/c_proto.scm 362 */
										obj_t BgL_arg1903z00_2305;

										{	/* BackEnd/c_proto.scm 362 */
											obj_t BgL_arg1904z00_2306;

											{	/* BackEnd/c_proto.scm 362 */
												obj_t BgL_arg1905z00_2307;

												BgL_arg1905z00_2307 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_globalz00_35)))->
													BgL_namez00);
												BgL_arg1904z00_2306 =
													BGl_gensymz00zz__r4_symbols_6_4z00
													(BgL_arg1905z00_2307);
											}
											BgL_arg1903z00_2305 =
												BGl_idzd2ze3namez31zzast_identz00(BgL_arg1904z00_2306);
										}
										bgl_display_obj(BgL_arg1903z00_2305, BgL_port1365z00_2303);
									}
									{	/* BackEnd/c_proto.scm 360 */
										obj_t BgL_tmpz00_4176;

										BgL_tmpz00_4176 = ((obj_t) BgL_port1365z00_2303);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4176);
									}
									bgl_display_obj(BgL_realz00_34, BgL_port1365z00_2303);
									{	/* BackEnd/c_proto.scm 360 */
										obj_t BgL_tmpz00_4180;

										BgL_tmpz00_4180 = ((obj_t) BgL_port1365z00_2303);
										bgl_display_string
											(BGl_string2332z00zzbackend_c_prototypez00,
											BgL_tmpz00_4180);
									}
									{	/* BackEnd/c_proto.scm 360 */
										obj_t BgL_tmpz00_4183;

										BgL_tmpz00_4183 = ((obj_t) BgL_port1365z00_2303);
										return
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_4183);
		}}}}}

	}



/* emit-cnst-elong */
	obj_t BGl_emitzd2cnstzd2elongz00zzbackend_c_prototypez00(obj_t
		BgL_elongz00_36, BgL_globalz00_bglt BgL_globalz00_37)
	{
		{	/* BackEnd/c_proto.scm 368 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_37));
			{	/* BackEnd/c_proto.scm 370 */
				obj_t BgL_port1366z00_2309;

				BgL_port1366z00_2309 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 370 */
					obj_t BgL_tmpz00_4188;

					BgL_tmpz00_4188 = ((obj_t) BgL_port1366z00_2309);
					bgl_display_string(BGl_string2341z00zzbackend_c_prototypez00,
						BgL_tmpz00_4188);
				}
				{	/* BackEnd/c_proto.scm 372 */
					obj_t BgL_arg1906z00_2310;

					BgL_arg1906z00_2310 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_37)))->BgL_namez00);
					bgl_display_obj(BgL_arg1906z00_2310, BgL_port1366z00_2309);
				}
				{	/* BackEnd/c_proto.scm 370 */
					obj_t BgL_tmpz00_4194;

					BgL_tmpz00_4194 = ((obj_t) BgL_port1366z00_2309);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4194);
				}
				{	/* BackEnd/c_proto.scm 374 */
					obj_t BgL_arg1907z00_2311;

					{	/* BackEnd/c_proto.scm 374 */
						obj_t BgL_arg1908z00_2312;

						{	/* BackEnd/c_proto.scm 374 */
							obj_t BgL_arg1909z00_2313;

							BgL_arg1909z00_2313 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_37)))->BgL_namez00);
							BgL_arg1908z00_2312 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1909z00_2313);
						}
						BgL_arg1907z00_2311 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1908z00_2312);
					}
					bgl_display_obj(BgL_arg1907z00_2311, BgL_port1366z00_2309);
				}
				{	/* BackEnd/c_proto.scm 370 */
					obj_t BgL_tmpz00_4202;

					BgL_tmpz00_4202 = ((obj_t) BgL_port1366z00_2309);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4202);
				}
				{	/* BackEnd/c_proto.scm 376 */
					obj_t BgL_arg1910z00_2314;

					BgL_arg1910z00_2314 =
						BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BELONG_TO_LONG
						(BgL_elongz00_36), BNIL);
					bgl_display_obj(BgL_arg1910z00_2314, BgL_port1366z00_2309);
				}
				{	/* BackEnd/c_proto.scm 370 */
					obj_t BgL_tmpz00_4208;

					BgL_tmpz00_4208 = ((obj_t) BgL_port1366z00_2309);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4208);
				}
				{	/* BackEnd/c_proto.scm 370 */
					obj_t BgL_tmpz00_4211;

					BgL_tmpz00_4211 = ((obj_t) BgL_port1366z00_2309);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4211);
		}}}

	}



/* emit-cnst-llong */
	obj_t BGl_emitzd2cnstzd2llongz00zzbackend_c_prototypez00(obj_t
		BgL_llongz00_38, BgL_globalz00_bglt BgL_globalz00_39)
	{
		{	/* BackEnd/c_proto.scm 382 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_39));
			{	/* BackEnd/c_proto.scm 384 */
				obj_t BgL_port1367z00_2316;

				BgL_port1367z00_2316 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 384 */
					obj_t BgL_tmpz00_4216;

					BgL_tmpz00_4216 = ((obj_t) BgL_port1367z00_2316);
					bgl_display_string(BGl_string2342z00zzbackend_c_prototypez00,
						BgL_tmpz00_4216);
				}
				{	/* BackEnd/c_proto.scm 386 */
					obj_t BgL_arg1912z00_2317;

					BgL_arg1912z00_2317 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_39)))->BgL_namez00);
					bgl_display_obj(BgL_arg1912z00_2317, BgL_port1367z00_2316);
				}
				{	/* BackEnd/c_proto.scm 384 */
					obj_t BgL_tmpz00_4222;

					BgL_tmpz00_4222 = ((obj_t) BgL_port1367z00_2316);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4222);
				}
				{	/* BackEnd/c_proto.scm 388 */
					obj_t BgL_arg1913z00_2318;

					{	/* BackEnd/c_proto.scm 388 */
						obj_t BgL_arg1914z00_2319;

						{	/* BackEnd/c_proto.scm 388 */
							obj_t BgL_arg1915z00_2320;

							BgL_arg1915z00_2320 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_39)))->BgL_namez00);
							BgL_arg1914z00_2319 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1915z00_2320);
						}
						BgL_arg1913z00_2318 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1914z00_2319);
					}
					bgl_display_obj(BgL_arg1913z00_2318, BgL_port1367z00_2316);
				}
				{	/* BackEnd/c_proto.scm 384 */
					obj_t BgL_tmpz00_4230;

					BgL_tmpz00_4230 = ((obj_t) BgL_port1367z00_2316);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4230);
				}
				bgl_display_obj(BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00
					(BLLONG_TO_LLONG(BgL_llongz00_38)), BgL_port1367z00_2316);
				{	/* BackEnd/c_proto.scm 384 */
					obj_t BgL_tmpz00_4236;

					BgL_tmpz00_4236 = ((obj_t) BgL_port1367z00_2316);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4236);
				}
				{	/* BackEnd/c_proto.scm 384 */
					obj_t BgL_tmpz00_4239;

					BgL_tmpz00_4239 = ((obj_t) BgL_port1367z00_2316);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4239);
		}}}

	}



/* emit-cnst-int32 */
	obj_t BGl_emitzd2cnstzd2int32z00zzbackend_c_prototypez00(obj_t
		BgL_int32z00_40, BgL_globalz00_bglt BgL_globalz00_41)
	{
		{	/* BackEnd/c_proto.scm 396 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_41));
			{	/* BackEnd/c_proto.scm 398 */
				obj_t BgL_port1368z00_2322;

				BgL_port1368z00_2322 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 398 */
					obj_t BgL_tmpz00_4244;

					BgL_tmpz00_4244 = ((obj_t) BgL_port1368z00_2322);
					bgl_display_string(BGl_string2343z00zzbackend_c_prototypez00,
						BgL_tmpz00_4244);
				}
				{	/* BackEnd/c_proto.scm 400 */
					obj_t BgL_arg1917z00_2323;

					BgL_arg1917z00_2323 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_41)))->BgL_namez00);
					bgl_display_obj(BgL_arg1917z00_2323, BgL_port1368z00_2322);
				}
				{	/* BackEnd/c_proto.scm 398 */
					obj_t BgL_tmpz00_4250;

					BgL_tmpz00_4250 = ((obj_t) BgL_port1368z00_2322);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4250);
				}
				{	/* BackEnd/c_proto.scm 402 */
					obj_t BgL_arg1918z00_2324;

					{	/* BackEnd/c_proto.scm 402 */
						obj_t BgL_arg1919z00_2325;

						{	/* BackEnd/c_proto.scm 402 */
							obj_t BgL_arg1920z00_2326;

							BgL_arg1920z00_2326 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_41)))->BgL_namez00);
							BgL_arg1919z00_2325 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1920z00_2326);
						}
						BgL_arg1918z00_2324 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1919z00_2325);
					}
					bgl_display_obj(BgL_arg1918z00_2324, BgL_port1368z00_2322);
				}
				{	/* BackEnd/c_proto.scm 398 */
					obj_t BgL_tmpz00_4258;

					BgL_tmpz00_4258 = ((obj_t) BgL_port1368z00_2322);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4258);
				}
				bgl_display_obj(BgL_int32z00_40, BgL_port1368z00_2322);
				{	/* BackEnd/c_proto.scm 398 */
					obj_t BgL_tmpz00_4262;

					BgL_tmpz00_4262 = ((obj_t) BgL_port1368z00_2322);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4262);
				}
				{	/* BackEnd/c_proto.scm 398 */
					obj_t BgL_tmpz00_4265;

					BgL_tmpz00_4265 = ((obj_t) BgL_port1368z00_2322);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4265);
		}}}

	}



/* emit-cnst-uint32 */
	obj_t BGl_emitzd2cnstzd2uint32z00zzbackend_c_prototypez00(obj_t
		BgL_uint32z00_42, BgL_globalz00_bglt BgL_globalz00_43)
	{
		{	/* BackEnd/c_proto.scm 410 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_43));
			{	/* BackEnd/c_proto.scm 412 */
				obj_t BgL_port1369z00_2327;

				BgL_port1369z00_2327 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 412 */
					obj_t BgL_tmpz00_4270;

					BgL_tmpz00_4270 = ((obj_t) BgL_port1369z00_2327);
					bgl_display_string(BGl_string2344z00zzbackend_c_prototypez00,
						BgL_tmpz00_4270);
				}
				{	/* BackEnd/c_proto.scm 414 */
					obj_t BgL_arg1921z00_2328;

					BgL_arg1921z00_2328 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_43)))->BgL_namez00);
					bgl_display_obj(BgL_arg1921z00_2328, BgL_port1369z00_2327);
				}
				{	/* BackEnd/c_proto.scm 412 */
					obj_t BgL_tmpz00_4276;

					BgL_tmpz00_4276 = ((obj_t) BgL_port1369z00_2327);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4276);
				}
				{	/* BackEnd/c_proto.scm 416 */
					obj_t BgL_arg1923z00_2329;

					{	/* BackEnd/c_proto.scm 416 */
						obj_t BgL_arg1924z00_2330;

						{	/* BackEnd/c_proto.scm 416 */
							obj_t BgL_arg1925z00_2331;

							BgL_arg1925z00_2331 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_43)))->BgL_namez00);
							BgL_arg1924z00_2330 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1925z00_2331);
						}
						BgL_arg1923z00_2329 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1924z00_2330);
					}
					bgl_display_obj(BgL_arg1923z00_2329, BgL_port1369z00_2327);
				}
				{	/* BackEnd/c_proto.scm 412 */
					obj_t BgL_tmpz00_4284;

					BgL_tmpz00_4284 = ((obj_t) BgL_port1369z00_2327);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4284);
				}
				bgl_display_obj(BgL_uint32z00_42, BgL_port1369z00_2327);
				{	/* BackEnd/c_proto.scm 412 */
					obj_t BgL_tmpz00_4288;

					BgL_tmpz00_4288 = ((obj_t) BgL_port1369z00_2327);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4288);
				}
				{	/* BackEnd/c_proto.scm 412 */
					obj_t BgL_tmpz00_4291;

					BgL_tmpz00_4291 = ((obj_t) BgL_port1369z00_2327);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4291);
		}}}

	}



/* emit-cnst-int64 */
	obj_t BGl_emitzd2cnstzd2int64z00zzbackend_c_prototypez00(obj_t
		BgL_int64z00_44, BgL_globalz00_bglt BgL_globalz00_45)
	{
		{	/* BackEnd/c_proto.scm 424 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_45));
			{	/* BackEnd/c_proto.scm 426 */
				obj_t BgL_port1370z00_2332;

				BgL_port1370z00_2332 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 426 */
					obj_t BgL_tmpz00_4296;

					BgL_tmpz00_4296 = ((obj_t) BgL_port1370z00_2332);
					bgl_display_string(BGl_string2345z00zzbackend_c_prototypez00,
						BgL_tmpz00_4296);
				}
				{	/* BackEnd/c_proto.scm 428 */
					obj_t BgL_arg1926z00_2333;

					BgL_arg1926z00_2333 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_45)))->BgL_namez00);
					bgl_display_obj(BgL_arg1926z00_2333, BgL_port1370z00_2332);
				}
				{	/* BackEnd/c_proto.scm 426 */
					obj_t BgL_tmpz00_4302;

					BgL_tmpz00_4302 = ((obj_t) BgL_port1370z00_2332);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4302);
				}
				{	/* BackEnd/c_proto.scm 430 */
					obj_t BgL_arg1927z00_2334;

					{	/* BackEnd/c_proto.scm 430 */
						obj_t BgL_arg1928z00_2335;

						{	/* BackEnd/c_proto.scm 430 */
							obj_t BgL_arg1929z00_2336;

							BgL_arg1929z00_2336 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_45)))->BgL_namez00);
							BgL_arg1928z00_2335 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1929z00_2336);
						}
						BgL_arg1927z00_2334 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1928z00_2335);
					}
					bgl_display_obj(BgL_arg1927z00_2334, BgL_port1370z00_2332);
				}
				{	/* BackEnd/c_proto.scm 426 */
					obj_t BgL_tmpz00_4310;

					BgL_tmpz00_4310 = ((obj_t) BgL_port1370z00_2332);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4310);
				}
				bgl_display_obj(BgL_int64z00_44, BgL_port1370z00_2332);
				{	/* BackEnd/c_proto.scm 426 */
					obj_t BgL_tmpz00_4314;

					BgL_tmpz00_4314 = ((obj_t) BgL_port1370z00_2332);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4314);
				}
				{	/* BackEnd/c_proto.scm 426 */
					obj_t BgL_tmpz00_4317;

					BgL_tmpz00_4317 = ((obj_t) BgL_port1370z00_2332);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4317);
		}}}

	}



/* emit-cnst-uint64 */
	obj_t BGl_emitzd2cnstzd2uint64z00zzbackend_c_prototypez00(obj_t
		BgL_uint64z00_46, BgL_globalz00_bglt BgL_globalz00_47)
	{
		{	/* BackEnd/c_proto.scm 438 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_globalz00_47));
			{	/* BackEnd/c_proto.scm 440 */
				obj_t BgL_port1371z00_2337;

				BgL_port1371z00_2337 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 440 */
					obj_t BgL_tmpz00_4322;

					BgL_tmpz00_4322 = ((obj_t) BgL_port1371z00_2337);
					bgl_display_string(BGl_string2346z00zzbackend_c_prototypez00,
						BgL_tmpz00_4322);
				}
				{	/* BackEnd/c_proto.scm 442 */
					obj_t BgL_arg1930z00_2338;

					BgL_arg1930z00_2338 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_47)))->BgL_namez00);
					bgl_display_obj(BgL_arg1930z00_2338, BgL_port1371z00_2337);
				}
				{	/* BackEnd/c_proto.scm 440 */
					obj_t BgL_tmpz00_4328;

					BgL_tmpz00_4328 = ((obj_t) BgL_port1371z00_2337);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4328);
				}
				{	/* BackEnd/c_proto.scm 444 */
					obj_t BgL_arg1931z00_2339;

					{	/* BackEnd/c_proto.scm 444 */
						obj_t BgL_arg1932z00_2340;

						{	/* BackEnd/c_proto.scm 444 */
							obj_t BgL_arg1933z00_2341;

							BgL_arg1933z00_2341 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_47)))->BgL_namez00);
							BgL_arg1932z00_2340 =
								BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1933z00_2341);
						}
						BgL_arg1931z00_2339 =
							BGl_idzd2ze3namez31zzast_identz00(BgL_arg1932z00_2340);
					}
					bgl_display_obj(BgL_arg1931z00_2339, BgL_port1371z00_2337);
				}
				{	/* BackEnd/c_proto.scm 440 */
					obj_t BgL_tmpz00_4336;

					BgL_tmpz00_4336 = ((obj_t) BgL_port1371z00_2337);
					bgl_display_string(BGl_string2316z00zzbackend_c_prototypez00,
						BgL_tmpz00_4336);
				}
				bgl_display_obj(BgL_uint64z00_46, BgL_port1371z00_2337);
				{	/* BackEnd/c_proto.scm 440 */
					obj_t BgL_tmpz00_4340;

					BgL_tmpz00_4340 = ((obj_t) BgL_port1371z00_2337);
					bgl_display_string(BGl_string2332z00zzbackend_c_prototypez00,
						BgL_tmpz00_4340);
				}
				{	/* BackEnd/c_proto.scm 440 */
					obj_t BgL_tmpz00_4343;

					BgL_tmpz00_4343 = ((obj_t) BgL_port1371z00_2337);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4343);
		}}}

	}



/* emit-cnst-sfun/sgfun */
	obj_t BGl_emitzd2cnstzd2sfunzf2sgfunzf2zzbackend_c_prototypez00(obj_t
		BgL_funz00_52, BgL_globalz00_bglt BgL_globalz00_53, obj_t BgL_kindz00_54)
	{
		{	/* BackEnd/c_proto.scm 464 */
			if (
				((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_53))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 19))))
				{	/* BackEnd/c_proto.scm 466 */
					BgL_valuez00_bglt BgL_arg1936z00_2344;

					BgL_arg1936z00_2344 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_53)))->BgL_valuez00);
					return
						BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_arg1936z00_2344,
						((BgL_variablez00_bglt) BgL_globalz00_53));
				}
			else
				{	/* BackEnd/c_proto.scm 467 */
					obj_t BgL_actualsz00_2345;

					BgL_actualsz00_2345 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_funz00_52)))->BgL_argsz00);
					{	/* BackEnd/c_proto.scm 467 */
						obj_t BgL_entryz00_2346;

						BgL_entryz00_2346 = CAR(((obj_t) BgL_actualsz00_2345));
						{	/* BackEnd/c_proto.scm 468 */
							obj_t BgL_arityz00_2347;

							{	/* BackEnd/c_proto.scm 469 */
								obj_t BgL_arg1981z00_2401;

								{	/* BackEnd/c_proto.scm 469 */
									obj_t BgL_pairz00_3225;

									BgL_pairz00_3225 = CDR(((obj_t) BgL_actualsz00_2345));
									BgL_arg1981z00_2401 = CAR(BgL_pairz00_3225);
								}
								BgL_arityz00_2347 =
									BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
									((BgL_nodez00_bglt) BgL_arg1981z00_2401));
							}
							{	/* BackEnd/c_proto.scm 469 */
								obj_t BgL_vnamez00_2348;

								BgL_vnamez00_2348 =
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
									((BgL_variablez00_bglt) BgL_globalz00_53));
								{	/* BackEnd/c_proto.scm 470 */
									obj_t BgL_namez00_2349;

									{	/* BackEnd/c_proto.scm 471 */
										BgL_variablez00_bglt BgL_arg1980z00_2400;

										BgL_arg1980z00_2400 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_entryz00_2346)))->
											BgL_variablez00);
										BgL_namez00_2349 =
											BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
											(BgL_arg1980z00_2400);
									}
									{	/* BackEnd/c_proto.scm 471 */

										{	/* BackEnd/c_proto.scm 473 */
											bool_t BgL_test2552z00_4368;

											if (BGl_isazf3zf3zz__objectz00(BgL_entryz00_2346,
													BGl_varz00zzast_nodez00))
												{	/* BackEnd/c_proto.scm 474 */
													bool_t BgL_test2554z00_4371;

													{	/* BackEnd/c_proto.scm 474 */
														BgL_variablez00_bglt BgL_arg1979z00_2399;

														BgL_arg1979z00_2399 =
															(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_entryz00_2346)))->
															BgL_variablez00);
														{	/* BackEnd/c_proto.scm 474 */
															bool_t BgL_res2263z00_3229;

															BgL_res2263z00_3229 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1979z00_2399),
																BGl_globalz00zzast_varz00);
															BgL_test2554z00_4371 = BgL_res2263z00_3229;
														}
													}
													if (BgL_test2554z00_4371)
														{	/* BackEnd/c_proto.scm 476 */
															bool_t BgL__ortest_1156z00_2392;

															{	/* BackEnd/c_proto.scm 476 */
																obj_t BgL_arg1975z00_2396;

																BgL_arg1975z00_2396 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									(((BgL_varz00_bglt) COBJECT(
																												((BgL_varz00_bglt)
																													BgL_entryz00_2346)))->
																										BgL_variablez00)))))->
																					BgL_valuez00))))->
																	BgL_thezd2closurezd2globalz00);
																BgL__ortest_1156z00_2392 =
																	BGl_globalzd2optionalzf3z21zzast_varz00
																	(BgL_arg1975z00_2396);
															}
															if (BgL__ortest_1156z00_2392)
																{	/* BackEnd/c_proto.scm 476 */
																	BgL_test2552z00_4368 =
																		BgL__ortest_1156z00_2392;
																}
															else
																{	/* BackEnd/c_proto.scm 477 */
																	obj_t BgL_arg1972z00_2393;

																	BgL_arg1972z00_2393 =
																		(((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt)
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_globalz00_bglt)
																										(((BgL_varz00_bglt) COBJECT(
																													((BgL_varz00_bglt)
																														BgL_entryz00_2346)))->
																											BgL_variablez00)))))->
																						BgL_valuez00))))->
																		BgL_thezd2closurezd2globalz00);
																	BgL_test2552z00_4368 =
																		BGl_globalzd2keyzf3z21zzast_varz00
																		(BgL_arg1972z00_2393);
																}
														}
													else
														{	/* BackEnd/c_proto.scm 474 */
															BgL_test2552z00_4368 = ((bool_t) 0);
														}
												}
											else
												{	/* BackEnd/c_proto.scm 473 */
													BgL_test2552z00_4368 = ((bool_t) 0);
												}
											if (BgL_test2552z00_4368)
												{	/* BackEnd/c_proto.scm 478 */
													obj_t BgL_port1372z00_2362;

													BgL_port1372z00_2362 =
														BGl_za2czd2portza2zd2zzbackend_c_emitz00;
													{	/* BackEnd/c_proto.scm 479 */
														obj_t BgL_arg1948z00_2363;

														if (
															((((BgL_globalz00_bglt)
																		COBJECT(BgL_globalz00_53))->
																	BgL_importz00) == CNST_TABLE_REF(((long) 0))))
															{	/* BackEnd/c_proto.scm 479 */
																BgL_arg1948z00_2363 =
																	string_append_3
																	(BGl_string2347z00zzbackend_c_prototypez00,
																	BgL_kindz00_54,
																	BGl_string2348z00zzbackend_c_prototypez00);
															}
														else
															{	/* BackEnd/c_proto.scm 479 */
																BgL_arg1948z00_2363 =
																	string_append_3
																	(BGl_string2349z00zzbackend_c_prototypez00,
																	BgL_kindz00_54,
																	BGl_string2348z00zzbackend_c_prototypez00);
															}
														bgl_display_obj(BgL_arg1948z00_2363,
															BgL_port1372z00_2362);
													}
													bgl_display_obj(BgL_vnamez00_2348,
														BgL_port1372z00_2362);
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4401;

														BgL_tmpz00_4401 = ((obj_t) BgL_port1372z00_2362);
														bgl_display_string
															(BGl_string2316z00zzbackend_c_prototypez00,
															BgL_tmpz00_4401);
													}
													bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00
															(BgL_namez00_2349)), BgL_port1372z00_2362);
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4407;

														BgL_tmpz00_4407 = ((obj_t) BgL_port1372z00_2362);
														bgl_display_string
															(BGl_string2350z00zzbackend_c_prototypez00,
															BgL_tmpz00_4407);
													}
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4410;

														BgL_tmpz00_4410 = ((obj_t) BgL_port1372z00_2362);
														bgl_display_string
															(BGl_string2316z00zzbackend_c_prototypez00,
															BgL_tmpz00_4410);
													}
													bgl_display_obj(BgL_namez00_2349,
														BgL_port1372z00_2362);
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4414;

														BgL_tmpz00_4414 = ((obj_t) BgL_port1372z00_2362);
														bgl_display_string
															(BGl_string2351z00zzbackend_c_prototypez00,
															BgL_tmpz00_4414);
													}
													bgl_display_fixnum(BINT(((long) -1)),
														((obj_t) BgL_port1372z00_2362));
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4420;

														BgL_tmpz00_4420 = ((obj_t) BgL_port1372z00_2362);
														bgl_display_string
															(BGl_string2332z00zzbackend_c_prototypez00,
															BgL_tmpz00_4420);
													}
													{	/* BackEnd/c_proto.scm 478 */
														obj_t BgL_tmpz00_4423;

														BgL_tmpz00_4423 = ((obj_t) BgL_port1372z00_2362);
														return
															bgl_display_char(((unsigned char) 10),
															BgL_tmpz00_4423);
												}}
											else
												{	/* BackEnd/c_proto.scm 473 */
													if (((long) CINT(BgL_arityz00_2347) >= ((long) 0)))
														{	/* BackEnd/c_proto.scm 493 */
															obj_t BgL_port1373z00_2370;

															BgL_port1373z00_2370 =
																BGl_za2czd2portza2zd2zzbackend_c_emitz00;
															{	/* BackEnd/c_proto.scm 494 */
																obj_t BgL_arg1955z00_2371;

																if (
																	((((BgL_globalz00_bglt)
																				COBJECT(BgL_globalz00_53))->
																			BgL_importz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* BackEnd/c_proto.scm 494 */
																		BgL_arg1955z00_2371 =
																			string_append_3
																			(BGl_string2347z00zzbackend_c_prototypez00,
																			BgL_kindz00_54,
																			BGl_string2348z00zzbackend_c_prototypez00);
																	}
																else
																	{	/* BackEnd/c_proto.scm 494 */
																		BgL_arg1955z00_2371 =
																			string_append_3
																			(BGl_string2349z00zzbackend_c_prototypez00,
																			BgL_kindz00_54,
																			BGl_string2348z00zzbackend_c_prototypez00);
																	}
																bgl_display_obj(BgL_arg1955z00_2371,
																	BgL_port1373z00_2370);
															}
															bgl_display_obj(BgL_vnamez00_2348,
																BgL_port1373z00_2370);
															{	/* BackEnd/c_proto.scm 493 */
																obj_t BgL_tmpz00_4437;

																BgL_tmpz00_4437 =
																	((obj_t) BgL_port1373z00_2370);
																bgl_display_string
																	(BGl_string2316z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4437);
															}
															bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
																(BGl_gensymz00zz__r4_symbols_6_4z00
																	(BgL_namez00_2349)), BgL_port1373z00_2370);
															{	/* BackEnd/c_proto.scm 493 */
																obj_t BgL_tmpz00_4443;

																BgL_tmpz00_4443 =
																	((obj_t) BgL_port1373z00_2370);
																bgl_display_string
																	(BGl_string2316z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4443);
															}
															bgl_display_obj(BgL_namez00_2349,
																BgL_port1373z00_2370);
															{	/* BackEnd/c_proto.scm 493 */
																obj_t BgL_tmpz00_4447;

																BgL_tmpz00_4447 =
																	((obj_t) BgL_port1373z00_2370);
																bgl_display_string
																	(BGl_string2352z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4447);
															}
															bgl_display_obj(BgL_arityz00_2347,
																BgL_port1373z00_2370);
															{	/* BackEnd/c_proto.scm 493 */
																obj_t BgL_tmpz00_4451;

																BgL_tmpz00_4451 =
																	((obj_t) BgL_port1373z00_2370);
																bgl_display_string
																	(BGl_string2332z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4451);
															}
															{	/* BackEnd/c_proto.scm 493 */
																obj_t BgL_tmpz00_4454;

																BgL_tmpz00_4454 =
																	((obj_t) BgL_port1373z00_2370);
																return
																	bgl_display_char(((unsigned char) 10),
																	BgL_tmpz00_4454);
														}}
													else
														{	/* BackEnd/c_proto.scm 506 */
															obj_t BgL_port1374z00_2377;

															BgL_port1374z00_2377 =
																BGl_za2czd2portza2zd2zzbackend_c_emitz00;
															{	/* BackEnd/c_proto.scm 507 */
																obj_t BgL_arg1961z00_2378;

																if (
																	((((BgL_globalz00_bglt)
																				COBJECT(BgL_globalz00_53))->
																			BgL_importz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* BackEnd/c_proto.scm 507 */
																		BgL_arg1961z00_2378 =
																			string_append_3
																			(BGl_string2347z00zzbackend_c_prototypez00,
																			BgL_kindz00_54,
																			BGl_string2348z00zzbackend_c_prototypez00);
																	}
																else
																	{	/* BackEnd/c_proto.scm 507 */
																		BgL_arg1961z00_2378 =
																			string_append_3
																			(BGl_string2349z00zzbackend_c_prototypez00,
																			BgL_kindz00_54,
																			BGl_string2348z00zzbackend_c_prototypez00);
																	}
																bgl_display_obj(BgL_arg1961z00_2378,
																	BgL_port1374z00_2377);
															}
															bgl_display_obj(BgL_vnamez00_2348,
																BgL_port1374z00_2377);
															{	/* BackEnd/c_proto.scm 506 */
																obj_t BgL_tmpz00_4465;

																BgL_tmpz00_4465 =
																	((obj_t) BgL_port1374z00_2377);
																bgl_display_string
																	(BGl_string2316z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4465);
															}
															bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
																(BGl_gensymz00zz__r4_symbols_6_4z00
																	(BgL_namez00_2349)), BgL_port1374z00_2377);
															{	/* BackEnd/c_proto.scm 513 */
																obj_t BgL_arg1967z00_2384;

																{	/* BackEnd/c_proto.scm 513 */
																	bool_t BgL_test2560z00_4471;

																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_entryz00_2346,
																			BGl_varz00zzast_nodez00))
																		{	/* BackEnd/c_proto.scm 514 */
																			BgL_variablez00_bglt BgL_arg1971z00_2389;

																			BgL_arg1971z00_2389 =
																				(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_entryz00_2346)))->
																				BgL_variablez00);
																			BgL_test2560z00_4471 =
																				CBOOL
																				(BGl_funzd2vazd2stackablezf3zf3zzbackend_c_prototypez00
																				(BgL_arg1971z00_2389));
																		}
																	else
																		{	/* BackEnd/c_proto.scm 513 */
																			BgL_test2560z00_4471 = ((bool_t) 0);
																		}
																	if (BgL_test2560z00_4471)
																		{	/* BackEnd/c_proto.scm 513 */
																			BgL_arg1967z00_2384 =
																				BGl_string2353z00zzbackend_c_prototypez00;
																		}
																	else
																		{	/* BackEnd/c_proto.scm 513 */
																			BgL_arg1967z00_2384 =
																				BGl_string2354z00zzbackend_c_prototypez00;
																		}
																}
																bgl_display_obj(BgL_arg1967z00_2384,
																	BgL_port1374z00_2377);
															}
															{	/* BackEnd/c_proto.scm 506 */
																obj_t BgL_tmpz00_4479;

																BgL_tmpz00_4479 =
																	((obj_t) BgL_port1374z00_2377);
																bgl_display_string
																	(BGl_string2316z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4479);
															}
															bgl_display_obj(BgL_namez00_2349,
																BgL_port1374z00_2377);
															{	/* BackEnd/c_proto.scm 506 */
																obj_t BgL_tmpz00_4483;

																BgL_tmpz00_4483 =
																	((obj_t) BgL_port1374z00_2377);
																bgl_display_string
																	(BGl_string2355z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4483);
															}
															bgl_display_obj(BgL_arityz00_2347,
																BgL_port1374z00_2377);
															{	/* BackEnd/c_proto.scm 506 */
																obj_t BgL_tmpz00_4487;

																BgL_tmpz00_4487 =
																	((obj_t) BgL_port1374z00_2377);
																bgl_display_string
																	(BGl_string2332z00zzbackend_c_prototypez00,
																	BgL_tmpz00_4487);
															}
															{	/* BackEnd/c_proto.scm 506 */
																obj_t BgL_tmpz00_4490;

																BgL_tmpz00_4490 =
																	((obj_t) BgL_port1374z00_2377);
																return
																	bgl_display_char(((unsigned char) 10),
																	BgL_tmpz00_4490);
		}}}}}}}}}}}

	}



/* fun-va-stackable? */
	obj_t
		BGl_funzd2vazd2stackablezf3zf3zzbackend_c_prototypez00(BgL_variablez00_bglt
		BgL_varz00_55)
	{
		{	/* BackEnd/c_proto.scm 526 */
			{	/* BackEnd/c_proto.scm 527 */
				BgL_valuez00_bglt BgL_funz00_2403;

				BgL_funz00_2403 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_55))->BgL_valuez00);
				{	/* BackEnd/c_proto.scm 528 */
					bool_t BgL_test2562z00_4494;

					{	/* BackEnd/c_proto.scm 528 */
						bool_t BgL_res2266z00_3275;

						BgL_res2266z00_3275 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_2403), BGl_sfunz00zzast_varz00);
						BgL_test2562z00_4494 = BgL_res2266z00_3275;
					}
					if (BgL_test2562z00_4494)
						{	/* BackEnd/c_proto.scm 530 */
							bool_t BgL__ortest_1158z00_2406;

							BgL__ortest_1158z00_2406 =
								(
								(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_2403))))->
									BgL_argszd2noescapezd2) == CNST_TABLE_REF(((long) 20)));
							if (BgL__ortest_1158z00_2406)
								{	/* BackEnd/c_proto.scm 530 */
									return BBOOL(BgL__ortest_1158z00_2406);
								}
							else
								{	/* BackEnd/c_proto.scm 531 */
									bool_t BgL_test2564z00_4504;

									{	/* BackEnd/c_proto.scm 531 */
										obj_t BgL_tmpz00_4505;

										BgL_tmpz00_4505 =
											(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_2403))))->
											BgL_argszd2noescapezd2);
										BgL_test2564z00_4504 = PAIRP(BgL_tmpz00_4505);
									}
									if (BgL_test2564z00_4504)
										{	/* BackEnd/c_proto.scm 531 */
											return
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BINT(
													(bgl_list_length(
															(((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt) BgL_funz00_2403)))->
																BgL_argszd2namezd2)) - ((long) 2))),
												(((BgL_funz00_bglt)
														COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
																	BgL_funz00_2403))))->BgL_argszd2noescapezd2));
										}
									else
										{	/* BackEnd/c_proto.scm 531 */
											return BFALSE;
										}
								}
						}
					else
						{	/* BackEnd/c_proto.scm 528 */
							return BFALSE;
						}
				}
			}
		}

	}



/* emit-cnst-selfun */
	obj_t BGl_emitzd2cnstzd2selfunz00zzbackend_c_prototypez00(obj_t BgL_funz00_56,
		BgL_globalz00_bglt BgL_globalz00_57)
	{
		{	/* BackEnd/c_proto.scm 539 */
			{	/* BackEnd/c_proto.scm 540 */
				obj_t BgL_vnamez00_2414;

				BgL_vnamez00_2414 =
					BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
					((BgL_variablez00_bglt) BgL_globalz00_57));
				{	/* BackEnd/c_proto.scm 541 */
					obj_t BgL_port1375z00_2415;

					BgL_port1375z00_2415 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_proto.scm 541 */
						obj_t BgL_tmpz00_4521;

						BgL_tmpz00_4521 = ((obj_t) BgL_port1375z00_2415);
						bgl_display_string(BGl_string2356z00zzbackend_c_prototypez00,
							BgL_tmpz00_4521);
					}
					bgl_display_obj(BgL_vnamez00_2414, BgL_port1375z00_2415);
					{	/* BackEnd/c_proto.scm 541 */
						obj_t BgL_tmpz00_4525;

						BgL_tmpz00_4525 = ((obj_t) BgL_port1375z00_2415);
						bgl_display_string(BGl_string2357z00zzbackend_c_prototypez00,
							BgL_tmpz00_4525);
					}
					{	/* BackEnd/c_proto.scm 541 */
						obj_t BgL_tmpz00_4528;

						BgL_tmpz00_4528 = ((obj_t) BgL_port1375z00_2415);
						return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4528);
		}}}}

	}



/* emit-cnst-slfun */
	obj_t BGl_emitzd2cnstzd2slfunz00zzbackend_c_prototypez00(obj_t BgL_funz00_58,
		BgL_globalz00_bglt BgL_globalz00_59)
	{
		{	/* BackEnd/c_proto.scm 546 */
			{	/* BackEnd/c_proto.scm 547 */
				obj_t BgL_actualsz00_2416;

				BgL_actualsz00_2416 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_funz00_58)))->BgL_argsz00);
				{	/* BackEnd/c_proto.scm 547 */
					obj_t BgL_entryz00_2417;

					BgL_entryz00_2417 = CAR(((obj_t) BgL_actualsz00_2416));
					{	/* BackEnd/c_proto.scm 548 */
						obj_t BgL_vnamez00_2418;

						BgL_vnamez00_2418 =
							BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
							((BgL_variablez00_bglt) BgL_globalz00_59));
						{	/* BackEnd/c_proto.scm 549 */
							obj_t BgL_namez00_2419;

							{	/* BackEnd/c_proto.scm 550 */
								BgL_variablez00_bglt BgL_arg1992z00_2423;

								BgL_arg1992z00_2423 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_entryz00_2417)))->BgL_variablez00);
								BgL_namez00_2419 =
									BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
									(BgL_arg1992z00_2423);
							}
							{	/* BackEnd/c_proto.scm 550 */

								{	/* BackEnd/c_proto.scm 551 */
									obj_t BgL_port1376z00_2420;

									BgL_port1376z00_2420 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_proto.scm 551 */
										obj_t BgL_tmpz00_4540;

										BgL_tmpz00_4540 = ((obj_t) BgL_port1376z00_2420);
										bgl_display_string
											(BGl_string2358z00zzbackend_c_prototypez00,
											BgL_tmpz00_4540);
									}
									bgl_display_obj(BgL_vnamez00_2418, BgL_port1376z00_2420);
									{	/* BackEnd/c_proto.scm 551 */
										obj_t BgL_tmpz00_4544;

										BgL_tmpz00_4544 = ((obj_t) BgL_port1376z00_2420);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4544);
									}
									bgl_display_obj(BGl_idzd2ze3namez31zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(BgL_namez00_2419)),
										BgL_port1376z00_2420);
									{	/* BackEnd/c_proto.scm 551 */
										obj_t BgL_tmpz00_4550;

										BgL_tmpz00_4550 = ((obj_t) BgL_port1376z00_2420);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4550);
									}
									bgl_display_obj(BgL_namez00_2419, BgL_port1376z00_2420);
									{	/* BackEnd/c_proto.scm 551 */
										obj_t BgL_tmpz00_4554;

										BgL_tmpz00_4554 = ((obj_t) BgL_port1376z00_2420);
										bgl_display_string
											(BGl_string2332z00zzbackend_c_prototypez00,
											BgL_tmpz00_4554);
									}
									{	/* BackEnd/c_proto.scm 551 */
										obj_t BgL_tmpz00_4557;

										BgL_tmpz00_4557 = ((obj_t) BgL_port1376z00_2420);
										return
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_4557);
		}}}}}}}}

	}



/* emit-cnst-stvector */
	obj_t BGl_emitzd2cnstzd2stvectorz00zzbackend_c_prototypez00(obj_t
		BgL_tvecz00_60, BgL_globalz00_bglt BgL_globalz00_61)
	{
		{	/* BackEnd/c_proto.scm 563 */
			{	/* BackEnd/c_proto.scm 564 */
				obj_t BgL_vecz00_2424;

				BgL_vecz00_2424 =
					STRUCT_REF(((obj_t) BgL_tvecz00_60), (int) (((long) 1)));
				{	/* BackEnd/c_proto.scm 564 */
					BgL_typez00_bglt BgL_itypez00_2425;

					{	/* BackEnd/c_proto.scm 565 */
						BgL_typez00_bglt BgL_oz00_3298;

						BgL_oz00_3298 =
							((BgL_typez00_bglt)
							STRUCT_REF(((obj_t) BgL_tvecz00_60), (int) (((long) 0))));
						{
							BgL_tvecz00_bglt BgL_auxz00_4567;

							{
								obj_t BgL_auxz00_4568;

								{	/* BackEnd/c_proto.scm 565 */
									BgL_objectz00_bglt BgL_tmpz00_4569;

									BgL_tmpz00_4569 = ((BgL_objectz00_bglt) BgL_oz00_3298);
									BgL_auxz00_4568 = BGL_OBJECT_WIDENING(BgL_tmpz00_4569);
								}
								BgL_auxz00_4567 = ((BgL_tvecz00_bglt) BgL_auxz00_4568);
							}
							BgL_itypez00_2425 =
								(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_4567))->
								BgL_itemzd2typezd2);
					}}
					{	/* BackEnd/c_proto.scm 565 */
						obj_t BgL_czd2veczd2_2426;

						BgL_czd2veczd2_2426 =
							BGl_tvectorzd2ze3czd2vectorze3zztvector_cnstz00(BgL_tvecz00_60);
						{	/* BackEnd/c_proto.scm 566 */

							BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
								((BgL_variablez00_bglt) BgL_globalz00_61));
							{	/* BackEnd/c_proto.scm 568 */
								obj_t BgL_auxz00_2427;

								{	/* BackEnd/c_proto.scm 568 */
									obj_t BgL_arg1998z00_2433;

									{	/* BackEnd/c_proto.scm 568 */
										obj_t BgL_arg1999z00_2434;

										BgL_arg1999z00_2434 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_61)))->
											BgL_namez00);
										BgL_arg1998z00_2433 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1999z00_2434);
									}
									BgL_auxz00_2427 =
										BGl_idzd2ze3namez31zzast_identz00(BgL_arg1998z00_2433);
								}
								{	/* BackEnd/c_proto.scm 569 */
									obj_t BgL_port1377z00_2428;

									BgL_port1377z00_2428 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4581;

										BgL_tmpz00_4581 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2359z00zzbackend_c_prototypez00,
											BgL_tmpz00_4581);
									}
									bgl_display_obj(BgL_auxz00_2427, BgL_port1377z00_2428);
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4585;

										BgL_tmpz00_4585 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4585);
									}
									bgl_display_obj(BINT(VECTOR_LENGTH(
												((obj_t) BgL_vecz00_2424))), BgL_port1377z00_2428);
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4592;

										BgL_tmpz00_4592 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4592);
									}
									bgl_display_obj(BGl_stringzd2sanszd2z42z42zztype_toolsz00(
											(((BgL_typez00_bglt) COBJECT(BgL_itypez00_2425))->
												BgL_namez00)), BgL_port1377z00_2428);
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4598;

										BgL_tmpz00_4598 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2360z00zzbackend_c_prototypez00,
											BgL_tmpz00_4598);
									}
									bgl_display_obj(BgL_czd2veczd2_2426, BgL_port1377z00_2428);
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4602;

										BgL_tmpz00_4602 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2361z00zzbackend_c_prototypez00,
											BgL_tmpz00_4602);
									}
									{	/* BackEnd/c_proto.scm 579 */
										obj_t BgL_arg1997z00_2432;

										BgL_arg1997z00_2432 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_61)))->
											BgL_namez00);
										bgl_display_obj(BgL_arg1997z00_2432, BgL_port1377z00_2428);
									}
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4608;

										BgL_tmpz00_4608 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2316z00zzbackend_c_prototypez00,
											BgL_tmpz00_4608);
									}
									bgl_display_obj(BgL_auxz00_2427, BgL_port1377z00_2428);
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4612;

										BgL_tmpz00_4612 = ((obj_t) BgL_port1377z00_2428);
										bgl_display_string
											(BGl_string2332z00zzbackend_c_prototypez00,
											BgL_tmpz00_4612);
									}
									{	/* BackEnd/c_proto.scm 569 */
										obj_t BgL_tmpz00_4615;

										BgL_tmpz00_4615 = ((obj_t) BgL_port1377z00_2428);
										return
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_4615);
		}}}}}}}}

	}



/* emit-class-types */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t
		BgL_classzd2listzd2_65, obj_t BgL_oportz00_66)
	{
		{	/* BackEnd/c_proto.scm 613 */
			{
				obj_t BgL_classz00_2463;
				obj_t BgL_classz00_2479;

				if (NULLP(BgL_classzd2listzd2_65))
					{	/* BackEnd/c_proto.scm 648 */
						return BFALSE;
					}
				else
					{	/* BackEnd/c_proto.scm 648 */
						bgl_display_char(((unsigned char) 10), BgL_oportz00_66);
						bgl_display_string(BGl_string2369z00zzbackend_c_prototypez00,
							BgL_oportz00_66);
						bgl_display_char(((unsigned char) 10), BgL_oportz00_66);
						{	/* BackEnd/c_proto.scm 650 */
							obj_t BgL_g1395z00_2441;

							BgL_g1395z00_2441 = bgl_reverse_bang(BgL_classzd2listzd2_65);
							{
								obj_t BgL_l1393z00_2443;

								BgL_l1393z00_2443 = BgL_g1395z00_2441;
							BgL_zc3z04anonymousza32002ze3z87_2444:
								if (PAIRP(BgL_l1393z00_2443))
									{	/* BackEnd/c_proto.scm 655 */
										{	/* BackEnd/c_proto.scm 651 */
											obj_t BgL_classz00_2446;

											BgL_classz00_2446 = CAR(BgL_l1393z00_2443);
											if (
												(BgL_classz00_2446 ==
													BGl_getzd2objectzd2typez00zztype_cachez00()))
												{	/* BackEnd/c_proto.scm 651 */
													BFALSE;
												}
											else
												{	/* BackEnd/c_proto.scm 651 */
													if (BGl_widezd2classzf3z21zzobject_classz00
														(BgL_classz00_2446))
														{	/* BackEnd/c_proto.scm 652 */
															BgL_classz00_2479 = BgL_classz00_2446;
															bgl_display_string
																(BGl_string2362z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 632 */
																obj_t BgL_arg2026z00_2482;

																{	/* BackEnd/c_proto.scm 632 */
																	obj_t BgL_arg2028z00_2483;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_4633;

																		{
																			obj_t BgL_auxz00_4634;

																			{	/* BackEnd/c_proto.scm 632 */
																				BgL_objectz00_bglt BgL_tmpz00_4635;

																				BgL_tmpz00_4635 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_classz00_2479));
																				BgL_auxz00_4634 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4635);
																			}
																			BgL_auxz00_4633 =
																				((BgL_tclassz00_bglt) BgL_auxz00_4634);
																		}
																		BgL_arg2028z00_2483 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_4633))->
																			BgL_widezd2typezd2);
																	}
																	BgL_arg2026z00_2482 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					BgL_arg2028z00_2483)))->
																		BgL_siza7eza7);
																}
																bgl_display_obj(BgL_arg2026z00_2482,
																	BgL_oportz00_66);
															}
															bgl_display_string
																(BGl_string2363z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 633 */
																bool_t BgL_test2569z00_4646;

																{	/* BackEnd/c_proto.scm 633 */
																	obj_t BgL_arg2031z00_2487;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_4647;

																		{
																			obj_t BgL_auxz00_4648;

																			{	/* BackEnd/c_proto.scm 633 */
																				BgL_objectz00_bglt BgL_tmpz00_4649;

																				BgL_tmpz00_4649 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_classz00_2479));
																				BgL_auxz00_4648 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4649);
																			}
																			BgL_auxz00_4647 =
																				((BgL_tclassz00_bglt) BgL_auxz00_4648);
																		}
																		BgL_arg2031z00_2487 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_4647))->
																			BgL_slotsz00);
																	}
																	BgL_test2569z00_4646 =
																		NULLP(BgL_arg2031z00_2487);
																}
																if (BgL_test2569z00_4646)
																	{	/* BackEnd/c_proto.scm 633 */
																		bgl_display_string
																			(BGl_string2364z00zzbackend_c_prototypez00,
																			BgL_oportz00_66);
																		bgl_display_char(((unsigned char) 10),
																			BgL_oportz00_66);
																	}
																else
																	{	/* BackEnd/c_proto.scm 633 */
																		BFALSE;
																	}
															}
															{	/* BackEnd/c_proto.scm 640 */
																obj_t BgL_g1390z00_2488;

																{
																	BgL_tclassz00_bglt BgL_auxz00_4658;

																	{
																		obj_t BgL_auxz00_4659;

																		{	/* BackEnd/c_proto.scm 643 */
																			BgL_objectz00_bglt BgL_tmpz00_4660;

																			BgL_tmpz00_4660 =
																				((BgL_objectz00_bglt)
																				((BgL_typez00_bglt) BgL_classz00_2479));
																			BgL_auxz00_4659 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_4660);
																		}
																		BgL_auxz00_4658 =
																			((BgL_tclassz00_bglt) BgL_auxz00_4659);
																	}
																	BgL_g1390z00_2488 =
																		(((BgL_tclassz00_bglt)
																			COBJECT(BgL_auxz00_4658))->BgL_slotsz00);
																}
																{
																	obj_t BgL_l1388z00_2490;

																	BgL_l1388z00_2490 = BgL_g1390z00_2488;
																BgL_zc3z04anonymousza32032ze3z87_2491:
																	if (PAIRP(BgL_l1388z00_2490))
																		{	/* BackEnd/c_proto.scm 643 */
																			{	/* BackEnd/c_proto.scm 641 */
																				obj_t BgL_sz00_2493;

																				BgL_sz00_2493 = CAR(BgL_l1388z00_2490);
																				if (
																					((((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_sz00_2493)))->
																							BgL_classzd2ownerzd2) ==
																						BgL_classz00_2479))
																					{	/* BackEnd/c_proto.scm 641 */
																						BGl_emitzd2slotze70z35zzbackend_c_prototypez00
																							(BgL_oportz00_66, BgL_sz00_2493);
																					}
																				else
																					{	/* BackEnd/c_proto.scm 641 */
																						BFALSE;
																					}
																			}
																			{
																				obj_t BgL_l1388z00_4674;

																				BgL_l1388z00_4674 =
																					CDR(BgL_l1388z00_2490);
																				BgL_l1388z00_2490 = BgL_l1388z00_4674;
																				goto
																					BgL_zc3z04anonymousza32032ze3z87_2491;
																			}
																		}
																	else
																		{	/* BackEnd/c_proto.scm 643 */
																			((bool_t) 1);
																		}
																}
															}
															bgl_display_string
																(BGl_string2365z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 645 */
																obj_t BgL_arg2038z00_2500;

																{	/* BackEnd/c_proto.scm 645 */
																	obj_t BgL_arg2039z00_2501;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_4677;

																		{
																			obj_t BgL_auxz00_4678;

																			{	/* BackEnd/c_proto.scm 645 */
																				BgL_objectz00_bglt BgL_tmpz00_4679;

																				BgL_tmpz00_4679 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_classz00_2479));
																				BgL_auxz00_4678 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4679);
																			}
																			BgL_auxz00_4677 =
																				((BgL_tclassz00_bglt) BgL_auxz00_4678);
																		}
																		BgL_arg2039z00_2501 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_4677))->
																			BgL_widezd2typezd2);
																	}
																	BgL_arg2038z00_2500 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					BgL_arg2039z00_2501)))->BgL_namez00);
																}
																bgl_display_obj(BgL_arg2038z00_2500,
																	BgL_oportz00_66);
															}
															bgl_display_string
																(BGl_string2366z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
														}
													else
														{	/* BackEnd/c_proto.scm 652 */
															BgL_classz00_2463 = BgL_classz00_2446;
															bgl_display_string
																(BGl_string2362z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 625 */
																obj_t BgL_arg2016z00_2466;

																BgL_arg2016z00_2466 =
																	(((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_classz00_2463)))->
																	BgL_siza7eza7);
																bgl_display_obj(BgL_arg2016z00_2466,
																	BgL_oportz00_66);
															}
															bgl_display_string
																(BGl_string2363z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
															bgl_display_string
																(BGl_string2367z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
															bgl_display_string
																(BGl_string2368z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 628 */
																obj_t BgL_g1384z00_2469;

																{
																	BgL_tclassz00_bglt BgL_auxz00_4700;

																	{
																		obj_t BgL_auxz00_4701;

																		{	/* BackEnd/c_proto.scm 628 */
																			BgL_objectz00_bglt BgL_tmpz00_4702;

																			BgL_tmpz00_4702 =
																				((BgL_objectz00_bglt)
																				((BgL_typez00_bglt) BgL_classz00_2463));
																			BgL_auxz00_4701 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_4702);
																		}
																		BgL_auxz00_4700 =
																			((BgL_tclassz00_bglt) BgL_auxz00_4701);
																	}
																	BgL_g1384z00_2469 =
																		(((BgL_tclassz00_bglt)
																			COBJECT(BgL_auxz00_4700))->BgL_slotsz00);
																}
																{
																	obj_t BgL_l1382z00_2471;

																	BgL_l1382z00_2471 = BgL_g1384z00_2469;
																BgL_zc3z04anonymousza32017ze3z87_2472:
																	if (PAIRP(BgL_l1382z00_2471))
																		{	/* BackEnd/c_proto.scm 628 */
																			BGl_emitzd2slotze70z35zzbackend_c_prototypez00
																				(BgL_oportz00_66,
																				CAR(BgL_l1382z00_2471));
																			{
																				obj_t BgL_l1382z00_4712;

																				BgL_l1382z00_4712 =
																					CDR(BgL_l1382z00_2471);
																				BgL_l1382z00_2471 = BgL_l1382z00_4712;
																				goto
																					BgL_zc3z04anonymousza32017ze3z87_2472;
																			}
																		}
																	else
																		{	/* BackEnd/c_proto.scm 628 */
																			((bool_t) 1);
																		}
																}
															}
															bgl_display_string
																(BGl_string2365z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															{	/* BackEnd/c_proto.scm 629 */
																obj_t BgL_arg2022z00_2478;

																BgL_arg2022z00_2478 =
																	BGl_typezd2classzd2namez00zzobject_classz00(
																	((BgL_typez00_bglt) BgL_classz00_2463));
																bgl_display_obj(BgL_arg2022z00_2478,
																	BgL_oportz00_66);
															}
															bgl_display_string
																(BGl_string2366z00zzbackend_c_prototypez00,
																BgL_oportz00_66);
															bgl_display_char(((unsigned char) 10),
																BgL_oportz00_66);
										}}}
										{
											obj_t BgL_l1393z00_4720;

											BgL_l1393z00_4720 = CDR(BgL_l1393z00_2443);
											BgL_l1393z00_2443 = BgL_l1393z00_4720;
											goto BgL_zc3z04anonymousza32002ze3z87_2444;
										}
									}
								else
									{	/* BackEnd/c_proto.scm 655 */
										((bool_t) 1);
									}
							}
						}
						return bgl_display_char(((unsigned char) 10), BgL_oportz00_66);
		}}}

	}



/* emit-slot~0 */
	obj_t BGl_emitzd2slotze70z35zzbackend_c_prototypez00(obj_t BgL_oportz00_3558,
		obj_t BgL_slotz00_2453)
	{
		{	/* BackEnd/c_proto.scm 622 */
			{	/* BackEnd/c_proto.scm 617 */
				obj_t BgL_cnamez00_2456;

				{	/* BackEnd/c_proto.scm 617 */
					obj_t BgL_arg2014z00_2462;

					BgL_arg2014z00_2462 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_2453)))->BgL_typez00);
					BgL_cnamez00_2456 =
						BGl_crosszd2namezd2zzbackend_c_prototypez00(BgL_arg2014z00_2462);
				}
				if (
					((long) CINT(
							(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_slotz00_2453)))->
								BgL_virtualzd2numzd2)) >= ((long) 0)))
					{	/* BackEnd/c_proto.scm 619 */
						return BUNSPEC;
					}
				else
					{	/* BackEnd/c_proto.scm 619 */
						bgl_display_string(BGl_string2370z00zzbackend_c_prototypez00,
							BgL_oportz00_3558);
						bgl_display_obj(BgL_cnamez00_2456, BgL_oportz00_3558);
						bgl_display_string(BGl_string2371z00zzbackend_c_prototypez00,
							BgL_oportz00_3558);
						{	/* BackEnd/c_proto.scm 622 */
							obj_t BgL_arg2012z00_2460;

							BgL_arg2012z00_2460 =
								(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_slotz00_2453)))->BgL_namez00);
							bgl_display_obj(BgL_arg2012z00_2460, BgL_oportz00_3558);
						}
						bgl_display_string(BGl_string2357z00zzbackend_c_prototypez00,
							BgL_oportz00_3558);
						return bgl_display_char(((unsigned char) 10), BgL_oportz00_3558);
		}}}

	}



/* &emit-class-types */
	obj_t BGl_z62emitzd2classzd2typesz62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3516, obj_t BgL_classzd2listzd2_3517, obj_t BgL_oportz00_3518)
	{
		{	/* BackEnd/c_proto.scm 613 */
			return
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00
				(BgL_classzd2listzd2_3517, BgL_oportz00_3518);
		}

	}



/* cross-name */
	obj_t BGl_crosszd2namezd2zzbackend_c_prototypez00(obj_t BgL_typez00_67)
	{
		{	/* BackEnd/c_proto.scm 665 */
			if (BGl_isazf3zf3zz__objectz00(BgL_typez00_67,
					BGl_tclassz00zzobject_classz00))
				{	/* BackEnd/c_proto.scm 667 */
					obj_t BgL_arg2041z00_2506;

					BgL_arg2041z00_2506 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_typez00_67))))->BgL_siza7eza7);
					return
						string_append(BgL_arg2041z00_2506,
						BGl_string2372z00zzbackend_c_prototypez00);
				}
			else
				{	/* BackEnd/c_proto.scm 666 */
					return
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_typez00_67)))->BgL_namez00);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_proc2373z00zzbackend_c_prototypez00, BGl_valuez00zzast_varz00,
				BGl_string2374z00zzbackend_c_prototypez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_proc2375z00zzbackend_c_prototypez00, BGl_variablez00zzast_varz00,
				BGl_string2376z00zzbackend_c_prototypez00);
		}

	}



/* &get-c-scope1408 */
	obj_t BGl_z62getzd2czd2scope1408z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3521, obj_t BgL_variablez00_3522)
	{
		{	/* BackEnd/c_proto.scm 587 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 21)),
				BGl_string2377z00zzbackend_c_prototypez00,
				((obj_t) ((BgL_variablez00_bglt) BgL_variablez00_3522)));
		}

	}



/* &emit-prototype1396 */
	obj_t BGl_z62emitzd2prototype1396zb0zzbackend_c_prototypez00(obj_t
		BgL_envz00_3523, obj_t BgL_valuez00_3524, obj_t BgL_variablez00_3525)
	{
		{	/* BackEnd/c_proto.scm 105 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 22)),
				BGl_string2377z00zzbackend_c_prototypez00,
				((obj_t) ((BgL_valuez00_bglt) BgL_valuez00_3524)));
		}

	}



/* emit-prototype */
	obj_t BGl_emitzd2prototypezd2zzbackend_c_prototypez00(BgL_valuez00_bglt
		BgL_valuez00_14, BgL_variablez00_bglt BgL_variablez00_15)
	{
		{	/* BackEnd/c_proto.scm 105 */
			{	/* BackEnd/c_proto.scm 105 */
				obj_t BgL_method1397z00_2516;

				{	/* BackEnd/c_proto.scm 105 */
					obj_t BgL_res2286z00_3428;

					{	/* BackEnd/c_proto.scm 105 */
						long BgL_objzd2classzd2numz00_3393;

						{	/* BackEnd/c_proto.scm 105 */
							long BgL_res2276z00_3396;

							BgL_res2276z00_3396 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_14));
							BgL_objzd2classzd2numz00_3393 = BgL_res2276z00_3396;
						}
						{	/* BackEnd/c_proto.scm 105 */
							obj_t BgL_arg1813z00_3394;

							BgL_arg1813z00_3394 =
								PROCEDURE_REF
								(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
								(int) (((long) 1)));
							{	/* BackEnd/c_proto.scm 105 */
								int BgL_offsetz00_3398;

								BgL_offsetz00_3398 = (int) (BgL_objzd2classzd2numz00_3393);
								{	/* BackEnd/c_proto.scm 105 */
									long BgL_offsetz00_3399;

									BgL_offsetz00_3399 =
										((long) (BgL_offsetz00_3398) - OBJECT_TYPE);
									{	/* BackEnd/c_proto.scm 105 */
										long BgL_modz00_3400;

										BgL_modz00_3400 =
											(BgL_offsetz00_3399 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/c_proto.scm 105 */
											long BgL_restz00_3402;

											BgL_restz00_3402 =
												(BgL_offsetz00_3399 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/c_proto.scm 105 */

												{	/* BackEnd/c_proto.scm 105 */
													obj_t BgL_bucketz00_3404;

													BgL_bucketz00_3404 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3394), BgL_modz00_3400);
													BgL_res2286z00_3428 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3404), BgL_restz00_3402);
					}}}}}}}}
					BgL_method1397z00_2516 = BgL_res2286z00_3428;
				}
				return
					PROCEDURE_ENTRY(BgL_method1397z00_2516) (BgL_method1397z00_2516,
					((obj_t) BgL_valuez00_14), ((obj_t) BgL_variablez00_15), BEOA);
			}
		}

	}



/* &emit-prototype */
	obj_t BGl_z62emitzd2prototypezb0zzbackend_c_prototypez00(obj_t
		BgL_envz00_3526, obj_t BgL_valuez00_3527, obj_t BgL_variablez00_3528)
	{
		{	/* BackEnd/c_proto.scm 105 */
			return
				BGl_emitzd2prototypezd2zzbackend_c_prototypez00(
				((BgL_valuez00_bglt) BgL_valuez00_3527),
				((BgL_variablez00_bglt) BgL_variablez00_3528));
		}

	}



/* get-c-scope */
	obj_t BGl_getzd2czd2scopez00zzbackend_c_prototypez00(BgL_variablez00_bglt
		BgL_variablez00_62)
	{
		{	/* BackEnd/c_proto.scm 587 */
			{	/* BackEnd/c_proto.scm 587 */
				obj_t BgL_method1409z00_2517;

				{	/* BackEnd/c_proto.scm 587 */
					obj_t BgL_res2297z00_3465;

					{	/* BackEnd/c_proto.scm 587 */
						long BgL_objzd2classzd2numz00_3430;

						{	/* BackEnd/c_proto.scm 587 */
							long BgL_res2287z00_3433;

							BgL_res2287z00_3433 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_variablez00_62));
							BgL_objzd2classzd2numz00_3430 = BgL_res2287z00_3433;
						}
						{	/* BackEnd/c_proto.scm 587 */
							obj_t BgL_arg1813z00_3431;

							BgL_arg1813z00_3431 =
								PROCEDURE_REF
								(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
								(int) (((long) 1)));
							{	/* BackEnd/c_proto.scm 587 */
								int BgL_offsetz00_3435;

								BgL_offsetz00_3435 = (int) (BgL_objzd2classzd2numz00_3430);
								{	/* BackEnd/c_proto.scm 587 */
									long BgL_offsetz00_3436;

									BgL_offsetz00_3436 =
										((long) (BgL_offsetz00_3435) - OBJECT_TYPE);
									{	/* BackEnd/c_proto.scm 587 */
										long BgL_modz00_3437;

										BgL_modz00_3437 =
											(BgL_offsetz00_3436 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/c_proto.scm 587 */
											long BgL_restz00_3439;

											BgL_restz00_3439 =
												(BgL_offsetz00_3436 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/c_proto.scm 587 */

												{	/* BackEnd/c_proto.scm 587 */
													obj_t BgL_bucketz00_3441;

													BgL_bucketz00_3441 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3431), BgL_modz00_3437);
													BgL_res2297z00_3465 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3441), BgL_restz00_3439);
					}}}}}}}}
					BgL_method1409z00_2517 = BgL_res2297z00_3465;
				}
				return
					PROCEDURE_ENTRY(BgL_method1409z00_2517) (BgL_method1409z00_2517,
					((obj_t) BgL_variablez00_62), BEOA);
			}
		}

	}



/* &get-c-scope */
	obj_t BGl_z62getzd2czd2scopez62zzbackend_c_prototypez00(obj_t BgL_envz00_3529,
		obj_t BgL_variablez00_3530)
	{
		{	/* BackEnd/c_proto.scm 587 */
			return
				BGl_getzd2czd2scopez00zzbackend_c_prototypez00(
				((BgL_variablez00_bglt) BgL_variablez00_3530));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_svarz00zzast_varz00, BGl_proc2378z00zzbackend_c_prototypez00,
				BGl_string2379z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_scnstz00zzast_varz00, BGl_proc2380z00zzbackend_c_prototypez00,
				BGl_string2379z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_sfunz00zzast_varz00, BGl_proc2381z00zzbackend_c_prototypez00,
				BGl_string2379z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_cfunz00zzast_varz00, BGl_proc2382z00zzbackend_c_prototypez00,
				BGl_string2379z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_emitzd2prototypezd2envz00zzbackend_c_prototypez00,
				BGl_cvarz00zzast_varz00, BGl_proc2383z00zzbackend_c_prototypez00,
				BGl_string2379z00zzbackend_c_prototypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_globalz00zzast_varz00, BGl_proc2384z00zzbackend_c_prototypez00,
				BGl_string2385z00zzbackend_c_prototypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2czd2scopezd2envzd2zzbackend_c_prototypez00,
				BGl_localz00zzast_varz00, BGl_proc2386z00zzbackend_c_prototypez00,
				BGl_string2385z00zzbackend_c_prototypez00);
		}

	}



/* &get-c-scope-local1413 */
	obj_t BGl_z62getzd2czd2scopezd2local1413zb0zzbackend_c_prototypez00(obj_t
		BgL_envz00_3538, obj_t BgL_variablez00_3539)
	{
		{	/* BackEnd/c_proto.scm 607 */
			return BGl_string2310z00zzbackend_c_prototypez00;
		}

	}



/* &get-c-scope-global1411 */
	obj_t BGl_z62getzd2czd2scopezd2global1411zb0zzbackend_c_prototypez00(obj_t
		BgL_envz00_3540, obj_t BgL_variablez00_3541)
	{
		{	/* BackEnd/c_proto.scm 592 */
			{	/* BackEnd/c_proto.scm 594 */
				obj_t BgL_scopez00_3584;

				{	/* BackEnd/c_proto.scm 594 */
					obj_t BgL_casezd2valuezd2_3585;

					BgL_casezd2valuezd2_3585 =
						(((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_variablez00_3541)))->BgL_importz00);
					if ((BgL_casezd2valuezd2_3585 == CNST_TABLE_REF(((long) 0))))
						{	/* BackEnd/c_proto.scm 594 */
							BgL_scopez00_3584 = BGl_string2310z00zzbackend_c_prototypez00;
						}
					else
						{	/* BackEnd/c_proto.scm 594 */
							if ((BgL_casezd2valuezd2_3585 == CNST_TABLE_REF(((long) 19))))
								{	/* BackEnd/c_proto.scm 594 */
									if (CBOOL(
											(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt) BgL_variablez00_3541)))->
												BgL_libraryz00)))
										{	/* BackEnd/c_proto.scm 596 */
											BgL_scopez00_3584 =
												BGl_string2387z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 596 */
											BgL_scopez00_3584 =
												BGl_string2388z00zzbackend_c_prototypez00;
										}
								}
							else
								{	/* BackEnd/c_proto.scm 594 */
									if ((BgL_casezd2valuezd2_3585 == CNST_TABLE_REF(((long) 1))))
										{	/* BackEnd/c_proto.scm 594 */
											BgL_scopez00_3584 =
												BGl_string2389z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 594 */
											BgL_scopez00_3584 =
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string2385z00zzbackend_c_prototypez00,
												BGl_string2390z00zzbackend_c_prototypez00,
												(((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
																BgL_variablez00_3541)))->BgL_importz00));
										}
								}
						}
				}
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
									(long) 5)),
							(((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
											BgL_variablez00_3541)))->BgL_pragmaz00))))
					{	/* BackEnd/c_proto.scm 600 */
						return
							string_append(BgL_scopez00_3584,
							BGl_string2391z00zzbackend_c_prototypez00);
					}
				else
					{	/* BackEnd/c_proto.scm 600 */
						return BgL_scopez00_3584;
					}
			}
		}

	}



/* &emit-prototype-cvar1407 */
	obj_t BGl_z62emitzd2prototypezd2cvar1407z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3542, obj_t BgL_valuez00_3543, obj_t BgL_variablez00_3544)
	{
		{	/* BackEnd/c_proto.scm 234 */
			if (
				(((BgL_cvarz00_bglt) COBJECT(
							((BgL_cvarz00_bglt) BgL_valuez00_3543)))->BgL_macrozf3zf3))
				{	/* BackEnd/c_proto.scm 235 */
					return BFALSE;
				}
			else
				{	/* BackEnd/c_proto.scm 237 */
					obj_t BgL_port1358z00_3587;

					BgL_port1358z00_3587 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_proto.scm 238 */
						obj_t BgL_arg2083z00_3588;

						if (CBOOL(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_variablez00_3544)))->
									BgL_libraryz00)))
							{	/* BackEnd/c_proto.scm 238 */
								BgL_arg2083z00_3588 = BGl_string2392z00zzbackend_c_prototypez00;
							}
						else
							{	/* BackEnd/c_proto.scm 238 */
								BgL_arg2083z00_3588 = BGl_string2393z00zzbackend_c_prototypez00;
							}
						bgl_display_obj(BgL_arg2083z00_3588, BgL_port1358z00_3587);
					}
					{	/* BackEnd/c_proto.scm 239 */
						obj_t BgL_arg2085z00_3589;

						{	/* BackEnd/c_proto.scm 239 */
							BgL_typez00_bglt BgL_arg2086z00_3590;
							obj_t BgL_arg2087z00_3591;

							BgL_arg2086z00_3590 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_variablez00_3544))))->
								BgL_typez00);
							BgL_arg2087z00_3591 =
								(((BgL_variablez00_bglt)
									COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
												BgL_variablez00_3544))))->BgL_namez00);
							BgL_arg2085z00_3589 =
								BGl_makezd2typedzd2declarationz00zztype_toolsz00
								(BgL_arg2086z00_3590, BgL_arg2087z00_3591);
						}
						bgl_display_obj(BgL_arg2085z00_3589, BgL_port1358z00_3587);
					}
					{	/* BackEnd/c_proto.scm 237 */
						obj_t BgL_tmpz00_4873;

						BgL_tmpz00_4873 = ((obj_t) BgL_port1358z00_3587);
						bgl_display_char(((unsigned char) ';'), BgL_tmpz00_4873);
					}
					{	/* BackEnd/c_proto.scm 237 */
						obj_t BgL_tmpz00_4876;

						BgL_tmpz00_4876 = ((obj_t) BgL_port1358z00_3587);
						return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4876);
		}}}

	}



/* &emit-prototype-cfun1405 */
	obj_t BGl_z62emitzd2prototypezd2cfun1405z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3545, obj_t BgL_valuez00_3546, obj_t BgL_variablez00_3547)
	{
		{	/* BackEnd/c_proto.scm 201 */
			if (
				(((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_valuez00_3546)))->BgL_macrozf3zf3))
				{	/* BackEnd/c_proto.scm 202 */
					return BFALSE;
				}
			else
				{	/* BackEnd/c_proto.scm 204 */
					long BgL_arityz00_3593;

					BgL_arityz00_3593 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_cfunz00_bglt) BgL_valuez00_3546))))->BgL_arityz00);
					{	/* BackEnd/c_proto.scm 204 */
						obj_t BgL_targsz00_3594;

						BgL_targsz00_3594 =
							(((BgL_cfunz00_bglt) COBJECT(
									((BgL_cfunz00_bglt) BgL_valuez00_3546)))->BgL_argszd2typezd2);
						{	/* BackEnd/c_proto.scm 205 */

							{	/* BackEnd/c_proto.scm 206 */
								obj_t BgL_port1357z00_3595;

								BgL_port1357z00_3595 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								{	/* BackEnd/c_proto.scm 207 */
									obj_t BgL_arg2057z00_3596;

									if (CBOOL(
											(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt) BgL_variablez00_3547)))->
												BgL_libraryz00)))
										{	/* BackEnd/c_proto.scm 207 */
											BgL_arg2057z00_3596 =
												BGl_string2392z00zzbackend_c_prototypez00;
										}
									else
										{	/* BackEnd/c_proto.scm 207 */
											BgL_arg2057z00_3596 =
												BGl_string2393z00zzbackend_c_prototypez00;
										}
									bgl_display_obj(BgL_arg2057z00_3596, BgL_port1357z00_3595);
								}
								{	/* BackEnd/c_proto.scm 208 */
									obj_t BgL_arg2059z00_3597;

									{	/* BackEnd/c_proto.scm 208 */
										BgL_typez00_bglt BgL_arg2060z00_3598;
										obj_t BgL_arg2061z00_3599;

										BgL_arg2060z00_3598 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_variablez00_3547))))->
											BgL_typez00);
										{	/* BackEnd/c_proto.scm 210 */
											obj_t BgL_arg2062z00_3600;
											obj_t BgL_arg2063z00_3601;

											BgL_arg2062z00_3600 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_variablez00_3547))))->
												BgL_namez00);
											if (NULLP(BgL_targsz00_3594))
												{	/* BackEnd/c_proto.scm 214 */
													BgL_arg2063z00_3601 =
														BGl_string2315z00zzbackend_c_prototypez00;
												}
											else
												{	/* BackEnd/c_proto.scm 214 */
													if ((BgL_arityz00_3593 <= ((long) -1)))
														{	/* BackEnd/c_proto.scm 216 */
															obj_t BgL_arg2066z00_3602;

															{	/* BackEnd/c_proto.scm 216 */
																obj_t BgL_arg2068z00_3603;

																BgL_arg2068z00_3603 =
																	CAR(((obj_t) BgL_targsz00_3594));
																BgL_arg2066z00_3602 =
																	BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00
																	(((BgL_typez00_bglt) BgL_arg2068z00_3603));
															}
															BgL_arg2063z00_3601 =
																string_append(BgL_arg2066z00_3602,
																BGl_string2394z00zzbackend_c_prototypez00);
														}
													else
														{	/* BackEnd/c_proto.scm 215 */
															BgL_arg2063z00_3601 =
																BGl_loopze70ze7zzbackend_c_prototypez00
																(BgL_arityz00_3593, BgL_targsz00_3594);
														}
												}
											BgL_arg2061z00_3599 =
												string_append_3(BgL_arg2062z00_3600,
												BGl_string2314z00zzbackend_c_prototypez00,
												BgL_arg2063z00_3601);
										}
										BgL_arg2059z00_3597 =
											BGl_makezd2typedzd2declarationz00zztype_toolsz00
											(BgL_arg2060z00_3598, BgL_arg2061z00_3599);
									}
									bgl_display_obj(BgL_arg2059z00_3597, BgL_port1357z00_3595);
								}
								{	/* BackEnd/c_proto.scm 206 */
									obj_t BgL_tmpz00_4911;

									BgL_tmpz00_4911 = ((obj_t) BgL_port1357z00_3595);
									bgl_display_string(BGl_string2357z00zzbackend_c_prototypez00,
										BgL_tmpz00_4911);
								}
								{	/* BackEnd/c_proto.scm 206 */
									obj_t BgL_tmpz00_4914;

									BgL_tmpz00_4914 = ((obj_t) BgL_port1357z00_3595);
									return
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_4914);
		}}}}}}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzbackend_c_prototypez00(long BgL_arityz00_3557,
		obj_t BgL_targsz00_2568)
	{
		{	/* BackEnd/c_proto.scm 219 */
			if (NULLP(CDR(((obj_t) BgL_targsz00_2568))))
				{	/* BackEnd/c_proto.scm 220 */
					if ((BgL_arityz00_3557 < ((long) 0)))
						{	/* BackEnd/c_proto.scm 221 */
							return BGl_string2395z00zzbackend_c_prototypez00;
						}
					else
						{	/* BackEnd/c_proto.scm 224 */
							obj_t BgL_arg2075z00_2573;

							{	/* BackEnd/c_proto.scm 224 */
								obj_t BgL_arg2076z00_2574;

								BgL_arg2076z00_2574 = CAR(((obj_t) BgL_targsz00_2568));
								BgL_arg2075z00_2573 =
									BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
									((BgL_typez00_bglt) BgL_arg2076z00_2574));
							}
							return
								string_append(BgL_arg2075z00_2573,
								BGl_string2315z00zzbackend_c_prototypez00);
						}
				}
			else
				{	/* BackEnd/c_proto.scm 227 */
					obj_t BgL_arg2077z00_2575;
					obj_t BgL_arg2078z00_2576;

					{	/* BackEnd/c_proto.scm 227 */
						obj_t BgL_arg2079z00_2577;

						BgL_arg2079z00_2577 = CAR(((obj_t) BgL_targsz00_2568));
						BgL_arg2077z00_2575 =
							BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
							((BgL_typez00_bglt) BgL_arg2079z00_2577));
					}
					{	/* BackEnd/c_proto.scm 228 */
						obj_t BgL_arg2080z00_2578;

						BgL_arg2080z00_2578 = CDR(((obj_t) BgL_targsz00_2568));
						BgL_arg2078z00_2576 =
							BGl_loopze70ze7zzbackend_c_prototypez00(BgL_arityz00_3557,
							BgL_arg2080z00_2578);
					}
					return
						string_append_3(BgL_arg2077z00_2575,
						BGl_string2316z00zzbackend_c_prototypez00, BgL_arg2078z00_2576);
				}
		}

	}



/* &emit-prototype-sfun1403 */
	obj_t BGl_z62emitzd2prototypezd2sfun1403z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3548, obj_t BgL_valuez00_3549, obj_t BgL_variablez00_3550)
	{
		{	/* BackEnd/c_proto.scm 151 */
			BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_variablez00_3550));
			{	/* BackEnd/c_proto.scm 154 */
				obj_t BgL_port1356z00_3605;

				BgL_port1356z00_3605 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_proto.scm 155 */
					obj_t BgL_arg2045z00_3606;

					BgL_arg2045z00_3606 =
						BGl_getzd2czd2scopez00zzbackend_c_prototypez00(
						((BgL_variablez00_bglt) BgL_variablez00_3550));
					bgl_display_obj(BgL_arg2045z00_3606, BgL_port1356z00_3605);
				}
				{	/* BackEnd/c_proto.scm 154 */
					obj_t BgL_tmpz00_4941;

					BgL_tmpz00_4941 = ((obj_t) BgL_port1356z00_3605);
					bgl_display_char(((unsigned char) ' '), BgL_tmpz00_4941);
				}
				{	/* BackEnd/c_proto.scm 157 */
					obj_t BgL_arg2046z00_3607;

					{	/* BackEnd/c_proto.scm 157 */
						BgL_typez00_bglt BgL_arg2047z00_3608;
						obj_t BgL_arg2048z00_3609;

						BgL_arg2047z00_3608 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_variablez00_3550)))->BgL_typez00);
						{	/* BackEnd/c_proto.scm 159 */
							obj_t BgL_arg2049z00_3610;
							obj_t BgL_arg2050z00_3611;

							BgL_arg2049z00_3610 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_3550)))->
								BgL_namez00);
							{	/* BackEnd/c_proto.scm 161 */
								obj_t BgL_argsz00_3612;

								BgL_argsz00_3612 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_valuez00_3549)))->BgL_argsz00);
								{	/* BackEnd/c_proto.scm 162 */
									bool_t BgL_test2588z00_4950;

									if (PAIRP(BgL_argsz00_3612))
										{	/* BackEnd/c_proto.scm 162 */
											obj_t BgL_arg2055z00_3613;

											BgL_arg2055z00_3613 = CAR(BgL_argsz00_3612);
											BgL_test2588z00_4950 =
												BGl_isazf3zf3zz__objectz00(BgL_arg2055z00_3613,
												BGl_typez00zztype_typez00);
										}
									else
										{	/* BackEnd/c_proto.scm 162 */
											BgL_test2588z00_4950 = ((bool_t) 0);
										}
									if (BgL_test2588z00_4950)
										{	/* BackEnd/c_proto.scm 162 */
											BgL_arg2050z00_3611 =
												BGl_emitzd2prototypezd2formalzd2typeszd2zzbackend_c_prototypez00
												(BgL_argsz00_3612);
										}
									else
										{	/* BackEnd/c_proto.scm 162 */
											BgL_arg2050z00_3611 =
												BGl_emitzd2prototypezd2formalsz00zzbackend_c_prototypez00
												(BgL_argsz00_3612);
										}
								}
							}
							BgL_arg2048z00_3609 =
								string_append(BgL_arg2049z00_3610, BgL_arg2050z00_3611);
						}
						BgL_arg2046z00_3607 =
							BGl_makezd2typedzd2declarationz00zztype_toolsz00
							(BgL_arg2047z00_3608, BgL_arg2048z00_3609);
					}
					bgl_display_obj(BgL_arg2046z00_3607, BgL_port1356z00_3605);
				}
				{	/* BackEnd/c_proto.scm 154 */
					obj_t BgL_tmpz00_4960;

					BgL_tmpz00_4960 = ((obj_t) BgL_port1356z00_3605);
					bgl_display_string(BGl_string2357z00zzbackend_c_prototypez00,
						BgL_tmpz00_4960);
				}
				{	/* BackEnd/c_proto.scm 154 */
					obj_t BgL_tmpz00_4963;

					BgL_tmpz00_4963 = ((obj_t) BgL_port1356z00_3605);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4963);
		}}}

	}



/* &emit-prototype-scnst1401 */
	obj_t BGl_z62emitzd2prototypezd2scnst1401z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3551, obj_t BgL_valuez00_3552, obj_t BgL_variablez00_3553)
	{
		{	/* BackEnd/c_proto.scm 116 */
			return
				BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(
				((BgL_valuez00_bglt)
					((BgL_scnstz00_bglt) BgL_valuez00_3552)), BgL_variablez00_3553);
		}

	}



/* &emit-prototype-svar1399 */
	obj_t BGl_z62emitzd2prototypezd2svar1399z62zzbackend_c_prototypez00(obj_t
		BgL_envz00_3554, obj_t BgL_valuez00_3555, obj_t BgL_variablez00_3556)
	{
		{	/* BackEnd/c_proto.scm 110 */
			return
				BGl_emitzd2prototypezf2svarzf2scnstzd2zzbackend_c_prototypez00(
				((BgL_valuez00_bglt)
					((BgL_svarz00_bglt) BgL_valuez00_3555)), BgL_variablez00_3556);
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_prototypez00()
	{
		{	/* BackEnd/c_proto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzast_pragmaz00(((long) 156774029),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zztvector_cnstz00(((long) 263487743),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 371489783),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string2396z00zzbackend_c_prototypez00));
		}

	}

#ifdef __cplusplus
}
#endif
