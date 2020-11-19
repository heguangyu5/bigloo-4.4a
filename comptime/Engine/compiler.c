/*===========================================================================*/
/*   (Engine/compiler.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/compiler.scm) */
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


	extern obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	extern obj_t BGl_producezd2modulez12zc0zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	extern obj_t BGl_installzd2typezd2cachez12z12zztype_cachez00();
	static obj_t BGl_z62zc3z04anonymousza31579ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t);
	extern obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31685ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_cnstzd2walkz12zc0zzcnst_walkz00(obj_t);
	extern obj_t BGl_makezd2addzd2heapz00zzheap_makez00();
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	extern obj_t BGl_installzd2initialzd2expanderz00zzexpand_installz00();
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00;
	extern obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31689ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2optimzd2returnzf3za2z21zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzengine_compilerz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t);
	extern obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t);
	extern obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t, bool_t);
	extern obj_t BGl_bdbzd2walkz12zc0zzbdb_walkz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzengine_compilerz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_compilerz00();
	extern obj_t BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	extern obj_t BGl_dumpzd2modulezd2zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_inlinezd2walkz12zc0zzinline_walkz00(obj_t, obj_t);
	extern obj_t BGl_readzd2accesszd2filesz00zzread_accessz00();
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62zc3z04anonymousza31612ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t);
	extern obj_t BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00;
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	extern obj_t BGl_checkzd2typezd2zzast_checkzd2typezd2(obj_t, obj_t, bool_t,
		bool_t);
	static obj_t BGl_z62zc3z04anonymousza31614ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t);
	extern obj_t BGl_astzd2initializa7ersz75zzast_initz00();
	extern obj_t BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
	extern obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31365ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzengine_compilerz00();
	static obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31708ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_lvtypezd2astz12zc0zzast_lvtypez00(obj_t);
	extern obj_t BGl_readzd2srczd2zzread_srcz00();
	static obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31490ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31475ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	static obj_t BGl_z62zc3z04anonymousza31565ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31727ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31477ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31745ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31494ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31729ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_uncellzd2walkz12zc0zzuncell_walkz00(obj_t);
	extern obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
	extern obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	extern obj_t BGl_userzd2walkzd2zzuser_userz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31673ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
	extern obj_t BGl_enginez00zzengine_enginez00();
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzengine_compilerz00 = BUNSPEC;
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	extern obj_t BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
	extern obj_t BGl_z52appendzd22zd2definez52zzexpand_installz00();
	extern obj_t BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
	extern obj_t BGl_makezd2gczd2rootszd2unitzd2zzcc_rootsz00();
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	extern obj_t BGl_patchzd2pairzd2setz12z12zzcfa_pairz00();
	extern obj_t BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzengine_compilerz00();
	extern obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt);
	extern obj_t BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_compilerz00();
	extern obj_t BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
	extern obj_t BGl_checkzd2typeszd2zztype_envz00();
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_z62compilerz62zzengine_compilerz00(obj_t);
	extern obj_t BGl_expandzd2unitszd2zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_z62zc3z04anonymousza31600ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t);
	extern obj_t BGl_initflowzd2walkz12zc0zzinitflow_walkz00(obj_t);
	extern obj_t BGl_setzd2defaultzd2typez12z12zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_makezd2heapzd2zzheap_makez00();
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_returnzd2walkz12zc0zzreturn_walkz00(obj_t);
	extern obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t);
	extern obj_t BGl_restorezd2heapzd2zzheap_restorez00();
	BGL_EXPORTED_DECL obj_t BGl_compilerz00zzengine_compilerz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_compilerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_rootsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzisa_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzuncell_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreturn_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzhgen_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classgenz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzfxop_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinitflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzstackable_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_installz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzuser_userz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_checkzd2typezd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_signalsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31607ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	static obj_t BGl_z62zc3z04anonymousza31462ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
	static obj_t BGl_cnstzd2initzd2zzengine_compilerz00();
	static obj_t BGl_z62zc3z04anonymousza31625ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_compilerz00();
	extern obj_t BGl_za2prezd2processorza2zd2zzengine_paramz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_compilerz00();
	static obj_t BGl_z62zc3z04anonymousza31642ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31537ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00;
	extern obj_t BGl_stackablezd2walkz12zc0zzstackable_walkz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31449ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2interpreterza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t);
	extern obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t);
	extern obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00;
	extern obj_t BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
	extern obj_t BGl_fxopzd2walkz12zc0zzfxop_walkz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31645ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	extern obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_makezd2profzd2unitz00zzprof_walkz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2readerza2z00zzengine_paramz00;
	extern obj_t BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzengine_compilerz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31576ze3ze5zzengine_compilerz00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	extern obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t);
	extern obj_t BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t);
	static obj_t __cnst[57];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1925z00zzengine_compilerz00,
		BgL_bgl_za762za7c3za704anonymo1971za7,
		BGl_z62zc3z04anonymousza31365ze3ze5zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1932z00zzengine_compilerz00,
		BgL_bgl_za762za7c3za704anonymo1972za7,
		BGl_z62zc3z04anonymousza31477ze3ze5zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1934z00zzengine_compilerz00,
		BgL_bgl_za762za7c3za704anonymo1973za7,
		BGl_z62zc3z04anonymousza31494ze3ze5zzengine_compilerz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1940z00zzengine_compilerz00,
		BgL_bgl_za762za7c3za704anonymo1974za7,
		BGl_z62zc3z04anonymousza31583ze3ze5zzengine_compilerz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_classgenzd2walkzd2envz00zzobject_classgenz00;
	extern obj_t BGl_hgenzd2walkzd2envz00zzhgen_walkz00;
	   
		 
		DEFINE_STRING(BGl_string1922z00zzengine_compilerz00,
		BgL_bgl_string1922za700za7za7e1975za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1923z00zzengine_compilerz00,
		BgL_bgl_string1923za700za7za7e1976za7, "Illegal source file", 19);
	      DEFINE_STRING(BGl_string1924z00zzengine_compilerz00,
		BgL_bgl_string1924za700za7za7e1977za7,
		"Don't know what to do with arguments: ", 38);
	      DEFINE_STRING(BGl_string1926z00zzengine_compilerz00,
		BgL_bgl_string1926za700za7za7e1978za7, " error", 6);
	      DEFINE_STRING(BGl_string1927z00zzengine_compilerz00,
		BgL_bgl_string1927za700za7za7e1979za7, "s", 1);
	      DEFINE_STRING(BGl_string1928z00zzengine_compilerz00,
		BgL_bgl_string1928za700za7za7e1980za7, "", 0);
	      DEFINE_STRING(BGl_string1929z00zzengine_compilerz00,
		BgL_bgl_string1929za700za7za7e1981za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1930z00zzengine_compilerz00,
		BgL_bgl_string1930za700za7za7e1982za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1931z00zzengine_compilerz00,
		BgL_bgl_string1931za700za7za7e1983za7, "ast", 3);
	      DEFINE_STRING(BGl_string1933z00zzengine_compilerz00,
		BgL_bgl_string1933za700za7za7e1984za7, "initflow", 8);
	      DEFINE_STRING(BGl_string1935z00zzengine_compilerz00,
		BgL_bgl_string1935za700za7za7e1985za7, "trace", 5);
	      DEFINE_STRING(BGl_string1936z00zzengine_compilerz00,
		BgL_bgl_string1936za700za7za7e1986za7, "callcc", 6);
	      DEFINE_STRING(BGl_string1937z00zzengine_compilerz00,
		BgL_bgl_string1937za700za7za7e1987za7, "effect", 6);
	      DEFINE_STRING(BGl_string1938z00zzengine_compilerz00,
		BgL_bgl_string1938za700za7za7e1988za7, "stackable", 9);
	      DEFINE_STRING(BGl_string1939z00zzengine_compilerz00,
		BgL_bgl_string1939za700za7za7e1989za7, "inline", 6);
	      DEFINE_STRING(BGl_string1941z00zzengine_compilerz00,
		BgL_bgl_string1941za700za7za7e1990za7, "beta", 4);
	      DEFINE_STRING(BGl_string1942z00zzengine_compilerz00,
		BgL_bgl_string1942za700za7za7e1991za7, "fail", 4);
	      DEFINE_STRING(BGl_string1943z00zzengine_compilerz00,
		BgL_bgl_string1943za700za7za7e1992za7, "Reduce0", 7);
	      DEFINE_STRING(BGl_string1944z00zzengine_compilerz00,
		BgL_bgl_string1944za700za7za7e1993za7, "Dataflow", 8);
	      DEFINE_STRING(BGl_string1945z00zzengine_compilerz00,
		BgL_bgl_string1945za700za7za7e1994za7, "dataflow", 8);
	      DEFINE_STRING(BGl_string1946z00zzengine_compilerz00,
		BgL_bgl_string1946za700za7za7e1995za7, "closure", 7);
	      DEFINE_STRING(BGl_string1947z00zzengine_compilerz00,
		BgL_bgl_string1947za700za7za7e1996za7, "cfa", 3);
	      DEFINE_STRING(BGl_string1948z00zzengine_compilerz00,
		BgL_bgl_string1948za700za7za7e1997za7, "Dataflow+", 9);
	      DEFINE_STRING(BGl_string1949z00zzengine_compilerz00,
		BgL_bgl_string1949za700za7za7e1998za7, "integrate", 9);
	      DEFINE_STRING(BGl_string1950z00zzengine_compilerz00,
		BgL_bgl_string1950za700za7za7e1999za7, "tailc", 5);
	      DEFINE_STRING(BGl_string1951z00zzengine_compilerz00,
		BgL_bgl_string1951za700za7za7e2000za7, "Reduce-", 7);
	      DEFINE_STRING(BGl_string1952z00zzengine_compilerz00,
		BgL_bgl_string1952za700za7za7e2001za7, "reduce-", 7);
	      DEFINE_STRING(BGl_string1953z00zzengine_compilerz00,
		BgL_bgl_string1953za700za7za7e2002za7, "abound", 6);
	      DEFINE_STRING(BGl_string1954z00zzengine_compilerz00,
		BgL_bgl_string1954za700za7za7e2003za7, "coerce", 6);
	      DEFINE_STRING(BGl_string1955z00zzengine_compilerz00,
		BgL_bgl_string1955za700za7za7e2004za7, "fxop", 4);
	      DEFINE_STRING(BGl_string1956z00zzengine_compilerz00,
		BgL_bgl_string1956za700za7za7e2005za7, "Dataflow++", 10);
	      DEFINE_STRING(BGl_string1957z00zzengine_compilerz00,
		BgL_bgl_string1957za700za7za7e2006za7, "Reduce", 6);
	      DEFINE_STRING(BGl_string1958z00zzengine_compilerz00,
		BgL_bgl_string1958za700za7za7e2007za7, "reduce", 6);
	      DEFINE_STRING(BGl_string1959z00zzengine_compilerz00,
		BgL_bgl_string1959za700za7za7e2008za7, "cnst", 4);
	      DEFINE_STRING(BGl_string1960z00zzengine_compilerz00,
		BgL_bgl_string1960za700za7za7e2009za7, "return", 6);
	      DEFINE_STRING(BGl_string1961z00zzengine_compilerz00,
		BgL_bgl_string1961za700za7za7e2010za7, "inline+", 7);
	      DEFINE_STRING(BGl_string1962z00zzengine_compilerz00,
		BgL_bgl_string1962za700za7za7e2011za7, "init", 4);
	      DEFINE_STRING(BGl_string1963z00zzengine_compilerz00,
		BgL_bgl_string1963za700za7za7e2012za7, "Reduce+", 7);
	      DEFINE_STRING(BGl_string1964z00zzengine_compilerz00,
		BgL_bgl_string1964za700za7za7e2013za7, "reduce+", 7);
	      DEFINE_STRING(BGl_string1965z00zzengine_compilerz00,
		BgL_bgl_string1965za700za7za7e2014za7, "uncell", 6);
	      DEFINE_STRING(BGl_string1966z00zzengine_compilerz00,
		BgL_bgl_string1966za700za7za7e2015za7, "engine_compiler", 15);
	      DEFINE_STRING(BGl_string1967z00zzengine_compilerz00,
		BgL_bgl_string1967za700za7za7e2016za7,
		"now uncell reduce+ effect+ init inline+ reducer return cnst reduce egen dataflow++ fxop (c c-saw) coerce abound reduce- tailc integrate dataflow+ cfa closure dataflow fail beta make-add-heap inline all stackable effect callcc bdb-spread-obj make-heap initflow syntax-check ast expand user hgen bigloo-debug-set! (#unspecified) mco dump-module bigloo-class-sans bigloo-unsafe bigloo-unsafe-version bigloo-unsafe-eval bigloo-unsafe-library bigloo-unsafe-arity bigloo-unsafe-range bigloo-unsafe-type bigloo-debug bigloo-class-generate classgen bigloo-compile bdb intern-src ",
		571);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2envzd2zzengine_compilerz00,
		BgL_bgl_za762compilerza762za7za72017z00,
		BGl_z62compilerz62zzengine_compilerz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzengine_compilerz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzengine_compilerz00(long
		BgL_checksumz00_2494, char *BgL_fromz00_2495)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_compilerz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_compilerz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_compilerz00();
					BGl_libraryzd2moduleszd2initz00zzengine_compilerz00();
					BGl_cnstzd2initzd2zzengine_compilerz00();
					BGl_importedzd2moduleszd2initz00zzengine_compilerz00();
					return BGl_toplevelzd2initzd2zzengine_compilerz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_compiler");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"engine_compiler");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			{	/* Engine/compiler.scm 15 */
				obj_t BgL_cportz00_2481;

				{	/* Engine/compiler.scm 15 */
					obj_t BgL_stringz00_2489;

					BgL_stringz00_2489 = BGl_string1967z00zzengine_compilerz00;
					{	/* Engine/compiler.scm 15 */
						obj_t BgL_startz00_2490;

						BgL_startz00_2490 = BINT(((long) 0));
						{	/* Engine/compiler.scm 15 */
							obj_t BgL_endz00_2491;

							BgL_endz00_2491 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2489)));
							{	/* Engine/compiler.scm 15 */

								BgL_cportz00_2481 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2489, BgL_startz00_2490, BgL_endz00_2491);
				}}}}
				{
					long BgL_iz00_2482;

					BgL_iz00_2482 = ((long) 56);
				BgL_loopz00_2483:
					if ((BgL_iz00_2482 == ((long) -1)))
						{	/* Engine/compiler.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/compiler.scm 15 */
							{	/* Engine/compiler.scm 15 */
								obj_t BgL_arg1969z00_2485;

								{	/* Engine/compiler.scm 15 */

									{	/* Engine/compiler.scm 15 */
										obj_t BgL_locationz00_2487;

										BgL_locationz00_2487 = BBOOL(((bool_t) 0));
										{	/* Engine/compiler.scm 15 */

											BgL_arg1969z00_2485 =
												BGl_readz00zz__readerz00(BgL_cportz00_2481,
												BgL_locationz00_2487);
										}
									}
								}
								{	/* Engine/compiler.scm 15 */
									int BgL_tmpz00_2524;

									BgL_tmpz00_2524 = (int) (BgL_iz00_2482);
									CNST_TABLE_SET(BgL_tmpz00_2524, BgL_arg1969z00_2485);
							}}
							{	/* Engine/compiler.scm 15 */
								int BgL_auxz00_2488;

								BgL_auxz00_2488 = (int) ((BgL_iz00_2482 - ((long) 1)));
								{
									long BgL_iz00_2529;

									BgL_iz00_2529 = (long) (BgL_auxz00_2488);
									BgL_iz00_2482 = BgL_iz00_2529;
									goto BgL_loopz00_2483;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzengine_compilerz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1693;

				BgL_headz00_1693 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1694;
					obj_t BgL_tailz00_1695;

					BgL_prevz00_1694 = BgL_headz00_1693;
					BgL_tailz00_1695 = BgL_l1z00_1;
				BgL_loopz00_1696:
					if (PAIRP(BgL_tailz00_1695))
						{
							obj_t BgL_newzd2prevzd2_1698;

							BgL_newzd2prevzd2_1698 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1695), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1694, BgL_newzd2prevzd2_1698);
							{
								obj_t BgL_tailz00_2539;
								obj_t BgL_prevz00_2538;

								BgL_prevz00_2538 = BgL_newzd2prevzd2_1698;
								BgL_tailz00_2539 = CDR(BgL_tailz00_1695);
								BgL_tailz00_1695 = BgL_tailz00_2539;
								BgL_prevz00_1694 = BgL_prevz00_2538;
								goto BgL_loopz00_1696;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1693);
				}
			}
		}

	}



