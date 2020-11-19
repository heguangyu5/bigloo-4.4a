/*===========================================================================*/
/*   (Module/impuse.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/impuse.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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

	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_importz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_modulez00;
		long BgL_numberz00;
		obj_t BgL_modez00;
		obj_t BgL_varsz00;
		obj_t BgL_aliasesz00;
		obj_t BgL_checksumz00;
		obj_t BgL_locz00;
		obj_t BgL_srcz00;
		obj_t BgL_declz00;
		obj_t BgL_providez00;
		obj_t BgL_codez00;
		obj_t BgL_accessz00;
	}                *BgL_importz00_bglt;


	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62importzd2withzd2modulez12z70zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32014ze3ze5zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	extern obj_t BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00();
	static obj_t
		BGl_z62initializa7ezd2importedzd2moduleszc5zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62impusezd2producerzb0zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_impusez00();
	static BgL_importz00_bglt BGl_z62lambda1990z62zzmodule_impusez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_importz00_bglt BGl_z62lambda1992z62zzmodule_impusez00(obj_t);
	static obj_t BGl_z62lambda1998z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1999z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32034ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_z62importzd2parserzb0zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_za2importsza2z00zzmodule_impusez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00();
	static obj_t BGl_appendzd221011zd2zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_impusez00();
	extern obj_t BGl_inlinezd2finaliza7erz75zzread_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31308ze3ze5zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31994ze3ze5zzmodule_impusez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31309ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_initializa7ezd2moduleze70z92zzmodule_impusez00(obj_t, obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32075ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_importzd2modulez12zc0zzmodule_impusez00(obj_t);
	static obj_t BGl_importzd2everythingzd2zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static long BGl_za2importzd2numberza2zd2zzmodule_impusez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	extern obj_t BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_impusez00();
	extern obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t, obj_t);
	static obj_t BGl_z62makezd2fromzd2compilerz62zzmodule_impusez00(obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl_importedzd2moduleszd2unitz00zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static bool_t BGl_aliaszf3ze70z14zzmodule_impusez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t);
	extern obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00;
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62impusezd2finaliza7erz17zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_readzd2importz12zc0zzmodule_impusez00(obj_t);
	static obj_t BGl_importzd21zd2modulez00zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_impusez00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
	static obj_t BGl_toplevelzd2initzd2zzmodule_impusez00();
	static obj_t BGl_z62zc3z04anonymousza32006ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_z62makezd2importzd2compilerz62zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32023ze3ze5zzmodule_impusez00(obj_t);
	extern obj_t BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00();
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	static obj_t BGl_impusezd2producerzd2zzmodule_impusez00(obj_t);
	extern long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31311ze3ze5zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32041ze3ze5zzmodule_impusez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importzd2allzd2modulez00zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62getzd2importedzd2modulesz62zzmodule_impusez00(obj_t);
	static obj_t BGl_impusezd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32060ze3ze5zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31317ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_importzd2wantedzd2zzmodule_impusez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_tracezd2initializa7ezd2moduleze70z40zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2004z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2005z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2012z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2013z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	static obj_t BGl_z62lambda2021z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2022z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32082ze3ze5zzmodule_impusez00(obj_t);
	static obj_t BGl_z62lambda2032z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2033z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2039z62zzmodule_impusez00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2040z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2046z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t
		BGl_registerzd2importz12zc0zzmodule_impusez00(BgL_importz00_bglt);
	static obj_t BGl_z62lambda2047z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32068ze3ze5zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62lambda2051z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2052z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2058z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2059z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2066z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2067z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2073z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2074z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_impusez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_impusez00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	static obj_t BGl_z62makezd2usezd2compilerz62zzmodule_impusez00(obj_t);
	static obj_t BGl_z62lambda2080z62zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2081z62zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_impusez00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	static obj_t BGl_importz00zzmodule_impusez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importzd2finaliza7erz75zzmodule_impusez00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[47];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2267za7,
		BGl_z62zc3z04anonymousza31308ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2268za7,
		BGl_z62zc3z04anonymousza31309ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2269za7,
		BGl_z62zc3z04anonymousza31311ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2270za7,
		BGl_z62zc3z04anonymousza31313ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2271za7,
		BGl_z62zc3z04anonymousza31317ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2272za7,
		BGl_z62zc3z04anonymousza31574ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2273za7,
		BGl_z62zc3z04anonymousza31627ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzmodule_impusez00,
		BgL_bgl_za762lambda1999za7622274z00, BGl_z62lambda1999z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzmodule_impusez00,
		BgL_bgl_za762lambda1998za7622275z00, BGl_z62lambda1998z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2228z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2276za7,
		BGl_z62zc3z04anonymousza32006ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2229z00zzmodule_impusez00,
		BgL_bgl_za762lambda2005za7622277z00, BGl_z62lambda2005z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2230z00zzmodule_impusez00,
		BgL_bgl_za762lambda2004za7622278z00, BGl_z62lambda2004z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2231z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2279za7,
		BGl_z62zc3z04anonymousza32014ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzmodule_impusez00,
		BgL_bgl_za762lambda2013za7622280z00, BGl_z62lambda2013z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzmodule_impusez00,
		BgL_bgl_za762lambda2012za7622281z00, BGl_z62lambda2012z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2282za7,
		BGl_z62zc3z04anonymousza32023ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzmodule_impusez00,
		BgL_bgl_za762lambda2022za7622283z00, BGl_z62lambda2022z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzmodule_impusez00,
		BgL_bgl_za762lambda2021za7622284z00, BGl_z62lambda2021z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2285za7,
		BGl_z62zc3z04anonymousza32034ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzmodule_impusez00,
		BgL_bgl_za762lambda2033za7622286z00, BGl_z62lambda2033z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzmodule_impusez00,
		BgL_bgl_za762lambda2032za7622287z00, BGl_z62lambda2032z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2288za7,
		BGl_z62zc3z04anonymousza32041ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzmodule_impusez00,
		BgL_bgl_za762lambda2040za7622289z00, BGl_z62lambda2040z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzmodule_impusez00,
		BgL_bgl_za762lambda2039za7622290z00, BGl_z62lambda2039z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzmodule_impusez00,
		BgL_bgl_za762lambda2047za7622291z00, BGl_z62lambda2047z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzmodule_impusez00,
		BgL_bgl_za762lambda2046za7622292z00, BGl_z62lambda2046z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzmodule_impusez00,
		BgL_bgl_za762lambda2052za7622293z00, BGl_z62lambda2052z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzmodule_impusez00,
		BgL_bgl_za762lambda2051za7622294z00, BGl_z62lambda2051z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2295za7,
		BGl_z62zc3z04anonymousza32060ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzmodule_impusez00,
		BgL_bgl_za762lambda2059za7622296z00, BGl_z62lambda2059z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzmodule_impusez00,
		BgL_bgl_za762lambda2058za7622297z00, BGl_z62lambda2058z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2298za7,
		BGl_z62zc3z04anonymousza32068ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzmodule_impusez00,
		BgL_bgl_za762lambda2067za7622299z00, BGl_z62lambda2067z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzmodule_impusez00,
		BgL_bgl_za762lambda2066za7622300z00, BGl_z62lambda2066z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2253z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2301za7,
		BGl_z62zc3z04anonymousza32075ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzmodule_impusez00,
		BgL_bgl_za762lambda2074za7622302z00, BGl_z62lambda2074z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2255z00zzmodule_impusez00,
		BgL_bgl_za762lambda2073za7622303z00, BGl_z62lambda2073z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2304za7,
		BGl_z62zc3z04anonymousza32082ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2257z00zzmodule_impusez00,
		BgL_bgl_za762lambda2081za7622305z00, BGl_z62lambda2081z62zzmodule_impusez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zzmodule_impusez00,
		BgL_bgl_za762lambda2080za7622306z00, BGl_z62lambda2080z62zzmodule_impusez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2259z00zzmodule_impusez00,
		BgL_bgl_za762za7c3za704anonymo2307za7,
		BGl_z62zc3z04anonymousza31994ze3ze5zzmodule_impusez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2260z00zzmodule_impusez00,
		BgL_bgl_za762lambda1992za7622308z00, BGl_z62lambda1992z62zzmodule_impusez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2261z00zzmodule_impusez00,
		BgL_bgl_za762lambda1990za7622309z00, BGl_z62lambda1990z62zzmodule_impusez00,
		0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2withzd2modulez12zd2envzc0zzmodule_impusez00,
		BgL_bgl_za762importza7d2with2310z00,
		BGl_z62importzd2withzd2modulez12z70zzmodule_impusez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_impusezd2producerzd2envz00zzmodule_impusez00,
		BgL_bgl_za762impuseza7d2prod2311z00,
		BGl_z62impusezd2producerzb0zzmodule_impusez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2fromzd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl_za762makeza7d2fromza7d2312za7,
		BGl_z62makezd2fromzd2compilerz62zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2importedzd2moduleszd2envz75zzmodule_impusez00,
		BgL_bgl_za762initializa7a7eza72313za7,
		BGl_z62initializa7ezd2importedzd2moduleszc5zzmodule_impusez00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2210z00zzmodule_impusez00,
		BgL_bgl_string2210za700za7za7m2314za7, "module ~a", 9);
	      DEFINE_STRING(BGl_string2211z00zzmodule_impusez00,
		BgL_bgl_string2211za700za7za7m2315za7, "Illegal \"~a\" clause", 19);
	      DEFINE_STRING(BGl_string2212z00zzmodule_impusez00,
		BgL_bgl_string2212za700za7za7m2316za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2213z00zzmodule_impusez00,
		BgL_bgl_string2213za700za7za7m2317za7, ".", 1);
	      DEFINE_STRING(BGl_string2216z00zzmodule_impusez00,
		BgL_bgl_string2216za700za7za7m2318za7,
		"bgl_init_module_debug_import(\"~a\", \"~a\")", 40);
	      DEFINE_STRING(BGl_string2217z00zzmodule_impusez00,
		BgL_bgl_string2217za700za7za7m2319za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string2218z00zzmodule_impusez00,
		BgL_bgl_string2218za700za7za7m2320za7, "Cannot find module", 18);
	      DEFINE_STRING(BGl_string2219z00zzmodule_impusez00,
		BgL_bgl_string2219za700za7za7m2321za7,
		"Cannot open source file for module \"~a\"", 39);
	      DEFINE_STRING(BGl_string2220z00zzmodule_impusez00,
		BgL_bgl_string2220za700za7za7m2322za7, "used", 4);
	      DEFINE_STRING(BGl_string2221z00zzmodule_impusez00,
		BgL_bgl_string2221za700za7za7m2323za7, "imported", 8);
	      DEFINE_STRING(BGl_string2222z00zzmodule_impusez00,
		BgL_bgl_string2222za700za7za7m2324za7, "]", 1);
	      DEFINE_STRING(BGl_string2223z00zzmodule_impusez00,
		BgL_bgl_string2223za700za7za7m2325za7, " module ", 8);
	      DEFINE_STRING(BGl_string2224z00zzmodule_impusez00,
		BgL_bgl_string2224za700za7za7m2326za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string2225z00zzmodule_impusez00,
		BgL_bgl_string2225za700za7za7m2327za7,
		"Can't find export for these identifiers", 39);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2importedzd2moduleszd2envzd2zzmodule_impusez00,
		BgL_bgl_za762getza7d2importe2328z00,
		BGl_z62getzd2importedzd2modulesz62zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2262z00zzmodule_impusez00,
		BgL_bgl_string2262za700za7za7m2329za7, "module_impuse", 13);
	      DEFINE_STRING(BGl_string2263z00zzmodule_impusez00,
		BgL_bgl_string2263za700za7za7m2330za7,
		"_ module_impuse access code pair-nil provide decl src loc checksum aliases obj vars mode long number symbol expander syntax macro define-macro wide-class final-class abstract-class class svar sgfun sifun sfun unit imported-modules staged pragma::void @ checksum::long from::string begin module (import with from) error nothing with all from use void import ",
		357);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_importzd2parserzd2envz00zzmodule_impusez00,
		BgL_bgl_za762importza7d2pars2331z00, va_generic_entry,
		BGl_z62importzd2parserzb0zzmodule_impusez00, BUNSPEC, -4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_impusezd2finaliza7erzd2envza7zzmodule_impusez00,
		BgL_bgl_za762impuseza7d2fina2332z00,
		BGl_z62impusezd2finaliza7erz17zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2usezd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl_za762makeza7d2useza7d22333za7,
		BGl_z62makezd2usezd2compilerz62zzmodule_impusez00, 0L, BUNSPEC, 0);
	extern obj_t BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2importzd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl_za762makeza7d2import2334z00,
		BGl_z62makezd2importzd2compilerz62zzmodule_impusez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00));
		     ADD_ROOT((void *) (&BGl_za2importsza2z00zzmodule_impusez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_impusez00));
		     ADD_ROOT((void *) (&BGl_importz00zzmodule_impusez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long
		BgL_checksumz00_2377, char *BgL_fromz00_2378)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_impusez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_impusez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_impusez00();
					BGl_libraryzd2moduleszd2initz00zzmodule_impusez00();
					BGl_cnstzd2initzd2zzmodule_impusez00();
					BGl_importedzd2moduleszd2initz00zzmodule_impusez00();
					BGl_objectzd2initzd2zzmodule_impusez00();
					return BGl_toplevelzd2initzd2zzmodule_impusez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_impuse");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			{	/* Module/impuse.scm 15 */
				obj_t BgL_cportz00_2318;

				{	/* Module/impuse.scm 15 */
					obj_t BgL_stringz00_2326;

					BgL_stringz00_2326 = BGl_string2263z00zzmodule_impusez00;
					{	/* Module/impuse.scm 15 */
						obj_t BgL_startz00_2327;

						BgL_startz00_2327 = BINT(((long) 0));
						{	/* Module/impuse.scm 15 */
							obj_t BgL_endz00_2328;

							BgL_endz00_2328 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2326)));
							{	/* Module/impuse.scm 15 */

								BgL_cportz00_2318 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2326, BgL_startz00_2327, BgL_endz00_2328);
				}}}}
				{
					long BgL_iz00_2319;

					BgL_iz00_2319 = ((long) 46);
				BgL_loopz00_2320:
					if ((BgL_iz00_2319 == ((long) -1)))
						{	/* Module/impuse.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/impuse.scm 15 */
							{	/* Module/impuse.scm 15 */
								obj_t BgL_arg2265z00_2322;

								{	/* Module/impuse.scm 15 */

									{	/* Module/impuse.scm 15 */
										obj_t BgL_locationz00_2324;

										BgL_locationz00_2324 = BBOOL(((bool_t) 0));
										{	/* Module/impuse.scm 15 */

											BgL_arg2265z00_2322 =
												BGl_readz00zz__readerz00(BgL_cportz00_2318,
												BgL_locationz00_2324);
										}
									}
								}
								{	/* Module/impuse.scm 15 */
									int BgL_tmpz00_2415;

									BgL_tmpz00_2415 = (int) (BgL_iz00_2319);
									CNST_TABLE_SET(BgL_tmpz00_2415, BgL_arg2265z00_2322);
							}}
							{	/* Module/impuse.scm 15 */
								int BgL_auxz00_2325;

								BgL_auxz00_2325 = (int) ((BgL_iz00_2319 - ((long) 1)));
								{
									long BgL_iz00_2420;

									BgL_iz00_2420 = (long) (BgL_auxz00_2325);
									BgL_iz00_2319 = BgL_iz00_2420;
									goto BgL_loopz00_2320;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			BGl_za2importsza2z00zzmodule_impusez00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2importzd2numberza2zd2zzmodule_impusez00 = ((long) 0);
			return (BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
				BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_impusez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_838;

				BgL_headz00_838 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_839;
					obj_t BgL_tailz00_840;

					BgL_prevz00_839 = BgL_headz00_838;
					BgL_tailz00_840 = BgL_l1z00_1;
				BgL_loopz00_841:
					if (PAIRP(BgL_tailz00_840))
						{
							obj_t BgL_newzd2prevzd2_843;

							BgL_newzd2prevzd2_843 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_840), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_839, BgL_newzd2prevzd2_843);
							{
								obj_t BgL_tailz00_2431;
								obj_t BgL_prevz00_2430;

								BgL_prevz00_2430 = BgL_newzd2prevzd2_843;
								BgL_tailz00_2431 = CDR(BgL_tailz00_840);
								BgL_tailz00_840 = BgL_tailz00_2431;
								BgL_prevz00_839 = BgL_prevz00_2430;
								goto BgL_loopz00_841;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_838);
				}
			}
		}

	}



/* make-import-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 69 */
			{	/* Module/impuse.scm 70 */
				BgL_ccompz00_bglt BgL_new1092z00_863;

				{	/* Module/impuse.scm 71 */
					BgL_ccompz00_bglt BgL_new1091z00_868;

					BgL_new1091z00_868 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/impuse.scm 71 */
						long BgL_arg1310z00_869;

						{	/* Module/impuse.scm 71 */
							long BgL_res2106z00_1815;

							BgL_res2106z00_1815 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1310z00_869 = BgL_res2106z00_1815;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1091z00_868), BgL_arg1310z00_869);
					}
					BgL_new1092z00_863 = BgL_new1091z00_868;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1092z00_863))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1092z00_863))->BgL_producerz00) =
					((obj_t) BGl_impusezd2producerzd2envz00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1092z00_863))->BgL_consumerz00) =
					((obj_t) BGl_proc2205z00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1092z00_863))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc2206z00zzmodule_impusez00), BUNSPEC);
				return ((obj_t) BgL_new1092z00_863);
			}
		}

	}



/* &make-import-compiler */
	obj_t BGl_z62makezd2importzd2compilerz62zzmodule_impusez00(obj_t
		BgL_envz00_2150)
	{
		{	/* Module/impuse.scm 69 */
			return BGl_makezd2importzd2compilerz00zzmodule_impusez00();
		}

	}



/* &<@anonymous:1309> */
	obj_t BGl_z62zc3z04anonymousza31309ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2151)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1308> */
	obj_t BGl_z62zc3z04anonymousza31308ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2152, obj_t BgL_mz00_2153, obj_t BgL_cz00_2154)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* make-use-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 77 */
			{	/* Module/impuse.scm 78 */
				BgL_ccompz00_bglt BgL_new1094z00_870;

				{	/* Module/impuse.scm 79 */
					BgL_ccompz00_bglt BgL_new1093z00_874;

					BgL_new1093z00_874 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/impuse.scm 79 */
						long BgL_arg1312z00_875;

						{	/* Module/impuse.scm 79 */
							long BgL_res2107z00_1819;

							BgL_res2107z00_1819 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1312z00_875 = BgL_res2107z00_1819;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1093z00_874), BgL_arg1312z00_875);
					}
					BgL_new1094z00_870 = BgL_new1093z00_874;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1094z00_870))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1094z00_870))->BgL_producerz00) =
					((obj_t) BGl_impusezd2producerzd2envz00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1094z00_870))->BgL_consumerz00) =
					((obj_t) BGl_proc2207z00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1094z00_870))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_impusezd2finaliza7erzd2envza7zzmodule_impusez00),
					BUNSPEC);
				return ((obj_t) BgL_new1094z00_870);
			}
		}

	}



/* &make-use-compiler */
	obj_t BGl_z62makezd2usezd2compilerz62zzmodule_impusez00(obj_t BgL_envz00_2158)
	{
		{	/* Module/impuse.scm 77 */
			return BGl_makezd2usezd2compilerz00zzmodule_impusez00();
		}

	}



/* &<@anonymous:1311> */
	obj_t BGl_z62zc3z04anonymousza31311ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2159, obj_t BgL_mz00_2160, obj_t BgL_cz00_2161)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* make-from-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 86 */
			{	/* Module/impuse.scm 87 */
				BgL_ccompz00_bglt BgL_new1096z00_876;

				{	/* Module/impuse.scm 88 */
					BgL_ccompz00_bglt BgL_new1095z00_884;

					BgL_new1095z00_884 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/impuse.scm 88 */
						long BgL_arg1319z00_885;

						{	/* Module/impuse.scm 88 */
							long BgL_res2108z00_1823;

							BgL_res2108z00_1823 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1319z00_885 = BgL_res2108z00_1823;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1095z00_884), BgL_arg1319z00_885);
					}
					BgL_new1096z00_876 = BgL_new1095z00_884;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1096z00_876))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1096z00_876))->BgL_producerz00) =
					((obj_t) BGl_impusezd2producerzd2envz00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1096z00_876))->BgL_consumerz00) =
					((obj_t) BGl_proc2208z00zzmodule_impusez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1096z00_876))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc2209z00zzmodule_impusez00), BUNSPEC);
				return ((obj_t) BgL_new1096z00_876);
			}
		}

	}



