/*===========================================================================*/
/*   (Expand/object.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/object.scm) */
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


	static obj_t BGl_z62expandzd2instantiatezb0zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_instantiatezd2ze3makez31zzexpand_objectz00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t
		BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_duplicatezd2ze3makez31zzexpand_objectz00(BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_objectz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2withzd2accessz62zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_classgenzd2widenzd2exprz00zzobject_classgenz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_slotz00zzobject_slotsz00;
	BGL_IMPORT obj_t make_vector(long, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_objectz00();
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31341ze3ze5zzexpand_objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2instantiatezd2zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2shrinkz12zc0zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2definezd2classz62zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2duplicatezb0zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2epairifyzd2zzexpand_objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2widenz12zc0zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_makezd2azd2shrinkz12z12zzexpand_objectz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	extern bool_t BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_fieldzd2accesszd2zzast_objectz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_allocatezd2exprzd2zzexpand_objectz00(obj_t);
	extern obj_t BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00;
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2withzd2accessz00zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_objectz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32290ze3ze5zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2classz00zzexpand_objectz00(obj_t, obj_t);
	extern obj_t BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_IMPORT obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_objectz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_objectz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_z62expandzd2widenz12za2zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2classzd2slotz00zzobject_toolsz00(BgL_typez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62expandzd2shrinkz12za2zzexpand_objectz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2duplicatezd2zzexpand_objectz00(obj_t,
		obj_t);
	static obj_t BGl_inlinablezd2callzf3ze70zc6zzexpand_objectz00(obj_t, obj_t);
	static obj_t BGl_instantiatezd2fillzd2zzexpand_objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_expandzd2wideningzd2zzexpand_objectz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	static obj_t BGl_z62zc3z04anonymousza32260ze3ze5zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classgenz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_findzd2slotzd2offsetz00zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_objectz00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_objectz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_objectz00();
	static obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_withzd2accesszd2expanderz00zzexpand_objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_inlinezd2definitionzd2queuez00zzread_inlinez00();
	static bool_t BGl_inlinablezf3ze70z14zzexpand_objectz00(obj_t, obj_t);
	static obj_t BGl_z62slotzd2setzb0zzexpand_objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2cozd2instantiatez62zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_findzd2classzd2constructorz00zzobject_classz00(BgL_typez00_bglt);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31559ze3ze5zzexpand_objectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[46];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2widenz12zd2envz12zzexpand_objectz00,
		BgL_bgl_za762expandza7d2wide2847z00,
		BGl_z62expandzd2widenz12za2zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2cozd2instantiatezd2envzd2zzexpand_objectz00,
		BgL_bgl_za762expandza7d2coza7d2848za7,
		BGl_z62expandzd2cozd2instantiatez62zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2withzd2accesszd2envzd2zzexpand_objectz00,
		BgL_bgl_za762expandza7d2with2849z00,
		BGl_z62expandzd2withzd2accessz62zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2shrinkz12zd2envz12zzexpand_objectz00,
		BgL_bgl_za762expandza7d2shri2850z00,
		BGl_z62expandzd2shrinkz12za2zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2classzd2envzd2zzexpand_objectz00,
		BgL_bgl_za762expandza7d2defi2851z00,
		BGl_z62expandzd2definezd2classz62zzexpand_objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2duplicatezd2envz00zzexpand_objectz00,
		BgL_bgl_za762expandza7d2dupl2852z00,
		BGl_z62expandzd2duplicatezb0zzexpand_objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2814z00zzexpand_objectz00,
		BgL_bgl_string2814za700za7za7e2853za7, "Illegal define-class", 20);
	      DEFINE_STRING(BGl_string2815z00zzexpand_objectz00,
		BgL_bgl_string2815za700za7za7e2854za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2816z00zzexpand_objectz00,
		BgL_bgl_string2816za700za7za7e2855za7, "Illegal field", 13);
	      DEFINE_STRING(BGl_string2817z00zzexpand_objectz00,
		BgL_bgl_string2817za700za7za7e2856za7, "Illegal class", 13);
	      DEFINE_STRING(BGl_string2818z00zzexpand_objectz00,
		BgL_bgl_string2818za700za7za7e2857za7, "with-access", 11);
	      DEFINE_STRING(BGl_string2819z00zzexpand_objectz00,
		BgL_bgl_string2819za700za7za7e2858za7, "No such field", 13);
	      DEFINE_STRING(BGl_string2820z00zzexpand_objectz00,
		BgL_bgl_string2820za700za7za7e2859za7,
		"Abstract classes can't be instantiated", 38);
	      DEFINE_STRING(BGl_string2821z00zzexpand_objectz00,
		BgL_bgl_string2821za700za7za7e2860za7, "Cannot find class definition", 28);
	      DEFINE_STRING(BGl_string2822z00zzexpand_objectz00,
		BgL_bgl_string2822za700za7za7e2861za7, "instantiate", 11);
	      DEFINE_STRING(BGl_string2823z00zzexpand_objectz00,
		BgL_bgl_string2823za700za7za7e2862za7, "Illegal argument \"~a\"", 21);
	      DEFINE_STRING(BGl_string2824z00zzexpand_objectz00,
		BgL_bgl_string2824za700za7za7e2863za7,
		"Cannot inline slot \"~s\" default value", 37);
	      DEFINE_STRING(BGl_string2825z00zzexpand_objectz00,
		BgL_bgl_string2825za700za7za7e2864za7, "Missing value for field \"~a\"",
		28);
	      DEFINE_STRING(BGl_string2826z00zzexpand_objectz00,
		BgL_bgl_string2826za700za7za7e2865za7, "co-instantiate", 14);
	      DEFINE_STRING(BGl_string2827z00zzexpand_objectz00,
		BgL_bgl_string2827za700za7za7e2866za7, "Illegal binding", 15);
	      DEFINE_STRING(BGl_string2828z00zzexpand_objectz00,
		BgL_bgl_string2828za700za7za7e2867za7, "Illegal variable type", 21);
	      DEFINE_STRING(BGl_string2829z00zzexpand_objectz00,
		BgL_bgl_string2829za700za7za7e2868za7,
		"Abstract classes can't be duplicated", 36);
	      DEFINE_STRING(BGl_string2830z00zzexpand_objectz00,
		BgL_bgl_string2830za700za7za7e2869za7, "Illegal class type \"~a\"", 23);
	      DEFINE_STRING(BGl_string2831z00zzexpand_objectz00,
		BgL_bgl_string2831za700za7za7e2870za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string2832z00zzexpand_objectz00,
		BgL_bgl_string2832za700za7za7e2871za7, "wident!", 7);
	      DEFINE_STRING(BGl_string2833z00zzexpand_objectz00,
		BgL_bgl_string2833za700za7za7e2872za7, "Illegal shrink!", 15);
	      DEFINE_STRING(BGl_string2834z00zzexpand_objectz00,
		BgL_bgl_string2834za700za7za7e2873za7, "shrink!", 7);
	      DEFINE_STRING(BGl_string2835z00zzexpand_objectz00,
		BgL_bgl_string2835za700za7za7e2874za7, "Not a wide object", 17);
	      DEFINE_STRING(BGl_string2836z00zzexpand_objectz00,
		BgL_bgl_string2836za700za7za7e2875za7, "Field unknown \"~a\"", 18);
	      DEFINE_STRING(BGl_string2837z00zzexpand_objectz00,
		BgL_bgl_string2837za700za7za7e2876za7, "expand_object", 13);
	      DEFINE_STRING(BGl_string2838z00zzexpand_objectz00,
		BgL_bgl_string2838za700za7za7e2877za7,
		"if error object-widening object? object-widening-set! object-class class-super class-num object-class-num-set! o shrink! cast duplicated tmp instantiate co-instantiate bit-rsh bit-lsh bit-xor bit-and bit-or - + class-nil lambda begin quote sifun default-inline no-literal define-inline class-constructor new class-field-default-value vector-ref-ur @ class-all-fields __object set! let i define-class static define-abstract-class define-final-class class ",
		454);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2instantiatezd2envz00zzexpand_objectz00,
		BgL_bgl_za762expandza7d2inst2878z00,
		BGl_z62expandzd2instantiatezb0zzexpand_objectz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_objectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_objectz00(long
		BgL_checksumz00_3970, char *BgL_fromz00_3971)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_objectz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_objectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_objectz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_objectz00();
					BGl_cnstzd2initzd2zzexpand_objectz00();
					BGl_importedzd2moduleszd2initz00zzexpand_objectz00();
					return BGl_methodzd2initzd2zzexpand_objectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_object");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_object");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_object");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			{	/* Expand/object.scm 15 */
				obj_t BgL_cportz00_3890;

				{	/* Expand/object.scm 15 */
					obj_t BgL_stringz00_3898;

					BgL_stringz00_3898 = BGl_string2838z00zzexpand_objectz00;
					{	/* Expand/object.scm 15 */
						obj_t BgL_startz00_3899;

						BgL_startz00_3899 = BINT(((long) 0));
						{	/* Expand/object.scm 15 */
							obj_t BgL_endz00_3900;

							BgL_endz00_3900 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3898)));
							{	/* Expand/object.scm 15 */

								BgL_cportz00_3890 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3898, BgL_startz00_3899, BgL_endz00_3900);
				}}}}
				{
					long BgL_iz00_3891;

					BgL_iz00_3891 = ((long) 45);
				BgL_loopz00_3892:
					if ((BgL_iz00_3891 == ((long) -1)))
						{	/* Expand/object.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/object.scm 15 */
							{	/* Expand/object.scm 15 */
								obj_t BgL_arg2845z00_3894;

								{	/* Expand/object.scm 15 */

									{	/* Expand/object.scm 15 */
										obj_t BgL_locationz00_3896;

										BgL_locationz00_3896 = BBOOL(((bool_t) 0));
										{	/* Expand/object.scm 15 */

											BgL_arg2845z00_3894 =
												BGl_readz00zz__readerz00(BgL_cportz00_3890,
												BgL_locationz00_3896);
										}
									}
								}
								{	/* Expand/object.scm 15 */
									int BgL_tmpz00_4006;

									BgL_tmpz00_4006 = (int) (BgL_iz00_3891);
									CNST_TABLE_SET(BgL_tmpz00_4006, BgL_arg2845z00_3894);
							}}
							{	/* Expand/object.scm 15 */
								int BgL_auxz00_3897;

								BgL_auxz00_3897 = (int) ((BgL_iz00_3891 - ((long) 1)));
								{
									long BgL_iz00_4011;

									BgL_iz00_4011 = (long) (BgL_auxz00_3897);
									BgL_iz00_3891 = BgL_iz00_4011;
									goto BgL_loopz00_3892;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-define-class */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2classz00zzexpand_objectz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Expand/object.scm 52 */
			{
				obj_t BgL_restz00_1645;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/object.scm 53 */
						obj_t BgL_carzd2106zd2_1650;
						obj_t BgL_cdrzd2107zd2_1651;

						BgL_carzd2106zd2_1650 = CAR(BgL_xz00_3);
						BgL_cdrzd2107zd2_1651 = CDR(BgL_xz00_3);
						if ((BgL_carzd2106zd2_1650 == CNST_TABLE_REF(((long) 4))))
							{	/* Expand/object.scm 53 */
								BgL_restz00_1645 = BgL_cdrzd2107zd2_1651;
							BgL_tagzd2101zd2_1646:
								{	/* Expand/object.scm 55 */
									obj_t BgL_nxz00_1656;

									{	/* Expand/object.scm 55 */
										obj_t BgL_arg1315z00_1664;

										{	/* Expand/object.scm 55 */
											obj_t BgL_arg1316z00_1665;

											BgL_arg1316z00_1665 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_restz00_1645, BNIL);
											BgL_arg1315z00_1664 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
												BgL_arg1316z00_1665);
										}
										BgL_nxz00_1656 =
											BGl_evepairifyz00zz__prognz00(BgL_arg1315z00_1664,
											BgL_xz00_3);
									}
									{	/* Expand/object.scm 55 */
										obj_t BgL_protoz00_1657;

										BgL_protoz00_1657 =
											BGl_parsezd2prototypezd2zzmodule_prototypez00
											(BgL_nxz00_1656);
										{	/* Expand/object.scm 56 */

											if (CBOOL(BgL_protoz00_1657))
												{	/* Expand/object.scm 57 */
													{	/* Expand/object.scm 61 */
														obj_t BgL_arg1308z00_1658;
														bool_t BgL_arg1309z00_1659;
														bool_t BgL_arg1310z00_1660;

														BgL_arg1308z00_1658 =
															CDR(((obj_t) BgL_protoz00_1657));
														BgL_arg1309z00_1659 =
															(CAR(
																((obj_t) BgL_xz00_3)) ==
															CNST_TABLE_REF(((long) 1)));
														BgL_arg1310z00_1660 =
															(CAR(
																((obj_t) BgL_xz00_3)) ==
															CNST_TABLE_REF(((long) 2)));
														BGl_declarezd2classz12zc0zzmodule_classz00
															(BgL_arg1308z00_1658,
															BGl_za2moduleza2z00zzmodule_modulez00,
															CNST_TABLE_REF(((long) 3)), BgL_arg1309z00_1659,
															BgL_arg1310z00_1660, BgL_nxz00_1656, BFALSE);
													}
													return
														BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00
														();
												}
											else
												{	/* Expand/object.scm 58 */
													obj_t BgL_arg1314z00_1663;

													BgL_arg1314z00_1663 = CAR(((obj_t) BgL_xz00_3));
													return
														BGl_errorz00zz__errorz00(BgL_arg1314z00_1663,
														BGl_string2814z00zzexpand_objectz00, BgL_xz00_3);
												}
										}
									}
								}
							}
						else
							{	/* Expand/object.scm 53 */
								if ((BgL_carzd2106zd2_1650 == CNST_TABLE_REF(((long) 1))))
									{
										obj_t BgL_restz00_4047;

										BgL_restz00_4047 = BgL_cdrzd2107zd2_1651;
										BgL_restz00_1645 = BgL_restz00_4047;
										goto BgL_tagzd2101zd2_1646;
									}
								else
									{	/* Expand/object.scm 53 */
										if ((BgL_carzd2106zd2_1650 == CNST_TABLE_REF(((long) 2))))
											{
												obj_t BgL_restz00_4051;

												BgL_restz00_4051 = BgL_cdrzd2107zd2_1651;
												BgL_restz00_1645 = BgL_restz00_4051;
												goto BgL_tagzd2101zd2_1646;
											}
										else
											{	/* Expand/object.scm 53 */
											BgL_tagzd2102zd2_1647:
												return
													BGl_errorz00zz__errorz00(BgL_xz00_3,
													BGl_string2814z00zzexpand_objectz00, BgL_xz00_3);
											}
									}
							}
					}
				else
					{	/* Expand/object.scm 53 */
						goto BgL_tagzd2102zd2_1647;
					}
			}
		}

	}



/* &expand-define-class */
	obj_t BGl_z62expandzd2definezd2classz62zzexpand_objectz00(obj_t
		BgL_envz00_3822, obj_t BgL_xz00_3823, obj_t BgL_ez00_3824)
	{
		{	/* Expand/object.scm 52 */
			return
				BGl_expandzd2definezd2classz00zzexpand_objectz00(BgL_xz00_3823,
				BgL_ez00_3824);
		}

	}



/* expand-with-access */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2withzd2accessz00zzexpand_objectz00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		{	/* Expand/object.scm 71 */
			{
				obj_t BgL_withzd2accesszd2_1666;
				obj_t BgL_instancez00_1667;
				obj_t BgL_slotsz00_1668;
				obj_t BgL_bodyz00_1669;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/object.scm 72 */
						obj_t BgL_cdrzd2123zd2_1674;

						BgL_cdrzd2123zd2_1674 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd2123zd2_1674))
							{	/* Expand/object.scm 72 */
								obj_t BgL_cdrzd2129zd2_1676;

								BgL_cdrzd2129zd2_1676 = CDR(BgL_cdrzd2123zd2_1674);
								if (PAIRP(BgL_cdrzd2129zd2_1676))
									{	/* Expand/object.scm 72 */
										obj_t BgL_carzd2133zd2_1678;
										obj_t BgL_cdrzd2134zd2_1679;

										BgL_carzd2133zd2_1678 = CAR(BgL_cdrzd2129zd2_1676);
										BgL_cdrzd2134zd2_1679 = CDR(BgL_cdrzd2129zd2_1676);
										if (PAIRP(BgL_carzd2133zd2_1678))
											{	/* Expand/object.scm 72 */
												if (PAIRP(BgL_cdrzd2134zd2_1679))
													{	/* Expand/object.scm 72 */
														BgL_withzd2accesszd2_1666 = CAR(BgL_xz00_5);
														BgL_instancez00_1667 = CAR(BgL_cdrzd2123zd2_1674);
														BgL_slotsz00_1668 = BgL_carzd2133zd2_1678;
														BgL_bodyz00_1669 = BgL_cdrzd2134zd2_1679;
														{	/* Expand/object.scm 74 */
															obj_t BgL_locz00_1684;

															BgL_locz00_1684 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_5);
															{	/* Expand/object.scm 74 */
																BgL_typez00_bglt BgL_classz00_1685;

																BgL_classz00_1685 =
																	BGl_typezd2ofzd2idz00zzast_identz00
																	(BgL_withzd2accesszd2_1666, BgL_locz00_1684);
																{	/* Expand/object.scm 75 */

																	{	/* Expand/object.scm 77 */
																		bool_t BgL_test2891z00_4070;

																		{	/* Expand/object.scm 77 */
																			bool_t BgL_res2627z00_3182;

																			BgL_res2627z00_3182 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_classz00_1685),
																				BGl_tclassz00zzobject_classz00);
																			BgL_test2891z00_4070 =
																				BgL_res2627z00_3182;
																		}
																		if (BgL_test2891z00_4070)
																			{
																				obj_t BgL_sz00_1689;
																				obj_t BgL_nslotsz00_1690;

																				BgL_sz00_1689 = BgL_slotsz00_1668;
																				BgL_nslotsz00_1690 = BNIL;
																			BgL_zc3z04anonymousza31326ze3z87_1691:
																				if (NULLP(BgL_sz00_1689))
																					{	/* Expand/object.scm 84 */
																						obj_t BgL_auxz00_1693;

																						BgL_auxz00_1693 =
																							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																							(BGl_gensymz00zz__r4_symbols_6_4z00
																							(CNST_TABLE_REF(((long) 5))));
																						{	/* Expand/object.scm 84 */
																							obj_t BgL_instancez00_1694;

																							BgL_instancez00_1694 =
																								PROCEDURE_ENTRY(BgL_ez00_6)
																								(BgL_ez00_6,
																								BgL_instancez00_1667,
																								BgL_ez00_6, BEOA);
																							{	/* Expand/object.scm 85 */
																								obj_t BgL_classzd2idzd2_1695;

																								BgL_classzd2idzd2_1695 =
																									(((BgL_typez00_bglt)
																										COBJECT
																										(BgL_classz00_1685))->
																									BgL_idz00);
																								{	/* Expand/object.scm 86 */
																									obj_t BgL_tauxz00_1696;

																									BgL_tauxz00_1696 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_auxz00_1693,
																										BgL_classzd2idzd2_1695);
																									{	/* Expand/object.scm 87 */

																										{	/* Expand/object.scm 90 */
																											obj_t BgL_arg1328z00_1697;

																											{	/* Expand/object.scm 90 */
																												obj_t
																													BgL_arg1329z00_1698;
																												obj_t
																													BgL_arg1330z00_1699;
																												if (NULLP
																													(BgL_nslotsz00_1690))
																													{	/* Expand/object.scm 90 */
																														BgL_arg1329z00_1698
																															= BNIL;
																													}
																												else
																													{	/* Expand/object.scm 90 */
																														obj_t
																															BgL_head1254z00_1703;
																														{	/* Expand/object.scm 90 */
																															obj_t
																																BgL_arg1339z00_1715;
																															BgL_arg1339z00_1715
																																=
																																CAR(CAR
																																(BgL_nslotsz00_1690));
																															{	/* Expand/object.scm 90 */
																																obj_t
																																	BgL_res2630z00_3188;
																																BgL_res2630z00_3188
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1339z00_1715,
																																	BNIL);
																																BgL_head1254z00_1703
																																	=
																																	BgL_res2630z00_3188;
																															}
																														}
																														{	/* Expand/object.scm 90 */
																															obj_t
																																BgL_g1257z00_1704;
																															BgL_g1257z00_1704
																																=
																																CDR
																																(BgL_nslotsz00_1690);
																															{
																																obj_t
																																	BgL_l1252z00_1706;
																																obj_t
																																	BgL_tail1255z00_1707;
																																BgL_l1252z00_1706
																																	=
																																	BgL_g1257z00_1704;
																																BgL_tail1255z00_1707
																																	=
																																	BgL_head1254z00_1703;
																															BgL_zc3z04anonymousza31333ze3z87_1708:
																																if (NULLP
																																	(BgL_l1252z00_1706))
																																	{	/* Expand/object.scm 90 */
																																		BgL_arg1329z00_1698
																																			=
																																			BgL_head1254z00_1703;
																																	}
																																else
																																	{	/* Expand/object.scm 90 */
																																		obj_t
																																			BgL_newtail1256z00_1710;
																																		{	/* Expand/object.scm 90 */
																																			obj_t
																																				BgL_arg1337z00_1712;
																																			{	/* Expand/object.scm 90 */
																																				obj_t
																																					BgL_pairz00_3192;
																																				BgL_pairz00_3192
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_l1252z00_1706));
																																				BgL_arg1337z00_1712
																																					=
																																					CAR
																																					(BgL_pairz00_3192);
																																			}
																																			{	/* Expand/object.scm 90 */
																																				obj_t
																																					BgL_res2632z00_3193;
																																				BgL_res2632z00_3193
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1337z00_1712,
																																					BNIL);
																																				BgL_newtail1256z00_1710
																																					=
																																					BgL_res2632z00_3193;
																																			}
																																		}
																																		SET_CDR
																																			(BgL_tail1255z00_1707,
																																			BgL_newtail1256z00_1710);
																																		{	/* Expand/object.scm 90 */
																																			obj_t
																																				BgL_arg1335z00_1711;
																																			BgL_arg1335z00_1711
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_l1252z00_1706));
																																			{
																																				obj_t
																																					BgL_tail1255z00_4101;
																																				obj_t
																																					BgL_l1252z00_4100;
																																				BgL_l1252z00_4100
																																					=
																																					BgL_arg1335z00_1711;
																																				BgL_tail1255z00_4101
																																					=
																																					BgL_newtail1256z00_1710;
																																				BgL_tail1255z00_1707
																																					=
																																					BgL_tail1255z00_4101;
																																				BgL_l1252z00_1706
																																					=
																																					BgL_l1252z00_4100;
																																				goto
																																					BgL_zc3z04anonymousza31333ze3z87_1708;
																																			}
																																		}
																																	}
																															}
																														}
																													}
																												BgL_arg1330z00_1699 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_xz00_5);
																												{	/* Expand/object.scm 92 */
																													obj_t
																														BgL_zc3z04anonymousza31341ze3z87_3825;
																													BgL_zc3z04anonymousza31341ze3z87_3825
																														=
																														MAKE_FX_PROCEDURE
																														(BGl_z62zc3z04anonymousza31341ze3ze5zzexpand_objectz00,
																														(int) (((long) 0)),
																														(int) (((long) 8)));
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 0)),
																														BgL_ez00_6);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 1)),
																														BgL_auxz00_1693);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 2)),
																														((obj_t)
																															BgL_classz00_1685));
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 3)),
																														BgL_nslotsz00_1690);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 4)),
																														BgL_xz00_5);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 5)),
																														BgL_instancez00_1694);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 6)),
																														BgL_tauxz00_1696);
																													PROCEDURE_SET
																														(BgL_zc3z04anonymousza31341ze3z87_3825,
																														(int) (((long) 7)),
																														BgL_bodyz00_1669);
																													BgL_arg1328z00_1697 =
																														BGl_withzd2lexicalzd2zzexpand_epsz00
																														(BgL_arg1329z00_1698,
																														BgL_auxz00_1693,
																														BgL_arg1330z00_1699,
																														BgL_zc3z04anonymousza31341ze3z87_3825);
																											}}
																											return
																												BGl_replacez12z12zztools_miscz00
																												(BgL_xz00_5,
																												BgL_arg1328z00_1697);
																										}
																									}
																								}
																							}
																						}
																					}
																				else
																					{	/* Expand/object.scm 83 */
																						if (PAIRP(BgL_sz00_1689))
																							{	/* Expand/object.scm 99 */
																								bool_t BgL_test2896z00_4127;

																								{	/* Expand/object.scm 99 */
																									obj_t BgL_tmpz00_4128;

																									BgL_tmpz00_4128 =
																										CAR(BgL_sz00_1689);
																									BgL_test2896z00_4127 =
																										SYMBOLP(BgL_tmpz00_4128);
																								}
																								if (BgL_test2896z00_4127)
																									{	/* Expand/object.scm 100 */
																										obj_t BgL_arg1367z00_1732;
																										obj_t BgL_arg1370z00_1733;

																										BgL_arg1367z00_1732 =
																											CDR(BgL_sz00_1689);
																										{	/* Expand/object.scm 100 */
																											obj_t BgL_arg1371z00_1734;

																											{	/* Expand/object.scm 100 */
																												obj_t
																													BgL_arg1372z00_1735;
																												obj_t
																													BgL_arg1381z00_1736;
																												BgL_arg1372z00_1735 =
																													CAR(BgL_sz00_1689);
																												BgL_arg1381z00_1736 =
																													CAR(BgL_sz00_1689);
																												{	/* Expand/object.scm 100 */
																													obj_t
																														BgL_list1382z00_1737;
																													{	/* Expand/object.scm 100 */
																														obj_t
																															BgL_arg1383z00_1738;
																														BgL_arg1383z00_1738
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1381z00_1736,
																															BNIL);
																														BgL_list1382z00_1737
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1372z00_1735,
																															BgL_arg1383z00_1738);
																													}
																													BgL_arg1371z00_1734 =
																														BgL_list1382z00_1737;
																												}
																											}
																											BgL_arg1370z00_1733 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1371z00_1734,
																												BgL_nslotsz00_1690);
																										}
																										{
																											obj_t BgL_nslotsz00_4138;
																											obj_t BgL_sz00_4137;

																											BgL_sz00_4137 =
																												BgL_arg1367z00_1732;
																											BgL_nslotsz00_4138 =
																												BgL_arg1370z00_1733;
																											BgL_nslotsz00_1690 =
																												BgL_nslotsz00_4138;
																											BgL_sz00_1689 =
																												BgL_sz00_4137;
																											goto
																												BgL_zc3z04anonymousza31326ze3z87_1691;
																										}
																									}
																								else
																									{	/* Expand/object.scm 101 */
																										bool_t BgL_test2897z00_4139;

																										{	/* Expand/object.scm 101 */
																											bool_t
																												BgL_test2898z00_4140;
																											{	/* Expand/object.scm 101 */
																												obj_t BgL_tmpz00_4141;

																												BgL_tmpz00_4141 =
																													CAR(BgL_sz00_1689);
																												BgL_test2898z00_4140 =
																													PAIRP
																													(BgL_tmpz00_4141);
																											}
																											if (BgL_test2898z00_4140)
																												{	/* Expand/object.scm 102 */
																													bool_t
																														BgL_test2899z00_4144;
																													{	/* Expand/object.scm 102 */
																														obj_t
																															BgL_tmpz00_4145;
																														BgL_tmpz00_4145 =
																															CAR(CAR
																															(BgL_sz00_1689));
																														BgL_test2899z00_4144
																															=
																															SYMBOLP
																															(BgL_tmpz00_4145);
																													}
																													if (BgL_test2899z00_4144)
																														{	/* Expand/object.scm 103 */
																															bool_t
																																BgL_test2900z00_4149;
																															{	/* Expand/object.scm 103 */
																																obj_t
																																	BgL_tmpz00_4150;
																																BgL_tmpz00_4150
																																	=
																																	CDR(CAR
																																	(BgL_sz00_1689));
																																BgL_test2900z00_4149
																																	=
																																	PAIRP
																																	(BgL_tmpz00_4150);
																															}
																															if (BgL_test2900z00_4149)
																																{	/* Expand/object.scm 104 */
																																	bool_t
																																		BgL_test2901z00_4154;
																																	{	/* Expand/object.scm 104 */
																																		obj_t
																																			BgL_tmpz00_4155;
																																		{	/* Expand/object.scm 104 */
																																			obj_t
																																				BgL_pairz00_3212;
																																			BgL_pairz00_3212
																																				=
																																				CAR
																																				(BgL_sz00_1689);
																																			BgL_tmpz00_4155
																																				=
																																				CAR(CDR
																																				(BgL_pairz00_3212));
																																		}
																																		BgL_test2901z00_4154
																																			=
																																			SYMBOLP
																																			(BgL_tmpz00_4155);
																																	}
																																	if (BgL_test2901z00_4154)
																																		{	/* Expand/object.scm 105 */
																																			obj_t
																																				BgL_tmpz00_4160;
																																			{	/* Expand/object.scm 105 */
																																				obj_t
																																					BgL_pairz00_3218;
																																				BgL_pairz00_3218
																																					=
																																					CAR
																																					(BgL_sz00_1689);
																																				BgL_tmpz00_4160
																																					=
																																					CDR
																																					(CDR
																																					(BgL_pairz00_3218));
																																			}
																																			BgL_test2897z00_4139
																																				=
																																				NULLP
																																				(BgL_tmpz00_4160);
																																		}
																																	else
																																		{	/* Expand/object.scm 104 */
																																			BgL_test2897z00_4139
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Expand/object.scm 103 */
																																	BgL_test2897z00_4139
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																													else
																														{	/* Expand/object.scm 102 */
																															BgL_test2897z00_4139
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Expand/object.scm 101 */
																													BgL_test2897z00_4139 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_test2897z00_4139)
																											{	/* Expand/object.scm 106 */
																												obj_t
																													BgL_arg1476z00_1760;
																												obj_t
																													BgL_arg1477z00_1761;
																												BgL_arg1476z00_1760 =
																													CDR(BgL_sz00_1689);
																												BgL_arg1477z00_1761 =
																													MAKE_YOUNG_PAIR(CAR
																													(BgL_sz00_1689),
																													BgL_nslotsz00_1690);
																												{
																													obj_t
																														BgL_nslotsz00_4169;
																													obj_t BgL_sz00_4168;

																													BgL_sz00_4168 =
																														BgL_arg1476z00_1760;
																													BgL_nslotsz00_4169 =
																														BgL_arg1477z00_1761;
																													BgL_nslotsz00_1690 =
																														BgL_nslotsz00_4169;
																													BgL_sz00_1689 =
																														BgL_sz00_4168;
																													goto
																														BgL_zc3z04anonymousza31326ze3z87_1691;
																												}
																											}
																										else
																											{	/* Expand/object.scm 101 */
																												return
																													BGl_errorz00zz__errorz00
																													(CAR(BgL_sz00_1689),
																													BGl_string2815z00zzexpand_objectz00,
																													BgL_xz00_5);
																											}
																									}
																							}
																						else
																							{	/* Expand/object.scm 97 */
																								return
																									BGl_errorz00zz__errorz00
																									(BgL_sz00_1689,
																									BGl_string2816z00zzexpand_objectz00,
																									BgL_xz00_5);
																							}
																					}
																			}
																		else
																			{	/* Expand/object.scm 77 */
																				return
																					BGl_errorz00zz__errorz00
																					(BgL_withzd2accesszd2_1666,
																					BGl_string2817z00zzexpand_objectz00,
																					BgL_xz00_5);
																			}
																	}
																}
															}
														}
													}
												else
													{	/* Expand/object.scm 72 */
													BgL_tagzd2112zd2_1671:
														return
															BGl_errorz00zz__errorz00
															(BGl_string2818z00zzexpand_objectz00,
															BGl_string2815z00zzexpand_objectz00, BgL_xz00_5);
													}
											}
										else
											{	/* Expand/object.scm 72 */
												goto BgL_tagzd2112zd2_1671;
											}
									}
								else
									{	/* Expand/object.scm 72 */
										goto BgL_tagzd2112zd2_1671;
									}
							}
						else
							{	/* Expand/object.scm 72 */
								goto BgL_tagzd2112zd2_1671;
							}
					}
				else
					{	/* Expand/object.scm 72 */
						goto BgL_tagzd2112zd2_1671;
					}
			}
		}

	}