/* compiler */
	BGL_EXPORTED_DEF obj_t BGl_compilerz00zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 100 */
			BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			{	/* Engine/compiler.scm 108 */
				bool_t BgL_test2021z00_2544;

				{	/* Engine/compiler.scm 108 */
					int BgL_arg1322z00_1723;

					BgL_arg1322z00_1723 = BGl_bigloozd2compilerzd2debugz00zz__paramz00();
					BgL_test2021z00_2544 = ((long) (BgL_arg1322z00_1723) > ((long) 0));
				}
				if (BgL_test2021z00_2544)
					{	/* Engine/compiler.scm 108 */
						BFALSE;
					}
				else
					{	/* Engine/compiler.scm 108 */
						{	/* Engine/compiler.scm 109 */
							bool_t BgL_test2022z00_2548;

							{	/* Engine/compiler.scm 109 */
								obj_t BgL_arg1316z00_1719;

								BgL_arg1316z00_1719 =
									BGl_thezd2backendzd2zzbackend_backendz00();
								BgL_test2022z00_2548 =
									(((BgL_backendz00_bglt) COBJECT(
											((BgL_backendz00_bglt) BgL_arg1316z00_1719)))->
									BgL_boundzd2checkzd2);
							}
							if (BgL_test2022z00_2548)
								{	/* Engine/compiler.scm 109 */
									BFALSE;
								}
							else
								{	/* Engine/compiler.scm 109 */
									BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BTRUE;
								}
						}
						{	/* Engine/compiler.scm 111 */
							bool_t BgL_test2023z00_2552;

							{	/* Engine/compiler.scm 111 */
								obj_t BgL_arg1319z00_1722;

								BgL_arg1319z00_1722 =
									BGl_thezd2backendzd2zzbackend_backendz00();
								BgL_test2023z00_2552 =
									(((BgL_backendz00_bglt) COBJECT(
											((BgL_backendz00_bglt) BgL_arg1319z00_1722)))->
									BgL_typezd2checkzd2);
							}
							if (BgL_test2023z00_2552)
								{	/* Engine/compiler.scm 111 */
									BFALSE;
								}
							else
								{	/* Engine/compiler.scm 111 */
									BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BTRUE;
								}
						}
					}
			}
			{	/* Engine/compiler.scm 113 */
				bool_t BgL_test2024z00_2556;

				{	/* Engine/compiler.scm 113 */
					obj_t BgL_arg1326z00_1726;

					BgL_arg1326z00_1726 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_test2024z00_2556 =
						(((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_arg1326z00_1726)))->
						BgL_typedzd2funcallzd2);
				}
				if (BgL_test2024z00_2556)
					{	/* Engine/compiler.scm 113 */
						BFALSE;
					}
				else
					{	/* Engine/compiler.scm 113 */
						BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00 =
							BFALSE;
					}
			}
			{	/* Engine/compiler.scm 117 */
				obj_t BgL_srcz00_1727;

				{	/* Engine/compiler.scm 117 */
					obj_t BgL_arg1760z00_1971;

					BgL_arg1760z00_1971 = BGl_readzd2srczd2zzread_srcz00();
					BgL_srcz00_1727 =
						PROCEDURE_ENTRY(BGl_za2prezd2processorza2zd2zzengine_paramz00)
						(BGl_za2prezd2processorza2zd2zzengine_paramz00, BgL_arg1760z00_1971,
						BEOA);
				}
				if (CBOOL(BgL_srcz00_1727))
					{	/* Engine/compiler.scm 122 */
						if (PAIRP(BgL_srcz00_1727))
							{	/* Engine/compiler.scm 125 */
								BFALSE;
							}
						else
							{	/* Engine/compiler.scm 125 */
								if (
									(BGl_za2readerza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 0))))
									{	/* Engine/compiler.scm 127 */
										obj_t BgL_list1329z00_1730;

										BgL_list1329z00_1730 =
											MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL);
										BGl_exitz00zz__errorz00(BgL_list1329z00_1730);
									}
								else
									{	/* Engine/compiler.scm 126 */
										BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1922z00zzengine_compilerz00,
											BGl_string1923z00zzengine_compilerz00, BgL_srcz00_1727,
											BNIL);
									}
							}
					}
				else
					{	/* Engine/compiler.scm 122 */
						BGl_za2interpreterza2z00zzengine_paramz00 = BTRUE;
						BGl_compilerzd2exitzd2zzinit_mainz00(BGl_enginez00zzengine_enginez00
							());
					}
				BGl_hellozd2worldzd2zzengine_enginez00();
				{	/* Engine/compiler.scm 134 */
					bool_t BgL_test2028z00_2579;

					if (
						((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
							((long) 0)))
						{	/* Engine/compiler.scm 135 */
							obj_t BgL_arg1337z00_1738;

							{	/* Engine/compiler.scm 135 */
								obj_t BgL_arg1338z00_1739;

								BgL_arg1338z00_1739 =
									BGl_thezd2backendzd2zzbackend_backendz00();
								BgL_arg1337z00_1738 =
									(((BgL_backendz00_bglt) COBJECT(
											((BgL_backendz00_bglt) BgL_arg1338z00_1739)))->
									BgL_debugzd2supportzd2);
							}
							BgL_test2028z00_2579 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 1)), BgL_arg1337z00_1738));
						}
					else
						{	/* Engine/compiler.scm 134 */
							BgL_test2028z00_2579 = ((bool_t) 0);
						}
					if (BgL_test2028z00_2579)
						{	/* Engine/compiler.scm 134 */
							BGl_bdbzd2settingz12zc0zzbdb_settingz00();
						}
					else
						{	/* Engine/compiler.scm 134 */
							BFALSE;
						}
				}
				if (NULLP(BGl_za2restzd2argsza2zd2zzengine_paramz00))
					{	/* Engine/compiler.scm 139 */
						BFALSE;
					}
				else
					{	/* Engine/compiler.scm 140 */
						obj_t BgL_list1342z00_1741;

						{	/* Engine/compiler.scm 140 */
							obj_t BgL_arg1344z00_1742;

							BgL_arg1344z00_1742 =
								MAKE_YOUNG_PAIR(BGl_za2restzd2argsza2zd2zzengine_paramz00,
								BNIL);
							BgL_list1342z00_1741 =
								MAKE_YOUNG_PAIR(BGl_string1924z00zzengine_compilerz00,
								BgL_arg1344z00_1742);
						}
						BGl_warningz00zz__errorz00(BgL_list1342z00_1741);
					}
				BGl_readzd2accesszd2filesz00zzread_accessz00();
				BGl_readzd2jfilezd2zzread_jvmz00();
				if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
					{	/* Engine/compiler.scm 147 */
						BGl_initializa7ezd2Genvz12z67zzast_envz00();
						BGl_initializa7ezd2Tenvz12z67zztype_envz00();
					}
				else
					{	/* Engine/compiler.scm 147 */
						BGl_restorezd2heapzd2zzheap_restorez00();
					}
				BGl_installzd2typezd2cachez12z12zztype_cachez00();
				BGl_patchzd2vectorzd2setz12z12zzcfa_tvectorz00();
				BGl_patchzd2pairzd2setz12z12zzcfa_pairz00();
				BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF(((long)
							2)));
				if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 3))))
					{	/* Engine/compiler.scm 167 */
						BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
									(long) 4)));
					}
				else
					{	/* Engine/compiler.scm 167 */
						BFALSE;
					}
				{	/* Engine/compiler.scm 168 */
					bool_t BgL_test2033z00_2612;

					{	/* Engine/compiler.scm 168 */
						int BgL_arg1357z00_1746;

						BgL_arg1357z00_1746 =
							BGl_bigloozd2compilerzd2debugz00zz__paramz00();
						BgL_test2033z00_2612 = ((long) (BgL_arg1357z00_1746) >= ((long) 1));
					}
					if (BgL_test2033z00_2612)
						{	/* Engine/compiler.scm 168 */
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 5)));
						}
					else
						{	/* Engine/compiler.scm 168 */
							BFALSE;
						}
				}
				{	/* Engine/compiler.scm 169 */
					long BgL_unsafez00_1747;

					BgL_unsafez00_1747 = ((long) 0);
					if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 170 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 6)));
						}
					else
						{	/* Engine/compiler.scm 170 */
							BFALSE;
						}
					if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 173 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 7)));
						}
					else
						{	/* Engine/compiler.scm 173 */
							BFALSE;
						}
					if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 176 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 8)));
						}
					else
						{	/* Engine/compiler.scm 176 */
							BFALSE;
						}
					if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 179 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 9)));
						}
					else
						{	/* Engine/compiler.scm 179 */
							BFALSE;
						}
					if (CBOOL(BGl_za2unsafezd2evalza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 182 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 10)));
						}
					else
						{	/* Engine/compiler.scm 182 */
							BFALSE;
						}
					if (CBOOL(BGl_za2unsafezd2versionza2zd2zzengine_paramz00))
						{	/* Engine/compiler.scm 185 */
							BgL_unsafez00_1747 = (((long) 1) + BgL_unsafez00_1747);
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 11)));
						}
					else
						{	/* Engine/compiler.scm 185 */
							BFALSE;
						}
					if ((BgL_unsafez00_1747 == ((long) 6)))
						{	/* Engine/compiler.scm 188 */
							BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF((
										(long) 12)));
						}
					else
						{	/* Engine/compiler.scm 188 */
							BFALSE;
						}
				}
				BGl_installzd2initialzd2expanderz00zzexpand_installz00();
				BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(CNST_TABLE_REF(((long)
							13)));
				{	/* Engine/compiler.scm 199 */
					obj_t BgL_exp0z00_1749;

					{	/* Engine/compiler.scm 199 */
						obj_t BgL_arg1759z00_1970;

						BgL_arg1759z00_1970 = CAR(((obj_t) BgL_srcz00_1727));
						BgL_exp0z00_1749 =
							BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
							(BgL_arg1759z00_1970);
					}
					{	/* Engine/compiler.scm 199 */
						obj_t BgL_modulez00_1750;

						BgL_modulez00_1750 =
							BGl_prognzd2firstzd2expressionz00zztools_prognz00
							(BgL_exp0z00_1749);
						{	/* Engine/compiler.scm 200 */
							obj_t BgL_srczd2codezd2_1751;

							{	/* Engine/compiler.scm 201 */
								obj_t BgL_arg1756z00_1968;
								obj_t BgL_arg1757z00_1969;

								BgL_arg1756z00_1968 =
									BGl_prognzd2tailzd2expressionsz00zztools_prognz00
									(BgL_exp0z00_1749);
								BgL_arg1757z00_1969 = CDR(((obj_t) BgL_srcz00_1727));
								BgL_srczd2codezd2_1751 =
									BGl_appendzd221011zd2zzengine_compilerz00(BgL_arg1756z00_1968,
									BgL_arg1757z00_1969);
							}
							{	/* Engine/compiler.scm 201 */
								obj_t BgL_unitsz00_2439;

								{	/* Engine/compiler.scm 202 */
									obj_t BgL_cellvalz00_2663;

									BgL_cellvalz00_2663 =
										BGl_producezd2modulez12zc0zzmodule_modulez00
										(BgL_modulez00_1750);
									BgL_unitsz00_2439 = MAKE_CELL(BgL_cellvalz00_2663);
								}
								{	/* Engine/compiler.scm 202 */

									{	/* Engine/compiler.scm 204 */
										obj_t BgL_zc3z04anonymousza31361ze3z87_2367;

										BgL_zc3z04anonymousza31361ze3z87_2367 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31361ze3ze5zzengine_compilerz00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31361ze3z87_2367,
											(int) (((long) 0)), BgL_modulez00_1750);
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 14)), BgL_zc3z04anonymousza31361ze3z87_2367);
									}
									if (
										((long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00)
											>= ((long) 1)))
										{	/* Engine/compiler.scm 208 */
											obj_t BgL_auxz00_2440;

											{	/* Engine/compiler.scm 208 */
												obj_t BgL_arg1363z00_1757;

												BgL_arg1363z00_1757 =
													BGl_makezd2profzd2unitz00zzprof_walkz00();
												BgL_auxz00_2440 =
													MAKE_YOUNG_PAIR(BgL_arg1363z00_1757,
													CELL_REF(BgL_unitsz00_2439));
											}
											CELL_SET(BgL_unitsz00_2439, BgL_auxz00_2440);
										}
									else
										{	/* Engine/compiler.scm 207 */
											BFALSE;
										}
									if (CBOOL
										(BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00))
										{	/* Engine/compiler.scm 211 */
											BGl_modulezd2checksumzd2objectz00zzmodule_modulez00();
										}
									else
										{	/* Engine/compiler.scm 211 */
											BFALSE;
										}
									BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long)
												15)), BGl_proc1925z00zzengine_compilerz00);
									{	/* Engine/compiler.scm 216 */
										obj_t BgL_c0z00_1761;

										if (NULLP(BgL_srczd2codezd2_1751))
											{	/* Engine/compiler.scm 216 */
												BgL_c0z00_1761 = CNST_TABLE_REF(((long) 16));
											}
										else
											{	/* Engine/compiler.scm 216 */
												BgL_c0z00_1761 = BgL_srczd2codezd2_1751;
											}
										{	/* Engine/compiler.scm 216 */
											obj_t BgL_c1z00_1762;

											{	/* Engine/compiler.scm 217 */
												bool_t BgL_test2044z00_2685;

												if (
													((long)
														CINT
														(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
														>= ((long) 1)))
													{	/* Engine/compiler.scm 217 */
														BgL_test2044z00_2685 =
															CBOOL(BGl_za2mainza2z00zzmodule_modulez00);
													}
												else
													{	/* Engine/compiler.scm 217 */
														BgL_test2044z00_2685 = ((bool_t) 0);
													}
												if (BgL_test2044z00_2685)
													{	/* Engine/compiler.scm 219 */
														obj_t BgL_arg1381z00_1771;

														{	/* Engine/compiler.scm 219 */
															obj_t BgL_arg1382z00_1772;

															{	/* Engine/compiler.scm 219 */
																obj_t BgL_arg1383z00_1773;

																{	/* Engine/compiler.scm 219 */
																	int BgL_xz00_1774;
																	obj_t BgL_yz00_1775;

																	BgL_xz00_1774 =
																		BGl_bigloozd2compilerzd2debugz00zz__paramz00
																		();
																	BgL_yz00_1775 =
																		BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
																	BgL_arg1383z00_1773 =
																		BGl_2maxz00zz__r4_numbers_6_5z00(BINT
																		(BgL_xz00_1774), BgL_yz00_1775);
																}
																BgL_arg1382z00_1772 =
																	MAKE_YOUNG_PAIR(BgL_arg1383z00_1773, BNIL);
															}
															BgL_arg1381z00_1771 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
																BgL_arg1382z00_1772);
														}
														BgL_c1z00_1762 =
															MAKE_YOUNG_PAIR(BgL_arg1381z00_1771,
															BgL_c0z00_1761);
													}
												else
													{	/* Engine/compiler.scm 217 */
														BgL_c1z00_1762 = BgL_c0z00_1761;
													}
											}
											{	/* Engine/compiler.scm 217 */

												BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
													(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
													BgL_c1z00_1762);
												if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
														((long) 2)))
													{	/* Engine/compiler.scm 225 */
														obj_t BgL_arg1370z00_1765;
														obj_t BgL_arg1371z00_1766;

														BgL_arg1370z00_1765 =
															BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
														{	/* Engine/compiler.scm 226 */
															obj_t BgL_arg1372z00_1767;

															BgL_arg1372z00_1767 =
																BGl_z52appendzd22zd2definez52zzexpand_installz00
																();
															{	/* Engine/compiler.scm 226 */
																obj_t BgL_list1373z00_1768;

																BgL_list1373z00_1768 =
																	MAKE_YOUNG_PAIR(BgL_arg1372z00_1767, BNIL);
																BgL_arg1371z00_1766 = BgL_list1373z00_1768;
														}}
														BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00
															(BgL_arg1370z00_1765, BgL_arg1371z00_1766);
													}
												else
													{	/* Engine/compiler.scm 224 */
														BFALSE;
													}
											}
										}
									}
									if (
										((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Engine/compiler.scm 229 */
											{	/* Engine/compiler.scm 229 */
												obj_t BgL_port1294z00_1780;

												{	/* Engine/compiler.scm 229 */
													obj_t BgL_res1902z00_2267;

													{	/* Engine/compiler.scm 229 */
														obj_t BgL_tmpz00_2709;

														BgL_tmpz00_2709 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1902z00_2267 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2709);
													}
													BgL_port1294z00_1780 = BgL_res1902z00_2267;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port1294z00_1780);
												bgl_display_string
													(BGl_string1926z00zzengine_compilerz00,
													BgL_port1294z00_1780);
												{	/* Engine/compiler.scm 229 */
													obj_t BgL_arg1394z00_1781;

													{	/* Engine/compiler.scm 229 */
														bool_t BgL_test2048z00_2714;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Engine/compiler.scm 229 */
																if (INTEGERP
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
																	{	/* Engine/compiler.scm 229 */
																		BgL_test2048z00_2714 =
																			(
																			(long)
																			CINT
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																			> ((long) 1));
																	}
																else
																	{	/* Engine/compiler.scm 229 */
																		BgL_test2048z00_2714 =
																			BGl_2ze3ze3zz__r4_numbers_6_5z00
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																			BINT(((long) 1)));
															}}
														else
															{	/* Engine/compiler.scm 229 */
																BgL_test2048z00_2714 = ((bool_t) 0);
															}
														if (BgL_test2048z00_2714)
															{	/* Engine/compiler.scm 229 */
																BgL_arg1394z00_1781 =
																	BGl_string1927z00zzengine_compilerz00;
															}
														else
															{	/* Engine/compiler.scm 229 */
																BgL_arg1394z00_1781 =
																	BGl_string1928z00zzengine_compilerz00;
															}
													}
													bgl_display_obj(BgL_arg1394z00_1781,
														BgL_port1294z00_1780);
												}
												bgl_display_string
													(BGl_string1929z00zzengine_compilerz00,
													BgL_port1294z00_1780);
												bgl_display_char(((unsigned char) 10),
													BgL_port1294z00_1780);
											}
											{	/* Engine/compiler.scm 229 */
												obj_t BgL_list1398z00_1787;

												BgL_list1398z00_1787 =
													MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
												BGl_exitz00zz__errorz00(BgL_list1398z00_1787);
										}}
									else
										{	/* Engine/compiler.scm 229 */
											obj_t BgL_g1110z00_1788;

											BgL_g1110z00_1788 = BNIL;
											{
												obj_t BgL_hooksz00_1791;
												obj_t BgL_hnamesz00_1792;

												BgL_hooksz00_1791 = BgL_g1110z00_1788;
												BgL_hnamesz00_1792 = BNIL;
											BgL_zc3z04anonymousza31399ze3z87_1793:
												if (NULLP(BgL_hooksz00_1791))
													{	/* Engine/compiler.scm 229 */
														BUNSPEC;
													}
												else
													{	/* Engine/compiler.scm 229 */
														bool_t BgL_test2052z00_2731;

														{	/* Engine/compiler.scm 229 */
															obj_t BgL_fun1423z00_1800;

															BgL_fun1423z00_1800 =
																CAR(((obj_t) BgL_hooksz00_1791));
															BgL_test2052z00_2731 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1423z00_1800)
																(BgL_fun1423z00_1800, BEOA));
														}
														if (BgL_test2052z00_2731)
															{	/* Engine/compiler.scm 229 */
																obj_t BgL_arg1417z00_1797;
																obj_t BgL_arg1418z00_1798;

																BgL_arg1417z00_1797 =
																	CDR(((obj_t) BgL_hooksz00_1791));
																BgL_arg1418z00_1798 =
																	CDR(((obj_t) BgL_hnamesz00_1792));
																{
																	obj_t BgL_hnamesz00_2743;
																	obj_t BgL_hooksz00_2742;

																	BgL_hooksz00_2742 = BgL_arg1417z00_1797;
																	BgL_hnamesz00_2743 = BgL_arg1418z00_1798;
																	BgL_hnamesz00_1792 = BgL_hnamesz00_2743;
																	BgL_hooksz00_1791 = BgL_hooksz00_2742;
																	goto BgL_zc3z04anonymousza31399ze3z87_1793;
																}
															}
														else
															{	/* Engine/compiler.scm 229 */
																obj_t BgL_arg1421z00_1799;

																BgL_arg1421z00_1799 =
																	CAR(((obj_t) BgL_hnamesz00_1792));
																BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_za2currentzd2passza2zd2zzengine_passz00,
																	BGl_string1930z00zzengine_compilerz00,
																	BgL_arg1421z00_1799);
															}
													}
											}
										}
									BGl_checkzd2typeszd2zztype_envz00();
									BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long)
												3)), BGl_classgenzd2walkzd2envz00zzobject_classgenz00);
									BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF(((long)
												18)), BGl_hgenzd2walkzd2envz00zzhgen_walkz00);
									BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
									BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
									BGl_additionalzd2heapzd2restorezd2globalsz12zc0zzast_envz00();
									BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00
										(BGl_getzd2toplevelzd2unitz00zzmodule_includez00(),
										BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00());
									BGl_userzd2walkzd2zzuser_userz00(CELL_REF(BgL_unitsz00_2439));
									{	/* Engine/compiler.scm 252 */
										obj_t BgL_zc3z04anonymousza31449ze3z87_2365;

										BgL_zc3z04anonymousza31449ze3z87_2365 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31449ze3ze5zzengine_compilerz00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31449ze3z87_2365,
											(int) (((long) 0)), ((obj_t) BgL_unitsz00_2439));
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 19)), BgL_zc3z04anonymousza31449ze3z87_2365);
									}
									BGl_expandzd2unitszd2zzexpand_epsz00(CELL_REF
										(BgL_unitsz00_2439));
									{	/* Engine/compiler.scm 256 */
										obj_t BgL_zc3z04anonymousza31462ze3z87_2364;

										BgL_zc3z04anonymousza31462ze3z87_2364 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31462ze3ze5zzengine_compilerz00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31462ze3z87_2364,
											(int) (((long) 0)), ((obj_t) BgL_unitsz00_2439));
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 20)), BgL_zc3z04anonymousza31462ze3z87_2364);
									}
									{	/* Engine/compiler.scm 259 */
										obj_t BgL_arg1464z00_1811;

										BgL_arg1464z00_1811 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(
											((BgL_backendz00_bglt) BgL_arg1464z00_1811));
									}
									if (CBOOL
										(BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00))
										{	/* Engine/compiler.scm 263 */
											obj_t BgL_auxz00_2443;

											{	/* Engine/compiler.scm 263 */
												obj_t BgL_arg1465z00_1812;

												BgL_arg1465z00_1812 =
													BGl_makezd2gczd2rootszd2unitzd2zzcc_rootsz00();
												BgL_auxz00_2443 =
													MAKE_YOUNG_PAIR(BgL_arg1465z00_1812,
													CELL_REF(BgL_unitsz00_2439));
											}
											CELL_SET(BgL_unitsz00_2439, BgL_auxz00_2443);
										}
									else
										{	/* Engine/compiler.scm 262 */
											BFALSE;
										}
									{	/* Engine/compiler.scm 266 */
										obj_t BgL_astz00_2444;

										{	/* Engine/compiler.scm 266 */
											obj_t BgL_cellvalz00_2783;

											BgL_cellvalz00_2783 =
												BGl_buildzd2astzd2zzast_buildz00(CELL_REF
												(BgL_unitsz00_2439));
											BgL_astz00_2444 = MAKE_CELL(BgL_cellvalz00_2783);
										}
										{	/* Engine/compiler.scm 267 */
											obj_t BgL_zc3z04anonymousza31475ze3z87_2363;

											BgL_zc3z04anonymousza31475ze3z87_2363 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31475ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31475ze3z87_2363,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 21)), BgL_zc3z04anonymousza31475ze3z87_2363);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1931z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1931z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 22)), BGl_proc1932z00zzengine_compilerz00);
										if (CBOOL
											(BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00))
											{	/* Engine/compiler.scm 278 */
												obj_t BgL_auxz00_2445;

												BgL_auxz00_2445 =
													BGl_initflowzd2walkz12zc0zzinitflow_walkz00(CELL_REF
													(BgL_astz00_2444));
												CELL_SET(BgL_astz00_2444, BgL_auxz00_2445);
											}
										else
											{	/* Engine/compiler.scm 277 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 279 */
											obj_t BgL_zc3z04anonymousza31490ze3z87_2361;

											BgL_zc3z04anonymousza31490ze3z87_2361 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31490ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31490ze3z87_2361,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 23)), BgL_zc3z04anonymousza31490ze3z87_2361);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1933z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1933z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 24)), BGl_proc1934z00zzengine_compilerz00);
										{	/* Engine/compiler.scm 287 */
											bool_t BgL_test2055z00_2812;

											if (
												((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 288 */
													obj_t BgL_arg1521z00_1831;

													{	/* Engine/compiler.scm 288 */
														obj_t BgL_arg1528z00_1832;

														BgL_arg1528z00_1832 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														BgL_arg1521z00_1831 =
															(((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_arg1528z00_1832)))->
															BgL_debugzd2supportzd2);
													}
													BgL_test2055z00_2812 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 1)), BgL_arg1521z00_1831));
												}
											else
												{	/* Engine/compiler.scm 287 */
													BgL_test2055z00_2812 = ((bool_t) 0);
												}
											if (BgL_test2055z00_2812)
												{	/* Engine/compiler.scm 287 */
													BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2
														(CELL_REF(BgL_astz00_2444));
												}
											else
												{	/* Engine/compiler.scm 287 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 290 */
											obj_t BgL_zc3z04anonymousza31537ze3z87_2359;

											BgL_zc3z04anonymousza31537ze3z87_2359 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31537ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31537ze3z87_2359,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 25)), BgL_zc3z04anonymousza31537ze3z87_2359);
										}
										{	/* Engine/compiler.scm 293 */
											bool_t BgL_test2057z00_2831;

											if (
												((long)
													CINT
													(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
													>= ((long) 1)))
												{	/* Engine/compiler.scm 295 */
													obj_t BgL_arg1552z00_1840;

													BgL_arg1552z00_1840 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test2057z00_2831 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1552z00_1840)))->
														BgL_tracezd2supportzd2);
												}
											else
												{	/* Engine/compiler.scm 293 */
													BgL_test2057z00_2831 = ((bool_t) 0);
												}
											if (BgL_test2057z00_2831)
												{	/* Engine/compiler.scm 296 */
													obj_t BgL_auxz00_2446;

													BgL_auxz00_2446 =
														BGl_tracezd2walkz12zc0zztrace_walkz00(CELL_REF
														(BgL_astz00_2444));
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2446);
												}
											else
												{	/* Engine/compiler.scm 293 */
													BFALSE;
												}
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1935z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1935z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 302 */
											bool_t BgL_test2059z00_2841;

											if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
												{	/* Engine/compiler.scm 302 */
													obj_t BgL_arg1561z00_1843;

													BgL_arg1561z00_1843 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test2059z00_2841 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1561z00_1843)))->
														BgL_callccz00);
												}
											else
												{	/* Engine/compiler.scm 302 */
													BgL_test2059z00_2841 = ((bool_t) 0);
												}
											if (BgL_test2059z00_2841)
												{	/* Engine/compiler.scm 303 */
													obj_t BgL_auxz00_2447;

													BgL_auxz00_2447 =
														BGl_callcczd2walkz12zc0zzcallcc_walkz00(CELL_REF
														(BgL_astz00_2444));
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2447);
												}
											else
												{	/* Engine/compiler.scm 302 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 304 */
											obj_t BgL_zc3z04anonymousza31565ze3z87_2358;

											BgL_zc3z04anonymousza31565ze3z87_2358 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31565ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31565ze3z87_2358,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 26)), BgL_zc3z04anonymousza31565ze3z87_2358);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1936z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1936z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 309 */
											obj_t BgL_auxz00_2448;

											BgL_auxz00_2448 =
												BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
												(BgL_astz00_2444), ((bool_t) 0));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2448);
										}
										{	/* Engine/compiler.scm 310 */
											obj_t BgL_zc3z04anonymousza31574ze3z87_2357;

											BgL_zc3z04anonymousza31574ze3z87_2357 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31574ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31574ze3z87_2357,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 27)), BgL_zc3z04anonymousza31574ze3z87_2357);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1937z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1937z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 315 */
											obj_t BgL_auxz00_2449;

											BgL_auxz00_2449 =
												BGl_stackablezd2walkz12zc0zzstackable_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2449);
										}
										{	/* Engine/compiler.scm 316 */
											obj_t BgL_zc3z04anonymousza31576ze3z87_2356;

											BgL_zc3z04anonymousza31576ze3z87_2356 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31576ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31576ze3z87_2356,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 28)), BgL_zc3z04anonymousza31576ze3z87_2356);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1938z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1938z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 321 */
											obj_t BgL_auxz00_2450;

											BgL_auxz00_2450 =
												BGl_inlinezd2walkz12zc0zzinline_walkz00(CELL_REF
												(BgL_astz00_2444), CNST_TABLE_REF(((long) 29)));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2450);
										}
										{	/* Engine/compiler.scm 322 */
											obj_t BgL_zc3z04anonymousza31579ze3z87_2355;

											BgL_zc3z04anonymousza31579ze3z87_2355 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31579ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31579ze3z87_2355,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 30)), BgL_zc3z04anonymousza31579ze3z87_2355);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1939z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1939z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
													(long) 31)), BGl_proc1940z00zzengine_compilerz00);
										{	/* Engine/compiler.scm 336 */
											obj_t BgL_auxz00_2451;

											BgL_auxz00_2451 =
												BGl_betazd2walkz12zc0zzbeta_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2451);
										}
										{	/* Engine/compiler.scm 337 */
											obj_t BgL_zc3z04anonymousza31585ze3z87_2353;

											BgL_zc3z04anonymousza31585ze3z87_2353 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31585ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31585ze3z87_2353,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 32)), BgL_zc3z04anonymousza31585ze3z87_2353);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1941z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1941z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 352 */
											bool_t BgL_test2061z00_2905;

											{	/* Engine/compiler.scm 352 */
												bool_t BgL_test2062z00_2906;

												{	/* Engine/compiler.scm 352 */
													int BgL_arg1597z00_1867;

													BgL_arg1597z00_1867 =
														BGl_bigloozd2compilerzd2debugz00zz__paramz00();
													BgL_test2062z00_2906 =
														((long) (BgL_arg1597z00_1867) >= ((long) 1));
												}
												if (BgL_test2062z00_2906)
													{	/* Engine/compiler.scm 352 */
														BgL_test2061z00_2905 =
															CBOOL
															(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00);
													}
												else
													{	/* Engine/compiler.scm 352 */
														BgL_test2061z00_2905 = ((bool_t) 0);
													}
											}
											if (BgL_test2061z00_2905)
												{	/* Engine/compiler.scm 353 */
													obj_t BgL_auxz00_2452;

													BgL_auxz00_2452 =
														BGl_failzd2walkz12zc0zzfail_walkz00(CELL_REF
														(BgL_astz00_2444));
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2452);
												}
											else
												{	/* Engine/compiler.scm 352 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 354 */
											obj_t BgL_zc3z04anonymousza31600ze3z87_2352;

											BgL_zc3z04anonymousza31600ze3z87_2352 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31600ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31600ze3z87_2352,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 33)), BgL_zc3z04anonymousza31600ze3z87_2352);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1942z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1942z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 360 */
												if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
													{	/* Engine/compiler.scm 361 */
														BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00
															= BFALSE;
													}
												else
													{	/* Engine/compiler.scm 361 */
														{	/* Engine/compiler.scm 364 */
															obj_t BgL_auxz00_2453;

															{	/* Engine/compiler.scm 364 */
																obj_t BgL_list1601z00_1871;

																BgL_list1601z00_1871 =
																	MAKE_YOUNG_PAIR(BTRUE, BNIL);
																BgL_auxz00_2453 =
																	BGl_reducezd2walkz12zc0zzreduce_walkz00
																	(CELL_REF(BgL_astz00_2444),
																	BGl_string1943z00zzengine_compilerz00,
																	BgL_list1601z00_1871);
															}
															CELL_SET(BgL_astz00_2444, BgL_auxz00_2453);
														}
														{	/* Engine/compiler.scm 365 */
															obj_t BgL_auxz00_2454;

															BgL_auxz00_2454 =
																BGl_dataflowzd2walkz12zc0zzdataflow_walkz00
																(CELL_REF(BgL_astz00_2444),
																BGl_string1944z00zzengine_compilerz00);
															CELL_SET(BgL_astz00_2444, BgL_auxz00_2454);
														}
													}
											}
										else
											{	/* Engine/compiler.scm 360 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 366 */
											obj_t BgL_zc3z04anonymousza31605ze3z87_2351;

											BgL_zc3z04anonymousza31605ze3z87_2351 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31605ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31605ze3z87_2351,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 34)), BgL_zc3z04anonymousza31605ze3z87_2351);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 371 */
											obj_t BgL_auxz00_2455;

											BgL_auxz00_2455 =
												BGl_globaliza7ezd2walkz12z67zzglobaliza7e_walkza7
												(CELL_REF(BgL_astz00_2444),
												CNST_TABLE_REF(((long) 35)));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2455);
										}
										{	/* Engine/compiler.scm 372 */
											obj_t BgL_zc3z04anonymousza31607ze3z87_2350;

											BgL_zc3z04anonymousza31607ze3z87_2350 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31607ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31607ze3z87_2350,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 35)), BgL_zc3z04anonymousza31607ze3z87_2350);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1946z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1946z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 0), ((bool_t) 0));
										{	/* Engine/compiler.scm 377 */
											obj_t BgL_auxz00_2456;

											BgL_auxz00_2456 =
												BGl_cfazd2walkz12zc0zzcfa_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2456);
										}
										{	/* Engine/compiler.scm 378 */
											obj_t BgL_zc3z04anonymousza31612ze3z87_2349;

											BgL_zc3z04anonymousza31612ze3z87_2349 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31612ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31612ze3z87_2349,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 36)), BgL_zc3z04anonymousza31612ze3z87_2349);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1947z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1947z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 0));
										BGl_setzd2defaultzd2typez12z12zztype_cachez00((
												(BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 389 */
												obj_t BgL_auxz00_2457;

												BgL_auxz00_2457 =
													BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(CELL_REF
													(BgL_astz00_2444),
													BGl_string1948z00zzengine_compilerz00);
												CELL_SET(BgL_astz00_2444, BgL_auxz00_2457);
											}
										else
											{	/* Engine/compiler.scm 388 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 390 */
											obj_t BgL_zc3z04anonymousza31614ze3z87_2348;

											BgL_zc3z04anonymousza31614ze3z87_2348 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31614ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31614ze3z87_2348,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 37)), BgL_zc3z04anonymousza31614ze3z87_2348);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 0));
										{	/* Engine/compiler.scm 395 */
											obj_t BgL_auxz00_2458;

											BgL_auxz00_2458 =
												BGl_integratezd2walkz12zc0zzintegrate_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2458);
										}
										{	/* Engine/compiler.scm 396 */
											obj_t BgL_zc3z04anonymousza31625ze3z87_2347;

											BgL_zc3z04anonymousza31625ze3z87_2347 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31625ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31625ze3z87_2347,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 38)), BgL_zc3z04anonymousza31625ze3z87_2347);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1949z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1949z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 0));
										{	/* Engine/compiler.scm 401 */
											bool_t BgL_test2066z00_2988;

											if (CBOOL
												(BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00))
												{	/* Engine/compiler.scm 401 */
													BgL_test2066z00_2988 = ((bool_t) 1);
												}
											else
												{	/* Engine/compiler.scm 402 */
													obj_t BgL_arg1631z00_1889;

													BgL_arg1631z00_1889 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test2066z00_2988 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1631z00_1889)))->
														BgL_requirezd2tailczd2);
												}
											if (BgL_test2066z00_2988)
												{	/* Engine/compiler.scm 401 */
													{	/* Engine/compiler.scm 403 */
														obj_t BgL_auxz00_2459;

														BgL_auxz00_2459 =
															BGl_tailczd2walkz12zc0zztailc_walkz00(CELL_REF
															(BgL_astz00_2444));
														CELL_SET(BgL_astz00_2444, BgL_auxz00_2459);
													}
													BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
														(BGl_string1950z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444));
													BGl_checkzd2typezd2zzast_checkzd2typezd2
														(BGl_string1950z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444), ((bool_t) 1),
														((bool_t) 0));
												}
											else
												{	/* Engine/compiler.scm 401 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 406 */
											obj_t BgL_zc3z04anonymousza31635ze3z87_2346;

											BgL_zc3z04anonymousza31635ze3z87_2346 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31635ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31635ze3z87_2346,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 39)), BgL_zc3z04anonymousza31635ze3z87_2346);
										}
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00))
											{	/* Engine/compiler.scm 409 */
												{	/* Engine/compiler.scm 410 */
													obj_t BgL_auxz00_2460;

													{	/* Engine/compiler.scm 410 */
														obj_t BgL_list1636z00_1893;

														BgL_list1636z00_1893 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
														BgL_auxz00_2460 =
															BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
															(BgL_astz00_2444),
															BGl_string1951z00zzengine_compilerz00,
															BgL_list1636z00_1893);
													}
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2460);
												}
												BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
													(BGl_string1952z00zzengine_compilerz00,
													CELL_REF(BgL_astz00_2444));
												BGl_checkzd2typezd2zzast_checkzd2typezd2
													(BGl_string1952z00zzengine_compilerz00,
													CELL_REF(BgL_astz00_2444), ((bool_t) 1),
													((bool_t) 0));
											}
										else
											{	/* Engine/compiler.scm 409 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 413 */
											obj_t BgL_zc3z04anonymousza31640ze3z87_2345;

											BgL_zc3z04anonymousza31640ze3z87_2345 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31640ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31640ze3z87_2345,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 40)), BgL_zc3z04anonymousza31640ze3z87_2345);
										}
										if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
											{	/* Engine/compiler.scm 420 */
												BFALSE;
											}
										else
											{	/* Engine/compiler.scm 421 */
												obj_t BgL_auxz00_2461;

												BgL_auxz00_2461 =
													BGl_aboundzd2walkz12zc0zzabound_walkz00(CELL_REF
													(BgL_astz00_2444));
												CELL_SET(BgL_astz00_2444, BgL_auxz00_2461);
											}
										{	/* Engine/compiler.scm 422 */
											obj_t BgL_zc3z04anonymousza31642ze3z87_2344;

											BgL_zc3z04anonymousza31642ze3z87_2344 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31642ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31642ze3z87_2344,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 41)), BgL_zc3z04anonymousza31642ze3z87_2344);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1953z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1953z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 0));
										{	/* Engine/compiler.scm 427 */
											obj_t BgL_auxz00_2462;

											BgL_auxz00_2462 =
												BGl_coercezd2walkz12zc0zzcoerce_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2462);
										}
										{	/* Engine/compiler.scm 428 */
											obj_t BgL_zc3z04anonymousza31645ze3z87_2343;

											BgL_zc3z04anonymousza31645ze3z87_2343 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31645ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31645ze3z87_2343,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 42)), BgL_zc3z04anonymousza31645ze3z87_2343);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1954z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1954z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										{	/* Engine/compiler.scm 433 */
											bool_t BgL_test2070z00_3043;

											if (CBOOL
												(BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00))
												{	/* Engine/compiler.scm 434 */
													obj_t BgL_arg1667z00_1909;

													{	/* Engine/compiler.scm 434 */
														obj_t BgL_arg1669z00_1910;

														BgL_arg1669z00_1910 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														BgL_arg1667z00_1909 =
															(((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_arg1669z00_1910)))->BgL_languagez00);
													}
													BgL_test2070z00_3043 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1667z00_1909, CNST_TABLE_REF(((long) 43))));
												}
											else
												{	/* Engine/compiler.scm 433 */
													BgL_test2070z00_3043 = ((bool_t) 0);
												}
											if (BgL_test2070z00_3043)
												{	/* Engine/compiler.scm 433 */
													{	/* Engine/compiler.scm 435 */
														obj_t BgL_auxz00_2463;

														BgL_auxz00_2463 =
															BGl_fxopzd2walkz12zc0zzfxop_walkz00(CELL_REF
															(BgL_astz00_2444));
														CELL_SET(BgL_astz00_2444, BgL_auxz00_2463);
													}
													{	/* Engine/compiler.scm 436 */
														obj_t BgL_zc3z04anonymousza31665ze3z87_2342;

														BgL_zc3z04anonymousza31665ze3z87_2342 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31665ze3ze5zzengine_compilerz00,
															(int) (((long) 0)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31665ze3z87_2342,
															(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
														BGl_stopzd2onzd2passz00zzengine_passz00
															(CNST_TABLE_REF(((long) 44)),
															BgL_zc3z04anonymousza31665ze3z87_2342);
													}
													BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
														(BGl_string1955z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444));
													BGl_checkzd2typezd2zzast_checkzd2typezd2
														(BGl_string1955z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444), ((bool_t) 1),
														((bool_t) 0));
												}
											else
												{	/* Engine/compiler.scm 433 */
													BFALSE;
												}
										}
										if (CBOOL
											(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
											{	/* Engine/compiler.scm 443 */
												obj_t BgL_auxz00_2464;

												BgL_auxz00_2464 =
													BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(CELL_REF
													(BgL_astz00_2444),
													BGl_string1956z00zzengine_compilerz00);
												CELL_SET(BgL_astz00_2444, BgL_auxz00_2464);
											}
										else
											{	/* Engine/compiler.scm 442 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 444 */
											obj_t BgL_zc3z04anonymousza31673ze3z87_2341;

											BgL_zc3z04anonymousza31673ze3z87_2341 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31673ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31673ze3z87_2341,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 45)), BgL_zc3z04anonymousza31673ze3z87_2341);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1945z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										{	/* Engine/compiler.scm 450 */
											bool_t BgL_test2073z00_3076;

											if (
												((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
													((long) 1)))
												{	/* Engine/compiler.scm 450 */
													BgL_test2073z00_3076 = ((bool_t) 1);
												}
											else
												{	/* Engine/compiler.scm 450 */
													BgL_test2073z00_3076 =
														(BGl_za2passza2z00zzengine_paramz00 ==
														CNST_TABLE_REF(((long) 46)));
												}
											if (BgL_test2073z00_3076)
												{	/* Engine/compiler.scm 451 */
													obj_t BgL_auxz00_2465;

													BgL_auxz00_2465 =
														BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
														(BgL_astz00_2444), ((bool_t) 1));
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2465);
												}
											else
												{	/* Engine/compiler.scm 450 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 452 */
											obj_t BgL_zc3z04anonymousza31685ze3z87_2340;

											BgL_zc3z04anonymousza31685ze3z87_2340 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31685ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31685ze3z87_2340,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 46)), BgL_zc3z04anonymousza31685ze3z87_2340);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1937z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1937z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
												((long) 1)))
											{	/* Engine/compiler.scm 458 */
												obj_t BgL_auxz00_2466;

												BgL_auxz00_2466 =
													BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
													(BgL_astz00_2444),
													BGl_string1957z00zzengine_compilerz00, BNIL);
												CELL_SET(BgL_astz00_2444, BgL_auxz00_2466);
											}
										else
											{	/* Engine/compiler.scm 457 */
												BFALSE;
											}
										{	/* Engine/compiler.scm 459 */
											obj_t BgL_zc3z04anonymousza31689ze3z87_2339;

											BgL_zc3z04anonymousza31689ze3z87_2339 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31689ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31689ze3z87_2339,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 47)), BgL_zc3z04anonymousza31689ze3z87_2339);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1958z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1958z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										{	/* Engine/compiler.scm 464 */
											bool_t BgL_test2076z00_3107;

											if (
												((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													> ((long) 0)))
												{	/* Engine/compiler.scm 465 */
													obj_t BgL_arg1697z00_1930;

													{	/* Engine/compiler.scm 465 */
														obj_t BgL_arg1704z00_1931;

														BgL_arg1704z00_1931 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														BgL_arg1697z00_1930 =
															(((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_arg1704z00_1931)))->
															BgL_debugzd2supportzd2);
													}
													BgL_test2076z00_3107 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 1)), BgL_arg1697z00_1930));
												}
											else
												{	/* Engine/compiler.scm 464 */
													BgL_test2076z00_3107 = ((bool_t) 0);
												}
											if (BgL_test2076z00_3107)
												{	/* Engine/compiler.scm 466 */
													obj_t BgL_auxz00_2467;

													BgL_auxz00_2467 =
														BGl_bdbzd2walkz12zc0zzbdb_walkz00(CELL_REF
														(BgL_astz00_2444));
													CELL_SET(BgL_astz00_2444, BgL_auxz00_2467);
												}
											else
												{	/* Engine/compiler.scm 464 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 467 */
											obj_t BgL_zc3z04anonymousza31708ze3z87_2338;

											BgL_zc3z04anonymousza31708ze3z87_2338 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31708ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31708ze3z87_2338,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 1)), BgL_zc3z04anonymousza31708ze3z87_2338);
										}
										{	/* Engine/compiler.scm 470 */
											obj_t BgL_auxz00_2468;

											BgL_auxz00_2468 =
												BGl_cnstzd2walkz12zc0zzcnst_walkz00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2468);
										}
										{	/* Engine/compiler.scm 471 */
											obj_t BgL_zc3z04anonymousza31712ze3z87_2337;

											BgL_zc3z04anonymousza31712ze3z87_2337 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31712ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31712ze3z87_2337,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 48)), BgL_zc3z04anonymousza31712ze3z87_2337);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1959z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1959z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										{	/* Engine/compiler.scm 476 */
											bool_t BgL_test2078z00_3137;

											if (CBOOL
												(BGl_za2optimzd2returnzf3za2z21zzengine_paramz00))
												{	/* Engine/compiler.scm 477 */
													obj_t BgL_arg1725z00_1940;

													BgL_arg1725z00_1940 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test2078z00_3137 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1725z00_1940)))->
														BgL_pragmazd2supportzd2);
												}
											else
												{	/* Engine/compiler.scm 476 */
													BgL_test2078z00_3137 = ((bool_t) 0);
												}
											if (BgL_test2078z00_3137)
												{	/* Engine/compiler.scm 476 */
													{	/* Engine/compiler.scm 478 */
														obj_t BgL_auxz00_2469;

														BgL_auxz00_2469 =
															BGl_returnzd2walkz12zc0zzreturn_walkz00(CELL_REF
															(BgL_astz00_2444));
														CELL_SET(BgL_astz00_2444, BgL_auxz00_2469);
													}
													{	/* Engine/compiler.scm 479 */
														obj_t BgL_auxz00_2470;

														BgL_auxz00_2470 =
															BGl_lvtypezd2astz12zc0zzast_lvtypez00(CELL_REF
															(BgL_astz00_2444));
														CELL_SET(BgL_astz00_2444, BgL_auxz00_2470);
													}
												}
											else
												{	/* Engine/compiler.scm 476 */
													BFALSE;
												}
										}
										{	/* Engine/compiler.scm 480 */
											obj_t BgL_zc3z04anonymousza31727ze3z87_2336;

											BgL_zc3z04anonymousza31727ze3z87_2336 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31727ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31727ze3z87_2336,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 49)), BgL_zc3z04anonymousza31727ze3z87_2336);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1960z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1960z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 0));
										{	/* Engine/compiler.scm 486 */
											obj_t BgL_auxz00_2471;

											BgL_auxz00_2471 =
												BGl_inlinezd2walkz12zc0zzinline_walkz00(CELL_REF
												(BgL_astz00_2444), CNST_TABLE_REF(((long) 50)));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2471);
										}
										{	/* Engine/compiler.scm 487 */
											obj_t BgL_auxz00_2472;

											BgL_auxz00_2472 =
												BGl_lvtypezd2astz12zc0zzast_lvtypez00(CELL_REF
												(BgL_astz00_2444));
											CELL_SET(BgL_astz00_2444, BgL_auxz00_2472);
										}
										BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
											(BGl_string1961z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444));
										BGl_checkzd2typezd2zzast_checkzd2typezd2
											(BGl_string1961z00zzengine_compilerz00,
											CELL_REF(BgL_astz00_2444), ((bool_t) 1), ((bool_t) 1));
										{	/* Engine/compiler.scm 490 */
											obj_t BgL_zc3z04anonymousza31729ze3z87_2335;

											BgL_zc3z04anonymousza31729ze3z87_2335 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31729ze3ze5zzengine_compilerz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31729ze3z87_2335,
												(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
											BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
														(long) 51)), BgL_zc3z04anonymousza31729ze3z87_2335);
										}
										{	/* Engine/compiler.scm 493 */
											obj_t BgL_ast2z00_2473;

											{	/* Engine/compiler.scm 493 */
												obj_t BgL_cellvalz00_3168;

												{	/* Engine/compiler.scm 493 */
													obj_t BgL_arg1755z00_1967;

													BgL_arg1755z00_1967 =
														BGl_astzd2initializa7ersz75zzast_initz00();
													BgL_cellvalz00_3168 =
														BGl_appendzd2astzd2zzast_buildz00
														(BgL_arg1755z00_1967, CELL_REF(BgL_astz00_2444));
												}
												BgL_ast2z00_2473 = MAKE_CELL(BgL_cellvalz00_3168);
											}
											{	/* Engine/compiler.scm 494 */
												obj_t BgL_zc3z04anonymousza31732ze3z87_2334;

												BgL_zc3z04anonymousza31732ze3z87_2334 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31732ze3ze5zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31732ze3z87_2334,
													(int) (((long) 0)), ((obj_t) BgL_ast2z00_2473));
												BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
															(long) 52)),
													BgL_zc3z04anonymousza31732ze3z87_2334);
											}
											BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
												(BGl_string1962z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_2473));
											BGl_checkzd2typezd2zzast_checkzd2typezd2
												(BGl_string1962z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_2473), ((bool_t) 1), ((bool_t) 1));
											{	/* Engine/compiler.scm 499 */
												bool_t BgL_test2080z00_3181;

												if (
													((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
														((long) 2)))
													{	/* Engine/compiler.scm 499 */
														BgL_test2080z00_3181 = ((bool_t) 1);
													}
												else
													{	/* Engine/compiler.scm 499 */
														obj_t BgL_arg1743z00_1959;

														BgL_arg1743z00_1959 =
															BGl_thezd2backendzd2zzbackend_backendz00();
														BgL_test2080z00_3181 =
															(((BgL_backendz00_bglt) COBJECT(
																	((BgL_backendz00_bglt)
																		BgL_arg1743z00_1959)))->BgL_effectzb2zb2);
													}
												if (BgL_test2080z00_3181)
													{	/* Engine/compiler.scm 499 */
														{	/* Engine/compiler.scm 500 */
															obj_t BgL_auxz00_2474;

															BgL_auxz00_2474 =
																BGl_effectzd2walkz12zc0zzeffect_walkz00(CELL_REF
																(BgL_ast2z00_2473), ((bool_t) 1));
															CELL_SET(BgL_ast2z00_2473, BgL_auxz00_2474);
														}
														{	/* Engine/compiler.scm 501 */
															obj_t BgL_zc3z04anonymousza31741ze3z87_2333;

															BgL_zc3z04anonymousza31741ze3z87_2333 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31741ze3ze5zzengine_compilerz00,
																(int) (((long) 0)), (int) (((long) 1)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31741ze3z87_2333,
																(int) (((long) 0)), ((obj_t) BgL_ast2z00_2473));
															BGl_stopzd2onzd2passz00zzengine_passz00
																(CNST_TABLE_REF(((long) 53)),
																BgL_zc3z04anonymousza31741ze3z87_2333);
														}
														{	/* Engine/compiler.scm 502 */
															obj_t BgL_auxz00_2475;

															BgL_auxz00_2475 =
																BGl_reducezd2walkz12zc0zzreduce_walkz00(CELL_REF
																(BgL_ast2z00_2473),
																BGl_string1963z00zzengine_compilerz00, BNIL);
															CELL_SET(BgL_ast2z00_2473, BgL_auxz00_2475);
													}}
												else
													{	/* Engine/compiler.scm 499 */
														BFALSE;
													}
											}
											{	/* Engine/compiler.scm 503 */
												obj_t BgL_zc3z04anonymousza31745ze3z87_2332;

												BgL_zc3z04anonymousza31745ze3z87_2332 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31745ze3ze5zzengine_compilerz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31745ze3z87_2332,
													(int) (((long) 0)), ((obj_t) BgL_ast2z00_2473));
												BGl_stopzd2onzd2passz00zzengine_passz00(CNST_TABLE_REF((
															(long) 54)),
													BgL_zc3z04anonymousza31745ze3z87_2332);
											}
											BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
												(BGl_string1964z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_2473));
											BGl_checkzd2typezd2zzast_checkzd2typezd2
												(BGl_string1964z00zzengine_compilerz00,
												CELL_REF(BgL_ast2z00_2473), ((bool_t) 1), ((bool_t) 1));
											if (CBOOL
												(BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00))
												{	/* Engine/compiler.scm 508 */
													{	/* Engine/compiler.scm 509 */
														obj_t BgL_auxz00_2476;

														BgL_auxz00_2476 =
															BGl_uncellzd2walkz12zc0zzuncell_walkz00(CELL_REF
															(BgL_astz00_2444));
														CELL_SET(BgL_astz00_2444, BgL_auxz00_2476);
													}
													{	/* Engine/compiler.scm 510 */
														obj_t BgL_zc3z04anonymousza31747ze3z87_2331;

														BgL_zc3z04anonymousza31747ze3z87_2331 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31747ze3ze5zzengine_compilerz00,
															(int) (((long) 0)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31747ze3z87_2331,
															(int) (((long) 0)), ((obj_t) BgL_astz00_2444));
														BGl_stopzd2onzd2passz00zzengine_passz00
															(CNST_TABLE_REF(((long) 55)),
															BgL_zc3z04anonymousza31747ze3z87_2331);
													}
													BGl_checkzd2sharingzd2zzast_checkzd2sharingzd2
														(BGl_string1965z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444));
													BGl_checkzd2typezd2zzast_checkzd2typezd2
														(BGl_string1965z00zzengine_compilerz00,
														CELL_REF(BgL_astz00_2444), ((bool_t) 1),
														((bool_t) 0));
												}
											else
												{	/* Engine/compiler.scm 508 */
													BFALSE;
												}
											{	/* Engine/compiler.scm 514 */
												obj_t BgL_arg1754z00_1966;

												BgL_arg1754z00_1966 =
													BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF((
															(long) 56)), CELL_REF(BgL_ast2z00_2473));
												BGl_backendzd2walkzd2zzbackend_walkz00
													(BgL_arg1754z00_1966);
										}}
										return BINT(((long) 0));
		}}}}}}}}

	}



