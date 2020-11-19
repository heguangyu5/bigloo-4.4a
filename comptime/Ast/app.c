/*===========================================================================*/
/*   (Ast/app.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/app.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

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

	typedef struct BgL_privatez00_bgl
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
	}                 *BgL_privatez00_bglt;

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

	typedef struct BgL_vrefz00_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	extern obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62makezd2appzd2nodez62zzast_appz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_appz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static bool_t BGl_atomiczf3ze70z14zzast_appz00(obj_t);
	BGL_IMPORT obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	static obj_t BGl_makezd2argszd2listze70ze7zzast_appz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzast_appz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_appz00();
	static obj_t BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(obj_t,
		BgL_varz00_bglt, obj_t);
	extern bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_IMPORT long bgl_list_length(obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_appz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_vallocz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzast_appz00(obj_t, BgL_variablez00_bglt, obj_t);
	static BgL_nodezf2effectzf2_bglt BGl_loopze71ze7zzast_appz00(obj_t,
		BgL_sfunz00_bglt, BgL_varz00_bglt, BgL_variablez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static long BGl_checkzd2userzd2appz00zzast_appz00(BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_appz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern obj_t BGl_za2voidza2z00zztype_cachez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(obj_t, BgL_varz00_bglt,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_appz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	static BgL_nodez00_bglt BGl_z62applicationzd2ze3nodez53zzast_appz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62correctzd2arityzd2appzf3z91zzast_appz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static obj_t BGl_makezd2thezd2appze70ze7zzast_appz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_appz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_appz00();
	static BgL_nodez00_bglt BGl_makezd2vazd2appzd2nodezd2zzast_appz00(long, obj_t,
		obj_t, BgL_varz00_bglt, obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_appz00();
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	static BgL_nodez00_bglt BGl_makezd2keyszd2appzd2nodezd2zzast_appz00(obj_t,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00(obj_t, obj_t, obj_t,
		BgL_varz00_bglt, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static BgL_nodez00_bglt
		BGl_cleanzd2userzd2nodez12z12zzast_appz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[22];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2appzd2nodezd2envzd2zzast_appz00,
		BgL_bgl_za762makeza7d2appza7d22459za7,
		BGl_z62makezd2appzd2nodez62zzast_appz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2433z00zzast_appz00,
		BgL_bgl_string2433za700za7za7a2460za7, "] args expected, ", 17);
	      DEFINE_STRING(BGl_string2434z00zzast_appz00,
		BgL_bgl_string2434za700za7za7a2461za7, "..", 2);
	      DEFINE_STRING(BGl_string2435z00zzast_appz00,
		BgL_bgl_string2435za700za7za7a2462za7, "[", 1);
	      DEFINE_STRING(BGl_string2436z00zzast_appz00,
		BgL_bgl_string2436za700za7za7a2463za7, " arg(s) expected, ", 18);
	      DEFINE_STRING(BGl_string2437z00zzast_appz00,
		BgL_bgl_string2437za700za7za7a2464za7, " or more arg(s) expected, ", 26);
	      DEFINE_STRING(BGl_string2438z00zzast_appz00,
		BgL_bgl_string2438za700za7za7a2465za7, " provided", 9);
	      DEFINE_STRING(BGl_string2439z00zzast_appz00,
		BgL_bgl_string2439za700za7za7a2466za7, "Illegal application: ", 21);
	      DEFINE_STRING(BGl_string2440z00zzast_appz00,
		BgL_bgl_string2440za700za7za7a2467za7, "Illegal duplicated key", 22);
	      DEFINE_STRING(BGl_string2441z00zzast_appz00,
		BgL_bgl_string2441za700za7za7a2468za7, "Illegal keyword(s) argument(s)",
		30);
	      DEFINE_STRING(BGl_string2442z00zzast_appz00,
		BgL_bgl_string2442za700za7za7a2469za7, "Illegal keyword application", 27);
	      DEFINE_STRING(BGl_string2443z00zzast_appz00,
		BgL_bgl_string2443za700za7za7a2470za7, "($1)", 4);
	      DEFINE_STRING(BGl_string2444z00zzast_appz00,
		BgL_bgl_string2444za700za7za7a2471za7, "($1,$2)", 7);
	      DEFINE_STRING(BGl_string2445z00zzast_appz00,
		BgL_bgl_string2445za700za7za7a2472za7, "-ur", 3);
	      DEFINE_STRING(BGl_string2446z00zzast_appz00,
		BgL_bgl_string2446za700za7za7a2473za7, "($1,$2,$3)", 10);
	      DEFINE_STRING(BGl_string2447z00zzast_appz00,
		BgL_bgl_string2447za700za7za7a2474za7, "make-special-app-node", 21);
	      DEFINE_STRING(BGl_string2448z00zzast_appz00,
		BgL_bgl_string2448za700za7za7a2475za7, "Illegal application", 19);
	      DEFINE_STRING(BGl_string2449z00zzast_appz00,
		BgL_bgl_string2449za700za7za7a2476za7, "ast_app", 7);
	      DEFINE_STRING(BGl_string2450z00zzast_appz00,
		BgL_bgl_string2450za700za7za7a2477za7,
		"$create-vector $vector-set-ur! $vector-set! $vector-ref-ur $vector-ref $vector-length $vector? c-eq? $cons foreign list \077\077? (c-eq? $vector? $vector-length $vector-ref $vector-ref-ur $vector-set! $vector-set-ur! $create-vector) let* @ quote arg (@ list __r4_pairs_and_lists_6_3) fun value (quote ()) app ",
		303);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_correctzd2arityzd2appzf3zd2envz21zzast_appz00,
		BgL_bgl_za762correctza7d2ari2478z00,
		BGl_z62correctzd2arityzd2appzf3z91zzast_appz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_applicationzd2ze3nodezd2envze3zzast_appz00,
		BgL_bgl_za762applicationza7d2479z00,
		BGl_z62applicationzd2ze3nodez53zzast_appz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_appz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long
		BgL_checksumz00_3145, char *BgL_fromz00_3146)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_appz00))
				{
					BGl_requirezd2initializa7ationz75zzast_appz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_appz00();
					BGl_libraryzd2moduleszd2initz00zzast_appz00();
					BGl_cnstzd2initzd2zzast_appz00();
					BGl_importedzd2moduleszd2initz00zzast_appz00();
					return BGl_methodzd2initzd2zzast_appz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_app");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			{	/* Ast/app.scm 14 */
				obj_t BgL_cportz00_3117;

				{	/* Ast/app.scm 14 */
					obj_t BgL_stringz00_3125;

					BgL_stringz00_3125 = BGl_string2450z00zzast_appz00;
					{	/* Ast/app.scm 14 */
						obj_t BgL_startz00_3126;

						BgL_startz00_3126 = BINT(((long) 0));
						{	/* Ast/app.scm 14 */
							obj_t BgL_endz00_3127;

							BgL_endz00_3127 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3125)));
							{	/* Ast/app.scm 14 */

								BgL_cportz00_3117 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3125, BgL_startz00_3126, BgL_endz00_3127);
				}}}}
				{
					long BgL_iz00_3118;

					BgL_iz00_3118 = ((long) 21);
				BgL_loopz00_3119:
					if ((BgL_iz00_3118 == ((long) -1)))
						{	/* Ast/app.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/app.scm 14 */
							{	/* Ast/app.scm 14 */
								obj_t BgL_arg2452z00_3121;

								{	/* Ast/app.scm 14 */

									{	/* Ast/app.scm 14 */
										obj_t BgL_locationz00_3123;

										BgL_locationz00_3123 = BBOOL(((bool_t) 0));
										{	/* Ast/app.scm 14 */

											BgL_arg2452z00_3121 =
												BGl_readz00zz__readerz00(BgL_cportz00_3117,
												BgL_locationz00_3123);
										}
									}
								}
								{	/* Ast/app.scm 14 */
									int BgL_tmpz00_3174;

									BgL_tmpz00_3174 = (int) (BgL_iz00_3118);
									CNST_TABLE_SET(BgL_tmpz00_3174, BgL_arg2452z00_3121);
							}}
							{	/* Ast/app.scm 14 */
								int BgL_auxz00_3124;

								BgL_auxz00_3124 = (int) ((BgL_iz00_3118 - ((long) 1)));
								{
									long BgL_iz00_3179;

									BgL_iz00_3179 = (long) (BgL_auxz00_3124);
									BgL_iz00_3118 = BgL_iz00_3179;
									goto BgL_loopz00_3119;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_appz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1413;

				BgL_headz00_1413 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1414;
					obj_t BgL_tailz00_1415;

					BgL_prevz00_1414 = BgL_headz00_1413;
					BgL_tailz00_1415 = BgL_l1z00_1;
				BgL_loopz00_1416:
					if (PAIRP(BgL_tailz00_1415))
						{
							obj_t BgL_newzd2prevzd2_1418;

							BgL_newzd2prevzd2_1418 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1415), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1414, BgL_newzd2prevzd2_1418);
							{
								obj_t BgL_tailz00_3189;
								obj_t BgL_prevz00_3188;

								BgL_prevz00_3188 = BgL_newzd2prevzd2_1418;
								BgL_tailz00_3189 = CDR(BgL_tailz00_1415);
								BgL_tailz00_1415 = BgL_tailz00_3189;
								BgL_prevz00_1414 = BgL_prevz00_3188;
								goto BgL_loopz00_1416;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1413);
				}
			}
		}

	}



/* correct-arity-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt
		BgL_varz00_3, obj_t BgL_argsz00_4)
	{
		{	/* Ast/app.scm 40 */
			{	/* Ast/app.scm 41 */
				long BgL_nbzd2argszd2_1422;

				BgL_nbzd2argszd2_1422 = bgl_list_length(BgL_argsz00_4);
				{	/* Ast/app.scm 42 */
					long BgL_arityz00_1423;

					BgL_arityz00_1423 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3))->
										BgL_valuez00))))->BgL_arityz00);
					{	/* Ast/app.scm 43 */

						if ((BgL_arityz00_1423 == ((long) -1)))
							{	/* Ast/app.scm 45 */
								return ((bool_t) 1);
							}
						else
							{	/* Ast/app.scm 45 */
								if ((BgL_arityz00_1423 >= ((long) 0)))
									{	/* Ast/app.scm 47 */
										return (BgL_arityz00_1423 == BgL_nbzd2argszd2_1422);
									}
								else
									{	/* Ast/app.scm 47 */
										return
											(
											(NEG(BgL_arityz00_1423) -
												(BgL_nbzd2argszd2_1422 + ((long) 1))) <= ((long) 0));
		}}}}}}

	}



/* &correct-arity-app? */
	obj_t BGl_z62correctzd2arityzd2appzf3z91zzast_appz00(obj_t BgL_envz00_3093,
		obj_t BgL_varz00_3094, obj_t BgL_argsz00_3095)
	{
		{	/* Ast/app.scm 40 */
			return
				BBOOL(BGl_correctzd2arityzd2appzf3zf3zzast_appz00(
					((BgL_variablez00_bglt) BgL_varz00_3094), BgL_argsz00_3095));
		}

	}



/* clean-user-node! */
	BgL_nodez00_bglt BGl_cleanzd2userzd2nodez12z12zzast_appz00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Ast/app.scm 58 */
			{
				BgL_nodez00_bglt BgL_walkz00_1430;

				BgL_walkz00_1430 = BgL_nodez00_5;
			BgL_zc3z04anonymousza31365ze3z87_1431:
				{	/* Ast/app.scm 60 */
					bool_t BgL_test2485z00_3208;

					{	/* Ast/app.scm 60 */
						bool_t BgL_res2277z00_2510;

						BgL_res2277z00_2510 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_walkz00_1430), BGl_letzd2varzd2zzast_nodez00);
						BgL_test2485z00_3208 = BgL_res2277z00_2510;
					}
					if (BgL_test2485z00_3208)
						{	/* Ast/app.scm 60 */
							{	/* Ast/app.scm 62 */
								obj_t BgL_g1289z00_1433;

								BgL_g1289z00_1433 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_walkz00_1430)))->
									BgL_bindingsz00);
								{
									obj_t BgL_l1287z00_1435;

									BgL_l1287z00_1435 = BgL_g1289z00_1433;
								BgL_zc3z04anonymousza31367ze3z87_1436:
									if (PAIRP(BgL_l1287z00_1435))
										{	/* Ast/app.scm 64 */
											{	/* Ast/app.scm 63 */
												obj_t BgL_bindingz00_1438;

												BgL_bindingz00_1438 = CAR(BgL_l1287z00_1435);
												{	/* Ast/app.scm 63 */
													obj_t BgL_arg1370z00_1439;

													BgL_arg1370z00_1439 =
														CAR(((obj_t) BgL_bindingz00_1438));
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			BgL_arg1370z00_1439))))->BgL_userzf3zf3) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
												}
											}
											{
												obj_t BgL_l1287z00_3221;

												BgL_l1287z00_3221 = CDR(BgL_l1287z00_1435);
												BgL_l1287z00_1435 = BgL_l1287z00_3221;
												goto BgL_zc3z04anonymousza31367ze3z87_1436;
											}
										}
									else
										{	/* Ast/app.scm 64 */
											((bool_t) 1);
										}
								}
							}
							{	/* Ast/app.scm 65 */
								BgL_nodez00_bglt BgL_arg1372z00_1442;

								BgL_arg1372z00_1442 =
									(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_walkz00_1430)))->
									BgL_bodyz00);
								{
									BgL_nodez00_bglt BgL_walkz00_3225;

									BgL_walkz00_3225 = BgL_arg1372z00_1442;
									BgL_walkz00_1430 = BgL_walkz00_3225;
									goto BgL_zc3z04anonymousza31365ze3z87_1431;
								}
							}
						}
					else
						{	/* Ast/app.scm 60 */
							return BgL_nodez00_5;
						}
				}
			}
		}

	}