/* &expand-with-access */
	obj_t BGl_z62expandzd2withzd2accessz62zzexpand_objectz00(obj_t
		BgL_envz00_3826, obj_t BgL_xz00_3827, obj_t BgL_ez00_3828)
	{
		{	/* Expand/object.scm 71 */
			return
				BGl_expandzd2withzd2accessz00zzexpand_objectz00(BgL_xz00_3827,
				BgL_ez00_3828);
		}

	}



/* &<@anonymous:1341> */
	obj_t BGl_z62zc3z04anonymousza31341ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3829)
	{
		{	/* Expand/object.scm 91 */
			{	/* Expand/object.scm 92 */
				obj_t BgL_ez00_3830;
				obj_t BgL_auxz00_3831;
				BgL_typez00_bglt BgL_classz00_3832;
				obj_t BgL_nslotsz00_3833;
				obj_t BgL_xz00_3834;
				obj_t BgL_instancez00_3835;
				obj_t BgL_tauxz00_3836;
				obj_t BgL_bodyz00_3837;

				BgL_ez00_3830 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 0))));
				BgL_auxz00_3831 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 1))));
				BgL_classz00_3832 =
					((BgL_typez00_bglt)
					PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 2))));
				BgL_nslotsz00_3833 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 3))));
				BgL_xz00_3834 = PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 4)));
				BgL_instancez00_3835 =
					PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 5)));
				BgL_tauxz00_3836 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 6))));
				BgL_bodyz00_3837 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3829, (int) (((long) 7))));
				{	/* Expand/object.scm 92 */
					obj_t BgL_ez00_3903;

					{	/* Expand/object.scm 93 */
						obj_t BgL_arg1357z00_3904;

						BgL_arg1357z00_3904 =
							BGl_withzd2accesszd2expanderz00zzexpand_objectz00(BgL_ez00_3830,
							BgL_auxz00_3831, ((obj_t) BgL_classz00_3832), BgL_nslotsz00_3833,
							BgL_xz00_3834);
						BgL_ez00_3903 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
							(BgL_arg1357z00_3904);
					}
					{	/* Expand/object.scm 95 */
						obj_t BgL_arg1344z00_3905;

						{	/* Expand/object.scm 95 */
							obj_t BgL_arg1345z00_3906;
							obj_t BgL_arg1346z00_3907;

							{	/* Expand/object.scm 95 */
								obj_t BgL_arg1347z00_3908;

								{	/* Expand/object.scm 95 */
									obj_t BgL_arg1348z00_3909;

									BgL_arg1348z00_3909 =
										MAKE_YOUNG_PAIR(BgL_instancez00_3835, BNIL);
									BgL_arg1347z00_3908 =
										MAKE_YOUNG_PAIR(BgL_tauxz00_3836, BgL_arg1348z00_3909);
								}
								BgL_arg1345z00_3906 =
									MAKE_YOUNG_PAIR(BgL_arg1347z00_3908, BNIL);
							}
							{	/* Expand/object.scm 96 */
								obj_t BgL_arg1351z00_3910;

								{	/* Expand/object.scm 96 */
									obj_t BgL_arg1352z00_3911;

									BgL_arg1352z00_3911 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_3837);
									BgL_arg1351z00_3910 =
										PROCEDURE_ENTRY(BgL_ez00_3903) (BgL_ez00_3903,
										BgL_arg1352z00_3911, BgL_ez00_3903, BEOA);
								}
								BgL_arg1346z00_3907 =
									MAKE_YOUNG_PAIR(BgL_arg1351z00_3910, BNIL);
							}
							BgL_arg1344z00_3905 =
								MAKE_YOUNG_PAIR(BgL_arg1345z00_3906, BgL_arg1346z00_3907);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BgL_arg1344z00_3905);
		}}}}

	}



/* with-access-expander */
	obj_t BGl_withzd2accesszd2expanderz00zzexpand_objectz00(obj_t BgL_oldez00_7,
		obj_t BgL_iz00_8, obj_t BgL_classz00_9, obj_t BgL_slotsz00_10,
		obj_t BgL_formz00_11)
	{
		{	/* Expand/object.scm 115 */
			{	/* Expand/object.scm 119 */
				obj_t BgL_idsz00_1780;

				if (NULLP(BgL_slotsz00_10))
					{	/* Expand/object.scm 119 */
						BgL_idsz00_1780 = BNIL;
					}
				else
					{	/* Expand/object.scm 119 */
						obj_t BgL_head1260z00_1852;

						{	/* Expand/object.scm 119 */
							obj_t BgL_arg1664z00_1864;

							{	/* Expand/object.scm 119 */
								obj_t BgL_pairz00_3244;

								BgL_pairz00_3244 = CAR(((obj_t) BgL_slotsz00_10));
								BgL_arg1664z00_1864 = CAR(BgL_pairz00_3244);
							}
							{	/* Expand/object.scm 119 */
								obj_t BgL_res2647z00_3245;

								BgL_res2647z00_3245 =
									MAKE_YOUNG_PAIR(BgL_arg1664z00_1864, BNIL);
								BgL_head1260z00_1852 = BgL_res2647z00_3245;
							}
						}
						{	/* Expand/object.scm 119 */
							obj_t BgL_g1263z00_1853;

							BgL_g1263z00_1853 = CDR(((obj_t) BgL_slotsz00_10));
							{
								obj_t BgL_l1258z00_1855;
								obj_t BgL_tail1261z00_1856;

								BgL_l1258z00_1855 = BgL_g1263z00_1853;
								BgL_tail1261z00_1856 = BgL_head1260z00_1852;
							BgL_zc3z04anonymousza31646ze3z87_1857:
								if (NULLP(BgL_l1258z00_1855))
									{	/* Expand/object.scm 119 */
										BgL_idsz00_1780 = BgL_head1260z00_1852;
									}
								else
									{	/* Expand/object.scm 119 */
										obj_t BgL_newtail1262z00_1859;

										{	/* Expand/object.scm 119 */
											obj_t BgL_arg1662z00_1861;

											{	/* Expand/object.scm 119 */
												obj_t BgL_pairz00_3249;

												BgL_pairz00_3249 = CAR(((obj_t) BgL_l1258z00_1855));
												BgL_arg1662z00_1861 = CAR(BgL_pairz00_3249);
											}
											{	/* Expand/object.scm 119 */
												obj_t BgL_res2649z00_3250;

												BgL_res2649z00_3250 =
													MAKE_YOUNG_PAIR(BgL_arg1662z00_1861, BNIL);
												BgL_newtail1262z00_1859 = BgL_res2649z00_3250;
											}
										}
										SET_CDR(BgL_tail1261z00_1856, BgL_newtail1262z00_1859);
										{	/* Expand/object.scm 119 */
											obj_t BgL_arg1652z00_1860;

											BgL_arg1652z00_1860 = CDR(((obj_t) BgL_l1258z00_1855));
											{
												obj_t BgL_tail1261z00_4234;
												obj_t BgL_l1258z00_4233;

												BgL_l1258z00_4233 = BgL_arg1652z00_1860;
												BgL_tail1261z00_4234 = BgL_newtail1262z00_1859;
												BgL_tail1261z00_1856 = BgL_tail1261z00_4234;
												BgL_l1258z00_1855 = BgL_l1258z00_4233;
												goto BgL_zc3z04anonymousza31646ze3z87_1857;
											}
										}
									}
							}
						}
					}
				{	/* Expand/object.scm 120 */
					obj_t BgL_zc3z04anonymousza31559ze3z87_3838;

					BgL_zc3z04anonymousza31559ze3z87_3838 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31559ze3ze5zzexpand_objectz00,
						(int) (((long) 2)), (int) (((long) 6)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 0)), BgL_oldez00_7);
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 1)), BgL_slotsz00_10);
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 2)), BgL_classz00_9);
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 3)), BgL_formz00_11);
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 4)), BgL_iz00_8);
					PROCEDURE_SET(BgL_zc3z04anonymousza31559ze3z87_3838,
						(int) (((long) 5)), BgL_idsz00_1780);
					return BgL_zc3z04anonymousza31559ze3z87_3838;
				}
			}
		}

	}



/* &<@anonymous:1559> */
	obj_t BGl_z62zc3z04anonymousza31559ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3839, obj_t BgL_xz00_3846, obj_t BgL_ez00_3847)
	{
		{	/* Expand/object.scm 120 */
			{	/* Expand/object.scm 120 */
				obj_t BgL_oldez00_3840;
				obj_t BgL_slotsz00_3841;
				obj_t BgL_classz00_3842;
				obj_t BgL_formz00_3843;
				obj_t BgL_iz00_3844;
				obj_t BgL_idsz00_3845;

				BgL_oldez00_3840 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 0))));
				BgL_slotsz00_3841 = PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 1)));
				BgL_classz00_3842 = PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 2)));
				BgL_formz00_3843 = PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 3)));
				BgL_iz00_3844 = PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 4)));
				BgL_idsz00_3845 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3839, (int) (((long) 5))));
				{
					obj_t BgL_varz00_3933;
					obj_t BgL_varz00_3915;
					obj_t BgL_valz00_3916;

					if (SYMBOLP(BgL_xz00_3846))
						{	/* Expand/object.scm 120 */
							BgL_varz00_3933 = BgL_xz00_3846;
							{	/* Expand/object.scm 123 */
								bool_t BgL_test2905z00_4266;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_varz00_3933, BgL_idsz00_3845)))
									{	/* Expand/object.scm 124 */
										obj_t BgL_cellz00_3934;

										BgL_cellz00_3934 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_3933,
											BGl_lexicalzd2stackzd2zzexpand_epsz00());
										if (PAIRP(BgL_cellz00_3934))
											{	/* Expand/object.scm 125 */
												BgL_test2905z00_4266 =
													(CDR(BgL_cellz00_3934) == BgL_iz00_3844);
											}
										else
											{	/* Expand/object.scm 125 */
												BgL_test2905z00_4266 = ((bool_t) 0);
											}
									}
								else
									{	/* Expand/object.scm 123 */
										BgL_test2905z00_4266 = ((bool_t) 0);
									}
								if (BgL_test2905z00_4266)
									{	/* Expand/object.scm 126 */
										obj_t BgL_slotz00_3935;

										{	/* Expand/object.scm 126 */
											obj_t BgL_arg1599z00_3936;

											{	/* Expand/object.scm 117 */
												obj_t BgL_pairz00_3937;

												BgL_pairz00_3937 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_varz00_3933, BgL_slotsz00_3841);
												BgL_arg1599z00_3936 = CAR(CDR(BgL_pairz00_3937));
											}
											BgL_slotz00_3935 =
												BGl_findzd2classzd2slotz00zzobject_toolsz00(
												((BgL_typez00_bglt) BgL_classz00_3842),
												BgL_arg1599z00_3936);
										}
										if (CBOOL(BgL_slotz00_3935))
											{	/* Expand/object.scm 129 */
												obj_t BgL_arg1592z00_3938;

												{	/* Expand/object.scm 129 */
													obj_t BgL_arg1593z00_3939;

													{	/* Expand/object.scm 117 */
														obj_t BgL_pairz00_3940;

														BgL_pairz00_3940 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_varz00_3933, BgL_slotsz00_3841);
														BgL_arg1593z00_3939 = CAR(CDR(BgL_pairz00_3940));
													}
													{	/* Expand/object.scm 129 */

														BgL_arg1592z00_3938 =
															BGl_fieldzd2accesszd2zzast_objectz00
															(BgL_iz00_3844, BgL_arg1593z00_3939, BFALSE);
													}
												}
												return
													PROCEDURE_ENTRY(BgL_oldez00_3840) (BgL_oldez00_3840,
													BgL_arg1592z00_3938, BgL_oldez00_3840, BEOA);
											}
										else
											{	/* Expand/object.scm 128 */
												obj_t BgL_arg1597z00_3941;

												{	/* Expand/object.scm 117 */
													obj_t BgL_pairz00_3942;

													BgL_pairz00_3942 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_varz00_3933, BgL_slotsz00_3841);
													BgL_arg1597z00_3941 = CAR(CDR(BgL_pairz00_3942));
												}
												return
													BGl_errorz00zz__errorz00(BgL_arg1597z00_3941,
													BGl_string2819z00zzexpand_objectz00,
													BgL_formz00_3843);
											}
									}
								else
									{	/* Expand/object.scm 123 */
										return
											PROCEDURE_ENTRY(BgL_oldez00_3840) (BgL_oldez00_3840,
											BgL_varz00_3933, BgL_oldez00_3840, BEOA);
									}
							}
						}
					else
						{	/* Expand/object.scm 120 */
							if (PAIRP(BgL_xz00_3846))
								{	/* Expand/object.scm 120 */
									obj_t BgL_cdrzd2154zd2_3943;

									BgL_cdrzd2154zd2_3943 = CDR(BgL_xz00_3846);
									if ((CAR(BgL_xz00_3846) == CNST_TABLE_REF(((long) 7))))
										{	/* Expand/object.scm 120 */
											if (PAIRP(BgL_cdrzd2154zd2_3943))
												{	/* Expand/object.scm 120 */
													obj_t BgL_carzd2157zd2_3944;
													obj_t BgL_cdrzd2158zd2_3945;

													BgL_carzd2157zd2_3944 = CAR(BgL_cdrzd2154zd2_3943);
													BgL_cdrzd2158zd2_3945 = CDR(BgL_cdrzd2154zd2_3943);
													if (SYMBOLP(BgL_carzd2157zd2_3944))
														{	/* Expand/object.scm 120 */
															if (PAIRP(BgL_cdrzd2158zd2_3945))
																{	/* Expand/object.scm 120 */
																	if (NULLP(CDR(BgL_cdrzd2158zd2_3945)))
																		{	/* Expand/object.scm 120 */
																			BgL_varz00_3915 = BgL_carzd2157zd2_3944;
																			BgL_valz00_3916 =
																				CAR(BgL_cdrzd2158zd2_3945);
																			{	/* Expand/object.scm 132 */
																				obj_t BgL_valz00_3917;

																				BgL_valz00_3917 =
																					PROCEDURE_ENTRY(BgL_ez00_3847)
																					(BgL_ez00_3847, BgL_valz00_3916,
																					BgL_ez00_3847, BEOA);
																				{	/* Expand/object.scm 133 */
																					bool_t BgL_test2915z00_4324;

																					if (CBOOL
																						(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_varz00_3915,
																								BgL_idsz00_3845)))
																						{	/* Expand/object.scm 134 */
																							obj_t BgL_cellz00_3918;

																							BgL_cellz00_3918 =
																								BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_varz00_3915,
																								BGl_lexicalzd2stackzd2zzexpand_epsz00
																								());
																							if (PAIRP(BgL_cellz00_3918))
																								{	/* Expand/object.scm 135 */
																									BgL_test2915z00_4324 =
																										(CDR(BgL_cellz00_3918) ==
																										BgL_iz00_3844);
																								}
																							else
																								{	/* Expand/object.scm 135 */
																									BgL_test2915z00_4324 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Expand/object.scm 133 */
																							BgL_test2915z00_4324 =
																								((bool_t) 0);
																						}
																					if (BgL_test2915z00_4324)
																						{	/* Expand/object.scm 136 */
																							obj_t BgL_slotz00_3919;

																							{	/* Expand/object.scm 136 */
																								obj_t BgL_arg1639z00_3920;

																								{	/* Expand/object.scm 117 */
																									obj_t BgL_pairz00_3921;

																									BgL_pairz00_3921 =
																										BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																										(BgL_varz00_3915,
																										BgL_slotsz00_3841);
																									BgL_arg1639z00_3920 =
																										CAR(CDR(BgL_pairz00_3921));
																								}
																								BgL_slotz00_3919 =
																									BGl_findzd2classzd2slotz00zzobject_toolsz00
																									(((BgL_typez00_bglt)
																										BgL_classz00_3842),
																									BgL_arg1639z00_3920);
																							}
																							if (CBOOL(BgL_slotz00_3919))
																								{	/* Expand/object.scm 140 */
																									obj_t BgL_arg1624z00_3922;

																									{	/* Expand/object.scm 140 */
																										obj_t BgL_idz00_3923;

																										{	/* Expand/object.scm 140 */
																											obj_t BgL_arg1631z00_3924;

																											{	/* Expand/object.scm 117 */
																												obj_t BgL_pairz00_3925;

																												BgL_pairz00_3925 =
																													BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_varz00_3915,
																													BgL_slotsz00_3841);
																												BgL_arg1631z00_3924 =
																													CAR(CDR
																													(BgL_pairz00_3925));
																											}
																											{	/* Expand/object.scm 140 */

																												BgL_idz00_3923 =
																													BGl_fieldzd2accesszd2zzast_objectz00
																													(BgL_iz00_3844,
																													BgL_arg1631z00_3924,
																													BFALSE);
																											}
																										}
																										{	/* Expand/object.scm 140 */
																											obj_t BgL_nxz00_3926;

																											{	/* Expand/object.scm 141 */
																												obj_t
																													BgL_arg1626z00_3927;
																												{	/* Expand/object.scm 141 */
																													obj_t
																														BgL_arg1627z00_3928;
																													BgL_arg1627z00_3928 =
																														MAKE_YOUNG_PAIR
																														(BgL_valz00_3917,
																														BNIL);
																													BgL_arg1626z00_3927 =
																														MAKE_YOUNG_PAIR
																														(BgL_idz00_3923,
																														BgL_arg1627z00_3928);
																												}
																												BgL_nxz00_3926 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 7)),
																													BgL_arg1626z00_3927);
																											}
																											{	/* Expand/object.scm 141 */

																												BgL_arg1624z00_3922 =
																													PROCEDURE_ENTRY
																													(BgL_oldez00_3840)
																													(BgL_oldez00_3840,
																													BgL_nxz00_3926,
																													BgL_oldez00_3840,
																													BEOA);
																									}}}
																									return
																										BGl_objectzd2epairifyzd2zzexpand_objectz00
																										(BgL_arg1624z00_3922,
																										BgL_xz00_3846);
																								}
																							else
																								{	/* Expand/object.scm 138 */
																									obj_t BgL_arg1634z00_3929;

																									{	/* Expand/object.scm 117 */
																										obj_t BgL_pairz00_3930;

																										BgL_pairz00_3930 =
																											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																											(BgL_varz00_3915,
																											BgL_slotsz00_3841);
																										BgL_arg1634z00_3929 =
																											CAR(CDR
																											(BgL_pairz00_3930));
																									}
																									return
																										BGl_errorz00zz__errorz00
																										(BgL_arg1634z00_3929,
																										BGl_string2819z00zzexpand_objectz00,
																										BgL_formz00_3843);
																								}
																						}
																					else
																						{	/* Expand/object.scm 133 */
																							{	/* Expand/object.scm 145 */
																								obj_t BgL_arg1640z00_3931;

																								{	/* Expand/object.scm 145 */
																									obj_t BgL_pairz00_3932;

																									BgL_pairz00_3932 =
																										CDR(
																										((obj_t) BgL_xz00_3846));
																									BgL_arg1640z00_3931 =
																										CDR(BgL_pairz00_3932);
																								}
																								{	/* Expand/object.scm 145 */
																									obj_t BgL_tmpz00_4362;

																									BgL_tmpz00_4362 =
																										((obj_t)
																										BgL_arg1640z00_3931);
																									SET_CAR(BgL_tmpz00_4362,
																										BgL_valz00_3917);
																								}
																							}
																							return
																								PROCEDURE_ENTRY
																								(BgL_oldez00_3840)
																								(BgL_oldez00_3840,
																								BgL_xz00_3846, BgL_oldez00_3840,
																								BEOA);
																						}
																				}
																			}
																		}
																	else
																		{	/* Expand/object.scm 120 */
																		BgL_tagzd2143zd2_3912:
																			return
																				PROCEDURE_ENTRY(BgL_oldez00_3840)
																				(BgL_oldez00_3840, BgL_xz00_3846,
																				BgL_ez00_3847, BEOA);
																		}
																}
															else
																{	/* Expand/object.scm 120 */
																	goto BgL_tagzd2143zd2_3912;
																}
														}
													else
														{	/* Expand/object.scm 120 */
															goto BgL_tagzd2143zd2_3912;
														}
												}
											else
												{	/* Expand/object.scm 120 */
													goto BgL_tagzd2143zd2_3912;
												}
										}
									else
										{	/* Expand/object.scm 120 */
											goto BgL_tagzd2143zd2_3912;
										}
								}
							else
								{	/* Expand/object.scm 120 */
									goto BgL_tagzd2143zd2_3912;
								}
						}
				}
			}
		}

	}



/* expand-instantiate */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2instantiatezd2zzexpand_objectz00(obj_t
		BgL_xz00_12, obj_t BgL_ez00_13)
	{
		{	/* Expand/object.scm 153 */
			{
				obj_t BgL_instantiatez00_1870;

				if (PAIRP(BgL_xz00_12))
					{	/* Expand/object.scm 154 */
						BgL_instantiatez00_1870 = CAR(BgL_xz00_12);
						{	/* Expand/object.scm 156 */
							BgL_typez00_bglt BgL_classz00_1876;

							BgL_classz00_1876 =
								BGl_typezd2ofzd2idz00zzast_identz00(BgL_instantiatez00_1870,
								BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_12));
							{	/* Expand/object.scm 158 */
								bool_t BgL_test2920z00_4380;

								{	/* Expand/object.scm 158 */
									bool_t BgL_res2658z00_3304;

									BgL_res2658z00_3304 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_classz00_1876),
										BGl_tclassz00zzobject_classz00);
									BgL_test2920z00_4380 = BgL_res2658z00_3304;
								}
								if (BgL_test2920z00_4380)
									{	/* Expand/object.scm 160 */
										bool_t BgL_test2921z00_4383;

										{
											BgL_tclassz00_bglt BgL_auxz00_4384;

											{
												obj_t BgL_auxz00_4385;

												{	/* Expand/object.scm 160 */
													BgL_objectz00_bglt BgL_tmpz00_4386;

													BgL_tmpz00_4386 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_classz00_1876));
													BgL_auxz00_4385 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4386);
												}
												BgL_auxz00_4384 =
													((BgL_tclassz00_bglt) BgL_auxz00_4385);
											}
											BgL_test2921z00_4383 =
												(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4384))->
												BgL_abstractzf3zf3);
										}
										if (BgL_test2921z00_4383)
											{	/* Expand/object.scm 160 */
												return
													BGl_errorz00zz__errorz00(BgL_instantiatez00_1870,
													BGl_string2820z00zzexpand_objectz00, BgL_xz00_12);
											}
										else
											{	/* Expand/object.scm 163 */
												obj_t BgL_arg1684z00_1879;

												BgL_arg1684z00_1879 =
													BGl_instantiatezd2ze3makez31zzexpand_objectz00
													(BgL_xz00_12, ((BgL_typez00_bglt) BgL_classz00_1876),
													BgL_ez00_13);
												return BGl_replacez12z12zztools_miscz00(BgL_xz00_12,
													BgL_arg1684z00_1879);
											}
									}
								else
									{	/* Expand/object.scm 158 */
										return
											BGl_errorz00zz__errorz00(BgL_instantiatez00_1870,
											BGl_string2821z00zzexpand_objectz00, BgL_xz00_12);
									}
							}
						}
					}
				else
					{	/* Expand/object.scm 154 */
						return
							BGl_errorz00zz__errorz00(BGl_string2822z00zzexpand_objectz00,
							BGl_string2815z00zzexpand_objectz00, BgL_xz00_12);
					}
			}
		}

	}



/* &expand-instantiate */
	obj_t BGl_z62expandzd2instantiatezb0zzexpand_objectz00(obj_t BgL_envz00_3848,
		obj_t BgL_xz00_3849, obj_t BgL_ez00_3850)
	{
		{	/* Expand/object.scm 153 */
			return
				BGl_expandzd2instantiatezd2zzexpand_objectz00(BgL_xz00_3849,
				BgL_ez00_3850);
		}

	}



/* instantiate->make */
	obj_t BGl_instantiatezd2ze3makez31zzexpand_objectz00(obj_t BgL_xz00_14,
		BgL_typez00_bglt BgL_classz00_15, obj_t BgL_ez00_16)
	{
		{	/* Expand/object.scm 170 */
			{	/* Expand/object.scm 171 */
				obj_t BgL_oz00_1881;

				BgL_oz00_1881 =
					BGl_allocatezd2exprzd2zzexpand_objectz00(((obj_t) BgL_classz00_15));
				{	/* Expand/object.scm 172 */
					obj_t BgL_arg1686z00_1882;
					obj_t BgL_arg1687z00_1883;
					obj_t BgL_arg1688z00_1884;

					BgL_arg1686z00_1882 = CAR(((obj_t) BgL_xz00_14));
					BgL_arg1687z00_1883 = CDR(((obj_t) BgL_xz00_14));
					{
						BgL_tclassz00_bglt BgL_auxz00_4406;

						{
							obj_t BgL_auxz00_4407;

							{	/* Expand/object.scm 173 */
								BgL_objectz00_bglt BgL_tmpz00_4408;

								BgL_tmpz00_4408 = ((BgL_objectz00_bglt) BgL_classz00_15);
								BgL_auxz00_4407 = BGL_OBJECT_WIDENING(BgL_tmpz00_4408);
							}
							BgL_auxz00_4406 = ((BgL_tclassz00_bglt) BgL_auxz00_4407);
						}
						BgL_arg1688z00_1884 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4406))->BgL_slotsz00);
					}
					return
						BGl_instantiatezd2fillzd2zzexpand_objectz00(BgL_arg1686z00_1882,
						BgL_arg1687z00_1883, ((obj_t) BgL_classz00_15), BgL_arg1688z00_1884,
						BgL_oz00_1881, BgL_xz00_14, BgL_ez00_16);
				}
			}
		}

	}