/* &make-from-compiler */
	obj_t BGl_z62makezd2fromzd2compilerz62zzmodule_impusez00(obj_t
		BgL_envz00_2165)
	{
		{	/* Module/impuse.scm 86 */
			return BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
		}

	}



/* &<@anonymous:1317> */
	obj_t BGl_z62zc3z04anonymousza31317ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2166)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1313> */
	obj_t BGl_z62zc3z04anonymousza31313ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2167, obj_t BgL_modulez00_2168, obj_t BgL_clausez00_2169)
	{
		{	/* Module/impuse.scm 90 */
			{	/* Module/impuse.scm 92 */
				obj_t BgL_arg1314z00_2331;

				{	/* Module/impuse.scm 92 */
					obj_t BgL_arg1315z00_2332;

					{	/* Module/impuse.scm 92 */
						obj_t BgL_list1316z00_2333;

						BgL_list1316z00_2333 = MAKE_YOUNG_PAIR(BgL_modulez00_2168, BNIL);
						BgL_arg1315z00_2332 =
							BGl_formatz00zz__r4_output_6_10_3z00
							(BGl_string2210z00zzmodule_impusez00, BgL_list1316z00_2333);
					}
					BgL_arg1314z00_2331 = bstring_to_symbol(BgL_arg1315z00_2332);
				}
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1314z00_2331);
			}
			BGl_impusezd2producerzd2zzmodule_impusez00(BgL_clausez00_2169);
			BGl_leavezd2functionzd2zztools_errorz00();
			return BNIL;
		}

	}



/* register-import! */
	obj_t BGl_registerzd2importz12zc0zzmodule_impusez00(BgL_importz00_bglt
		BgL_importz00_74)
	{
		{	/* Module/impuse.scm 106 */
			BGl_za2importzd2numberza2zd2zzmodule_impusez00 =
				(((long) 1) + BGl_za2importzd2numberza2zd2zzmodule_impusez00);
			((((BgL_importz00_bglt) COBJECT(BgL_importz00_74))->BgL_numberz00) =
				((long) BGl_za2importzd2numberza2zd2zzmodule_impusez00), BUNSPEC);
			{	/* Module/impuse.scm 109 */
				obj_t BgL_arg1322z00_886;

				BgL_arg1322z00_886 =
					(((BgL_importz00_bglt) COBJECT(BgL_importz00_74))->BgL_modulez00);
				return
					BGl_hashtablezd2putz12zc0zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_arg1322z00_886,
					((obj_t) BgL_importz00_74));
			}
		}

	}



/* impuse-producer */
	obj_t BGl_impusezd2producerzd2zzmodule_impusez00(obj_t BgL_clausez00_75)
	{
		{	/* Module/impuse.scm 114 */
			{	/* Module/impuse.scm 115 */
				obj_t BgL_modez00_887;

				BgL_modez00_887 = CAR(((obj_t) BgL_clausez00_75));
				{
					obj_t BgL_protosz00_888;

					if (PAIRP(BgL_clausez00_75))
						{	/* Module/impuse.scm 116 */
							obj_t BgL_arg1324z00_893;

							BgL_arg1324z00_893 = CDR(BgL_clausez00_75);
							{	/* Module/impuse.scm 116 */
								bool_t BgL_tmpz00_2485;

								BgL_protosz00_888 = BgL_arg1324z00_893;
								{
									obj_t BgL_l1228z00_895;

									BgL_l1228z00_895 = BgL_protosz00_888;
								BgL_zc3z04anonymousza31325ze3z87_896:
									if (PAIRP(BgL_l1228z00_895))
										{	/* Module/impuse.scm 118 */
											BGl_impusezd2parserzd2zzmodule_impusez00(CAR
												(BgL_l1228z00_895), BgL_modez00_887, BgL_clausez00_75);
											{
												obj_t BgL_l1228z00_2490;

												BgL_l1228z00_2490 = CDR(BgL_l1228z00_895);
												BgL_l1228z00_895 = BgL_l1228z00_2490;
												goto BgL_zc3z04anonymousza31325ze3z87_896;
											}
										}
									else
										{	/* Module/impuse.scm 118 */
											BgL_tmpz00_2485 = ((bool_t) 1);
										}
								}
								return BBOOL(BgL_tmpz00_2485);
							}
						}
					else
						{	/* Module/impuse.scm 116 */
							{	/* Module/impuse.scm 120 */
								obj_t BgL_arg1328z00_901;
								obj_t BgL_arg1329z00_902;

								BgL_arg1328z00_901 =
									BGl_findzd2locationzd2zztools_locationz00
									(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
								{	/* Module/impuse.scm 121 */
									obj_t BgL_list1331z00_904;

									BgL_list1331z00_904 = MAKE_YOUNG_PAIR(BgL_modez00_887, BNIL);
									BgL_arg1329z00_902 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2211z00zzmodule_impusez00, BgL_list1331z00_904);
								}
								{	/* Module/impuse.scm 120 */
									obj_t BgL_list1330z00_903;

									BgL_list1330z00_903 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzf2locationz20zztools_errorz00
										(BgL_arg1328z00_901, BGl_string2212z00zzmodule_impusez00,
										BgL_arg1329z00_902, BgL_clausez00_75, BgL_list1330z00_903);
								}
							}
						}
				}
			}
		}

	}



/* &impuse-producer */
	obj_t BGl_z62impusezd2producerzb0zzmodule_impusez00(obj_t BgL_envz00_2155,
		obj_t BgL_clausez00_2156)
	{
		{	/* Module/impuse.scm 114 */
			return BGl_impusezd2producerzd2zzmodule_impusez00(BgL_clausez00_2156);
		}

	}



/* import-all-module */
	obj_t BGl_importzd2allzd2modulez00zzmodule_impusez00(obj_t BgL_modulez00_76,
		obj_t BgL_modez00_77, obj_t BgL_srcz00_78)
	{
		{	/* Module/impuse.scm 126 */
			{	/* Module/impuse.scm 127 */
				obj_t BgL_miz00_905;

				BgL_miz00_905 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_76);
				if (BGl_isazf3zf3zz__objectz00(BgL_miz00_905,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 129 */
						obj_t BgL_vz00_1841;

						BgL_vz00_1841 = CNST_TABLE_REF(((long) 4));
						return
							((((BgL_importz00_bglt) COBJECT(
										((BgL_importz00_bglt) BgL_miz00_905)))->BgL_varsz00) =
							((obj_t) BgL_vz00_1841), BUNSPEC);
					}
				else
					{	/* Module/impuse.scm 130 */
						obj_t BgL_locz00_907;

						BgL_locz00_907 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_78,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 132 */
							BgL_importz00_bglt BgL_arg1334z00_908;

							{	/* Module/impuse.scm 132 */
								BgL_importz00_bglt BgL_new1099z00_909;

								{	/* Module/impuse.scm 133 */
									BgL_importz00_bglt BgL_new1098z00_910;

									BgL_new1098z00_910 =
										((BgL_importz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_importz00_bgl))));
									{	/* Module/impuse.scm 133 */
										long BgL_arg1335z00_911;

										{	/* Module/impuse.scm 133 */
											long BgL_res2114z00_1843;

											BgL_res2114z00_1843 =
												BGL_CLASS_INDEX(BGl_importz00zzmodule_impusez00);
											BgL_arg1335z00_911 = BgL_res2114z00_1843;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1098z00_910),
											BgL_arg1335z00_911);
									}
									BgL_new1099z00_909 = BgL_new1098z00_910;
								}
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_modulez00) = ((obj_t) BgL_modulez00_76), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_numberz00) = ((long) ((long) -1)), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_modez00) = ((obj_t) BgL_modez00_77), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_varsz00) =
									((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_aliasesz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_checksumz00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_locz00) = ((obj_t) BgL_locz00_907), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_srcz00) = ((obj_t) BgL_srcz00_78), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_declz00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_providez00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_codez00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1099z00_909))->
										BgL_accessz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_arg1334z00_908 = BgL_new1099z00_909;
							}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg1334z00_908);
						}
					}
			}
		}

	}



/* import-1-module */
	obj_t BGl_importzd21zd2modulez00zzmodule_impusez00(obj_t BgL_modulez00_79,
		obj_t BgL_varz00_80, obj_t BgL_aliasz00_81, obj_t BgL_modez00_82,
		obj_t BgL_srcz00_83)
	{
		{	/* Module/impuse.scm 147 */
			{	/* Module/impuse.scm 148 */
				obj_t BgL_miz00_913;

				BgL_miz00_913 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_79);
				if (BGl_isazf3zf3zz__objectz00(BgL_miz00_913,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 149 */
						if (CBOOL(BgL_aliasz00_81))
							{	/* Module/impuse.scm 154 */
								obj_t BgL_arg1344z00_915;

								{	/* Module/impuse.scm 154 */
									obj_t BgL_arg1345z00_916;
									obj_t BgL_arg1346z00_917;

									BgL_arg1345z00_916 =
										MAKE_YOUNG_PAIR(BgL_varz00_80, BgL_aliasz00_81);
									BgL_arg1346z00_917 =
										(((BgL_importz00_bglt) COBJECT(
												((BgL_importz00_bglt) BgL_miz00_913)))->BgL_aliasesz00);
									BgL_arg1344z00_915 =
										MAKE_YOUNG_PAIR(BgL_arg1345z00_916, BgL_arg1346z00_917);
								}
								return
									((((BgL_importz00_bglt) COBJECT(
												((BgL_importz00_bglt) BgL_miz00_913)))->
										BgL_aliasesz00) = ((obj_t) BgL_arg1344z00_915), BUNSPEC);
							}
						else
							{	/* Module/impuse.scm 155 */
								obj_t BgL_casezd2valuezd2_918;

								BgL_casezd2valuezd2_918 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_miz00_913)))->BgL_varsz00);
								if ((BgL_casezd2valuezd2_918 == CNST_TABLE_REF(((long) 5))))
									{	/* Module/impuse.scm 155 */
										((((BgL_importz00_bglt) COBJECT(
														((BgL_importz00_bglt) BgL_miz00_913)))->
												BgL_modez00) =
											((obj_t) ((obj_t) BgL_modez00_82)), BUNSPEC);
										{	/* Module/impuse.scm 158 */
											obj_t BgL_arg1351z00_920;

											{	/* Module/impuse.scm 158 */
												obj_t BgL_arg1352z00_921;

												BgL_arg1352z00_921 =
													MAKE_YOUNG_PAIR(BgL_varz00_80, BFALSE);
												{	/* Module/impuse.scm 158 */
													obj_t BgL_list1353z00_922;

													BgL_list1353z00_922 =
														MAKE_YOUNG_PAIR(BgL_arg1352z00_921, BNIL);
													BgL_arg1351z00_920 = BgL_list1353z00_922;
											}}
											return
												((((BgL_importz00_bglt) COBJECT(
															((BgL_importz00_bglt) BgL_miz00_913)))->
													BgL_varsz00) = ((obj_t) BgL_arg1351z00_920), BUNSPEC);
										}
									}
								else
									{	/* Module/impuse.scm 155 */
										if ((BgL_casezd2valuezd2_918 == CNST_TABLE_REF(((long) 4))))
											{	/* Module/impuse.scm 155 */
												return CNST_TABLE_REF(((long) 6));
											}
										else
											{	/* Module/impuse.scm 163 */
												obj_t BgL_arg1357z00_924;

												{	/* Module/impuse.scm 163 */
													obj_t BgL_arg1360z00_925;
													obj_t BgL_arg1361z00_926;

													BgL_arg1360z00_925 =
														MAKE_YOUNG_PAIR(BgL_varz00_80, BFALSE);
													BgL_arg1361z00_926 =
														(((BgL_importz00_bglt) COBJECT(
																((BgL_importz00_bglt) BgL_miz00_913)))->
														BgL_varsz00);
													BgL_arg1357z00_924 =
														MAKE_YOUNG_PAIR(BgL_arg1360z00_925,
														BgL_arg1361z00_926);
												}
												return
													((((BgL_importz00_bglt) COBJECT(
																((BgL_importz00_bglt) BgL_miz00_913)))->
														BgL_varsz00) =
													((obj_t) BgL_arg1357z00_924), BUNSPEC);
											}
									}
							}
					}
				else
					{	/* Module/impuse.scm 165 */
						obj_t BgL_locz00_927;

						BgL_locz00_927 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_83,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 167 */
							BgL_importz00_bglt BgL_arg1363z00_928;

							{	/* Module/impuse.scm 167 */
								BgL_importz00_bglt BgL_new1102z00_929;

								{	/* Module/impuse.scm 168 */
									BgL_importz00_bglt BgL_new1100z00_934;

									BgL_new1100z00_934 =
										((BgL_importz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_importz00_bgl))));
									{	/* Module/impuse.scm 168 */
										long BgL_arg1370z00_935;

										{	/* Module/impuse.scm 168 */
											long BgL_res2119z00_1861;

											BgL_res2119z00_1861 =
												BGL_CLASS_INDEX(BGl_importz00zzmodule_impusez00);
											BgL_arg1370z00_935 = BgL_res2119z00_1861;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1100z00_934),
											BgL_arg1370z00_935);
									}
									BgL_new1102z00_929 = BgL_new1100z00_934;
								}
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_modulez00) = ((obj_t) BgL_modulez00_79), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_numberz00) = ((long) ((long) -1)), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_modez00) = ((obj_t) BgL_modez00_82), BUNSPEC);
								{
									obj_t BgL_auxz00_2567;

									if (CBOOL(BgL_aliasz00_81))
										{	/* Module/impuse.scm 171 */
											BgL_auxz00_2567 = BNIL;
										}
									else
										{	/* Module/impuse.scm 171 */
											obj_t BgL_arg1364z00_930;

											BgL_arg1364z00_930 =
												MAKE_YOUNG_PAIR(BgL_varz00_80, BFALSE);
											{	/* Module/impuse.scm 171 */
												obj_t BgL_list1365z00_931;

												BgL_list1365z00_931 =
													MAKE_YOUNG_PAIR(BgL_arg1364z00_930, BNIL);
												BgL_auxz00_2567 = BgL_list1365z00_931;
											}
										}
									((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
											BgL_varsz00) = ((obj_t) BgL_auxz00_2567), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_2573;

									if (CBOOL(BgL_aliasz00_81))
										{	/* Module/impuse.scm 170 */
											obj_t BgL_arg1367z00_932;

											BgL_arg1367z00_932 =
												MAKE_YOUNG_PAIR(BgL_varz00_80, BgL_aliasz00_81);
											{	/* Module/impuse.scm 170 */
												obj_t BgL_list1368z00_933;

												BgL_list1368z00_933 =
													MAKE_YOUNG_PAIR(BgL_arg1367z00_932, BNIL);
												BgL_auxz00_2573 = BgL_list1368z00_933;
											}
										}
									else
										{	/* Module/impuse.scm 170 */
											BgL_auxz00_2573 = BNIL;
										}
									((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
											BgL_aliasesz00) = ((obj_t) BgL_auxz00_2573), BUNSPEC);
								}
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_checksumz00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_locz00) = ((obj_t) BgL_locz00_927), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_srcz00) = ((obj_t) BgL_srcz00_83), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_declz00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_providez00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_codez00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1102z00_929))->
										BgL_accessz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_arg1363z00_928 = BgL_new1102z00_929;
							}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg1363z00_928);
						}
					}
			}
		}

	}



/* import-with-module! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t BgL_modulez00_84,
		obj_t BgL_srcz00_85)
	{
		{	/* Module/impuse.scm 178 */
			{	/* Module/impuse.scm 179 */
				obj_t BgL_miz00_937;

				BgL_miz00_937 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_84);
				if (BGl_isazf3zf3zz__objectz00(BgL_miz00_937,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 180 */
						return BFALSE;
					}
				else
					{	/* Module/impuse.scm 181 */
						obj_t BgL_locz00_939;

						BgL_locz00_939 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_85,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 183 */
							BgL_importz00_bglt BgL_arg1381z00_940;

							{	/* Module/impuse.scm 183 */
								BgL_importz00_bglt BgL_new1104z00_941;

								{	/* Module/impuse.scm 184 */
									BgL_importz00_bglt BgL_new1103z00_942;

									BgL_new1103z00_942 =
										((BgL_importz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_importz00_bgl))));
									{	/* Module/impuse.scm 184 */
										long BgL_arg1382z00_943;

										{	/* Module/impuse.scm 184 */
											long BgL_res2123z00_1868;

											BgL_res2123z00_1868 =
												BGL_CLASS_INDEX(BGl_importz00zzmodule_impusez00);
											BgL_arg1382z00_943 = BgL_res2123z00_1868;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1103z00_942),
											BgL_arg1382z00_943);
									}
									BgL_new1104z00_941 = BgL_new1103z00_942;
								}
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_modulez00) = ((obj_t) BgL_modulez00_84), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_numberz00) = ((long) ((long) -1)), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_modez00) =
									((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_varsz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_aliasesz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_checksumz00) = ((obj_t) BINT(((long) 0))), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_locz00) = ((obj_t) BgL_locz00_939), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_srcz00) = ((obj_t) BgL_srcz00_85), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_declz00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_providez00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_codez00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_importz00_bglt) COBJECT(BgL_new1104z00_941))->
										BgL_accessz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_arg1381z00_940 = BgL_new1104z00_941;
							}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg1381z00_940);
						}
					}
			}
		}

	}



/* &import-with-module! */
	obj_t BGl_z62importzd2withzd2modulez12z70zzmodule_impusez00(obj_t
		BgL_envz00_2170, obj_t BgL_modulez00_2171, obj_t BgL_srcz00_2172)
	{
		{	/* Module/impuse.scm 178 */
			return
				BGl_importzd2withzd2modulez12z12zzmodule_impusez00(BgL_modulez00_2171,
				BgL_srcz00_2172);
		}

	}



