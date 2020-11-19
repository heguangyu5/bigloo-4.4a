/*===========================================================================*/
/*   (BackEnd/c.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c.scm) */
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

	typedef struct BgL_sawcz00_bgl
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
	}              *BgL_sawcz00_bglt;

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzbackend_cz00(obj_t);
	extern obj_t BGl_indentz00zzcc_indentz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_ldz00zzcc_ldz00(obj_t, bool_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	extern obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	static obj_t BGl_objectzd2initzd2zzbackend_cz00();
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzbackend_cz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_emitzd2includezd2zzbackend_c_emitz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(obj_t,
		obj_t);
	extern obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzbackend_cz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2cnstzd2tablezd2n1543zb0zzbackend_cz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_cz00();
	static obj_t BGl_z62backendzd2compilezd2cvm1539z62zzbackend_cz00(obj_t,
		obj_t);
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	extern obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
	extern obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_findzd2mainzd2zzengine_linkz00(obj_t);
	static obj_t BGl_z62backendzd2subtypezf3zd2cvm1547z91zzbackend_cz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62buildzd2sawczd2backendz62zzbackend_cz00(obj_t);
	static obj_t BGl_z62backendzd2linkzd2cvm1541z62zzbackend_cz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62buildzd2cgenzd2backendz62zzbackend_cz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31613ze3ze5zzbackend_cz00(obj_t);
	extern obj_t BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(obj_t, obj_t);
	static obj_t BGl_z62cczd2compilerzb0zzbackend_cz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt, obj_t);
	BGL_IMPORT bool_t fexists(char *);
	extern obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00;
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31633ze3ze5zzbackend_cz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_cz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2
		(BgL_globalz00_bglt);
	extern obj_t BGl_sawcz00zzbackend_cvmz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2sawczd2backendz00zzbackend_cz00();
	extern obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t, obj_t);
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	extern obj_t BGl_za2dlopenzd2initza2zd2zzengine_paramz00;
	extern obj_t BGl_za2czd2userzd2headerza2z00zzengine_paramz00;
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_buildzd2cgenzd2backendz00zzbackend_cz00();
	static obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzbackend_cz00(obj_t);
	BGL_IMPORT obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_findzd2librarieszd2zzengine_linkz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cz00 = BUNSPEC;
	static bool_t BGl_z62zc3z04anonymousza31839ze3ze5zzbackend_cz00(obj_t, obj_t);
	extern obj_t BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00;
	extern obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzbackend_cz00(obj_t);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	extern obj_t BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(obj_t);
	extern obj_t BGl_za2czd2userzd2footza2z00zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzbackend_cz00();
	extern obj_t BGl_za2bigloozd2tmpza2zd2zzengine_paramz00;
	extern obj_t BGl_cgenz00zzbackend_cvmz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzbackend_cz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_cz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_gczd2rootszd2emitz00zzcc_rootsz00(obj_t);
	static obj_t BGl_z62backendzd2gczd2initzd2cvm1549zb0zzbackend_cz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00();
	extern obj_t BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
	extern obj_t BGl_makezd2tmpzd2mainz00zzengine_linkz00(obj_t, bool_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_czd2walkzd2zzbackend_cz00(BgL_cvmz00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_z62backendzd2linkzd2objects1545z62zzbackend_cz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	BGL_IMPORT obj_t BGl_expandz00zz__expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_rootsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	extern obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	extern obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
	static obj_t BGl_cnstzd2initzd2zzbackend_cz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cz00();
	extern obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cz00();
	extern obj_t BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00;
	extern obj_t BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
	static obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzbackend_cz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_ccz00zzcc_ccz00(obj_t, obj_t, bool_t);
	extern obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	extern obj_t BGl_cvmz00zzbackend_cvmz00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t __cnst[21];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2058z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2102za7,
		BGl_z62zc3z04anonymousza31613ze3ze5zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2064z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2103za7,
		BGl_z62zc3z04anonymousza31627ze3ze5zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2065z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2104za7,
		BGl_z62zc3z04anonymousza31633ze3ze5zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2068z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2105za7,
		BGl_z62zc3z04anonymousza31748ze3ze5zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2074z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2com2106z00,
		BGl_z62backendzd2compilezd2cvm1539z62zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2076z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2lin2107z00,
		BGl_z62backendzd2linkzd2cvm1541z62zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2078z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2cns2108z00,
		BGl_z62backendzd2cnstzd2tablezd2n1543zb0zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2080z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2lin2109z00,
		BGl_z62backendzd2linkzd2objects1545z62zzbackend_cz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2082z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2sub2110z00,
		BGl_z62backendzd2subtypezf3zd2cvm1547z91zzbackend_cz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2084z00zzbackend_cz00,
		BgL_bgl_za762backendza7d2gcza72111za7,
		BGl_z62backendzd2gczd2initzd2cvm1549zb0zzbackend_cz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2094z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2112za7,
		BGl_z62zc3z04anonymousza31779ze3ze5zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2095z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2113za7,
		BGl_z62zc3z04anonymousza31783ze3ze5zzbackend_cz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2096z00zzbackend_cz00,
		BgL_bgl_za762za7c3za704anonymo2114za7,
		BGl_z62zc3z04anonymousza31791ze3ze5zzbackend_cz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string2053z00zzbackend_cz00,
		BgL_bgl_string2053za700za7za7b2115za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2054z00zzbackend_cz00,
		BgL_bgl_string2054za700za7za7b2116za7, "heap", 4);
	      DEFINE_STRING(BGl_string2055z00zzbackend_cz00,
		BgL_bgl_string2055za700za7za7b2117za7, "C generation (saw)", 18);
	      DEFINE_STRING(BGl_string2056z00zzbackend_cz00,
		BgL_bgl_string2056za700za7za7b2118za7, "C generation (cgen)", 19);
	      DEFINE_STRING(BGl_string2057z00zzbackend_cz00,
		BgL_bgl_string2057za700za7za7b2119za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2059z00zzbackend_cz00,
		BgL_bgl_string2059za700za7za7b2120za7, "failure during prelude hook", 27);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cczd2compilerzd2envz00zzbackend_cz00,
		BgL_bgl_za762ccza7d2compiler2121z00, BGl_z62cczd2compilerzb0zzbackend_cz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2060z00zzbackend_cz00,
		BgL_bgl_string2060za700za7za7b2122za7, "/* User header */", 17);
	      DEFINE_STRING(BGl_string2061z00zzbackend_cz00,
		BgL_bgl_string2061za700za7za7b2123za7, "#ifdef __cplusplus", 18);
	      DEFINE_STRING(BGl_string2062z00zzbackend_cz00,
		BgL_bgl_string2062za700za7za7b2124za7, "extern \"C\" {", 12);
	      DEFINE_STRING(BGl_string2063z00zzbackend_cz00,
		BgL_bgl_string2063za700za7za7b2125za7, "#endif", 6);
	      DEFINE_STRING(BGl_string2066z00zzbackend_cz00,
		BgL_bgl_string2066za700za7za7b2126za7, "}", 1);
	      DEFINE_STRING(BGl_string2067z00zzbackend_cz00,
		BgL_bgl_string2067za700za7za7b2127za7, ".c", 2);
	      DEFINE_STRING(BGl_string2069z00zzbackend_cz00,
		BgL_bgl_string2069za700za7za7b2128za7, "USER", 4);
	      DEFINE_STRING(BGl_string2070z00zzbackend_cz00,
		BgL_bgl_string2070za700za7za7b2129za7, "", 0);
	      DEFINE_STRING(BGl_string2071z00zzbackend_cz00,
		BgL_bgl_string2071za700za7za7b2130za7, ".", 1);
	      DEFINE_STRING(BGl_string2072z00zzbackend_cz00,
		BgL_bgl_string2072za700za7za7b2131za7, "@", 1);
	      DEFINE_STRING(BGl_string2073z00zzbackend_cz00,
		BgL_bgl_string2073za700za7za7b2132za7, "main-tmp", 8);
	      DEFINE_STRING(BGl_string2075z00zzbackend_cz00,
		BgL_bgl_string2075za700za7za7b2133za7, "backend-compile", 15);
	      DEFINE_STRING(BGl_string2077z00zzbackend_cz00,
		BgL_bgl_string2077za700za7za7b2134za7, "backend-link", 12);
	      DEFINE_STRING(BGl_string2079z00zzbackend_cz00,
		BgL_bgl_string2079za700za7za7b2135za7, "backend-cnst-table-name", 23);
	      DEFINE_STRING(BGl_string2081z00zzbackend_cz00,
		BgL_bgl_string2081za700za7za7b2136za7, "backend-link-objects", 20);
	      DEFINE_STRING(BGl_string2083z00zzbackend_cz00,
		BgL_bgl_string2083za700za7za7b2137za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string2085z00zzbackend_cz00,
		BgL_bgl_string2085za700za7za7b2138za7, "backend-gc-init", 15);
	      DEFINE_STRING(BGl_string2086z00zzbackend_cz00,
		BgL_bgl_string2086za700za7za7b2139za7, " -- ", 4);
	      DEFINE_STRING(BGl_string2087z00zzbackend_cz00,
		BgL_bgl_string2087za700za7za7b2140za7, "No source file found", 20);
	      DEFINE_STRING(BGl_string2088z00zzbackend_cz00,
		BgL_bgl_string2088za700za7za7b2141za7, "link", 4);
	      DEFINE_STRING(BGl_string2089z00zzbackend_cz00,
		BgL_bgl_string2089za700za7za7b2142za7, "\"", 1);
	      DEFINE_STRING(BGl_string2090z00zzbackend_cz00,
		BgL_bgl_string2090za700za7za7b2143za7, "Illegal file", 12);
	      DEFINE_STRING(BGl_string2091z00zzbackend_cz00,
		BgL_bgl_string2091za700za7za7b2144za7, "*__cnst", 7);
	      DEFINE_STRING(BGl_string2092z00zzbackend_cz00,
		BgL_bgl_string2092za700za7za7b2145za7, "__cnst[ ", 8);
	      DEFINE_STRING(BGl_string2093z00zzbackend_cz00,
		BgL_bgl_string2093za700za7za7b2146za7, " ] ", 3);
	      DEFINE_STRING(BGl_string2097z00zzbackend_cz00,
		BgL_bgl_string2097za700za7za7b2147za7, "backend_c", 9);
	      DEFINE_STRING(BGl_string2098z00zzbackend_cz00,
		BgL_bgl_string2098za700za7za7b2148za7,
		"cindent distrib cgen module eval library so (pragma \"BGL_GC_INIT()\") done cc have-dlopen imported (ld distrib) pass-started ((lambda () (start-emission! \".c\"))) native (c bdb module) (foreign extern) bigloo-c c-saw c ",
		217);
	extern obj_t BGl_backendzd2compilezd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2envz00zzbackend_backendz00;
	extern obj_t BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2cgenzd2backendzd2envzd2zzbackend_cz00,
		BgL_bgl_za762buildza7d2cgenza72149za7,
		BGl_z62buildzd2cgenzd2backendz62zzbackend_cz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2sawczd2backendzd2envzd2zzbackend_cz00,
		BgL_bgl_za762buildza7d2sawcza72150za7,
		BGl_z62buildzd2sawczd2backendz62zzbackend_cz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_backendzd2gczd2initzd2envzd2zzbackend_backendz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_cz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long
		BgL_checksumz00_3279, char *BgL_fromz00_3280)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_cz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_cz00();
					BGl_cnstzd2initzd2zzbackend_cz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cz00();
					BGl_methodzd2initzd2zzbackend_cz00();
					return BGl_toplevelzd2initzd2zzbackend_cz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "backend_c");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_c");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "backend_c");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			{	/* BackEnd/c.scm 15 */
				obj_t BgL_cportz00_3149;

				{	/* BackEnd/c.scm 15 */
					obj_t BgL_stringz00_3157;

					BgL_stringz00_3157 = BGl_string2098z00zzbackend_cz00;
					{	/* BackEnd/c.scm 15 */
						obj_t BgL_startz00_3158;

						BgL_startz00_3158 = BINT(((long) 0));
						{	/* BackEnd/c.scm 15 */
							obj_t BgL_endz00_3159;

							BgL_endz00_3159 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3157)));
							{	/* BackEnd/c.scm 15 */

								BgL_cportz00_3149 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3157, BgL_startz00_3158, BgL_endz00_3159);
				}}}}
				{
					long BgL_iz00_3150;

					BgL_iz00_3150 = ((long) 20);
				BgL_loopz00_3151:
					if ((BgL_iz00_3150 == ((long) -1)))
						{	/* BackEnd/c.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c.scm 15 */
							{	/* BackEnd/c.scm 15 */
								obj_t BgL_arg2100z00_3153;

								{	/* BackEnd/c.scm 15 */

									{	/* BackEnd/c.scm 15 */
										obj_t BgL_locationz00_3155;

										BgL_locationz00_3155 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c.scm 15 */

											BgL_arg2100z00_3153 =
												BGl_readz00zz__readerz00(BgL_cportz00_3149,
												BgL_locationz00_3155);
										}
									}
								}
								{	/* BackEnd/c.scm 15 */
									int BgL_tmpz00_3314;

									BgL_tmpz00_3314 = (int) (BgL_iz00_3150);
									CNST_TABLE_SET(BgL_tmpz00_3314, BgL_arg2100z00_3153);
							}}
							{	/* BackEnd/c.scm 15 */
								int BgL_auxz00_3156;

								BgL_auxz00_3156 = (int) ((BgL_iz00_3150 - ((long) 1)));
								{
									long BgL_iz00_3319;

									BgL_iz00_3319 = (long) (BgL_auxz00_3156);
									BgL_iz00_3150 = BgL_iz00_3319;
									goto BgL_loopz00_3151;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						0)), BGl_buildzd2cgenzd2backendzd2envzd2zzbackend_cz00);
			BGl_registerzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long)
						1)), BGl_buildzd2sawczd2backendzd2envzd2zzbackend_cz00);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzbackend_cz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2029;

				BgL_headz00_2029 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2030;
					obj_t BgL_tailz00_2031;

					BgL_prevz00_2030 = BgL_headz00_2029;
					BgL_tailz00_2031 = BgL_l1z00_1;
				BgL_loopz00_2032:
					if (PAIRP(BgL_tailz00_2031))
						{
							obj_t BgL_newzd2prevzd2_2034;

							BgL_newzd2prevzd2_2034 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2031), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2030, BgL_newzd2prevzd2_2034);
							{
								obj_t BgL_tailz00_3333;
								obj_t BgL_prevz00_3332;

								BgL_prevz00_3332 = BgL_newzd2prevzd2_2034;
								BgL_tailz00_3333 = CDR(BgL_tailz00_2031);
								BgL_tailz00_2031 = BgL_tailz00_3333;
								BgL_prevz00_2030 = BgL_prevz00_3332;
								goto BgL_loopz00_2032;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2029);
				}
			}
		}

	}