/* &compiler */
	obj_t BGl_z62compilerz62zzengine_compilerz00(obj_t BgL_envz00_2368)
	{
		{	/* Engine/compiler.scm 100 */
			return BGl_compilerz00zzengine_compilerz00();
		}

	}



/* &<@anonymous:1747> */
	obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2369)
	{
		{	/* Engine/compiler.scm 510 */
			{	/* Engine/compiler.scm 510 */
				obj_t BgL_astz00_2370;

				BgL_astz00_2370 = PROCEDURE_REF(BgL_envz00_2369, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2370));
			}
		}

	}



/* &<@anonymous:1745> */
	obj_t BGl_z62zc3z04anonymousza31745ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2371)
	{
		{	/* Engine/compiler.scm 503 */
			{	/* Engine/compiler.scm 503 */
				obj_t BgL_ast2z00_2372;

				BgL_ast2z00_2372 = PROCEDURE_REF(BgL_envz00_2371, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_2372));
			}
		}

	}



/* &<@anonymous:1741> */
	obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2373)
	{
		{	/* Engine/compiler.scm 501 */
			{	/* Engine/compiler.scm 501 */
				obj_t BgL_ast2z00_2374;

				BgL_ast2z00_2374 = PROCEDURE_REF(BgL_envz00_2373, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_2374));
			}
		}

	}



