/*===========================================================================*/
/*   (Ast/unit.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/unit.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	extern obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31598ze3ze5zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initializa7ersz75zzast_unitz00();
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	static obj_t BGl_dozd2etazd2expanseze70ze7zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_makezd2genericzd2definitionz00zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33001ze3ze70z60zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_unitz00();
	extern obj_t BGl_markzd2methodz12zc0zzobject_methodz00(obj_t);
	extern obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t,
		int);
	BGL_IMPORT obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_declarezd2unitz12zc0zzast_unitz00(obj_t, long);
	static obj_t BGl_appendzd221011zd2zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_unitz00();
	extern obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62unitzd2initializa7erzd2idzc5zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_toplevelzd2ze3astz31zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_etazd2expansezd2zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62unitzd2sexpza2zd2addz12zd2zzast_unitz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62unitzd2initzd2callsz62zzast_unitz00(obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelza2zd2ze3astz93zzast_unitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_unitz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_parsezd2funzd2optzd2argszd2zzast_unitz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t);
	static obj_t BGl_makezd2genericzd2keyzd2definitionzd2zzast_unitz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t);
	static obj_t BGl_makezd2genericzd2nooptzd2definitionzd2zzast_unitz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopze70ze7zzast_unitz00(obj_t, obj_t);
	extern bool_t BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t);
	extern obj_t BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_unitz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_unitz00();
	static obj_t BGl_makezd2sfunzd2definitionz00zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2methodzd2bodyz00zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_unitz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_typedzd2argsze70z35zzast_unitz00(obj_t, BgL_globalz00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2unitzd2listza2zd2zzast_unitz00 = BUNSPEC;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_epairifyzd2propagatezd2locz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_makezd2methodzd2dssslzd2bodyzd2zzobject_methodz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static bool_t BGl_lambdazf3zf3zzast_unitz00(obj_t);
	static obj_t BGl_z62unitzd2sexpza2zd2addzd2headz12z00zzast_unitz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_z62unitzd2initializa7ersz17zzast_unitz00(obj_t);
	extern obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00();
	extern bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static obj_t BGl_makezd2svarzd2definitionz00zzast_unitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_methodz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_genericz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t,
		obj_t);
	static obj_t BGl_z62unitzd2ze3defsz53zzast_unitz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initzd2callsz00zzast_unitz00();
	BGL_IMPORT obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_unitz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_unitz00();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_unitz00();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	static obj_t BGl_makezd2methodzd2definitionz00zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00();
	extern obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00;
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl_makezd2genericzd2optzd2definitionzd2zzast_unitz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_parsezd2funzd2argsz00zzast_unitz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00(obj_t);
	static obj_t __cnst[55];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2ze3defszd2envze3zzast_unitz00,
		BgL_bgl_za762unitza7d2za7e3def3692za7,
		BGl_z62unitzd2ze3defsz53zzast_unitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2sexpza2zd2addzd2headz12zd2envzb0zzast_unitz00,
		BgL_bgl_za762unitza7d2sexpza7a3693za7,
		BGl_z62unitzd2sexpza2zd2addzd2headz12z00zzast_unitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2initzd2callszd2envzd2zzast_unitz00,
		BgL_bgl_za762unitza7d2initza7d3694za7,
		BGl_z62unitzd2initzd2callsz62zzast_unitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2sexpza2zd2addz12zd2envz62zzast_unitz00,
		BgL_bgl_za762unitza7d2sexpza7a3695za7,
		BGl_z62unitzd2sexpza2zd2addz12zd2zzast_unitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3671z00zzast_unitz00,
		BgL_bgl_string3671za700za7za7a3696za7, "]", 1);
	      DEFINE_STRING(BGl_string3672z00zzast_unitz00,
		BgL_bgl_string3672za700za7za7a3697za7, "      [", 7);
	      DEFINE_STRING(BGl_string3673z00zzast_unitz00,
		BgL_bgl_string3673za700za7za7a3698za7,
		"Unable to eta-expand #!optional alias", 37);
	      DEFINE_STRING(BGl_string3674z00zzast_unitz00,
		BgL_bgl_string3674za700za7za7a3699za7, "Unable to eta-expand #!key alias",
		32);
	      DEFINE_STRING(BGl_string3675z00zzast_unitz00,
		BgL_bgl_string3675za700za7za7a3700za7, "form no longer supported", 24);
	      DEFINE_STRING(BGl_string3676z00zzast_unitz00,
		BgL_bgl_string3676za700za7za7a3701za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string3677z00zzast_unitz00,
		BgL_bgl_string3677za700za7za7a3702za7, "Illegal '() expression", 22);
	      DEFINE_STRING(BGl_string3678z00zzast_unitz00,
		BgL_bgl_string3678za700za7za7a3703za7, "] expected, provided", 20);
	      DEFINE_STRING(BGl_string3679z00zzast_unitz00,
		BgL_bgl_string3679za700za7za7a3704za7, "..", 2);
	      DEFINE_STRING(BGl_string3680z00zzast_unitz00,
		BgL_bgl_string3680za700za7za7a3705za7, "wrong number of arguments: [", 28);
	      DEFINE_STRING(BGl_string3681z00zzast_unitz00,
		BgL_bgl_string3681za700za7za7a3706za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string3682z00zzast_unitz00,
		BgL_bgl_string3682za700za7za7a3707za7,
		"generics can only use on DSSSL keyword", 38);
	      DEFINE_STRING(BGl_string3683z00zzast_unitz00,
		BgL_bgl_string3683za700za7za7a3708za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3684z00zzast_unitz00,
		BgL_bgl_string3684za700za7za7a3709za7, "Bad generic formal argument", 27);
	      DEFINE_STRING(BGl_string3685z00zzast_unitz00,
		BgL_bgl_string3685za700za7za7a3710za7, "::", 2);
	      DEFINE_STRING(BGl_string3686z00zzast_unitz00,
		BgL_bgl_string3686za700za7za7a3711za7, "Bad method formal argument", 26);
	      DEFINE_STRING(BGl_string3687z00zzast_unitz00,
		BgL_bgl_string3687za700za7za7a3712za7, "ast_unit", 8);
	      DEFINE_STRING(BGl_string3688z00zzast_unitz00,
		BgL_bgl_string3688za700za7za7a3713za7,
		"unit register-generic! sgfun when >=fx index memq vector-ref let -fx +fx eq? v =fx k1 i vector-length var check search l globalization env opt _ case else quote error __error let* $vector-length $vector-ref-ur cons* apply define-method define-generic sifun define-inline labels define sfun read lambda -require-initialization -init now export cgen snifun obj if begin set! @ ",
		375);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2initializa7erzd2idzd2envz75zzast_unitz00,
		BgL_bgl_za762unitza7d2initia3714z00,
		BGl_z62unitzd2initializa7erzd2idzc5zzast_unitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2initializa7erszd2envza7zzast_unitz00,
		BgL_bgl_za762unitza7d2initia3715z00,
		BGl_z62unitzd2initializa7ersz17zzast_unitz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_userzd2errorzd2envz00zztools_errorz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_unitz00));
		     ADD_ROOT((void *) (&BGl_za2unitzd2listza2zd2zzast_unitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long
		BgL_checksumz00_5056, char *BgL_fromz00_5057)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_unitz00))
				{
					BGl_requirezd2initializa7ationz75zzast_unitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_unitz00();
					BGl_libraryzd2moduleszd2initz00zzast_unitz00();
					BGl_cnstzd2initzd2zzast_unitz00();
					BGl_importedzd2moduleszd2initz00zzast_unitz00();
					return BGl_toplevelzd2initzd2zzast_unitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_unit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			{	/* Ast/unit.scm 21 */
				obj_t BgL_cportz00_5043;

				{	/* Ast/unit.scm 21 */
					obj_t BgL_stringz00_5051;

					BgL_stringz00_5051 = BGl_string3688z00zzast_unitz00;
					{	/* Ast/unit.scm 21 */
						obj_t BgL_startz00_5052;

						BgL_startz00_5052 = BINT(((long) 0));
						{	/* Ast/unit.scm 21 */
							obj_t BgL_endz00_5053;

							BgL_endz00_5053 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5051)));
							{	/* Ast/unit.scm 21 */

								BgL_cportz00_5043 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5051, BgL_startz00_5052, BgL_endz00_5053);
				}}}}
				{
					long BgL_iz00_5044;

					BgL_iz00_5044 = ((long) 54);
				BgL_loopz00_5045:
					if ((BgL_iz00_5044 == ((long) -1)))
						{	/* Ast/unit.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Ast/unit.scm 21 */
							{	/* Ast/unit.scm 21 */
								obj_t BgL_arg3690z00_5047;

								{	/* Ast/unit.scm 21 */

									{	/* Ast/unit.scm 21 */
										obj_t BgL_locationz00_5049;

										BgL_locationz00_5049 = BBOOL(((bool_t) 0));
										{	/* Ast/unit.scm 21 */

											BgL_arg3690z00_5047 =
												BGl_readz00zz__readerz00(BgL_cportz00_5043,
												BgL_locationz00_5049);
										}
									}
								}
								{	/* Ast/unit.scm 21 */
									int BgL_tmpz00_5088;

									BgL_tmpz00_5088 = (int) (BgL_iz00_5044);
									CNST_TABLE_SET(BgL_tmpz00_5088, BgL_arg3690z00_5047);
							}}
							{	/* Ast/unit.scm 21 */
								int BgL_auxz00_5050;

								BgL_auxz00_5050 = (int) ((BgL_iz00_5044 - ((long) 1)));
								{
									long BgL_iz00_5093;

									BgL_iz00_5093 = (long) (BgL_auxz00_5050);
									BgL_iz00_5044 = BgL_iz00_5093;
									goto BgL_loopz00_5045;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			return (BGl_za2unitzd2listza2zd2zzast_unitz00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_unitz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1687;

				BgL_headz00_1687 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1688;
					obj_t BgL_tailz00_1689;

					BgL_prevz00_1688 = BgL_headz00_1687;
					BgL_tailz00_1689 = BgL_l1z00_1;
				BgL_loopz00_1690:
					if (PAIRP(BgL_tailz00_1689))
						{
							obj_t BgL_newzd2prevzd2_1692;

							BgL_newzd2prevzd2_1692 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1689), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1688, BgL_newzd2prevzd2_1692);
							{
								obj_t BgL_tailz00_5103;
								obj_t BgL_prevz00_5102;

								BgL_prevz00_5102 = BgL_newzd2prevzd2_1692;
								BgL_tailz00_5103 = CDR(BgL_tailz00_1689);
								BgL_tailz00_1689 = BgL_tailz00_5103;
								BgL_prevz00_1688 = BgL_prevz00_5102;
								goto BgL_loopz00_1690;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1687);
				}
			}
		}

	}



/* unit-sexp*-add! */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t
		BgL_unitz00_25, obj_t BgL_sexpz00_26)
	{
		{	/* Ast/unit.scm 60 */
			if (NULLP(STRUCT_REF(((obj_t) BgL_unitz00_25), (int) (((long) 2)))))
				{	/* Ast/unit.scm 62 */
					int BgL_auxz00_5113;
					obj_t BgL_tmpz00_5111;

					BgL_auxz00_5113 = (int) (((long) 2));
					BgL_tmpz00_5111 = ((obj_t) BgL_unitz00_25);
					return STRUCT_SET(BgL_tmpz00_5111, BgL_auxz00_5113, BgL_sexpz00_26);
				}
			else
				{	/* Ast/unit.scm 63 */
					obj_t BgL_arg1417z00_1711;

					BgL_arg1417z00_1711 =
						BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(STRUCT_REF(
							((obj_t) BgL_unitz00_25), (int) (((long) 2))));
					return SET_CDR(BgL_arg1417z00_1711, BgL_sexpz00_26);
				}
		}

	}



/* &unit-sexp*-add! */
	obj_t BGl_z62unitzd2sexpza2zd2addz12zd2zzast_unitz00(obj_t BgL_envz00_5018,
		obj_t BgL_unitz00_5019, obj_t BgL_sexpz00_5020)
	{
		{	/* Ast/unit.scm 60 */
			return
				BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(BgL_unitz00_5019,
				BgL_sexpz00_5020);
		}

	}



/* unit-sexp*-add-head! */
	BGL_EXPORTED_DEF obj_t
		BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t BgL_unitz00_27,
		obj_t BgL_sexpz00_28)
	{
		{	/* Ast/unit.scm 68 */
			{	/* Ast/unit.scm 69 */
				obj_t BgL_arg1422z00_3880;

				{	/* Ast/unit.scm 69 */
					obj_t BgL_arg1441z00_3881;

					BgL_arg1441z00_3881 =
						STRUCT_REF(((obj_t) BgL_unitz00_27), (int) (((long) 2)));
					BgL_arg1422z00_3880 =
						BGl_appendzd221011zd2zzast_unitz00(BgL_sexpz00_28,
						BgL_arg1441z00_3881);
				}
				{	/* Ast/unit.scm 69 */
					int BgL_auxz00_5128;
					obj_t BgL_tmpz00_5126;

					BgL_auxz00_5128 = (int) (((long) 2));
					BgL_tmpz00_5126 = ((obj_t) BgL_unitz00_27);
					return
						STRUCT_SET(BgL_tmpz00_5126, BgL_auxz00_5128, BgL_arg1422z00_3880);
				}
			}
		}

	}



/* &unit-sexp*-add-head! */
	obj_t BGl_z62unitzd2sexpza2zd2addzd2headz12z00zzast_unitz00(obj_t
		BgL_envz00_5021, obj_t BgL_unitz00_5022, obj_t BgL_sexpz00_5023)
	{
		{	/* Ast/unit.scm 68 */
			return
				BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(BgL_unitz00_5022,
				BgL_sexpz00_5023);
		}

	}



/* unit->defs */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t
		BgL_unitz00_29)
	{
		{	/* Ast/unit.scm 74 */
			{	/* Ast/unit.scm 76 */
				obj_t BgL_arg1442z00_1716;

				{	/* Ast/unit.scm 76 */
					obj_t BgL_arg1462z00_1721;

					{	/* Ast/unit.scm 76 */
						obj_t BgL_arg1464z00_1722;

						BgL_arg1464z00_1722 =
							STRUCT_REF(((obj_t) BgL_unitz00_29), (int) (((long) 0)));
						{	/* Ast/unit.scm 76 */
							obj_t BgL_res3411z00_3887;

							{	/* Ast/unit.scm 76 */
								obj_t BgL_arg1466z00_3886;

								BgL_arg1466z00_3886 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1464z00_1722));
								BgL_res3411z00_3887 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_3886);
							}
							BgL_arg1462z00_1721 = BgL_res3411z00_3887;
					}}
					BgL_arg1442z00_1716 =
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1462z00_1721);
				}
				{	/* Ast/unit.scm 75 */
					obj_t BgL_list1443z00_1717;

					{	/* Ast/unit.scm 75 */
						obj_t BgL_arg1448z00_1718;

						{	/* Ast/unit.scm 75 */
							obj_t BgL_arg1449z00_1719;

							{	/* Ast/unit.scm 75 */
								obj_t BgL_arg1461z00_1720;

								BgL_arg1461z00_1720 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1449z00_1719 =
									MAKE_YOUNG_PAIR(BGl_string3671z00zzast_unitz00,
									BgL_arg1461z00_1720);
							}
							BgL_arg1448z00_1718 =
								MAKE_YOUNG_PAIR(BgL_arg1442z00_1716, BgL_arg1449z00_1719);
						}
						BgL_list1443z00_1717 =
							MAKE_YOUNG_PAIR(BGl_string3672z00zzast_unitz00,
							BgL_arg1448z00_1718);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1443z00_1717);
			}}
			{	/* Ast/unit.scm 80 */
				obj_t BgL_idz00_1726;

				BgL_idz00_1726 =
					STRUCT_REF(((obj_t) BgL_unitz00_29), (int) (((long) 0)));
				{	/* Ast/unit.scm 80 */
					obj_t BgL_weightz00_1727;

					BgL_weightz00_1727 =
						STRUCT_REF(((obj_t) BgL_unitz00_29), (int) (((long) 1)));
					{	/* Ast/unit.scm 81 */
						obj_t BgL_sexpza2za2_1728;

						BgL_sexpza2za2_1728 =
							STRUCT_REF(((obj_t) BgL_unitz00_29), (int) (((long) 2)));
						{	/* Ast/unit.scm 82 */
							obj_t BgL_gdefsz00_1729;

							BgL_gdefsz00_1729 =
								BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2
								(BgL_sexpza2za2_1728);
							{	/* Ast/unit.scm 83 */

								{	/* Ast/unit.scm 85 */
									obj_t BgL_g1108z00_1730;
									obj_t BgL_g1109z00_1731;

									if (PROCEDUREP(BgL_sexpza2za2_1728))
										{	/* Ast/unit.scm 85 */
											BgL_g1108z00_1730 =
												PROCEDURE_ENTRY(BgL_sexpza2za2_1728)
												(BgL_sexpza2za2_1728, BEOA);
										}
									else
										{	/* Ast/unit.scm 85 */
											BgL_g1108z00_1730 =
												BGl_toplevelza2zd2ze3astz93zzast_unitz00
												(BgL_sexpza2za2_1728, BgL_gdefsz00_1729);
										}
									if (CBOOL(STRUCT_REF(
												((obj_t) BgL_unitz00_29), (int) (((long) 4)))))
										{	/* Ast/unit.scm 88 */
											obj_t BgL_list1634z00_1790;

											BgL_list1634z00_1790 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
											BgL_g1109z00_1731 = BgL_list1634z00_1790;
										}
									else
										{	/* Ast/unit.scm 88 */
											BgL_g1109z00_1731 = BNIL;
										}
									{
										obj_t BgL_aexpza2za2_1734;
										obj_t BgL_initza2za2_1735;
										obj_t BgL_defza2za2_1736;

										BgL_aexpza2za2_1734 = BgL_g1108z00_1730;
										BgL_initza2za2_1735 = BgL_g1109z00_1731;
										BgL_defza2za2_1736 = BNIL;
									BgL_zc3z04anonymousza31475ze3z87_1737:
										if (NULLP(BgL_aexpza2za2_1734))
											{	/* Ast/unit.scm 90 */
												if (NULLP(BgL_initza2za2_1735))
													{	/* Ast/unit.scm 91 */
														return bgl_reverse_bang(BgL_defza2za2_1736);
													}
												else
													{	/* Ast/unit.scm 92 */
														obj_t BgL_bodyz00_1740;

														if (CBOOL(STRUCT_REF(
																	((obj_t) BgL_unitz00_29),
																	(int) (((long) 4)))))
															{	/* Ast/unit.scm 93 */
																obj_t BgL_arg1528z00_1754;

																{	/* Ast/unit.scm 93 */
																	obj_t BgL_arg1536z00_1755;
																	obj_t BgL_arg1537z00_1756;

																	{	/* Ast/unit.scm 93 */
																		obj_t BgL_arg1540z00_1757;

																		{	/* Ast/unit.scm 93 */
																			obj_t BgL_arg1552z00_1758;
																			obj_t BgL_arg1558z00_1759;

																			BgL_arg1552z00_1758 =
																				BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																				(BgL_idz00_1726);
																			BgL_arg1558z00_1759 =
																				MAKE_YOUNG_PAIR
																				(BGl_za2moduleza2z00zzmodule_modulez00,
																				BNIL);
																			BgL_arg1540z00_1757 =
																				MAKE_YOUNG_PAIR(BgL_arg1552z00_1758,
																				BgL_arg1558z00_1759);
																		}
																		BgL_arg1536z00_1755 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BgL_arg1540z00_1757);
																	}
																	{	/* Ast/unit.scm 95 */
																		obj_t BgL_arg1561z00_1760;

																		{	/* Ast/unit.scm 95 */
																			obj_t BgL_arg1564z00_1761;

																			{	/* Ast/unit.scm 95 */
																				obj_t BgL_arg1565z00_1762;
																				obj_t BgL_arg1573z00_1763;

																				{	/* Ast/unit.scm 95 */
																					obj_t BgL_arg1575z00_1764;

																					{	/* Ast/unit.scm 95 */
																						obj_t BgL_arg1578z00_1765;
																						obj_t BgL_arg1582z00_1766;

																						{	/* Ast/unit.scm 95 */
																							obj_t BgL_arg1584z00_1767;

																							{	/* Ast/unit.scm 95 */
																								obj_t BgL_arg1588z00_1768;
																								obj_t BgL_arg1589z00_1769;

																								BgL_arg1588z00_1768 =
																									BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																									(BgL_idz00_1726);
																								BgL_arg1589z00_1769 =
																									MAKE_YOUNG_PAIR
																									(BGl_za2moduleza2z00zzmodule_modulez00,
																									BNIL);
																								BgL_arg1584z00_1767 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1588z00_1768,
																									BgL_arg1589z00_1769);
																							}
																							BgL_arg1578z00_1765 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 0)),
																								BgL_arg1584z00_1767);
																						}
																						BgL_arg1582z00_1766 =
																							MAKE_YOUNG_PAIR(BFALSE, BNIL);
																						BgL_arg1575z00_1764 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1578z00_1765,
																							BgL_arg1582z00_1766);
																					}
																					BgL_arg1565z00_1762 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 1)),
																						BgL_arg1575z00_1764);
																				}
																				{	/* Ast/unit.scm 98 */
																					obj_t BgL_arg1592z00_1770;
																					obj_t BgL_arg1593z00_1771;

																					{	/* Ast/unit.scm 98 */
																						obj_t
																							BgL_zc3z04anonymousza31598ze3z87_5024;
																						BgL_zc3z04anonymousza31598ze3z87_5024
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31598ze3ze5zzast_unitz00,
																							(int) (((long) 1)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31598ze3z87_5024,
																							(int) (((long) 0)),
																							BgL_idz00_1726);
																						BgL_arg1592z00_1770 =
																							BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
																							(BgL_zc3z04anonymousza31598ze3z87_5024);
																					}
																					BgL_arg1593z00_1771 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(bgl_reverse_bang
																						(BgL_initza2za2_1735), BNIL);
																					BgL_arg1573z00_1763 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1592z00_1770,
																						BgL_arg1593z00_1771);
																				}
																				BgL_arg1564z00_1761 =
																					MAKE_YOUNG_PAIR(BgL_arg1565z00_1762,
																					BgL_arg1573z00_1763);
																			}
																			BgL_arg1561z00_1760 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						2)), BgL_arg1564z00_1761);
																		}
																		BgL_arg1537z00_1756 =
																			MAKE_YOUNG_PAIR(BgL_arg1561z00_1760,
																			BNIL);
																	}
																	BgL_arg1528z00_1754 =
																		MAKE_YOUNG_PAIR(BgL_arg1536z00_1755,
																		BgL_arg1537z00_1756);
																}
																BgL_bodyz00_1740 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																	BgL_arg1528z00_1754);
															}
														else
															{	/* Ast/unit.scm 92 */
																BgL_bodyz00_1740 =
																	BGl_normaliza7ezd2prognz75zztools_prognz00
																	(bgl_reverse_bang(BgL_initza2za2_1735));
															}
														{	/* Ast/unit.scm 92 */
															BgL_globalz00_bglt BgL_initz00_1741;

															{	/* Ast/unit.scm 103 */
																obj_t BgL_arg1518z00_1751;

																{	/* Ast/unit.scm 103 */
																	obj_t BgL_arg1521z00_1752;

																	BgL_arg1521z00_1752 =
																		BGl_unitzd2initializa7erzd2idza7zzast_unitz00
																		(BgL_idz00_1726);
																	BgL_arg1518z00_1751 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BgL_arg1521z00_1752,
																		CNST_TABLE_REF(((long) 4)));
																}
																BgL_initz00_1741 =
																	BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
																	(BgL_arg1518z00_1751, BNIL, BNIL,
																	BGl_za2moduleza2z00zzmodule_modulez00,
																	CNST_TABLE_REF(((long) 5)),
																	BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
																	CNST_TABLE_REF(((long) 6)), BgL_bodyz00_1740);
															}
															{	/* Ast/unit.scm 101 */

																if (CBOOL(STRUCT_REF(
																			((obj_t) BgL_unitz00_29),
																			(int) (((long) 4)))))
																	{	/* Ast/unit.scm 113 */
																		obj_t BgL_vz00_3901;

																		BgL_vz00_3901 = CNST_TABLE_REF(((long) 7));
																		((((BgL_globalz00_bglt)
																					COBJECT(BgL_initz00_1741))->
																				BgL_importz00) =
																			((obj_t) BgL_vz00_3901), BUNSPEC);
																	}
																else
																	{	/* Ast/unit.scm 112 */
																		BFALSE;
																	}
																if (
																	(BgL_unitz00_29 ==
																		BGl_getzd2toplevelzd2unitz00zzmodule_includez00
																		()))
																	{	/* Ast/unit.scm 116 */
																		BFALSE;
																	}
																else
																	{	/* Ast/unit.scm 116 */
																		((((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_initz00_1741)))->
																				BgL_userzf3zf3) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																	}
																BGl_declarezd2unitz12zc0zzast_unitz00
																	(BgL_idz00_1726,
																	(long) CINT(BgL_weightz00_1727));
																((((BgL_globalz00_bglt)
																			COBJECT(BgL_initz00_1741))->
																		BgL_evaluablezf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																if (CBOOL(STRUCT_REF(((obj_t) BgL_unitz00_29),
																			(int) (((long) 4)))))
																	{	/* Ast/unit.scm 127 */
																		obj_t BgL_idz00_1747;

																		{	/* Ast/unit.scm 127 */
																			obj_t BgL_arg1495z00_1749;

																			BgL_arg1495z00_1749 =
																				BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																				(BgL_idz00_1726);
																			BgL_idz00_1747 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(BgL_arg1495z00_1749,
																				CNST_TABLE_REF(((long) 4)));
																		}
																		{	/* Ast/unit.scm 127 */
																			BgL_globalz00_bglt BgL_gloz00_1748;

																			BgL_gloz00_1748 =
																				BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
																				(BgL_idz00_1747,
																				BGl_za2moduleza2z00zzmodule_modulez00,
																				BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
																				CNST_TABLE_REF(((long) 8)));
																			{	/* Ast/unit.scm 129 */

																				((((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_gloz00_1748)))->
																						BgL_userzf3zf3) =
																					((bool_t) ((bool_t) 0)), BUNSPEC);
																				((((BgL_globalz00_bglt)
																							COBJECT(BgL_gloz00_1748))->
																						BgL_evaluablezf3zf3) =
																					((bool_t) ((bool_t) 0)), BUNSPEC);
																	}}}
																else
																	{	/* Ast/unit.scm 126 */
																		BFALSE;
																	}
																{	/* Ast/unit.scm 133 */
																	obj_t BgL_arg1497z00_1750;

																	BgL_arg1497z00_1750 =
																		bgl_reverse_bang(BgL_defza2za2_1736);
																	return
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_initz00_1741),
																		BgL_arg1497z00_1750);
																}
															}
														}
													}
											}
										else
											{	/* Ast/unit.scm 135 */
												bool_t BgL_test3728z00_5247;

												{	/* Ast/unit.scm 135 */
													obj_t BgL_arg1631z00_1786;

													BgL_arg1631z00_1786 =
														CAR(((obj_t) BgL_aexpza2za2_1734));
													BgL_test3728z00_5247 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1631z00_1786,
														BGl_globalz00zzast_varz00);
												}
												if (BgL_test3728z00_5247)
													{	/* Ast/unit.scm 136 */
														obj_t BgL_arg1611z00_1780;
														obj_t BgL_arg1612z00_1781;

														BgL_arg1611z00_1780 =
															CDR(((obj_t) BgL_aexpza2za2_1734));
														{	/* Ast/unit.scm 138 */
															obj_t BgL_arg1613z00_1782;

															BgL_arg1613z00_1782 =
																CAR(((obj_t) BgL_aexpza2za2_1734));
															BgL_arg1612z00_1781 =
																MAKE_YOUNG_PAIR(BgL_arg1613z00_1782,
																BgL_defza2za2_1736);
														}
														{
															obj_t BgL_defza2za2_5257;
															obj_t BgL_aexpza2za2_5256;

															BgL_aexpza2za2_5256 = BgL_arg1611z00_1780;
															BgL_defza2za2_5257 = BgL_arg1612z00_1781;
															BgL_defza2za2_1736 = BgL_defza2za2_5257;
															BgL_aexpza2za2_1734 = BgL_aexpza2za2_5256;
															goto BgL_zc3z04anonymousza31475ze3z87_1737;
														}
													}
												else
													{	/* Ast/unit.scm 139 */
														obj_t BgL_arg1624z00_1783;
														obj_t BgL_arg1626z00_1784;

														BgL_arg1624z00_1783 =
															CDR(((obj_t) BgL_aexpza2za2_1734));
														{	/* Ast/unit.scm 140 */
															obj_t BgL_arg1627z00_1785;

															BgL_arg1627z00_1785 =
																CAR(((obj_t) BgL_aexpza2za2_1734));
															BgL_arg1626z00_1784 =
																MAKE_YOUNG_PAIR(BgL_arg1627z00_1785,
																BgL_initza2za2_1735);
														}
														{
															obj_t BgL_initza2za2_5264;
															obj_t BgL_aexpza2za2_5263;

															BgL_aexpza2za2_5263 = BgL_arg1624z00_1783;
															BgL_initza2za2_5264 = BgL_arg1626z00_1784;
															BgL_initza2za2_1735 = BgL_initza2za2_5264;
															BgL_aexpza2za2_1734 = BgL_aexpza2za2_5263;
															goto BgL_zc3z04anonymousza31475ze3z87_1737;
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



/* &unit->defs */
	obj_t BGl_z62unitzd2ze3defsz53zzast_unitz00(obj_t BgL_envz00_5025,
		obj_t BgL_unitz00_5026)
	{
		{	/* Ast/unit.scm 74 */
			return BGl_unitzd2ze3defsz31zzast_unitz00(BgL_unitz00_5026);
		}

	}



/* &<@anonymous:1598> */
	obj_t BGl_z62zc3z04anonymousza31598ze3ze5zzast_unitz00(obj_t BgL_envz00_5027,
		obj_t BgL_mz00_5029)
	{
		{	/* Ast/unit.scm 97 */
			return
				BGl_unitzd2initializa7erzd2idza7zzast_unitz00(PROCEDURE_REF
				(BgL_envz00_5027, (int) (((long) 0))));
		}

	}



/* declare-unit! */
	obj_t BGl_declarezd2unitz12zc0zzast_unitz00(obj_t BgL_idz00_30,
		long BgL_weightz00_31)
	{
		{	/* Ast/unit.scm 151 */
			{	/* Ast/unit.scm 152 */
				bool_t BgL_test3729z00_5269;

				if (NULLP(BGl_za2unitzd2listza2zd2zzast_unitz00))
					{	/* Ast/unit.scm 152 */
						BgL_test3729z00_5269 = ((bool_t) 1);
					}
				else
					{	/* Ast/unit.scm 152 */
						obj_t BgL_arg1704z00_1817;

						BgL_arg1704z00_1817 =
							CDR(CAR(BGl_za2unitzd2listza2zd2zzast_unitz00));
						BgL_test3729z00_5269 =
							(BgL_weightz00_31 < (long) CINT(BgL_arg1704z00_1817));
					}
				if (BgL_test3729z00_5269)
					{	/* Ast/unit.scm 153 */
						obj_t BgL_arg1644z00_1795;

						BgL_arg1644z00_1795 =
							MAKE_YOUNG_PAIR(BgL_idz00_30, BINT(BgL_weightz00_31));
						return (BGl_za2unitzd2listza2zd2zzast_unitz00 =
							MAKE_YOUNG_PAIR(BgL_arg1644z00_1795,
								BGl_za2unitzd2listza2zd2zzast_unitz00), BUNSPEC);
					}
				else
					{
						obj_t BgL_ulistz00_1797;

						BgL_ulistz00_1797 = BGl_za2unitzd2listza2zd2zzast_unitz00;
					BgL_zc3z04anonymousza31645ze3z87_1798:
						{	/* Ast/unit.scm 156 */
							bool_t BgL_test3731z00_5279;

							{	/* Ast/unit.scm 156 */
								long BgL_tmpz00_5280;

								{	/* Ast/unit.scm 156 */
									obj_t BgL_pairz00_3925;

									BgL_pairz00_3925 = CAR(((obj_t) BgL_ulistz00_1797));
									BgL_tmpz00_5280 = (long) CINT(CDR(BgL_pairz00_3925));
								}
								BgL_test3731z00_5279 = (BgL_weightz00_31 < BgL_tmpz00_5280);
							}
							if (BgL_test3731z00_5279)
								{	/* Ast/unit.scm 156 */
									{	/* Ast/unit.scm 157 */
										obj_t BgL_arg1664z00_1802;

										{	/* Ast/unit.scm 157 */
											obj_t BgL_arg1667z00_1803;
											obj_t BgL_arg1669z00_1804;

											BgL_arg1667z00_1803 = CAR(((obj_t) BgL_ulistz00_1797));
											BgL_arg1669z00_1804 = CDR(((obj_t) BgL_ulistz00_1797));
											BgL_arg1664z00_1802 =
												MAKE_YOUNG_PAIR(BgL_arg1667z00_1803,
												BgL_arg1669z00_1804);
										}
										{	/* Ast/unit.scm 157 */
											obj_t BgL_tmpz00_5291;

											BgL_tmpz00_5291 = ((obj_t) BgL_ulistz00_1797);
											SET_CDR(BgL_tmpz00_5291, BgL_arg1664z00_1802);
										}
									}
									{	/* Ast/unit.scm 158 */
										obj_t BgL_arg1672z00_1805;

										BgL_arg1672z00_1805 =
											MAKE_YOUNG_PAIR(BgL_idz00_30, BINT(BgL_weightz00_31));
										{	/* Ast/unit.scm 158 */
											obj_t BgL_tmpz00_5296;

											BgL_tmpz00_5296 = ((obj_t) BgL_ulistz00_1797);
											return SET_CAR(BgL_tmpz00_5296, BgL_arg1672z00_1805);
										}
									}
								}
							else
								{	/* Ast/unit.scm 156 */
									if (NULLP(CDR(((obj_t) BgL_ulistz00_1797))))
										{	/* Ast/unit.scm 160 */
											obj_t BgL_arg1686z00_1808;

											{	/* Ast/unit.scm 160 */
												obj_t BgL_arg1687z00_1809;

												BgL_arg1687z00_1809 =
													MAKE_YOUNG_PAIR(BgL_idz00_30, BINT(BgL_weightz00_31));
												{	/* Ast/unit.scm 160 */
													obj_t BgL_list1688z00_1810;

													BgL_list1688z00_1810 =
														MAKE_YOUNG_PAIR(BgL_arg1687z00_1809, BNIL);
													BgL_arg1686z00_1808 = BgL_list1688z00_1810;
												}
											}
											{	/* Ast/unit.scm 160 */
												obj_t BgL_tmpz00_5306;

												BgL_tmpz00_5306 = ((obj_t) BgL_ulistz00_1797);
												return SET_CDR(BgL_tmpz00_5306, BgL_arg1686z00_1808);
											}
										}
									else
										{	/* Ast/unit.scm 162 */
											obj_t BgL_arg1692z00_1811;

											BgL_arg1692z00_1811 = CDR(((obj_t) BgL_ulistz00_1797));
											{
												obj_t BgL_ulistz00_5311;

												BgL_ulistz00_5311 = BgL_arg1692z00_1811;
												BgL_ulistz00_1797 = BgL_ulistz00_5311;
												goto BgL_zc3z04anonymousza31645ze3z87_1798;
											}
										}
								}
						}
					}
			}
		}

	}



/* unit-initializer-id */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t
		BgL_idz00_32)
	{
		{	/* Ast/unit.scm 167 */
			{	/* Ast/unit.scm 168 */
				obj_t BgL_arg1708z00_1819;

				{	/* Ast/unit.scm 168 */
					obj_t BgL_arg1711z00_1820;
					obj_t BgL_arg1712z00_1821;

					{	/* Ast/unit.scm 168 */
						obj_t BgL_res3423z00_3940;

						{	/* Ast/unit.scm 168 */
							obj_t BgL_arg1466z00_3939;

							BgL_arg1466z00_3939 = SYMBOL_TO_STRING(((obj_t) BgL_idz00_32));
							BgL_res3423z00_3940 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_3939);
						}
						BgL_arg1711z00_1820 = BgL_res3423z00_3940;
					}
					{	/* Ast/unit.scm 168 */
						obj_t BgL_res3424z00_3943;

						{	/* Ast/unit.scm 168 */
							obj_t BgL_symbolz00_3941;

							BgL_symbolz00_3941 = CNST_TABLE_REF(((long) 9));
							{	/* Ast/unit.scm 168 */
								obj_t BgL_arg1466z00_3942;

								BgL_arg1466z00_3942 = SYMBOL_TO_STRING(BgL_symbolz00_3941);
								BgL_res3424z00_3943 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_3942);
						}}
						BgL_arg1712z00_1821 = BgL_res3424z00_3943;
					}
					BgL_arg1708z00_1819 =
						string_append(BgL_arg1711z00_1820, BgL_arg1712z00_1821);
				}
				return bstring_to_symbol(BgL_arg1708z00_1819);
			}
		}

	}



/* &unit-initializer-id */
	obj_t BGl_z62unitzd2initializa7erzd2idzc5zzast_unitz00(obj_t BgL_envz00_5030,
		obj_t BgL_idz00_5031)
	{
		{	/* Ast/unit.scm 167 */
			return BGl_unitzd2initializa7erzd2idza7zzast_unitz00(BgL_idz00_5031);
		}

	}



/* unit-require-init-id */
	obj_t BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00(obj_t BgL_idz00_33)
	{
		{	/* Ast/unit.scm 173 */
			{	/* Ast/unit.scm 174 */
				obj_t BgL_arg1719z00_1822;

				{	/* Ast/unit.scm 174 */
					obj_t BgL_arg1725z00_1823;
					obj_t BgL_arg1726z00_1824;

					{	/* Ast/unit.scm 174 */
						obj_t BgL_res3426z00_3948;

						{	/* Ast/unit.scm 174 */
							obj_t BgL_arg1466z00_3947;

							BgL_arg1466z00_3947 = SYMBOL_TO_STRING(((obj_t) BgL_idz00_33));
							BgL_res3426z00_3948 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_3947);
						}
						BgL_arg1725z00_1823 = BgL_res3426z00_3948;
					}
					{	/* Ast/unit.scm 174 */
						obj_t BgL_res3427z00_3951;

						{	/* Ast/unit.scm 174 */
							obj_t BgL_symbolz00_3949;

							BgL_symbolz00_3949 = CNST_TABLE_REF(((long) 10));
							{	/* Ast/unit.scm 174 */
								obj_t BgL_arg1466z00_3950;

								BgL_arg1466z00_3950 = SYMBOL_TO_STRING(BgL_symbolz00_3949);
								BgL_res3427z00_3951 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_3950);
						}}
						BgL_arg1726z00_1824 = BgL_res3427z00_3951;
					}
					BgL_arg1719z00_1822 =
						string_append(BgL_arg1725z00_1823, BgL_arg1726z00_1824);
				}
				return bstring_to_symbol(BgL_arg1719z00_1822);
			}
		}

	}



/* unit-initializers */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initializa7ersz75zzast_unitz00()
	{
		{	/* Ast/unit.scm 179 */
			{	/* Ast/unit.scm 180 */
				obj_t BgL_l1253z00_1825;

				BgL_l1253z00_1825 = BGl_za2unitzd2listza2zd2zzast_unitz00;
				if (NULLP(BgL_l1253z00_1825))
					{	/* Ast/unit.scm 180 */
						return BNIL;
					}
				else
					{	/* Ast/unit.scm 180 */
						obj_t BgL_head1255z00_1827;

						{	/* Ast/unit.scm 180 */
							obj_t BgL_res3430z00_3955;

							BgL_res3430z00_3955 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1255z00_1827 = BgL_res3430z00_3955;
						}
						{
							obj_t BgL_l1253z00_1829;
							obj_t BgL_tail1256z00_1830;

							BgL_l1253z00_1829 = BgL_l1253z00_1825;
							BgL_tail1256z00_1830 = BgL_head1255z00_1827;
						BgL_zc3z04anonymousza31728ze3z87_1831:
							if (NULLP(BgL_l1253z00_1829))
								{	/* Ast/unit.scm 180 */
									return CDR(BgL_head1255z00_1827);
								}
							else
								{	/* Ast/unit.scm 180 */
									obj_t BgL_newtail1257z00_1833;

									{	/* Ast/unit.scm 180 */
										obj_t BgL_arg1732z00_1835;

										{	/* Ast/unit.scm 180 */
											obj_t BgL_unitz00_1836;

											BgL_unitz00_1836 = CAR(((obj_t) BgL_l1253z00_1829));
											{	/* Ast/unit.scm 181 */
												obj_t BgL_arg1733z00_1837;

												{	/* Ast/unit.scm 181 */
													obj_t BgL_arg1738z00_1838;

													BgL_arg1738z00_1838 = CAR(((obj_t) BgL_unitz00_1836));
													BgL_arg1733z00_1837 =
														BGl_unitzd2initializa7erzd2idza7zzast_unitz00
														(BgL_arg1738z00_1838);
												}
												BgL_arg1732z00_1835 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg1733z00_1837,
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
										}
										{	/* Ast/unit.scm 180 */
											obj_t BgL_res3432z00_3960;

											BgL_res3432z00_3960 =
												MAKE_YOUNG_PAIR(BgL_arg1732z00_1835, BNIL);
											BgL_newtail1257z00_1833 = BgL_res3432z00_3960;
										}
									}
									SET_CDR(BgL_tail1256z00_1830, BgL_newtail1257z00_1833);
									{	/* Ast/unit.scm 180 */
										obj_t BgL_arg1731z00_1834;

										BgL_arg1731z00_1834 = CDR(((obj_t) BgL_l1253z00_1829));
										{
											obj_t BgL_tail1256z00_5346;
											obj_t BgL_l1253z00_5345;

											BgL_l1253z00_5345 = BgL_arg1731z00_1834;
											BgL_tail1256z00_5346 = BgL_newtail1257z00_1833;
											BgL_tail1256z00_1830 = BgL_tail1256z00_5346;
											BgL_l1253z00_1829 = BgL_l1253z00_5345;
											goto BgL_zc3z04anonymousza31728ze3z87_1831;
										}
									}
								}
						}
					}
			}
		}

	}



/* &unit-initializers */
	obj_t BGl_z62unitzd2initializa7ersz17zzast_unitz00(obj_t BgL_envz00_5032)
	{
		{	/* Ast/unit.scm 179 */
			return BGl_unitzd2initializa7ersz75zzast_unitz00();
		}

	}



/* unit-init-calls */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initzd2callsz00zzast_unitz00()
	{
		{	/* Ast/unit.scm 187 */
			{	/* Ast/unit.scm 188 */
				obj_t BgL_l1258z00_1840;

				BgL_l1258z00_1840 = BGl_za2unitzd2listza2zd2zzast_unitz00;
				if (NULLP(BgL_l1258z00_1840))
					{	/* Ast/unit.scm 188 */
						return BNIL;
					}
				else
					{	/* Ast/unit.scm 188 */
						obj_t BgL_head1260z00_1842;

						{	/* Ast/unit.scm 188 */
							obj_t BgL_res3434z00_3964;

							BgL_res3434z00_3964 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1260z00_1842 = BgL_res3434z00_3964;
						}
						{
							obj_t BgL_l1258z00_1844;
							obj_t BgL_tail1261z00_1845;

							BgL_l1258z00_1844 = BgL_l1258z00_1840;
							BgL_tail1261z00_1845 = BgL_head1260z00_1842;
						BgL_zc3z04anonymousza31740ze3z87_1846:
							if (NULLP(BgL_l1258z00_1844))
								{	/* Ast/unit.scm 188 */
									return CDR(BgL_head1260z00_1842);
								}
							else
								{	/* Ast/unit.scm 188 */
									obj_t BgL_newtail1262z00_1848;

									{	/* Ast/unit.scm 188 */
										obj_t BgL_arg1743z00_1850;

										{	/* Ast/unit.scm 188 */
											obj_t BgL_unitz00_1851;

											BgL_unitz00_1851 = CAR(((obj_t) BgL_l1258z00_1844));
											{	/* Ast/unit.scm 188 */
												obj_t BgL_arg1744z00_1852;

												{	/* Ast/unit.scm 188 */
													obj_t BgL_arg1745z00_1853;

													{	/* Ast/unit.scm 188 */
														obj_t BgL_arg1746z00_1854;
														obj_t BgL_arg1747z00_1855;

														{	/* Ast/unit.scm 188 */
															obj_t BgL_arg1754z00_1856;

															BgL_arg1754z00_1856 =
																CAR(((obj_t) BgL_unitz00_1851));
															BgL_arg1746z00_1854 =
																BGl_unitzd2initializa7erzd2idza7zzast_unitz00
																(BgL_arg1754z00_1856);
														}
														BgL_arg1747z00_1855 =
															MAKE_YOUNG_PAIR
															(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
														BgL_arg1745z00_1853 =
															MAKE_YOUNG_PAIR(BgL_arg1746z00_1854,
															BgL_arg1747z00_1855);
													}
													BgL_arg1744z00_1852 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
														BgL_arg1745z00_1853);
												}
												BgL_arg1743z00_1850 =
													MAKE_YOUNG_PAIR(BgL_arg1744z00_1852, BNIL);
										}}
										{	/* Ast/unit.scm 188 */
											obj_t BgL_res3436z00_3969;

											BgL_res3436z00_3969 =
												MAKE_YOUNG_PAIR(BgL_arg1743z00_1850, BNIL);
											BgL_newtail1262z00_1848 = BgL_res3436z00_3969;
									}}
									SET_CDR(BgL_tail1261z00_1845, BgL_newtail1262z00_1848);
									{	/* Ast/unit.scm 188 */
										obj_t BgL_arg1742z00_1849;

										BgL_arg1742z00_1849 = CDR(((obj_t) BgL_l1258z00_1844));
										{
											obj_t BgL_tail1261z00_5369;
											obj_t BgL_l1258z00_5368;

											BgL_l1258z00_5368 = BgL_arg1742z00_1849;
											BgL_tail1261z00_5369 = BgL_newtail1262z00_1848;
											BgL_tail1261z00_1845 = BgL_tail1261z00_5369;
											BgL_l1258z00_1844 = BgL_l1258z00_5368;
											goto BgL_zc3z04anonymousza31740ze3z87_1846;
										}
									}
								}
						}
					}
			}
		}

	}



/* &unit-init-calls */
	obj_t BGl_z62unitzd2initzd2callsz62zzast_unitz00(obj_t BgL_envz00_5033)
	{
		{	/* Ast/unit.scm 187 */
			return BGl_unitzd2initzd2callsz00zzast_unitz00();
		}

	}



/* toplevel*->ast */
	obj_t BGl_toplevelza2zd2ze3astz93zzast_unitz00(obj_t BgL_sexpza2za2_34,
		obj_t BgL_gdefsz00_35)
	{
		{	/* Ast/unit.scm 194 */
			{
				obj_t BgL_sexpza2za2_1860;
				obj_t BgL_aexpza2za2_1861;

				BgL_sexpza2za2_1860 = BgL_sexpza2za2_34;
				BgL_aexpza2za2_1861 = BNIL;
			BgL_zc3z04anonymousza31755ze3z87_1862:
				if (NULLP(BgL_sexpza2za2_1860))
					{	/* Ast/unit.scm 197 */
						return bgl_reverse_bang(BgL_aexpza2za2_1861);
					}
				else
					{	/* Ast/unit.scm 199 */
						obj_t BgL_arg1759z00_1864;
						obj_t BgL_arg1760z00_1865;

						BgL_arg1759z00_1864 = CDR(((obj_t) BgL_sexpza2za2_1860));
						{	/* Ast/unit.scm 200 */
							obj_t BgL_arg1761z00_1866;

							{	/* Ast/unit.scm 200 */
								obj_t BgL_arg1768z00_1867;

								BgL_arg1768z00_1867 = CAR(((obj_t) BgL_sexpza2za2_1860));
								BgL_arg1761z00_1866 =
									BGl_toplevelzd2ze3astz31zzast_unitz00(BgL_arg1768z00_1867,
									BgL_gdefsz00_35);
							}
							BgL_arg1760z00_1865 =
								BGl_appendzd221011zd2zzast_unitz00(BgL_arg1761z00_1866,
								BgL_aexpza2za2_1861);
						}
						{
							obj_t BgL_aexpza2za2_5381;
							obj_t BgL_sexpza2za2_5380;

							BgL_sexpza2za2_5380 = BgL_arg1759z00_1864;
							BgL_aexpza2za2_5381 = BgL_arg1760z00_1865;
							BgL_aexpza2za2_1861 = BgL_aexpza2za2_5381;
							BgL_sexpza2za2_1860 = BgL_sexpza2za2_5380;
							goto BgL_zc3z04anonymousza31755ze3z87_1862;
						}
					}
			}
		}

	}



/* lambda? */
	bool_t BGl_lambdazf3zf3zzast_unitz00(obj_t BgL_symz00_36)
	{
		{	/* Ast/unit.scm 205 */
			if (SYMBOLP(BgL_symz00_36))
				{	/* Ast/unit.scm 206 */
					obj_t BgL_arg1771z00_1870;

					BgL_arg1771z00_1870 =
						BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_symz00_36, BFALSE);
					return (BgL_arg1771z00_1870 == CNST_TABLE_REF(((long) 11)));
				}
			else
				{	/* Ast/unit.scm 206 */
					return ((bool_t) 0);
				}
		}

	}



/* toplevel->ast */
	obj_t BGl_toplevelzd2ze3astz31zzast_unitz00(obj_t BgL_sexpz00_37,
		obj_t BgL_gdefsz00_38)
	{
		{	/* Ast/unit.scm 213 */
		BGl_toplevelzd2ze3astz31zzast_unitz00:
			{
				obj_t BgL_varz00_1898;
				obj_t BgL_var2z00_1899;
				obj_t BgL_modulez00_1900;
				obj_t BgL_varz00_1895;
				obj_t BgL_var2z00_1896;
				obj_t BgL_varz00_1887;
				obj_t BgL_lamz00_1888;
				obj_t BgL_argsz00_1889;
				obj_t BgL_expz00_1890;
				obj_t BgL_varz00_1882;
				obj_t BgL_argsz00_1883;
				obj_t BgL_expz00_1884;
				obj_t BgL_fz00_1885;
				obj_t BgL_varz00_1878;
				obj_t BgL_argsz00_1879;
				obj_t BgL_expz00_1880;
				obj_t BgL_varz00_1874;
				obj_t BgL_argsz00_1875;
				obj_t BgL_expz00_1876;

				if (PAIRP(BgL_sexpz00_37))
					{	/* Ast/unit.scm 214 */
						if ((CAR(BgL_sexpz00_37) == CNST_TABLE_REF(((long) 2))))
							{	/* Ast/unit.scm 214 */
								if (NULLP(CDR(BgL_sexpz00_37)))
									{	/* Ast/unit.scm 214 */
										{	/* Ast/unit.scm 216 */
											obj_t BgL_list2204z00_2485;

											BgL_list2204z00_2485 =
												MAKE_YOUNG_PAIR(BgL_sexpz00_37, BNIL);
											return BgL_list2204z00_2485;
										}
									}
								else
									{	/* Ast/unit.scm 214 */
										obj_t BgL_arg1782z00_1934;

										BgL_arg1782z00_1934 = CDR(BgL_sexpz00_37);
										return
											bgl_reverse_bang(BGl_toplevelza2zd2ze3astz93zzast_unitz00
											(BgL_arg1782z00_1934, BgL_gdefsz00_38));
									}
							}
						else
							{	/* Ast/unit.scm 214 */
								obj_t BgL_cdrzd2422zd2_1936;

								BgL_cdrzd2422zd2_1936 = CDR(BgL_sexpz00_37);
								if ((CAR(BgL_sexpz00_37) == CNST_TABLE_REF(((long) 14))))
									{	/* Ast/unit.scm 214 */
										if (PAIRP(BgL_cdrzd2422zd2_1936))
											{	/* Ast/unit.scm 214 */
												obj_t BgL_carzd2426zd2_1940;

												BgL_carzd2426zd2_1940 = CAR(BgL_cdrzd2422zd2_1936);
												if (PAIRP(BgL_carzd2426zd2_1940))
													{	/* Ast/unit.scm 214 */
														BgL_varz00_1874 = CAR(BgL_carzd2426zd2_1940);
														BgL_argsz00_1875 = CDR(BgL_carzd2426zd2_1940);
														BgL_expz00_1876 = CDR(BgL_cdrzd2422zd2_1936);
														{	/* Ast/unit.scm 220 */
															obj_t BgL_idz00_2487;

															BgL_idz00_2487 =
																BGl_idzd2ofzd2idz00zzast_identz00
																(BgL_varz00_1874,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_sexpz00_37));
															{	/* Ast/unit.scm 220 */
																obj_t BgL_defz00_2488;

																BgL_defz00_2488 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_2487, BgL_gdefsz00_38);
																{	/* Ast/unit.scm 221 */
																	obj_t BgL_globalz00_2489;

																	BgL_globalz00_2489 =
																		BGl_findzd2globalzf2modulez20zzast_envz00
																		(BgL_idz00_2487,
																		BGl_za2moduleza2z00zzmodule_modulez00);
																	{	/* Ast/unit.scm 222 */

																		{	/* Ast/unit.scm 230 */
																			bool_t BgL_test3745z00_5414;

																			if (PAIRP(BgL_defz00_2488))
																				{	/* Ast/unit.scm 230 */
																					if (
																						(CAR(CDR(BgL_defz00_2488)) ==
																							CNST_TABLE_REF(((long) 12))))
																						{	/* Ast/unit.scm 232 */
																							bool_t BgL__ortest_1114z00_2509;

																							if (BGl_isazf3zf3zz__objectz00
																								(BgL_globalz00_2489,
																									BGl_globalz00zzast_varz00))
																								{	/* Ast/unit.scm 232 */
																									BgL__ortest_1114z00_2509 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Ast/unit.scm 232 */
																									BgL__ortest_1114z00_2509 =
																										((bool_t) 1);
																								}
																							if (BgL__ortest_1114z00_2509)
																								{	/* Ast/unit.scm 232 */
																									BgL_test3745z00_5414 =
																										BgL__ortest_1114z00_2509;
																								}
																							else
																								{	/* Ast/unit.scm 232 */
																									BgL_test3745z00_5414 =
																										(
																										(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_globalz00_bglt) BgL_globalz00_2489))))->BgL_accessz00) == CNST_TABLE_REF(((long) 12)));
																						}}
																					else
																						{	/* Ast/unit.scm 231 */
																							BgL_test3745z00_5414 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Ast/unit.scm 230 */
																					BgL_test3745z00_5414 = ((bool_t) 1);
																				}
																			if (BgL_test3745z00_5414)
																				{	/* Ast/unit.scm 236 */
																					obj_t BgL_arg2212z00_2498;

																					{	/* Ast/unit.scm 236 */
																						obj_t BgL_arg2213z00_2499;

																						{	/* Ast/unit.scm 236 */
																							obj_t BgL_arg2214z00_2500;

																							{	/* Ast/unit.scm 236 */
																								obj_t BgL_pairz00_3986;

																								BgL_pairz00_3986 =
																									CDR(((obj_t) BgL_sexpz00_37));
																								BgL_arg2214z00_2500 =
																									CDR(BgL_pairz00_3986);
																							}
																							BgL_arg2213z00_2499 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_arg2214z00_2500);
																						}
																						BgL_arg2212z00_2498 =
																							BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																							(BgL_expz00_1876, BgL_sexpz00_37,
																							BgL_arg2213z00_2499);
																					}
																					return
																						BGl_makezd2sfunzd2definitionz00zzast_unitz00
																						(BgL_varz00_1874,
																						BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_argsz00_1875,
																						BgL_arg2212z00_2498, BgL_sexpz00_37,
																						CNST_TABLE_REF(((long) 13)));
																				}
																			else
																				{	/* Ast/unit.scm 238 */
																					obj_t BgL_newzd2sexpzd2_2501;

																					{	/* Ast/unit.scm 238 */
																						obj_t BgL_arg2215z00_2502;

																						{	/* Ast/unit.scm 238 */
																							obj_t BgL_arg2216z00_2503;

																							{	/* Ast/unit.scm 238 */
																								obj_t BgL_arg2217z00_2504;

																								{	/* Ast/unit.scm 238 */
																									obj_t BgL_arg2218z00_2505;

																									BgL_arg2218z00_2505 =
																										MAKE_YOUNG_PAIR
																										(BgL_argsz00_1875,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_expz00_1876, BNIL));
																									BgL_arg2217z00_2504 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												11)),
																										BgL_arg2218z00_2505);
																								}
																								BgL_arg2216z00_2503 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2217z00_2504, BNIL);
																							}
																							BgL_arg2215z00_2502 =
																								MAKE_YOUNG_PAIR(BgL_varz00_1874,
																								BgL_arg2216z00_2503);
																						}
																						BgL_newzd2sexpzd2_2501 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 1)),
																							BgL_arg2215z00_2502);
																					}
																					BGl_replacez12z12zztools_miscz00
																						(BgL_sexpz00_37,
																						BgL_newzd2sexpzd2_2501);
																					return
																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																						(BgL_varz00_1874, BgL_sexpz00_37);
																				}
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Ast/unit.scm 214 */
														obj_t BgL_cdrzd2452zd2_1946;

														BgL_cdrzd2452zd2_1946 =
															CDR(((obj_t) BgL_cdrzd2422zd2_1936));
														if (PAIRP(BgL_cdrzd2452zd2_1946))
															{	/* Ast/unit.scm 214 */
																obj_t BgL_carzd2456zd2_1948;

																BgL_carzd2456zd2_1948 =
																	CAR(BgL_cdrzd2452zd2_1946);
																if (PAIRP(BgL_carzd2456zd2_1948))
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_cdrzd2461zd2_1950;

																		BgL_cdrzd2461zd2_1950 =
																			CDR(BgL_carzd2456zd2_1948);
																		if (
																			(CAR(BgL_carzd2456zd2_1948) ==
																				CNST_TABLE_REF(((long) 11))))
																			{	/* Ast/unit.scm 214 */
																				if (PAIRP(BgL_cdrzd2461zd2_1950))
																					{	/* Ast/unit.scm 214 */
																						if (NULLP(CDR
																								(BgL_cdrzd2452zd2_1946)))
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_arg1824z00_1956;
																								obj_t BgL_arg1825z00_1957;
																								obj_t BgL_arg1826z00_1958;

																								BgL_arg1824z00_1956 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2422zd2_1936));
																								BgL_arg1825z00_1957 =
																									CAR(BgL_cdrzd2461zd2_1950);
																								BgL_arg1826z00_1958 =
																									CDR(BgL_cdrzd2461zd2_1950);
																								BgL_varz00_1878 =
																									BgL_arg1824z00_1956;
																								BgL_argsz00_1879 =
																									BgL_arg1825z00_1957;
																								BgL_expz00_1880 =
																									BgL_arg1826z00_1958;
																								{	/* Ast/unit.scm 242 */
																									obj_t BgL_idz00_2515;

																									BgL_idz00_2515 =
																										BGl_idzd2ofzd2idz00zzast_identz00
																										(BgL_varz00_1878,
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_sexpz00_37));
																									{	/* Ast/unit.scm 242 */
																										obj_t BgL_defz00_2516;

																										BgL_defz00_2516 =
																											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_2515,
																											BgL_gdefsz00_38);
																										{	/* Ast/unit.scm 243 */
																											obj_t BgL_globalz00_2517;

																											BgL_globalz00_2517 =
																												BGl_findzd2globalzf2modulez20zzast_envz00
																												(BgL_idz00_2515,
																												BGl_za2moduleza2z00zzmodule_modulez00);
																											{	/* Ast/unit.scm 244 */

																												{	/* Ast/unit.scm 246 */
																													bool_t
																														BgL_test3755z00_5475;
																													{	/* Ast/unit.scm 246 */
																														bool_t
																															BgL_test3756z00_5476;
																														{	/* Ast/unit.scm 246 */
																															obj_t
																																BgL_tmpz00_5477;
																															{	/* Ast/unit.scm 246 */
																																obj_t
																																	BgL_pairz00_3988;
																																BgL_pairz00_3988
																																	=
																																	CDR(((obj_t)
																																		BgL_defz00_2516));
																																BgL_tmpz00_5477
																																	=
																																	CAR
																																	(BgL_pairz00_3988);
																															}
																															BgL_test3756z00_5476
																																=
																																(BgL_tmpz00_5477
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		12)));
																														}
																														if (BgL_test3756z00_5476)
																															{	/* Ast/unit.scm 247 */
																																bool_t
																																	BgL__ortest_1115z00_2531;
																																if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_2517, BGl_globalz00zzast_varz00))
																																	{	/* Ast/unit.scm 247 */
																																		BgL__ortest_1115z00_2531
																																			=
																																			((bool_t)
																																			0);
																																	}
																																else
																																	{	/* Ast/unit.scm 247 */
																																		BgL__ortest_1115z00_2531
																																			=
																																			((bool_t)
																																			1);
																																	}
																																if (BgL__ortest_1115z00_2531)
																																	{	/* Ast/unit.scm 247 */
																																		BgL_test3755z00_5475
																																			=
																																			BgL__ortest_1115z00_2531;
																																	}
																																else
																																	{	/* Ast/unit.scm 247 */
																																		BgL_test3755z00_5475
																																			=
																																			((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_globalz00_2517))))->BgL_accessz00) == CNST_TABLE_REF(((long) 12)));
																															}}
																														else
																															{	/* Ast/unit.scm 246 */
																																BgL_test3755z00_5475
																																	=
																																	((bool_t) 0);
																															}
																													}
																													if (BgL_test3755z00_5475)
																														{	/* Ast/unit.scm 251 */
																															obj_t
																																BgL_arg2232z00_2527;
																															{	/* Ast/unit.scm 251 */
																																obj_t
																																	BgL_arg2233z00_2528;
																																{	/* Ast/unit.scm 251 */
																																	obj_t
																																		BgL_arg2234z00_2529;
																																	{	/* Ast/unit.scm 251 */
																																		obj_t
																																			BgL_pairz00_3994;
																																		BgL_pairz00_3994
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_sexpz00_37));
																																		BgL_arg2234z00_2529
																																			=
																																			CDR
																																			(BgL_pairz00_3994);
																																	}
																																	BgL_arg2233z00_2528
																																		=
																																		BGl_findzd2locationzd2zztools_locationz00
																																		(BgL_arg2234z00_2529);
																																}
																																BgL_arg2232z00_2527
																																	=
																																	BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																																	(BgL_expz00_1880,
																																	BgL_sexpz00_37,
																																	BgL_arg2233z00_2528);
																															}
																															return
																																BGl_makezd2sfunzd2definitionz00zzast_unitz00
																																(BgL_varz00_1878,
																																BGl_za2moduleza2z00zzmodule_modulez00,
																																BgL_argsz00_1879,
																																BgL_arg2232z00_2527,
																																BgL_sexpz00_37,
																																CNST_TABLE_REF((
																																		(long)
																																		13)));
																														}
																													else
																														{	/* Ast/unit.scm 246 */
																															return
																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																(BgL_varz00_1878,
																																BgL_sexpz00_37);
																														}
																												}
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_cdrzd2529zd2_1959;

																								BgL_cdrzd2529zd2_1959 =
																									CDR(BgL_sexpz00_37);
																								{	/* Ast/unit.scm 214 */
																									obj_t BgL_arg1827z00_1960;

																									BgL_arg1827z00_1960 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2529zd2_1959));
																									return
																										BGl_makezd2svarzd2definitionz00zzast_unitz00
																										(BgL_arg1827z00_1960,
																										BgL_sexpz00_37);
																								}
																							}
																					}
																				else
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_cdrzd2581zd2_1963;

																						BgL_cdrzd2581zd2_1963 =
																							CDR(BgL_sexpz00_37);
																						{	/* Ast/unit.scm 214 */
																							obj_t BgL_cdrzd2586zd2_1964;

																							BgL_cdrzd2586zd2_1964 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd2581zd2_1963));
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_carzd2590zd2_1965;

																								BgL_carzd2590zd2_1965 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2586zd2_1964));
																								if (SYMBOLP
																									(BgL_carzd2590zd2_1965))
																									{	/* Ast/unit.scm 214 */
																										if (NULLP(CDR(
																													((obj_t)
																														BgL_cdrzd2586zd2_1964))))
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_arg1833z00_1969;
																												BgL_arg1833z00_1969 =
																													CAR(((obj_t)
																														BgL_cdrzd2581zd2_1963));
																												BgL_varz00_1895 =
																													BgL_arg1833z00_1969;
																												BgL_var2z00_1896 =
																													BgL_carzd2590zd2_1965;
																											BgL_tagzd2366zd2_1897:
																												{	/* Ast/unit.scm 286 */
																													obj_t BgL_defz00_2587;

																													BgL_defz00_2587 =
																														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																														(BGl_idzd2ofzd2idz00zzast_identz00
																														(BgL_varz00_1895,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_sexpz00_37)),
																														BgL_gdefsz00_38);
																													{	/* Ast/unit.scm 287 */
																														bool_t
																															BgL_test3761z00_5519;
																														{	/* Ast/unit.scm 287 */
																															obj_t
																																BgL_tmpz00_5520;
																															{	/* Ast/unit.scm 287 */
																																obj_t
																																	BgL_pairz00_4019;
																																BgL_pairz00_4019
																																	=
																																	CDR(((obj_t)
																																		BgL_defz00_2587));
																																BgL_tmpz00_5520
																																	=
																																	CAR
																																	(BgL_pairz00_4019);
																															}
																															BgL_test3761z00_5519
																																=
																																(BgL_tmpz00_5520
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		12)));
																														}
																														if (BgL_test3761z00_5519)
																															{	/* Ast/unit.scm 288 */
																																obj_t
																																	BgL_gz00_2591;
																																BgL_gz00_2591 =
																																	BGl_findzd2globalzd2zzast_envz00
																																	(BgL_var2z00_1896,
																																	BNIL);
																																{	/* Ast/unit.scm 288 */
																																	obj_t
																																		BgL_arityz00_2592;
																																	if (BGl_isazf3zf3zz__objectz00(BgL_gz00_2591, BGl_globalz00zzast_varz00))
																																		{	/* Ast/unit.scm 290 */
																																			bool_t
																																				BgL_test3763z00_5529;
																																			{	/* Ast/unit.scm 290 */
																																				BgL_valuez00_bglt
																																					BgL_arg2286z00_2600;
																																				BgL_arg2286z00_2600
																																					=
																																					(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_gz00_2591))))->BgL_valuez00);
																																				{	/* Ast/unit.scm 290 */
																																					bool_t
																																						BgL_res3446z00_4022;
																																					BgL_res3446z00_4022
																																						=
																																						BGl_isazf3zf3zz__objectz00
																																						(((obj_t) BgL_arg2286z00_2600), BGl_funz00zzast_varz00);
																																					BgL_test3763z00_5529
																																						=
																																						BgL_res3446z00_4022;
																																				}
																																			}
																																			if (BgL_test3763z00_5529)
																																				{	/* Ast/unit.scm 290 */
																																					BgL_arityz00_2592
																																						=
																																						BINT
																																						((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_gz00_2591))))->BgL_valuez00))))->BgL_arityz00));
																																				}
																																			else
																																				{	/* Ast/unit.scm 290 */
																																					BgL_arityz00_2592
																																						=
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Ast/unit.scm 289 */
																																			BgL_arityz00_2592
																																				=
																																				BFALSE;
																																		}
																																	{	/* Ast/unit.scm 289 */

																																		if (INTEGERP
																																			(BgL_arityz00_2592))
																																			{	/* Ast/unit.scm 292 */
																																				if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_2591))
																																					{	/* Ast/unit.scm 294 */
																																						BGl_userzd2warningzd2zztools_errorz00
																																							(BgL_varz00_1895,
																																							BGl_string3673z00zzast_unitz00,
																																							BgL_sexpz00_37);
																																						return
																																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																																							(BgL_varz00_1895,
																																							BgL_sexpz00_37);
																																					}
																																				else
																																					{	/* Ast/unit.scm 294 */
																																						if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_2591))
																																							{	/* Ast/unit.scm 299 */
																																								BGl_userzd2warningzd2zztools_errorz00
																																									(BgL_varz00_1895,
																																									BGl_string3674z00zzast_unitz00,
																																									BgL_sexpz00_37);
																																								return
																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																									(BgL_varz00_1895,
																																									BgL_sexpz00_37);
																																							}
																																						else
																																							{
																																								obj_t
																																									BgL_sexpz00_5551;
																																								BgL_sexpz00_5551
																																									=
																																									BGl_etazd2expansezd2zzast_unitz00
																																									(BgL_sexpz00_37,
																																									BgL_arityz00_2592);
																																								BgL_sexpz00_37
																																									=
																																									BgL_sexpz00_5551;
																																								goto
																																									BGl_toplevelzd2ze3astz31zzast_unitz00;
																																							}
																																					}
																																			}
																																		else
																																			{	/* Ast/unit.scm 292 */
																																				return
																																					BGl_makezd2svarzd2definitionz00zzast_unitz00
																																					(BgL_varz00_1895,
																																					BgL_sexpz00_37);
																																			}
																																	}
																																}
																															}
																														else
																															{	/* Ast/unit.scm 287 */
																																return
																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																	(BgL_varz00_1895,
																																	BgL_sexpz00_37);
																															}
																													}
																												}
																											}
																										else
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_arg1835z00_1971;
																												BgL_arg1835z00_1971 =
																													CAR(((obj_t)
																														BgL_cdrzd2581zd2_1963));
																												return
																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																													(BgL_arg1835z00_1971,
																													BgL_sexpz00_37);
																											}
																									}
																								else
																									{	/* Ast/unit.scm 214 */
																										obj_t BgL_arg1840z00_1975;

																										BgL_arg1840z00_1975 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2581zd2_1963));
																										return
																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																											(BgL_arg1840z00_1975,
																											BgL_sexpz00_37);
																									}
																							}
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_cdrzd2661zd2_1977;

																				BgL_cdrzd2661zd2_1977 =
																					CDR(BgL_sexpz00_37);
																				{	/* Ast/unit.scm 214 */
																					obj_t BgL_cdrzd2668zd2_1978;

																					BgL_cdrzd2668zd2_1978 =
																						CDR(
																						((obj_t) BgL_cdrzd2661zd2_1977));
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_carzd2674zd2_1979;

																						BgL_carzd2674zd2_1979 =
																							CAR(
																							((obj_t) BgL_cdrzd2668zd2_1978));
																						{	/* Ast/unit.scm 214 */
																							obj_t BgL_cdrzd2680zd2_1980;

																							BgL_cdrzd2680zd2_1980 =
																								CDR(
																								((obj_t)
																									BgL_carzd2674zd2_1979));
																							if ((CAR(((obj_t)
																											BgL_carzd2674zd2_1979)) ==
																									CNST_TABLE_REF(((long) 15))))
																								{	/* Ast/unit.scm 214 */
																									if (PAIRP
																										(BgL_cdrzd2680zd2_1980))
																										{	/* Ast/unit.scm 214 */
																											obj_t
																												BgL_carzd2684zd2_1984;
																											obj_t
																												BgL_cdrzd2685zd2_1985;
																											BgL_carzd2684zd2_1984 =
																												CAR
																												(BgL_cdrzd2680zd2_1980);
																											BgL_cdrzd2685zd2_1985 =
																												CDR
																												(BgL_cdrzd2680zd2_1980);
																											if (PAIRP
																												(BgL_carzd2684zd2_1984))
																												{	/* Ast/unit.scm 214 */
																													obj_t
																														BgL_carzd2689zd2_1987;
																													BgL_carzd2689zd2_1987
																														=
																														CAR
																														(BgL_carzd2684zd2_1984);
																													if (PAIRP
																														(BgL_carzd2689zd2_1987))
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_cdrzd2695zd2_1989;
																															BgL_cdrzd2695zd2_1989
																																=
																																CDR
																																(BgL_carzd2689zd2_1987);
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_fz00_1990;
																																BgL_fz00_1990 =
																																	CAR
																																	(BgL_carzd2689zd2_1987);
																																if (PAIRP
																																	(BgL_cdrzd2695zd2_1989))
																																	{	/* Ast/unit.scm 214 */
																																		if (NULLP
																																			(CDR
																																				(BgL_carzd2684zd2_1984)))
																																			{	/* Ast/unit.scm 214 */
																																				if (PAIRP(BgL_cdrzd2685zd2_1985))
																																					{	/* Ast/unit.scm 214 */
																																						if (
																																							(BgL_fz00_1990
																																								==
																																								CAR
																																								(BgL_cdrzd2685zd2_1985)))
																																							{	/* Ast/unit.scm 214 */
																																								if (NULLP(CDR(BgL_cdrzd2685zd2_1985)))
																																									{	/* Ast/unit.scm 214 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd2668zd2_1978))))
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1857z00_2001;
																																												obj_t
																																													BgL_arg1858z00_2002;
																																												obj_t
																																													BgL_arg1859z00_2003;
																																												BgL_arg1857z00_2001
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd2661zd2_1977));
																																												BgL_arg1858z00_2002
																																													=
																																													CAR
																																													(BgL_cdrzd2695zd2_1989);
																																												BgL_arg1859z00_2003
																																													=
																																													CDR
																																													(BgL_cdrzd2695zd2_1989);
																																												BgL_varz00_1882
																																													=
																																													BgL_arg1857z00_2001;
																																												BgL_argsz00_1883
																																													=
																																													BgL_arg1858z00_2002;
																																												BgL_expz00_1884
																																													=
																																													BgL_arg1859z00_2003;
																																												BgL_fz00_1885
																																													=
																																													BgL_fz00_1990;
																																												{	/* Ast/unit.scm 255 */
																																													obj_t
																																														BgL_idz00_2537;
																																													BgL_idz00_2537
																																														=
																																														BGl_idzd2ofzd2idz00zzast_identz00
																																														(BgL_varz00_1882,
																																														BGl_findzd2locationzd2zztools_locationz00
																																														(BgL_sexpz00_37));
																																													{	/* Ast/unit.scm 255 */
																																														obj_t
																																															BgL_defz00_2538;
																																														BgL_defz00_2538
																																															=
																																															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																																															(BgL_idz00_2537,
																																															BgL_gdefsz00_38);
																																														{	/* Ast/unit.scm 256 */
																																															obj_t
																																																BgL_globalz00_2539;
																																															BgL_globalz00_2539
																																																=
																																																BGl_findzd2globalzf2modulez20zzast_envz00
																																																(BgL_idz00_2537,
																																																BGl_za2moduleza2z00zzmodule_modulez00);
																																															{	/* Ast/unit.scm 257 */

																																																{	/* Ast/unit.scm 259 */
																																																	bool_t
																																																		BgL_test3777z00_5609;
																																																	{	/* Ast/unit.scm 259 */
																																																		bool_t
																																																			BgL_test3778z00_5610;
																																																		{	/* Ast/unit.scm 259 */
																																																			obj_t
																																																				BgL_tmpz00_5611;
																																																			{	/* Ast/unit.scm 259 */
																																																				obj_t
																																																					BgL_pairz00_3996;
																																																				BgL_pairz00_3996
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_defz00_2538));
																																																				BgL_tmpz00_5611
																																																					=
																																																					CAR
																																																					(BgL_pairz00_3996);
																																																			}
																																																			BgL_test3778z00_5610
																																																				=
																																																				(BgL_tmpz00_5611
																																																				==
																																																				CNST_TABLE_REF
																																																				(((long) 12)));
																																																		}
																																																		if (BgL_test3778z00_5610)
																																																			{	/* Ast/unit.scm 260 */
																																																				bool_t
																																																					BgL_test3779z00_5617;
																																																				if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_2539, BGl_globalz00zzast_varz00))
																																																					{	/* Ast/unit.scm 260 */
																																																						BgL_test3779z00_5617
																																																							=
																																																							(
																																																							(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_globalz00_2539))))->BgL_accessz00) == CNST_TABLE_REF(((long) 12)));
																																																					}
																																																				else
																																																					{	/* Ast/unit.scm 260 */
																																																						BgL_test3779z00_5617
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																				if (BgL_test3779z00_5617)
																																																					{	/* Ast/unit.scm 260 */
																																																						BgL_test3777z00_5609
																																																							=
																																																							(BgL_idz00_2537
																																																							==
																																																							BgL_fz00_1885);
																																																					}
																																																				else
																																																					{	/* Ast/unit.scm 260 */
																																																						BgL_test3777z00_5609
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/unit.scm 259 */
																																																				BgL_test3777z00_5609
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																	}
																																																	if (BgL_test3777z00_5609)
																																																		{	/* Ast/unit.scm 265 */
																																																			obj_t
																																																				BgL_arg2249z00_2551;
																																																			{	/* Ast/unit.scm 265 */
																																																				obj_t
																																																					BgL_arg2250z00_2552;
																																																				{	/* Ast/unit.scm 265 */
																																																					obj_t
																																																						BgL_arg2251z00_2553;
																																																					{	/* Ast/unit.scm 265 */
																																																						obj_t
																																																							BgL_pairz00_4002;
																																																						BgL_pairz00_4002
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_sexpz00_37));
																																																						BgL_arg2251z00_2553
																																																							=
																																																							CDR
																																																							(BgL_pairz00_4002);
																																																					}
																																																					BgL_arg2250z00_2552
																																																						=
																																																						BGl_findzd2locationzd2zztools_locationz00
																																																						(BgL_arg2251z00_2553);
																																																				}
																																																				BgL_arg2249z00_2551
																																																					=
																																																					BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																																																					(BgL_expz00_1884,
																																																					BgL_sexpz00_37,
																																																					BgL_arg2250z00_2552);
																																																			}
																																																			return
																																																				BGl_makezd2sfunzd2definitionz00zzast_unitz00
																																																				(BgL_varz00_1882,
																																																				BGl_za2moduleza2z00zzmodule_modulez00,
																																																				BgL_argsz00_1883,
																																																				BgL_arg2249z00_2551,
																																																				BgL_sexpz00_37,
																																																				CNST_TABLE_REF
																																																				(((long) 13)));
																																																		}
																																																	else
																																																		{	/* Ast/unit.scm 259 */
																																																			return
																																																				BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																				(BgL_varz00_1882,
																																																				BgL_sexpz00_37);
																																																		}
																																																}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1861z00_2005;
																																												BgL_arg1861z00_2005
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd2661zd2_1977));
																																												return
																																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																																													(BgL_arg1861z00_2005,
																																													BgL_sexpz00_37);
																																											}
																																									}
																																								else
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_cdrzd2782zd2_2009;
																																										BgL_cdrzd2782zd2_2009
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd2661zd2_1977));
																																										{	/* Ast/unit.scm 214 */
																																											obj_t
																																												BgL_carzd2788zd2_2010;
																																											BgL_carzd2788zd2_2010
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2782zd2_2009));
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_carzd2793zd2_2011;
																																												obj_t
																																													BgL_cdrzd2794zd2_2012;
																																												BgL_carzd2793zd2_2011
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_carzd2788zd2_2010));
																																												BgL_cdrzd2794zd2_2012
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_carzd2788zd2_2010));
																																												if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd2793zd2_2011))
																																													{	/* Ast/unit.scm 214 */
																																														if (NULLP(CDR(((obj_t) BgL_cdrzd2782zd2_2009))))
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_arg1868z00_2016;
																																																obj_t
																																																	BgL_arg1870z00_2017;
																																																obj_t
																																																	BgL_arg1871z00_2018;
																																																BgL_arg1868z00_2016
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd2661zd2_1977));
																																																BgL_arg1870z00_2017
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd2794zd2_2012));
																																																BgL_arg1871z00_2018
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd2794zd2_2012));
																																																BgL_varz00_1887
																																																	=
																																																	BgL_arg1868z00_2016;
																																																BgL_lamz00_1888
																																																	=
																																																	BgL_carzd2793zd2_2011;
																																																BgL_argsz00_1889
																																																	=
																																																	BgL_arg1870z00_2017;
																																																BgL_expz00_1890
																																																	=
																																																	BgL_arg1871z00_2018;
																																															BgL_tagzd2364zd2_1891:
																																																{	/* Ast/unit.scm 269 */
																																																	obj_t
																																																		BgL_idz00_2561;
																																																	BgL_idz00_2561
																																																		=
																																																		BGl_idzd2ofzd2idz00zzast_identz00
																																																		(BgL_varz00_1887,
																																																		BGl_findzd2locationzd2zztools_locationz00
																																																		(BgL_sexpz00_37));
																																																	{	/* Ast/unit.scm 269 */
																																																		obj_t
																																																			BgL_defz00_2562;
																																																		BgL_defz00_2562
																																																			=
																																																			BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																																																			(BgL_idz00_2561,
																																																			BgL_gdefsz00_38);
																																																		{	/* Ast/unit.scm 270 */
																																																			obj_t
																																																				BgL_globalz00_2563;
																																																			BgL_globalz00_2563
																																																				=
																																																				BGl_findzd2globalzf2modulez20zzast_envz00
																																																				(BgL_idz00_2561,
																																																				BGl_za2moduleza2z00zzmodule_modulez00);
																																																			{	/* Ast/unit.scm 271 */
																																																				BgL_typez00_bglt
																																																					BgL_tlamz00_2564;
																																																				BgL_tlamz00_2564
																																																					=
																																																					BGl_typezd2ofzd2idz00zzast_identz00
																																																					(BgL_lamz00_1888,
																																																					BFALSE);
																																																				{	/* Ast/unit.scm 272 */

																																																					{	/* Ast/unit.scm 274 */
																																																						bool_t
																																																							BgL_test3783z00_5662;
																																																						{	/* Ast/unit.scm 274 */
																																																							bool_t
																																																								BgL_test3784z00_5663;
																																																							{	/* Ast/unit.scm 274 */
																																																								obj_t
																																																									BgL_tmpz00_5664;
																																																								{	/* Ast/unit.scm 274 */
																																																									obj_t
																																																										BgL_pairz00_4004;
																																																									BgL_pairz00_4004
																																																										=
																																																										CDR
																																																										(
																																																										((obj_t) BgL_defz00_2562));
																																																									BgL_tmpz00_5664
																																																										=
																																																										CAR
																																																										(BgL_pairz00_4004);
																																																								}
																																																								BgL_test3784z00_5663
																																																									=
																																																									(BgL_tmpz00_5664
																																																									==
																																																									CNST_TABLE_REF
																																																									(((long) 12)));
																																																							}
																																																							if (BgL_test3784z00_5663)
																																																								{	/* Ast/unit.scm 275 */
																																																									bool_t
																																																										BgL__ortest_1116z00_2580;
																																																									if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_2563, BGl_globalz00zzast_varz00))
																																																										{	/* Ast/unit.scm 275 */
																																																											BgL__ortest_1116z00_2580
																																																												=
																																																												(
																																																												(bool_t)
																																																												0);
																																																										}
																																																									else
																																																										{	/* Ast/unit.scm 275 */
																																																											BgL__ortest_1116z00_2580
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									if (BgL__ortest_1116z00_2580)
																																																										{	/* Ast/unit.scm 275 */
																																																											BgL_test3783z00_5662
																																																												=
																																																												BgL__ortest_1116z00_2580;
																																																										}
																																																									else
																																																										{	/* Ast/unit.scm 275 */
																																																											BgL_test3783z00_5662
																																																												=
																																																												(
																																																												(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_globalz00_2563))))->BgL_accessz00) == CNST_TABLE_REF(((long) 12)));
																																																								}}
																																																							else
																																																								{	/* Ast/unit.scm 274 */
																																																									BgL_test3783z00_5662
																																																										=
																																																										(
																																																										(bool_t)
																																																										0);
																																																								}
																																																						}
																																																						if (BgL_test3783z00_5662)
																																																							{	/* Ast/unit.scm 277 */
																																																								obj_t
																																																									BgL_arg2265z00_2574;
																																																								obj_t
																																																									BgL_arg2267z00_2575;
																																																								BgL_arg2265z00_2574
																																																									=
																																																									BGl_makezd2typedzd2identz00zzast_identz00
																																																									(BgL_idz00_2561,
																																																									(((BgL_typez00_bglt) COBJECT(BgL_tlamz00_2564))->BgL_idz00));
																																																								{	/* Ast/unit.scm 279 */
																																																									obj_t
																																																										BgL_arg2269z00_2577;
																																																									{	/* Ast/unit.scm 279 */
																																																										obj_t
																																																											BgL_arg2270z00_2578;
																																																										{	/* Ast/unit.scm 279 */
																																																											obj_t
																																																												BgL_pairz00_4011;
																																																											BgL_pairz00_4011
																																																												=
																																																												CDR
																																																												(
																																																												((obj_t) BgL_sexpz00_37));
																																																											BgL_arg2270z00_2578
																																																												=
																																																												CDR
																																																												(BgL_pairz00_4011);
																																																										}
																																																										BgL_arg2269z00_2577
																																																											=
																																																											BGl_findzd2locationzd2zztools_locationz00
																																																											(BgL_arg2270z00_2578);
																																																									}
																																																									BgL_arg2267z00_2575
																																																										=
																																																										BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																																																										(BgL_expz00_1890,
																																																										BgL_sexpz00_37,
																																																										BgL_arg2269z00_2577);
																																																								}
																																																								return
																																																									BGl_makezd2sfunzd2definitionz00zzast_unitz00
																																																									(BgL_arg2265z00_2574,
																																																									BGl_za2moduleza2z00zzmodule_modulez00,
																																																									BgL_argsz00_1889,
																																																									BgL_arg2267z00_2575,
																																																									BgL_sexpz00_37,
																																																									CNST_TABLE_REF
																																																									(((long) 13)));
																																																							}
																																																						else
																																																							{	/* Ast/unit.scm 274 */
																																																								return
																																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																									(BgL_varz00_1887,
																																																									BgL_sexpz00_37);
																																																							}
																																																					}
																																																				}
																																																			}
																																																		}
																																																	}
																																																}
																																															}
																																														else
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_cdrzd2837zd2_2019;
																																																BgL_cdrzd2837zd2_2019
																																																	=
																																																	CDR
																																																	(BgL_sexpz00_37);
																																																{	/* Ast/unit.scm 214 */
																																																	obj_t
																																																		BgL_arg1872z00_2020;
																																																	BgL_arg1872z00_2020
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd2837zd2_2019));
																																																	return
																																																		BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																		(BgL_arg1872z00_2020,
																																																		BgL_sexpz00_37);
																																																}
																																															}
																																													}
																																												else
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_cdrzd2864zd2_2023;
																																														BgL_cdrzd2864zd2_2023
																																															=
																																															CDR
																																															(BgL_sexpz00_37);
																																														{	/* Ast/unit.scm 214 */
																																															obj_t
																																																BgL_cdrzd2869zd2_2024;
																																															BgL_cdrzd2869zd2_2024
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd2864zd2_2023));
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_carzd2873zd2_2025;
																																																BgL_carzd2873zd2_2025
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd2869zd2_2024));
																																																if (SYMBOLP(BgL_carzd2873zd2_2025))
																																																	{	/* Ast/unit.scm 214 */
																																																		if (NULLP(CDR(((obj_t) BgL_cdrzd2869zd2_2024))))
																																																			{	/* Ast/unit.scm 214 */
																																																				obj_t
																																																					BgL_arg1878z00_2029;
																																																				BgL_arg1878z00_2029
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd2864zd2_2023));
																																																				{
																																																					obj_t
																																																						BgL_var2z00_5706;
																																																					obj_t
																																																						BgL_varz00_5705;
																																																					BgL_varz00_5705
																																																						=
																																																						BgL_arg1878z00_2029;
																																																					BgL_var2z00_5706
																																																						=
																																																						BgL_carzd2873zd2_2025;
																																																					BgL_var2z00_1896
																																																						=
																																																						BgL_var2z00_5706;
																																																					BgL_varz00_1895
																																																						=
																																																						BgL_varz00_5705;
																																																					goto
																																																						BgL_tagzd2366zd2_1897;
																																																				}
																																																			}
																																																		else
																																																			{	/* Ast/unit.scm 214 */
																																																				obj_t
																																																					BgL_arg1879z00_2031;
																																																				BgL_arg1879z00_2031
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd2864zd2_2023));
																																																				return
																																																					BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																					(BgL_arg1879z00_2031,
																																																					BgL_sexpz00_37);
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/unit.scm 214 */
																																																		obj_t
																																																			BgL_arg1883z00_2035;
																																																		BgL_arg1883z00_2035
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd2864zd2_2023));
																																																		return
																																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																			(BgL_arg1883z00_2035,
																																																			BgL_sexpz00_37);
																																																	}
																																															}
																																														}
																																													}
																																											}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_cdrzd2950zd2_2039;
																																								BgL_cdrzd2950zd2_2039
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_cdrzd2661zd2_1977));
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_carzd2956zd2_2040;
																																									BgL_carzd2956zd2_2040
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2950zd2_2039));
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_carzd2961zd2_2041;
																																										obj_t
																																											BgL_cdrzd2962zd2_2042;
																																										BgL_carzd2961zd2_2041
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_carzd2956zd2_2040));
																																										BgL_cdrzd2962zd2_2042
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_carzd2956zd2_2040));
																																										if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd2961zd2_2041))
																																											{	/* Ast/unit.scm 214 */
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd2950zd2_2039))))
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_arg1889z00_2046;
																																														obj_t
																																															BgL_arg1891z00_2047;
																																														obj_t
																																															BgL_arg1892z00_2048;
																																														BgL_arg1889z00_2046
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd2661zd2_1977));
																																														BgL_arg1891z00_2047
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd2962zd2_2042));
																																														BgL_arg1892z00_2048
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd2962zd2_2042));
																																														{
																																															obj_t
																																																BgL_expz00_5736;
																																															obj_t
																																																BgL_argsz00_5735;
																																															obj_t
																																																BgL_lamz00_5734;
																																															obj_t
																																																BgL_varz00_5733;
																																															BgL_varz00_5733
																																																=
																																																BgL_arg1889z00_2046;
																																															BgL_lamz00_5734
																																																=
																																																BgL_carzd2961zd2_2041;
																																															BgL_argsz00_5735
																																																=
																																																BgL_arg1891z00_2047;
																																															BgL_expz00_5736
																																																=
																																																BgL_arg1892z00_2048;
																																															BgL_expz00_1890
																																																=
																																																BgL_expz00_5736;
																																															BgL_argsz00_1889
																																																=
																																																BgL_argsz00_5735;
																																															BgL_lamz00_1888
																																																=
																																																BgL_lamz00_5734;
																																															BgL_varz00_1887
																																																=
																																																BgL_varz00_5733;
																																															goto
																																																BgL_tagzd2364zd2_1891;
																																														}
																																													}
																																												else
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_cdrzd21005zd2_2049;
																																														BgL_cdrzd21005zd2_2049
																																															=
																																															CDR
																																															(BgL_sexpz00_37);
																																														{	/* Ast/unit.scm 214 */
																																															obj_t
																																																BgL_arg1893z00_2050;
																																															BgL_arg1893z00_2050
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd21005zd2_2049));
																																															return
																																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																(BgL_arg1893z00_2050,
																																																BgL_sexpz00_37);
																																														}
																																													}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_cdrzd21032zd2_2053;
																																												BgL_cdrzd21032zd2_2053
																																													=
																																													CDR
																																													(BgL_sexpz00_37);
																																												{	/* Ast/unit.scm 214 */
																																													obj_t
																																														BgL_cdrzd21037zd2_2054;
																																													BgL_cdrzd21037zd2_2054
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd21032zd2_2053));
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_carzd21041zd2_2055;
																																														BgL_carzd21041zd2_2055
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd21037zd2_2054));
																																														if (SYMBOLP(BgL_carzd21041zd2_2055))
																																															{	/* Ast/unit.scm 214 */
																																																if (NULLP(CDR(((obj_t) BgL_cdrzd21037zd2_2054))))
																																																	{	/* Ast/unit.scm 214 */
																																																		obj_t
																																																			BgL_arg1901z00_2059;
																																																		BgL_arg1901z00_2059
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd21032zd2_2053));
																																																		{
																																																			obj_t
																																																				BgL_var2z00_5755;
																																																			obj_t
																																																				BgL_varz00_5754;
																																																			BgL_varz00_5754
																																																				=
																																																				BgL_arg1901z00_2059;
																																																			BgL_var2z00_5755
																																																				=
																																																				BgL_carzd21041zd2_2055;
																																																			BgL_var2z00_1896
																																																				=
																																																				BgL_var2z00_5755;
																																																			BgL_varz00_1895
																																																				=
																																																				BgL_varz00_5754;
																																																			goto
																																																				BgL_tagzd2366zd2_1897;
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/unit.scm 214 */
																																																		obj_t
																																																			BgL_arg1902z00_2061;
																																																		BgL_arg1902z00_2061
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd21032zd2_2053));
																																																		return
																																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																			(BgL_arg1902z00_2061,
																																																			BgL_sexpz00_37);
																																																	}
																																															}
																																														else
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_arg1905z00_2065;
																																																BgL_arg1905z00_2065
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd21032zd2_2053));
																																																return
																																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																	(BgL_arg1905z00_2065,
																																																	BgL_sexpz00_37);
																																															}
																																													}
																																												}
																																											}
																																									}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_cdrzd21118zd2_2069;
																																						BgL_cdrzd21118zd2_2069
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd2661zd2_1977));
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_carzd21124zd2_2070;
																																							BgL_carzd21124zd2_2070
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21118zd2_2069));
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_carzd21129zd2_2071;
																																								obj_t
																																									BgL_cdrzd21130zd2_2072;
																																								BgL_carzd21129zd2_2071
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_carzd21124zd2_2070));
																																								BgL_cdrzd21130zd2_2072
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_carzd21124zd2_2070));
																																								if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd21129zd2_2071))
																																									{	/* Ast/unit.scm 214 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd21118zd2_2069))))
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1911z00_2076;
																																												obj_t
																																													BgL_arg1912z00_2077;
																																												obj_t
																																													BgL_arg1913z00_2078;
																																												BgL_arg1911z00_2076
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd2661zd2_1977));
																																												BgL_arg1912z00_2077
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd21130zd2_2072));
																																												BgL_arg1913z00_2078
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd21130zd2_2072));
																																												{
																																													obj_t
																																														BgL_expz00_5785;
																																													obj_t
																																														BgL_argsz00_5784;
																																													obj_t
																																														BgL_lamz00_5783;
																																													obj_t
																																														BgL_varz00_5782;
																																													BgL_varz00_5782
																																														=
																																														BgL_arg1911z00_2076;
																																													BgL_lamz00_5783
																																														=
																																														BgL_carzd21129zd2_2071;
																																													BgL_argsz00_5784
																																														=
																																														BgL_arg1912z00_2077;
																																													BgL_expz00_5785
																																														=
																																														BgL_arg1913z00_2078;
																																													BgL_expz00_1890
																																														=
																																														BgL_expz00_5785;
																																													BgL_argsz00_1889
																																														=
																																														BgL_argsz00_5784;
																																													BgL_lamz00_1888
																																														=
																																														BgL_lamz00_5783;
																																													BgL_varz00_1887
																																														=
																																														BgL_varz00_5782;
																																													goto
																																														BgL_tagzd2364zd2_1891;
																																												}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_cdrzd21173zd2_2079;
																																												BgL_cdrzd21173zd2_2079
																																													=
																																													CDR
																																													(BgL_sexpz00_37);
																																												{	/* Ast/unit.scm 214 */
																																													obj_t
																																														BgL_arg1914z00_2080;
																																													BgL_arg1914z00_2080
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd21173zd2_2079));
																																													return
																																														BGl_makezd2svarzd2definitionz00zzast_unitz00
																																														(BgL_arg1914z00_2080,
																																														BgL_sexpz00_37);
																																												}
																																											}
																																									}
																																								else
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_cdrzd21200zd2_2083;
																																										BgL_cdrzd21200zd2_2083
																																											=
																																											CDR
																																											(BgL_sexpz00_37);
																																										{	/* Ast/unit.scm 214 */
																																											obj_t
																																												BgL_cdrzd21205zd2_2084;
																																											BgL_cdrzd21205zd2_2084
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd21200zd2_2083));
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_carzd21209zd2_2085;
																																												BgL_carzd21209zd2_2085
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd21205zd2_2084));
																																												if (SYMBOLP(BgL_carzd21209zd2_2085))
																																													{	/* Ast/unit.scm 214 */
																																														if (NULLP(CDR(((obj_t) BgL_cdrzd21205zd2_2084))))
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_arg1920z00_2089;
																																																BgL_arg1920z00_2089
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd21200zd2_2083));
																																																{
																																																	obj_t
																																																		BgL_var2z00_5804;
																																																	obj_t
																																																		BgL_varz00_5803;
																																																	BgL_varz00_5803
																																																		=
																																																		BgL_arg1920z00_2089;
																																																	BgL_var2z00_5804
																																																		=
																																																		BgL_carzd21209zd2_2085;
																																																	BgL_var2z00_1896
																																																		=
																																																		BgL_var2z00_5804;
																																																	BgL_varz00_1895
																																																		=
																																																		BgL_varz00_5803;
																																																	goto
																																																		BgL_tagzd2366zd2_1897;
																																																}
																																															}
																																														else
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_arg1921z00_2091;
																																																BgL_arg1921z00_2091
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd21200zd2_2083));
																																																return
																																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																	(BgL_arg1921z00_2091,
																																																	BgL_sexpz00_37);
																																															}
																																													}
																																												else
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_arg1925z00_2095;
																																														BgL_arg1925z00_2095
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd21200zd2_2083));
																																														return
																																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																																															(BgL_arg1925z00_2095,
																																															BgL_sexpz00_37);
																																													}
																																											}
																																										}
																																									}
																																							}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Ast/unit.scm 214 */
																																				obj_t
																																					BgL_cdrzd21286zd2_2098;
																																				BgL_cdrzd21286zd2_2098
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd2661zd2_1977));
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_carzd21292zd2_2099;
																																					BgL_carzd21292zd2_2099
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21286zd2_2098));
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_carzd21297zd2_2100;
																																						obj_t
																																							BgL_cdrzd21298zd2_2101;
																																						BgL_carzd21297zd2_2100
																																							=
																																							CAR
																																							(((obj_t) BgL_carzd21292zd2_2099));
																																						BgL_cdrzd21298zd2_2101
																																							=
																																							CDR
																																							(((obj_t) BgL_carzd21292zd2_2099));
																																						if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd21297zd2_2100))
																																							{	/* Ast/unit.scm 214 */
																																								if (NULLP(CDR(((obj_t) BgL_cdrzd21286zd2_2098))))
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_arg1930z00_2105;
																																										obj_t
																																											BgL_arg1931z00_2106;
																																										obj_t
																																											BgL_arg1932z00_2107;
																																										BgL_arg1930z00_2105
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd2661zd2_1977));
																																										BgL_arg1931z00_2106
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd21298zd2_2101));
																																										BgL_arg1932z00_2107
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd21298zd2_2101));
																																										{
																																											obj_t
																																												BgL_expz00_5834;
																																											obj_t
																																												BgL_argsz00_5833;
																																											obj_t
																																												BgL_lamz00_5832;
																																											obj_t
																																												BgL_varz00_5831;
																																											BgL_varz00_5831
																																												=
																																												BgL_arg1930z00_2105;
																																											BgL_lamz00_5832
																																												=
																																												BgL_carzd21297zd2_2100;
																																											BgL_argsz00_5833
																																												=
																																												BgL_arg1931z00_2106;
																																											BgL_expz00_5834
																																												=
																																												BgL_arg1932z00_2107;
																																											BgL_expz00_1890
																																												=
																																												BgL_expz00_5834;
																																											BgL_argsz00_1889
																																												=
																																												BgL_argsz00_5833;
																																											BgL_lamz00_1888
																																												=
																																												BgL_lamz00_5832;
																																											BgL_varz00_1887
																																												=
																																												BgL_varz00_5831;
																																											goto
																																												BgL_tagzd2364zd2_1891;
																																										}
																																									}
																																								else
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_cdrzd21341zd2_2108;
																																										BgL_cdrzd21341zd2_2108
																																											=
																																											CDR
																																											(BgL_sexpz00_37);
																																										{	/* Ast/unit.scm 214 */
																																											obj_t
																																												BgL_arg1933z00_2109;
																																											BgL_arg1933z00_2109
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd21341zd2_2108));
																																											return
																																												BGl_makezd2svarzd2definitionz00zzast_unitz00
																																												(BgL_arg1933z00_2109,
																																												BgL_sexpz00_37);
																																										}
																																									}
																																							}
																																						else
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_cdrzd21368zd2_2112;
																																								BgL_cdrzd21368zd2_2112
																																									=
																																									CDR
																																									(BgL_sexpz00_37);
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_cdrzd21373zd2_2113;
																																									BgL_cdrzd21373zd2_2113
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd21368zd2_2112));
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_carzd21377zd2_2114;
																																										BgL_carzd21377zd2_2114
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd21373zd2_2113));
																																										if (SYMBOLP(BgL_carzd21377zd2_2114))
																																											{	/* Ast/unit.scm 214 */
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd21373zd2_2113))))
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_arg1939z00_2118;
																																														BgL_arg1939z00_2118
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd21368zd2_2112));
																																														{
																																															obj_t
																																																BgL_var2z00_5853;
																																															obj_t
																																																BgL_varz00_5852;
																																															BgL_varz00_5852
																																																=
																																																BgL_arg1939z00_2118;
																																															BgL_var2z00_5853
																																																=
																																																BgL_carzd21377zd2_2114;
																																															BgL_var2z00_1896
																																																=
																																																BgL_var2z00_5853;
																																															BgL_varz00_1895
																																																=
																																																BgL_varz00_5852;
																																															goto
																																																BgL_tagzd2366zd2_1897;
																																														}
																																													}
																																												else
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_arg1940z00_2120;
																																														BgL_arg1940z00_2120
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd21368zd2_2112));
																																														return
																																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																																															(BgL_arg1940z00_2120,
																																															BgL_sexpz00_37);
																																													}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1943z00_2124;
																																												BgL_arg1943z00_2124
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd21368zd2_2112));
																																												return
																																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																																													(BgL_arg1943z00_2124,
																																													BgL_sexpz00_37);
																																											}
																																									}
																																								}
																																							}
																																					}
																																				}
																																			}
																																	}
																																else
																																	{	/* Ast/unit.scm 214 */
																																		obj_t
																																			BgL_cdrzd21454zd2_2128;
																																		BgL_cdrzd21454zd2_2128
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_cdrzd2661zd2_1977));
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_carzd21460zd2_2129;
																																			BgL_carzd21460zd2_2129
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21454zd2_2128));
																																			{	/* Ast/unit.scm 214 */
																																				obj_t
																																					BgL_carzd21465zd2_2130;
																																				obj_t
																																					BgL_cdrzd21466zd2_2131;
																																				BgL_carzd21465zd2_2130
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_carzd21460zd2_2129));
																																				BgL_cdrzd21466zd2_2131
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_carzd21460zd2_2129));
																																				if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd21465zd2_2130))
																																					{	/* Ast/unit.scm 214 */
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd21454zd2_2128))))
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_arg1949z00_2135;
																																								obj_t
																																									BgL_arg1951z00_2136;
																																								obj_t
																																									BgL_arg1952z00_2137;
																																								BgL_arg1949z00_2135
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd2661zd2_1977));
																																								BgL_arg1951z00_2136
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd21466zd2_2131));
																																								BgL_arg1952z00_2137
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_cdrzd21466zd2_2131));
																																								{
																																									obj_t
																																										BgL_expz00_5883;
																																									obj_t
																																										BgL_argsz00_5882;
																																									obj_t
																																										BgL_lamz00_5881;
																																									obj_t
																																										BgL_varz00_5880;
																																									BgL_varz00_5880
																																										=
																																										BgL_arg1949z00_2135;
																																									BgL_lamz00_5881
																																										=
																																										BgL_carzd21465zd2_2130;
																																									BgL_argsz00_5882
																																										=
																																										BgL_arg1951z00_2136;
																																									BgL_expz00_5883
																																										=
																																										BgL_arg1952z00_2137;
																																									BgL_expz00_1890
																																										=
																																										BgL_expz00_5883;
																																									BgL_argsz00_1889
																																										=
																																										BgL_argsz00_5882;
																																									BgL_lamz00_1888
																																										=
																																										BgL_lamz00_5881;
																																									BgL_varz00_1887
																																										=
																																										BgL_varz00_5880;
																																									goto
																																										BgL_tagzd2364zd2_1891;
																																								}
																																							}
																																						else
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_cdrzd21509zd2_2138;
																																								BgL_cdrzd21509zd2_2138
																																									=
																																									CDR
																																									(BgL_sexpz00_37);
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_arg1953z00_2139;
																																									BgL_arg1953z00_2139
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21509zd2_2138));
																																									return
																																										BGl_makezd2svarzd2definitionz00zzast_unitz00
																																										(BgL_arg1953z00_2139,
																																										BgL_sexpz00_37);
																																								}
																																							}
																																					}
																																				else
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_cdrzd21536zd2_2142;
																																						BgL_cdrzd21536zd2_2142
																																							=
																																							CDR
																																							(BgL_sexpz00_37);
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_cdrzd21541zd2_2143;
																																							BgL_cdrzd21541zd2_2143
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd21536zd2_2142));
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_carzd21545zd2_2144;
																																								BgL_carzd21545zd2_2144
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd21541zd2_2143));
																																								if (SYMBOLP(BgL_carzd21545zd2_2144))
																																									{	/* Ast/unit.scm 214 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd21541zd2_2143))))
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1959z00_2148;
																																												BgL_arg1959z00_2148
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd21536zd2_2142));
																																												{
																																													obj_t
																																														BgL_var2z00_5902;
																																													obj_t
																																														BgL_varz00_5901;
																																													BgL_varz00_5901
																																														=
																																														BgL_arg1959z00_2148;
																																													BgL_var2z00_5902
																																														=
																																														BgL_carzd21545zd2_2144;
																																													BgL_var2z00_1896
																																														=
																																														BgL_var2z00_5902;
																																													BgL_varz00_1895
																																														=
																																														BgL_varz00_5901;
																																													goto
																																														BgL_tagzd2366zd2_1897;
																																												}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg1960z00_2150;
																																												BgL_arg1960z00_2150
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd21536zd2_2142));
																																												return
																																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																																													(BgL_arg1960z00_2150,
																																													BgL_sexpz00_37);
																																											}
																																									}
																																								else
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_arg1963z00_2154;
																																										BgL_arg1963z00_2154
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd21536zd2_2142));
																																										return
																																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																																											(BgL_arg1963z00_2154,
																																											BgL_sexpz00_37);
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
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_cdrzd21622zd2_2157;
																															BgL_cdrzd21622zd2_2157
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd2661zd2_1977));
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_carzd21628zd2_2158;
																																BgL_carzd21628zd2_2158
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd21622zd2_2157));
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_carzd21633zd2_2159;
																																	obj_t
																																		BgL_cdrzd21634zd2_2160;
																																	BgL_carzd21633zd2_2159
																																		=
																																		CAR(((obj_t)
																																			BgL_carzd21628zd2_2158));
																																	BgL_cdrzd21634zd2_2160
																																		=
																																		CDR(((obj_t)
																																			BgL_carzd21628zd2_2158));
																																	if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd21633zd2_2159))
																																		{	/* Ast/unit.scm 214 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd21622zd2_2157))))
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_arg1968z00_2164;
																																					obj_t
																																						BgL_arg1969z00_2165;
																																					obj_t
																																						BgL_arg1970z00_2166;
																																					BgL_arg1968z00_2164
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2661zd2_1977));
																																					BgL_arg1969z00_2165
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21634zd2_2160));
																																					BgL_arg1970z00_2166
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd21634zd2_2160));
																																					{
																																						obj_t
																																							BgL_expz00_5932;
																																						obj_t
																																							BgL_argsz00_5931;
																																						obj_t
																																							BgL_lamz00_5930;
																																						obj_t
																																							BgL_varz00_5929;
																																						BgL_varz00_5929
																																							=
																																							BgL_arg1968z00_2164;
																																						BgL_lamz00_5930
																																							=
																																							BgL_carzd21633zd2_2159;
																																						BgL_argsz00_5931
																																							=
																																							BgL_arg1969z00_2165;
																																						BgL_expz00_5932
																																							=
																																							BgL_arg1970z00_2166;
																																						BgL_expz00_1890
																																							=
																																							BgL_expz00_5932;
																																						BgL_argsz00_1889
																																							=
																																							BgL_argsz00_5931;
																																						BgL_lamz00_1888
																																							=
																																							BgL_lamz00_5930;
																																						BgL_varz00_1887
																																							=
																																							BgL_varz00_5929;
																																						goto
																																							BgL_tagzd2364zd2_1891;
																																					}
																																				}
																																			else
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_cdrzd21677zd2_2167;
																																					BgL_cdrzd21677zd2_2167
																																						=
																																						CDR
																																						(BgL_sexpz00_37);
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_arg1971z00_2168;
																																						BgL_arg1971z00_2168
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd21677zd2_2167));
																																						return
																																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																																							(BgL_arg1971z00_2168,
																																							BgL_sexpz00_37);
																																					}
																																				}
																																		}
																																	else
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_cdrzd21704zd2_2171;
																																			BgL_cdrzd21704zd2_2171
																																				=
																																				CDR
																																				(BgL_sexpz00_37);
																																			{	/* Ast/unit.scm 214 */
																																				obj_t
																																					BgL_cdrzd21709zd2_2172;
																																				BgL_cdrzd21709zd2_2172
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd21704zd2_2171));
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_carzd21713zd2_2173;
																																					BgL_carzd21713zd2_2173
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21709zd2_2172));
																																					if (SYMBOLP(BgL_carzd21713zd2_2173))
																																						{	/* Ast/unit.scm 214 */
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd21709zd2_2172))))
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_arg1977z00_2177;
																																									BgL_arg1977z00_2177
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21704zd2_2171));
																																									{
																																										obj_t
																																											BgL_var2z00_5951;
																																										obj_t
																																											BgL_varz00_5950;
																																										BgL_varz00_5950
																																											=
																																											BgL_arg1977z00_2177;
																																										BgL_var2z00_5951
																																											=
																																											BgL_carzd21713zd2_2173;
																																										BgL_var2z00_1896
																																											=
																																											BgL_var2z00_5951;
																																										BgL_varz00_1895
																																											=
																																											BgL_varz00_5950;
																																										goto
																																											BgL_tagzd2366zd2_1897;
																																									}
																																								}
																																							else
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_arg1979z00_2179;
																																									BgL_arg1979z00_2179
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21704zd2_2171));
																																									return
																																										BGl_makezd2svarzd2definitionz00zzast_unitz00
																																										(BgL_arg1979z00_2179,
																																										BgL_sexpz00_37);
																																								}
																																						}
																																					else
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_arg1982z00_2183;
																																							BgL_arg1982z00_2183
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21704zd2_2171));
																																							return
																																								BGl_makezd2svarzd2definitionz00zzast_unitz00
																																								(BgL_arg1982z00_2183,
																																								BgL_sexpz00_37);
																																						}
																																				}
																																			}
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Ast/unit.scm 214 */
																													obj_t
																														BgL_cdrzd21790zd2_2186;
																													BgL_cdrzd21790zd2_2186
																														=
																														CDR(((obj_t)
																															BgL_cdrzd2661zd2_1977));
																													{	/* Ast/unit.scm 214 */
																														obj_t
																															BgL_carzd21796zd2_2187;
																														BgL_carzd21796zd2_2187
																															=
																															CAR(((obj_t)
																																BgL_cdrzd21790zd2_2186));
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_carzd21801zd2_2188;
																															obj_t
																																BgL_cdrzd21802zd2_2189;
																															BgL_carzd21801zd2_2188
																																=
																																CAR(((obj_t)
																																	BgL_carzd21796zd2_2187));
																															BgL_cdrzd21802zd2_2189
																																=
																																CDR(((obj_t)
																																	BgL_carzd21796zd2_2187));
																															if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd21801zd2_2188))
																																{	/* Ast/unit.scm 214 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd21790zd2_2186))))
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_arg1987z00_2193;
																																			obj_t
																																				BgL_arg1988z00_2194;
																																			obj_t
																																				BgL_arg1989z00_2195;
																																			BgL_arg1987z00_2193
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2661zd2_1977));
																																			BgL_arg1988z00_2194
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21802zd2_2189));
																																			BgL_arg1989z00_2195
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd21802zd2_2189));
																																			{
																																				obj_t
																																					BgL_expz00_5981;
																																				obj_t
																																					BgL_argsz00_5980;
																																				obj_t
																																					BgL_lamz00_5979;
																																				obj_t
																																					BgL_varz00_5978;
																																				BgL_varz00_5978
																																					=
																																					BgL_arg1987z00_2193;
																																				BgL_lamz00_5979
																																					=
																																					BgL_carzd21801zd2_2188;
																																				BgL_argsz00_5980
																																					=
																																					BgL_arg1988z00_2194;
																																				BgL_expz00_5981
																																					=
																																					BgL_arg1989z00_2195;
																																				BgL_expz00_1890
																																					=
																																					BgL_expz00_5981;
																																				BgL_argsz00_1889
																																					=
																																					BgL_argsz00_5980;
																																				BgL_lamz00_1888
																																					=
																																					BgL_lamz00_5979;
																																				BgL_varz00_1887
																																					=
																																					BgL_varz00_5978;
																																				goto
																																					BgL_tagzd2364zd2_1891;
																																			}
																																		}
																																	else
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_cdrzd21845zd2_2196;
																																			BgL_cdrzd21845zd2_2196
																																				=
																																				CDR
																																				(BgL_sexpz00_37);
																																			{	/* Ast/unit.scm 214 */
																																				obj_t
																																					BgL_arg1990z00_2197;
																																				BgL_arg1990z00_2197
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd21845zd2_2196));
																																				return
																																					BGl_makezd2svarzd2definitionz00zzast_unitz00
																																					(BgL_arg1990z00_2197,
																																					BgL_sexpz00_37);
																																			}
																																		}
																																}
																															else
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_cdrzd21872zd2_2200;
																																	BgL_cdrzd21872zd2_2200
																																		=
																																		CDR
																																		(BgL_sexpz00_37);
																																	{	/* Ast/unit.scm 214 */
																																		obj_t
																																			BgL_cdrzd21877zd2_2201;
																																		BgL_cdrzd21877zd2_2201
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_cdrzd21872zd2_2200));
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_carzd21881zd2_2202;
																																			BgL_carzd21881zd2_2202
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21877zd2_2201));
																																			if (SYMBOLP(BgL_carzd21881zd2_2202))
																																				{	/* Ast/unit.scm 214 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd21877zd2_2201))))
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_arg1997z00_2206;
																																							BgL_arg1997z00_2206
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21872zd2_2200));
																																							{
																																								obj_t
																																									BgL_var2z00_6000;
																																								obj_t
																																									BgL_varz00_5999;
																																								BgL_varz00_5999
																																									=
																																									BgL_arg1997z00_2206;
																																								BgL_var2z00_6000
																																									=
																																									BgL_carzd21881zd2_2202;
																																								BgL_var2z00_1896
																																									=
																																									BgL_var2z00_6000;
																																								BgL_varz00_1895
																																									=
																																									BgL_varz00_5999;
																																								goto
																																									BgL_tagzd2366zd2_1897;
																																							}
																																						}
																																					else
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_arg1998z00_2208;
																																							BgL_arg1998z00_2208
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21872zd2_2200));
																																							return
																																								BGl_makezd2svarzd2definitionz00zzast_unitz00
																																								(BgL_arg1998z00_2208,
																																								BgL_sexpz00_37);
																																						}
																																				}
																																			else
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_arg2001z00_2212;
																																					BgL_arg2001z00_2212
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21872zd2_2200));
																																					return
																																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																																						(BgL_arg2001z00_2212,
																																						BgL_sexpz00_37);
																																				}
																																		}
																																	}
																																}
																														}
																													}
																												}
																										}
																									else
																										{	/* Ast/unit.scm 214 */
																											obj_t
																												BgL_cdrzd21973zd2_2215;
																											BgL_cdrzd21973zd2_2215 =
																												CDR(((obj_t)
																													BgL_cdrzd2661zd2_1977));
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_carzd21977zd2_2216;
																												BgL_carzd21977zd2_2216 =
																													CAR(((obj_t)
																														BgL_cdrzd21973zd2_2215));
																												if (SYMBOLP
																													(BgL_carzd21977zd2_2216))
																													{	/* Ast/unit.scm 214 */
																														if (NULLP(CDR(
																																	((obj_t)
																																		BgL_cdrzd21973zd2_2215))))
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_arg2007z00_2220;
																																BgL_arg2007z00_2220
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2661zd2_1977));
																																{
																																	obj_t
																																		BgL_var2z00_6020;
																																	obj_t
																																		BgL_varz00_6019;
																																	BgL_varz00_6019
																																		=
																																		BgL_arg2007z00_2220;
																																	BgL_var2z00_6020
																																		=
																																		BgL_carzd21977zd2_2216;
																																	BgL_var2z00_1896
																																		=
																																		BgL_var2z00_6020;
																																	BgL_varz00_1895
																																		=
																																		BgL_varz00_6019;
																																	goto
																																		BgL_tagzd2366zd2_1897;
																																}
																															}
																														else
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_cdrzd21999zd2_2221;
																																BgL_cdrzd21999zd2_2221
																																	=
																																	CDR
																																	(BgL_sexpz00_37);
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_arg2008z00_2222;
																																	BgL_arg2008z00_2222
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21999zd2_2221));
																																	return
																																		BGl_makezd2svarzd2definitionz00zzast_unitz00
																																		(BgL_arg2008z00_2222,
																																		BgL_sexpz00_37);
																																}
																															}
																													}
																												else
																													{	/* Ast/unit.scm 214 */
																														obj_t
																															BgL_cdrzd22025zd2_2225;
																														BgL_cdrzd22025zd2_2225
																															=
																															CDR
																															(BgL_sexpz00_37);
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_arg2012z00_2226;
																															BgL_arg2012z00_2226
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd22025zd2_2225));
																															return
																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																(BgL_arg2012z00_2226,
																																BgL_sexpz00_37);
																														}
																													}
																											}
																										}
																								}
																							else
																								{	/* Ast/unit.scm 214 */
																									obj_t BgL_cdrzd22054zd2_2229;

																									BgL_cdrzd22054zd2_2229 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2661zd2_1977));
																									{	/* Ast/unit.scm 214 */
																										obj_t
																											BgL_carzd22060zd2_2230;
																										BgL_carzd22060zd2_2230 =
																											CAR(((obj_t)
																												BgL_cdrzd22054zd2_2229));
																										{	/* Ast/unit.scm 214 */
																											obj_t
																												BgL_carzd22065zd2_2231;
																											obj_t
																												BgL_cdrzd22066zd2_2232;
																											BgL_carzd22065zd2_2231 =
																												CAR(((obj_t)
																													BgL_carzd22060zd2_2230));
																											BgL_cdrzd22066zd2_2232 =
																												CDR(((obj_t)
																													BgL_carzd22060zd2_2230));
																											if (BGl_lambdazf3zf3zzast_unitz00(BgL_carzd22065zd2_2231))
																												{	/* Ast/unit.scm 214 */
																													if (PAIRP
																														(BgL_cdrzd22066zd2_2232))
																														{	/* Ast/unit.scm 214 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd22054zd2_2229))))
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_arg2018z00_2237;
																																	obj_t
																																		BgL_arg2020z00_2238;
																																	obj_t
																																		BgL_arg2021z00_2239;
																																	BgL_arg2018z00_2237
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2661zd2_1977));
																																	BgL_arg2020z00_2238
																																		=
																																		CAR
																																		(BgL_cdrzd22066zd2_2232);
																																	BgL_arg2021z00_2239
																																		=
																																		CDR
																																		(BgL_cdrzd22066zd2_2232);
																																	{
																																		obj_t
																																			BgL_expz00_6052;
																																		obj_t
																																			BgL_argsz00_6051;
																																		obj_t
																																			BgL_lamz00_6050;
																																		obj_t
																																			BgL_varz00_6049;
																																		BgL_varz00_6049
																																			=
																																			BgL_arg2018z00_2237;
																																		BgL_lamz00_6050
																																			=
																																			BgL_carzd22065zd2_2231;
																																		BgL_argsz00_6051
																																			=
																																			BgL_arg2020z00_2238;
																																		BgL_expz00_6052
																																			=
																																			BgL_arg2021z00_2239;
																																		BgL_expz00_1890
																																			=
																																			BgL_expz00_6052;
																																		BgL_argsz00_1889
																																			=
																																			BgL_argsz00_6051;
																																		BgL_lamz00_1888
																																			=
																																			BgL_lamz00_6050;
																																		BgL_varz00_1887
																																			=
																																			BgL_varz00_6049;
																																		goto
																																			BgL_tagzd2364zd2_1891;
																																	}
																																}
																															else
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_cdrzd22111zd2_2240;
																																	BgL_cdrzd22111zd2_2240
																																		=
																																		CDR
																																		(BgL_sexpz00_37);
																																	{	/* Ast/unit.scm 214 */
																																		obj_t
																																			BgL_arg2022z00_2241;
																																		BgL_arg2022z00_2241
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd22111zd2_2240));
																																		return
																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																			(BgL_arg2022z00_2241,
																																			BgL_sexpz00_37);
																																	}
																																}
																														}
																													else
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_cdrzd22138zd2_2244;
																															BgL_cdrzd22138zd2_2244
																																=
																																CDR
																																(BgL_sexpz00_37);
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_cdrzd22143zd2_2245;
																																BgL_cdrzd22143zd2_2245
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd22138zd2_2244));
																																{	/* Ast/unit.scm 214 */
																																	obj_t
																																		BgL_carzd22147zd2_2246;
																																	BgL_carzd22147zd2_2246
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd22143zd2_2245));
																																	if (SYMBOLP
																																		(BgL_carzd22147zd2_2246))
																																		{	/* Ast/unit.scm 214 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd22143zd2_2245))))
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_arg2031z00_2250;
																																					BgL_arg2031z00_2250
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd22138zd2_2244));
																																					{
																																						obj_t
																																							BgL_var2z00_6071;
																																						obj_t
																																							BgL_varz00_6070;
																																						BgL_varz00_6070
																																							=
																																							BgL_arg2031z00_2250;
																																						BgL_var2z00_6071
																																							=
																																							BgL_carzd22147zd2_2246;
																																						BgL_var2z00_1896
																																							=
																																							BgL_var2z00_6071;
																																						BgL_varz00_1895
																																							=
																																							BgL_varz00_6070;
																																						goto
																																							BgL_tagzd2366zd2_1897;
																																					}
																																				}
																																			else
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_arg2033z00_2252;
																																					BgL_arg2033z00_2252
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd22138zd2_2244));
																																					return
																																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																																						(BgL_arg2033z00_2252,
																																						BgL_sexpz00_37);
																																				}
																																		}
																																	else
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_arg2036z00_2256;
																																			BgL_arg2036z00_2256
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd22138zd2_2244));
																																			return
																																				BGl_makezd2svarzd2definitionz00zzast_unitz00
																																				(BgL_arg2036z00_2256,
																																				BgL_sexpz00_37);
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Ast/unit.scm 214 */
																													obj_t
																														BgL_cdrzd22214zd2_2258;
																													BgL_cdrzd22214zd2_2258
																														=
																														CDR(BgL_sexpz00_37);
																													{	/* Ast/unit.scm 214 */
																														obj_t
																															BgL_cdrzd22219zd2_2259;
																														BgL_cdrzd22219zd2_2259
																															=
																															CDR(((obj_t)
																																BgL_cdrzd22214zd2_2258));
																														{	/* Ast/unit.scm 214 */
																															obj_t
																																BgL_carzd22223zd2_2260;
																															BgL_carzd22223zd2_2260
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd22219zd2_2259));
																															{	/* Ast/unit.scm 214 */
																																obj_t
																																	BgL_cdrzd22227zd2_2261;
																																BgL_cdrzd22227zd2_2261
																																	=
																																	CDR(((obj_t)
																																		BgL_carzd22223zd2_2260));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd22223zd2_2260))
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				2))))
																																	{	/* Ast/unit.scm 214 */
																																		if (PAIRP
																																			(BgL_cdrzd22227zd2_2261))
																																			{	/* Ast/unit.scm 214 */
																																				if (NULLP(CDR(BgL_cdrzd22227zd2_2261)))
																																					{	/* Ast/unit.scm 214 */
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd22219zd2_2259))))
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_arg2046z00_2270;
																																								BgL_arg2046z00_2270
																																									=
																																									CAR
																																									(BgL_cdrzd22227zd2_2261);
																																								{	/* Ast/unit.scm 283 */
																																									obj_t
																																										BgL_arg2277z00_4362;
																																									{	/* Ast/unit.scm 283 */
																																										obj_t
																																											BgL_pairz00_4366;
																																										BgL_pairz00_4366
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_sexpz00_37));
																																										BgL_arg2277z00_4362
																																											=
																																											CDR
																																											(BgL_pairz00_4366);
																																									}
																																									{	/* Ast/unit.scm 283 */
																																										obj_t
																																											BgL_tmpz00_6103;
																																										BgL_tmpz00_6103
																																											=
																																											(
																																											(obj_t)
																																											BgL_arg2277z00_4362);
																																										SET_CAR
																																											(BgL_tmpz00_6103,
																																											BgL_arg2046z00_2270);
																																									}
																																								}
																																								{

																																									goto
																																										BGl_toplevelzd2ze3astz31zzast_unitz00;
																																								}
																																							}
																																						else
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_arg2047z00_2272;
																																								BgL_arg2047z00_2272
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd22214zd2_2258));
																																								return
																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																									(BgL_arg2047z00_2272,
																																									BgL_sexpz00_37);
																																							}
																																					}
																																				else
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_cdrzd22280zd2_2276;
																																						BgL_cdrzd22280zd2_2276
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd22214zd2_2258));
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_carzd22284zd2_2277;
																																							BgL_carzd22284zd2_2277
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd22280zd2_2276));
																																							if (SYMBOLP(BgL_carzd22284zd2_2277))
																																								{	/* Ast/unit.scm 214 */
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd22280zd2_2276))))
																																										{	/* Ast/unit.scm 214 */
																																											obj_t
																																												BgL_arg2053z00_2281;
																																											BgL_arg2053z00_2281
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd22214zd2_2258));
																																											{
																																												obj_t
																																													BgL_var2z00_6122;
																																												obj_t
																																													BgL_varz00_6121;
																																												BgL_varz00_6121
																																													=
																																													BgL_arg2053z00_2281;
																																												BgL_var2z00_6122
																																													=
																																													BgL_carzd22284zd2_2277;
																																												BgL_var2z00_1896
																																													=
																																													BgL_var2z00_6122;
																																												BgL_varz00_1895
																																													=
																																													BgL_varz00_6121;
																																												goto
																																													BgL_tagzd2366zd2_1897;
																																											}
																																										}
																																									else
																																										{	/* Ast/unit.scm 214 */
																																											obj_t
																																												BgL_cdrzd22306zd2_2282;
																																											BgL_cdrzd22306zd2_2282
																																												=
																																												CDR
																																												(BgL_sexpz00_37);
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg2055z00_2283;
																																												BgL_arg2055z00_2283
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd22306zd2_2282));
																																												return
																																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																																													(BgL_arg2055z00_2283,
																																													BgL_sexpz00_37);
																																											}
																																										}
																																								}
																																							else
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_cdrzd22332zd2_2286;
																																									BgL_cdrzd22332zd2_2286
																																										=
																																										CDR
																																										(BgL_sexpz00_37);
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_arg2059z00_2287;
																																										BgL_arg2059z00_2287
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd22332zd2_2286));
																																										return
																																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																																											(BgL_arg2059z00_2287,
																																											BgL_sexpz00_37);
																																									}
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Ast/unit.scm 214 */
																																				obj_t
																																					BgL_cdrzd22355zd2_2291;
																																				BgL_cdrzd22355zd2_2291
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd22214zd2_2258));
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_carzd22359zd2_2292;
																																					BgL_carzd22359zd2_2292
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd22355zd2_2291));
																																					if (SYMBOLP(BgL_carzd22359zd2_2292))
																																						{	/* Ast/unit.scm 214 */
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd22355zd2_2291))))
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_arg2065z00_2296;
																																									BgL_arg2065z00_2296
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd22214zd2_2258));
																																									{
																																										obj_t
																																											BgL_var2z00_6144;
																																										obj_t
																																											BgL_varz00_6143;
																																										BgL_varz00_6143
																																											=
																																											BgL_arg2065z00_2296;
																																										BgL_var2z00_6144
																																											=
																																											BgL_carzd22359zd2_2292;
																																										BgL_var2z00_1896
																																											=
																																											BgL_var2z00_6144;
																																										BgL_varz00_1895
																																											=
																																											BgL_varz00_6143;
																																										goto
																																											BgL_tagzd2366zd2_1897;
																																									}
																																								}
																																							else
																																								{	/* Ast/unit.scm 214 */
																																									obj_t
																																										BgL_cdrzd22381zd2_2297;
																																									BgL_cdrzd22381zd2_2297
																																										=
																																										CDR
																																										(BgL_sexpz00_37);
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_arg2066z00_2298;
																																										BgL_arg2066z00_2298
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd22381zd2_2297));
																																										return
																																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																																											(BgL_arg2066z00_2298,
																																											BgL_sexpz00_37);
																																									}
																																								}
																																						}
																																					else
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_cdrzd22407zd2_2301;
																																							BgL_cdrzd22407zd2_2301
																																								=
																																								CDR
																																								(BgL_sexpz00_37);
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_arg2070z00_2302;
																																								BgL_arg2070z00_2302
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd22407zd2_2301));
																																								return
																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																									(BgL_arg2070z00_2302,
																																									BgL_sexpz00_37);
																																							}
																																						}
																																				}
																																			}
																																	}
																																else
																																	{	/* Ast/unit.scm 214 */
																																		obj_t
																																			BgL_cdrzd22430zd2_2305;
																																		BgL_cdrzd22430zd2_2305
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_cdrzd22214zd2_2258));
																																		{	/* Ast/unit.scm 214 */
																																			obj_t
																																				BgL_carzd22434zd2_2306;
																																			BgL_carzd22434zd2_2306
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd22430zd2_2305));
																																			if (SYMBOLP(BgL_carzd22434zd2_2306))
																																				{	/* Ast/unit.scm 214 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd22430zd2_2305))))
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_arg2077z00_2310;
																																							BgL_arg2077z00_2310
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd22214zd2_2258));
																																							{
																																								obj_t
																																									BgL_var2z00_6166;
																																								obj_t
																																									BgL_varz00_6165;
																																								BgL_varz00_6165
																																									=
																																									BgL_arg2077z00_2310;
																																								BgL_var2z00_6166
																																									=
																																									BgL_carzd22434zd2_2306;
																																								BgL_var2z00_1896
																																									=
																																									BgL_var2z00_6166;
																																								BgL_varz00_1895
																																									=
																																									BgL_varz00_6165;
																																								goto
																																									BgL_tagzd2366zd2_1897;
																																							}
																																						}
																																					else
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_cdrzd22456zd2_2311;
																																							BgL_cdrzd22456zd2_2311
																																								=
																																								CDR
																																								(BgL_sexpz00_37);
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_arg2078z00_2312;
																																								BgL_arg2078z00_2312
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd22456zd2_2311));
																																								return
																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																									(BgL_arg2078z00_2312,
																																									BgL_sexpz00_37);
																																							}
																																						}
																																				}
																																			else
																																				{	/* Ast/unit.scm 214 */
																																					obj_t
																																						BgL_cdrzd22475zd2_2315;
																																					BgL_cdrzd22475zd2_2315
																																						=
																																						CDR
																																						(BgL_sexpz00_37);
																																					{	/* Ast/unit.scm 214 */
																																						obj_t
																																							BgL_cdrzd22481zd2_2316;
																																						BgL_cdrzd22481zd2_2316
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd22475zd2_2315));
																																						{	/* Ast/unit.scm 214 */
																																							obj_t
																																								BgL_carzd22486zd2_2317;
																																							BgL_carzd22486zd2_2317
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd22481zd2_2316));
																																							{	/* Ast/unit.scm 214 */
																																								obj_t
																																									BgL_cdrzd22491zd2_2318;
																																								BgL_cdrzd22491zd2_2318
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_carzd22486zd2_2317));
																																								if ((CAR(((obj_t) BgL_carzd22486zd2_2317)) == CNST_TABLE_REF(((long) 0))))
																																									{	/* Ast/unit.scm 214 */
																																										if (PAIRP(BgL_cdrzd22491zd2_2318))
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_carzd22494zd2_2322;
																																												obj_t
																																													BgL_cdrzd22495zd2_2323;
																																												BgL_carzd22494zd2_2322
																																													=
																																													CAR
																																													(BgL_cdrzd22491zd2_2318);
																																												BgL_cdrzd22495zd2_2323
																																													=
																																													CDR
																																													(BgL_cdrzd22491zd2_2318);
																																												if (SYMBOLP(BgL_carzd22494zd2_2322))
																																													{	/* Ast/unit.scm 214 */
																																														if (PAIRP(BgL_cdrzd22495zd2_2323))
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_carzd22500zd2_2326;
																																																BgL_carzd22500zd2_2326
																																																	=
																																																	CAR
																																																	(BgL_cdrzd22495zd2_2323);
																																																if (SYMBOLP(BgL_carzd22500zd2_2326))
																																																	{	/* Ast/unit.scm 214 */
																																																		if (NULLP(CDR(BgL_cdrzd22495zd2_2323)))
																																																			{	/* Ast/unit.scm 214 */
																																																				if (NULLP(CDR(((obj_t) BgL_cdrzd22481zd2_2316))))
																																																					{	/* Ast/unit.scm 214 */
																																																						obj_t
																																																							BgL_arg2091z00_2332;
																																																						BgL_arg2091z00_2332
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd22475zd2_2315));
																																																						BgL_varz00_1898
																																																							=
																																																							BgL_arg2091z00_2332;
																																																						BgL_var2z00_1899
																																																							=
																																																							BgL_carzd22494zd2_2322;
																																																						BgL_modulez00_1900
																																																							=
																																																							BgL_carzd22500zd2_2326;
																																																						{	/* Ast/unit.scm 310 */
																																																							obj_t
																																																								BgL_defz00_2606;
																																																							BgL_defz00_2606
																																																								=
																																																								BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																																																								(BGl_idzd2ofzd2idz00zzast_identz00
																																																								(BgL_varz00_1898,
																																																									BGl_findzd2locationzd2zztools_locationz00
																																																									(BgL_sexpz00_37)),
																																																								BgL_gdefsz00_38);
																																																							{	/* Ast/unit.scm 311 */
																																																								bool_t
																																																									BgL_test3837z00_6206;
																																																								{	/* Ast/unit.scm 311 */
																																																									obj_t
																																																										BgL_tmpz00_6207;
																																																									{	/* Ast/unit.scm 311 */
																																																										obj_t
																																																											BgL_pairz00_4027;
																																																										BgL_pairz00_4027
																																																											=
																																																											CDR
																																																											(
																																																											((obj_t) BgL_defz00_2606));
																																																										BgL_tmpz00_6207
																																																											=
																																																											CAR
																																																											(BgL_pairz00_4027);
																																																									}
																																																									BgL_test3837z00_6206
																																																										=
																																																										(BgL_tmpz00_6207
																																																										==
																																																										CNST_TABLE_REF
																																																										(((long) 12)));
																																																								}
																																																								if (BgL_test3837z00_6206)
																																																									{	/* Ast/unit.scm 312 */
																																																										obj_t
																																																											BgL_gz00_2610;
																																																										BgL_gz00_2610
																																																											=
																																																											BGl_findzd2globalzf2modulez20zzast_envz00
																																																											(BgL_var2z00_1899,
																																																											BgL_modulez00_1900);
																																																										{	/* Ast/unit.scm 312 */
																																																											obj_t
																																																												BgL_arityz00_2611;
																																																											if (BGl_isazf3zf3zz__objectz00(BgL_gz00_2610, BGl_globalz00zzast_varz00))
																																																												{	/* Ast/unit.scm 314 */
																																																													bool_t
																																																														BgL_test3839z00_6216;
																																																													{	/* Ast/unit.scm 314 */
																																																														BgL_valuez00_bglt
																																																															BgL_arg2299z00_2618;
																																																														BgL_arg2299z00_2618
																																																															=
																																																															(
																																																															((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_gz00_2610))))->BgL_valuez00);
																																																														{	/* Ast/unit.scm 314 */
																																																															bool_t
																																																																BgL_res3449z00_4030;
																																																															BgL_res3449z00_4030
																																																																=
																																																																BGl_isazf3zf3zz__objectz00
																																																																(
																																																																((obj_t) BgL_arg2299z00_2618), BGl_funz00zzast_varz00);
																																																															BgL_test3839z00_6216
																																																																=
																																																																BgL_res3449z00_4030;
																																																														}
																																																													}
																																																													if (BgL_test3839z00_6216)
																																																														{	/* Ast/unit.scm 314 */
																																																															BgL_arityz00_2611
																																																																=
																																																																BINT
																																																																(BGl_globalzd2arityzd2zztools_argsz00
																																																																(BgL_gz00_2610));
																																																														}
																																																													else
																																																														{	/* Ast/unit.scm 314 */
																																																															BgL_arityz00_2611
																																																																=
																																																																BFALSE;
																																																														}
																																																												}
																																																											else
																																																												{	/* Ast/unit.scm 313 */
																																																													BgL_arityz00_2611
																																																														=
																																																														BFALSE;
																																																												}
																																																											{	/* Ast/unit.scm 313 */

																																																												if (INTEGERP(BgL_arityz00_2611))
																																																													{	/* Ast/unit.scm 316 */
																																																														if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_2610))
																																																															{	/* Ast/unit.scm 318 */
																																																																BGl_userzd2warningzd2zztools_errorz00
																																																																	(BgL_varz00_1898,
																																																																	BGl_string3673z00zzast_unitz00,
																																																																	BgL_sexpz00_37);
																																																																return
																																																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																																	(BgL_varz00_1898,
																																																																	BgL_sexpz00_37);
																																																															}
																																																														else
																																																															{	/* Ast/unit.scm 318 */
																																																																if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_2610))
																																																																	{	/* Ast/unit.scm 323 */
																																																																		BGl_userzd2warningzd2zztools_errorz00
																																																																			(BgL_varz00_1898,
																																																																			BGl_string3674z00zzast_unitz00,
																																																																			BgL_sexpz00_37);
																																																																		return
																																																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																																			(BgL_varz00_1898,
																																																																			BgL_sexpz00_37);
																																																																	}
																																																																else
																																																																	{
																																																																		obj_t
																																																																			BgL_sexpz00_6234;
																																																																		BgL_sexpz00_6234
																																																																			=
																																																																			BGl_etazd2expansezd2zzast_unitz00
																																																																			(BgL_sexpz00_37,
																																																																			BgL_arityz00_2611);
																																																																		BgL_sexpz00_37
																																																																			=
																																																																			BgL_sexpz00_6234;
																																																																		goto
																																																																			BGl_toplevelzd2ze3astz31zzast_unitz00;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/unit.scm 316 */
																																																														return
																																																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																															(BgL_varz00_1898,
																																																															BgL_sexpz00_37);
																																																													}
																																																											}
																																																										}
																																																									}
																																																								else
																																																									{	/* Ast/unit.scm 311 */
																																																										return
																																																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																											(BgL_varz00_1898,
																																																											BgL_sexpz00_37);
																																																									}
																																																							}
																																																						}
																																																					}
																																																				else
																																																					{	/* Ast/unit.scm 214 */
																																																						obj_t
																																																							BgL_arg2092z00_2334;
																																																						BgL_arg2092z00_2334
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd22475zd2_2315));
																																																						return
																																																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																							(BgL_arg2092z00_2334,
																																																							BgL_sexpz00_37);
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/unit.scm 214 */
																																																				obj_t
																																																					BgL_arg2095z00_2338;
																																																				BgL_arg2095z00_2338
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd22475zd2_2315));
																																																				return
																																																					BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																					(BgL_arg2095z00_2338,
																																																					BgL_sexpz00_37);
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/unit.scm 214 */
																																																		obj_t
																																																			BgL_arg2098z00_2342;
																																																		BgL_arg2098z00_2342
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd22475zd2_2315));
																																																		return
																																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																			(BgL_arg2098z00_2342,
																																																			BgL_sexpz00_37);
																																																	}
																																															}
																																														else
																																															{	/* Ast/unit.scm 214 */
																																																obj_t
																																																	BgL_arg2101z00_2345;
																																																BgL_arg2101z00_2345
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd22475zd2_2315));
																																																return
																																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																	(BgL_arg2101z00_2345,
																																																	BgL_sexpz00_37);
																																															}
																																													}
																																												else
																																													{	/* Ast/unit.scm 214 */
																																														obj_t
																																															BgL_arg2103z00_2348;
																																														BgL_arg2103z00_2348
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd22475zd2_2315));
																																														return
																																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																																															(BgL_arg2103z00_2348,
																																															BgL_sexpz00_37);
																																													}
																																											}
																																										else
																																											{	/* Ast/unit.scm 214 */
																																												obj_t
																																													BgL_arg2105z00_2351;
																																												BgL_arg2105z00_2351
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd22475zd2_2315));
																																												return
																																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																																													(BgL_arg2105z00_2351,
																																													BgL_sexpz00_37);
																																											}
																																									}
																																								else
																																									{	/* Ast/unit.scm 214 */
																																										obj_t
																																											BgL_arg2107z00_2354;
																																										BgL_arg2107z00_2354
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd22475zd2_2315));
																																										return
																																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																																											(BgL_arg2107z00_2354,
																																											BgL_sexpz00_37);
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
																else
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_cdrzd22667zd2_2360;

																		BgL_cdrzd22667zd2_2360 =
																			CDR(BgL_sexpz00_37);
																		{	/* Ast/unit.scm 214 */
																			obj_t BgL_cdrzd22672zd2_2361;

																			BgL_cdrzd22672zd2_2361 =
																				CDR(((obj_t) BgL_cdrzd22667zd2_2360));
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_carzd22676zd2_2362;

																				BgL_carzd22676zd2_2362 =
																					CAR(((obj_t) BgL_cdrzd22672zd2_2361));
																				if (SYMBOLP(BgL_carzd22676zd2_2362))
																					{	/* Ast/unit.scm 214 */
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd22672zd2_2361))))
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_arg2116z00_2366;

																								BgL_arg2116z00_2366 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22667zd2_2360));
																								{
																									obj_t BgL_var2z00_6273;
																									obj_t BgL_varz00_6272;

																									BgL_varz00_6272 =
																										BgL_arg2116z00_2366;
																									BgL_var2z00_6273 =
																										BgL_carzd22676zd2_2362;
																									BgL_var2z00_1896 =
																										BgL_var2z00_6273;
																									BgL_varz00_1895 =
																										BgL_varz00_6272;
																									goto BgL_tagzd2366zd2_1897;
																								}
																							}
																						else
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_arg2117z00_2368;

																								BgL_arg2117z00_2368 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22667zd2_2360));
																								return
																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																									(BgL_arg2117z00_2368,
																									BgL_sexpz00_37);
																							}
																					}
																				else
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_arg2120z00_2372;

																						BgL_arg2120z00_2372 =
																							CAR(
																							((obj_t) BgL_cdrzd22667zd2_2360));
																						return
																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																							(BgL_arg2120z00_2372,
																							BgL_sexpz00_37);
																					}
																			}
																		}
																	}
															}
														else
															{	/* Ast/unit.scm 214 */
																obj_t BgL_cdrzd22792zd2_2374;

																BgL_cdrzd22792zd2_2374 = CDR(BgL_sexpz00_37);
																{	/* Ast/unit.scm 214 */
																	obj_t BgL_arg2122z00_2375;

																	BgL_arg2122z00_2375 =
																		CAR(((obj_t) BgL_cdrzd22792zd2_2374));
																	return
																		BGl_makezd2svarzd2definitionz00zzast_unitz00
																		(BgL_arg2122z00_2375, BgL_sexpz00_37);
																}
															}
													}
											}
										else
											{	/* Ast/unit.scm 214 */
											BgL_tagzd2374zd2_1927:
												{	/* Ast/unit.scm 356 */
													obj_t BgL_list2320z00_2635;

													BgL_list2320z00_2635 =
														MAKE_YOUNG_PAIR(BgL_sexpz00_37, BNIL);
													return BgL_list2320z00_2635;
												}
											}
									}
								else
									{	/* Ast/unit.scm 214 */
										if ((CAR(BgL_sexpz00_37) == CNST_TABLE_REF(((long) 16))))
											{	/* Ast/unit.scm 214 */
												if (PAIRP(BgL_cdrzd2422zd2_1936))
													{	/* Ast/unit.scm 214 */
														obj_t BgL_carzd22976zd2_2381;

														BgL_carzd22976zd2_2381 = CAR(BgL_cdrzd2422zd2_1936);
														if (PAIRP(BgL_carzd22976zd2_2381))
															{	/* Ast/unit.scm 214 */
																obj_t BgL_carzd22981zd2_2383;

																BgL_carzd22981zd2_2383 =
																	CAR(BgL_carzd22976zd2_2381);
																if (PAIRP(BgL_carzd22981zd2_2383))
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_cdrzd22986zd2_2385;

																		BgL_cdrzd22986zd2_2385 =
																			CDR(BgL_carzd22981zd2_2383);
																		if (
																			(CAR(BgL_carzd22981zd2_2383) ==
																				CNST_TABLE_REF(((long) 0))))
																			{	/* Ast/unit.scm 214 */
																				if (PAIRP(BgL_cdrzd22986zd2_2385))
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_cdrzd22990zd2_2389;

																						BgL_cdrzd22990zd2_2389 =
																							CDR(BgL_cdrzd22986zd2_2385);
																						if (PAIRP(BgL_cdrzd22990zd2_2389))
																							{	/* Ast/unit.scm 214 */
																								if (NULLP(CDR
																										(BgL_cdrzd22990zd2_2389)))
																									{	/* Ast/unit.scm 214 */
																										obj_t BgL_arg2136z00_2393;
																										obj_t BgL_arg2137z00_2394;
																										obj_t BgL_arg2138z00_2395;
																										obj_t BgL_arg2140z00_2396;

																										BgL_arg2136z00_2393 =
																											CAR
																											(BgL_cdrzd22986zd2_2385);
																										BgL_arg2137z00_2394 =
																											CAR
																											(BgL_cdrzd22990zd2_2389);
																										BgL_arg2138z00_2395 =
																											CDR
																											(BgL_carzd22976zd2_2381);
																										BgL_arg2140z00_2396 =
																											CDR
																											(BgL_cdrzd2422zd2_1936);
																										{	/* Ast/unit.scm 338 */
																											obj_t BgL_arg2306z00_4479;

																											{	/* Ast/unit.scm 338 */
																												obj_t
																													BgL_arg2307z00_4480;
																												{	/* Ast/unit.scm 338 */
																													obj_t
																														BgL_arg2308z00_4481;
																													{	/* Ast/unit.scm 338 */
																														obj_t
																															BgL_pairz00_4485;
																														BgL_pairz00_4485 =
																															CDR(((obj_t)
																																BgL_sexpz00_37));
																														BgL_arg2308z00_4481
																															=
																															CDR
																															(BgL_pairz00_4485);
																													}
																													BgL_arg2307z00_4480 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_arg2308z00_4481);
																												}
																												BgL_arg2306z00_4479 =
																													BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																													(BgL_arg2140z00_2396,
																													BgL_sexpz00_37,
																													BgL_arg2307z00_4480);
																											}
																											return
																												BGl_makezd2sfunzd2definitionz00zzast_unitz00
																												(BgL_arg2136z00_2393,
																												BgL_arg2137z00_2394,
																												BgL_arg2138z00_2395,
																												BgL_arg2306z00_4479,
																												BgL_sexpz00_37,
																												CNST_TABLE_REF(((long)
																														17)));
																									}}
																								else
																									{	/* Ast/unit.scm 214 */
																										obj_t
																											BgL_cdrzd23006zd2_2397;
																										BgL_cdrzd23006zd2_2397 =
																											CDR(BgL_sexpz00_37);
																										{	/* Ast/unit.scm 214 */
																											obj_t
																												BgL_carzd23010zd2_2398;
																											BgL_carzd23010zd2_2398 =
																												CAR(((obj_t)
																													BgL_cdrzd23006zd2_2397));
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_arg2141z00_2399;
																												obj_t
																													BgL_arg2142z00_2400;
																												obj_t
																													BgL_arg2143z00_2401;
																												BgL_arg2141z00_2399 =
																													CAR(((obj_t)
																														BgL_carzd23010zd2_2398));
																												BgL_arg2142z00_2400 =
																													CDR(((obj_t)
																														BgL_carzd23010zd2_2398));
																												BgL_arg2143z00_2401 =
																													CDR(((obj_t)
																														BgL_cdrzd23006zd2_2397));
																												{	/* Ast/unit.scm 343 */
																													obj_t
																														BgL_arg2309z00_4491;
																													{	/* Ast/unit.scm 343 */
																														obj_t
																															BgL_arg2310z00_4492;
																														{	/* Ast/unit.scm 343 */
																															obj_t
																																BgL_arg2311z00_4493;
																															{	/* Ast/unit.scm 343 */
																																obj_t
																																	BgL_pairz00_4497;
																																BgL_pairz00_4497
																																	=
																																	CDR(((obj_t)
																																		BgL_sexpz00_37));
																																BgL_arg2311z00_4493
																																	=
																																	CDR
																																	(BgL_pairz00_4497);
																															}
																															BgL_arg2310z00_4492
																																=
																																BGl_findzd2locationzd2zztools_locationz00
																																(BgL_arg2311z00_4493);
																														}
																														BgL_arg2309z00_4491
																															=
																															BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																															(BgL_arg2143z00_2401,
																															BgL_sexpz00_37,
																															BgL_arg2310z00_4492);
																													}
																													return
																														BGl_makezd2sfunzd2definitionz00zzast_unitz00
																														(BgL_arg2141z00_2399,
																														BGl_za2moduleza2z00zzmodule_modulez00,
																														BgL_arg2142z00_2400,
																														BgL_arg2309z00_4491,
																														BgL_sexpz00_37,
																														CNST_TABLE_REF((
																																(long) 17)));
																							}}}}}
																						else
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_cdrzd23027zd2_2403;

																								BgL_cdrzd23027zd2_2403 =
																									CDR(BgL_sexpz00_37);
																								{	/* Ast/unit.scm 214 */
																									obj_t BgL_carzd23031zd2_2404;

																									BgL_carzd23031zd2_2404 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd23027zd2_2403));
																									{	/* Ast/unit.scm 214 */
																										obj_t BgL_arg2145z00_2405;
																										obj_t BgL_arg2146z00_2406;
																										obj_t BgL_arg2147z00_2407;

																										BgL_arg2145z00_2405 =
																											CAR(
																											((obj_t)
																												BgL_carzd23031zd2_2404));
																										BgL_arg2146z00_2406 =
																											CDR(((obj_t)
																												BgL_carzd23031zd2_2404));
																										BgL_arg2147z00_2407 =
																											CDR(((obj_t)
																												BgL_cdrzd23027zd2_2403));
																										{	/* Ast/unit.scm 343 */
																											obj_t BgL_arg2309z00_4503;

																											{	/* Ast/unit.scm 343 */
																												obj_t
																													BgL_arg2310z00_4504;
																												{	/* Ast/unit.scm 343 */
																													obj_t
																														BgL_arg2311z00_4505;
																													{	/* Ast/unit.scm 343 */
																														obj_t
																															BgL_pairz00_4509;
																														BgL_pairz00_4509 =
																															CDR(((obj_t)
																																BgL_sexpz00_37));
																														BgL_arg2311z00_4505
																															=
																															CDR
																															(BgL_pairz00_4509);
																													}
																													BgL_arg2310z00_4504 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_arg2311z00_4505);
																												}
																												BgL_arg2309z00_4503 =
																													BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																													(BgL_arg2147z00_2407,
																													BgL_sexpz00_37,
																													BgL_arg2310z00_4504);
																											}
																											return
																												BGl_makezd2sfunzd2definitionz00zzast_unitz00
																												(BgL_arg2145z00_2405,
																												BGl_za2moduleza2z00zzmodule_modulez00,
																												BgL_arg2146z00_2406,
																												BgL_arg2309z00_4503,
																												BgL_sexpz00_37,
																												CNST_TABLE_REF(((long)
																														17)));
																					}}}}}
																				else
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_cdrzd23048zd2_2408;

																						BgL_cdrzd23048zd2_2408 =
																							CDR(BgL_sexpz00_37);
																						{	/* Ast/unit.scm 214 */
																							obj_t BgL_carzd23052zd2_2409;

																							BgL_carzd23052zd2_2409 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd23048zd2_2408));
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_arg2148z00_2410;
																								obj_t BgL_arg2149z00_2411;
																								obj_t BgL_arg2150z00_2412;

																								BgL_arg2148z00_2410 =
																									CAR(
																									((obj_t)
																										BgL_carzd23052zd2_2409));
																								BgL_arg2149z00_2411 =
																									CDR(((obj_t)
																										BgL_carzd23052zd2_2409));
																								BgL_arg2150z00_2412 =
																									CDR(((obj_t)
																										BgL_cdrzd23048zd2_2408));
																								{	/* Ast/unit.scm 343 */
																									obj_t BgL_arg2309z00_4515;

																									{	/* Ast/unit.scm 343 */
																										obj_t BgL_arg2310z00_4516;

																										{	/* Ast/unit.scm 343 */
																											obj_t BgL_arg2311z00_4517;

																											{	/* Ast/unit.scm 343 */
																												obj_t BgL_pairz00_4521;

																												BgL_pairz00_4521 =
																													CDR(
																													((obj_t)
																														BgL_sexpz00_37));
																												BgL_arg2311z00_4517 =
																													CDR(BgL_pairz00_4521);
																											}
																											BgL_arg2310z00_4516 =
																												BGl_findzd2locationzd2zztools_locationz00
																												(BgL_arg2311z00_4517);
																										}
																										BgL_arg2309z00_4515 =
																											BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																											(BgL_arg2150z00_2412,
																											BgL_sexpz00_37,
																											BgL_arg2310z00_4516);
																									}
																									return
																										BGl_makezd2sfunzd2definitionz00zzast_unitz00
																										(BgL_arg2148z00_2410,
																										BGl_za2moduleza2z00zzmodule_modulez00,
																										BgL_arg2149z00_2411,
																										BgL_arg2309z00_4515,
																										BgL_sexpz00_37,
																										CNST_TABLE_REF(((long)
																												17)));
																			}}}}}
																		else
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_cdrzd23069zd2_2413;

																				BgL_cdrzd23069zd2_2413 =
																					CDR(BgL_sexpz00_37);
																				{	/* Ast/unit.scm 214 */
																					obj_t BgL_carzd23073zd2_2414;

																					BgL_carzd23073zd2_2414 =
																						CAR(
																						((obj_t) BgL_cdrzd23069zd2_2413));
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_arg2152z00_2415;
																						obj_t BgL_arg2153z00_2416;
																						obj_t BgL_arg2154z00_2417;

																						BgL_arg2152z00_2415 =
																							CAR(
																							((obj_t) BgL_carzd23073zd2_2414));
																						BgL_arg2153z00_2416 =
																							CDR(
																							((obj_t) BgL_carzd23073zd2_2414));
																						BgL_arg2154z00_2417 =
																							CDR(
																							((obj_t) BgL_cdrzd23069zd2_2413));
																						{	/* Ast/unit.scm 343 */
																							obj_t BgL_arg2309z00_4527;

																							{	/* Ast/unit.scm 343 */
																								obj_t BgL_arg2310z00_4528;

																								{	/* Ast/unit.scm 343 */
																									obj_t BgL_arg2311z00_4529;

																									{	/* Ast/unit.scm 343 */
																										obj_t BgL_pairz00_4533;

																										BgL_pairz00_4533 =
																											CDR(
																											((obj_t) BgL_sexpz00_37));
																										BgL_arg2311z00_4529 =
																											CDR(BgL_pairz00_4533);
																									}
																									BgL_arg2310z00_4528 =
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_arg2311z00_4529);
																								}
																								BgL_arg2309z00_4527 =
																									BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																									(BgL_arg2154z00_2417,
																									BgL_sexpz00_37,
																									BgL_arg2310z00_4528);
																							}
																							return
																								BGl_makezd2sfunzd2definitionz00zzast_unitz00
																								(BgL_arg2152z00_2415,
																								BGl_za2moduleza2z00zzmodule_modulez00,
																								BgL_arg2153z00_2416,
																								BgL_arg2309z00_4527,
																								BgL_sexpz00_37,
																								CNST_TABLE_REF(((long) 17)));
																	}}}}}
																else
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_cdrzd23090zd2_2419;

																		BgL_cdrzd23090zd2_2419 =
																			CDR(BgL_sexpz00_37);
																		{	/* Ast/unit.scm 214 */
																			obj_t BgL_carzd23094zd2_2420;

																			BgL_carzd23094zd2_2420 =
																				CAR(((obj_t) BgL_cdrzd23090zd2_2419));
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_arg2156z00_2421;
																				obj_t BgL_arg2157z00_2422;
																				obj_t BgL_arg2158z00_2423;

																				BgL_arg2156z00_2421 =
																					CAR(((obj_t) BgL_carzd23094zd2_2420));
																				BgL_arg2157z00_2422 =
																					CDR(((obj_t) BgL_carzd23094zd2_2420));
																				BgL_arg2158z00_2423 =
																					CDR(((obj_t) BgL_cdrzd23090zd2_2419));
																				{	/* Ast/unit.scm 343 */
																					obj_t BgL_arg2309z00_4539;

																					{	/* Ast/unit.scm 343 */
																						obj_t BgL_arg2310z00_4540;

																						{	/* Ast/unit.scm 343 */
																							obj_t BgL_arg2311z00_4541;

																							{	/* Ast/unit.scm 343 */
																								obj_t BgL_pairz00_4545;

																								BgL_pairz00_4545 =
																									CDR(((obj_t) BgL_sexpz00_37));
																								BgL_arg2311z00_4541 =
																									CDR(BgL_pairz00_4545);
																							}
																							BgL_arg2310z00_4540 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_arg2311z00_4541);
																						}
																						BgL_arg2309z00_4539 =
																							BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																							(BgL_arg2158z00_2423,
																							BgL_sexpz00_37,
																							BgL_arg2310z00_4540);
																					}
																					return
																						BGl_makezd2sfunzd2definitionz00zzast_unitz00
																						(BgL_arg2156z00_2421,
																						BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_arg2157z00_2422,
																						BgL_arg2309z00_4539, BgL_sexpz00_37,
																						CNST_TABLE_REF(((long) 17)));
															}}}}}
														else
															{	/* Ast/unit.scm 214 */
																goto BgL_tagzd2374zd2_1927;
															}
													}
												else
													{	/* Ast/unit.scm 214 */
														goto BgL_tagzd2374zd2_1927;
													}
											}
										else
											{	/* Ast/unit.scm 214 */
												obj_t BgL_cdrzd23173zd2_2424;

												BgL_cdrzd23173zd2_2424 = CDR(BgL_sexpz00_37);
												if (
													(CAR(BgL_sexpz00_37) == CNST_TABLE_REF(((long) 18))))
													{	/* Ast/unit.scm 214 */
														if (PAIRP(BgL_cdrzd23173zd2_2424))
															{	/* Ast/unit.scm 214 */
																obj_t BgL_carzd23178zd2_2428;

																BgL_carzd23178zd2_2428 =
																	CAR(BgL_cdrzd23173zd2_2424);
																if (PAIRP(BgL_carzd23178zd2_2428))
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_carzd23183zd2_2430;

																		BgL_carzd23183zd2_2430 =
																			CAR(BgL_carzd23178zd2_2428);
																		if (PAIRP(BgL_carzd23183zd2_2430))
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_cdrzd23188zd2_2432;

																				BgL_cdrzd23188zd2_2432 =
																					CDR(BgL_carzd23183zd2_2430);
																				if (
																					(CAR(BgL_carzd23183zd2_2430) ==
																						CNST_TABLE_REF(((long) 0))))
																					{	/* Ast/unit.scm 214 */
																						if (PAIRP(BgL_cdrzd23188zd2_2432))
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_cdrzd23192zd2_2436;

																								BgL_cdrzd23192zd2_2436 =
																									CDR(BgL_cdrzd23188zd2_2432);
																								if (PAIRP
																									(BgL_cdrzd23192zd2_2436))
																									{	/* Ast/unit.scm 214 */
																										if (NULLP(CDR
																												(BgL_cdrzd23192zd2_2436)))
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_arg2170z00_2440;
																												obj_t
																													BgL_arg2172z00_2441;
																												obj_t
																													BgL_arg2173z00_2442;
																												obj_t
																													BgL_arg2174z00_2443;
																												BgL_arg2170z00_2440 =
																													CAR
																													(BgL_cdrzd23188zd2_2432);
																												BgL_arg2172z00_2441 =
																													CAR
																													(BgL_cdrzd23192zd2_2436);
																												BgL_arg2173z00_2442 =
																													CDR
																													(BgL_carzd23178zd2_2428);
																												BgL_arg2174z00_2443 =
																													CDR
																													(BgL_cdrzd23173zd2_2424);
																												{	/* Ast/unit.scm 346 */
																													obj_t
																														BgL_list2312z00_4564;
																													{	/* Ast/unit.scm 346 */
																														obj_t
																															BgL_arg2313z00_4565;
																														{	/* Ast/unit.scm 346 */
																															obj_t
																																BgL_arg2314z00_4566;
																															BgL_arg2314z00_4566
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_sexpz00_37,
																																BNIL);
																															BgL_arg2313z00_4565
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string3675z00zzast_unitz00,
																																BgL_arg2314z00_4566);
																														}
																														BgL_list2312z00_4564
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string3676z00zzast_unitz00,
																															BgL_arg2313z00_4565);
																													}
																													BGl_warningz00zz__errorz00
																														(BgL_list2312z00_4564);
																												}
																												return
																													BGl_makezd2genericzd2definitionz00zzast_unitz00
																													(BgL_arg2170z00_2440,
																													BgL_arg2172z00_2441,
																													BgL_arg2173z00_2442,
																													BgL_arg2174z00_2443,
																													BgL_sexpz00_37);
																											}
																										else
																											{	/* Ast/unit.scm 214 */
																												obj_t
																													BgL_carzd23211zd2_2445;
																												BgL_carzd23211zd2_2445 =
																													CAR(((obj_t)
																														BgL_cdrzd23173zd2_2424));
																												{	/* Ast/unit.scm 214 */
																													obj_t
																														BgL_arg2175z00_2446;
																													obj_t
																														BgL_arg2176z00_2447;
																													obj_t
																														BgL_arg2177z00_2448;
																													BgL_arg2175z00_2446 =
																														CAR(((obj_t)
																															BgL_carzd23211zd2_2445));
																													BgL_arg2176z00_2447 =
																														CDR(((obj_t)
																															BgL_carzd23211zd2_2445));
																													BgL_arg2177z00_2448 =
																														CDR(((obj_t)
																															BgL_cdrzd23173zd2_2424));
																													return
																														BGl_makezd2genericzd2definitionz00zzast_unitz00
																														(BgL_arg2175z00_2446,
																														BGl_za2moduleza2z00zzmodule_modulez00,
																														BgL_arg2176z00_2447,
																														BgL_arg2177z00_2448,
																														BgL_sexpz00_37);
																												}
																											}
																									}
																								else
																									{	/* Ast/unit.scm 214 */
																										obj_t
																											BgL_carzd23231zd2_2451;
																										BgL_carzd23231zd2_2451 =
																											CAR(((obj_t)
																												BgL_cdrzd23173zd2_2424));
																										{	/* Ast/unit.scm 214 */
																											obj_t BgL_arg2179z00_2452;
																											obj_t BgL_arg2180z00_2453;
																											obj_t BgL_arg2181z00_2454;

																											BgL_arg2179z00_2452 =
																												CAR(
																												((obj_t)
																													BgL_carzd23231zd2_2451));
																											BgL_arg2180z00_2453 =
																												CDR(((obj_t)
																													BgL_carzd23231zd2_2451));
																											BgL_arg2181z00_2454 =
																												CDR(((obj_t)
																													BgL_cdrzd23173zd2_2424));
																											return
																												BGl_makezd2genericzd2definitionz00zzast_unitz00
																												(BgL_arg2179z00_2452,
																												BGl_za2moduleza2z00zzmodule_modulez00,
																												BgL_arg2180z00_2453,
																												BgL_arg2181z00_2454,
																												BgL_sexpz00_37);
																										}
																									}
																							}
																						else
																							{	/* Ast/unit.scm 214 */
																								obj_t BgL_carzd23251zd2_2456;

																								BgL_carzd23251zd2_2456 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd23173zd2_2424));
																								{	/* Ast/unit.scm 214 */
																									obj_t BgL_arg2182z00_2457;
																									obj_t BgL_arg2183z00_2458;
																									obj_t BgL_arg2184z00_2459;

																									BgL_arg2182z00_2457 =
																										CAR(
																										((obj_t)
																											BgL_carzd23251zd2_2456));
																									BgL_arg2183z00_2458 =
																										CDR(((obj_t)
																											BgL_carzd23251zd2_2456));
																									BgL_arg2184z00_2459 =
																										CDR(((obj_t)
																											BgL_cdrzd23173zd2_2424));
																									return
																										BGl_makezd2genericzd2definitionz00zzast_unitz00
																										(BgL_arg2182z00_2457,
																										BGl_za2moduleza2z00zzmodule_modulez00,
																										BgL_arg2183z00_2458,
																										BgL_arg2184z00_2459,
																										BgL_sexpz00_37);
																								}
																							}
																					}
																				else
																					{	/* Ast/unit.scm 214 */
																						obj_t BgL_carzd23271zd2_2461;

																						BgL_carzd23271zd2_2461 =
																							CAR(
																							((obj_t) BgL_cdrzd23173zd2_2424));
																						{	/* Ast/unit.scm 214 */
																							obj_t BgL_arg2185z00_2462;
																							obj_t BgL_arg2186z00_2463;
																							obj_t BgL_arg2187z00_2464;

																							BgL_arg2185z00_2462 =
																								CAR(
																								((obj_t)
																									BgL_carzd23271zd2_2461));
																							BgL_arg2186z00_2463 =
																								CDR(((obj_t)
																									BgL_carzd23271zd2_2461));
																							BgL_arg2187z00_2464 =
																								CDR(((obj_t)
																									BgL_cdrzd23173zd2_2424));
																							return
																								BGl_makezd2genericzd2definitionz00zzast_unitz00
																								(BgL_arg2185z00_2462,
																								BGl_za2moduleza2z00zzmodule_modulez00,
																								BgL_arg2186z00_2463,
																								BgL_arg2187z00_2464,
																								BgL_sexpz00_37);
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_carzd23291zd2_2467;

																				BgL_carzd23291zd2_2467 =
																					CAR(((obj_t) BgL_cdrzd23173zd2_2424));
																				{	/* Ast/unit.scm 214 */
																					obj_t BgL_arg2189z00_2468;
																					obj_t BgL_arg2190z00_2469;
																					obj_t BgL_arg2191z00_2470;

																					BgL_arg2189z00_2468 =
																						CAR(
																						((obj_t) BgL_carzd23291zd2_2467));
																					BgL_arg2190z00_2469 =
																						CDR(
																						((obj_t) BgL_carzd23291zd2_2467));
																					BgL_arg2191z00_2470 =
																						CDR(
																						((obj_t) BgL_cdrzd23173zd2_2424));
																					return
																						BGl_makezd2genericzd2definitionz00zzast_unitz00
																						(BgL_arg2189z00_2468,
																						BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_arg2190z00_2469,
																						BgL_arg2191z00_2470,
																						BgL_sexpz00_37);
																				}
																			}
																	}
																else
																	{	/* Ast/unit.scm 214 */
																		goto BgL_tagzd2374zd2_1927;
																	}
															}
														else
															{	/* Ast/unit.scm 214 */
																goto BgL_tagzd2374zd2_1927;
															}
													}
												else
													{	/* Ast/unit.scm 214 */
														if (
															(CAR(BgL_sexpz00_37) ==
																CNST_TABLE_REF(((long) 19))))
															{	/* Ast/unit.scm 214 */
																if (PAIRP(BgL_cdrzd23173zd2_2424))
																	{	/* Ast/unit.scm 214 */
																		obj_t BgL_carzd23341zd2_2475;

																		BgL_carzd23341zd2_2475 =
																			CAR(BgL_cdrzd23173zd2_2424);
																		if (PAIRP(BgL_carzd23341zd2_2475))
																			{	/* Ast/unit.scm 214 */
																				obj_t BgL_arg2196z00_2477;
																				obj_t BgL_arg2197z00_2478;
																				obj_t BgL_arg2198z00_2479;

																				BgL_arg2196z00_2477 =
																					CAR(BgL_carzd23341zd2_2475);
																				BgL_arg2197z00_2478 =
																					CDR(BgL_carzd23341zd2_2475);
																				BgL_arg2198z00_2479 =
																					CDR(BgL_cdrzd23173zd2_2424);
																				{	/* Ast/unit.scm 353 */
																					obj_t BgL_arg2316z00_4600;

																					{	/* Ast/unit.scm 353 */
																						obj_t BgL_arg2318z00_4601;

																						{	/* Ast/unit.scm 353 */
																							obj_t BgL_arg2319z00_4602;

																							{	/* Ast/unit.scm 353 */
																								obj_t BgL_pairz00_4606;

																								BgL_pairz00_4606 =
																									CDR(((obj_t) BgL_sexpz00_37));
																								BgL_arg2319z00_4602 =
																									CDR(BgL_pairz00_4606);
																							}
																							BgL_arg2318z00_4601 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_arg2319z00_4602);
																						}
																						BgL_arg2316z00_4600 =
																							BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																							(BgL_arg2198z00_2479,
																							BgL_sexpz00_37,
																							BgL_arg2318z00_4601);
																					}
																					return
																						BGl_makezd2methodzd2definitionz00zzast_unitz00
																						(BgL_arg2196z00_2477,
																						BgL_arg2197z00_2478,
																						BgL_arg2316z00_4600,
																						BgL_sexpz00_37);
																				}
																			}
																		else
																			{	/* Ast/unit.scm 214 */
																				goto BgL_tagzd2374zd2_1927;
																			}
																	}
																else
																	{	/* Ast/unit.scm 214 */
																		goto BgL_tagzd2374zd2_1927;
																	}
															}
														else
															{	/* Ast/unit.scm 214 */
																goto BgL_tagzd2374zd2_1927;
															}
													}
											}
									}
							}
					}
				else
					{	/* Ast/unit.scm 214 */
						goto BgL_tagzd2374zd2_1927;
					}
			}
		}

	}



/* normalize-progn/error */
	obj_t BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00(obj_t BgL_expz00_39,
		obj_t BgL_srcz00_40, obj_t BgL_locz00_41)
	{
		{	/* Ast/unit.scm 361 */
			if (NULLP(BgL_expz00_39))
				{	/* Ast/unit.scm 363 */
					obj_t BgL_arg2322z00_2637;

					BgL_arg2322z00_2637 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_40);
					return
						((obj_t)
						BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
						(BGl_string3677z00zzast_unitz00, BgL_srcz00_40,
							BgL_arg2322z00_2637));
				}
			else
				{	/* Ast/unit.scm 364 */
					obj_t BgL_expz00_2638;

					BgL_expz00_2638 =
						BGl_normaliza7ezd2prognz75zztools_prognz00(BgL_expz00_39);
					if (CBOOL(BgL_locz00_41))
						{	/* Ast/unit.scm 368 */
							bool_t BgL_test3866z00_6507;

							{	/* Ast/unit.scm 368 */
								bool_t BgL_res3529z00_4608;

								BgL_res3529z00_4608 = EPAIRP(BgL_expz00_2638);
								BgL_test3866z00_6507 = BgL_res3529z00_4608;
							}
							if (BgL_test3866z00_6507)
								{	/* Ast/unit.scm 368 */
									return BgL_expz00_2638;
								}
							else
								{	/* Ast/unit.scm 368 */
									if (PAIRP(BgL_expz00_2638))
										{	/* Ast/unit.scm 371 */
											obj_t BgL_arg2325z00_2641;
											obj_t BgL_arg2326z00_2642;

											BgL_arg2325z00_2641 = CAR(BgL_expz00_2638);
											BgL_arg2326z00_2642 = CDR(BgL_expz00_2638);
											{	/* Ast/unit.scm 371 */
												obj_t BgL_res3531z00_4612;

												BgL_res3531z00_4612 =
													MAKE_YOUNG_EPAIR(BgL_arg2325z00_2641,
													BgL_arg2326z00_2642, BgL_locz00_41);
												return BgL_res3531z00_4612;
											}
										}
									else
										{	/* Ast/unit.scm 373 */
											obj_t BgL_arg2327z00_2643;

											{	/* Ast/unit.scm 373 */
												obj_t BgL_list2328z00_2644;

												BgL_list2328z00_2644 =
													MAKE_YOUNG_PAIR(BgL_expz00_2638, BNIL);
												BgL_arg2327z00_2643 = BgL_list2328z00_2644;
											}
											{	/* Ast/unit.scm 373 */
												obj_t BgL_res3533z00_4615;

												{	/* Ast/unit.scm 373 */
													obj_t BgL_obj1z00_4614;

													BgL_obj1z00_4614 = CNST_TABLE_REF(((long) 2));
													BgL_res3533z00_4615 =
														MAKE_YOUNG_EPAIR(BgL_obj1z00_4614,
														BgL_arg2327z00_2643, BgL_locz00_41);
												}
												return BgL_res3533z00_4615;
											}
										}
								}
						}
					else
						{	/* Ast/unit.scm 366 */
							return BgL_expz00_2638;
						}
				}
		}

	}



/* eta-expanse */
	obj_t BGl_etazd2expansezd2zzast_unitz00(obj_t BgL_sexpz00_45,
		obj_t BgL_arityz00_46)
	{
		{	/* Ast/unit.scm 391 */
			{	/* Ast/unit.scm 392 */
				obj_t BgL_argsz00_2653;

				BgL_argsz00_2653 =
					BGl_makezd2nzd2protoz00zztools_argsz00(BgL_arityz00_46);
				{
					obj_t BgL_varz00_2731;
					obj_t BgL_id2z00_2732;
					obj_t BgL_modulez00_2733;

					if (PAIRP(BgL_sexpz00_45))
						{	/* Ast/unit.scm 416 */
							obj_t BgL_cdrzd23479zd2_2665;

							BgL_cdrzd23479zd2_2665 = CDR(BgL_sexpz00_45);
							if ((CAR(BgL_sexpz00_45) == CNST_TABLE_REF(((long) 14))))
								{	/* Ast/unit.scm 416 */
									if (PAIRP(BgL_cdrzd23479zd2_2665))
										{	/* Ast/unit.scm 416 */
											obj_t BgL_cdrzd23484zd2_2669;

											BgL_cdrzd23484zd2_2669 = CDR(BgL_cdrzd23479zd2_2665);
											if (PAIRP(BgL_cdrzd23484zd2_2669))
												{	/* Ast/unit.scm 416 */
													obj_t BgL_carzd23488zd2_2671;

													BgL_carzd23488zd2_2671 = CAR(BgL_cdrzd23484zd2_2669);
													if (PAIRP(BgL_carzd23488zd2_2671))
														{	/* Ast/unit.scm 416 */
															obj_t BgL_cdrzd23493zd2_2673;

															BgL_cdrzd23493zd2_2673 =
																CDR(BgL_carzd23488zd2_2671);
															if (
																(CAR(BgL_carzd23488zd2_2671) ==
																	CNST_TABLE_REF(((long) 0))))
																{	/* Ast/unit.scm 416 */
																	if (PAIRP(BgL_cdrzd23493zd2_2673))
																		{	/* Ast/unit.scm 416 */
																			obj_t BgL_cdrzd23497zd2_2677;

																			BgL_cdrzd23497zd2_2677 =
																				CDR(BgL_cdrzd23493zd2_2673);
																			if (PAIRP(BgL_cdrzd23497zd2_2677))
																				{	/* Ast/unit.scm 416 */
																					if (NULLP(CDR
																							(BgL_cdrzd23497zd2_2677)))
																						{	/* Ast/unit.scm 416 */
																							if (NULLP(CDR
																									(BgL_cdrzd23484zd2_2669)))
																								{	/* Ast/unit.scm 416 */
																									obj_t BgL_arg2354z00_2684;
																									obj_t BgL_arg2355z00_2685;

																									BgL_arg2354z00_2684 =
																										CAR(BgL_cdrzd23493zd2_2673);
																									BgL_arg2355z00_2685 =
																										CAR(BgL_cdrzd23497zd2_2677);
																									{	/* Ast/unit.scm 418 */
																										obj_t BgL_id2z00_4650;

																										BgL_id2z00_4650 =
																											BGl_idzd2ofzd2idz00zzast_identz00
																											(BgL_arg2354z00_2684,
																											BGl_findzd2locationzd2zztools_locationz00
																											(BgL_sexpz00_45));
																										{	/* Ast/unit.scm 418 */

																											{	/* Ast/unit.scm 419 */
																												obj_t BgL_auxz00_6553;

																												BgL_varz00_2731 =
																													BgL_arg2354z00_2684;
																												BgL_id2z00_2732 =
																													BgL_id2z00_4650;
																												BgL_modulez00_2733 =
																													BgL_arg2355z00_2685;
																												if (((long)
																														CINT
																														(BgL_arityz00_46) >=
																														((long) 0)))
																													{	/* Ast/unit.scm 396 */
																														obj_t
																															BgL_arg2395z00_2736;
																														{	/* Ast/unit.scm 396 */
																															obj_t
																																BgL_arg2396z00_2737;
																															obj_t
																																BgL_arg2397z00_2738;
																															BgL_arg2396z00_2737
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_varz00_2731,
																																BgL_argsz00_2653);
																															{	/* Ast/unit.scm 397 */
																																obj_t
																																	BgL_arg2398z00_2739;
																																{	/* Ast/unit.scm 397 */
																																	obj_t
																																		BgL_arg2399z00_2740;
																																	obj_t
																																		BgL_arg2402z00_2741;
																																	{	/* Ast/unit.scm 397 */
																																		obj_t
																																			BgL_arg2404z00_2742;
																																		{	/* Ast/unit.scm 397 */
																																			obj_t
																																				BgL_arg2405z00_2743;
																																			BgL_arg2405z00_2743
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_modulez00_2733,
																																				BNIL);
																																			BgL_arg2404z00_2742
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_id2z00_2732,
																																				BgL_arg2405z00_2743);
																																		}
																																		BgL_arg2399z00_2740
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					0)),
																																			BgL_arg2404z00_2742);
																																	}
																																	BgL_arg2402z00_2741
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_argsz00_2653,
																																		BNIL);
																																	BgL_arg2398z00_2739
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2399z00_2740,
																																		BgL_arg2402z00_2741);
																																}
																																BgL_arg2397z00_2738
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2398z00_2739,
																																	BNIL);
																															}
																															BgL_arg2395z00_2736
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2396z00_2737,
																																BgL_arg2397z00_2738);
																														}
																														BgL_auxz00_6553 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 14)),
																															BgL_arg2395z00_2736);
																													}
																												else
																													{	/* Ast/unit.scm 395 */
																														if (
																															((long)
																																CINT
																																(BgL_arityz00_46)
																																== ((long) -1)))
																															{	/* Ast/unit.scm 399 */
																																obj_t
																																	BgL_arg2407z00_2745;
																																{	/* Ast/unit.scm 399 */
																																	obj_t
																																		BgL_arg2409z00_2746;
																																	obj_t
																																		BgL_arg2411z00_2747;
																																	BgL_arg2409z00_2746
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_varz00_2731,
																																		BgL_argsz00_2653);
																																	{	/* Ast/unit.scm 400 */
																																		obj_t
																																			BgL_arg2412z00_2748;
																																		{	/* Ast/unit.scm 400 */
																																			obj_t
																																				BgL_arg2413z00_2749;
																																			{	/* Ast/unit.scm 400 */
																																				obj_t
																																					BgL_arg2414z00_2750;
																																				obj_t
																																					BgL_arg2415z00_2751;
																																				{	/* Ast/unit.scm 400 */
																																					obj_t
																																						BgL_arg2416z00_2752;
																																					{	/* Ast/unit.scm 400 */
																																						obj_t
																																							BgL_arg2418z00_2753;
																																						BgL_arg2418z00_2753
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_modulez00_2733,
																																							BNIL);
																																						BgL_arg2416z00_2752
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_id2z00_2732,
																																							BgL_arg2418z00_2753);
																																					}
																																					BgL_arg2414z00_2750
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 0)), BgL_arg2416z00_2752);
																																				}
																																				BgL_arg2415z00_2751
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_argsz00_2653,
																																					BNIL);
																																				BgL_arg2413z00_2749
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2414z00_2750,
																																					BgL_arg2415z00_2751);
																																			}
																																			BgL_arg2412z00_2748
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						20)),
																																				BgL_arg2413z00_2749);
																																		}
																																		BgL_arg2411z00_2747
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2412z00_2748,
																																			BNIL);
																																	}
																																	BgL_arg2407z00_2745
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2409z00_2746,
																																		BgL_arg2411z00_2747);
																																}
																																BgL_auxz00_6553
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 14)),
																																	BgL_arg2407z00_2745);
																															}
																														else
																															{	/* Ast/unit.scm 402 */
																																obj_t
																																	BgL_arg2419z00_2754;
																																{	/* Ast/unit.scm 402 */
																																	obj_t
																																		BgL_arg2420z00_2755;
																																	obj_t
																																		BgL_arg2421z00_2756;
																																	BgL_arg2420z00_2755
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_varz00_2731,
																																		BgL_argsz00_2653);
																																	{	/* Ast/unit.scm 403 */
																																		obj_t
																																			BgL_arg2422z00_2757;
																																		{	/* Ast/unit.scm 403 */
																																			obj_t
																																				BgL_arg2424z00_2758;
																																			{	/* Ast/unit.scm 403 */
																																				obj_t
																																					BgL_arg2425z00_2759;
																																				obj_t
																																					BgL_arg2426z00_2760;
																																				{	/* Ast/unit.scm 403 */
																																					obj_t
																																						BgL_arg2427z00_2761;
																																					{	/* Ast/unit.scm 403 */
																																						obj_t
																																							BgL_arg2428z00_2762;
																																						BgL_arg2428z00_2762
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_modulez00_2733,
																																							BNIL);
																																						BgL_arg2427z00_2761
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_id2z00_2732,
																																							BgL_arg2428z00_2762);
																																					}
																																					BgL_arg2425z00_2759
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 0)), BgL_arg2427z00_2761);
																																				}
																																				{	/* Ast/unit.scm 404 */
																																					obj_t
																																						BgL_arg2430z00_2763;
																																					{	/* Ast/unit.scm 404 */
																																						obj_t
																																							BgL_arg2431z00_2764;
																																						BgL_arg2431z00_2764
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																																							(BgL_argsz00_2653),
																																							BNIL);
																																						BgL_arg2430z00_2763
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 21)), BgL_arg2431z00_2764);
																																					}
																																					BgL_arg2426z00_2760
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2430z00_2763,
																																						BNIL);
																																				}
																																				BgL_arg2424z00_2758
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2425z00_2759,
																																					BgL_arg2426z00_2760);
																																			}
																																			BgL_arg2422z00_2757
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						20)),
																																				BgL_arg2424z00_2758);
																																		}
																																		BgL_arg2421z00_2756
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2422z00_2757,
																																			BNIL);
																																	}
																																	BgL_arg2419z00_2754
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2420z00_2755,
																																		BgL_arg2421z00_2756);
																																}
																																BgL_auxz00_6553
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 14)),
																																	BgL_arg2419z00_2754);
																													}}
																												return
																													BGl_replacez12z12zztools_miscz00
																													(BgL_sexpz00_45,
																													BgL_auxz00_6553);
																											}
																										}
																									}
																								}
																							else
																								{	/* Ast/unit.scm 416 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Ast/unit.scm 416 */
																							obj_t BgL_cdrzd23519zd2_2688;

																							BgL_cdrzd23519zd2_2688 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd23479zd2_2665));
																							if (NULLP(CDR(((obj_t)
																											BgL_cdrzd23519zd2_2688))))
																								{	/* Ast/unit.scm 416 */
																									obj_t BgL_arg2359z00_2691;
																									obj_t BgL_arg2360z00_2692;

																									BgL_arg2359z00_2691 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd23479zd2_2665));
																									BgL_arg2360z00_2692 =
																										CAR(((obj_t)
																											BgL_cdrzd23519zd2_2688));
																									{	/* Ast/unit.scm 421 */
																										obj_t BgL_id2z00_4659;

																										BgL_id2z00_4659 =
																											BGl_idzd2ofzd2idz00zzast_identz00
																											(BgL_arg2360z00_2692,
																											BGl_findzd2locationzd2zztools_locationz00
																											(BgL_sexpz00_45));
																										return
																											BGl_replacez12z12zztools_miscz00
																											(BgL_sexpz00_45,
																											BGl_dozd2etazd2expanseze70ze7zzast_unitz00
																											(BgL_arityz00_46,
																												BgL_argsz00_2653,
																												BgL_arg2359z00_2691,
																												BgL_id2z00_4659));
																									}
																								}
																							else
																								{	/* Ast/unit.scm 416 */
																									return BFALSE;
																								}
																						}
																				}
																			else
																				{	/* Ast/unit.scm 416 */
																					obj_t BgL_cdrzd23537zd2_2696;

																					BgL_cdrzd23537zd2_2696 =
																						CDR(
																						((obj_t) BgL_cdrzd23479zd2_2665));
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd23537zd2_2696))))
																						{	/* Ast/unit.scm 416 */
																							obj_t BgL_arg2365z00_2699;
																							obj_t BgL_arg2366z00_2700;

																							BgL_arg2365z00_2699 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd23479zd2_2665));
																							BgL_arg2366z00_2700 =
																								CAR(((obj_t)
																									BgL_cdrzd23537zd2_2696));
																							{	/* Ast/unit.scm 421 */
																								obj_t BgL_id2z00_4668;

																								BgL_id2z00_4668 =
																									BGl_idzd2ofzd2idz00zzast_identz00
																									(BgL_arg2366z00_2700,
																									BGl_findzd2locationzd2zztools_locationz00
																									(BgL_sexpz00_45));
																								return
																									BGl_replacez12z12zztools_miscz00
																									(BgL_sexpz00_45,
																									BGl_dozd2etazd2expanseze70ze7zzast_unitz00
																									(BgL_arityz00_46,
																										BgL_argsz00_2653,
																										BgL_arg2365z00_2699,
																										BgL_id2z00_4668));
																							}
																						}
																					else
																						{	/* Ast/unit.scm 416 */
																							return BFALSE;
																						}
																				}
																		}
																	else
																		{	/* Ast/unit.scm 416 */
																			obj_t BgL_cdrzd23555zd2_2703;

																			BgL_cdrzd23555zd2_2703 =
																				CDR(((obj_t) BgL_cdrzd23479zd2_2665));
																			if (NULLP(CDR(
																						((obj_t) BgL_cdrzd23555zd2_2703))))
																				{	/* Ast/unit.scm 416 */
																					obj_t BgL_arg2370z00_2706;
																					obj_t BgL_arg2371z00_2707;

																					BgL_arg2370z00_2706 =
																						CAR(
																						((obj_t) BgL_cdrzd23479zd2_2665));
																					BgL_arg2371z00_2707 =
																						CAR(
																						((obj_t) BgL_cdrzd23555zd2_2703));
																					{	/* Ast/unit.scm 421 */
																						obj_t BgL_id2z00_4677;

																						BgL_id2z00_4677 =
																							BGl_idzd2ofzd2idz00zzast_identz00
																							(BgL_arg2371z00_2707,
																							BGl_findzd2locationzd2zztools_locationz00
																							(BgL_sexpz00_45));
																						return
																							BGl_replacez12z12zztools_miscz00
																							(BgL_sexpz00_45,
																							BGl_dozd2etazd2expanseze70ze7zzast_unitz00
																							(BgL_arityz00_46,
																								BgL_argsz00_2653,
																								BgL_arg2370z00_2706,
																								BgL_id2z00_4677));
																					}
																				}
																			else
																				{	/* Ast/unit.scm 416 */
																					return BFALSE;
																				}
																		}
																}
															else
																{	/* Ast/unit.scm 416 */
																	obj_t BgL_cdrzd23573zd2_2710;

																	BgL_cdrzd23573zd2_2710 =
																		CDR(((obj_t) BgL_cdrzd23479zd2_2665));
																	if (NULLP(CDR(
																				((obj_t) BgL_cdrzd23573zd2_2710))))
																		{	/* Ast/unit.scm 416 */
																			obj_t BgL_arg2376z00_2713;
																			obj_t BgL_arg2377z00_2714;

																			BgL_arg2376z00_2713 =
																				CAR(((obj_t) BgL_cdrzd23479zd2_2665));
																			BgL_arg2377z00_2714 =
																				CAR(((obj_t) BgL_cdrzd23573zd2_2710));
																			{	/* Ast/unit.scm 421 */
																				obj_t BgL_id2z00_4686;

																				BgL_id2z00_4686 =
																					BGl_idzd2ofzd2idz00zzast_identz00
																					(BgL_arg2377z00_2714,
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_sexpz00_45));
																				return
																					BGl_replacez12z12zztools_miscz00
																					(BgL_sexpz00_45,
																					BGl_dozd2etazd2expanseze70ze7zzast_unitz00
																					(BgL_arityz00_46, BgL_argsz00_2653,
																						BgL_arg2376z00_2713,
																						BgL_id2z00_4686));
																			}
																		}
																	else
																		{	/* Ast/unit.scm 416 */
																			return BFALSE;
																		}
																}
														}
													else
														{	/* Ast/unit.scm 416 */
															obj_t BgL_cdrzd23591zd2_2718;

															BgL_cdrzd23591zd2_2718 =
																CDR(((obj_t) BgL_cdrzd23479zd2_2665));
															if (NULLP(CDR(((obj_t) BgL_cdrzd23591zd2_2718))))
																{	/* Ast/unit.scm 416 */
																	obj_t BgL_arg2383z00_2721;
																	obj_t BgL_arg2384z00_2722;

																	BgL_arg2383z00_2721 =
																		CAR(((obj_t) BgL_cdrzd23479zd2_2665));
																	BgL_arg2384z00_2722 =
																		CAR(((obj_t) BgL_cdrzd23591zd2_2718));
																	{	/* Ast/unit.scm 421 */
																		obj_t BgL_id2z00_4695;

																		BgL_id2z00_4695 =
																			BGl_idzd2ofzd2idz00zzast_identz00
																			(BgL_arg2384z00_2722,
																			BGl_findzd2locationzd2zztools_locationz00
																			(BgL_sexpz00_45));
																		return
																			BGl_replacez12z12zztools_miscz00
																			(BgL_sexpz00_45,
																			BGl_dozd2etazd2expanseze70ze7zzast_unitz00
																			(BgL_arityz00_46, BgL_argsz00_2653,
																				BgL_arg2383z00_2721, BgL_id2z00_4695));
																	}
																}
															else
																{	/* Ast/unit.scm 416 */
																	return BFALSE;
																}
														}
												}
											else
												{	/* Ast/unit.scm 416 */
													return BFALSE;
												}
										}
									else
										{	/* Ast/unit.scm 416 */
											return BFALSE;
										}
								}
							else
								{	/* Ast/unit.scm 416 */
									return BFALSE;
								}
						}
					else
						{	/* Ast/unit.scm 416 */
							return BFALSE;
						}
				}
			}
		}

	}



/* do-eta-expanse~0 */
	obj_t BGl_dozd2etazd2expanseze70ze7zzast_unitz00(obj_t BgL_arityz00_5041,
		obj_t BgL_argsz00_5040, obj_t BgL_varz00_2766, obj_t BgL_id2z00_2767)
	{
		{	/* Ast/unit.scm 415 */
			if (((long) CINT(BgL_arityz00_5041) >= ((long) 0)))
				{	/* Ast/unit.scm 408 */
					obj_t BgL_arg2437z00_2770;

					{	/* Ast/unit.scm 408 */
						obj_t BgL_arg2438z00_2771;
						obj_t BgL_arg2439z00_2772;

						BgL_arg2438z00_2771 =
							MAKE_YOUNG_PAIR(BgL_varz00_2766, BgL_argsz00_5040);
						{	/* Ast/unit.scm 409 */
							obj_t BgL_arg2441z00_2773;

							BgL_arg2441z00_2773 =
								MAKE_YOUNG_PAIR(BgL_id2z00_2767,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_argsz00_5040, BNIL));
							BgL_arg2439z00_2772 = MAKE_YOUNG_PAIR(BgL_arg2441z00_2773, BNIL);
						}
						BgL_arg2437z00_2770 =
							MAKE_YOUNG_PAIR(BgL_arg2438z00_2771, BgL_arg2439z00_2772);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg2437z00_2770);
				}
			else
				{	/* Ast/unit.scm 407 */
					if (((long) CINT(BgL_arityz00_5041) == ((long) -1)))
						{	/* Ast/unit.scm 411 */
							obj_t BgL_arg2446z00_2776;

							{	/* Ast/unit.scm 411 */
								obj_t BgL_arg2447z00_2777;
								obj_t BgL_arg2448z00_2778;

								BgL_arg2447z00_2777 =
									MAKE_YOUNG_PAIR(BgL_varz00_2766, BgL_argsz00_5040);
								{	/* Ast/unit.scm 412 */
									obj_t BgL_arg2449z00_2779;

									{	/* Ast/unit.scm 412 */
										obj_t BgL_arg2450z00_2780;

										{	/* Ast/unit.scm 412 */
											obj_t BgL_arg2451z00_2781;

											BgL_arg2451z00_2781 =
												MAKE_YOUNG_PAIR(BgL_argsz00_5040, BNIL);
											BgL_arg2450z00_2780 =
												MAKE_YOUNG_PAIR(BgL_id2z00_2767, BgL_arg2451z00_2781);
										}
										BgL_arg2449z00_2779 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
											BgL_arg2450z00_2780);
									}
									BgL_arg2448z00_2778 =
										MAKE_YOUNG_PAIR(BgL_arg2449z00_2779, BNIL);
								}
								BgL_arg2446z00_2776 =
									MAKE_YOUNG_PAIR(BgL_arg2447z00_2777, BgL_arg2448z00_2778);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
								BgL_arg2446z00_2776);
						}
					else
						{	/* Ast/unit.scm 414 */
							obj_t BgL_arg2452z00_2782;

							{	/* Ast/unit.scm 414 */
								obj_t BgL_arg2453z00_2783;
								obj_t BgL_arg2455z00_2784;

								BgL_arg2453z00_2783 =
									MAKE_YOUNG_PAIR(BgL_varz00_2766, BgL_argsz00_5040);
								{	/* Ast/unit.scm 415 */
									obj_t BgL_arg2456z00_2785;

									{	/* Ast/unit.scm 415 */
										obj_t BgL_arg2457z00_2786;

										{	/* Ast/unit.scm 415 */
											obj_t BgL_arg2458z00_2787;

											{	/* Ast/unit.scm 415 */
												obj_t BgL_arg2460z00_2788;

												{	/* Ast/unit.scm 415 */
													obj_t BgL_arg2461z00_2789;

													BgL_arg2461z00_2789 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
														(BgL_argsz00_5040), BNIL);
													BgL_arg2460z00_2788 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
														BgL_arg2461z00_2789);
												}
												BgL_arg2458z00_2787 =
													MAKE_YOUNG_PAIR(BgL_arg2460z00_2788, BNIL);
											}
											BgL_arg2457z00_2786 =
												MAKE_YOUNG_PAIR(BgL_id2z00_2767, BgL_arg2458z00_2787);
										}
										BgL_arg2456z00_2785 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
											BgL_arg2457z00_2786);
									}
									BgL_arg2455z00_2784 =
										MAKE_YOUNG_PAIR(BgL_arg2456z00_2785, BNIL);
								}
								BgL_arg2452z00_2782 =
									MAKE_YOUNG_PAIR(BgL_arg2453z00_2783, BgL_arg2455z00_2784);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
								BgL_arg2452z00_2782);
		}}}

	}



/* make-sfun-definition */
	obj_t BGl_makezd2sfunzd2definitionz00zzast_unitz00(obj_t BgL_idz00_47,
		obj_t BgL_modulez00_48, obj_t BgL_argsz00_49, obj_t BgL_bodyz00_50,
		obj_t BgL_srcz00_51, obj_t BgL_classz00_52)
	{
		{	/* Ast/unit.scm 427 */
			{	/* Ast/unit.scm 428 */
				obj_t BgL_locz00_2793;
				obj_t BgL_optsz00_2794;
				obj_t BgL_keysz00_2795;

				BgL_locz00_2793 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_51);
				BgL_optsz00_2794 =
					BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_49);
				BgL_keysz00_2795 = BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_49);
				if (NULLP(BgL_optsz00_2794))
					{	/* Ast/unit.scm 432 */
						if (NULLP(BgL_keysz00_2795))
							{	/* Ast/unit.scm 684 */
								obj_t BgL_localsz00_4706;
								obj_t BgL_bodyz00_4707;

								BgL_localsz00_4706 =
									BGl_parsezd2funzd2argsz00zzast_unitz00(BgL_argsz00_49,
									BgL_srcz00_51, BgL_locz00_2793);
								BgL_bodyz00_4707 =
									BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
									(BgL_idz00_47, BgL_argsz00_49, BgL_bodyz00_50,
									BGl_userzd2errorzd2envz00zztools_errorz00);
								{	/* Ast/unit.scm 686 */
									BgL_globalz00_bglt BgL_arg3065z00_4708;

									BgL_arg3065z00_4708 =
										BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
										(BgL_idz00_47, BgL_argsz00_49, BgL_localsz00_4706,
										BgL_modulez00_48, BgL_classz00_52, BgL_srcz00_51,
										CNST_TABLE_REF(((long) 8)), BgL_bodyz00_4707);
									{	/* Ast/unit.scm 686 */
										obj_t BgL_list3066z00_4709;

										BgL_list3066z00_4709 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg3065z00_4708), BNIL);
										return BgL_list3066z00_4709;
									}
								}
							}
						else
							{	/* Ast/unit.scm 434 */
								return
									BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00
									(BgL_keysz00_2795, BgL_idz00_47, BgL_modulez00_48,
									BgL_argsz00_49, BgL_bodyz00_50, BgL_srcz00_51,
									BgL_classz00_52, BgL_locz00_2793);
							}
					}
				else
					{	/* Ast/unit.scm 443 */
						obj_t BgL_localsz00_4699;

						BgL_localsz00_4699 =
							BGl_parsezd2funzd2optzd2argszd2zzast_unitz00(BgL_argsz00_49,
							BgL_argsz00_49, BgL_locz00_2793);
						{	/* Ast/unit.scm 443 */
							BgL_globalz00_bglt BgL_gloz00_4700;

							BgL_gloz00_4700 =
								BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_47,
								BgL_argsz00_49, BgL_localsz00_4699, BgL_modulez00_48,
								BgL_classz00_52, BgL_srcz00_51, CNST_TABLE_REF(((long) 8)),
								BgL_bodyz00_50);
							{	/* Ast/unit.scm 444 */
								BgL_globalz00_bglt BgL_cloz00_4701;

								BgL_cloz00_4701 =
									BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(
									((obj_t) BgL_gloz00_4700), BgL_optsz00_2794, BgL_idz00_47,
									BgL_modulez00_48, BgL_argsz00_49, BgL_bodyz00_50,
									BgL_srcz00_51, BgL_classz00_52, BgL_locz00_2793);
								{	/* Ast/unit.scm 445 */

									{	/* Ast/unit.scm 446 */
										obj_t BgL_list2465z00_4702;

										{	/* Ast/unit.scm 446 */
											obj_t BgL_arg2466z00_4703;

											BgL_arg2466z00_4703 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_cloz00_4701), BNIL);
											BgL_list2465z00_4702 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_gloz00_4700), BgL_arg2466z00_4703);
										}
										return BgL_list2465z00_4702;
									}
								}
							}
						}
					}
			}
		}

	}



/* make-sfun-opt-closure */
	BgL_globalz00_bglt BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(obj_t
		BgL_gloz00_61, obj_t BgL_optionalsz00_62, obj_t BgL_idz00_63,
		obj_t BgL_modulez00_64, obj_t BgL_argsz00_65, obj_t BgL_bodyz00_66,
		obj_t BgL_srcz00_67, obj_t BgL_classz00_68, obj_t BgL_locz00_69)
	{
		{	/* Ast/unit.scm 459 */
			{	/* Ast/unit.scm 460 */
				long BgL_arityz00_2803;

				BgL_arityz00_2803 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gloz00_61))))->
										BgL_valuez00)))))->BgL_arityz00);
				{
					obj_t BgL_optz00_2823;

					{	/* Ast/unit.scm 498 */
						obj_t BgL_idz00_2805;

						{	/* Ast/unit.scm 498 */
							obj_t BgL_arg2479z00_2820;

							{	/* Ast/unit.scm 498 */
								obj_t BgL_arg2481z00_2821;
								obj_t BgL_arg2482z00_2822;

								{	/* Ast/unit.scm 498 */
									obj_t BgL_res3579z00_4785;

									{	/* Ast/unit.scm 498 */
										obj_t BgL_symbolz00_4783;

										BgL_symbolz00_4783 = CNST_TABLE_REF(((long) 30));
										{	/* Ast/unit.scm 498 */
											obj_t BgL_arg1466z00_4784;

											BgL_arg1466z00_4784 =
												SYMBOL_TO_STRING(BgL_symbolz00_4783);
											BgL_res3579z00_4785 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_4784);
									}}
									BgL_arg2481z00_2821 = BgL_res3579z00_4785;
								}
								{	/* Ast/unit.scm 498 */
									obj_t BgL_res3580z00_4788;

									{	/* Ast/unit.scm 498 */
										obj_t BgL_arg1466z00_4787;

										BgL_arg1466z00_4787 =
											SYMBOL_TO_STRING(((obj_t) BgL_idz00_63));
										BgL_res3580z00_4788 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_4787);
									}
									BgL_arg2482z00_2822 = BgL_res3580z00_4788;
								}
								BgL_arg2479z00_2820 =
									string_append(BgL_arg2481z00_2821, BgL_arg2482z00_2822);
							}
							BgL_idz00_2805 = bstring_to_symbol(BgL_arg2479z00_2820);
						}
						{	/* Ast/unit.scm 498 */
							obj_t BgL_optidz00_2806;

							BgL_optidz00_2806 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 31)));
							{	/* Ast/unit.scm 499 */
								obj_t BgL_envidz00_2807;

								BgL_envidz00_2807 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											32)));
								{	/* Ast/unit.scm 500 */
									BgL_localz00_bglt BgL_optz00_2808;

									BgL_optz00_2808 =
										BGl_makezd2localzd2svarz00zzast_localz00(BgL_optidz00_2806,
										((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00));
									{	/* Ast/unit.scm 501 */
										BgL_localz00_bglt BgL_envz00_2809;

										BgL_envz00_2809 =
											BGl_makezd2localzd2svarz00zzast_localz00
											(BgL_envidz00_2807,
											((BgL_typez00_bglt)
												BGl_za2procedureza2z00zztype_cachez00));
										{	/* Ast/unit.scm 502 */
											BgL_globalz00_bglt BgL_gz00_2810;

											{	/* Ast/unit.scm 503 */
												obj_t BgL_arg2467z00_2811;
												obj_t BgL_arg2469z00_2812;
												obj_t BgL_arg2470z00_2813;

												{	/* Ast/unit.scm 503 */
													obj_t BgL_list2471z00_2814;

													{	/* Ast/unit.scm 503 */
														obj_t BgL_arg2473z00_2815;

														BgL_arg2473z00_2815 =
															MAKE_YOUNG_PAIR(BgL_optidz00_2806, BNIL);
														BgL_list2471z00_2814 =
															MAKE_YOUNG_PAIR(BgL_envidz00_2807,
															BgL_arg2473z00_2815);
													}
													BgL_arg2467z00_2811 = BgL_list2471z00_2814;
												}
												{	/* Ast/unit.scm 504 */
													obj_t BgL_list2474z00_2816;

													{	/* Ast/unit.scm 504 */
														obj_t BgL_arg2475z00_2817;

														BgL_arg2475z00_2817 =
															MAKE_YOUNG_PAIR(((obj_t) BgL_optz00_2808), BNIL);
														BgL_list2474z00_2816 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_envz00_2809), BgL_arg2475z00_2817);
													}
													BgL_arg2469z00_2812 = BgL_list2474z00_2816;
												}
												{	/* Ast/unit.scm 506 */
													obj_t BgL_auxz00_6758;

													{	/* Ast/unit.scm 506 */
														obj_t BgL_auxz00_6759;

														BgL_optz00_2823 = BgL_optidz00_2806;
														{	/* Ast/unit.scm 462 */
															long BgL_loptz00_2825;
															obj_t BgL_formsz00_2826;
															obj_t BgL_optsz00_2827;

															BgL_loptz00_2825 =
																bgl_list_length(BgL_optionalsz00_62);
															{	/* Ast/unit.scm 463 */
																obj_t BgL_l1263z00_2944;

																BgL_l1263z00_2944 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									BgL_gloz00_61))))->
																					BgL_valuez00))))->BgL_argsz00);
																if (NULLP(BgL_l1263z00_2944))
																	{	/* Ast/unit.scm 463 */
																		BgL_formsz00_2826 = BNIL;
																	}
																else
																	{	/* Ast/unit.scm 463 */
																		obj_t BgL_head1265z00_2946;

																		{	/* Ast/unit.scm 463 */
																			obj_t BgL_arg2605z00_2958;

																			BgL_arg2605z00_2958 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								CAR(
																									((obj_t)
																										BgL_l1263z00_2944))))))->
																				BgL_idz00);
																			{	/* Ast/unit.scm 463 */
																				obj_t BgL_res3557z00_4724;

																				BgL_res3557z00_4724 =
																					MAKE_YOUNG_PAIR(BgL_arg2605z00_2958,
																					BNIL);
																				BgL_head1265z00_2946 =
																					BgL_res3557z00_4724;
																			}
																		}
																		{	/* Ast/unit.scm 463 */
																			obj_t BgL_g1268z00_2947;

																			BgL_g1268z00_2947 =
																				CDR(((obj_t) BgL_l1263z00_2944));
																			{
																				obj_t BgL_l1263z00_2949;
																				obj_t BgL_tail1266z00_2950;

																				BgL_l1263z00_2949 = BgL_g1268z00_2947;
																				BgL_tail1266z00_2950 =
																					BgL_head1265z00_2946;
																			BgL_zc3z04anonymousza32600ze3z87_2951:
																				if (NULLP(BgL_l1263z00_2949))
																					{	/* Ast/unit.scm 463 */
																						BgL_formsz00_2826 =
																							BgL_head1265z00_2946;
																					}
																				else
																					{	/* Ast/unit.scm 463 */
																						obj_t BgL_newtail1267z00_2953;

																						{	/* Ast/unit.scm 463 */
																							obj_t BgL_arg2603z00_2955;

																							BgL_arg2603z00_2955 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_localz00_bglt)
																												CAR(((obj_t)
																														BgL_l1263z00_2949))))))->
																								BgL_idz00);
																							{	/* Ast/unit.scm 463 */
																								obj_t BgL_res3559z00_4729;

																								BgL_res3559z00_4729 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2603z00_2955, BNIL);
																								BgL_newtail1267z00_2953 =
																									BgL_res3559z00_4729;
																							}
																						}
																						SET_CDR(BgL_tail1266z00_2950,
																							BgL_newtail1267z00_2953);
																						{	/* Ast/unit.scm 463 */
																							obj_t BgL_arg2602z00_2954;

																							BgL_arg2602z00_2954 =
																								CDR(
																								((obj_t) BgL_l1263z00_2949));
																							{
																								obj_t BgL_tail1266z00_6788;
																								obj_t BgL_l1263z00_6787;

																								BgL_l1263z00_6787 =
																									BgL_arg2602z00_2954;
																								BgL_tail1266z00_6788 =
																									BgL_newtail1267z00_2953;
																								BgL_tail1266z00_2950 =
																									BgL_tail1266z00_6788;
																								BgL_l1263z00_2949 =
																									BgL_l1263z00_6787;
																								goto
																									BgL_zc3z04anonymousza32600ze3z87_2951;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															{	/* Ast/unit.scm 464 */
																obj_t BgL_l1269z00_2961;

																BgL_l1269z00_2961 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									BgL_gloz00_61))))->
																					BgL_valuez00))))->BgL_optionalsz00);
																if (NULLP(BgL_l1269z00_2961))
																	{	/* Ast/unit.scm 464 */
																		BgL_optsz00_2827 = BNIL;
																	}
																else
																	{	/* Ast/unit.scm 464 */
																		obj_t BgL_head1271z00_2963;

																		{	/* Ast/unit.scm 464 */
																			obj_t BgL_res3561z00_4735;

																			BgL_res3561z00_4735 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BgL_head1271z00_2963 =
																				BgL_res3561z00_4735;
																		}
																		{
																			obj_t BgL_l1269z00_2965;
																			obj_t BgL_tail1272z00_2966;

																			BgL_l1269z00_2965 = BgL_l1269z00_2961;
																			BgL_tail1272z00_2966 =
																				BgL_head1271z00_2963;
																		BgL_zc3z04anonymousza32609ze3z87_2967:
																			if (NULLP(BgL_l1269z00_2965))
																				{	/* Ast/unit.scm 464 */
																					BgL_optsz00_2827 =
																						CDR(BgL_head1271z00_2963);
																				}
																			else
																				{	/* Ast/unit.scm 464 */
																					obj_t BgL_newtail1273z00_2969;

																					{	/* Ast/unit.scm 464 */
																						obj_t BgL_arg2612z00_2971;

																						{	/* Ast/unit.scm 464 */
																							obj_t BgL_oz00_2972;

																							BgL_oz00_2972 =
																								CAR(
																								((obj_t) BgL_l1269z00_2965));
																							{	/* Ast/unit.scm 465 */
																								obj_t BgL_arg2613z00_2973;

																								BgL_arg2613z00_2973 =
																									CAR(((obj_t) BgL_oz00_2972));
																								BgL_arg2612z00_2971 =
																									BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																									(BgL_arg2613z00_2973,
																									BgL_locz00_69);
																							}
																						}
																						{	/* Ast/unit.scm 464 */
																							obj_t BgL_res3563z00_4740;

																							BgL_res3563z00_4740 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2612z00_2971, BNIL);
																							BgL_newtail1273z00_2969 =
																								BgL_res3563z00_4740;
																						}
																					}
																					SET_CDR(BgL_tail1272z00_2966,
																						BgL_newtail1273z00_2969);
																					{	/* Ast/unit.scm 464 */
																						obj_t BgL_arg2611z00_2970;

																						BgL_arg2611z00_2970 =
																							CDR(((obj_t) BgL_l1269z00_2965));
																						{
																							obj_t BgL_tail1272z00_6810;
																							obj_t BgL_l1269z00_6809;

																							BgL_l1269z00_6809 =
																								BgL_arg2611z00_2970;
																							BgL_tail1272z00_6810 =
																								BgL_newtail1273z00_2969;
																							BgL_tail1272z00_2966 =
																								BgL_tail1272z00_6810;
																							BgL_l1269z00_2965 =
																								BgL_l1269z00_6809;
																							goto
																								BgL_zc3z04anonymousza32609ze3z87_2967;
																						}
																					}
																				}
																		}
																	}
															}
															{	/* Ast/unit.scm 467 */
																obj_t BgL_arg2484z00_2828;
																obj_t BgL_arg2486z00_2829;

																BgL_arg2484z00_2828 =
																	BGl_letzd2symzd2zzast_letz00();
																{	/* Ast/unit.scm 467 */
																	obj_t BgL_arg2487z00_2830;
																	obj_t BgL_arg2488z00_2831;

																	{	/* Ast/unit.scm 467 */
																		obj_t BgL_ll1274z00_2832;
																		obj_t BgL_ll1275z00_2833;

																		BgL_ll1274z00_2832 =
																			BGl_takez00zz__r4_pairs_and_lists_6_3z00(
																			(((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							(((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											((BgL_globalz00_bglt)
																												BgL_gloz00_61))))->
																								BgL_valuez00))))->
																				BgL_argszd2namezd2), BgL_arityz00_2803);
																		BgL_ll1275z00_2833 =
																			BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(
																			(int) (BgL_arityz00_2803), BNIL);
																		if (NULLP(BgL_ll1274z00_2832))
																			{	/* Ast/unit.scm 467 */
																				BgL_arg2487z00_2830 = BNIL;
																			}
																		else
																			{	/* Ast/unit.scm 467 */
																				obj_t BgL_head1276z00_2835;

																				{	/* Ast/unit.scm 467 */
																					obj_t BgL_res3565z00_4746;

																					BgL_res3565z00_4746 =
																						MAKE_YOUNG_PAIR(BNIL, BNIL);
																					BgL_head1276z00_2835 =
																						BgL_res3565z00_4746;
																				}
																				{
																					obj_t BgL_ll1274z00_2837;
																					obj_t BgL_ll1275z00_2838;
																					obj_t BgL_tail1277z00_2839;

																					BgL_ll1274z00_2837 =
																						BgL_ll1274z00_2832;
																					BgL_ll1275z00_2838 =
																						BgL_ll1275z00_2833;
																					BgL_tail1277z00_2839 =
																						BgL_head1276z00_2835;
																				BgL_zc3z04anonymousza32490ze3z87_2840:
																					if (NULLP(BgL_ll1274z00_2837))
																						{	/* Ast/unit.scm 467 */
																							BgL_arg2487z00_2830 =
																								CDR(BgL_head1276z00_2835);
																						}
																					else
																						{	/* Ast/unit.scm 467 */
																							obj_t BgL_newtail1278z00_2842;

																							{	/* Ast/unit.scm 467 */
																								obj_t BgL_arg2497z00_2845;

																								{	/* Ast/unit.scm 467 */
																									obj_t BgL_vz00_2846;
																									obj_t BgL_iz00_2847;

																									BgL_vz00_2846 =
																										CAR(
																										((obj_t)
																											BgL_ll1274z00_2837));
																									BgL_iz00_2847 =
																										CAR(((obj_t)
																											BgL_ll1275z00_2838));
																									{	/* Ast/unit.scm 468 */
																										obj_t BgL_arg2499z00_2848;

																										{	/* Ast/unit.scm 468 */
																											obj_t BgL_arg2500z00_2849;

																											{	/* Ast/unit.scm 468 */
																												obj_t
																													BgL_arg2501z00_2850;
																												{	/* Ast/unit.scm 468 */
																													obj_t
																														BgL_arg2502z00_2851;
																													BgL_arg2502z00_2851 =
																														MAKE_YOUNG_PAIR
																														(BgL_iz00_2847,
																														BNIL);
																													BgL_arg2501z00_2850 =
																														MAKE_YOUNG_PAIR
																														(BgL_optz00_2823,
																														BgL_arg2502z00_2851);
																												}
																												BgL_arg2500z00_2849 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 22)),
																													BgL_arg2501z00_2850);
																											}
																											BgL_arg2499z00_2848 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2500z00_2849,
																												BNIL);
																										}
																										BgL_arg2497z00_2845 =
																											MAKE_YOUNG_PAIR
																											(BgL_vz00_2846,
																											BgL_arg2499z00_2848);
																								}}
																								{	/* Ast/unit.scm 467 */
																									obj_t BgL_res3567z00_4751;

																									BgL_res3567z00_4751 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2497z00_2845, BNIL);
																									BgL_newtail1278z00_2842 =
																										BgL_res3567z00_4751;
																							}}
																							SET_CDR(BgL_tail1277z00_2839,
																								BgL_newtail1278z00_2842);
																							{	/* Ast/unit.scm 467 */
																								obj_t BgL_arg2494z00_2843;
																								obj_t BgL_arg2496z00_2844;

																								BgL_arg2494z00_2843 =
																									CDR(
																									((obj_t) BgL_ll1274z00_2837));
																								BgL_arg2496z00_2844 =
																									CDR(
																									((obj_t) BgL_ll1275z00_2838));
																								{
																									obj_t BgL_tail1277z00_6844;
																									obj_t BgL_ll1275z00_6843;
																									obj_t BgL_ll1274z00_6842;

																									BgL_ll1274z00_6842 =
																										BgL_arg2494z00_2843;
																									BgL_ll1275z00_6843 =
																										BgL_arg2496z00_2844;
																									BgL_tail1277z00_6844 =
																										BgL_newtail1278z00_2842;
																									BgL_tail1277z00_2839 =
																										BgL_tail1277z00_6844;
																									BgL_ll1275z00_2838 =
																										BgL_ll1275z00_6843;
																									BgL_ll1274z00_2837 =
																										BgL_ll1274z00_6842;
																									goto
																										BgL_zc3z04anonymousza32490ze3z87_2840;
																								}
																							}
																						}
																				}
																			}
																	}
																	{	/* Ast/unit.scm 471 */
																		obj_t BgL_arg2506z00_2856;

																		{	/* Ast/unit.scm 471 */
																			obj_t BgL_arg2508z00_2857;

																			{	/* Ast/unit.scm 471 */
																				obj_t BgL_arg2512z00_2858;
																				obj_t BgL_arg2515z00_2859;

																				{	/* Ast/unit.scm 471 */
																					obj_t BgL_arg2518z00_2860;

																					BgL_arg2518z00_2860 =
																						MAKE_YOUNG_PAIR(BgL_optz00_2823,
																						BNIL);
																					BgL_arg2512z00_2858 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 23)),
																						BgL_arg2518z00_2860);
																				}
																				{	/* Ast/unit.scm 472 */
																					obj_t BgL_arg2519z00_2861;
																					obj_t BgL_arg2520z00_2862;

																					{	/* Ast/unit.scm 472 */
																						obj_t BgL_l1286z00_2863;

																						{	/* Ast/unit.scm 486 */
																							long BgL_arg2571z00_2916;

																							BgL_arg2571z00_2916 =
																								(BgL_loptz00_2825 + ((long) 1));
																							BgL_l1286z00_2863 =
																								BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																								((int) (BgL_arg2571z00_2916),
																								BNIL);
																						}
																						if (NULLP(BgL_l1286z00_2863))
																							{	/* Ast/unit.scm 472 */
																								BgL_arg2519z00_2861 = BNIL;
																							}
																						else
																							{	/* Ast/unit.scm 472 */
																								obj_t BgL_head1288z00_2865;

																								{	/* Ast/unit.scm 472 */
																									obj_t BgL_res3570z00_4758;

																									BgL_res3570z00_4758 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1288z00_2865 =
																										BgL_res3570z00_4758;
																								}
																								{
																									obj_t BgL_l1286z00_2867;
																									obj_t BgL_tail1289z00_2868;

																									BgL_l1286z00_2867 =
																										BgL_l1286z00_2863;
																									BgL_tail1289z00_2868 =
																										BgL_head1288z00_2865;
																								BgL_zc3z04anonymousza32522ze3z87_2869:
																									if (NULLP
																										(BgL_l1286z00_2867))
																										{	/* Ast/unit.scm 472 */
																											BgL_arg2519z00_2861 =
																												CDR
																												(BgL_head1288z00_2865);
																										}
																									else
																										{	/* Ast/unit.scm 472 */
																											obj_t
																												BgL_newtail1290z00_2871;
																											{	/* Ast/unit.scm 472 */
																												obj_t
																													BgL_arg2526z00_2873;
																												{	/* Ast/unit.scm 472 */
																													obj_t BgL_iz00_2874;

																													BgL_iz00_2874 =
																														CAR(
																														((obj_t)
																															BgL_l1286z00_2867));
																													{	/* Ast/unit.scm 473 */
																														obj_t
																															BgL_arg2527z00_2875;
																														obj_t
																															BgL_arg2529z00_2876;
																														{	/* Ast/unit.scm 473 */
																															long
																																BgL_arg2530z00_2877;
																															BgL_arg2530z00_2877
																																=
																																(BgL_arityz00_2803
																																+
																																(long)
																																CINT
																																(BgL_iz00_2874));
																															BgL_arg2527z00_2875
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_arg2530z00_2877),
																																BNIL);
																														}
																														{	/* Ast/unit.scm 474 */
																															obj_t
																																BgL_arg2532z00_2878;
																															{	/* Ast/unit.scm 474 */
																																obj_t
																																	BgL_arg2533z00_2879;
																																{	/* Ast/unit.scm 474 */
																																	obj_t
																																		BgL_arg2535z00_2880;
																																	obj_t
																																		BgL_arg2536z00_2881;
																																	{	/* Ast/unit.scm 474 */
																																		obj_t
																																			BgL_arg2538z00_2882;
																																		obj_t
																																			BgL_arg2539z00_2883;
																																		{	/* Ast/unit.scm 474 */
																																			obj_t
																																				BgL_ll1280z00_2884;
																																			obj_t
																																				BgL_ll1281z00_2885;
																																			BgL_ll1280z00_2884
																																				=
																																				BGl_takez00zz__r4_pairs_and_lists_6_3z00
																																				(BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																																				(BgL_formsz00_2826,
																																					BgL_arityz00_2803),
																																				(long)
																																				CINT
																																				(BgL_iz00_2874));
																																			{	/* Ast/unit.scm 477 */
																																				obj_t
																																					BgL_list2559z00_2906;
																																				BgL_list2559z00_2906
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BINT
																																					(BgL_arityz00_2803),
																																					BNIL);
																																				BgL_ll1281z00_2885
																																					=
																																					BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																																					(CINT
																																					(BgL_iz00_2874),
																																					BgL_list2559z00_2906);
																																			}
																																			if (NULLP
																																				(BgL_ll1280z00_2884))
																																				{	/* Ast/unit.scm 474 */
																																					BgL_arg2538z00_2882
																																						=
																																						BNIL;
																																				}
																																			else
																																				{	/* Ast/unit.scm 474 */
																																					obj_t
																																						BgL_head1282z00_2887;
																																					{	/* Ast/unit.scm 474 */
																																						obj_t
																																							BgL_res3574z00_4766;
																																						BgL_res3574z00_4766
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_head1282z00_2887
																																							=
																																							BgL_res3574z00_4766;
																																					}
																																					{
																																						obj_t
																																							BgL_ll1280z00_2889;
																																						obj_t
																																							BgL_ll1281z00_2890;
																																						obj_t
																																							BgL_tail1283z00_2891;
																																						BgL_ll1280z00_2889
																																							=
																																							BgL_ll1280z00_2884;
																																						BgL_ll1281z00_2890
																																							=
																																							BgL_ll1281z00_2885;
																																						BgL_tail1283z00_2891
																																							=
																																							BgL_head1282z00_2887;
																																					BgL_zc3z04anonymousza32541ze3z87_2892:
																																						if (NULLP(BgL_ll1280z00_2889))
																																							{	/* Ast/unit.scm 474 */
																																								BgL_arg2538z00_2882
																																									=
																																									CDR
																																									(BgL_head1282z00_2887);
																																							}
																																						else
																																							{	/* Ast/unit.scm 474 */
																																								obj_t
																																									BgL_newtail1284z00_2894;
																																								{	/* Ast/unit.scm 474 */
																																									obj_t
																																										BgL_arg2548z00_2897;
																																									{	/* Ast/unit.scm 474 */
																																										obj_t
																																											BgL_vz00_2898;
																																										obj_t
																																											BgL_jz00_2899;
																																										BgL_vz00_2898
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_ll1280z00_2889));
																																										BgL_jz00_2899
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_ll1281z00_2890));
																																										{	/* Ast/unit.scm 475 */
																																											obj_t
																																												BgL_arg2552z00_2900;
																																											{	/* Ast/unit.scm 475 */
																																												obj_t
																																													BgL_arg2553z00_2901;
																																												{	/* Ast/unit.scm 475 */
																																													obj_t
																																														BgL_arg2554z00_2902;
																																													{	/* Ast/unit.scm 475 */
																																														obj_t
																																															BgL_arg2556z00_2903;
																																														BgL_arg2556z00_2903
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_jz00_2899,
																																															BNIL);
																																														BgL_arg2554z00_2902
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_optz00_2823,
																																															BgL_arg2556z00_2903);
																																													}
																																													BgL_arg2553z00_2901
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CNST_TABLE_REF
																																														(((long) 22)), BgL_arg2554z00_2902);
																																												}
																																												BgL_arg2552z00_2900
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg2553z00_2901,
																																													BNIL);
																																											}
																																											BgL_arg2548z00_2897
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_vz00_2898,
																																												BgL_arg2552z00_2900);
																																									}}
																																									{	/* Ast/unit.scm 474 */
																																										obj_t
																																											BgL_res3576z00_4771;
																																										BgL_res3576z00_4771
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg2548z00_2897,
																																											BNIL);
																																										BgL_newtail1284z00_2894
																																											=
																																											BgL_res3576z00_4771;
																																								}}
																																								SET_CDR
																																									(BgL_tail1283z00_2891,
																																									BgL_newtail1284z00_2894);
																																								{	/* Ast/unit.scm 474 */
																																									obj_t
																																										BgL_arg2544z00_2895;
																																									obj_t
																																										BgL_arg2545z00_2896;
																																									BgL_arg2544z00_2895
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_ll1280z00_2889));
																																									BgL_arg2545z00_2896
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_ll1281z00_2890));
																																									{
																																										obj_t
																																											BgL_tail1283z00_6894;
																																										obj_t
																																											BgL_ll1281z00_6893;
																																										obj_t
																																											BgL_ll1280z00_6892;
																																										BgL_ll1280z00_6892
																																											=
																																											BgL_arg2544z00_2895;
																																										BgL_ll1281z00_6893
																																											=
																																											BgL_arg2545z00_2896;
																																										BgL_tail1283z00_6894
																																											=
																																											BgL_newtail1284z00_2894;
																																										BgL_tail1283z00_2891
																																											=
																																											BgL_tail1283z00_6894;
																																										BgL_ll1281z00_2890
																																											=
																																											BgL_ll1281z00_6893;
																																										BgL_ll1280z00_2889
																																											=
																																											BgL_ll1280z00_6892;
																																										goto
																																											BgL_zc3z04anonymousza32541ze3z87_2892;
																																									}
																																								}
																																							}
																																					}
																																				}
																																		}
																																		{	/* Ast/unit.scm 474 */
																																			obj_t
																																				BgL_auxz00_6895;
																																			if ((
																																					(long)
																																					CINT
																																					(BgL_iz00_2874)
																																					<=
																																					BgL_loptz00_2825))
																																				{	/* Ast/unit.scm 478 */
																																					BgL_auxz00_6895
																																						=
																																						BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																																						(BgL_optionalsz00_62,
																																						(long)
																																						CINT
																																						(BgL_iz00_2874));
																																				}
																																			else
																																				{	/* Ast/unit.scm 478 */
																																					BgL_auxz00_6895
																																						=
																																						BNIL;
																																				}
																																			BgL_arg2539z00_2883
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_auxz00_6895,
																																				BNIL);
																																		}
																																		BgL_arg2535z00_2880
																																			=
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg2538z00_2882,
																																			BgL_arg2539z00_2883);
																																	}
																																	{	/* Ast/unit.scm 483 */
																																		obj_t
																																			BgL_arg2564z00_2909;
																																		{	/* Ast/unit.scm 483 */
																																			obj_t
																																				BgL_arg2565z00_2910;
																																			BgL_arg2565z00_2910
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BGl_takez00zz__r4_pairs_and_lists_6_3z00
																																				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_gloz00_61))))->BgL_valuez00))))->BgL_argszd2namezd2), BgL_arityz00_2803), BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_optsz00_2827, BNIL));
																																			BgL_arg2564z00_2909
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_gloz00_61,
																																				BgL_arg2565z00_2910);
																																		}
																																		BgL_arg2536z00_2881
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2564z00_2909,
																																			BNIL);
																																	}
																																	BgL_arg2533z00_2879
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2535z00_2880,
																																		BgL_arg2536z00_2881);
																																}
																																BgL_arg2532z00_2878
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 24)),
																																	BgL_arg2533z00_2879);
																															}
																															BgL_arg2529z00_2876
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2532z00_2878,
																																BNIL);
																														}
																														BgL_arg2526z00_2873
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2527z00_2875,
																															BgL_arg2529z00_2876);
																												}}
																												{	/* Ast/unit.scm 472 */
																													obj_t
																														BgL_res3578z00_4780;
																													BgL_res3578z00_4780 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2526z00_2873,
																														BNIL);
																													BgL_newtail1290z00_2871
																														=
																														BgL_res3578z00_4780;
																											}}
																											SET_CDR
																												(BgL_tail1289z00_2868,
																												BgL_newtail1290z00_2871);
																											{	/* Ast/unit.scm 472 */
																												obj_t
																													BgL_arg2525z00_2872;
																												BgL_arg2525z00_2872 =
																													CDR(((obj_t)
																														BgL_l1286z00_2867));
																												{
																													obj_t
																														BgL_tail1289z00_6923;
																													obj_t
																														BgL_l1286z00_6922;
																													BgL_l1286z00_6922 =
																														BgL_arg2525z00_2872;
																													BgL_tail1289z00_6923 =
																														BgL_newtail1290z00_2871;
																													BgL_tail1289z00_2868 =
																														BgL_tail1289z00_6923;
																													BgL_l1286z00_2867 =
																														BgL_l1286z00_6922;
																													goto
																														BgL_zc3z04anonymousza32522ze3z87_2869;
																												}
																											}
																										}
																								}
																							}
																					}
																					{	/* Ast/unit.scm 488 */
																						obj_t BgL_arg2573z00_2918;

																						{	/* Ast/unit.scm 488 */
																							obj_t BgL_arg2574z00_2919;

																							{	/* Ast/unit.scm 488 */
																								obj_t BgL_arg2575z00_2920;

																								if (CBOOL
																									(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																									{	/* Ast/unit.scm 488 */
																										BgL_arg2575z00_2920 =
																											BUNSPEC;
																									}
																								else
																									{	/* Ast/unit.scm 490 */
																										obj_t BgL_arg2577z00_2921;
																										obj_t BgL_arg2578z00_2922;

																										{	/* Ast/unit.scm 490 */
																											obj_t BgL_arg2579z00_2923;

																											{	/* Ast/unit.scm 490 */
																												obj_t
																													BgL_arg2580z00_2924;
																												BgL_arg2580z00_2924 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 25)),
																													BNIL);
																												BgL_arg2579z00_2923 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 26)),
																													BgL_arg2580z00_2924);
																											}
																											BgL_arg2577z00_2921 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														0)),
																												BgL_arg2579z00_2923);
																										}
																										{	/* Ast/unit.scm 491 */
																											obj_t BgL_arg2581z00_2925;
																											obj_t BgL_arg2583z00_2926;

																											{	/* Ast/unit.scm 491 */
																												obj_t
																													BgL_arg2584z00_2927;
																												BgL_arg2584z00_2927 =
																													MAKE_YOUNG_PAIR
																													(BgL_idz00_63, BNIL);
																												BgL_arg2581z00_2925 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 27)),
																													BgL_arg2584z00_2927);
																											}
																											{	/* Ast/unit.scm 494 */
																												obj_t
																													BgL_arg2585z00_2928;
																												obj_t
																													BgL_arg2586z00_2929;
																												{	/* Ast/unit.scm 494 */
																													obj_t
																														BgL_arg2587z00_2930;
																													obj_t
																														BgL_arg2588z00_2931;
																													{	/* Ast/unit.scm 494 */

																														BgL_arg2587z00_2930
																															=
																															BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																															(BgL_arityz00_2803,
																															((long) 10));
																													}
																													{	/* Ast/unit.scm 495 */

																														BgL_arg2588z00_2931
																															=
																															BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																															((long)
																															CINT
																															(BGl_2zb2zb2zz__r4_numbers_6_5z00
																																(BINT
																																	(BgL_arityz00_2803),
																																	BINT
																																	(BgL_loptz00_2825))),
																															((long) 10));
																													}
																													{	/* Ast/unit.scm 492 */
																														obj_t
																															BgL_list2589z00_2932;
																														{	/* Ast/unit.scm 492 */
																															obj_t
																																BgL_arg2591z00_2933;
																															{	/* Ast/unit.scm 492 */
																																obj_t
																																	BgL_arg2592z00_2934;
																																{	/* Ast/unit.scm 492 */
																																	obj_t
																																		BgL_arg2594z00_2935;
																																	{	/* Ast/unit.scm 492 */
																																		obj_t
																																			BgL_arg2595z00_2936;
																																		BgL_arg2595z00_2936
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string3678z00zzast_unitz00,
																																			BNIL);
																																		BgL_arg2594z00_2935
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2588z00_2931,
																																			BgL_arg2595z00_2936);
																																	}
																																	BgL_arg2592z00_2934
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string3679z00zzast_unitz00,
																																		BgL_arg2594z00_2935);
																																}
																																BgL_arg2591z00_2933
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2587z00_2930,
																																	BgL_arg2592z00_2934);
																															}
																															BgL_list2589z00_2932
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string3680z00zzast_unitz00,
																																BgL_arg2591z00_2933);
																														}
																														BgL_arg2585z00_2928
																															=
																															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																															(BgL_list2589z00_2932);
																												}}
																												{	/* Ast/unit.scm 497 */
																													obj_t
																														BgL_arg2597z00_2942;
																													{	/* Ast/unit.scm 497 */
																														obj_t
																															BgL_arg2598z00_2943;
																														BgL_arg2598z00_2943
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_optz00_2823,
																															BNIL);
																														BgL_arg2597z00_2942
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 23)),
																															BgL_arg2598z00_2943);
																													}
																													BgL_arg2586z00_2929 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2597z00_2942,
																														BNIL);
																												}
																												BgL_arg2583z00_2926 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2585z00_2928,
																													BgL_arg2586z00_2929);
																											}
																											BgL_arg2578z00_2922 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2581z00_2925,
																												BgL_arg2583z00_2926);
																										}
																										BgL_arg2575z00_2920 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2577z00_2921,
																											BgL_arg2578z00_2922);
																									}
																								BgL_arg2574z00_2919 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2575z00_2920, BNIL);
																							}
																							BgL_arg2573z00_2918 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 28)),
																								BgL_arg2574z00_2919);
																						}
																						BgL_arg2520z00_2862 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2573z00_2918, BNIL);
																					}
																					BgL_arg2515z00_2859 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2519z00_2861,
																						BgL_arg2520z00_2862);
																				}
																				BgL_arg2508z00_2857 =
																					MAKE_YOUNG_PAIR(BgL_arg2512z00_2858,
																					BgL_arg2515z00_2859);
																			}
																			BgL_arg2506z00_2856 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						29)), BgL_arg2508z00_2857);
																		}
																		BgL_arg2488z00_2831 =
																			MAKE_YOUNG_PAIR(BgL_arg2506z00_2856,
																			BNIL);
																	}
																	BgL_arg2486z00_2829 =
																		MAKE_YOUNG_PAIR(BgL_arg2487z00_2830,
																		BgL_arg2488z00_2831);
																}
																BgL_auxz00_6759 =
																	MAKE_YOUNG_PAIR(BgL_arg2484z00_2828,
																	BgL_arg2486z00_2829);
														}}
														BgL_auxz00_6758 =
															BGl_comptimezd2expandzd2zzexpand_epsz00
															(BgL_auxz00_6759);
													}
													BgL_arg2470z00_2813 =
														BGl_compilezd2expandzd2zzexpand_epsz00
														(BgL_auxz00_6758);
												}
												BgL_gz00_2810 =
													BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
													(BgL_idz00_2805, BgL_arg2467z00_2811,
													BgL_arg2469z00_2812, BgL_modulez00_64,
													BgL_classz00_68, BgL_srcz00_67,
													CNST_TABLE_REF(((long) 33)), BgL_arg2470z00_2813);
											}
											{	/* Ast/unit.scm 503 */

												((((BgL_globalz00_bglt) COBJECT(BgL_gz00_2810))->
														BgL_evaluablezf3zf3) =
													((bool_t) ((bool_t) 0)), BUNSPEC);
												{	/* Ast/unit.scm 508 */
													BgL_typez00_bglt BgL_vz00_4796;

													BgL_vz00_4796 =
														((BgL_typez00_bglt)
														BGl_za2objza2z00zztype_cachez00);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_gz00_2810)))->BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_4796), BUNSPEC);
												}
												return BgL_gz00_2810;
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



/* make-sfun-key-definition */
	obj_t BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00(obj_t BgL_keysz00_70,
		obj_t BgL_idz00_71, obj_t BgL_modulez00_72, obj_t BgL_argsz00_73,
		obj_t BgL_bodyz00_74, obj_t BgL_srcz00_75, obj_t BgL_classz00_76,
		obj_t BgL_locz00_77)
	{
		{	/* Ast/unit.scm 514 */
			{	/* Ast/unit.scm 515 */
				obj_t BgL_localsz00_2978;

				{	/* Ast/unit.scm 515 */
					obj_t BgL_arg2620z00_2983;
					obj_t BgL_arg2621z00_2984;

					{	/* Ast/unit.scm 515 */
						obj_t BgL_l1291z00_2985;

						BgL_l1291z00_2985 =
							BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_73);
						if (NULLP(BgL_l1291z00_2985))
							{	/* Ast/unit.scm 515 */
								BgL_arg2620z00_2983 = BNIL;
							}
						else
							{	/* Ast/unit.scm 515 */
								obj_t BgL_head1293z00_2987;

								{	/* Ast/unit.scm 515 */
									obj_t BgL_res3585z00_4798;

									BgL_res3585z00_4798 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1293z00_2987 = BgL_res3585z00_4798;
								}
								{
									obj_t BgL_l1291z00_2989;
									obj_t BgL_tail1294z00_2990;

									BgL_l1291z00_2989 = BgL_l1291z00_2985;
									BgL_tail1294z00_2990 = BgL_head1293z00_2987;
								BgL_zc3z04anonymousza32623ze3z87_2991:
									if (NULLP(BgL_l1291z00_2989))
										{	/* Ast/unit.scm 515 */
											BgL_arg2620z00_2983 = CDR(BgL_head1293z00_2987);
										}
									else
										{	/* Ast/unit.scm 515 */
											obj_t BgL_newtail1295z00_2993;

											{	/* Ast/unit.scm 515 */
												BgL_localz00_bglt BgL_arg2626z00_2995;

												{	/* Ast/unit.scm 515 */
													obj_t BgL_az00_2996;

													BgL_az00_2996 = CAR(((obj_t) BgL_l1291z00_2989));
													{	/* Ast/unit.scm 516 */
														obj_t BgL_pidz00_2997;

														BgL_pidz00_2997 =
															BGl_checkzd2idzd2zzast_identz00
															(BGl_parsezd2idzd2zzast_identz00(BgL_az00_2996,
																BgL_locz00_77), BgL_srcz00_75);
														{	/* Ast/unit.scm 516 */
															obj_t BgL_idz00_2998;

															BgL_idz00_2998 = CAR(BgL_pidz00_2997);
															{	/* Ast/unit.scm 517 */
																obj_t BgL_typez00_2999;

																BgL_typez00_2999 = CDR(BgL_pidz00_2997);
																{	/* Ast/unit.scm 518 */

																	if (BGl_userzd2symbolzf3z21zzast_identz00
																		(BgL_idz00_2998))
																		{	/* Ast/unit.scm 519 */
																			BgL_arg2626z00_2995 =
																				BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																				(BgL_idz00_2998,
																				((BgL_typez00_bglt) BgL_typez00_2999));
																		}
																	else
																		{	/* Ast/unit.scm 519 */
																			BgL_arg2626z00_2995 =
																				BGl_makezd2localzd2svarz00zzast_localz00
																				(BgL_idz00_2998,
																				((BgL_typez00_bglt) BgL_typez00_2999));
																		}
																}
															}
														}
													}
												}
												{	/* Ast/unit.scm 515 */
													obj_t BgL_res3587z00_4804;

													BgL_res3587z00_4804 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg2626z00_2995), BNIL);
													BgL_newtail1295z00_2993 = BgL_res3587z00_4804;
												}
											}
											SET_CDR(BgL_tail1294z00_2990, BgL_newtail1295z00_2993);
											{	/* Ast/unit.scm 515 */
												obj_t BgL_arg2625z00_2994;

												BgL_arg2625z00_2994 = CDR(((obj_t) BgL_l1291z00_2989));
												{
													obj_t BgL_tail1294z00_6998;
													obj_t BgL_l1291z00_6997;

													BgL_l1291z00_6997 = BgL_arg2625z00_2994;
													BgL_tail1294z00_6998 = BgL_newtail1295z00_2993;
													BgL_tail1294z00_2990 = BgL_tail1294z00_6998;
													BgL_l1291z00_2989 = BgL_l1291z00_6997;
													goto BgL_zc3z04anonymousza32623ze3z87_2991;
												}
											}
										}
								}
							}
					}
					{	/* Ast/unit.scm 523 */
						obj_t BgL_head1298z00_3005;

						{	/* Ast/unit.scm 523 */
							obj_t BgL_res3589z00_4808;

							BgL_res3589z00_4808 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1298z00_3005 = BgL_res3589z00_4808;
						}
						{
							obj_t BgL_l1296z00_3007;
							obj_t BgL_tail1299z00_3008;

							BgL_l1296z00_3007 = BgL_keysz00_70;
							BgL_tail1299z00_3008 = BgL_head1298z00_3005;
						BgL_zc3z04anonymousza32630ze3z87_3009:
							if (NULLP(BgL_l1296z00_3007))
								{	/* Ast/unit.scm 523 */
									BgL_arg2621z00_2984 = CDR(BgL_head1298z00_3005);
								}
							else
								{	/* Ast/unit.scm 523 */
									obj_t BgL_newtail1300z00_3011;

									{	/* Ast/unit.scm 523 */
										BgL_localz00_bglt BgL_arg2635z00_3013;

										{	/* Ast/unit.scm 523 */
											obj_t BgL_oz00_3014;

											BgL_oz00_3014 = CAR(((obj_t) BgL_l1296z00_3007));
											{	/* Ast/unit.scm 524 */
												obj_t BgL_az00_3015;

												BgL_az00_3015 = CAR(((obj_t) BgL_oz00_3014));
												{	/* Ast/unit.scm 524 */
													obj_t BgL_pidz00_3016;

													BgL_pidz00_3016 =
														BGl_checkzd2idzd2zzast_identz00
														(BGl_parsezd2idzd2zzast_identz00(BgL_az00_3015,
															BgL_locz00_77), BgL_srcz00_75);
													{	/* Ast/unit.scm 525 */
														obj_t BgL_idz00_3017;

														BgL_idz00_3017 = CAR(BgL_pidz00_3016);
														{	/* Ast/unit.scm 526 */
															obj_t BgL_typez00_3018;

															BgL_typez00_3018 = CDR(BgL_pidz00_3016);
															{	/* Ast/unit.scm 527 */

																BgL_arg2635z00_3013 =
																	BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																	(BgL_idz00_3017,
																	((BgL_typez00_bglt) BgL_typez00_3018));
															}
														}
													}
												}
											}
										}
										{	/* Ast/unit.scm 523 */
											obj_t BgL_res3591z00_4815;

											BgL_res3591z00_4815 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg2635z00_3013), BNIL);
											BgL_newtail1300z00_3011 = BgL_res3591z00_4815;
										}
									}
									SET_CDR(BgL_tail1299z00_3008, BgL_newtail1300z00_3011);
									{	/* Ast/unit.scm 523 */
										obj_t BgL_arg2633z00_3012;

										BgL_arg2633z00_3012 = CDR(((obj_t) BgL_l1296z00_3007));
										{
											obj_t BgL_tail1299z00_7019;
											obj_t BgL_l1296z00_7018;

											BgL_l1296z00_7018 = BgL_arg2633z00_3012;
											BgL_tail1299z00_7019 = BgL_newtail1300z00_3011;
											BgL_tail1299z00_3008 = BgL_tail1299z00_7019;
											BgL_l1296z00_3007 = BgL_l1296z00_7018;
											goto BgL_zc3z04anonymousza32630ze3z87_3009;
										}
									}
								}
						}
					}
					BgL_localsz00_2978 =
						BGl_appendzd221011zd2zzast_unitz00(BgL_arg2620z00_2983,
						BgL_arg2621z00_2984);
				}
				{	/* Ast/unit.scm 515 */
					BgL_globalz00_bglt BgL_gloz00_2979;

					BgL_gloz00_2979 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_71,
						BgL_argsz00_73, BgL_localsz00_2978, BgL_modulez00_72,
						BgL_classz00_76, BgL_srcz00_75, CNST_TABLE_REF(((long) 8)),
						BgL_bodyz00_74);
					{	/* Ast/unit.scm 530 */
						BgL_globalz00_bglt BgL_cloz00_2980;

						BgL_cloz00_2980 =
							BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(
							((obj_t) BgL_gloz00_2979), BgL_keysz00_70, BgL_idz00_71,
							BgL_modulez00_72, BgL_argsz00_73, BgL_bodyz00_74, BgL_srcz00_75,
							BgL_classz00_76, BgL_locz00_77);
						{	/* Ast/unit.scm 531 */

							{	/* Ast/unit.scm 532 */
								obj_t BgL_list2616z00_2981;

								{	/* Ast/unit.scm 532 */
									obj_t BgL_arg2617z00_2982;

									BgL_arg2617z00_2982 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_cloz00_2980), BNIL);
									BgL_list2616z00_2981 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_gloz00_2979), BgL_arg2617z00_2982);
								}
								return BgL_list2616z00_2981;
							}
						}
					}
				}
			}
		}

	}



/* make-sfun-key-closure */
	BgL_globalz00_bglt BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(obj_t
		BgL_gloz00_78, obj_t BgL_keysz00_79, obj_t BgL_idz00_80,
		obj_t BgL_modulez00_81, obj_t BgL_argsz00_82, obj_t BgL_bodyz00_83,
		obj_t BgL_srcz00_84, obj_t BgL_classz00_85, obj_t BgL_locz00_86)
	{
		{	/* Ast/unit.scm 539 */
			{	/* Ast/unit.scm 540 */
				long BgL_arityz00_3021;
				obj_t BgL_ioptz00_3022;
				obj_t BgL_ienvz00_3023;
				long BgL_loptz00_3024;
				obj_t BgL_lz00_3025;
				obj_t BgL_searchz00_3026;
				obj_t BgL_checkz00_3027;
				obj_t BgL_varz00_3028;

				BgL_arityz00_3021 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gloz00_78))))->
										BgL_valuez00)))))->BgL_arityz00);
				BgL_ioptz00_3022 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 31)));
				BgL_ienvz00_3023 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 32)));
				BgL_loptz00_3024 = bgl_list_length(BgL_keysz00_79);
				BgL_lz00_3025 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 34)));
				BgL_searchz00_3026 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 35)));
				BgL_checkz00_3027 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 36)));
				BgL_varz00_3028 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 37)));
				{
					obj_t BgL_keysz00_3047;

					{	/* Ast/unit.scm 617 */
						obj_t BgL_idz00_3031;

						{	/* Ast/unit.scm 617 */
							obj_t BgL_arg2649z00_3044;

							{	/* Ast/unit.scm 617 */
								obj_t BgL_arg2650z00_3045;
								obj_t BgL_arg2651z00_3046;

								{	/* Ast/unit.scm 617 */
									obj_t BgL_res3616z00_4882;

									{	/* Ast/unit.scm 617 */
										obj_t BgL_symbolz00_4880;

										BgL_symbolz00_4880 = CNST_TABLE_REF(((long) 30));
										{	/* Ast/unit.scm 617 */
											obj_t BgL_arg1466z00_4881;

											BgL_arg1466z00_4881 =
												SYMBOL_TO_STRING(BgL_symbolz00_4880);
											BgL_res3616z00_4882 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_4881);
									}}
									BgL_arg2650z00_3045 = BgL_res3616z00_4882;
								}
								{	/* Ast/unit.scm 617 */
									obj_t BgL_res3617z00_4885;

									{	/* Ast/unit.scm 617 */
										obj_t BgL_arg1466z00_4884;

										BgL_arg1466z00_4884 =
											SYMBOL_TO_STRING(((obj_t) BgL_idz00_80));
										BgL_res3617z00_4885 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_4884);
									}
									BgL_arg2651z00_3046 = BgL_res3617z00_4885;
								}
								BgL_arg2649z00_3044 =
									string_append(BgL_arg2650z00_3045, BgL_arg2651z00_3046);
							}
							BgL_idz00_3031 = bstring_to_symbol(BgL_arg2649z00_3044);
						}
						{	/* Ast/unit.scm 617 */
							BgL_localz00_bglt BgL_optz00_3032;

							BgL_optz00_3032 =
								BGl_makezd2localzd2svarz00zzast_localz00(BgL_ioptz00_3022,
								((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00));
							{	/* Ast/unit.scm 618 */
								BgL_localz00_bglt BgL_envz00_3033;

								BgL_envz00_3033 =
									BGl_makezd2localzd2svarz00zzast_localz00(BgL_ienvz00_3023,
									((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
								{	/* Ast/unit.scm 619 */
									BgL_globalz00_bglt BgL_gz00_3034;

									{	/* Ast/unit.scm 620 */
										obj_t BgL_arg2637z00_3035;
										obj_t BgL_arg2638z00_3036;
										obj_t BgL_arg2640z00_3037;

										{	/* Ast/unit.scm 620 */
											obj_t BgL_list2641z00_3038;

											{	/* Ast/unit.scm 620 */
												obj_t BgL_arg2643z00_3039;

												BgL_arg2643z00_3039 =
													MAKE_YOUNG_PAIR(BgL_ioptz00_3022, BNIL);
												BgL_list2641z00_3038 =
													MAKE_YOUNG_PAIR(BgL_ienvz00_3023,
													BgL_arg2643z00_3039);
											}
											BgL_arg2637z00_3035 = BgL_list2641z00_3038;
										}
										{	/* Ast/unit.scm 620 */
											obj_t BgL_list2644z00_3040;

											{	/* Ast/unit.scm 620 */
												obj_t BgL_arg2645z00_3041;

												BgL_arg2645z00_3041 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_optz00_3032), BNIL);
												BgL_list2644z00_3040 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_envz00_3033), BgL_arg2645z00_3041);
											}
											BgL_arg2638z00_3036 = BgL_list2644z00_3040;
										}
										{	/* Ast/unit.scm 622 */
											obj_t BgL_auxz00_7066;

											{	/* Ast/unit.scm 623 */
												obj_t BgL_auxz00_7067;

												{	/* Ast/unit.scm 554 */
													obj_t BgL_arg2661z00_3065;
													obj_t BgL_arg2662z00_3066;

													BgL_arg2661z00_3065 = BGl_letzd2symzd2zzast_letz00();
													{	/* Ast/unit.scm 554 */
														obj_t BgL_arg2663z00_3067;
														obj_t BgL_arg2664z00_3068;

														{	/* Ast/unit.scm 554 */
															obj_t BgL_arg2665z00_3069;

															{	/* Ast/unit.scm 554 */
																obj_t BgL_arg2666z00_3070;

																{	/* Ast/unit.scm 554 */
																	obj_t BgL_arg2667z00_3071;

																	{	/* Ast/unit.scm 554 */
																		obj_t BgL_arg2669z00_3072;

																		BgL_arg2669z00_3072 =
																			MAKE_YOUNG_PAIR(BgL_ioptz00_3022, BNIL);
																		BgL_arg2667z00_3071 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					38)), BgL_arg2669z00_3072);
																	}
																	BgL_arg2666z00_3070 =
																		MAKE_YOUNG_PAIR(BgL_arg2667z00_3071, BNIL);
																}
																BgL_arg2665z00_3069 =
																	MAKE_YOUNG_PAIR(BgL_lz00_3025,
																	BgL_arg2666z00_3070);
															}
															BgL_arg2663z00_3067 =
																MAKE_YOUNG_PAIR(BgL_arg2665z00_3069, BNIL);
														}
														{	/* Ast/unit.scm 555 */
															obj_t BgL_arg2670z00_3073;

															{	/* Ast/unit.scm 555 */
																obj_t BgL_arg2671z00_3074;

																{	/* Ast/unit.scm 555 */
																	obj_t BgL_arg2673z00_3075;
																	obj_t BgL_arg2675z00_3076;

																	{	/* Ast/unit.scm 555 */
																		obj_t BgL_arg2676z00_3077;

																		{	/* Ast/unit.scm 555 */
																			obj_t BgL_arg2677z00_3078;

																			{	/* Ast/unit.scm 555 */
																				obj_t BgL_arg2678z00_3079;
																				obj_t BgL_arg2679z00_3080;

																				{	/* Ast/unit.scm 555 */
																					obj_t BgL_arg2680z00_3081;

																					BgL_arg2680z00_3081 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 39)), BNIL);
																					BgL_arg2678z00_3079 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 40)),
																						BgL_arg2680z00_3081);
																				}
																				{	/* Ast/unit.scm 556 */
																					obj_t BgL_arg2681z00_3082;

																					{	/* Ast/unit.scm 556 */
																						obj_t BgL_arg2682z00_3083;

																						{	/* Ast/unit.scm 556 */
																							obj_t BgL_arg2683z00_3084;
																							obj_t BgL_arg2684z00_3085;

																							{	/* Ast/unit.scm 556 */
																								obj_t BgL_arg2686z00_3086;

																								{	/* Ast/unit.scm 556 */
																									obj_t BgL_arg2687z00_3087;

																									BgL_arg2687z00_3087 =
																										MAKE_YOUNG_PAIR
																										(BgL_lz00_3025, BNIL);
																									BgL_arg2686z00_3086 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												39)),
																										BgL_arg2687z00_3087);
																								}
																								BgL_arg2683z00_3084 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 41)),
																									BgL_arg2686z00_3086);
																							}
																							{	/* Ast/unit.scm 558 */
																								obj_t BgL_arg2688z00_3088;

																								{	/* Ast/unit.scm 558 */
																									obj_t BgL_arg2689z00_3089;

																									{	/* Ast/unit.scm 558 */
																										bool_t BgL_test3905z00_7084;

																										if (CBOOL
																											(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																											{	/* Ast/unit.scm 559 */
																												bool_t
																													BgL__ortest_1121z00_3176;
																												if ((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt) BgL_gloz00_78)))->BgL_evaluablezf3zf3))
																													{	/* Ast/unit.scm 559 */
																														BgL__ortest_1121z00_3176
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Ast/unit.scm 559 */
																														BgL__ortest_1121z00_3176
																															= ((bool_t) 1);
																													}
																												if (BgL__ortest_1121z00_3176)
																													{	/* Ast/unit.scm 559 */
																														BgL_test3905z00_7084
																															=
																															BgL__ortest_1121z00_3176;
																													}
																												else
																													{	/* Ast/unit.scm 559 */
																														BgL_test3905z00_7084
																															=
																															CBOOL
																															(BGl_za2unsafezd2evalza2zd2zzengine_paramz00);
																													}
																											}
																										else
																											{	/* Ast/unit.scm 558 */
																												BgL_test3905z00_7084 =
																													((bool_t) 0);
																											}
																										if (BgL_test3905z00_7084)
																											{	/* Ast/unit.scm 561 */
																												obj_t
																													BgL_arg2692z00_3093;
																												obj_t
																													BgL_arg2693z00_3094;
																												BgL_arg2692z00_3093 =
																													BGl_letzd2symzd2zzast_letz00
																													();
																												{	/* Ast/unit.scm 561 */
																													obj_t
																														BgL_arg2694z00_3095;
																													obj_t
																														BgL_arg2695z00_3096;
																													{	/* Ast/unit.scm 561 */
																														obj_t
																															BgL_arg2696z00_3097;
																														{	/* Ast/unit.scm 561 */
																															obj_t
																																BgL_arg2698z00_3098;
																															{	/* Ast/unit.scm 561 */
																																obj_t
																																	BgL_arg2699z00_3099;
																																{	/* Ast/unit.scm 561 */
																																	obj_t
																																		BgL_arg2700z00_3100;
																																	{	/* Ast/unit.scm 561 */
																																		obj_t
																																			BgL_arg2702z00_3101;
																																		BgL_arg2702z00_3101
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					39)),
																																			BNIL);
																																		BgL_arg2700z00_3100
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_ioptz00_3022,
																																			BgL_arg2702z00_3101);
																																	}
																																	BgL_arg2699z00_3099
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				22)),
																																		BgL_arg2700z00_3100);
																																}
																																BgL_arg2698z00_3098
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2699z00_3099,
																																	BNIL);
																															}
																															BgL_arg2696z00_3097
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 42)),
																																BgL_arg2698z00_3098);
																														}
																														BgL_arg2694z00_3095
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2696z00_3097,
																															BNIL);
																													}
																													{	/* Ast/unit.scm 562 */
																														obj_t
																															BgL_arg2703z00_3102;
																														{	/* Ast/unit.scm 562 */
																															obj_t
																																BgL_arg2704z00_3103;
																															{	/* Ast/unit.scm 562 */
																																obj_t
																																	BgL_arg2705z00_3104;
																																obj_t
																																	BgL_arg2706z00_3105;
																																{	/* Ast/unit.scm 562 */
																																	obj_t
																																		BgL_arg2707z00_3106;
																																	{	/* Ast/unit.scm 562 */
																																		obj_t
																																			BgL_arg2708z00_3107;
																																		BgL_arg2708z00_3107
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					40)),
																																			BNIL);
																																		BgL_arg2707z00_3106
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					42)),
																																			BgL_arg2708z00_3107);
																																	}
																																	BgL_arg2705z00_3104
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				43)),
																																		BgL_arg2707z00_3106);
																																}
																																{	/* Ast/unit.scm 563 */
																																	obj_t
																																		BgL_arg2709z00_3108;
																																	obj_t
																																		BgL_arg2710z00_3109;
																																	{	/* Ast/unit.scm 563 */
																																		obj_t
																																			BgL_arg2712z00_3110;
																																		{	/* Ast/unit.scm 563 */
																																			obj_t
																																				BgL_arg2713z00_3111;
																																			BgL_arg2713z00_3111
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BINT((
																																						(long)
																																						1)),
																																				BNIL);
																																			BgL_arg2712z00_3110
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						39)),
																																				BgL_arg2713z00_3111);
																																		}
																																		BgL_arg2709z00_3108
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					44)),
																																			BgL_arg2712z00_3110);
																																	}
																																	{	/* Ast/unit.scm 564 */
																																		obj_t
																																			BgL_arg2714z00_3112;
																																		{	/* Ast/unit.scm 564 */
																																			obj_t
																																				BgL_arg2715z00_3113;
																																			{	/* Ast/unit.scm 564 */
																																				obj_t
																																					BgL_arg2716z00_3114;
																																				{	/* Ast/unit.scm 564 */
																																					obj_t
																																						BgL_arg2717z00_3115;
																																					{	/* Ast/unit.scm 564 */
																																						obj_t
																																							BgL_arg2718z00_3116;
																																						{	/* Ast/unit.scm 564 */
																																							obj_t
																																								BgL_arg2720z00_3117;
																																							BgL_arg2720z00_3117
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BINT
																																								(((long) 2)), BNIL);
																																							BgL_arg2718z00_3116
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 39)), BgL_arg2720z00_3117);
																																						}
																																						BgL_arg2717z00_3115
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 44)), BgL_arg2718z00_3116);
																																					}
																																					BgL_arg2716z00_3114
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2717z00_3115,
																																						BNIL);
																																				}
																																				BgL_arg2715z00_3113
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 40)), BgL_arg2716z00_3114);
																																			}
																																			BgL_arg2714z00_3112
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_searchz00_3026,
																																				BgL_arg2715z00_3113);
																																		}
																																		BgL_arg2710z00_3109
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2714z00_3112,
																																			BNIL);
																																	}
																																	BgL_arg2706z00_3105
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2709z00_3108,
																																		BgL_arg2710z00_3109);
																																}
																																BgL_arg2704z00_3103
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2705z00_3104,
																																	BgL_arg2706z00_3105);
																															}
																															BgL_arg2703z00_3102
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 3)),
																																BgL_arg2704z00_3103);
																														}
																														BgL_arg2695z00_3096
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2703z00_3102,
																															BNIL);
																													}
																													BgL_arg2693z00_3094 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2694z00_3095,
																														BgL_arg2695z00_3096);
																												}
																												BgL_arg2689z00_3089 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2692z00_3093,
																													BgL_arg2693z00_3094);
																											}
																										else
																											{	/* Ast/unit.scm 565 */
																												obj_t
																													BgL_arg2722z00_3118;
																												{	/* Ast/unit.scm 565 */
																													obj_t
																														BgL_arg2723z00_3119;
																													obj_t
																														BgL_arg2724z00_3120;
																													{	/* Ast/unit.scm 565 */
																														obj_t
																															BgL_arg2725z00_3121;
																														{	/* Ast/unit.scm 565 */
																															obj_t
																																BgL_arg2727z00_3122;
																															{	/* Ast/unit.scm 565 */
																																obj_t
																																	BgL_arg2728z00_3123;
																																{	/* Ast/unit.scm 565 */
																																	obj_t
																																		BgL_arg2729z00_3124;
																																	{	/* Ast/unit.scm 565 */
																																		obj_t
																																			BgL_arg2730z00_3125;
																																		BgL_arg2730z00_3125
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BINT((
																																					(long)
																																					1)),
																																			BNIL);
																																		BgL_arg2729z00_3124
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_lz00_3025,
																																			BgL_arg2730z00_3125);
																																	}
																																	BgL_arg2728z00_3123
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				45)),
																																		BgL_arg2729z00_3124);
																																}
																																BgL_arg2727z00_3122
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2728z00_3123,
																																	BNIL);
																															}
																															BgL_arg2725z00_3121
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 39)),
																																BgL_arg2727z00_3122);
																														}
																														BgL_arg2723z00_3119
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 41)),
																															BgL_arg2725z00_3121);
																													}
																													{	/* Ast/unit.scm 566 */
																														obj_t
																															BgL_arg2731z00_3126;
																														obj_t
																															BgL_arg2732z00_3127;
																														{	/* Ast/unit.scm 566 */
																															obj_t
																																BgL_arg2734z00_3128;
																															obj_t
																																BgL_arg2739z00_3129;
																															{	/* Ast/unit.scm 566 */
																																obj_t
																																	BgL_arg2740z00_3130;
																																{	/* Ast/unit.scm 566 */
																																	obj_t
																																		BgL_arg2742z00_3131;
																																	BgL_arg2742z00_3131
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				25)),
																																		BNIL);
																																	BgL_arg2740z00_3130
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				26)),
																																		BgL_arg2742z00_3131);
																																}
																																BgL_arg2734z00_3128
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 0)),
																																	BgL_arg2740z00_3130);
																															}
																															{	/* Ast/unit.scm 567 */
																																obj_t
																																	BgL_arg2743z00_3132;
																																obj_t
																																	BgL_arg2745z00_3133;
																																{	/* Ast/unit.scm 567 */
																																	obj_t
																																		BgL_arg2746z00_3134;
																																	BgL_arg2746z00_3134
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_idz00_80,
																																		BNIL);
																																	BgL_arg2743z00_3132
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				27)),
																																		BgL_arg2746z00_3134);
																																}
																																{	/* Ast/unit.scm 570 */
																																	obj_t
																																		BgL_arg2747z00_3135;
																																	obj_t
																																		BgL_arg2748z00_3136;
																																	{	/* Ast/unit.scm 570 */
																																		obj_t
																																			BgL_arg2750z00_3137;
																																		obj_t
																																			BgL_arg2751z00_3138;
																																		{	/* Ast/unit.scm 570 */

																																			BgL_arg2750z00_3137
																																				=
																																				BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																				(BgL_arityz00_3021,
																																				((long)
																																					10));
																																		}
																																		{	/* Ast/unit.scm 571 */

																																			BgL_arg2751z00_3138
																																				=
																																				BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																				((long)
																																				CINT
																																				(BGl_2zb2zb2zz__r4_numbers_6_5z00
																																					(BINT
																																						(BgL_arityz00_3021),
																																						BINT
																																						(BgL_loptz00_3024))),
																																				((long)
																																					10));
																																		}
																																		{	/* Ast/unit.scm 568 */
																																			obj_t
																																				BgL_list2752z00_3139;
																																			{	/* Ast/unit.scm 568 */
																																				obj_t
																																					BgL_arg2753z00_3140;
																																				{	/* Ast/unit.scm 568 */
																																					obj_t
																																						BgL_arg2756z00_3141;
																																					{	/* Ast/unit.scm 568 */
																																						obj_t
																																							BgL_arg2759z00_3142;
																																						{	/* Ast/unit.scm 568 */
																																							obj_t
																																								BgL_arg2760z00_3143;
																																							BgL_arg2760z00_3143
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_string3678z00zzast_unitz00,
																																								BNIL);
																																							BgL_arg2759z00_3142
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg2751z00_3138,
																																								BgL_arg2760z00_3143);
																																						}
																																						BgL_arg2756z00_3141
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string3679z00zzast_unitz00,
																																							BgL_arg2759z00_3142);
																																					}
																																					BgL_arg2753z00_3140
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2750z00_3137,
																																						BgL_arg2756z00_3141);
																																				}
																																				BgL_list2752z00_3139
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_string3680z00zzast_unitz00,
																																					BgL_arg2753z00_3140);
																																			}
																																			BgL_arg2747z00_3135
																																				=
																																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																				(BgL_list2752z00_3139);
																																	}}
																																	{	/* Ast/unit.scm 573 */
																																		obj_t
																																			BgL_arg2763z00_3149;
																																		{	/* Ast/unit.scm 573 */
																																			obj_t
																																				BgL_arg2764z00_3150;
																																			BgL_arg2764z00_3150
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_ioptz00_3022,
																																				BNIL);
																																			BgL_arg2763z00_3149
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						23)),
																																				BgL_arg2764z00_3150);
																																		}
																																		BgL_arg2748z00_3136
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2763z00_3149,
																																			BNIL);
																																	}
																																	BgL_arg2745z00_3133
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2747z00_3135,
																																		BgL_arg2748z00_3136);
																																}
																																BgL_arg2739z00_3129
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2743z00_3132,
																																	BgL_arg2745z00_3133);
																															}
																															BgL_arg2731z00_3126
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2734z00_3128,
																																BgL_arg2739z00_3129);
																														}
																														{	/* Ast/unit.scm 574 */
																															obj_t
																																BgL_arg2765z00_3151;
																															{	/* Ast/unit.scm 574 */
																																obj_t
																																	BgL_arg2766z00_3152;
																																{	/* Ast/unit.scm 574 */
																																	obj_t
																																		BgL_arg2767z00_3153;
																																	obj_t
																																		BgL_arg2768z00_3154;
																																	{	/* Ast/unit.scm 574 */
																																		obj_t
																																			BgL_arg2770z00_3155;
																																		{	/* Ast/unit.scm 574 */
																																			obj_t
																																				BgL_arg2771z00_3156;
																																			{	/* Ast/unit.scm 574 */
																																				obj_t
																																					BgL_arg2774z00_3157;
																																				{	/* Ast/unit.scm 574 */
																																					obj_t
																																						BgL_arg2778z00_3158;
																																					{	/* Ast/unit.scm 574 */
																																						obj_t
																																							BgL_arg2779z00_3159;
																																						BgL_arg2779z00_3159
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 39)), BNIL);
																																						BgL_arg2778z00_3158
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_ioptz00_3022,
																																							BgL_arg2779z00_3159);
																																					}
																																					BgL_arg2774z00_3157
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 22)), BgL_arg2778z00_3158);
																																				}
																																				BgL_arg2771z00_3156
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2774z00_3157,
																																					BNIL);
																																			}
																																			BgL_arg2770z00_3155
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						42)),
																																				BgL_arg2771z00_3156);
																																		}
																																		BgL_arg2767z00_3153
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2770z00_3155,
																																			BNIL);
																																	}
																																	{	/* Ast/unit.scm 575 */
																																		obj_t
																																			BgL_arg2782z00_3160;
																																		{	/* Ast/unit.scm 575 */
																																			obj_t
																																				BgL_arg2783z00_3161;
																																			{	/* Ast/unit.scm 575 */
																																				obj_t
																																					BgL_arg2784z00_3162;
																																				obj_t
																																					BgL_arg2787z00_3163;
																																				{	/* Ast/unit.scm 575 */
																																					obj_t
																																						BgL_arg2788z00_3164;
																																					{	/* Ast/unit.scm 575 */
																																						obj_t
																																							BgL_arg2789z00_3165;
																																						BgL_arg2789z00_3165
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 40)), BNIL);
																																						BgL_arg2788z00_3164
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 42)), BgL_arg2789z00_3165);
																																					}
																																					BgL_arg2784z00_3162
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 43)), BgL_arg2788z00_3164);
																																				}
																																				{	/* Ast/unit.scm 576 */
																																					obj_t
																																						BgL_arg2790z00_3166;
																																					obj_t
																																						BgL_arg2791z00_3167;
																																					{	/* Ast/unit.scm 576 */
																																						obj_t
																																							BgL_arg2792z00_3168;
																																						{	/* Ast/unit.scm 576 */
																																							obj_t
																																								BgL_arg2795z00_3169;
																																							BgL_arg2795z00_3169
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BINT
																																								(((long) 1)), BNIL);
																																							BgL_arg2792z00_3168
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 39)), BgL_arg2795z00_3169);
																																						}
																																						BgL_arg2790z00_3166
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 44)), BgL_arg2792z00_3168);
																																					}
																																					{	/* Ast/unit.scm 577 */
																																						obj_t
																																							BgL_arg2799z00_3170;
																																						{	/* Ast/unit.scm 577 */
																																							obj_t
																																								BgL_arg2800z00_3171;
																																							{	/* Ast/unit.scm 577 */
																																								obj_t
																																									BgL_arg2801z00_3172;
																																								{	/* Ast/unit.scm 577 */
																																									obj_t
																																										BgL_arg2802z00_3173;
																																									{	/* Ast/unit.scm 577 */
																																										obj_t
																																											BgL_arg2805z00_3174;
																																										{	/* Ast/unit.scm 577 */
																																											obj_t
																																												BgL_arg2806z00_3175;
																																											BgL_arg2806z00_3175
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BINT
																																												(((long) 2)), BNIL);
																																											BgL_arg2805z00_3174
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 39)), BgL_arg2806z00_3175);
																																										}
																																										BgL_arg2802z00_3173
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 44)), BgL_arg2805z00_3174);
																																									}
																																									BgL_arg2801z00_3172
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2802z00_3173,
																																										BNIL);
																																								}
																																								BgL_arg2800z00_3171
																																									=
																																									MAKE_YOUNG_PAIR
																																									(CNST_TABLE_REF
																																									(((long) 40)), BgL_arg2801z00_3172);
																																							}
																																							BgL_arg2799z00_3170
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_searchz00_3026,
																																								BgL_arg2800z00_3171);
																																						}
																																						BgL_arg2791z00_3167
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2799z00_3170,
																																							BNIL);
																																					}
																																					BgL_arg2787z00_3163
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2790z00_3166,
																																						BgL_arg2791z00_3167);
																																				}
																																				BgL_arg2783z00_3161
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2784z00_3162,
																																					BgL_arg2787z00_3163);
																																			}
																																			BgL_arg2782z00_3160
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						3)),
																																				BgL_arg2783z00_3161);
																																		}
																																		BgL_arg2768z00_3154
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2782z00_3160,
																																			BNIL);
																																	}
																																	BgL_arg2766z00_3152
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2767z00_3153,
																																		BgL_arg2768z00_3154);
																																}
																																BgL_arg2765z00_3151
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 46)),
																																	BgL_arg2766z00_3152);
																															}
																															BgL_arg2732z00_3127
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2765z00_3151,
																																BNIL);
																														}
																														BgL_arg2724z00_3120
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2731z00_3126,
																															BgL_arg2732z00_3127);
																													}
																													BgL_arg2722z00_3118 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2723z00_3119,
																														BgL_arg2724z00_3120);
																												}
																												BgL_arg2689z00_3089 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 3)),
																													BgL_arg2722z00_3118);
																									}}
																									BgL_arg2688z00_3088 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2689z00_3089, BNIL);
																								}
																								BgL_arg2684z00_3085 =
																									MAKE_YOUNG_PAIR(BINT(((long)
																											-1)),
																									BgL_arg2688z00_3088);
																							}
																							BgL_arg2682z00_3083 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2683z00_3084,
																								BgL_arg2684z00_3085);
																						}
																						BgL_arg2681z00_3082 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 3)),
																							BgL_arg2682z00_3083);
																					}
																					BgL_arg2679z00_3080 =
																						MAKE_YOUNG_PAIR(BgL_arg2681z00_3082,
																						BNIL);
																				}
																				BgL_arg2677z00_3078 =
																					MAKE_YOUNG_PAIR(BgL_arg2678z00_3079,
																					BgL_arg2679z00_3080);
																			}
																			BgL_arg2676z00_3077 =
																				MAKE_YOUNG_PAIR(BgL_searchz00_3026,
																				BgL_arg2677z00_3078);
																		}
																		BgL_arg2673z00_3075 =
																			MAKE_YOUNG_PAIR(BgL_arg2676z00_3077,
																			BNIL);
																	}
																	{	/* Ast/unit.scm 578 */
																		obj_t BgL_arg2807z00_3178;

																		{	/* Ast/unit.scm 578 */
																			obj_t BgL_arg2808z00_3179;

																			{	/* Ast/unit.scm 578 */
																				obj_t BgL_arg2809z00_3180;
																				obj_t BgL_arg2810z00_3181;

																				{	/* Ast/unit.scm 578 */
																					obj_t BgL_ll1306z00_3182;
																					obj_t BgL_ll1307z00_3183;

																					BgL_ll1306z00_3182 =
																						BGl_takez00zz__r4_pairs_and_lists_6_3z00
																						((((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) ((
																												(BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_globalz00_bglt) BgL_gloz00_78))))->BgL_valuez00))))->BgL_argszd2namezd2), BgL_arityz00_3021);
																					BgL_ll1307z00_3183 =
																						BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																						((int) (BgL_arityz00_3021), BNIL);
																					if (NULLP(BgL_ll1306z00_3182))
																						{	/* Ast/unit.scm 578 */
																							BgL_arg2809z00_3180 = BNIL;
																						}
																					else
																						{	/* Ast/unit.scm 578 */
																							obj_t BgL_head1308z00_3185;

																							{	/* Ast/unit.scm 578 */
																								obj_t BgL_res3598z00_4834;

																								BgL_res3598z00_4834 =
																									MAKE_YOUNG_PAIR(BNIL, BNIL);
																								BgL_head1308z00_3185 =
																									BgL_res3598z00_4834;
																							}
																							{
																								obj_t BgL_ll1306z00_3187;
																								obj_t BgL_ll1307z00_3188;
																								obj_t BgL_tail1309z00_3189;

																								BgL_ll1306z00_3187 =
																									BgL_ll1306z00_3182;
																								BgL_ll1307z00_3188 =
																									BgL_ll1307z00_3183;
																								BgL_tail1309z00_3189 =
																									BgL_head1308z00_3185;
																							BgL_zc3z04anonymousza32812ze3z87_3190:
																								if (NULLP
																									(BgL_ll1306z00_3187))
																									{	/* Ast/unit.scm 578 */
																										BgL_arg2809z00_3180 =
																											CDR(BgL_head1308z00_3185);
																									}
																								else
																									{	/* Ast/unit.scm 578 */
																										obj_t
																											BgL_newtail1310z00_3192;
																										{	/* Ast/unit.scm 578 */
																											obj_t BgL_arg2816z00_3195;

																											{	/* Ast/unit.scm 578 */
																												obj_t BgL_vz00_3196;
																												obj_t BgL_iz00_3197;

																												BgL_vz00_3196 =
																													CAR(
																													((obj_t)
																														BgL_ll1306z00_3187));
																												BgL_iz00_3197 =
																													CAR(((obj_t)
																														BgL_ll1307z00_3188));
																												{	/* Ast/unit.scm 579 */
																													obj_t
																														BgL_arg2817z00_3198;
																													{	/* Ast/unit.scm 579 */
																														obj_t
																															BgL_arg2819z00_3199;
																														{	/* Ast/unit.scm 579 */
																															obj_t
																																BgL_arg2820z00_3200;
																															{	/* Ast/unit.scm 579 */
																																obj_t
																																	BgL_arg2821z00_3201;
																																BgL_arg2821z00_3201
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_iz00_3197,
																																	BNIL);
																																BgL_arg2820z00_3200
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_ioptz00_3022,
																																	BgL_arg2821z00_3201);
																															}
																															BgL_arg2819z00_3199
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 22)),
																																BgL_arg2820z00_3200);
																														}
																														BgL_arg2817z00_3198
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2819z00_3199,
																															BNIL);
																													}
																													BgL_arg2816z00_3195 =
																														MAKE_YOUNG_PAIR
																														(BgL_vz00_3196,
																														BgL_arg2817z00_3198);
																											}}
																											{	/* Ast/unit.scm 578 */
																												obj_t
																													BgL_res3600z00_4839;
																												BgL_res3600z00_4839 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2816z00_3195,
																													BNIL);
																												BgL_newtail1310z00_3192
																													= BgL_res3600z00_4839;
																										}}
																										SET_CDR
																											(BgL_tail1309z00_3189,
																											BgL_newtail1310z00_3192);
																										{	/* Ast/unit.scm 578 */
																											obj_t BgL_arg2814z00_3193;
																											obj_t BgL_arg2815z00_3194;

																											BgL_arg2814z00_3193 =
																												CDR(
																												((obj_t)
																													BgL_ll1306z00_3187));
																											BgL_arg2815z00_3194 =
																												CDR(((obj_t)
																													BgL_ll1307z00_3188));
																											{
																												obj_t
																													BgL_tail1309z00_7257;
																												obj_t
																													BgL_ll1307z00_7256;
																												obj_t
																													BgL_ll1306z00_7255;
																												BgL_ll1306z00_7255 =
																													BgL_arg2814z00_3193;
																												BgL_ll1307z00_7256 =
																													BgL_arg2815z00_3194;
																												BgL_tail1309z00_7257 =
																													BgL_newtail1310z00_3192;
																												BgL_tail1309z00_3189 =
																													BgL_tail1309z00_7257;
																												BgL_ll1307z00_3188 =
																													BgL_ll1307z00_7256;
																												BgL_ll1306z00_3187 =
																													BgL_ll1306z00_7255;
																												goto
																													BgL_zc3z04anonymousza32812ze3z87_3190;
																											}
																										}
																									}
																							}
																						}
																				}
																				{	/* Ast/unit.scm 582 */
																					obj_t BgL_arg2831z00_3206;

																					{	/* Ast/unit.scm 582 */
																						obj_t BgL_arg2838z00_3207;

																						{	/* Ast/unit.scm 582 */
																							obj_t BgL_arg2839z00_3208;
																							obj_t BgL_arg2845z00_3209;

																							{	/* Ast/unit.scm 582 */
																								obj_t BgL_head1314z00_3212;

																								{	/* Ast/unit.scm 582 */
																									obj_t BgL_res3602z00_4844;

																									BgL_res3602z00_4844 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1314z00_3212 =
																										BgL_res3602z00_4844;
																								}
																								{
																									obj_t BgL_l1312z00_3214;
																									obj_t BgL_tail1315z00_3215;

																									BgL_l1312z00_3214 =
																										BgL_keysz00_79;
																									BgL_tail1315z00_3215 =
																										BgL_head1314z00_3212;
																								BgL_zc3z04anonymousza32847ze3z87_3216:
																									if (NULLP
																										(BgL_l1312z00_3214))
																										{	/* Ast/unit.scm 582 */
																											BgL_arg2839z00_3208 =
																												CDR
																												(BgL_head1314z00_3212);
																										}
																									else
																										{	/* Ast/unit.scm 582 */
																											obj_t
																												BgL_newtail1316z00_3218;
																											{	/* Ast/unit.scm 582 */
																												obj_t
																													BgL_arg2850z00_3220;
																												{	/* Ast/unit.scm 582 */
																													obj_t BgL_pz00_3221;

																													BgL_pz00_3221 =
																														CAR(
																														((obj_t)
																															BgL_l1312z00_3214));
																													{	/* Ast/unit.scm 582 */
																														obj_t
																															BgL_arg2851z00_3222;
																														obj_t
																															BgL_arg2852z00_3223;
																														BgL_arg2851z00_3222
																															=
																															CAR(((obj_t)
																																BgL_pz00_3221));
																														{	/* Ast/unit.scm 582 */
																															obj_t
																																BgL_pairz00_4852;
																															BgL_pairz00_4852 =
																																CDR(((obj_t)
																																	BgL_pz00_3221));
																															BgL_arg2852z00_3223
																																=
																																CAR
																																(BgL_pairz00_4852);
																														}
																														{	/* Ast/unit.scm 582 */
																															obj_t
																																BgL_list2853z00_3224;
																															{	/* Ast/unit.scm 582 */
																																obj_t
																																	BgL_arg2857z00_3225;
																																BgL_arg2857z00_3225
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2852z00_3223,
																																	BNIL);
																																BgL_list2853z00_3224
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2851z00_3222,
																																	BgL_arg2857z00_3225);
																															}
																															BgL_arg2850z00_3220
																																=
																																BgL_list2853z00_3224;
																														}
																													}
																												}
																												{	/* Ast/unit.scm 582 */
																													obj_t
																														BgL_res3605z00_4854;
																													BgL_res3605z00_4854 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2850z00_3220,
																														BNIL);
																													BgL_newtail1316z00_3218
																														=
																														BgL_res3605z00_4854;
																												}
																											}
																											SET_CDR
																												(BgL_tail1315z00_3215,
																												BgL_newtail1316z00_3218);
																											{	/* Ast/unit.scm 582 */
																												obj_t
																													BgL_arg2849z00_3219;
																												BgL_arg2849z00_3219 =
																													CDR(((obj_t)
																														BgL_l1312z00_3214));
																												{
																													obj_t
																														BgL_tail1315z00_7276;
																													obj_t
																														BgL_l1312z00_7275;
																													BgL_l1312z00_7275 =
																														BgL_arg2849z00_3219;
																													BgL_tail1315z00_7276 =
																														BgL_newtail1316z00_3218;
																													BgL_tail1315z00_3215 =
																														BgL_tail1315z00_7276;
																													BgL_l1312z00_3214 =
																														BgL_l1312z00_7275;
																													goto
																														BgL_zc3z04anonymousza32847ze3z87_3216;
																												}
																											}
																										}
																								}
																							}
																							{	/* Ast/unit.scm 584 */
																								obj_t BgL_arg2858z00_3227;
																								obj_t BgL_arg2859z00_3228;

																								{	/* Ast/unit.scm 584 */
																									bool_t BgL_test3912z00_7277;

																									if (CBOOL
																										(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																										{	/* Ast/unit.scm 585 */
																											bool_t
																												BgL__ortest_1122z00_3280;
																											if ((((BgL_globalz00_bglt)
																														COBJECT((
																																(BgL_globalz00_bglt)
																																BgL_gloz00_78)))->
																													BgL_evaluablezf3zf3))
																												{	/* Ast/unit.scm 585 */
																													BgL__ortest_1122z00_3280
																														= ((bool_t) 0);
																												}
																											else
																												{	/* Ast/unit.scm 585 */
																													BgL__ortest_1122z00_3280
																														= ((bool_t) 1);
																												}
																											if (BgL__ortest_1122z00_3280)
																												{	/* Ast/unit.scm 585 */
																													BgL_test3912z00_7277 =
																														BgL__ortest_1122z00_3280;
																												}
																											else
																												{	/* Ast/unit.scm 585 */
																													BgL_test3912z00_7277 =
																														CBOOL
																														(BGl_za2unsafezd2evalza2zd2zzengine_paramz00);
																												}
																										}
																									else
																										{	/* Ast/unit.scm 584 */
																											BgL_test3912z00_7277 =
																												((bool_t) 0);
																										}
																									if (BgL_test3912z00_7277)
																										{	/* Ast/unit.scm 584 */
																											BgL_arg2858z00_3227 =
																												BUNSPEC;
																										}
																									else
																										{	/* Ast/unit.scm 588 */
																											obj_t BgL_arg2862z00_3232;

																											{	/* Ast/unit.scm 588 */
																												obj_t
																													BgL_arg2863z00_3233;
																												obj_t
																													BgL_arg2864z00_3234;
																												{	/* Ast/unit.scm 588 */
																													obj_t
																														BgL_arg2865z00_3235;
																													{	/* Ast/unit.scm 588 */
																														obj_t
																															BgL_arg2869z00_3236;
																														{	/* Ast/unit.scm 588 */
																															obj_t
																																BgL_arg2870z00_3237;
																															obj_t
																																BgL_arg2871z00_3238;
																															BgL_arg2870z00_3237
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 39)),
																																BNIL);
																															{	/* Ast/unit.scm 589 */
																																obj_t
																																	BgL_arg2872z00_3239;
																																{	/* Ast/unit.scm 589 */
																																	obj_t
																																		BgL_arg2873z00_3240;
																																	{	/* Ast/unit.scm 589 */
																																		obj_t
																																			BgL_arg2874z00_3241;
																																		obj_t
																																			BgL_arg2876z00_3242;
																																		{	/* Ast/unit.scm 589 */
																																			obj_t
																																				BgL_arg2877z00_3243;
																																			{	/* Ast/unit.scm 589 */
																																				obj_t
																																					BgL_arg2880z00_3244;
																																				BgL_arg2880z00_3244
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_lz00_3025,
																																					BNIL);
																																				BgL_arg2877z00_3243
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 39)), BgL_arg2880z00_3244);
																																			}
																																			BgL_arg2874z00_3241
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						41)),
																																				BgL_arg2877z00_3243);
																																		}
																																		{	/* Ast/unit.scm 590 */
																																			obj_t
																																				BgL_arg2881z00_3245;
																																			obj_t
																																				BgL_arg2882z00_3246;
																																			{	/* Ast/unit.scm 590 */
																																				obj_t
																																					BgL_arg2883z00_3247;
																																				BgL_arg2883z00_3247
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_arg2881z00_3245
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 27)), BgL_arg2883z00_3247);
																																			}
																																			{	/* Ast/unit.scm 591 */
																																				obj_t
																																					BgL_arg2884z00_3248;
																																				{	/* Ast/unit.scm 591 */
																																					obj_t
																																						BgL_arg2885z00_3249;
																																					{	/* Ast/unit.scm 591 */
																																						obj_t
																																							BgL_arg2886z00_3250;
																																						obj_t
																																							BgL_arg2887z00_3251;
																																						{	/* Ast/unit.scm 591 */
																																							obj_t
																																								BgL_arg2888z00_3252;
																																							{	/* Ast/unit.scm 591 */
																																								obj_t
																																									BgL_arg2889z00_3253;
																																								obj_t
																																									BgL_arg2894z00_3254;
																																								{	/* Ast/unit.scm 591 */
																																									obj_t
																																										BgL_arg2895z00_3255;
																																									{	/* Ast/unit.scm 591 */
																																										obj_t
																																											BgL_arg2896z00_3256;
																																										BgL_arg2896z00_3256
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 39)), BNIL);
																																										BgL_arg2895z00_3255
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_ioptz00_3022,
																																											BgL_arg2896z00_3256);
																																									}
																																									BgL_arg2889z00_3253
																																										=
																																										MAKE_YOUNG_PAIR
																																										(CNST_TABLE_REF
																																										(((long) 47)), BgL_arg2895z00_3255);
																																								}
																																								{	/* Ast/unit.scm 592 */
																																									obj_t
																																										BgL_arg2897z00_3257;
																																									{	/* Ast/unit.scm 592 */
																																										obj_t
																																											BgL_arg2898z00_3258;
																																										{	/* Ast/unit.scm 592 */
																																											obj_t
																																												BgL_tmpz00_7300;
																																											BgL_keysz00_3047
																																												=
																																												BgL_keysz00_79;
																																											{	/* Ast/unit.scm 550 */
																																												obj_t
																																													BgL_head1303z00_3051;
																																												{	/* Ast/unit.scm 550 */
																																													obj_t
																																														BgL_res3594z00_4822;
																																													BgL_res3594z00_4822
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BNIL,
																																														BNIL);
																																													BgL_head1303z00_3051
																																														=
																																														BgL_res3594z00_4822;
																																												}
																																												{
																																													obj_t
																																														BgL_l1301z00_3053;
																																													obj_t
																																														BgL_tail1304z00_3054;
																																													BgL_l1301z00_3053
																																														=
																																														BgL_keysz00_3047;
																																													BgL_tail1304z00_3054
																																														=
																																														BgL_head1303z00_3051;
																																												BgL_zc3z04anonymousza32654ze3z87_3055:
																																													if (NULLP(BgL_l1301z00_3053))
																																														{	/* Ast/unit.scm 550 */
																																															BgL_tmpz00_7300
																																																=
																																																CDR
																																																(BgL_head1303z00_3051);
																																														}
																																													else
																																														{	/* Ast/unit.scm 550 */
																																															obj_t
																																																BgL_newtail1305z00_3057;
																																															{	/* Ast/unit.scm 550 */
																																																obj_t
																																																	BgL_arg2657z00_3059;
																																																{	/* Ast/unit.scm 550 */
																																																	obj_t
																																																		BgL_kz00_3060;
																																																	BgL_kz00_3060
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_l1301z00_3053));
																																																	{	/* Ast/unit.scm 551 */
																																																		obj_t
																																																			BgL_arg2658z00_3061;
																																																		{	/* Ast/unit.scm 551 */
																																																			obj_t
																																																				BgL_arg2659z00_3062;
																																																			BgL_arg2659z00_3062
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_kz00_3060));
																																																			BgL_arg2658z00_3061
																																																				=
																																																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																				(BgL_arg2659z00_3062,
																																																				BgL_locz00_86);
																																																		}
																																																		BgL_arg2657z00_3059
																																																			=
																																																			BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																																																			(BgL_arg2658z00_3061);
																																																	}
																																																}
																																																{	/* Ast/unit.scm 550 */
																																																	obj_t
																																																		BgL_res3596z00_4827;
																																																	BgL_res3596z00_4827
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BgL_arg2657z00_3059,
																																																		BNIL);
																																																	BgL_newtail1305z00_3057
																																																		=
																																																		BgL_res3596z00_4827;
																																																}
																																															}
																																															SET_CDR
																																																(BgL_tail1304z00_3054,
																																																BgL_newtail1305z00_3057);
																																															{	/* Ast/unit.scm 550 */
																																																obj_t
																																																	BgL_arg2656z00_3058;
																																																BgL_arg2656z00_3058
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_l1301z00_3053));
																																																{
																																																	obj_t
																																																		BgL_tail1304z00_7316;
																																																	obj_t
																																																		BgL_l1301z00_7315;
																																																	BgL_l1301z00_7315
																																																		=
																																																		BgL_arg2656z00_3058;
																																																	BgL_tail1304z00_7316
																																																		=
																																																		BgL_newtail1305z00_3057;
																																																	BgL_tail1304z00_3054
																																																		=
																																																		BgL_tail1304z00_7316;
																																																	BgL_l1301z00_3053
																																																		=
																																																		BgL_l1301z00_7315;
																																																	goto
																																																		BgL_zc3z04anonymousza32654ze3z87_3055;
																																																}
																																															}
																																														}
																																												}
																																											}
																																											BgL_arg2898z00_3258
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_tmpz00_7300,
																																												BNIL);
																																										}
																																										BgL_arg2897z00_3257
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 27)), BgL_arg2898z00_3258);
																																									}
																																									BgL_arg2894z00_3254
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2897z00_3257,
																																										BNIL);
																																								}
																																								BgL_arg2888z00_3252
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2889z00_3253,
																																									BgL_arg2894z00_3254);
																																							}
																																							BgL_arg2886z00_3250
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 48)), BgL_arg2888z00_3252);
																																						}
																																						{	/* Ast/unit.scm 593 */
																																							obj_t
																																								BgL_arg2900z00_3260;
																																							obj_t
																																								BgL_arg2901z00_3261;
																																							{	/* Ast/unit.scm 593 */
																																								obj_t
																																									BgL_arg2902z00_3262;
																																								{	/* Ast/unit.scm 593 */
																																									obj_t
																																										BgL_arg2903z00_3263;
																																									{	/* Ast/unit.scm 593 */
																																										obj_t
																																											BgL_arg2904z00_3264;
																																										{	/* Ast/unit.scm 593 */
																																											obj_t
																																												BgL_arg2905z00_3265;
																																											BgL_arg2905z00_3265
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BINT
																																												(((long) 2)), BNIL);
																																											BgL_arg2904z00_3264
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 39)), BgL_arg2905z00_3265);
																																										}
																																										BgL_arg2903z00_3263
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 44)), BgL_arg2904z00_3264);
																																									}
																																									BgL_arg2902z00_3262
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2903z00_3263,
																																										BNIL);
																																								}
																																								BgL_arg2900z00_3260
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_checkz00_3027,
																																									BgL_arg2902z00_3262);
																																							}
																																							{	/* Ast/unit.scm 594 */
																																								obj_t
																																									BgL_arg2906z00_3266;
																																								{	/* Ast/unit.scm 594 */
																																									obj_t
																																										BgL_arg2907z00_3267;
																																									obj_t
																																										BgL_arg2910z00_3268;
																																									{	/* Ast/unit.scm 594 */
																																										obj_t
																																											BgL_arg2911z00_3269;
																																										{	/* Ast/unit.scm 594 */
																																											obj_t
																																												BgL_arg2912z00_3270;
																																											BgL_arg2912z00_3270
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 25)), BNIL);
																																											BgL_arg2911z00_3269
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 26)), BgL_arg2912z00_3270);
																																										}
																																										BgL_arg2907z00_3267
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 0)), BgL_arg2911z00_3269);
																																									}
																																									{	/* Ast/unit.scm 595 */
																																										obj_t
																																											BgL_arg2913z00_3271;
																																										obj_t
																																											BgL_arg2914z00_3272;
																																										{	/* Ast/unit.scm 595 */
																																											obj_t
																																												BgL_arg2915z00_3273;
																																											BgL_arg2915z00_3273
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_idz00_80,
																																												BNIL);
																																											BgL_arg2913z00_3271
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 27)), BgL_arg2915z00_3273);
																																										}
																																										{	/* Ast/unit.scm 597 */
																																											obj_t
																																												BgL_arg2916z00_3274;
																																											{	/* Ast/unit.scm 597 */
																																												obj_t
																																													BgL_arg2919z00_3275;
																																												{	/* Ast/unit.scm 597 */
																																													obj_t
																																														BgL_arg2925z00_3276;
																																													{	/* Ast/unit.scm 597 */
																																														obj_t
																																															BgL_arg2926z00_3277;
																																														BgL_arg2926z00_3277
																																															=
																																															MAKE_YOUNG_PAIR
																																															(CNST_TABLE_REF
																																															(((long) 39)), BNIL);
																																														BgL_arg2925z00_3276
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_ioptz00_3022,
																																															BgL_arg2926z00_3277);
																																													}
																																													BgL_arg2919z00_3275
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CNST_TABLE_REF
																																														(((long) 47)), BgL_arg2925z00_3276);
																																												}
																																												BgL_arg2916z00_3274
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg2919z00_3275,
																																													BNIL);
																																											}
																																											BgL_arg2914z00_3272
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_string3681z00zzast_unitz00,
																																												BgL_arg2916z00_3274);
																																										}
																																										BgL_arg2910z00_3268
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg2913z00_3271,
																																											BgL_arg2914z00_3272);
																																									}
																																									BgL_arg2906z00_3266
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2907z00_3267,
																																										BgL_arg2910z00_3268);
																																								}
																																								BgL_arg2901z00_3261
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2906z00_3266,
																																									BNIL);
																																							}
																																							BgL_arg2887z00_3251
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg2900z00_3260,
																																								BgL_arg2901z00_3261);
																																						}
																																						BgL_arg2885z00_3249
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2886z00_3250,
																																							BgL_arg2887z00_3251);
																																					}
																																					BgL_arg2884z00_3248
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 3)), BgL_arg2885z00_3249);
																																				}
																																				BgL_arg2882z00_3246
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2884z00_3248,
																																					BNIL);
																																			}
																																			BgL_arg2876z00_3242
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg2881z00_3245,
																																				BgL_arg2882z00_3246);
																																		}
																																		BgL_arg2873z00_3240
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2874z00_3241,
																																			BgL_arg2876z00_3242);
																																	}
																																	BgL_arg2872z00_3239
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				3)),
																																		BgL_arg2873z00_3240);
																																}
																																BgL_arg2871z00_3238
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg2872z00_3239,
																																	BNIL);
																															}
																															BgL_arg2869z00_3236
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2870z00_3237,
																																BgL_arg2871z00_3238);
																														}
																														BgL_arg2865z00_3235
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_checkz00_3027,
																															BgL_arg2869z00_3236);
																													}
																													BgL_arg2863z00_3233 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2865z00_3235,
																														BNIL);
																												}
																												{	/* Ast/unit.scm 598 */
																													obj_t
																														BgL_arg2941z00_3278;
																													{	/* Ast/unit.scm 598 */
																														obj_t
																															BgL_arg2942z00_3279;
																														BgL_arg2942z00_3279
																															=
																															MAKE_YOUNG_PAIR
																															(BINT
																															(BgL_arityz00_3021),
																															BNIL);
																														BgL_arg2941z00_3278
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_checkz00_3027,
																															BgL_arg2942z00_3279);
																													}
																													BgL_arg2864z00_3234 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2941z00_3278,
																														BNIL);
																												}
																												BgL_arg2862z00_3232 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2863z00_3233,
																													BgL_arg2864z00_3234);
																											}
																											BgL_arg2858z00_3227 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														15)),
																												BgL_arg2862z00_3232);
																								}}
																								{	/* Ast/unit.scm 599 */
																									obj_t BgL_arg2943z00_3282;
																									obj_t BgL_arg2944z00_3283;

																									{	/* Ast/unit.scm 599 */
																										obj_t BgL_head1319z00_3286;

																										{	/* Ast/unit.scm 599 */
																											obj_t BgL_res3607z00_4859;

																											BgL_res3607z00_4859 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											BgL_head1319z00_3286 =
																												BgL_res3607z00_4859;
																										}
																										{
																											obj_t BgL_l1317z00_3288;
																											obj_t
																												BgL_tail1320z00_3289;
																											BgL_l1317z00_3288 =
																												BgL_keysz00_79;
																											BgL_tail1320z00_3289 =
																												BgL_head1319z00_3286;
																										BgL_zc3z04anonymousza32946ze3z87_3290:
																											if (NULLP
																												(BgL_l1317z00_3288))
																												{	/* Ast/unit.scm 599 */
																													BgL_arg2943z00_3282 =
																														CDR
																														(BgL_head1319z00_3286);
																												}
																											else
																												{	/* Ast/unit.scm 599 */
																													obj_t
																														BgL_newtail1321z00_3292;
																													{	/* Ast/unit.scm 599 */
																														obj_t
																															BgL_arg2949z00_3294;
																														{	/* Ast/unit.scm 599 */
																															obj_t
																																BgL_pz00_3295;
																															BgL_pz00_3295 =
																																CAR(((obj_t)
																																	BgL_l1317z00_3288));
																															{	/* Ast/unit.scm 600 */
																																obj_t
																																	BgL_iz00_3296;
																																{	/* Ast/unit.scm 600 */
																																	obj_t
																																		BgL_arg2981z00_3320;
																																	BgL_arg2981z00_3320
																																		=
																																		CAR(((obj_t)
																																			BgL_pz00_3295));
																																	BgL_iz00_3296
																																		=
																																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																		(BgL_arg2981z00_3320,
																																		BgL_locz00_86);
																																}
																																{	/* Ast/unit.scm 600 */
																																	obj_t
																																		BgL_k1z00_3297;
																																	BgL_k1z00_3297
																																		=
																																		BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																																		(BgL_iz00_3296);
																																	{	/* Ast/unit.scm 601 */
																																		obj_t
																																			BgL_indz00_3298;
																																		BgL_indz00_3298
																																			=
																																			BGl_gensymz00zz__r4_symbols_6_4z00
																																			(CNST_TABLE_REF
																																			(((long)
																																					49)));
																																		{	/* Ast/unit.scm 602 */

																																			{	/* Ast/unit.scm 603 */
																																				obj_t
																																					BgL_arg2953z00_3299;
																																				obj_t
																																					BgL_arg2954z00_3300;
																																				BgL_arg2953z00_3299
																																					=
																																					BGl_letzd2symzd2zzast_letz00
																																					();
																																				{	/* Ast/unit.scm 603 */
																																					obj_t
																																						BgL_arg2955z00_3301;
																																					obj_t
																																						BgL_arg2956z00_3302;
																																					{	/* Ast/unit.scm 603 */
																																						obj_t
																																							BgL_arg2957z00_3303;
																																						{	/* Ast/unit.scm 603 */
																																							obj_t
																																								BgL_arg2958z00_3304;
																																							{	/* Ast/unit.scm 603 */
																																								obj_t
																																									BgL_arg2960z00_3305;
																																								{	/* Ast/unit.scm 603 */
																																									obj_t
																																										BgL_arg2962z00_3306;
																																									{	/* Ast/unit.scm 603 */
																																										obj_t
																																											BgL_arg2964z00_3307;
																																										BgL_arg2964z00_3307
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BINT
																																											(BgL_arityz00_3021),
																																											BNIL);
																																										BgL_arg2962z00_3306
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_k1z00_3297,
																																											BgL_arg2964z00_3307);
																																									}
																																									BgL_arg2960z00_3305
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_searchz00_3026,
																																										BgL_arg2962z00_3306);
																																								}
																																								BgL_arg2958z00_3304
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2960z00_3305,
																																									BNIL);
																																							}
																																							BgL_arg2957z00_3303
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_indz00_3298,
																																								BgL_arg2958z00_3304);
																																						}
																																						BgL_arg2955z00_3301
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2957z00_3303,
																																							BNIL);
																																					}
																																					{	/* Ast/unit.scm 604 */
																																						obj_t
																																							BgL_arg2965z00_3308;
																																						{	/* Ast/unit.scm 604 */
																																							obj_t
																																								BgL_arg2966z00_3309;
																																							{	/* Ast/unit.scm 604 */
																																								obj_t
																																									BgL_arg2967z00_3310;
																																								obj_t
																																									BgL_arg2968z00_3311;
																																								{	/* Ast/unit.scm 604 */
																																									obj_t
																																										BgL_arg2969z00_3312;
																																									{	/* Ast/unit.scm 604 */
																																										obj_t
																																											BgL_arg2972z00_3313;
																																										BgL_arg2972z00_3313
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BINT
																																											(((long) 0)), BNIL);
																																										BgL_arg2969z00_3312
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_indz00_3298,
																																											BgL_arg2972z00_3313);
																																									}
																																									BgL_arg2967z00_3310
																																										=
																																										MAKE_YOUNG_PAIR
																																										(CNST_TABLE_REF
																																										(((long) 50)), BgL_arg2969z00_3312);
																																								}
																																								{	/* Ast/unit.scm 605 */
																																									obj_t
																																										BgL_arg2973z00_3314;
																																									{	/* Ast/unit.scm 605 */
																																										obj_t
																																											BgL_arg2974z00_3315;
																																										{	/* Ast/unit.scm 605 */
																																											obj_t
																																												BgL_arg2976z00_3316;
																																											{	/* Ast/unit.scm 605 */
																																												obj_t
																																													BgL_arg2978z00_3317;
																																												{	/* Ast/unit.scm 605 */
																																													obj_t
																																														BgL_arg2979z00_3318;
																																													{	/* Ast/unit.scm 605 */
																																														obj_t
																																															BgL_arg2980z00_3319;
																																														BgL_arg2980z00_3319
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_indz00_3298,
																																															BNIL);
																																														BgL_arg2979z00_3318
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_ioptz00_3022,
																																															BgL_arg2980z00_3319);
																																													}
																																													BgL_arg2978z00_3317
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CNST_TABLE_REF
																																														(((long) 22)), BgL_arg2979z00_3318);
																																												}
																																												BgL_arg2976z00_3316
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg2978z00_3317,
																																													BNIL);
																																											}
																																											BgL_arg2974z00_3315
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_iz00_3296,
																																												BgL_arg2976z00_3316);
																																										}
																																										BgL_arg2973z00_3314
																																											=
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 1)), BgL_arg2974z00_3315);
																																									}
																																									BgL_arg2968z00_3311
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2973z00_3314,
																																										BNIL);
																																								}
																																								BgL_arg2966z00_3309
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2967z00_3310,
																																									BgL_arg2968z00_3311);
																																							}
																																							BgL_arg2965z00_3308
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 51)), BgL_arg2966z00_3309);
																																						}
																																						BgL_arg2956z00_3302
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2965z00_3308,
																																							BNIL);
																																					}
																																					BgL_arg2954z00_3300
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2955z00_3301,
																																						BgL_arg2956z00_3302);
																																				}
																																				BgL_arg2949z00_3294
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2953z00_3299,
																																					BgL_arg2954z00_3300);
																														}}}}}}
																														{	/* Ast/unit.scm 599 */
																															obj_t
																																BgL_res3609z00_4864;
																															BgL_res3609z00_4864
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2949z00_3294,
																																BNIL);
																															BgL_newtail1321z00_3292
																																=
																																BgL_res3609z00_4864;
																													}}
																													SET_CDR
																														(BgL_tail1320z00_3289,
																														BgL_newtail1321z00_3292);
																													{	/* Ast/unit.scm 599 */
																														obj_t
																															BgL_arg2948z00_3293;
																														BgL_arg2948z00_3293
																															=
																															CDR(((obj_t)
																																BgL_l1317z00_3288));
																														{
																															obj_t
																																BgL_tail1320z00_7416;
																															obj_t
																																BgL_l1317z00_7415;
																															BgL_l1317z00_7415
																																=
																																BgL_arg2948z00_3293;
																															BgL_tail1320z00_7416
																																=
																																BgL_newtail1321z00_3292;
																															BgL_tail1320z00_3289
																																=
																																BgL_tail1320z00_7416;
																															BgL_l1317z00_3288
																																=
																																BgL_l1317z00_7415;
																															goto
																																BgL_zc3z04anonymousza32946ze3z87_3290;
																														}
																													}
																												}
																										}
																									}
																									{	/* Ast/unit.scm 607 */
																										obj_t BgL_arg2982z00_3322;

																										{	/* Ast/unit.scm 607 */
																											obj_t BgL_arg2983z00_3323;

																											{	/* Ast/unit.scm 607 */
																												obj_t
																													BgL_arg2984z00_3324;
																												obj_t
																													BgL_arg2990z00_3325;
																												{	/* Ast/unit.scm 607 */
																													obj_t
																														BgL_l1322z00_3326;
																													BgL_l1322z00_3326 =
																														BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																														((int)
																														(BgL_arityz00_3021),
																														BNIL);
																													if (NULLP
																														(BgL_l1322z00_3326))
																														{	/* Ast/unit.scm 607 */
																															BgL_arg2984z00_3324
																																= BNIL;
																														}
																													else
																														{	/* Ast/unit.scm 607 */
																															obj_t
																																BgL_head1324z00_3328;
																															{	/* Ast/unit.scm 607 */
																																obj_t
																																	BgL_res3611z00_4868;
																																BgL_res3611z00_4868
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BNIL, BNIL);
																																BgL_head1324z00_3328
																																	=
																																	BgL_res3611z00_4868;
																															}
																															{
																																obj_t
																																	BgL_l1322z00_3330;
																																obj_t
																																	BgL_tail1325z00_3331;
																																BgL_l1322z00_3330
																																	=
																																	BgL_l1322z00_3326;
																																BgL_tail1325z00_3331
																																	=
																																	BgL_head1324z00_3328;
																															BgL_zc3z04anonymousza32992ze3z87_3332:
																																if (NULLP
																																	(BgL_l1322z00_3330))
																																	{	/* Ast/unit.scm 607 */
																																		BgL_arg2984z00_3324
																																			=
																																			CDR
																																			(BgL_head1324z00_3328);
																																	}
																																else
																																	{	/* Ast/unit.scm 607 */
																																		obj_t
																																			BgL_newtail1326z00_3334;
																																		{	/* Ast/unit.scm 607 */
																																			obj_t
																																				BgL_arg2995z00_3336;
																																			{	/* Ast/unit.scm 607 */
																																				obj_t
																																					BgL_jz00_3337;
																																				BgL_jz00_3337
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_l1322z00_3330));
																																				{	/* Ast/unit.scm 608 */
																																					obj_t
																																						BgL_arg2996z00_3338;
																																					{	/* Ast/unit.scm 608 */
																																						obj_t
																																							BgL_arg2997z00_3339;
																																						BgL_arg2997z00_3339
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_jz00_3337,
																																							BNIL);
																																						BgL_arg2996z00_3338
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_ioptz00_3022,
																																							BgL_arg2997z00_3339);
																																					}
																																					BgL_arg2995z00_3336
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 22)), BgL_arg2996z00_3338);
																																			}}
																																			{	/* Ast/unit.scm 607 */
																																				obj_t
																																					BgL_res3613z00_4872;
																																				BgL_res3613z00_4872
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2995z00_3336,
																																					BNIL);
																																				BgL_newtail1326z00_3334
																																					=
																																					BgL_res3613z00_4872;
																																		}}
																																		SET_CDR
																																			(BgL_tail1325z00_3331,
																																			BgL_newtail1326z00_3334);
																																		{	/* Ast/unit.scm 607 */
																																			obj_t
																																				BgL_arg2994z00_3335;
																																			BgL_arg2994z00_3335
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_l1322z00_3330));
																																			{
																																				obj_t
																																					BgL_tail1325z00_7436;
																																				obj_t
																																					BgL_l1322z00_7435;
																																				BgL_l1322z00_7435
																																					=
																																					BgL_arg2994z00_3335;
																																				BgL_tail1325z00_7436
																																					=
																																					BgL_newtail1326z00_3334;
																																				BgL_tail1325z00_3331
																																					=
																																					BgL_tail1325z00_7436;
																																				BgL_l1322z00_3330
																																					=
																																					BgL_l1322z00_7435;
																																				goto
																																					BgL_zc3z04anonymousza32992ze3z87_3332;
																																			}
																																		}
																																	}
																															}
																														}
																												}
																												BgL_arg2990z00_3325 =
																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																													(BGl_zc3z04anonymousza33001ze3ze70z60zzast_unitz00
																													(BgL_locz00_86,
																														BgL_keysz00_79),
																													BNIL);
																												BgL_arg2983z00_3323 =
																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2984z00_3324,
																													BgL_arg2990z00_3325);
																											}
																											BgL_arg2982z00_3322 =
																												MAKE_YOUNG_PAIR
																												(BgL_gloz00_78,
																												BgL_arg2983z00_3323);
																										}
																										BgL_arg2944z00_3283 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2982z00_3322,
																											BNIL);
																									}
																									BgL_arg2859z00_3228 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2943z00_3282,
																										BgL_arg2944z00_3283);
																								}
																								BgL_arg2845z00_3209 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2858z00_3227,
																									BgL_arg2859z00_3228);
																							}
																							BgL_arg2838z00_3207 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2839z00_3208,
																								BgL_arg2845z00_3209);
																						}
																						BgL_arg2831z00_3206 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 24)),
																							BgL_arg2838z00_3207);
																					}
																					BgL_arg2810z00_3181 =
																						MAKE_YOUNG_PAIR(BgL_arg2831z00_3206,
																						BNIL);
																				}
																				BgL_arg2808z00_3179 =
																					MAKE_YOUNG_PAIR(BgL_arg2809z00_3180,
																					BgL_arg2810z00_3181);
																			}
																			BgL_arg2807z00_3178 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						46)), BgL_arg2808z00_3179);
																		}
																		BgL_arg2675z00_3076 =
																			MAKE_YOUNG_PAIR(BgL_arg2807z00_3178,
																			BNIL);
																	}
																	BgL_arg2671z00_3074 =
																		MAKE_YOUNG_PAIR(BgL_arg2673z00_3075,
																		BgL_arg2675z00_3076);
																}
																BgL_arg2670z00_3073 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																	BgL_arg2671z00_3074);
															}
															BgL_arg2664z00_3068 =
																MAKE_YOUNG_PAIR(BgL_arg2670z00_3073, BNIL);
														}
														BgL_arg2662z00_3066 =
															MAKE_YOUNG_PAIR(BgL_arg2663z00_3067,
															BgL_arg2664z00_3068);
													}
													BgL_auxz00_7067 =
														MAKE_YOUNG_PAIR(BgL_arg2661z00_3065,
														BgL_arg2662z00_3066);
												}
												BgL_auxz00_7066 =
													BGl_comptimezd2expandzd2zzexpand_epsz00
													(BgL_auxz00_7067);
											}
											BgL_arg2640z00_3037 =
												BGl_compilezd2expandzd2zzexpand_epsz00(BgL_auxz00_7066);
										}
										BgL_gz00_3034 =
											BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
											(BgL_idz00_3031, BgL_arg2637z00_3035, BgL_arg2638z00_3036,
											BgL_modulez00_81, BgL_classz00_85, BgL_srcz00_84,
											CNST_TABLE_REF(((long) 33)), BgL_arg2640z00_3037);
									}
									{	/* Ast/unit.scm 620 */

										{	/* Ast/unit.scm 624 */
											BgL_typez00_bglt BgL_vz00_4891;

											BgL_vz00_4891 =
												((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_gz00_3034)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_vz00_4891), BUNSPEC);
										}
										((((BgL_globalz00_bglt) COBJECT(BgL_gz00_3034))->
												BgL_evaluablezf3zf3) =
											((bool_t) ((bool_t) 0)), BUNSPEC);
										return BgL_gz00_3034;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* <@anonymous:3001>~0 */
	obj_t BGl_zc3z04anonymousza33001ze3ze70z60zzast_unitz00(obj_t BgL_locz00_5039,
		obj_t BgL_l1328z00_3344)
	{
		{	/* Ast/unit.scm 610 */
			if (NULLP(BgL_l1328z00_3344))
				{	/* Ast/unit.scm 610 */
					return BNIL;
				}
			else
				{	/* Ast/unit.scm 611 */
					obj_t BgL_arg3003z00_3347;
					obj_t BgL_arg3004z00_3348;

					{	/* Ast/unit.scm 611 */
						obj_t BgL_pz00_3349;

						BgL_pz00_3349 = CAR(((obj_t) BgL_l1328z00_3344));
						{	/* Ast/unit.scm 611 */
							obj_t BgL_idz00_3350;

							{	/* Ast/unit.scm 612 */
								obj_t BgL_arg3009z00_3354;

								BgL_arg3009z00_3354 = CAR(((obj_t) BgL_pz00_3349));
								BgL_idz00_3350 =
									BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_arg3009z00_3354,
									BgL_locz00_5039);
							}
							{	/* Ast/unit.scm 614 */
								obj_t BgL_arg3005z00_3351;

								BgL_arg3005z00_3351 =
									BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
									(BgL_idz00_3350);
								{	/* Ast/unit.scm 613 */
									obj_t BgL_list3006z00_3352;

									{	/* Ast/unit.scm 613 */
										obj_t BgL_arg3007z00_3353;

										BgL_arg3007z00_3353 = MAKE_YOUNG_PAIR(BgL_idz00_3350, BNIL);
										BgL_list3006z00_3352 =
											MAKE_YOUNG_PAIR(BgL_arg3005z00_3351, BgL_arg3007z00_3353);
									}
									BgL_arg3003z00_3347 = BgL_list3006z00_3352;
								}
							}
						}
					}
					{	/* Ast/unit.scm 610 */
						obj_t BgL_arg3012z00_3355;

						BgL_arg3012z00_3355 = CDR(((obj_t) BgL_l1328z00_3344));
						BgL_arg3004z00_3348 =
							BGl_zc3z04anonymousza33001ze3ze70z60zzast_unitz00(BgL_locz00_5039,
							BgL_arg3012z00_3355);
					}
					return bgl_append2(BgL_arg3003z00_3347, BgL_arg3004z00_3348);
				}
		}

	}



/* parse-fun-args */
	obj_t BGl_parsezd2funzd2argsz00zzast_unitz00(obj_t BgL_argsz00_87,
		obj_t BgL_srcz00_88, obj_t BgL_locz00_89)
	{
		{	/* Ast/unit.scm 631 */
			{
				obj_t BgL_argsz00_3362;
				obj_t BgL_resz00_3363;

				BgL_argsz00_3362 = BgL_argsz00_87;
				BgL_resz00_3363 = BNIL;
			BgL_zc3z04anonymousza33014ze3z87_3364:
				if (NULLP(BgL_argsz00_3362))
					{	/* Ast/unit.scm 635 */
						return bgl_reverse_bang(BgL_resz00_3363);
					}
				else
					{	/* Ast/unit.scm 635 */
						if (PAIRP(BgL_argsz00_3362))
							{	/* Ast/unit.scm 637 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_3362)))
									{	/* Ast/unit.scm 646 */
										obj_t BgL_argz00_3369;

										BgL_argz00_3369 =
											BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00
											(BgL_argsz00_3362);
										if (CBOOL(BgL_argz00_3369))
											{	/* Ast/unit.scm 648 */
												obj_t BgL_arg3021z00_3370;

												{	/* Ast/unit.scm 648 */
													BgL_localz00_bglt BgL_arg3025z00_3371;

													BgL_arg3025z00_3371 =
														BGl_makezd2userzd2localzd2svarzd2zzast_localz00
														(BgL_argz00_3369,
														((BgL_typez00_bglt)
															BGl_za2objza2z00zztype_cachez00));
													BgL_arg3021z00_3370 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_arg3025z00_3371),
														BgL_resz00_3363);
												}
												return bgl_reverse_bang(BgL_arg3021z00_3370);
											}
										else
											{	/* Ast/unit.scm 647 */
												return bgl_reverse_bang(BgL_resz00_3363);
											}
									}
								else
									{	/* Ast/unit.scm 651 */
										obj_t BgL_pidz00_3372;

										BgL_pidz00_3372 =
											BGl_checkzd2idzd2zzast_identz00
											(BGl_parsezd2idzd2zzast_identz00(CAR(BgL_argsz00_3362),
												BgL_locz00_89), BgL_srcz00_88);
										{	/* Ast/unit.scm 651 */
											obj_t BgL_idz00_3373;

											BgL_idz00_3373 = CAR(BgL_pidz00_3372);
											{	/* Ast/unit.scm 652 */
												obj_t BgL_typez00_3374;

												BgL_typez00_3374 = CDR(BgL_pidz00_3372);
												{	/* Ast/unit.scm 653 */

													{	/* Ast/unit.scm 654 */
														obj_t BgL_arg3026z00_3375;
														obj_t BgL_arg3028z00_3376;

														BgL_arg3026z00_3375 = CDR(BgL_argsz00_3362);
														{	/* Ast/unit.scm 655 */
															BgL_localz00_bglt BgL_arg3029z00_3377;

															if (BGl_userzd2symbolzf3z21zzast_identz00
																(BgL_idz00_3373))
																{	/* Ast/unit.scm 655 */
																	BgL_arg3029z00_3377 =
																		BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																		(BgL_idz00_3373,
																		((BgL_typez00_bglt) BgL_typez00_3374));
																}
															else
																{	/* Ast/unit.scm 655 */
																	BgL_arg3029z00_3377 =
																		BGl_makezd2localzd2svarz00zzast_localz00
																		(BgL_idz00_3373,
																		((BgL_typez00_bglt) BgL_typez00_3374));
																}
															BgL_arg3028z00_3376 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg3029z00_3377), BgL_resz00_3363);
														}
														{
															obj_t BgL_resz00_7512;
															obj_t BgL_argsz00_7511;

															BgL_argsz00_7511 = BgL_arg3026z00_3375;
															BgL_resz00_7512 = BgL_arg3028z00_3376;
															BgL_resz00_3363 = BgL_resz00_7512;
															BgL_argsz00_3362 = BgL_argsz00_7511;
															goto BgL_zc3z04anonymousza33014ze3z87_3364;
														}
													}
												}
											}
										}
									}
							}
						else
							{	/* Ast/unit.scm 638 */
								obj_t BgL_pidz00_3382;

								BgL_pidz00_3382 =
									BGl_checkzd2idzd2zzast_identz00
									(BGl_parsezd2idzd2zzast_identz00(BgL_argsz00_3362,
										BgL_locz00_89), BgL_srcz00_88);
								{	/* Ast/unit.scm 638 */
									obj_t BgL_idz00_3383;

									BgL_idz00_3383 = CAR(BgL_pidz00_3382);
									{	/* Ast/unit.scm 639 */
										obj_t BgL_typez00_3384;

										BgL_typez00_3384 = CDR(BgL_pidz00_3382);
										{	/* Ast/unit.scm 640 */

											{	/* Ast/unit.scm 644 */
												obj_t BgL_arg3036z00_3385;

												{	/* Ast/unit.scm 644 */
													BgL_localz00_bglt BgL_arg3038z00_3386;

													BgL_arg3038z00_3386 =
														BGl_makezd2userzd2localzd2svarzd2zzast_localz00
														(BgL_idz00_3383,
														((BgL_typez00_bglt) BgL_typez00_3384));
													BgL_arg3036z00_3385 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_arg3038z00_3386),
														BgL_resz00_3363);
												}
												return bgl_reverse_bang(BgL_arg3036z00_3385);
											}
										}
									}
								}
							}
					}
			}
		}

	}



/* parse-fun-opt-args */
	obj_t BGl_parsezd2funzd2optzd2argszd2zzast_unitz00(obj_t BgL_argsz00_90,
		obj_t BgL_srcz00_91, obj_t BgL_locz00_92)
	{
		{	/* Ast/unit.scm 663 */
			{	/* Ast/unit.scm 664 */
				obj_t BgL_arg3042z00_3389;
				obj_t BgL_arg3043z00_3390;

				{	/* Ast/unit.scm 664 */
					obj_t BgL_l1329z00_3391;

					BgL_l1329z00_3391 =
						BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_90);
					if (NULLP(BgL_l1329z00_3391))
						{	/* Ast/unit.scm 664 */
							BgL_arg3042z00_3389 = BNIL;
						}
					else
						{	/* Ast/unit.scm 664 */
							obj_t BgL_head1331z00_3393;

							{	/* Ast/unit.scm 664 */
								obj_t BgL_res3624z00_4904;

								BgL_res3624z00_4904 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1331z00_3393 = BgL_res3624z00_4904;
							}
							{
								obj_t BgL_l1329z00_3395;
								obj_t BgL_tail1332z00_3396;

								BgL_l1329z00_3395 = BgL_l1329z00_3391;
								BgL_tail1332z00_3396 = BgL_head1331z00_3393;
							BgL_zc3z04anonymousza33045ze3z87_3397:
								if (NULLP(BgL_l1329z00_3395))
									{	/* Ast/unit.scm 664 */
										BgL_arg3042z00_3389 = CDR(BgL_head1331z00_3393);
									}
								else
									{	/* Ast/unit.scm 664 */
										obj_t BgL_newtail1333z00_3399;

										{	/* Ast/unit.scm 664 */
											BgL_localz00_bglt BgL_arg3049z00_3401;

											{	/* Ast/unit.scm 664 */
												obj_t BgL_az00_3402;

												BgL_az00_3402 = CAR(((obj_t) BgL_l1329z00_3395));
												{	/* Ast/unit.scm 665 */
													obj_t BgL_pidz00_3403;

													BgL_pidz00_3403 =
														BGl_checkzd2idzd2zzast_identz00
														(BGl_parsezd2idzd2zzast_identz00(BgL_az00_3402,
															BgL_locz00_92), BgL_srcz00_91);
													{	/* Ast/unit.scm 665 */
														obj_t BgL_idz00_3404;

														BgL_idz00_3404 = CAR(BgL_pidz00_3403);
														{	/* Ast/unit.scm 666 */
															obj_t BgL_typez00_3405;

															BgL_typez00_3405 = CDR(BgL_pidz00_3403);
															{	/* Ast/unit.scm 667 */

																if (BGl_userzd2symbolzf3z21zzast_identz00
																	(BgL_idz00_3404))
																	{	/* Ast/unit.scm 668 */
																		BgL_arg3049z00_3401 =
																			BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																			(BgL_idz00_3404,
																			((BgL_typez00_bglt) BgL_typez00_3405));
																	}
																else
																	{	/* Ast/unit.scm 668 */
																		BgL_arg3049z00_3401 =
																			BGl_makezd2localzd2svarz00zzast_localz00
																			(BgL_idz00_3404,
																			((BgL_typez00_bglt) BgL_typez00_3405));
																	}
															}
														}
													}
												}
											}
											{	/* Ast/unit.scm 664 */
												obj_t BgL_res3626z00_4910;

												BgL_res3626z00_4910 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg3049z00_3401), BNIL);
												BgL_newtail1333z00_3399 = BgL_res3626z00_4910;
											}
										}
										SET_CDR(BgL_tail1332z00_3396, BgL_newtail1333z00_3399);
										{	/* Ast/unit.scm 664 */
											obj_t BgL_arg3047z00_3400;

											BgL_arg3047z00_3400 = CDR(((obj_t) BgL_l1329z00_3395));
											{
												obj_t BgL_tail1332z00_7547;
												obj_t BgL_l1329z00_7546;

												BgL_l1329z00_7546 = BgL_arg3047z00_3400;
												BgL_tail1332z00_7547 = BgL_newtail1333z00_3399;
												BgL_tail1332z00_3396 = BgL_tail1332z00_7547;
												BgL_l1329z00_3395 = BgL_l1329z00_7546;
												goto BgL_zc3z04anonymousza33045ze3z87_3397;
											}
										}
									}
							}
						}
				}
				{	/* Ast/unit.scm 672 */
					obj_t BgL_l1334z00_3409;

					BgL_l1334z00_3409 =
						BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_90);
					if (NULLP(BgL_l1334z00_3409))
						{	/* Ast/unit.scm 672 */
							BgL_arg3043z00_3390 = BNIL;
						}
					else
						{	/* Ast/unit.scm 672 */
							obj_t BgL_head1336z00_3411;

							{	/* Ast/unit.scm 672 */
								obj_t BgL_res3628z00_4914;

								BgL_res3628z00_4914 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1336z00_3411 = BgL_res3628z00_4914;
							}
							{
								obj_t BgL_l1334z00_3413;
								obj_t BgL_tail1337z00_3414;

								BgL_l1334z00_3413 = BgL_l1334z00_3409;
								BgL_tail1337z00_3414 = BgL_head1336z00_3411;
							BgL_zc3z04anonymousza33054ze3z87_3415:
								if (NULLP(BgL_l1334z00_3413))
									{	/* Ast/unit.scm 672 */
										BgL_arg3043z00_3390 = CDR(BgL_head1336z00_3411);
									}
								else
									{	/* Ast/unit.scm 672 */
										obj_t BgL_newtail1338z00_3417;

										{	/* Ast/unit.scm 672 */
											BgL_localz00_bglt BgL_arg3061z00_3419;

											{	/* Ast/unit.scm 672 */
												obj_t BgL_oz00_3420;

												BgL_oz00_3420 = CAR(((obj_t) BgL_l1334z00_3413));
												{	/* Ast/unit.scm 673 */
													obj_t BgL_az00_3421;

													BgL_az00_3421 = CAR(((obj_t) BgL_oz00_3420));
													{	/* Ast/unit.scm 673 */
														obj_t BgL_pidz00_3422;

														BgL_pidz00_3422 =
															BGl_checkzd2idzd2zzast_identz00
															(BGl_parsezd2idzd2zzast_identz00(BgL_az00_3421,
																BgL_locz00_92), BgL_srcz00_91);
														{	/* Ast/unit.scm 674 */
															obj_t BgL_idz00_3423;

															BgL_idz00_3423 = CAR(BgL_pidz00_3422);
															{	/* Ast/unit.scm 675 */
																obj_t BgL_typez00_3424;

																BgL_typez00_3424 = CDR(BgL_pidz00_3422);
																{	/* Ast/unit.scm 676 */

																	BgL_arg3061z00_3419 =
																		BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																		(BgL_idz00_3423,
																		((BgL_typez00_bglt) BgL_typez00_3424));
																}
															}
														}
													}
												}
											}
											{	/* Ast/unit.scm 672 */
												obj_t BgL_res3630z00_4921;

												BgL_res3630z00_4921 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg3061z00_3419), BNIL);
												BgL_newtail1338z00_3417 = BgL_res3630z00_4921;
											}
										}
										SET_CDR(BgL_tail1337z00_3414, BgL_newtail1338z00_3417);
										{	/* Ast/unit.scm 672 */
											obj_t BgL_arg3058z00_3418;

											BgL_arg3058z00_3418 = CDR(((obj_t) BgL_l1334z00_3413));
											{
												obj_t BgL_tail1337z00_7571;
												obj_t BgL_l1334z00_7570;

												BgL_l1334z00_7570 = BgL_arg3058z00_3418;
												BgL_tail1337z00_7571 = BgL_newtail1338z00_3417;
												BgL_tail1337z00_3414 = BgL_tail1337z00_7571;
												BgL_l1334z00_3413 = BgL_l1334z00_7570;
												goto BgL_zc3z04anonymousza33054ze3z87_3415;
											}
										}
									}
							}
						}
				}
				return
					BGl_appendzd221011zd2zzast_unitz00(BgL_arg3042z00_3389,
					BgL_arg3043z00_3390);
			}
		}

	}



/* make-svar-definition */
	obj_t BGl_makezd2svarzd2definitionz00zzast_unitz00(obj_t BgL_idz00_100,
		obj_t BgL_srcz00_101)
	{
		{	/* Ast/unit.scm 691 */
			BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(BgL_idz00_100,
				BGl_za2moduleza2z00zzmodule_modulez00, BgL_srcz00_101,
				CNST_TABLE_REF(((long) 8)));
			{	/* Ast/unit.scm 695 */
				obj_t BgL_arg3067z00_3431;
				obj_t BgL_arg3070z00_3432;

				BgL_arg3067z00_3431 = CDR(((obj_t) BgL_srcz00_101));
				BgL_arg3070z00_3432 =
					CAR(BGl_checkzd2idzd2zzast_identz00(BGl_parsezd2idzd2zzast_identz00
						(BgL_idz00_100,
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_101)),
						BgL_srcz00_101));
				{	/* Ast/unit.scm 695 */
					obj_t BgL_tmpz00_7581;

					BgL_tmpz00_7581 = ((obj_t) BgL_arg3067z00_3431);
					SET_CAR(BgL_tmpz00_7581, BgL_arg3070z00_3432);
			}}
			{	/* Ast/unit.scm 696 */
				obj_t BgL_list3074z00_3436;

				BgL_list3074z00_3436 = MAKE_YOUNG_PAIR(BgL_srcz00_101, BNIL);
				return BgL_list3074z00_3436;
			}
		}

	}



/* make-generic-definition */
	obj_t BGl_makezd2genericzd2definitionz00zzast_unitz00(obj_t BgL_idz00_108,
		obj_t BgL_modulez00_109, obj_t BgL_argsz00_110, obj_t BgL_bodyz00_111,
		obj_t BgL_srcz00_112)
	{
		{	/* Ast/unit.scm 731 */
			{	/* Ast/unit.scm 734 */
				obj_t BgL_optsz00_3470;
				obj_t BgL_keysz00_3471;

				BgL_optsz00_3470 =
					BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_110);
				BgL_keysz00_3471 = BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_110);
				if (NULLP(BgL_optsz00_3470))
					{	/* Ast/unit.scm 737 */
						if (NULLP(BgL_keysz00_3471))
							{	/* Ast/unit.scm 742 */
								return
									BGl_makezd2genericzd2nooptzd2definitionzd2zzast_unitz00
									(BgL_idz00_108, BgL_modulez00_109, BgL_argsz00_110,
									BgL_bodyz00_111, BgL_srcz00_112);
							}
						else
							{	/* Ast/unit.scm 742 */
								return
									BGl_makezd2genericzd2keyzd2definitionzd2zzast_unitz00
									(BgL_keysz00_3471, BgL_idz00_108, BgL_modulez00_109,
									BgL_argsz00_110, BgL_bodyz00_111, BgL_srcz00_112);
							}
					}
				else
					{	/* Ast/unit.scm 738 */
						bool_t BgL_test3933z00_7593;

						{	/* Ast/unit.scm 738 */
							obj_t BgL_arg3138z00_3491;

							{	/* Ast/unit.scm 738 */
								obj_t BgL_arg3141z00_3492;

								{	/* Ast/unit.scm 738 */
									obj_t BgL_hook1343z00_3493;

									BgL_hook1343z00_3493 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
									{
										obj_t BgL_l1340z00_3495;
										obj_t BgL_h1341z00_3496;

										BgL_l1340z00_3495 = BgL_argsz00_110;
										BgL_h1341z00_3496 = BgL_hook1343z00_3493;
									BgL_zc3z04anonymousza33142ze3z87_3497:
										if (NULLP(BgL_l1340z00_3495))
											{	/* Ast/unit.scm 738 */
												BgL_arg3141z00_3492 = CDR(BgL_hook1343z00_3493);
											}
										else
											{	/* Ast/unit.scm 738 */
												bool_t BgL_test3935z00_7598;

												{	/* Ast/unit.scm 738 */
													obj_t BgL_arg3147z00_3504;

													BgL_arg3147z00_3504 =
														CAR(((obj_t) BgL_l1340z00_3495));
													BgL_test3935z00_7598 =
														BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
														(BgL_arg3147z00_3504);
												}
												if (BgL_test3935z00_7598)
													{	/* Ast/unit.scm 738 */
														obj_t BgL_nh1342z00_3500;

														{	/* Ast/unit.scm 738 */
															obj_t BgL_arg3145z00_3502;

															BgL_arg3145z00_3502 =
																CAR(((obj_t) BgL_l1340z00_3495));
															{	/* Ast/unit.scm 738 */
																obj_t BgL_res3635z00_4938;

																BgL_res3635z00_4938 =
																	MAKE_YOUNG_PAIR(BgL_arg3145z00_3502, BNIL);
																BgL_nh1342z00_3500 = BgL_res3635z00_4938;
															}
														}
														SET_CDR(BgL_h1341z00_3496, BgL_nh1342z00_3500);
														{	/* Ast/unit.scm 738 */
															obj_t BgL_arg3143z00_3501;

															BgL_arg3143z00_3501 =
																CDR(((obj_t) BgL_l1340z00_3495));
															{
																obj_t BgL_h1341z00_7609;
																obj_t BgL_l1340z00_7608;

																BgL_l1340z00_7608 = BgL_arg3143z00_3501;
																BgL_h1341z00_7609 = BgL_nh1342z00_3500;
																BgL_h1341z00_3496 = BgL_h1341z00_7609;
																BgL_l1340z00_3495 = BgL_l1340z00_7608;
																goto BgL_zc3z04anonymousza33142ze3z87_3497;
															}
														}
													}
												else
													{	/* Ast/unit.scm 738 */
														obj_t BgL_arg3146z00_3503;

														BgL_arg3146z00_3503 =
															CDR(((obj_t) BgL_l1340z00_3495));
														{
															obj_t BgL_l1340z00_7612;

															BgL_l1340z00_7612 = BgL_arg3146z00_3503;
															BgL_l1340z00_3495 = BgL_l1340z00_7612;
															goto BgL_zc3z04anonymousza33142ze3z87_3497;
														}
													}
											}
									}
								}
								BgL_arg3138z00_3491 = CDR(((obj_t) BgL_arg3141z00_3492));
							}
							BgL_test3933z00_7593 = PAIRP(BgL_arg3138z00_3491);
						}
						if (BgL_test3933z00_7593)
							{	/* Ast/unit.scm 740 */
								obj_t BgL_arg3137z00_3490;

								BgL_arg3137z00_3490 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_112);
								return
									((obj_t)
									BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
									(BGl_string3682z00zzast_unitz00, BgL_srcz00_112,
										BgL_arg3137z00_3490));
							}
						else
							{	/* Ast/unit.scm 738 */
								return
									BGl_makezd2genericzd2optzd2definitionzd2zzast_unitz00
									(BgL_optsz00_3470, BgL_idz00_108, BgL_modulez00_109,
									BgL_argsz00_110, BgL_bodyz00_111, BgL_srcz00_112);
							}
					}
			}
		}

	}



/* make-generic-opt-definition */
	obj_t BGl_makezd2genericzd2optzd2definitionzd2zzast_unitz00(obj_t
		BgL_optionalsz00_113, obj_t BgL_idz00_114, obj_t BgL_modulez00_115,
		obj_t BgL_argsz00_116, obj_t BgL_bodyz00_117, obj_t BgL_srcz00_118)
	{
		{	/* Ast/unit.scm 750 */
			{	/* Ast/unit.scm 751 */
				obj_t BgL_locz00_3507;

				BgL_locz00_3507 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_118);
				{	/* Ast/unit.scm 751 */
					obj_t BgL_genz00_3508;

					BgL_genz00_3508 =
						BGl_makezd2genericzd2nooptzd2definitionzd2zzast_unitz00
						(BgL_idz00_114, BgL_modulez00_115, BgL_argsz00_116, BgL_bodyz00_117,
						BgL_srcz00_118);
					{	/* Ast/unit.scm 752 */
						obj_t BgL_gloz00_3509;

						{	/* Ast/unit.scm 753 */
							obj_t BgL_arg3149z00_3511;

							BgL_arg3149z00_3511 =
								BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_114, BFALSE);
							{	/* Ast/unit.scm 753 */
								obj_t BgL_list3150z00_3512;

								BgL_list3150z00_3512 = MAKE_YOUNG_PAIR(BgL_modulez00_115, BNIL);
								BgL_gloz00_3509 =
									BGl_findzd2globalzd2zzast_envz00(BgL_arg3149z00_3511,
									BgL_list3150z00_3512);
							}
						}
						{	/* Ast/unit.scm 753 */
							BgL_globalz00_bglt BgL_cloz00_3510;

							BgL_cloz00_3510 =
								BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(BgL_gloz00_3509,
								BgL_optionalsz00_113, BgL_idz00_114, BgL_modulez00_115,
								BgL_argsz00_116, BgL_bodyz00_117, BgL_srcz00_118,
								CNST_TABLE_REF(((long) 13)), BgL_locz00_3507);
							{	/* Ast/unit.scm 754 */

								return
									MAKE_YOUNG_PAIR(((obj_t) BgL_cloz00_3510), BgL_genz00_3508);
							}
						}
					}
				}
			}
		}

	}



/* make-generic-key-definition */
	obj_t BGl_makezd2genericzd2keyzd2definitionzd2zzast_unitz00(obj_t
		BgL_keysz00_119, obj_t BgL_idz00_120, obj_t BgL_modulez00_121,
		obj_t BgL_argsz00_122, obj_t BgL_bodyz00_123, obj_t BgL_srcz00_124)
	{
		{	/* Ast/unit.scm 760 */
			{	/* Ast/unit.scm 761 */
				obj_t BgL_locz00_3513;

				BgL_locz00_3513 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_124);
				{	/* Ast/unit.scm 761 */
					obj_t BgL_genz00_3514;

					BgL_genz00_3514 =
						BGl_makezd2genericzd2nooptzd2definitionzd2zzast_unitz00
						(BgL_idz00_120, BgL_modulez00_121, BgL_argsz00_122, BgL_bodyz00_123,
						BgL_srcz00_124);
					{	/* Ast/unit.scm 762 */
						obj_t BgL_gloz00_3515;

						{	/* Ast/unit.scm 763 */
							obj_t BgL_arg3152z00_3517;

							BgL_arg3152z00_3517 =
								BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_120, BFALSE);
							{	/* Ast/unit.scm 763 */
								obj_t BgL_list3153z00_3518;

								BgL_list3153z00_3518 = MAKE_YOUNG_PAIR(BgL_modulez00_121, BNIL);
								BgL_gloz00_3515 =
									BGl_findzd2globalzd2zzast_envz00(BgL_arg3152z00_3517,
									BgL_list3153z00_3518);
							}
						}
						{	/* Ast/unit.scm 763 */
							BgL_globalz00_bglt BgL_cloz00_3516;

							BgL_cloz00_3516 =
								BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(BgL_gloz00_3515,
								BgL_keysz00_119, BgL_idz00_120, BgL_modulez00_121,
								BgL_argsz00_122, BgL_bodyz00_123, BgL_srcz00_124,
								CNST_TABLE_REF(((long) 13)), BgL_locz00_3513);
							{	/* Ast/unit.scm 764 */

								return
									MAKE_YOUNG_PAIR(((obj_t) BgL_cloz00_3516), BgL_genz00_3514);
							}
						}
					}
				}
			}
		}

	}



/* make-generic-noopt-definition */
	obj_t BGl_makezd2genericzd2nooptzd2definitionzd2zzast_unitz00(obj_t
		BgL_idz00_125, obj_t BgL_modulez00_126, obj_t BgL_argsz00_127,
		obj_t BgL_bodyz00_128, obj_t BgL_srcz00_129)
	{
		{	/* Ast/unit.scm 770 */
			{	/* Ast/unit.scm 793 */
				bool_t BgL_test3936z00_7638;

				if (PAIRP(BgL_argsz00_127))
					{	/* Ast/unit.scm 793 */
						obj_t BgL_tmpz00_7641;

						BgL_tmpz00_7641 = CAR(BgL_argsz00_127);
						BgL_test3936z00_7638 = SYMBOLP(BgL_tmpz00_7641);
					}
				else
					{	/* Ast/unit.scm 793 */
						BgL_test3936z00_7638 = ((bool_t) 0);
					}
				if (BgL_test3936z00_7638)
					{	/* Ast/unit.scm 798 */
						obj_t BgL_locz00_3524;

						BgL_locz00_3524 =
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_129);
						{	/* Ast/unit.scm 798 */
							obj_t BgL_localsz00_3525;

							{	/* Ast/unit.scm 799 */
								bool_t BgL_test3938z00_7645;

								if (BGl_dssslzd2prototypezf3z21zztools_dssslz00
									(BgL_argsz00_127))
									{	/* Ast/unit.scm 800 */
										obj_t BgL_tmpz00_7648;

										BgL_tmpz00_7648 =
											BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_127);
										BgL_test3938z00_7645 = PAIRP(BgL_tmpz00_7648);
									}
								else
									{	/* Ast/unit.scm 799 */
										BgL_test3938z00_7645 = ((bool_t) 0);
									}
								if (BgL_test3938z00_7645)
									{	/* Ast/unit.scm 799 */
										BgL_localsz00_3525 =
											BGl_parsezd2funzd2optzd2argszd2zzast_unitz00
											(BgL_argsz00_127, BgL_srcz00_129, BgL_locz00_3524);
									}
								else
									{	/* Ast/unit.scm 799 */
										BgL_localsz00_3525 =
											BGl_parsezd2funzd2argsz00zzast_unitz00(BgL_argsz00_127,
											BgL_srcz00_129, BgL_locz00_3524);
									}
							}
							{	/* Ast/unit.scm 799 */
								obj_t BgL_pidz00_3526;

								BgL_pidz00_3526 =
									BGl_checkzd2idzd2zzast_identz00
									(BGl_parsezd2idzd2zzast_identz00(BgL_idz00_125,
										BgL_locz00_3524), BgL_srcz00_129);
								{	/* Ast/unit.scm 803 */
									obj_t BgL_namez00_3527;

									BgL_namez00_3527 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CAR(BgL_pidz00_3526));
									{	/* Ast/unit.scm 805 */
										obj_t BgL_gbodyz00_3529;

										BgL_gbodyz00_3529 =
											BGl_makezd2genericzd2bodyz00zzobject_genericz00
											(BgL_idz00_125, BgL_localsz00_3525, BgL_argsz00_127,
											BgL_srcz00_129);
										{	/* Ast/unit.scm 806 */
											BgL_globalz00_bglt BgL_genericz00_3530;

											BgL_genericz00_3530 =
												BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
												(BgL_idz00_125, BgL_argsz00_127, BgL_localsz00_3525,
												BgL_modulez00_126, CNST_TABLE_REF(((long) 52)),
												BgL_srcz00_129, CNST_TABLE_REF(((long) 8)),
												BgL_gbodyz00_3529);
											{	/* Ast/unit.scm 807 */
												obj_t BgL_defz00_3531;

												{	/* Ast/unit.scm 809 */
													obj_t BgL_arg3184z00_3553;

													{	/* Ast/unit.scm 809 */
														obj_t BgL_arg3185z00_3554;
														obj_t BgL_arg3186z00_3555;

														{	/* Ast/unit.scm 809 */
															obj_t BgL_arg3188z00_3556;

															{	/* Ast/unit.scm 809 */
																obj_t BgL_arg3189z00_3557;

																{	/* Ast/unit.scm 809 */
																	obj_t BgL_arg3190z00_3558;
																	obj_t BgL_arg3192z00_3559;

																	{	/* Ast/unit.scm 809 */
																		bool_t BgL_test3940z00_7661;

																		if (BGl_dssslzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_127))
																			{	/* Ast/unit.scm 810 */
																				obj_t BgL_tmpz00_7664;

																				BgL_tmpz00_7664 =
																					BGl_dssslzd2optionalszd2zztools_dssslz00
																					(BgL_argsz00_127);
																				BgL_test3940z00_7661 =
																					PAIRP(BgL_tmpz00_7664);
																			}
																		else
																			{	/* Ast/unit.scm 809 */
																				BgL_test3940z00_7661 = ((bool_t) 0);
																			}
																		if (BgL_test3940z00_7661)
																			{	/* Ast/unit.scm 809 */
																				if (NULLP(BgL_localsz00_3525))
																					{	/* Ast/unit.scm 811 */
																						BgL_arg3190z00_3558 = BNIL;
																					}
																				else
																					{	/* Ast/unit.scm 811 */
																						obj_t BgL_head1346z00_3565;

																						{	/* Ast/unit.scm 811 */
																							obj_t BgL_arg3207z00_3577;

																							BgL_arg3207z00_3577 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_localz00_bglt)
																												CAR(((obj_t)
																														BgL_localsz00_3525))))))->
																								BgL_idz00);
																							{	/* Ast/unit.scm 811 */
																								obj_t BgL_res3645z00_4968;

																								BgL_res3645z00_4968 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg3207z00_3577, BNIL);
																								BgL_head1346z00_3565 =
																									BgL_res3645z00_4968;
																							}
																						}
																						{	/* Ast/unit.scm 811 */
																							obj_t BgL_g1349z00_3566;

																							BgL_g1349z00_3566 =
																								CDR(
																								((obj_t) BgL_localsz00_3525));
																							{
																								obj_t BgL_l1344z00_3568;
																								obj_t BgL_tail1347z00_3569;

																								BgL_l1344z00_3568 =
																									BgL_g1349z00_3566;
																								BgL_tail1347z00_3569 =
																									BgL_head1346z00_3565;
																							BgL_zc3z04anonymousza33197ze3z87_3570:
																								if (NULLP
																									(BgL_l1344z00_3568))
																									{	/* Ast/unit.scm 811 */
																										BgL_arg3190z00_3558 =
																											BgL_head1346z00_3565;
																									}
																								else
																									{	/* Ast/unit.scm 811 */
																										obj_t
																											BgL_newtail1348z00_3572;
																										{	/* Ast/unit.scm 811 */
																											obj_t BgL_arg3204z00_3574;

																											BgL_arg3204z00_3574 =
																												(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_localz00_bglt) CAR(((obj_t) BgL_l1344z00_3568))))))->BgL_idz00);
																											{	/* Ast/unit.scm 811 */
																												obj_t
																													BgL_res3647z00_4973;
																												BgL_res3647z00_4973 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg3204z00_3574,
																													BNIL);
																												BgL_newtail1348z00_3572
																													= BgL_res3647z00_4973;
																											}
																										}
																										SET_CDR
																											(BgL_tail1347z00_3569,
																											BgL_newtail1348z00_3572);
																										{	/* Ast/unit.scm 811 */
																											obj_t BgL_arg3201z00_3573;

																											BgL_arg3201z00_3573 =
																												CDR(
																												((obj_t)
																													BgL_l1344z00_3568));
																											{
																												obj_t
																													BgL_tail1347z00_7689;
																												obj_t BgL_l1344z00_7688;

																												BgL_l1344z00_7688 =
																													BgL_arg3201z00_3573;
																												BgL_tail1347z00_7689 =
																													BgL_newtail1348z00_3572;
																												BgL_tail1347z00_3569 =
																													BgL_tail1347z00_7689;
																												BgL_l1344z00_3568 =
																													BgL_l1344z00_7688;
																												goto
																													BgL_zc3z04anonymousza33197ze3z87_3570;
																											}
																										}
																									}
																							}
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 809 */
																				BgL_arg3190z00_3558 =
																					BGl_typedzd2argsze70z35zzast_unitz00
																					(BgL_argsz00_127,
																					BgL_genericz00_3530);
																			}
																	}
																	{	/* Ast/unit.scm 816 */
																		obj_t BgL_arg3211z00_3581;

																		if (PAIRP(BgL_bodyz00_128))
																			{	/* Ast/unit.scm 816 */
																				BgL_arg3211z00_3581 = BgL_bodyz00_128;
																			}
																		else
																			{	/* Ast/unit.scm 818 */
																				obj_t BgL_arg3214z00_3583;

																				{	/* Ast/unit.scm 818 */
																					obj_t BgL_arg3215z00_3584;
																					obj_t BgL_arg3216z00_3585;

																					{	/* Ast/unit.scm 818 */
																						obj_t BgL_arg3219z00_3586;

																						{	/* Ast/unit.scm 818 */
																							obj_t BgL_arg3222z00_3587;

																							BgL_arg3222z00_3587 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 25)), BNIL);
																							BgL_arg3219z00_3586 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 26)),
																								BgL_arg3222z00_3587);
																						}
																						BgL_arg3215z00_3584 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 0)),
																							BgL_arg3219z00_3586);
																					}
																					{	/* Ast/unit.scm 819 */
																						obj_t BgL_arg3223z00_3588;
																						obj_t BgL_arg3225z00_3589;

																						{	/* Ast/unit.scm 819 */
																							obj_t BgL_arg3226z00_3590;

																							BgL_arg3226z00_3590 =
																								MAKE_YOUNG_PAIR
																								(BgL_namez00_3527, BNIL);
																							BgL_arg3223z00_3588 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 27)),
																								BgL_arg3226z00_3590);
																						}
																						{	/* Ast/unit.scm 820 */
																							obj_t BgL_arg3228z00_3591;

																							BgL_arg3228z00_3591 =
																								MAKE_YOUNG_PAIR
																								(BGl_idzd2ofzd2idz00zzast_identz00
																								(CAR(BgL_argsz00_127),
																									BGl_findzd2locationzd2zztools_locationz00
																									(BgL_srcz00_129)), BNIL);
																							BgL_arg3225z00_3589 =
																								MAKE_YOUNG_PAIR
																								(BGl_string3683z00zzast_unitz00,
																								BgL_arg3228z00_3591);
																						}
																						BgL_arg3216z00_3585 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg3223z00_3588,
																							BgL_arg3225z00_3589);
																					}
																					BgL_arg3214z00_3583 =
																						MAKE_YOUNG_PAIR(BgL_arg3215z00_3584,
																						BgL_arg3216z00_3585);
																				}
																				BgL_arg3211z00_3581 =
																					MAKE_YOUNG_PAIR(BgL_arg3214z00_3583,
																					BNIL);
																			}
																		BgL_arg3192z00_3559 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3211z00_3581, BNIL);
																	}
																	BgL_arg3189z00_3557 =
																		MAKE_YOUNG_PAIR(BgL_arg3190z00_3558,
																		BgL_arg3192z00_3559);
																}
																BgL_arg3188z00_3556 =
																	MAKE_YOUNG_PAIR(BgL_namez00_3527,
																	BgL_arg3189z00_3557);
															}
															BgL_arg3185z00_3554 =
																MAKE_YOUNG_PAIR(BgL_arg3188z00_3556, BNIL);
														}
														BgL_arg3186z00_3555 =
															MAKE_YOUNG_PAIR(BgL_namez00_3527, BNIL);
														BgL_arg3184z00_3553 =
															MAKE_YOUNG_PAIR(BgL_arg3185z00_3554,
															BgL_arg3186z00_3555);
													}
													BgL_defz00_3531 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
														BgL_arg3184z00_3553);
												}
												{	/* Ast/unit.scm 809 */

													BGl_markzd2methodz12zc0zzobject_methodz00
														(BgL_namez00_3527);
													{	/* Ast/unit.scm 829 */
														obj_t BgL_ozd2unitzd2_3532;

														BgL_ozd2unitzd2_3532 =
															BGl_getzd2genericzd2unitz00zzmodule_classz00();
														{	/* Ast/unit.scm 829 */
															BgL_typez00_bglt BgL_typez00_3533;

															BgL_typez00_3533 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				CAR(
																					((obj_t) BgL_localsz00_3525))))))->
																BgL_typez00);
															{	/* Ast/unit.scm 830 */
																obj_t BgL_genz00_3534;

																{	/* Ast/unit.scm 832 */
																	obj_t BgL_arg3164z00_3540;

																	{	/* Ast/unit.scm 832 */
																		obj_t BgL_arg3166z00_3541;
																		obj_t BgL_arg3167z00_3542;

																		{	/* Ast/unit.scm 832 */
																			obj_t BgL_arg3168z00_3543;

																			{	/* Ast/unit.scm 832 */
																				obj_t BgL_arg3172z00_3544;
																				obj_t BgL_arg3174z00_3545;

																				BgL_arg3172z00_3544 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_genericz00_3530)))->
																					BgL_idz00);
																				BgL_arg3174z00_3545 =
																					MAKE_YOUNG_PAIR(BgL_modulez00_126,
																					BNIL);
																				BgL_arg3168z00_3543 =
																					MAKE_YOUNG_PAIR(BgL_arg3172z00_3544,
																					BgL_arg3174z00_3545);
																			}
																			BgL_arg3166z00_3541 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						0)), BgL_arg3168z00_3543);
																		}
																		{	/* Ast/unit.scm 833 */
																			obj_t BgL_arg3175z00_3546;
																			obj_t BgL_arg3177z00_3547;

																			BgL_arg3175z00_3546 =
																				BGl_epairifyzd2propagatezd2locz00zztools_miscz00
																				(BgL_defz00_3531, BgL_locz00_3524);
																			{	/* Ast/unit.scm 834 */
																				obj_t BgL_arg3178z00_3548;
																				obj_t BgL_arg3179z00_3549;

																				{	/* Ast/unit.scm 834 */
																					bool_t BgL_test3945z00_7732;

																					{	/* Ast/unit.scm 834 */
																						bool_t BgL_res3649z00_4981;

																						BgL_res3649z00_4981 =
																							BGl_isazf3zf3zz__objectz00(
																							((obj_t) BgL_typez00_3533),
																							BGl_tclassz00zzobject_classz00);
																						BgL_test3945z00_7732 =
																							BgL_res3649z00_4981;
																					}
																					if (BgL_test3945z00_7732)
																						{
																							BgL_globalz00_bglt
																								BgL_auxz00_7735;
																							{
																								BgL_tclassz00_bglt
																									BgL_auxz00_7736;
																								{
																									obj_t BgL_auxz00_7737;

																									{	/* Ast/unit.scm 834 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_7738;
																										BgL_tmpz00_7738 =
																											((BgL_objectz00_bglt) (
																												(BgL_typez00_bglt)
																												BgL_typez00_3533));
																										BgL_auxz00_7737 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_7738);
																									}
																									BgL_auxz00_7736 =
																										((BgL_tclassz00_bglt)
																										BgL_auxz00_7737);
																								}
																								BgL_auxz00_7735 =
																									(((BgL_tclassz00_bglt)
																										COBJECT(BgL_auxz00_7736))->
																									BgL_holderz00);
																							}
																							BgL_arg3178z00_3548 =
																								((obj_t) BgL_auxz00_7735);
																						}
																					else
																						{	/* Ast/unit.scm 834 */
																							BgL_arg3178z00_3548 = BFALSE;
																						}
																				}
																				{	/* Ast/unit.scm 835 */
																					obj_t BgL_arg3181z00_3551;

																					{	/* Ast/unit.scm 835 */
																						obj_t BgL_res3650z00_4986;

																						{	/* Ast/unit.scm 835 */
																							obj_t BgL_arg1466z00_4985;

																							BgL_arg1466z00_4985 =
																								SYMBOL_TO_STRING
																								(BgL_namez00_3527);
																							BgL_res3650z00_4986 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_4985);
																						}
																						BgL_arg3181z00_3551 =
																							BgL_res3650z00_4986;
																					}
																					BgL_arg3179z00_3549 =
																						MAKE_YOUNG_PAIR(BgL_arg3181z00_3551,
																						BNIL);
																				}
																				BgL_arg3177z00_3547 =
																					MAKE_YOUNG_PAIR(BgL_arg3178z00_3548,
																					BgL_arg3179z00_3549);
																			}
																			BgL_arg3167z00_3542 =
																				MAKE_YOUNG_PAIR(BgL_arg3175z00_3546,
																				BgL_arg3177z00_3547);
																		}
																		BgL_arg3164z00_3540 =
																			MAKE_YOUNG_PAIR(BgL_arg3166z00_3541,
																			BgL_arg3167z00_3542);
																	}
																	BgL_genz00_3534 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 53)),
																		BgL_arg3164z00_3540);
																}
																{	/* Ast/unit.scm 831 */
																	obj_t BgL_sexpza2za2_3535;

																	{	/* Ast/unit.scm 836 */
																		obj_t BgL_list3162z00_3538;

																		{	/* Ast/unit.scm 836 */
																			obj_t BgL_arg3163z00_3539;

																			BgL_arg3163z00_3539 =
																				MAKE_YOUNG_PAIR(BgL_genz00_3534, BNIL);
																			BgL_list3162z00_3538 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_genericz00_3530),
																				BgL_arg3163z00_3539);
																		}
																		BgL_sexpza2za2_3535 = BgL_list3162z00_3538;
																	}
																	{	/* Ast/unit.scm 836 */

																		{	/* Ast/unit.scm 837 */
																			bool_t BgL_test3946z00_7756;

																			if (STRUCTP(BgL_ozd2unitzd2_3532))
																				{	/* Ast/unit.scm 837 */
																					BgL_test3946z00_7756 =
																						(STRUCT_KEY(BgL_ozd2unitzd2_3532) ==
																						CNST_TABLE_REF(((long) 54)));
																				}
																			else
																				{	/* Ast/unit.scm 837 */
																					BgL_test3946z00_7756 = ((bool_t) 0);
																				}
																			if (BgL_test3946z00_7756)
																				{	/* Ast/unit.scm 837 */
																					BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
																						(BgL_ozd2unitzd2_3532,
																						BgL_sexpza2za2_3535);
																					{	/* Ast/unit.scm 841 */
																						obj_t BgL_list3161z00_3537;

																						BgL_list3161z00_3537 =
																							MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																						return BgL_list3161z00_3537;
																					}
																				}
																			else
																				{	/* Ast/unit.scm 837 */
																					return BgL_sexpza2za2_3535;
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
					{	/* Ast/unit.scm 793 */
						BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
							(BGl_string3684z00zzast_unitz00, BgL_srcz00_129,
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_129));
						{	/* Ast/unit.scm 797 */
							obj_t BgL_list3245z00_3603;

							BgL_list3245z00_3603 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							return BgL_list3245z00_3603;
						}
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzast_unitz00(obj_t BgL_argsz00_3619,
		obj_t BgL_formalsz00_3620)
	{
		{	/* Ast/unit.scm 778 */
			{
				obj_t BgL_idz00_3606;

				if (PAIRP(BgL_argsz00_3619))
					{	/* Ast/unit.scm 782 */
						BgL_localz00_bglt BgL_i1126z00_3623;

						BgL_i1126z00_3623 =
							((BgL_localz00_bglt) CAR(((obj_t) BgL_formalsz00_3620)));
						if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
								(BgL_argsz00_3619)))
							{	/* Ast/unit.scm 784 */
								return BgL_argsz00_3619;
							}
						else
							{	/* Ast/unit.scm 786 */
								bool_t BgL_test3950z00_7775;

								{	/* Ast/unit.scm 786 */
									obj_t BgL_arg3276z00_3639;

									BgL_arg3276z00_3639 = CAR(BgL_argsz00_3619);
									{	/* Ast/unit.scm 786 */
										obj_t BgL_tmpz00_7777;

										BgL_idz00_3606 = BgL_arg3276z00_3639;
										{	/* Ast/unit.scm 773 */
											obj_t BgL_arg3251z00_3608;

											{	/* Ast/unit.scm 773 */
												obj_t BgL_res3638z00_4946;

												BgL_res3638z00_4946 =
													SYMBOL_TO_STRING(((obj_t) BgL_idz00_3606));
												BgL_arg3251z00_3608 = BgL_res3638z00_4946;
											}
											{	/* Ast/unit.scm 773 */

												BgL_tmpz00_7777 =
													BGl_stringzd2containszd2zz__r4_strings_6_7z00
													(BgL_arg3251z00_3608, BGl_string3685z00zzast_unitz00,
													(int) (((long) 0)));
										}}
										BgL_test3950z00_7775 = CBOOL(BgL_tmpz00_7777);
								}}
								if (BgL_test3950z00_7775)
									{	/* Ast/unit.scm 787 */
										obj_t BgL_arg3261z00_3628;
										obj_t BgL_arg3262z00_3629;

										BgL_arg3261z00_3628 = CAR(BgL_argsz00_3619);
										{	/* Ast/unit.scm 788 */
											obj_t BgL_arg3263z00_3630;
											obj_t BgL_arg3266z00_3631;

											BgL_arg3263z00_3630 = CDR(BgL_argsz00_3619);
											BgL_arg3266z00_3631 = CDR(((obj_t) BgL_formalsz00_3620));
											BgL_arg3262z00_3629 =
												BGl_loopze70ze7zzast_unitz00(BgL_arg3263z00_3630,
												BgL_arg3266z00_3631);
										}
										return
											MAKE_YOUNG_PAIR(BgL_arg3261z00_3628, BgL_arg3262z00_3629);
									}
								else
									{	/* Ast/unit.scm 790 */
										obj_t BgL_arg3267z00_3632;
										obj_t BgL_arg3268z00_3633;

										{	/* Ast/unit.scm 790 */
											obj_t BgL_arg3269z00_3634;
											obj_t BgL_arg3270z00_3635;

											BgL_arg3269z00_3634 = CAR(BgL_argsz00_3619);
											BgL_arg3270z00_3635 =
												(((BgL_typez00_bglt) COBJECT(
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_i1126z00_3623)))->
															BgL_typez00)))->BgL_idz00);
											BgL_arg3267z00_3632 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_arg3269z00_3634, BgL_arg3270z00_3635);
										}
										{	/* Ast/unit.scm 791 */
											obj_t BgL_arg3272z00_3637;
											obj_t BgL_arg3273z00_3638;

											BgL_arg3272z00_3637 = CDR(BgL_argsz00_3619);
											BgL_arg3273z00_3638 = CDR(((obj_t) BgL_formalsz00_3620));
											BgL_arg3268z00_3633 =
												BGl_loopze70ze7zzast_unitz00(BgL_arg3272z00_3637,
												BgL_arg3273z00_3638);
										}
										return
											MAKE_YOUNG_PAIR(BgL_arg3267z00_3632, BgL_arg3268z00_3633);
									}
							}
					}
				else
					{	/* Ast/unit.scm 780 */
						return BgL_argsz00_3619;
					}
			}
		}

	}



/* typed-args~0 */
	obj_t BGl_typedzd2argsze70z35zzast_unitz00(obj_t BgL_argsz00_3612,
		BgL_globalz00_bglt BgL_genericz00_3613)
	{
		{	/* Ast/unit.scm 791 */
			{	/* Ast/unit.scm 777 */
				BgL_sfunz00_bglt BgL_i1125z00_3616;

				BgL_i1125z00_3616 =
					((BgL_sfunz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_genericz00_3613)))->BgL_valuez00));
				return
					BGl_loopze70ze7zzast_unitz00(BgL_argsz00_3612,
					(((BgL_sfunz00_bglt) COBJECT(BgL_i1125z00_3616))->BgL_argsz00));
			}
		}

	}



/* make-method-definition */
	obj_t BGl_makezd2methodzd2definitionz00zzast_unitz00(obj_t BgL_idz00_130,
		obj_t BgL_argsz00_131, obj_t BgL_bodyz00_132, obj_t BgL_srcz00_133)
	{
		{	/* Ast/unit.scm 846 */
			{	/* Ast/unit.scm 847 */
				bool_t BgL_test3951z00_7804;

				if (PAIRP(BgL_argsz00_131))
					{	/* Ast/unit.scm 847 */
						obj_t BgL_tmpz00_7807;

						BgL_tmpz00_7807 = CAR(BgL_argsz00_131);
						BgL_test3951z00_7804 = SYMBOLP(BgL_tmpz00_7807);
					}
				else
					{	/* Ast/unit.scm 847 */
						BgL_test3951z00_7804 = ((bool_t) 0);
					}
				if (BgL_test3951z00_7804)
					{	/* Ast/unit.scm 852 */
						obj_t BgL_locz00_3647;

						BgL_locz00_3647 =
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_133);
						{	/* Ast/unit.scm 852 */
							obj_t BgL_localsz00_3648;

							BgL_localsz00_3648 =
								BGl_parsezd2funzd2argsz00zzast_unitz00(BgL_argsz00_131,
								BgL_srcz00_133, BgL_locz00_3647);
							{	/* Ast/unit.scm 853 */

								if (BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2
									(BgL_idz00_130, BgL_argsz00_131, BgL_localsz00_3648,
										BgL_srcz00_133))
									{	/* Ast/unit.scm 856 */
										obj_t BgL_ozd2unitzd2_3650;

										BgL_ozd2unitzd2_3650 =
											BGl_getzd2methodzd2unitz00zzmodule_classz00();
										{	/* Ast/unit.scm 856 */
											obj_t BgL_sexpza2za2_3651;

											BgL_sexpza2za2_3651 =
												BGl_makezd2methodzd2bodyz00zzast_unitz00(BgL_idz00_130,
												BgL_argsz00_131, BgL_localsz00_3648, BgL_bodyz00_132,
												BgL_srcz00_133, BgL_locz00_3647);
											{	/* Ast/unit.scm 857 */

												{	/* Ast/unit.scm 858 */
													bool_t BgL_test3954z00_7816;

													if (STRUCTP(BgL_ozd2unitzd2_3650))
														{	/* Ast/unit.scm 858 */
															BgL_test3954z00_7816 =
																(STRUCT_KEY(BgL_ozd2unitzd2_3650) ==
																CNST_TABLE_REF(((long) 54)));
														}
													else
														{	/* Ast/unit.scm 858 */
															BgL_test3954z00_7816 = ((bool_t) 0);
														}
													if (BgL_test3954z00_7816)
														{	/* Ast/unit.scm 858 */
															BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
																(BgL_ozd2unitzd2_3650, BgL_sexpza2za2_3651);
															{	/* Ast/unit.scm 862 */
																obj_t BgL_list3284z00_3653;

																BgL_list3284z00_3653 =
																	MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																return BgL_list3284z00_3653;
															}
														}
													else
														{	/* Ast/unit.scm 858 */
															return BgL_sexpza2za2_3651;
														}
												}
											}
										}
									}
								else
									{	/* Ast/unit.scm 855 */
										obj_t BgL_list3285z00_3654;

										BgL_list3285z00_3654 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
										return BgL_list3285z00_3654;
									}
							}
						}
					}
				else
					{	/* Ast/unit.scm 847 */
						BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
							(BGl_string3686z00zzast_unitz00, BgL_srcz00_133,
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_133));
						{	/* Ast/unit.scm 851 */
							obj_t BgL_list3287z00_3656;

							BgL_list3287z00_3656 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							return BgL_list3287z00_3656;
						}
					}
			}
		}

	}



/* make-method-body */
	obj_t BGl_makezd2methodzd2bodyz00zzast_unitz00(obj_t BgL_identz00_134,
		obj_t BgL_argsz00_135, obj_t BgL_localsz00_136, obj_t BgL_bodyz00_137,
		obj_t BgL_srcz00_138, obj_t BgL_locz00_139)
	{
		{	/* Ast/unit.scm 868 */
			if (BGl_dssslzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_135))
				{	/* Ast/unit.scm 870 */
					if (BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00
						(BgL_argsz00_135))
						{	/* Ast/unit.scm 873 */
							obj_t BgL_localsz00_3661;

							BgL_localsz00_3661 =
								BGl_parsezd2funzd2optzd2argszd2zzast_unitz00(BgL_argsz00_135,
								BgL_srcz00_138, BgL_locz00_139);
							{	/* Ast/unit.scm 874 */
								obj_t BgL_arg3294z00_3662;

								if (NULLP(BgL_localsz00_3661))
									{	/* Ast/unit.scm 874 */
										BgL_arg3294z00_3662 = BNIL;
									}
								else
									{	/* Ast/unit.scm 874 */
										obj_t BgL_head1352z00_3665;

										{	/* Ast/unit.scm 874 */
											obj_t BgL_arg3309z00_3677;

											BgL_arg3309z00_3677 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_localsz00_3661))))))->BgL_idz00);
											{	/* Ast/unit.scm 874 */
												obj_t BgL_res3664z00_5009;

												BgL_res3664z00_5009 =
													MAKE_YOUNG_PAIR(BgL_arg3309z00_3677, BNIL);
												BgL_head1352z00_3665 = BgL_res3664z00_5009;
											}
										}
										{	/* Ast/unit.scm 874 */
											obj_t BgL_g1355z00_3666;

											BgL_g1355z00_3666 = CDR(((obj_t) BgL_localsz00_3661));
											{
												obj_t BgL_l1350z00_3668;
												obj_t BgL_tail1353z00_3669;

												BgL_l1350z00_3668 = BgL_g1355z00_3666;
												BgL_tail1353z00_3669 = BgL_head1352z00_3665;
											BgL_zc3z04anonymousza33296ze3z87_3670:
												if (NULLP(BgL_l1350z00_3668))
													{	/* Ast/unit.scm 874 */
														BgL_arg3294z00_3662 = BgL_head1352z00_3665;
													}
												else
													{	/* Ast/unit.scm 874 */
														obj_t BgL_newtail1354z00_3672;

														{	/* Ast/unit.scm 874 */
															obj_t BgL_arg3307z00_3674;

															BgL_arg3307z00_3674 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				CAR(
																					((obj_t) BgL_l1350z00_3668))))))->
																BgL_idz00);
															{	/* Ast/unit.scm 874 */
																obj_t BgL_res3666z00_5014;

																BgL_res3666z00_5014 =
																	MAKE_YOUNG_PAIR(BgL_arg3307z00_3674, BNIL);
																BgL_newtail1354z00_3672 = BgL_res3666z00_5014;
															}
														}
														SET_CDR(BgL_tail1353z00_3669,
															BgL_newtail1354z00_3672);
														{	/* Ast/unit.scm 874 */
															obj_t BgL_arg3306z00_3673;

															BgL_arg3306z00_3673 =
																CDR(((obj_t) BgL_l1350z00_3668));
															{
																obj_t BgL_tail1353z00_7855;
																obj_t BgL_l1350z00_7854;

																BgL_l1350z00_7854 = BgL_arg3306z00_3673;
																BgL_tail1353z00_7855 = BgL_newtail1354z00_3672;
																BgL_tail1353z00_3669 = BgL_tail1353z00_7855;
																BgL_l1350z00_3668 = BgL_l1350z00_7854;
																goto BgL_zc3z04anonymousza33296ze3z87_3670;
															}
														}
													}
											}
										}
									}
								return
									BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00
									(BgL_identz00_134, BgL_arg3294z00_3662, BgL_localsz00_3661,
									BgL_bodyz00_137, BgL_srcz00_138);
							}
						}
					else
						{	/* Ast/unit.scm 872 */
							return
								BGl_makezd2methodzd2dssslzd2bodyzd2zzobject_methodz00
								(BgL_identz00_134, BgL_argsz00_135, BgL_localsz00_136,
								BgL_bodyz00_137, BgL_srcz00_138);
						}
				}
			else
				{	/* Ast/unit.scm 870 */
					return
						BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00
						(BgL_identz00_134, BgL_argsz00_135, BgL_localsz00_136,
						BgL_bodyz00_137, BgL_srcz00_138);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_unitz00()
	{
		{	/* Ast/unit.scm 21 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 502577506),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 469204214),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_genericz00(((long) 3605863),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_methodz00(((long) 493120746),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string3687z00zzast_unitz00));
		}

	}

#ifdef __cplusplus
}
#endif