/* build-sawc-backend */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2sawczd2backendz00zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 75 */
			{	/* BackEnd/c.scm 76 */
				BgL_sawcz00_bglt BgL_new1121z00_2051;

				{	/* BackEnd/c.scm 77 */
					BgL_sawcz00_bglt BgL_new1120z00_2053;

					BgL_new1120z00_2053 =
						((BgL_sawcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sawcz00_bgl))));
					{	/* BackEnd/c.scm 77 */
						long BgL_arg1578z00_2054;

						{	/* BackEnd/c.scm 77 */
							long BgL_res1984z00_2870;

							BgL_res1984z00_2870 =
								BGL_CLASS_INDEX(BGl_sawcz00zzbackend_cvmz00);
							BgL_arg1578z00_2054 = BgL_res1984z00_2870;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1120z00_2053), BgL_arg1578z00_2054);
					}
					BgL_new1121z00_2051 = BgL_new1120z00_2053;
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1121z00_2051)))->
						BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_namez00) =
					((obj_t) BGl_string2053z00zzbackend_cz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_externzd2variableszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_externzd2functionszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_externzd2typeszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_variablesz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_functionsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_typesz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string2054z00zzbackend_cz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_callccz00) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_debugzd2supportzd2) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1121z00_2051)))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				{	/* BackEnd/c.scm 76 */
					obj_t BgL_fun1576z00_2052;

					BgL_fun1576z00_2052 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_sawcz00zzbackend_cvmz00);
					PROCEDURE_ENTRY(BgL_fun1576z00_2052) (BgL_fun1576z00_2052,
						((obj_t) BgL_new1121z00_2051), BEOA);
				}
				return ((obj_t) BgL_new1121z00_2051);
			}
		}

	}



/* &build-sawc-backend */
	obj_t BGl_z62buildzd2sawczd2backendz62zzbackend_cz00(obj_t BgL_envz00_3082)
	{
		{	/* BackEnd/c.scm 75 */
			return BGl_buildzd2sawczd2backendz00zzbackend_cz00();
		}

	}



/* build-cgen-backend */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2cgenzd2backendz00zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 86 */
			{	/* BackEnd/c.scm 87 */
				BgL_cgenz00_bglt BgL_new1123z00_2055;

				{	/* BackEnd/c.scm 88 */
					BgL_cgenz00_bglt BgL_new1122z00_2057;

					BgL_new1122z00_2057 =
						((BgL_cgenz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cgenz00_bgl))));
					{	/* BackEnd/c.scm 88 */
						long BgL_arg1582z00_2058;

						{	/* BackEnd/c.scm 88 */
							long BgL_res1985z00_2874;

							BgL_res1985z00_2874 =
								BGL_CLASS_INDEX(BGl_cgenz00zzbackend_cvmz00);
							BgL_arg1582z00_2058 = BgL_res1985z00_2874;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1122z00_2057), BgL_arg1582z00_2058);
					}
					BgL_new1123z00_2055 = BgL_new1122z00_2057;
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1123z00_2055)))->
						BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_namez00) =
					((obj_t) BGl_string2053z00zzbackend_cz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_externzd2variableszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_externzd2functionszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_externzd2typeszd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_variablesz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_functionsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_typesz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string2054z00zzbackend_cz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_callccz00) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_debugzd2supportzd2) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1123z00_2055)))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				{	/* BackEnd/c.scm 87 */
					obj_t BgL_fun1580z00_2056;

					BgL_fun1580z00_2056 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_cgenz00zzbackend_cvmz00);
					PROCEDURE_ENTRY(BgL_fun1580z00_2056) (BgL_fun1580z00_2056,
						((obj_t) BgL_new1123z00_2055), BEOA);
				}
				return ((obj_t) BgL_new1123z00_2055);
			}
		}

	}



/* &build-cgen-backend */
	obj_t BGl_z62buildzd2cgenzd2backendz62zzbackend_cz00(obj_t BgL_envz00_3081)
	{
		{	/* BackEnd/c.scm 86 */
			return BGl_buildzd2cgenzd2backendz00zzbackend_cz00();
		}

	}