/* &<@anonymous:1732> */
	obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2375)
	{
		{	/* Engine/compiler.scm 494 */
			{	/* Engine/compiler.scm 494 */
				obj_t BgL_ast2z00_2376;

				BgL_ast2z00_2376 = PROCEDURE_REF(BgL_envz00_2375, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_ast2z00_2376));
			}
		}

	}



/* &<@anonymous:1729> */
	obj_t BGl_z62zc3z04anonymousza31729ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2377)
	{
		{	/* Engine/compiler.scm 490 */
			{	/* Engine/compiler.scm 490 */
				obj_t BgL_astz00_2378;

				BgL_astz00_2378 = PROCEDURE_REF(BgL_envz00_2377, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2378));
			}
		}

	}



/* &<@anonymous:1727> */
	obj_t BGl_z62zc3z04anonymousza31727ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2379)
	{
		{	/* Engine/compiler.scm 480 */
			{	/* Engine/compiler.scm 480 */
				obj_t BgL_astz00_2380;

				BgL_astz00_2380 = PROCEDURE_REF(BgL_envz00_2379, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2380));
			}
		}

	}



/* &<@anonymous:1712> */
	obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2381)
	{
		{	/* Engine/compiler.scm 471 */
			{	/* Engine/compiler.scm 471 */
				obj_t BgL_astz00_2382;

				BgL_astz00_2382 = PROCEDURE_REF(BgL_envz00_2381, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2382));
			}
		}

	}