/* impuse-parser */
	obj_t BGl_impusezd2parserzd2zzmodule_impusez00(obj_t BgL_prototypez00_86,
		obj_t BgL_modez00_87, obj_t BgL_importzd2srczd2_88)
	{
		{	/* Module/impuse.scm 202 */
			{

				if (SYMBOLP(BgL_prototypez00_86))
					{	/* Module/impuse.scm 218 */
						return
							BGl_importzd2allzd2modulez00zzmodule_impusez00
							(BgL_prototypez00_86, BgL_modez00_87, BgL_importzd2srczd2_88);
					}
				else
					{	/* Module/impuse.scm 218 */
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
							(BgL_prototypez00_86))
							{	/* Module/impuse.scm 222 */
								obj_t BgL_invz00_950;

								BgL_invz00_950 = bgl_reverse(BgL_prototypez00_86);
								{
									obj_t BgL_lstz00_953;
									obj_t BgL_filesz00_954;

									BgL_lstz00_953 = BgL_invz00_950;
									BgL_filesz00_954 = BNIL;
								BgL_zc3z04anonymousza31391ze3z87_955:
									if (PAIRP(BgL_lstz00_953))
										{	/* Module/impuse.scm 228 */
											bool_t BgL_test2351z00_2620;

											{	/* Module/impuse.scm 228 */
												obj_t BgL_tmpz00_2621;

												BgL_tmpz00_2621 = CAR(BgL_lstz00_953);
												BgL_test2351z00_2620 = STRINGP(BgL_tmpz00_2621);
											}
											if (BgL_test2351z00_2620)
												{	/* Module/impuse.scm 229 */
													obj_t BgL_arg1396z00_959;
													obj_t BgL_arg1417z00_960;

													BgL_arg1396z00_959 = CDR(BgL_lstz00_953);
													BgL_arg1417z00_960 =
														MAKE_YOUNG_PAIR(CAR(BgL_lstz00_953),
														BgL_filesz00_954);
													{
														obj_t BgL_filesz00_2628;
														obj_t BgL_lstz00_2627;

														BgL_lstz00_2627 = BgL_arg1396z00_959;
														BgL_filesz00_2628 = BgL_arg1417z00_960;
														BgL_filesz00_954 = BgL_filesz00_2628;
														BgL_lstz00_953 = BgL_lstz00_2627;
														goto BgL_zc3z04anonymousza31391ze3z87_955;
													}
												}
											else
												{	/* Module/impuse.scm 230 */
													bool_t BgL_test2352z00_2629;

													{	/* Module/impuse.scm 230 */
														obj_t BgL_tmpz00_2630;

														BgL_tmpz00_2630 = CAR(BgL_lstz00_953);
														BgL_test2352z00_2629 = SYMBOLP(BgL_tmpz00_2630);
													}
													if (BgL_test2352z00_2629)
														{	/* Module/impuse.scm 231 */
															obj_t BgL_modz00_964;
															obj_t BgL_varsz00_965;

															BgL_modz00_964 = CAR(BgL_lstz00_953);
															BgL_varsz00_965 = CDR(BgL_lstz00_953);
															if (NULLP(BgL_varsz00_965))
																{	/* Module/impuse.scm 234 */
																	if (NULLP(BgL_filesz00_954))
																		{	/* Module/impuse.scm 236 */
																			BFALSE;
																		}
																	else
																		{	/* Module/impuse.scm 236 */
																			BGl_modulezd2addzd2accessz12z12zz__modulez00
																				(BgL_modz00_964, BgL_filesz00_954,
																				BGl_string2213z00zzmodule_impusez00);
																		}
																	return
																		BGl_importzd2allzd2modulez00zzmodule_impusez00
																		(BgL_modz00_964, BgL_modez00_87,
																		BgL_prototypez00_86);
																}
															else
																{	/* Module/impuse.scm 238 */
																	bool_t BgL_test2355z00_2641;

																	{
																		obj_t BgL_l1230z00_990;

																		BgL_l1230z00_990 = BgL_varsz00_965;
																	BgL_zc3z04anonymousza31462ze3z87_991:
																		if (NULLP(BgL_l1230z00_990))
																			{	/* Module/impuse.scm 238 */
																				BgL_test2355z00_2641 = ((bool_t) 1);
																			}
																		else
																			{	/* Module/impuse.scm 238 */
																				bool_t BgL_test2357z00_2644;

																				{	/* Module/impuse.scm 238 */
																					obj_t BgL_arg1465z00_996;

																					BgL_arg1465z00_996 =
																						CAR(((obj_t) BgL_l1230z00_990));
																					{	/* Module/impuse.scm 215 */
																						bool_t BgL__ortest_1105z00_1896;

																						BgL__ortest_1105z00_1896 =
																							SYMBOLP(BgL_arg1465z00_996);
																						if (BgL__ortest_1105z00_1896)
																							{	/* Module/impuse.scm 215 */
																								BgL_test2357z00_2644 =
																									BgL__ortest_1105z00_1896;
																							}
																						else
																							{	/* Module/impuse.scm 215 */
																								BgL_test2357z00_2644 =
																									BGl_aliaszf3ze70z14zzmodule_impusez00
																									(BgL_arg1465z00_996);
																							}
																					}
																				}
																				if (BgL_test2357z00_2644)
																					{
																						obj_t BgL_l1230z00_2650;

																						BgL_l1230z00_2650 =
																							CDR(((obj_t) BgL_l1230z00_990));
																						BgL_l1230z00_990 =
																							BgL_l1230z00_2650;
																						goto
																							BgL_zc3z04anonymousza31462ze3z87_991;
																					}
																				else
																					{	/* Module/impuse.scm 238 */
																						BgL_test2355z00_2641 = ((bool_t) 0);
																					}
																			}
																	}
																	if (BgL_test2355z00_2641)
																		{	/* Module/impuse.scm 238 */
																			if (NULLP(BgL_filesz00_954))
																				{	/* Module/impuse.scm 240 */
																					BFALSE;
																				}
																			else
																				{	/* Module/impuse.scm 240 */
																					BGl_modulezd2addzd2accessz12z12zz__modulez00
																						(BgL_modz00_964, BgL_filesz00_954,
																						BGl_string2213z00zzmodule_impusez00);
																				}
																			{
																				obj_t BgL_l1233z00_980;

																				{	/* Module/impuse.scm 242 */
																					bool_t BgL_tmpz00_2656;

																					BgL_l1233z00_980 = BgL_varsz00_965;
																				BgL_zc3z04anonymousza31445ze3z87_981:
																					if (PAIRP(BgL_l1233z00_980))
																						{	/* Module/impuse.scm 242 */
																							{	/* Module/impuse.scm 243 */
																								obj_t BgL_vz00_983;

																								BgL_vz00_983 =
																									CAR(BgL_l1233z00_980);
																								if (BGl_aliaszf3ze70z14zzmodule_impusez00(BgL_vz00_983))
																									{	/* Module/impuse.scm 244 */
																										obj_t BgL_arg1448z00_985;
																										obj_t BgL_arg1449z00_986;

																										{	/* Module/impuse.scm 244 */
																											obj_t BgL_pairz00_1905;

																											BgL_pairz00_1905 =
																												CDR(
																												((obj_t) BgL_vz00_983));
																											BgL_arg1448z00_985 =
																												CAR(BgL_pairz00_1905);
																										}
																										BgL_arg1449z00_986 =
																											CAR(
																											((obj_t) BgL_vz00_983));
																										BGl_importzd21zd2modulez00zzmodule_impusez00
																											(BgL_modz00_964,
																											BgL_arg1448z00_985,
																											BgL_arg1449z00_986,
																											BgL_modez00_87,
																											BgL_prototypez00_86);
																									}
																								else
																									{	/* Module/impuse.scm 243 */
																										BGl_importzd21zd2modulez00zzmodule_impusez00
																											(BgL_modz00_964,
																											BgL_vz00_983, BFALSE,
																											BgL_modez00_87,
																											BgL_prototypez00_86);
																									}
																							}
																							{
																								obj_t BgL_l1233z00_2669;

																								BgL_l1233z00_2669 =
																									CDR(BgL_l1233z00_980);
																								BgL_l1233z00_980 =
																									BgL_l1233z00_2669;
																								goto
																									BgL_zc3z04anonymousza31445ze3z87_981;
																							}
																						}
																					else
																						{	/* Module/impuse.scm 242 */
																							BgL_tmpz00_2656 = ((bool_t) 1);
																						}
																					return BBOOL(BgL_tmpz00_2656);
																				}
																			}
																		}
																	else
																		{	/* Module/impuse.scm 238 */
																		BgL_zc3z04anonymousza31477ze3z87_1001:
																			{	/* Module/impuse.scm 207 */
																				obj_t BgL_arg1489z00_1002;

																				{	/* Module/impuse.scm 207 */
																					obj_t BgL_list1491z00_1004;

																					BgL_list1491z00_1004 =
																						MAKE_YOUNG_PAIR(BgL_modez00_87,
																						BNIL);
																					BgL_arg1489z00_1002 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string2211z00zzmodule_impusez00,
																						BgL_list1491z00_1004);
																				}
																				{	/* Module/impuse.scm 206 */
																					obj_t BgL_list1490z00_1003;

																					BgL_list1490z00_1003 =
																						MAKE_YOUNG_PAIR(BNIL, BNIL);
																					return
																						BGl_userzd2errorzd2zztools_errorz00
																						(BGl_string2212z00zzmodule_impusez00,
																						BgL_arg1489z00_1002,
																						BgL_prototypez00_86,
																						BgL_list1490z00_1003);
																				}
																			}
																		}
																}
														}
													else
														{	/* Module/impuse.scm 230 */
															goto BgL_zc3z04anonymousza31477ze3z87_1001;
														}
												}
										}
									else
										{	/* Module/impuse.scm 226 */
											goto BgL_zc3z04anonymousza31477ze3z87_1001;
										}
								}
							}
						else
							{	/* Module/impuse.scm 221 */
								goto BgL_zc3z04anonymousza31477ze3z87_1001;
							}
					}
			}
		}

	}



/* alias?~0 */
	bool_t BGl_aliaszf3ze70z14zzmodule_impusez00(obj_t BgL_vz00_1005)
	{
		{	/* Module/impuse.scm 212 */
			if (PAIRP(BgL_vz00_1005))
				{	/* Module/impuse.scm 212 */
					obj_t BgL_cdrzd2371zd2_1011;

					BgL_cdrzd2371zd2_1011 = CDR(BgL_vz00_1005);
					{	/* Module/impuse.scm 212 */
						bool_t BgL_test2363z00_2679;

						{	/* Module/impuse.scm 212 */
							obj_t BgL_tmpz00_2680;

							BgL_tmpz00_2680 = CAR(BgL_vz00_1005);
							BgL_test2363z00_2679 = SYMBOLP(BgL_tmpz00_2680);
						}
						if (BgL_test2363z00_2679)
							{	/* Module/impuse.scm 212 */
								if (PAIRP(BgL_cdrzd2371zd2_1011))
									{	/* Module/impuse.scm 212 */
										bool_t BgL_test2365z00_2685;

										{	/* Module/impuse.scm 212 */
											obj_t BgL_tmpz00_2686;

											BgL_tmpz00_2686 = CAR(BgL_cdrzd2371zd2_1011);
											BgL_test2365z00_2685 = SYMBOLP(BgL_tmpz00_2686);
										}
										if (BgL_test2365z00_2685)
											{	/* Module/impuse.scm 212 */
												return NULLP(CDR(BgL_cdrzd2371zd2_1011));
											}
										else
											{	/* Module/impuse.scm 212 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Module/impuse.scm 212 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Module/impuse.scm 212 */
								return ((bool_t) 0);
							}
					}
				}
			else
				{	/* Module/impuse.scm 212 */
					return ((bool_t) 0);
				}
		}

	}



/* get-imported-modules */
	BGL_EXPORTED_DEF obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 257 */
			{	/* Module/impuse.scm 258 */
				obj_t BgL_l1235z00_1028;

				BgL_l1235z00_1028 =
					BGl_hashtablezd2ze3listz31zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00);
				if (NULLP(BgL_l1235z00_1028))
					{	/* Module/impuse.scm 258 */
						return BNIL;
					}
				else
					{	/* Module/impuse.scm 258 */
						obj_t BgL_head1237z00_1030;

						{	/* Module/impuse.scm 258 */
							obj_t BgL_arg1561z00_1042;

							BgL_arg1561z00_1042 =
								(((BgL_importz00_bglt) COBJECT(
										((BgL_importz00_bglt)
											CAR(BgL_l1235z00_1028))))->BgL_modulez00);
							{	/* Module/impuse.scm 258 */
								obj_t BgL_res2141z00_1911;

								BgL_res2141z00_1911 =
									MAKE_YOUNG_PAIR(BgL_arg1561z00_1042, BNIL);
								BgL_head1237z00_1030 = BgL_res2141z00_1911;
							}
						}
						{	/* Module/impuse.scm 258 */
							obj_t BgL_g1240z00_1031;

							BgL_g1240z00_1031 = CDR(BgL_l1235z00_1028);
							{
								obj_t BgL_l1235z00_1033;
								obj_t BgL_tail1238z00_1034;

								BgL_l1235z00_1033 = BgL_g1240z00_1031;
								BgL_tail1238z00_1034 = BgL_head1237z00_1030;
							BgL_zc3z04anonymousza31540ze3z87_1035:
								if (NULLP(BgL_l1235z00_1033))
									{	/* Module/impuse.scm 258 */
										return BgL_head1237z00_1030;
									}
								else
									{	/* Module/impuse.scm 258 */
										obj_t BgL_newtail1239z00_1037;

										{	/* Module/impuse.scm 258 */
											obj_t BgL_arg1553z00_1039;

											BgL_arg1553z00_1039 =
												(((BgL_importz00_bglt) COBJECT(
														((BgL_importz00_bglt)
															CAR(
																((obj_t) BgL_l1235z00_1033)))))->BgL_modulez00);
											{	/* Module/impuse.scm 258 */
												obj_t BgL_res2143z00_1916;

												BgL_res2143z00_1916 =
													MAKE_YOUNG_PAIR(BgL_arg1553z00_1039, BNIL);
												BgL_newtail1239z00_1037 = BgL_res2143z00_1916;
											}
										}
										SET_CDR(BgL_tail1238z00_1034, BgL_newtail1239z00_1037);
										{	/* Module/impuse.scm 258 */
											obj_t BgL_arg1552z00_1038;

											BgL_arg1552z00_1038 = CDR(((obj_t) BgL_l1235z00_1033));
											{
												obj_t BgL_tail1238z00_2710;
												obj_t BgL_l1235z00_2709;

												BgL_l1235z00_2709 = BgL_arg1552z00_1038;
												BgL_tail1238z00_2710 = BgL_newtail1239z00_1037;
												BgL_tail1238z00_1034 = BgL_tail1238z00_2710;
												BgL_l1235z00_1033 = BgL_l1235z00_2709;
												goto BgL_zc3z04anonymousza31540ze3z87_1035;
											}
										}
									}
							}
						}
					}
			}
		}

	}



/* &get-imported-modules */
	obj_t BGl_z62getzd2importedzd2modulesz62zzmodule_impusez00(obj_t
		BgL_envz00_2173)
	{
		{	/* Module/impuse.scm 257 */
			return BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
		}

	}



/* import-finalizer */
	obj_t BGl_importzd2finaliza7erz75zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 269 */
			{
				long BgL_numz00_1045;

				BgL_numz00_1045 = BGl_za2importzd2numberza2zd2zzmodule_impusez00;
			BgL_zc3z04anonymousza31565ze3z87_1046:
				BGl_hashtablezd2forzd2eachz00zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00,
					BGl_proc2214z00zzmodule_impusez00);
				if ((BGl_za2importzd2numberza2zd2zzmodule_impusez00 > BgL_numz00_1045))
					{
						long BgL_numz00_2715;

						BgL_numz00_2715 = BGl_za2importzd2numberza2zd2zzmodule_impusez00;
						BgL_numz00_1045 = BgL_numz00_2715;
						goto BgL_zc3z04anonymousza31565ze3z87_1046;
					}
				else
					{	/* Module/impuse.scm 273 */
						((bool_t) 0);
					}
			}
			{	/* Module/impuse.scm 276 */
				obj_t BgL_importsz00_1054;

				BgL_importsz00_1054 =
					BGl_sortz00zz__r4_vectors_6_8z00(BGl_proc2215z00zzmodule_impusez00,
					BGl_hashtablezd2ze3listz31zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00));
				{
					obj_t BgL_l1241z00_1056;

					BgL_l1241z00_1056 = BgL_importsz00_1054;
				BgL_zc3z04anonymousza31576ze3z87_1057:
					if (PAIRP(BgL_l1241z00_1056))
						{	/* Module/impuse.scm 280 */
							{	/* Module/impuse.scm 281 */
								obj_t BgL_iz00_1059;

								BgL_iz00_1059 = CAR(BgL_l1241z00_1056);
								{	/* Module/impuse.scm 281 */
									bool_t BgL_test2370z00_2721;

									if (
										((((BgL_importz00_bglt) COBJECT(
														((BgL_importz00_bglt) BgL_iz00_1059)))->
												BgL_modez00) == CNST_TABLE_REF(((long) 5))))
										{	/* Module/impuse.scm 281 */
											BgL_test2370z00_2721 = ((bool_t) 1);
										}
									else
										{	/* Module/impuse.scm 281 */
											BgL_test2370z00_2721 =
												(
												(((BgL_importz00_bglt) COBJECT(
															((BgL_importz00_bglt) BgL_iz00_1059)))->
													BgL_declz00) == CNST_TABLE_REF(((long) 7)));
										}
									if (BgL_test2370z00_2721)
										{	/* Module/impuse.scm 281 */
											BFALSE;
										}
									else
										{	/* Module/impuse.scm 281 */
											BGl_importzd2modulez12zc0zzmodule_impusez00
												(BgL_iz00_1059);
										}
								}
							}
							{
								obj_t BgL_l1241z00_2732;

								BgL_l1241z00_2732 = CDR(BgL_l1241z00_1056);
								BgL_l1241z00_1056 = BgL_l1241z00_2732;
								goto BgL_zc3z04anonymousza31576ze3z87_1057;
							}
						}
					else
						{	/* Module/impuse.scm 280 */
							((bool_t) 1);
						}
				}
				{	/* Module/impuse.scm 286 */
					obj_t BgL_initsz00_1070;

					{	/* Module/impuse.scm 286 */
						obj_t BgL_hook1247z00_1074;

						BgL_hook1247z00_1074 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
						{
							obj_t BgL_l1244z00_1076;
							obj_t BgL_h1245z00_1077;

							BgL_l1244z00_1076 = BgL_importsz00_1054;
							BgL_h1245z00_1077 = BgL_hook1247z00_1074;
						BgL_zc3z04anonymousza31599ze3z87_1078:
							if (NULLP(BgL_l1244z00_1076))
								{	/* Module/impuse.scm 286 */
									BgL_initsz00_1070 = CDR(BgL_hook1247z00_1074);
								}
							else
								{	/* Module/impuse.scm 286 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												(((BgL_importz00_bglt) COBJECT(
															((BgL_importz00_bglt)
																CAR(
																	((obj_t) BgL_l1244z00_1076)))))->BgL_modez00),
												CNST_TABLE_REF(((long) 8)))))
										{	/* Module/impuse.scm 286 */
											obj_t BgL_nh1246z00_1083;

											{	/* Module/impuse.scm 286 */
												obj_t BgL_arg1611z00_1085;

												BgL_arg1611z00_1085 = CAR(((obj_t) BgL_l1244z00_1076));
												{	/* Module/impuse.scm 286 */
													obj_t BgL_res2148z00_1939;

													BgL_res2148z00_1939 =
														MAKE_YOUNG_PAIR(BgL_arg1611z00_1085, BNIL);
													BgL_nh1246z00_1083 = BgL_res2148z00_1939;
											}}
											SET_CDR(BgL_h1245z00_1077, BgL_nh1246z00_1083);
											{	/* Module/impuse.scm 286 */
												obj_t BgL_arg1606z00_1084;

												BgL_arg1606z00_1084 = CDR(((obj_t) BgL_l1244z00_1076));
												{
													obj_t BgL_h1245z00_2753;
													obj_t BgL_l1244z00_2752;

													BgL_l1244z00_2752 = BgL_arg1606z00_1084;
													BgL_h1245z00_2753 = BgL_nh1246z00_1083;
													BgL_h1245z00_1077 = BgL_h1245z00_2753;
													BgL_l1244z00_1076 = BgL_l1244z00_2752;
													goto BgL_zc3z04anonymousza31599ze3z87_1078;
												}
											}
										}
									else
										{	/* Module/impuse.scm 286 */
											obj_t BgL_arg1612z00_1086;

											BgL_arg1612z00_1086 = CDR(((obj_t) BgL_l1244z00_1076));
											{
												obj_t BgL_l1244z00_2756;

												BgL_l1244z00_2756 = BgL_arg1612z00_1086;
												BgL_l1244z00_1076 = BgL_l1244z00_2756;
												goto BgL_zc3z04anonymousza31599ze3z87_1078;
											}
										}
								}
						}
					}
					if (PAIRP(BgL_initsz00_1070))
						{	/* Module/impuse.scm 290 */
							obj_t BgL_arg1597z00_1072;

							BgL_arg1597z00_1072 =
								BGl_importedzd2moduleszd2unitz00zzmodule_impusez00
								(BgL_initsz00_1070);
							{	/* Module/impuse.scm 290 */
								obj_t BgL_list1598z00_1073;

								BgL_list1598z00_1073 =
									MAKE_YOUNG_PAIR(BgL_arg1597z00_1072, BNIL);
								return BgL_list1598z00_1073;
							}
						}
					else
						{	/* Module/impuse.scm 289 */
							return BNIL;
						}
				}
			}
		}

	}



/* &<@anonymous:1627> */
	obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2176, obj_t BgL_i1z00_2177, obj_t BgL_i2z00_2178)
	{
		{	/* Module/impuse.scm 276 */
			return
				BBOOL(
				((((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_i1z00_2177)))->BgL_numberz00) <
					(((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_i2z00_2178)))->BgL_numberz00)));
		}

	}



/* &<@anonymous:1574> */
	obj_t BGl_z62zc3z04anonymousza31574ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2179, obj_t BgL_kz00_2180, obj_t BgL_iz00_2181)
	{
		{	/* Module/impuse.scm 272 */
			return BGl_readzd2importz12zc0zzmodule_impusez00(BgL_iz00_2181);
		}

	}