/* c-walk */
	obj_t BGl_czd2walkzd2zzbackend_cz00(BgL_cvmz00_bglt BgL_mez00_28)
	{
		{	/* BackEnd/c.scm 113 */
			{	/* BackEnd/c.scm 114 */
				obj_t BgL_arg1584z00_2059;

				{	/* BackEnd/c.scm 114 */
					bool_t BgL_test2154z00_3486;

					{	/* BackEnd/c.scm 114 */
						bool_t BgL_res1986z00_2877;

						BgL_res1986z00_2877 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_mez00_28), BGl_sawcz00zzbackend_cvmz00);
						BgL_test2154z00_3486 = BgL_res1986z00_2877;
					}
					if (BgL_test2154z00_3486)
						{	/* BackEnd/c.scm 114 */
							BgL_arg1584z00_2059 = BGl_string2055z00zzbackend_cz00;
						}
					else
						{	/* BackEnd/c.scm 114 */
							BgL_arg1584z00_2059 = BGl_string2056z00zzbackend_cz00;
						}
				}
				{	/* BackEnd/c.scm 114 */
					obj_t BgL_list1585z00_2060;

					{	/* BackEnd/c.scm 114 */
						obj_t BgL_arg1588z00_2061;

						{	/* BackEnd/c.scm 114 */
							obj_t BgL_arg1589z00_2062;

							BgL_arg1589z00_2062 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1588z00_2061 =
								MAKE_YOUNG_PAIR(BgL_arg1584z00_2059, BgL_arg1589z00_2062);
						}
						BgL_list1585z00_2060 =
							MAKE_YOUNG_PAIR(BGl_string2057z00zzbackend_cz00,
							BgL_arg1588z00_2061);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
						BgL_list1585z00_2060);
			}}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			{	/* BackEnd/c.scm 114 */
				bool_t BgL_test2155z00_3496;

				{	/* BackEnd/c.scm 114 */
					bool_t BgL_res1987z00_2878;

					BgL_res1987z00_2878 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_mez00_28), BGl_sawcz00zzbackend_cvmz00);
					BgL_test2155z00_3496 = BgL_res1987z00_2878;
				}
				if (BgL_test2155z00_3496)
					{	/* BackEnd/c.scm 114 */
						BGl_za2currentzd2passza2zd2zzengine_passz00 =
							BGl_string2055z00zzbackend_cz00;
					}
				else
					{	/* BackEnd/c.scm 114 */
						BGl_za2currentzd2passza2zd2zzengine_passz00 =
							BGl_string2056z00zzbackend_cz00;
					}
			}
			{	/* BackEnd/c.scm 114 */
				obj_t BgL_g1124z00_2065;
				obj_t BgL_g1125z00_2066;

				{	/* BackEnd/c.scm 114 */
					obj_t BgL_list1612z00_2082;

					BgL_list1612z00_2082 =
						MAKE_YOUNG_PAIR(BGl_proc2058z00zzbackend_cz00, BNIL);
					BgL_g1124z00_2065 = BgL_list1612z00_2082;
				}
				BgL_g1125z00_2066 = CNST_TABLE_REF(((long) 6));
				{
					obj_t BgL_hooksz00_2068;
					obj_t BgL_hnamesz00_2069;

					BgL_hooksz00_2068 = BgL_g1124z00_2065;
					BgL_hnamesz00_2069 = BgL_g1125z00_2066;
				BgL_zc3z04anonymousza31592ze3z87_2070:
					if (NULLP(BgL_hooksz00_2068))
						{	/* BackEnd/c.scm 114 */
							CNST_TABLE_REF(((long) 7));
						}
					else
						{	/* BackEnd/c.scm 114 */
							bool_t BgL_test2157z00_3504;

							{	/* BackEnd/c.scm 114 */
								obj_t BgL_fun1608z00_2079;

								BgL_fun1608z00_2079 = CAR(((obj_t) BgL_hooksz00_2068));
								BgL_test2157z00_3504 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1608z00_2079)
									(BgL_fun1608z00_2079, BEOA));
							}
							if (BgL_test2157z00_3504)
								{	/* BackEnd/c.scm 114 */
									obj_t BgL_arg1597z00_2074;
									obj_t BgL_arg1599z00_2075;

									BgL_arg1597z00_2074 = CDR(((obj_t) BgL_hooksz00_2068));
									BgL_arg1599z00_2075 = CDR(((obj_t) BgL_hnamesz00_2069));
									{
										obj_t BgL_hnamesz00_3516;
										obj_t BgL_hooksz00_3515;

										BgL_hooksz00_3515 = BgL_arg1597z00_2074;
										BgL_hnamesz00_3516 = BgL_arg1599z00_2075;
										BgL_hnamesz00_2069 = BgL_hnamesz00_3516;
										BgL_hooksz00_2068 = BgL_hooksz00_3515;
										goto BgL_zc3z04anonymousza31592ze3z87_2070;
									}
								}
							else
								{	/* BackEnd/c.scm 114 */
									obj_t BgL_arg1604z00_2076;
									obj_t BgL_arg1605z00_2077;

									{	/* BackEnd/c.scm 114 */
										bool_t BgL_test2158z00_3517;

										{	/* BackEnd/c.scm 114 */
											bool_t BgL_res1990z00_2884;

											BgL_res1990z00_2884 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_mez00_28), BGl_sawcz00zzbackend_cvmz00);
											BgL_test2158z00_3517 = BgL_res1990z00_2884;
										}
										if (BgL_test2158z00_3517)
											{	/* BackEnd/c.scm 114 */
												BgL_arg1604z00_2076 = BGl_string2055z00zzbackend_cz00;
											}
										else
											{	/* BackEnd/c.scm 114 */
												BgL_arg1604z00_2076 = BGl_string2056z00zzbackend_cz00;
											}
									}
									BgL_arg1605z00_2077 = CAR(((obj_t) BgL_hnamesz00_2069));
									BGl_internalzd2errorzd2zztools_errorz00(BgL_arg1604z00_2076,
										BGl_string2059z00zzbackend_cz00, BgL_arg1605z00_2077);
								}
						}
				}
			}
			BGl_emitzd2headerzd2zzbackend_c_emitz00();
			BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
			{	/* BackEnd/c.scm 124 */
				bool_t BgL_test2159z00_3525;

				if (
					((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
						((long) 0)))
					{	/* BackEnd/c.scm 124 */
						BgL_test2159z00_3525 = ((bool_t) 1);
					}
				else
					{	/* BackEnd/c.scm 124 */
						BgL_test2159z00_3525 =
							CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00);
					}
				if (BgL_test2159z00_3525)
					{	/* BackEnd/c.scm 124 */
						BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
					}
				else
					{	/* BackEnd/c.scm 124 */
						BFALSE;
					}
			}
			BGl_emitzd2includezd2zzbackend_c_emitz00();
			if (PAIRP(BGl_za2czd2userzd2headerza2z00zzengine_paramz00))
				{	/* BackEnd/c.scm 131 */
					{	/* BackEnd/c.scm 132 */
						obj_t BgL_port1496z00_2089;

						BgL_port1496z00_2089 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						{	/* BackEnd/c.scm 132 */
							obj_t BgL_tmpz00_3534;

							BgL_tmpz00_3534 = ((obj_t) BgL_port1496z00_2089);
							bgl_display_string(BGl_string2060z00zzbackend_cz00,
								BgL_tmpz00_3534);
						}
						{	/* BackEnd/c.scm 132 */
							obj_t BgL_tmpz00_3537;

							BgL_tmpz00_3537 = ((obj_t) BgL_port1496z00_2089);
							bgl_display_char(((unsigned char) 10), BgL_tmpz00_3537);
					}}
					{
						obj_t BgL_l1498z00_2091;

						BgL_l1498z00_2091 = BGl_za2czd2userzd2headerza2z00zzengine_paramz00;
					BgL_zc3z04anonymousza31617ze3z87_2092:
						if (PAIRP(BgL_l1498z00_2091))
							{	/* BackEnd/c.scm 133 */
								{	/* BackEnd/c.scm 133 */
									obj_t BgL_hz00_2094;

									BgL_hz00_2094 = CAR(BgL_l1498z00_2091);
									{	/* BackEnd/c.scm 133 */
										obj_t BgL_port1497z00_2095;

										BgL_port1497z00_2095 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										bgl_display_obj(BgL_hz00_2094, BgL_port1497z00_2095);
										{	/* BackEnd/c.scm 133 */
											obj_t BgL_tmpz00_3544;

											BgL_tmpz00_3544 = ((obj_t) BgL_port1497z00_2095);
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_3544);
								}}}
								{
									obj_t BgL_l1498z00_3547;

									BgL_l1498z00_3547 = CDR(BgL_l1498z00_2091);
									BgL_l1498z00_2091 = BgL_l1498z00_3547;
									goto BgL_zc3z04anonymousza31617ze3z87_2092;
								}
							}
						else
							{	/* BackEnd/c.scm 133 */
								((bool_t) 1);
							}
					}
				}
			else
				{	/* BackEnd/c.scm 131 */
					((bool_t) 0);
				}
			{	/* BackEnd/c.scm 136 */
				obj_t BgL_port1500z00_2098;

				BgL_port1500z00_2098 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c.scm 136 */
					obj_t BgL_tmpz00_3549;

					BgL_tmpz00_3549 = ((obj_t) BgL_port1500z00_2098);
					bgl_display_string(BGl_string2061z00zzbackend_cz00, BgL_tmpz00_3549);
				}
				{	/* BackEnd/c.scm 136 */
					obj_t BgL_tmpz00_3552;

					BgL_tmpz00_3552 = ((obj_t) BgL_port1500z00_2098);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3552);
			}}
			{	/* BackEnd/c.scm 137 */
				obj_t BgL_port1501z00_2099;

				BgL_port1501z00_2099 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c.scm 137 */
					obj_t BgL_tmpz00_3555;

					BgL_tmpz00_3555 = ((obj_t) BgL_port1501z00_2099);
					bgl_display_string(BGl_string2062z00zzbackend_cz00, BgL_tmpz00_3555);
				}
				{	/* BackEnd/c.scm 137 */
					obj_t BgL_tmpz00_3558;

					BgL_tmpz00_3558 = ((obj_t) BgL_port1501z00_2099);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3558);
			}}
			{	/* BackEnd/c.scm 138 */
				obj_t BgL_port1502z00_2100;

				BgL_port1502z00_2100 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c.scm 138 */
					obj_t BgL_tmpz00_3561;

					BgL_tmpz00_3561 = ((obj_t) BgL_port1502z00_2100);
					bgl_display_string(BGl_string2063z00zzbackend_cz00, BgL_tmpz00_3561);
				}
				{	/* BackEnd/c.scm 138 */
					obj_t BgL_tmpz00_3564;

					BgL_tmpz00_3564 = ((obj_t) BgL_port1502z00_2100);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3564);
			}}
			BGl_forzd2eachzd2typez12z12zztype_envz00(BGl_proc2064z00zzbackend_cz00);
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc2065z00zzbackend_cz00,
				BNIL);
			{	/* BackEnd/c.scm 160 */
				bool_t BgL_fixpointz00_2135;

				BgL_fixpointz00_2135 = ((bool_t) 0);
				{

					if (BgL_fixpointz00_2135)
						{	/* BackEnd/c.scm 162 */
							((bool_t) 0);
						}
					else
						{	/* BackEnd/c.scm 162 */
							BgL_fixpointz00_2135 = ((bool_t) 1);
							{	/* BackEnd/c.scm 164 */
								obj_t BgL_g1511z00_2138;

								BgL_g1511z00_2138 =
									BGl_getzd2classzd2listz00zzobject_classz00();
								{
									obj_t BgL_l1509z00_2140;

									BgL_l1509z00_2140 = BgL_g1511z00_2138;
								BgL_zc3z04anonymousza31674ze3z87_2141:
									if (PAIRP(BgL_l1509z00_2140))
										{	/* BackEnd/c.scm 173 */
											{	/* BackEnd/c.scm 165 */
												BgL_typez00_bglt BgL_tz00_2143;

												BgL_tz00_2143 =
													((BgL_typez00_bglt) CAR(BgL_l1509z00_2140));
												if (
													((long) (
															(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt) BgL_tz00_2143)))->
																BgL_occurrencez00)) > ((long) 0)))
													{	/* BackEnd/c.scm 167 */
														obj_t BgL_g1508z00_2147;

														{
															BgL_tclassz00_bglt BgL_auxz00_3580;

															{
																obj_t BgL_auxz00_3581;

																{	/* BackEnd/c.scm 167 */
																	BgL_objectz00_bglt BgL_tmpz00_3582;

																	BgL_tmpz00_3582 =
																		((BgL_objectz00_bglt) BgL_tz00_2143);
																	BgL_auxz00_3581 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3582);
																}
																BgL_auxz00_3580 =
																	((BgL_tclassz00_bglt) BgL_auxz00_3581);
															}
															BgL_g1508z00_2147 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_3580))->BgL_slotsz00);
														}
														{
															obj_t BgL_l1506z00_2149;

															BgL_l1506z00_2149 = BgL_g1508z00_2147;
														BgL_zc3z04anonymousza31686ze3z87_2150:
															if (PAIRP(BgL_l1506z00_2149))
																{	/* BackEnd/c.scm 167 */
																	{	/* BackEnd/c.scm 168 */
																		BgL_slotz00_bglt BgL_tz00_2152;

																		BgL_tz00_2152 =
																			((BgL_slotz00_bglt)
																			CAR(BgL_l1506z00_2149));
																		if (
																			((long) (
																					(((BgL_typez00_bglt) COBJECT(
																								((BgL_typez00_bglt)
																									(((BgL_slotz00_bglt)
																											COBJECT(BgL_tz00_2152))->
																										BgL_typez00))))->
																						BgL_occurrencez00)) == ((long) 0)))
																			{	/* BackEnd/c.scm 169 */
																				{	/* BackEnd/c.scm 170 */
																					obj_t BgL_arg1695z00_2157;

																					BgL_arg1695z00_2157 =
																						(((BgL_slotz00_bglt)
																							COBJECT(BgL_tz00_2152))->
																						BgL_typez00);
																					BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																						(((BgL_typez00_bglt)
																							BgL_arg1695z00_2157));
																				}
																				BgL_fixpointz00_2135 = ((bool_t) 0);
																			}
																		else
																			{	/* BackEnd/c.scm 169 */
																				BFALSE;
																			}
																	}
																	{
																		obj_t BgL_l1506z00_3600;

																		BgL_l1506z00_3600 = CDR(BgL_l1506z00_2149);
																		BgL_l1506z00_2149 = BgL_l1506z00_3600;
																		goto BgL_zc3z04anonymousza31686ze3z87_2150;
																	}
																}
															else
																{	/* BackEnd/c.scm 167 */
																	((bool_t) 1);
																}
														}
													}
												else
													{	/* BackEnd/c.scm 165 */
														((bool_t) 0);
													}
											}
											{
												obj_t BgL_l1509z00_3602;

												BgL_l1509z00_3602 = CDR(BgL_l1509z00_2140);
												BgL_l1509z00_2140 = BgL_l1509z00_3602;
												goto BgL_zc3z04anonymousza31674ze3z87_2141;
											}
										}
									else
										{	/* BackEnd/c.scm 173 */
											((bool_t) 1);
										}
								}
							}
						}
				}
			}
			{	/* BackEnd/c.scm 174 */
				obj_t BgL_classesz00_2166;

				{	/* BackEnd/c.scm 174 */
					obj_t BgL_hook1516z00_2167;

					BgL_hook1516z00_2167 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* BackEnd/c.scm 176 */
						obj_t BgL_g1517z00_2168;

						BgL_g1517z00_2168 = BGl_getzd2classzd2listz00zzobject_classz00();
						{
							obj_t BgL_l1513z00_2170;
							obj_t BgL_h1514z00_2171;

							BgL_l1513z00_2170 = BgL_g1517z00_2168;
							BgL_h1514z00_2171 = BgL_hook1516z00_2167;
						BgL_zc3z04anonymousza31709ze3z87_2172:
							if (NULLP(BgL_l1513z00_2170))
								{	/* BackEnd/c.scm 176 */
									BgL_classesz00_2166 = CDR(BgL_hook1516z00_2167);
								}
							else
								{	/* BackEnd/c.scm 176 */
									if (
										((long) (
												(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt)
																CAR(
																	((obj_t) BgL_l1513z00_2170)))))->
													BgL_occurrencez00)) > ((long) 0)))
										{	/* BackEnd/c.scm 176 */
											obj_t BgL_nh1515z00_2177;

											{	/* BackEnd/c.scm 176 */
												obj_t BgL_arg1725z00_2179;

												BgL_arg1725z00_2179 = CAR(((obj_t) BgL_l1513z00_2170));
												{	/* BackEnd/c.scm 176 */
													obj_t BgL_res2005z00_2942;

													BgL_res2005z00_2942 =
														MAKE_YOUNG_PAIR(BgL_arg1725z00_2179, BNIL);
													BgL_nh1515z00_2177 = BgL_res2005z00_2942;
											}}
											SET_CDR(BgL_h1514z00_2171, BgL_nh1515z00_2177);
											{	/* BackEnd/c.scm 176 */
												obj_t BgL_arg1719z00_2178;

												BgL_arg1719z00_2178 = CDR(((obj_t) BgL_l1513z00_2170));
												{
													obj_t BgL_h1514z00_3623;
													obj_t BgL_l1513z00_3622;

													BgL_l1513z00_3622 = BgL_arg1719z00_2178;
													BgL_h1514z00_3623 = BgL_nh1515z00_2177;
													BgL_h1514z00_2171 = BgL_h1514z00_3623;
													BgL_l1513z00_2170 = BgL_l1513z00_3622;
													goto BgL_zc3z04anonymousza31709ze3z87_2172;
												}
											}
										}
									else
										{	/* BackEnd/c.scm 176 */
											obj_t BgL_arg1726z00_2180;

											BgL_arg1726z00_2180 = CDR(((obj_t) BgL_l1513z00_2170));
											{
												obj_t BgL_l1513z00_3626;

												BgL_l1513z00_3626 = BgL_arg1726z00_2180;
												BgL_l1513z00_2170 = BgL_l1513z00_3626;
												goto BgL_zc3z04anonymousza31709ze3z87_2172;
											}
										}
								}
						}
					}
				}
				BGl_emitzd2classzd2typesz00zzbackend_c_prototypez00(BgL_classesz00_2166,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			BGl_emitzd2prototypeszd2zzbackend_c_prototypez00();
			BGl_emitzd2cnstszd2zzbackend_c_prototypez00();
			if (CBOOL(BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00))
				{	/* BackEnd/c.scm 186 */
					BGl_gczd2rootszd2emitz00zzcc_rootsz00
						(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c.scm 186 */
					BFALSE;
				}
			{	/* BackEnd/c.scm 189 */
				obj_t BgL_globalsz00_2184;

				BgL_globalsz00_2184 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_mez00_28)))->BgL_functionsz00);
				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* BackEnd/c.scm 193 */
						BGl_emitzd2bdbzd2infoz00zzbdb_emitz00(BgL_globalsz00_2184,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* BackEnd/c.scm 193 */
						BFALSE;
					}
				if (
					((long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) >
						((long) 0)))
					{	/* BackEnd/c.scm 197 */
						BGl_emitzd2profzd2infoz00zzprof_emitz00(BgL_globalsz00_2184,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
				else
					{	/* BackEnd/c.scm 197 */
						BFALSE;
					}
				{	/* BackEnd/c.scm 201 */
					bool_t BgL_test2173z00_3643;

					{	/* BackEnd/c.scm 201 */
						bool_t BgL_test2174z00_3644;

						if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
							{	/* BackEnd/c.scm 201 */
								BgL_test2174z00_3644 = ((bool_t) 1);
							}
						else
							{	/* BackEnd/c.scm 201 */
								BgL_test2174z00_3644 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BGl_za2passza2z00zzengine_paramz00,
										CNST_TABLE_REF(((long) 8))));
							}
						if (BgL_test2174z00_3644)
							{	/* BackEnd/c.scm 201 */
								if (
									(BGl_za2mainza2z00zzmodule_modulez00 ==
										CNST_TABLE_REF(((long) 9))))
									{	/* BackEnd/c.scm 202 */
										BgL_test2173z00_3643 = ((bool_t) 0);
									}
								else
									{	/* BackEnd/c.scm 202 */
										BgL_test2173z00_3643 = ((bool_t) 1);
									}
							}
						else
							{	/* BackEnd/c.scm 201 */
								BgL_test2173z00_3643 = ((bool_t) 0);
							}
					}
					if (BgL_test2173z00_3643)
						{	/* BackEnd/c.scm 201 */
							BGl_emitzd2mainzd2zzbackend_c_emitz00();
						}
					else
						{	/* BackEnd/c.scm 201 */
							BFALSE;
						}
				}
				{	/* BackEnd/c.scm 206 */
					obj_t BgL_modzd2initzd2_2192;

					BgL_modzd2initzd2_2192 =
						BGl_getzd2modulezd2initz00zzbackend_initz00();
					{	/* BackEnd/c.scm 207 */
						bool_t BgL_test2177z00_3655;

						if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
											(long) 10)))))
							{	/* BackEnd/c.scm 207 */
								BgL_test2177z00_3655 =
									BGl_isazf3zf3zz__objectz00(BgL_modzd2initzd2_2192,
									BGl_globalz00zzast_varz00);
							}
						else
							{	/* BackEnd/c.scm 207 */
								BgL_test2177z00_3655 = ((bool_t) 0);
							}
						if (BgL_test2177z00_3655)
							{	/* BackEnd/c.scm 207 */
								if (SYMBOLP(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
									{	/* BackEnd/c.scm 211 */
										obj_t BgL_arg1740z00_2196;

										{	/* BackEnd/c.scm 211 */
											obj_t BgL_res2010z00_2957;

											{	/* BackEnd/c.scm 211 */
												obj_t BgL_symbolz00_2955;

												BgL_symbolz00_2955 =
													BGl_za2dlopenzd2initza2zd2zzengine_paramz00;
												{	/* BackEnd/c.scm 211 */
													obj_t BgL_arg1466z00_2956;

													BgL_arg1466z00_2956 =
														SYMBOL_TO_STRING(BgL_symbolz00_2955);
													BgL_res2010z00_2957 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2956);
												}
											}
											BgL_arg1740z00_2196 = BgL_res2010z00_2957;
										}
										BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
											((BgL_globalz00_bglt) BgL_modzd2initzd2_2192),
											BgL_arg1740z00_2196);
									}
								else
									{	/* BackEnd/c.scm 210 */
										if (STRINGP(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
											{	/* BackEnd/c.scm 212 */
												BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
													((BgL_globalz00_bglt) BgL_modzd2initzd2_2192),
													BGl_za2dlopenzd2initza2zd2zzengine_paramz00);
											}
										else
											{	/* BackEnd/c.scm 212 */
												if (CBOOL(BGl_za2dlopenzd2initza2zd2zzengine_paramz00))
													{	/* BackEnd/c.scm 214 */
														BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
															((BgL_globalz00_bglt) BgL_modzd2initzd2_2192),
															string_to_bstring(BGL_DYNAMIC_LOAD_INIT));
													}
												else
													{	/* BackEnd/c.scm 214 */
														BUNSPEC;
													}
											}
									}
							}
						else
							{	/* BackEnd/c.scm 207 */
								BFALSE;
							}
					}
				}
				BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_mez00_28));
				{	/* BackEnd/c.scm 222 */
					obj_t BgL_port1518z00_2199;

					BgL_port1518z00_2199 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c.scm 222 */
						obj_t BgL_tmpz00_3678;

						BgL_tmpz00_3678 = ((obj_t) BgL_port1518z00_2199);
						bgl_display_string(BGl_string2061z00zzbackend_cz00,
							BgL_tmpz00_3678);
					}
					{	/* BackEnd/c.scm 222 */
						obj_t BgL_tmpz00_3681;

						BgL_tmpz00_3681 = ((obj_t) BgL_port1518z00_2199);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3681);
				}}
				{	/* BackEnd/c.scm 223 */
					obj_t BgL_port1519z00_2200;

					BgL_port1519z00_2200 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c.scm 223 */
						obj_t BgL_tmpz00_3684;

						BgL_tmpz00_3684 = ((obj_t) BgL_port1519z00_2200);
						bgl_display_string(BGl_string2066z00zzbackend_cz00,
							BgL_tmpz00_3684);
					}
					{	/* BackEnd/c.scm 223 */
						obj_t BgL_tmpz00_3687;

						BgL_tmpz00_3687 = ((obj_t) BgL_port1519z00_2200);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3687);
				}}
				{	/* BackEnd/c.scm 224 */
					obj_t BgL_port1520z00_2201;

					BgL_port1520z00_2201 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c.scm 224 */
						obj_t BgL_tmpz00_3690;

						BgL_tmpz00_3690 = ((obj_t) BgL_port1520z00_2201);
						bgl_display_string(BGl_string2063z00zzbackend_cz00,
							BgL_tmpz00_3690);
					}
					{	/* BackEnd/c.scm 224 */
						obj_t BgL_tmpz00_3693;

						BgL_tmpz00_3693 = ((obj_t) BgL_port1520z00_2201);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3693);
				}}
				{
					obj_t BgL_l1522z00_2203;

					BgL_l1522z00_2203 = BGl_za2czd2userzd2footza2z00zzengine_paramz00;
				BgL_zc3z04anonymousza31742ze3z87_2204:
					if (PAIRP(BgL_l1522z00_2203))
						{	/* BackEnd/c.scm 227 */
							{	/* BackEnd/c.scm 227 */
								obj_t BgL_hz00_2206;

								BgL_hz00_2206 = CAR(BgL_l1522z00_2203);
								{	/* BackEnd/c.scm 227 */
									obj_t BgL_port1521z00_2207;

									BgL_port1521z00_2207 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									bgl_display_obj(BgL_hz00_2206, BgL_port1521z00_2207);
									{	/* BackEnd/c.scm 227 */
										obj_t BgL_tmpz00_3700;

										BgL_tmpz00_3700 = ((obj_t) BgL_port1521z00_2207);
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_3700);
							}}}
							{
								obj_t BgL_l1522z00_3703;

								BgL_l1522z00_3703 = CDR(BgL_l1522z00_2203);
								BgL_l1522z00_2203 = BgL_l1522z00_3703;
								goto BgL_zc3z04anonymousza31742ze3z87_2204;
							}
						}
					else
						{	/* BackEnd/c.scm 227 */
							((bool_t) 1);
						}
				}
				return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
			}
		}

	}