/* &<@anonymous:1708> */
	obj_t BGl_z62zc3z04anonymousza31708ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2383)
	{
		{	/* Engine/compiler.scm 467 */
			{	/* Engine/compiler.scm 467 */
				obj_t BgL_astz00_2384;

				BgL_astz00_2384 = PROCEDURE_REF(BgL_envz00_2383, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2384));
			}
		}

	}



/* &<@anonymous:1689> */
	obj_t BGl_z62zc3z04anonymousza31689ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2385)
	{
		{	/* Engine/compiler.scm 459 */
			{	/* Engine/compiler.scm 459 */
				obj_t BgL_astz00_2386;

				BgL_astz00_2386 = PROCEDURE_REF(BgL_envz00_2385, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2386));
			}
		}

	}



/* &<@anonymous:1685> */
	obj_t BGl_z62zc3z04anonymousza31685ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2387)
	{
		{	/* Engine/compiler.scm 452 */
			{	/* Engine/compiler.scm 452 */
				obj_t BgL_astz00_2388;

				BgL_astz00_2388 = PROCEDURE_REF(BgL_envz00_2387, (int) (((long) 0)));
				return BGl_writezd2effectzd2zzeffect_walkz00(CELL_REF(BgL_astz00_2388));
			}
		}

	}



/* &<@anonymous:1673> */
	obj_t BGl_z62zc3z04anonymousza31673ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2389)
	{
		{	/* Engine/compiler.scm 444 */
			{	/* Engine/compiler.scm 444 */
				obj_t BgL_astz00_2390;

				BgL_astz00_2390 = PROCEDURE_REF(BgL_envz00_2389, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2390));
			}
		}

	}