/* application->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_applicationzd2ze3nodez31zzast_appz00(obj_t BgL_expz00_6,
		obj_t BgL_stackz00_7, obj_t BgL_locz00_8, obj_t BgL_sitez00_9)
	{
		{	/* Ast/app.scm 74 */
			{
				obj_t BgL_expz00_1552;
				obj_t BgL_expz00_1568;
				obj_t BgL_locz00_1569;
				BgL_varz00_bglt BgL_funz00_1570;
				obj_t BgL_argsz00_1571;

				{	/* Ast/app.scm 142 */
					obj_t BgL_locz00_1447;

					BgL_locz00_1447 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_6,
						BgL_locz00_8);
					{	/* Ast/app.scm 142 */
						obj_t BgL_errzd2nbzd2_1448;

						BgL_errzd2nbzd2_1448 =
							BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
						{	/* Ast/app.scm 143 */
							obj_t BgL_debugstampz00_1449;

							{	/* Ast/app.scm 144 */

								{	/* Ast/app.scm 144 */

									BgL_debugstampz00_1449 =
										BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Ast/app.scm 144 */
								BgL_nodez00_bglt BgL_funz00_1450;

								{	/* Ast/app.scm 145 */
									obj_t BgL_arg1540z00_1519;

									BgL_arg1540z00_1519 = CAR(((obj_t) BgL_expz00_6));
									BgL_funz00_1450 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1540z00_1519,
										BgL_stackz00_7, BgL_locz00_1447,
										CNST_TABLE_REF(((long) 0)));
								}
								{	/* Ast/app.scm 145 */
									bool_t BgL_funzd2errzf3z21_1451;

									BgL_funzd2errzf3z21_1451 =
										(
										(long)
										CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
										(long) CINT(BgL_errzd2nbzd2_1448));
									{	/* Ast/app.scm 146 */

										{	/* Ast/app.scm 147 */
											bool_t BgL_test2487z00_3235;

											{	/* Ast/app.scm 147 */
												bool_t BgL_test2488z00_3236;

												BgL_expz00_1552 = BgL_expz00_6;
												{
													obj_t BgL_expz00_1555;

													BgL_expz00_1555 = BgL_expz00_1552;
												BgL_zc3z04anonymousza31590ze3z87_1556:
													if (NULLP(BgL_expz00_1555))
														{	/* Ast/app.scm 94 */
															BgL_test2488z00_3236 = ((bool_t) 1);
														}
													else
														{	/* Ast/app.scm 94 */
															if (BGl_atomiczf3ze70z14zzast_appz00(CAR(
																		((obj_t) BgL_expz00_1555))))
																{	/* Ast/app.scm 97 */
																	obj_t BgL_arg1597z00_1560;

																	BgL_arg1597z00_1560 =
																		CDR(((obj_t) BgL_expz00_1555));
																	{
																		obj_t BgL_expz00_3245;

																		BgL_expz00_3245 = BgL_arg1597z00_1560;
																		BgL_expz00_1555 = BgL_expz00_3245;
																		goto BgL_zc3z04anonymousza31590ze3z87_1556;
																	}
																}
															else
																{	/* Ast/app.scm 99 */
																	bool_t BgL_test2491z00_3246;

																	{	/* Ast/app.scm 99 */
																		bool_t BgL__ortest_1107z00_1563;

																		{	/* Ast/app.scm 99 */
																			obj_t BgL_arg1605z00_1565;

																			BgL_arg1605z00_1565 =
																				CAR(((obj_t) BgL_expz00_1555));
																			BgL__ortest_1107z00_1563 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_arg1605z00_1565,
																				BGl_atomz00zzast_nodez00);
																		}
																		if (BgL__ortest_1107z00_1563)
																			{	/* Ast/app.scm 99 */
																				BgL_test2491z00_3246 =
																					BgL__ortest_1107z00_1563;
																			}
																		else
																			{	/* Ast/app.scm 99 */
																				obj_t BgL_arg1604z00_1564;

																				BgL_arg1604z00_1564 =
																					CAR(((obj_t) BgL_expz00_1555));
																				BgL_test2491z00_3246 =
																					BGl_isazf3zf3zz__objectz00
																					(BgL_arg1604z00_1564,
																					BGl_varz00zzast_nodez00);
																			}
																	}
																	if (BgL_test2491z00_3246)
																		{	/* Ast/app.scm 100 */
																			obj_t BgL_arg1599z00_1562;

																			BgL_arg1599z00_1562 =
																				CDR(((obj_t) BgL_expz00_1555));
																			{
																				obj_t BgL_expz00_3256;

																				BgL_expz00_3256 = BgL_arg1599z00_1562;
																				BgL_expz00_1555 = BgL_expz00_3256;
																				goto
																					BgL_zc3z04anonymousza31590ze3z87_1556;
																			}
																		}
																	else
																		{	/* Ast/app.scm 99 */
																			BgL_test2488z00_3236 = ((bool_t) 0);
																		}
																}
														}
												}
												if (BgL_test2488z00_3236)
													{	/* Ast/app.scm 147 */
														bool_t BgL_res2295z00_2558;

														BgL_res2295z00_2558 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_funz00_1450),
															BGl_varz00zzast_nodez00);
														BgL_test2487z00_3235 = BgL_res2295z00_2558;
													}
												else
													{	/* Ast/app.scm 147 */
														BgL_test2487z00_3235 = ((bool_t) 0);
													}
											}
											if (BgL_test2487z00_3235)
												{	/* Ast/app.scm 148 */
													obj_t BgL_argsz00_1454;

													BgL_argsz00_1454 = CDR(((obj_t) BgL_expz00_6));
													{	/* Ast/app.scm 148 */
														long BgL_deltaz00_1455;

														BgL_deltaz00_1455 =
															BGl_checkzd2userzd2appz00zzast_appz00(
															((BgL_varz00_bglt) BgL_funz00_1450),
															BgL_argsz00_1454);
														{	/* Ast/app.scm 149 */

															{	/* Ast/app.scm 151 */
																bool_t BgL_test2493z00_3263;

																{	/* Ast/app.scm 151 */
																	bool_t BgL_res2296z00_2560;

																	BgL_res2296z00_2560 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_funz00_1450),
																		BGl_varz00zzast_nodez00);
																	BgL_test2493z00_3263 = BgL_res2296z00_2560;
																}
																if (BgL_test2493z00_3263)
																	{	/* Ast/app.scm 151 */
																		if ((BgL_deltaz00_1455 == ((long) 0)))
																			{	/* Ast/app.scm 153 */
																				return
																					BGl_makezd2appzd2nodez00zzast_appz00
																					(BgL_stackz00_7, BgL_locz00_1447,
																					BgL_sitez00_9,
																					((BgL_varz00_bglt) BgL_funz00_1450),
																					BgL_argsz00_1454);
																			}
																		else
																			{	/* Ast/app.scm 153 */
																				BgL_expz00_1568 = BgL_expz00_6;
																				BgL_locz00_1569 = BgL_locz00_1447;
																				BgL_funz00_1570 =
																					((BgL_varz00_bglt) BgL_funz00_1450);
																				BgL_argsz00_1571 = BgL_argsz00_1454;
																				{	/* Ast/app.scm 103 */
																					BgL_variablez00_bglt BgL_varz00_1573;

																					BgL_varz00_1573 =
																						(((BgL_varz00_bglt)
																							COBJECT(BgL_funz00_1570))->
																						BgL_variablez00);
																					{	/* Ast/app.scm 103 */
																						BgL_valuez00_bglt BgL_funz00_1574;

																						BgL_funz00_1574 =
																							(((BgL_variablez00_bglt)
																								COBJECT(BgL_varz00_1573))->
																							BgL_valuez00);
																						{	/* Ast/app.scm 105 */
																							long BgL_arityz00_1576;

																							{	/* Ast/app.scm 107 */
																								bool_t BgL_test2495z00_3272;

																								{	/* Ast/app.scm 107 */
																									bool_t BgL_res2290z00_2544;

																									BgL_res2290z00_2544 =
																										BGl_isazf3zf3zz__objectz00(
																										((obj_t) BgL_funz00_1574),
																										BGl_funz00zzast_varz00);
																									BgL_test2495z00_3272 =
																										BgL_res2290z00_2544;
																								}
																								if (BgL_test2495z00_3272)
																									{	/* Ast/app.scm 107 */
																										BgL_arityz00_1576 =
																											(((BgL_funz00_bglt)
																												COBJECT((
																														(BgL_funz00_bglt)
																														BgL_funz00_1574)))->
																											BgL_arityz00);
																									}
																								else
																									{	/* Ast/app.scm 107 */
																										BgL_arityz00_1576 =
																											((long) -1);
																							}}
																							{	/* Ast/app.scm 106 */
																								obj_t BgL_expectz00_1577;

																								if (
																									(BgL_arityz00_1576 >=
																										((long) 0)))
																									{	/* Ast/app.scm 112 */
																										if (BGl_sfunzd2optionalzf3z21zzast_varz00(((obj_t) BgL_funz00_1574)))
																											{	/* Ast/app.scm 116 */
																												obj_t
																													BgL_arg1627z00_1587;
																												obj_t
																													BgL_arg1631z00_1588;
																												{	/* Ast/app.scm 116 */

																													BgL_arg1627z00_1587 =
																														BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																														(BINT
																														(BgL_arityz00_1576),
																														BINT(((long) 10)));
																												}
																												{	/* Ast/app.scm 118 */

																													BgL_arg1631z00_1588 =
																														BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																														(BGl_2zb2zb2zz__r4_numbers_6_5z00
																														(BINT
																															(BgL_arityz00_1576),
																															BINT
																															(bgl_list_length((
																																		((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_funz00_1574)))->BgL_optionalsz00)))), BINT(((long) 10)));
																												}
																												{	/* Ast/app.scm 115 */
																													obj_t
																														BgL_list1632z00_1589;
																													{	/* Ast/app.scm 115 */
																														obj_t
																															BgL_arg1634z00_1590;
																														{	/* Ast/app.scm 115 */
																															obj_t
																																BgL_arg1639z00_1591;
																															{	/* Ast/app.scm 115 */
																																obj_t
																																	BgL_arg1640z00_1592;
																																{	/* Ast/app.scm 115 */
																																	obj_t
																																		BgL_arg1641z00_1593;
																																	BgL_arg1641z00_1593
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string2433z00zzast_appz00,
																																		BNIL);
																																	BgL_arg1640z00_1592
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1631z00_1588,
																																		BgL_arg1641z00_1593);
																																}
																																BgL_arg1639z00_1591
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string2434z00zzast_appz00,
																																	BgL_arg1640z00_1592);
																															}
																															BgL_arg1634z00_1590
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1627z00_1587,
																																BgL_arg1639z00_1591);
																														}
																														BgL_list1632z00_1589
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string2435z00zzast_appz00,
																															BgL_arg1634z00_1590);
																													}
																													BgL_expectz00_1577 =
																														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																														(BgL_list1632z00_1589);
																											}}
																										else
																											{	/* Ast/app.scm 114 */
																												if (BGl_sfunzd2keyzf3z21zzast_varz00(((obj_t) BgL_funz00_1574)))
																													{	/* Ast/app.scm 124 */
																														obj_t
																															BgL_arg1664z00_1602;
																														obj_t
																															BgL_arg1667z00_1603;
																														{	/* Ast/app.scm 124 */

																															BgL_arg1664z00_1602
																																=
																																BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																(BINT
																																(BgL_arityz00_1576),
																																BINT(((long)
																																		10)));
																														}
																														{	/* Ast/app.scm 126 */

																															BgL_arg1667z00_1603
																																=
																																BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																(BGl_2zb2zb2zz__r4_numbers_6_5z00
																																(BINT
																																	(BgL_arityz00_1576),
																																	BGl_2za2za2zz__r4_numbers_6_5z00
																																	(BINT(((long)
																																				2)),
																																		BINT
																																		(bgl_list_length
																																			((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_funz00_1574)))->BgL_keysz00))))), BINT(((long) 10)));
																														}
																														{	/* Ast/app.scm 123 */
																															obj_t
																																BgL_list1668z00_1604;
																															{	/* Ast/app.scm 123 */
																																obj_t
																																	BgL_arg1669z00_1605;
																																{	/* Ast/app.scm 123 */
																																	obj_t
																																		BgL_arg1672z00_1606;
																																	{	/* Ast/app.scm 123 */
																																		obj_t
																																			BgL_arg1684z00_1607;
																																		{	/* Ast/app.scm 123 */
																																			obj_t
																																				BgL_arg1685z00_1608;
																																			BgL_arg1685z00_1608
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string2433z00zzast_appz00,
																																				BNIL);
																																			BgL_arg1684z00_1607
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1667z00_1603,
																																				BgL_arg1685z00_1608);
																																		}
																																		BgL_arg1672z00_1606
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string2434z00zzast_appz00,
																																			BgL_arg1684z00_1607);
																																	}
																																	BgL_arg1669z00_1605
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1664z00_1602,
																																		BgL_arg1672z00_1606);
																																}
																																BgL_list1668z00_1604
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string2435z00zzast_appz00,
																																	BgL_arg1669z00_1605);
																															}
																															BgL_expectz00_1577
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list1668z00_1604);
																													}}
																												else
																													{	/* Ast/app.scm 131 */
																														obj_t
																															BgL_arg1695z00_1617;
																														{	/* Ast/app.scm 131 */

																															BgL_arg1695z00_1617
																																=
																																BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																(BINT
																																(BgL_arityz00_1576),
																																BINT(((long)
																																		10)));
																														}
																														BgL_expectz00_1577 =
																															string_append
																															(BgL_arg1695z00_1617,
																															BGl_string2436z00zzast_appz00);
																									}}}
																								else
																									{	/* Ast/app.scm 134 */
																										obj_t BgL_arg1696z00_1620;

																										{	/* Ast/app.scm 134 */

																											BgL_arg1696z00_1620 =
																												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																												(BINT(NEG(
																														(BgL_arityz00_1576 +
																															((long) 1)))),
																												BINT(((long) 10)));
																										}
																										BgL_expectz00_1577 =
																											string_append
																											(BgL_arg1696z00_1620,
																											BGl_string2437z00zzast_appz00);
																									}
																								{	/* Ast/app.scm 111 */
																									obj_t BgL_providez00_1578;

																									{	/* Ast/app.scm 136 */
																										obj_t BgL_arg1613z00_1581;

																										{	/* Ast/app.scm 136 */

																											BgL_arg1613z00_1581 =
																												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																												(BINT(bgl_list_length
																													(BgL_argsz00_1571)),
																												BINT(((long) 10)));
																										}
																										BgL_providez00_1578 =
																											string_append
																											(BgL_arg1613z00_1581,
																											BGl_string2438z00zzast_appz00);
																									}
																									{	/* Ast/app.scm 136 */

																										return
																											BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																											(string_append_3
																											(BGl_string2439z00zzast_appz00,
																												BgL_expectz00_1577,
																												BgL_providez00_1578),
																											BGl_shapez00zztools_shapez00
																											(BgL_expz00_1568),
																											BgL_locz00_1569);
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																	}
																else
																	{	/* Ast/app.scm 151 */
																		return
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(CNST_TABLE_REF(((long) 1)),
																			BgL_stackz00_7, BgL_locz00_1447,
																			CNST_TABLE_REF(((long) 2)));
												}}}}}
											else
												{	/* Ast/app.scm 157 */
													obj_t BgL_g1108z00_1458;

													BgL_g1108z00_1458 = CDR(((obj_t) BgL_expz00_6));
													{
														obj_t BgL_oldzd2argszd2_1462;
														obj_t BgL_newzd2argszd2_1463;
														obj_t BgL_bindingsz00_1464;

														BgL_oldzd2argszd2_1462 = BgL_g1108z00_1458;
														BgL_newzd2argszd2_1463 = BNIL;
														BgL_bindingsz00_1464 = BNIL;
													BgL_zc3z04anonymousza31377ze3z87_1465:
														if (NULLP(BgL_oldzd2argszd2_1462))
															{	/* Ast/app.scm 168 */
																bool_t BgL_test2500z00_3347;

																{	/* Ast/app.scm 168 */
																	bool_t BgL_res2300z00_2567;

																	BgL_res2300z00_2567 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_funz00_1450),
																		BGl_varz00zzast_nodez00);
																	BgL_test2500z00_3347 = BgL_res2300z00_2567;
																}
																if (BgL_test2500z00_3347)
																	{	/* Ast/app.scm 170 */
																		BgL_nodez00_bglt BgL_nodez00_1470;

																		{	/* Ast/app.scm 170 */
																			obj_t BgL_arg1381z00_1471;

																			BgL_arg1381z00_1471 =
																				BGl_makezd2thezd2appze70ze7zzast_appz00
																				(BgL_bindingsz00_1464,
																				BgL_newzd2argszd2_1463,
																				((obj_t) BgL_funz00_1450));
																			BgL_nodez00_1470 =
																				BGl_sexpzd2ze3nodez31zzast_sexpz00
																				(BgL_arg1381z00_1471, BgL_stackz00_7,
																				BgL_locz00_1447, BgL_sitez00_9);
																		}
																		return
																			BGl_cleanzd2userzd2nodez12z12zzast_appz00
																			(BgL_nodez00_1470);
																	}
																else
																	{	/* Ast/app.scm 175 */
																		obj_t BgL_newzd2funzd2_1472;

																		BgL_newzd2funzd2_1472 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 3))));
																		{	/* Ast/app.scm 175 */
																			obj_t BgL_lexpz00_1473;

																			{	/* Ast/app.scm 176 */
																				obj_t BgL_arg1382z00_1475;
																				obj_t BgL_arg1383z00_1476;

																				BgL_arg1382z00_1475 =
																					BGl_letzd2symzd2zzast_letz00();
																				{	/* Ast/app.scm 176 */
																					obj_t BgL_arg1384z00_1477;
																					obj_t BgL_arg1385z00_1478;

																					{	/* Ast/app.scm 176 */
																						obj_t BgL_arg1386z00_1479;

																						{	/* Ast/app.scm 176 */
																							obj_t BgL_arg1387z00_1480;

																							{	/* Ast/app.scm 176 */
																								obj_t BgL_arg1388z00_1481;

																								if (BgL_funzd2errzf3z21_1451)
																									{	/* Ast/app.scm 176 */
																										BgL_arg1388z00_1481 =
																											CNST_TABLE_REF(((long)
																												4));
																									}
																								else
																									{	/* Ast/app.scm 176 */
																										BgL_arg1388z00_1481 =
																											((obj_t) BgL_funz00_1450);
																									}
																								BgL_arg1387z00_1480 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1388z00_1481, BNIL);
																							}
																							BgL_arg1386z00_1479 =
																								MAKE_YOUNG_PAIR
																								(BgL_newzd2funzd2_1472,
																								BgL_arg1387z00_1480);
																						}
																						BgL_arg1384z00_1477 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1386z00_1479, BNIL);
																					}
																					BgL_arg1385z00_1478 =
																						MAKE_YOUNG_PAIR
																						(BGl_makezd2thezd2appze70ze7zzast_appz00
																						(BgL_bindingsz00_1464,
																							BgL_newzd2argszd2_1463,
																							BgL_newzd2funzd2_1472), BNIL);
																					BgL_arg1383z00_1476 =
																						MAKE_YOUNG_PAIR(BgL_arg1384z00_1477,
																						BgL_arg1385z00_1478);
																				}
																				BgL_lexpz00_1473 =
																					MAKE_YOUNG_PAIR(BgL_arg1382z00_1475,
																					BgL_arg1383z00_1476);
																			}
																			{	/* Ast/app.scm 176 */
																				BgL_nodez00_bglt BgL_nodez00_1474;

																				BgL_nodez00_1474 =
																					BGl_sexpzd2ze3nodez31zzast_sexpz00
																					(BgL_lexpz00_1473, BgL_stackz00_7,
																					BgL_locz00_1447, BgL_sitez00_9);
																				{	/* Ast/app.scm 180 */

																					return
																						BGl_cleanzd2userzd2nodez12z12zzast_appz00
																						(BgL_nodez00_1474);
																				}
																			}
																		}
																	}
															}
														else
															{	/* Ast/app.scm 161 */
																if (BGl_atomiczf3ze70z14zzast_appz00(CAR(
																			((obj_t) BgL_oldzd2argszd2_1462))))
																	{	/* Ast/app.scm 183 */
																		obj_t BgL_arg1464z00_1499;
																		obj_t BgL_arg1465z00_1500;

																		BgL_arg1464z00_1499 =
																			CDR(((obj_t) BgL_oldzd2argszd2_1462));
																		{	/* Ast/app.scm 184 */
																			bool_t BgL_test2503z00_3376;

																			{	/* Ast/app.scm 184 */
																				bool_t BgL_res2301z00_2570;

																				BgL_res2301z00_2570 =
																					EPAIRP(BgL_oldzd2argszd2_1462);
																				BgL_test2503z00_3376 =
																					BgL_res2301z00_2570;
																			}
																			if (BgL_test2503z00_3376)
																				{	/* Ast/app.scm 185 */
																					obj_t BgL_arg1474z00_1502;
																					obj_t BgL_arg1476z00_1503;

																					BgL_arg1474z00_1502 =
																						CAR(
																						((obj_t) BgL_oldzd2argszd2_1462));
																					BgL_arg1476z00_1503 =
																						CER(
																						((obj_t) BgL_oldzd2argszd2_1462));
																					{	/* Ast/app.scm 185 */
																						obj_t BgL_res2302z00_2573;

																						BgL_res2302z00_2573 =
																							MAKE_YOUNG_EPAIR
																							(BgL_arg1474z00_1502,
																							BgL_newzd2argszd2_1463,
																							BgL_arg1476z00_1503);
																						BgL_arg1465z00_1500 =
																							BgL_res2302z00_2573;
																					}
																				}
																			else
																				{	/* Ast/app.scm 186 */
																					obj_t BgL_arg1477z00_1504;

																					BgL_arg1477z00_1504 =
																						CAR(
																						((obj_t) BgL_oldzd2argszd2_1462));
																					BgL_arg1465z00_1500 =
																						MAKE_YOUNG_PAIR(BgL_arg1477z00_1504,
																						BgL_newzd2argszd2_1463);
																				}
																		}
																		{
																			obj_t BgL_newzd2argszd2_3387;
																			obj_t BgL_oldzd2argszd2_3386;

																			BgL_oldzd2argszd2_3386 =
																				BgL_arg1464z00_1499;
																			BgL_newzd2argszd2_3387 =
																				BgL_arg1465z00_1500;
																			BgL_newzd2argszd2_1463 =
																				BgL_newzd2argszd2_3387;
																			BgL_oldzd2argszd2_1462 =
																				BgL_oldzd2argszd2_3386;
																			goto
																				BgL_zc3z04anonymousza31377ze3z87_1465;
																		}
																	}
																else
																	{	/* Ast/app.scm 189 */
																		obj_t BgL_newzd2argzd2_1505;

																		BgL_newzd2argzd2_1505 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 5))));
																		{	/* Ast/app.scm 190 */
																			obj_t BgL_arg1489z00_1506;
																			obj_t BgL_arg1493z00_1507;
																			obj_t BgL_arg1495z00_1508;

																			BgL_arg1489z00_1506 =
																				CDR(((obj_t) BgL_oldzd2argszd2_1462));
																			{	/* Ast/app.scm 191 */
																				bool_t BgL_test2504z00_3393;

																				{	/* Ast/app.scm 191 */
																					bool_t BgL_res2303z00_2576;

																					BgL_res2303z00_2576 =
																						EPAIRP(BgL_oldzd2argszd2_1462);
																					BgL_test2504z00_3393 =
																						BgL_res2303z00_2576;
																				}
																				if (BgL_test2504z00_3393)
																					{	/* Ast/app.scm 192 */
																						obj_t BgL_arg1497z00_1510;

																						BgL_arg1497z00_1510 =
																							CER(
																							((obj_t) BgL_oldzd2argszd2_1462));
																						{	/* Ast/app.scm 192 */
																							obj_t BgL_res2304z00_2578;

																							BgL_res2304z00_2578 =
																								MAKE_YOUNG_EPAIR
																								(BgL_newzd2argzd2_1505,
																								BgL_newzd2argszd2_1463,
																								BgL_arg1497z00_1510);
																							BgL_arg1493z00_1507 =
																								BgL_res2304z00_2578;
																						}
																					}
																				else
																					{	/* Ast/app.scm 191 */
																						BgL_arg1493z00_1507 =
																							MAKE_YOUNG_PAIR
																							(BgL_newzd2argzd2_1505,
																							BgL_newzd2argszd2_1463);
																					}
																			}
																			{	/* Ast/app.scm 194 */
																				obj_t BgL_arg1518z00_1511;

																				{	/* Ast/app.scm 194 */
																					obj_t BgL_arg1521z00_1512;

																					BgL_arg1521z00_1512 =
																						CAR(
																						((obj_t) BgL_oldzd2argszd2_1462));
																					{	/* Ast/app.scm 194 */
																						obj_t BgL_list1522z00_1513;

																						{	/* Ast/app.scm 194 */
																							obj_t BgL_arg1528z00_1514;

																							BgL_arg1528z00_1514 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1521z00_1512, BNIL);
																							BgL_list1522z00_1513 =
																								MAKE_YOUNG_PAIR
																								(BgL_newzd2argzd2_1505,
																								BgL_arg1528z00_1514);
																						}
																						BgL_arg1518z00_1511 =
																							BgL_list1522z00_1513;
																					}
																				}
																				BgL_arg1495z00_1508 =
																					MAKE_YOUNG_PAIR(BgL_arg1518z00_1511,
																					BgL_bindingsz00_1464);
																			}
																			{
																				obj_t BgL_bindingsz00_3406;
																				obj_t BgL_newzd2argszd2_3405;
																				obj_t BgL_oldzd2argszd2_3404;

																				BgL_oldzd2argszd2_3404 =
																					BgL_arg1489z00_1506;
																				BgL_newzd2argszd2_3405 =
																					BgL_arg1493z00_1507;
																				BgL_bindingsz00_3406 =
																					BgL_arg1495z00_1508;
																				BgL_bindingsz00_1464 =
																					BgL_bindingsz00_3406;
																				BgL_newzd2argszd2_1463 =
																					BgL_newzd2argszd2_3405;
																				BgL_oldzd2argszd2_1462 =
																					BgL_oldzd2argszd2_3404;
																				goto
																					BgL_zc3z04anonymousza31377ze3z87_1465;
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



/* atomic?~0 */
	bool_t BGl_atomiczf3ze70z14zzast_appz00(obj_t BgL_expz00_1521)
	{
		{	/* Ast/app.scm 89 */
			if (PAIRP(BgL_expz00_1521))
				{	/* Ast/app.scm 89 */
					if ((CAR(BgL_expz00_1521) == CNST_TABLE_REF(((long) 6))))
						{	/* Ast/app.scm 89 */
							return ((bool_t) 1);
						}
					else
						{	/* Ast/app.scm 89 */
							obj_t BgL_cdrzd2371zd2_1535;

							BgL_cdrzd2371zd2_1535 = CDR(BgL_expz00_1521);
							if ((CAR(BgL_expz00_1521) == CNST_TABLE_REF(((long) 7))))
								{	/* Ast/app.scm 89 */
									if (PAIRP(BgL_cdrzd2371zd2_1535))
										{	/* Ast/app.scm 89 */
											obj_t BgL_cdrzd2373zd2_1539;

											BgL_cdrzd2373zd2_1539 = CDR(BgL_cdrzd2371zd2_1535);
											{	/* Ast/app.scm 89 */
												bool_t BgL_test2509z00_3421;

												{	/* Ast/app.scm 89 */
													obj_t BgL_tmpz00_3422;

													BgL_tmpz00_3422 = CAR(BgL_cdrzd2371zd2_1535);
													BgL_test2509z00_3421 = SYMBOLP(BgL_tmpz00_3422);
												}
												if (BgL_test2509z00_3421)
													{	/* Ast/app.scm 89 */
														if (PAIRP(BgL_cdrzd2373zd2_1539))
															{	/* Ast/app.scm 89 */
																bool_t BgL_test2511z00_3427;

																{	/* Ast/app.scm 89 */
																	obj_t BgL_tmpz00_3428;

																	BgL_tmpz00_3428 = CAR(BgL_cdrzd2373zd2_1539);
																	BgL_test2511z00_3427 =
																		SYMBOLP(BgL_tmpz00_3428);
																}
																if (BgL_test2511z00_3427)
																	{	/* Ast/app.scm 89 */
																		return NULLP(CDR(BgL_cdrzd2373zd2_1539));
																	}
																else
																	{	/* Ast/app.scm 89 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Ast/app.scm 89 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Ast/app.scm 89 */
														return ((bool_t) 0);
													}
											}
										}
									else
										{	/* Ast/app.scm 89 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Ast/app.scm 89 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ast/app.scm 89 */
					return ((bool_t) 1);
				}
		}

	}



/* make-the-app~0 */
	obj_t BGl_makezd2thezd2appze70ze7zzast_appz00(obj_t BgL_bindingsz00_3116,
		obj_t BgL_newzd2argszd2_3115, obj_t BgL_funz00_1484)
	{
		{	/* Ast/app.scm 163 */
			if (NULLP(BgL_bindingsz00_3116))
				{	/* Ast/app.scm 164 */
					return
						MAKE_YOUNG_PAIR(BgL_funz00_1484,
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
							(BgL_newzd2argszd2_3115), BNIL));
				}
			else
				{	/* Ast/app.scm 165 */
					obj_t BgL_arg1417z00_1487;
					obj_t BgL_arg1418z00_1488;

					BgL_arg1417z00_1487 = BGl_letzd2symzd2zzast_letz00();
					{	/* Ast/app.scm 165 */
						obj_t BgL_arg1421z00_1489;
						obj_t BgL_arg1422z00_1490;

						BgL_arg1421z00_1489 = bgl_reverse_bang(BgL_bindingsz00_3116);
						{	/* Ast/app.scm 166 */
							obj_t BgL_arg1441z00_1491;

							BgL_arg1441z00_1491 =
								MAKE_YOUNG_PAIR(BgL_funz00_1484,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
									(BgL_newzd2argszd2_3115), BNIL));
							BgL_arg1422z00_1490 = MAKE_YOUNG_PAIR(BgL_arg1441z00_1491, BNIL);
						}
						BgL_arg1418z00_1488 =
							MAKE_YOUNG_PAIR(BgL_arg1421z00_1489, BgL_arg1422z00_1490);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1417z00_1487, BgL_arg1418z00_1488);
				}
		}

	}



/* &application->node */
	BgL_nodez00_bglt BGl_z62applicationzd2ze3nodez53zzast_appz00(obj_t
		BgL_envz00_3096, obj_t BgL_expz00_3097, obj_t BgL_stackz00_3098,
		obj_t BgL_locz00_3099, obj_t BgL_sitez00_3100)
	{
		{	/* Ast/app.scm 74 */
			return
				BGl_applicationzd2ze3nodez31zzast_appz00(BgL_expz00_3097,
				BgL_stackz00_3098, BgL_locz00_3099, BgL_sitez00_3100);
		}

	}



/* check-user-app */
	long BGl_checkzd2userzd2appz00zzast_appz00(BgL_varz00_bglt BgL_funz00_10,
		obj_t BgL_argsz00_11)
	{
		{	/* Ast/app.scm 205 */
			{	/* Ast/app.scm 212 */
				BgL_variablez00_bglt BgL_varz00_1630;

				BgL_varz00_1630 =
					(((BgL_varz00_bglt) COBJECT(BgL_funz00_10))->BgL_variablez00);
				{	/* Ast/app.scm 212 */
					BgL_valuez00_bglt BgL_funz00_1631;

					BgL_funz00_1631 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_1630))->BgL_valuez00);
					{	/* Ast/app.scm 213 */
						long BgL_nbzd2argszd2_1632;

						BgL_nbzd2argszd2_1632 = bgl_list_length(BgL_argsz00_11);
						{	/* Ast/app.scm 214 */
							long BgL_arityz00_1633;

							{	/* Ast/app.scm 216 */
								bool_t BgL_test2513z00_3450;

								{	/* Ast/app.scm 216 */
									bool_t BgL_res2307z00_2584;

									BgL_res2307z00_2584 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_1631), BGl_funz00zzast_varz00);
									BgL_test2513z00_3450 = BgL_res2307z00_2584;
								}
								if (BgL_test2513z00_3450)
									{	/* Ast/app.scm 216 */
										BgL_arityz00_1633 =
											(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt) BgL_funz00_1631)))->BgL_arityz00);
									}
								else
									{	/* Ast/app.scm 216 */
										BgL_arityz00_1633 = ((long) -1);
							}}
							{	/* Ast/app.scm 215 */

								if ((BgL_arityz00_1633 == ((long) -1)))
									{	/* Ast/app.scm 221 */
										return ((long) 0);
									}
								else
									{	/* Ast/app.scm 221 */
										if ((BgL_arityz00_1633 >= ((long) 0)))
											{	/* Ast/app.scm 223 */
												if (BGl_sfunzd2optionalzf3z21zzast_varz00(
														((obj_t) BgL_funz00_1631)))
													{	/* Ast/app.scm 225 */
														if ((BgL_nbzd2argszd2_1632 < BgL_arityz00_1633))
															{	/* Ast/app.scm 227 */
																return
																	(BgL_arityz00_1633 - BgL_nbzd2argszd2_1632);
															}
														else
															{	/* Ast/app.scm 227 */
																if (
																	(BgL_nbzd2argszd2_1632 >
																		(BgL_arityz00_1633 +
																			bgl_list_length(
																				(((BgL_sfunz00_bglt) COBJECT(
																							((BgL_sfunz00_bglt)
																								BgL_funz00_1631)))->
																					BgL_optionalsz00)))))
																	{	/* Ast/app.scm 229 */
																		return
																			(
																			(BgL_arityz00_1633 +
																				bgl_list_length(
																					(((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_funz00_1631)))->
																						BgL_optionalsz00))) -
																			BgL_nbzd2argszd2_1632);
																	}
																else
																	{	/* Ast/app.scm 229 */
																		return ((long) 0);
													}}}
												else
													{	/* Ast/app.scm 225 */
														if (BGl_sfunzd2keyzf3z21zzast_varz00(
																((obj_t) BgL_funz00_1631)))
															{	/* Ast/app.scm 234 */
																long BgL_klz00_1649;

																BgL_klz00_1649 =
																	bgl_list_length(
																	(((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_funz00_1631)))->
																		BgL_keysz00));
																if ((BgL_nbzd2argszd2_1632 < BgL_arityz00_1633))
																	{	/* Ast/app.scm 236 */
																		return
																			(BgL_arityz00_1633 -
																			BgL_nbzd2argszd2_1632);
																	}
																else
																	{	/* Ast/app.scm 236 */
																		if (
																			(BgL_nbzd2argszd2_1632 >
																				(BgL_arityz00_1633 +
																					(BgL_klz00_1649 * ((long) 2)))))
																			{	/* Ast/app.scm 238 */
																				return
																					(
																					(BgL_arityz00_1633 +
																						(BgL_klz00_1649 * ((long) 2))) -
																					BgL_nbzd2argszd2_1632);
																			}
																		else
																			{	/* Ast/app.scm 238 */
																				return ((long) 0);
															}}}
														else
															{	/* Ast/app.scm 233 */
																return
																	(BgL_arityz00_1633 - BgL_nbzd2argszd2_1632);
															}
													}
											}
										else
											{	/* Ast/app.scm 223 */
												if (
													((NEG(BgL_arityz00_1633) -
															(BgL_nbzd2argszd2_1632 + ((long) 1))) <=
														((long) 0)))
													{	/* Ast/app.scm 245 */
														return ((long) 0);
													}
												else
													{	/* Ast/app.scm 245 */
														return ((long) 1);
		}}}}}}}}}

	}