/* &<@anonymous:1633> */
	obj_t BGl_z62zc3z04anonymousza31633ze3ze5zzbackend_cz00(obj_t BgL_envz00_3086,
		obj_t BgL_globalz00_3087)
	{
		{	/* BackEnd/c.scm 144 */
			{	/* BackEnd/c.scm 146 */
				bool_t BgL_test2183z00_3706;

				{	/* BackEnd/c.scm 146 */
					bool_t BgL_test2184z00_3707;

					{	/* BackEnd/c.scm 146 */
						obj_t BgL_arg1672z00_3162;

						BgL_arg1672z00_3162 =
							(((BgL_globalz00_bglt) COBJECT(
									((BgL_globalz00_bglt) BgL_globalz00_3087)))->BgL_modulez00);
						BgL_test2184z00_3707 =
							(BgL_arg1672z00_3162 == BGl_za2moduleza2z00zzmodule_modulez00);
					}
					if (BgL_test2184z00_3707)
						{	/* BackEnd/c.scm 146 */
							BgL_test2183z00_3706 =
								(
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_3087))))->
									BgL_occurrencez00) > ((long) 0));
						}
					else
						{	/* BackEnd/c.scm 146 */
							BgL_test2183z00_3706 = ((bool_t) 0);
						}
				}
				if (BgL_test2183z00_3706)
					{	/* BackEnd/c.scm 146 */
						return
							BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(
							((BgL_globalz00_bglt) BgL_globalz00_3087));
					}
				else
					{	/* BackEnd/c.scm 146 */
						if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
								((BgL_globalz00_bglt) BgL_globalz00_3087)))
							{	/* BackEnd/c.scm 149 */
								BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(
									((BgL_globalz00_bglt) BgL_globalz00_3087));
								{	/* BackEnd/c.scm 151 */
									BgL_typez00_bglt BgL_arg1644z00_3163;

									BgL_arg1644z00_3163 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_3087))))->
										BgL_typez00);
									BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
										(BgL_arg1644z00_3163);
								}
								{	/* BackEnd/c.scm 152 */
									bool_t BgL_test2186z00_3726;

									{	/* BackEnd/c.scm 152 */
										BgL_valuez00_bglt BgL_arg1667z00_3164;

										BgL_arg1667z00_3164 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_3087))))->
											BgL_valuez00);
										{	/* BackEnd/c.scm 152 */
											bool_t BgL_res1995z00_3165;

											BgL_res1995z00_3165 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1667z00_3164), BGl_sfunz00zzast_varz00);
											BgL_test2186z00_3726 = BgL_res1995z00_3165;
										}
									}
									if (BgL_test2186z00_3726)
										{	/* BackEnd/c.scm 153 */
											obj_t BgL_g1505z00_3166;

											BgL_g1505z00_3166 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_globalz00_3087))))->
																BgL_valuez00))))->BgL_argsz00);
											{
												obj_t BgL_l1503z00_3168;

												{	/* BackEnd/c.scm 159 */
													bool_t BgL_tmpz00_3737;

													BgL_l1503z00_3168 = BgL_g1505z00_3166;
												BgL_zc3z04anonymousza31654ze3z87_3167:
													if (PAIRP(BgL_l1503z00_3168))
														{	/* BackEnd/c.scm 159 */
															{	/* BackEnd/c.scm 155 */
																obj_t BgL_az00_3169;

																BgL_az00_3169 = CAR(BgL_l1503z00_3168);
																if (BGl_isazf3zf3zz__objectz00(BgL_az00_3169,
																		BGl_typez00zztype_typez00))
																	{	/* BackEnd/c.scm 155 */
																		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																			(((BgL_typez00_bglt) BgL_az00_3169));
																	}
																else
																	{	/* BackEnd/c.scm 155 */
																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_az00_3169, BGl_localz00zzast_varz00))
																			{	/* BackEnd/c.scm 158 */
																				BgL_typez00_bglt BgL_arg1662z00_3170;

																				BgL_arg1662z00_3170 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									BgL_az00_3169))))->
																					BgL_typez00);
																				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																					(BgL_arg1662z00_3170);
																			}
																		else
																			{	/* BackEnd/c.scm 157 */
																				BFALSE;
																			}
																	}
															}
															{
																obj_t BgL_l1503z00_3751;

																BgL_l1503z00_3751 = CDR(BgL_l1503z00_3168);
																BgL_l1503z00_3168 = BgL_l1503z00_3751;
																goto BgL_zc3z04anonymousza31654ze3z87_3167;
															}
														}
													else
														{	/* BackEnd/c.scm 159 */
															BgL_tmpz00_3737 = ((bool_t) 1);
														}
													return BBOOL(BgL_tmpz00_3737);
												}
											}
										}
									else
										{	/* BackEnd/c.scm 152 */
											return BFALSE;
										}
								}
							}
						else
							{	/* BackEnd/c.scm 149 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &<@anonymous:1627> */
	obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzbackend_cz00(obj_t BgL_envz00_3088,
		obj_t BgL_tz00_3089)
	{
		{	/* BackEnd/c.scm 142 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_tz00_3089)))->BgL_occurrencez00) = ((int)
					(int) (((long) 0))), BUNSPEC);
		}

	}



/* &<@anonymous:1613> */
	obj_t BGl_z62zc3z04anonymousza31613ze3ze5zzbackend_cz00(obj_t BgL_envz00_3090)
	{
		{	/* BackEnd/c.scm 115 */
			return
				BGl_startzd2emissionz12zc0zzbackend_c_emitz00
				(BGl_string2067z00zzbackend_cz00);
		}

	}



/* cc-compiler */
	BGL_EXPORTED_DEF obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t
		BgL_czd2prefixzd2_29, obj_t BgL_ozd2prefixzd2_30)
	{
		{	/* BackEnd/c.scm 234 */
			BGl_setzd2backendz12zc0zzbackend_backendz00(CNST_TABLE_REF(((long) 0)));
			{	/* BackEnd/c.scm 238 */
				bool_t BgL_arg1745z00_2210;

				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 11))))
					{	/* BackEnd/c.scm 238 */
						BgL_arg1745z00_2210 = ((bool_t) 0);
					}
				else
					{	/* BackEnd/c.scm 238 */
						BgL_arg1745z00_2210 = ((bool_t) 1);
					}
				BGl_ccz00zzcc_ccz00(BgL_czd2prefixzd2_29, BgL_ozd2prefixzd2_30,
					BgL_arg1745z00_2210);
			}
			BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 11)),
				BGl_proc2068z00zzbackend_cz00);
			{	/* BackEnd/c.scm 241 */
				obj_t BgL_arg1754z00_2215;

				if (STRINGP(BgL_ozd2prefixzd2_30))
					{	/* BackEnd/c.scm 241 */
						BgL_arg1754z00_2215 = BgL_ozd2prefixzd2_30;
					}
				else
					{	/* BackEnd/c.scm 241 */
						BgL_arg1754z00_2215 = BgL_czd2prefixzd2_29;
					}
				return BGl_ldz00zzcc_ldz00(BgL_arg1754z00_2215, ((bool_t) 0));
			}
		}

	}