/* initialize-imported-modules */
	BGL_EXPORTED_DEF obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_89)
	{
		{	/* Module/impuse.scm 301 */
			{	/* Module/impuse.scm 317 */
				obj_t BgL_callsz00_1100;

				{	/* Module/impuse.scm 317 */
					obj_t BgL_l1248z00_1133;

					BgL_l1248z00_1133 =
						BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00;
					if (NULLP(BgL_l1248z00_1133))
						{	/* Module/impuse.scm 317 */
							BgL_callsz00_1100 = BNIL;
						}
					else
						{	/* Module/impuse.scm 317 */
							obj_t BgL_head1250z00_1135;

							{	/* Module/impuse.scm 317 */
								obj_t BgL_arg1711z00_1147;

								BgL_arg1711z00_1147 =
									BGl_initializa7ezd2moduleze70z92zzmodule_impusez00
									(BgL_getzd2initzd2_89, CAR(BgL_l1248z00_1133));
								{	/* Module/impuse.scm 317 */
									obj_t BgL_res2155z00_1959;

									BgL_res2155z00_1959 =
										MAKE_YOUNG_PAIR(BgL_arg1711z00_1147, BNIL);
									BgL_head1250z00_1135 = BgL_res2155z00_1959;
								}
							}
							{	/* Module/impuse.scm 317 */
								obj_t BgL_g1253z00_1136;

								BgL_g1253z00_1136 = CDR(BgL_l1248z00_1133);
								{
									obj_t BgL_l1248z00_1138;
									obj_t BgL_tail1251z00_1139;

									BgL_l1248z00_1138 = BgL_g1253z00_1136;
									BgL_tail1251z00_1139 = BgL_head1250z00_1135;
								BgL_zc3z04anonymousza31697ze3z87_1140:
									if (NULLP(BgL_l1248z00_1138))
										{	/* Module/impuse.scm 317 */
											BgL_callsz00_1100 = BgL_head1250z00_1135;
										}
									else
										{	/* Module/impuse.scm 317 */
											obj_t BgL_newtail1252z00_1142;

											{	/* Module/impuse.scm 317 */
												obj_t BgL_arg1707z00_1144;

												{	/* Module/impuse.scm 317 */
													obj_t BgL_arg1708z00_1145;

													BgL_arg1708z00_1145 =
														CAR(((obj_t) BgL_l1248z00_1138));
													BgL_arg1707z00_1144 =
														BGl_initializa7ezd2moduleze70z92zzmodule_impusez00
														(BgL_getzd2initzd2_89, BgL_arg1708z00_1145);
												}
												{	/* Module/impuse.scm 317 */
													obj_t BgL_res2157z00_1963;

													BgL_res2157z00_1963 =
														MAKE_YOUNG_PAIR(BgL_arg1707z00_1144, BNIL);
													BgL_newtail1252z00_1142 = BgL_res2157z00_1963;
												}
											}
											SET_CDR(BgL_tail1251z00_1139, BgL_newtail1252z00_1142);
											{	/* Module/impuse.scm 317 */
												obj_t BgL_arg1704z00_1143;

												BgL_arg1704z00_1143 = CDR(((obj_t) BgL_l1248z00_1138));
												{
													obj_t BgL_tail1251z00_2784;
													obj_t BgL_l1248z00_2783;

													BgL_l1248z00_2783 = BgL_arg1704z00_1143;
													BgL_tail1251z00_2784 = BgL_newtail1252z00_1142;
													BgL_tail1251z00_1139 = BgL_tail1251z00_2784;
													BgL_l1248z00_1138 = BgL_l1248z00_2783;
													goto BgL_zc3z04anonymousza31697ze3z87_1140;
												}
											}
										}
								}
							}
						}
				}
				{	/* Module/impuse.scm 317 */

					{	/* Module/impuse.scm 318 */
						bool_t BgL_test2377z00_2785;

						if (
							((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
								((long) 0)))
							{	/* Module/impuse.scm 319 */
								obj_t BgL_arg1692z00_1131;

								{	/* Module/impuse.scm 319 */
									obj_t BgL_arg1695z00_1132;

									BgL_arg1695z00_1132 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									BgL_arg1692z00_1131 =
										(((BgL_backendz00_bglt) COBJECT(
												((BgL_backendz00_bglt) BgL_arg1695z00_1132)))->
										BgL_debugzd2supportzd2);
								}
								BgL_test2377z00_2785 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
											((long) 9)), BgL_arg1692z00_1131));
							}
						else
							{	/* Module/impuse.scm 318 */
								BgL_test2377z00_2785 = ((bool_t) 0);
							}
						if (BgL_test2377z00_2785)
							{	/* Module/impuse.scm 321 */
								obj_t BgL_arg1644z00_1105;

								{	/* Module/impuse.scm 321 */
									obj_t BgL_arg1652z00_1106;

									{	/* Module/impuse.scm 321 */
										obj_t BgL_arg1662z00_1107;

										{	/* Module/impuse.scm 321 */
											obj_t BgL_ll1254z00_1108;

											BgL_ll1254z00_1108 =
												BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00;
											if (NULLP(BgL_ll1254z00_1108))
												{	/* Module/impuse.scm 321 */
													BgL_arg1662z00_1107 = BNIL;
												}
											else
												{	/* Module/impuse.scm 321 */
													obj_t BgL_head1256z00_1111;

													{	/* Module/impuse.scm 321 */
														obj_t BgL_arg1686z00_1127;

														{	/* Module/impuse.scm 321 */
															obj_t BgL_arg1687z00_1128;
															obj_t BgL_arg1688z00_1129;

															BgL_arg1687z00_1128 = CAR(BgL_ll1254z00_1108);
															BgL_arg1688z00_1129 =
																CAR(((obj_t) BgL_callsz00_1100));
															BgL_arg1686z00_1127 =
																BGl_tracezd2initializa7ezd2moduleze70z40zzmodule_impusez00
																(BgL_getzd2initzd2_89, BgL_arg1687z00_1128,
																BgL_arg1688z00_1129);
														}
														{	/* Module/impuse.scm 321 */
															obj_t BgL_res2161z00_1974;

															BgL_res2161z00_1974 =
																MAKE_YOUNG_PAIR(BgL_arg1686z00_1127, BNIL);
															BgL_head1256z00_1111 = BgL_res2161z00_1974;
														}
													}
													{	/* Module/impuse.scm 321 */
														obj_t BgL_g1260z00_1112;
														obj_t BgL_g1261z00_1113;

														BgL_g1260z00_1112 = CDR(BgL_ll1254z00_1108);
														BgL_g1261z00_1113 =
															CDR(((obj_t) BgL_callsz00_1100));
														{
															obj_t BgL_ll1254z00_1115;
															obj_t BgL_ll1255z00_1116;
															obj_t BgL_tail1257z00_1117;

															BgL_ll1254z00_1115 = BgL_g1260z00_1112;
															BgL_ll1255z00_1116 = BgL_g1261z00_1113;
															BgL_tail1257z00_1117 = BgL_head1256z00_1111;
														BgL_zc3z04anonymousza31664ze3z87_1118:
															if (NULLP(BgL_ll1254z00_1115))
																{	/* Module/impuse.scm 321 */
																	BgL_arg1662z00_1107 = BgL_head1256z00_1111;
																}
															else
																{	/* Module/impuse.scm 321 */
																	obj_t BgL_newtail1258z00_1120;

																	{	/* Module/impuse.scm 321 */
																		obj_t BgL_arg1672z00_1123;

																		{	/* Module/impuse.scm 321 */
																			obj_t BgL_arg1684z00_1124;
																			obj_t BgL_arg1685z00_1125;

																			BgL_arg1684z00_1124 =
																				CAR(((obj_t) BgL_ll1254z00_1115));
																			BgL_arg1685z00_1125 =
																				CAR(((obj_t) BgL_ll1255z00_1116));
																			BgL_arg1672z00_1123 =
																				BGl_tracezd2initializa7ezd2moduleze70z40zzmodule_impusez00
																				(BgL_getzd2initzd2_89,
																				BgL_arg1684z00_1124,
																				BgL_arg1685z00_1125);
																		}
																		{	/* Module/impuse.scm 321 */
																			obj_t BgL_res2163z00_1980;

																			BgL_res2163z00_1980 =
																				MAKE_YOUNG_PAIR(BgL_arg1672z00_1123,
																				BNIL);
																			BgL_newtail1258z00_1120 =
																				BgL_res2163z00_1980;
																		}
																	}
																	SET_CDR(BgL_tail1257z00_1117,
																		BgL_newtail1258z00_1120);
																	{	/* Module/impuse.scm 321 */
																		obj_t BgL_arg1667z00_1121;
																		obj_t BgL_arg1669z00_1122;

																		BgL_arg1667z00_1121 =
																			CDR(((obj_t) BgL_ll1254z00_1115));
																		BgL_arg1669z00_1122 =
																			CDR(((obj_t) BgL_ll1255z00_1116));
																		{
																			obj_t BgL_tail1257z00_2820;
																			obj_t BgL_ll1255z00_2819;
																			obj_t BgL_ll1254z00_2818;

																			BgL_ll1254z00_2818 = BgL_arg1667z00_1121;
																			BgL_ll1255z00_2819 = BgL_arg1669z00_1122;
																			BgL_tail1257z00_2820 =
																				BgL_newtail1258z00_1120;
																			BgL_tail1257z00_1117 =
																				BgL_tail1257z00_2820;
																			BgL_ll1255z00_1116 = BgL_ll1255z00_2819;
																			BgL_ll1254z00_1115 = BgL_ll1254z00_2818;
																			goto
																				BgL_zc3z04anonymousza31664ze3z87_1118;
																		}
																	}
																}
														}
													}
												}
										}
										BgL_arg1652z00_1106 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1662z00_1107, BNIL);
									}
									BgL_arg1644z00_1105 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
										BgL_arg1652z00_1106);
								}
								return MAKE_YOUNG_PAIR(BgL_arg1644z00_1105, BNIL);
							}
						else
							{	/* Module/impuse.scm 318 */
								return BgL_callsz00_1100;
							}
					}
				}
			}
		}

	}



/* initialize-module~0 */
	obj_t BGl_initializa7ezd2moduleze70z92zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_2315, obj_t BgL_importz00_1149)
	{
		{	/* Module/impuse.scm 309 */
			{	/* Module/impuse.scm 304 */
				obj_t BgL_funz00_1152;

				{	/* Module/impuse.scm 304 */
					obj_t BgL_arg1742z00_1167;

					BgL_arg1742z00_1167 =
						(((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_importz00_1149)))->BgL_modulez00);
					BgL_funz00_1152 =
						PROCEDURE_ENTRY(BgL_getzd2initzd2_2315) (BgL_getzd2initzd2_2315,
						BgL_arg1742z00_1167, BEOA);
				}
				{	/* Module/impuse.scm 304 */
					obj_t BgL_varz00_1153;

					{	/* Module/impuse.scm 305 */
						obj_t BgL_arg1733z00_1162;
						obj_t BgL_arg1738z00_1163;

						BgL_arg1733z00_1162 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_1149)))->BgL_modulez00);
						{	/* Module/impuse.scm 305 */
							obj_t BgL_arg1740z00_1165;

							{	/* Module/impuse.scm 305 */
								obj_t BgL_arg1741z00_1166;

								BgL_arg1741z00_1166 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)), BNIL);
								BgL_arg1740z00_1165 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg1741z00_1166);
							}
							BgL_arg1738z00_1163 =
								MAKE_YOUNG_PAIR(BgL_funz00_1152, BgL_arg1740z00_1165);
						}
						BgL_varz00_1153 =
							BGl_importzd2parserzd2zzmodule_impusez00(BgL_arg1733z00_1162,
							BgL_arg1738z00_1163, BFALSE, BNIL);
					}
					{	/* Module/impuse.scm 305 */

						((((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_varz00_1153)))->
								BgL_evaluablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						{	/* Module/impuse.scm 309 */
							obj_t BgL_arg1719z00_1154;
							obj_t BgL_arg1725z00_1155;

							{	/* Module/impuse.scm 309 */
								obj_t BgL_arg1726z00_1156;

								{	/* Module/impuse.scm 309 */
									obj_t BgL_arg1727z00_1157;

									{	/* Module/impuse.scm 309 */
										obj_t BgL_arg1728z00_1158;

										BgL_arg1728z00_1158 =
											(((BgL_importz00_bglt) COBJECT(
													((BgL_importz00_bglt) BgL_importz00_1149)))->
											BgL_modulez00);
										BgL_arg1727z00_1157 =
											MAKE_YOUNG_PAIR(BgL_arg1728z00_1158, BNIL);
									}
									BgL_arg1726z00_1156 =
										MAKE_YOUNG_PAIR(BgL_funz00_1152, BgL_arg1727z00_1157);
								}
								BgL_arg1719z00_1154 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
									BgL_arg1726z00_1156);
							}
							{	/* Module/impuse.scm 309 */
								obj_t BgL_arg1729z00_1159;
								obj_t BgL_arg1731z00_1160;

								BgL_arg1729z00_1159 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_1149)))->
									BgL_checksumz00);
								{	/* Module/impuse.scm 309 */
									obj_t BgL_arg1732z00_1161;

									{	/* Module/impuse.scm 309 */
										obj_t BgL_res2151z00_1949;

										{	/* Module/impuse.scm 309 */
											obj_t BgL_symbolz00_1947;

											BgL_symbolz00_1947 =
												BGl_za2moduleza2z00zzmodule_modulez00;
											{	/* Module/impuse.scm 309 */
												obj_t BgL_arg1466z00_1948;

												BgL_arg1466z00_1948 =
													SYMBOL_TO_STRING(BgL_symbolz00_1947);
												BgL_res2151z00_1949 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1948);
										}}
										BgL_arg1732z00_1161 = BgL_res2151z00_1949;
									}
									BgL_arg1731z00_1160 =
										MAKE_YOUNG_PAIR(BgL_arg1732z00_1161, BNIL);
								}
								BgL_arg1725z00_1155 =
									MAKE_YOUNG_PAIR(BgL_arg1729z00_1159, BgL_arg1731z00_1160);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1719z00_1154, BgL_arg1725z00_1155);
						}
					}
				}
			}
		}

	}



/* trace-initialize-module~0 */
	obj_t BGl_tracezd2initializa7ezd2moduleze70z40zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_2316, obj_t BgL_importz00_1168, obj_t BgL_callz00_1169)
	{
		{	/* Module/impuse.scm 316 */
			{	/* Module/impuse.scm 314 */
				obj_t BgL_arg1744z00_1171;

				{	/* Module/impuse.scm 314 */
					obj_t BgL_arg1745z00_1172;
					obj_t BgL_arg1746z00_1173;

					{	/* Module/impuse.scm 314 */
						obj_t BgL_arg1747z00_1174;

						{	/* Module/impuse.scm 314 */
							obj_t BgL_arg1754z00_1175;

							{	/* Module/impuse.scm 314 */
								obj_t BgL_arg1755z00_1176;
								obj_t BgL_arg1756z00_1177;

								{	/* Module/impuse.scm 314 */
									obj_t BgL_arg1760z00_1180;

									BgL_arg1760z00_1180 =
										PROCEDURE_ENTRY(BgL_getzd2initzd2_2316)
										(BgL_getzd2initzd2_2316,
										BGl_za2moduleza2z00zzmodule_modulez00, BEOA);
									{	/* Module/impuse.scm 314 */
										obj_t BgL_res2152z00_1952;

										{	/* Module/impuse.scm 314 */
											obj_t BgL_arg1466z00_1951;

											BgL_arg1466z00_1951 =
												SYMBOL_TO_STRING(((obj_t) BgL_arg1760z00_1180));
											BgL_res2152z00_1952 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1951);
										}
										BgL_arg1755z00_1176 = BgL_res2152z00_1952;
									}
								}
								{	/* Module/impuse.scm 315 */
									obj_t BgL_arg1761z00_1181;

									BgL_arg1761z00_1181 =
										(((BgL_importz00_bglt) COBJECT(
												((BgL_importz00_bglt) BgL_importz00_1168)))->
										BgL_modulez00);
									{	/* Module/impuse.scm 315 */
										obj_t BgL_res2153z00_1956;

										{	/* Module/impuse.scm 315 */
											obj_t BgL_arg1466z00_1955;

											BgL_arg1466z00_1955 =
												SYMBOL_TO_STRING(BgL_arg1761z00_1181);
											BgL_res2153z00_1956 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1955);
										}
										BgL_arg1756z00_1177 = BgL_res2153z00_1956;
									}
								}
								{	/* Module/impuse.scm 313 */
									obj_t BgL_list1757z00_1178;

									{	/* Module/impuse.scm 313 */
										obj_t BgL_arg1759z00_1179;

										BgL_arg1759z00_1179 =
											MAKE_YOUNG_PAIR(BgL_arg1756z00_1177, BNIL);
										BgL_list1757z00_1178 =
											MAKE_YOUNG_PAIR(BgL_arg1755z00_1176, BgL_arg1759z00_1179);
									}
									BgL_arg1754z00_1175 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2216z00zzmodule_impusez00, BgL_list1757z00_1178);
								}
							}
							BgL_arg1747z00_1174 = MAKE_YOUNG_PAIR(BgL_arg1754z00_1175, BNIL);
						}
						BgL_arg1745z00_1172 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg1747z00_1174);
					}
					BgL_arg1746z00_1173 = MAKE_YOUNG_PAIR(BgL_callz00_1169, BNIL);
					BgL_arg1744z00_1171 =
						MAKE_YOUNG_PAIR(BgL_arg1745z00_1172, BgL_arg1746z00_1173);
				}
				return
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BgL_arg1744z00_1171);
		}}

	}



/* &initialize-imported-modules */
	obj_t BGl_z62initializa7ezd2importedzd2moduleszc5zzmodule_impusez00(obj_t
		BgL_envz00_2182, obj_t BgL_getzd2initzd2_2183)
	{
		{	/* Module/impuse.scm 301 */
			return
				BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
				(BgL_getzd2initzd2_2183);
		}

	}



/* imported-modules-unit */
	obj_t BGl_importedzd2moduleszd2unitz00zzmodule_impusez00(obj_t
		BgL_importsz00_90)
	{
		{	/* Module/impuse.scm 328 */
			BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
				BgL_importsz00_90;
			{	/* Module/impuse.scm 330 */
				obj_t BgL_bodyz00_1184;
				long BgL_priorityz00_1185;

				BgL_bodyz00_1184 =
					BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
					(BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00);
				if ((BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
						CNST_TABLE_REF(((long) 15))))
					{	/* Module/impuse.scm 331 */
						BgL_priorityz00_1185 = ((long) 22);
					}
				else
					{	/* Module/impuse.scm 331 */
						BgL_priorityz00_1185 = ((long) 12);
					}
				{	/* Module/impuse.scm 332 */
					obj_t BgL_idz00_1984;

					BgL_idz00_1984 = CNST_TABLE_REF(((long) 16));
					{	/* Module/impuse.scm 332 */
						obj_t BgL_newz00_1985;

						BgL_newz00_1985 =
							create_struct(CNST_TABLE_REF(((long) 17)), (int) (((long) 5)));
						{	/* Module/impuse.scm 332 */
							int BgL_tmpz00_2884;

							BgL_tmpz00_2884 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_1985, BgL_tmpz00_2884, BFALSE);
						}
						{	/* Module/impuse.scm 332 */
							int BgL_tmpz00_2887;

							BgL_tmpz00_2887 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_1985, BgL_tmpz00_2887, BTRUE);
						}
						{	/* Module/impuse.scm 332 */
							int BgL_tmpz00_2890;

							BgL_tmpz00_2890 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_1985, BgL_tmpz00_2890, BgL_bodyz00_1184);
						}
						{	/* Module/impuse.scm 332 */
							obj_t BgL_auxz00_2895;
							int BgL_tmpz00_2893;

							BgL_auxz00_2895 = BINT(BgL_priorityz00_1185);
							BgL_tmpz00_2893 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1985, BgL_tmpz00_2893, BgL_auxz00_2895);
						}
						{	/* Module/impuse.scm 332 */
							int BgL_tmpz00_2898;

							BgL_tmpz00_2898 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1985, BgL_tmpz00_2898, BgL_idz00_1984);
						}
						return BgL_newz00_1985;
					}
				}
			}
		}

	}