/* &<@anonymous:1665> */
	obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2391)
	{
		{	/* Engine/compiler.scm 436 */
			{	/* Engine/compiler.scm 436 */
				obj_t BgL_astz00_2392;

				BgL_astz00_2392 = PROCEDURE_REF(BgL_envz00_2391, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2392));
			}
		}

	}



/* &<@anonymous:1645> */
	obj_t BGl_z62zc3z04anonymousza31645ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2393)
	{
		{	/* Engine/compiler.scm 428 */
			{	/* Engine/compiler.scm 428 */
				obj_t BgL_astz00_2394;

				BgL_astz00_2394 = PROCEDURE_REF(BgL_envz00_2393, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2394));
			}
		}

	}



/* &<@anonymous:1642> */
	obj_t BGl_z62zc3z04anonymousza31642ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2395)
	{
		{	/* Engine/compiler.scm 422 */
			{	/* Engine/compiler.scm 422 */
				obj_t BgL_astz00_2396;

				BgL_astz00_2396 = PROCEDURE_REF(BgL_envz00_2395, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2396));
			}
		}

	}



/* &<@anonymous:1640> */
	obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2397)
	{
		{	/* Engine/compiler.scm 413 */
			{	/* Engine/compiler.scm 413 */
				obj_t BgL_astz00_2398;

				BgL_astz00_2398 = PROCEDURE_REF(BgL_envz00_2397, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2398));
			}
		}

	}