/* &cc-compiler */
	obj_t BGl_z62cczd2compilerzb0zzbackend_cz00(obj_t BgL_envz00_3092,
		obj_t BgL_czd2prefixzd2_3093, obj_t BgL_ozd2prefixzd2_3094)
	{
		{	/* BackEnd/c.scm 234 */
			return
				BGl_cczd2compilerzd2zzbackend_cz00(BgL_czd2prefixzd2_3093,
				BgL_ozd2prefixzd2_3094);
		}

	}



/* &<@anonymous:1748> */
	obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzbackend_cz00(obj_t BgL_envz00_3095)
	{
		{	/* BackEnd/c.scm 239 */
			return CNST_TABLE_REF(((long) 12));
		}

	}



/* make-tmp-file-name */
	obj_t BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 254 */
			{	/* BackEnd/c.scm 258 */
				obj_t BgL_arg1756z00_2217;

				{	/* BackEnd/c.scm 258 */
					obj_t BgL_arg1757z00_2218;
					obj_t BgL_arg1759z00_2219;

					{	/* BackEnd/c.scm 258 */
						obj_t BgL_userz00_2225;

						BgL_userz00_2225 =
							BGl_getenvz00zz__osz00(BGl_string2069z00zzbackend_cz00);
						if (STRINGP(BgL_userz00_2225))
							{	/* BackEnd/c.scm 259 */
								BgL_arg1757z00_2218 = BgL_userz00_2225;
							}
						else
							{	/* BackEnd/c.scm 259 */
								BgL_arg1757z00_2218 = BGl_string2070z00zzbackend_cz00;
							}
					}
					BgL_arg1759z00_2219 = CAR(BGl_za2srczd2suffixza2zd2zzengine_paramz00);
					{	/* BackEnd/c.scm 256 */
						obj_t BgL_list1760z00_2220;

						{	/* BackEnd/c.scm 256 */
							obj_t BgL_arg1761z00_2221;

							{	/* BackEnd/c.scm 256 */
								obj_t BgL_arg1768z00_2222;

								{	/* BackEnd/c.scm 256 */
									obj_t BgL_arg1771z00_2223;

									{	/* BackEnd/c.scm 256 */
										obj_t BgL_arg1775z00_2224;

										BgL_arg1775z00_2224 =
											MAKE_YOUNG_PAIR(BgL_arg1759z00_2219, BNIL);
										BgL_arg1771z00_2223 =
											MAKE_YOUNG_PAIR(BGl_string2071z00zzbackend_cz00,
											BgL_arg1775z00_2224);
									}
									BgL_arg1768z00_2222 =
										MAKE_YOUNG_PAIR(BgL_arg1757z00_2218, BgL_arg1771z00_2223);
								}
								BgL_arg1761z00_2221 =
									MAKE_YOUNG_PAIR(BGl_string2072z00zzbackend_cz00,
									BgL_arg1768z00_2222);
							}
							BgL_list1760z00_2220 =
								MAKE_YOUNG_PAIR(BGl_string2073z00zzbackend_cz00,
								BgL_arg1761z00_2221);
						}
						BgL_arg1756z00_2217 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1760z00_2220);
					}
				}
				return
					BGl_makezd2filezd2namez00zz__osz00
					(BGl_za2bigloozd2tmpza2zd2zzengine_paramz00, BgL_arg1756z00_2217);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2074z00zzbackend_cz00,
				BGl_string2075z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2076z00zzbackend_cz00,
				BGl_string2077z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2078z00zzbackend_cz00,
				BGl_string2079z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2080z00zzbackend_cz00,
				BGl_string2081z00zzbackend_cz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2082z00zzbackend_cz00,
				BGl_string2083z00zzbackend_cz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2gczd2initzd2envzd2zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc2084z00zzbackend_cz00,
				BGl_string2085z00zzbackend_cz00);
		}

	}



/* &backend-gc-init-cvm1549 */
	obj_t BGl_z62backendzd2gczd2initzd2cvm1549zb0zzbackend_cz00(obj_t
		BgL_envz00_3107, obj_t BgL_bz00_3108)
	{
		{	/* BackEnd/c.scm 372 */
			return CNST_TABLE_REF(((long) 13));
		}

	}