/* make-app-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t
		BgL_stackz00_12, obj_t BgL_locz00_13, obj_t BgL_sitez00_14,
		BgL_varz00_bglt BgL_varz00_15, obj_t BgL_argsz00_16)
	{
		{	/* Ast/app.scm 252 */
			{	/* Ast/app.scm 253 */
				BgL_valuez00_bglt BgL_funz00_1667;

				BgL_funz00_1667 =
					(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(BgL_varz00_15))->BgL_variablez00)))->
					BgL_valuez00);
				{	/* Ast/app.scm 255 */
					bool_t BgL_test2523z00_3500;

					{	/* Ast/app.scm 255 */
						bool_t BgL_test2524z00_3501;

						{	/* Ast/app.scm 255 */
							bool_t BgL_res2325z00_2635;

							BgL_res2325z00_2635 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_1667), BGl_sfunz00zzast_varz00);
							BgL_test2524z00_3501 = BgL_res2325z00_2635;
						}
						if (BgL_test2524z00_3501)
							{	/* Ast/app.scm 255 */
								obj_t BgL_tmpz00_3504;

								BgL_tmpz00_3504 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_funz00_1667)))->BgL_optionalsz00);
								BgL_test2523z00_3500 = PAIRP(BgL_tmpz00_3504);
							}
						else
							{	/* Ast/app.scm 255 */
								BgL_test2523z00_3500 = ((bool_t) 0);
							}
					}
					if (BgL_test2523z00_3500)
						{	/* Ast/app.scm 256 */
							obj_t BgL_argsz00_1671;

							{
								obj_t BgL_argsz00_1674;
								obj_t BgL_resz00_1675;

								BgL_argsz00_1674 = BgL_argsz00_16;
								BgL_resz00_1675 = BNIL;
							BgL_zc3z04anonymousza31770ze3z87_1676:
								if (NULLP(BgL_argsz00_1674))
									{	/* Ast/app.scm 258 */
										BgL_argsz00_1671 = bgl_reverse_bang(BgL_resz00_1675);
									}
								else
									{	/* Ast/app.scm 260 */
										obj_t BgL_az00_1678;
										obj_t BgL_locz00_1679;

										BgL_az00_1678 = CAR(((obj_t) BgL_argsz00_1674));
										BgL_locz00_1679 =
											BGl_findzd2locationzf2locz20zztools_locationz00
											(BgL_argsz00_1674, BgL_locz00_13);
										{	/* Ast/app.scm 262 */
											obj_t BgL_arg1775z00_1680;
											obj_t BgL_arg1778z00_1681;

											BgL_arg1775z00_1680 = CDR(((obj_t) BgL_argsz00_1674));
											{	/* Ast/app.scm 263 */
												BgL_nodez00_bglt BgL_arg1779z00_1682;

												BgL_arg1779z00_1682 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_az00_1678,
													BgL_stackz00_12, BgL_locz00_1679,
													CNST_TABLE_REF(((long) 2)));
												BgL_arg1778z00_1681 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1779z00_1682),
													BgL_resz00_1675);
											}
											{
												obj_t BgL_resz00_3521;
												obj_t BgL_argsz00_3520;

												BgL_argsz00_3520 = BgL_arg1775z00_1680;
												BgL_resz00_3521 = BgL_arg1778z00_1681;
												BgL_resz00_1675 = BgL_resz00_3521;
												BgL_argsz00_1674 = BgL_argsz00_3520;
												goto BgL_zc3z04anonymousza31770ze3z87_1676;
											}
										}
									}
							}
							return
								BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00
								(BgL_stackz00_12, BgL_locz00_13, BgL_sitez00_14, BgL_varz00_15,
								BgL_argsz00_1671);
						}
					else
						{	/* Ast/app.scm 266 */
							bool_t BgL_test2526z00_3523;

							{	/* Ast/app.scm 266 */
								bool_t BgL_test2527z00_3524;

								{	/* Ast/app.scm 266 */
									bool_t BgL_res2328z00_2641;

									BgL_res2328z00_2641 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_funz00_1667), BGl_sfunz00zzast_varz00);
									BgL_test2527z00_3524 = BgL_res2328z00_2641;
								}
								if (BgL_test2527z00_3524)
									{	/* Ast/app.scm 266 */
										obj_t BgL_tmpz00_3527;

										BgL_tmpz00_3527 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_1667)))->BgL_keysz00);
										BgL_test2526z00_3523 = PAIRP(BgL_tmpz00_3527);
									}
								else
									{	/* Ast/app.scm 266 */
										BgL_test2526z00_3523 = ((bool_t) 0);
									}
							}
							if (BgL_test2526z00_3523)
								{	/* Ast/app.scm 267 */
									obj_t BgL_argsz00_1687;

									{
										obj_t BgL_argsz00_1690;
										obj_t BgL_resz00_1691;

										BgL_argsz00_1690 = BgL_argsz00_16;
										BgL_resz00_1691 = BNIL;
									BgL_zc3z04anonymousza31784ze3z87_1692:
										if (NULLP(BgL_argsz00_1690))
											{	/* Ast/app.scm 269 */
												BgL_argsz00_1687 = bgl_reverse_bang(BgL_resz00_1691);
											}
										else
											{	/* Ast/app.scm 271 */
												obj_t BgL_az00_1694;
												obj_t BgL_locz00_1695;

												BgL_az00_1694 = CAR(((obj_t) BgL_argsz00_1690));
												BgL_locz00_1695 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_argsz00_1690, BgL_locz00_13);
												{	/* Ast/app.scm 273 */
													obj_t BgL_arg1790z00_1696;
													obj_t BgL_arg1796z00_1697;

													BgL_arg1790z00_1696 = CDR(((obj_t) BgL_argsz00_1690));
													{	/* Ast/app.scm 274 */
														BgL_nodez00_bglt BgL_arg1798z00_1698;

														BgL_arg1798z00_1698 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_az00_1694,
															BgL_stackz00_12, BgL_locz00_1695,
															CNST_TABLE_REF(((long) 2)));
														BgL_arg1796z00_1697 =
															MAKE_YOUNG_PAIR(((obj_t) BgL_arg1798z00_1698),
															BgL_resz00_1691);
													}
													{
														obj_t BgL_resz00_3544;
														obj_t BgL_argsz00_3543;

														BgL_argsz00_3543 = BgL_arg1790z00_1696;
														BgL_resz00_3544 = BgL_arg1796z00_1697;
														BgL_resz00_1691 = BgL_resz00_3544;
														BgL_argsz00_1690 = BgL_argsz00_3543;
														goto BgL_zc3z04anonymousza31784ze3z87_1692;
													}
												}
											}
									}
									return
										BGl_makezd2keyszd2appzd2nodezd2zzast_appz00(BgL_stackz00_12,
										BgL_locz00_13, BgL_sitez00_14, BgL_varz00_15,
										BgL_argsz00_1687);
								}
							else
								{	/* Ast/app.scm 277 */
									bool_t BgL_test2529z00_3546;

									{	/* Ast/app.scm 277 */
										bool_t BgL_test2530z00_3547;

										{	/* Ast/app.scm 277 */
											bool_t BgL_res2331z00_2647;

											BgL_res2331z00_2647 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_funz00_1667), BGl_funz00zzast_varz00);
											BgL_test2530z00_3547 = BgL_res2331z00_2647;
										}
										if (BgL_test2530z00_3547)
											{	/* Ast/app.scm 277 */
												if (
													((((BgL_funz00_bglt) COBJECT(
																	((BgL_funz00_bglt) BgL_funz00_1667)))->
															BgL_arityz00) >= ((long) 0)))
													{	/* Ast/app.scm 277 */
														BgL_test2529z00_3546 = ((bool_t) 1);
													}
												else
													{	/* Ast/app.scm 277 */
														bool_t BgL_res2333z00_2651;

														BgL_res2333z00_2651 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_funz00_1667),
															BGl_cfunz00zzast_varz00);
														BgL_test2529z00_3546 = BgL_res2333z00_2651;
													}
											}
										else
											{	/* Ast/app.scm 277 */
												BgL_test2529z00_3546 = ((bool_t) 1);
											}
									}
									if (BgL_test2529z00_3546)
										{	/* Ast/app.scm 278 */
											obj_t BgL_argsz00_1705;

											{
												obj_t BgL_argsz00_1708;
												obj_t BgL_resz00_1709;

												BgL_argsz00_1708 = BgL_argsz00_16;
												BgL_resz00_1709 = BNIL;
											BgL_zc3z04anonymousza31811ze3z87_1710:
												if (NULLP(BgL_argsz00_1708))
													{	/* Ast/app.scm 280 */
														BgL_argsz00_1705 =
															bgl_reverse_bang(BgL_resz00_1709);
													}
												else
													{	/* Ast/app.scm 282 */
														obj_t BgL_az00_1712;
														obj_t BgL_locz00_1713;

														BgL_az00_1712 = CAR(((obj_t) BgL_argsz00_1708));
														BgL_locz00_1713 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_argsz00_1708, BgL_locz00_13);
														{	/* Ast/app.scm 284 */
															obj_t BgL_arg1820z00_1714;
															obj_t BgL_arg1821z00_1715;

															BgL_arg1820z00_1714 =
																CDR(((obj_t) BgL_argsz00_1708));
															{	/* Ast/app.scm 285 */
																BgL_nodez00_bglt BgL_arg1822z00_1716;

																BgL_arg1822z00_1716 =
																	BGl_sexpzd2ze3nodez31zzast_sexpz00
																	(BgL_az00_1712, BgL_stackz00_12,
																	BgL_locz00_1713, CNST_TABLE_REF(((long) 2)));
																BgL_arg1821z00_1715 =
																	MAKE_YOUNG_PAIR(((obj_t) BgL_arg1822z00_1716),
																	BgL_resz00_1709);
															}
															{
																obj_t BgL_resz00_3569;
																obj_t BgL_argsz00_3568;

																BgL_argsz00_3568 = BgL_arg1820z00_1714;
																BgL_resz00_3569 = BgL_arg1821z00_1715;
																BgL_resz00_1709 = BgL_resz00_3569;
																BgL_argsz00_1708 = BgL_argsz00_3568;
																goto BgL_zc3z04anonymousza31811ze3z87_1710;
															}
														}
													}
											}
											return
												((BgL_nodez00_bglt)
												BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(BgL_locz00_13,
													BgL_varz00_15, BgL_argsz00_1705));
										}
									else
										{	/* Ast/app.scm 289 */
											long BgL_arg1823z00_1718;

											BgL_arg1823z00_1718 =
												(((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_funz00_1667)))->
												BgL_arityz00);
											return
												BGl_makezd2vazd2appzd2nodezd2zzast_appz00
												(BgL_arg1823z00_1718, BgL_stackz00_12, BgL_locz00_13,
												BgL_varz00_15, BgL_argsz00_16);
										}
								}
						}
				}
			}
		}

	}



/* &make-app-node */
	BgL_nodez00_bglt BGl_z62makezd2appzd2nodez62zzast_appz00(obj_t
		BgL_envz00_3101, obj_t BgL_stackz00_3102, obj_t BgL_locz00_3103,
		obj_t BgL_sitez00_3104, obj_t BgL_varz00_3105, obj_t BgL_argsz00_3106)
	{
		{	/* Ast/app.scm 252 */
			return
				BGl_makezd2appzd2nodez00zzast_appz00(BgL_stackz00_3102, BgL_locz00_3103,
				BgL_sitez00_3104, ((BgL_varz00_bglt) BgL_varz00_3105),
				BgL_argsz00_3106);
		}

	}



/* make-optionals-app-node */
	BgL_nodez00_bglt BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00(obj_t
		BgL_stackz00_17, obj_t BgL_locz00_18, obj_t BgL_sitez00_19,
		BgL_varz00_bglt BgL_varz00_20, obj_t BgL_actualsz00_21)
	{
		{	/* Ast/app.scm 294 */
			{	/* Ast/app.scm 295 */
				BgL_variablez00_bglt BgL_vz00_1727;
				long BgL_lenz00_1728;

				BgL_vz00_1727 =
					(((BgL_varz00_bglt) COBJECT(BgL_varz00_20))->BgL_variablez00);
				BgL_lenz00_1728 = bgl_list_length(BgL_actualsz00_21);
				{	/* Ast/app.scm 297 */
					BgL_sfunz00_bglt BgL_i1117z00_1729;

					BgL_i1117z00_1729 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_1727))->BgL_valuez00));
					if (
						(BgL_lenz00_1728 ==
							((((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_i1117z00_1729)))->BgL_arityz00) +
								bgl_list_length(
									(((BgL_sfunz00_bglt) COBJECT(BgL_i1117z00_1729))->
										BgL_optionalsz00)))))
						{	/* Ast/app.scm 300 */
							BgL_appz00_bglt BgL_new1119z00_1735;

							{	/* Ast/app.scm 301 */
								BgL_appz00_bglt BgL_new1118z00_1743;

								BgL_new1118z00_1743 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Ast/app.scm 301 */
									long BgL_arg1836z00_1744;

									{	/* Ast/app.scm 301 */
										long BgL_res2337z00_2665;

										BgL_res2337z00_2665 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg1836z00_1744 = BgL_res2337z00_2665;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1118z00_1743),
										BgL_arg1836z00_1744);
								}
								{	/* Ast/app.scm 301 */
									BgL_objectz00_bglt BgL_tmpz00_3592;

									BgL_tmpz00_3592 = ((BgL_objectz00_bglt) BgL_new1118z00_1743);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3592, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1118z00_1743);
								BgL_new1119z00_1735 = BgL_new1118z00_1743;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1119z00_1735)))->BgL_locz00) =
								((obj_t) BgL_locz00_18), BUNSPEC);
							{
								BgL_typez00_bglt BgL_auxz00_3598;

								{	/* Ast/app.scm 302 */
									BgL_typez00_bglt BgL_arg1833z00_1736;

									BgL_arg1833z00_1736 =
										(((BgL_variablez00_bglt) COBJECT(BgL_vz00_1727))->
										BgL_typez00);
									BgL_auxz00_3598 =
										BGl_strictzd2nodezd2typez00zzast_nodez00(((BgL_typez00_bglt)
											BGl_za2_za2z00zztype_cachez00), BgL_arg1833z00_1736);
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1119z00_1735)))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_3598), BUNSPEC);
							}
							((((BgL_nodezf2effectzf2_bglt) COBJECT(
											((BgL_nodezf2effectzf2_bglt) BgL_new1119z00_1735)))->
									BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1119z00_1735)))->BgL_keyz00) =
								((obj_t) BINT(((long) -1))), BUNSPEC);
							{
								BgL_varz00_bglt BgL_auxz00_3609;

								{	/* Ast/app.scm 303 */
									bool_t BgL_test2534z00_3610;

									{	/* Ast/app.scm 303 */
										bool_t BgL_res2338z00_2670;

										BgL_res2338z00_2670 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_varz00_20), BGl_closurez00zzast_nodez00);
										BgL_test2534z00_3610 = BgL_res2338z00_2670;
									}
									if (BgL_test2534z00_3610)
										{	/* Ast/app.scm 303 */
											BgL_varz00_bglt BgL_new1120z00_1739;

											{	/* Ast/app.scm 303 */
												BgL_varz00_bglt BgL_new1125z00_1741;

												BgL_new1125z00_1741 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Ast/app.scm 303 */
													long BgL_arg1835z00_1742;

													{	/* Ast/app.scm 303 */
														long BgL_res2339z00_2672;

														{	/* Ast/app.scm 303 */
															obj_t BgL_classz00_2671;

															BgL_classz00_2671 = BGl_varz00zzast_nodez00;
															BgL_res2339z00_2672 =
																BGL_CLASS_INDEX(BgL_classz00_2671);
														}
														BgL_arg1835z00_1742 = BgL_res2339z00_2672;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1125z00_1741),
														BgL_arg1835z00_1742);
												}
												BgL_new1120z00_1739 = BgL_new1125z00_1741;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1120z00_1739)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_varz00_20)))->
														BgL_locz00)), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1120z00_1739)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_varz00_20)))->
														BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1120z00_1739))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) (((BgL_varz00_bglt)
															COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt)
																		BgL_varz00_20))))->BgL_variablez00)),
												BUNSPEC);
											BgL_auxz00_3609 = BgL_new1120z00_1739;
										}
									else
										{	/* Ast/app.scm 303 */
											BgL_auxz00_3609 = BgL_varz00_20;
										}
								}
								((((BgL_appz00_bglt) COBJECT(BgL_new1119z00_1735))->
										BgL_funz00) = ((BgL_varz00_bglt) BgL_auxz00_3609), BUNSPEC);
							}
							((((BgL_appz00_bglt) COBJECT(BgL_new1119z00_1735))->BgL_argsz00) =
								((obj_t) BgL_actualsz00_21), BUNSPEC);
							((((BgL_appz00_bglt) COBJECT(BgL_new1119z00_1735))->
									BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1119z00_1735);
						}
					else
						{	/* Ast/app.scm 306 */
							obj_t BgL_reqsz00_1745;

							BgL_reqsz00_1745 =
								BGl_takez00zz__r4_pairs_and_lists_6_3z00(
								(((BgL_sfunz00_bglt) COBJECT(BgL_i1117z00_1729))->
									BgL_argszd2namezd2),
								(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_i1117z00_1729)))->BgL_arityz00));
							{	/* Ast/app.scm 306 */
								obj_t BgL_provsz00_1746;

								{	/* Ast/app.scm 307 */
									obj_t BgL_l1290z00_1851;

									BgL_l1290z00_1851 =
										BGl_takez00zz__r4_pairs_and_lists_6_3z00(
										(((BgL_sfunz00_bglt) COBJECT(BgL_i1117z00_1729))->
											BgL_optionalsz00),
										(BgL_lenz00_1728 -
											(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_i1117z00_1729)))->BgL_arityz00)));
									if (NULLP(BgL_l1290z00_1851))
										{	/* Ast/app.scm 307 */
											BgL_provsz00_1746 = BNIL;
										}
									else
										{	/* Ast/app.scm 307 */
											obj_t BgL_head1292z00_1853;

											{	/* Ast/app.scm 307 */
												obj_t BgL_arg1919z00_1865;

												BgL_arg1919z00_1865 = CAR(CAR(BgL_l1290z00_1851));
												{	/* Ast/app.scm 307 */
													obj_t BgL_res2342z00_2681;

													BgL_res2342z00_2681 =
														MAKE_YOUNG_PAIR(BgL_arg1919z00_1865, BNIL);
													BgL_head1292z00_1853 = BgL_res2342z00_2681;
												}
											}
											{	/* Ast/app.scm 307 */
												obj_t BgL_g1295z00_1854;

												BgL_g1295z00_1854 = CDR(BgL_l1290z00_1851);
												{
													obj_t BgL_l1290z00_1856;
													obj_t BgL_tail1293z00_1857;

													BgL_l1290z00_1856 = BgL_g1295z00_1854;
													BgL_tail1293z00_1857 = BgL_head1292z00_1853;
												BgL_zc3z04anonymousza31914ze3z87_1858:
													if (NULLP(BgL_l1290z00_1856))
														{	/* Ast/app.scm 307 */
															BgL_provsz00_1746 = BgL_head1292z00_1853;
														}
													else
														{	/* Ast/app.scm 307 */
															obj_t BgL_newtail1294z00_1860;

															{	/* Ast/app.scm 307 */
																obj_t BgL_arg1917z00_1862;

																{	/* Ast/app.scm 307 */
																	obj_t BgL_pairz00_2685;

																	BgL_pairz00_2685 =
																		CAR(((obj_t) BgL_l1290z00_1856));
																	BgL_arg1917z00_1862 = CAR(BgL_pairz00_2685);
																}
																{	/* Ast/app.scm 307 */
																	obj_t BgL_res2344z00_2686;

																	BgL_res2344z00_2686 =
																		MAKE_YOUNG_PAIR(BgL_arg1917z00_1862, BNIL);
																	BgL_newtail1294z00_1860 = BgL_res2344z00_2686;
																}
															}
															SET_CDR(BgL_tail1293z00_1857,
																BgL_newtail1294z00_1860);
															{	/* Ast/app.scm 307 */
																obj_t BgL_arg1916z00_1861;

																BgL_arg1916z00_1861 =
																	CDR(((obj_t) BgL_l1290z00_1856));
																{
																	obj_t BgL_tail1293z00_3658;
																	obj_t BgL_l1290z00_3657;

																	BgL_l1290z00_3657 = BgL_arg1916z00_1861;
																	BgL_tail1293z00_3658 =
																		BgL_newtail1294z00_1860;
																	BgL_tail1293z00_1857 = BgL_tail1293z00_3658;
																	BgL_l1290z00_1856 = BgL_l1290z00_3657;
																	goto BgL_zc3z04anonymousza31914ze3z87_1858;
																}
															}
														}
												}
											}
										}
								}
								{	/* Ast/app.scm 307 */
									obj_t BgL_optsz00_1747;

									BgL_optsz00_1747 =
										BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(
										(((BgL_sfunz00_bglt) COBJECT(BgL_i1117z00_1729))->
											BgL_optionalsz00),
										(BgL_lenz00_1728 -
											(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_i1117z00_1729)))->BgL_arityz00)));
									{	/* Ast/app.scm 308 */
										obj_t BgL_expz00_1748;

										{	/* Ast/app.scm 309 */
											obj_t BgL_arg1841z00_1751;
											obj_t BgL_arg1842z00_1752;

											BgL_arg1841z00_1751 = BGl_letzd2symzd2zzast_letz00();
											{	/* Ast/app.scm 309 */
												obj_t BgL_arg1845z00_1753;
												obj_t BgL_arg1846z00_1754;

												{	/* Ast/app.scm 309 */
													obj_t BgL_ll1297z00_1756;

													BgL_ll1297z00_1756 =
														BGl_takez00zz__r4_pairs_and_lists_6_3z00
														(BgL_actualsz00_21,
														(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																		BgL_i1117z00_1729)))->BgL_arityz00));
													if (NULLP(BgL_reqsz00_1745))
														{	/* Ast/app.scm 309 */
															BgL_arg1845z00_1753 = BNIL;
														}
													else
														{	/* Ast/app.scm 309 */
															obj_t BgL_head1298z00_1758;

															{	/* Ast/app.scm 309 */
																obj_t BgL_arg1858z00_1776;

																{	/* Ast/app.scm 309 */
																	obj_t BgL_arg1859z00_1777;
																	obj_t BgL_arg1861z00_1778;

																	BgL_arg1859z00_1777 = CAR(BgL_reqsz00_1745);
																	BgL_arg1861z00_1778 =
																		CAR(((obj_t) BgL_ll1297z00_1756));
																	{	/* Ast/app.scm 309 */
																		obj_t BgL_list1862z00_1779;

																		{	/* Ast/app.scm 309 */
																			obj_t BgL_arg1863z00_1780;

																			BgL_arg1863z00_1780 =
																				MAKE_YOUNG_PAIR(BgL_arg1861z00_1778,
																				BNIL);
																			BgL_list1862z00_1779 =
																				MAKE_YOUNG_PAIR(BgL_arg1859z00_1777,
																				BgL_arg1863z00_1780);
																		}
																		BgL_arg1858z00_1776 = BgL_list1862z00_1779;
																	}
																}
																{	/* Ast/app.scm 309 */
																	obj_t BgL_res2348z00_2696;

																	BgL_res2348z00_2696 =
																		MAKE_YOUNG_PAIR(BgL_arg1858z00_1776, BNIL);
																	BgL_head1298z00_1758 = BgL_res2348z00_2696;
																}
															}
															{	/* Ast/app.scm 309 */
																obj_t BgL_g1302z00_1759;
																obj_t BgL_g1303z00_1760;

																BgL_g1302z00_1759 = CDR(BgL_reqsz00_1745);
																BgL_g1303z00_1760 =
																	CDR(((obj_t) BgL_ll1297z00_1756));
																{
																	obj_t BgL_ll1296z00_1762;
																	obj_t BgL_ll1297z00_1763;
																	obj_t BgL_tail1299z00_1764;

																	BgL_ll1296z00_1762 = BgL_g1302z00_1759;
																	BgL_ll1297z00_1763 = BgL_g1303z00_1760;
																	BgL_tail1299z00_1764 = BgL_head1298z00_1758;
																BgL_zc3z04anonymousza31848ze3z87_1765:
																	if (NULLP(BgL_ll1296z00_1762))
																		{	/* Ast/app.scm 309 */
																			BgL_arg1845z00_1753 =
																				BgL_head1298z00_1758;
																		}
																	else
																		{	/* Ast/app.scm 309 */
																			obj_t BgL_newtail1300z00_1767;

																			{	/* Ast/app.scm 309 */
																				obj_t BgL_arg1852z00_1770;

																				{	/* Ast/app.scm 309 */
																					obj_t BgL_arg1853z00_1771;
																					obj_t BgL_arg1855z00_1772;

																					BgL_arg1853z00_1771 =
																						CAR(((obj_t) BgL_ll1296z00_1762));
																					BgL_arg1855z00_1772 =
																						CAR(((obj_t) BgL_ll1297z00_1763));
																					{	/* Ast/app.scm 309 */
																						obj_t BgL_list1856z00_1773;

																						{	/* Ast/app.scm 309 */
																							obj_t BgL_arg1857z00_1774;

																							BgL_arg1857z00_1774 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1855z00_1772, BNIL);
																							BgL_list1856z00_1773 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1853z00_1771,
																								BgL_arg1857z00_1774);
																						}
																						BgL_arg1852z00_1770 =
																							BgL_list1856z00_1773;
																					}
																				}
																				{	/* Ast/app.scm 309 */
																					obj_t BgL_res2351z00_2703;

																					BgL_res2351z00_2703 =
																						MAKE_YOUNG_PAIR(BgL_arg1852z00_1770,
																						BNIL);
																					BgL_newtail1300z00_1767 =
																						BgL_res2351z00_2703;
																				}
																			}
																			SET_CDR(BgL_tail1299z00_1764,
																				BgL_newtail1300z00_1767);
																			{	/* Ast/app.scm 309 */
																				obj_t BgL_arg1850z00_1768;
																				obj_t BgL_arg1851z00_1769;

																				BgL_arg1850z00_1768 =
																					CDR(((obj_t) BgL_ll1296z00_1762));
																				BgL_arg1851z00_1769 =
																					CDR(((obj_t) BgL_ll1297z00_1763));
																				{
																					obj_t BgL_tail1299z00_3695;
																					obj_t BgL_ll1297z00_3694;
																					obj_t BgL_ll1296z00_3693;

																					BgL_ll1296z00_3693 =
																						BgL_arg1850z00_1768;
																					BgL_ll1297z00_3694 =
																						BgL_arg1851z00_1769;
																					BgL_tail1299z00_3695 =
																						BgL_newtail1300z00_1767;
																					BgL_tail1299z00_1764 =
																						BgL_tail1299z00_3695;
																					BgL_ll1297z00_1763 =
																						BgL_ll1297z00_3694;
																					BgL_ll1296z00_1762 =
																						BgL_ll1296z00_3693;
																					goto
																						BgL_zc3z04anonymousza31848ze3z87_1765;
																				}
																			}
																		}
																}
															}
														}
												}
												{	/* Ast/app.scm 310 */
													obj_t BgL_arg1866z00_1782;

													{	/* Ast/app.scm 310 */
														obj_t BgL_arg1868z00_1783;

														{	/* Ast/app.scm 310 */
															obj_t BgL_arg1870z00_1784;
															obj_t BgL_arg1871z00_1785;

															{	/* Ast/app.scm 310 */
																obj_t BgL_arg1872z00_1786;
																obj_t BgL_arg1873z00_1787;

																{	/* Ast/app.scm 310 */
																	obj_t BgL_ll1305z00_1789;

																	BgL_ll1305z00_1789 =
																		BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_actualsz00_21,
																		(((BgL_funz00_bglt)
																				COBJECT(((BgL_funz00_bglt)
																						BgL_i1117z00_1729)))->
																			BgL_arityz00));
																	if (NULLP(BgL_provsz00_1746))
																		{	/* Ast/app.scm 310 */
																			BgL_arg1872z00_1786 = BNIL;
																		}
																	else
																		{	/* Ast/app.scm 310 */
																			obj_t BgL_head1306z00_1791;

																			{	/* Ast/app.scm 310 */
																				obj_t BgL_arg1885z00_1809;

																				{	/* Ast/app.scm 310 */
																					obj_t BgL_arg1886z00_1810;
																					obj_t BgL_arg1887z00_1811;

																					BgL_arg1886z00_1810 =
																						CAR(BgL_provsz00_1746);
																					BgL_arg1887z00_1811 =
																						CAR(((obj_t) BgL_ll1305z00_1789));
																					{	/* Ast/app.scm 310 */
																						obj_t BgL_list1888z00_1812;

																						{	/* Ast/app.scm 310 */
																							obj_t BgL_arg1889z00_1813;

																							BgL_arg1889z00_1813 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1887z00_1811, BNIL);
																							BgL_list1888z00_1812 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1886z00_1810,
																								BgL_arg1889z00_1813);
																						}
																						BgL_arg1885z00_1809 =
																							BgL_list1888z00_1812;
																					}
																				}
																				{	/* Ast/app.scm 310 */
																					obj_t BgL_res2354z00_2711;

																					BgL_res2354z00_2711 =
																						MAKE_YOUNG_PAIR(BgL_arg1885z00_1809,
																						BNIL);
																					BgL_head1306z00_1791 =
																						BgL_res2354z00_2711;
																				}
																			}
																			{	/* Ast/app.scm 310 */
																				obj_t BgL_g1310z00_1792;
																				obj_t BgL_g1311z00_1793;

																				BgL_g1310z00_1792 =
																					CDR(BgL_provsz00_1746);
																				BgL_g1311z00_1793 =
																					CDR(((obj_t) BgL_ll1305z00_1789));
																				{
																					obj_t BgL_ll1304z00_1795;
																					obj_t BgL_ll1305z00_1796;
																					obj_t BgL_tail1307z00_1797;

																					BgL_ll1304z00_1795 =
																						BgL_g1310z00_1792;
																					BgL_ll1305z00_1796 =
																						BgL_g1311z00_1793;
																					BgL_tail1307z00_1797 =
																						BgL_head1306z00_1791;
																				BgL_zc3z04anonymousza31875ze3z87_1798:
																					if (NULLP(BgL_ll1304z00_1795))
																						{	/* Ast/app.scm 310 */
																							BgL_arg1872z00_1786 =
																								BgL_head1306z00_1791;
																						}
																					else
																						{	/* Ast/app.scm 310 */
																							obj_t BgL_newtail1308z00_1800;

																							{	/* Ast/app.scm 310 */
																								obj_t BgL_arg1879z00_1803;

																								{	/* Ast/app.scm 310 */
																									obj_t BgL_arg1881z00_1804;
																									obj_t BgL_arg1882z00_1805;

																									BgL_arg1881z00_1804 =
																										CAR(
																										((obj_t)
																											BgL_ll1304z00_1795));
																									BgL_arg1882z00_1805 =
																										CAR(((obj_t)
																											BgL_ll1305z00_1796));
																									{	/* Ast/app.scm 310 */
																										obj_t BgL_list1883z00_1806;

																										{	/* Ast/app.scm 310 */
																											obj_t BgL_arg1884z00_1807;

																											BgL_arg1884z00_1807 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1882z00_1805,
																												BNIL);
																											BgL_list1883z00_1806 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1881z00_1804,
																												BgL_arg1884z00_1807);
																										}
																										BgL_arg1879z00_1803 =
																											BgL_list1883z00_1806;
																									}
																								}
																								{	/* Ast/app.scm 310 */
																									obj_t BgL_res2357z00_2718;

																									BgL_res2357z00_2718 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1879z00_1803, BNIL);
																									BgL_newtail1308z00_1800 =
																										BgL_res2357z00_2718;
																								}
																							}
																							SET_CDR(BgL_tail1307z00_1797,
																								BgL_newtail1308z00_1800);
																							{	/* Ast/app.scm 310 */
																								obj_t BgL_arg1877z00_1801;
																								obj_t BgL_arg1878z00_1802;

																								BgL_arg1877z00_1801 =
																									CDR(
																									((obj_t) BgL_ll1304z00_1795));
																								BgL_arg1878z00_1802 =
																									CDR(
																									((obj_t) BgL_ll1305z00_1796));
																								{
																									obj_t BgL_tail1307z00_3726;
																									obj_t BgL_ll1305z00_3725;
																									obj_t BgL_ll1304z00_3724;

																									BgL_ll1304z00_3724 =
																										BgL_arg1877z00_1801;
																									BgL_ll1305z00_3725 =
																										BgL_arg1878z00_1802;
																									BgL_tail1307z00_3726 =
																										BgL_newtail1308z00_1800;
																									BgL_tail1307z00_1797 =
																										BgL_tail1307z00_3726;
																									BgL_ll1305z00_1796 =
																										BgL_ll1305z00_3725;
																									BgL_ll1304z00_1795 =
																										BgL_ll1304z00_3724;
																									goto
																										BgL_zc3z04anonymousza31875ze3z87_1798;
																								}
																							}
																						}
																				}
																			}
																		}
																}
																BgL_arg1873z00_1787 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_optsz00_1747, BNIL);
																BgL_arg1870z00_1784 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1872z00_1786, BgL_arg1873z00_1787);
															}
															{	/* Ast/app.scm 313 */
																obj_t BgL_arg1892z00_1815;

																{	/* Ast/app.scm 313 */
																	obj_t BgL_arg1893z00_1816;

																	{	/* Ast/app.scm 313 */
																		obj_t BgL_arg1895z00_1817;

																		{	/* Ast/app.scm 313 */
																			obj_t BgL_arg1896z00_1818;
																			obj_t BgL_arg1897z00_1819;

																			if (NULLP(BgL_provsz00_1746))
																				{	/* Ast/app.scm 313 */
																					BgL_arg1896z00_1818 = BNIL;
																				}
																			else
																				{	/* Ast/app.scm 313 */
																					obj_t BgL_head1314z00_1822;

																					{	/* Ast/app.scm 313 */
																						obj_t BgL_res2359z00_2723;

																						BgL_res2359z00_2723 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1314z00_1822 =
																							BgL_res2359z00_2723;
																					}
																					{
																						obj_t BgL_l1312z00_1824;
																						obj_t BgL_tail1315z00_1825;

																						BgL_l1312z00_1824 =
																							BgL_provsz00_1746;
																						BgL_tail1315z00_1825 =
																							BgL_head1314z00_1822;
																					BgL_zc3z04anonymousza31899ze3z87_1826:
																						if (NULLP
																							(BgL_l1312z00_1824))
																							{	/* Ast/app.scm 313 */
																								BgL_arg1896z00_1818 =
																									CDR(BgL_head1314z00_1822);
																							}
																						else
																							{	/* Ast/app.scm 313 */
																								obj_t BgL_newtail1316z00_1828;

																								{	/* Ast/app.scm 313 */
																									obj_t BgL_arg1902z00_1830;

																									{	/* Ast/app.scm 313 */
																										obj_t BgL_iz00_1831;

																										BgL_iz00_1831 =
																											CAR(
																											((obj_t)
																												BgL_l1312z00_1824));
																										BgL_arg1902z00_1830 =
																											BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																											(BgL_iz00_1831,
																											BgL_locz00_18);
																									}
																									{	/* Ast/app.scm 313 */
																										obj_t BgL_res2361z00_2727;

																										BgL_res2361z00_2727 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1902z00_1830,
																											BNIL);
																										BgL_newtail1316z00_1828 =
																											BgL_res2361z00_2727;
																									}
																								}
																								SET_CDR(BgL_tail1315z00_1825,
																									BgL_newtail1316z00_1828);
																								{	/* Ast/app.scm 313 */
																									obj_t BgL_arg1901z00_1829;

																									BgL_arg1901z00_1829 =
																										CDR(
																										((obj_t)
																											BgL_l1312z00_1824));
																									{
																										obj_t BgL_tail1315z00_3743;
																										obj_t BgL_l1312z00_3742;

																										BgL_l1312z00_3742 =
																											BgL_arg1901z00_1829;
																										BgL_tail1315z00_3743 =
																											BgL_newtail1316z00_1828;
																										BgL_tail1315z00_1825 =
																											BgL_tail1315z00_3743;
																										BgL_l1312z00_1824 =
																											BgL_l1312z00_3742;
																										goto
																											BgL_zc3z04anonymousza31899ze3z87_1826;
																									}
																								}
																							}
																					}
																				}
																			{	/* Ast/app.scm 316 */
																				obj_t BgL_arg1903z00_1833;

																				if (NULLP(BgL_optsz00_1747))
																					{	/* Ast/app.scm 316 */
																						BgL_arg1903z00_1833 = BNIL;
																					}
																				else
																					{	/* Ast/app.scm 316 */
																						obj_t BgL_head1319z00_1836;

																						{	/* Ast/app.scm 316 */
																							obj_t BgL_res2363z00_2731;

																							BgL_res2363z00_2731 =
																								MAKE_YOUNG_PAIR(BNIL, BNIL);
																							BgL_head1319z00_1836 =
																								BgL_res2363z00_2731;
																						}
																						{
																							obj_t BgL_l1317z00_1838;
																							obj_t BgL_tail1320z00_1839;

																							BgL_l1317z00_1838 =
																								BgL_optsz00_1747;
																							BgL_tail1320z00_1839 =
																								BgL_head1319z00_1836;
																						BgL_zc3z04anonymousza31905ze3z87_1840:
																							if (NULLP
																								(BgL_l1317z00_1838))
																								{	/* Ast/app.scm 316 */
																									BgL_arg1903z00_1833 =
																										CDR(BgL_head1319z00_1836);
																								}
																							else
																								{	/* Ast/app.scm 316 */
																									obj_t BgL_newtail1321z00_1842;

																									{	/* Ast/app.scm 316 */
																										obj_t BgL_arg1908z00_1844;

																										{	/* Ast/app.scm 316 */
																											obj_t BgL_oz00_1845;

																											BgL_oz00_1845 =
																												CAR(
																												((obj_t)
																													BgL_l1317z00_1838));
																											{	/* Ast/app.scm 317 */
																												obj_t
																													BgL_arg1909z00_1846;
																												BgL_arg1909z00_1846 =
																													CAR(((obj_t)
																														BgL_oz00_1845));
																												BgL_arg1908z00_1844 =
																													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																													(BgL_arg1909z00_1846,
																													BgL_locz00_18);
																											}
																										}
																										{	/* Ast/app.scm 316 */
																											obj_t BgL_res2365z00_2736;

																											BgL_res2365z00_2736 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1908z00_1844,
																												BNIL);
																											BgL_newtail1321z00_1842 =
																												BgL_res2365z00_2736;
																										}
																									}
																									SET_CDR(BgL_tail1320z00_1839,
																										BgL_newtail1321z00_1842);
																									{	/* Ast/app.scm 316 */
																										obj_t BgL_arg1907z00_1843;

																										BgL_arg1907z00_1843 =
																											CDR(
																											((obj_t)
																												BgL_l1317z00_1838));
																										{
																											obj_t
																												BgL_tail1320z00_3760;
																											obj_t BgL_l1317z00_3759;

																											BgL_l1317z00_3759 =
																												BgL_arg1907z00_1843;
																											BgL_tail1320z00_3760 =
																												BgL_newtail1321z00_1842;
																											BgL_tail1320z00_1839 =
																												BgL_tail1320z00_3760;
																											BgL_l1317z00_1838 =
																												BgL_l1317z00_3759;
																											goto
																												BgL_zc3z04anonymousza31905ze3z87_1840;
																										}
																									}
																								}
																						}
																					}
																				BgL_arg1897z00_1819 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1903z00_1833, BNIL);
																			}
																			BgL_arg1895z00_1817 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1896z00_1818,
																				BgL_arg1897z00_1819);
																		}
																		BgL_arg1893z00_1816 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_reqsz00_1745, BgL_arg1895z00_1817);
																	}
																	BgL_arg1892z00_1815 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_varz00_20),
																		BgL_arg1893z00_1816);
																}
																BgL_arg1871z00_1785 =
																	MAKE_YOUNG_PAIR(BgL_arg1892z00_1815, BNIL);
															}
															BgL_arg1868z00_1783 =
																MAKE_YOUNG_PAIR(BgL_arg1870z00_1784,
																BgL_arg1871z00_1785);
														}
														BgL_arg1866z00_1782 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
															BgL_arg1868z00_1783);
													}
													BgL_arg1846z00_1754 =
														MAKE_YOUNG_PAIR(BgL_arg1866z00_1782, BNIL);
												}
												BgL_arg1842z00_1752 =
													MAKE_YOUNG_PAIR(BgL_arg1845z00_1753,
													BgL_arg1846z00_1754);
											}
											BgL_expz00_1748 =
												MAKE_YOUNG_PAIR(BgL_arg1841z00_1751,
												BgL_arg1842z00_1752);
										}
										{	/* Ast/app.scm 309 */

											return
												BGl_sexpzd2ze3nodez31zzast_sexpz00
												(BGl_compilezd2expandzd2zzexpand_epsz00
												(BGl_comptimezd2expandzd2zzexpand_epsz00
													(BgL_expz00_1748)), BNIL, BgL_locz00_18,
												BgL_sitez00_19);
										}
									}
								}
							}
						}
				}
			}
		}

	}