/* instantiate-fill */
	obj_t BGl_instantiatezd2fillzd2zzexpand_objectz00(obj_t BgL_opz00_17,
		obj_t BgL_providedz00_18, obj_t BgL_classz00_19, obj_t BgL_slotsz00_20,
		obj_t BgL_initz00_21, obj_t BgL_xz00_22, obj_t BgL_ez00_23)
	{
		{	/* Expand/object.scm 178 */
			{
				BgL_globalz00_bglt BgL_gz00_2343;
				obj_t BgL_sz00_2344;
				obj_t BgL_sz00_2367;
				obj_t BgL_slotsz00_2376;

				{	/* Expand/object.scm 312 */
					obj_t BgL_idz00_1893;

					BgL_idz00_1893 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_19)))->BgL_idz00);
					{	/* Expand/object.scm 312 */
						obj_t BgL_newz00_1894;

						BgL_newz00_1894 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 13)));
						{	/* Expand/object.scm 313 */
							obj_t BgL_tnewz00_1895;

							BgL_tnewz00_1895 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_newz00_1894,
								BgL_idz00_1893);
							{	/* Expand/object.scm 314 */
								obj_t BgL_argsz00_1896;

								BgL_slotsz00_2376 = BgL_slotsz00_20;
								{	/* Expand/object.scm 246 */
									long BgL_offsetz00_2378;
									obj_t BgL_vargsz00_2379;

									{	/* Expand/object.scm 246 */
										long BgL_arg2132z00_2423;
										long BgL_arg2133z00_2424;

										{	/* Expand/object.scm 246 */
											obj_t BgL_arg2134z00_2425;

											{
												BgL_tclassz00_bglt BgL_auxz00_4420;

												{
													obj_t BgL_auxz00_4421;

													{	/* Expand/object.scm 246 */
														BgL_objectz00_bglt BgL_tmpz00_4422;

														BgL_tmpz00_4422 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_classz00_19));
														BgL_auxz00_4421 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4422);
													}
													BgL_auxz00_4420 =
														((BgL_tclassz00_bglt) BgL_auxz00_4421);
												}
												BgL_arg2134z00_2425 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4420))->
													BgL_slotsz00);
											}
											BgL_arg2132z00_2423 =
												bgl_list_length(BgL_arg2134z00_2425);
										}
										BgL_arg2133z00_2424 = bgl_list_length(BgL_slotsz00_2376);
										BgL_offsetz00_2378 =
											(BgL_arg2132z00_2423 - BgL_arg2133z00_2424);
									}
									BgL_vargsz00_2379 =
										make_vector(bgl_list_length(BgL_slotsz00_2376), BUNSPEC);
									{
										obj_t BgL_providedz00_2381;

										BgL_providedz00_2381 = BgL_providedz00_18;
									BgL_zc3z04anonymousza32104ze3z87_2382:
										if (PAIRP(BgL_providedz00_2381))
											{	/* Expand/object.scm 251 */
												obj_t BgL_pz00_2384;

												BgL_pz00_2384 = CAR(BgL_providedz00_2381);
												{
													obj_t BgL_szd2namezd2_2385;
													obj_t BgL_valuez00_2386;

													if (PAIRP(BgL_pz00_2384))
														{	/* Expand/object.scm 252 */
															obj_t BgL_carzd2672zd2_2391;
															obj_t BgL_cdrzd2673zd2_2392;

															BgL_carzd2672zd2_2391 = CAR(BgL_pz00_2384);
															BgL_cdrzd2673zd2_2392 = CDR(BgL_pz00_2384);
															if (SYMBOLP(BgL_carzd2672zd2_2391))
																{	/* Expand/object.scm 252 */
																	if (PAIRP(BgL_cdrzd2673zd2_2392))
																		{	/* Expand/object.scm 252 */
																			if (NULLP(CDR(BgL_cdrzd2673zd2_2392)))
																				{	/* Expand/object.scm 252 */
																					BgL_szd2namezd2_2385 =
																						BgL_carzd2672zd2_2391;
																					BgL_valuez00_2386 =
																						CAR(BgL_cdrzd2673zd2_2392);
																					{	/* Expand/object.scm 255 */
																						long BgL_arg2114z00_2399;
																						obj_t BgL_arg2115z00_2400;

																						{	/* Expand/object.scm 255 */
																							obj_t BgL_arg2116z00_2401;

																							BgL_arg2116z00_2401 =
																								BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																								(BgL_slotsz00_2376,
																								BgL_szd2namezd2_2385,
																								BgL_opz00_17, BgL_pz00_2384);
																							BgL_arg2114z00_2399 =
																								((long)
																								CINT(BgL_arg2116z00_2401) -
																								BgL_offsetz00_2378);
																						}
																						BgL_arg2115z00_2400 =
																							MAKE_YOUNG_PAIR(BTRUE,
																							BGl_objectzd2epairifyzd2zzexpand_objectz00
																							(BgL_valuez00_2386,
																								BgL_pz00_2384));
																						VECTOR_SET(BgL_vargsz00_2379,
																							BgL_arg2114z00_2399,
																							BgL_arg2115z00_2400);
																				}}
																			else
																				{	/* Expand/object.scm 252 */
																				BgL_tagzd2666zd2_2388:
																					{	/* Expand/object.scm 258 */
																						obj_t BgL_arg2118z00_2403;

																						{	/* Expand/object.scm 258 */
																							obj_t BgL_list2119z00_2404;

																							BgL_list2119z00_2404 =
																								MAKE_YOUNG_PAIR(BgL_pz00_2384,
																								BNIL);
																							BgL_arg2118z00_2403 =
																								BGl_formatz00zz__r4_output_6_10_3z00
																								(BGl_string2823z00zzexpand_objectz00,
																								BgL_list2119z00_2404);
																						}
																						BGl_errorz00zz__errorz00
																							(BgL_opz00_17,
																							BgL_arg2118z00_2403, BgL_xz00_22);
																					}
																				}
																		}
																	else
																		{	/* Expand/object.scm 252 */
																			goto BgL_tagzd2666zd2_2388;
																		}
																}
															else
																{	/* Expand/object.scm 252 */
																	goto BgL_tagzd2666zd2_2388;
																}
														}
													else
														{	/* Expand/object.scm 252 */
															goto BgL_tagzd2666zd2_2388;
														}
												}
												{
													obj_t BgL_providedz00_4457;

													BgL_providedz00_4457 = CDR(BgL_providedz00_2381);
													BgL_providedz00_2381 = BgL_providedz00_4457;
													goto BgL_zc3z04anonymousza32104ze3z87_2382;
												}
											}
										else
											{	/* Expand/object.scm 250 */
												((bool_t) 0);
											}
									}
									{
										long BgL_iz00_2408;
										obj_t BgL_slotsz00_2409;

										BgL_iz00_2408 = ((long) 0);
										BgL_slotsz00_2409 = BgL_slotsz00_2376;
									BgL_zc3z04anonymousza32121ze3z87_2410:
										if (PAIRP(BgL_slotsz00_2409))
											{	/* Expand/object.scm 264 */
												obj_t BgL_sz00_2412;

												BgL_sz00_2412 = CAR(BgL_slotsz00_2409);
												{	/* Expand/object.scm 266 */
													bool_t BgL_test2928z00_4462;

													{	/* Expand/object.scm 266 */
														obj_t BgL_tmpz00_4463;

														BgL_tmpz00_4463 =
															VECTOR_REF(BgL_vargsz00_2379, BgL_iz00_2408);
														BgL_test2928z00_4462 = PAIRP(BgL_tmpz00_4463);
													}
													if (BgL_test2928z00_4462)
														{	/* Expand/object.scm 266 */
															BUNSPEC;
														}
													else
														{	/* Expand/object.scm 266 */
															if (BGl_slotzd2defaultzf3z21zzobject_slotsz00(
																	((BgL_slotz00_bglt) BgL_sz00_2412)))
																{	/* Expand/object.scm 269 */
																	obj_t BgL_arg2126z00_2416;

																	{	/* Expand/object.scm 269 */
																		obj_t BgL_tmpz00_4469;

																		BgL_sz00_2367 = BgL_sz00_2412;
																		{	/* Expand/object.scm 237 */
																			BgL_globalz00_bglt BgL_gz00_2369;
																			obj_t BgL_mz00_2370;

																			{
																				BgL_tclassz00_bglt BgL_auxz00_4470;

																				{
																					obj_t BgL_auxz00_4471;

																					{	/* Expand/object.scm 237 */
																						BgL_objectz00_bglt BgL_tmpz00_4472;

																						BgL_tmpz00_4472 =
																							((BgL_objectz00_bglt)
																							((BgL_typez00_bglt)
																								BgL_classz00_19));
																						BgL_auxz00_4471 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4472);
																					}
																					BgL_auxz00_4470 =
																						((BgL_tclassz00_bglt)
																						BgL_auxz00_4471);
																				}
																				BgL_gz00_2369 =
																					(((BgL_tclassz00_bglt)
																						COBJECT(BgL_auxz00_4470))->
																					BgL_holderz00);
																			}
																			{	/* Expand/object.scm 238 */
																				BgL_globalz00_bglt BgL_arg2101z00_2374;

																				{	/* Expand/object.scm 238 */
																					BgL_typez00_bglt BgL_oz00_3564;

																					BgL_oz00_3564 =
																						((BgL_typez00_bglt)
																						(((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_sz00_2367)))->
																							BgL_classzd2ownerzd2));
																					{
																						BgL_tclassz00_bglt BgL_auxz00_4481;

																						{
																							obj_t BgL_auxz00_4482;

																							{	/* Expand/object.scm 238 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_4483;
																								BgL_tmpz00_4483 =
																									((BgL_objectz00_bglt)
																									BgL_oz00_3564);
																								BgL_auxz00_4482 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_4483);
																							}
																							BgL_auxz00_4481 =
																								((BgL_tclassz00_bglt)
																								BgL_auxz00_4482);
																						}
																						BgL_arg2101z00_2374 =
																							(((BgL_tclassz00_bglt)
																								COBJECT(BgL_auxz00_4481))->
																							BgL_holderz00);
																					}
																				}
																				BgL_mz00_2370 =
																					(((BgL_globalz00_bglt)
																						COBJECT(BgL_arg2101z00_2374))->
																					BgL_modulez00);
																			}
																			{	/* Expand/object.scm 239 */
																				bool_t BgL_test2930z00_4489;

																				{	/* Expand/object.scm 239 */
																					obj_t BgL_arg2100z00_2373;

																					BgL_arg2100z00_2373 =
																						(((BgL_slotz00_bglt) COBJECT(
																								((BgL_slotz00_bglt)
																									BgL_sz00_2367)))->
																						BgL_defaultzd2valuezd2);
																					BgL_test2930z00_4489 =
																						BGl_inlinablezf3ze70z14zzexpand_objectz00
																						(BgL_arg2100z00_2373,
																						BgL_mz00_2370);
																				}
																				if (BgL_test2930z00_4489)
																					{	/* Expand/object.scm 239 */
																						BgL_tmpz00_4469 =
																							(((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_sz00_2367)))->
																							BgL_defaultzd2valuezd2);
																					}
																				else
																					{	/* Expand/object.scm 239 */
																						BgL_gz00_2343 = BgL_gz00_2369;
																						BgL_sz00_2344 = BgL_sz00_2367;
																						if (CBOOL
																							(BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00))
																							{	/* Expand/object.scm 224 */
																								{	/* Expand/object.scm 225 */
																									obj_t BgL_arg2075z00_2346;
																									obj_t BgL_arg2076z00_2347;
																									obj_t BgL_arg2077z00_2348;

																									BgL_arg2075z00_2346 =
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_xz00_22);
																									{	/* Expand/object.scm 227 */
																										obj_t BgL_arg2078z00_2349;

																										BgL_arg2078z00_2349 =
																											(((BgL_slotz00_bglt)
																												COBJECT((
																														(BgL_slotz00_bglt)
																														BgL_sz00_2344)))->
																											BgL_idz00);
																										{	/* Expand/object.scm 227 */
																											obj_t
																												BgL_list2079z00_2350;
																											BgL_list2079z00_2350 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2078z00_2349,
																												BNIL);
																											BgL_arg2076z00_2347 =
																												BGl_formatz00zz__r4_output_6_10_3z00
																												(BGl_string2824z00zzexpand_objectz00,
																												BgL_list2079z00_2350);
																										}
																									}
																									BgL_arg2077z00_2348 =
																										(((BgL_slotz00_bglt)
																											COBJECT((
																													(BgL_slotz00_bglt)
																													BgL_sz00_2344)))->
																										BgL_defaultzd2valuezd2);
																									BGl_userzd2warningzf2locationz20zztools_errorz00
																										(BgL_arg2075z00_2346,
																										BgL_opz00_17,
																										BgL_arg2076z00_2347,
																										BgL_arg2077z00_2348);
																								}
																								{	/* Expand/object.scm 229 */
																									obj_t BgL_arg2080z00_2351;

																									{	/* Expand/object.scm 229 */
																										obj_t BgL_res2751z00_3556;

																										{	/* Expand/object.scm 229 */
																											obj_t BgL_tmpz00_4505;

																											BgL_tmpz00_4505 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_res2751z00_3556 =
																												BGL_ENV_CURRENT_ERROR_PORT
																												(BgL_tmpz00_4505);
																										}
																										BgL_arg2080z00_2351 =
																											BgL_res2751z00_3556;
																									}
																									bgl_display_char(((unsigned
																												char) 10),
																										BgL_arg2080z00_2351);
																							}}
																						else
																							{	/* Expand/object.scm 224 */
																								BFALSE;
																							}
																						{	/* Expand/object.scm 232 */
																							obj_t BgL_arg2081z00_2352;

																							{	/* Expand/object.scm 232 */
																								obj_t BgL_arg2082z00_2353;

																								{	/* Expand/object.scm 232 */
																									obj_t BgL_arg2083z00_2354;

																									{	/* Expand/object.scm 232 */
																										obj_t BgL_arg2084z00_2355;
																										obj_t BgL_arg2085z00_2356;

																										{	/* Expand/object.scm 232 */
																											obj_t BgL_arg2086z00_2357;
																											obj_t BgL_arg2087z00_2358;

																											{	/* Expand/object.scm 232 */
																												obj_t
																													BgL_arg2088z00_2359;
																												{	/* Expand/object.scm 232 */
																													obj_t
																														BgL_arg2089z00_2360;
																													BgL_arg2089z00_2360 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 8)),
																														BNIL);
																													BgL_arg2088z00_2359 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BgL_arg2089z00_2360);
																												}
																												BgL_arg2086z00_2357 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 10)),
																													BgL_arg2088z00_2359);
																											}
																											{	/* Expand/object.scm 233 */
																												obj_t
																													BgL_arg2090z00_2361;
																												{	/* Expand/object.scm 233 */
																													obj_t
																														BgL_arg2091z00_2362;
																													{	/* Expand/object.scm 233 */
																														obj_t
																															BgL_arg2092z00_2363;
																														obj_t
																															BgL_arg2093z00_2364;
																														BgL_arg2092z00_2363
																															=
																															(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_gz00_2343)))->BgL_idz00);
																														BgL_arg2093z00_2364
																															=
																															MAKE_YOUNG_PAIR(((
																																	(BgL_globalz00_bglt)
																																	COBJECT
																																	(BgL_gz00_2343))->
																																BgL_modulez00),
																															BNIL);
																														BgL_arg2091z00_2362
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2092z00_2363,
																															BgL_arg2093z00_2364);
																													}
																													BgL_arg2090z00_2361 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 10)),
																														BgL_arg2091z00_2362);
																												}
																												BgL_arg2087z00_2358 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2090z00_2361,
																													BNIL);
																											}
																											BgL_arg2084z00_2355 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2086z00_2357,
																												BgL_arg2087z00_2358);
																										}
																										{	/* Expand/object.scm 234 */
																											long BgL_arg2095z00_2366;

																											BgL_arg2095z00_2366 =
																												(((BgL_slotz00_bglt)
																													COBJECT((
																															(BgL_slotz00_bglt)
																															BgL_sz00_2344)))->
																												BgL_indexz00);
																											BgL_arg2085z00_2356 =
																												MAKE_YOUNG_PAIR(BINT
																												(BgL_arg2095z00_2366),
																												BNIL);
																										}
																										BgL_arg2083z00_2354 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2084z00_2355,
																											BgL_arg2085z00_2356);
																									}
																									BgL_arg2082z00_2353 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												11)),
																										BgL_arg2083z00_2354);
																								}
																								BgL_arg2081z00_2352 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2082z00_2353, BNIL);
																							}
																							BgL_tmpz00_4469 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 12)),
																								BgL_arg2081z00_2352);
																		}}}}
																		BgL_arg2126z00_2416 =
																			MAKE_YOUNG_PAIR(BTRUE, BgL_tmpz00_4469);
																	}
																	VECTOR_SET(BgL_vargsz00_2379, BgL_iz00_2408,
																		BgL_arg2126z00_2416);
																}
															else
																{	/* Expand/object.scm 271 */
																	obj_t BgL_arg2128z00_2418;

																	BgL_arg2128z00_2418 =
																		MAKE_YOUNG_PAIR(BFALSE, BUNSPEC);
																	VECTOR_SET(BgL_vargsz00_2379, BgL_iz00_2408,
																		BgL_arg2128z00_2418);
																}
														}
												}
												{
													obj_t BgL_slotsz00_4540;
													long BgL_iz00_4538;

													BgL_iz00_4538 = (BgL_iz00_2408 + ((long) 1));
													BgL_slotsz00_4540 = CDR(BgL_slotsz00_2409);
													BgL_slotsz00_2409 = BgL_slotsz00_4540;
													BgL_iz00_2408 = BgL_iz00_4538;
													goto BgL_zc3z04anonymousza32121ze3z87_2410;
												}
											}
										else
											{	/* Expand/object.scm 263 */
												((bool_t) 0);
											}
									}
									BgL_argsz00_1896 =
										BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
										(BgL_vargsz00_2379);
								}
								{	/* Expand/object.scm 315 */

									{
										obj_t BgL_ll1274z00_1898;
										obj_t BgL_ll1275z00_1899;

										BgL_ll1274z00_1898 = BgL_argsz00_1896;
										BgL_ll1275z00_1899 = BgL_slotsz00_20;
									BgL_zc3z04anonymousza31689ze3z87_1900:
										if (NULLP(BgL_ll1274z00_1898))
											{	/* Expand/object.scm 317 */
												((bool_t) 1);
											}
										else
											{	/* Expand/object.scm 317 */
												{	/* Expand/object.scm 318 */
													obj_t BgL_az00_1902;
													obj_t BgL_sz00_1903;

													BgL_az00_1902 = CAR(((obj_t) BgL_ll1274z00_1898));
													BgL_sz00_1903 = CAR(((obj_t) BgL_ll1275z00_1899));
													{	/* Expand/object.scm 318 */
														bool_t BgL_test2933z00_4549;

														if (CBOOL(CAR(((obj_t) BgL_az00_1902))))
															{	/* Expand/object.scm 318 */
																BgL_test2933z00_4549 = ((bool_t) 1);
															}
														else
															{	/* Expand/object.scm 318 */
																BgL_test2933z00_4549 =
																	BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																	((BgL_slotz00_bglt) BgL_sz00_1903));
															}
														if (BgL_test2933z00_4549)
															{	/* Expand/object.scm 318 */
																BFALSE;
															}
														else
															{	/* Expand/object.scm 321 */
																obj_t BgL_arg1695z00_1906;

																{	/* Expand/object.scm 321 */
																	obj_t BgL_arg1696z00_1907;

																	BgL_arg1696z00_1907 =
																		(((BgL_slotz00_bglt) COBJECT(
																				((BgL_slotz00_bglt) BgL_sz00_1903)))->
																		BgL_idz00);
																	{	/* Expand/object.scm 321 */
																		obj_t BgL_list1697z00_1908;

																		BgL_list1697z00_1908 =
																			MAKE_YOUNG_PAIR(BgL_arg1696z00_1907,
																			BNIL);
																		BgL_arg1695z00_1906 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string2825z00zzexpand_objectz00,
																			BgL_list1697z00_1908);
																	}
																}
																BGl_errorz00zz__errorz00(BgL_opz00_17,
																	BgL_arg1695z00_1906, BgL_xz00_22);
															}
													}
												}
												{	/* Expand/object.scm 317 */
													obj_t BgL_arg1704z00_1910;
													obj_t BgL_arg1707z00_1911;

													BgL_arg1704z00_1910 =
														CDR(((obj_t) BgL_ll1274z00_1898));
													BgL_arg1707z00_1911 =
														CDR(((obj_t) BgL_ll1275z00_1899));
													{
														obj_t BgL_ll1275z00_4566;
														obj_t BgL_ll1274z00_4565;

														BgL_ll1274z00_4565 = BgL_arg1704z00_1910;
														BgL_ll1275z00_4566 = BgL_arg1707z00_1911;
														BgL_ll1275z00_1899 = BgL_ll1275z00_4566;
														BgL_ll1274z00_1898 = BgL_ll1274z00_4565;
														goto BgL_zc3z04anonymousza31689ze3z87_1900;
													}
												}
											}
									}
									{	/* Expand/object.scm 326 */
										obj_t BgL_arg1708z00_1913;

										{	/* Expand/object.scm 326 */
											obj_t BgL_arg1711z00_1914;
											obj_t BgL_arg1712z00_1915;

											{	/* Expand/object.scm 326 */
												obj_t BgL_arg1719z00_1916;

												{	/* Expand/object.scm 326 */
													obj_t BgL_arg1725z00_1917;

													BgL_arg1725z00_1917 =
														MAKE_YOUNG_PAIR(BgL_initz00_21, BNIL);
													BgL_arg1719z00_1916 =
														MAKE_YOUNG_PAIR(BgL_tnewz00_1895,
														BgL_arg1725z00_1917);
												}
												BgL_arg1711z00_1914 =
													MAKE_YOUNG_PAIR(BgL_arg1719z00_1916, BNIL);
											}
											{	/* Expand/object.scm 329 */
												obj_t BgL_arg1726z00_1918;
												obj_t BgL_arg1727z00_1919;

												{	/* Expand/object.scm 329 */
													obj_t BgL_zc3z04anonymousza31732ze3z87_3852;

													BgL_zc3z04anonymousza31732ze3z87_3852 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31732ze3ze5zzexpand_objectz00,
														(int) (((long) 2)), (int) (((long) 2)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31732ze3z87_3852,
														(int) (((long) 0)), BgL_ez00_23);
													PROCEDURE_SET(BgL_zc3z04anonymousza31732ze3z87_3852,
														(int) (((long) 1)), BgL_newz00_1894);
													{	/* Expand/object.scm 328 */
														obj_t BgL_list1729z00_1921;

														{	/* Expand/object.scm 328 */
															obj_t BgL_arg1731z00_1922;

															BgL_arg1731z00_1922 =
																MAKE_YOUNG_PAIR(BgL_argsz00_1896, BNIL);
															BgL_list1729z00_1921 =
																MAKE_YOUNG_PAIR(BgL_slotsz00_20,
																BgL_arg1731z00_1922);
														}
														BgL_arg1726z00_1918 =
															BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
															(BgL_zc3z04anonymousza31732ze3z87_3852,
															BgL_list1729z00_1921);
												}}
												{	/* Expand/object.scm 336 */
													obj_t BgL_arg1744z00_1936;
													obj_t BgL_arg1745z00_1937;

													if (CBOOL
														(BGl_findzd2classzd2constructorz00zzobject_classz00(
																((BgL_typez00_bglt) BgL_classz00_19))))
														{	/* Expand/object.scm 337 */
															BgL_globalz00_bglt BgL_gz00_1939;

															{
																BgL_tclassz00_bglt BgL_auxz00_4584;

																{
																	obj_t BgL_auxz00_4585;

																	{	/* Expand/object.scm 337 */
																		BgL_objectz00_bglt BgL_tmpz00_4586;

																		BgL_tmpz00_4586 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_classz00_19));
																		BgL_auxz00_4585 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4586);
																	}
																	BgL_auxz00_4584 =
																		((BgL_tclassz00_bglt) BgL_auxz00_4585);
																}
																BgL_gz00_1939 =
																	(((BgL_tclassz00_bglt)
																		COBJECT(BgL_auxz00_4584))->BgL_holderz00);
															}
															{	/* Expand/object.scm 337 */
																obj_t BgL_nxz00_1940;

																{	/* Expand/object.scm 338 */
																	obj_t BgL_arg1754z00_1942;
																	obj_t BgL_arg1755z00_1943;

																	{	/* Expand/object.scm 338 */
																		obj_t BgL_arg1756z00_1944;
																		obj_t BgL_arg1757z00_1945;

																		{	/* Expand/object.scm 338 */
																			obj_t BgL_arg1759z00_1946;

																			{	/* Expand/object.scm 338 */
																				obj_t BgL_arg1760z00_1947;

																				BgL_arg1760z00_1947 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							8)), BNIL);
																				BgL_arg1759z00_1946 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							14)), BgL_arg1760z00_1947);
																			}
																			BgL_arg1756z00_1944 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						10)), BgL_arg1759z00_1946);
																		}
																		{	/* Expand/object.scm 339 */
																			obj_t BgL_arg1761z00_1948;

																			{	/* Expand/object.scm 339 */
																				obj_t BgL_arg1768z00_1949;

																				{	/* Expand/object.scm 339 */
																					obj_t BgL_arg1771z00_1950;
																					obj_t BgL_arg1775z00_1951;

																					BgL_arg1771z00_1950 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_gz00_1939)))->BgL_idz00);
																					BgL_arg1775z00_1951 =
																						MAKE_YOUNG_PAIR(((
																								(BgL_globalz00_bglt)
																								COBJECT(BgL_gz00_1939))->
																							BgL_modulez00), BNIL);
																					BgL_arg1768z00_1949 =
																						MAKE_YOUNG_PAIR(BgL_arg1771z00_1950,
																						BgL_arg1775z00_1951);
																				}
																				BgL_arg1761z00_1948 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							10)), BgL_arg1768z00_1949);
																			}
																			BgL_arg1757z00_1945 =
																				MAKE_YOUNG_PAIR(BgL_arg1761z00_1948,
																				BNIL);
																		}
																		BgL_arg1754z00_1942 =
																			MAKE_YOUNG_PAIR(BgL_arg1756z00_1944,
																			BgL_arg1757z00_1945);
																	}
																	BgL_arg1755z00_1943 =
																		MAKE_YOUNG_PAIR(BgL_newz00_1894, BNIL);
																	BgL_nxz00_1940 =
																		MAKE_YOUNG_PAIR(BgL_arg1754z00_1942,
																		BgL_arg1755z00_1943);
																}
																{	/* Expand/object.scm 338 */

																	{	/* Expand/object.scm 341 */
																		obj_t BgL_arg1747z00_1941;

																		BgL_arg1747z00_1941 =
																			BGl_objectzd2epairifyzd2zzexpand_objectz00
																			(BgL_nxz00_1940, BgL_xz00_22);
																		BgL_arg1744z00_1936 =
																			PROCEDURE_ENTRY(BgL_ez00_23) (BgL_ez00_23,
																			BgL_arg1747z00_1941, BgL_ez00_23, BEOA);
														}}}}
													else
														{	/* Expand/object.scm 336 */
															BgL_arg1744z00_1936 = BFALSE;
														}
													{	/* Expand/object.scm 344 */
														obj_t BgL_arg1779z00_1953;
														obj_t BgL_arg1782z00_1954;

														{	/* Expand/object.scm 344 */
															obj_t BgL_zc3z04anonymousza31791ze3z87_3851;

															BgL_zc3z04anonymousza31791ze3z87_3851 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31791ze3ze5zzexpand_objectz00,
																(int) (((long) 2)), (int) (((long) 2)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31791ze3z87_3851,
																(int) (((long) 0)), BgL_ez00_23);
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31791ze3z87_3851,
																(int) (((long) 1)), BgL_newz00_1894);
															{	/* Expand/object.scm 343 */
																obj_t BgL_list1785z00_1956;

																{	/* Expand/object.scm 343 */
																	obj_t BgL_arg1790z00_1957;

																	BgL_arg1790z00_1957 =
																		MAKE_YOUNG_PAIR(BgL_argsz00_1896, BNIL);
																	BgL_list1785z00_1956 =
																		MAKE_YOUNG_PAIR(BgL_slotsz00_20,
																		BgL_arg1790z00_1957);
																}
																BgL_arg1779z00_1953 =
																	BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																	(BgL_zc3z04anonymousza31791ze3z87_3851,
																	BgL_list1785z00_1956);
														}}
														BgL_arg1782z00_1954 =
															MAKE_YOUNG_PAIR(BgL_newz00_1894, BNIL);
														BgL_arg1745z00_1937 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1779z00_1953, BgL_arg1782z00_1954);
													}
													BgL_arg1727z00_1919 =
														MAKE_YOUNG_PAIR(BgL_arg1744z00_1936,
														BgL_arg1745z00_1937);
												}
												BgL_arg1712z00_1915 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1726z00_1918, BgL_arg1727z00_1919);
											}
											BgL_arg1708z00_1913 =
												MAKE_YOUNG_PAIR(BgL_arg1711z00_1914,
												BgL_arg1712z00_1915);
										}
										return
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
											BgL_arg1708z00_1913);
		}}}}}}}}

	}