/* &backend-subtype?-cvm1547 */
	obj_t BGl_z62backendzd2subtypezf3zd2cvm1547z91zzbackend_cz00(obj_t
		BgL_envz00_3109, obj_t BgL_bz00_3110, obj_t BgL_t1z00_3111,
		obj_t BgL_t2z00_3112)
	{
		{	/* BackEnd/c.scm 362 */
			{	/* BackEnd/c.scm 364 */
				bool_t BgL__ortest_1135z00_3173;

				BgL__ortest_1135z00_3173 = (BgL_t1z00_3111 == BgL_t2z00_3112);
				if (BgL__ortest_1135z00_3173)
					{	/* BackEnd/c.scm 364 */
						return BBOOL(BgL__ortest_1135z00_3173);
					}
				else
					{	/* BackEnd/c.scm 365 */
						bool_t BgL__ortest_1136z00_3174;

						BgL__ortest_1136z00_3174 =
							(
							(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_t1z00_3111)))->BgL_idz00) ==
							(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_t2z00_3112)))->BgL_idz00));
						if (BgL__ortest_1136z00_3174)
							{	/* BackEnd/c.scm 365 */
								return BBOOL(BgL__ortest_1136z00_3174);
							}
						else
							{	/* BackEnd/c.scm 366 */
								bool_t BgL__ortest_1137z00_3175;

								BgL__ortest_1137z00_3175 =
									(BgL_t2z00_3112 == BGl_za2_za2z00zztype_cachez00);
								if (BgL__ortest_1137z00_3175)
									{	/* BackEnd/c.scm 366 */
										return BBOOL(BgL__ortest_1137z00_3175);
									}
								else
									{	/* BackEnd/c.scm 367 */
										obj_t BgL_arg1910z00_3176;
										obj_t BgL_arg1911z00_3177;

										BgL_arg1910z00_3176 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_t1z00_3111)))->BgL_namez00);
										BgL_arg1911z00_3177 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_t2z00_3112)))->BgL_namez00);
										{	/* BackEnd/c.scm 367 */
											bool_t BgL_res2041z00_3178;

											{	/* BackEnd/c.scm 367 */
												long BgL_l1z00_3179;

												BgL_l1z00_3179 =
													STRING_LENGTH(((obj_t) BgL_arg1910z00_3176));
												if (
													(BgL_l1z00_3179 ==
														STRING_LENGTH(((obj_t) BgL_arg1911z00_3177))))
													{	/* BackEnd/c.scm 367 */
														int BgL_arg1267z00_3180;

														{	/* BackEnd/c.scm 367 */
															char *BgL_auxz00_3815;
															char *BgL_tmpz00_3812;

															BgL_auxz00_3815 =
																BSTRING_TO_STRING(
																((obj_t) BgL_arg1911z00_3177));
															BgL_tmpz00_3812 =
																BSTRING_TO_STRING(
																((obj_t) BgL_arg1910z00_3176));
															BgL_arg1267z00_3180 =
																memcmp(BgL_tmpz00_3812, BgL_auxz00_3815,
																BgL_l1z00_3179);
														}
														BgL_res2041z00_3178 =
															((long) (BgL_arg1267z00_3180) == ((long) 0));
													}
												else
													{	/* BackEnd/c.scm 367 */
														BgL_res2041z00_3178 = ((bool_t) 0);
													}
											}
											return BBOOL(BgL_res2041z00_3178);
										}
									}
							}
					}
			}
		}

	}