/* make-keys-app-node */
	BgL_nodez00_bglt BGl_makezd2keyszd2appzd2nodezd2zzast_appz00(obj_t
		BgL_stackz00_22, obj_t BgL_locz00_23, obj_t BgL_sitez00_24,
		BgL_varz00_bglt BgL_varz00_25, obj_t BgL_argsz00_26)
	{
		{	/* Ast/app.scm 327 */
			{	/* Ast/app.scm 328 */
				BgL_variablez00_bglt BgL_vz00_1876;

				BgL_vz00_1876 =
					(((BgL_varz00_bglt) COBJECT(BgL_varz00_25))->BgL_variablez00);
				{	/* Ast/app.scm 329 */
					BgL_sfunz00_bglt BgL_i1126z00_1877;

					BgL_i1126z00_1877 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_1876))->BgL_valuez00));
					{	/* Ast/app.scm 330 */
						obj_t BgL_collectedz00_1878;

						{	/* Ast/app.scm 330 */
							obj_t BgL_g1127z00_2122;

							BgL_g1127z00_2122 =
								BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_26,
								(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_i1126z00_1877)))->BgL_arityz00));
							BgL_collectedz00_1878 =
								BGl_loopze70ze7zzast_appz00(BgL_locz00_23, BgL_vz00_1876,
								BgL_g1127z00_2122);
						}
						{
							obj_t BgL_valsz00_1999;
							obj_t BgL_keysz00_2026;
							obj_t BgL_valsz00_2027;
							obj_t BgL_stackz00_2028;

							{	/* Ast/app.scm 418 */
								bool_t BgL_test2545z00_3783;

								{
									obj_t BgL_l1327z00_1976;

									BgL_l1327z00_1976 = BgL_collectedz00_1878;
								BgL_zc3z04anonymousza31982ze3z87_1977:
									if (NULLP(BgL_l1327z00_1976))
										{	/* Ast/app.scm 418 */
											BgL_test2545z00_3783 = ((bool_t) 0);
										}
									else
										{	/* Ast/app.scm 419 */
											bool_t BgL__ortest_1329z00_1979;

											{	/* Ast/app.scm 419 */
												obj_t BgL_az00_1982;

												{	/* Ast/app.scm 419 */
													obj_t BgL_pairz00_2865;

													BgL_pairz00_2865 = CAR(((obj_t) BgL_l1327z00_1976));
													BgL_az00_1982 = CAR(BgL_pairz00_2865);
												}
												{	/* Ast/app.scm 420 */
													bool_t BgL_test2547z00_3789;

													if (BGl_isazf3zf3zz__objectz00(BgL_az00_1982,
															BGl_atomz00zzast_nodez00))
														{	/* Ast/app.scm 420 */
															obj_t BgL_tmpz00_3792;

															BgL_tmpz00_3792 =
																(((BgL_atomz00_bglt) COBJECT(
																		((BgL_atomz00_bglt) BgL_az00_1982)))->
																BgL_valuez00);
															BgL_test2547z00_3789 = KEYWORDP(BgL_tmpz00_3792);
														}
													else
														{	/* Ast/app.scm 420 */
															BgL_test2547z00_3789 = ((bool_t) 0);
														}
													if (BgL_test2547z00_3789)
														{	/* Ast/app.scm 420 */
															BgL__ortest_1329z00_1979 = ((bool_t) 0);
														}
													else
														{	/* Ast/app.scm 420 */
															BgL__ortest_1329z00_1979 = ((bool_t) 1);
														}
												}
											}
											if (BgL__ortest_1329z00_1979)
												{	/* Ast/app.scm 418 */
													BgL_test2545z00_3783 = BgL__ortest_1329z00_1979;
												}
											else
												{	/* Ast/app.scm 418 */
													obj_t BgL_arg1983z00_1980;

													BgL_arg1983z00_1980 =
														CDR(((obj_t) BgL_l1327z00_1976));
													{
														obj_t BgL_l1327z00_3799;

														BgL_l1327z00_3799 = BgL_arg1983z00_1980;
														BgL_l1327z00_1976 = BgL_l1327z00_3799;
														goto BgL_zc3z04anonymousza31982ze3z87_1977;
													}
												}
										}
								}
								if (BgL_test2545z00_3783)
									{	/* Ast/app.scm 418 */
										{	/* Ast/app.scm 343 */
											obj_t BgL_fz00_1988;

											BgL_fz00_1988 =
												BGl_gensymz00zz__r4_symbols_6_4z00(
												(((BgL_variablez00_bglt) COBJECT(BgL_vz00_1876))->
													BgL_idz00));
											{	/* Ast/app.scm 348 */
												obj_t BgL_expz00_1989;

												{	/* Ast/app.scm 348 */
													obj_t BgL_arg1986z00_1990;
													obj_t BgL_arg1987z00_1991;

													BgL_arg1986z00_1990 = BGl_letzd2symzd2zzast_letz00();
													{	/* Ast/app.scm 348 */
														obj_t BgL_arg1988z00_1992;
														obj_t BgL_arg1989z00_1993;

														{	/* Ast/app.scm 348 */
															obj_t BgL_arg1990z00_1994;

															{	/* Ast/app.scm 348 */
																obj_t BgL_arg1991z00_1995;

																BgL_arg1991z00_1995 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_vz00_1876), BNIL);
																BgL_arg1990z00_1994 =
																	MAKE_YOUNG_PAIR(BgL_fz00_1988,
																	BgL_arg1991z00_1995);
															}
															BgL_arg1988z00_1992 =
																MAKE_YOUNG_PAIR(BgL_arg1990z00_1994, BNIL);
														}
														{	/* Ast/app.scm 348 */
															obj_t BgL_arg1992z00_1996;

															BgL_arg1992z00_1996 =
																MAKE_YOUNG_PAIR(BgL_fz00_1988,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_argsz00_26, BNIL));
															BgL_arg1989z00_1993 =
																MAKE_YOUNG_PAIR(BgL_arg1992z00_1996, BNIL);
														}
														BgL_arg1987z00_1991 =
															MAKE_YOUNG_PAIR(BgL_arg1988z00_1992,
															BgL_arg1989z00_1993);
													}
													BgL_expz00_1989 =
														MAKE_YOUNG_PAIR(BgL_arg1986z00_1990,
														BgL_arg1987z00_1991);
												}
												return
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1989,
													BgL_stackz00_22, BgL_locz00_23, BgL_sitez00_24);
											}
										}
									}
								else
									{	/* Ast/app.scm 423 */
										obj_t BgL_valsz00_1897;

										{	/* Ast/app.scm 425 */
											obj_t BgL_arg1969z00_1954;

											{	/* Ast/app.scm 425 */
												obj_t BgL_arg1970z00_1955;

												if (NULLP(BgL_collectedz00_1878))
													{	/* Ast/app.scm 425 */
														BgL_arg1970z00_1955 = BNIL;
													}
												else
													{	/* Ast/app.scm 425 */
														obj_t BgL_head1332z00_1958;

														{	/* Ast/app.scm 425 */
															obj_t BgL_res2388z00_2871;

															BgL_res2388z00_2871 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1332z00_1958 = BgL_res2388z00_2871;
														}
														{
															obj_t BgL_l1330z00_1960;
															obj_t BgL_tail1333z00_1961;

															BgL_l1330z00_1960 = BgL_collectedz00_1878;
															BgL_tail1333z00_1961 = BgL_head1332z00_1958;
														BgL_zc3z04anonymousza31972ze3z87_1962:
															if (NULLP(BgL_l1330z00_1960))
																{	/* Ast/app.scm 425 */
																	BgL_arg1970z00_1955 =
																		CDR(BgL_head1332z00_1958);
																}
															else
																{	/* Ast/app.scm 425 */
																	obj_t BgL_newtail1334z00_1964;

																	{	/* Ast/app.scm 425 */
																		obj_t BgL_arg1975z00_1966;

																		{	/* Ast/app.scm 425 */
																			obj_t BgL_vz00_1967;

																			BgL_vz00_1967 =
																				CAR(((obj_t) BgL_l1330z00_1960));
																			{	/* Ast/app.scm 427 */
																				obj_t BgL_arg1976z00_1968;
																				obj_t BgL_arg1977z00_1969;

																				{	/* Ast/app.scm 427 */
																					obj_t BgL_arg1980z00_1972;

																					BgL_arg1980z00_1972 =
																						(((BgL_atomz00_bglt) COBJECT(
																								((BgL_atomz00_bglt)
																									CAR(
																										((obj_t)
																											BgL_vz00_1967)))))->
																						BgL_valuez00);
																					BgL_arg1976z00_1968 =
																						BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00
																						(BgL_arg1980z00_1972);
																				}
																				{	/* Ast/app.scm 428 */
																					obj_t BgL_pairz00_2880;

																					BgL_pairz00_2880 =
																						CDR(((obj_t) BgL_vz00_1967));
																					BgL_arg1977z00_1969 =
																						CAR(BgL_pairz00_2880);
																				}
																				{	/* Ast/app.scm 426 */
																					obj_t BgL_list1978z00_1970;

																					{	/* Ast/app.scm 426 */
																						obj_t BgL_arg1979z00_1971;

																						BgL_arg1979z00_1971 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1977z00_1969, BNIL);
																						BgL_list1978z00_1970 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1976z00_1968,
																							BgL_arg1979z00_1971);
																					}
																					BgL_arg1975z00_1966 =
																						BgL_list1978z00_1970;
																				}
																			}
																		}
																		{	/* Ast/app.scm 425 */
																			obj_t BgL_res2391z00_2882;

																			BgL_res2391z00_2882 =
																				MAKE_YOUNG_PAIR(BgL_arg1975z00_1966,
																				BNIL);
																			BgL_newtail1334z00_1964 =
																				BgL_res2391z00_2882;
																		}
																	}
																	SET_CDR(BgL_tail1333z00_1961,
																		BgL_newtail1334z00_1964);
																	{	/* Ast/app.scm 425 */
																		obj_t BgL_arg1974z00_1965;

																		BgL_arg1974z00_1965 =
																			CDR(((obj_t) BgL_l1330z00_1960));
																		{
																			obj_t BgL_tail1333z00_3836;
																			obj_t BgL_l1330z00_3835;

																			BgL_l1330z00_3835 = BgL_arg1974z00_1965;
																			BgL_tail1333z00_3836 =
																				BgL_newtail1334z00_1964;
																			BgL_tail1333z00_1961 =
																				BgL_tail1333z00_3836;
																			BgL_l1330z00_1960 = BgL_l1330z00_3835;
																			goto
																				BgL_zc3z04anonymousza31972ze3z87_1962;
																		}
																	}
																}
														}
													}
												BgL_arg1969z00_1954 =
													BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00
													(BgL_arg1970z00_1955);
											}
											BgL_valsz00_1999 = BgL_arg1969z00_1954;
											{
												obj_t BgL_vsz00_2003;
												obj_t BgL_nvalsz00_2004;

												BgL_vsz00_2003 = BgL_valsz00_1999;
												BgL_nvalsz00_2004 = BNIL;
											BgL_zc3z04anonymousza31997ze3z87_2005:
												if (NULLP(BgL_vsz00_2003))
													{	/* Ast/app.scm 354 */
														BgL_valsz00_1897 =
															bgl_reverse_bang(BgL_nvalsz00_2004);
													}
												else
													{	/* Ast/app.scm 354 */
														if (NULLP(CDR(((obj_t) BgL_vsz00_2003))))
															{	/* Ast/app.scm 357 */
																obj_t BgL_arg2001z00_2009;

																{	/* Ast/app.scm 357 */
																	obj_t BgL_arg2002z00_2010;

																	BgL_arg2002z00_2010 =
																		CAR(((obj_t) BgL_vsz00_2003));
																	BgL_arg2001z00_2009 =
																		MAKE_YOUNG_PAIR(BgL_arg2002z00_2010,
																		BgL_nvalsz00_2004);
																}
																BgL_valsz00_1897 =
																	bgl_reverse_bang(BgL_arg2001z00_2009);
															}
														else
															{	/* Ast/app.scm 358 */
																bool_t BgL_test2554z00_3849;

																{	/* Ast/app.scm 358 */
																	obj_t BgL_auxz00_3854;
																	obj_t BgL_tmpz00_3850;

																	{	/* Ast/app.scm 358 */
																		obj_t BgL_pairz00_2769;

																		{	/* Ast/app.scm 358 */
																			obj_t BgL_pairz00_2768;

																			BgL_pairz00_2768 =
																				CDR(((obj_t) BgL_vsz00_2003));
																			BgL_pairz00_2769 = CAR(BgL_pairz00_2768);
																		}
																		BgL_auxz00_3854 = CAR(BgL_pairz00_2769);
																	}
																	{	/* Ast/app.scm 358 */
																		obj_t BgL_pairz00_2764;

																		BgL_pairz00_2764 =
																			CAR(((obj_t) BgL_vsz00_2003));
																		BgL_tmpz00_3850 = CAR(BgL_pairz00_2764);
																	}
																	BgL_test2554z00_3849 =
																		(BgL_tmpz00_3850 == BgL_auxz00_3854);
																}
																if (BgL_test2554z00_3849)
																	{	/* Ast/app.scm 358 */
																		{	/* Ast/app.scm 360 */
																			obj_t BgL_arg2007z00_2015;
																			obj_t BgL_arg2008z00_2016;

																			BgL_arg2007z00_2015 =
																				(((BgL_variablez00_bglt)
																					COBJECT(BgL_vz00_1876))->BgL_idz00);
																			{	/* Ast/app.scm 361 */
																				obj_t BgL_pairz00_2774;

																				BgL_pairz00_2774 =
																					CAR(((obj_t) BgL_vsz00_2003));
																				BgL_arg2008z00_2016 =
																					CAR(BgL_pairz00_2774);
																			}
																			BGl_userzd2warningzf2locationz20zztools_errorz00
																				(BgL_locz00_23, BgL_arg2007z00_2015,
																				BGl_string2440z00zzast_appz00,
																				BgL_arg2008z00_2016);
																		}
																		{	/* Ast/app.scm 362 */
																			obj_t BgL_arg2010z00_2017;

																			BgL_arg2010z00_2017 =
																				CDR(((obj_t) BgL_vsz00_2003));
																			{
																				obj_t BgL_vsz00_3867;

																				BgL_vsz00_3867 = BgL_arg2010z00_2017;
																				BgL_vsz00_2003 = BgL_vsz00_3867;
																				goto
																					BgL_zc3z04anonymousza31997ze3z87_2005;
																			}
																		}
																	}
																else
																	{	/* Ast/app.scm 364 */
																		obj_t BgL_arg2011z00_2018;
																		obj_t BgL_arg2012z00_2019;

																		BgL_arg2011z00_2018 =
																			CDR(((obj_t) BgL_vsz00_2003));
																		{	/* Ast/app.scm 364 */
																			obj_t BgL_arg2013z00_2020;

																			BgL_arg2013z00_2020 =
																				CAR(((obj_t) BgL_vsz00_2003));
																			BgL_arg2012z00_2019 =
																				MAKE_YOUNG_PAIR(BgL_arg2013z00_2020,
																				BgL_nvalsz00_2004);
																		}
																		{
																			obj_t BgL_nvalsz00_3874;
																			obj_t BgL_vsz00_3873;

																			BgL_vsz00_3873 = BgL_arg2011z00_2018;
																			BgL_nvalsz00_3874 = BgL_arg2012z00_2019;
																			BgL_nvalsz00_2004 = BgL_nvalsz00_3874;
																			BgL_vsz00_2003 = BgL_vsz00_3873;
																			goto
																				BgL_zc3z04anonymousza31997ze3z87_2005;
																		}
																	}
															}
													}
											}
										}
										{	/* Ast/app.scm 431 */
											obj_t BgL_fkeysz00_1898;

											{	/* Ast/app.scm 431 */
												obj_t BgL_l1335z00_1939;

												BgL_l1335z00_1939 =
													(((BgL_sfunz00_bglt) COBJECT(BgL_i1126z00_1877))->
													BgL_keysz00);
												if (NULLP(BgL_l1335z00_1939))
													{	/* Ast/app.scm 431 */
														BgL_fkeysz00_1898 = BNIL;
													}
												else
													{	/* Ast/app.scm 431 */
														obj_t BgL_head1337z00_1941;

														{	/* Ast/app.scm 431 */
															obj_t BgL_res2393z00_2886;

															BgL_res2393z00_2886 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1337z00_1941 = BgL_res2393z00_2886;
														}
														{
															obj_t BgL_l1335z00_1943;
															obj_t BgL_tail1338z00_1944;

															BgL_l1335z00_1943 = BgL_l1335z00_1939;
															BgL_tail1338z00_1944 = BgL_head1337z00_1941;
														BgL_zc3z04anonymousza31963ze3z87_1945:
															if (NULLP(BgL_l1335z00_1943))
																{	/* Ast/app.scm 431 */
																	BgL_fkeysz00_1898 = CDR(BgL_head1337z00_1941);
																}
															else
																{	/* Ast/app.scm 431 */
																	obj_t BgL_newtail1339z00_1947;

																	{	/* Ast/app.scm 431 */
																		obj_t BgL_arg1966z00_1949;

																		{	/* Ast/app.scm 431 */
																			obj_t BgL_kz00_1950;

																			BgL_kz00_1950 =
																				CAR(((obj_t) BgL_l1335z00_1943));
																			{	/* Ast/app.scm 432 */
																				obj_t BgL_arg1967z00_1951;

																				BgL_arg1967z00_1951 =
																					CAR(((obj_t) BgL_kz00_1950));
																				BgL_arg1966z00_1949 =
																					BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																					(BgL_arg1967z00_1951, BgL_locz00_23);
																			}
																		}
																		{	/* Ast/app.scm 431 */
																			obj_t BgL_res2395z00_2891;

																			BgL_res2395z00_2891 =
																				MAKE_YOUNG_PAIR(BgL_arg1966z00_1949,
																				BNIL);
																			BgL_newtail1339z00_1947 =
																				BgL_res2395z00_2891;
																		}
																	}
																	SET_CDR(BgL_tail1338z00_1944,
																		BgL_newtail1339z00_1947);
																	{	/* Ast/app.scm 431 */
																		obj_t BgL_arg1965z00_1948;

																		BgL_arg1965z00_1948 =
																			CDR(((obj_t) BgL_l1335z00_1943));
																		{
																			obj_t BgL_tail1338z00_3892;
																			obj_t BgL_l1335z00_3891;

																			BgL_l1335z00_3891 = BgL_arg1965z00_1948;
																			BgL_tail1338z00_3892 =
																				BgL_newtail1339z00_1947;
																			BgL_tail1338z00_1944 =
																				BgL_tail1338z00_3892;
																			BgL_l1335z00_1943 = BgL_l1335z00_3891;
																			goto
																				BgL_zc3z04anonymousza31963ze3z87_1945;
																		}
																	}
																}
														}
													}
											}
											{	/* Ast/app.scm 431 */
												obj_t BgL_errz00_1899;

												{	/* Ast/app.scm 434 */
													obj_t BgL_hook1344z00_1920;

													BgL_hook1344z00_1920 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													{
														obj_t BgL_l1341z00_1922;
														obj_t BgL_h1342z00_1923;

														BgL_l1341z00_1922 = BgL_valsz00_1897;
														BgL_h1342z00_1923 = BgL_hook1344z00_1920;
													BgL_zc3z04anonymousza31952ze3z87_1924:
														if (NULLP(BgL_l1341z00_1922))
															{	/* Ast/app.scm 434 */
																BgL_errz00_1899 = CDR(BgL_hook1344z00_1920);
															}
														else
															{	/* Ast/app.scm 434 */
																bool_t BgL_test2558z00_3897;

																{	/* Ast/app.scm 435 */
																	bool_t BgL_test2559z00_3898;

																	{	/* Ast/app.scm 435 */
																		obj_t BgL_tmpz00_3899;

																		{	/* Ast/app.scm 435 */
																			obj_t BgL_auxz00_3900;

																			{	/* Ast/app.scm 435 */
																				obj_t BgL_pairz00_2897;

																				BgL_pairz00_2897 =
																					CAR(((obj_t) BgL_l1341z00_1922));
																				BgL_auxz00_3900 = CAR(BgL_pairz00_2897);
																			}
																			BgL_tmpz00_3899 =
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_auxz00_3900, BgL_fkeysz00_1898);
																		}
																		BgL_test2559z00_3898 =
																			CBOOL(BgL_tmpz00_3899);
																	}
																	if (BgL_test2559z00_3898)
																		{	/* Ast/app.scm 435 */
																			BgL_test2558z00_3897 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/app.scm 435 */
																			BgL_test2558z00_3897 = ((bool_t) 1);
																		}
																}
																if (BgL_test2558z00_3897)
																	{	/* Ast/app.scm 434 */
																		obj_t BgL_nh1343z00_1931;

																		{	/* Ast/app.scm 434 */
																			obj_t BgL_arg1959z00_1933;

																			BgL_arg1959z00_1933 =
																				CAR(((obj_t) BgL_l1341z00_1922));
																			{	/* Ast/app.scm 434 */
																				obj_t BgL_res2397z00_2899;

																				BgL_res2397z00_2899 =
																					MAKE_YOUNG_PAIR(BgL_arg1959z00_1933,
																					BNIL);
																				BgL_nh1343z00_1931 =
																					BgL_res2397z00_2899;
																			}
																		}
																		SET_CDR(BgL_h1342z00_1923,
																			BgL_nh1343z00_1931);
																		{	/* Ast/app.scm 434 */
																			obj_t BgL_arg1958z00_1932;

																			BgL_arg1958z00_1932 =
																				CDR(((obj_t) BgL_l1341z00_1922));
																			{
																				obj_t BgL_h1342z00_3913;
																				obj_t BgL_l1341z00_3912;

																				BgL_l1341z00_3912 = BgL_arg1958z00_1932;
																				BgL_h1342z00_3913 = BgL_nh1343z00_1931;
																				BgL_h1342z00_1923 = BgL_h1342z00_3913;
																				BgL_l1341z00_1922 = BgL_l1341z00_3912;
																				goto
																					BgL_zc3z04anonymousza31952ze3z87_1924;
																			}
																		}
																	}
																else
																	{	/* Ast/app.scm 434 */
																		obj_t BgL_arg1960z00_1934;

																		BgL_arg1960z00_1934 =
																			CDR(((obj_t) BgL_l1341z00_1922));
																		{
																			obj_t BgL_l1341z00_3916;

																			BgL_l1341z00_3916 = BgL_arg1960z00_1934;
																			BgL_l1341z00_1922 = BgL_l1341z00_3916;
																			goto
																				BgL_zc3z04anonymousza31952ze3z87_1924;
																		}
																	}
															}
													}
												}
												{	/* Ast/app.scm 434 */

													if (PAIRP(BgL_errz00_1899))
														{	/* Ast/app.scm 439 */
															obj_t BgL_arg1940z00_1901;
															obj_t BgL_arg1941z00_1902;

															BgL_arg1940z00_1901 =
																(((BgL_variablez00_bglt)
																	COBJECT(BgL_vz00_1876))->BgL_idz00);
															{	/* Ast/app.scm 440 */
																obj_t BgL_head1347z00_1906;

																{	/* Ast/app.scm 440 */
																	obj_t BgL_arg1949z00_1918;

																	BgL_arg1949z00_1918 =
																		CAR(CAR(BgL_errz00_1899));
																	{	/* Ast/app.scm 440 */
																		obj_t BgL_res2400z00_2908;

																		BgL_res2400z00_2908 =
																			MAKE_YOUNG_PAIR(BgL_arg1949z00_1918,
																			BNIL);
																		BgL_head1347z00_1906 = BgL_res2400z00_2908;
																	}
																}
																{	/* Ast/app.scm 440 */
																	obj_t BgL_g1350z00_1907;

																	BgL_g1350z00_1907 = CDR(BgL_errz00_1899);
																	{
																		obj_t BgL_l1345z00_1909;
																		obj_t BgL_tail1348z00_1910;

																		BgL_l1345z00_1909 = BgL_g1350z00_1907;
																		BgL_tail1348z00_1910 = BgL_head1347z00_1906;
																	BgL_zc3z04anonymousza31944ze3z87_1911:
																		if (NULLP(BgL_l1345z00_1909))
																			{	/* Ast/app.scm 440 */
																				BgL_arg1941z00_1902 =
																					BgL_head1347z00_1906;
																			}
																		else
																			{	/* Ast/app.scm 440 */
																				obj_t BgL_newtail1349z00_1913;

																				{	/* Ast/app.scm 440 */
																					obj_t BgL_arg1947z00_1915;

																					{	/* Ast/app.scm 440 */
																						obj_t BgL_pairz00_2912;

																						BgL_pairz00_2912 =
																							CAR(((obj_t) BgL_l1345z00_1909));
																						BgL_arg1947z00_1915 =
																							CAR(BgL_pairz00_2912);
																					}
																					{	/* Ast/app.scm 440 */
																						obj_t BgL_res2402z00_2913;

																						BgL_res2402z00_2913 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1947z00_1915, BNIL);
																						BgL_newtail1349z00_1913 =
																							BgL_res2402z00_2913;
																					}
																				}
																				SET_CDR(BgL_tail1348z00_1910,
																					BgL_newtail1349z00_1913);
																				{	/* Ast/app.scm 440 */
																					obj_t BgL_arg1946z00_1914;

																					BgL_arg1946z00_1914 =
																						CDR(((obj_t) BgL_l1345z00_1909));
																					{
																						obj_t BgL_tail1348z00_3934;
																						obj_t BgL_l1345z00_3933;

																						BgL_l1345z00_3933 =
																							BgL_arg1946z00_1914;
																						BgL_tail1348z00_3934 =
																							BgL_newtail1349z00_1913;
																						BgL_tail1348z00_1910 =
																							BgL_tail1348z00_3934;
																						BgL_l1345z00_1909 =
																							BgL_l1345z00_3933;
																						goto
																							BgL_zc3z04anonymousza31944ze3z87_1911;
																					}
																				}
																			}
																	}
																}
															}
															BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_locz00_23, BgL_arg1940z00_1901,
																BGl_string2441z00zzast_appz00,
																BgL_arg1941z00_1902, BNIL);
														}
													else
														{	/* Ast/app.scm 437 */
															BFALSE;
														}
												}
											}
										}
										{	/* Ast/app.scm 441 */
											obj_t BgL_arg1968z00_1953;

											BgL_arg1968z00_1953 =
												(((BgL_sfunz00_bglt) COBJECT(BgL_i1126z00_1877))->
												BgL_keysz00);
											{
												BgL_nodezf2effectzf2_bglt BgL_auxz00_3937;

												BgL_keysz00_2026 = BgL_arg1968z00_1953;
												BgL_valsz00_2027 = BgL_valsz00_1897;
												BgL_stackz00_2028 = BgL_stackz00_22;
												BgL_auxz00_3937 =
													BGl_loopze71ze7zzast_appz00(BgL_argsz00_26,
													BgL_i1126z00_1877, BgL_varz00_25, BgL_vz00_1876,
													BgL_sitez00_24, BgL_locz00_23, BgL_keysz00_2026,
													BgL_valsz00_2027, BNIL, BgL_stackz00_2028);
												return ((BgL_nodez00_bglt) BgL_auxz00_3937);
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



/* loop~0 */
	obj_t BGl_loopze70ze7zzast_appz00(obj_t BgL_locz00_3108,
		BgL_variablez00_bglt BgL_vz00_3107, obj_t BgL_lz00_2124)
	{
		{	/* Ast/app.scm 330 */
			if (NULLP(BgL_lz00_2124))
				{	/* Ast/app.scm 332 */
					return BNIL;
				}
			else
				{	/* Ast/app.scm 334 */
					bool_t BgL_test2563z00_3942;

					{	/* Ast/app.scm 334 */
						obj_t BgL_tmpz00_3943;

						BgL_tmpz00_3943 = CDR(((obj_t) BgL_lz00_2124));
						BgL_test2563z00_3942 = PAIRP(BgL_tmpz00_3943);
					}
					if (BgL_test2563z00_3942)
						{	/* Ast/app.scm 335 */
							obj_t BgL_arg2083z00_2129;
							obj_t BgL_arg2084z00_2130;

							{	/* Ast/app.scm 335 */
								obj_t BgL_arg2085z00_2131;
								obj_t BgL_arg2086z00_2132;

								BgL_arg2085z00_2131 = CAR(((obj_t) BgL_lz00_2124));
								{	/* Ast/app.scm 335 */
									obj_t BgL_pairz00_2748;

									BgL_pairz00_2748 = CDR(((obj_t) BgL_lz00_2124));
									BgL_arg2086z00_2132 = CAR(BgL_pairz00_2748);
								}
								{	/* Ast/app.scm 335 */
									obj_t BgL_list2087z00_2133;

									{	/* Ast/app.scm 335 */
										obj_t BgL_arg2088z00_2134;

										BgL_arg2088z00_2134 =
											MAKE_YOUNG_PAIR(BgL_arg2086z00_2132, BNIL);
										BgL_list2087z00_2133 =
											MAKE_YOUNG_PAIR(BgL_arg2085z00_2131, BgL_arg2088z00_2134);
									}
									BgL_arg2083z00_2129 = BgL_list2087z00_2133;
								}
							}
							{	/* Ast/app.scm 336 */
								obj_t BgL_arg2089z00_2135;

								{	/* Ast/app.scm 336 */
									obj_t BgL_pairz00_2753;

									BgL_pairz00_2753 = CDR(((obj_t) BgL_lz00_2124));
									BgL_arg2089z00_2135 = CDR(BgL_pairz00_2753);
								}
								BgL_arg2084z00_2130 =
									BGl_loopze70ze7zzast_appz00(BgL_locz00_3108, BgL_vz00_3107,
									BgL_arg2089z00_2135);
							}
							return MAKE_YOUNG_PAIR(BgL_arg2083z00_2129, BgL_arg2084z00_2130);
						}
					else
						{	/* Ast/app.scm 339 */
							obj_t BgL_arg2090z00_2136;
							obj_t BgL_arg2091z00_2137;

							BgL_arg2090z00_2136 =
								(((BgL_variablez00_bglt) COBJECT(BgL_vz00_3107))->BgL_idz00);
							{	/* Ast/app.scm 341 */
								obj_t BgL_arg2093z00_2139;

								BgL_arg2093z00_2139 = CAR(((obj_t) BgL_lz00_2124));
								BgL_arg2091z00_2137 =
									BGl_shapez00zztools_shapez00(BgL_arg2093z00_2139);
							}
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_3108,
								BgL_arg2090z00_2136, BGl_string2442z00zzast_appz00,
								BgL_arg2091z00_2137, BNIL);
						}
				}
		}

	}



/* loop~1 */
	BgL_nodezf2effectzf2_bglt BGl_loopze71ze7zzast_appz00(obj_t BgL_argsz00_3114,
		BgL_sfunz00_bglt BgL_i1126z00_3113, BgL_varz00_bglt BgL_varz00_3112,
		BgL_variablez00_bglt BgL_vz00_3111, obj_t BgL_sitez00_3110,
		obj_t BgL_locz00_3109, obj_t BgL_keysz00_2032, obj_t BgL_valsz00_2033,
		obj_t BgL_envz00_2034, obj_t BgL_stackz00_2035)
	{
		{	/* Ast/app.scm 367 */
			if (NULLP(BgL_keysz00_2032))
				{	/* Ast/app.scm 373 */
					BgL_appz00_bglt BgL_new1131z00_2038;

					{	/* Ast/app.scm 374 */
						BgL_appz00_bglt BgL_new1130z00_2056;

						BgL_new1130z00_2056 =
							((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_appz00_bgl))));
						{	/* Ast/app.scm 374 */
							long BgL_arg2035z00_2057;

							{	/* Ast/app.scm 374 */
								long BgL_res2372z00_2780;

								BgL_res2372z00_2780 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
								BgL_arg2035z00_2057 = BgL_res2372z00_2780;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1130z00_2056),
								BgL_arg2035z00_2057);
						}
						{	/* Ast/app.scm 374 */
							BgL_objectz00_bglt BgL_tmpz00_3970;

							BgL_tmpz00_3970 = ((BgL_objectz00_bglt) BgL_new1130z00_2056);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3970, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1130z00_2056);
						BgL_new1131z00_2038 = BgL_new1130z00_2056;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1131z00_2038)))->BgL_locz00) =
						((obj_t) BgL_locz00_3109), BUNSPEC);
					{
						BgL_typez00_bglt BgL_auxz00_3976;

						{	/* Ast/app.scm 375 */
							BgL_typez00_bglt BgL_arg2022z00_2039;

							BgL_arg2022z00_2039 =
								(((BgL_variablez00_bglt) COBJECT(BgL_vz00_3111))->BgL_typez00);
							BgL_auxz00_3976 =
								BGl_strictzd2nodezd2typez00zzast_nodez00(
								((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00),
								BgL_arg2022z00_2039);
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1131z00_2038)))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_3976), BUNSPEC);
					}
					((((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt) BgL_new1131z00_2038)))->
							BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1131z00_2038)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2038))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_varz00_3112), BUNSPEC);
					{
						obj_t BgL_auxz00_3988;

						{	/* Ast/app.scm 378 */
							obj_t BgL_arg2023z00_2040;
							obj_t BgL_arg2026z00_2041;

							BgL_arg2023z00_2040 =
								BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_3114,
								(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_i1126z00_3113)))->BgL_arityz00));
							{	/* Ast/app.scm 379 */
								obj_t BgL_l1322z00_2043;

								BgL_l1322z00_2043 = bgl_reverse_bang(BgL_envz00_2034);
								if (NULLP(BgL_l1322z00_2043))
									{	/* Ast/app.scm 379 */
										BgL_arg2026z00_2041 = BNIL;
									}
								else
									{	/* Ast/app.scm 379 */
										obj_t BgL_head1324z00_2045;

										{	/* Ast/app.scm 379 */
											obj_t BgL_res2374z00_2786;

											BgL_res2374z00_2786 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1324z00_2045 = BgL_res2374z00_2786;
										}
										{
											obj_t BgL_l1322z00_2047;
											obj_t BgL_tail1325z00_2048;

											BgL_l1322z00_2047 = BgL_l1322z00_2043;
											BgL_tail1325z00_2048 = BgL_head1324z00_2045;
										BgL_zc3z04anonymousza32030ze3z87_2049:
											if (NULLP(BgL_l1322z00_2047))
												{	/* Ast/app.scm 379 */
													BgL_arg2026z00_2041 = CDR(BgL_head1324z00_2045);
												}
											else
												{	/* Ast/app.scm 379 */
													obj_t BgL_newtail1326z00_2051;

													{	/* Ast/app.scm 379 */
														BgL_nodez00_bglt BgL_arg2034z00_2053;

														{	/* Ast/app.scm 379 */
															obj_t BgL_vz00_2054;

															BgL_vz00_2054 = CAR(((obj_t) BgL_l1322z00_2047));
															BgL_arg2034z00_2053 =
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_vz00_2054, BgL_stackz00_2035,
																BgL_locz00_3109, BgL_sitez00_3110);
														}
														{	/* Ast/app.scm 379 */
															obj_t BgL_res2376z00_2790;

															BgL_res2376z00_2790 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2034z00_2053), BNIL);
															BgL_newtail1326z00_2051 = BgL_res2376z00_2790;
														}
													}
													SET_CDR(BgL_tail1325z00_2048,
														BgL_newtail1326z00_2051);
													{	/* Ast/app.scm 379 */
														obj_t BgL_arg2033z00_2052;

														BgL_arg2033z00_2052 =
															CDR(((obj_t) BgL_l1322z00_2047));
														{
															obj_t BgL_tail1325z00_4008;
															obj_t BgL_l1322z00_4007;

															BgL_l1322z00_4007 = BgL_arg2033z00_2052;
															BgL_tail1325z00_4008 = BgL_newtail1326z00_2051;
															BgL_tail1325z00_2048 = BgL_tail1325z00_4008;
															BgL_l1322z00_2047 = BgL_l1322z00_4007;
															goto BgL_zc3z04anonymousza32030ze3z87_2049;
														}
													}
												}
										}
									}
							}
							BgL_auxz00_3988 =
								BGl_appendzd221011zd2zzast_appz00(BgL_arg2023z00_2040,
								BgL_arg2026z00_2041);
						}
						((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2038))->BgL_argsz00) =
							((obj_t) BgL_auxz00_3988), BUNSPEC);
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1131z00_2038))->
							BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
					return ((BgL_nodezf2effectzf2_bglt) BgL_new1131z00_2038);
				}
			else
				{	/* Ast/app.scm 372 */
					if (NULLP(BgL_valsz00_2033))
						{	/* Ast/app.scm 383 */
							obj_t BgL_itz00_2059;

							{	/* Ast/app.scm 383 */
								obj_t BgL_arg2046z00_2075;

								{	/* Ast/app.scm 383 */
									obj_t BgL_pairz00_2797;

									BgL_pairz00_2797 = CAR(((obj_t) BgL_keysz00_2032));
									BgL_arg2046z00_2075 = CAR(BgL_pairz00_2797);
								}
								BgL_itz00_2059 =
									BGl_parsezd2idzd2zzast_identz00(BgL_arg2046z00_2075,
									BgL_locz00_3109);
							}
							{	/* Ast/app.scm 383 */
								BgL_localz00_bglt BgL_varz00_2060;

								{	/* Ast/app.scm 384 */
									obj_t BgL_arg2044z00_2073;
									obj_t BgL_arg2045z00_2074;

									BgL_arg2044z00_2073 = CAR(BgL_itz00_2059);
									BgL_arg2045z00_2074 = CDR(BgL_itz00_2059);
									BgL_varz00_2060 =
										BGl_makezd2userzd2localzd2svarzd2zzast_localz00
										(BgL_arg2044z00_2073,
										((BgL_typez00_bglt) BgL_arg2045z00_2074));
								}
								{	/* Ast/app.scm 384 */
									BgL_nodez00_bglt BgL_valz00_2061;

									{	/* Ast/app.scm 385 */
										obj_t BgL_arg2043z00_2072;

										{	/* Ast/app.scm 385 */
											obj_t BgL_pairz00_2805;

											{	/* Ast/app.scm 385 */
												obj_t BgL_pairz00_2804;

												BgL_pairz00_2804 = CAR(((obj_t) BgL_keysz00_2032));
												BgL_pairz00_2805 = CDR(BgL_pairz00_2804);
											}
											BgL_arg2043z00_2072 = CAR(BgL_pairz00_2805);
										}
										BgL_valz00_2061 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2043z00_2072,
											BgL_stackz00_2035, BgL_locz00_3109, BgL_sitez00_3110);
									}
									{	/* Ast/app.scm 385 */
										obj_t BgL_nenvz00_2062;

										BgL_nenvz00_2062 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_varz00_2060), BgL_envz00_2034);
										{	/* Ast/app.scm 386 */
											obj_t BgL_nstackz00_2063;

											BgL_nstackz00_2063 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_varz00_2060), BgL_stackz00_2035);
											{	/* Ast/app.scm 387 */
												BgL_nodezf2effectzf2_bglt BgL_bodyz00_2064;

												{	/* Ast/app.scm 388 */
													obj_t BgL_arg2041z00_2071;

													BgL_arg2041z00_2071 = CDR(((obj_t) BgL_keysz00_2032));
													BgL_bodyz00_2064 =
														BGl_loopze71ze7zzast_appz00(BgL_argsz00_3114,
														BgL_i1126z00_3113, BgL_varz00_3112, BgL_vz00_3111,
														BgL_sitez00_3110, BgL_locz00_3109,
														BgL_arg2041z00_2071, BNIL, BgL_nenvz00_2062,
														BgL_nstackz00_2063);
												}
												{	/* Ast/app.scm 388 */

													{	/* Ast/app.scm 389 */
														BgL_letzd2varzd2_bglt BgL_new1134z00_2065;

														{	/* Ast/app.scm 390 */
															BgL_letzd2varzd2_bglt BgL_new1133z00_2069;

															BgL_new1133z00_2069 =
																((BgL_letzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_letzd2varzd2_bgl))));
															{	/* Ast/app.scm 390 */
																long BgL_arg2040z00_2070;

																{	/* Ast/app.scm 390 */
																	long BgL_res2378z00_2808;

																	BgL_res2378z00_2808 =
																		BGL_CLASS_INDEX
																		(BGl_letzd2varzd2zzast_nodez00);
																	BgL_arg2040z00_2070 = BgL_res2378z00_2808;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1133z00_2069),
																	BgL_arg2040z00_2070);
															}
															{	/* Ast/app.scm 390 */
																BgL_objectz00_bglt BgL_tmpz00_4039;

																BgL_tmpz00_4039 =
																	((BgL_objectz00_bglt) BgL_new1133z00_2069);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4039,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1133z00_2069);
															BgL_new1134z00_2065 = BgL_new1133z00_2069;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1134z00_2065)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_3109), BUNSPEC);
														{
															BgL_typez00_bglt BgL_auxz00_4045;

															{	/* Ast/app.scm 391 */
																BgL_typez00_bglt BgL_arg2037z00_2066;

																BgL_arg2037z00_2066 =
																	(((BgL_variablez00_bglt)
																		COBJECT(BgL_vz00_3111))->BgL_typez00);
																BgL_auxz00_4045 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00((
																		(BgL_typez00_bglt)
																		BGl_za2_za2z00zztype_cachez00),
																	BgL_arg2037z00_2066);
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1134z00_2065)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_4045), BUNSPEC);
														}
														((((BgL_nodezf2effectzf2_bglt) COBJECT(
																		((BgL_nodezf2effectzf2_bglt)
																			BgL_new1134z00_2065)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1134z00_2065)))->BgL_keyz00) =
															((obj_t) BINT(((long) -1))), BUNSPEC);
														{
															obj_t BgL_auxz00_4056;

															{	/* Ast/app.scm 392 */
																obj_t BgL_arg2038z00_2067;

																BgL_arg2038z00_2067 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_varz00_2060),
																	((obj_t) BgL_valz00_2061));
																{	/* Ast/app.scm 392 */
																	obj_t BgL_list2039z00_2068;

																	BgL_list2039z00_2068 =
																		MAKE_YOUNG_PAIR(BgL_arg2038z00_2067, BNIL);
																	BgL_auxz00_4056 = BgL_list2039z00_2068;
															}}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1134z00_2065))->
																	BgL_bindingsz00) =
																((obj_t) BgL_auxz00_4056), BUNSPEC);
														}
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1134z00_2065))->BgL_bodyz00) =
															((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																	BgL_bodyz00_2064)), BUNSPEC);
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1134z00_2065))->
																BgL_removablezf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														return ((BgL_nodezf2effectzf2_bglt)
															BgL_new1134z00_2065);
													}
												}
											}
										}
									}
								}
							}
						}
					else
						{	/* Ast/app.scm 394 */
							bool_t BgL_test2568z00_4066;

							{	/* Ast/app.scm 394 */
								obj_t BgL_arg2076z00_2115;
								obj_t BgL_arg2077z00_2116;

								{	/* Ast/app.scm 394 */
									obj_t BgL_arg2078z00_2117;

									{	/* Ast/app.scm 394 */
										obj_t BgL_pairz00_2817;

										BgL_pairz00_2817 = CAR(((obj_t) BgL_keysz00_2032));
										BgL_arg2078z00_2117 = CAR(BgL_pairz00_2817);
									}
									BgL_arg2076z00_2115 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
										(BgL_arg2078z00_2117, BgL_locz00_3109);
								}
								{	/* Ast/app.scm 394 */
									obj_t BgL_pairz00_2821;

									BgL_pairz00_2821 = CAR(((obj_t) BgL_valsz00_2033));
									BgL_arg2077z00_2116 = CAR(BgL_pairz00_2821);
								}
								BgL_test2568z00_4066 =
									(BgL_arg2076z00_2115 == BgL_arg2077z00_2116);
							}
							if (BgL_test2568z00_4066)
								{	/* Ast/app.scm 395 */
									obj_t BgL_itz00_2080;

									{	/* Ast/app.scm 395 */
										obj_t BgL_arg2062z00_2097;

										{	/* Ast/app.scm 395 */
											obj_t BgL_pairz00_2825;

											BgL_pairz00_2825 = CAR(((obj_t) BgL_valsz00_2033));
											BgL_arg2062z00_2097 = CAR(BgL_pairz00_2825);
										}
										BgL_itz00_2080 =
											BGl_parsezd2idzd2zzast_identz00(BgL_arg2062z00_2097,
											BgL_locz00_3109);
									}
									{	/* Ast/app.scm 395 */
										BgL_localz00_bglt BgL_varz00_2081;

										{	/* Ast/app.scm 396 */
											obj_t BgL_arg2060z00_2095;
											obj_t BgL_arg2061z00_2096;

											BgL_arg2060z00_2095 = CAR(BgL_itz00_2080);
											BgL_arg2061z00_2096 = CDR(BgL_itz00_2080);
											BgL_varz00_2081 =
												BGl_makezd2userzd2localzd2svarzd2zzast_localz00
												(BgL_arg2060z00_2095,
												((BgL_typez00_bglt) BgL_arg2061z00_2096));
										}
										{	/* Ast/app.scm 396 */
											BgL_nodez00_bglt BgL_valz00_2082;

											{	/* Ast/app.scm 397 */
												obj_t BgL_arg2059z00_2094;

												{	/* Ast/app.scm 397 */
													obj_t BgL_pairz00_2833;

													{	/* Ast/app.scm 397 */
														obj_t BgL_pairz00_2832;

														BgL_pairz00_2832 = CAR(((obj_t) BgL_valsz00_2033));
														BgL_pairz00_2833 = CDR(BgL_pairz00_2832);
													}
													BgL_arg2059z00_2094 = CAR(BgL_pairz00_2833);
												}
												BgL_valz00_2082 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg2059z00_2094, BgL_stackz00_2035,
													BgL_locz00_3109, BgL_sitez00_3110);
											}
											{	/* Ast/app.scm 397 */
												obj_t BgL_nenvz00_2083;

												BgL_nenvz00_2083 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_varz00_2081), BgL_envz00_2034);
												{	/* Ast/app.scm 398 */
													obj_t BgL_nstackz00_2084;

													BgL_nstackz00_2084 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_varz00_2081), BgL_stackz00_2035);
													{	/* Ast/app.scm 399 */
														BgL_nodezf2effectzf2_bglt BgL_bodyz00_2085;

														{	/* Ast/app.scm 400 */
															obj_t BgL_arg2056z00_2092;
															obj_t BgL_arg2057z00_2093;

															BgL_arg2056z00_2092 =
																CDR(((obj_t) BgL_keysz00_2032));
															BgL_arg2057z00_2093 =
																CDR(((obj_t) BgL_valsz00_2033));
															BgL_bodyz00_2085 =
																BGl_loopze71ze7zzast_appz00(BgL_argsz00_3114,
																BgL_i1126z00_3113, BgL_varz00_3112,
																BgL_vz00_3111, BgL_sitez00_3110,
																BgL_locz00_3109, BgL_arg2056z00_2092,
																BgL_arg2057z00_2093, BgL_nenvz00_2083,
																BgL_nstackz00_2084);
														}
														{	/* Ast/app.scm 400 */

															{	/* Ast/app.scm 401 */
																BgL_letzd2varzd2_bglt BgL_new1136z00_2086;

																{	/* Ast/app.scm 402 */
																	BgL_letzd2varzd2_bglt BgL_new1135z00_2090;

																	BgL_new1135z00_2090 =
																		((BgL_letzd2varzd2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_letzd2varzd2_bgl))));
																	{	/* Ast/app.scm 402 */
																		long BgL_arg2055z00_2091;

																		{	/* Ast/app.scm 402 */
																			long BgL_res2380z00_2837;

																			BgL_res2380z00_2837 =
																				BGL_CLASS_INDEX
																				(BGl_letzd2varzd2zzast_nodez00);
																			BgL_arg2055z00_2091 = BgL_res2380z00_2837;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1135z00_2090),
																			BgL_arg2055z00_2091);
																	}
																	{	/* Ast/app.scm 402 */
																		BgL_objectz00_bglt BgL_tmpz00_4101;

																		BgL_tmpz00_4101 =
																			((BgL_objectz00_bglt)
																			BgL_new1135z00_2090);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4101,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1135z00_2090);
																	BgL_new1136z00_2086 = BgL_new1135z00_2090;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1136z00_2086)))->BgL_locz00) =
																	((obj_t) BgL_locz00_3109), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_4107;

																	{	/* Ast/app.scm 403 */
																		BgL_typez00_bglt BgL_arg2051z00_2087;

																		BgL_arg2051z00_2087 =
																			(((BgL_variablez00_bglt)
																				COBJECT(BgL_vz00_3111))->BgL_typez00);
																		BgL_auxz00_4107 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg2051z00_2087);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1136z00_2086)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_4107),
																		BUNSPEC);
																}
																((((BgL_nodezf2effectzf2_bglt) COBJECT(
																				((BgL_nodezf2effectzf2_bglt)
																					BgL_new1136z00_2086)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1136z00_2086)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																{
																	obj_t BgL_auxz00_4118;

																	{	/* Ast/app.scm 404 */
																		obj_t BgL_arg2053z00_2088;

																		BgL_arg2053z00_2088 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_varz00_2081),
																			((obj_t) BgL_valz00_2082));
																		{	/* Ast/app.scm 404 */
																			obj_t BgL_list2054z00_2089;

																			BgL_list2054z00_2089 =
																				MAKE_YOUNG_PAIR(BgL_arg2053z00_2088,
																				BNIL);
																			BgL_auxz00_4118 = BgL_list2054z00_2089;
																	}}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1136z00_2086))->
																			BgL_bindingsz00) =
																		((obj_t) BgL_auxz00_4118), BUNSPEC);
																}
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1136z00_2086))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																			BgL_bodyz00_2085)), BUNSPEC);
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1136z00_2086))->
																		BgL_removablezf3zf3) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
																return ((BgL_nodezf2effectzf2_bglt)
																	BgL_new1136z00_2086);
															}
														}
													}
												}
											}
										}
									}
								}
							else
								{	/* Ast/app.scm 407 */
									obj_t BgL_itz00_2098;

									{	/* Ast/app.scm 407 */
										obj_t BgL_arg2075z00_2114;

										{	/* Ast/app.scm 407 */
											obj_t BgL_pairz00_2846;

											BgL_pairz00_2846 = CAR(((obj_t) BgL_keysz00_2032));
											BgL_arg2075z00_2114 = CAR(BgL_pairz00_2846);
										}
										BgL_itz00_2098 =
											BGl_parsezd2idzd2zzast_identz00(BgL_arg2075z00_2114,
											BgL_locz00_3109);
									}
									{	/* Ast/app.scm 407 */
										BgL_localz00_bglt BgL_varz00_2099;

										{	/* Ast/app.scm 408 */
											obj_t BgL_arg2071z00_2112;
											obj_t BgL_arg2072z00_2113;

											BgL_arg2071z00_2112 = CAR(BgL_itz00_2098);
											BgL_arg2072z00_2113 = CDR(BgL_itz00_2098);
											BgL_varz00_2099 =
												BGl_makezd2userzd2localzd2svarzd2zzast_localz00
												(BgL_arg2071z00_2112,
												((BgL_typez00_bglt) BgL_arg2072z00_2113));
										}
										{	/* Ast/app.scm 408 */
											BgL_nodez00_bglt BgL_valz00_2100;

											{	/* Ast/app.scm 409 */
												obj_t BgL_arg2070z00_2111;

												{	/* Ast/app.scm 409 */
													obj_t BgL_pairz00_2854;

													{	/* Ast/app.scm 409 */
														obj_t BgL_pairz00_2853;

														BgL_pairz00_2853 = CAR(((obj_t) BgL_keysz00_2032));
														BgL_pairz00_2854 = CDR(BgL_pairz00_2853);
													}
													BgL_arg2070z00_2111 = CAR(BgL_pairz00_2854);
												}
												BgL_valz00_2100 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg2070z00_2111, BgL_stackz00_2035,
													BgL_locz00_3109, BgL_sitez00_3110);
											}
											{	/* Ast/app.scm 409 */
												obj_t BgL_nenvz00_2101;

												BgL_nenvz00_2101 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_varz00_2099), BgL_envz00_2034);
												{	/* Ast/app.scm 410 */
													obj_t BgL_nstackz00_2102;

													BgL_nstackz00_2102 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_varz00_2099), BgL_stackz00_2035);
													{	/* Ast/app.scm 411 */
														BgL_nodezf2effectzf2_bglt BgL_bodyz00_2103;

														{	/* Ast/app.scm 412 */
															obj_t BgL_arg2069z00_2110;

															BgL_arg2069z00_2110 =
																CDR(((obj_t) BgL_keysz00_2032));
															BgL_bodyz00_2103 =
																BGl_loopze71ze7zzast_appz00(BgL_argsz00_3114,
																BgL_i1126z00_3113, BgL_varz00_3112,
																BgL_vz00_3111, BgL_sitez00_3110,
																BgL_locz00_3109, BgL_arg2069z00_2110,
																BgL_valsz00_2033, BgL_nenvz00_2101,
																BgL_nstackz00_2102);
														}
														{	/* Ast/app.scm 412 */

															{	/* Ast/app.scm 413 */
																BgL_letzd2varzd2_bglt BgL_new1138z00_2104;

																{	/* Ast/app.scm 414 */
																	BgL_letzd2varzd2_bglt BgL_new1137z00_2108;

																	BgL_new1137z00_2108 =
																		((BgL_letzd2varzd2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_letzd2varzd2_bgl))));
																	{	/* Ast/app.scm 414 */
																		long BgL_arg2068z00_2109;

																		{	/* Ast/app.scm 414 */
																			long BgL_res2382z00_2857;

																			BgL_res2382z00_2857 =
																				BGL_CLASS_INDEX
																				(BGl_letzd2varzd2zzast_nodez00);
																			BgL_arg2068z00_2109 = BgL_res2382z00_2857;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1137z00_2108),
																			BgL_arg2068z00_2109);
																	}
																	{	/* Ast/app.scm 414 */
																		BgL_objectz00_bglt BgL_tmpz00_4152;

																		BgL_tmpz00_4152 =
																			((BgL_objectz00_bglt)
																			BgL_new1137z00_2108);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4152,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1137z00_2108);
																	BgL_new1138z00_2104 = BgL_new1137z00_2108;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1138z00_2104)))->BgL_locz00) =
																	((obj_t) BgL_locz00_3109), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_4158;

																	{	/* Ast/app.scm 415 */
																		BgL_typez00_bglt BgL_arg2063z00_2105;

																		BgL_arg2063z00_2105 =
																			(((BgL_variablez00_bglt)
																				COBJECT(BgL_vz00_3111))->BgL_typez00);
																		BgL_auxz00_4158 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg2063z00_2105);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1138z00_2104)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_4158),
																		BUNSPEC);
																}
																((((BgL_nodezf2effectzf2_bglt) COBJECT(
																				((BgL_nodezf2effectzf2_bglt)
																					BgL_new1138z00_2104)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1138z00_2104)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																{
																	obj_t BgL_auxz00_4169;

																	{	/* Ast/app.scm 416 */
																		obj_t BgL_arg2065z00_2106;

																		BgL_arg2065z00_2106 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_varz00_2099),
																			((obj_t) BgL_valz00_2100));
																		{	/* Ast/app.scm 416 */
																			obj_t BgL_list2066z00_2107;

																			BgL_list2066z00_2107 =
																				MAKE_YOUNG_PAIR(BgL_arg2065z00_2106,
																				BNIL);
																			BgL_auxz00_4169 = BgL_list2066z00_2107;
																	}}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1138z00_2104))->
																			BgL_bindingsz00) =
																		((obj_t) BgL_auxz00_4169), BUNSPEC);
																}
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1138z00_2104))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																			BgL_bodyz00_2103)), BUNSPEC);
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1138z00_2104))->
																		BgL_removablezf3zf3) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
																return ((BgL_nodezf2effectzf2_bglt)
																	BgL_new1138z00_2104);
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