/* inlinable-call?~0 */
	obj_t BGl_inlinablezd2callzf3ze70zc6zzexpand_objectz00(obj_t BgL_funz00_1975,
		obj_t BgL_modulez00_1976)
	{
		{	/* Expand/object.scm 186 */
			{
				BgL_globalz00_bglt BgL_gz00_2281;
				obj_t BgL_funz00_2292;
				obj_t BgL_modulez00_2293;

				{	/* Expand/object.scm 181 */
					obj_t BgL_gz00_1978;

					{	/* Expand/object.scm 181 */
						obj_t BgL_list1832z00_1994;

						BgL_list1832z00_1994 = MAKE_YOUNG_PAIR(BgL_modulez00_1976, BNIL);
						BgL_gz00_1978 =
							BGl_findzd2globalzd2zzast_envz00(BgL_funz00_1975,
							BgL_list1832z00_1994);
					}
					{	/* Expand/object.scm 182 */
						bool_t BgL_test2936z00_4634;

						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_1978,
								BGl_globalz00zzast_varz00))
							{	/* Expand/object.scm 182 */
								BgL_valuez00_bglt BgL_arg1831z00_1993;

								BgL_arg1831z00_1993 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_1978))))->BgL_valuez00);
								{	/* Expand/object.scm 182 */
									bool_t BgL_res2661z00_3315;

									BgL_res2661z00_3315 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1831z00_1993), BGl_sfunz00zzast_varz00);
									BgL_test2936z00_4634 = BgL_res2661z00_3315;
								}
							}
						else
							{	/* Expand/object.scm 182 */
								BgL_test2936z00_4634 = ((bool_t) 0);
							}
						if (BgL_test2936z00_4634)
							{	/* Expand/object.scm 183 */
								bool_t BgL__ortest_1108z00_1982;

								if (CBOOL(
										(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt) BgL_gz00_1978))))->
															BgL_valuez00))))->BgL_sidezd2effectzd2)))
									{	/* Expand/object.scm 183 */
										BgL__ortest_1108z00_1982 = ((bool_t) 0);
									}
								else
									{	/* Expand/object.scm 183 */
										BgL__ortest_1108z00_1982 = ((bool_t) 1);
									}
								if (BgL__ortest_1108z00_1982)
									{	/* Expand/object.scm 183 */
										return BBOOL(BgL__ortest_1108z00_1982);
									}
								else
									{	/* Expand/object.scm 184 */
										obj_t BgL__ortest_1109z00_1983;

										BgL__ortest_1109z00_1983 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
													(long) 17)),
											(((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
															BgL_gz00_1978)))->BgL_pragmaz00));
										if (CBOOL(BgL__ortest_1109z00_1983))
											{	/* Expand/object.scm 184 */
												return BgL__ortest_1109z00_1983;
											}
										else
											{	/* Expand/object.scm 184 */
												if (
													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_gz00_1978))))->
																			BgL_valuez00))))->BgL_classz00) ==
														CNST_TABLE_REF(((long) 18))))
													{	/* Expand/object.scm 186 */
														obj_t BgL_arg1824z00_1985;

														BgL_gz00_2281 =
															((BgL_globalz00_bglt) BgL_gz00_1978);
														if (
															((((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_gz00_2281)))->
																					BgL_valuez00))))->BgL_bodyz00) ==
																BUNSPEC))
															{	/* Expand/object.scm 212 */
																obj_t BgL__ortest_1120z00_2286;

																{	/* Expand/object.scm 212 */
																	obj_t BgL_arg2035z00_2287;
																	obj_t BgL_arg2036z00_2288;

																	BgL_arg2035z00_2287 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_gz00_2281)))->BgL_idz00);
																	BgL_arg2036z00_2288 =
																		(((BgL_globalz00_bglt)
																			COBJECT(BgL_gz00_2281))->BgL_modulez00);
																	BgL_funz00_2292 = BgL_arg2035z00_2287;
																	BgL_modulez00_2293 = BgL_arg2036z00_2288;
																	{	/* Expand/object.scm 216 */
																		obj_t BgL_g1272z00_2295;

																		BgL_g1272z00_2295 =
																			BGl_inlinezd2definitionzd2queuez00zzread_inlinez00
																			();
																		{
																			obj_t BgL_l1270z00_2297;

																			BgL_l1270z00_2297 = BgL_g1272z00_2295;
																		BgL_zc3z04anonymousza32041ze3z87_2298:
																			if (NULLP(BgL_l1270z00_2297))
																				{	/* Expand/object.scm 221 */
																					BgL__ortest_1120z00_2286 = BFALSE;
																				}
																			else
																				{	/* Expand/object.scm 217 */
																					obj_t BgL__ortest_1273z00_2300;

																					{	/* Expand/object.scm 217 */
																						obj_t BgL_ezd2630zd2_2307;

																						BgL_ezd2630zd2_2307 =
																							CAR(((obj_t) BgL_l1270z00_2297));
																						if (PAIRP(BgL_ezd2630zd2_2307))
																							{	/* Expand/object.scm 217 */
																								obj_t BgL_cdrzd2638zd2_2309;

																								BgL_cdrzd2638zd2_2309 =
																									CDR(BgL_ezd2630zd2_2307);
																								if (
																									(CAR(BgL_ezd2630zd2_2307) ==
																										CNST_TABLE_REF(((long)
																												15))))
																									{	/* Expand/object.scm 217 */
																										if (PAIRP
																											(BgL_cdrzd2638zd2_2309))
																											{	/* Expand/object.scm 217 */
																												obj_t
																													BgL_carzd2642zd2_2313;
																												obj_t
																													BgL_cdrzd2643zd2_2314;
																												BgL_carzd2642zd2_2313 =
																													CAR
																													(BgL_cdrzd2638zd2_2309);
																												BgL_cdrzd2643zd2_2314 =
																													CDR
																													(BgL_cdrzd2638zd2_2309);
																												if (PAIRP
																													(BgL_carzd2642zd2_2313))
																													{	/* Expand/object.scm 217 */
																														obj_t
																															BgL_carzd2646zd2_2316;
																														BgL_carzd2646zd2_2316
																															=
																															CAR
																															(BgL_carzd2642zd2_2313);
																														if (PAIRP
																															(BgL_carzd2646zd2_2316))
																															{	/* Expand/object.scm 217 */
																																obj_t
																																	BgL_cdrzd2651zd2_2318;
																																BgL_cdrzd2651zd2_2318
																																	=
																																	CDR
																																	(BgL_carzd2646zd2_2316);
																																if ((CAR
																																		(BgL_carzd2646zd2_2316)
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				10))))
																																	{	/* Expand/object.scm 217 */
																																		if (PAIRP
																																			(BgL_cdrzd2651zd2_2318))
																																			{	/* Expand/object.scm 217 */
																																				obj_t
																																					BgL_cdrzd2655zd2_2322;
																																				BgL_cdrzd2655zd2_2322
																																					=
																																					CDR
																																					(BgL_cdrzd2651zd2_2318);
																																				if (PAIRP(BgL_cdrzd2655zd2_2322))
																																					{	/* Expand/object.scm 217 */
																																						if (NULLP(CDR(BgL_cdrzd2655zd2_2322)))
																																							{	/* Expand/object.scm 217 */
																																								if (NULLP(CDR(BgL_carzd2642zd2_2313)))
																																									{	/* Expand/object.scm 217 */
																																										if (PAIRP(BgL_cdrzd2643zd2_2314))
																																											{	/* Expand/object.scm 217 */
																																												if (NULLP(CDR(BgL_cdrzd2643zd2_2314)))
																																													{	/* Expand/object.scm 219 */
																																														bool_t
																																															BgL_test2956z00_4716;
																																														if ((CAR(BgL_cdrzd2651zd2_2318) == BgL_funz00_2292))
																																															{	/* Expand/object.scm 219 */
																																																BgL_test2956z00_4716
																																																	=
																																																	(CAR
																																																	(BgL_cdrzd2655zd2_2322)
																																																	==
																																																	BgL_modulez00_2293);
																																															}
																																														else
																																															{	/* Expand/object.scm 219 */
																																																BgL_test2956z00_4716
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														if (BgL_test2956z00_4716)
																																															{	/* Expand/object.scm 219 */
																																																BgL__ortest_1273z00_2300
																																																	=
																																																	CAR
																																																	(BgL_cdrzd2643zd2_2314);
																																															}
																																														else
																																															{	/* Expand/object.scm 219 */
																																																BgL__ortest_1273z00_2300
																																																	=
																																																	BFALSE;
																																															}
																																													}
																																												else
																																													{	/* Expand/object.scm 217 */
																																														BgL__ortest_1273z00_2300
																																															=
																																															BFALSE;
																																													}
																																											}
																																										else
																																											{	/* Expand/object.scm 217 */
																																												BgL__ortest_1273z00_2300
																																													=
																																													BFALSE;
																																											}
																																									}
																																								else
																																									{	/* Expand/object.scm 217 */
																																										BgL__ortest_1273z00_2300
																																											=
																																											BFALSE;
																																									}
																																							}
																																						else
																																							{	/* Expand/object.scm 217 */
																																								BgL__ortest_1273z00_2300
																																									=
																																									BFALSE;
																																							}
																																					}
																																				else
																																					{	/* Expand/object.scm 217 */
																																						BgL__ortest_1273z00_2300
																																							=
																																							BFALSE;
																																					}
																																			}
																																		else
																																			{	/* Expand/object.scm 217 */
																																				BgL__ortest_1273z00_2300
																																					=
																																					BFALSE;
																																			}
																																	}
																																else
																																	{	/* Expand/object.scm 217 */
																																		BgL__ortest_1273z00_2300
																																			= BFALSE;
																																	}
																															}
																														else
																															{	/* Expand/object.scm 217 */
																																BgL__ortest_1273z00_2300
																																	= BFALSE;
																															}
																													}
																												else
																													{	/* Expand/object.scm 217 */
																														BgL__ortest_1273z00_2300
																															= BFALSE;
																													}
																											}
																										else
																											{	/* Expand/object.scm 217 */
																												BgL__ortest_1273z00_2300
																													= BFALSE;
																											}
																									}
																								else
																									{	/* Expand/object.scm 217 */
																										BgL__ortest_1273z00_2300 =
																											BFALSE;
																									}
																							}
																						else
																							{	/* Expand/object.scm 217 */
																								BgL__ortest_1273z00_2300 =
																									BFALSE;
																							}
																					}
																					if (CBOOL(BgL__ortest_1273z00_2300))
																						{	/* Expand/object.scm 221 */
																							BgL__ortest_1120z00_2286 =
																								BgL__ortest_1273z00_2300;
																						}
																					else
																						{
																							obj_t BgL_l1270z00_4725;

																							BgL_l1270z00_4725 =
																								CDR(
																								((obj_t) BgL_l1270z00_2297));
																							BgL_l1270z00_2297 =
																								BgL_l1270z00_4725;
																							goto
																								BgL_zc3z04anonymousza32041ze3z87_2298;
																						}
																				}
																		}
																	}
																}
																if (CBOOL(BgL__ortest_1120z00_2286))
																	{	/* Expand/object.scm 212 */
																		BgL_arg1824z00_1985 =
																			BgL__ortest_1120z00_2286;
																	}
																else
																	{	/* Expand/object.scm 212 */
																		BgL_arg1824z00_1985 =
																			CNST_TABLE_REF(((long) 16));
															}}
														else
															{	/* Expand/object.scm 211 */
																BgL_arg1824z00_1985 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_gz00_2281)))->
																					BgL_valuez00))))->BgL_bodyz00);
															}
														return
															BBOOL(BGl_inlinablezf3ze70z14zzexpand_objectz00
															(BgL_arg1824z00_1985, BgL_modulez00_1976));
													}
												else
													{	/* Expand/object.scm 185 */
														return BFALSE;
													}
											}
									}
							}
						else
							{	/* Expand/object.scm 182 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* inlinable?~0 */
	bool_t BGl_inlinablezf3ze70z14zzexpand_objectz00(obj_t BgL_nz00_1995,
		obj_t BgL_modulez00_1996)
	{
		{	/* Expand/object.scm 208 */
		BGl_inlinablezf3ze70z14zzexpand_objectz00:
			{	/* Expand/object.scm 189 */
				bool_t BgL__ortest_1111z00_1998;

				BgL__ortest_1111z00_1998 =
					BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_nz00_1995);
				if (BgL__ortest_1111z00_1998)
					{	/* Expand/object.scm 189 */
						return BgL__ortest_1111z00_1998;
					}
				else
					{	/* Expand/object.scm 190 */
						bool_t BgL__ortest_1112z00_1999;

						BgL__ortest_1112z00_1999 = STRINGP(BgL_nz00_1995);
						if (BgL__ortest_1112z00_1999)
							{	/* Expand/object.scm 190 */
								return BgL__ortest_1112z00_1999;
							}
						else
							{	/* Expand/object.scm 191 */
								bool_t BgL__ortest_1113z00_2000;

								BgL__ortest_1113z00_2000 = CHARP(BgL_nz00_1995);
								if (BgL__ortest_1113z00_2000)
									{	/* Expand/object.scm 191 */
										return BgL__ortest_1113z00_2000;
									}
								else
									{	/* Expand/object.scm 192 */
										bool_t BgL__ortest_1114z00_2001;

										BgL__ortest_1114z00_2001 = BOOLEANP(BgL_nz00_1995);
										if (BgL__ortest_1114z00_2001)
											{	/* Expand/object.scm 192 */
												return BgL__ortest_1114z00_2001;
											}
										else
											{	/* Expand/object.scm 193 */
												bool_t BgL__ortest_1115z00_2002;

												BgL__ortest_1115z00_2002 = (BgL_nz00_1995 == BUNSPEC);
												if (BgL__ortest_1115z00_2002)
													{	/* Expand/object.scm 193 */
														return BgL__ortest_1115z00_2002;
													}
												else
													{	/* Expand/object.scm 194 */
														bool_t BgL__ortest_1116z00_2003;

														BgL__ortest_1116z00_2003 =
															BGl_isazf3zf3zz__objectz00(BgL_nz00_1995,
															BGl_literalz00zzast_nodez00);
														if (BgL__ortest_1116z00_2003)
															{	/* Expand/object.scm 194 */
																return BgL__ortest_1116z00_2003;
															}
														else
															{
																obj_t BgL_funz00_2012;
																obj_t BgL_argsz00_2013;
																obj_t BgL_funz00_2015;
																obj_t BgL_modz00_2016;
																obj_t BgL_argsz00_2017;

																if (PAIRP(BgL_nz00_1995))
																	{	/* Expand/object.scm 195 */
																		if (
																			(CAR(BgL_nz00_1995) ==
																				CNST_TABLE_REF(((long) 19))))
																			{	/* Expand/object.scm 195 */
																				return ((bool_t) 1);
																			}
																		else
																			{	/* Expand/object.scm 195 */
																				if (
																					(CAR(BgL_nz00_1995) ==
																						CNST_TABLE_REF(((long) 20))))
																					{
																						obj_t BgL_nz00_4760;

																						BgL_nz00_4760 = CDR(BgL_nz00_1995);
																						BgL_nz00_1995 = BgL_nz00_4760;
																						goto
																							BGl_inlinablezf3ze70z14zzexpand_objectz00;
																					}
																				else
																					{	/* Expand/object.scm 195 */
																						obj_t BgL_carzd2208zd2_2027;
																						obj_t BgL_cdrzd2209zd2_2028;

																						BgL_carzd2208zd2_2027 =
																							CAR(BgL_nz00_1995);
																						BgL_cdrzd2209zd2_2028 =
																							CDR(BgL_nz00_1995);
																						{

																							if (
																								(BgL_carzd2208zd2_2027 ==
																									CNST_TABLE_REF(((long) 23))))
																								{	/* Expand/object.scm 195 */
																								BgL_kapzd2210zd2_2029:
																									if (PAIRP
																										(BgL_cdrzd2209zd2_2028))
																										{	/* Expand/object.scm 195 */
																											obj_t
																												BgL_cdrzd2214zd2_2132;
																											BgL_cdrzd2214zd2_2132 =
																												CDR
																												(BgL_cdrzd2209zd2_2028);
																											if (PAIRP
																												(BgL_cdrzd2214zd2_2132))
																												{	/* Expand/object.scm 195 */
																													if (NULLP(CDR
																															(BgL_cdrzd2214zd2_2132)))
																														{	/* Expand/object.scm 195 */
																															obj_t
																																BgL_arg1926z00_2136;
																															obj_t
																																BgL_arg1927z00_2137;
																															BgL_arg1926z00_2136
																																=
																																CAR
																																(BgL_cdrzd2209zd2_2028);
																															BgL_arg1927z00_2137
																																=
																																CAR
																																(BgL_cdrzd2214zd2_2132);
																															if (BGl_inlinablezf3ze70z14zzexpand_objectz00(BgL_arg1926z00_2136, BgL_modulez00_1996))
																																{
																																	obj_t
																																		BgL_nz00_4779;
																																	BgL_nz00_4779
																																		=
																																		BgL_arg1927z00_2137;
																																	BgL_nz00_1995
																																		=
																																		BgL_nz00_4779;
																																	goto
																																		BGl_inlinablezf3ze70z14zzexpand_objectz00;
																																}
																															else
																																{	/* Expand/object.scm 199 */
																																	return (
																																		(bool_t) 0);
																																}
																														}
																													else
																														{	/* Expand/object.scm 195 */
																															if (
																																(CAR(
																																		((obj_t)
																																			BgL_nz00_1995))
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			21))))
																																{	/* Expand/object.scm 195 */
																																	return (
																																		(bool_t) 1);
																																}
																															else
																																{	/* Expand/object.scm 195 */
																																	obj_t
																																		BgL_carzd2233zd2_2140;
																																	BgL_carzd2233zd2_2140
																																		=
																																		CAR(((obj_t)
																																			BgL_nz00_1995));
																																	if (SYMBOLP
																																		(BgL_carzd2233zd2_2140))
																																		{	/* Expand/object.scm 195 */
																																			obj_t
																																				BgL_arg1931z00_2142;
																																			BgL_arg1931z00_2142
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_nz00_1995));
																																			BgL_funz00_2012
																																				=
																																				BgL_carzd2233zd2_2140;
																																			BgL_argsz00_2013
																																				=
																																				BgL_arg1931z00_2142;
																																		BgL_tagzd2179zd2_2014:
																																			{	/* Expand/object.scm 203 */
																																				obj_t
																																					BgL__andtest_1118z00_2261;
																																				BgL__andtest_1118z00_2261
																																					=
																																					BGl_inlinablezd2callzf3ze70zc6zzexpand_objectz00
																																					(BgL_funz00_2012,
																																					BgL_modulez00_1996);
																																				if (CBOOL(BgL__andtest_1118z00_2261))
																																					{
																																						obj_t
																																							BgL_l1264z00_2263;
																																						BgL_l1264z00_2263
																																							=
																																							BgL_argsz00_2013;
																																					BgL_zc3z04anonymousza32023ze3z87_2264:
																																						if (NULLP(BgL_l1264z00_2263))
																																							{	/* Expand/object.scm 204 */
																																								return
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Expand/object.scm 204 */
																																								bool_t
																																									BgL_test2978z00_4796;
																																								{	/* Expand/object.scm 204 */
																																									obj_t
																																										BgL_az00_2269;
																																									BgL_az00_2269
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_l1264z00_2263));
																																									BgL_test2978z00_4796
																																										=
																																										BGl_inlinablezf3ze70z14zzexpand_objectz00
																																										(BgL_az00_2269,
																																										BgL_modulez00_1996);
																																								}
																																								if (BgL_test2978z00_4796)
																																									{	/* Expand/object.scm 204 */
																																										obj_t
																																											BgL_arg2026z00_2268;
																																										BgL_arg2026z00_2268
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_l1264z00_2263));
																																										{
																																											obj_t
																																												BgL_l1264z00_4802;
																																											BgL_l1264z00_4802
																																												=
																																												BgL_arg2026z00_2268;
																																											BgL_l1264z00_2263
																																												=
																																												BgL_l1264z00_4802;
																																											goto
																																												BgL_zc3z04anonymousza32023ze3z87_2264;
																																										}
																																									}
																																								else
																																									{	/* Expand/object.scm 204 */
																																										return
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																					}
																																				else
																																					{	/* Expand/object.scm 203 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		}
																																	else
																																		{	/* Expand/object.scm 195 */
																																			if (PAIRP
																																				(BgL_carzd2233zd2_2140))
																																				{	/* Expand/object.scm 195 */
																																					obj_t
																																						BgL_cdrzd2250zd2_2145;
																																					BgL_cdrzd2250zd2_2145
																																						=
																																						CDR
																																						(BgL_carzd2233zd2_2140);
																																					if (
																																						(CAR
																																							(BgL_carzd2233zd2_2140)
																																							==
																																							CNST_TABLE_REF
																																							(((long) 10))))
																																						{	/* Expand/object.scm 195 */
																																							if (PAIRP(BgL_cdrzd2250zd2_2145))
																																								{	/* Expand/object.scm 195 */
																																									obj_t
																																										BgL_carzd2253zd2_2149;
																																									obj_t
																																										BgL_cdrzd2254zd2_2150;
																																									BgL_carzd2253zd2_2149
																																										=
																																										CAR
																																										(BgL_cdrzd2250zd2_2145);
																																									BgL_cdrzd2254zd2_2150
																																										=
																																										CDR
																																										(BgL_cdrzd2250zd2_2145);
																																									if (SYMBOLP(BgL_carzd2253zd2_2149))
																																										{	/* Expand/object.scm 195 */
																																											if (PAIRP(BgL_cdrzd2254zd2_2150))
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_carzd2259zd2_2153;
																																													BgL_carzd2259zd2_2153
																																														=
																																														CAR
																																														(BgL_cdrzd2254zd2_2150);
																																													if (SYMBOLP(BgL_carzd2259zd2_2153))
																																														{	/* Expand/object.scm 195 */
																																															if (NULLP(CDR(BgL_cdrzd2254zd2_2150)))
																																																{	/* Expand/object.scm 195 */
																																																	obj_t
																																																		BgL_arg1941z00_2157;
																																																	BgL_arg1941z00_2157
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_nz00_1995));
																																																	BgL_funz00_2015
																																																		=
																																																		BgL_carzd2253zd2_2149;
																																																	BgL_modz00_2016
																																																		=
																																																		BgL_carzd2259zd2_2153;
																																																	BgL_argsz00_2017
																																																		=
																																																		BgL_arg1941z00_2157;
																																																BgL_tagzd2180zd2_2018:
																																																	{	/* Expand/object.scm 206 */
																																																		obj_t
																																																			BgL__andtest_1119z00_2271;
																																																		BgL__andtest_1119z00_2271
																																																			=
																																																			BGl_inlinablezd2callzf3ze70zc6zzexpand_objectz00
																																																			(BgL_funz00_2015,
																																																			BgL_modz00_2016);
																																																		if (CBOOL(BgL__andtest_1119z00_2271))
																																																			{
																																																				obj_t
																																																					BgL_l1267z00_2273;
																																																				BgL_l1267z00_2273
																																																					=
																																																					BgL_argsz00_2017;
																																																			BgL_zc3z04anonymousza32027ze3z87_2274:
																																																				if (NULLP(BgL_l1267z00_2273))
																																																					{	/* Expand/object.scm 207 */
																																																						return
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				else
																																																					{	/* Expand/object.scm 207 */
																																																						bool_t
																																																							BgL_test2988z00_4831;
																																																						{	/* Expand/object.scm 207 */
																																																							obj_t
																																																								BgL_az00_2279;
																																																							BgL_az00_2279
																																																								=
																																																								CAR
																																																								(
																																																								((obj_t) BgL_l1267z00_2273));
																																																							BgL_test2988z00_4831
																																																								=
																																																								BGl_inlinablezf3ze70z14zzexpand_objectz00
																																																								(BgL_az00_2279,
																																																								BgL_modulez00_1996);
																																																						}
																																																						if (BgL_test2988z00_4831)
																																																							{	/* Expand/object.scm 207 */
																																																								obj_t
																																																									BgL_arg2029z00_2278;
																																																								BgL_arg2029z00_2278
																																																									=
																																																									CDR
																																																									(
																																																									((obj_t) BgL_l1267z00_2273));
																																																								{
																																																									obj_t
																																																										BgL_l1267z00_4837;
																																																									BgL_l1267z00_4837
																																																										=
																																																										BgL_arg2029z00_2278;
																																																									BgL_l1267z00_2273
																																																										=
																																																										BgL_l1267z00_4837;
																																																									goto
																																																										BgL_zc3z04anonymousza32027ze3z87_2274;
																																																								}
																																																							}
																																																						else
																																																							{	/* Expand/object.scm 207 */
																																																								return
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																					}
																																																			}
																																																		else
																																																			{	/* Expand/object.scm 206 */
																																																				return
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																														}
																												}
																											else
																												{	/* Expand/object.scm 195 */
																													if (
																														(CAR(
																																((obj_t)
																																	BgL_nz00_1995))
																															==
																															CNST_TABLE_REF((
																																	(long) 21))))
																														{	/* Expand/object.scm 195 */
																															return ((bool_t)
																																1);
																														}
																													else
																														{	/* Expand/object.scm 195 */
																															obj_t
																																BgL_cdrzd2274zd2_2164;
																															BgL_cdrzd2274zd2_2164
																																=
																																CDR(((obj_t)
																																	BgL_nz00_1995));
																															if ((CAR(((obj_t)
																																			BgL_nz00_1995))
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			22))))
																																{	/* Expand/object.scm 195 */
																																	bool_t
																																		BgL_test2991z00_4850;
																																	{	/* Expand/object.scm 195 */
																																		obj_t
																																			BgL_tmpz00_4851;
																																		BgL_tmpz00_4851
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2274zd2_2164));
																																		BgL_test2991z00_4850
																																			=
																																			SYMBOLP
																																			(BgL_tmpz00_4851);
																																	}
																																	if (BgL_test2991z00_4850)
																																		{	/* Expand/object.scm 195 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd2274zd2_2164))))
																																				{	/* Expand/object.scm 195 */
																																					return
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					obj_t
																																						BgL_carzd2282zd2_2171;
																																					BgL_carzd2282zd2_2171
																																						=
																																						CAR(
																																						((obj_t) BgL_nz00_1995));
																																					if (SYMBOLP(BgL_carzd2282zd2_2171))
																																						{
																																							obj_t
																																								BgL_argsz00_4864;
																																							obj_t
																																								BgL_funz00_4863;
																																							BgL_funz00_4863
																																								=
																																								BgL_carzd2282zd2_2171;
																																							BgL_argsz00_4864
																																								=
																																								BgL_cdrzd2274zd2_2164;
																																							BgL_argsz00_2013
																																								=
																																								BgL_argsz00_4864;
																																							BgL_funz00_2012
																																								=
																																								BgL_funz00_4863;
																																							goto
																																								BgL_tagzd2179zd2_2014;
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							if (PAIRP(BgL_carzd2282zd2_2171))
																																								{	/* Expand/object.scm 195 */
																																									obj_t
																																										BgL_cdrzd2299zd2_2176;
																																									BgL_cdrzd2299zd2_2176
																																										=
																																										CDR
																																										(BgL_carzd2282zd2_2171);
																																									if ((CAR(BgL_carzd2282zd2_2171) == CNST_TABLE_REF(((long) 10))))
																																										{	/* Expand/object.scm 195 */
																																											if (PAIRP(BgL_cdrzd2299zd2_2176))
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_carzd2302zd2_2180;
																																													obj_t
																																														BgL_cdrzd2303zd2_2181;
																																													BgL_carzd2302zd2_2180
																																														=
																																														CAR
																																														(BgL_cdrzd2299zd2_2176);
																																													BgL_cdrzd2303zd2_2181
																																														=
																																														CDR
																																														(BgL_cdrzd2299zd2_2176);
																																													if (SYMBOLP(BgL_carzd2302zd2_2180))
																																														{	/* Expand/object.scm 195 */
																																															if (PAIRP(BgL_cdrzd2303zd2_2181))
																																																{	/* Expand/object.scm 195 */
																																																	obj_t
																																																		BgL_carzd2308zd2_2184;
																																																	BgL_carzd2308zd2_2184
																																																		=
																																																		CAR
																																																		(BgL_cdrzd2303zd2_2181);
																																																	if (SYMBOLP(BgL_carzd2308zd2_2184))
																																																		{	/* Expand/object.scm 195 */
																																																			if (NULLP(CDR(BgL_cdrzd2303zd2_2181)))
																																																				{	/* Expand/object.scm 195 */
																																																					obj_t
																																																						BgL_arg1966z00_2188;
																																																					BgL_arg1966z00_2188
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_nz00_1995));
																																																					{
																																																						obj_t
																																																							BgL_argsz00_4890;
																																																						obj_t
																																																							BgL_modz00_4889;
																																																						obj_t
																																																							BgL_funz00_4888;
																																																						BgL_funz00_4888
																																																							=
																																																							BgL_carzd2302zd2_2180;
																																																						BgL_modz00_4889
																																																							=
																																																							BgL_carzd2308zd2_2184;
																																																						BgL_argsz00_4890
																																																							=
																																																							BgL_arg1966z00_2188;
																																																						BgL_argsz00_2017
																																																							=
																																																							BgL_argsz00_4890;
																																																						BgL_modz00_2016
																																																							=
																																																							BgL_modz00_4889;
																																																						BgL_funz00_2015
																																																							=
																																																							BgL_funz00_4888;
																																																						goto
																																																							BgL_tagzd2180zd2_2018;
																																																					}
																																																				}
																																																			else
																																																				{	/* Expand/object.scm 195 */
																																																					return
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																				}
																																		}
																																	else
																																		{	/* Expand/object.scm 195 */
																																			obj_t
																																				BgL_carzd2319zd2_2192;
																																			BgL_carzd2319zd2_2192
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_nz00_1995));
																																			if (SYMBOLP(BgL_carzd2319zd2_2192))
																																				{
																																					obj_t
																																						BgL_argsz00_4896;
																																					obj_t
																																						BgL_funz00_4895;
																																					BgL_funz00_4895
																																						=
																																						BgL_carzd2319zd2_2192;
																																					BgL_argsz00_4896
																																						=
																																						BgL_cdrzd2274zd2_2164;
																																					BgL_argsz00_2013
																																						=
																																						BgL_argsz00_4896;
																																					BgL_funz00_2012
																																						=
																																						BgL_funz00_4895;
																																					goto
																																						BgL_tagzd2179zd2_2014;
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					if (PAIRP(BgL_carzd2319zd2_2192))
																																						{	/* Expand/object.scm 195 */
																																							obj_t
																																								BgL_cdrzd2336zd2_2197;
																																							BgL_cdrzd2336zd2_2197
																																								=
																																								CDR
																																								(BgL_carzd2319zd2_2192);
																																							if ((CAR(BgL_carzd2319zd2_2192) == CNST_TABLE_REF(((long) 10))))
																																								{	/* Expand/object.scm 195 */
																																									if (PAIRP(BgL_cdrzd2336zd2_2197))
																																										{	/* Expand/object.scm 195 */
																																											obj_t
																																												BgL_carzd2339zd2_2201;
																																											obj_t
																																												BgL_cdrzd2340zd2_2202;
																																											BgL_carzd2339zd2_2201
																																												=
																																												CAR
																																												(BgL_cdrzd2336zd2_2197);
																																											BgL_cdrzd2340zd2_2202
																																												=
																																												CDR
																																												(BgL_cdrzd2336zd2_2197);
																																											if (SYMBOLP(BgL_carzd2339zd2_2201))
																																												{	/* Expand/object.scm 195 */
																																													if (PAIRP(BgL_cdrzd2340zd2_2202))
																																														{	/* Expand/object.scm 195 */
																																															obj_t
																																																BgL_carzd2345zd2_2205;
																																															BgL_carzd2345zd2_2205
																																																=
																																																CAR
																																																(BgL_cdrzd2340zd2_2202);
																																															if (SYMBOLP(BgL_carzd2345zd2_2205))
																																																{	/* Expand/object.scm 195 */
																																																	if (NULLP(CDR(BgL_cdrzd2340zd2_2202)))
																																																		{	/* Expand/object.scm 195 */
																																																			obj_t
																																																				BgL_arg1981z00_2209;
																																																			BgL_arg1981z00_2209
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_nz00_1995));
																																																			{
																																																				obj_t
																																																					BgL_argsz00_4922;
																																																				obj_t
																																																					BgL_modz00_4921;
																																																				obj_t
																																																					BgL_funz00_4920;
																																																				BgL_funz00_4920
																																																					=
																																																					BgL_carzd2339zd2_2201;
																																																				BgL_modz00_4921
																																																					=
																																																					BgL_carzd2345zd2_2205;
																																																				BgL_argsz00_4922
																																																					=
																																																					BgL_arg1981z00_2209;
																																																				BgL_argsz00_2017
																																																					=
																																																					BgL_argsz00_4922;
																																																				BgL_modz00_2016
																																																					=
																																																					BgL_modz00_4921;
																																																				BgL_funz00_2015
																																																					=
																																																					BgL_funz00_4920;
																																																				goto
																																																					BgL_tagzd2180zd2_2018;
																																																			}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Expand/object.scm 195 */
																																	obj_t
																																		BgL_carzd2356zd2_2213;
																																	BgL_carzd2356zd2_2213
																																		=
																																		CAR(((obj_t)
																																			BgL_nz00_1995));
																																	if (SYMBOLP
																																		(BgL_carzd2356zd2_2213))
																																		{
																																			obj_t
																																				BgL_argsz00_4928;
																																			obj_t
																																				BgL_funz00_4927;
																																			BgL_funz00_4927
																																				=
																																				BgL_carzd2356zd2_2213;
																																			BgL_argsz00_4928
																																				=
																																				BgL_cdrzd2274zd2_2164;
																																			BgL_argsz00_2013
																																				=
																																				BgL_argsz00_4928;
																																			BgL_funz00_2012
																																				=
																																				BgL_funz00_4927;
																																			goto
																																				BgL_tagzd2179zd2_2014;
																																		}
																																	else
																																		{	/* Expand/object.scm 195 */
																																			if (PAIRP
																																				(BgL_carzd2356zd2_2213))
																																				{	/* Expand/object.scm 195 */
																																					obj_t
																																						BgL_cdrzd2373zd2_2218;
																																					BgL_cdrzd2373zd2_2218
																																						=
																																						CDR
																																						(BgL_carzd2356zd2_2213);
																																					if (
																																						(CAR
																																							(BgL_carzd2356zd2_2213)
																																							==
																																							CNST_TABLE_REF
																																							(((long) 10))))
																																						{	/* Expand/object.scm 195 */
																																							if (PAIRP(BgL_cdrzd2373zd2_2218))
																																								{	/* Expand/object.scm 195 */
																																									obj_t
																																										BgL_carzd2376zd2_2222;
																																									obj_t
																																										BgL_cdrzd2377zd2_2223;
																																									BgL_carzd2376zd2_2222
																																										=
																																										CAR
																																										(BgL_cdrzd2373zd2_2218);
																																									BgL_cdrzd2377zd2_2223
																																										=
																																										CDR
																																										(BgL_cdrzd2373zd2_2218);
																																									if (SYMBOLP(BgL_carzd2376zd2_2222))
																																										{	/* Expand/object.scm 195 */
																																											if (PAIRP(BgL_cdrzd2377zd2_2223))
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_carzd2382zd2_2226;
																																													BgL_carzd2382zd2_2226
																																														=
																																														CAR
																																														(BgL_cdrzd2377zd2_2223);
																																													if (SYMBOLP(BgL_carzd2382zd2_2226))
																																														{	/* Expand/object.scm 195 */
																																															if (NULLP(CDR(BgL_cdrzd2377zd2_2223)))
																																																{	/* Expand/object.scm 195 */
																																																	obj_t
																																																		BgL_arg1997z00_2230;
																																																	BgL_arg1997z00_2230
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_nz00_1995));
																																																	{
																																																		obj_t
																																																			BgL_argsz00_4954;
																																																		obj_t
																																																			BgL_modz00_4953;
																																																		obj_t
																																																			BgL_funz00_4952;
																																																		BgL_funz00_4952
																																																			=
																																																			BgL_carzd2376zd2_2222;
																																																		BgL_modz00_4953
																																																			=
																																																			BgL_carzd2382zd2_2226;
																																																		BgL_argsz00_4954
																																																			=
																																																			BgL_arg1997z00_2230;
																																																		BgL_argsz00_2017
																																																			=
																																																			BgL_argsz00_4954;
																																																		BgL_modz00_2016
																																																			=
																																																			BgL_modz00_4953;
																																																		BgL_funz00_2015
																																																			=
																																																			BgL_funz00_4952;
																																																		goto
																																																			BgL_tagzd2180zd2_2018;
																																																	}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																														}
																												}
																										}
																									else
																										{	/* Expand/object.scm 195 */
																											if (
																												(CAR(
																														((obj_t)
																															BgL_nz00_1995)) ==
																													CNST_TABLE_REF(((long)
																															21))))
																												{	/* Expand/object.scm 195 */
																													return ((bool_t) 1);
																												}
																											else
																												{	/* Expand/object.scm 195 */
																													obj_t
																														BgL_carzd2401zd2_2237;
																													BgL_carzd2401zd2_2237
																														=
																														CAR(((obj_t)
																															BgL_nz00_1995));
																													if (SYMBOLP
																														(BgL_carzd2401zd2_2237))
																														{	/* Expand/object.scm 195 */
																															obj_t
																																BgL_arg2005z00_2239;
																															BgL_arg2005z00_2239
																																=
																																CDR(((obj_t)
																																	BgL_nz00_1995));
																															{
																																obj_t
																																	BgL_argsz00_4967;
																																obj_t
																																	BgL_funz00_4966;
																																BgL_funz00_4966
																																	=
																																	BgL_carzd2401zd2_2237;
																																BgL_argsz00_4967
																																	=
																																	BgL_arg2005z00_2239;
																																BgL_argsz00_2013
																																	=
																																	BgL_argsz00_4967;
																																BgL_funz00_2012
																																	=
																																	BgL_funz00_4966;
																																goto
																																	BgL_tagzd2179zd2_2014;
																															}
																														}
																													else
																														{	/* Expand/object.scm 195 */
																															if (PAIRP
																																(BgL_carzd2401zd2_2237))
																																{	/* Expand/object.scm 195 */
																																	obj_t
																																		BgL_cdrzd2418zd2_2242;
																																	BgL_cdrzd2418zd2_2242
																																		=
																																		CDR
																																		(BgL_carzd2401zd2_2237);
																																	if ((CAR
																																			(BgL_carzd2401zd2_2237)
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					10))))
																																		{	/* Expand/object.scm 195 */
																																			if (PAIRP
																																				(BgL_cdrzd2418zd2_2242))
																																				{	/* Expand/object.scm 195 */
																																					obj_t
																																						BgL_carzd2421zd2_2246;
																																					obj_t
																																						BgL_cdrzd2422zd2_2247;
																																					BgL_carzd2421zd2_2246
																																						=
																																						CAR
																																						(BgL_cdrzd2418zd2_2242);
																																					BgL_cdrzd2422zd2_2247
																																						=
																																						CDR
																																						(BgL_cdrzd2418zd2_2242);
																																					if (SYMBOLP(BgL_carzd2421zd2_2246))
																																						{	/* Expand/object.scm 195 */
																																							if (PAIRP(BgL_cdrzd2422zd2_2247))
																																								{	/* Expand/object.scm 195 */
																																									obj_t
																																										BgL_carzd2427zd2_2250;
																																									BgL_carzd2427zd2_2250
																																										=
																																										CAR
																																										(BgL_cdrzd2422zd2_2247);
																																									if (SYMBOLP(BgL_carzd2427zd2_2250))
																																										{	/* Expand/object.scm 195 */
																																											if (NULLP(CDR(BgL_cdrzd2422zd2_2247)))
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_arg2016z00_2254;
																																													BgL_arg2016z00_2254
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_nz00_1995));
																																													{
																																														obj_t
																																															BgL_argsz00_4993;
																																														obj_t
																																															BgL_modz00_4992;
																																														obj_t
																																															BgL_funz00_4991;
																																														BgL_funz00_4991
																																															=
																																															BgL_carzd2421zd2_2246;
																																														BgL_modz00_4992
																																															=
																																															BgL_carzd2427zd2_2250;
																																														BgL_argsz00_4993
																																															=
																																															BgL_arg2016z00_2254;
																																														BgL_argsz00_2017
																																															=
																																															BgL_argsz00_4993;
																																														BgL_modz00_2016
																																															=
																																															BgL_modz00_4992;
																																														BgL_funz00_2015
																																															=
																																															BgL_funz00_4991;
																																														goto
																																															BgL_tagzd2180zd2_2018;
																																													}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Expand/object.scm 195 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Expand/object.scm 195 */
																																	return (
																																		(bool_t) 0);
																																}
																														}
																												}
																										}
																								}
																							else
																								{	/* Expand/object.scm 195 */
																									if (
																										(BgL_carzd2208zd2_2027 ==
																											CNST_TABLE_REF(((long)
																													24))))
																										{	/* Expand/object.scm 195 */
																											goto
																												BgL_kapzd2210zd2_2029;
																										}
																									else
																										{	/* Expand/object.scm 195 */
																											if (
																												(BgL_carzd2208zd2_2027
																													==
																													CNST_TABLE_REF(((long)
																															25))))
																												{	/* Expand/object.scm 195 */
																													goto
																														BgL_kapzd2210zd2_2029;
																												}
																											else
																												{	/* Expand/object.scm 195 */
																													if (
																														(BgL_carzd2208zd2_2027
																															==
																															CNST_TABLE_REF((
																																	(long) 26))))
																														{	/* Expand/object.scm 195 */
																															goto
																																BgL_kapzd2210zd2_2029;
																														}
																													else
																														{	/* Expand/object.scm 195 */
																															if (
																																(BgL_carzd2208zd2_2027
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			27))))
																																{	/* Expand/object.scm 195 */
																																	goto
																																		BgL_kapzd2210zd2_2029;
																																}
																															else
																																{	/* Expand/object.scm 195 */
																																	if (
																																		(BgL_carzd2208zd2_2027
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					28))))
																																		{	/* Expand/object.scm 195 */
																																			goto
																																				BgL_kapzd2210zd2_2029;
																																		}
																																	else
																																		{	/* Expand/object.scm 195 */
																																			if (
																																				(BgL_carzd2208zd2_2027
																																					==
																																					CNST_TABLE_REF
																																					(((long) 29))))
																																				{	/* Expand/object.scm 195 */
																																					goto
																																						BgL_kapzd2210zd2_2029;
																																				}
																																			else
																																				{	/* Expand/object.scm 195 */
																																					if (
																																						(BgL_carzd2208zd2_2027
																																							==
																																							CNST_TABLE_REF
																																							(((long) 21))))
																																						{	/* Expand/object.scm 195 */
																																							return
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Expand/object.scm 195 */
																																							obj_t
																																								BgL_cdrzd2447zd2_2039;
																																							BgL_cdrzd2447zd2_2039
																																								=
																																								CDR
																																								(BgL_nz00_1995);
																																							if ((CAR(BgL_nz00_1995) == CNST_TABLE_REF(((long) 22))))
																																								{	/* Expand/object.scm 195 */
																																									if (PAIRP(BgL_cdrzd2447zd2_2039))
																																										{	/* Expand/object.scm 195 */
																																											bool_t
																																												BgL_test3035z00_5022;
																																											{	/* Expand/object.scm 195 */
																																												obj_t
																																													BgL_tmpz00_5023;
																																												BgL_tmpz00_5023
																																													=
																																													CAR
																																													(BgL_cdrzd2447zd2_2039);
																																												BgL_test3035z00_5022
																																													=
																																													SYMBOLP
																																													(BgL_tmpz00_5023);
																																											}
																																											if (BgL_test3035z00_5022)
																																												{	/* Expand/object.scm 195 */
																																													if (NULLP(CDR(BgL_cdrzd2447zd2_2039)))
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															obj_t
																																																BgL_carzd2455zd2_2047;
																																															BgL_carzd2455zd2_2047
																																																=
																																																CAR
																																																(BgL_nz00_1995);
																																															if (SYMBOLP(BgL_carzd2455zd2_2047))
																																																{
																																																	obj_t
																																																		BgL_argsz00_5033;
																																																	obj_t
																																																		BgL_funz00_5032;
																																																	BgL_funz00_5032
																																																		=
																																																		BgL_carzd2455zd2_2047;
																																																	BgL_argsz00_5033
																																																		=
																																																		BgL_cdrzd2447zd2_2039;
																																																	BgL_argsz00_2013
																																																		=
																																																		BgL_argsz00_5033;
																																																	BgL_funz00_2012
																																																		=
																																																		BgL_funz00_5032;
																																																	goto
																																																		BgL_tagzd2179zd2_2014;
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	if (PAIRP(BgL_carzd2455zd2_2047))
																																																		{	/* Expand/object.scm 195 */
																																																			obj_t
																																																				BgL_cdrzd2472zd2_2052;
																																																			BgL_cdrzd2472zd2_2052
																																																				=
																																																				CDR
																																																				(BgL_carzd2455zd2_2047);
																																																			if ((CAR(BgL_carzd2455zd2_2047) == CNST_TABLE_REF(((long) 10))))
																																																				{	/* Expand/object.scm 195 */
																																																					if (PAIRP(BgL_cdrzd2472zd2_2052))
																																																						{	/* Expand/object.scm 195 */
																																																							obj_t
																																																								BgL_carzd2475zd2_2056;
																																																							obj_t
																																																								BgL_cdrzd2476zd2_2057;
																																																							BgL_carzd2475zd2_2056
																																																								=
																																																								CAR
																																																								(BgL_cdrzd2472zd2_2052);
																																																							BgL_cdrzd2476zd2_2057
																																																								=
																																																								CDR
																																																								(BgL_cdrzd2472zd2_2052);
																																																							if (SYMBOLP(BgL_carzd2475zd2_2056))
																																																								{	/* Expand/object.scm 195 */
																																																									if (PAIRP(BgL_cdrzd2476zd2_2057))
																																																										{	/* Expand/object.scm 195 */
																																																											obj_t
																																																												BgL_carzd2481zd2_2060;
																																																											BgL_carzd2481zd2_2060
																																																												=
																																																												CAR
																																																												(BgL_cdrzd2476zd2_2057);
																																																											if (SYMBOLP(BgL_carzd2481zd2_2060))
																																																												{	/* Expand/object.scm 195 */
																																																													if (NULLP(CDR(BgL_cdrzd2476zd2_2057)))
																																																														{
																																																															obj_t
																																																																BgL_argsz00_5057;
																																																															obj_t
																																																																BgL_modz00_5056;
																																																															obj_t
																																																																BgL_funz00_5055;
																																																															BgL_funz00_5055
																																																																=
																																																																BgL_carzd2475zd2_2056;
																																																															BgL_modz00_5056
																																																																=
																																																																BgL_carzd2481zd2_2060;
																																																															BgL_argsz00_5057
																																																																=
																																																																CDR
																																																																(BgL_nz00_1995);
																																																															BgL_argsz00_2017
																																																																=
																																																																BgL_argsz00_5057;
																																																															BgL_modz00_2016
																																																																=
																																																																BgL_modz00_5056;
																																																															BgL_funz00_2015
																																																																=
																																																																BgL_funz00_5055;
																																																															goto
																																																																BgL_tagzd2180zd2_2018;
																																																														}
																																																													else
																																																														{	/* Expand/object.scm 195 */
																																																															return
																																																																(
																																																																(bool_t)
																																																																0);
																																																														}
																																																												}
																																																											else
																																																												{	/* Expand/object.scm 195 */
																																																													return
																																																														(
																																																														(bool_t)
																																																														0);
																																																												}
																																																										}
																																																									else
																																																										{	/* Expand/object.scm 195 */
																																																											return
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																								}
																																																							else
																																																								{	/* Expand/object.scm 195 */
																																																									return
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/object.scm 195 */
																																																							return
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/object.scm 195 */
																																																					return
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_carzd2492zd2_2068;
																																													BgL_carzd2492zd2_2068
																																														=
																																														CAR
																																														(BgL_nz00_1995);
																																													if (SYMBOLP(BgL_carzd2492zd2_2068))
																																														{
																																															obj_t
																																																BgL_argsz00_5063;
																																															obj_t
																																																BgL_funz00_5062;
																																															BgL_funz00_5062
																																																=
																																																BgL_carzd2492zd2_2068;
																																															BgL_argsz00_5063
																																																=
																																																BgL_cdrzd2447zd2_2039;
																																															BgL_argsz00_2013
																																																=
																																																BgL_argsz00_5063;
																																															BgL_funz00_2012
																																																=
																																																BgL_funz00_5062;
																																															goto
																																																BgL_tagzd2179zd2_2014;
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															if (PAIRP(BgL_carzd2492zd2_2068))
																																																{	/* Expand/object.scm 195 */
																																																	obj_t
																																																		BgL_cdrzd2509zd2_2073;
																																																	BgL_cdrzd2509zd2_2073
																																																		=
																																																		CDR
																																																		(BgL_carzd2492zd2_2068);
																																																	if ((CAR(BgL_carzd2492zd2_2068) == CNST_TABLE_REF(((long) 10))))
																																																		{	/* Expand/object.scm 195 */
																																																			if (PAIRP(BgL_cdrzd2509zd2_2073))
																																																				{	/* Expand/object.scm 195 */
																																																					obj_t
																																																						BgL_carzd2512zd2_2077;
																																																					obj_t
																																																						BgL_cdrzd2513zd2_2078;
																																																					BgL_carzd2512zd2_2077
																																																						=
																																																						CAR
																																																						(BgL_cdrzd2509zd2_2073);
																																																					BgL_cdrzd2513zd2_2078
																																																						=
																																																						CDR
																																																						(BgL_cdrzd2509zd2_2073);
																																																					if (SYMBOLP(BgL_carzd2512zd2_2077))
																																																						{	/* Expand/object.scm 195 */
																																																							if (PAIRP(BgL_cdrzd2513zd2_2078))
																																																								{	/* Expand/object.scm 195 */
																																																									obj_t
																																																										BgL_carzd2518zd2_2081;
																																																									BgL_carzd2518zd2_2081
																																																										=
																																																										CAR
																																																										(BgL_cdrzd2513zd2_2078);
																																																									if (SYMBOLP(BgL_carzd2518zd2_2081))
																																																										{	/* Expand/object.scm 195 */
																																																											if (NULLP(CDR(BgL_cdrzd2513zd2_2078)))
																																																												{
																																																													obj_t
																																																														BgL_argsz00_5087;
																																																													obj_t
																																																														BgL_modz00_5086;
																																																													obj_t
																																																														BgL_funz00_5085;
																																																													BgL_funz00_5085
																																																														=
																																																														BgL_carzd2512zd2_2077;
																																																													BgL_modz00_5086
																																																														=
																																																														BgL_carzd2518zd2_2081;
																																																													BgL_argsz00_5087
																																																														=
																																																														CDR
																																																														(BgL_nz00_1995);
																																																													BgL_argsz00_2017
																																																														=
																																																														BgL_argsz00_5087;
																																																													BgL_modz00_2016
																																																														=
																																																														BgL_modz00_5086;
																																																													BgL_funz00_2015
																																																														=
																																																														BgL_funz00_5085;
																																																													goto
																																																														BgL_tagzd2180zd2_2018;
																																																												}
																																																											else
																																																												{	/* Expand/object.scm 195 */
																																																													return
																																																														(
																																																														(bool_t)
																																																														0);
																																																												}
																																																										}
																																																									else
																																																										{	/* Expand/object.scm 195 */
																																																											return
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																								}
																																																							else
																																																								{	/* Expand/object.scm 195 */
																																																									return
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/object.scm 195 */
																																																							return
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/object.scm 195 */
																																																					return
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																												}
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											obj_t
																																												BgL_carzd2529zd2_2089;
																																											BgL_carzd2529zd2_2089
																																												=
																																												CAR
																																												(BgL_nz00_1995);
																																											if (SYMBOLP(BgL_carzd2529zd2_2089))
																																												{
																																													obj_t
																																														BgL_argsz00_5093;
																																													obj_t
																																														BgL_funz00_5092;
																																													BgL_funz00_5092
																																														=
																																														BgL_carzd2529zd2_2089;
																																													BgL_argsz00_5093
																																														=
																																														BgL_cdrzd2447zd2_2039;
																																													BgL_argsz00_2013
																																														=
																																														BgL_argsz00_5093;
																																													BgL_funz00_2012
																																														=
																																														BgL_funz00_5092;
																																													goto
																																														BgL_tagzd2179zd2_2014;
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													if (PAIRP(BgL_carzd2529zd2_2089))
																																														{	/* Expand/object.scm 195 */
																																															obj_t
																																																BgL_cdrzd2546zd2_2094;
																																															BgL_cdrzd2546zd2_2094
																																																=
																																																CDR
																																																(BgL_carzd2529zd2_2089);
																																															if ((CAR(BgL_carzd2529zd2_2089) == CNST_TABLE_REF(((long) 10))))
																																																{	/* Expand/object.scm 195 */
																																																	if (PAIRP(BgL_cdrzd2546zd2_2094))
																																																		{	/* Expand/object.scm 195 */
																																																			obj_t
																																																				BgL_carzd2549zd2_2098;
																																																			obj_t
																																																				BgL_cdrzd2550zd2_2099;
																																																			BgL_carzd2549zd2_2098
																																																				=
																																																				CAR
																																																				(BgL_cdrzd2546zd2_2094);
																																																			BgL_cdrzd2550zd2_2099
																																																				=
																																																				CDR
																																																				(BgL_cdrzd2546zd2_2094);
																																																			if (SYMBOLP(BgL_carzd2549zd2_2098))
																																																				{	/* Expand/object.scm 195 */
																																																					if (PAIRP(BgL_cdrzd2550zd2_2099))
																																																						{	/* Expand/object.scm 195 */
																																																							obj_t
																																																								BgL_carzd2555zd2_2102;
																																																							BgL_carzd2555zd2_2102
																																																								=
																																																								CAR
																																																								(BgL_cdrzd2550zd2_2099);
																																																							if (SYMBOLP(BgL_carzd2555zd2_2102))
																																																								{	/* Expand/object.scm 195 */
																																																									if (NULLP(CDR(BgL_cdrzd2550zd2_2099)))
																																																										{
																																																											obj_t
																																																												BgL_argsz00_5117;
																																																											obj_t
																																																												BgL_modz00_5116;
																																																											obj_t
																																																												BgL_funz00_5115;
																																																											BgL_funz00_5115
																																																												=
																																																												BgL_carzd2549zd2_2098;
																																																											BgL_modz00_5116
																																																												=
																																																												BgL_carzd2555zd2_2102;
																																																											BgL_argsz00_5117
																																																												=
																																																												CDR
																																																												(BgL_nz00_1995);
																																																											BgL_argsz00_2017
																																																												=
																																																												BgL_argsz00_5117;
																																																											BgL_modz00_2016
																																																												=
																																																												BgL_modz00_5116;
																																																											BgL_funz00_2015
																																																												=
																																																												BgL_funz00_5115;
																																																											goto
																																																												BgL_tagzd2180zd2_2018;
																																																										}
																																																									else
																																																										{	/* Expand/object.scm 195 */
																																																											return
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																								}
																																																							else
																																																								{	/* Expand/object.scm 195 */
																																																									return
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/object.scm 195 */
																																																							return
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/object.scm 195 */
																																																					return
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																										}
																																								}
																																							else
																																								{	/* Expand/object.scm 195 */
																																									obj_t
																																										BgL_carzd2566zd2_2109;
																																									BgL_carzd2566zd2_2109
																																										=
																																										CAR
																																										(BgL_nz00_1995);
																																									if (SYMBOLP(BgL_carzd2566zd2_2109))
																																										{
																																											obj_t
																																												BgL_argsz00_5123;
																																											obj_t
																																												BgL_funz00_5122;
																																											BgL_funz00_5122
																																												=
																																												BgL_carzd2566zd2_2109;
																																											BgL_argsz00_5123
																																												=
																																												BgL_cdrzd2447zd2_2039;
																																											BgL_argsz00_2013
																																												=
																																												BgL_argsz00_5123;
																																											BgL_funz00_2012
																																												=
																																												BgL_funz00_5122;
																																											goto
																																												BgL_tagzd2179zd2_2014;
																																										}
																																									else
																																										{	/* Expand/object.scm 195 */
																																											if (PAIRP(BgL_carzd2566zd2_2109))
																																												{	/* Expand/object.scm 195 */
																																													obj_t
																																														BgL_cdrzd2583zd2_2114;
																																													BgL_cdrzd2583zd2_2114
																																														=
																																														CDR
																																														(BgL_carzd2566zd2_2109);
																																													if ((CAR(BgL_carzd2566zd2_2109) == CNST_TABLE_REF(((long) 10))))
																																														{	/* Expand/object.scm 195 */
																																															if (PAIRP(BgL_cdrzd2583zd2_2114))
																																																{	/* Expand/object.scm 195 */
																																																	obj_t
																																																		BgL_carzd2586zd2_2118;
																																																	obj_t
																																																		BgL_cdrzd2587zd2_2119;
																																																	BgL_carzd2586zd2_2118
																																																		=
																																																		CAR
																																																		(BgL_cdrzd2583zd2_2114);
																																																	BgL_cdrzd2587zd2_2119
																																																		=
																																																		CDR
																																																		(BgL_cdrzd2583zd2_2114);
																																																	if (SYMBOLP(BgL_carzd2586zd2_2118))
																																																		{	/* Expand/object.scm 195 */
																																																			if (PAIRP(BgL_cdrzd2587zd2_2119))
																																																				{	/* Expand/object.scm 195 */
																																																					obj_t
																																																						BgL_carzd2592zd2_2122;
																																																					BgL_carzd2592zd2_2122
																																																						=
																																																						CAR
																																																						(BgL_cdrzd2587zd2_2119);
																																																					if (SYMBOLP(BgL_carzd2592zd2_2122))
																																																						{	/* Expand/object.scm 195 */
																																																							if (NULLP(CDR(BgL_cdrzd2587zd2_2119)))
																																																								{
																																																									obj_t
																																																										BgL_argsz00_5147;
																																																									obj_t
																																																										BgL_modz00_5146;
																																																									obj_t
																																																										BgL_funz00_5145;
																																																									BgL_funz00_5145
																																																										=
																																																										BgL_carzd2586zd2_2118;
																																																									BgL_modz00_5146
																																																										=
																																																										BgL_carzd2592zd2_2122;
																																																									BgL_argsz00_5147
																																																										=
																																																										CDR
																																																										(BgL_nz00_1995);
																																																									BgL_argsz00_2017
																																																										=
																																																										BgL_argsz00_5147;
																																																									BgL_modz00_2016
																																																										=
																																																										BgL_modz00_5146;
																																																									BgL_funz00_2015
																																																										=
																																																										BgL_funz00_5145;
																																																									goto
																																																										BgL_tagzd2180zd2_2018;
																																																								}
																																																							else
																																																								{	/* Expand/object.scm 195 */
																																																									return
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/object.scm 195 */
																																																							return
																																																								(
																																																								(bool_t)
																																																								0);
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/object.scm 195 */
																																																					return
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/object.scm 195 */
																																																			return
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																															else
																																																{	/* Expand/object.scm 195 */
																																																	return
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																													else
																																														{	/* Expand/object.scm 195 */
																																															return
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Expand/object.scm 195 */
																																													return
																																														(
																																														(bool_t)
																																														0);
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
																	{	/* Expand/object.scm 195 */
																		return ((bool_t) 0);
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



/* &<@anonymous:1791> */
	obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3853, obj_t BgL_slotz00_3856, obj_t BgL_valz00_3857)
	{
		{	/* Expand/object.scm 343 */
			{	/* Expand/object.scm 344 */
				obj_t BgL_ez00_3854;
				obj_t BgL_newz00_3855;

				BgL_ez00_3854 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3853, (int) (((long) 0))));
				BgL_newz00_3855 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3853, (int) (((long) 1))));
				{	/* Expand/object.scm 344 */
					bool_t BgL_test3069z00_5155;

					if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
							((BgL_slotz00_bglt) BgL_slotz00_3856)))
						{	/* Expand/object.scm 344 */
							if (
								(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_slotz00_3856)))->
									BgL_readzd2onlyzf3z21))
								{	/* Expand/object.scm 345 */
									BgL_test3069z00_5155 = ((bool_t) 0);
								}
							else
								{	/* Expand/object.scm 345 */
									BgL_test3069z00_5155 = CBOOL(CAR(((obj_t) BgL_valz00_3857)));
								}
						}
					else
						{	/* Expand/object.scm 344 */
							BgL_test3069z00_5155 = ((bool_t) 0);
						}
					if (BgL_test3069z00_5155)
						{	/* Expand/object.scm 347 */
							obj_t BgL_vz00_3946;
							obj_t BgL_idz00_3947;

							{	/* Expand/object.scm 347 */
								obj_t BgL_arg1811z00_3948;

								BgL_arg1811z00_3948 = CDR(((obj_t) BgL_valz00_3857));
								BgL_vz00_3946 =
									PROCEDURE_ENTRY(BgL_ez00_3854) (BgL_ez00_3854,
									BgL_arg1811z00_3948, BgL_ez00_3854, BEOA);
							}
							BgL_idz00_3947 =
								(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_slotz00_3856)))->BgL_idz00);
							{	/* Expand/object.scm 349 */
								obj_t BgL_arg1796z00_3949;
								obj_t BgL_arg1798z00_3950;

								BgL_arg1796z00_3949 = CDR(((obj_t) BgL_valz00_3857));
								{	/* Expand/object.scm 350 */
									obj_t BgL_arg1801z00_3951;

									{	/* Expand/object.scm 350 */
										obj_t BgL_arg1808z00_3952;
										obj_t BgL_arg1809z00_3953;

										BgL_arg1808z00_3952 =
											BGl_fieldzd2accesszd2zzast_objectz00(BgL_newz00_3855,
											BgL_idz00_3947, BTRUE);
										BgL_arg1809z00_3953 = MAKE_YOUNG_PAIR(BgL_vz00_3946, BNIL);
										BgL_arg1801z00_3951 =
											MAKE_YOUNG_PAIR(BgL_arg1808z00_3952, BgL_arg1809z00_3953);
									}
									BgL_arg1798z00_3950 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
										BgL_arg1801z00_3951);
								}
								return
									BGl_objectzd2epairifyzd2zzexpand_objectz00
									(BgL_arg1798z00_3950, BgL_arg1796z00_3949);
							}
						}
					else
						{	/* Expand/object.scm 344 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &<@anonymous:1732> */
	obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3858, obj_t BgL_slotz00_3861, obj_t BgL_valz00_3862)
	{
		{	/* Expand/object.scm 328 */
			{	/* Expand/object.scm 329 */
				obj_t BgL_ez00_3859;
				obj_t BgL_newz00_3860;

				BgL_ez00_3859 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3858, (int) (((long) 0))));
				BgL_newz00_3860 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3858, (int) (((long) 1))));
				if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
						((BgL_slotz00_bglt) BgL_slotz00_3861)))
					{	/* Expand/object.scm 329 */
						return BFALSE;
					}
				else
					{	/* Expand/object.scm 330 */
						obj_t BgL_vz00_3954;
						obj_t BgL_idz00_3955;

						{	/* Expand/object.scm 330 */
							obj_t BgL_arg1743z00_3956;

							BgL_arg1743z00_3956 = CDR(((obj_t) BgL_valz00_3862));
							BgL_vz00_3954 =
								PROCEDURE_ENTRY(BgL_ez00_3859) (BgL_ez00_3859,
								BgL_arg1743z00_3956, BgL_ez00_3859, BEOA);
						}
						BgL_idz00_3955 =
							(((BgL_slotz00_bglt) COBJECT(
									((BgL_slotz00_bglt) BgL_slotz00_3861)))->BgL_idz00);
						{	/* Expand/object.scm 332 */
							obj_t BgL_arg1738z00_3957;
							obj_t BgL_arg1739z00_3958;

							BgL_arg1738z00_3957 = CDR(((obj_t) BgL_valz00_3862));
							{	/* Expand/object.scm 333 */
								obj_t BgL_arg1740z00_3959;

								{	/* Expand/object.scm 333 */
									obj_t BgL_arg1741z00_3960;
									obj_t BgL_arg1742z00_3961;

									BgL_arg1741z00_3960 =
										BGl_fieldzd2accesszd2zzast_objectz00(BgL_newz00_3860,
										BgL_idz00_3955, BTRUE);
									BgL_arg1742z00_3961 = MAKE_YOUNG_PAIR(BgL_vz00_3954, BNIL);
									BgL_arg1740z00_3959 =
										MAKE_YOUNG_PAIR(BgL_arg1741z00_3960, BgL_arg1742z00_3961);
								}
								BgL_arg1739z00_3958 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1740z00_3959);
							}
							return
								BGl_objectzd2epairifyzd2zzexpand_objectz00(BgL_arg1739z00_3958,
								BgL_arg1738z00_3957);
						}
					}
			}
		}

	}



/* expand-co-instantiate */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(obj_t BgL_xz00_24,
		obj_t BgL_ez00_25)
	{
		{	/* Expand/object.scm 358 */
			{

				if (PAIRP(BgL_xz00_24))
					{	/* Expand/object.scm 359 */
						obj_t BgL_cdrzd2705zd2_2491;

						BgL_cdrzd2705zd2_2491 = CDR(BgL_xz00_24);
						if ((CAR(BgL_xz00_24) == CNST_TABLE_REF(((long) 30))))
							{	/* Expand/object.scm 359 */
								if (PAIRP(BgL_cdrzd2705zd2_2491))
									{	/* Expand/object.scm 359 */
										obj_t BgL_arg2172z00_2495;
										obj_t BgL_arg2173z00_2496;

										BgL_arg2172z00_2495 = CAR(BgL_cdrzd2705zd2_2491);
										BgL_arg2173z00_2496 = CDR(BgL_cdrzd2705zd2_2491);
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_24,
											BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00
											(BgL_arg2172z00_2495, BgL_arg2173z00_2496, BgL_xz00_24,
												BgL_ez00_25));
									}
								else
									{	/* Expand/object.scm 359 */
									BgL_tagzd2698zd2_2488:
										return
											BGl_errorz00zz__errorz00
											(BGl_string2826z00zzexpand_objectz00,
											BGl_string2815z00zzexpand_objectz00, BgL_xz00_24);
									}
							}
						else
							{	/* Expand/object.scm 359 */
								goto BgL_tagzd2698zd2_2488;
							}
					}
				else
					{	/* Expand/object.scm 359 */
						goto BgL_tagzd2698zd2_2488;
					}
			}
		}

	}



/* &expand-co-instantiate */
	obj_t BGl_z62expandzd2cozd2instantiatez62zzexpand_objectz00(obj_t
		BgL_envz00_3863, obj_t BgL_xz00_3864, obj_t BgL_ez00_3865)
	{
		{	/* Expand/object.scm 358 */
			return
				BGl_expandzd2cozd2instantiatez00zzexpand_objectz00(BgL_xz00_3864,
				BgL_ez00_3865);
		}

	}



/* co-instantiate->let */
	obj_t BGl_cozd2instantiatezd2ze3letze3zzexpand_objectz00(obj_t
		BgL_bindingsz00_26, obj_t BgL_bodyz00_27, obj_t BgL_xz00_28,
		obj_t BgL_ez00_29)
	{
		{	/* Expand/object.scm 368 */
			{
				obj_t BgL_exprz00_2592;
				obj_t BgL_bdgz00_2593;
				obj_t BgL_locz00_2594;

				{	/* Expand/object.scm 390 */
					obj_t BgL_locz00_2500;
					obj_t BgL_varsz00_2501;

					BgL_locz00_2500 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_28);
					if (NULLP(BgL_bindingsz00_26))
						{	/* Expand/object.scm 391 */
							BgL_varsz00_2501 = BNIL;
						}
					else
						{	/* Expand/object.scm 391 */
							obj_t BgL_head1279z00_2551;

							{	/* Expand/object.scm 391 */
								obj_t BgL_res2769z00_3640;

								BgL_res2769z00_3640 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1279z00_2551 = BgL_res2769z00_3640;
							}
							{
								obj_t BgL_l1277z00_2553;
								obj_t BgL_tail1280z00_2554;

								BgL_l1277z00_2553 = BgL_bindingsz00_26;
								BgL_tail1280z00_2554 = BgL_head1279z00_2551;
							BgL_zc3z04anonymousza32203ze3z87_2555:
								if (NULLP(BgL_l1277z00_2553))
									{	/* Expand/object.scm 391 */
										BgL_varsz00_2501 = CDR(BgL_head1279z00_2551);
									}
								else
									{	/* Expand/object.scm 391 */
										obj_t BgL_newtail1281z00_2557;

										{	/* Expand/object.scm 391 */
											obj_t BgL_arg2206z00_2559;

											{	/* Expand/object.scm 391 */
												obj_t BgL_bdgz00_2560;

												BgL_bdgz00_2560 = CAR(((obj_t) BgL_l1277z00_2553));
												{
													obj_t BgL_varz00_2561;
													obj_t BgL_exprz00_2562;

													if (PAIRP(BgL_bdgz00_2560))
														{	/* Expand/object.scm 392 */
															obj_t BgL_carzd2730zd2_2567;
															obj_t BgL_cdrzd2731zd2_2568;

															BgL_carzd2730zd2_2567 = CAR(BgL_bdgz00_2560);
															BgL_cdrzd2731zd2_2568 = CDR(BgL_bdgz00_2560);
															if (SYMBOLP(BgL_carzd2730zd2_2567))
																{	/* Expand/object.scm 392 */
																	if (PAIRP(BgL_cdrzd2731zd2_2568))
																		{	/* Expand/object.scm 392 */
																			if (NULLP(CDR(BgL_cdrzd2731zd2_2568)))
																				{	/* Expand/object.scm 392 */
																					BgL_varz00_2561 =
																						BgL_carzd2730zd2_2567;
																					BgL_exprz00_2562 =
																						CAR(BgL_cdrzd2731zd2_2568);
																					{	/* Expand/object.scm 394 */
																						obj_t BgL_locz00_2575;

																						BgL_locz00_2575 =
																							BGl_findzd2locationzf2locz20zztools_locationz00
																							(BgL_bdgz00_2560, BgL_xz00_28);
																						{	/* Expand/object.scm 394 */
																							obj_t BgL_idzd2typezd2_2576;

																							BgL_idzd2typezd2_2576 =
																								BGl_parsezd2idzd2zzast_identz00
																								(BgL_varz00_2561,
																								BgL_locz00_2575);
																							{	/* Expand/object.scm 395 */
																								obj_t BgL_idz00_2577;

																								BgL_idz00_2577 =
																									CAR(BgL_idzd2typezd2_2576);
																								{	/* Expand/object.scm 396 */
																									obj_t BgL_tz00_2578;

																									BgL_tz00_2578 =
																										CDR(BgL_idzd2typezd2_2576);
																									{	/* Expand/object.scm 397 */
																										obj_t BgL_klassz00_2579;

																										BgL_exprz00_2592 =
																											BgL_exprz00_2562;
																										BgL_bdgz00_2593 =
																											BgL_bdgz00_2560;
																										BgL_locz00_2594 =
																											BgL_locz00_2575;
																										{
																											obj_t
																												BgL_instantiatez00_2596;
																											obj_t BgL_bodyz00_2597;

																											if (PAIRP
																												(BgL_exprz00_2592))
																												{	/* Expand/object.scm 388 */
																													BgL_instantiatez00_2596
																														=
																														CAR
																														(BgL_exprz00_2592);
																													BgL_bodyz00_2597 =
																														CDR
																														(BgL_exprz00_2592);
																													{	/* Expand/object.scm 373 */
																														obj_t
																															BgL_locz00_2604;
																														BgL_locz00_2604 =
																															BGl_findzd2locationzf2locz20zztools_locationz00
																															(BgL_bodyz00_2597,
																															BgL_locz00_2594);
																														{	/* Expand/object.scm 373 */
																															obj_t
																																BgL_idzd2typezd2_2605;
																															BgL_idzd2typezd2_2605
																																=
																																BGl_parsezd2idzd2zzast_identz00
																																(BgL_instantiatez00_2596,
																																BgL_locz00_2604);
																															{	/* Expand/object.scm 374 */
																																obj_t
																																	BgL_kclassz00_2606;
																																BgL_kclassz00_2606
																																	=
																																	CDR
																																	(BgL_idzd2typezd2_2605);
																																{	/* Expand/object.scm 375 */

																																	if (
																																		(CAR
																																			(BgL_idzd2typezd2_2605)
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					31))))
																																		{	/* Expand/object.scm 377 */
																																			if (BGl_isazf3zf3zz__objectz00(BgL_kclassz00_2606, BGl_tclassz00zzobject_classz00))
																																				{	/* Expand/object.scm 381 */
																																					bool_t
																																						BgL_test3085z00_5258;
																																					{
																																						BgL_tclassz00_bglt
																																							BgL_auxz00_5259;
																																						{
																																							obj_t
																																								BgL_auxz00_5260;
																																							{	/* Expand/object.scm 381 */
																																								BgL_objectz00_bglt
																																									BgL_tmpz00_5261;
																																								BgL_tmpz00_5261
																																									=
																																									(
																																									(BgL_objectz00_bglt)
																																									((BgL_typez00_bglt) BgL_kclassz00_2606));
																																								BgL_auxz00_5260
																																									=
																																									BGL_OBJECT_WIDENING
																																									(BgL_tmpz00_5261);
																																							}
																																							BgL_auxz00_5259
																																								=
																																								(
																																								(BgL_tclassz00_bglt)
																																								BgL_auxz00_5260);
																																						}
																																						BgL_test3085z00_5258
																																							=
																																							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5259))->BgL_abstractzf3zf3);
																																					}
																																					if (BgL_test3085z00_5258)
																																						{	/* Expand/object.scm 381 */
																																							BgL_klassz00_2579
																																								=
																																								BGl_errorz00zz__errorz00
																																								(BgL_instantiatez00_2596,
																																								BGl_string2820z00zzexpand_objectz00,
																																								BgL_bdgz00_2593);
																																						}
																																					else
																																						{	/* Expand/object.scm 381 */
																																							BgL_klassz00_2579
																																								=
																																								BgL_kclassz00_2606;
																																						}
																																				}
																																			else
																																				{	/* Expand/object.scm 379 */
																																					BgL_klassz00_2579
																																						=
																																						BGl_errorz00zz__errorz00
																																						(BgL_instantiatez00_2596,
																																						BGl_string2817z00zzexpand_objectz00,
																																						BgL_bdgz00_2593);
																																				}
																																		}
																																	else
																																		{	/* Expand/object.scm 377 */
																																			BgL_klassz00_2579
																																				=
																																				BGl_errorz00zz__errorz00
																																				(BgL_instantiatez00_2596,
																																				BGl_string2827z00zzexpand_objectz00,
																																				BgL_bdgz00_2593);
																																		}
																																}
																															}
																														}
																													}
																												}
																											else
																												{	/* Expand/object.scm 388 */
																													BgL_klassz00_2579 =
																														BGl_errorz00zz__errorz00
																														(BGl_string2826z00zzexpand_objectz00,
																														BGl_string2827z00zzexpand_objectz00,
																														BgL_bdgz00_2593);
																												}
																										}
																										{	/* Expand/object.scm 398 */

																											{	/* Expand/object.scm 399 */
																												bool_t
																													BgL_test3086z00_5273;
																												{	/* Expand/object.scm 399 */
																													bool_t
																														BgL_test3087z00_5274;
																													{	/* Expand/object.scm 399 */
																														BgL_typez00_bglt
																															BgL_arg2222z00_2589;
																														BgL_arg2222z00_2589
																															=
																															BGl_getzd2defaultzd2typez00zztype_cachez00
																															();
																														BgL_test3087z00_5274
																															=
																															(BgL_tz00_2578 ==
																															((obj_t)
																																BgL_arg2222z00_2589));
																													}
																													if (BgL_test3087z00_5274)
																														{	/* Expand/object.scm 399 */
																															BgL_test3086z00_5273
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Expand/object.scm 399 */
																															BgL_test3086z00_5273
																																=
																																(BgL_tz00_2578
																																==
																																BgL_klassz00_2579);
																														}
																												}
																												if (BgL_test3086z00_5273)
																													{	/* Expand/object.scm 401 */
																														obj_t
																															BgL_list2218z00_2584;
																														{	/* Expand/object.scm 401 */
																															obj_t
																																BgL_arg2219z00_2585;
																															{	/* Expand/object.scm 401 */
																																obj_t
																																	BgL_arg2220z00_2586;
																																BgL_arg2220z00_2586
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_exprz00_2562,
																																	BNIL);
																																BgL_arg2219z00_2585
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_klassz00_2579,
																																	BgL_arg2220z00_2586);
																															}
																															BgL_list2218z00_2584
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_idz00_2577,
																																BgL_arg2219z00_2585);
																														}
																														BgL_arg2206z00_2559
																															=
																															BgL_list2218z00_2584;
																													}
																												else
																													{	/* Expand/object.scm 402 */
																														obj_t
																															BgL_arg2221z00_2587;
																														BgL_arg2221z00_2587
																															=
																															CAR(((obj_t)
																																BgL_xz00_28));
																														BgL_arg2206z00_2559
																															=
																															BGl_errorz00zz__errorz00
																															(BgL_arg2221z00_2587,
																															BGl_string2828z00zzexpand_objectz00,
																															BgL_bdgz00_2560);
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
																				{	/* Expand/object.scm 392 */
																				BgL_tagzd2724zd2_2564:
																					{	/* Expand/object.scm 404 */
																						obj_t BgL_arg2223z00_2590;

																						BgL_arg2223z00_2590 =
																							CAR(((obj_t) BgL_xz00_28));
																						BgL_arg2206z00_2559 =
																							BGl_errorz00zz__errorz00
																							(BgL_arg2223z00_2590,
																							BGl_string2827z00zzexpand_objectz00,
																							BgL_bdgz00_2560);
																					}
																				}
																		}
																	else
																		{	/* Expand/object.scm 392 */
																			goto BgL_tagzd2724zd2_2564;
																		}
																}
															else
																{	/* Expand/object.scm 392 */
																	goto BgL_tagzd2724zd2_2564;
																}
														}
													else
														{	/* Expand/object.scm 392 */
															goto BgL_tagzd2724zd2_2564;
														}
												}
											}
											{	/* Expand/object.scm 391 */
												obj_t BgL_res2776z00_3657;

												BgL_res2776z00_3657 =
													MAKE_YOUNG_PAIR(BgL_arg2206z00_2559, BNIL);
												BgL_newtail1281z00_2557 = BgL_res2776z00_3657;
											}
										}
										SET_CDR(BgL_tail1280z00_2554, BgL_newtail1281z00_2557);
										{	/* Expand/object.scm 391 */
											obj_t BgL_arg2205z00_2558;

											BgL_arg2205z00_2558 = CDR(((obj_t) BgL_l1277z00_2553));
											{
												obj_t BgL_tail1280z00_5294;
												obj_t BgL_l1277z00_5293;

												BgL_l1277z00_5293 = BgL_arg2205z00_2558;
												BgL_tail1280z00_5294 = BgL_newtail1281z00_2557;
												BgL_tail1280z00_2554 = BgL_tail1280z00_5294;
												BgL_l1277z00_2553 = BgL_l1277z00_5293;
												goto BgL_zc3z04anonymousza32203ze3z87_2555;
											}
										}
									}
							}
						}
					{	/* Expand/object.scm 406 */
						obj_t BgL_arg2176z00_2502;

						{	/* Expand/object.scm 406 */
							obj_t BgL_arg2177z00_2503;
							obj_t BgL_arg2178z00_2504;

							if (NULLP(BgL_varsz00_2501))
								{	/* Expand/object.scm 406 */
									BgL_arg2177z00_2503 = BNIL;
								}
							else
								{	/* Expand/object.scm 406 */
									obj_t BgL_head1284z00_2507;

									{	/* Expand/object.scm 406 */
										obj_t BgL_res2778z00_3661;

										BgL_res2778z00_3661 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1284z00_2507 = BgL_res2778z00_3661;
									}
									{
										obj_t BgL_l1282z00_2509;
										obj_t BgL_tail1285z00_2510;

										BgL_l1282z00_2509 = BgL_varsz00_2501;
										BgL_tail1285z00_2510 = BgL_head1284z00_2507;
									BgL_zc3z04anonymousza32180ze3z87_2511:
										if (NULLP(BgL_l1282z00_2509))
											{	/* Expand/object.scm 406 */
												BgL_arg2177z00_2503 = CDR(BgL_head1284z00_2507);
											}
										else
											{	/* Expand/object.scm 406 */
												obj_t BgL_newtail1286z00_2513;

												{	/* Expand/object.scm 406 */
													obj_t BgL_arg2183z00_2515;

													{	/* Expand/object.scm 406 */
														obj_t BgL_varz00_2516;

														BgL_varz00_2516 = CAR(((obj_t) BgL_l1282z00_2509));
														{	/* Expand/object.scm 407 */
															obj_t BgL_idz00_2517;
															obj_t BgL_klassz00_2518;

															BgL_idz00_2517 = CAR(((obj_t) BgL_varz00_2516));
															{	/* Expand/object.scm 408 */
																obj_t BgL_pairz00_3669;

																BgL_pairz00_3669 =
																	CDR(((obj_t) BgL_varz00_2516));
																BgL_klassz00_2518 = CAR(BgL_pairz00_3669);
															}
															{	/* Expand/object.scm 410 */
																obj_t BgL_arg2184z00_2519;

																{	/* Expand/object.scm 410 */
																	obj_t BgL_arg2185z00_2520;
																	obj_t BgL_arg2186z00_2521;

																	{	/* Expand/object.scm 410 */
																		obj_t BgL_arg2187z00_2522;

																		BgL_arg2187z00_2522 =
																			(((BgL_typez00_bglt) COBJECT(
																					((BgL_typez00_bglt)
																						BgL_klassz00_2518)))->BgL_idz00);
																		BgL_arg2185z00_2520 =
																			BGl_makezd2typedzd2identz00zzast_identz00
																			(BgL_idz00_2517, BgL_arg2187z00_2522);
																	}
																	BgL_arg2186z00_2521 =
																		MAKE_YOUNG_PAIR
																		(BGl_allocatezd2exprzd2zzexpand_objectz00
																		(BgL_klassz00_2518), BNIL);
																	BgL_arg2184z00_2519 =
																		MAKE_YOUNG_PAIR(BgL_arg2185z00_2520,
																		BgL_arg2186z00_2521);
																}
																BgL_arg2183z00_2515 =
																	BGl_objectzd2epairifyzd2zzexpand_objectz00
																	(BgL_arg2184z00_2519, BgL_xz00_28);
															}
														}
													}
													{	/* Expand/object.scm 406 */
														obj_t BgL_res2780z00_3671;

														BgL_res2780z00_3671 =
															MAKE_YOUNG_PAIR(BgL_arg2183z00_2515, BNIL);
														BgL_newtail1286z00_2513 = BgL_res2780z00_3671;
													}
												}
												SET_CDR(BgL_tail1285z00_2510, BgL_newtail1286z00_2513);
												{	/* Expand/object.scm 406 */
													obj_t BgL_arg2182z00_2514;

													BgL_arg2182z00_2514 =
														CDR(((obj_t) BgL_l1282z00_2509));
													{
														obj_t BgL_tail1285z00_5320;
														obj_t BgL_l1282z00_5319;

														BgL_l1282z00_5319 = BgL_arg2182z00_2514;
														BgL_tail1285z00_5320 = BgL_newtail1286z00_2513;
														BgL_tail1285z00_2510 = BgL_tail1285z00_5320;
														BgL_l1282z00_2509 = BgL_l1282z00_5319;
														goto BgL_zc3z04anonymousza32180ze3z87_2511;
													}
												}
											}
									}
								}
							{	/* Expand/object.scm 413 */
								obj_t BgL_arg2189z00_2525;
								obj_t BgL_arg2190z00_2526;

								if (NULLP(BgL_varsz00_2501))
									{	/* Expand/object.scm 413 */
										BgL_arg2189z00_2525 = BNIL;
									}
								else
									{	/* Expand/object.scm 413 */
										obj_t BgL_head1289z00_2529;

										{	/* Expand/object.scm 413 */
											obj_t BgL_res2782z00_3675;

											BgL_res2782z00_3675 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1289z00_2529 = BgL_res2782z00_3675;
										}
										{
											obj_t BgL_l1287z00_2531;
											obj_t BgL_tail1290z00_2532;

											BgL_l1287z00_2531 = BgL_varsz00_2501;
											BgL_tail1290z00_2532 = BgL_head1289z00_2529;
										BgL_zc3z04anonymousza32192ze3z87_2533:
											if (NULLP(BgL_l1287z00_2531))
												{	/* Expand/object.scm 413 */
													BgL_arg2189z00_2525 = CDR(BgL_head1289z00_2529);
												}
											else
												{	/* Expand/object.scm 413 */
													obj_t BgL_newtail1291z00_2535;

													{	/* Expand/object.scm 413 */
														obj_t BgL_arg2195z00_2537;

														{	/* Expand/object.scm 413 */
															obj_t BgL_varz00_2538;

															BgL_varz00_2538 =
																CAR(((obj_t) BgL_l1287z00_2531));
															{	/* Expand/object.scm 414 */
																obj_t BgL_idz00_2539;
																obj_t BgL_klassz00_2540;
																obj_t BgL_exprz00_2541;

																BgL_idz00_2539 = CAR(((obj_t) BgL_varz00_2538));
																{	/* Expand/object.scm 415 */
																	obj_t BgL_pairz00_3683;

																	BgL_pairz00_3683 =
																		CDR(((obj_t) BgL_varz00_2538));
																	BgL_klassz00_2540 = CAR(BgL_pairz00_3683);
																}
																{	/* Expand/object.scm 416 */
																	obj_t BgL_pairz00_3689;

																	{	/* Expand/object.scm 416 */
																		obj_t BgL_pairz00_3688;

																		BgL_pairz00_3688 =
																			CDR(((obj_t) BgL_varz00_2538));
																		BgL_pairz00_3689 = CDR(BgL_pairz00_3688);
																	}
																	BgL_exprz00_2541 = CAR(BgL_pairz00_3689);
																}
																{	/* Expand/object.scm 417 */
																	obj_t BgL_arg2196z00_2542;
																	obj_t BgL_arg2197z00_2543;
																	obj_t BgL_arg2198z00_2544;

																	BgL_arg2196z00_2542 =
																		CAR(((obj_t) BgL_exprz00_2541));
																	BgL_arg2197z00_2543 =
																		CDR(((obj_t) BgL_exprz00_2541));
																	{
																		BgL_tclassz00_bglt BgL_auxz00_5342;

																		{
																			obj_t BgL_auxz00_5343;

																			{	/* Expand/object.scm 418 */
																				BgL_objectz00_bglt BgL_tmpz00_5344;

																				BgL_tmpz00_5344 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_klassz00_2540));
																				BgL_auxz00_5343 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_5344);
																			}
																			BgL_auxz00_5342 =
																				((BgL_tclassz00_bglt) BgL_auxz00_5343);
																		}
																		BgL_arg2198z00_2544 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_5342))->
																			BgL_slotsz00);
																	}
																	BgL_arg2195z00_2537 =
																		BGl_instantiatezd2fillzd2zzexpand_objectz00
																		(BgL_arg2196z00_2542, BgL_arg2197z00_2543,
																		BgL_klassz00_2540, BgL_arg2198z00_2544,
																		BgL_idz00_2539, BgL_exprz00_2541,
																		BgL_ez00_29);
																}
															}
														}
														{	/* Expand/object.scm 413 */
															obj_t BgL_res2784z00_3694;

															BgL_res2784z00_3694 =
																MAKE_YOUNG_PAIR(BgL_arg2195z00_2537, BNIL);
															BgL_newtail1291z00_2535 = BgL_res2784z00_3694;
														}
													}
													SET_CDR(BgL_tail1290z00_2532,
														BgL_newtail1291z00_2535);
													{	/* Expand/object.scm 413 */
														obj_t BgL_arg2194z00_2536;

														BgL_arg2194z00_2536 =
															CDR(((obj_t) BgL_l1287z00_2531));
														{
															obj_t BgL_tail1290z00_5356;
															obj_t BgL_l1287z00_5355;

															BgL_l1287z00_5355 = BgL_arg2194z00_2536;
															BgL_tail1290z00_5356 = BgL_newtail1291z00_2535;
															BgL_tail1290z00_2532 = BgL_tail1290z00_5356;
															BgL_l1287z00_2531 = BgL_l1287z00_5355;
															goto BgL_zc3z04anonymousza32192ze3z87_2533;
														}
													}
												}
										}
									}
								{	/* Expand/object.scm 420 */
									obj_t BgL_arg2199z00_2546;

									{	/* Expand/object.scm 420 */
										obj_t BgL_arg2200z00_2547;

										{	/* Expand/object.scm 420 */
											obj_t BgL_arg2201z00_2548;

											BgL_arg2201z00_2548 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_bodyz00_27, BNIL);
											BgL_arg2200z00_2547 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
												BgL_arg2201z00_2548);
										}
										BgL_arg2199z00_2546 =
											PROCEDURE_ENTRY(BgL_ez00_29) (BgL_ez00_29,
											BgL_arg2200z00_2547, BgL_ez00_29, BEOA);
									}
									BgL_arg2190z00_2526 =
										MAKE_YOUNG_PAIR(BgL_arg2199z00_2546, BNIL);
								}
								BgL_arg2178z00_2504 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2189z00_2525, BgL_arg2190z00_2526);
							}
							BgL_arg2176z00_2502 =
								MAKE_YOUNG_PAIR(BgL_arg2177z00_2503, BgL_arg2178z00_2504);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BgL_arg2176z00_2502);
		}}}}

	}



/* expand-duplicate */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2duplicatezd2zzexpand_objectz00(obj_t
		BgL_xz00_30, obj_t BgL_ez00_31)
	{
		{	/* Expand/object.scm 425 */
			{
				obj_t BgL_duplicatez00_2613;
				obj_t BgL_dupz00_2614;
				obj_t BgL_provz00_2615;

				if (PAIRP(BgL_xz00_30))
					{	/* Expand/object.scm 426 */
						obj_t BgL_cdrzd2748zd2_2620;

						BgL_cdrzd2748zd2_2620 = CDR(BgL_xz00_30);
						if (PAIRP(BgL_cdrzd2748zd2_2620))
							{	/* Expand/object.scm 426 */
								BgL_duplicatez00_2613 = CAR(BgL_xz00_30);
								BgL_dupz00_2614 = CAR(BgL_cdrzd2748zd2_2620);
								BgL_provz00_2615 = CDR(BgL_cdrzd2748zd2_2620);
								{	/* Expand/object.scm 428 */
									obj_t BgL_idzd2typezd2_2625;

									BgL_idzd2typezd2_2625 =
										BGl_parsezd2idzd2zzast_identz00(BgL_duplicatez00_2613,
										BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_30));
									{	/* Expand/object.scm 428 */
										obj_t BgL_idz00_2626;

										BgL_idz00_2626 = CAR(BgL_idzd2typezd2_2625);
										{	/* Expand/object.scm 429 */
											obj_t BgL_classz00_2627;

											BgL_classz00_2627 = CDR(BgL_idzd2typezd2_2625);
											{	/* Expand/object.scm 430 */

												if (BGl_isazf3zf3zz__objectz00(BgL_classz00_2627,
														BGl_tclassz00zzobject_classz00))
													{	/* Expand/object.scm 434 */
														bool_t BgL_test3095z00_5381;

														{
															BgL_tclassz00_bglt BgL_auxz00_5382;

															{
																obj_t BgL_auxz00_5383;

																{	/* Expand/object.scm 434 */
																	BgL_objectz00_bglt BgL_tmpz00_5384;

																	BgL_tmpz00_5384 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_classz00_2627));
																	BgL_auxz00_5383 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5384);
																}
																BgL_auxz00_5382 =
																	((BgL_tclassz00_bglt) BgL_auxz00_5383);
															}
															BgL_test3095z00_5381 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_5382))->
																BgL_abstractzf3zf3);
														}
														if (BgL_test3095z00_5381)
															{	/* Expand/object.scm 434 */
																return
																	BGl_errorz00zz__errorz00
																	(BgL_duplicatez00_2613,
																	BGl_string2829z00zzexpand_objectz00,
																	BgL_xz00_30);
															}
														else
															{	/* Expand/object.scm 437 */
																obj_t BgL_arg2240z00_2630;

																BgL_arg2240z00_2630 =
																	BGl_duplicatezd2ze3makez31zzexpand_objectz00(
																	((BgL_typez00_bglt) BgL_classz00_2627),
																	BgL_dupz00_2614, BgL_provz00_2615,
																	BgL_xz00_30, BgL_ez00_31);
																return
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_30,
																	BgL_arg2240z00_2630);
															}
													}
												else
													{	/* Expand/object.scm 433 */
														obj_t BgL_arg2241z00_2631;

														{	/* Expand/object.scm 433 */
															obj_t BgL_list2242z00_2632;

															BgL_list2242z00_2632 =
																MAKE_YOUNG_PAIR(BgL_idz00_2626, BNIL);
															BgL_arg2241z00_2631 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string2830z00zzexpand_objectz00,
																BgL_list2242z00_2632);
														}
														return
															BGl_errorz00zz__errorz00(BgL_duplicatez00_2613,
															BgL_arg2241z00_2631, BgL_xz00_30);
													}
											}
										}
									}
								}
							}
						else
							{	/* Expand/object.scm 426 */
							BgL_tagzd2739zd2_2617:
								return
									BGl_errorz00zz__errorz00(BGl_string2831z00zzexpand_objectz00,
									BGl_string2815z00zzexpand_objectz00, BgL_xz00_30);
							}
					}
				else
					{	/* Expand/object.scm 426 */
						goto BgL_tagzd2739zd2_2617;
					}
			}
		}

	}



/* &expand-duplicate */
	obj_t BGl_z62expandzd2duplicatezb0zzexpand_objectz00(obj_t BgL_envz00_3866,
		obj_t BgL_xz00_3867, obj_t BgL_ez00_3868)
	{
		{	/* Expand/object.scm 425 */
			return
				BGl_expandzd2duplicatezd2zzexpand_objectz00(BgL_xz00_3867,
				BgL_ez00_3868);
		}

	}



/* duplicate->make */
	obj_t BGl_duplicatezd2ze3makez31zzexpand_objectz00(BgL_typez00_bglt
		BgL_classz00_32, obj_t BgL_duplicatedz00_33, obj_t BgL_providedz00_34,
		obj_t BgL_xz00_35, obj_t BgL_ez00_36)
	{
		{	/* Expand/object.scm 450 */
			{
				obj_t BgL_slotsz00_2764;
				obj_t BgL_slotsz00_2706;
				obj_t BgL_dupvarz00_2707;
				obj_t BgL_parentz00_2708;

				{	/* Expand/object.scm 507 */
					obj_t BgL_idz00_2637;

					BgL_idz00_2637 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_32)))->BgL_idz00);
					{	/* Expand/object.scm 507 */
						obj_t BgL_slotsz00_2638;

						{
							BgL_tclassz00_bglt BgL_auxz00_5404;

							{
								obj_t BgL_auxz00_5405;

								{	/* Expand/object.scm 508 */
									BgL_objectz00_bglt BgL_tmpz00_5406;

									BgL_tmpz00_5406 = ((BgL_objectz00_bglt) BgL_classz00_32);
									BgL_auxz00_5405 = BGL_OBJECT_WIDENING(BgL_tmpz00_5406);
								}
								BgL_auxz00_5404 = ((BgL_tclassz00_bglt) BgL_auxz00_5405);
							}
							BgL_slotsz00_2638 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5404))->BgL_slotsz00);
						}
						{	/* Expand/object.scm 508 */
							obj_t BgL_newz00_2639;

							BgL_newz00_2639 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 13)));
							{	/* Expand/object.scm 509 */
								obj_t BgL_tmpz00_2640;

								BgL_tmpz00_2640 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											32)));
								{	/* Expand/object.scm 510 */
									obj_t BgL_tnewz00_2641;

									BgL_tnewz00_2641 =
										BGl_makezd2typedzd2identz00zzast_identz00(BgL_newz00_2639,
										BgL_idz00_2637);
									{	/* Expand/object.scm 511 */
										obj_t BgL_dupvarz00_2642;

										BgL_dupvarz00_2642 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														33))));
										{	/* Expand/object.scm 512 */
											obj_t BgL_parentz00_2643;

											BgL_slotsz00_2764 = BgL_slotsz00_2638;
											if (NULLP(BgL_slotsz00_2764))
												{	/* Expand/object.scm 490 */
													BgL_parentz00_2643 = ((obj_t) BgL_classz00_32);
												}
											else
												{	/* Expand/object.scm 492 */
													obj_t BgL_g1121z00_2767;
													obj_t BgL_g1122z00_2768;

													BgL_g1121z00_2767 =
														(((BgL_slotz00_bglt) COBJECT(
																((BgL_slotz00_bglt)
																	CAR(
																		((obj_t) BgL_slotsz00_2764)))))->
														BgL_classzd2ownerzd2);
													BgL_g1122z00_2768 = CDR(((obj_t) BgL_slotsz00_2764));
													{
														obj_t BgL_parentz00_2770;
														obj_t BgL_slotsz00_2771;

														BgL_parentz00_2770 = BgL_g1121z00_2767;
														BgL_slotsz00_2771 = BgL_g1122z00_2768;
														if (NULLP(BgL_slotsz00_2771))
															{	/* Expand/object.scm 495 */
																BgL_parentz00_2643 = BgL_parentz00_2770;
															}
														else
															{	/* Expand/object.scm 497 */
																bool_t BgL_test3098z00_5430;

																{	/* Expand/object.scm 497 */
																	obj_t BgL_arg2341z00_2778;

																	BgL_arg2341z00_2778 =
																		(((BgL_slotz00_bglt) COBJECT(
																				((BgL_slotz00_bglt)
																					CAR(
																						((obj_t) BgL_slotsz00_2771)))))->
																		BgL_classzd2ownerzd2);
																	BgL_test3098z00_5430 =
																		BGl_typezd2subclasszf3z21zzobject_classz00((
																			(BgL_typez00_bglt) BgL_parentz00_2770),
																		((BgL_typez00_bglt) BgL_arg2341z00_2778));
																}
																if (BgL_test3098z00_5430)
																	{	/* Expand/object.scm 497 */
																		BgL_parentz00_2643 =
																			(((BgL_slotz00_bglt) COBJECT(
																					((BgL_slotz00_bglt)
																						CAR(
																							((obj_t) BgL_slotsz00_2771)))))->
																			BgL_classzd2ownerzd2);
																	}
																else
																	{	/* Expand/object.scm 497 */
																		BgL_parentz00_2643 = BgL_parentz00_2770;
																	}
															}
													}
												}
											{	/* Expand/object.scm 513 */
												obj_t BgL_tdupvarz00_2644;

												{	/* Expand/object.scm 514 */
													obj_t BgL_arg2298z00_2704;

													BgL_arg2298z00_2704 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_parentz00_2643)))->
														BgL_idz00);
													BgL_tdupvarz00_2644 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_dupvarz00_2642, BgL_arg2298z00_2704);
												}
												{	/* Expand/object.scm 514 */
													obj_t BgL_argsz00_2645;

													BgL_slotsz00_2706 = BgL_slotsz00_2638;
													BgL_dupvarz00_2707 = BgL_dupvarz00_2642;
													BgL_parentz00_2708 = BgL_parentz00_2643;
													{	/* Expand/object.scm 453 */
														obj_t BgL_vargsz00_2710;

														BgL_vargsz00_2710 =
															make_vector(bgl_list_length(BgL_slotsz00_2706),
															BUNSPEC);
														{
															obj_t BgL_providedz00_2712;

															BgL_providedz00_2712 = BgL_providedz00_34;
														BgL_zc3z04anonymousza32301ze3z87_2713:
															if (PAIRP(BgL_providedz00_2712))
																{	/* Expand/object.scm 457 */
																	obj_t BgL_pz00_2715;

																	BgL_pz00_2715 = CAR(BgL_providedz00_2712);
																	{
																		obj_t BgL_szd2namezd2_2716;
																		obj_t BgL_valuez00_2717;

																		if (PAIRP(BgL_pz00_2715))
																			{	/* Expand/object.scm 458 */
																				obj_t BgL_carzd2763zd2_2722;
																				obj_t BgL_cdrzd2764zd2_2723;

																				BgL_carzd2763zd2_2722 =
																					CAR(BgL_pz00_2715);
																				BgL_cdrzd2764zd2_2723 =
																					CDR(BgL_pz00_2715);
																				if (SYMBOLP(BgL_carzd2763zd2_2722))
																					{	/* Expand/object.scm 458 */
																						if (PAIRP(BgL_cdrzd2764zd2_2723))
																							{	/* Expand/object.scm 458 */
																								if (NULLP(CDR
																										(BgL_cdrzd2764zd2_2723)))
																									{	/* Expand/object.scm 458 */
																										BgL_szd2namezd2_2716 =
																											BgL_carzd2763zd2_2722;
																										BgL_valuez00_2717 =
																											CAR
																											(BgL_cdrzd2764zd2_2723);
																										{	/* Expand/object.scm 462 */
																											obj_t BgL_arg2310z00_2730;
																											obj_t BgL_arg2311z00_2731;

																											BgL_arg2310z00_2730 =
																												BGl_findzd2slotzd2offsetz00zzexpand_objectz00
																												(BgL_slotsz00_2706,
																												BgL_szd2namezd2_2716,
																												BGl_string2831z00zzexpand_objectz00,
																												BgL_pz00_2715);
																											BgL_arg2311z00_2731 =
																												MAKE_YOUNG_PAIR(BTRUE,
																												BGl_objectzd2epairifyzd2zzexpand_objectz00
																												(BgL_valuez00_2717,
																													BgL_pz00_2715));
																											VECTOR_SET
																												(BgL_vargsz00_2710,
																												(long)
																												CINT
																												(BgL_arg2310z00_2730),
																												BgL_arg2311z00_2731);
																									}}
																								else
																									{	/* Expand/object.scm 458 */
																									BgL_tagzd2757zd2_2719:
																										{	/* Expand/object.scm 465 */
																											obj_t BgL_arg2313z00_2733;

																											BgL_arg2313z00_2733 =
																												CAR(
																												((obj_t) BgL_xz00_35));
																											BGl_errorz00zz__errorz00
																												(BgL_arg2313z00_2733,
																												BGl_string2815z00zzexpand_objectz00,
																												BgL_xz00_35);
																										}
																									}
																							}
																						else
																							{	/* Expand/object.scm 458 */
																								goto BgL_tagzd2757zd2_2719;
																							}
																					}
																				else
																					{	/* Expand/object.scm 458 */
																						goto BgL_tagzd2757zd2_2719;
																					}
																			}
																		else
																			{	/* Expand/object.scm 458 */
																				goto BgL_tagzd2757zd2_2719;
																			}
																	}
																	{
																		obj_t BgL_providedz00_5470;

																		BgL_providedz00_5470 =
																			CDR(BgL_providedz00_2712);
																		BgL_providedz00_2712 = BgL_providedz00_5470;
																		goto BgL_zc3z04anonymousza32301ze3z87_2713;
																	}
																}
															else
																{	/* Expand/object.scm 456 */
																	((bool_t) 0);
																}
														}
														{
															long BgL_iz00_2737;
															obj_t BgL_slotsz00_2738;

															BgL_iz00_2737 = ((long) 0);
															BgL_slotsz00_2738 = BgL_slotsz00_2706;
														BgL_zc3z04anonymousza32315ze3z87_2739:
															if (PAIRP(BgL_slotsz00_2738))
																{	/* Expand/object.scm 471 */
																	obj_t BgL_valuez00_2741;

																	BgL_valuez00_2741 =
																		VECTOR_REF(BgL_vargsz00_2710,
																		BgL_iz00_2737);
																	if (PAIRP(BgL_valuez00_2741))
																		{	/* Expand/object.scm 472 */
																			BFALSE;
																		}
																	else
																		{	/* Expand/object.scm 475 */
																			obj_t BgL_slotz00_2743;

																			BgL_slotz00_2743 = CAR(BgL_slotsz00_2738);
																			{	/* Expand/object.scm 475 */
																				obj_t BgL_claza7za7z00_2744;

																				BgL_claza7za7z00_2744 =
																					(((BgL_slotz00_bglt) COBJECT(
																							((BgL_slotz00_bglt)
																								BgL_slotz00_2743)))->
																					BgL_classzd2ownerzd2);
																				{	/* Expand/object.scm 476 */
																					obj_t BgL_valz00_2745;

																					if (
																						(BgL_claza7za7z00_2744 ==
																							BgL_parentz00_2708))
																						{	/* Expand/object.scm 478 */
																							obj_t BgL_arg2320z00_2748;

																							BgL_arg2320z00_2748 =
																								(((BgL_slotz00_bglt) COBJECT(
																										((BgL_slotz00_bglt)
																											BgL_slotz00_2743)))->
																								BgL_idz00);
																							BgL_valz00_2745 =
																								BGl_fieldzd2accesszd2zzast_objectz00
																								(BgL_dupvarz00_2707,
																								BgL_arg2320z00_2748, BTRUE);
																						}
																					else
																						{	/* Expand/object.scm 479 */
																							obj_t BgL_tmpz00_2749;

																							BgL_tmpz00_2749 =
																								BGl_gensymz00zz__r4_symbols_6_4z00
																								(CNST_TABLE_REF(((long) 32)));
																							{	/* Expand/object.scm 479 */
																								obj_t BgL_cidz00_2750;

																								BgL_cidz00_2750 =
																									(((BgL_typez00_bglt) COBJECT(
																											((BgL_typez00_bglt)
																												BgL_claza7za7z00_2744)))->
																									BgL_idz00);
																								{	/* Expand/object.scm 480 */
																									obj_t BgL_ttmpz00_2751;

																									BgL_ttmpz00_2751 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_tmpz00_2749,
																										BgL_cidz00_2750);
																									{	/* Expand/object.scm 481 */

																										{	/* Expand/object.scm 482 */
																											obj_t BgL_arg2321z00_2752;

																											{	/* Expand/object.scm 482 */
																												obj_t
																													BgL_arg2322z00_2753;
																												obj_t
																													BgL_arg2323z00_2754;
																												{	/* Expand/object.scm 482 */
																													obj_t
																														BgL_arg2324z00_2755;
																													{	/* Expand/object.scm 482 */
																														obj_t
																															BgL_arg2325z00_2756;
																														BgL_arg2325z00_2756
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_dupvarz00_2707,
																															BNIL);
																														BgL_arg2324z00_2755
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_ttmpz00_2751,
																															BgL_arg2325z00_2756);
																													}
																													BgL_arg2322z00_2753 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2324z00_2755,
																														BNIL);
																												}
																												{	/* Expand/object.scm 483 */
																													obj_t
																														BgL_arg2326z00_2757;
																													{	/* Expand/object.scm 483 */
																														obj_t
																															BgL_arg2327z00_2758;
																														BgL_arg2327z00_2758
																															=
																															(((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt) BgL_slotz00_2743)))->BgL_idz00);
																														BgL_arg2326z00_2757
																															=
																															BGl_fieldzd2accesszd2zzast_objectz00
																															(BgL_tmpz00_2749,
																															BgL_arg2327z00_2758,
																															BTRUE);
																													}
																													BgL_arg2323z00_2754 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2326z00_2757,
																														BNIL);
																												}
																												BgL_arg2321z00_2752 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2322z00_2753,
																													BgL_arg2323z00_2754);
																											}
																											BgL_valz00_2745 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														6)),
																												BgL_arg2321z00_2752);
																						}}}}}
																					{	/* Expand/object.scm 477 */

																						{	/* Expand/object.scm 484 */
																							obj_t BgL_arg2318z00_2746;

																							BgL_arg2318z00_2746 =
																								MAKE_YOUNG_PAIR(BTRUE,
																								BgL_valz00_2745);
																							VECTOR_SET(BgL_vargsz00_2710,
																								BgL_iz00_2737,
																								BgL_arg2318z00_2746);
																		}}}}}
																	{
																		obj_t BgL_slotsz00_5504;
																		long BgL_iz00_5502;

																		BgL_iz00_5502 =
																			(BgL_iz00_2737 + ((long) 1));
																		BgL_slotsz00_5504 = CDR(BgL_slotsz00_2738);
																		BgL_slotsz00_2738 = BgL_slotsz00_5504;
																		BgL_iz00_2737 = BgL_iz00_5502;
																		goto BgL_zc3z04anonymousza32315ze3z87_2739;
																	}
																}
															else
																{	/* Expand/object.scm 470 */
																	((bool_t) 0);
																}
														}
														BgL_argsz00_2645 =
															BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
															(BgL_vargsz00_2710);
													}
													{	/* Expand/object.scm 515 */

														{	/* Expand/object.scm 518 */
															obj_t BgL_arg2244z00_2646;

															{	/* Expand/object.scm 518 */
																obj_t BgL_arg2245z00_2647;
																obj_t BgL_arg2246z00_2648;

																{	/* Expand/object.scm 518 */
																	obj_t BgL_arg2247z00_2649;
																	obj_t BgL_arg2248z00_2650;

																	{	/* Expand/object.scm 518 */
																		obj_t BgL_arg2249z00_2651;

																		{	/* Expand/object.scm 518 */
																			obj_t BgL_arg2250z00_2652;

																			BgL_arg2250z00_2652 =
																				PROCEDURE_ENTRY(BgL_ez00_36)
																				(BgL_ez00_36, BgL_duplicatedz00_33,
																				BgL_ez00_36, BEOA);
																			BgL_arg2249z00_2651 =
																				MAKE_YOUNG_PAIR(BgL_arg2250z00_2652,
																				BNIL);
																		}
																		BgL_arg2247z00_2649 =
																			MAKE_YOUNG_PAIR(BgL_tdupvarz00_2644,
																			BgL_arg2249z00_2651);
																	}
																	{	/* Expand/object.scm 519 */
																		obj_t BgL_arg2251z00_2653;

																		{	/* Expand/object.scm 519 */
																			obj_t BgL_arg2252z00_2654;

																			{	/* Expand/object.scm 519 */
																				obj_t BgL_arg2253z00_2655;

																				BgL_arg2253z00_2655 =
																					BGl_allocatezd2exprzd2zzexpand_objectz00
																					(((obj_t) BgL_classz00_32));
																				BgL_arg2252z00_2654 =
																					MAKE_YOUNG_PAIR(BgL_arg2253z00_2655,
																					BNIL);
																			}
																			BgL_arg2251z00_2653 =
																				MAKE_YOUNG_PAIR(BgL_tnewz00_2641,
																				BgL_arg2252z00_2654);
																		}
																		BgL_arg2248z00_2650 =
																			MAKE_YOUNG_PAIR(BgL_arg2251z00_2653,
																			BNIL);
																	}
																	BgL_arg2245z00_2647 =
																		MAKE_YOUNG_PAIR(BgL_arg2247z00_2649,
																		BgL_arg2248z00_2650);
																}
																{	/* Expand/object.scm 522 */
																	obj_t BgL_arg2254z00_2656;
																	obj_t BgL_arg2256z00_2657;

																	{	/* Expand/object.scm 522 */
																		obj_t BgL_zc3z04anonymousza32260ze3z87_3871;

																		BgL_zc3z04anonymousza32260ze3z87_3871 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza32260ze3ze5zzexpand_objectz00,
																			(int) (((long) 2)), (int) (((long) 2)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza32260ze3z87_3871,
																			(int) (((long) 0)), BgL_ez00_36);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza32260ze3z87_3871,
																			(int) (((long) 1)), BgL_newz00_2639);
																		{	/* Expand/object.scm 521 */
																			obj_t BgL_list2258z00_2659;

																			{	/* Expand/object.scm 521 */
																				obj_t BgL_arg2259z00_2660;

																				BgL_arg2259z00_2660 =
																					MAKE_YOUNG_PAIR(BgL_argsz00_2645,
																					BNIL);
																				BgL_list2258z00_2659 =
																					MAKE_YOUNG_PAIR(BgL_slotsz00_2638,
																					BgL_arg2259z00_2660);
																			}
																			BgL_arg2254z00_2656 =
																				BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																				(BgL_zc3z04anonymousza32260ze3z87_3871,
																				BgL_list2258z00_2659);
																	}}
																	{	/* Expand/object.scm 527 */
																		obj_t BgL_arg2267z00_2670;
																		obj_t BgL_arg2268z00_2671;

																		if (CBOOL
																			(BGl_findzd2classzd2constructorz00zzobject_classz00
																				(BgL_classz00_32)))
																			{	/* Expand/object.scm 528 */
																				BgL_globalz00_bglt BgL_gz00_2673;

																				{
																					BgL_tclassz00_bglt BgL_auxz00_5533;

																					{
																						obj_t BgL_auxz00_5534;

																						{	/* Expand/object.scm 528 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_5535;
																							BgL_tmpz00_5535 =
																								((BgL_objectz00_bglt)
																								BgL_classz00_32);
																							BgL_auxz00_5534 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_5535);
																						}
																						BgL_auxz00_5533 =
																							((BgL_tclassz00_bglt)
																							BgL_auxz00_5534);
																					}
																					BgL_gz00_2673 =
																						(((BgL_tclassz00_bglt)
																							COBJECT(BgL_auxz00_5533))->
																						BgL_holderz00);
																				}
																				{	/* Expand/object.scm 529 */
																					obj_t BgL_arg2270z00_2674;

																					{	/* Expand/object.scm 529 */
																						obj_t BgL_arg2272z00_2675;
																						obj_t BgL_arg2273z00_2676;

																						{	/* Expand/object.scm 529 */
																							obj_t BgL_arg2275z00_2677;
																							obj_t BgL_arg2276z00_2678;

																							{	/* Expand/object.scm 529 */
																								obj_t BgL_arg2277z00_2679;

																								{	/* Expand/object.scm 529 */
																									obj_t BgL_arg2278z00_2680;

																									BgL_arg2278z00_2680 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 8)),
																										BNIL);
																									BgL_arg2277z00_2679 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												14)),
																										BgL_arg2278z00_2680);
																								}
																								BgL_arg2275z00_2677 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 10)),
																									BgL_arg2277z00_2679);
																							}
																							{	/* Expand/object.scm 530 */
																								obj_t BgL_arg2280z00_2681;

																								{	/* Expand/object.scm 530 */
																									obj_t BgL_arg2281z00_2682;

																									{	/* Expand/object.scm 530 */
																										obj_t BgL_arg2282z00_2683;
																										obj_t BgL_arg2283z00_2684;

																										BgL_arg2282z00_2683 =
																											(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														BgL_gz00_2673)))->
																											BgL_idz00);
																										BgL_arg2283z00_2684 =
																											MAKE_YOUNG_PAIR(((
																													(BgL_globalz00_bglt)
																													COBJECT
																													(BgL_gz00_2673))->
																												BgL_modulez00), BNIL);
																										BgL_arg2281z00_2682 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2282z00_2683,
																											BgL_arg2283z00_2684);
																									}
																									BgL_arg2280z00_2681 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												10)),
																										BgL_arg2281z00_2682);
																								}
																								BgL_arg2276z00_2678 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2280z00_2681, BNIL);
																							}
																							BgL_arg2272z00_2675 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2275z00_2677,
																								BgL_arg2276z00_2678);
																						}
																						BgL_arg2273z00_2676 =
																							MAKE_YOUNG_PAIR(BgL_newz00_2639,
																							BNIL);
																						BgL_arg2270z00_2674 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2272z00_2675,
																							BgL_arg2273z00_2676);
																					}
																					BgL_arg2267z00_2670 =
																						PROCEDURE_ENTRY(BgL_ez00_36)
																						(BgL_ez00_36, BgL_arg2270z00_2674,
																						BgL_ez00_36, BEOA);
																			}}
																		else
																			{	/* Expand/object.scm 527 */
																				BgL_arg2267z00_2670 = BFALSE;
																			}
																		{	/* Expand/object.scm 535 */
																			obj_t BgL_arg2285z00_2686;
																			obj_t BgL_arg2286z00_2687;

																			{	/* Expand/object.scm 535 */
																				obj_t
																					BgL_zc3z04anonymousza32290ze3z87_3870;
																				BgL_zc3z04anonymousza32290ze3z87_3870 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza32290ze3ze5zzexpand_objectz00,
																					(int) (((long) 2)),
																					(int) (((long) 2)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza32290ze3z87_3870,
																					(int) (((long) 0)), BgL_ez00_36);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza32290ze3z87_3870,
																					(int) (((long) 1)), BgL_newz00_2639);
																				{	/* Expand/object.scm 534 */
																					obj_t BgL_list2288z00_2689;

																					{	/* Expand/object.scm 534 */
																						obj_t BgL_arg2289z00_2690;

																						BgL_arg2289z00_2690 =
																							MAKE_YOUNG_PAIR(BgL_argsz00_2645,
																							BNIL);
																						BgL_list2288z00_2689 =
																							MAKE_YOUNG_PAIR(BgL_slotsz00_2638,
																							BgL_arg2289z00_2690);
																					}
																					BgL_arg2285z00_2686 =
																						BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																						(BgL_zc3z04anonymousza32290ze3z87_3870,
																						BgL_list2288z00_2689);
																			}}
																			BgL_arg2286z00_2687 =
																				MAKE_YOUNG_PAIR(BgL_newz00_2639, BNIL);
																			BgL_arg2268z00_2671 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2285z00_2686,
																				BgL_arg2286z00_2687);
																		}
																		BgL_arg2256z00_2657 =
																			MAKE_YOUNG_PAIR(BgL_arg2267z00_2670,
																			BgL_arg2268z00_2671);
																	}
																	BgL_arg2246z00_2648 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2254z00_2656, BgL_arg2256z00_2657);
																}
																BgL_arg2244z00_2646 =
																	MAKE_YOUNG_PAIR(BgL_arg2245z00_2647,
																	BgL_arg2246z00_2648);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																BgL_arg2244z00_2646);
		}}}}}}}}}}}}}

	}