/* &<@anonymous:1635> */
	obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2399)
	{
		{	/* Engine/compiler.scm 406 */
			{	/* Engine/compiler.scm 406 */
				obj_t BgL_astz00_2400;

				BgL_astz00_2400 = PROCEDURE_REF(BgL_envz00_2399, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2400));
			}
		}

	}



/* &<@anonymous:1625> */
	obj_t BGl_z62zc3z04anonymousza31625ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2401)
	{
		{	/* Engine/compiler.scm 396 */
			{	/* Engine/compiler.scm 396 */
				obj_t BgL_astz00_2402;

				BgL_astz00_2402 = PROCEDURE_REF(BgL_envz00_2401, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2402));
			}
		}

	}



/* &<@anonymous:1614> */
	obj_t BGl_z62zc3z04anonymousza31614ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2403)
	{
		{	/* Engine/compiler.scm 390 */
			{	/* Engine/compiler.scm 390 */
				obj_t BgL_astz00_2404;

				BgL_astz00_2404 = PROCEDURE_REF(BgL_envz00_2403, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2404));
			}
		}

	}



/* &<@anonymous:1612> */
	obj_t BGl_z62zc3z04anonymousza31612ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2405)
	{
		{	/* Engine/compiler.scm 378 */
			{	/* Engine/compiler.scm 378 */
				obj_t BgL_astz00_2406;

				BgL_astz00_2406 = PROCEDURE_REF(BgL_envz00_2405, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2406));
			}
		}

	}