/* make-fx-app-node */
	obj_t BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(obj_t BgL_locz00_27,
		BgL_varz00_bglt BgL_varz00_28, obj_t BgL_argsz00_29)
	{
		{	/* Ast/app.scm 452 */
			{	/* Ast/app.scm 453 */
				BgL_variablez00_bglt BgL_vz00_2143;

				BgL_vz00_2143 =
					(((BgL_varz00_bglt) COBJECT(BgL_varz00_28))->BgL_variablez00);
				{	/* Ast/app.scm 455 */
					bool_t BgL_test2569z00_4180;

					{	/* Ast/app.scm 455 */
						bool_t BgL_test2570z00_4181;

						{	/* Ast/app.scm 455 */
							BgL_valuez00_bglt BgL_arg2119z00_2185;

							BgL_arg2119z00_2185 =
								(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2143))->BgL_valuez00);
							{	/* Ast/app.scm 455 */
								bool_t BgL_res2403z00_2918;

								BgL_res2403z00_2918 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2119z00_2185), BGl_cfunz00zzast_varz00);
								BgL_test2570z00_4181 = BgL_res2403z00_2918;
							}
						}
						if (BgL_test2570z00_4181)
							{	/* Ast/app.scm 455 */
								BgL_test2569z00_4180 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_vz00_2143))))->BgL_idz00),
										CNST_TABLE_REF(((long) 9))));
							}
						else
							{	/* Ast/app.scm 455 */
								BgL_test2569z00_4180 = ((bool_t) 0);
							}
					}
					if (BgL_test2569z00_4180)
						{	/* Ast/app.scm 455 */
							return
								BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(BgL_locz00_27,
								BgL_varz00_28, BgL_argsz00_29);
						}
					else
						{	/* Ast/app.scm 459 */
							bool_t BgL_test2571z00_4192;

							{	/* Ast/app.scm 459 */
								BgL_valuez00_bglt BgL_arg2118z00_2183;

								BgL_arg2118z00_2183 =
									(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2143))->
									BgL_valuez00);
								{	/* Ast/app.scm 459 */
									bool_t BgL_res2404z00_2922;

									BgL_res2404z00_2922 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg2118z00_2183), BGl_funz00zzast_varz00);
									BgL_test2571z00_4192 = BgL_res2404z00_2922;
								}
							}
							if (BgL_test2571z00_4192)
								{	/* Ast/app.scm 461 */
									BgL_appz00_bglt BgL_callz00_2150;

									{	/* Ast/app.scm 461 */
										BgL_appz00_bglt BgL_new1140z00_2164;

										{	/* Ast/app.scm 462 */
											BgL_appz00_bglt BgL_new1139z00_2172;

											BgL_new1139z00_2172 =
												((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_appz00_bgl))));
											{	/* Ast/app.scm 462 */
												long BgL_arg2114z00_2173;

												{	/* Ast/app.scm 462 */
													long BgL_res2405z00_2924;

													BgL_res2405z00_2924 =
														BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
													BgL_arg2114z00_2173 = BgL_res2405z00_2924;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1139z00_2172),
													BgL_arg2114z00_2173);
											}
											{	/* Ast/app.scm 462 */
												BgL_objectz00_bglt BgL_tmpz00_4200;

												BgL_tmpz00_4200 =
													((BgL_objectz00_bglt) BgL_new1139z00_2172);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4200, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1139z00_2172);
											BgL_new1140z00_2164 = BgL_new1139z00_2172;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1140z00_2164)))->
												BgL_locz00) = ((obj_t) BgL_locz00_27), BUNSPEC);
										{
											BgL_typez00_bglt BgL_auxz00_4206;

											{	/* Ast/app.scm 463 */
												BgL_typez00_bglt BgL_arg2110z00_2165;

												BgL_arg2110z00_2165 =
													(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2143))->
													BgL_typez00);
												BgL_auxz00_4206 =
													BGl_strictzd2nodezd2typez00zzast_nodez00((
														(BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00),
													BgL_arg2110z00_2165);
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1140z00_2164)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_4206), BUNSPEC);
										}
										((((BgL_nodezf2effectzf2_bglt) COBJECT(
														((BgL_nodezf2effectzf2_bglt)
															BgL_new1140z00_2164)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1140z00_2164)))->BgL_keyz00) =
											((obj_t) BINT(((long) -1))), BUNSPEC);
										{
											BgL_varz00_bglt BgL_auxz00_4217;

											{	/* Ast/app.scm 464 */
												bool_t BgL_test2572z00_4218;

												{	/* Ast/app.scm 464 */
													bool_t BgL_res2406z00_2929;

													BgL_res2406z00_2929 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_varz00_28),
														BGl_closurez00zzast_nodez00);
													BgL_test2572z00_4218 = BgL_res2406z00_2929;
												}
												if (BgL_test2572z00_4218)
													{	/* Ast/app.scm 464 */
														BgL_varz00_bglt BgL_new1141z00_2168;

														{	/* Ast/app.scm 464 */
															BgL_varz00_bglt BgL_new1145z00_2170;

															BgL_new1145z00_2170 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Ast/app.scm 464 */
																long BgL_arg2112z00_2171;

																{	/* Ast/app.scm 464 */
																	long BgL_res2407z00_2931;

																	{	/* Ast/app.scm 464 */
																		obj_t BgL_classz00_2930;

																		BgL_classz00_2930 = BGl_varz00zzast_nodez00;
																		BgL_res2407z00_2931 =
																			BGL_CLASS_INDEX(BgL_classz00_2930);
																	}
																	BgL_arg2112z00_2171 = BgL_res2407z00_2931;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1145z00_2170),
																	BgL_arg2112z00_2171);
															}
															BgL_new1141z00_2168 = BgL_new1145z00_2170;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1141z00_2168)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_varz00_28)))->BgL_locz00)),
															BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1141z00_2168)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_varz00_28)))->BgL_typez00)),
															BUNSPEC);
														((((BgL_varz00_bglt) COBJECT(BgL_new1141z00_2168))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) (((BgL_varz00_bglt)
																		COBJECT(((BgL_varz00_bglt) (
																					(BgL_nodez00_bglt) BgL_varz00_28))))->
																	BgL_variablez00)), BUNSPEC);
														BgL_auxz00_4217 = BgL_new1141z00_2168;
													}
												else
													{	/* Ast/app.scm 464 */
														BgL_auxz00_4217 = BgL_varz00_28;
													}
											}
											((((BgL_appz00_bglt) COBJECT(BgL_new1140z00_2164))->
													BgL_funz00) =
												((BgL_varz00_bglt) BgL_auxz00_4217), BUNSPEC);
										}
										((((BgL_appz00_bglt) COBJECT(BgL_new1140z00_2164))->
												BgL_argsz00) = ((obj_t) BgL_argsz00_29), BUNSPEC);
										((((BgL_appz00_bglt) COBJECT(BgL_new1140z00_2164))->
												BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
										BgL_callz00_2150 = BgL_new1140z00_2164;
									}
									{	/* Ast/app.scm 466 */
										bool_t BgL_test2573z00_4240;

										{	/* Ast/app.scm 466 */
											BgL_typez00_bglt BgL_arg2109z00_2163;

											BgL_arg2109z00_2163 =
												(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2143))->
												BgL_typez00);
											BgL_test2573z00_4240 =
												(((obj_t) BgL_arg2109z00_2163) ==
												BGl_za2voidza2z00zztype_cachez00);
										}
										if (BgL_test2573z00_4240)
											{	/* Ast/app.scm 468 */
												BgL_literalz00_bglt BgL_unspecz00_2153;

												{	/* Ast/app.scm 468 */
													BgL_literalz00_bglt BgL_new1147z00_2159;

													{	/* Ast/app.scm 468 */
														BgL_literalz00_bglt BgL_new1146z00_2161;

														BgL_new1146z00_2161 =
															((BgL_literalz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_literalz00_bgl))));
														{	/* Ast/app.scm 468 */
															long BgL_arg2108z00_2162;

															{	/* Ast/app.scm 468 */
																long BgL_res2408z00_2936;

																BgL_res2408z00_2936 =
																	BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
																BgL_arg2108z00_2162 = BgL_res2408z00_2936;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1146z00_2161),
																BgL_arg2108z00_2162);
														}
														{	/* Ast/app.scm 468 */
															BgL_objectz00_bglt BgL_tmpz00_4248;

															BgL_tmpz00_4248 =
																((BgL_objectz00_bglt) BgL_new1146z00_2161);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4248, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1146z00_2161);
														BgL_new1147z00_2159 = BgL_new1146z00_2161;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1147z00_2159)))->
															BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
													{
														BgL_typez00_bglt BgL_auxz00_4254;

														{	/* Ast/app.scm 469 */
															BgL_typez00_bglt BgL_arg2107z00_2160;

															BgL_arg2107z00_2160 =
																BGl_getzd2typezd2atomz00zztype_typeofz00
																(BUNSPEC);
															BgL_auxz00_4254 =
																BGl_strictzd2nodezd2typez00zzast_nodez00
																(BgL_arg2107z00_2160,
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00));
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1147z00_2159)))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4254), BUNSPEC);
													}
													((((BgL_atomz00_bglt) COBJECT(
																	((BgL_atomz00_bglt) BgL_new1147z00_2159)))->
															BgL_valuez00) = ((obj_t) BUNSPEC), BUNSPEC);
													BgL_unspecz00_2153 = BgL_new1147z00_2159;
												}
												{	/* Ast/app.scm 471 */
													BgL_sequencez00_bglt BgL_new1149z00_2154;

													{	/* Ast/app.scm 471 */
														BgL_sequencez00_bglt BgL_new1148z00_2157;

														BgL_new1148z00_2157 =
															((BgL_sequencez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_sequencez00_bgl))));
														{	/* Ast/app.scm 471 */
															long BgL_arg2106z00_2158;

															{	/* Ast/app.scm 471 */
																long BgL_res2409z00_2941;

																BgL_res2409z00_2941 =
																	BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
																BgL_arg2106z00_2158 = BgL_res2409z00_2941;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1148z00_2157),
																BgL_arg2106z00_2158);
														}
														{	/* Ast/app.scm 471 */
															BgL_objectz00_bglt BgL_tmpz00_4266;

															BgL_tmpz00_4266 =
																((BgL_objectz00_bglt) BgL_new1148z00_2157);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4266, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1148z00_2157);
														BgL_new1149z00_2154 = BgL_new1148z00_2157;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1149z00_2154)))->
															BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1149z00_2154)))->BgL_typez00) =
														((BgL_typez00_bglt)
															BGl_strictzd2nodezd2typez00zzast_nodez00((
																	(BgL_typez00_bglt)
																	BGl_za2_za2z00zztype_cachez00),
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1149z00_2154)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1149z00_2154)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													{
														obj_t BgL_auxz00_4282;

														{	/* Ast/app.scm 473 */
															obj_t BgL_list2104z00_2155;

															{	/* Ast/app.scm 473 */
																obj_t BgL_arg2105z00_2156;

																BgL_arg2105z00_2156 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_unspecz00_2153), BNIL);
																BgL_list2104z00_2155 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_callz00_2150),
																	BgL_arg2105z00_2156);
															}
															BgL_auxz00_4282 = BgL_list2104z00_2155;
														}
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1149z00_2154))->BgL_nodesz00) =
															((obj_t) BgL_auxz00_4282), BUNSPEC);
													}
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1149z00_2154))->BgL_unsafez00) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1149z00_2154))->BgL_metaz00) =
														((obj_t) BNIL), BUNSPEC);
													return ((obj_t) BgL_new1149z00_2154);
												}
											}
										else
											{	/* Ast/app.scm 466 */
												return ((obj_t) BgL_callz00_2150);
											}
									}
								}
							else
								{	/* Ast/app.scm 477 */
									BgL_funcallz00_bglt BgL_new1151z00_2174;

									{	/* Ast/app.scm 478 */
										BgL_funcallz00_bglt BgL_new1150z00_2181;

										BgL_new1150z00_2181 =
											((BgL_funcallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_funcallz00_bgl))));
										{	/* Ast/app.scm 478 */
											long BgL_arg2117z00_2182;

											{	/* Ast/app.scm 478 */
												long BgL_res2411z00_2947;

												BgL_res2411z00_2947 =
													BGL_CLASS_INDEX(BGl_funcallz00zzast_nodez00);
												BgL_arg2117z00_2182 = BgL_res2411z00_2947;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1150z00_2181),
												BgL_arg2117z00_2182);
										}
										{	/* Ast/app.scm 478 */
											BgL_objectz00_bglt BgL_tmpz00_4296;

											BgL_tmpz00_4296 =
												((BgL_objectz00_bglt) BgL_new1150z00_2181);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4296, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1150z00_2181);
										BgL_new1151z00_2174 = BgL_new1150z00_2181;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1151z00_2174)))->
											BgL_locz00) = ((obj_t) BgL_locz00_27), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1151z00_2174)))->BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt)
												BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
									((((BgL_funcallz00_bglt) COBJECT(BgL_new1151z00_2174))->
											BgL_funz00) =
										((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_varz00_28)),
										BUNSPEC);
									{
										obj_t BgL_auxz00_4307;

										{	/* Ast/app.scm 481 */
											BgL_varz00_bglt BgL_arg2115z00_2175;

											{	/* Ast/app.scm 481 */
												BgL_varz00_bglt BgL_new1152z00_2177;

												{	/* Ast/app.scm 481 */
													BgL_varz00_bglt BgL_new1156z00_2179;

													BgL_new1156z00_2179 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Ast/app.scm 481 */
														long BgL_arg2116z00_2180;

														{	/* Ast/app.scm 481 */
															long BgL_res2412z00_2952;

															{	/* Ast/app.scm 481 */
																obj_t BgL_classz00_2951;

																BgL_classz00_2951 = BGl_varz00zzast_nodez00;
																BgL_res2412z00_2952 =
																	BGL_CLASS_INDEX(BgL_classz00_2951);
															}
															BgL_arg2116z00_2180 = BgL_res2412z00_2952;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1156z00_2179),
															BgL_arg2116z00_2180);
													}
													BgL_new1152z00_2177 = BgL_new1156z00_2179;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1152z00_2177)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) BgL_varz00_28)))->
															BgL_locz00)), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1152z00_2177)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) BgL_varz00_28)))->
															BgL_typez00)), BUNSPEC);
												((((BgL_varz00_bglt) COBJECT(BgL_new1152z00_2177))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) (((BgL_varz00_bglt)
																COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt)
																			BgL_varz00_28))))->BgL_variablez00)),
													BUNSPEC);
												BgL_arg2115z00_2175 = BgL_new1152z00_2177;
											}
											BgL_auxz00_4307 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg2115z00_2175), BgL_argsz00_29);
										}
										((((BgL_funcallz00_bglt) COBJECT(BgL_new1151z00_2174))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_4307), BUNSPEC);
									}
									((((BgL_funcallz00_bglt) COBJECT(BgL_new1151z00_2174))->
											BgL_strengthz00) =
										((obj_t) CNST_TABLE_REF(((long) 10))), BUNSPEC);
									((((BgL_funcallz00_bglt) COBJECT(BgL_new1151z00_2174))->
											BgL_functionsz00) = ((obj_t) BUNSPEC), BUNSPEC);
									return ((obj_t) BgL_new1151z00_2174);
								}
						}
				}
			}
		}

	}