/* &slot-set */
	obj_t BGl_z62slotzd2setzb0zzexpand_objectz00(obj_t BgL_newz00_2782,
		obj_t BgL_slotz00_2783, obj_t BgL_vz00_2784)
	{
		{	/* Expand/object.scm 505 */
			{	/* Expand/object.scm 503 */
				obj_t BgL_idz00_2787;

				BgL_idz00_2787 =
					(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_slotz00_2783)))->BgL_idz00);
				{	/* Expand/object.scm 505 */
					obj_t BgL_arg2345z00_2788;

					{	/* Expand/object.scm 505 */
						obj_t BgL_arg2346z00_2789;
						obj_t BgL_arg2347z00_2790;

						BgL_arg2346z00_2789 =
							BGl_fieldzd2accesszd2zzast_objectz00(BgL_newz00_2782,
							BgL_idz00_2787, BTRUE);
						BgL_arg2347z00_2790 = MAKE_YOUNG_PAIR(BgL_vz00_2784, BNIL);
						BgL_arg2345z00_2788 =
							MAKE_YOUNG_PAIR(BgL_arg2346z00_2789, BgL_arg2347z00_2790);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)), BgL_arg2345z00_2788);
		}}}

	}



/* &<@anonymous:2290> */
	obj_t BGl_z62zc3z04anonymousza32290ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3872, obj_t BgL_slotz00_3875, obj_t BgL_valz00_3876)
	{
		{	/* Expand/object.scm 534 */
			{	/* Expand/object.scm 535 */
				obj_t BgL_ez00_3873;
				obj_t BgL_newz00_3874;

				BgL_ez00_3873 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3872, (int) (((long) 0))));
				BgL_newz00_3874 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3872, (int) (((long) 1))));
				{	/* Expand/object.scm 535 */
					bool_t BgL_test3108z00_5592;

					if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
							((BgL_slotz00_bglt) BgL_slotz00_3875)))
						{	/* Expand/object.scm 535 */
							if (
								(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_slotz00_3875)))->
									BgL_readzd2onlyzf3z21))
								{	/* Expand/object.scm 536 */
									BgL_test3108z00_5592 = ((bool_t) 0);
								}
							else
								{	/* Expand/object.scm 536 */
									BgL_test3108z00_5592 = CBOOL(CAR(((obj_t) BgL_valz00_3876)));
								}
						}
					else
						{	/* Expand/object.scm 535 */
							BgL_test3108z00_5592 = ((bool_t) 0);
						}
					if (BgL_test3108z00_5592)
						{	/* Expand/object.scm 538 */
							obj_t BgL_arg2294z00_3962;
							obj_t BgL_arg2295z00_3963;

							BgL_arg2294z00_3962 = CDR(((obj_t) BgL_valz00_3876));
							{	/* Expand/object.scm 539 */
								obj_t BgL_arg2296z00_3964;

								{	/* Expand/object.scm 539 */
									obj_t BgL_arg2297z00_3965;

									BgL_arg2297z00_3965 = CDR(((obj_t) BgL_valz00_3876));
									BgL_arg2296z00_3964 =
										PROCEDURE_ENTRY(BgL_ez00_3873) (BgL_ez00_3873,
										BgL_arg2297z00_3965, BgL_ez00_3873, BEOA);
								}
								BgL_arg2295z00_3963 =
									BGl_z62slotzd2setzb0zzexpand_objectz00(BgL_newz00_3874,
									BgL_slotz00_3875, BgL_arg2296z00_3964);
							}
							return
								BGl_objectzd2epairifyzd2zzexpand_objectz00(BgL_arg2295z00_3963,
								BgL_arg2294z00_3962);
						}
					else
						{	/* Expand/object.scm 535 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &<@anonymous:2260> */
	obj_t BGl_z62zc3z04anonymousza32260ze3ze5zzexpand_objectz00(obj_t
		BgL_envz00_3877, obj_t BgL_slotz00_3880, obj_t BgL_valz00_3881)
	{
		{	/* Expand/object.scm 521 */
			{	/* Expand/object.scm 522 */
				obj_t BgL_ez00_3878;
				obj_t BgL_newz00_3879;

				BgL_ez00_3878 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3877, (int) (((long) 0))));
				BgL_newz00_3879 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3877, (int) (((long) 1))));
				if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
						((BgL_slotz00_bglt) BgL_slotz00_3880)))
					{	/* Expand/object.scm 522 */
						return BFALSE;
					}
				else
					{	/* Expand/object.scm 523 */
						obj_t BgL_arg2262z00_3966;
						obj_t BgL_arg2263z00_3967;

						BgL_arg2262z00_3966 = CDR(((obj_t) BgL_valz00_3881));
						{	/* Expand/object.scm 524 */
							obj_t BgL_arg2264z00_3968;

							{	/* Expand/object.scm 524 */
								obj_t BgL_arg2265z00_3969;

								BgL_arg2265z00_3969 = CDR(((obj_t) BgL_valz00_3881));
								BgL_arg2264z00_3968 =
									PROCEDURE_ENTRY(BgL_ez00_3878) (BgL_ez00_3878,
									BgL_arg2265z00_3969, BgL_ez00_3878, BEOA);
							}
							BgL_arg2263z00_3967 =
								BGl_z62slotzd2setzb0zzexpand_objectz00(BgL_newz00_3879,
								BgL_slotz00_3880, BgL_arg2264z00_3968);
						}
						return
							BGl_objectzd2epairifyzd2zzexpand_objectz00(BgL_arg2263z00_3967,
							BgL_arg2262z00_3966);
					}
			}
		}

	}