/* &backend-link-objects1545 */
	obj_t BGl_z62backendzd2linkzd2objects1545z62zzbackend_cz00(obj_t
		BgL_envz00_3113, obj_t BgL_mez00_3114, obj_t BgL_sourcesz00_3115)
	{
		{	/* BackEnd/c.scm 268 */
			if (((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
				{	/* BackEnd/c.scm 269 */
					BGl_bdbzd2settingz12zc0zzbdb_settingz00();
				}
			else
				{	/* BackEnd/c.scm 269 */
					BFALSE;
				}
			if (NULLP(BgL_sourcesz00_3115))
				{	/* BackEnd/c.scm 272 */
					obj_t BgL_firstz00_3182;

					BgL_firstz00_3182 =
						BGl_prefixz00zz__osz00(CAR
						(BGl_za2ozd2filesza2zd2zzengine_paramz00));
					{	/* BackEnd/c.scm 273 */
						obj_t BgL_list1799z00_3183;

						{	/* BackEnd/c.scm 273 */
							obj_t BgL_arg1801z00_3184;

							{	/* BackEnd/c.scm 273 */
								obj_t BgL_arg1808z00_3185;

								{	/* BackEnd/c.scm 273 */
									obj_t BgL_arg1809z00_3186;

									BgL_arg1809z00_3186 =
										MAKE_YOUNG_PAIR(BGl_za2ozd2filesza2zd2zzengine_paramz00,
										BNIL);
									BgL_arg1808z00_3185 =
										MAKE_YOUNG_PAIR(BGl_string2086z00zzbackend_cz00,
										BgL_arg1809z00_3186);
								}
								BgL_arg1801z00_3184 =
									MAKE_YOUNG_PAIR(BGl_string2087z00zzbackend_cz00,
									BgL_arg1808z00_3185);
							}
							BgL_list1799z00_3183 =
								MAKE_YOUNG_PAIR(BGl_string2088z00zzbackend_cz00,
								BgL_arg1801z00_3184);
						}
						BGl_warningz00zz__errorz00(BgL_list1799z00_3183);
					}
					BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
					BGl_za2ozd2filesza2zd2zzengine_paramz00 =
						CDR(BGl_za2ozd2filesza2zd2zzengine_paramz00);
					return BGl_ldz00zzcc_ldz00(BgL_firstz00_3182, ((bool_t) 0));
				}
			else
				{
					obj_t BgL_sourcesz00_3188;
					obj_t BgL_clausesz00_3189;
					obj_t BgL_mainz00_3190;
					obj_t BgL_fmainz00_3191;
					obj_t BgL_librariesz00_3192;

					BgL_sourcesz00_3188 = BgL_sourcesz00_3115;
					BgL_clausesz00_3189 = BNIL;
					BgL_mainz00_3190 = BFALSE;
					BgL_fmainz00_3191 = BGl_string2070z00zzbackend_cz00;
					BgL_librariesz00_3192 = BNIL;
				BgL_loopz00_3187:
					if (NULLP(BgL_sourcesz00_3188))
						{	/* BackEnd/c.scm 284 */
							bool_t BgL_test2200z00_3840;

							if (CBOOL(BgL_mainz00_3190))
								{	/* BackEnd/c.scm 284 */
									BgL_test2200z00_3840 = ((bool_t) 1);
								}
							else
								{	/* BackEnd/c.scm 284 */
									if (CBOOL(BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00))
										{	/* BackEnd/c.scm 284 */
											BgL_test2200z00_3840 =
												(BGl_za2passza2z00zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 14)));
										}
									else
										{	/* BackEnd/c.scm 284 */
											BgL_test2200z00_3840 = ((bool_t) 1);
										}
								}
							if (BgL_test2200z00_3840)
								{	/* BackEnd/c.scm 285 */
									obj_t BgL_firstz00_3193;

									BgL_firstz00_3193 =
										BGl_prefixz00zz__osz00(CAR
										(BGl_za2ozd2filesza2zd2zzengine_paramz00));
									{
										obj_t BgL_l1533z00_3195;

										BgL_l1533z00_3195 = BgL_librariesz00_3192;
									BgL_zc3z04anonymousza31815ze3z87_3194:
										if (PAIRP(BgL_l1533z00_3195))
											{	/* BackEnd/c.scm 288 */
												{	/* BackEnd/c.scm 289 */
													obj_t BgL_libz00_3196;

													BgL_libz00_3196 = CAR(BgL_l1533z00_3195);
													{
														obj_t BgL_clausesz00_3202;
														obj_t BgL_libsz00_3199;

														if (PAIRP(BgL_libz00_3196))
															{	/* BackEnd/c.scm 289 */
																if (
																	(CAR(BgL_libz00_3196) ==
																		CNST_TABLE_REF(((long) 15))))
																	{	/* BackEnd/c.scm 289 */
																		BgL_libsz00_3199 = CDR(BgL_libz00_3196);
																		{
																			obj_t BgL_l1524z00_3201;

																			BgL_l1524z00_3201 = BgL_libsz00_3199;
																		BgL_zc3z04anonymousza31830ze3z87_3200:
																			if (PAIRP(BgL_l1524z00_3201))
																				{	/* BackEnd/c.scm 291 */
																					BGl_usezd2libraryz12zc0zzmodule_alibraryz00
																						(CAR(BgL_l1524z00_3201));
																					{
																						obj_t BgL_l1524z00_3862;

																						BgL_l1524z00_3862 =
																							CDR(BgL_l1524z00_3201);
																						BgL_l1524z00_3201 =
																							BgL_l1524z00_3862;
																						goto
																							BgL_zc3z04anonymousza31830ze3z87_3200;
																					}
																				}
																			else
																				{	/* BackEnd/c.scm 291 */
																					((bool_t) 1);
																				}
																		}
																	}
																else
																	{	/* BackEnd/c.scm 289 */
																		if (
																			(CAR(BgL_libz00_3196) ==
																				CNST_TABLE_REF(((long) 16))))
																			{	/* BackEnd/c.scm 289 */
																				BgL_clausesz00_3202 =
																					CDR(BgL_libz00_3196);
																				{	/* BackEnd/c.scm 293 */
																					obj_t BgL_fun1532z00_3203;

																					{	/* BackEnd/c.scm 293 */
																						obj_t
																							BgL_zc3z04anonymousza31839ze3z87_3204;
																						{	/* BackEnd/c.scm 289 */
																							int BgL_tmpz00_3869;

																							BgL_tmpz00_3869 =
																								(int) (((long) 0));
																							BgL_zc3z04anonymousza31839ze3z87_3204
																								=
																								MAKE_EL_PROCEDURE
																								(BgL_tmpz00_3869);
																						}
																						BgL_fun1532z00_3203 =
																							BgL_zc3z04anonymousza31839ze3z87_3204;
																					}
																					{
																						obj_t BgL_l1530z00_3206;

																						BgL_l1530z00_3206 =
																							BgL_clausesz00_3202;
																					BgL_zc3z04anonymousza31834ze3z87_3205:
																						if (PAIRP
																							(BgL_l1530z00_3206))
																							{	/* BackEnd/c.scm 293 */
																								{	/* BackEnd/c.scm 293 */
																									obj_t BgL_arg1836z00_3207;

																									BgL_arg1836z00_3207 =
																										CAR(BgL_l1530z00_3206);
																									BGl_z62zc3z04anonymousza31839ze3ze5zzbackend_cz00
																										(BgL_fun1532z00_3203,
																										BgL_arg1836z00_3207);
																								}
																								{
																									obj_t BgL_l1530z00_3879;

																									BgL_l1530z00_3879 =
																										CDR(BgL_l1530z00_3206);
																									BgL_l1530z00_3206 =
																										BgL_l1530z00_3879;
																									goto
																										BgL_zc3z04anonymousza31834ze3z87_3205;
																								}
																							}
																						else
																							{	/* BackEnd/c.scm 293 */
																								((bool_t) 1);
																							}
																					}
																				}
																			}
																		else
																			{	/* BackEnd/c.scm 289 */
																				((bool_t) 0);
																			}
																	}
															}
														else
															{	/* BackEnd/c.scm 289 */
																((bool_t) 0);
															}
													}
												}
												{
													obj_t BgL_l1533z00_3882;

													BgL_l1533z00_3882 = CDR(BgL_l1533z00_3195);
													BgL_l1533z00_3195 = BgL_l1533z00_3882;
													goto BgL_zc3z04anonymousza31815ze3z87_3194;
												}
											}
										else
											{	/* BackEnd/c.scm 288 */
												((bool_t) 1);
											}
									}
									BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
									{	/* BackEnd/c.scm 301 */
										obj_t BgL_list1858z00_3208;

										BgL_list1858z00_3208 =
											MAKE_YOUNG_PAIR(BgL_fmainz00_3191, BNIL);
										BGl_za2srczd2filesza2zd2zzengine_paramz00 =
											BgL_list1858z00_3208;
									}
									BGl_za2ozd2filesza2zd2zzengine_paramz00 =
										CDR(BGl_za2ozd2filesza2zd2zzengine_paramz00);
									return BGl_ldz00zzcc_ldz00(BgL_firstz00_3193, ((bool_t) 0));
								}
							else
								{	/* BackEnd/c.scm 305 */
									obj_t BgL_tmpz00_3209;

									BgL_tmpz00_3209 =
										BGl_makezd2tmpzd2filezd2namezd2zzbackend_cz00();
									BGl_makezd2tmpzd2mainz00zzengine_linkz00(BgL_tmpz00_3209,
										CBOOL(BgL_mainz00_3190),
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													17))), BgL_clausesz00_3189, BgL_librariesz00_3192);
									{	/* BackEnd/c.scm 307 */
										obj_t BgL_list1862z00_3210;

										BgL_list1862z00_3210 =
											MAKE_YOUNG_PAIR(BgL_tmpz00_3209, BNIL);
										BGl_za2srczd2filesza2zd2zzengine_paramz00 =
											BgL_list1862z00_3210;
									}
									{
										obj_t BgL_raz00_3212;
										obj_t BgL_resz00_3213;

										BgL_raz00_3212 = BGl_za2restzd2argsza2zd2zzengine_paramz00;
										BgL_resz00_3213 = BNIL;
									BgL_loopz00_3211:
										if (NULLP(BgL_raz00_3212))
											{	/* BackEnd/c.scm 313 */
												BGl_za2restzd2argsza2zd2zzengine_paramz00 =
													bgl_reverse_bang(BgL_resz00_3213);
											}
										else
											{	/* BackEnd/c.scm 315 */
												bool_t BgL_test2210z00_3897;

												{	/* BackEnd/c.scm 315 */
													obj_t BgL_arg1873z00_3214;

													{	/* BackEnd/c.scm 315 */
														obj_t BgL_arg1874z00_3215;

														BgL_arg1874z00_3215 = CAR(((obj_t) BgL_raz00_3212));
														BgL_arg1873z00_3214 =
															BGl_suffixz00zz__osz00(BgL_arg1874z00_3215);
													}
													BgL_test2210z00_3897 =
														CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1873z00_3214,
															BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
												}
												if (BgL_test2210z00_3897)
													{	/* BackEnd/c.scm 316 */
														obj_t BgL_arg1868z00_3216;

														BgL_arg1868z00_3216 = CDR(((obj_t) BgL_raz00_3212));
														{
															obj_t BgL_raz00_3905;

															BgL_raz00_3905 = BgL_arg1868z00_3216;
															BgL_raz00_3212 = BgL_raz00_3905;
															goto BgL_loopz00_3211;
														}
													}
												else
													{	/* BackEnd/c.scm 318 */
														obj_t BgL_arg1870z00_3217;
														obj_t BgL_arg1871z00_3218;

														BgL_arg1870z00_3217 = CDR(((obj_t) BgL_raz00_3212));
														{	/* BackEnd/c.scm 318 */
															obj_t BgL_arg1872z00_3219;

															BgL_arg1872z00_3219 =
																CAR(((obj_t) BgL_raz00_3212));
															BgL_arg1871z00_3218 =
																MAKE_YOUNG_PAIR(BgL_arg1872z00_3219,
																BgL_resz00_3213);
														}
														{
															obj_t BgL_resz00_3912;
															obj_t BgL_raz00_3911;

															BgL_raz00_3911 = BgL_arg1870z00_3217;
															BgL_resz00_3912 = BgL_arg1871z00_3218;
															BgL_resz00_3213 = BgL_resz00_3912;
															BgL_raz00_3212 = BgL_raz00_3911;
															goto BgL_loopz00_3211;
														}
													}
											}
									}
									{	/* BackEnd/c.scm 319 */
										obj_t BgL_exitd1131z00_3220;

										BgL_exitd1131z00_3220 = BGL_EXITD_TOP_AS_OBJ();
										{	/* BackEnd/c.scm 323 */
											obj_t BgL_zc3z04anonymousza31875ze3z87_3221;

											BgL_zc3z04anonymousza31875ze3z87_3221 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31875ze3ze5zzbackend_cz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31875ze3z87_3221,
												(int) (((long) 0)), BgL_tmpz00_3209);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1131z00_3220,
												BgL_zc3z04anonymousza31875ze3z87_3221);
											{	/* BackEnd/c.scm 320 */
												obj_t BgL_tmp1133z00_3222;

												BgL_tmp1133z00_3222 =
													BGl_compilerz00zzengine_compilerz00();
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1131z00_3220);
												BGl_z62zc3z04anonymousza31875ze3ze5zzbackend_cz00
													(BgL_zc3z04anonymousza31875ze3z87_3221);
												BgL_tmp1133z00_3222;
									}}}
									return BINT(((long) 0));
						}}
					else
						{	/* BackEnd/c.scm 335 */
							obj_t BgL_portz00_3223;

							{	/* BackEnd/c.scm 335 */
								obj_t BgL_arg1909z00_3224;

								{	/* BackEnd/c.scm 335 */
									obj_t BgL_pairz00_3225;

									BgL_pairz00_3225 = CAR(((obj_t) BgL_sourcesz00_3188));
									BgL_arg1909z00_3224 = CAR(BgL_pairz00_3225);
								}
								{	/* BackEnd/c.scm 335 */

									BgL_portz00_3223 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_arg1909z00_3224, BTRUE, BINT(((long) 5000000)));
							}}
							if (INPUT_PORTP(BgL_portz00_3223))
								{	/* BackEnd/c.scm 338 */
									obj_t BgL_expz00_3226;

									{	/* BackEnd/c.scm 338 */
										obj_t BgL_arg1906z00_3227;

										{	/* BackEnd/c.scm 338 */
											obj_t BgL_list1907z00_3228;

											BgL_list1907z00_3228 =
												MAKE_YOUNG_PAIR(BgL_portz00_3223, BNIL);
											BgL_arg1906z00_3227 =
												BGl_compilerzd2readzd2zzread_readerz00
												(BgL_list1907z00_3228);
										}
										BgL_expz00_3226 =
											BGl_expandz00zz__expandz00(BgL_arg1906z00_3227);
									}
									bgl_close_input_port(BgL_portz00_3223);
									{
										obj_t BgL_namez00_3231;

										if (PAIRP(BgL_expz00_3226))
											{	/* BackEnd/c.scm 340 */
												obj_t BgL_cdrzd2422zd2_3251;

												BgL_cdrzd2422zd2_3251 = CDR(BgL_expz00_3226);
												if (
													(CAR(BgL_expz00_3226) == CNST_TABLE_REF(((long) 17))))
													{	/* BackEnd/c.scm 340 */
														if (PAIRP(BgL_cdrzd2422zd2_3251))
															{	/* BackEnd/c.scm 340 */
																BgL_namez00_3231 = CAR(BgL_cdrzd2422zd2_3251);
																{	/* BackEnd/c.scm 342 */
																	obj_t BgL_libsz00_3232;
																	obj_t BgL_nmainz00_3233;

																	{	/* BackEnd/c.scm 342 */
																		obj_t BgL_arg1903z00_3234;

																		{	/* BackEnd/c.scm 342 */
																			obj_t BgL_pairz00_3235;

																			BgL_pairz00_3235 =
																				CDR(((obj_t) BgL_expz00_3226));
																			BgL_arg1903z00_3234 =
																				CDR(BgL_pairz00_3235);
																		}
																		BgL_libsz00_3232 =
																			BGl_findzd2librarieszd2zzengine_linkz00
																			(BgL_arg1903z00_3234);
																	}
																	{	/* BackEnd/c.scm 343 */
																		obj_t BgL_arg1904z00_3236;

																		{	/* BackEnd/c.scm 343 */
																			obj_t BgL_pairz00_3237;

																			BgL_pairz00_3237 =
																				CDR(((obj_t) BgL_expz00_3226));
																			BgL_arg1904z00_3236 =
																				CDR(BgL_pairz00_3237);
																		}
																		BgL_nmainz00_3233 =
																			BGl_findzd2mainzd2zzengine_linkz00
																			(BgL_arg1904z00_3236);
																	}
																	{	/* BackEnd/c.scm 344 */
																		obj_t BgL_arg1891z00_3238;
																		obj_t BgL_arg1892z00_3239;
																		obj_t BgL_arg1893z00_3240;
																		obj_t BgL_arg1895z00_3241;
																		obj_t BgL_arg1896z00_3242;

																		BgL_arg1891z00_3238 =
																			CDR(((obj_t) BgL_sourcesz00_3188));
																		{	/* BackEnd/c.scm 347 */
																			obj_t BgL_arg1897z00_3243;

																			{	/* BackEnd/c.scm 347 */
																				obj_t BgL_arg1898z00_3244;

																				{	/* BackEnd/c.scm 347 */
																					obj_t BgL_arg1902z00_3245;

																					{	/* BackEnd/c.scm 347 */
																						obj_t BgL_pairz00_3246;

																						BgL_pairz00_3246 =
																							CAR(
																							((obj_t) BgL_sourcesz00_3188));
																						BgL_arg1902z00_3245 =
																							CAR(BgL_pairz00_3246);
																					}
																					BgL_arg1898z00_3244 =
																						string_append_3
																						(BGl_string2089z00zzbackend_cz00,
																						BgL_arg1902z00_3245,
																						BGl_string2089z00zzbackend_cz00);
																				}
																				{	/* BackEnd/c.scm 345 */
																					obj_t BgL_list1899z00_3247;

																					{	/* BackEnd/c.scm 345 */
																						obj_t BgL_arg1901z00_3248;

																						BgL_arg1901z00_3248 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1898z00_3244, BNIL);
																						BgL_list1899z00_3247 =
																							MAKE_YOUNG_PAIR(BgL_namez00_3231,
																							BgL_arg1901z00_3248);
																					}
																					BgL_arg1897z00_3243 =
																						BgL_list1899z00_3247;
																				}
																			}
																			BgL_arg1892z00_3239 =
																				MAKE_YOUNG_PAIR(BgL_arg1897z00_3243,
																				BgL_clausesz00_3189);
																		}
																		if (CBOOL(BgL_nmainz00_3233))
																			{	/* BackEnd/c.scm 349 */
																				BgL_arg1893z00_3240 = BgL_nmainz00_3233;
																			}
																		else
																			{	/* BackEnd/c.scm 349 */
																				BgL_arg1893z00_3240 = BgL_mainz00_3190;
																			}
																		if (CBOOL(BgL_nmainz00_3233))
																			{	/* BackEnd/c.scm 350 */
																				obj_t BgL_pairz00_3249;

																				BgL_pairz00_3249 =
																					CAR(((obj_t) BgL_sourcesz00_3188));
																				BgL_arg1895z00_3241 =
																					CAR(BgL_pairz00_3249);
																			}
																		else
																			{	/* BackEnd/c.scm 350 */
																				BgL_arg1895z00_3241 = BgL_fmainz00_3191;
																			}
																		BgL_arg1896z00_3242 =
																			BGl_appendzd221011zd2zzbackend_cz00
																			(BgL_libsz00_3232, BgL_librariesz00_3192);
																		{
																			obj_t BgL_librariesz00_3973;
																			obj_t BgL_fmainz00_3972;
																			obj_t BgL_mainz00_3971;
																			obj_t BgL_clausesz00_3970;
																			obj_t BgL_sourcesz00_3969;

																			BgL_sourcesz00_3969 = BgL_arg1891z00_3238;
																			BgL_clausesz00_3970 = BgL_arg1892z00_3239;
																			BgL_mainz00_3971 = BgL_arg1893z00_3240;
																			BgL_fmainz00_3972 = BgL_arg1895z00_3241;
																			BgL_librariesz00_3973 =
																				BgL_arg1896z00_3242;
																			BgL_librariesz00_3192 =
																				BgL_librariesz00_3973;
																			BgL_fmainz00_3191 = BgL_fmainz00_3972;
																			BgL_mainz00_3190 = BgL_mainz00_3971;
																			BgL_clausesz00_3189 = BgL_clausesz00_3970;
																			BgL_sourcesz00_3188 = BgL_sourcesz00_3969;
																			goto BgL_loopz00_3187;
																		}
																	}
																}
															}
														else
															{	/* BackEnd/c.scm 340 */
															BgL_tagzd2417zd2_3230:
																{	/* BackEnd/c.scm 353 */
																	obj_t BgL_arg1905z00_3250;

																	BgL_arg1905z00_3250 =
																		CDR(((obj_t) BgL_sourcesz00_3188));
																	{
																		obj_t BgL_sourcesz00_3977;

																		BgL_sourcesz00_3977 = BgL_arg1905z00_3250;
																		BgL_sourcesz00_3188 = BgL_sourcesz00_3977;
																		goto BgL_loopz00_3187;
																	}
																}
															}
													}
												else
													{	/* BackEnd/c.scm 340 */
														goto BgL_tagzd2417zd2_3230;
													}
											}
										else
											{	/* BackEnd/c.scm 340 */
												goto BgL_tagzd2417zd2_3230;
											}
									}
								}
							else
								{	/* BackEnd/c.scm 337 */
									obj_t BgL_arg1908z00_3252;

									{	/* BackEnd/c.scm 337 */
										obj_t BgL_pairz00_3253;

										BgL_pairz00_3253 = CAR(((obj_t) BgL_sourcesz00_3188));
										BgL_arg1908z00_3252 = CAR(BgL_pairz00_3253);
									}
									return
										BGl_errorz00zz__errorz00(BGl_string2070z00zzbackend_cz00,
										BGl_string2090z00zzbackend_cz00, BgL_arg1908z00_3252);
								}
						}
				}
		}

	}