/* make-va-app-node */
	BgL_nodez00_bglt BGl_makezd2vazd2appzd2nodezd2zzast_appz00(long
		BgL_arityz00_30, obj_t BgL_stackz00_31, obj_t BgL_locz00_32,
		BgL_varz00_bglt BgL_varz00_33, obj_t BgL_argsz00_34)
	{
		{	/* Ast/app.scm 486 */
			{
				obj_t BgL_oldzd2argszd2_2189;
				long BgL_arityz00_2190;
				obj_t BgL_fzd2argszd2_2191;

				BgL_oldzd2argszd2_2189 = BgL_argsz00_34;
				BgL_arityz00_2190 = BgL_arityz00_30;
				BgL_fzd2argszd2_2191 = BNIL;
			BgL_zc3z04anonymousza32120ze3z87_2192:
				if ((BgL_arityz00_2190 == ((long) -1)))
					{	/* Ast/app.scm 495 */
						obj_t BgL_lzd2argzd2_2194;

						BgL_lzd2argzd2_2194 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 11))));
						{	/* Ast/app.scm 495 */
							obj_t BgL_lzd2expzd2_2195;

							{	/* Ast/app.scm 496 */
								obj_t BgL_arg2126z00_2203;
								obj_t BgL_arg2127z00_2204;

								BgL_arg2126z00_2203 = BGl_letzd2symzd2zzast_letz00();
								{	/* Ast/app.scm 496 */
									obj_t BgL_arg2128z00_2205;
									obj_t BgL_arg2129z00_2206;

									{	/* Ast/app.scm 496 */
										obj_t BgL_arg2130z00_2207;

										{	/* Ast/app.scm 496 */
											obj_t BgL_arg2131z00_2208;

											BgL_arg2131z00_2208 =
												MAKE_YOUNG_PAIR
												(BGl_makezd2argszd2listze70ze7zzast_appz00
												(BgL_oldzd2argszd2_2189), BNIL);
											BgL_arg2130z00_2207 =
												MAKE_YOUNG_PAIR(BgL_lzd2argzd2_2194,
												BgL_arg2131z00_2208);
										}
										BgL_arg2128z00_2205 =
											MAKE_YOUNG_PAIR(BgL_arg2130z00_2207, BNIL);
									}
									BgL_arg2129z00_2206 =
										MAKE_YOUNG_PAIR(BgL_lzd2argzd2_2194, BNIL);
									BgL_arg2127z00_2204 =
										MAKE_YOUNG_PAIR(BgL_arg2128z00_2205, BgL_arg2129z00_2206);
								}
								BgL_lzd2expzd2_2195 =
									MAKE_YOUNG_PAIR(BgL_arg2126z00_2203, BgL_arg2127z00_2204);
							}
							{	/* Ast/app.scm 496 */
								BgL_nodez00_bglt BgL_lzd2nodezd2_2196;

								BgL_lzd2nodezd2_2196 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_lzd2expzd2_2195,
									BgL_stackz00_31, BgL_locz00_32, CNST_TABLE_REF(((long) 2)));
								{	/* Ast/app.scm 498 */
									BgL_nodez00_bglt BgL_lzd2varzd2_2197;

									BgL_lzd2varzd2_2197 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_lzd2nodezd2_2196)))->
										BgL_bodyz00);
									{	/* Ast/app.scm 499 */
										obj_t BgL_appz00_2198;

										{	/* Ast/app.scm 501 */
											obj_t BgL_arg2123z00_2201;

											{	/* Ast/app.scm 501 */
												obj_t BgL_arg2125z00_2202;

												BgL_arg2125z00_2202 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_lzd2varzd2_2197), BgL_fzd2argszd2_2191);
												BgL_arg2123z00_2201 =
													bgl_reverse_bang(BgL_arg2125z00_2202);
											}
											BgL_appz00_2198 =
												BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(BgL_locz00_32,
												BgL_varz00_33, BgL_arg2123z00_2201);
										}
										{	/* Ast/app.scm 500 */

											((((BgL_letzd2varzd2_bglt) COBJECT(
															((BgL_letzd2varzd2_bglt) BgL_lzd2nodezd2_2196)))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
														BgL_appz00_2198)), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_4355;

												{	/* Ast/app.scm 504 */
													BgL_typez00_bglt BgL_arg2122z00_2200;

													BgL_arg2122z00_2200 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_letzd2varzd2_bglt)
																		BgL_lzd2nodezd2_2196))))->BgL_typez00);
													BgL_auxz00_4355 =
														BGl_strictzd2nodezd2typez00zzast_nodez00((
															(BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00),
														BgL_arg2122z00_2200);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_letzd2varzd2_bglt)
																		BgL_lzd2nodezd2_2196))))->BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_4355), BUNSPEC);
											}
											return
												BGl_cleanzd2userzd2nodez12z12zzast_appz00
												(BgL_lzd2nodezd2_2196);
										}
									}
								}
							}
						}
					}
				else
					{	/* Ast/app.scm 506 */
						obj_t BgL_arg2134z00_2211;
						long BgL_arg2135z00_2212;
						obj_t BgL_arg2136z00_2213;

						BgL_arg2134z00_2211 = CDR(((obj_t) BgL_oldzd2argszd2_2189));
						BgL_arg2135z00_2212 = (BgL_arityz00_2190 + ((long) 1));
						{	/* Ast/app.scm 508 */
							BgL_nodez00_bglt BgL_arg2137z00_2214;

							{	/* Ast/app.scm 508 */
								obj_t BgL_arg2138z00_2215;

								BgL_arg2138z00_2215 = CAR(((obj_t) BgL_oldzd2argszd2_2189));
								BgL_arg2137z00_2214 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2138z00_2215,
									BgL_stackz00_31, BgL_locz00_32, CNST_TABLE_REF(((long) 2)));
							}
							BgL_arg2136z00_2213 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg2137z00_2214), BgL_fzd2argszd2_2191);
						}
						{
							obj_t BgL_fzd2argszd2_4376;
							long BgL_arityz00_4375;
							obj_t BgL_oldzd2argszd2_4374;

							BgL_oldzd2argszd2_4374 = BgL_arg2134z00_2211;
							BgL_arityz00_4375 = BgL_arg2135z00_2212;
							BgL_fzd2argszd2_4376 = BgL_arg2136z00_2213;
							BgL_fzd2argszd2_2191 = BgL_fzd2argszd2_4376;
							BgL_arityz00_2190 = BgL_arityz00_4375;
							BgL_oldzd2argszd2_2189 = BgL_oldzd2argszd2_4374;
							goto BgL_zc3z04anonymousza32120ze3z87_2192;
						}
					}
			}
		}

	}