/* allocate-expr */
	obj_t BGl_allocatezd2exprzd2zzexpand_objectz00(obj_t BgL_classz00_37)
	{
		{	/* Expand/object.scm 546 */
			if (BGl_widezd2classzf3z21zzobject_classz00(BgL_classz00_37))
				{	/* Expand/object.scm 548 */
					obj_t BgL_superz00_2795;

					{
						BgL_tclassz00_bglt BgL_auxz00_5635;

						{
							obj_t BgL_auxz00_5636;

							{	/* Expand/object.scm 548 */
								BgL_objectz00_bglt BgL_tmpz00_5637;

								BgL_tmpz00_5637 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_37));
								BgL_auxz00_5636 = BGL_OBJECT_WIDENING(BgL_tmpz00_5637);
							}
							BgL_auxz00_5635 = ((BgL_tclassz00_bglt) BgL_auxz00_5636);
						}
						BgL_superz00_2795 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5635))->
							BgL_itszd2superzd2);
					}
					{	/* Expand/object.scm 550 */
						obj_t BgL_arg2349z00_2796;

						BgL_arg2349z00_2796 =
							BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(
							((BgL_typez00_bglt) BgL_superz00_2795));
						return
							BGl_classgenzd2widenzd2exprz00zzobject_classgenz00(
							((BgL_typez00_bglt) BgL_classz00_37), BgL_arg2349z00_2796);
					}
				}
			else
				{	/* Expand/object.scm 547 */
					return
						BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(
						((BgL_typez00_bglt) BgL_classz00_37));
				}
		}

	}