/* &impuse-finalizer */
	obj_t BGl_z62impusezd2finaliza7erz17zzmodule_impusez00(obj_t BgL_envz00_2162)
	{
		{	/* Module/impuse.scm 341 */
			{	/* Module/impuse.scm 342 */
				obj_t BgL_importsz00_2334;

				BgL_importsz00_2334 = BGl_importzd2finaliza7erz75zzmodule_impusez00();
				{	/* Module/impuse.scm 342 */
					obj_t BgL_inlinesz00_2335;

					BgL_inlinesz00_2335 = BGl_inlinezd2finaliza7erz75zzread_inlinez00();
					{	/* Module/impuse.scm 343 */
						obj_t BgL_finaliza7ersza7_2336;

						BgL_finaliza7ersza7_2336 =
							BGl_appendzd221011zd2zzmodule_impusez00(BgL_importsz00_2334,
							BgL_inlinesz00_2335);
						{	/* Module/impuse.scm 344 */

							if (NULLP(BgL_finaliza7ersza7_2336))
								{	/* Module/impuse.scm 345 */
									return CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Module/impuse.scm 345 */
									return BgL_finaliza7ersza7_2336;
								}
						}
					}
				}
			}
		}

	}



/* import-parser */
	BGL_EXPORTED_DEF obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t
		BgL_modulez00_91, obj_t BgL_prototypez00_92, obj_t BgL_aliasz00_93,
		obj_t BgL_importzd2srczd2_94)
	{
		{	/* Module/impuse.scm 352 */
			{	/* Module/impuse.scm 353 */
				obj_t BgL_protoz00_1191;
				obj_t BgL_srcz00_1192;

				BgL_protoz00_1191 =
					BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_prototypez00_92);
				if (PAIRP(BgL_importzd2srczd2_94))
					{	/* Module/impuse.scm 354 */
						BgL_srcz00_1192 = CAR(BgL_importzd2srczd2_94);
					}
				else
					{	/* Module/impuse.scm 354 */
						BgL_srcz00_1192 = BFALSE;
					}
				if (PAIRP(BgL_protoz00_1191))
					{	/* Module/impuse.scm 358 */
						obj_t BgL_casezd2valuezd2_1194;

						BgL_casezd2valuezd2_1194 = CAR(BgL_protoz00_1191);
						{	/* Module/impuse.scm 358 */
							bool_t BgL_test2385z00_2914;

							{	/* Module/impuse.scm 358 */
								bool_t BgL__ortest_1108z00_1218;

								BgL__ortest_1108z00_1218 =
									(BgL_casezd2valuezd2_1194 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_1108z00_1218)
									{	/* Module/impuse.scm 358 */
										BgL_test2385z00_2914 = BgL__ortest_1108z00_1218;
									}
								else
									{	/* Module/impuse.scm 358 */
										bool_t BgL__ortest_1109z00_1219;

										BgL__ortest_1109z00_1219 =
											(BgL_casezd2valuezd2_1194 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_1109z00_1219)
											{	/* Module/impuse.scm 358 */
												BgL_test2385z00_2914 = BgL__ortest_1109z00_1219;
											}
										else
											{	/* Module/impuse.scm 358 */
												BgL_test2385z00_2914 =
													(BgL_casezd2valuezd2_1194 ==
													CNST_TABLE_REF(((long) 20)));
							}}}
							if (BgL_test2385z00_2914)
								{	/* Module/impuse.scm 360 */
									obj_t BgL_arg1768z00_1198;
									obj_t BgL_arg1771z00_1199;

									BgL_arg1768z00_1198 = CAR(CDR(BgL_protoz00_1191));
									BgL_arg1771z00_1199 = CAR(CDR(CDR(BgL_protoz00_1191)));
									return
										((obj_t)
										BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
										(BgL_arg1768z00_1198, BgL_aliasz00_93, BgL_arg1771z00_1199,
											BgL_modulez00_91, CNST_TABLE_REF(((long) 0)),
											BgL_casezd2valuezd2_1194, BgL_prototypez00_92,
											BgL_srcz00_1192));
								}
							else
								{	/* Module/impuse.scm 358 */
									if ((BgL_casezd2valuezd2_1194 == CNST_TABLE_REF(((long) 21))))
										{	/* Module/impuse.scm 363 */
											obj_t BgL_arg1778z00_1202;

											BgL_arg1778z00_1202 = CAR(CDR(BgL_protoz00_1191));
											return
												((obj_t)
												BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
												(BgL_arg1778z00_1202, BgL_aliasz00_93, BgL_modulez00_91,
													CNST_TABLE_REF(((long) 0)), BgL_prototypez00_92,
													BgL_srcz00_1192));
										}
									else
										{	/* Module/impuse.scm 358 */
											if (
												(BgL_casezd2valuezd2_1194 ==
													CNST_TABLE_REF(((long) 22))))
												{	/* Module/impuse.scm 366 */
													obj_t BgL_arg1782z00_1204;

													BgL_arg1782z00_1204 = CDR(BgL_protoz00_1191);
													return
														BGl_declarezd2classz12zc0zzmodule_classz00
														(BgL_arg1782z00_1204, BgL_modulez00_91,
														CNST_TABLE_REF(((long) 0)), ((bool_t) 0),
														((bool_t) 0), BgL_prototypez00_92, BgL_srcz00_1192);
												}
											else
												{	/* Module/impuse.scm 358 */
													if (
														(BgL_casezd2valuezd2_1194 ==
															CNST_TABLE_REF(((long) 23))))
														{	/* Module/impuse.scm 368 */
															obj_t BgL_arg1784z00_1206;

															BgL_arg1784z00_1206 = CDR(BgL_protoz00_1191);
															return
																BGl_declarezd2classz12zc0zzmodule_classz00
																(BgL_arg1784z00_1206, BgL_modulez00_91,
																CNST_TABLE_REF(((long) 0)), ((bool_t) 0),
																((bool_t) 1), BgL_prototypez00_92,
																BgL_srcz00_1192);
														}
													else
														{	/* Module/impuse.scm 358 */
															if (
																(BgL_casezd2valuezd2_1194 ==
																	CNST_TABLE_REF(((long) 24))))
																{	/* Module/impuse.scm 370 */
																	obj_t BgL_arg1790z00_1208;

																	BgL_arg1790z00_1208 = CDR(BgL_protoz00_1191);
																	return
																		BGl_declarezd2classz12zc0zzmodule_classz00
																		(BgL_arg1790z00_1208, BgL_modulez00_91,
																		CNST_TABLE_REF(((long) 0)), ((bool_t) 1),
																		((bool_t) 0), BgL_prototypez00_92,
																		BgL_srcz00_1192);
																}
															else
																{	/* Module/impuse.scm 358 */
																	if (
																		(BgL_casezd2valuezd2_1194 ==
																			CNST_TABLE_REF(((long) 25))))
																		{	/* Module/impuse.scm 372 */
																			obj_t BgL_arg1796z00_1210;

																			BgL_arg1796z00_1210 =
																				CDR(BgL_protoz00_1191);
																			return
																				BGl_declarezd2widezd2classz12z12zzmodule_classz00
																				(BgL_arg1796z00_1210, BgL_modulez00_91,
																				CNST_TABLE_REF(((long) 0)),
																				BgL_prototypez00_92, BgL_srcz00_1192);
																		}
																	else
																		{	/* Module/impuse.scm 358 */
																			if (
																				(BgL_casezd2valuezd2_1194 ==
																					CNST_TABLE_REF(((long) 26))))
																				{	/* Module/impuse.scm 374 */
																					obj_t BgL_envz00_1213;

																					BgL_envz00_1213 =
																						BGl_defaultzd2environmentzd2zz__evalz00
																						();
																					{	/* Module/impuse.scm 374 */

																						return
																							BGl_evalz00zz__evalz00
																							(BgL_protoz00_1191,
																							BgL_envz00_1213);
																					}
																				}
																			else
																				{	/* Module/impuse.scm 358 */
																					if (
																						(BgL_casezd2valuezd2_1194 ==
																							CNST_TABLE_REF(((long) 27))))
																						{	/* Module/impuse.scm 358 */
																							return BgL_protoz00_1191;
																						}
																					else
																						{	/* Module/impuse.scm 358 */
																							if (
																								(BgL_casezd2valuezd2_1194 ==
																									CNST_TABLE_REF(((long) 28))))
																								{	/* Module/impuse.scm 358 */
																									return BgL_protoz00_1191;
																								}
																							else
																								{	/* Module/impuse.scm 358 */
																									if (
																										(BgL_casezd2valuezd2_1194 ==
																											CNST_TABLE_REF(((long)
																													29))))
																										{	/* Module/impuse.scm 358 */
																											return BgL_protoz00_1191;
																										}
																									else
																										{	/* Module/impuse.scm 382 */
																											obj_t
																												BgL_list1801z00_1217;
																											BgL_list1801z00_1217 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2212z00zzmodule_impusez00,
																												BGl_string2217z00zzmodule_impusez00,
																												BgL_prototypez00_92,
																												BgL_list1801z00_1217);
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
					{	/* Module/impuse.scm 356 */
						obj_t BgL_arg1808z00_1220;

						BgL_arg1808z00_1220 =
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
						{	/* Module/impuse.scm 356 */
							obj_t BgL_list1809z00_1221;

							BgL_list1809z00_1221 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00
								(BgL_arg1808z00_1220, BGl_string2212z00zzmodule_impusez00,
								BGl_string2217z00zzmodule_impusez00, BgL_prototypez00_92,
								BgL_list1809z00_1221);
						}
					}
			}
		}

	}



/* &import-parser */
	obj_t BGl_z62importzd2parserzb0zzmodule_impusez00(obj_t BgL_envz00_2186,
		obj_t BgL_modulez00_2187, obj_t BgL_prototypez00_2188,
		obj_t BgL_aliasz00_2189, obj_t BgL_importzd2srczd2_2190)
	{
		{	/* Module/impuse.scm 352 */
			return
				BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_2187,
				BgL_prototypez00_2188, BgL_aliasz00_2189, BgL_importzd2srczd2_2190);
		}

	}



/* import-module! */
	obj_t BGl_importzd2modulez12zc0zzmodule_impusez00(obj_t BgL_importz00_95)
	{
		{	/* Module/impuse.scm 387 */
			{	/* Module/impuse.scm 390 */
				obj_t BgL_inlinez00_1224;

				{	/* Module/impuse.scm 391 */
					bool_t BgL_test2397z00_2983;

					{	/* Module/impuse.scm 391 */
						obj_t BgL_tmpz00_2984;

						BgL_tmpz00_2984 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_95)))->BgL_varsz00);
						BgL_test2397z00_2983 = PAIRP(BgL_tmpz00_2984);
					}
					if (BgL_test2397z00_2983)
						{	/* Module/impuse.scm 392 */
							obj_t BgL_arg1826z00_1236;

							BgL_arg1826z00_1236 =
								(((BgL_importz00_bglt) COBJECT(
										((BgL_importz00_bglt) BgL_importz00_95)))->BgL_varsz00);
							BgL_inlinez00_1224 =
								BGl_importzd2wantedzd2zzmodule_impusez00(BgL_importz00_95,
								BgL_arg1826z00_1236);
						}
					else
						{	/* Module/impuse.scm 391 */
							BgL_inlinez00_1224 =
								BGl_importzd2everythingzd2zzmodule_impusez00(BgL_importz00_95);
						}
				}
				{	/* Module/impuse.scm 391 */
					obj_t BgL_macroz00_1225;
					obj_t BgL_syntaxz00_1226;
					obj_t BgL_expanderz00_1227;
					obj_t BgL_varsz00_1228;

					{	/* Module/impuse.scm 394 */
						int BgL_tmpz00_2992;

						BgL_tmpz00_2992 = (int) (((long) 1));
						BgL_macroz00_1225 = BGL_MVALUES_VAL(BgL_tmpz00_2992);
					}
					{	/* Module/impuse.scm 394 */
						int BgL_tmpz00_2995;

						BgL_tmpz00_2995 = (int) (((long) 2));
						BgL_syntaxz00_1226 = BGL_MVALUES_VAL(BgL_tmpz00_2995);
					}
					{	/* Module/impuse.scm 394 */
						int BgL_tmpz00_2998;

						BgL_tmpz00_2998 = (int) (((long) 3));
						BgL_expanderz00_1227 = BGL_MVALUES_VAL(BgL_tmpz00_2998);
					}
					{	/* Module/impuse.scm 394 */
						int BgL_tmpz00_3001;

						BgL_tmpz00_3001 = (int) (((long) 4));
						BgL_varsz00_1228 = BGL_MVALUES_VAL(BgL_tmpz00_3001);
					}
					{	/* Module/impuse.scm 394 */
						obj_t BgL_arg1811z00_1229;
						obj_t BgL_arg1820z00_1230;
						obj_t BgL_arg1821z00_1231;
						obj_t BgL_arg1822z00_1232;

						BgL_arg1811z00_1229 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_95)))->BgL_codez00);
						{	/* Module/impuse.scm 396 */
							obj_t BgL_arg1823z00_1233;

							BgL_arg1823z00_1233 =
								(((BgL_importz00_bglt) COBJECT(
										((BgL_importz00_bglt) BgL_importz00_95)))->BgL_declz00);
							BgL_arg1820z00_1230 =
								BGl_prognzd2tailzd2expressionsz00zztools_prognz00
								(BgL_arg1823z00_1233);
						}
						BgL_arg1821z00_1231 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_95)))->BgL_accessz00);
						BgL_arg1822z00_1232 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_95)))->BgL_modulez00);
						BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00
							(BgL_inlinez00_1224, BgL_macroz00_1225, BgL_syntaxz00_1226,
							BgL_expanderz00_1227, BgL_arg1811z00_1229, BgL_arg1820z00_1230,
							BgL_arg1821z00_1231, BgL_arg1822z00_1232);
			}}}
			{	/* Module/impuse.scm 398 */
				bool_t BgL_test2398z00_3014;

				{	/* Module/impuse.scm 398 */
					obj_t BgL_tmpz00_3015;

					BgL_tmpz00_3015 =
						(((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_importz00_95)))->BgL_aliasesz00);
					BgL_test2398z00_3014 = PAIRP(BgL_tmpz00_3015);
				}
				if (BgL_test2398z00_3014)
					{	/* Module/impuse.scm 399 */
						obj_t BgL_inlinez00_1240;

						{	/* Module/impuse.scm 400 */
							obj_t BgL_arg1836z00_1250;

							BgL_arg1836z00_1250 =
								(((BgL_importz00_bglt) COBJECT(
										((BgL_importz00_bglt) BgL_importz00_95)))->BgL_aliasesz00);
							BgL_inlinez00_1240 =
								BGl_importzd2wantedzd2zzmodule_impusez00(BgL_importz00_95,
								BgL_arg1836z00_1250);
						}
						{	/* Module/impuse.scm 400 */
							obj_t BgL_macroz00_1241;
							obj_t BgL_syntaxz00_1242;
							obj_t BgL_expanderz00_1243;
							obj_t BgL_varsz00_1244;

							{	/* Module/impuse.scm 401 */
								int BgL_tmpz00_3022;

								BgL_tmpz00_3022 = (int) (((long) 1));
								BgL_macroz00_1241 = BGL_MVALUES_VAL(BgL_tmpz00_3022);
							}
							{	/* Module/impuse.scm 401 */
								int BgL_tmpz00_3025;

								BgL_tmpz00_3025 = (int) (((long) 2));
								BgL_syntaxz00_1242 = BGL_MVALUES_VAL(BgL_tmpz00_3025);
							}
							{	/* Module/impuse.scm 401 */
								int BgL_tmpz00_3028;

								BgL_tmpz00_3028 = (int) (((long) 3));
								BgL_expanderz00_1243 = BGL_MVALUES_VAL(BgL_tmpz00_3028);
							}
							{	/* Module/impuse.scm 401 */
								int BgL_tmpz00_3031;

								BgL_tmpz00_3031 = (int) (((long) 4));
								BgL_varsz00_1244 = BGL_MVALUES_VAL(BgL_tmpz00_3031);
							}
							{	/* Module/impuse.scm 401 */
								obj_t BgL_arg1830z00_1245;
								obj_t BgL_arg1831z00_1246;
								obj_t BgL_arg1832z00_1247;
								obj_t BgL_arg1833z00_1248;

								BgL_arg1830z00_1245 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_95)))->BgL_codez00);
								{	/* Module/impuse.scm 403 */
									obj_t BgL_arg1835z00_1249;

									BgL_arg1835z00_1249 =
										(((BgL_importz00_bglt) COBJECT(
												((BgL_importz00_bglt) BgL_importz00_95)))->BgL_declz00);
									BgL_arg1831z00_1246 =
										BGl_prognzd2tailzd2expressionsz00zztools_prognz00
										(BgL_arg1835z00_1249);
								}
								BgL_arg1832z00_1247 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_95)))->BgL_accessz00);
								BgL_arg1833z00_1248 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_95)))->BgL_modulez00);
								return
									BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00
									(BgL_inlinez00_1240, BgL_macroz00_1241, BgL_syntaxz00_1242,
									BgL_expanderz00_1243, BgL_arg1830z00_1245,
									BgL_arg1831z00_1246, BgL_arg1832z00_1247,
									BgL_arg1833z00_1248);
							}
						}
					}
				else
					{	/* Module/impuse.scm 398 */
						return BFALSE;
					}
			}
		}

	}