/* make-args-list~0 */
	obj_t BGl_makezd2argszd2listze70ze7zzast_appz00(obj_t BgL_argsz00_2217)
	{
		{	/* Ast/app.scm 490 */
			if (NULLP(BgL_argsz00_2217))
				{	/* Ast/app.scm 488 */
					return CNST_TABLE_REF(((long) 1));
				}
			else
				{	/* Ast/app.scm 490 */
					obj_t BgL_arg2141z00_2220;
					obj_t BgL_arg2142z00_2221;

					{	/* Ast/app.scm 490 */
						obj_t BgL_arg2143z00_2222;

						{	/* Ast/app.scm 490 */
							obj_t BgL_arg2144z00_2223;

							BgL_arg2144z00_2223 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
							BgL_arg2143z00_2222 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
								BgL_arg2144z00_2223);
						}
						BgL_arg2141z00_2220 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)), BgL_arg2143z00_2222);
					}
					{	/* Ast/app.scm 490 */
						obj_t BgL_arg2145z00_2224;
						obj_t BgL_arg2146z00_2225;

						BgL_arg2145z00_2224 = CAR(((obj_t) BgL_argsz00_2217));
						{	/* Ast/app.scm 490 */
							obj_t BgL_arg2147z00_2226;

							{	/* Ast/app.scm 490 */
								obj_t BgL_arg2148z00_2227;

								BgL_arg2148z00_2227 = CDR(((obj_t) BgL_argsz00_2217));
								BgL_arg2147z00_2226 =
									BGl_makezd2argszd2listze70ze7zzast_appz00
									(BgL_arg2148z00_2227);
							}
							BgL_arg2146z00_2225 = MAKE_YOUNG_PAIR(BgL_arg2147z00_2226, BNIL);
						}
						BgL_arg2142z00_2221 =
							MAKE_YOUNG_PAIR(BgL_arg2145z00_2224, BgL_arg2146z00_2225);
					}
					return MAKE_YOUNG_PAIR(BgL_arg2141z00_2220, BgL_arg2142z00_2221);
				}
		}

	}