/* &<@anonymous:1607> */
	obj_t BGl_z62zc3z04anonymousza31607ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2407)
	{
		{	/* Engine/compiler.scm 372 */
			{	/* Engine/compiler.scm 372 */
				obj_t BgL_astz00_2408;

				BgL_astz00_2408 = PROCEDURE_REF(BgL_envz00_2407, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2408));
			}
		}

	}



/* &<@anonymous:1605> */
	obj_t BGl_z62zc3z04anonymousza31605ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2409)
	{
		{	/* Engine/compiler.scm 366 */
			{	/* Engine/compiler.scm 366 */
				obj_t BgL_astz00_2410;

				BgL_astz00_2410 = PROCEDURE_REF(BgL_envz00_2409, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2410));
			}
		}

	}



/* &<@anonymous:1600> */
	obj_t BGl_z62zc3z04anonymousza31600ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2411)
	{
		{	/* Engine/compiler.scm 354 */
			{	/* Engine/compiler.scm 354 */
				obj_t BgL_astz00_2412;

				BgL_astz00_2412 = PROCEDURE_REF(BgL_envz00_2411, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2412));
			}
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2413)
	{
		{	/* Engine/compiler.scm 337 */
			{	/* Engine/compiler.scm 337 */
				obj_t BgL_astz00_2414;

				BgL_astz00_2414 = PROCEDURE_REF(BgL_envz00_2413, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2414));
			}
		}

	}



/* &<@anonymous:1583> */
	obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2415)
	{
		{	/* Engine/compiler.scm 333 */
			return BGl_makezd2addzd2heapz00zzheap_makez00();
		}

	}



/* &<@anonymous:1579> */
	obj_t BGl_z62zc3z04anonymousza31579ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2416)
	{
		{	/* Engine/compiler.scm 322 */
			{	/* Engine/compiler.scm 322 */
				obj_t BgL_astz00_2417;

				BgL_astz00_2417 = PROCEDURE_REF(BgL_envz00_2416, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2417));
			}
		}

	}



/* &<@anonymous:1576> */
	obj_t BGl_z62zc3z04anonymousza31576ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2418)
	{
		{	/* Engine/compiler.scm 316 */
			{	/* Engine/compiler.scm 316 */
				obj_t BgL_astz00_2419;

				BgL_astz00_2419 = PROCEDURE_REF(BgL_envz00_2418, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2419));
			}
		}

	}



/* &<@anonymous:1574> */
	obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2420)
	{
		{	/* Engine/compiler.scm 310 */
			{	/* Engine/compiler.scm 310 */
				obj_t BgL_astz00_2421;

				BgL_astz00_2421 = PROCEDURE_REF(BgL_envz00_2420, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2421));
			}
		}

	}



/* &<@anonymous:1565> */
	obj_t BGl_z62zc3z04anonymousza31565ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2422)
	{
		{	/* Engine/compiler.scm 304 */
			{	/* Engine/compiler.scm 304 */
				obj_t BgL_astz00_2423;

				BgL_astz00_2423 = PROCEDURE_REF(BgL_envz00_2422, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2423));
			}
		}

	}



/* &<@anonymous:1537> */
	obj_t BGl_z62zc3z04anonymousza31537ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2424)
	{
		{	/* Engine/compiler.scm 290 */
			{	/* Engine/compiler.scm 290 */
				obj_t BgL_astz00_2425;

				BgL_astz00_2425 = PROCEDURE_REF(BgL_envz00_2424, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2425));
			}
		}

	}



/* &<@anonymous:1494> */
	obj_t BGl_z62zc3z04anonymousza31494ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2426)
	{
		{	/* Engine/compiler.scm 284 */
			return BGl_makezd2heapzd2zzheap_makez00();
		}

	}



/* &<@anonymous:1490> */
	obj_t BGl_z62zc3z04anonymousza31490ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2427)
	{
		{	/* Engine/compiler.scm 279 */
			{	/* Engine/compiler.scm 279 */
				obj_t BgL_astz00_2428;

				BgL_astz00_2428 = PROCEDURE_REF(BgL_envz00_2427, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2428));
			}
		}

	}



/* &<@anonymous:1477> */
	obj_t BGl_z62zc3z04anonymousza31477ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2429)
	{
		{	/* Engine/compiler.scm 274 */
			return BUNSPEC;
		}

	}



/* &<@anonymous:1475> */
	obj_t BGl_z62zc3z04anonymousza31475ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2430)
	{
		{	/* Engine/compiler.scm 267 */
			{	/* Engine/compiler.scm 267 */
				obj_t BgL_astz00_2431;

				BgL_astz00_2431 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 0)));
				return BGl_writezd2astzd2zzwrite_astz00(CELL_REF(BgL_astz00_2431));
			}
		}

	}



/* &<@anonymous:1462> */
	obj_t BGl_z62zc3z04anonymousza31462ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2432)
	{
		{	/* Engine/compiler.scm 256 */
			{	/* Engine/compiler.scm 256 */
				obj_t BgL_unitsz00_2433;

				BgL_unitsz00_2433 = PROCEDURE_REF(BgL_envz00_2432, (int) (((long) 0)));
				return
					BGl_writezd2expandedzd2zzwrite_expandedz00(CELL_REF
					(BgL_unitsz00_2433));
			}
		}

	}



/* &<@anonymous:1449> */
	obj_t BGl_z62zc3z04anonymousza31449ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2434)
	{
		{	/* Engine/compiler.scm 252 */
			{	/* Engine/compiler.scm 252 */
				obj_t BgL_unitsz00_2435;

				BgL_unitsz00_2435 = PROCEDURE_REF(BgL_envz00_2434, (int) (((long) 0)));
				return
					BGl_writezd2expandedzd2zzwrite_expandedz00(CELL_REF
					(BgL_unitsz00_2435));
			}
		}

	}



/* &<@anonymous:1365> */
	obj_t BGl_z62zc3z04anonymousza31365ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2436)
	{
		{	/* Engine/compiler.scm 213 */
			return BINT(((long) 0));
		}

	}



/* &<@anonymous:1361> */
	obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzengine_compilerz00(obj_t
		BgL_envz00_2437)
	{
		{	/* Engine/compiler.scm 204 */
			return
				BGl_dumpzd2modulezd2zzmodule_modulez00(PROCEDURE_REF(BgL_envz00_2437,
					(int) (((long) 0))));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_compilerz00()
	{
		{	/* Engine/compiler.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_signalsz00(((long) 437317195),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_srcz00(((long) 6602148),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzwrite_expandedz00(((long) 320989248),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzwrite_astz00(((long) 250486172),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 11403642),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 147989034),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzheap_makez00(((long) 525176304),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(((long)
					88839818), BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_checkzd2typezd2(((long) 290987103),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_checkzd2globalzd2initz00(((long)
					513785758), BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_initz00(((long) 409655620),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzuser_userz00(((long) 352878567),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(((long) 316726430),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzexpand_installz00(((long) 291484051),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 32737868),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztrace_walkz00(((long) 146692783),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbeta_walkz00(((long) 254688563),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 385476796),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzeffect_walkz00(((long) 42129134),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzstackable_walkz00(((long) 440686001),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcallcc_walkz00(((long) 105123162),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzfail_walkz00(((long) 51531876),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzabound_walkz00(((long) 224477234),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzdataflow_walkz00(((long) 18612754),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzinitflow_walkz00(((long) 146152066),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_walkza7(((long) 69163961),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcfa_walkz00(((long) 285783684),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcfa_pairz00(((long) 37668580),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzintegrate_walkz00(((long) 67376264),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zztailc_walkz00(((long) 347113682),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzfxop_walkz00(((long) 501948789),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcoerce_walkz00(((long) 224340892),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzreduce_walkz00(((long) 459999991),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcnst_walkz00(((long) 424305755),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzobject_classgenz00(((long) 502726801),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzhgen_walkz00(((long) 362377148),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 444161933),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(((long) 53868766),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbdb_walkz00(((long) 260685932),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzprof_walkz00(((long) 181156875),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzreturn_walkz00(((long) 152969855),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzuncell_walkz00(((long) 492672766),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzisa_walkz00(((long) 303087166),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcc_ccz00(((long) 527776109),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcc_ldz00(((long) 335315250),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzcc_rootsz00(((long) 74776161),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_walkz00(((long) 141649418),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			BGl_modulezd2initializa7ationz75zzbackend_cz00(((long) 190235116),
				BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
			return BGl_modulezd2initializa7ationz75zzbackend_jvmz00(((long)
					170321700), BSTRING_TO_STRING(BGl_string1966z00zzengine_compilerz00));
		}

	}

#ifdef __cplusplus
}
#endif