/* read-import! */
	obj_t BGl_readzd2importz12zc0zzmodule_impusez00(obj_t BgL_importz00_96)
	{
		{	/* Module/impuse.scm 408 */
			{
				obj_t BgL_modulez00_1317;
				obj_t BgL_filez00_1318;
				obj_t BgL_objz00_1313;

				if (
					((((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_96)))->BgL_declz00) ==
						BUNSPEC))
					{	/* Module/impuse.scm 424 */
						obj_t BgL_modulez00_1256;

						BgL_modulez00_1256 =
							(((BgL_importz00_bglt) COBJECT(
									((BgL_importz00_bglt) BgL_importz00_96)))->BgL_modulez00);
						{	/* Module/impuse.scm 424 */
							obj_t BgL_abasez00_1257;

							{	/* Module/impuse.scm 425 */
								obj_t BgL_l1262z00_1296;

								BgL_l1262z00_1296 =
									BGl_za2accesszd2filesza2zd2zzengine_paramz00;
								if (NULLP(BgL_l1262z00_1296))
									{	/* Module/impuse.scm 425 */
										BgL_abasez00_1257 = BNIL;
									}
								else
									{	/* Module/impuse.scm 425 */
										obj_t BgL_head1264z00_1298;

										{	/* Module/impuse.scm 425 */
											obj_t BgL_arg1872z00_1310;

											{	/* Module/impuse.scm 425 */
												obj_t BgL_arg1873z00_1311;

												BgL_arg1873z00_1311 = CAR(((obj_t) BgL_l1262z00_1296));
												BgL_arg1872z00_1310 =
													BGl_dirnamez00zz__osz00(BgL_arg1873z00_1311);
											}
											{	/* Module/impuse.scm 425 */
												obj_t BgL_res2179z00_2045;

												BgL_res2179z00_2045 =
													MAKE_YOUNG_PAIR(BgL_arg1872z00_1310, BNIL);
												BgL_head1264z00_1298 = BgL_res2179z00_2045;
											}
										}
										{	/* Module/impuse.scm 425 */
											obj_t BgL_g1267z00_1299;

											BgL_g1267z00_1299 = CDR(((obj_t) BgL_l1262z00_1296));
											{
												obj_t BgL_l1262z00_1301;
												obj_t BgL_tail1265z00_1302;

												BgL_l1262z00_1301 = BgL_g1267z00_1299;
												BgL_tail1265z00_1302 = BgL_head1264z00_1298;
											BgL_zc3z04anonymousza31866ze3z87_1303:
												if (NULLP(BgL_l1262z00_1301))
													{	/* Module/impuse.scm 425 */
														BgL_abasez00_1257 = BgL_head1264z00_1298;
													}
												else
													{	/* Module/impuse.scm 425 */
														obj_t BgL_newtail1266z00_1305;

														{	/* Module/impuse.scm 425 */
															obj_t BgL_arg1870z00_1307;

															{	/* Module/impuse.scm 425 */
																obj_t BgL_arg1871z00_1308;

																BgL_arg1871z00_1308 =
																	CAR(((obj_t) BgL_l1262z00_1301));
																BgL_arg1870z00_1307 =
																	BGl_dirnamez00zz__osz00(BgL_arg1871z00_1308);
															}
															{	/* Module/impuse.scm 425 */
																obj_t BgL_res2181z00_2049;

																BgL_res2181z00_2049 =
																	MAKE_YOUNG_PAIR(BgL_arg1870z00_1307, BNIL);
																BgL_newtail1266z00_1305 = BgL_res2181z00_2049;
															}
														}
														SET_CDR(BgL_tail1265z00_1302,
															BgL_newtail1266z00_1305);
														{	/* Module/impuse.scm 425 */
															obj_t BgL_arg1868z00_1306;

															BgL_arg1868z00_1306 =
																CDR(((obj_t) BgL_l1262z00_1301));
															{
																obj_t BgL_tail1265z00_3068;
																obj_t BgL_l1262z00_3067;

																BgL_l1262z00_3067 = BgL_arg1868z00_1306;
																BgL_tail1265z00_3068 = BgL_newtail1266z00_1305;
																BgL_tail1265z00_1302 = BgL_tail1265z00_3068;
																BgL_l1262z00_1301 = BgL_l1262z00_3067;
																goto BgL_zc3z04anonymousza31866ze3z87_1303;
															}
														}
													}
											}
										}
									}
							}
							{	/* Module/impuse.scm 425 */
								obj_t BgL_fnamesz00_1258;

								{	/* Module/impuse.scm 426 */
									obj_t BgL_fun1864z00_1295;

									BgL_fun1864z00_1295 =
										BGl_bigloozd2modulezd2resolverz00zz__modulez00();
									BgL_fnamesz00_1258 =
										PROCEDURE_ENTRY(BgL_fun1864z00_1295) (BgL_fun1864z00_1295,
										BgL_modulez00_1256, BNIL, BgL_abasez00_1257, BEOA);
								}
								{	/* Module/impuse.scm 426 */

									{	/* Module/impuse.scm 428 */
										obj_t BgL_arg1842z00_1259;

										if (
											((((BgL_importz00_bglt) COBJECT(
															((BgL_importz00_bglt) BgL_importz00_96)))->
													BgL_modez00) == CNST_TABLE_REF(((long) 2))))
											{	/* Module/impuse.scm 428 */
												BgL_arg1842z00_1259 =
													BGl_string2220z00zzmodule_impusez00;
											}
										else
											{	/* Module/impuse.scm 428 */
												BgL_arg1842z00_1259 =
													BGl_string2221z00zzmodule_impusez00;
											}
										{	/* Module/impuse.scm 427 */
											obj_t BgL_list1843z00_1260;

											{	/* Module/impuse.scm 427 */
												obj_t BgL_arg1845z00_1261;

												{	/* Module/impuse.scm 427 */
													obj_t BgL_arg1846z00_1262;

													{	/* Module/impuse.scm 427 */
														obj_t BgL_arg1847z00_1263;

														{	/* Module/impuse.scm 427 */
															obj_t BgL_arg1848z00_1264;

															{	/* Module/impuse.scm 427 */
																obj_t BgL_arg1850z00_1265;

																BgL_arg1850z00_1265 =
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																	BNIL);
																BgL_arg1848z00_1264 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2222z00zzmodule_impusez00,
																	BgL_arg1850z00_1265);
															}
															BgL_arg1847z00_1263 =
																MAKE_YOUNG_PAIR(BgL_modulez00_1256,
																BgL_arg1848z00_1264);
														}
														BgL_arg1846z00_1262 =
															MAKE_YOUNG_PAIR
															(BGl_string2223z00zzmodule_impusez00,
															BgL_arg1847z00_1263);
													}
													BgL_arg1845z00_1261 =
														MAKE_YOUNG_PAIR(BgL_arg1842z00_1259,
														BgL_arg1846z00_1262);
												}
												BgL_list1843z00_1260 =
													MAKE_YOUNG_PAIR(BGl_string2224z00zzmodule_impusez00,
													BgL_arg1845z00_1261);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1843z00_1260);
									}}
									if (PAIRP(BgL_fnamesz00_1258))
										{	/* Module/impuse.scm 432 */
											obj_t BgL_fnamez00_1270;

											{	/* Module/impuse.scm 432 */
												obj_t BgL_arg1863z00_1294;

												BgL_arg1863z00_1294 = CAR(BgL_fnamesz00_1258);
												BgL_fnamez00_1270 =
													BGl_findzd2filezf2pathz20zz__osz00
													(BgL_arg1863z00_1294,
													BGl_za2loadzd2pathza2zd2zz__evalz00);
											}
											if (STRINGP(BgL_fnamez00_1270))
												{	/* Module/impuse.scm 435 */
													obj_t BgL_portz00_1272;

													{	/* Module/impuse.scm 435 */

														BgL_portz00_1272 =
															BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
															(BgL_fnamez00_1270, BTRUE,
															BINT(((long) 5000000)));
													}
													((((BgL_importz00_bglt) COBJECT(
																	((BgL_importz00_bglt) BgL_importz00_96)))->
															BgL_accessz00) =
														((obj_t) BgL_fnamesz00_1258), BUNSPEC);
													BGl_readerzd2resetz12zc0zz__readerz00();
													if (INPUT_PORTP(BgL_portz00_1272))
														{	/* Module/impuse.scm 440 */
															obj_t BgL_exitd1111z00_1274;

															BgL_exitd1111z00_1274 = BGL_EXITD_TOP_AS_OBJ();
															{	/* Module/impuse.scm 456 */
																obj_t BgL_zc3z04anonymousza31859ze3z87_2191;

																BgL_zc3z04anonymousza31859ze3z87_2191 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31859ze3ze5zzmodule_impusez00,
																	(int) (((long) 0)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31859ze3z87_2191,
																	(int) (((long) 0)), BgL_portz00_1272);
																BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																	(BgL_exitd1111z00_1274,
																	BgL_zc3z04anonymousza31859ze3z87_2191);
																{	/* Module/impuse.scm 441 */
																	obj_t BgL_tmp1113z00_1276;

																	{	/* Module/impuse.scm 441 */
																		obj_t BgL_mdeclz00_1277;

																		{	/* Module/impuse.scm 441 */
																			obj_t BgL_list1857z00_1285;

																			{	/* Module/impuse.scm 441 */
																				obj_t BgL_arg1858z00_1286;

																				BgL_arg1858z00_1286 =
																					MAKE_YOUNG_PAIR(BTRUE, BNIL);
																				BgL_list1857z00_1285 =
																					MAKE_YOUNG_PAIR(BgL_portz00_1272,
																					BgL_arg1858z00_1286);
																			}
																			BgL_mdeclz00_1277 =
																				BGl_compilerzd2readzd2zzread_readerz00
																				(BgL_list1857z00_1285);
																		}
																		{	/* Module/impuse.scm 441 */
																			obj_t BgL_emdeclz00_1278;

																			BgL_emdeclz00_1278 =
																				BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
																				(BgL_mdeclz00_1277);
																			{	/* Module/impuse.scm 442 */
																				obj_t BgL_modz00_1279;

																				BgL_modz00_1279 =
																					BGl_prognzd2firstzd2expressionz00zztools_prognz00
																					(BgL_emdeclz00_1278);
																				{	/* Module/impuse.scm 443 */

																					BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00
																						();
																					BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00
																						();
																					{	/* Module/impuse.scm 446 */
																						obj_t BgL_cmz00_1280;

																						BgL_cmz00_1280 =
																							BGl_consumezd2modulez12zc0zzmodule_modulez00
																							(BgL_modulez00_1256,
																							BgL_modz00_1279);
																						{	/* Module/impuse.scm 446 */
																							obj_t BgL_cimz00_1281;

																							BgL_cimz00_1281 =
																								BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00
																								();
																							{	/* Module/impuse.scm 447 */
																								obj_t BgL_proz00_1282;

																								BgL_proz00_1282 =
																									BGl_appendzd221011zd2zzmodule_impusez00
																									(BgL_cmz00_1280,
																									BgL_cimz00_1281);
																								{	/* Module/impuse.scm 448 */
																									obj_t BgL_codez00_1283;

																									BgL_codez00_1283 =
																										BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00
																										();
																									{	/* Module/impuse.scm 449 */
																										long BgL_checkz00_1284;

																										BgL_checkz00_1284 =
																											BGl_modulezd2checksumzd2zzmodule_checksumz00
																											(BgL_modz00_1279,
																											BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00);
																										{	/* Module/impuse.scm 450 */

																											((((BgL_importz00_bglt)
																														COBJECT((
																																(BgL_importz00_bglt)
																																BgL_importz00_96)))->
																													BgL_declz00) =
																												((obj_t)
																													BgL_emdeclz00_1278),
																												BUNSPEC);
																											((((BgL_importz00_bglt)
																														COBJECT((
																																(BgL_importz00_bglt)
																																BgL_importz00_96)))->
																													BgL_checksumz00) =
																												((obj_t)
																													BINT
																													(BgL_checkz00_1284)),
																												BUNSPEC);
																											((((BgL_importz00_bglt)
																														COBJECT((
																																(BgL_importz00_bglt)
																																BgL_importz00_96)))->
																													BgL_codez00) =
																												((obj_t)
																													BgL_codez00_1283),
																												BUNSPEC);
																											BgL_tmp1113z00_1276 =
																												((((BgL_importz00_bglt)
																														COBJECT((
																																(BgL_importz00_bglt)
																																BgL_importz00_96)))->
																													BgL_providez00) =
																												((obj_t) ((obj_t)
																														BgL_proz00_1282)),
																												BUNSPEC);
																	}}}}}}}}}}
																	BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																		(BgL_exitd1111z00_1274);
																	bgl_close_input_port(BgL_portz00_1272);
																	return BgL_tmp1113z00_1276;
																}
															}
														}
													else
														{	/* Module/impuse.scm 438 */
															BgL_modulez00_1317 = BgL_modulez00_1256;
															BgL_filez00_1318 = CAR(BgL_fnamesz00_1258);
														BgL_zc3z04anonymousza31878ze3z87_1319:
															{	/* Module/impuse.scm 416 */
																obj_t BgL_vz00_2039;

																BgL_vz00_2039 = CNST_TABLE_REF(((long) 7));
																((((BgL_importz00_bglt) COBJECT(
																				((BgL_importz00_bglt)
																					BgL_importz00_96)))->BgL_declz00) =
																	((obj_t) BgL_vz00_2039), BUNSPEC);
															}
															{	/* Module/impuse.scm 418 */
																obj_t BgL_arg1879z00_1320;
																obj_t BgL_arg1881z00_1321;

																BgL_arg1879z00_1320 =
																	(((BgL_importz00_bglt) COBJECT(
																			((BgL_importz00_bglt)
																				BgL_importz00_96)))->BgL_locz00);
																{	/* Module/impuse.scm 420 */
																	obj_t BgL_list1883z00_1323;

																	BgL_list1883z00_1323 =
																		MAKE_YOUNG_PAIR(BgL_modulez00_1317, BNIL);
																	BgL_arg1881z00_1321 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string2219z00zzmodule_impusez00,
																		BgL_list1883z00_1323);
																}
																return
																	BGl_userzd2errorzf2locationz20zztools_errorz00
																	(BgL_arg1879z00_1320,
																	CNST_TABLE_REF(((long) 0)),
																	BgL_arg1881z00_1321, BgL_filez00_1318, BNIL);
												}}}
											else
												{
													obj_t BgL_filez00_3145;
													obj_t BgL_modulez00_3144;

													BgL_modulez00_3144 = BgL_modulez00_1256;
													BgL_filez00_3145 = CAR(BgL_fnamesz00_1258);
													BgL_filez00_1318 = BgL_filez00_3145;
													BgL_modulez00_1317 = BgL_modulez00_3144;
													goto BgL_zc3z04anonymousza31878ze3z87_1319;
												}
										}
									else
										{	/* Module/impuse.scm 430 */
											BgL_objz00_1313 = BgL_modulez00_1256;
											{	/* Module/impuse.scm 411 */
												obj_t BgL_vz00_2036;

												BgL_vz00_2036 = CNST_TABLE_REF(((long) 7));
												((((BgL_importz00_bglt) COBJECT(
																((BgL_importz00_bglt) BgL_importz00_96)))->
														BgL_declz00) = ((obj_t) BgL_vz00_2036), BUNSPEC);
											}
											{	/* Module/impuse.scm 412 */
												obj_t BgL_arg1876z00_1315;

												BgL_arg1876z00_1315 =
													(((BgL_importz00_bglt) COBJECT(
															((BgL_importz00_bglt) BgL_importz00_96)))->
													BgL_locz00);
												{	/* Module/impuse.scm 412 */
													obj_t BgL_list1877z00_1316;

													BgL_list1877z00_1316 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_arg1876z00_1315, CNST_TABLE_REF(((long) 0)),
														BGl_string2218z00zzmodule_impusez00,
														BgL_objz00_1313, BgL_list1877z00_1316);
					}}}}}}}
				else
					{	/* Module/impuse.scm 423 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1859> */
	obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2192)
	{
		{	/* Module/impuse.scm 440 */
			{	/* Module/impuse.scm 456 */
				obj_t BgL_portz00_2193;

				BgL_portz00_2193 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_2193));
			}
		}

	}



/* import-everything */
	obj_t BGl_importzd2everythingzd2zzmodule_impusez00(obj_t BgL_importz00_97)
	{
		{	/* Module/impuse.scm 461 */
			{
				obj_t BgL_providedz00_1333;
				obj_t BgL_inlinez00_1334;
				obj_t BgL_macroz00_1335;
				obj_t BgL_syntaxz00_1336;
				obj_t BgL_expdz00_1337;

				{	/* Module/impuse.scm 463 */
					obj_t BgL_arg1884z00_1332;

					BgL_arg1884z00_1332 =
						(((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_importz00_97)))->BgL_providez00);
					BgL_providedz00_1333 = BgL_arg1884z00_1332;
					BgL_inlinez00_1334 = BNIL;
					BgL_macroz00_1335 = BNIL;
					BgL_syntaxz00_1336 = BNIL;
					BgL_expdz00_1337 = BNIL;
				BgL_zc3z04anonymousza31885ze3z87_1338:
					if (NULLP(BgL_providedz00_1333))
						{	/* Module/impuse.scm 468 */
							{	/* Module/impuse.scm 469 */
								int BgL_res2185z00_2067;

								{	/* Module/impuse.scm 469 */
									int BgL_tmpz00_3163;

									BgL_tmpz00_3163 = (int) (((long) 4));
									BgL_res2185z00_2067 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3163);
								} BgL_res2185z00_2067;
							}
							{	/* Module/impuse.scm 469 */
								int BgL_tmpz00_3166;

								BgL_tmpz00_3166 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3166, BgL_macroz00_1335);
							}
							{	/* Module/impuse.scm 469 */
								int BgL_tmpz00_3169;

								BgL_tmpz00_3169 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3169, BgL_syntaxz00_1336);
							}
							{	/* Module/impuse.scm 469 */
								int BgL_tmpz00_3172;

								BgL_tmpz00_3172 = (int) (((long) 3));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3172, BgL_expdz00_1337);
							}
							return BgL_inlinez00_1334;
						}
					else
						{	/* Module/impuse.scm 470 */
							obj_t BgL_pz00_1344;

							{	/* Module/impuse.scm 470 */
								obj_t BgL_arg1921z00_1388;
								obj_t BgL_arg1923z00_1389;
								obj_t BgL_arg1924z00_1390;

								BgL_arg1921z00_1388 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_97)))->BgL_modulez00);
								BgL_arg1923z00_1389 = CAR(((obj_t) BgL_providedz00_1333));
								BgL_arg1924z00_1390 =
									(((BgL_importz00_bglt) COBJECT(
											((BgL_importz00_bglt) BgL_importz00_97)))->BgL_srcz00);
								{	/* Module/impuse.scm 470 */
									obj_t BgL_list1925z00_1391;

									BgL_list1925z00_1391 =
										MAKE_YOUNG_PAIR(BgL_arg1924z00_1390, BNIL);
									BgL_pz00_1344 =
										BGl_importzd2parserzd2zzmodule_impusez00
										(BgL_arg1921z00_1388, BgL_arg1923z00_1389, BFALSE,
										BgL_list1925z00_1391);
								}
							}
							{
								obj_t BgL_expz00_1350;
								obj_t BgL_synz00_1348;
								obj_t BgL_macz00_1346;

								if (BGl_isazf3zf3zz__objectz00(BgL_pz00_1344,
										BGl_globalz00zzast_varz00))
									{	/* Module/impuse.scm 471 */
										{	/* Module/impuse.scm 473 */
											BgL_valuez00_bglt BgL_valz00_1368;

											BgL_valz00_1368 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_pz00_1344))))->
												BgL_valuez00);
											{	/* Module/impuse.scm 474 */
												obj_t BgL_arg1904z00_1369;
												obj_t BgL_arg1905z00_1370;

												BgL_arg1904z00_1369 =
													CDR(((obj_t) BgL_providedz00_1333));
												{	/* Module/impuse.scm 476 */
													bool_t BgL_test2408z00_3190;

													if (BGl_isazf3zf3zz__objectz00(BgL_pz00_1344,
															BGl_globalz00zzast_varz00))
														{	/* Module/impuse.scm 476 */
															bool_t BgL_test2410z00_3193;

															{	/* Module/impuse.scm 476 */
																bool_t BgL_res2187z00_2072;

																BgL_res2187z00_2072 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_valz00_1368),
																	BGl_sfunz00zzast_varz00);
																BgL_test2410z00_3193 = BgL_res2187z00_2072;
															}
															if (BgL_test2410z00_3193)
																{	/* Module/impuse.scm 476 */
																	BgL_test2408z00_3190 = ((bool_t) 0);
																}
															else
																{	/* Module/impuse.scm 476 */
																	BgL_test2408z00_3190 = ((bool_t) 1);
																}
														}
													else
														{	/* Module/impuse.scm 476 */
															BgL_test2408z00_3190 = ((bool_t) 1);
														}
													if (BgL_test2408z00_3190)
														{	/* Module/impuse.scm 476 */
															BgL_arg1905z00_1370 = BgL_inlinez00_1334;
														}
													else
														{	/* Module/impuse.scm 476 */
															if (
																((((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_valz00_1368)))->
																		BgL_classz00) ==
																	CNST_TABLE_REF(((long) 19))))
																{	/* Module/impuse.scm 479 */
																	obj_t BgL_arg1911z00_1376;

																	{	/* Module/impuse.scm 479 */
																		obj_t BgL_arg1912z00_1377;

																		BgL_arg1912z00_1377 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_pz00_1344))))->BgL_idz00);
																		BgL_arg1911z00_1376 =
																			MAKE_YOUNG_PAIR(BgL_arg1912z00_1377,
																			CNST_TABLE_REF(((long) 19)));
																	}
																	BgL_arg1905z00_1370 =
																		MAKE_YOUNG_PAIR(BgL_arg1911z00_1376,
																		BgL_inlinez00_1334);
																}
															else
																{	/* Module/impuse.scm 478 */
																	BgL_arg1905z00_1370 = BgL_inlinez00_1334;
																}
														}
												}
												{
													obj_t BgL_inlinez00_3208;
													obj_t BgL_providedz00_3207;

													BgL_providedz00_3207 = BgL_arg1904z00_1369;
													BgL_inlinez00_3208 = BgL_arg1905z00_1370;
													BgL_inlinez00_1334 = BgL_inlinez00_3208;
													BgL_providedz00_1333 = BgL_providedz00_3207;
													goto BgL_zc3z04anonymousza31885ze3z87_1338;
												}
											}
										}
									}
								else
									{	/* Module/impuse.scm 471 */
										if (PAIRP(BgL_pz00_1344))
											{	/* Module/impuse.scm 471 */
												if ((CAR(BgL_pz00_1344) == CNST_TABLE_REF(((long) 27))))
													{	/* Module/impuse.scm 471 */
														BgL_macz00_1346 = CDR(BgL_pz00_1344);
														{	/* Module/impuse.scm 486 */
															obj_t BgL_arg1914z00_1381;
															obj_t BgL_arg1915z00_1382;

															BgL_arg1914z00_1381 =
																CDR(((obj_t) BgL_providedz00_1333));
															BgL_arg1915z00_1382 =
																MAKE_YOUNG_PAIR(BgL_macz00_1346,
																BgL_macroz00_1335);
															{
																obj_t BgL_macroz00_3219;
																obj_t BgL_providedz00_3218;

																BgL_providedz00_3218 = BgL_arg1914z00_1381;
																BgL_macroz00_3219 = BgL_arg1915z00_1382;
																BgL_macroz00_1335 = BgL_macroz00_3219;
																BgL_providedz00_1333 = BgL_providedz00_3218;
																goto BgL_zc3z04anonymousza31885ze3z87_1338;
															}
														}
													}
												else
													{	/* Module/impuse.scm 471 */
														if (
															(CAR(BgL_pz00_1344) ==
																CNST_TABLE_REF(((long) 28))))
															{	/* Module/impuse.scm 471 */
																BgL_synz00_1348 = CDR(BgL_pz00_1344);
																{	/* Module/impuse.scm 488 */
																	obj_t BgL_arg1916z00_1383;
																	obj_t BgL_arg1917z00_1384;

																	BgL_arg1916z00_1383 =
																		CDR(((obj_t) BgL_providedz00_1333));
																	BgL_arg1917z00_1384 =
																		MAKE_YOUNG_PAIR(BgL_synz00_1348,
																		BgL_syntaxz00_1336);
																	{
																		obj_t BgL_syntaxz00_3229;
																		obj_t BgL_providedz00_3228;

																		BgL_providedz00_3228 = BgL_arg1916z00_1383;
																		BgL_syntaxz00_3229 = BgL_arg1917z00_1384;
																		BgL_syntaxz00_1336 = BgL_syntaxz00_3229;
																		BgL_providedz00_1333 = BgL_providedz00_3228;
																		goto BgL_zc3z04anonymousza31885ze3z87_1338;
																	}
																}
															}
														else
															{	/* Module/impuse.scm 471 */
																if (
																	(CAR(BgL_pz00_1344) ==
																		CNST_TABLE_REF(((long) 29))))
																	{	/* Module/impuse.scm 471 */
																		BgL_expz00_1350 = CDR(BgL_pz00_1344);
																		{	/* Module/impuse.scm 490 */
																			obj_t BgL_arg1918z00_1385;
																			obj_t BgL_arg1919z00_1386;

																			BgL_arg1918z00_1385 =
																				CDR(((obj_t) BgL_providedz00_1333));
																			BgL_arg1919z00_1386 =
																				MAKE_YOUNG_PAIR(BgL_expz00_1350,
																				BgL_expdz00_1337);
																			{
																				obj_t BgL_expdz00_3239;
																				obj_t BgL_providedz00_3238;

																				BgL_providedz00_3238 =
																					BgL_arg1918z00_1385;
																				BgL_expdz00_3239 = BgL_arg1919z00_1386;
																				BgL_expdz00_1337 = BgL_expdz00_3239;
																				BgL_providedz00_1333 =
																					BgL_providedz00_3238;
																				goto
																					BgL_zc3z04anonymousza31885ze3z87_1338;
																			}
																		}
																	}
																else
																	{	/* Module/impuse.scm 471 */
																	BgL_tagzd2378zd2_1352:
																		{	/* Module/impuse.scm 492 */
																			obj_t BgL_arg1920z00_1387;

																			BgL_arg1920z00_1387 =
																				CDR(((obj_t) BgL_providedz00_1333));
																			{
																				obj_t BgL_providedz00_3243;

																				BgL_providedz00_3243 =
																					BgL_arg1920z00_1387;
																				BgL_providedz00_1333 =
																					BgL_providedz00_3243;
																				goto
																					BgL_zc3z04anonymousza31885ze3z87_1338;
																			}
																		}
																	}
															}
													}
											}
										else
											{	/* Module/impuse.scm 471 */
												goto BgL_tagzd2378zd2_1352;
											}
									}
							}
						}
				}
			}
		}

	}