/* expand-widen! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2widenz12zc0zzexpand_objectz00(obj_t
		BgL_xz00_38, obj_t BgL_ez00_39)
	{
		{	/* Expand/object.scm 556 */
			{
				obj_t BgL_widenz12z12_2797;
				obj_t BgL_objz00_2798;
				obj_t BgL_providedz00_2799;

				if (PAIRP(BgL_xz00_38))
					{	/* Expand/object.scm 557 */
						obj_t BgL_cdrzd2782zd2_2804;

						BgL_cdrzd2782zd2_2804 = CDR(BgL_xz00_38);
						if (PAIRP(BgL_cdrzd2782zd2_2804))
							{	/* Expand/object.scm 557 */
								BgL_widenz12z12_2797 = CAR(BgL_xz00_38);
								BgL_objz00_2798 = CAR(BgL_cdrzd2782zd2_2804);
								BgL_providedz00_2799 = CDR(BgL_cdrzd2782zd2_2804);
								{	/* Expand/object.scm 559 */
									BgL_typez00_bglt BgL_classz00_2809;

									BgL_classz00_2809 =
										BGl_typezd2ofzd2idz00zzast_identz00(BgL_widenz12z12_2797,
										BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_38));
									{	/* Expand/object.scm 560 */
										bool_t BgL_test3115z00_5656;

										{	/* Expand/object.scm 560 */
											bool_t BgL_test3116z00_5657;

											{	/* Expand/object.scm 560 */
												bool_t BgL_res2799z00_3764;

												BgL_res2799z00_3764 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_classz00_2809),
													BGl_tclassz00zzobject_classz00);
												BgL_test3116z00_5657 = BgL_res2799z00_3764;
											}
											if (BgL_test3116z00_5657)
												{	/* Expand/object.scm 560 */
													obj_t BgL_tmpz00_5660;

													{
														BgL_tclassz00_bglt BgL_auxz00_5661;

														{
															obj_t BgL_auxz00_5662;

															{	/* Expand/object.scm 560 */
																BgL_objectz00_bglt BgL_tmpz00_5663;

																BgL_tmpz00_5663 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_classz00_2809));
																BgL_auxz00_5662 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5663);
															}
															BgL_auxz00_5661 =
																((BgL_tclassz00_bglt) BgL_auxz00_5662);
														}
														BgL_tmpz00_5660 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5661))->
															BgL_wideningz00);
													}
													BgL_test3115z00_5656 = CBOOL(BgL_tmpz00_5660);
												}
											else
												{	/* Expand/object.scm 560 */
													BgL_test3115z00_5656 = ((bool_t) 0);
												}
										}
										if (BgL_test3115z00_5656)
											{	/* Expand/object.scm 561 */
												obj_t BgL_arg2357z00_2812;

												{	/* Expand/object.scm 561 */
													obj_t BgL_arg2358z00_2813;

													BgL_arg2358z00_2813 =
														BGl_expandzd2wideningzd2zzexpand_objectz00
														(BgL_xz00_38,
														((BgL_typez00_bglt) BgL_classz00_2809),
														BgL_objz00_2798, BgL_providedz00_2799, BgL_ez00_39);
													BgL_arg2357z00_2812 =
														PROCEDURE_ENTRY(BgL_ez00_39) (BgL_ez00_39,
														BgL_arg2358z00_2813, BgL_ez00_39, BEOA);
												}
												return
													BGl_replacez12z12zztools_miscz00(BgL_xz00_38,
													BgL_arg2357z00_2812);
											}
										else
											{	/* Expand/object.scm 563 */
												obj_t BgL_arg2359z00_2814;

												{	/* Expand/object.scm 563 */
													obj_t BgL_arg2360z00_2815;

													BgL_arg2360z00_2815 =
														(((BgL_typez00_bglt) COBJECT(BgL_classz00_2809))->
														BgL_idz00);
													{	/* Expand/object.scm 563 */
														obj_t BgL_list2361z00_2816;

														BgL_list2361z00_2816 =
															MAKE_YOUNG_PAIR(BgL_arg2360z00_2815, BNIL);
														BgL_arg2359z00_2814 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string2830z00zzexpand_objectz00,
															BgL_list2361z00_2816);
													}
												}
												return
													BGl_errorz00zz__errorz00(BgL_widenz12z12_2797,
													BgL_arg2359z00_2814, BgL_xz00_38);
											}
									}
								}
							}
						else
							{	/* Expand/object.scm 557 */
							BgL_tagzd2773zd2_2801:
								return
									BGl_errorz00zz__errorz00(BGl_string2832z00zzexpand_objectz00,
									BGl_string2815z00zzexpand_objectz00, BgL_xz00_38);
							}
					}
				else
					{	/* Expand/object.scm 557 */
						goto BgL_tagzd2773zd2_2801;
					}
			}
		}

	}



/* &expand-widen! */
	obj_t BGl_z62expandzd2widenz12za2zzexpand_objectz00(obj_t BgL_envz00_3882,
		obj_t BgL_xz00_3883, obj_t BgL_ez00_3884)
	{
		{	/* Expand/object.scm 556 */
			return
				BGl_expandzd2widenz12zc0zzexpand_objectz00(BgL_xz00_3883,
				BgL_ez00_3884);
		}

	}