/* make-special-app-node */
	obj_t BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(obj_t BgL_locz00_36,
		BgL_varz00_bglt BgL_varz00_37, obj_t BgL_argsz00_38)
	{
		{	/* Ast/app.scm 528 */
			{	/* Ast/app.scm 529 */
				BgL_variablez00_bglt BgL_variablez00_2230;

				BgL_variablez00_2230 =
					(((BgL_varz00_bglt) COBJECT(BgL_varz00_37))->BgL_variablez00);
				{	/* Ast/app.scm 529 */
					obj_t BgL_gnamez00_2231;

					BgL_gnamez00_2231 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_variablez00_2230))))->BgL_namez00);
					{	/* Ast/app.scm 530 */

						{	/* Ast/app.scm 531 */
							obj_t BgL_casezd2valuezd2_2232;

							BgL_casezd2valuezd2_2232 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_variablez00_2230))))->
								BgL_idz00);
							if ((BgL_casezd2valuezd2_2232 == CNST_TABLE_REF(((long) 14))))
								{	/* Ast/app.scm 531 */
									{	/* Ast/app.scm 535 */
										bool_t BgL_test2577z00_4404;

										{	/* Ast/app.scm 535 */
											bool_t BgL_test2578z00_4405;

											{	/* Ast/app.scm 535 */
												obj_t BgL_arg2161z00_2245;

												BgL_arg2161z00_2245 = CAR(((obj_t) BgL_argsz00_38));
												BgL_test2578z00_4405 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2161z00_2245,
													BGl_varz00zzast_nodez00);
											}
											if (BgL_test2578z00_4405)
												{	/* Ast/app.scm 535 */
													bool_t BgL_test2579z00_4409;

													{	/* Ast/app.scm 535 */
														obj_t BgL_arg2160z00_2244;

														BgL_arg2160z00_2244 = CAR(((obj_t) BgL_argsz00_38));
														BgL_test2579z00_4409 =
															BGl_isazf3zf3zz__objectz00(BgL_arg2160z00_2244,
															BGl_closurez00zzast_nodez00);
													}
													if (BgL_test2579z00_4409)
														{	/* Ast/app.scm 535 */
															BgL_test2577z00_4404 = ((bool_t) 0);
														}
													else
														{	/* Ast/app.scm 535 */
															BgL_test2577z00_4404 = ((bool_t) 1);
														}
												}
											else
												{	/* Ast/app.scm 535 */
													BgL_test2577z00_4404 = ((bool_t) 0);
												}
										}
										if (BgL_test2577z00_4404)
											{	/* Ast/app.scm 536 */
												obj_t BgL_arg2159z00_2241;

												BgL_arg2159z00_2241 = CAR(((obj_t) BgL_argsz00_38));
												{	/* Ast/app.scm 536 */
													BgL_typez00_bglt BgL_vz00_2978;

													BgL_vz00_2978 =
														((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_arg2159z00_2241)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_2978), BUNSPEC);
												}
											}
										else
											{	/* Ast/app.scm 535 */
												BFALSE;
											}
									}
									{	/* Ast/app.scm 537 */
										bool_t BgL_test2580z00_4418;

										{	/* Ast/app.scm 537 */
											bool_t BgL_test2581z00_4419;

											{	/* Ast/app.scm 537 */
												obj_t BgL_arg2172z00_2257;

												{	/* Ast/app.scm 537 */
													obj_t BgL_pairz00_2982;

													BgL_pairz00_2982 = CDR(((obj_t) BgL_argsz00_38));
													BgL_arg2172z00_2257 = CAR(BgL_pairz00_2982);
												}
												BgL_test2581z00_4419 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2172z00_2257,
													BGl_varz00zzast_nodez00);
											}
											if (BgL_test2581z00_4419)
												{	/* Ast/app.scm 537 */
													bool_t BgL_test2582z00_4424;

													{	/* Ast/app.scm 537 */
														obj_t BgL_arg2170z00_2256;

														{	/* Ast/app.scm 537 */
															obj_t BgL_pairz00_2987;

															BgL_pairz00_2987 = CDR(((obj_t) BgL_argsz00_38));
															BgL_arg2170z00_2256 = CAR(BgL_pairz00_2987);
														}
														BgL_test2582z00_4424 =
															BGl_isazf3zf3zz__objectz00(BgL_arg2170z00_2256,
															BGl_closurez00zzast_nodez00);
													}
													if (BgL_test2582z00_4424)
														{	/* Ast/app.scm 537 */
															BgL_test2580z00_4418 = ((bool_t) 0);
														}
													else
														{	/* Ast/app.scm 537 */
															BgL_test2580z00_4418 = ((bool_t) 1);
														}
												}
											else
												{	/* Ast/app.scm 537 */
													BgL_test2580z00_4418 = ((bool_t) 0);
												}
										}
										if (BgL_test2580z00_4418)
											{	/* Ast/app.scm 538 */
												obj_t BgL_arg2169z00_2253;

												{	/* Ast/app.scm 538 */
													obj_t BgL_pairz00_2992;

													BgL_pairz00_2992 = CDR(((obj_t) BgL_argsz00_38));
													BgL_arg2169z00_2253 = CAR(BgL_pairz00_2992);
												}
												{	/* Ast/app.scm 538 */
													BgL_typez00_bglt BgL_vz00_2994;

													BgL_vz00_2994 =
														((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_arg2169z00_2253)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_2994), BUNSPEC);
												}
											}
										else
											{	/* Ast/app.scm 537 */
												BFALSE;
											}
									}
									{	/* Ast/app.scm 539 */
										BgL_appz00_bglt BgL_new1161z00_2258;

										{	/* Ast/app.scm 540 */
											BgL_appz00_bglt BgL_new1160z00_2260;

											BgL_new1160z00_2260 =
												((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_appz00_bgl))));
											{	/* Ast/app.scm 540 */
												long BgL_arg2174z00_2261;

												{	/* Ast/app.scm 540 */
													long BgL_res2421z00_2996;

													BgL_res2421z00_2996 =
														BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
													BgL_arg2174z00_2261 = BgL_res2421z00_2996;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1160z00_2260),
													BgL_arg2174z00_2261);
											}
											{	/* Ast/app.scm 540 */
												BgL_objectz00_bglt BgL_tmpz00_4439;

												BgL_tmpz00_4439 =
													((BgL_objectz00_bglt) BgL_new1160z00_2260);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4439, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1160z00_2260);
											BgL_new1161z00_2258 = BgL_new1160z00_2260;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1161z00_2258)))->
												BgL_locz00) = ((obj_t) BgL_locz00_36), BUNSPEC);
										{
											BgL_typez00_bglt BgL_auxz00_4445;

											{	/* Ast/app.scm 541 */
												BgL_typez00_bglt BgL_arg2173z00_2259;

												BgL_arg2173z00_2259 =
													(((BgL_variablez00_bglt)
														COBJECT(BgL_variablez00_2230))->BgL_typez00);
												BgL_auxz00_4445 =
													BGl_strictzd2nodezd2typez00zzast_nodez00((
														(BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00),
													BgL_arg2173z00_2259);
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1161z00_2258)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_4445), BUNSPEC);
										}
										((((BgL_nodezf2effectzf2_bglt) COBJECT(
														((BgL_nodezf2effectzf2_bglt)
															BgL_new1161z00_2258)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1161z00_2258)))->BgL_keyz00) =
											((obj_t) BINT(((long) -1))), BUNSPEC);
										((((BgL_appz00_bglt) COBJECT(BgL_new1161z00_2258))->
												BgL_funz00) =
											((BgL_varz00_bglt) BgL_varz00_37), BUNSPEC);
										((((BgL_appz00_bglt) COBJECT(BgL_new1161z00_2258))->
												BgL_argsz00) = ((obj_t) BgL_argsz00_38), BUNSPEC);
										((((BgL_appz00_bglt) COBJECT(BgL_new1161z00_2258))->
												BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
										return ((obj_t) BgL_new1161z00_2258);
									}
								}
							else
								{	/* Ast/app.scm 531 */
									if ((BgL_casezd2valuezd2_2232 == CNST_TABLE_REF(((long) 15))))
										{	/* Ast/app.scm 531 */
											{	/* Ast/app.scm 547 */
												obj_t BgL_arg2176z00_2263;

												BgL_arg2176z00_2263 = CAR(((obj_t) BgL_argsz00_38));
												{	/* Ast/app.scm 547 */
													BgL_typez00_bglt BgL_vz00_3005;

													BgL_vz00_3005 =
														((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00);
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_arg2176z00_2263)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_vz00_3005), BUNSPEC);
											}}
											{	/* Ast/app.scm 548 */
												BgL_appz00_bglt BgL_new1163z00_2264;

												{	/* Ast/app.scm 549 */
													BgL_appz00_bglt BgL_new1162z00_2266;

													BgL_new1162z00_2266 =
														((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_appz00_bgl))));
													{	/* Ast/app.scm 549 */
														long BgL_arg2178z00_2267;

														{	/* Ast/app.scm 549 */
															long BgL_res2423z00_3007;

															BgL_res2423z00_3007 =
																BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
															BgL_arg2178z00_2267 = BgL_res2423z00_3007;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1162z00_2266),
															BgL_arg2178z00_2267);
													}
													{	/* Ast/app.scm 549 */
														BgL_objectz00_bglt BgL_tmpz00_4472;

														BgL_tmpz00_4472 =
															((BgL_objectz00_bglt) BgL_new1162z00_2266);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4472, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1162z00_2266);
													BgL_new1163z00_2264 = BgL_new1162z00_2266;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1163z00_2264)))->
														BgL_locz00) = ((obj_t) BgL_locz00_36), BUNSPEC);
												{
													BgL_typez00_bglt BgL_auxz00_4478;

													{	/* Ast/app.scm 550 */
														BgL_typez00_bglt BgL_arg2177z00_2265;

														BgL_arg2177z00_2265 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_variablez00_2230))->BgL_typez00);
														BgL_auxz00_4478 =
															BGl_strictzd2nodezd2typez00zzast_nodez00((
																(BgL_typez00_bglt)
																BGl_za2_za2z00zztype_cachez00),
															BgL_arg2177z00_2265);
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1163z00_2264)))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_4478), BUNSPEC);
												}
												((((BgL_nodezf2effectzf2_bglt) COBJECT(
																((BgL_nodezf2effectzf2_bglt)
																	BgL_new1163z00_2264)))->
														BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
												((((BgL_nodezf2effectzf2_bglt)
															COBJECT(((BgL_nodezf2effectzf2_bglt)
																	BgL_new1163z00_2264)))->BgL_keyz00) =
													((obj_t) BINT(((long) -1))), BUNSPEC);
												((((BgL_appz00_bglt) COBJECT(BgL_new1163z00_2264))->
														BgL_funz00) =
													((BgL_varz00_bglt) BgL_varz00_37), BUNSPEC);
												((((BgL_appz00_bglt) COBJECT(BgL_new1163z00_2264))->
														BgL_argsz00) = ((obj_t) BgL_argsz00_38), BUNSPEC);
												((((BgL_appz00_bglt) COBJECT(BgL_new1163z00_2264))->
														BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
												return ((obj_t) BgL_new1163z00_2264);
											}
										}
									else
										{	/* Ast/app.scm 531 */
											if (
												(BgL_casezd2valuezd2_2232 ==
													CNST_TABLE_REF(((long) 16))))
												{	/* Ast/app.scm 554 */
													obj_t BgL_vtypez00_2269;

													{	/* Ast/app.scm 554 */
														obj_t BgL_pairz00_3016;

														BgL_pairz00_3016 =
															(((BgL_cfunz00_bglt) COBJECT(
																	((BgL_cfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_variablez00_2230))))->
																			BgL_valuez00))))->BgL_argszd2typezd2);
														BgL_vtypez00_2269 = CAR(BgL_pairz00_3016);
													}
													{	/* Ast/app.scm 554 */
														obj_t BgL_ftypez00_2270;

														if (BGl_isazf3zf3zz__objectz00(BgL_vtypez00_2269,
																BGl_tvecz00zztvector_tvectorz00))
															{
																BgL_typez00_bglt BgL_auxz00_4504;

																{
																	BgL_tvecz00_bglt BgL_auxz00_4505;

																	{
																		obj_t BgL_auxz00_4506;

																		{	/* Ast/app.scm 556 */
																			BgL_objectz00_bglt BgL_tmpz00_4507;

																			BgL_tmpz00_4507 =
																				((BgL_objectz00_bglt)
																				((BgL_typez00_bglt) BgL_vtypez00_2269));
																			BgL_auxz00_4506 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_4507);
																		}
																		BgL_auxz00_4505 =
																			((BgL_tvecz00_bglt) BgL_auxz00_4506);
																	}
																	BgL_auxz00_4504 =
																		(((BgL_tvecz00_bglt)
																			COBJECT(BgL_auxz00_4505))->
																		BgL_itemzd2typezd2);
																}
																BgL_ftypez00_2270 = ((obj_t) BgL_auxz00_4504);
															}
														else
															{	/* Ast/app.scm 555 */
																BgL_ftypez00_2270 =
																	BGl_za2_za2z00zztype_cachez00;
															}
														{	/* Ast/app.scm 555 */

															{	/* Ast/app.scm 558 */
																BgL_vlengthz00_bglt BgL_new1165z00_2271;

																{	/* Ast/app.scm 559 */
																	BgL_vlengthz00_bglt BgL_new1164z00_2272;

																	BgL_new1164z00_2272 =
																		((BgL_vlengthz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_vlengthz00_bgl))));
																	{	/* Ast/app.scm 559 */
																		long BgL_arg2180z00_2273;

																		{	/* Ast/app.scm 559 */
																			long BgL_res2426z00_3021;

																			BgL_res2426z00_3021 =
																				BGL_CLASS_INDEX
																				(BGl_vlengthz00zzast_nodez00);
																			BgL_arg2180z00_2273 = BgL_res2426z00_3021;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1164z00_2272),
																			BgL_arg2180z00_2273);
																	}
																	{	/* Ast/app.scm 559 */
																		BgL_objectz00_bglt BgL_tmpz00_4518;

																		BgL_tmpz00_4518 =
																			((BgL_objectz00_bglt)
																			BgL_new1164z00_2272);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4518,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1164z00_2272);
																	BgL_new1165z00_2271 = BgL_new1164z00_2272;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1165z00_2271)))->BgL_locz00) =
																	((obj_t) BgL_locz00_36), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1165z00_2271)))->BgL_typez00) =
																	((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt) (
																							(BgL_globalz00_bglt)
																							BgL_variablez00_2230))))->
																			BgL_typez00)), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1165z00_2271)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1165z00_2271)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																((((BgL_externz00_bglt)
																			COBJECT(((BgL_externz00_bglt)
																					BgL_new1165z00_2271)))->
																		BgL_exprza2za2) =
																	((obj_t) BgL_argsz00_38), BUNSPEC);
																((((BgL_externz00_bglt)
																			COBJECT(((BgL_externz00_bglt)
																					BgL_new1165z00_2271)))->
																		BgL_effectz00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_privatez00_bglt)
																			COBJECT(((BgL_privatez00_bglt)
																					BgL_new1165z00_2271)))->
																		BgL_czd2formatzd2) =
																	((obj_t) string_append(BgL_gnamez00_2231,
																			BGl_string2443z00zzast_appz00)), BUNSPEC);
																((((BgL_vlengthz00_bglt)
																			COBJECT(BgL_new1165z00_2271))->
																		BgL_vtypez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BgL_vtypez00_2269)), BUNSPEC);
																((((BgL_vlengthz00_bglt)
																			COBJECT(BgL_new1165z00_2271))->
																		BgL_ftypez00) =
																	((obj_t) BgL_ftypez00_2270), BUNSPEC);
																return ((obj_t) BgL_new1165z00_2271);
															}
														}
													}
												}
											else
												{	/* Ast/app.scm 531 */
													bool_t BgL_test2586z00_4545;

													{	/* Ast/app.scm 531 */
														bool_t BgL__ortest_1166z00_2324;

														BgL__ortest_1166z00_2324 =
															(BgL_casezd2valuezd2_2232 ==
															CNST_TABLE_REF(((long) 17)));
														if (BgL__ortest_1166z00_2324)
															{	/* Ast/app.scm 531 */
																BgL_test2586z00_4545 = BgL__ortest_1166z00_2324;
															}
														else
															{	/* Ast/app.scm 531 */
																BgL_test2586z00_4545 =
																	(BgL_casezd2valuezd2_2232 ==
																	CNST_TABLE_REF(((long) 18)));
													}}
													if (BgL_test2586z00_4545)
														{	/* Ast/app.scm 566 */
															BgL_vrefz00_bglt BgL_new1168z00_2279;

															{	/* Ast/app.scm 567 */
																BgL_vrefz00_bglt BgL_new1167z00_2293;

																BgL_new1167z00_2293 =
																	((BgL_vrefz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_vrefz00_bgl))));
																{	/* Ast/app.scm 567 */
																	long BgL_arg2192z00_2294;

																	{	/* Ast/app.scm 567 */
																		long BgL_res2427z00_3027;

																		BgL_res2427z00_3027 =
																			BGL_CLASS_INDEX(BGl_vrefz00zzast_nodez00);
																		BgL_arg2192z00_2294 = BgL_res2427z00_3027;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1167z00_2293),
																		BgL_arg2192z00_2294);
																}
																{	/* Ast/app.scm 567 */
																	BgL_objectz00_bglt BgL_tmpz00_4555;

																	BgL_tmpz00_4555 =
																		((BgL_objectz00_bglt) BgL_new1167z00_2293);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4555,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1167z00_2293);
																BgL_new1168z00_2279 = BgL_new1167z00_2293;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1168z00_2279)))->BgL_locz00) =
																((obj_t) BgL_locz00_36), BUNSPEC);
															{
																BgL_typez00_bglt BgL_auxz00_4561;

																{	/* Ast/app.scm 568 */
																	BgL_typez00_bglt BgL_arg2185z00_2280;

																	BgL_arg2185z00_2280 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_variablez00_2230))))->
																		BgL_typez00);
																	BgL_auxz00_4561 =
																		BGl_strictzd2nodezd2typez00zzast_nodez00((
																			(BgL_typez00_bglt)
																			BGl_za2_za2z00zztype_cachez00),
																		BgL_arg2185z00_2280);
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1168z00_2279)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_4561),
																	BUNSPEC);
															}
															((((BgL_nodezf2effectzf2_bglt) COBJECT(
																			((BgL_nodezf2effectzf2_bglt)
																				BgL_new1168z00_2279)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1168z00_2279)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															((((BgL_externz00_bglt)
																		COBJECT(((BgL_externz00_bglt)
																				BgL_new1168z00_2279)))->
																	BgL_exprza2za2) =
																((obj_t) BgL_argsz00_38), BUNSPEC);
															((((BgL_externz00_bglt)
																		COBJECT(((BgL_externz00_bglt)
																				BgL_new1168z00_2279)))->BgL_effectz00) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_privatez00_bglt)
																		COBJECT(((BgL_privatez00_bglt)
																				BgL_new1168z00_2279)))->
																	BgL_czd2formatzd2) =
																((obj_t) string_append(BgL_gnamez00_2231,
																		BGl_string2444z00zzast_appz00)), BUNSPEC);
															((((BgL_vrefz00_bglt)
																		COBJECT(BgL_new1168z00_2279))->
																	BgL_ftypez00) =
																((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																			COBJECT(((BgL_variablez00_bglt) (
																						(BgL_globalz00_bglt)
																						BgL_variablez00_2230))))->
																		BgL_typez00)), BUNSPEC);
															{
																BgL_typez00_bglt BgL_auxz00_4585;

																{	/* Ast/app.scm 574 */
																	obj_t BgL_pairz00_3035;

																	BgL_pairz00_3035 =
																		(((BgL_cfunz00_bglt) COBJECT(
																				((BgL_cfunz00_bglt)
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_globalz00_bglt)
																										BgL_variablez00_2230))))->
																						BgL_valuez00))))->
																		BgL_argszd2typezd2);
																	{	/* Ast/app.scm 574 */
																		obj_t BgL_pairz00_3038;

																		BgL_pairz00_3038 = CDR(BgL_pairz00_3035);
																		BgL_auxz00_4585 =
																			((BgL_typez00_bglt)
																			CAR(BgL_pairz00_3038));
																}}
																((((BgL_vrefz00_bglt)
																			COBJECT(BgL_new1168z00_2279))->
																		BgL_otypez00) =
																	((BgL_typez00_bglt) BgL_auxz00_4585),
																	BUNSPEC);
															}
															{
																BgL_typez00_bglt BgL_auxz00_4595;

																{	/* Ast/app.scm 572 */
																	obj_t BgL_pairz00_3041;

																	BgL_pairz00_3041 =
																		(((BgL_cfunz00_bglt) COBJECT(
																				((BgL_cfunz00_bglt)
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_globalz00_bglt)
																										BgL_variablez00_2230))))->
																						BgL_valuez00))))->
																		BgL_argszd2typezd2);
																	BgL_auxz00_4595 =
																		((BgL_typez00_bglt) CAR(BgL_pairz00_3041));
																}
																((((BgL_vrefz00_bglt)
																			COBJECT(BgL_new1168z00_2279))->
																		BgL_vtypez00) =
																	((BgL_typez00_bglt) BgL_auxz00_4595),
																	BUNSPEC);
															}
															{
																bool_t BgL_auxz00_4604;

																{	/* Ast/app.scm 571 */
																	obj_t BgL_arg2190z00_2285;

																	{	/* Ast/app.scm 571 */
																		obj_t BgL_arg2191z00_2292;

																		BgL_arg2191z00_2292 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_variablez00_2230))))->
																			BgL_idz00);
																		{	/* Ast/app.scm 571 */
																			obj_t BgL_res2428z00_3044;

																			BgL_res2428z00_3044 =
																				SYMBOL_TO_STRING(BgL_arg2191z00_2292);
																			BgL_arg2190z00_2285 = BgL_res2428z00_3044;
																	}}
																	{	/* Ast/app.scm 571 */

																		BgL_auxz00_4604 =
																			BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
																			(BGl_string2445z00zzast_appz00,
																			BgL_arg2190z00_2285, BFALSE, BFALSE,
																			BFALSE, BFALSE);
																}}
																((((BgL_vrefz00_bglt)
																			COBJECT(BgL_new1168z00_2279))->
																		BgL_unsafez00) =
																	((bool_t) BgL_auxz00_4604), BUNSPEC);
															}
															return ((obj_t) BgL_new1168z00_2279);
														}
													else
														{	/* Ast/app.scm 531 */
															bool_t BgL_test2588z00_4612;

															{	/* Ast/app.scm 531 */
																bool_t BgL__ortest_1169z00_2323;

																BgL__ortest_1169z00_2323 =
																	(BgL_casezd2valuezd2_2232 ==
																	CNST_TABLE_REF(((long) 19)));
																if (BgL__ortest_1169z00_2323)
																	{	/* Ast/app.scm 531 */
																		BgL_test2588z00_4612 =
																			BgL__ortest_1169z00_2323;
																	}
																else
																	{	/* Ast/app.scm 531 */
																		BgL_test2588z00_4612 =
																			(BgL_casezd2valuezd2_2232 ==
																			CNST_TABLE_REF(((long) 20)));
															}}
															if (BgL_test2588z00_4612)
																{	/* Ast/app.scm 531 */
																	{	/* Ast/app.scm 578 */
																		obj_t BgL_arg2194z00_2297;

																		{	/* Ast/app.scm 578 */
																			obj_t BgL_pairz00_3050;

																			{	/* Ast/app.scm 578 */
																				obj_t BgL_pairz00_3049;

																				BgL_pairz00_3049 =
																					CDR(((obj_t) BgL_argsz00_38));
																				BgL_pairz00_3050 =
																					CDR(BgL_pairz00_3049);
																			}
																			BgL_arg2194z00_2297 =
																				CAR(BgL_pairz00_3050);
																		}
																		{	/* Ast/app.scm 578 */
																			BgL_typez00_bglt BgL_vz00_3052;

																			BgL_vz00_3052 =
																				((BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_arg2194z00_2297)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_3052),
																				BUNSPEC);
																		}
																	}
																	{	/* Ast/app.scm 579 */
																		BgL_vsetz12z12_bglt BgL_new1171z00_2298;

																		{	/* Ast/app.scm 580 */
																			BgL_vsetz12z12_bglt BgL_new1170z00_2307;

																			BgL_new1170z00_2307 =
																				((BgL_vsetz12z12_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_vsetz12z12_bgl))));
																			{	/* Ast/app.scm 580 */
																				long BgL_arg2203z00_2308;

																				{	/* Ast/app.scm 580 */
																					long BgL_res2429z00_3054;

																					BgL_res2429z00_3054 =
																						BGL_CLASS_INDEX
																						(BGl_vsetz12z12zzast_nodez00);
																					BgL_arg2203z00_2308 =
																						BgL_res2429z00_3054;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1170z00_2307),
																					BgL_arg2203z00_2308);
																			}
																			{	/* Ast/app.scm 580 */
																				BgL_objectz00_bglt BgL_tmpz00_4629;

																				BgL_tmpz00_4629 =
																					((BgL_objectz00_bglt)
																					BgL_new1170z00_2307);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4629,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1170z00_2307);
																			BgL_new1171z00_2298 = BgL_new1170z00_2307;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_36), BUNSPEC);
																		{
																			BgL_typez00_bglt BgL_auxz00_4635;

																			{	/* Ast/app.scm 581 */
																				BgL_typez00_bglt BgL_arg2195z00_2299;

																				BgL_arg2195z00_2299 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									BgL_variablez00_2230))))->
																					BgL_typez00);
																				BgL_auxz00_4635 =
																					BGl_strictzd2nodezd2typez00zzast_nodez00
																					(((BgL_typez00_bglt)
																						BGl_za2unspecza2z00zztype_cachez00),
																					BgL_arg2195z00_2299);
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1171z00_2298)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_4635),
																				BUNSPEC);
																		}
																		((((BgL_nodezf2effectzf2_bglt) COBJECT(
																						((BgL_nodezf2effectzf2_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		((((BgL_externz00_bglt)
																					COBJECT(((BgL_externz00_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_exprza2za2) =
																			((obj_t) BgL_argsz00_38), BUNSPEC);
																		((((BgL_externz00_bglt)
																					COBJECT(((BgL_externz00_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_effectz00) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_privatez00_bglt)
																					COBJECT(((BgL_privatez00_bglt)
																							BgL_new1171z00_2298)))->
																				BgL_czd2formatzd2) =
																			((obj_t) string_append(BgL_gnamez00_2231,
																					BGl_string2446z00zzast_appz00)),
																			BUNSPEC);
																		{
																			BgL_typez00_bglt BgL_auxz00_4655;

																			{	/* Ast/app.scm 587 */
																				obj_t BgL_pairz00_3061;

																				BgL_pairz00_3061 =
																					(((BgL_cfunz00_bglt) COBJECT(
																							((BgL_cfunz00_bglt)
																								(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_globalz00_bglt)
																													BgL_variablez00_2230))))->
																									BgL_valuez00))))->
																					BgL_argszd2typezd2);
																				{	/* Ast/app.scm 587 */
																					obj_t BgL_pairz00_3066;

																					{	/* Ast/app.scm 587 */
																						obj_t BgL_pairz00_3065;

																						BgL_pairz00_3065 =
																							CDR(BgL_pairz00_3061);
																						BgL_pairz00_3066 =
																							CDR(BgL_pairz00_3065);
																					}
																					BgL_auxz00_4655 =
																						((BgL_typez00_bglt)
																						CAR(BgL_pairz00_3066));
																			}}
																			((((BgL_vsetz12z12_bglt)
																						COBJECT(BgL_new1171z00_2298))->
																					BgL_ftypez00) =
																				((BgL_typez00_bglt) BgL_auxz00_4655),
																				BUNSPEC);
																		}
																		{
																			BgL_typez00_bglt BgL_auxz00_4666;

																			{	/* Ast/app.scm 586 */
																				obj_t BgL_pairz00_3069;

																				BgL_pairz00_3069 =
																					(((BgL_cfunz00_bglt) COBJECT(
																							((BgL_cfunz00_bglt)
																								(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_globalz00_bglt)
																													BgL_variablez00_2230))))->
																									BgL_valuez00))))->
																					BgL_argszd2typezd2);
																				{	/* Ast/app.scm 586 */
																					obj_t BgL_pairz00_3072;

																					BgL_pairz00_3072 =
																						CDR(BgL_pairz00_3069);
																					BgL_auxz00_4666 =
																						((BgL_typez00_bglt)
																						CAR(BgL_pairz00_3072));
																			}}
																			((((BgL_vsetz12z12_bglt)
																						COBJECT(BgL_new1171z00_2298))->
																					BgL_otypez00) =
																				((BgL_typez00_bglt) BgL_auxz00_4666),
																				BUNSPEC);
																		}
																		{
																			BgL_typez00_bglt BgL_auxz00_4676;

																			{	/* Ast/app.scm 585 */
																				obj_t BgL_pairz00_3075;

																				BgL_pairz00_3075 =
																					(((BgL_cfunz00_bglt) COBJECT(
																							((BgL_cfunz00_bglt)
																								(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_globalz00_bglt)
																													BgL_variablez00_2230))))->
																									BgL_valuez00))))->
																					BgL_argszd2typezd2);
																				BgL_auxz00_4676 =
																					((BgL_typez00_bglt)
																					CAR(BgL_pairz00_3075));
																			}
																			((((BgL_vsetz12z12_bglt)
																						COBJECT(BgL_new1171z00_2298))->
																					BgL_vtypez00) =
																				((BgL_typez00_bglt) BgL_auxz00_4676),
																				BUNSPEC);
																		}
																		((((BgL_vsetz12z12_bglt)
																					COBJECT(BgL_new1171z00_2298))->
																				BgL_unsafez00) =
																			((bool_t) ((((BgL_variablez00_bglt)
																							COBJECT(((BgL_variablez00_bglt) (
																										(BgL_globalz00_bglt)
																										BgL_variablez00_2230))))->
																						BgL_idz00) ==
																					CNST_TABLE_REF(((long) 20)))),
																			BUNSPEC);
																		return ((obj_t) BgL_new1171z00_2298);
																	}
																}
															else
																{	/* Ast/app.scm 531 */
																	if (
																		(BgL_casezd2valuezd2_2232 ==
																			CNST_TABLE_REF(((long) 21))))
																		{	/* Ast/app.scm 589 */
																			obj_t BgL_stackzd2alloczd2_2310;

																			BgL_stackzd2alloczd2_2310 =
																				(((BgL_funz00_bglt) COBJECT(
																						((BgL_funz00_bglt)
																							(((BgL_variablez00_bglt)
																									COBJECT
																									(BgL_variablez00_2230))->
																								BgL_valuez00))))->
																				BgL_stackzd2allocatorzd2);
																			{	/* Ast/app.scm 589 */
																				obj_t BgL_heapzd2formatzd2_2311;

																				BgL_heapzd2formatzd2_2311 =
																					string_append(BgL_gnamez00_2231,
																					BGl_string2443z00zzast_appz00);
																				{	/* Ast/app.scm 590 */
																					obj_t BgL_stackzd2formatzd2_2312;

																					if (BGl_isazf3zf3zz__objectz00
																						(BgL_stackzd2alloczd2_2310,
																							BGl_globalz00zzast_varz00))
																						{	/* Ast/app.scm 592 */
																							obj_t BgL_arg2210z00_2320;

																							BgL_arg2210z00_2320 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_globalz00_bglt)
																												BgL_stackzd2alloczd2_2310))))->
																								BgL_namez00);
																							BgL_stackzd2formatzd2_2312 =
																								string_append
																								(BgL_arg2210z00_2320,
																								BGl_string2443z00zzast_appz00);
																						}
																					else
																						{	/* Ast/app.scm 591 */
																							BgL_stackzd2formatzd2_2312 =
																								BgL_heapzd2formatzd2_2311;
																						}
																					{	/* Ast/app.scm 591 */

																						{	/* Ast/app.scm 595 */
																							BgL_vallocz00_bglt
																								BgL_new1173z00_2313;
																							{	/* Ast/app.scm 596 */
																								BgL_vallocz00_bglt
																									BgL_new1172z00_2317;
																								BgL_new1172z00_2317 =
																									((BgL_vallocz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_vallocz00_bgl))));
																								{	/* Ast/app.scm 596 */
																									long BgL_arg2208z00_2318;

																									{	/* Ast/app.scm 596 */
																										long BgL_res2432z00_3084;

																										BgL_res2432z00_3084 =
																											BGL_CLASS_INDEX
																											(BGl_vallocz00zzast_nodez00);
																										BgL_arg2208z00_2318 =
																											BgL_res2432z00_3084;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1172z00_2317),
																										BgL_arg2208z00_2318);
																								}
																								{	/* Ast/app.scm 596 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_4709;
																									BgL_tmpz00_4709 =
																										((BgL_objectz00_bglt)
																										BgL_new1172z00_2317);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_4709, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1172z00_2317);
																								BgL_new1173z00_2313 =
																									BgL_new1172z00_2317;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_locz00) =
																								((obj_t) BgL_locz00_36),
																								BUNSPEC);
																							{
																								BgL_typez00_bglt
																									BgL_auxz00_4715;
																								{	/* Ast/app.scm 597 */
																									BgL_typez00_bglt
																										BgL_arg2205z00_2314;
																									BgL_arg2205z00_2314 =
																										(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													((BgL_globalz00_bglt)
																														BgL_variablez00_2230))))->
																										BgL_typez00);
																									BgL_auxz00_4715 =
																										BGl_strictzd2nodezd2typez00zzast_nodez00
																										(((BgL_typez00_bglt)
																											BGl_za2_za2z00zztype_cachez00),
																										BgL_arg2205z00_2314);
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1173z00_2313)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BgL_auxz00_4715), BUNSPEC);
																							}
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_sidezd2effectzd2) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_keyz00) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							((((BgL_externz00_bglt)
																										COBJECT((
																												(BgL_externz00_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_exprza2za2) =
																								((obj_t) BgL_argsz00_38),
																								BUNSPEC);
																							((((BgL_externz00_bglt)
																										COBJECT((
																												(BgL_externz00_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_effectz00) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							((((BgL_privatez00_bglt)
																										COBJECT((
																												(BgL_privatez00_bglt)
																												BgL_new1173z00_2313)))->
																									BgL_czd2formatzd2) =
																								((obj_t)
																									BgL_heapzd2formatzd2_2311),
																								BUNSPEC);
																							((((BgL_vallocz00_bglt)
																										COBJECT
																										(BgL_new1173z00_2313))->
																									BgL_ftypez00) =
																								((BgL_typez00_bglt)
																									BGl_strictzd2nodezd2typez00zzast_nodez00
																									(((BgL_typez00_bglt)
																											BGl_za2_za2z00zztype_cachez00),
																										((BgL_typez00_bglt)
																											BGl_za2objza2z00zztype_cachez00))),
																								BUNSPEC);
																							{
																								BgL_typez00_bglt
																									BgL_auxz00_4738;
																								{	/* Ast/app.scm 600 */
																									obj_t BgL_pairz00_3091;

																									BgL_pairz00_3091 =
																										(((BgL_cfunz00_bglt)
																											COBJECT((
																													(BgL_cfunz00_bglt) ((
																															(BgL_variablez00_bglt)
																															COBJECT((
																																	(BgL_variablez00_bglt)
																																	((BgL_globalz00_bglt) BgL_variablez00_2230))))->BgL_valuez00))))->BgL_argszd2typezd2);
																									BgL_auxz00_4738 =
																										((BgL_typez00_bglt)
																										CAR(BgL_pairz00_3091));
																								}
																								((((BgL_vallocz00_bglt)
																											COBJECT
																											(BgL_new1173z00_2313))->
																										BgL_otypez00) =
																									((BgL_typez00_bglt)
																										BgL_auxz00_4738), BUNSPEC);
																							}
																							return
																								((obj_t) BgL_new1173z00_2313);
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Ast/app.scm 603 */
																			obj_t BgL_arg2212z00_2322;

																			BgL_arg2212z00_2322 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_varz00_37));
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2447z00zzast_appz00,
																				BGl_string2448z00zzast_appz00,
																				BgL_arg2212z00_2322);
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_appz00()
	{
		{	/* Ast/app.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 469204214),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
			return
				BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2449z00zzast_appz00));
		}

	}

#ifdef __cplusplus
}
#endif