/* import-wanted */
	obj_t BGl_importzd2wantedzd2zzmodule_impusez00(obj_t BgL_importz00_98,
		obj_t BgL_varsz00_99)
	{
		{	/* Module/impuse.scm 497 */
			{
				obj_t BgL_providedz00_1400;
				obj_t BgL_inlinez00_1401;
				obj_t BgL_macroz00_1402;
				obj_t BgL_syntaxz00_1403;
				obj_t BgL_expanderz00_1404;
				obj_t BgL_wantedz00_1405;

				{	/* Module/impuse.scm 499 */
					obj_t BgL_arg1926z00_1399;

					BgL_arg1926z00_1399 =
						(((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_importz00_98)))->BgL_providez00);
					BgL_providedz00_1400 = BgL_arg1926z00_1399;
					BgL_inlinez00_1401 = BNIL;
					BgL_macroz00_1402 = BNIL;
					BgL_syntaxz00_1403 = BNIL;
					BgL_expanderz00_1404 = BNIL;
					BgL_wantedz00_1405 = BgL_varsz00_99;
				BgL_zc3z04anonymousza31927ze3z87_1406:
					if (NULLP(BgL_wantedz00_1405))
						{	/* Module/impuse.scm 509 */
							{	/* Module/impuse.scm 510 */
								int BgL_res2191z00_2088;

								{	/* Module/impuse.scm 510 */
									int BgL_tmpz00_3248;

									BgL_tmpz00_3248 = (int) (((long) 4));
									BgL_res2191z00_2088 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3248);
								} BgL_res2191z00_2088;
							}
							{	/* Module/impuse.scm 510 */
								int BgL_tmpz00_3251;

								BgL_tmpz00_3251 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3251, BgL_macroz00_1402);
							}
							{	/* Module/impuse.scm 510 */
								int BgL_tmpz00_3254;

								BgL_tmpz00_3254 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3254, BgL_syntaxz00_1403);
							}
							{	/* Module/impuse.scm 510 */
								int BgL_tmpz00_3257;

								BgL_tmpz00_3257 = (int) (((long) 3));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_3257, BgL_expanderz00_1404);
							}
							return BgL_inlinez00_1401;
						}
					else
						{	/* Module/impuse.scm 509 */
							if (NULLP(BgL_providedz00_1400))
								{	/* Module/impuse.scm 511 */
									{	/* Module/impuse.scm 512 */
										obj_t BgL_arg1930z00_1413;
										obj_t BgL_arg1931z00_1414;
										obj_t BgL_arg1932z00_1415;

										BgL_arg1930z00_1413 =
											BGl_findzd2locationzd2zztools_locationz00
											(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
										BgL_arg1931z00_1414 =
											(((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
														BgL_importz00_98)))->BgL_modulez00);
										{	/* Module/impuse.scm 515 */
											obj_t BgL_head1278z00_1419;

											{	/* Module/impuse.scm 515 */
												obj_t BgL_arg1940z00_1431;

												{	/* Module/impuse.scm 515 */
													obj_t BgL_pairz00_2093;

													BgL_pairz00_2093 = CAR(((obj_t) BgL_wantedz00_1405));
													BgL_arg1940z00_1431 = CAR(BgL_pairz00_2093);
												}
												{	/* Module/impuse.scm 515 */
													obj_t BgL_res2194z00_2094;

													BgL_res2194z00_2094 =
														MAKE_YOUNG_PAIR(BgL_arg1940z00_1431, BNIL);
													BgL_head1278z00_1419 = BgL_res2194z00_2094;
												}
											}
											{	/* Module/impuse.scm 515 */
												obj_t BgL_g1281z00_1420;

												BgL_g1281z00_1420 = CDR(((obj_t) BgL_wantedz00_1405));
												{
													obj_t BgL_l1276z00_1422;
													obj_t BgL_tail1279z00_1423;

													BgL_l1276z00_1422 = BgL_g1281z00_1420;
													BgL_tail1279z00_1423 = BgL_head1278z00_1419;
												BgL_zc3z04anonymousza31935ze3z87_1424:
													if (NULLP(BgL_l1276z00_1422))
														{	/* Module/impuse.scm 515 */
															BgL_arg1932z00_1415 = BgL_head1278z00_1419;
														}
													else
														{	/* Module/impuse.scm 515 */
															obj_t BgL_newtail1280z00_1426;

															{	/* Module/impuse.scm 515 */
																obj_t BgL_arg1938z00_1428;

																{	/* Module/impuse.scm 515 */
																	obj_t BgL_pairz00_2098;

																	BgL_pairz00_2098 =
																		CAR(((obj_t) BgL_l1276z00_1422));
																	BgL_arg1938z00_1428 = CAR(BgL_pairz00_2098);
																}
																{	/* Module/impuse.scm 515 */
																	obj_t BgL_res2196z00_2099;

																	BgL_res2196z00_2099 =
																		MAKE_YOUNG_PAIR(BgL_arg1938z00_1428, BNIL);
																	BgL_newtail1280z00_1426 = BgL_res2196z00_2099;
																}
															}
															SET_CDR(BgL_tail1279z00_1423,
																BgL_newtail1280z00_1426);
															{	/* Module/impuse.scm 515 */
																obj_t BgL_arg1937z00_1427;

																BgL_arg1937z00_1427 =
																	CDR(((obj_t) BgL_l1276z00_1422));
																{
																	obj_t BgL_tail1279z00_3281;
																	obj_t BgL_l1276z00_3280;

																	BgL_l1276z00_3280 = BgL_arg1937z00_1427;
																	BgL_tail1279z00_3281 =
																		BgL_newtail1280z00_1426;
																	BgL_tail1279z00_1423 = BgL_tail1279z00_3281;
																	BgL_l1276z00_1422 = BgL_l1276z00_3280;
																	goto BgL_zc3z04anonymousza31935ze3z87_1424;
																}
															}
														}
												}
											}
										}
										{	/* Module/impuse.scm 512 */
											obj_t BgL_list1933z00_1416;

											BgL_list1933z00_1416 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BGl_userzd2errorzf2locationz20zztools_errorz00
												(BgL_arg1930z00_1413, BgL_arg1931z00_1414,
												BGl_string2225z00zzmodule_impusez00,
												BgL_arg1932z00_1415, BgL_list1933z00_1416);
										}
									}
									{	/* Module/impuse.scm 517 */
										int BgL_res2197z00_2102;

										{	/* Module/impuse.scm 517 */
											int BgL_tmpz00_3284;

											BgL_tmpz00_3284 = (int) (((long) 4));
											BgL_res2197z00_2102 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3284);
										} BgL_res2197z00_2102;
									}
									{	/* Module/impuse.scm 517 */
										int BgL_tmpz00_3287;

										BgL_tmpz00_3287 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_3287, BNIL);
									}
									{	/* Module/impuse.scm 517 */
										int BgL_tmpz00_3290;

										BgL_tmpz00_3290 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_3290, BNIL);
									}
									{	/* Module/impuse.scm 517 */
										int BgL_tmpz00_3293;

										BgL_tmpz00_3293 = (int) (((long) 3));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_3293, BNIL);
									}
									return BNIL;
								}
							else
								{	/* Module/impuse.scm 519 */
									obj_t BgL_protoz00_1437;

									{	/* Module/impuse.scm 519 */
										obj_t BgL_arg1984z00_1499;

										BgL_arg1984z00_1499 = CAR(((obj_t) BgL_providedz00_1400));
										BgL_protoz00_1437 =
											BGl_parsezd2prototypezd2zzmodule_prototypez00
											(BgL_arg1984z00_1499);
									}
									if (PAIRP(BgL_protoz00_1437))
										{	/* Module/impuse.scm 521 */
											obj_t BgL_idz00_1439;

											{	/* Module/impuse.scm 522 */
												obj_t BgL_arg1980z00_1495;
												obj_t BgL_arg1981z00_1496;

												BgL_arg1980z00_1495 = CAR(CDR(BgL_protoz00_1437));
												{	/* Module/impuse.scm 522 */
													obj_t BgL_arg1982z00_1497;

													BgL_arg1982z00_1497 =
														CAR(((obj_t) BgL_providedz00_1400));
													BgL_arg1981z00_1496 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_arg1982z00_1497);
												}
												BgL_idz00_1439 =
													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
													(BgL_arg1980z00_1495, BgL_arg1981z00_1496);
											}
											{
												obj_t BgL_inlinez00_1441;
												obj_t BgL_macroz00_1442;
												obj_t BgL_syntaxz00_1443;
												obj_t BgL_expanderz00_1444;
												obj_t BgL_wantedz00_1445;

												BgL_inlinez00_1441 = BgL_inlinez00_1401;
												BgL_macroz00_1442 = BgL_macroz00_1402;
												BgL_syntaxz00_1443 = BgL_syntaxz00_1403;
												BgL_expanderz00_1444 = BgL_expanderz00_1404;
												BgL_wantedz00_1445 = BgL_wantedz00_1405;
											BgL_zc3z04anonymousza31943ze3z87_1446:
												{	/* Module/impuse.scm 528 */
													obj_t BgL_cz00_1447;

													BgL_cz00_1447 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_idz00_1439, BgL_wantedz00_1445);
													if (CBOOL(BgL_cz00_1447))
														{	/* Module/impuse.scm 533 */
															obj_t BgL_pz00_1448;

															{	/* Module/impuse.scm 533 */
																obj_t BgL_arg1974z00_1488;
																obj_t BgL_arg1975z00_1489;
																obj_t BgL_arg1976z00_1490;
																obj_t BgL_arg1977z00_1491;

																BgL_arg1974z00_1488 =
																	(((BgL_importz00_bglt) COBJECT(
																			((BgL_importz00_bglt)
																				BgL_importz00_98)))->BgL_modulez00);
																BgL_arg1975z00_1489 =
																	CAR(((obj_t) BgL_providedz00_1400));
																BgL_arg1976z00_1490 =
																	CDR(((obj_t) BgL_cz00_1447));
																BgL_arg1977z00_1491 =
																	(((BgL_importz00_bglt)
																		COBJECT(((BgL_importz00_bglt)
																				BgL_importz00_98)))->BgL_srcz00);
																{	/* Module/impuse.scm 533 */
																	obj_t BgL_list1978z00_1492;

																	BgL_list1978z00_1492 =
																		MAKE_YOUNG_PAIR(BgL_arg1977z00_1491, BNIL);
																	BgL_pz00_1448 =
																		BGl_importzd2parserzd2zzmodule_impusez00
																		(BgL_arg1974z00_1488, BgL_arg1975z00_1489,
																		BgL_arg1976z00_1490, BgL_list1978z00_1492);
																}
															}
															{
																obj_t BgL_expz00_1455;
																obj_t BgL_synz00_1453;
																obj_t BgL_macz00_1451;

																if (BGl_isazf3zf3zz__objectz00(BgL_pz00_1448,
																		BGl_globalz00zzast_varz00))
																	{	/* Module/impuse.scm 534 */
																		{	/* Module/impuse.scm 538 */
																			obj_t BgL_arg1960z00_1474;
																			obj_t BgL_arg1961z00_1475;

																			if (
																				(CAR(
																						((obj_t) BgL_protoz00_1437)) ==
																					CNST_TABLE_REF(((long) 19))))
																				{	/* Module/impuse.scm 539 */
																					obj_t BgL_arg1964z00_1478;

																					BgL_arg1964z00_1478 =
																						MAKE_YOUNG_PAIR(BgL_idz00_1439,
																						CNST_TABLE_REF(((long) 19)));
																					BgL_arg1960z00_1474 =
																						MAKE_YOUNG_PAIR(BgL_arg1964z00_1478,
																						BgL_inlinez00_1441);
																				}
																			else
																				{	/* Module/impuse.scm 538 */
																					BgL_arg1960z00_1474 =
																						BgL_inlinez00_1441;
																				}
																			BgL_arg1961z00_1475 =
																				bgl_remq_bang(BgL_cz00_1447,
																				BgL_wantedz00_1445);
																			{
																				obj_t BgL_wantedz00_3332;
																				obj_t BgL_inlinez00_3331;

																				BgL_inlinez00_3331 =
																					BgL_arg1960z00_1474;
																				BgL_wantedz00_3332 =
																					BgL_arg1961z00_1475;
																				BgL_wantedz00_1445 = BgL_wantedz00_3332;
																				BgL_inlinez00_1441 = BgL_inlinez00_3331;
																				goto
																					BgL_zc3z04anonymousza31943ze3z87_1446;
																			}
																		}
																	}
																else
																	{	/* Module/impuse.scm 534 */
																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_pz00_1448,
																				BGl_typez00zztype_typez00))
																			{	/* Module/impuse.scm 534 */
																				{
																					obj_t BgL_wantedz00_3335;

																					BgL_wantedz00_3335 =
																						bgl_remq_bang(BgL_cz00_1447,
																						BgL_wantedz00_1445);
																					BgL_wantedz00_1445 =
																						BgL_wantedz00_3335;
																					goto
																						BgL_zc3z04anonymousza31943ze3z87_1446;
																				}
																			}
																		else
																			{	/* Module/impuse.scm 534 */
																				if (PAIRP(BgL_pz00_1448))
																					{	/* Module/impuse.scm 534 */
																						if (
																							(CAR(BgL_pz00_1448) ==
																								CNST_TABLE_REF(((long) 27))))
																							{	/* Module/impuse.scm 534 */
																								BgL_macz00_1451 =
																									CDR(BgL_pz00_1448);
																								{	/* Module/impuse.scm 549 */
																									obj_t BgL_arg1967z00_1481;
																									obj_t BgL_arg1968z00_1482;

																									BgL_arg1967z00_1481 =
																										MAKE_YOUNG_PAIR
																										(BgL_macz00_1451,
																										BgL_macroz00_1442);
																									BgL_arg1968z00_1482 =
																										bgl_remq_bang(BgL_cz00_1447,
																										BgL_wantedz00_1445);
																									{
																										obj_t BgL_wantedz00_3346;
																										obj_t BgL_macroz00_3345;

																										BgL_macroz00_3345 =
																											BgL_arg1967z00_1481;
																										BgL_wantedz00_3346 =
																											BgL_arg1968z00_1482;
																										BgL_wantedz00_1445 =
																											BgL_wantedz00_3346;
																										BgL_macroz00_1442 =
																											BgL_macroz00_3345;
																										goto
																											BgL_zc3z04anonymousza31943ze3z87_1446;
																									}
																								}
																							}
																						else
																							{	/* Module/impuse.scm 534 */
																								if (
																									(CAR(BgL_pz00_1448) ==
																										CNST_TABLE_REF(((long)
																												28))))
																									{	/* Module/impuse.scm 534 */
																										BgL_synz00_1453 =
																											CDR(BgL_pz00_1448);
																										{	/* Module/impuse.scm 553 */
																											obj_t BgL_arg1969z00_1483;
																											obj_t BgL_arg1970z00_1484;

																											BgL_arg1969z00_1483 =
																												MAKE_YOUNG_PAIR
																												(BgL_synz00_1453,
																												BgL_syntaxz00_1443);
																											BgL_arg1970z00_1484 =
																												bgl_remq_bang
																												(BgL_cz00_1447,
																												BgL_wantedz00_1445);
																											{
																												obj_t
																													BgL_wantedz00_3355;
																												obj_t
																													BgL_syntaxz00_3354;
																												BgL_syntaxz00_3354 =
																													BgL_arg1969z00_1483;
																												BgL_wantedz00_3355 =
																													BgL_arg1970z00_1484;
																												BgL_wantedz00_1445 =
																													BgL_wantedz00_3355;
																												BgL_syntaxz00_1443 =
																													BgL_syntaxz00_3354;
																												goto
																													BgL_zc3z04anonymousza31943ze3z87_1446;
																											}
																										}
																									}
																								else
																									{	/* Module/impuse.scm 534 */
																										if (
																											(CAR(BgL_pz00_1448) ==
																												CNST_TABLE_REF(((long)
																														29))))
																											{	/* Module/impuse.scm 534 */
																												BgL_expz00_1455 =
																													CDR(BgL_pz00_1448);
																												{	/* Module/impuse.scm 558 */
																													obj_t
																														BgL_arg1971z00_1485;
																													obj_t
																														BgL_arg1972z00_1486;
																													BgL_arg1971z00_1485 =
																														MAKE_YOUNG_PAIR
																														(BgL_expz00_1455,
																														BgL_expanderz00_1444);
																													BgL_arg1972z00_1486 =
																														bgl_remq_bang
																														(BgL_cz00_1447,
																														BgL_wantedz00_1445);
																													{
																														obj_t
																															BgL_wantedz00_3364;
																														obj_t
																															BgL_expanderz00_3363;
																														BgL_expanderz00_3363
																															=
																															BgL_arg1971z00_1485;
																														BgL_wantedz00_3364 =
																															BgL_arg1972z00_1486;
																														BgL_wantedz00_1445 =
																															BgL_wantedz00_3364;
																														BgL_expanderz00_1444
																															=
																															BgL_expanderz00_3363;
																														goto
																															BgL_zc3z04anonymousza31943ze3z87_1446;
																													}
																												}
																											}
																										else
																											{	/* Module/impuse.scm 534 */
																											BgL_tagzd2411zd2_1457:
																												{
																													obj_t
																														BgL_wantedz00_3366;
																													BgL_wantedz00_3366 =
																														bgl_remq_bang
																														(BgL_cz00_1447,
																														BgL_wantedz00_1445);
																													BgL_wantedz00_1445 =
																														BgL_wantedz00_3366;
																													goto
																														BgL_zc3z04anonymousza31943ze3z87_1446;
																												}
																											}
																									}
																							}
																					}
																				else
																					{	/* Module/impuse.scm 534 */
																						goto BgL_tagzd2411zd2_1457;
																					}
																			}
																	}
															}
														}
													else
														{	/* Module/impuse.scm 530 */
															obj_t BgL_arg1979z00_1493;

															BgL_arg1979z00_1493 =
																CDR(((obj_t) BgL_providedz00_1400));
															{
																obj_t BgL_wantedz00_3375;
																obj_t BgL_expanderz00_3374;
																obj_t BgL_syntaxz00_3373;
																obj_t BgL_macroz00_3372;
																obj_t BgL_inlinez00_3371;
																obj_t BgL_providedz00_3370;

																BgL_providedz00_3370 = BgL_arg1979z00_1493;
																BgL_inlinez00_3371 = BgL_inlinez00_1441;
																BgL_macroz00_3372 = BgL_macroz00_1442;
																BgL_syntaxz00_3373 = BgL_syntaxz00_1443;
																BgL_expanderz00_3374 = BgL_expanderz00_1444;
																BgL_wantedz00_3375 = BgL_wantedz00_1445;
																BgL_wantedz00_1405 = BgL_wantedz00_3375;
																BgL_expanderz00_1404 = BgL_expanderz00_3374;
																BgL_syntaxz00_1403 = BgL_syntaxz00_3373;
																BgL_macroz00_1402 = BgL_macroz00_3372;
																BgL_inlinez00_1401 = BgL_inlinez00_3371;
																BgL_providedz00_1400 = BgL_providedz00_3370;
																goto BgL_zc3z04anonymousza31927ze3z87_1406;
															}
														}
												}
											}
										}
									else
										{	/* Module/impuse.scm 563 */
											obj_t BgL_arg1983z00_1498;

											BgL_arg1983z00_1498 = CDR(((obj_t) BgL_providedz00_1400));
											{
												obj_t BgL_providedz00_3378;

												BgL_providedz00_3378 = BgL_arg1983z00_1498;
												BgL_providedz00_1400 = BgL_providedz00_3378;
												goto BgL_zc3z04anonymousza31927ze3z87_1406;
											}
										}
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			{	/* Module/impuse.scm 44 */
				obj_t BgL_arg1988z00_1504;
				obj_t BgL_arg1989z00_1505;

				{	/* Module/impuse.scm 44 */
					obj_t BgL_v1286z00_1527;

					BgL_v1286z00_1527 = create_vector(((long) 12));
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg1995z00_1528;

						BgL_arg1995z00_1528 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc2227z00zzmodule_impusez00,
							BGl_proc2226z00zzmodule_impusez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 0), BgL_arg1995z00_1528);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2000z00_1538;

						BgL_arg2000z00_1538 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc2230z00zzmodule_impusez00,
							BGl_proc2229z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2228z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 32)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 1), BgL_arg2000z00_1538);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2007z00_1551;

						BgL_arg2007z00_1551 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2233z00zzmodule_impusez00,
							BGl_proc2232z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2231z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 2), BgL_arg2007z00_1551);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2016z00_1564;

						BgL_arg2016z00_1564 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									34)), BGl_proc2236z00zzmodule_impusez00,
							BGl_proc2235z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2234z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 3), BgL_arg2016z00_1564);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2026z00_1577;

						BgL_arg2026z00_1577 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc2239z00zzmodule_impusez00,
							BGl_proc2238z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2237z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 4), BgL_arg2026z00_1577);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2035z00_1590;

						BgL_arg2035z00_1590 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									37)), BGl_proc2242z00zzmodule_impusez00,
							BGl_proc2241z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2240z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 5), BgL_arg2035z00_1590);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2043z00_1603;

						BgL_arg2043z00_1603 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2244z00zzmodule_impusez00,
							BGl_proc2243z00zzmodule_impusez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 6), BgL_arg2043z00_1603);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2048z00_1613;

						BgL_arg2048z00_1613 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									39)), BGl_proc2246z00zzmodule_impusez00,
							BGl_proc2245z00zzmodule_impusez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 7), BgL_arg2048z00_1613);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2053z00_1623;

						BgL_arg2053z00_1623 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									40)), BGl_proc2249z00zzmodule_impusez00,
							BGl_proc2248z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2247z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 8), BgL_arg2053z00_1623);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2061z00_1636;

						BgL_arg2061z00_1636 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									41)), BGl_proc2252z00zzmodule_impusez00,
							BGl_proc2251z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2250z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 42)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 9), BgL_arg2061z00_1636);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2069z00_1649;

						BgL_arg2069z00_1649 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									43)), BGl_proc2255z00zzmodule_impusez00,
							BGl_proc2254z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2253z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 10), BgL_arg2069z00_1649);
					}
					{	/* Module/impuse.scm 44 */
						obj_t BgL_arg2076z00_1662;

						BgL_arg2076z00_1662 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2258z00zzmodule_impusez00,
							BGl_proc2257z00zzmodule_impusez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2256z00zzmodule_impusez00,
							CNST_TABLE_REF(((long) 35)));
						VECTOR_SET(BgL_v1286z00_1527, ((long) 11), BgL_arg2076z00_1662);
					}
					BgL_arg1988z00_1504 = BgL_v1286z00_1527;
				}
				{	/* Module/impuse.scm 44 */
					obj_t BgL_v1287z00_1675;

					BgL_v1287z00_1675 = create_vector(((long) 0));
					BgL_arg1989z00_1505 = BgL_v1287z00_1675;
				}
				return (BGl_importz00zzmodule_impusez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 45)), BGl_objectz00zz__objectz00,
						((long) 34340), BGl_proc2261z00zzmodule_impusez00,
						BGl_proc2260z00zzmodule_impusez00, BFALSE,
						BGl_proc2259z00zzmodule_impusez00, BFALSE, BgL_arg1988z00_1504,
						BgL_arg1989z00_1505), BUNSPEC);
		}}

	}