/* expand-widening */
	obj_t BGl_expandzd2wideningzd2zzexpand_objectz00(obj_t BgL_formz00_40,
		BgL_typez00_bglt BgL_classz00_41, obj_t BgL_oz00_42,
		obj_t BgL_providedz00_43, obj_t BgL_ez00_44)
	{
		{	/* Expand/object.scm 571 */
			{	/* Expand/object.scm 572 */
				obj_t BgL_superz00_2819;

				{
					BgL_tclassz00_bglt BgL_auxz00_5687;

					{
						obj_t BgL_auxz00_5688;

						{	/* Expand/object.scm 572 */
							BgL_objectz00_bglt BgL_tmpz00_5689;

							BgL_tmpz00_5689 = ((BgL_objectz00_bglt) BgL_classz00_41);
							BgL_auxz00_5688 = BGL_OBJECT_WIDENING(BgL_tmpz00_5689);
						}
						BgL_auxz00_5687 = ((BgL_tclassz00_bglt) BgL_auxz00_5688);
					}
					BgL_superz00_2819 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5687))->
						BgL_itszd2superzd2);
				}
				{	/* Expand/object.scm 572 */
					obj_t BgL_tidz00_2820;

					BgL_tidz00_2820 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_41)))->BgL_idz00);
					{	/* Expand/object.scm 573 */
						obj_t BgL_sidz00_2821;

						BgL_sidz00_2821 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_superz00_2819)))->BgL_idz00);
						{	/* Expand/object.scm 574 */
							obj_t BgL_tmpz00_2822;

							BgL_tmpz00_2822 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											32))));
							{	/* Expand/object.scm 575 */
								obj_t BgL_ttmpz00_2823;

								BgL_ttmpz00_2823 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_tmpz00_2822,
									BgL_sidz00_2821);
								{	/* Expand/object.scm 576 */
									obj_t BgL_slotsz00_2824;

									{	/* Expand/object.scm 577 */
										obj_t BgL_hook1296z00_2837;

										BgL_hook1296z00_2837 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
										{	/* Expand/object.scm 578 */
											obj_t BgL_g1297z00_2838;

											{
												BgL_tclassz00_bglt BgL_auxz00_5703;

												{
													obj_t BgL_auxz00_5704;

													{	/* Expand/object.scm 578 */
														BgL_objectz00_bglt BgL_tmpz00_5705;

														BgL_tmpz00_5705 =
															((BgL_objectz00_bglt) BgL_classz00_41);
														BgL_auxz00_5704 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5705);
													}
													BgL_auxz00_5703 =
														((BgL_tclassz00_bglt) BgL_auxz00_5704);
												}
												BgL_g1297z00_2838 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5703))->
													BgL_slotsz00);
											}
											{
												obj_t BgL_l1293z00_2840;
												obj_t BgL_h1294z00_2841;

												BgL_l1293z00_2840 = BgL_g1297z00_2838;
												BgL_h1294z00_2841 = BgL_hook1296z00_2837;
											BgL_zc3z04anonymousza32376ze3z87_2842:
												if (NULLP(BgL_l1293z00_2840))
													{	/* Expand/object.scm 578 */
														BgL_slotsz00_2824 = CDR(BgL_hook1296z00_2837);
													}
												else
													{	/* Expand/object.scm 578 */
														if (
															((((BgL_slotz00_bglt) COBJECT(
																			((BgL_slotz00_bglt)
																				CAR(
																					((obj_t) BgL_l1293z00_2840)))))->
																	BgL_classzd2ownerzd2) ==
																((obj_t) BgL_classz00_41)))
															{	/* Expand/object.scm 578 */
																obj_t BgL_nh1295z00_2847;

																{	/* Expand/object.scm 578 */
																	obj_t BgL_arg2382z00_2849;

																	BgL_arg2382z00_2849 =
																		CAR(((obj_t) BgL_l1293z00_2840));
																	{	/* Expand/object.scm 578 */
																		obj_t BgL_res2803z00_3785;

																		BgL_res2803z00_3785 =
																			MAKE_YOUNG_PAIR(BgL_arg2382z00_2849,
																			BNIL);
																		BgL_nh1295z00_2847 = BgL_res2803z00_3785;
																	}
																}
																SET_CDR(BgL_h1294z00_2841, BgL_nh1295z00_2847);
																{	/* Expand/object.scm 578 */
																	obj_t BgL_arg2381z00_2848;

																	BgL_arg2381z00_2848 =
																		CDR(((obj_t) BgL_l1293z00_2840));
																	{
																		obj_t BgL_h1294z00_5727;
																		obj_t BgL_l1293z00_5726;

																		BgL_l1293z00_5726 = BgL_arg2381z00_2848;
																		BgL_h1294z00_5727 = BgL_nh1295z00_2847;
																		BgL_h1294z00_2841 = BgL_h1294z00_5727;
																		BgL_l1293z00_2840 = BgL_l1293z00_5726;
																		goto BgL_zc3z04anonymousza32376ze3z87_2842;
																	}
																}
															}
														else
															{	/* Expand/object.scm 578 */
																obj_t BgL_arg2383z00_2850;

																BgL_arg2383z00_2850 =
																	CDR(((obj_t) BgL_l1293z00_2840));
																{
																	obj_t BgL_l1293z00_5730;

																	BgL_l1293z00_5730 = BgL_arg2383z00_2850;
																	BgL_l1293z00_2840 = BgL_l1293z00_5730;
																	goto BgL_zc3z04anonymousza32376ze3z87_2842;
																}
															}
													}
											}
										}
									}
									{	/* Expand/object.scm 577 */

										{	/* Expand/object.scm 579 */
											obj_t BgL_arg2363z00_2825;

											{	/* Expand/object.scm 579 */
												obj_t BgL_arg2364z00_2826;
												obj_t BgL_arg2365z00_2827;

												{	/* Expand/object.scm 579 */
													obj_t BgL_arg2366z00_2828;

													{	/* Expand/object.scm 579 */
														obj_t BgL_arg2367z00_2829;

														BgL_arg2367z00_2829 =
															MAKE_YOUNG_PAIR(BgL_oz00_42, BNIL);
														BgL_arg2366z00_2828 =
															MAKE_YOUNG_PAIR(BgL_ttmpz00_2823,
															BgL_arg2367z00_2829);
													}
													BgL_arg2364z00_2826 =
														MAKE_YOUNG_PAIR(BgL_arg2366z00_2828, BNIL);
												}
												{	/* Expand/object.scm 580 */
													obj_t BgL_arg2368z00_2830;
													obj_t BgL_arg2369z00_2831;

													BgL_arg2368z00_2830 =
														BGl_classgenzd2widenzd2exprz00zzobject_classgenz00
														(BgL_classz00_41, BgL_tmpz00_2822);
													{	/* Expand/object.scm 581 */
														obj_t BgL_arg2370z00_2832;

														{	/* Expand/object.scm 581 */
															obj_t BgL_arg2371z00_2833;
															obj_t BgL_arg2372z00_2834;
															obj_t BgL_arg2374z00_2835;

															BgL_arg2371z00_2833 =
																CAR(((obj_t) BgL_formz00_40));
															{	/* Expand/object.scm 581 */
																obj_t BgL_pairz00_3793;

																BgL_pairz00_3793 =
																	CDR(((obj_t) BgL_formz00_40));
																BgL_arg2372z00_2834 = CDR(BgL_pairz00_3793);
															}
															{	/* Expand/object.scm 582 */
																obj_t BgL_list2375z00_2836;

																BgL_list2375z00_2836 =
																	MAKE_YOUNG_PAIR(BgL_tmpz00_2822, BNIL);
																BgL_arg2374z00_2835 =
																	BGl_makezd2privatezd2sexpz00zzast_privatez00
																	(CNST_TABLE_REF(((long) 34)), BgL_tidz00_2820,
																	BgL_list2375z00_2836);
															}
															BgL_arg2370z00_2832 =
																BGl_instantiatezd2fillzd2zzexpand_objectz00
																(BgL_arg2371z00_2833, BgL_arg2372z00_2834,
																((obj_t) BgL_classz00_41), BgL_slotsz00_2824,
																BgL_arg2374z00_2835, BgL_formz00_40,
																BgL_ez00_44);
														}
														BgL_arg2369z00_2831 =
															MAKE_YOUNG_PAIR(BgL_arg2370z00_2832, BNIL);
													}
													BgL_arg2365z00_2827 =
														MAKE_YOUNG_PAIR(BgL_arg2368z00_2830,
														BgL_arg2369z00_2831);
												}
												BgL_arg2363z00_2825 =
													MAKE_YOUNG_PAIR(BgL_arg2364z00_2826,
													BgL_arg2365z00_2827);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
												BgL_arg2363z00_2825);
		}}}}}}}}}

	}



/* expand-shrink! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2shrinkz12zc0zzexpand_objectz00(obj_t
		BgL_xz00_45, obj_t BgL_ez00_46)
	{
		{	/* Expand/object.scm 587 */
			{
				obj_t BgL_symz00_2855;
				obj_t BgL_oz00_2856;

				if (PAIRP(BgL_xz00_45))
					{	/* Expand/object.scm 588 */
						obj_t BgL_carzd2797zd2_2861;
						obj_t BgL_cdrzd2798zd2_2862;

						BgL_carzd2797zd2_2861 = CAR(BgL_xz00_45);
						BgL_cdrzd2798zd2_2862 = CDR(BgL_xz00_45);
						if (SYMBOLP(BgL_carzd2797zd2_2861))
							{	/* Expand/object.scm 588 */
								if (PAIRP(BgL_cdrzd2798zd2_2862))
									{	/* Expand/object.scm 588 */
										if (NULLP(CDR(BgL_cdrzd2798zd2_2862)))
											{	/* Expand/object.scm 588 */
												BgL_symz00_2855 = BgL_carzd2797zd2_2861;
												BgL_oz00_2856 = CAR(BgL_cdrzd2798zd2_2862);
												{	/* Expand/object.scm 590 */
													obj_t BgL_sz00_2869;

													BgL_sz00_2869 =
														BGl_parsezd2idzd2zzast_identz00(BgL_symz00_2855,
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_xz00_45));
													if ((CAR(BgL_sz00_2869) ==
															CNST_TABLE_REF(((long) 35))))
														{	/* Expand/object.scm 591 */
															return
																BGl_replacez12z12zztools_miscz00(BgL_xz00_45,
																BGl_makezd2azd2shrinkz12z12zzexpand_objectz00
																(BgL_ez00_46, BgL_oz00_2856));
														}
													else
														{	/* Expand/object.scm 591 */
															return
																BGl_errorz00zz__errorz00(BgL_symz00_2855,
																BGl_string2833z00zzexpand_objectz00,
																BgL_xz00_45);
														}
												}
											}
										else
											{	/* Expand/object.scm 588 */
											BgL_tagzd2791zd2_2858:
												return
													BGl_errorz00zz__errorz00
													(BGl_string2834z00zzexpand_objectz00,
													BGl_string2815z00zzexpand_objectz00, BgL_xz00_45);
											}
									}
								else
									{	/* Expand/object.scm 588 */
										goto BgL_tagzd2791zd2_2858;
									}
							}
						else
							{	/* Expand/object.scm 588 */
								goto BgL_tagzd2791zd2_2858;
							}
					}
				else
					{	/* Expand/object.scm 588 */
						goto BgL_tagzd2791zd2_2858;
					}
			}
		}

	}



/* &expand-shrink! */
	obj_t BGl_z62expandzd2shrinkz12za2zzexpand_objectz00(obj_t BgL_envz00_3885,
		obj_t BgL_xz00_3886, obj_t BgL_ez00_3887)
	{
		{	/* Expand/object.scm 587 */
			return
				BGl_expandzd2shrinkz12zc0zzexpand_objectz00(BgL_xz00_3886,
				BgL_ez00_3887);
		}

	}



/* make-a-shrink! */
	obj_t BGl_makezd2azd2shrinkz12z12zzexpand_objectz00(obj_t BgL_ez00_47,
		obj_t BgL_oz00_48)
	{
		{	/* Expand/object.scm 600 */
			{	/* Expand/object.scm 601 */
				obj_t BgL_newoz00_2875;

				BgL_newoz00_2875 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 36))));
				if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
					{	/* Expand/object.scm 603 */
						obj_t BgL_arg2398z00_2876;

						{	/* Expand/object.scm 603 */
							obj_t BgL_arg2399z00_2877;
							obj_t BgL_arg2402z00_2878;

							{	/* Expand/object.scm 603 */
								obj_t BgL_arg2404z00_2879;

								{	/* Expand/object.scm 603 */
									obj_t BgL_arg2405z00_2880;

									{	/* Expand/object.scm 603 */
										obj_t BgL_arg2406z00_2881;

										BgL_arg2406z00_2881 =
											PROCEDURE_ENTRY(BgL_ez00_47) (BgL_ez00_47, BgL_oz00_48,
											BgL_ez00_47, BEOA);
										BgL_arg2405z00_2880 =
											MAKE_YOUNG_PAIR(BgL_arg2406z00_2881, BNIL);
									}
									BgL_arg2404z00_2879 =
										MAKE_YOUNG_PAIR(BgL_newoz00_2875, BgL_arg2405z00_2880);
								}
								BgL_arg2399z00_2877 =
									MAKE_YOUNG_PAIR(BgL_arg2404z00_2879, BNIL);
							}
							{	/* Expand/object.scm 604 */
								obj_t BgL_arg2407z00_2882;
								obj_t BgL_arg2409z00_2883;

								{	/* Expand/object.scm 604 */
									obj_t BgL_arg2411z00_2884;
									obj_t BgL_arg2412z00_2885;

									{	/* Expand/object.scm 604 */
										obj_t BgL_arg2413z00_2886;

										{	/* Expand/object.scm 604 */
											obj_t BgL_arg2414z00_2887;

											BgL_arg2414z00_2887 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)), BNIL);
											BgL_arg2413z00_2886 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
												BgL_arg2414z00_2887);
										}
										BgL_arg2411z00_2884 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
											BgL_arg2413z00_2886);
									}
									{	/* Expand/object.scm 606 */
										obj_t BgL_arg2415z00_2888;

										{	/* Expand/object.scm 606 */
											obj_t BgL_arg2416z00_2889;

											{	/* Expand/object.scm 606 */
												obj_t BgL_arg2418z00_2890;
												obj_t BgL_arg2419z00_2891;

												{	/* Expand/object.scm 606 */
													obj_t BgL_arg2420z00_2892;

													{	/* Expand/object.scm 606 */
														obj_t BgL_arg2421z00_2893;

														BgL_arg2421z00_2893 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)), BNIL);
														BgL_arg2420z00_2892 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 38)),
															BgL_arg2421z00_2893);
													}
													BgL_arg2418z00_2890 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
														BgL_arg2420z00_2892);
												}
												{	/* Expand/object.scm 607 */
													obj_t BgL_arg2422z00_2894;

													{	/* Expand/object.scm 607 */
														obj_t BgL_arg2424z00_2895;
														obj_t BgL_arg2425z00_2896;

														{	/* Expand/object.scm 607 */
															obj_t BgL_arg2426z00_2897;

															{	/* Expand/object.scm 607 */
																obj_t BgL_arg2427z00_2898;

																BgL_arg2427z00_2898 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BNIL);
																BgL_arg2426z00_2897 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 39)),
																	BgL_arg2427z00_2898);
															}
															BgL_arg2424z00_2895 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																BgL_arg2426z00_2897);
														}
														{	/* Expand/object.scm 608 */
															obj_t BgL_arg2428z00_2899;

															{	/* Expand/object.scm 608 */
																obj_t BgL_arg2430z00_2900;
																obj_t BgL_arg2431z00_2901;

																{	/* Expand/object.scm 608 */
																	obj_t BgL_arg2433z00_2902;

																	{	/* Expand/object.scm 608 */
																		obj_t BgL_arg2435z00_2903;

																		BgL_arg2435z00_2903 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					8)), BNIL);
																		BgL_arg2433z00_2902 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					40)), BgL_arg2435z00_2903);
																	}
																	BgL_arg2430z00_2900 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																		BgL_arg2433z00_2902);
																}
																BgL_arg2431z00_2901 =
																	MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
																BgL_arg2428z00_2899 =
																	MAKE_YOUNG_PAIR(BgL_arg2430z00_2900,
																	BgL_arg2431z00_2901);
															}
															BgL_arg2425z00_2896 =
																MAKE_YOUNG_PAIR(BgL_arg2428z00_2899, BNIL);
														}
														BgL_arg2422z00_2894 =
															MAKE_YOUNG_PAIR(BgL_arg2424z00_2895,
															BgL_arg2425z00_2896);
													}
													BgL_arg2419z00_2891 =
														MAKE_YOUNG_PAIR(BgL_arg2422z00_2894, BNIL);
												}
												BgL_arg2416z00_2889 =
													MAKE_YOUNG_PAIR(BgL_arg2418z00_2890,
													BgL_arg2419z00_2891);
											}
											BgL_arg2415z00_2888 =
												MAKE_YOUNG_PAIR(BgL_arg2416z00_2889, BNIL);
										}
										BgL_arg2412z00_2885 =
											MAKE_YOUNG_PAIR(BgL_newoz00_2875, BgL_arg2415z00_2888);
									}
									BgL_arg2407z00_2882 =
										MAKE_YOUNG_PAIR(BgL_arg2411z00_2884, BgL_arg2412z00_2885);
								}
								{	/* Expand/object.scm 609 */
									obj_t BgL_arg2437z00_2904;
									obj_t BgL_arg2438z00_2905;

									{	/* Expand/object.scm 609 */
										obj_t BgL_arg2439z00_2906;

										{	/* Expand/object.scm 609 */
											obj_t BgL_arg2441z00_2907;

											BgL_arg2441z00_2907 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											BgL_arg2439z00_2906 =
												MAKE_YOUNG_PAIR(BgL_newoz00_2875, BgL_arg2441z00_2907);
										}
										BgL_arg2437z00_2904 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)),
											BgL_arg2439z00_2906);
									}
									BgL_arg2438z00_2905 = MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
									BgL_arg2409z00_2883 =
										MAKE_YOUNG_PAIR(BgL_arg2437z00_2904, BgL_arg2438z00_2905);
								}
								BgL_arg2402z00_2878 =
									MAKE_YOUNG_PAIR(BgL_arg2407z00_2882, BgL_arg2409z00_2883);
							}
							BgL_arg2398z00_2876 =
								MAKE_YOUNG_PAIR(BgL_arg2399z00_2877, BgL_arg2402z00_2878);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BgL_arg2398z00_2876);
					}
				else
					{	/* Expand/object.scm 611 */
						obj_t BgL_arg2443z00_2908;

						{	/* Expand/object.scm 611 */
							obj_t BgL_arg2444z00_2909;
							obj_t BgL_arg2446z00_2910;

							{	/* Expand/object.scm 611 */
								obj_t BgL_arg2447z00_2911;

								{	/* Expand/object.scm 611 */
									obj_t BgL_arg2448z00_2912;

									{	/* Expand/object.scm 611 */
										obj_t BgL_arg2449z00_2913;

										BgL_arg2449z00_2913 =
											PROCEDURE_ENTRY(BgL_ez00_47) (BgL_ez00_47, BgL_oz00_48,
											BgL_ez00_47, BEOA);
										BgL_arg2448z00_2912 =
											MAKE_YOUNG_PAIR(BgL_arg2449z00_2913, BNIL);
									}
									BgL_arg2447z00_2911 =
										MAKE_YOUNG_PAIR(BgL_newoz00_2875, BgL_arg2448z00_2912);
								}
								BgL_arg2444z00_2909 =
									MAKE_YOUNG_PAIR(BgL_arg2447z00_2911, BNIL);
							}
							{	/* Expand/object.scm 612 */
								obj_t BgL_arg2450z00_2914;

								{	/* Expand/object.scm 612 */
									obj_t BgL_arg2451z00_2915;

									{	/* Expand/object.scm 612 */
										obj_t BgL_arg2452z00_2916;
										obj_t BgL_arg2453z00_2917;

										{	/* Expand/object.scm 612 */
											obj_t BgL_arg2455z00_2918;

											BgL_arg2455z00_2918 =
												MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
											BgL_arg2452z00_2916 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 42)),
												BgL_arg2455z00_2918);
										}
										{	/* Expand/object.scm 613 */
											obj_t BgL_arg2456z00_2919;
											obj_t BgL_arg2457z00_2920;

											{	/* Expand/object.scm 613 */
												obj_t BgL_arg2458z00_2921;

												{	/* Expand/object.scm 613 */
													obj_t BgL_arg2460z00_2922;
													obj_t BgL_arg2461z00_2923;

													{	/* Expand/object.scm 613 */
														obj_t BgL_arg2462z00_2924;

														BgL_arg2462z00_2924 =
															MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
														BgL_arg2460z00_2922 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 43)),
															BgL_arg2462z00_2924);
													}
													{	/* Expand/object.scm 615 */
														obj_t BgL_arg2463z00_2925;
														obj_t BgL_arg2464z00_2926;

														{	/* Expand/object.scm 615 */
															obj_t BgL_arg2466z00_2927;

															{	/* Expand/object.scm 615 */
																obj_t BgL_arg2467z00_2928;
																obj_t BgL_arg2469z00_2929;

																{	/* Expand/object.scm 615 */
																	obj_t BgL_arg2470z00_2930;
																	obj_t BgL_arg2471z00_2931;

																	{	/* Expand/object.scm 615 */
																		obj_t BgL_arg2473z00_2932;

																		{	/* Expand/object.scm 615 */
																			obj_t BgL_arg2474z00_2933;

																			BgL_arg2474z00_2933 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						8)), BNIL);
																			BgL_arg2473z00_2932 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						37)), BgL_arg2474z00_2933);
																		}
																		BgL_arg2470z00_2930 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					10)), BgL_arg2473z00_2932);
																	}
																	{	/* Expand/object.scm 617 */
																		obj_t BgL_arg2475z00_2934;

																		{	/* Expand/object.scm 617 */
																			obj_t BgL_arg2476z00_2935;

																			{	/* Expand/object.scm 617 */
																				obj_t BgL_arg2477z00_2936;
																				obj_t BgL_arg2479z00_2937;

																				{	/* Expand/object.scm 617 */
																					obj_t BgL_arg2481z00_2938;

																					{	/* Expand/object.scm 617 */
																						obj_t BgL_arg2482z00_2939;

																						BgL_arg2482z00_2939 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 8)), BNIL);
																						BgL_arg2481z00_2938 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 38)),
																							BgL_arg2482z00_2939);
																					}
																					BgL_arg2477z00_2936 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 10)),
																						BgL_arg2481z00_2938);
																				}
																				{	/* Expand/object.scm 618 */
																					obj_t BgL_arg2483z00_2940;

																					{	/* Expand/object.scm 618 */
																						obj_t BgL_arg2484z00_2941;
																						obj_t BgL_arg2486z00_2942;

																						{	/* Expand/object.scm 618 */
																							obj_t BgL_arg2487z00_2943;

																							{	/* Expand/object.scm 618 */
																								obj_t BgL_arg2488z00_2944;

																								BgL_arg2488z00_2944 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 8)), BNIL);
																								BgL_arg2487z00_2943 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 39)),
																									BgL_arg2488z00_2944);
																							}
																							BgL_arg2484z00_2941 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 10)),
																								BgL_arg2487z00_2943);
																						}
																						{	/* Expand/object.scm 619 */
																							obj_t BgL_arg2491z00_2945;

																							{	/* Expand/object.scm 619 */
																								obj_t BgL_arg2494z00_2946;
																								obj_t BgL_arg2496z00_2947;

																								{	/* Expand/object.scm 619 */
																									obj_t BgL_arg2497z00_2948;

																									{	/* Expand/object.scm 619 */
																										obj_t BgL_arg2499z00_2949;

																										BgL_arg2499z00_2949 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													8)), BNIL);
																										BgL_arg2497z00_2948 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													40)),
																											BgL_arg2499z00_2949);
																									}
																									BgL_arg2494z00_2946 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												10)),
																										BgL_arg2497z00_2948);
																								}
																								BgL_arg2496z00_2947 =
																									MAKE_YOUNG_PAIR
																									(BgL_newoz00_2875, BNIL);
																								BgL_arg2491z00_2945 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2494z00_2946,
																									BgL_arg2496z00_2947);
																							}
																							BgL_arg2486z00_2942 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2491z00_2945, BNIL);
																						}
																						BgL_arg2483z00_2940 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2484z00_2941,
																							BgL_arg2486z00_2942);
																					}
																					BgL_arg2479z00_2937 =
																						MAKE_YOUNG_PAIR(BgL_arg2483z00_2940,
																						BNIL);
																				}
																				BgL_arg2476z00_2935 =
																					MAKE_YOUNG_PAIR(BgL_arg2477z00_2936,
																					BgL_arg2479z00_2937);
																			}
																			BgL_arg2475z00_2934 =
																				MAKE_YOUNG_PAIR(BgL_arg2476z00_2935,
																				BNIL);
																		}
																		BgL_arg2471z00_2931 =
																			MAKE_YOUNG_PAIR(BgL_newoz00_2875,
																			BgL_arg2475z00_2934);
																	}
																	BgL_arg2467z00_2928 =
																		MAKE_YOUNG_PAIR(BgL_arg2470z00_2930,
																		BgL_arg2471z00_2931);
																}
																{	/* Expand/object.scm 620 */
																	obj_t BgL_arg2500z00_2950;
																	obj_t BgL_arg2501z00_2951;

																	{	/* Expand/object.scm 620 */
																		obj_t BgL_arg2502z00_2952;

																		{	/* Expand/object.scm 620 */
																			obj_t BgL_arg2503z00_2953;

																			BgL_arg2503z00_2953 =
																				MAKE_YOUNG_PAIR(BFALSE, BNIL);
																			BgL_arg2502z00_2952 =
																				MAKE_YOUNG_PAIR(BgL_newoz00_2875,
																				BgL_arg2503z00_2953);
																		}
																		BgL_arg2500z00_2950 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					41)), BgL_arg2502z00_2952);
																	}
																	BgL_arg2501z00_2951 =
																		MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
																	BgL_arg2469z00_2929 =
																		MAKE_YOUNG_PAIR(BgL_arg2500z00_2950,
																		BgL_arg2501z00_2951);
																}
																BgL_arg2466z00_2927 =
																	MAKE_YOUNG_PAIR(BgL_arg2467z00_2928,
																	BgL_arg2469z00_2929);
															}
															BgL_arg2463z00_2925 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
																BgL_arg2466z00_2927);
														}
														{	/* Expand/object.scm 622 */
															obj_t BgL_arg2504z00_2954;

															{	/* Expand/object.scm 622 */
																obj_t BgL_arg2506z00_2955;

																{	/* Expand/object.scm 622 */
																	obj_t BgL_arg2508z00_2956;

																	{	/* Expand/object.scm 622 */
																		obj_t BgL_arg2512z00_2957;

																		BgL_arg2512z00_2957 =
																			MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
																		BgL_arg2508z00_2956 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2835z00zzexpand_objectz00,
																			BgL_arg2512z00_2957);
																	}
																	BgL_arg2506z00_2955 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2834z00zzexpand_objectz00,
																		BgL_arg2508z00_2956);
																}
																BgL_arg2504z00_2954 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 44)),
																	BgL_arg2506z00_2955);
															}
															BgL_arg2464z00_2926 =
																MAKE_YOUNG_PAIR(BgL_arg2504z00_2954, BNIL);
														}
														BgL_arg2461z00_2923 =
															MAKE_YOUNG_PAIR(BgL_arg2463z00_2925,
															BgL_arg2464z00_2926);
													}
													BgL_arg2458z00_2921 =
														MAKE_YOUNG_PAIR(BgL_arg2460z00_2922,
														BgL_arg2461z00_2923);
												}
												BgL_arg2456z00_2919 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 45)),
													BgL_arg2458z00_2921);
											}
											{	/* Expand/object.scm 623 */
												obj_t BgL_arg2515z00_2958;

												{	/* Expand/object.scm 623 */
													obj_t BgL_arg2518z00_2959;

													{	/* Expand/object.scm 623 */
														obj_t BgL_arg2519z00_2960;

														{	/* Expand/object.scm 623 */
															obj_t BgL_arg2520z00_2961;

															BgL_arg2520z00_2961 =
																MAKE_YOUNG_PAIR(BgL_newoz00_2875, BNIL);
															BgL_arg2519z00_2960 =
																MAKE_YOUNG_PAIR
																(BGl_string2835z00zzexpand_objectz00,
																BgL_arg2520z00_2961);
														}
														BgL_arg2518z00_2959 =
															MAKE_YOUNG_PAIR
															(BGl_string2834z00zzexpand_objectz00,
															BgL_arg2519z00_2960);
													}
													BgL_arg2515z00_2958 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 44)),
														BgL_arg2518z00_2959);
												}
												BgL_arg2457z00_2920 =
													MAKE_YOUNG_PAIR(BgL_arg2515z00_2958, BNIL);
											}
											BgL_arg2453z00_2917 =
												MAKE_YOUNG_PAIR(BgL_arg2456z00_2919,
												BgL_arg2457z00_2920);
										}
										BgL_arg2451z00_2915 =
											MAKE_YOUNG_PAIR(BgL_arg2452z00_2916, BgL_arg2453z00_2917);
									}
									BgL_arg2450z00_2914 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 45)),
										BgL_arg2451z00_2915);
								}
								BgL_arg2446z00_2910 =
									MAKE_YOUNG_PAIR(BgL_arg2450z00_2914, BNIL);
							}
							BgL_arg2443z00_2908 =
								MAKE_YOUNG_PAIR(BgL_arg2444z00_2909, BgL_arg2446z00_2910);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BgL_arg2443z00_2908);
		}}}

	}



/* object-epairify */
	obj_t BGl_objectzd2epairifyzd2zzexpand_objectz00(obj_t BgL_objz00_49,
		obj_t BgL_epairz00_50)
	{
		{	/* Expand/object.scm 628 */
		BGl_objectzd2epairifyzd2zzexpand_objectz00:
			{	/* Expand/object.scm 629 */
				bool_t BgL_test3125z00_5909;

				{	/* Expand/object.scm 629 */
					bool_t BgL_res2808z00_3803;

					BgL_res2808z00_3803 = EPAIRP(BgL_objz00_49);
					BgL_test3125z00_5909 = BgL_res2808z00_3803;
				}
				if (BgL_test3125z00_5909)
					{	/* Expand/object.scm 629 */
						return BgL_objz00_49;
					}
				else
					{	/* Expand/object.scm 631 */
						bool_t BgL_test3126z00_5911;

						{	/* Expand/object.scm 631 */
							bool_t BgL_res2809z00_3804;

							BgL_res2809z00_3804 = EPAIRP(BgL_epairz00_50);
							BgL_test3126z00_5911 = BgL_res2809z00_3804;
						}
						if (BgL_test3126z00_5911)
							{	/* Expand/object.scm 631 */
								if (PAIRP(BgL_objz00_49))
									{	/* Expand/object.scm 633 */
										obj_t BgL_arg2525z00_2966;
										obj_t BgL_arg2526z00_2967;
										obj_t BgL_arg2527z00_2968;

										BgL_arg2525z00_2966 = CAR(BgL_objz00_49);
										BgL_arg2526z00_2967 = CDR(BgL_objz00_49);
										BgL_arg2527z00_2968 = CER(((obj_t) BgL_epairz00_50));
										{	/* Expand/object.scm 633 */
											obj_t BgL_res2811z00_3809;

											BgL_res2811z00_3809 =
												MAKE_YOUNG_EPAIR(BgL_arg2525z00_2966,
												BgL_arg2526z00_2967, BgL_arg2527z00_2968);
											return BgL_res2811z00_3809;
										}
									}
								else
									{	/* Expand/object.scm 634 */
										obj_t BgL_arg2529z00_2969;

										{	/* Expand/object.scm 634 */
											obj_t BgL_arg2530z00_2970;

											BgL_arg2530z00_2970 =
												MAKE_YOUNG_PAIR(BgL_objz00_49, BNIL);
											BgL_arg2529z00_2969 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
												BgL_arg2530z00_2970);
										}
										{
											obj_t BgL_objz00_5923;

											BgL_objz00_5923 = BgL_arg2529z00_2969;
											BgL_objz00_49 = BgL_objz00_5923;
											goto BGl_objectzd2epairifyzd2zzexpand_objectz00;
										}
									}
							}
						else
							{	/* Expand/object.scm 631 */
								return BgL_objz00_49;
							}
					}
			}
		}

	}



/* find-slot-offset */
	obj_t BGl_findzd2slotzd2offsetz00zzexpand_objectz00(obj_t BgL_slotsz00_53,
		obj_t BgL_namez00_54, obj_t BgL_formz00_55, obj_t BgL_sexpz00_56)
	{
		{	/* Expand/object.scm 646 */
			{	/* Expand/object.scm 647 */
				obj_t BgL_sz00_2971;

				{
					obj_t BgL_list1299z00_2976;

					BgL_list1299z00_2976 = BgL_slotsz00_53;
				BgL_zc3z04anonymousza32534ze3z87_2977:
					if (PAIRP(BgL_list1299z00_2976))
						{	/* Expand/object.scm 647 */
							if (
								((((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt)
													CAR(BgL_list1299z00_2976))))->BgL_idz00) ==
									BgL_namez00_54))
								{	/* Expand/object.scm 647 */
									BgL_sz00_2971 = CAR(BgL_list1299z00_2976);
								}
							else
								{
									obj_t BgL_list1299z00_5932;

									BgL_list1299z00_5932 = CDR(BgL_list1299z00_2976);
									BgL_list1299z00_2976 = BgL_list1299z00_5932;
									goto BgL_zc3z04anonymousza32534ze3z87_2977;
								}
						}
					else
						{	/* Expand/object.scm 647 */
							BgL_sz00_2971 = BFALSE;
						}
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_sz00_2971,
						BGl_slotz00zzobject_slotsz00))
					{	/* Expand/object.scm 648 */
						return
							BINT(
							(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_sz00_2971)))->BgL_indexz00));
					}
				else
					{	/* Expand/object.scm 650 */
						obj_t BgL_arg2532z00_2973;

						{	/* Expand/object.scm 650 */
							obj_t BgL_list2533z00_2974;

							BgL_list2533z00_2974 = MAKE_YOUNG_PAIR(BgL_namez00_54, BNIL);
							BgL_arg2532z00_2973 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2836z00zzexpand_objectz00, BgL_list2533z00_2974);
						}
						return
							BGl_errorz00zz__errorz00(BgL_formz00_55, BgL_arg2532z00_2973,
							BgL_sexpz00_56);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_objectz00()
	{
		{	/* Expand/object.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_objectz00(((long) 520121765),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzread_inlinez00(((long) 500058920),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_classgenz00(((long) 502726801),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 223654870),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 499400866),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string2837z00zzexpand_objectz00));
		}

	}

#ifdef __cplusplus
}
#endif