/* &<@anonymous:1839> */
	bool_t BGl_z62zc3z04anonymousza31839ze3ze5zzbackend_cz00(obj_t
		BgL_envz00_3116, obj_t BgL_ezd2410zd2_3117)
	{
		{	/* BackEnd/c.scm 293 */
			{
				obj_t BgL_libsz00_3255;

				if (PAIRP(BgL_ezd2410zd2_3117))
					{	/* BackEnd/c.scm 293 */
						if ((CAR(BgL_ezd2410zd2_3117) == CNST_TABLE_REF(((long) 15))))
							{	/* BackEnd/c.scm 293 */
								BgL_libsz00_3255 = CDR(BgL_ezd2410zd2_3117);
								{
									obj_t BgL_l1526z00_3257;

									BgL_l1526z00_3257 = BgL_libsz00_3255;
								BgL_zc3z04anonymousza31847ze3z87_3256:
									if (PAIRP(BgL_l1526z00_3257))
										{	/* BackEnd/c.scm 295 */
											BGl_usezd2libraryz12zc0zzmodule_alibraryz00(CAR
												(BgL_l1526z00_3257));
											{
												obj_t BgL_l1526z00_3992;

												BgL_l1526z00_3992 = CDR(BgL_l1526z00_3257);
												BgL_l1526z00_3257 = BgL_l1526z00_3992;
												goto BgL_zc3z04anonymousza31847ze3z87_3256;
											}
										}
									else
										{	/* BackEnd/c.scm 295 */
											((bool_t) 1);
										}
								}
								{
									obj_t BgL_l1528z00_3259;

									BgL_l1528z00_3259 = BgL_libsz00_3255;
								BgL_zc3z04anonymousza31852ze3z87_3258:
									if (PAIRP(BgL_l1528z00_3259))
										{	/* BackEnd/c.scm 296 */
											BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(CAR
												(BgL_l1528z00_3259));
											{
												obj_t BgL_l1528z00_3998;

												BgL_l1528z00_3998 = CDR(BgL_l1528z00_3259);
												BgL_l1528z00_3259 = BgL_l1528z00_3998;
												goto BgL_zc3z04anonymousza31852ze3z87_3258;
											}
										}
									else
										{	/* BackEnd/c.scm 296 */
											return ((bool_t) 1);
										}
								}
							}
						else
							{	/* BackEnd/c.scm 293 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* BackEnd/c.scm 293 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &<@anonymous:1875> */
	obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzbackend_cz00(obj_t BgL_envz00_3118)
	{
		{	/* BackEnd/c.scm 319 */
			{	/* BackEnd/c.scm 323 */
				obj_t BgL_tmpz00_3119;

				BgL_tmpz00_3119 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3118, (int) (((long) 0))));
				{	/* BackEnd/c.scm 323 */
					bool_t BgL_tmpz00_4004;

					BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
					{	/* BackEnd/c.scm 324 */
						obj_t BgL_prez00_3260;

						BgL_prez00_3260 = BGl_prefixz00zz__osz00(BgL_tmpz00_3119);
						{	/* BackEnd/c.scm 324 */
							obj_t BgL_czd2filezd2_3261;

							BgL_czd2filezd2_3261 =
								string_append(BgL_prez00_3260, BGl_string2067z00zzbackend_cz00);
							{	/* BackEnd/c.scm 325 */
								obj_t BgL_ozd2filezd2_3262;

								BgL_ozd2filezd2_3262 =
									string_append_3(BgL_prez00_3260,
									BGl_string2071z00zzbackend_cz00,
									BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
								{	/* BackEnd/c.scm 326 */

									{	/* BackEnd/c.scm 330 */
										obj_t BgL_g1537z00_3263;

										{	/* BackEnd/c.scm 333 */
											obj_t BgL_list1880z00_3264;

											{	/* BackEnd/c.scm 333 */
												obj_t BgL_arg1881z00_3265;

												{	/* BackEnd/c.scm 333 */
													obj_t BgL_arg1882z00_3266;

													BgL_arg1882z00_3266 =
														MAKE_YOUNG_PAIR(BgL_ozd2filezd2_3262, BNIL);
													BgL_arg1881z00_3265 =
														MAKE_YOUNG_PAIR(BgL_czd2filezd2_3261,
														BgL_arg1882z00_3266);
												}
												BgL_list1880z00_3264 =
													MAKE_YOUNG_PAIR(BgL_tmpz00_3119, BgL_arg1881z00_3265);
											}
											BgL_g1537z00_3263 = BgL_list1880z00_3264;
										}
										{
											obj_t BgL_l1535z00_3268;

											BgL_l1535z00_3268 = BgL_g1537z00_3263;
										BgL_zc3z04anonymousza31876ze3z87_3267:
											if (PAIRP(BgL_l1535z00_3268))
												{	/* BackEnd/c.scm 333 */
													{	/* BackEnd/c.scm 331 */
														obj_t BgL_fz00_3269;

														BgL_fz00_3269 = CAR(BgL_l1535z00_3268);
														if (fexists(BSTRING_TO_STRING(BgL_fz00_3269)))
															{	/* BackEnd/c.scm 332 */
																char *BgL_stringz00_3270;

																BgL_stringz00_3270 =
																	BSTRING_TO_STRING(BgL_fz00_3269);
																if (unlink(BgL_stringz00_3270))
																	{	/* BackEnd/c.scm 332 */
																		((bool_t) 0);
																	}
																else
																	{	/* BackEnd/c.scm 332 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* BackEnd/c.scm 331 */
																((bool_t) 0);
															}
													}
													{
														obj_t BgL_l1535z00_4021;

														BgL_l1535z00_4021 = CDR(BgL_l1535z00_3268);
														BgL_l1535z00_3268 = BgL_l1535z00_4021;
														goto BgL_zc3z04anonymousza31876ze3z87_3267;
													}
												}
											else
												{	/* BackEnd/c.scm 333 */
													BgL_tmpz00_4004 = ((bool_t) 1);
												}
										}
									}
								}
							}
						}
					}
					return BBOOL(BgL_tmpz00_4004);
				}
			}
		}

	}



/* &backend-cnst-table-n1543 */
	obj_t BGl_z62backendzd2cnstzd2tablezd2n1543zb0zzbackend_cz00(obj_t
		BgL_envz00_3120, obj_t BgL_mez00_3121, obj_t BgL_offsetz00_3122)
	{
		{	/* BackEnd/c.scm 246 */
			if (((long) CINT(BgL_offsetz00_3122) == ((long) 0)))
				{	/* BackEnd/c.scm 247 */
					return BGl_string2091z00zzbackend_cz00;
				}
			else
				{	/* BackEnd/c.scm 249 */
					obj_t BgL_arg1796z00_3272;

					{	/* BackEnd/c.scm 249 */

						BgL_arg1796z00_3272 =
							BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_offsetz00_3122,
							BINT(((long) 10)));
					}
					return
						string_append_3(BGl_string2092z00zzbackend_cz00,
						BgL_arg1796z00_3272, BGl_string2093z00zzbackend_cz00);
				}
		}

	}



/* &backend-link-cvm1541 */
	obj_t BGl_z62backendzd2linkzd2cvm1541z62zzbackend_cz00(obj_t BgL_envz00_3123,
		obj_t BgL_mez00_3124, obj_t BgL_resultz00_3125)
	{
		{	/* BackEnd/c.scm 106 */
			if (STRINGP(BgL_resultz00_3125))
				{	/* BackEnd/c.scm 107 */
					return BGl_cczd2compilerzd2zzbackend_cz00(BgL_resultz00_3125, BFALSE);
				}
			else
				{	/* BackEnd/c.scm 107 */
					return BFALSE;
				}
		}

	}



/* &backend-compile-cvm1539 */
	obj_t BGl_z62backendzd2compilezd2cvm1539z62zzbackend_cz00(obj_t
		BgL_envz00_3126, obj_t BgL_mez00_3127)
	{
		{	/* BackEnd/c.scm 94 */
			{	/* BackEnd/c.scm 95 */
				obj_t BgL_czd2prefixzd2_3275;

				BgL_czd2prefixzd2_3275 =
					BGl_czd2walkzd2zzbackend_cz00(((BgL_cvmz00_bglt) BgL_mez00_3127));
				BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 18)),
					BGl_proc2094z00zzbackend_cz00);
				BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 19)),
					BGl_proc2095z00zzbackend_cz00);
				if (STRINGP(BgL_czd2prefixzd2_3275))
					{	/* BackEnd/c.scm 98 */
						{	/* BackEnd/c.scm 99 */
							bool_t BgL_test2227z00_4041;

							if (
								(BGl_za2passza2z00zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 20))))
								{	/* BackEnd/c.scm 99 */
									BgL_test2227z00_4041 = ((bool_t) 1);
								}
							else
								{	/* BackEnd/c.scm 99 */
									BgL_test2227z00_4041 =
										CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00);
								}
							if (BgL_test2227z00_4041)
								{	/* BackEnd/c.scm 99 */
									BGl_indentz00zzcc_indentz00(BgL_czd2prefixzd2_3275);
								}
							else
								{	/* BackEnd/c.scm 99 */
									BFALSE;
								}
						}
						BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long) 20)),
							BGl_proc2096z00zzbackend_cz00);
					}
				else
					{	/* BackEnd/c.scm 98 */
						BFALSE;
					}
				return BgL_czd2prefixzd2_3275;
			}
		}

	}



/* &<@anonymous:1791> */
	obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzbackend_cz00(obj_t BgL_envz00_3128)
	{
		{	/* BackEnd/c.scm 100 */
			return CNST_TABLE_REF(((long) 12));
		}

	}



/* &<@anonymous:1783> */
	obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzbackend_cz00(obj_t BgL_envz00_3129)
	{
		{	/* BackEnd/c.scm 97 */
			return CNST_TABLE_REF(((long) 12));
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzbackend_cz00(obj_t BgL_envz00_3130)
	{
		{	/* BackEnd/c.scm 96 */
			return CNST_TABLE_REF(((long) 12));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cz00()
	{
		{	/* BackEnd/c.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 412406778),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 117219677),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 316726430),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbdb_emitz00(((long) 182919799),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 444161933),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzprof_emitz00(((long) 522750775),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 517592978),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 18449014),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 65543845),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_indentz00(((long) 287974838),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_ccz00(((long) 527776109),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 335315250),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcc_rootsz00(((long) 74776161),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 32737868),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(((long) 176521037),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			BGl_modulezd2initializa7ationz75zzcgen_compilez00(((long) 281305334),
				BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
			return BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(((long)
					361756500), BSTRING_TO_STRING(BGl_string2097z00zzbackend_cz00));
		}

	}

#ifdef __cplusplus
}
#endif