/* &<@anonymous:1994> */
	obj_t BGl_z62zc3z04anonymousza31994ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2230, obj_t BgL_new1078z00_2231)
	{
		{	/* Module/impuse.scm 44 */
			{
				BgL_importz00_bglt BgL_auxz00_3432;

				((((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_new1078z00_2231)))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 46))), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_numberz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_modez00) =
					((obj_t) CNST_TABLE_REF(((long) 46))), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_aliasesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_checksumz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_declz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_providez00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_codez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_importz00_bglt) COBJECT(((BgL_importz00_bglt)
									BgL_new1078z00_2231)))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_3432 = ((BgL_importz00_bglt) BgL_new1078z00_2231);
				return ((obj_t) BgL_auxz00_3432);
			}
		}

	}



/* &lambda1992 */
	BgL_importz00_bglt BGl_z62lambda1992z62zzmodule_impusez00(obj_t
		BgL_envz00_2232)
	{
		{	/* Module/impuse.scm 44 */
			{	/* Module/impuse.scm 44 */
				BgL_importz00_bglt BgL_new1077z00_2338;

				BgL_new1077z00_2338 =
					((BgL_importz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_importz00_bgl))));
				{	/* Module/impuse.scm 44 */
					long BgL_arg1993z00_2339;

					{	/* Module/impuse.scm 44 */
						long BgL_res2203z00_2340;

						BgL_res2203z00_2340 =
							BGL_CLASS_INDEX(BGl_importz00zzmodule_impusez00);
						BgL_arg1993z00_2339 = BgL_res2203z00_2340;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1077z00_2338), BgL_arg1993z00_2339);
				}
				return BgL_new1077z00_2338;
			}
		}

	}



/* &lambda1990 */
	BgL_importz00_bglt BGl_z62lambda1990z62zzmodule_impusez00(obj_t
		BgL_envz00_2233, obj_t BgL_module1065z00_2234, obj_t BgL_number1066z00_2235,
		obj_t BgL_mode1067z00_2236, obj_t BgL_vars1068z00_2237,
		obj_t BgL_aliases1069z00_2238, obj_t BgL_checksum1070z00_2239,
		obj_t BgL_loc1071z00_2240, obj_t BgL_src1072z00_2241,
		obj_t BgL_decl1073z00_2242, obj_t BgL_provide1074z00_2243,
		obj_t BgL_code1075z00_2244, obj_t BgL_access1076z00_2245)
	{
		{	/* Module/impuse.scm 44 */
			{	/* Module/impuse.scm 44 */
				long BgL_number1066z00_2342;

				BgL_number1066z00_2342 = (long) CINT(BgL_number1066z00_2235);
				{	/* Module/impuse.scm 44 */
					BgL_importz00_bglt BgL_new1126z00_2345;

					{	/* Module/impuse.scm 44 */
						BgL_importz00_bglt BgL_new1125z00_2346;

						BgL_new1125z00_2346 =
							((BgL_importz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_importz00_bgl))));
						{	/* Module/impuse.scm 44 */
							long BgL_arg1991z00_2347;

							{	/* Module/impuse.scm 44 */
								long BgL_res2202z00_2348;

								BgL_res2202z00_2348 =
									BGL_CLASS_INDEX(BGl_importz00zzmodule_impusez00);
								BgL_arg1991z00_2347 = BgL_res2202z00_2348;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1125z00_2346),
								BgL_arg1991z00_2347);
						}
						BgL_new1126z00_2345 = BgL_new1125z00_2346;
					}
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1065z00_2234)), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_numberz00) = ((long) BgL_number1066z00_2342), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_modez00) =
						((obj_t) ((obj_t) BgL_mode1067z00_2236)), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_varsz00) =
						((obj_t) BgL_vars1068z00_2237), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_aliasesz00) = ((obj_t) BgL_aliases1069z00_2238), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_checksumz00) = ((obj_t) BgL_checksum1070z00_2239), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_locz00) =
						((obj_t) BgL_loc1071z00_2240), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_srcz00) =
						((obj_t) BgL_src1072z00_2241), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_declz00) =
						((obj_t) BgL_decl1073z00_2242), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_providez00) =
						((obj_t) ((obj_t) BgL_provide1074z00_2243)), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->BgL_codez00) =
						((obj_t) BgL_code1075z00_2244), BUNSPEC);
					((((BgL_importz00_bglt) COBJECT(BgL_new1126z00_2345))->
							BgL_accessz00) = ((obj_t) BgL_access1076z00_2245), BUNSPEC);
					return BgL_new1126z00_2345;
				}
			}
		}

	}



/* &<@anonymous:2082> */
	obj_t BGl_z62zc3z04anonymousza32082ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2246)
	{
		{	/* Module/impuse.scm 44 */
			return BNIL;
		}

	}



/* &lambda2081 */
	obj_t BGl_z62lambda2081z62zzmodule_impusez00(obj_t BgL_envz00_2247,
		obj_t BgL_oz00_2248, obj_t BgL_vz00_2249)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2248)))->BgL_accessz00) =
				((obj_t) BgL_vz00_2249), BUNSPEC);
		}

	}



/* &lambda2080 */
	obj_t BGl_z62lambda2080z62zzmodule_impusez00(obj_t BgL_envz00_2250,
		obj_t BgL_oz00_2251)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2251)))->BgL_accessz00);
		}

	}



/* &<@anonymous:2075> */
	obj_t BGl_z62zc3z04anonymousza32075ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2252)
	{
		{	/* Module/impuse.scm 44 */
			return BUNSPEC;
		}

	}



/* &lambda2074 */
	obj_t BGl_z62lambda2074z62zzmodule_impusez00(obj_t BgL_envz00_2253,
		obj_t BgL_oz00_2254, obj_t BgL_vz00_2255)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2254)))->BgL_codez00) =
				((obj_t) BgL_vz00_2255), BUNSPEC);
		}

	}



/* &lambda2073 */
	obj_t BGl_z62lambda2073z62zzmodule_impusez00(obj_t BgL_envz00_2256,
		obj_t BgL_oz00_2257)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2257)))->BgL_codez00);
		}

	}



/* &<@anonymous:2068> */
	obj_t BGl_z62zc3z04anonymousza32068ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2258)
	{
		{	/* Module/impuse.scm 44 */
			return BNIL;
		}

	}



/* &lambda2067 */
	obj_t BGl_z62lambda2067z62zzmodule_impusez00(obj_t BgL_envz00_2259,
		obj_t BgL_oz00_2260, obj_t BgL_vz00_2261)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2260)))->BgL_providez00) = ((obj_t)
					((obj_t) BgL_vz00_2261)), BUNSPEC);
		}

	}



/* &lambda2066 */
	obj_t BGl_z62lambda2066z62zzmodule_impusez00(obj_t BgL_envz00_2262,
		obj_t BgL_oz00_2263)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2263)))->BgL_providez00);
		}

	}



/* &<@anonymous:2060> */
	obj_t BGl_z62zc3z04anonymousza32060ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2264)
	{
		{	/* Module/impuse.scm 44 */
			return BUNSPEC;
		}

	}



/* &lambda2059 */
	obj_t BGl_z62lambda2059z62zzmodule_impusez00(obj_t BgL_envz00_2265,
		obj_t BgL_oz00_2266, obj_t BgL_vz00_2267)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2266)))->BgL_declz00) =
				((obj_t) BgL_vz00_2267), BUNSPEC);
		}

	}



/* &lambda2058 */
	obj_t BGl_z62lambda2058z62zzmodule_impusez00(obj_t BgL_envz00_2268,
		obj_t BgL_oz00_2269)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2269)))->BgL_declz00);
		}

	}



/* &lambda2052 */
	obj_t BGl_z62lambda2052z62zzmodule_impusez00(obj_t BgL_envz00_2270,
		obj_t BgL_oz00_2271, obj_t BgL_vz00_2272)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2271)))->BgL_srcz00) =
				((obj_t) BgL_vz00_2272), BUNSPEC);
		}

	}



/* &lambda2051 */
	obj_t BGl_z62lambda2051z62zzmodule_impusez00(obj_t BgL_envz00_2273,
		obj_t BgL_oz00_2274)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2274)))->BgL_srcz00);
		}

	}



/* &lambda2047 */
	obj_t BGl_z62lambda2047z62zzmodule_impusez00(obj_t BgL_envz00_2275,
		obj_t BgL_oz00_2276, obj_t BgL_vz00_2277)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2276)))->BgL_locz00) =
				((obj_t) BgL_vz00_2277), BUNSPEC);
		}

	}



/* &lambda2046 */
	obj_t BGl_z62lambda2046z62zzmodule_impusez00(obj_t BgL_envz00_2278,
		obj_t BgL_oz00_2279)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2279)))->BgL_locz00);
		}

	}



/* &<@anonymous:2041> */
	obj_t BGl_z62zc3z04anonymousza32041ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2280)
	{
		{	/* Module/impuse.scm 44 */
			return BUNSPEC;
		}

	}



/* &lambda2040 */
	obj_t BGl_z62lambda2040z62zzmodule_impusez00(obj_t BgL_envz00_2281,
		obj_t BgL_oz00_2282, obj_t BgL_vz00_2283)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2282)))->BgL_checksumz00) =
				((obj_t) BgL_vz00_2283), BUNSPEC);
		}

	}



/* &lambda2039 */
	obj_t BGl_z62lambda2039z62zzmodule_impusez00(obj_t BgL_envz00_2284,
		obj_t BgL_oz00_2285)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2285)))->BgL_checksumz00);
		}

	}



/* &<@anonymous:2034> */
	obj_t BGl_z62zc3z04anonymousza32034ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2286)
	{
		{	/* Module/impuse.scm 44 */
			return BNIL;
		}

	}



/* &lambda2033 */
	obj_t BGl_z62lambda2033z62zzmodule_impusez00(obj_t BgL_envz00_2287,
		obj_t BgL_oz00_2288, obj_t BgL_vz00_2289)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2288)))->BgL_aliasesz00) =
				((obj_t) BgL_vz00_2289), BUNSPEC);
		}

	}



/* &lambda2032 */
	obj_t BGl_z62lambda2032z62zzmodule_impusez00(obj_t BgL_envz00_2290,
		obj_t BgL_oz00_2291)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2291)))->BgL_aliasesz00);
		}

	}



/* &<@anonymous:2023> */
	obj_t BGl_z62zc3z04anonymousza32023ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2292)
	{
		{	/* Module/impuse.scm 44 */
			return BNIL;
		}

	}



/* &lambda2022 */
	obj_t BGl_z62lambda2022z62zzmodule_impusez00(obj_t BgL_envz00_2293,
		obj_t BgL_oz00_2294, obj_t BgL_vz00_2295)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2294)))->BgL_varsz00) =
				((obj_t) BgL_vz00_2295), BUNSPEC);
		}

	}



/* &lambda2021 */
	obj_t BGl_z62lambda2021z62zzmodule_impusez00(obj_t BgL_envz00_2296,
		obj_t BgL_oz00_2297)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2297)))->BgL_varsz00);
		}

	}



/* &<@anonymous:2014> */
	obj_t BGl_z62zc3z04anonymousza32014ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2298)
	{
		{	/* Module/impuse.scm 44 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* &lambda2013 */
	obj_t BGl_z62lambda2013z62zzmodule_impusez00(obj_t BgL_envz00_2299,
		obj_t BgL_oz00_2300, obj_t BgL_vz00_2301)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2300)))->BgL_modez00) = ((obj_t)
					((obj_t) BgL_vz00_2301)), BUNSPEC);
		}

	}



/* &lambda2012 */
	obj_t BGl_z62lambda2012z62zzmodule_impusez00(obj_t BgL_envz00_2302,
		obj_t BgL_oz00_2303)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2303)))->BgL_modez00);
		}

	}



/* &<@anonymous:2006> */
	obj_t BGl_z62zc3z04anonymousza32006ze3ze5zzmodule_impusez00(obj_t
		BgL_envz00_2304)
	{
		{	/* Module/impuse.scm 44 */
			return BINT(((long) -1));
		}

	}



/* &lambda2005 */
	obj_t BGl_z62lambda2005z62zzmodule_impusez00(obj_t BgL_envz00_2305,
		obj_t BgL_oz00_2306, obj_t BgL_vz00_2307)
	{
		{	/* Module/impuse.scm 44 */
			{	/* Module/impuse.scm 44 */
				long BgL_vz00_2372;

				BgL_vz00_2372 = (long) CINT(BgL_vz00_2307);
				return
					((((BgL_importz00_bglt) COBJECT(
								((BgL_importz00_bglt) BgL_oz00_2306)))->BgL_numberz00) =
					((long) BgL_vz00_2372), BUNSPEC);
		}}

	}



/* &lambda2004 */
	obj_t BGl_z62lambda2004z62zzmodule_impusez00(obj_t BgL_envz00_2308,
		obj_t BgL_oz00_2309)
	{
		{	/* Module/impuse.scm 44 */
			return
				BINT(
				(((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2309)))->BgL_numberz00));
		}

	}



/* &lambda1999 */
	obj_t BGl_z62lambda1999z62zzmodule_impusez00(obj_t BgL_envz00_2310,
		obj_t BgL_oz00_2311, obj_t BgL_vz00_2312)
	{
		{	/* Module/impuse.scm 44 */
			return
				((((BgL_importz00_bglt) COBJECT(
							((BgL_importz00_bglt) BgL_oz00_2311)))->BgL_modulez00) = ((obj_t)
					((obj_t) BgL_vz00_2312)), BUNSPEC);
		}

	}



/* &lambda1998 */
	obj_t BGl_z62lambda1998z62zzmodule_impusez00(obj_t BgL_envz00_2313,
		obj_t BgL_oz00_2314)
	{
		{	/* Module/impuse.scm 44 */
			return
				(((BgL_importz00_bglt) COBJECT(
						((BgL_importz00_bglt) BgL_oz00_2314)))->BgL_modulez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_impusez00()
	{
		{	/* Module/impuse.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 499400866),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 457474423),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 11403642),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_inlinez00(((long) 500058920),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 502577506),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string2262z00zzmodule_impusez00));
		}

	}

#ifdef __cplusplus
}
#endif
