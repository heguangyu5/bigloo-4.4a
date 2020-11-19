/*===========================================================================*/
/*   (Cnst/alloc.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/alloc.scm) */
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

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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


	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62cnstzd2alloczd2ucs2zd2stringzb0zzcnst_allocz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	static obj_t BGl_za2llongzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2uint32z62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2elongzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT bool_t ucs2_strcmp(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2uint64z62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long, obj_t);
	static obj_t BGl_objectzd2initzd2zzcnst_allocz00();
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2listz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2structz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2int32z00zzcnst_allocz00(int32_t, obj_t);
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2llongz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t, obj_t);
	static obj_t BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcnst_allocz00();
	extern obj_t BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2int64z00zzcnst_allocz00(int64_t, obj_t);
	static obj_t BGl_z62getzd2cnstzd2sexpz62zzcnst_allocz00(obj_t);
	static obj_t BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00;
	extern obj_t BGl_za2listzd2ze3structza2z31zzcnst_cachez00;
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2consza2z00zzcnst_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_za2oldzd2debugza2zd2zzcnst_allocz00 = BUNSPEC;
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT obj_t ucs2_string_to_utf8_string(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzcnst_allocz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2uint32z00zzcnst_allocz00(uint32_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00();
	static obj_t BGl_z62startzd2cnstzd2allocz12z70zzcnst_allocz00(obj_t);
	static obj_t BGl_za2realzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62cnstzd2alloczd2procedurez62zzcnst_allocz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_za2listzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2uint64z00zzcnst_allocz00(uint64_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00;
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	static BgL_nodez00_bglt BGl_loopze70ze7zzcnst_allocz00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	static long BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
	static obj_t BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T, obj_t);
	extern bool_t BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcnst_allocz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62cnstzd2alloczd2homogenouszd2vectorzb0zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2tablezd2idz00zzcnst_allocz00();
	extern obj_t BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62cnstzd2alloczd2bignumz62zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2int64zd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	static obj_t BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00();
	extern obj_t BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00;
	static obj_t BGl_za2int32zd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2elongz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl_za2uint64zd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00();
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2int32z62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2lzd2procedurezd2zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_za2uint32zd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2int64z62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2symbolz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2cnstzd2offsetz62zzcnst_allocz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00();
	static obj_t BGl_z62getzd2cnstzd2tablez62zzcnst_allocz00(obj_t);
	extern obj_t BGl_za2ucs2stringza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2keywordz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_forcezd2initializa7ezd2srfi4zd2libraryzd2modulez12zb5zzcnst_allocz00();
	static obj_t BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_za2structzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzcnst_allocz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_allocz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_allocz00();
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2vectorz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	extern obj_t BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	static bool_t BGl_cnstzd2equalzf3z21zzcnst_allocz00(obj_t, obj_t);
	static obj_t BGl_za2globalzd2setza2zd2zzcnst_allocz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2stringz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_z62cnstzd2tablezd2idz62zzcnst_allocz00(obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2tvectorz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62cnstzd2alloczd2lzd2procedurezb0zzcnst_allocz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2cnstzd2setz62zzcnst_allocz00(obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	static obj_t BGl_z62stopzd2cnstzd2allocz12z70zzcnst_allocz00(obj_t);
	static BgL_nodez00_bglt BGl_z62cnstzd2alloczd2realz62zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[70];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2alloczd2realzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72608za7,
		BGl_z62cnstzd2alloczd2realz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2structzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72609za7,
		BGl_z62cnstzd2alloczd2structz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2setzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762getza7d2cnstza7d22610za7,
		BGl_z62getzd2cnstzd2setz62zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
		BgL_bgl_za762stopza7d2cnstza7d2611za7,
		BGl_z62stopzd2cnstzd2allocz12z70zzcnst_allocz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2lzd2procedurezd2envz00zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72612za7,
		BGl_z62cnstzd2alloczd2lzd2procedurezb0zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2ucs2zd2stringzd2envz00zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72613za7,
		BGl_z62cnstzd2alloczd2ucs2zd2stringzb0zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2procedurezd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72614za7,
		BGl_z62cnstzd2alloczd2procedurez62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2offsetzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762getza7d2cnstza7d22615za7,
		BGl_z62getzd2cnstzd2offsetz62zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2uint64zd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72616za7,
		BGl_z62cnstzd2alloczd2uint64z62zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2bignumzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72617za7,
		BGl_z62cnstzd2alloczd2bignumz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2homogenouszd2vectorzd2envz00zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72618za7,
		BGl_z62cnstzd2alloczd2homogenouszd2vectorzb0zzcnst_allocz00, 0L, BUNSPEC,
		2);
	BGL_IMPORT obj_t BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2int32zd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72619za7,
		BGl_z62cnstzd2alloczd2int32z62zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2sexpzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762getza7d2cnstza7d22620za7,
		BGl_z62getzd2cnstzd2sexpz62zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2tablezd2envzd2zzcnst_allocz00,
		BgL_bgl_za762getza7d2cnstza7d22621za7,
		BGl_z62getzd2cnstzd2tablez62zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2tablezd2idzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2tableza72622za7,
		BGl_z62cnstzd2tablezd2idz62zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2llongzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72623za7,
		BGl_z62cnstzd2alloczd2llongz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2600z00zzcnst_allocz00,
		BgL_bgl_string2600za700za7za7c2624za7,
		"old should be either #f or cnst-info", 36);
	      DEFINE_STRING(BGl_string2601z00zzcnst_allocz00,
		BgL_bgl_string2601za700za7za7c2625za7, "read-alloc-tvector", 18);
	      DEFINE_STRING(BGl_string2602z00zzcnst_allocz00,
		BgL_bgl_string2602za700za7za7c2626za7, "Unimplementable until bootstrap",
		31);
	      DEFINE_STRING(BGl_string2603z00zzcnst_allocz00,
		BgL_bgl_string2603za700za7za7c2627za7, "cnst_alloc", 10);
	      DEFINE_STRING(BGl_string2604z00zzcnst_allocz00,
		BgL_bgl_string2604za700za7za7c2628za7,
		"cnst-struct struct $tvector-descr-set! get-tvector-descriptor stvector tvector tvec make-s8vector hvector f64 f32 u64 s64 u32 s32 u16 s16 u8 s8 list-> vector var cnst-list pair list suint64 buint64 uint64 sint64 bint64 int64 suint32 buint32 uint32 sint32 bint32 int32 sllong bllong llong selong belong elong sreal real slfun sfun procedure proc cnst-alloc-bignum a-keyword keyword cnst-alloc-symbol a-symbol symbol lib set! @ an-ucs2-string ucs2string cnst-info sstring bstring string static bdb now cnst-vector cnst* __cnsts_table ",
		532);
	BGL_IMPORT obj_t BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2keywordzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72629za7,
		BGl_z62cnstzd2alloczd2keywordz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2vectorzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72630za7,
		BGl_z62cnstzd2alloczd2vectorz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2alloczd2listzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72631za7,
		BGl_z62cnstzd2alloczd2listz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2elongzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72632za7,
		BGl_z62cnstzd2alloczd2elongz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2symbolzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72633za7,
		BGl_z62cnstzd2alloczd2symbolz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2int64zd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72634za7,
		BGl_z62cnstzd2alloczd2int64z62zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2tvectorzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72635za7,
		BGl_z62cnstzd2alloczd2tvectorz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00;
	BGL_IMPORT obj_t BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
		BgL_bgl_za762startza7d2cnstza72636za7,
		BGl_z62startzd2cnstzd2allocz12z70zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2stringzd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72637za7,
		BGl_z62cnstzd2alloczd2stringz62zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2uint32zd2envzd2zzcnst_allocz00,
		BgL_bgl_za762cnstza7d2allocza72638za7,
		BGl_z62cnstzd2alloczd2uint32z62zzcnst_allocz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2stringzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2llongzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2elongzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2vectorzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2cnstzd2tableza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2debugza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2realzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2listzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2bignumzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2int64zd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2keywordzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2int32zd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2globalzd2sexpza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2uint64zd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2uint32zd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2symbolzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2structzd2envza2zd2zzcnst_allocz00));
		     ADD_ROOT((void *) (&BGl_za2globalzd2setza2zd2zzcnst_allocz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long
		BgL_checksumz00_3627, char *BgL_fromz00_3628)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_allocz00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_allocz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcnst_allocz00();
					BGl_libraryzd2moduleszd2initz00zzcnst_allocz00();
					BGl_cnstzd2initzd2zzcnst_allocz00();
					BGl_importedzd2moduleszd2initz00zzcnst_allocz00();
					return BGl_toplevelzd2initzd2zzcnst_allocz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__srfi4z00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__datez00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__ucs2z00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__unicodez00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cnst_alloc");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			{	/* Cnst/alloc.scm 15 */
				obj_t BgL_cportz00_3613;

				{	/* Cnst/alloc.scm 15 */
					obj_t BgL_stringz00_3621;

					BgL_stringz00_3621 = BGl_string2604z00zzcnst_allocz00;
					{	/* Cnst/alloc.scm 15 */
						obj_t BgL_startz00_3622;

						BgL_startz00_3622 = BINT(((long) 0));
						{	/* Cnst/alloc.scm 15 */
							obj_t BgL_endz00_3623;

							BgL_endz00_3623 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3621)));
							{	/* Cnst/alloc.scm 15 */

								BgL_cportz00_3613 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3621, BgL_startz00_3622, BgL_endz00_3623);
				}}}}
				{
					long BgL_iz00_3614;

					BgL_iz00_3614 = ((long) 69);
				BgL_loopz00_3615:
					if ((BgL_iz00_3614 == ((long) -1)))
						{	/* Cnst/alloc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/alloc.scm 15 */
							{	/* Cnst/alloc.scm 15 */
								obj_t BgL_arg2606z00_3617;

								{	/* Cnst/alloc.scm 15 */

									{	/* Cnst/alloc.scm 15 */
										obj_t BgL_locationz00_3619;

										BgL_locationz00_3619 = BBOOL(((bool_t) 0));
										{	/* Cnst/alloc.scm 15 */

											BgL_arg2606z00_3617 =
												BGl_readz00zz__readerz00(BgL_cportz00_3613,
												BgL_locationz00_3619);
										}
									}
								}
								{	/* Cnst/alloc.scm 15 */
									int BgL_tmpz00_3666;

									BgL_tmpz00_3666 = (int) (BgL_iz00_3614);
									CNST_TABLE_SET(BgL_tmpz00_3666, BgL_arg2606z00_3617);
							}}
							{	/* Cnst/alloc.scm 15 */
								int BgL_auxz00_3620;

								BgL_auxz00_3620 = (int) ((BgL_iz00_3614 - ((long) 1)));
								{
									long BgL_iz00_3671;

									BgL_iz00_3671 = (long) (BgL_auxz00_3620);
									BgL_iz00_3614 = BgL_iz00_3671;
									goto BgL_loopz00_3615;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 = ((long) -1);
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2elongzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2llongzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2int32zd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2uint32zd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2int64zd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2uint64zd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2listzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2structzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2globalzd2setza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 = BNIL;
			return (BGl_za2oldzd2debugza2zd2zzcnst_allocz00 = BUNSPEC, BUNSPEC);
		}

	}



/* get-cnst-offset */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 81 */
			return BINT(BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
		}

	}



/* &get-cnst-offset */
	obj_t BGl_z62getzd2cnstzd2offsetz62zzcnst_allocz00(obj_t BgL_envz00_3524)
	{
		{	/* Cnst/alloc.scm 81 */
			return BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
		}

	}



/* get-cnst-set */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 87 */
			return BGl_za2globalzd2setza2zd2zzcnst_allocz00;
		}

	}



/* &get-cnst-set */
	obj_t BGl_z62getzd2cnstzd2setz62zzcnst_allocz00(obj_t BgL_envz00_3525)
	{
		{	/* Cnst/alloc.scm 87 */
			return BGl_getzd2cnstzd2setz00zzcnst_allocz00();
		}

	}



/* get-cnst-table */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 93 */
			return BGl_za2cnstzd2tableza2zd2zzcnst_allocz00;
		}

	}



/* &get-cnst-table */
	obj_t BGl_z62getzd2cnstzd2tablez62zzcnst_allocz00(obj_t BgL_envz00_3526)
	{
		{	/* Cnst/alloc.scm 93 */
			return BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
		}

	}



/* get-cnst-sexp */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 99 */
			return bgl_reverse_bang(BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
		}

	}



/* &get-cnst-sexp */
	obj_t BGl_z62getzd2cnstzd2sexpz62zzcnst_allocz00(obj_t BgL_envz00_3527)
	{
		{	/* Cnst/alloc.scm 99 */
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}

	}



/* cnst-table-id */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2tablezd2idz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 145 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* &cnst-table-id */
	obj_t BGl_z62cnstzd2tablezd2idz62zzcnst_allocz00(obj_t BgL_envz00_3528)
	{
		{	/* Cnst/alloc.scm 145 */
			return BGl_cnstzd2tablezd2idz00zzcnst_allocz00();
		}

	}



/* typed-cnst-table-id */
	obj_t BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 151 */
			{	/* Cnst/alloc.scm 152 */
				obj_t BgL_arg1552z00_1592;

				BgL_arg1552z00_1592 = CNST_TABLE_REF(((long) 0));
				return
					BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg1552z00_1592,
					CNST_TABLE_REF(((long) 1)));
		}}

	}



/* start-cnst-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 157 */
			BGl_za2oldzd2debugza2zd2zzcnst_allocz00 =
				BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Cnst/alloc.scm 163 */
				obj_t BgL_arg1558z00_1593;

				BgL_arg1558z00_1593 = BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00();
				BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 =
					((obj_t)
					BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(BgL_arg1558z00_1593,
						BGl_za2moduleza2z00zzmodule_modulez00, CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3))));
			}
			{	/* Cnst/alloc.scm 170 */
				bool_t BgL_test2641z00_3691;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
						((long) 3)))
					{	/* Cnst/alloc.scm 171 */
						obj_t BgL_arg1573z00_1599;

						{	/* Cnst/alloc.scm 171 */
							obj_t BgL_arg1575z00_1600;

							BgL_arg1575z00_1600 = BGl_thezd2backendzd2zzbackend_backendz00();
							BgL_arg1573z00_1599 =
								(((BgL_backendz00_bglt) COBJECT(
										((BgL_backendz00_bglt) BgL_arg1575z00_1600)))->
								BgL_debugzd2supportzd2);
						}
						BgL_test2641z00_3691 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 4)), BgL_arg1573z00_1599));
					}
				else
					{	/* Cnst/alloc.scm 170 */
						BgL_test2641z00_3691 = ((bool_t) 0);
					}
				if (BgL_test2641z00_3691)
					{	/* Cnst/alloc.scm 172 */
						BgL_globalz00_bglt BgL_oz00_2774;
						obj_t BgL_vz00_2775;

						BgL_oz00_2774 =
							((BgL_globalz00_bglt) BGl_za2cnstzd2tableza2zd2zzcnst_allocz00);
						BgL_vz00_2775 = CNST_TABLE_REF(((long) 5));
						((((BgL_globalz00_bglt) COBJECT(BgL_oz00_2774))->BgL_importz00) =
							((obj_t) BgL_vz00_2775), BUNSPEC);
					}
				else
					{	/* Cnst/alloc.scm 170 */
						BFALSE;
					}
			}
			BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 = ((long) 0);
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BNIL;
			return BTRUE;
		}

	}



/* &start-cnst-alloc! */
	obj_t BGl_z62startzd2cnstzd2allocz12z70zzcnst_allocz00(obj_t BgL_envz00_3529)
	{
		{	/* Cnst/alloc.scm 157 */
			return BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00();
		}

	}



/* stop-cnst-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 185 */
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 =
				BGl_za2oldzd2debugza2zd2zzcnst_allocz00;
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2listzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2structzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			return BTRUE;
		}

	}



/* &stop-cnst-alloc! */
	obj_t BGl_z62stopzd2cnstzd2allocz12z70zzcnst_allocz00(obj_t BgL_envz00_3530)
	{
		{	/* Cnst/alloc.scm 185 */
			return BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00();
		}

	}



/* make-cnst-table-ref */
	BgL_appz00_bglt BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(obj_t
		BgL_offsetz00_35, obj_t BgL_typez00_36, obj_t BgL_locz00_37)
	{
		{	/* Cnst/alloc.scm 201 */
			{	/* Cnst/alloc.scm 202 */
				BgL_appz00_bglt BgL_new1104z00_1605;

				{	/* Cnst/alloc.scm 203 */
					BgL_appz00_bglt BgL_new1103z00_1617;

					BgL_new1103z00_1617 =
						((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_appz00_bgl))));
					{	/* Cnst/alloc.scm 203 */
						long BgL_arg1599z00_1618;

						{	/* Cnst/alloc.scm 203 */
							long BgL_res2398z00_2777;

							BgL_res2398z00_2777 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
							BgL_arg1599z00_1618 = BgL_res2398z00_2777;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1103z00_1617), BgL_arg1599z00_1618);
					}
					{	/* Cnst/alloc.scm 203 */
						BgL_objectz00_bglt BgL_tmpz00_3714;

						BgL_tmpz00_3714 = ((BgL_objectz00_bglt) BgL_new1103z00_1617);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3714, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1103z00_1617);
					BgL_new1104z00_1605 = BgL_new1103z00_1617;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1104z00_1605)))->BgL_locz00) =
					((obj_t) BgL_locz00_37), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_3720;

					{	/* Cnst/alloc.scm 204 */
						BgL_typez00_bglt BgL_arg1582z00_1606;

						BgL_arg1582z00_1606 = BGl_getzd2defaultzd2typez00zztype_cachez00();
						BgL_auxz00_3720 =
							BGl_strictzd2nodezd2typez00zzast_nodez00(
							((BgL_typez00_bglt) BgL_typez00_36), BgL_arg1582z00_1606);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1104z00_1605)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_3720), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt) BgL_new1104z00_1605)))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1104z00_1605)))->BgL_keyz00) =
					((obj_t) BINT(((long) -1))), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_3731;

					{	/* Cnst/alloc.scm 205 */
						BgL_varz00_bglt BgL_new1106z00_1607;

						{	/* Cnst/alloc.scm 206 */
							BgL_varz00_bglt BgL_new1105z00_1610;

							BgL_new1105z00_1610 =
								((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_varz00_bgl))));
							{	/* Cnst/alloc.scm 206 */
								long BgL_arg1589z00_1611;

								{	/* Cnst/alloc.scm 206 */
									long BgL_res2399z00_2782;

									{	/* Cnst/alloc.scm 206 */
										obj_t BgL_classz00_2781;

										BgL_classz00_2781 = BGl_varz00zzast_nodez00;
										BgL_res2399z00_2782 = BGL_CLASS_INDEX(BgL_classz00_2781);
									}
									BgL_arg1589z00_1611 = BgL_res2399z00_2782;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1105z00_1610),
									BgL_arg1589z00_1611);
							}
							BgL_new1106z00_1607 = BgL_new1105z00_1610;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1106z00_1607)))->BgL_locz00) =
							((obj_t) BgL_locz00_37), BUNSPEC);
						{
							BgL_typez00_bglt BgL_auxz00_3738;

							{	/* Cnst/alloc.scm 207 */
								BgL_typez00_bglt BgL_arg1584z00_1608;
								BgL_typez00_bglt BgL_arg1588z00_1609;

								BgL_arg1584z00_1608 =
									BGl_getzd2defaultzd2typez00zztype_cachez00();
								{	/* Cnst/alloc.scm 207 */
									BgL_variablez00_bglt BgL_oz00_2785;

									BgL_oz00_2785 =
										((BgL_variablez00_bglt)
										BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00);
									BgL_arg1588z00_1609 =
										(((BgL_variablez00_bglt) COBJECT(BgL_oz00_2785))->
										BgL_typez00);
								}
								BgL_auxz00_3738 =
									BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1584z00_1608,
									BgL_arg1588z00_1609);
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1106z00_1607)))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_auxz00_3738), BUNSPEC);
						}
						((((BgL_varz00_bglt) COBJECT(BgL_new1106z00_1607))->
								BgL_variablez00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00)), BUNSPEC);
						BgL_auxz00_3731 = BgL_new1106z00_1607;
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1104z00_1605))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_3731), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_3748;

					{	/* Cnst/alloc.scm 209 */
						BgL_literalz00_bglt BgL_arg1592z00_1612;

						{	/* Cnst/alloc.scm 209 */
							BgL_literalz00_bglt BgL_new1108z00_1614;

							{	/* Cnst/alloc.scm 210 */
								BgL_literalz00_bglt BgL_new1107z00_1615;

								BgL_new1107z00_1615 =
									((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_literalz00_bgl))));
								{	/* Cnst/alloc.scm 210 */
									long BgL_arg1597z00_1616;

									{	/* Cnst/alloc.scm 210 */
										long BgL_res2400z00_2787;

										{	/* Cnst/alloc.scm 210 */
											obj_t BgL_classz00_2786;

											BgL_classz00_2786 = BGl_literalz00zzast_nodez00;
											BgL_res2400z00_2787 = BGL_CLASS_INDEX(BgL_classz00_2786);
										}
										BgL_arg1597z00_1616 = BgL_res2400z00_2787;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1107z00_1615),
										BgL_arg1597z00_1616);
								}
								{	/* Cnst/alloc.scm 210 */
									BgL_objectz00_bglt BgL_tmpz00_3753;

									BgL_tmpz00_3753 = ((BgL_objectz00_bglt) BgL_new1107z00_1615);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3753, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1107z00_1615);
								BgL_new1108z00_1614 = BgL_new1107z00_1615;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1108z00_1614)))->BgL_locz00) =
								((obj_t) BgL_locz00_37), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1108z00_1614)))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2intza2z00zztype_cachez00)), BUNSPEC);
							((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
												BgL_new1108z00_1614)))->BgL_valuez00) =
								((obj_t) BgL_offsetz00_35), BUNSPEC);
							BgL_arg1592z00_1612 = BgL_new1108z00_1614;
						}
						{	/* Cnst/alloc.scm 209 */
							obj_t BgL_list1593z00_1613;

							BgL_list1593z00_1613 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1592z00_1612), BNIL);
							BgL_auxz00_3748 = BgL_list1593z00_1613;
					}}
					((((BgL_appz00_bglt) COBJECT(BgL_new1104z00_1605))->BgL_argsz00) =
						((obj_t) BgL_auxz00_3748), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(BgL_new1104z00_1605))->BgL_stackablez00) =
					((obj_t) BFALSE), BUNSPEC);
				return BgL_new1104z00_1605;
			}
		}

	}



/* cnst-alloc-string */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t BgL_stringz00_38,
		obj_t BgL_locz00_39)
	{
		{	/* Cnst/alloc.scm 221 */
			{

				{	/* Cnst/alloc.scm 236 */
					obj_t BgL_oldz00_1620;

					{	/* Cnst/alloc.scm 236 */
						obj_t BgL__andtest_1111z00_1624;

						BgL__andtest_1111z00_1624 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_1111z00_1624))
							{	/* Cnst/alloc.scm 236 */
								BgL_oldz00_1620 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2stringzd2envza2zd2zzcnst_allocz00, BgL_stringz00_38);
							}
						else
							{	/* Cnst/alloc.scm 236 */
								BgL_oldz00_1620 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_1620))
						{	/* Cnst/alloc.scm 239 */
							BgL_varz00_bglt BgL_new1113z00_1621;

							{	/* Cnst/alloc.scm 240 */
								BgL_varz00_bglt BgL_new1112z00_1622;

								BgL_new1112z00_1622 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 240 */
									long BgL_arg1604z00_1623;

									{	/* Cnst/alloc.scm 240 */
										long BgL_res2403z00_2800;

										BgL_res2403z00_2800 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1604z00_1623 = BgL_res2403z00_2800;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1112z00_1622),
										BgL_arg1604z00_1623);
								}
								BgL_new1113z00_1621 = BgL_new1112z00_1622;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1113z00_1621)))->BgL_locz00) =
								((obj_t) BgL_locz00_39), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1113z00_1621)))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2bstringza2z00zztype_cachez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1113z00_1621))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										STRUCT_REF(((obj_t) BgL_oldz00_1620), (int) (((long) 1))))),
								BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1113z00_1621);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_3788;

							{	/* Cnst/alloc.scm 224 */
								BgL_globalz00_bglt BgL_varz00_1626;

								{	/* Cnst/alloc.scm 225 */
									obj_t BgL_arg1612z00_1631;

									{	/* Cnst/alloc.scm 225 */
										obj_t BgL_arg1613z00_1632;

										BgL_arg1613z00_1632 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													6)));
										BgL_arg1612z00_1631 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1613z00_1632, CNST_TABLE_REF(((long) 7)));
									}
									BgL_varz00_1626 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1612z00_1631, BGl_za2moduleza2z00zzmodule_modulez00,
										BgL_stringz00_38, CNST_TABLE_REF(((long) 8)),
										BgL_locz00_39);
								}
								if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
									{	/* Cnst/alloc.scm 231 */
										obj_t BgL_arg1606z00_1627;

										{	/* Cnst/alloc.scm 69 */
											obj_t BgL_newz00_2792;

											BgL_newz00_2792 =
												create_struct(CNST_TABLE_REF(((long) 9)),
												(int) (((long) 2)));
											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_auxz00_3802;
												int BgL_tmpz00_3800;

												BgL_auxz00_3802 = ((obj_t) BgL_varz00_1626);
												BgL_tmpz00_3800 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_3800,
													BgL_auxz00_3802);
											}
											{	/* Cnst/alloc.scm 69 */
												int BgL_tmpz00_3805;

												BgL_tmpz00_3805 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2792, BgL_tmpz00_3805,
													BgL_stringz00_38);
											}
											BgL_arg1606z00_1627 = BgL_newz00_2792;
										}
										BGl_hashtablezd2putz12zc0zz__hashz00
											(BGl_za2stringzd2envza2zd2zzcnst_allocz00,
											BgL_stringz00_38, BgL_arg1606z00_1627);
									}
								else
									{	/* Cnst/alloc.scm 230 */
										BFALSE;
									}
								{	/* Cnst/alloc.scm 232 */
									BgL_varz00_bglt BgL_new1110z00_1628;

									{	/* Cnst/alloc.scm 233 */
										BgL_varz00_bglt BgL_new1109z00_1629;

										BgL_new1109z00_1629 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 233 */
											long BgL_arg1611z00_1630;

											{	/* Cnst/alloc.scm 233 */
												long BgL_res2402z00_2796;

												BgL_res2402z00_2796 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1611z00_1630 = BgL_res2402z00_2796;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1109z00_1629),
												BgL_arg1611z00_1630);
										}
										BgL_new1110z00_1628 = BgL_new1109z00_1629;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1110z00_1628)))->
											BgL_locz00) = ((obj_t) BgL_locz00_39), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1110z00_1628)))->BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt)
												BGl_za2bstringza2z00zztype_cachez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1110z00_1628))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1626)), BUNSPEC);
									BgL_auxz00_3788 = BgL_new1110z00_1628;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_3788);
						}
				}
			}
		}

	}



/* &cnst-alloc-string */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2stringz62zzcnst_allocz00(obj_t
		BgL_envz00_3531, obj_t BgL_stringz00_3532, obj_t BgL_locz00_3533)
	{
		{	/* Cnst/alloc.scm 221 */
			return
				BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(BgL_stringz00_3532,
				BgL_locz00_3533);
		}

	}



/* cnst-alloc-ucs2-string */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t BgL_stringz00_40,
		obj_t BgL_locz00_41)
	{
		{	/* Cnst/alloc.scm 249 */
			{
				obj_t BgL_bstringz00_1654;

				{	/* Cnst/alloc.scm 281 */
					obj_t BgL_oldz00_1636;
					obj_t BgL_stringzd2aszd2bstringz00_1637;

					BgL_oldz00_1636 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00, BgL_stringz00_40);
					BgL_stringzd2aszd2bstringz00_1637 =
						ucs2_string_to_utf8_string(BgL_stringz00_40);
					if (CBOOL(BgL_oldz00_1636))
						{	/* Cnst/alloc.scm 284 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 286 */
									BgL_varz00_bglt BgL_new1122z00_1639;

									{	/* Cnst/alloc.scm 287 */
										BgL_varz00_bglt BgL_new1121z00_1641;

										BgL_new1121z00_1641 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 287 */
											long BgL_arg1626z00_1642;

											{	/* Cnst/alloc.scm 287 */
												long BgL_res2410z00_2832;

												BgL_res2410z00_2832 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1626z00_1642 = BgL_res2410z00_2832;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1121z00_1641),
												BgL_arg1626z00_1642);
										}
										BgL_new1122z00_1639 = BgL_new1121z00_1641;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1122z00_1639)))->
											BgL_locz00) = ((obj_t) BgL_locz00_41), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_3835;

										{	/* Cnst/alloc.scm 288 */
											BgL_typez00_bglt BgL_arg1624z00_1640;

											BgL_arg1624z00_1640 =
												BGl_getzd2defaultzd2typez00zztype_cachez00();
											BgL_auxz00_3835 =
												BGl_strictzd2nodezd2typez00zzast_nodez00(
												((BgL_typez00_bglt)
													BGl_za2ucs2stringza2z00zztype_cachez00),
												BgL_arg1624z00_1640);
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1122z00_1639)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_3835), BUNSPEC);
									}
									((((BgL_varz00_bglt) COBJECT(BgL_new1122z00_1639))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												STRUCT_REF(((obj_t) BgL_oldz00_1636),
													(int) (((long) 1))))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1122z00_1639);
								}
							else
								{	/* Cnst/alloc.scm 290 */
									obj_t BgL_arg1627z00_1643;

									BgL_arg1627z00_1643 =
										STRUCT_REF(((obj_t) BgL_oldz00_1636), (int) (((long) 1)));
									return
										((BgL_nodez00_bglt)
										BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg1627z00_1643,
											BGl_za2ucs2stringza2z00zztype_cachez00, BgL_locz00_41));
								}
						}
					else
						{	/* Cnst/alloc.scm 291 */
							bool_t BgL_test2648z00_3852;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 291 */
									BgL_test2648z00_3852 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 291 */
									if (
										(STRING_LENGTH(BgL_stringzd2aszd2bstringz00_1637) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 292 */
											BgL_test2648z00_3852 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 292 */
											BgL_test2648z00_3852 =
												(STRING_REF(BgL_stringzd2aszd2bstringz00_1637,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_test2648z00_3852)
								{
									BgL_varz00_bglt BgL_auxz00_3861;

									BgL_bstringz00_1654 = BgL_stringzd2aszd2bstringz00_1637;
									{	/* Cnst/alloc.scm 251 */
										BgL_globalz00_bglt BgL_varz00_1656;
										BgL_nodez00_bglt BgL_vsz00_1657;

										{	/* Cnst/alloc.scm 252 */
											obj_t BgL_arg1707z00_1680;

											{	/* Cnst/alloc.scm 252 */
												obj_t BgL_arg1708z00_1681;

												BgL_arg1708z00_1681 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 10)));
												BgL_arg1707z00_1680 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg1708z00_1681, CNST_TABLE_REF(((long) 10)));
											}
											BgL_varz00_1656 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg1707z00_1680,
												BGl_za2moduleza2z00zzmodule_modulez00,
												CNST_TABLE_REF(((long) 11)),
												CNST_TABLE_REF(((long) 3)));
										}
										BgL_vsz00_1657 =
											BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
											(BgL_bstringz00_1654, BgL_locz00_41);
										{	/* Cnst/alloc.scm 257 */
											obj_t BgL_arg1662z00_1658;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_newz00_2804;

												BgL_newz00_2804 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_auxz00_3875;
													int BgL_tmpz00_3873;

													BgL_auxz00_3875 = ((obj_t) BgL_varz00_1656);
													BgL_tmpz00_3873 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2804, BgL_tmpz00_3873,
														BgL_auxz00_3875);
												}
												{	/* Cnst/alloc.scm 69 */
													int BgL_tmpz00_3878;

													BgL_tmpz00_3878 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2804, BgL_tmpz00_3878,
														BgL_stringz00_40);
												}
												BgL_arg1662z00_1658 = BgL_newz00_2804;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00,
												BgL_stringz00_40, BgL_arg1662z00_1658);
										}
										{	/* Cnst/alloc.scm 258 */
											obj_t BgL_arg1663z00_1659;

											{	/* Cnst/alloc.scm 258 */
												obj_t BgL_arg1664z00_1660;

												{	/* Cnst/alloc.scm 258 */
													obj_t BgL_arg1667z00_1661;
													obj_t BgL_arg1669z00_1662;

													{	/* Cnst/alloc.scm 258 */
														obj_t BgL_arg1672z00_1663;

														{	/* Cnst/alloc.scm 258 */
															obj_t BgL_arg1684z00_1664;
															obj_t BgL_arg1685z00_1665;

															BgL_arg1684z00_1664 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_1656)))->
																BgL_idz00);
															BgL_arg1685z00_1665 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_1656))->BgL_modulez00),
																BNIL);
															BgL_arg1672z00_1663 =
																MAKE_YOUNG_PAIR(BgL_arg1684z00_1664,
																BgL_arg1685z00_1665);
														}
														BgL_arg1667z00_1661 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg1672z00_1663);
													}
													{	/* Cnst/alloc.scm 260 */
														BgL_nodez00_bglt BgL_arg1687z00_1667;

														{	/* Cnst/alloc.scm 260 */
															BgL_appz00_bglt BgL_arg1688z00_1668;
															BgL_typez00_bglt BgL_arg1692z00_1669;

															{	/* Cnst/alloc.scm 260 */
																BgL_appz00_bglt BgL_new1116z00_1670;

																{	/* Cnst/alloc.scm 267 */
																	BgL_appz00_bglt BgL_new1114z00_1675;

																	BgL_new1114z00_1675 =
																		((BgL_appz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_appz00_bgl))));
																	{	/* Cnst/alloc.scm 267 */
																		long BgL_arg1697z00_1676;

																		{	/* Cnst/alloc.scm 267 */
																			long BgL_res2404z00_2810;

																			BgL_res2404z00_2810 =
																				BGL_CLASS_INDEX
																				(BGl_appz00zzast_nodez00);
																			BgL_arg1697z00_1676 = BgL_res2404z00_2810;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1114z00_1675),
																			BgL_arg1697z00_1676);
																	}
																	{	/* Cnst/alloc.scm 267 */
																		BgL_objectz00_bglt BgL_tmpz00_3893;

																		BgL_tmpz00_3893 =
																			((BgL_objectz00_bglt)
																			BgL_new1114z00_1675);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3893,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1114z00_1675);
																	BgL_new1116z00_1670 = BgL_new1114z00_1675;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1116z00_1670)))->BgL_locz00) =
																	((obj_t) BgL_locz00_41), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1116z00_1670)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2ucs2stringza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1116z00_1670)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1116z00_1670)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																{
																	BgL_varz00_bglt BgL_auxz00_3907;

																	{	/* Cnst/alloc.scm 263 */
																		BgL_varz00_bglt BgL_new1118z00_1671;

																		{	/* Cnst/alloc.scm 266 */
																			BgL_varz00_bglt BgL_new1117z00_1672;

																			BgL_new1117z00_1672 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Cnst/alloc.scm 266 */
																				long BgL_arg1695z00_1673;

																				{	/* Cnst/alloc.scm 266 */
																					long BgL_res2405z00_2815;

																					{	/* Cnst/alloc.scm 266 */
																						obj_t BgL_classz00_2814;

																						BgL_classz00_2814 =
																							BGl_varz00zzast_nodez00;
																						BgL_res2405z00_2815 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2814);
																					}
																					BgL_arg1695z00_1673 =
																						BgL_res2405z00_2815;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1117z00_1672),
																					BgL_arg1695z00_1673);
																			}
																			BgL_new1118z00_1671 = BgL_new1117z00_1672;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1118z00_1671)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_41), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1118z00_1671)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2ucs2stringza2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1118z00_1671))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00)),
																			BUNSPEC);
																		BgL_auxz00_3907 = BgL_new1118z00_1671;
																	}
																	((((BgL_appz00_bglt)
																				COBJECT(BgL_new1116z00_1670))->
																			BgL_funz00) =
																		((BgL_varz00_bglt) BgL_auxz00_3907),
																		BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_3920;

																	{	/* Cnst/alloc.scm 267 */
																		obj_t BgL_list1696z00_1674;

																		BgL_list1696z00_1674 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_vsz00_1657), BNIL);
																		BgL_auxz00_3920 = BgL_list1696z00_1674;
																	}
																	((((BgL_appz00_bglt)
																				COBJECT(BgL_new1116z00_1670))->
																			BgL_argsz00) =
																		((obj_t) BgL_auxz00_3920), BUNSPEC);
																}
																((((BgL_appz00_bglt)
																			COBJECT(BgL_new1116z00_1670))->
																		BgL_stackablez00) =
																	((obj_t) BFALSE), BUNSPEC);
																BgL_arg1688z00_1668 = BgL_new1116z00_1670;
															}
															BgL_arg1692z00_1669 =
																BGl_strictzd2nodezd2typez00zzast_nodez00(
																((BgL_typez00_bglt)
																	BGl_za2ucs2stringza2z00zztype_cachez00),
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00));
															BgL_arg1687z00_1667 =
																BGl_coercez12z12zzcoerce_coercez00((
																	(BgL_nodez00_bglt) BgL_arg1688z00_1668),
																((obj_t) BgL_varz00_1656), BgL_arg1692z00_1669,
																((bool_t) 0));
														}
														BgL_arg1669z00_1662 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1687z00_1667), BNIL);
													}
													BgL_arg1664z00_1660 =
														MAKE_YOUNG_PAIR(BgL_arg1667z00_1661,
														BgL_arg1669z00_1662);
												}
												BgL_arg1663z00_1659 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
													BgL_arg1664z00_1660);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg1663z00_1659,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 271 */
											BgL_varz00_bglt BgL_new1120z00_1677;

											{	/* Cnst/alloc.scm 272 */
												BgL_varz00_bglt BgL_new1119z00_1678;

												BgL_new1119z00_1678 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 272 */
													long BgL_arg1704z00_1679;

													{	/* Cnst/alloc.scm 272 */
														long BgL_res2407z00_2820;

														BgL_res2407z00_2820 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1704z00_1679 = BgL_res2407z00_2820;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1119z00_1678),
														BgL_arg1704z00_1679);
												}
												BgL_new1120z00_1677 = BgL_new1119z00_1678;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1120z00_1677)))->
													BgL_locz00) = ((obj_t) BgL_locz00_41), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1120z00_1677)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt)
																	BgL_varz00_1656)))->BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1120z00_1677))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_1656)), BUNSPEC);
											BgL_auxz00_3861 = BgL_new1120z00_1677;
									}}
									return ((BgL_nodez00_bglt) BgL_auxz00_3861);
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_3950;

									{	/* Cnst/alloc.scm 276 */
										long BgL_offsetz00_1683;

										BgL_offsetz00_1683 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_stringz00_40,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 279 */
											obj_t BgL_arg1711z00_1684;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_newz00_2826;

												BgL_newz00_2826 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_auxz00_3958;
													int BgL_tmpz00_3956;

													BgL_auxz00_3958 = BINT(BgL_offsetz00_1683);
													BgL_tmpz00_3956 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2826, BgL_tmpz00_3956,
														BgL_auxz00_3958);
												}
												{	/* Cnst/alloc.scm 69 */
													int BgL_tmpz00_3961;

													BgL_tmpz00_3961 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2826, BgL_tmpz00_3961,
														BgL_stringz00_40);
												}
												BgL_arg1711z00_1684 = BgL_newz00_2826;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00,
												BgL_stringz00_40, BgL_arg1711z00_1684);
										}
										BgL_auxz00_3950 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1683),
											BGl_za2ucs2stringza2z00zztype_cachez00, BgL_locz00_41);
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_3950);
								}
						}
				}
			}
		}

	}



/* &cnst-alloc-ucs2-string */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2ucs2zd2stringzb0zzcnst_allocz00(obj_t
		BgL_envz00_3534, obj_t BgL_stringz00_3535, obj_t BgL_locz00_3536)
	{
		{	/* Cnst/alloc.scm 249 */
			return
				BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(BgL_stringz00_3535,
				BgL_locz00_3536);
		}

	}



/* cnst-alloc-symbol */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t BgL_symbolz00_42,
		obj_t BgL_locz00_43)
	{
		{	/* Cnst/alloc.scm 301 */
			{

				{	/* Cnst/alloc.scm 332 */
					obj_t BgL_oldz00_1689;
					obj_t BgL_symbolzd2aszd2stringz00_1690;

					BgL_oldz00_1689 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2symbolzd2envza2zd2zzcnst_allocz00, BgL_symbolz00_42);
					{	/* Cnst/alloc.scm 333 */
						obj_t BgL_res2421z00_2876;

						{	/* Cnst/alloc.scm 333 */
							obj_t BgL_arg1466z00_2875;

							BgL_arg1466z00_2875 = SYMBOL_TO_STRING(BgL_symbolz00_42);
							BgL_res2421z00_2876 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2875);
						}
						BgL_symbolzd2aszd2stringz00_1690 = BgL_res2421z00_2876;
					}
					{	/* Cnst/alloc.scm 335 */
						bool_t BgL_test2651z00_3972;

						if (STRUCTP(BgL_oldz00_1689))
							{	/* Cnst/alloc.scm 69 */
								BgL_test2651z00_3972 =
									(STRUCT_KEY(BgL_oldz00_1689) == CNST_TABLE_REF(((long) 9)));
							}
						else
							{	/* Cnst/alloc.scm 69 */
								BgL_test2651z00_3972 = ((bool_t) 0);
							}
						if (BgL_test2651z00_3972)
							{	/* Cnst/alloc.scm 337 */
								bool_t BgL_test2653z00_3978;

								{	/* Cnst/alloc.scm 337 */
									obj_t BgL_arg1729z00_1702;

									BgL_arg1729z00_1702 =
										STRUCT_REF(BgL_oldz00_1689, (int) (((long) 1)));
									BgL_test2653z00_3978 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1729z00_1702,
										BGl_variablez00zzast_varz00);
								}
								if (BgL_test2653z00_3978)
									{	/* Cnst/alloc.scm 338 */
										BgL_varz00_bglt BgL_new1134z00_1694;

										{	/* Cnst/alloc.scm 339 */
											BgL_varz00_bglt BgL_new1133z00_1695;

											BgL_new1133z00_1695 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Cnst/alloc.scm 339 */
												long BgL_arg1725z00_1696;

												{	/* Cnst/alloc.scm 339 */
													long BgL_res2425z00_2885;

													BgL_res2425z00_2885 =
														BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
													BgL_arg1725z00_1696 = BgL_res2425z00_2885;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1133z00_1695),
													BgL_arg1725z00_1696);
											}
											BgL_new1134z00_1694 = BgL_new1133z00_1695;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1134z00_1694)))->
												BgL_locz00) = ((obj_t) BgL_locz00_43), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1134z00_1694)))->BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BGl_za2symbolza2z00zztype_cachez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1134z00_1694))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													STRUCT_REF(BgL_oldz00_1689, (int) (((long) 1))))),
											BUNSPEC);
										return ((BgL_nodez00_bglt) BgL_new1134z00_1694);
									}
								else
									{	/* Cnst/alloc.scm 337 */
										if (
											(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 14))))
											{	/* Cnst/alloc.scm 343 */
												BgL_varz00_bglt BgL_new1136z00_1698;

												{	/* Cnst/alloc.scm 344 */
													BgL_varz00_bglt BgL_new1135z00_1699;

													BgL_new1135z00_1699 =
														((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_varz00_bgl))));
													{	/* Cnst/alloc.scm 344 */
														long BgL_arg1727z00_1700;

														{	/* Cnst/alloc.scm 344 */
															long BgL_res2426z00_2890;

															BgL_res2426z00_2890 =
																BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
															BgL_arg1727z00_1700 = BgL_res2426z00_2890;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1135z00_1699),
															BgL_arg1727z00_1700);
													}
													BgL_new1136z00_1698 = BgL_new1135z00_1699;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1136z00_1698)))->
														BgL_locz00) = ((obj_t) BgL_locz00_43), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1136z00_1698)))->BgL_typez00) =
													((BgL_typez00_bglt) ((BgL_typez00_bglt)
															BGl_za2symbolza2z00zztype_cachez00)), BUNSPEC);
												((((BgL_varz00_bglt) COBJECT(BgL_new1136z00_1698))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
															STRUCT_REF(BgL_oldz00_1689, (int) (((long) 1))))),
													BUNSPEC);
												return ((BgL_nodez00_bglt) BgL_new1136z00_1698);
											}
										else
											{	/* Cnst/alloc.scm 348 */
												obj_t BgL_arg1728z00_1701;

												BgL_arg1728z00_1701 =
													STRUCT_REF(BgL_oldz00_1689, (int) (((long) 1)));
												return
													((BgL_nodez00_bglt)
													BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
													(BgL_arg1728z00_1701,
														BGl_za2symbolza2z00zztype_cachez00, BgL_locz00_43));
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 335 */
								if (CBOOL(BgL_oldz00_1689))
									{	/* Cnst/alloc.scm 352 */
										obj_t BgL_arg1731z00_1703;

										BgL_arg1731z00_1703 =
											BGl_shapez00zztools_shapez00(BgL_oldz00_1689);
										return
											((BgL_nodez00_bglt)
											BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
														(long) 17)), BGl_string2600z00zzcnst_allocz00,
												BgL_arg1731z00_1703));
									}
								else
									{	/* Cnst/alloc.scm 353 */
										bool_t BgL_test2656z00_4023;

										if (
											(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 14))))
											{	/* Cnst/alloc.scm 353 */
												BgL_test2656z00_4023 = ((bool_t) 1);
											}
										else
											{	/* Cnst/alloc.scm 353 */
												if (
													(STRING_LENGTH(BgL_symbolzd2aszd2stringz00_1690) ==
														((long) 0)))
													{	/* Cnst/alloc.scm 354 */
														BgL_test2656z00_4023 = ((bool_t) 1);
													}
												else
													{	/* Cnst/alloc.scm 354 */
														BgL_test2656z00_4023 =
															(STRING_REF(BgL_symbolzd2aszd2stringz00_1690,
																((long) 0)) == ((unsigned char) ';'));
											}}
										if (BgL_test2656z00_4023)
											{
												BgL_varz00_bglt BgL_auxz00_4032;

												{	/* Cnst/alloc.scm 303 */
													BgL_globalz00_bglt BgL_varz00_1715;
													BgL_nodez00_bglt BgL_vsz00_1716;

													{	/* Cnst/alloc.scm 303 */
														obj_t BgL_arg1779z00_1739;

														{	/* Cnst/alloc.scm 303 */
															obj_t BgL_arg1782z00_1740;

															BgL_arg1782z00_1740 =
																BGl_gensymz00zz__r4_symbols_6_4z00
																(CNST_TABLE_REF(((long) 15)));
															BgL_arg1779z00_1739 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(BgL_arg1782z00_1740,
																CNST_TABLE_REF(((long) 15)));
														}
														BgL_varz00_1715 =
															BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
															(BgL_arg1779z00_1739,
															BGl_za2moduleza2z00zzmodule_modulez00,
															CNST_TABLE_REF(((long) 16)),
															CNST_TABLE_REF(((long) 3)));
													}
													{	/* Cnst/alloc.scm 307 */
														obj_t BgL_arg1784z00_1741;

														{	/* Cnst/alloc.scm 307 */
															obj_t BgL_res2415z00_2848;

															{	/* Cnst/alloc.scm 307 */
																obj_t BgL_arg1466z00_2847;

																BgL_arg1466z00_2847 =
																	SYMBOL_TO_STRING(BgL_symbolz00_42);
																BgL_res2415z00_2848 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_2847);
															}
															BgL_arg1784z00_1741 = BgL_res2415z00_2848;
														}
														BgL_vsz00_1716 =
															BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
															(BgL_arg1784z00_1741, BgL_locz00_43);
													}
													{	/* Cnst/alloc.scm 308 */
														obj_t BgL_arg1744z00_1717;

														{	/* Cnst/alloc.scm 69 */
															obj_t BgL_newz00_2849;

															BgL_newz00_2849 =
																create_struct(CNST_TABLE_REF(((long) 9)),
																(int) (((long) 2)));
															{	/* Cnst/alloc.scm 69 */
																obj_t BgL_auxz00_4048;
																int BgL_tmpz00_4046;

																BgL_auxz00_4048 = ((obj_t) BgL_varz00_1715);
																BgL_tmpz00_4046 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_2849, BgL_tmpz00_4046,
																	BgL_auxz00_4048);
															}
															{	/* Cnst/alloc.scm 69 */
																int BgL_tmpz00_4051;

																BgL_tmpz00_4051 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_2849, BgL_tmpz00_4051,
																	BgL_symbolz00_42);
															}
															BgL_arg1744z00_1717 = BgL_newz00_2849;
														}
														BGl_hashtablezd2putz12zc0zz__hashz00
															(BGl_za2symbolzd2envza2zd2zzcnst_allocz00,
															BgL_symbolz00_42, BgL_arg1744z00_1717);
													}
													{	/* Cnst/alloc.scm 309 */
														obj_t BgL_arg1745z00_1718;

														{	/* Cnst/alloc.scm 309 */
															obj_t BgL_arg1746z00_1719;

															{	/* Cnst/alloc.scm 309 */
																obj_t BgL_arg1747z00_1720;
																obj_t BgL_arg1754z00_1721;

																{	/* Cnst/alloc.scm 309 */
																	obj_t BgL_arg1755z00_1722;

																	{	/* Cnst/alloc.scm 309 */
																		obj_t BgL_arg1756z00_1723;
																		obj_t BgL_arg1757z00_1724;

																		BgL_arg1756z00_1723 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_varz00_1715)))->BgL_idz00);
																		BgL_arg1757z00_1724 =
																			MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																					COBJECT(BgL_varz00_1715))->
																				BgL_modulez00), BNIL);
																		BgL_arg1755z00_1722 =
																			MAKE_YOUNG_PAIR(BgL_arg1756z00_1723,
																			BgL_arg1757z00_1724);
																	}
																	BgL_arg1747z00_1720 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																		BgL_arg1755z00_1722);
																}
																{	/* Cnst/alloc.scm 311 */
																	BgL_nodez00_bglt BgL_arg1760z00_1726;

																	{	/* Cnst/alloc.scm 311 */
																		BgL_appz00_bglt BgL_arg1761z00_1727;
																		BgL_typez00_bglt BgL_arg1768z00_1728;

																		{	/* Cnst/alloc.scm 311 */
																			BgL_appz00_bglt BgL_new1125z00_1729;

																			{	/* Cnst/alloc.scm 318 */
																				BgL_appz00_bglt BgL_new1123z00_1734;

																				BgL_new1123z00_1734 =
																					((BgL_appz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_appz00_bgl))));
																				{	/* Cnst/alloc.scm 318 */
																					long BgL_arg1775z00_1735;

																					{	/* Cnst/alloc.scm 318 */
																						long BgL_res2416z00_2855;

																						BgL_res2416z00_2855 =
																							BGL_CLASS_INDEX
																							(BGl_appz00zzast_nodez00);
																						BgL_arg1775z00_1735 =
																							BgL_res2416z00_2855;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1123z00_1734),
																						BgL_arg1775z00_1735);
																				}
																				{	/* Cnst/alloc.scm 318 */
																					BgL_objectz00_bglt BgL_tmpz00_4066;

																					BgL_tmpz00_4066 =
																						((BgL_objectz00_bglt)
																						BgL_new1123z00_1734);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_4066, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1123z00_1734);
																				BgL_new1125z00_1729 =
																					BgL_new1123z00_1734;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1125z00_1729)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_43), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1125z00_1729)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) ((BgL_typez00_bglt)
																						BGl_za2symbolza2z00zztype_cachez00)),
																				BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1125z00_1729)))->
																					BgL_sidezd2effectzd2) =
																				((obj_t) BUNSPEC), BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1125z00_1729)))->
																					BgL_keyz00) =
																				((obj_t) BINT(((long) -1))), BUNSPEC);
																			{
																				BgL_varz00_bglt BgL_auxz00_4080;

																				{	/* Cnst/alloc.scm 314 */
																					BgL_varz00_bglt BgL_new1128z00_1730;

																					{	/* Cnst/alloc.scm 317 */
																						BgL_varz00_bglt BgL_new1126z00_1731;

																						BgL_new1126z00_1731 =
																							((BgL_varz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_varz00_bgl))));
																						{	/* Cnst/alloc.scm 317 */
																							long BgL_arg1771z00_1732;

																							{	/* Cnst/alloc.scm 317 */
																								long BgL_res2417z00_2860;

																								{	/* Cnst/alloc.scm 317 */
																									obj_t BgL_classz00_2859;

																									BgL_classz00_2859 =
																										BGl_varz00zzast_nodez00;
																									BgL_res2417z00_2860 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_2859);
																								}
																								BgL_arg1771z00_1732 =
																									BgL_res2417z00_2860;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1126z00_1731),
																								BgL_arg1771z00_1732);
																						}
																						BgL_new1128z00_1730 =
																							BgL_new1126z00_1731;
																					}
																					((((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_new1128z00_1730)))->
																							BgL_locz00) =
																						((obj_t) BgL_locz00_43), BUNSPEC);
																					((((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_new1128z00_1730)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) (
																								(BgL_typez00_bglt)
																								BGl_za2symbolza2z00zztype_cachez00)),
																						BUNSPEC);
																					((((BgL_varz00_bglt)
																								COBJECT(BgL_new1128z00_1730))->
																							BgL_variablez00) =
																						((BgL_variablez00_bglt) (
																								(BgL_variablez00_bglt)
																								BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00)),
																						BUNSPEC);
																					BgL_auxz00_4080 = BgL_new1128z00_1730;
																				}
																				((((BgL_appz00_bglt)
																							COBJECT(BgL_new1125z00_1729))->
																						BgL_funz00) =
																					((BgL_varz00_bglt) BgL_auxz00_4080),
																					BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_4093;

																				{	/* Cnst/alloc.scm 318 */
																					obj_t BgL_list1772z00_1733;

																					BgL_list1772z00_1733 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_vsz00_1716), BNIL);
																					BgL_auxz00_4093 =
																						BgL_list1772z00_1733;
																				}
																				((((BgL_appz00_bglt)
																							COBJECT(BgL_new1125z00_1729))->
																						BgL_argsz00) =
																					((obj_t) BgL_auxz00_4093), BUNSPEC);
																			}
																			((((BgL_appz00_bglt)
																						COBJECT(BgL_new1125z00_1729))->
																					BgL_stackablez00) =
																				((obj_t) BFALSE), BUNSPEC);
																			BgL_arg1761z00_1727 = BgL_new1125z00_1729;
																		}
																		BgL_arg1768z00_1728 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00(
																			((BgL_typez00_bglt)
																				BGl_za2symbolza2z00zztype_cachez00),
																			((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00));
																		BgL_arg1760z00_1726 =
																			BGl_coercez12z12zzcoerce_coercez00((
																				(BgL_nodez00_bglt) BgL_arg1761z00_1727),
																			((obj_t) BgL_varz00_1715),
																			BgL_arg1768z00_1728, ((bool_t) 0));
																	}
																	BgL_arg1754z00_1721 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1760z00_1726), BNIL);
																}
																BgL_arg1746z00_1719 =
																	MAKE_YOUNG_PAIR(BgL_arg1747z00_1720,
																	BgL_arg1754z00_1721);
															}
															BgL_arg1745z00_1718 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																BgL_arg1746z00_1719);
														}
														BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
															MAKE_YOUNG_PAIR(BgL_arg1745z00_1718,
															BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
													}
													{	/* Cnst/alloc.scm 322 */
														BgL_varz00_bglt BgL_new1131z00_1736;

														{	/* Cnst/alloc.scm 323 */
															BgL_varz00_bglt BgL_new1130z00_1737;

															BgL_new1130z00_1737 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Cnst/alloc.scm 323 */
																long BgL_arg1778z00_1738;

																{	/* Cnst/alloc.scm 323 */
																	long BgL_res2419z00_2865;

																	BgL_res2419z00_2865 =
																		BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																	BgL_arg1778z00_1738 = BgL_res2419z00_2865;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1130z00_1737),
																	BgL_arg1778z00_1738);
															}
															BgL_new1131z00_1736 = BgL_new1130z00_1737;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1131z00_1736)))->
																BgL_locz00) = ((obj_t) BgL_locz00_43), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1131z00_1736)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_varz00_1715)))->BgL_typez00)),
															BUNSPEC);
														((((BgL_varz00_bglt) COBJECT(BgL_new1131z00_1736))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_varz00_1715)), BUNSPEC);
														BgL_auxz00_4032 = BgL_new1131z00_1736;
												}}
												return ((BgL_nodez00_bglt) BgL_auxz00_4032);
											}
										else
											{
												BgL_appz00_bglt BgL_auxz00_4123;

												{	/* Cnst/alloc.scm 327 */
													long BgL_offsetz00_1743;

													BgL_offsetz00_1743 =
														BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
													BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
														(((long) 1) +
														BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
													BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
														MAKE_YOUNG_PAIR(BgL_symbolz00_42,
														BGl_za2globalzd2setza2zd2zzcnst_allocz00);
													{	/* Cnst/alloc.scm 330 */
														obj_t BgL_arg1790z00_1744;

														{	/* Cnst/alloc.scm 69 */
															obj_t BgL_newz00_2871;

															BgL_newz00_2871 =
																create_struct(CNST_TABLE_REF(((long) 9)),
																(int) (((long) 2)));
															{	/* Cnst/alloc.scm 69 */
																obj_t BgL_auxz00_4131;
																int BgL_tmpz00_4129;

																BgL_auxz00_4131 = BINT(BgL_offsetz00_1743);
																BgL_tmpz00_4129 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_2871, BgL_tmpz00_4129,
																	BgL_auxz00_4131);
															}
															{	/* Cnst/alloc.scm 69 */
																int BgL_tmpz00_4134;

																BgL_tmpz00_4134 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_2871, BgL_tmpz00_4134,
																	BgL_symbolz00_42);
															}
															BgL_arg1790z00_1744 = BgL_newz00_2871;
														}
														BGl_hashtablezd2putz12zc0zz__hashz00
															(BGl_za2symbolzd2envza2zd2zzcnst_allocz00,
															BgL_symbolz00_42, BgL_arg1790z00_1744);
													}
													BgL_auxz00_4123 =
														BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
														(BgL_offsetz00_1743),
														BGl_za2symbolza2z00zztype_cachez00, BgL_locz00_43);
												}
												return ((BgL_nodez00_bglt) BgL_auxz00_4123);
											}
									}
							}
					}
				}
			}
		}

	}



/* &cnst-alloc-symbol */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2symbolz62zzcnst_allocz00(obj_t
		BgL_envz00_3537, obj_t BgL_symbolz00_3538, obj_t BgL_locz00_3539)
	{
		{	/* Cnst/alloc.scm 301 */
			return
				BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(BgL_symbolz00_3538,
				BgL_locz00_3539);
		}

	}



/* cnst-alloc-keyword */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t BgL_keywordz00_44,
		obj_t BgL_locz00_45)
	{
		{	/* Cnst/alloc.scm 363 */
			{

				{	/* Cnst/alloc.scm 395 */
					obj_t BgL_oldz00_1749;
					obj_t BgL_keywordzd2aszd2stringz00_1750;

					BgL_oldz00_1749 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2keywordzd2envza2zd2zzcnst_allocz00, BgL_keywordz00_44);
					{	/* Cnst/alloc.scm 396 */
						obj_t BgL_res2437z00_2934;

						{	/* Cnst/alloc.scm 396 */
							obj_t BgL_arg1463z00_2933;

							BgL_arg1463z00_2933 = KEYWORD_TO_STRING(BgL_keywordz00_44);
							BgL_res2437z00_2934 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1463z00_2933);
						}
						BgL_keywordzd2aszd2stringz00_1750 = BgL_res2437z00_2934;
					}
					if (CBOOL(BgL_oldz00_1749))
						{	/* Cnst/alloc.scm 398 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 400 */
									BgL_varz00_bglt BgL_new1144z00_1752;

									{	/* Cnst/alloc.scm 401 */
										BgL_varz00_bglt BgL_new1143z00_1753;

										BgL_new1143z00_1753 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 401 */
											long BgL_arg1796z00_1754;

											{	/* Cnst/alloc.scm 401 */
												long BgL_res2438z00_2936;

												BgL_res2438z00_2936 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1796z00_1754 = BgL_res2438z00_2936;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1143z00_1753),
												BgL_arg1796z00_1754);
										}
										BgL_new1144z00_1752 = BgL_new1143z00_1753;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1144z00_1752)))->
											BgL_locz00) = ((obj_t) BgL_locz00_45), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1144z00_1752)))->BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt)
												BGl_za2keywordza2z00zztype_cachez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1144z00_1752))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												STRUCT_REF(((obj_t) BgL_oldz00_1749),
													(int) (((long) 1))))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1144z00_1752);
								}
							else
								{	/* Cnst/alloc.scm 404 */
									obj_t BgL_arg1798z00_1755;

									BgL_arg1798z00_1755 =
										STRUCT_REF(((obj_t) BgL_oldz00_1749), (int) (((long) 1)));
									return
										((BgL_nodez00_bglt)
										BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg1798z00_1755, BGl_za2keywordza2z00zztype_cachez00,
											BgL_locz00_45));
								}
						}
					else
						{	/* Cnst/alloc.scm 405 */
							bool_t BgL_test2661z00_4170;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 405 */
									BgL_test2661z00_4170 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 405 */
									if (
										(STRING_LENGTH(BgL_keywordzd2aszd2stringz00_1750) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 406 */
											BgL_test2661z00_4170 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 406 */
											BgL_test2661z00_4170 =
												(STRING_REF(BgL_keywordzd2aszd2stringz00_1750,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_test2661z00_4170)
								{
									BgL_varz00_bglt BgL_auxz00_4179;

									{	/* Cnst/alloc.scm 365 */
										BgL_globalz00_bglt BgL_varz00_1767;
										BgL_nodez00_bglt BgL_vsz00_1768;

										{	/* Cnst/alloc.scm 365 */
											obj_t BgL_arg1841z00_1791;

											{	/* Cnst/alloc.scm 365 */
												obj_t BgL_arg1842z00_1792;

												BgL_arg1842z00_1792 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 18)));
												BgL_arg1841z00_1791 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg1842z00_1792, CNST_TABLE_REF(((long) 18)));
											}
											BgL_varz00_1767 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg1841z00_1791,
												BGl_za2moduleza2z00zzmodule_modulez00,
												CNST_TABLE_REF(((long) 19)),
												CNST_TABLE_REF(((long) 3)));
										}
										{	/* Cnst/alloc.scm 370 */
											obj_t BgL_arg1845z00_1793;

											{	/* Cnst/alloc.scm 370 */
												obj_t BgL_res2431z00_2906;

												{	/* Cnst/alloc.scm 370 */
													obj_t BgL_arg1463z00_2905;

													BgL_arg1463z00_2905 =
														KEYWORD_TO_STRING(BgL_keywordz00_44);
													BgL_res2431z00_2906 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1463z00_2905);
												}
												BgL_arg1845z00_1793 = BgL_res2431z00_2906;
											}
											BgL_vsz00_1768 =
												BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
												(BgL_arg1845z00_1793, BgL_locz00_45);
										}
										{	/* Cnst/alloc.scm 371 */
											obj_t BgL_arg1822z00_1769;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_newz00_2907;

												BgL_newz00_2907 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_auxz00_4195;
													int BgL_tmpz00_4193;

													BgL_auxz00_4195 = ((obj_t) BgL_varz00_1767);
													BgL_tmpz00_4193 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2907, BgL_tmpz00_4193,
														BgL_auxz00_4195);
												}
												{	/* Cnst/alloc.scm 69 */
													int BgL_tmpz00_4198;

													BgL_tmpz00_4198 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2907, BgL_tmpz00_4198,
														BgL_keywordz00_44);
												}
												BgL_arg1822z00_1769 = BgL_newz00_2907;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2keywordzd2envza2zd2zzcnst_allocz00,
												BgL_keywordz00_44, BgL_arg1822z00_1769);
										}
										{	/* Cnst/alloc.scm 372 */
											obj_t BgL_arg1823z00_1770;

											{	/* Cnst/alloc.scm 372 */
												obj_t BgL_arg1824z00_1771;

												{	/* Cnst/alloc.scm 372 */
													obj_t BgL_arg1825z00_1772;
													obj_t BgL_arg1826z00_1773;

													{	/* Cnst/alloc.scm 372 */
														obj_t BgL_arg1827z00_1774;

														{	/* Cnst/alloc.scm 372 */
															obj_t BgL_arg1828z00_1775;
															obj_t BgL_arg1829z00_1776;

															BgL_arg1828z00_1775 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_1767)))->
																BgL_idz00);
															BgL_arg1829z00_1776 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_1767))->BgL_modulez00),
																BNIL);
															BgL_arg1827z00_1774 =
																MAKE_YOUNG_PAIR(BgL_arg1828z00_1775,
																BgL_arg1829z00_1776);
														}
														BgL_arg1825z00_1772 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg1827z00_1774);
													}
													{	/* Cnst/alloc.scm 374 */
														BgL_nodez00_bglt BgL_arg1831z00_1778;

														{	/* Cnst/alloc.scm 374 */
															BgL_appz00_bglt BgL_arg1832z00_1779;
															BgL_typez00_bglt BgL_arg1833z00_1780;

															{	/* Cnst/alloc.scm 374 */
																BgL_appz00_bglt BgL_new1138z00_1781;

																{	/* Cnst/alloc.scm 381 */
																	BgL_appz00_bglt BgL_new1137z00_1786;

																	BgL_new1137z00_1786 =
																		((BgL_appz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_appz00_bgl))));
																	{	/* Cnst/alloc.scm 381 */
																		long BgL_arg1838z00_1787;

																		{	/* Cnst/alloc.scm 381 */
																			long BgL_res2432z00_2913;

																			BgL_res2432z00_2913 =
																				BGL_CLASS_INDEX
																				(BGl_appz00zzast_nodez00);
																			BgL_arg1838z00_1787 = BgL_res2432z00_2913;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1137z00_1786),
																			BgL_arg1838z00_1787);
																	}
																	{	/* Cnst/alloc.scm 381 */
																		BgL_objectz00_bglt BgL_tmpz00_4213;

																		BgL_tmpz00_4213 =
																			((BgL_objectz00_bglt)
																			BgL_new1137z00_1786);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4213,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1137z00_1786);
																	BgL_new1138z00_1781 = BgL_new1137z00_1786;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1138z00_1781)))->BgL_locz00) =
																	((obj_t) BgL_locz00_45), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1138z00_1781)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2keywordza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1138z00_1781)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1138z00_1781)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																{
																	BgL_varz00_bglt BgL_auxz00_4227;

																	{	/* Cnst/alloc.scm 377 */
																		BgL_varz00_bglt BgL_new1140z00_1782;

																		{	/* Cnst/alloc.scm 380 */
																			BgL_varz00_bglt BgL_new1139z00_1783;

																			BgL_new1139z00_1783 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Cnst/alloc.scm 380 */
																				long BgL_arg1835z00_1784;

																				{	/* Cnst/alloc.scm 380 */
																					long BgL_res2433z00_2918;

																					{	/* Cnst/alloc.scm 380 */
																						obj_t BgL_classz00_2917;

																						BgL_classz00_2917 =
																							BGl_varz00zzast_nodez00;
																						BgL_res2433z00_2918 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2917);
																					}
																					BgL_arg1835z00_1784 =
																						BgL_res2433z00_2918;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1139z00_1783),
																					BgL_arg1835z00_1784);
																			}
																			BgL_new1140z00_1782 = BgL_new1139z00_1783;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1140z00_1782)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_45), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1140z00_1782)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2keywordza2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1140z00_1782))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00)),
																			BUNSPEC);
																		BgL_auxz00_4227 = BgL_new1140z00_1782;
																	}
																	((((BgL_appz00_bglt)
																				COBJECT(BgL_new1138z00_1781))->
																			BgL_funz00) =
																		((BgL_varz00_bglt) BgL_auxz00_4227),
																		BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_4240;

																	{	/* Cnst/alloc.scm 381 */
																		obj_t BgL_list1836z00_1785;

																		BgL_list1836z00_1785 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_vsz00_1768), BNIL);
																		BgL_auxz00_4240 = BgL_list1836z00_1785;
																	}
																	((((BgL_appz00_bglt)
																				COBJECT(BgL_new1138z00_1781))->
																			BgL_argsz00) =
																		((obj_t) BgL_auxz00_4240), BUNSPEC);
																}
																((((BgL_appz00_bglt)
																			COBJECT(BgL_new1138z00_1781))->
																		BgL_stackablez00) =
																	((obj_t) BFALSE), BUNSPEC);
																BgL_arg1832z00_1779 = BgL_new1138z00_1781;
															}
															BgL_arg1833z00_1780 =
																BGl_strictzd2nodezd2typez00zzast_nodez00(
																((BgL_typez00_bglt)
																	BGl_za2keywordza2z00zztype_cachez00),
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00));
															BgL_arg1831z00_1778 =
																BGl_coercez12z12zzcoerce_coercez00((
																	(BgL_nodez00_bglt) BgL_arg1832z00_1779),
																((obj_t) BgL_varz00_1767), BgL_arg1833z00_1780,
																((bool_t) 0));
														}
														BgL_arg1826z00_1773 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1831z00_1778), BNIL);
													}
													BgL_arg1824z00_1771 =
														MAKE_YOUNG_PAIR(BgL_arg1825z00_1772,
														BgL_arg1826z00_1773);
												}
												BgL_arg1823z00_1770 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
													BgL_arg1824z00_1771);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg1823z00_1770,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 385 */
											BgL_varz00_bglt BgL_new1142z00_1788;

											{	/* Cnst/alloc.scm 386 */
												BgL_varz00_bglt BgL_new1141z00_1789;

												BgL_new1141z00_1789 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 386 */
													long BgL_arg1840z00_1790;

													{	/* Cnst/alloc.scm 386 */
														long BgL_res2435z00_2923;

														BgL_res2435z00_2923 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1840z00_1790 = BgL_res2435z00_2923;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1141z00_1789),
														BgL_arg1840z00_1790);
												}
												BgL_new1142z00_1788 = BgL_new1141z00_1789;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1142z00_1788)))->
													BgL_locz00) = ((obj_t) BgL_locz00_45), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1142z00_1788)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt)
																	BgL_varz00_1767)))->BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1142z00_1788))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_1767)), BUNSPEC);
											BgL_auxz00_4179 = BgL_new1142z00_1788;
									}}
									return ((BgL_nodez00_bglt) BgL_auxz00_4179);
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_4270;

									{	/* Cnst/alloc.scm 390 */
										long BgL_offsetz00_1795;

										BgL_offsetz00_1795 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_keywordz00_44,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 393 */
											obj_t BgL_arg1847z00_1796;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_newz00_2929;

												BgL_newz00_2929 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_auxz00_4278;
													int BgL_tmpz00_4276;

													BgL_auxz00_4278 = BINT(BgL_offsetz00_1795);
													BgL_tmpz00_4276 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2929, BgL_tmpz00_4276,
														BgL_auxz00_4278);
												}
												{	/* Cnst/alloc.scm 69 */
													int BgL_tmpz00_4281;

													BgL_tmpz00_4281 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2929, BgL_tmpz00_4281,
														BgL_keywordz00_44);
												}
												BgL_arg1847z00_1796 = BgL_newz00_2929;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2keywordzd2envza2zd2zzcnst_allocz00,
												BgL_keywordz00_44, BgL_arg1847z00_1796);
										}
										BgL_auxz00_4270 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1795), BGl_za2keywordza2z00zztype_cachez00,
											BgL_locz00_45);
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_4270);
								}
						}
				}
			}
		}

	}



/* &cnst-alloc-keyword */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2keywordz62zzcnst_allocz00(obj_t
		BgL_envz00_3540, obj_t BgL_keywordz00_3541, obj_t BgL_locz00_3542)
	{
		{	/* Cnst/alloc.scm 363 */
			return
				BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(BgL_keywordz00_3541,
				BgL_locz00_3542);
		}

	}



/* cnst-alloc-bignum */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t
		BgL_bignumz00_46, obj_t BgL_locz00_47)
	{
		{	/* Cnst/alloc.scm 415 */
			{

				{	/* Cnst/alloc.scm 427 */
					obj_t BgL_oldz00_1801;
					obj_t BgL_bignumzd2aszd2stringz00_1802;

					BgL_oldz00_1801 =
						BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_bignumz00_46,
						BGl_za2bignumzd2envza2zd2zzcnst_allocz00);
					{	/* Cnst/alloc.scm 428 */

						BgL_bignumzd2aszd2stringz00_1802 =
							BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_bignumz00_46, ((long) 10));
					}
					if (PAIRP(BgL_oldz00_1801))
						{	/* Cnst/alloc.scm 432 */
							bool_t BgL_test2665z00_4293;

							{	/* Cnst/alloc.scm 432 */
								obj_t BgL_arg1871z00_1824;

								BgL_arg1871z00_1824 =
									STRUCT_REF(CDR(BgL_oldz00_1801), (int) (((long) 1)));
								BgL_test2665z00_4293 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1871z00_1824,
									BGl_variablez00zzast_varz00);
							}
							if (BgL_test2665z00_4293)
								{	/* Cnst/alloc.scm 433 */
									BgL_varz00_bglt BgL_new1146z00_1807;

									{	/* Cnst/alloc.scm 434 */
										BgL_varz00_bglt BgL_new1145z00_1812;

										BgL_new1145z00_1812 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 434 */
											long BgL_arg1858z00_1813;

											{	/* Cnst/alloc.scm 434 */
												long BgL_res2446z00_2960;

												BgL_res2446z00_2960 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1858z00_1813 = BgL_res2446z00_2960;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1145z00_1812),
												BgL_arg1858z00_1813);
										}
										BgL_new1146z00_1807 = BgL_new1145z00_1812;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1146z00_1807)))->
											BgL_locz00) = ((obj_t) BgL_locz00_47), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_4304;

										{	/* Cnst/alloc.scm 436 */
											BgL_typez00_bglt BgL_arg1853z00_1808;

											{
												BgL_variablez00_bglt BgL_auxz00_4306;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_sz00_2964;

													BgL_sz00_2964 = CDR(BgL_oldz00_1801);
													BgL_auxz00_4306 =
														((BgL_variablez00_bglt)
														STRUCT_REF(BgL_sz00_2964, (int) (((long) 1))));
												}
												BgL_arg1853z00_1808 =
													(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_4306))->
													BgL_typez00);
											}
											BgL_auxz00_4304 =
												BGl_strictzd2nodezd2typez00zzast_nodez00(
												((BgL_typez00_bglt) BGl_za2bignumza2z00zztype_cachez00),
												BgL_arg1853z00_1808);
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1146z00_1807)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_4304), BUNSPEC);
									}
									{
										BgL_variablez00_bglt BgL_auxz00_4315;

										{	/* Cnst/alloc.scm 69 */
											obj_t BgL_sz00_2967;

											BgL_sz00_2967 = CDR(BgL_oldz00_1801);
											BgL_auxz00_4315 =
												((BgL_variablez00_bglt)
												STRUCT_REF(BgL_sz00_2967, (int) (((long) 1))));
										}
										((((BgL_varz00_bglt) COBJECT(BgL_new1146z00_1807))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) BgL_auxz00_4315), BUNSPEC);
									}
									return ((obj_t) BgL_new1146z00_1807);
								}
							else
								{	/* Cnst/alloc.scm 432 */
									if (
										(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 14))))
										{	/* Cnst/alloc.scm 439 */
											BgL_varz00_bglt BgL_new1148z00_1815;

											{	/* Cnst/alloc.scm 440 */
												BgL_varz00_bglt BgL_new1147z00_1820;

												BgL_new1147z00_1820 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 440 */
													long BgL_arg1866z00_1821;

													{	/* Cnst/alloc.scm 440 */
														long BgL_res2447z00_2969;

														BgL_res2447z00_2969 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1866z00_1821 = BgL_res2447z00_2969;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1147z00_1820),
														BgL_arg1866z00_1821);
												}
												BgL_new1148z00_1815 = BgL_new1147z00_1820;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1148z00_1815)))->
													BgL_locz00) = ((obj_t) BgL_locz00_47), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_4331;

												{	/* Cnst/alloc.scm 442 */
													BgL_typez00_bglt BgL_arg1861z00_1816;

													{
														BgL_variablez00_bglt BgL_auxz00_4333;

														{	/* Cnst/alloc.scm 69 */
															obj_t BgL_sz00_2973;

															BgL_sz00_2973 = CDR(BgL_oldz00_1801);
															BgL_auxz00_4333 =
																((BgL_variablez00_bglt)
																STRUCT_REF(BgL_sz00_2973, (int) (((long) 1))));
														}
														BgL_arg1861z00_1816 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_auxz00_4333))->BgL_typez00);
													}
													BgL_auxz00_4331 =
														BGl_strictzd2nodezd2typez00zzast_nodez00(
														((BgL_typez00_bglt)
															BGl_za2bignumza2z00zztype_cachez00),
														BgL_arg1861z00_1816);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1148z00_1815)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_4331), BUNSPEC);
											}
											{
												BgL_variablez00_bglt BgL_auxz00_4342;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_sz00_2976;

													BgL_sz00_2976 = CDR(BgL_oldz00_1801);
													BgL_auxz00_4342 =
														((BgL_variablez00_bglt)
														STRUCT_REF(BgL_sz00_2976, (int) (((long) 1))));
												}
												((((BgL_varz00_bglt) COBJECT(BgL_new1148z00_1815))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) BgL_auxz00_4342), BUNSPEC);
											}
											return ((obj_t) BgL_new1148z00_1815);
										}
									else
										{	/* Cnst/alloc.scm 445 */
											obj_t BgL_arg1868z00_1822;

											BgL_arg1868z00_1822 =
												STRUCT_REF(CDR(BgL_oldz00_1801), (int) (((long) 1)));
											return
												((obj_t)
												BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
												(BgL_arg1868z00_1822,
													BGl_za2bignumza2z00zztype_cachez00, BgL_locz00_47));
										}
								}
						}
					else
						{	/* Cnst/alloc.scm 450 */
							bool_t BgL_test2667z00_4354;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 450 */
									BgL_test2667z00_4354 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 450 */
									if (
										(STRING_LENGTH(BgL_bignumzd2aszd2stringz00_1802) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 451 */
											BgL_test2667z00_4354 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 451 */
											BgL_test2667z00_4354 =
												(STRING_REF(BgL_bignumzd2aszd2stringz00_1802,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_test2667z00_4354)
								{	/* Cnst/alloc.scm 450 */
									return BFALSE;
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_4363;

									{	/* Cnst/alloc.scm 421 */
										long BgL_offsetz00_1844;

										BgL_offsetz00_1844 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_bignumz00_46,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 424 */
											obj_t BgL_arg1888z00_1845;

											{	/* Cnst/alloc.scm 424 */
												obj_t BgL_arg1889z00_1846;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_2952;

													BgL_newz00_2952 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_4371;
														int BgL_tmpz00_4369;

														BgL_auxz00_4371 = BINT(BgL_offsetz00_1844);
														BgL_tmpz00_4369 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2952, BgL_tmpz00_4369,
															BgL_auxz00_4371);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_4374;

														BgL_tmpz00_4374 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2952, BgL_tmpz00_4374,
															BgL_bignumz00_46);
													}
													BgL_arg1889z00_1846 = BgL_newz00_2952;
												}
												BgL_arg1888z00_1845 =
													MAKE_YOUNG_PAIR(BgL_bignumz00_46,
													BgL_arg1889z00_1846);
											}
											BGl_za2bignumzd2envza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg1888z00_1845,
												BGl_za2bignumzd2envza2zd2zzcnst_allocz00);
										}
										BgL_auxz00_4363 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1844), BGl_za2bignumza2z00zztype_cachez00,
											BgL_locz00_47);
									}
									return ((obj_t) BgL_auxz00_4363);
								}
						}
				}
			}
		}

	}



/* &cnst-alloc-bignum */
	obj_t BGl_z62cnstzd2alloczd2bignumz62zzcnst_allocz00(obj_t BgL_envz00_3543,
		obj_t BgL_bignumz00_3544, obj_t BgL_locz00_3545)
	{
		{	/* Cnst/alloc.scm 415 */
			return
				BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(BgL_bignumz00_3544,
				BgL_locz00_3545);
		}

	}



/* cnst-alloc-procedure */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt
		BgL_procedurez00_48, obj_t BgL_locz00_49)
	{
		{	/* Cnst/alloc.scm 460 */
			{	/* Cnst/alloc.scm 461 */
				BgL_globalz00_bglt BgL_varz00_1849;

				{	/* Cnst/alloc.scm 461 */
					obj_t BgL_arg1892z00_1853;

					{	/* Cnst/alloc.scm 461 */
						obj_t BgL_arg1893z00_1854;

						BgL_arg1893z00_1854 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 21)));
						BgL_arg1892z00_1853 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg1893z00_1854,
							CNST_TABLE_REF(((long) 22)));
					}
					BgL_varz00_1849 =
						BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
						(BgL_arg1892z00_1853, BGl_za2moduleza2z00zzmodule_modulez00,
						((obj_t) BgL_procedurez00_48), CNST_TABLE_REF(((long) 23)),
						BgL_locz00_49);
				}
				{	/* Cnst/alloc.scm 466 */
					BgL_varz00_bglt BgL_new1150z00_1850;

					{	/* Cnst/alloc.scm 467 */
						BgL_varz00_bglt BgL_new1149z00_1851;

						BgL_new1149z00_1851 =
							((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_varz00_bgl))));
						{	/* Cnst/alloc.scm 467 */
							long BgL_arg1891z00_1852;

							{	/* Cnst/alloc.scm 467 */
								long BgL_res2453z00_2991;

								BgL_res2453z00_2991 = BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
								BgL_arg1891z00_1852 = BgL_res2453z00_2991;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1149z00_1851),
								BgL_arg1891z00_1852);
						}
						BgL_new1150z00_1850 = BgL_new1149z00_1851;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1150z00_1850)))->BgL_locz00) =
						((obj_t) BgL_locz00_49), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1150z00_1850)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_variablez00_bglt)
									COBJECT(((BgL_variablez00_bglt) BgL_varz00_1849)))->
								BgL_typez00)), BUNSPEC);
					((((BgL_varz00_bglt) COBJECT(BgL_new1150z00_1850))->BgL_variablez00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_varz00_1849)),
						BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_new1150z00_1850);
				}
			}
		}

	}



/* &cnst-alloc-procedure */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2procedurez62zzcnst_allocz00(obj_t
		BgL_envz00_3546, obj_t BgL_procedurez00_3547, obj_t BgL_locz00_3548)
	{
		{	/* Cnst/alloc.scm 460 */
			return
				BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(
				((BgL_nodez00_bglt) BgL_procedurez00_3547), BgL_locz00_3548);
		}

	}



/* cnst-alloc-l-procedure */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2lzd2procedurezd2zzcnst_allocz00(BgL_nodez00_bglt
		BgL_procedurez00_50, obj_t BgL_locz00_51)
	{
		{	/* Cnst/alloc.scm 474 */
			{	/* Cnst/alloc.scm 475 */
				BgL_globalz00_bglt BgL_varz00_1855;

				{	/* Cnst/alloc.scm 475 */
					obj_t BgL_arg1896z00_1859;

					{	/* Cnst/alloc.scm 475 */
						obj_t BgL_arg1897z00_1860;

						BgL_arg1897z00_1860 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 21)));
						BgL_arg1896z00_1859 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg1897z00_1860,
							CNST_TABLE_REF(((long) 22)));
					}
					BgL_varz00_1855 =
						BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
						(BgL_arg1896z00_1859, BGl_za2moduleza2z00zzmodule_modulez00,
						((obj_t) BgL_procedurez00_50), CNST_TABLE_REF(((long) 24)),
						BgL_locz00_51);
				}
				{	/* Cnst/alloc.scm 480 */
					BgL_varz00_bglt BgL_new1152z00_1856;

					{	/* Cnst/alloc.scm 481 */
						BgL_varz00_bglt BgL_new1151z00_1857;

						BgL_new1151z00_1857 =
							((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_varz00_bgl))));
						{	/* Cnst/alloc.scm 481 */
							long BgL_arg1895z00_1858;

							{	/* Cnst/alloc.scm 481 */
								long BgL_res2454z00_2996;

								BgL_res2454z00_2996 = BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
								BgL_arg1895z00_1858 = BgL_res2454z00_2996;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1151z00_1857),
								BgL_arg1895z00_1858);
						}
						BgL_new1152z00_1856 = BgL_new1151z00_1857;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1152z00_1856)))->BgL_locz00) =
						((obj_t) BgL_locz00_51), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1152z00_1856)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_variablez00_bglt)
									COBJECT(((BgL_variablez00_bglt) BgL_varz00_1855)))->
								BgL_typez00)), BUNSPEC);
					((((BgL_varz00_bglt) COBJECT(BgL_new1152z00_1856))->BgL_variablez00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_varz00_1855)),
						BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_new1152z00_1856);
				}
			}
		}

	}



/* &cnst-alloc-l-procedure */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2lzd2procedurezb0zzcnst_allocz00(obj_t
		BgL_envz00_3549, obj_t BgL_procedurez00_3550, obj_t BgL_locz00_3551)
	{
		{	/* Cnst/alloc.scm 474 */
			return
				BGl_cnstzd2alloczd2lzd2procedurezd2zzcnst_allocz00(
				((BgL_nodez00_bglt) BgL_procedurez00_3550), BgL_locz00_3551);
		}

	}



/* cnst-alloc-real */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t BgL_realz00_52,
		obj_t BgL_locz00_53)
	{
		{	/* Cnst/alloc.scm 488 */
			{

				{	/* Cnst/alloc.scm 510 */
					obj_t BgL_oldz00_1863;

					{
						obj_t BgL_listz00_1877;

						BgL_listz00_1877 = BGl_za2realzd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza31906ze3z87_1878:
						if (NULLP(BgL_listz00_1877))
							{	/* Cnst/alloc.scm 503 */
								BgL_oldz00_1863 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 505 */
								bool_t BgL_test2671z00_4429;

								{	/* Cnst/alloc.scm 505 */
									bool_t BgL_test2672z00_4430;

									{	/* Cnst/alloc.scm 505 */
										double BgL_tmpz00_4431;

										{	/* Cnst/alloc.scm 505 */
											obj_t BgL_pairz00_3007;

											BgL_pairz00_3007 = CAR(((obj_t) BgL_listz00_1877));
											BgL_tmpz00_4431 = REAL_TO_DOUBLE(CAR(BgL_pairz00_3007));
										}
										BgL_test2672z00_4430 =
											(BgL_tmpz00_4431 == REAL_TO_DOUBLE(BgL_realz00_52));
									}
									if (BgL_test2672z00_4430)
										{	/* Cnst/alloc.scm 506 */
											long BgL_tmpz00_4438;

											{	/* Cnst/alloc.scm 506 */
												double BgL_tmpz00_4439;

												{	/* Cnst/alloc.scm 506 */
													obj_t BgL_pairz00_3012;

													BgL_pairz00_3012 = CAR(((obj_t) BgL_listz00_1877));
													BgL_tmpz00_4439 =
														REAL_TO_DOUBLE(CAR(BgL_pairz00_3012));
												}
												BgL_tmpz00_4438 = BGL_SIGNBIT(BgL_tmpz00_4439);
											}
											BgL_test2671z00_4429 =
												(BgL_tmpz00_4438 ==
												BGL_SIGNBIT(REAL_TO_DOUBLE(BgL_realz00_52)));
										}
									else
										{	/* Cnst/alloc.scm 505 */
											BgL_test2671z00_4429 = ((bool_t) 0);
										}
								}
								if (BgL_test2671z00_4429)
									{	/* Cnst/alloc.scm 507 */
										obj_t BgL_pairz00_3021;

										BgL_pairz00_3021 = CAR(((obj_t) BgL_listz00_1877));
										BgL_oldz00_1863 = CDR(BgL_pairz00_3021);
									}
								else
									{
										obj_t BgL_listz00_4451;

										BgL_listz00_4451 = CDR(((obj_t) BgL_listz00_1877));
										BgL_listz00_1877 = BgL_listz00_4451;
										goto BgL_zc3z04anonymousza31906ze3z87_1878;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1863))
						{	/* Cnst/alloc.scm 513 */
							BgL_varz00_bglt BgL_new1157z00_1864;

							{	/* Cnst/alloc.scm 514 */
								BgL_varz00_bglt BgL_new1156z00_1865;

								BgL_new1156z00_1865 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 514 */
									long BgL_arg1898z00_1866;

									{	/* Cnst/alloc.scm 514 */
										long BgL_res2461z00_3024;

										BgL_res2461z00_3024 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1898z00_1866 = BgL_res2461z00_3024;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1156z00_1865),
										BgL_arg1898z00_1866);
								}
								BgL_new1157z00_1864 = BgL_new1156z00_1865;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1157z00_1864)))->BgL_locz00) =
								((obj_t) BgL_locz00_53), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1157z00_1864)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_1863)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1157z00_1864))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_1863)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1157z00_1864);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4469;

							{	/* Cnst/alloc.scm 490 */
								BgL_globalz00_bglt BgL_varz00_1868;

								{	/* Cnst/alloc.scm 490 */
									obj_t BgL_arg1903z00_1873;

									{	/* Cnst/alloc.scm 490 */
										obj_t BgL_arg1904z00_1874;

										BgL_arg1904z00_1874 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													25)));
										BgL_arg1903z00_1873 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1904z00_1874, CNST_TABLE_REF(((long) 25)));
									}
									BgL_varz00_1868 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1903z00_1873, BGl_za2moduleza2z00zzmodule_modulez00,
										BgL_realz00_52, CNST_TABLE_REF(((long) 26)), BgL_locz00_53);
								}
								{	/* Cnst/alloc.scm 495 */
									obj_t BgL_arg1901z00_1869;

									BgL_arg1901z00_1869 =
										MAKE_YOUNG_PAIR(BgL_realz00_52, ((obj_t) BgL_varz00_1868));
									BGl_za2realzd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1901z00_1869,
										BGl_za2realzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 496 */
									BgL_varz00_bglt BgL_new1154z00_1870;

									{	/* Cnst/alloc.scm 497 */
										BgL_varz00_bglt BgL_new1153z00_1871;

										BgL_new1153z00_1871 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 497 */
											long BgL_arg1902z00_1872;

											{	/* Cnst/alloc.scm 497 */
												long BgL_res2455z00_3001;

												BgL_res2455z00_3001 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1902z00_1872 = BgL_res2455z00_3001;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1153z00_1871),
												BgL_arg1902z00_1872);
										}
										BgL_new1154z00_1870 = BgL_new1153z00_1871;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1154z00_1870)))->
											BgL_locz00) = ((obj_t) BgL_locz00_53), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1154z00_1870)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_1868)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1154z00_1870))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1868)), BUNSPEC);
									BgL_auxz00_4469 = BgL_new1154z00_1870;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4469);
						}
				}
			}
		}

	}



/* &cnst-alloc-real */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2realz62zzcnst_allocz00(obj_t
		BgL_envz00_3552, obj_t BgL_realz00_3553, obj_t BgL_locz00_3554)
	{
		{	/* Cnst/alloc.scm 488 */
			return
				BGl_cnstzd2alloczd2realz00zzcnst_allocz00(BgL_realz00_3553,
				BgL_locz00_3554);
		}

	}



/* cnst-alloc-elong */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long BgL_elongz00_54,
		obj_t BgL_locz00_55)
	{
		{	/* Cnst/alloc.scm 523 */
			{

				{	/* Cnst/alloc.scm 544 */
					obj_t BgL_oldz00_1904;

					{
						obj_t BgL_listz00_1918;

						BgL_listz00_1918 = BGl_za2elongzd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza31934ze3z87_1919:
						if (NULLP(BgL_listz00_1918))
							{	/* Cnst/alloc.scm 538 */
								BgL_oldz00_1904 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 540 */
								bool_t BgL_test2675z00_4495;

								{	/* Cnst/alloc.scm 540 */
									long BgL_n1z00_3036;

									{	/* Cnst/alloc.scm 540 */
										obj_t BgL_pairz00_3035;

										BgL_pairz00_3035 = CAR(((obj_t) BgL_listz00_1918));
										{	/* Cnst/alloc.scm 540 */
											obj_t BgL_tmpz00_4498;

											BgL_tmpz00_4498 = CAR(BgL_pairz00_3035);
											BgL_n1z00_3036 = BELONG_TO_LONG(BgL_tmpz00_4498);
									}}
									BgL_test2675z00_4495 = (BgL_n1z00_3036 == BgL_elongz00_54);
								}
								if (BgL_test2675z00_4495)
									{	/* Cnst/alloc.scm 541 */
										obj_t BgL_pairz00_3040;

										BgL_pairz00_3040 = CAR(((obj_t) BgL_listz00_1918));
										BgL_oldz00_1904 = CDR(BgL_pairz00_3040);
									}
								else
									{
										obj_t BgL_listz00_4505;

										BgL_listz00_4505 = CDR(((obj_t) BgL_listz00_1918));
										BgL_listz00_1918 = BgL_listz00_4505;
										goto BgL_zc3z04anonymousza31934ze3z87_1919;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1904))
						{	/* Cnst/alloc.scm 547 */
							BgL_varz00_bglt BgL_new1161z00_1905;

							{	/* Cnst/alloc.scm 548 */
								BgL_varz00_bglt BgL_new1160z00_1906;

								BgL_new1160z00_1906 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 548 */
									long BgL_arg1927z00_1907;

									{	/* Cnst/alloc.scm 548 */
										long BgL_res2465z00_3043;

										BgL_res2465z00_3043 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1927z00_1907 = BgL_res2465z00_3043;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1160z00_1906),
										BgL_arg1927z00_1907);
								}
								BgL_new1161z00_1905 = BgL_new1160z00_1906;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1161z00_1905)))->BgL_locz00) =
								((obj_t) BgL_locz00_55), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1161z00_1905)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_1904)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1161z00_1905))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_1904)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1161z00_1905);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4523;

							{	/* Cnst/alloc.scm 525 */
								BgL_globalz00_bglt BgL_varz00_1909;

								{	/* Cnst/alloc.scm 525 */
									obj_t BgL_arg1931z00_1914;

									{	/* Cnst/alloc.scm 525 */
										obj_t BgL_arg1932z00_1915;

										BgL_arg1932z00_1915 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													27)));
										BgL_arg1931z00_1914 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1932z00_1915, CNST_TABLE_REF(((long) 28)));
									}
									BgL_varz00_1909 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1931z00_1914, BGl_za2moduleza2z00zzmodule_modulez00,
										make_belong(BgL_elongz00_54), CNST_TABLE_REF(((long) 29)),
										BgL_locz00_55);
								}
								{	/* Cnst/alloc.scm 530 */
									obj_t BgL_arg1929z00_1910;

									BgL_arg1929z00_1910 =
										MAKE_YOUNG_PAIR(make_belong(BgL_elongz00_54),
										((obj_t) BgL_varz00_1909));
									BGl_za2elongzd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1929z00_1910,
										BGl_za2elongzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 531 */
									BgL_varz00_bglt BgL_new1159z00_1911;

									{	/* Cnst/alloc.scm 532 */
										BgL_varz00_bglt BgL_new1158z00_1912;

										BgL_new1158z00_1912 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 532 */
											long BgL_arg1930z00_1913;

											{	/* Cnst/alloc.scm 532 */
												long BgL_res2462z00_3029;

												BgL_res2462z00_3029 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1930z00_1913 = BgL_res2462z00_3029;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1158z00_1912),
												BgL_arg1930z00_1913);
										}
										BgL_new1159z00_1911 = BgL_new1158z00_1912;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1159z00_1911)))->
											BgL_locz00) = ((obj_t) BgL_locz00_55), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1159z00_1911)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_1909)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1159z00_1911))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1909)), BUNSPEC);
									BgL_auxz00_4523 = BgL_new1159z00_1911;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4523);
						}
				}
			}
		}

	}



/* &cnst-alloc-elong */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2elongz62zzcnst_allocz00(obj_t
		BgL_envz00_3555, obj_t BgL_elongz00_3556, obj_t BgL_locz00_3557)
	{
		{	/* Cnst/alloc.scm 523 */
			return
				BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(BELONG_TO_LONG
				(BgL_elongz00_3556), BgL_locz00_3557);
		}

	}



/* cnst-alloc-llong */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T BgL_llongz00_56,
		obj_t BgL_locz00_57)
	{
		{	/* Cnst/alloc.scm 557 */
			{

				{	/* Cnst/alloc.scm 578 */
					obj_t BgL_oldz00_1933;

					{
						obj_t BgL_listz00_1947;

						BgL_listz00_1947 = BGl_za2llongzd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza31950ze3z87_1948:
						if (NULLP(BgL_listz00_1947))
							{	/* Cnst/alloc.scm 572 */
								BgL_oldz00_1933 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 574 */
								bool_t BgL_test2678z00_4552;

								{	/* Cnst/alloc.scm 574 */
									BGL_LONGLONG_T BgL_tmpz00_4553;

									{	/* Cnst/alloc.scm 574 */
										obj_t BgL_pairz00_3054;

										BgL_pairz00_3054 = CAR(((obj_t) BgL_listz00_1947));
										BgL_tmpz00_4553 = BLLONG_TO_LLONG(CAR(BgL_pairz00_3054));
									}
									BgL_test2678z00_4552 = (BgL_tmpz00_4553 == BgL_llongz00_56);
								}
								if (BgL_test2678z00_4552)
									{	/* Cnst/alloc.scm 575 */
										obj_t BgL_pairz00_3059;

										BgL_pairz00_3059 = CAR(((obj_t) BgL_listz00_1947));
										BgL_oldz00_1933 = CDR(BgL_pairz00_3059);
									}
								else
									{
										obj_t BgL_listz00_4562;

										BgL_listz00_4562 = CDR(((obj_t) BgL_listz00_1947));
										BgL_listz00_1947 = BgL_listz00_4562;
										goto BgL_zc3z04anonymousza31950ze3z87_1948;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1933))
						{	/* Cnst/alloc.scm 581 */
							BgL_varz00_bglt BgL_new1165z00_1934;

							{	/* Cnst/alloc.scm 582 */
								BgL_varz00_bglt BgL_new1164z00_1935;

								BgL_new1164z00_1935 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 582 */
									long BgL_arg1943z00_1936;

									{	/* Cnst/alloc.scm 582 */
										long BgL_res2469z00_3062;

										BgL_res2469z00_3062 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1943z00_1936 = BgL_res2469z00_3062;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1164z00_1935),
										BgL_arg1943z00_1936);
								}
								BgL_new1165z00_1934 = BgL_new1164z00_1935;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1165z00_1934)))->BgL_locz00) =
								((obj_t) BgL_locz00_57), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1165z00_1934)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_1933)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1165z00_1934))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_1933)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1165z00_1934);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4580;

							{	/* Cnst/alloc.scm 559 */
								BgL_globalz00_bglt BgL_varz00_1938;

								{	/* Cnst/alloc.scm 559 */
									obj_t BgL_arg1947z00_1943;

									{	/* Cnst/alloc.scm 559 */
										obj_t BgL_arg1948z00_1944;

										BgL_arg1948z00_1944 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													30)));
										BgL_arg1947z00_1943 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1948z00_1944, CNST_TABLE_REF(((long) 31)));
									}
									BgL_varz00_1938 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1947z00_1943, BGl_za2moduleza2z00zzmodule_modulez00,
										make_bllong(BgL_llongz00_56), CNST_TABLE_REF(((long) 32)),
										BgL_locz00_57);
								}
								{	/* Cnst/alloc.scm 564 */
									obj_t BgL_arg1945z00_1939;

									BgL_arg1945z00_1939 =
										MAKE_YOUNG_PAIR(make_bllong(BgL_llongz00_56),
										((obj_t) BgL_varz00_1938));
									BGl_za2llongzd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1945z00_1939,
										BGl_za2llongzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 565 */
									BgL_varz00_bglt BgL_new1163z00_1940;

									{	/* Cnst/alloc.scm 566 */
										BgL_varz00_bglt BgL_new1162z00_1941;

										BgL_new1162z00_1941 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 566 */
											long BgL_arg1946z00_1942;

											{	/* Cnst/alloc.scm 566 */
												long BgL_res2466z00_3048;

												BgL_res2466z00_3048 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1946z00_1942 = BgL_res2466z00_3048;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1162z00_1941),
												BgL_arg1946z00_1942);
										}
										BgL_new1163z00_1940 = BgL_new1162z00_1941;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1163z00_1940)))->
											BgL_locz00) = ((obj_t) BgL_locz00_57), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1163z00_1940)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_1938)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1163z00_1940))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1938)), BUNSPEC);
									BgL_auxz00_4580 = BgL_new1163z00_1940;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4580);
						}
				}
			}
		}

	}



/* &cnst-alloc-llong */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2llongz62zzcnst_allocz00(obj_t
		BgL_envz00_3558, obj_t BgL_llongz00_3559, obj_t BgL_locz00_3560)
	{
		{	/* Cnst/alloc.scm 557 */
			return
				BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BLLONG_TO_LLONG
				(BgL_llongz00_3559), BgL_locz00_3560);
		}

	}



/* cnst-alloc-int32 */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2int32z00zzcnst_allocz00(int32_t BgL_int32z00_58,
		obj_t BgL_locz00_59)
	{
		{	/* Cnst/alloc.scm 591 */
			{

				{	/* Cnst/alloc.scm 612 */
					obj_t BgL_oldz00_1962;

					{
						obj_t BgL_listz00_1976;

						BgL_listz00_1976 = BGl_za2int32zd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza31966ze3z87_1977:
						if (NULLP(BgL_listz00_1976))
							{	/* Cnst/alloc.scm 606 */
								BgL_oldz00_1962 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 608 */
								bool_t BgL_test2681z00_4609;

								{	/* Cnst/alloc.scm 608 */
									obj_t BgL_arg1973z00_1984;

									{	/* Cnst/alloc.scm 608 */
										obj_t BgL_pairz00_3073;

										BgL_pairz00_3073 = CAR(((obj_t) BgL_listz00_1976));
										BgL_arg1973z00_1984 = CAR(BgL_pairz00_3073);
									}
									{	/* Cnst/alloc.scm 608 */
										bool_t BgL_res2472z00_3076;

										{	/* Cnst/alloc.scm 608 */
											int32_t BgL_n1z00_3074;

											BgL_n1z00_3074 = BGL_BINT32_TO_INT32(BgL_arg1973z00_1984);
											BgL_res2472z00_3076 = (BgL_n1z00_3074 == BgL_int32z00_58);
										}
										BgL_test2681z00_4609 = BgL_res2472z00_3076;
									}
								}
								if (BgL_test2681z00_4609)
									{	/* Cnst/alloc.scm 609 */
										obj_t BgL_pairz00_3078;

										BgL_pairz00_3078 = CAR(((obj_t) BgL_listz00_1976));
										BgL_oldz00_1962 = CDR(BgL_pairz00_3078);
									}
								else
									{
										obj_t BgL_listz00_4618;

										BgL_listz00_4618 = CDR(((obj_t) BgL_listz00_1976));
										BgL_listz00_1976 = BgL_listz00_4618;
										goto BgL_zc3z04anonymousza31966ze3z87_1977;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1962))
						{	/* Cnst/alloc.scm 615 */
							BgL_varz00_bglt BgL_new1169z00_1963;

							{	/* Cnst/alloc.scm 616 */
								BgL_varz00_bglt BgL_new1168z00_1964;

								BgL_new1168z00_1964 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 616 */
									long BgL_arg1959z00_1965;

									{	/* Cnst/alloc.scm 616 */
										long BgL_res2473z00_3081;

										BgL_res2473z00_3081 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1959z00_1965 = BgL_res2473z00_3081;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1168z00_1964),
										BgL_arg1959z00_1965);
								}
								BgL_new1169z00_1963 = BgL_new1168z00_1964;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1169z00_1963)))->BgL_locz00) =
								((obj_t) BgL_locz00_59), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1169z00_1963)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_1962)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1169z00_1963))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_1962)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1169z00_1963);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4636;

							{	/* Cnst/alloc.scm 593 */
								BgL_globalz00_bglt BgL_varz00_1967;

								{	/* Cnst/alloc.scm 593 */
									obj_t BgL_arg1963z00_1972;

									{	/* Cnst/alloc.scm 593 */
										obj_t BgL_arg1964z00_1973;

										BgL_arg1964z00_1973 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													33)));
										BgL_arg1963z00_1972 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1964z00_1973, CNST_TABLE_REF(((long) 34)));
									}
									BgL_varz00_1967 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1963z00_1972, BGl_za2moduleza2z00zzmodule_modulez00,
										BGL_INT32_TO_BINT32(BgL_int32z00_58),
										CNST_TABLE_REF(((long) 35)), BgL_locz00_59);
								}
								{	/* Cnst/alloc.scm 598 */
									obj_t BgL_arg1961z00_1968;

									BgL_arg1961z00_1968 =
										MAKE_YOUNG_PAIR(BGL_INT32_TO_BINT32(BgL_int32z00_58),
										((obj_t) BgL_varz00_1967));
									BGl_za2int32zd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1961z00_1968,
										BGl_za2int32zd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 599 */
									BgL_varz00_bglt BgL_new1167z00_1969;

									{	/* Cnst/alloc.scm 600 */
										BgL_varz00_bglt BgL_new1166z00_1970;

										BgL_new1166z00_1970 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 600 */
											long BgL_arg1962z00_1971;

											{	/* Cnst/alloc.scm 600 */
												long BgL_res2470z00_3067;

												BgL_res2470z00_3067 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1962z00_1971 = BgL_res2470z00_3067;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1166z00_1970),
												BgL_arg1962z00_1971);
										}
										BgL_new1167z00_1969 = BgL_new1166z00_1970;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1167z00_1969)))->
											BgL_locz00) = ((obj_t) BgL_locz00_59), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1167z00_1969)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_1967)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1167z00_1969))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1967)), BUNSPEC);
									BgL_auxz00_4636 = BgL_new1167z00_1969;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4636);
						}
				}
			}
		}

	}



/* &cnst-alloc-int32 */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2int32z62zzcnst_allocz00(obj_t
		BgL_envz00_3561, obj_t BgL_int32z00_3562, obj_t BgL_locz00_3563)
	{
		{	/* Cnst/alloc.scm 591 */
			return
				BGl_cnstzd2alloczd2int32z00zzcnst_allocz00(BGL_BINT32_TO_INT32
				(BgL_int32z00_3562), BgL_locz00_3563);
		}

	}



/* cnst-alloc-uint32 */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2uint32z00zzcnst_allocz00(uint32_t BgL_uint32z00_60,
		obj_t BgL_locz00_61)
	{
		{	/* Cnst/alloc.scm 625 */
			{

				{	/* Cnst/alloc.scm 646 */
					obj_t BgL_oldz00_1991;

					{
						obj_t BgL_listz00_2005;

						BgL_listz00_2005 = BGl_za2uint32zd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza31983ze3z87_2006:
						if (NULLP(BgL_listz00_2005))
							{	/* Cnst/alloc.scm 640 */
								BgL_oldz00_1991 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 642 */
								bool_t BgL_test2684z00_4665;

								{	/* Cnst/alloc.scm 642 */
									obj_t BgL_arg1990z00_2013;

									{	/* Cnst/alloc.scm 642 */
										obj_t BgL_pairz00_3092;

										BgL_pairz00_3092 = CAR(((obj_t) BgL_listz00_2005));
										BgL_arg1990z00_2013 = CAR(BgL_pairz00_3092);
									}
									{	/* Cnst/alloc.scm 642 */
										bool_t BgL_res2476z00_3095;

										{	/* Cnst/alloc.scm 642 */
											uint32_t BgL_n1z00_3093;

											BgL_n1z00_3093 =
												BGL_BUINT32_TO_UINT32(BgL_arg1990z00_2013);
											BgL_res2476z00_3095 =
												(BgL_n1z00_3093 == BgL_uint32z00_60);
										}
										BgL_test2684z00_4665 = BgL_res2476z00_3095;
									}
								}
								if (BgL_test2684z00_4665)
									{	/* Cnst/alloc.scm 643 */
										obj_t BgL_pairz00_3097;

										BgL_pairz00_3097 = CAR(((obj_t) BgL_listz00_2005));
										BgL_oldz00_1991 = CDR(BgL_pairz00_3097);
									}
								else
									{
										obj_t BgL_listz00_4674;

										BgL_listz00_4674 = CDR(((obj_t) BgL_listz00_2005));
										BgL_listz00_2005 = BgL_listz00_4674;
										goto BgL_zc3z04anonymousza31983ze3z87_2006;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1991))
						{	/* Cnst/alloc.scm 649 */
							BgL_varz00_bglt BgL_new1173z00_1992;

							{	/* Cnst/alloc.scm 650 */
								BgL_varz00_bglt BgL_new1172z00_1993;

								BgL_new1172z00_1993 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 650 */
									long BgL_arg1975z00_1994;

									{	/* Cnst/alloc.scm 650 */
										long BgL_res2477z00_3100;

										BgL_res2477z00_3100 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1975z00_1994 = BgL_res2477z00_3100;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1172z00_1993),
										BgL_arg1975z00_1994);
								}
								BgL_new1173z00_1992 = BgL_new1172z00_1993;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1173z00_1992)))->BgL_locz00) =
								((obj_t) BgL_locz00_61), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1173z00_1992)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_1991)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1173z00_1992))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_1991)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1173z00_1992);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4692;

							{	/* Cnst/alloc.scm 627 */
								BgL_globalz00_bglt BgL_varz00_1996;

								{	/* Cnst/alloc.scm 627 */
									obj_t BgL_arg1980z00_2001;

									{	/* Cnst/alloc.scm 627 */
										obj_t BgL_arg1981z00_2002;

										BgL_arg1981z00_2002 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													36)));
										BgL_arg1980z00_2001 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1981z00_2002, CNST_TABLE_REF(((long) 37)));
									}
									BgL_varz00_1996 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1980z00_2001, BGl_za2moduleza2z00zzmodule_modulez00,
										BGL_UINT32_TO_BUINT32(BgL_uint32z00_60),
										CNST_TABLE_REF(((long) 38)), BgL_locz00_61);
								}
								{	/* Cnst/alloc.scm 632 */
									obj_t BgL_arg1977z00_1997;

									BgL_arg1977z00_1997 =
										MAKE_YOUNG_PAIR(BGL_UINT32_TO_BUINT32(BgL_uint32z00_60),
										((obj_t) BgL_varz00_1996));
									BGl_za2uint32zd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1977z00_1997,
										BGl_za2uint32zd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 633 */
									BgL_varz00_bglt BgL_new1171z00_1998;

									{	/* Cnst/alloc.scm 634 */
										BgL_varz00_bglt BgL_new1170z00_1999;

										BgL_new1170z00_1999 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 634 */
											long BgL_arg1979z00_2000;

											{	/* Cnst/alloc.scm 634 */
												long BgL_res2474z00_3086;

												BgL_res2474z00_3086 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1979z00_2000 = BgL_res2474z00_3086;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1170z00_1999),
												BgL_arg1979z00_2000);
										}
										BgL_new1171z00_1998 = BgL_new1170z00_1999;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1171z00_1998)))->
											BgL_locz00) = ((obj_t) BgL_locz00_61), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1171z00_1998)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_1996)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1171z00_1998))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_1996)), BUNSPEC);
									BgL_auxz00_4692 = BgL_new1171z00_1998;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4692);
						}
				}
			}
		}

	}



/* &cnst-alloc-uint32 */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2uint32z62zzcnst_allocz00(obj_t
		BgL_envz00_3564, obj_t BgL_uint32z00_3565, obj_t BgL_locz00_3566)
	{
		{	/* Cnst/alloc.scm 625 */
			return
				BGl_cnstzd2alloczd2uint32z00zzcnst_allocz00(BGL_BUINT32_TO_UINT32
				(BgL_uint32z00_3565), BgL_locz00_3566);
		}

	}



/* cnst-alloc-int64 */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2int64z00zzcnst_allocz00(int64_t BgL_int64z00_62,
		obj_t BgL_locz00_63)
	{
		{	/* Cnst/alloc.scm 659 */
			{

				{	/* Cnst/alloc.scm 680 */
					obj_t BgL_oldz00_2020;

					{
						obj_t BgL_listz00_2034;

						BgL_listz00_2034 = BGl_za2int64zd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza32000ze3z87_2035:
						if (NULLP(BgL_listz00_2034))
							{	/* Cnst/alloc.scm 674 */
								BgL_oldz00_2020 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 676 */
								bool_t BgL_test2687z00_4721;

								{	/* Cnst/alloc.scm 676 */
									obj_t BgL_arg2008z00_2042;

									{	/* Cnst/alloc.scm 676 */
										obj_t BgL_pairz00_3111;

										BgL_pairz00_3111 = CAR(((obj_t) BgL_listz00_2034));
										BgL_arg2008z00_2042 = CAR(BgL_pairz00_3111);
									}
									{	/* Cnst/alloc.scm 676 */
										bool_t BgL_res2480z00_3114;

										{	/* Cnst/alloc.scm 676 */
											int64_t BgL_n1z00_3112;

											BgL_n1z00_3112 = BGL_BINT64_TO_INT64(BgL_arg2008z00_2042);
											BgL_res2480z00_3114 = (BgL_n1z00_3112 == BgL_int64z00_62);
										}
										BgL_test2687z00_4721 = BgL_res2480z00_3114;
									}
								}
								if (BgL_test2687z00_4721)
									{	/* Cnst/alloc.scm 677 */
										obj_t BgL_pairz00_3116;

										BgL_pairz00_3116 = CAR(((obj_t) BgL_listz00_2034));
										BgL_oldz00_2020 = CDR(BgL_pairz00_3116);
									}
								else
									{
										obj_t BgL_listz00_4730;

										BgL_listz00_4730 = CDR(((obj_t) BgL_listz00_2034));
										BgL_listz00_2034 = BgL_listz00_4730;
										goto BgL_zc3z04anonymousza32000ze3z87_2035;
									}
							}
					}
					if (CBOOL(BgL_oldz00_2020))
						{	/* Cnst/alloc.scm 683 */
							BgL_varz00_bglt BgL_new1177z00_2021;

							{	/* Cnst/alloc.scm 684 */
								BgL_varz00_bglt BgL_new1176z00_2022;

								BgL_new1176z00_2022 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 684 */
									long BgL_arg1992z00_2023;

									{	/* Cnst/alloc.scm 684 */
										long BgL_res2481z00_3119;

										BgL_res2481z00_3119 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg1992z00_2023 = BgL_res2481z00_3119;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1176z00_2022),
										BgL_arg1992z00_2023);
								}
								BgL_new1177z00_2021 = BgL_new1176z00_2022;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1177z00_2021)))->BgL_locz00) =
								((obj_t) BgL_locz00_63), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1177z00_2021)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_2020)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1177z00_2021))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_2020)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1177z00_2021);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4748;

							{	/* Cnst/alloc.scm 661 */
								BgL_globalz00_bglt BgL_varz00_2025;

								{	/* Cnst/alloc.scm 661 */
									obj_t BgL_arg1997z00_2030;

									{	/* Cnst/alloc.scm 661 */
										obj_t BgL_arg1998z00_2031;

										BgL_arg1998z00_2031 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													39)));
										BgL_arg1997z00_2030 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1998z00_2031, CNST_TABLE_REF(((long) 40)));
									}
									BgL_varz00_2025 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg1997z00_2030, BGl_za2moduleza2z00zzmodule_modulez00,
										BGL_INT64_TO_BINT64(BgL_int64z00_62),
										CNST_TABLE_REF(((long) 41)), BgL_locz00_63);
								}
								{	/* Cnst/alloc.scm 666 */
									obj_t BgL_arg1995z00_2026;

									BgL_arg1995z00_2026 =
										MAKE_YOUNG_PAIR(BGL_INT64_TO_BINT64(BgL_int64z00_62),
										((obj_t) BgL_varz00_2025));
									BGl_za2int64zd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg1995z00_2026,
										BGl_za2int64zd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 667 */
									BgL_varz00_bglt BgL_new1175z00_2027;

									{	/* Cnst/alloc.scm 668 */
										BgL_varz00_bglt BgL_new1174z00_2028;

										BgL_new1174z00_2028 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 668 */
											long BgL_arg1996z00_2029;

											{	/* Cnst/alloc.scm 668 */
												long BgL_res2478z00_3105;

												BgL_res2478z00_3105 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg1996z00_2029 = BgL_res2478z00_3105;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1174z00_2028),
												BgL_arg1996z00_2029);
										}
										BgL_new1175z00_2027 = BgL_new1174z00_2028;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1175z00_2027)))->
											BgL_locz00) = ((obj_t) BgL_locz00_63), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1175z00_2027)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_2025)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1175z00_2027))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_2025)), BUNSPEC);
									BgL_auxz00_4748 = BgL_new1175z00_2027;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4748);
						}
				}
			}
		}

	}



/* &cnst-alloc-int64 */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2int64z62zzcnst_allocz00(obj_t
		BgL_envz00_3567, obj_t BgL_int64z00_3568, obj_t BgL_locz00_3569)
	{
		{	/* Cnst/alloc.scm 659 */
			return
				BGl_cnstzd2alloczd2int64z00zzcnst_allocz00(BGL_BINT64_TO_INT64
				(BgL_int64z00_3568), BgL_locz00_3569);
		}

	}



/* cnst-alloc-uint64 */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2uint64z00zzcnst_allocz00(uint64_t BgL_uint64z00_64,
		obj_t BgL_locz00_65)
	{
		{	/* Cnst/alloc.scm 693 */
			{

				{	/* Cnst/alloc.scm 714 */
					obj_t BgL_oldz00_2049;

					{
						obj_t BgL_listz00_2063;

						BgL_listz00_2063 = BGl_za2uint64zd2envza2zd2zzcnst_allocz00;
					BgL_zc3z04anonymousza32019ze3z87_2064:
						if (NULLP(BgL_listz00_2063))
							{	/* Cnst/alloc.scm 708 */
								BgL_oldz00_2049 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 710 */
								bool_t BgL_test2690z00_4777;

								{	/* Cnst/alloc.scm 710 */
									obj_t BgL_arg2029z00_2071;

									{	/* Cnst/alloc.scm 710 */
										obj_t BgL_pairz00_3130;

										BgL_pairz00_3130 = CAR(((obj_t) BgL_listz00_2063));
										BgL_arg2029z00_2071 = CAR(BgL_pairz00_3130);
									}
									{	/* Cnst/alloc.scm 710 */
										bool_t BgL_res2484z00_3133;

										{	/* Cnst/alloc.scm 710 */
											uint64_t BgL_n1z00_3131;

											BgL_n1z00_3131 = BGL_BINT64_TO_INT64(BgL_arg2029z00_2071);
											BgL_res2484z00_3133 =
												(BgL_n1z00_3131 == BgL_uint64z00_64);
										}
										BgL_test2690z00_4777 = BgL_res2484z00_3133;
									}
								}
								if (BgL_test2690z00_4777)
									{	/* Cnst/alloc.scm 711 */
										obj_t BgL_pairz00_3135;

										BgL_pairz00_3135 = CAR(((obj_t) BgL_listz00_2063));
										BgL_oldz00_2049 = CDR(BgL_pairz00_3135);
									}
								else
									{
										obj_t BgL_listz00_4786;

										BgL_listz00_4786 = CDR(((obj_t) BgL_listz00_2063));
										BgL_listz00_2063 = BgL_listz00_4786;
										goto BgL_zc3z04anonymousza32019ze3z87_2064;
									}
							}
					}
					if (CBOOL(BgL_oldz00_2049))
						{	/* Cnst/alloc.scm 717 */
							BgL_varz00_bglt BgL_new1183z00_2050;

							{	/* Cnst/alloc.scm 718 */
								BgL_varz00_bglt BgL_new1181z00_2051;

								BgL_new1181z00_2051 =
									((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_varz00_bgl))));
								{	/* Cnst/alloc.scm 718 */
									long BgL_arg2011z00_2052;

									{	/* Cnst/alloc.scm 718 */
										long BgL_res2485z00_3138;

										BgL_res2485z00_3138 =
											BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
										BgL_arg2011z00_2052 = BgL_res2485z00_3138;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1181z00_2051),
										BgL_arg2011z00_2052);
								}
								BgL_new1183z00_2050 = BgL_new1181z00_2051;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1183z00_2050)))->BgL_locz00) =
								((obj_t) BgL_locz00_65), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1183z00_2050)))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT(((BgL_variablez00_bglt) BgL_oldz00_2049)))->
										BgL_typez00)), BUNSPEC);
							((((BgL_varz00_bglt) COBJECT(BgL_new1183z00_2050))->
									BgL_variablez00) =
								((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
										BgL_oldz00_2049)), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1183z00_2050);
						}
					else
						{
							BgL_varz00_bglt BgL_auxz00_4804;

							{	/* Cnst/alloc.scm 695 */
								BgL_globalz00_bglt BgL_varz00_2054;

								{	/* Cnst/alloc.scm 695 */
									obj_t BgL_arg2016z00_2059;

									{	/* Cnst/alloc.scm 695 */
										obj_t BgL_arg2017z00_2060;

										BgL_arg2017z00_2060 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													42)));
										BgL_arg2016z00_2059 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg2017z00_2060, CNST_TABLE_REF(((long) 43)));
									}
									BgL_varz00_2054 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg2016z00_2059, BGl_za2moduleza2z00zzmodule_modulez00,
										BGL_UINT64_TO_BUINT64(BgL_uint64z00_64),
										CNST_TABLE_REF(((long) 44)), BgL_locz00_65);
								}
								{	/* Cnst/alloc.scm 700 */
									obj_t BgL_arg2013z00_2055;

									BgL_arg2013z00_2055 =
										MAKE_YOUNG_PAIR(BGL_UINT64_TO_BUINT64(BgL_uint64z00_64),
										((obj_t) BgL_varz00_2054));
									BGl_za2uint64zd2envza2zd2zzcnst_allocz00 =
										MAKE_YOUNG_PAIR(BgL_arg2013z00_2055,
										BGl_za2uint64zd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 701 */
									BgL_varz00_bglt BgL_new1180z00_2056;

									{	/* Cnst/alloc.scm 702 */
										BgL_varz00_bglt BgL_new1178z00_2057;

										BgL_new1178z00_2057 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 702 */
											long BgL_arg2014z00_2058;

											{	/* Cnst/alloc.scm 702 */
												long BgL_res2482z00_3124;

												BgL_res2482z00_3124 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg2014z00_2058 = BgL_res2482z00_3124;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1178z00_2057),
												BgL_arg2014z00_2058);
										}
										BgL_new1180z00_2056 = BgL_new1178z00_2057;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1180z00_2056)))->
											BgL_locz00) = ((obj_t) BgL_locz00_65), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1180z00_2056)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) BgL_varz00_2054)))->
												BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1180z00_2056))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BgL_varz00_2054)), BUNSPEC);
									BgL_auxz00_4804 = BgL_new1180z00_2056;
							}}
							return ((BgL_nodez00_bglt) BgL_auxz00_4804);
						}
				}
			}
		}

	}



/* &cnst-alloc-uint64 */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2uint64z62zzcnst_allocz00(obj_t
		BgL_envz00_3570, obj_t BgL_uint64z00_3571, obj_t BgL_locz00_3572)
	{
		{	/* Cnst/alloc.scm 693 */
			return
				BGl_cnstzd2alloczd2uint64z00zzcnst_allocz00(BGL_BINT64_TO_INT64
				(BgL_uint64z00_3571), BgL_locz00_3572);
		}

	}



/* cnst-alloc-list */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t BgL_pairz00_66,
		obj_t BgL_locz00_67)
	{
		{	/* Cnst/alloc.scm 727 */
			{

				{	/* Cnst/alloc.scm 777 */
					obj_t BgL_oldz00_2079;

					{	/* Cnst/alloc.scm 777 */
						obj_t BgL__andtest_1196z00_2088;

						BgL__andtest_1196z00_2088 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_1196z00_2088))
							{
								obj_t BgL_envz00_2090;

								BgL_envz00_2090 = BGl_za2listzd2envza2zd2zzcnst_allocz00;
							BgL_zc3z04anonymousza32038ze3z87_2091:
								if (NULLP(BgL_envz00_2090))
									{	/* Cnst/alloc.scm 780 */
										BgL_oldz00_2079 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 782 */
										bool_t BgL_test2694z00_4835;

										{	/* Cnst/alloc.scm 782 */
											obj_t BgL_arg2044z00_2097;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_sz00_3190;

												BgL_sz00_3190 = CAR(((obj_t) BgL_envz00_2090));
												BgL_arg2044z00_2097 =
													STRUCT_REF(BgL_sz00_3190, (int) (((long) 0)));
											}
											BgL_test2694z00_4835 =
												BGl_cnstzd2equalzf3z21zzcnst_allocz00
												(BgL_arg2044z00_2097, BgL_pairz00_66);
										}
										if (BgL_test2694z00_4835)
											{	/* Cnst/alloc.scm 782 */
												BgL_oldz00_2079 = CAR(((obj_t) BgL_envz00_2090));
											}
										else
											{	/* Cnst/alloc.scm 785 */
												obj_t BgL_arg2043z00_2096;

												BgL_arg2043z00_2096 = CDR(((obj_t) BgL_envz00_2090));
												{
													obj_t BgL_envz00_4845;

													BgL_envz00_4845 = BgL_arg2043z00_2096;
													BgL_envz00_2090 = BgL_envz00_4845;
													goto BgL_zc3z04anonymousza32038ze3z87_2091;
												}
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 777 */
								BgL_oldz00_2079 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_2079))
						{	/* Cnst/alloc.scm 787 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 789 */
									BgL_varz00_bglt BgL_new1198z00_2081;

									{	/* Cnst/alloc.scm 790 */
										BgL_varz00_bglt BgL_new1197z00_2084;

										BgL_new1197z00_2084 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 790 */
											long BgL_arg2035z00_2085;

											{	/* Cnst/alloc.scm 790 */
												long BgL_res2497z00_3194;

												BgL_res2497z00_3194 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg2035z00_2085 = BgL_res2497z00_3194;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1197z00_2084),
												BgL_arg2035z00_2085);
										}
										BgL_new1198z00_2081 = BgL_new1197z00_2084;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1198z00_2081)))->
											BgL_locz00) = ((obj_t) BgL_locz00_67), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_4857;

										{	/* Cnst/alloc.scm 792 */
											BgL_typez00_bglt BgL_arg2033z00_2082;

											BgL_arg2033z00_2082 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															STRUCT_REF(
																((obj_t) BgL_oldz00_2079),
																(int) (((long) 1))))))->BgL_typez00);
											BgL_auxz00_4857 =
												BGl_strictzd2nodezd2typez00zzast_nodez00(
												((BgL_typez00_bglt) BGl_za2pairza2z00zztype_cachez00),
												BgL_arg2033z00_2082);
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1198z00_2081)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_4857), BUNSPEC);
									}
									((((BgL_varz00_bglt) COBJECT(BgL_new1198z00_2081))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												STRUCT_REF(((obj_t) BgL_oldz00_2079),
													(int) (((long) 1))))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1198z00_2081);
								}
							else
								{	/* Cnst/alloc.scm 794 */
									obj_t BgL_arg2036z00_2086;

									BgL_arg2036z00_2086 =
										STRUCT_REF(((obj_t) BgL_oldz00_2079), (int) (((long) 1)));
									return
										((BgL_nodez00_bglt)
										BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg2036z00_2086, BGl_za2pairza2z00zztype_cachez00,
											BgL_locz00_67));
								}
						}
					else
						{	/* Cnst/alloc.scm 787 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{
									BgL_varz00_bglt BgL_auxz00_4881;

									{	/* Cnst/alloc.scm 757 */
										BgL_globalz00_bglt BgL_varz00_2136;

										{	/* Cnst/alloc.scm 757 */
											obj_t BgL_arg2088z00_2152;

											{	/* Cnst/alloc.scm 757 */
												obj_t BgL_arg2089z00_2153;

												BgL_arg2089z00_2153 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 45)));
												BgL_arg2088z00_2152 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg2089z00_2153, CNST_TABLE_REF(((long) 46)));
											}
											BgL_varz00_2136 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg2088z00_2152,
												BGl_za2moduleza2z00zzmodule_modulez00,
												CNST_TABLE_REF(((long) 47)),
												CNST_TABLE_REF(((long) 3)));
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 762 */
												obj_t BgL_arg2075z00_2137;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3173;

													BgL_newz00_3173 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_4896;
														int BgL_tmpz00_4894;

														BgL_auxz00_4896 = ((obj_t) BgL_varz00_2136);
														BgL_tmpz00_4894 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3173, BgL_tmpz00_4894,
															BgL_auxz00_4896);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_4899;

														BgL_tmpz00_4899 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3173, BgL_tmpz00_4899,
															BgL_pairz00_66);
													}
													BgL_arg2075z00_2137 = BgL_newz00_3173;
												}
												BGl_za2listzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2075z00_2137,
													BGl_za2listzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 761 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 763 */
											obj_t BgL_arg2076z00_2138;

											{	/* Cnst/alloc.scm 763 */
												obj_t BgL_arg2077z00_2139;

												{	/* Cnst/alloc.scm 763 */
													obj_t BgL_arg2078z00_2140;
													obj_t BgL_arg2079z00_2141;

													{	/* Cnst/alloc.scm 763 */
														obj_t BgL_arg2080z00_2142;

														{	/* Cnst/alloc.scm 763 */
															obj_t BgL_arg2081z00_2143;
															obj_t BgL_arg2082z00_2144;

															BgL_arg2081z00_2143 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_2136)))->
																BgL_idz00);
															BgL_arg2082z00_2144 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_2136))->BgL_modulez00),
																BNIL);
															BgL_arg2080z00_2142 =
																MAKE_YOUNG_PAIR(BgL_arg2081z00_2143,
																BgL_arg2082z00_2144);
														}
														BgL_arg2078z00_2140 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg2080z00_2142);
													}
													{	/* Cnst/alloc.scm 764 */
														BgL_nodez00_bglt BgL_arg2084z00_2146;

														{	/* Cnst/alloc.scm 764 */
															BgL_nodez00_bglt BgL_arg2085z00_2147;
															BgL_typez00_bglt BgL_arg2086z00_2148;

															BgL_arg2085z00_2147 =
																BGl_loopze70ze7zzcnst_allocz00(BgL_locz00_67,
																BgL_pairz00_66);
															BgL_arg2086z00_2148 =
																BGl_strictzd2nodezd2typez00zzast_nodez00((
																	(BgL_typez00_bglt)
																	BGl_za2pairza2z00zztype_cachez00),
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00));
															BgL_arg2084z00_2146 =
																BGl_coercez12z12zzcoerce_coercez00
																(BgL_arg2085z00_2147, ((obj_t) BgL_varz00_2136),
																BgL_arg2086z00_2148, ((bool_t) 0));
														}
														BgL_arg2079z00_2141 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2084z00_2146), BNIL);
													}
													BgL_arg2077z00_2139 =
														MAKE_YOUNG_PAIR(BgL_arg2078z00_2140,
														BgL_arg2079z00_2141);
												}
												BgL_arg2076z00_2138 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
													BgL_arg2077z00_2139);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg2076z00_2138,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 766 */
											BgL_varz00_bglt BgL_new1195z00_2149;

											{	/* Cnst/alloc.scm 767 */
												BgL_varz00_bglt BgL_new1194z00_2150;

												BgL_new1194z00_2150 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 767 */
													long BgL_arg2087z00_2151;

													{	/* Cnst/alloc.scm 767 */
														long BgL_res2494z00_3179;

														BgL_res2494z00_3179 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg2087z00_2151 = BgL_res2494z00_3179;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1194z00_2150),
														BgL_arg2087z00_2151);
												}
												BgL_new1195z00_2149 = BgL_new1194z00_2150;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1195z00_2149)))->
													BgL_locz00) = ((obj_t) BgL_locz00_67), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1195z00_2149)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt)
																	BgL_varz00_2136)))->BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1195z00_2149))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_2136)), BUNSPEC);
											BgL_auxz00_4881 = BgL_new1195z00_2149;
									}}
									return ((BgL_nodez00_bglt) BgL_auxz00_4881);
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_4935;

									{	/* Cnst/alloc.scm 771 */
										long BgL_offsetz00_2155;

										BgL_offsetz00_2155 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_pairz00_66,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 775 */
												obj_t BgL_arg2091z00_2156;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3185;

													BgL_newz00_3185 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_4945;
														int BgL_tmpz00_4943;

														BgL_auxz00_4945 = BINT(BgL_offsetz00_2155);
														BgL_tmpz00_4943 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3185, BgL_tmpz00_4943,
															BgL_auxz00_4945);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_4948;

														BgL_tmpz00_4948 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3185, BgL_tmpz00_4948,
															BgL_pairz00_66);
													}
													BgL_arg2091z00_2156 = BgL_newz00_3185;
												}
												BGl_za2listzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2091z00_2156,
													BGl_za2listzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 774 */
												BFALSE;
											}
										BgL_auxz00_4935 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_2155), BGl_za2pairza2z00zztype_cachez00,
											BgL_locz00_67);
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_4935);
								}
						}
				}
			}
		}

	}



/* loop~0 */
	BgL_nodez00_bglt BGl_loopze70ze7zzcnst_allocz00(obj_t BgL_locz00_3608,
		obj_t BgL_pairz00_2103)
	{
		{	/* Cnst/alloc.scm 729 */
			if (NULLP(BgL_pairz00_2103))
				{	/* Cnst/alloc.scm 732 */
					BgL_literalz00_bglt BgL_new1185z00_2106;

					{	/* Cnst/alloc.scm 733 */
						BgL_literalz00_bglt BgL_new1184z00_2108;

						BgL_new1184z00_2108 =
							((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_literalz00_bgl))));
						{	/* Cnst/alloc.scm 733 */
							long BgL_arg2050z00_2109;

							{	/* Cnst/alloc.scm 733 */
								long BgL_res2487z00_3144;

								BgL_res2487z00_3144 =
									BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
								BgL_arg2050z00_2109 = BgL_res2487z00_3144;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1184z00_2108),
								BgL_arg2050z00_2109);
						}
						{	/* Cnst/alloc.scm 733 */
							BgL_objectz00_bglt BgL_tmpz00_4961;

							BgL_tmpz00_4961 = ((BgL_objectz00_bglt) BgL_new1184z00_2108);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4961, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1184z00_2108);
						BgL_new1185z00_2106 = BgL_new1184z00_2108;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1185z00_2106)))->BgL_locz00) =
						((obj_t) BgL_locz00_3608), BUNSPEC);
					{
						BgL_typez00_bglt BgL_auxz00_4967;

						{	/* Cnst/alloc.scm 734 */
							BgL_typez00_bglt BgL_arg2049z00_2107;

							BgL_arg2049z00_2107 =
								BGl_getzd2typezd2atomz00zztype_typeofz00(BNIL);
							BgL_auxz00_4967 =
								BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg2049z00_2107,
								((BgL_typez00_bglt) BGl_za2bnilza2z00zztype_cachez00));
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1185z00_2106)))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4967), BUNSPEC);
					}
					((((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt) BgL_new1185z00_2106)))->BgL_valuez00) =
						((obj_t) BNIL), BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_new1185z00_2106);
				}
			else
				{	/* Cnst/alloc.scm 731 */
					if (PAIRP(BgL_pairz00_2103))
						{	/* Cnst/alloc.scm 742 */
							BgL_appz00_bglt BgL_new1189z00_2111;

							{	/* Cnst/alloc.scm 743 */
								BgL_appz00_bglt BgL_new1188z00_2127;

								BgL_new1188z00_2127 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Cnst/alloc.scm 743 */
									long BgL_arg2068z00_2128;

									{	/* Cnst/alloc.scm 743 */
										long BgL_res2489z00_3150;

										BgL_res2489z00_3150 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg2068z00_2128 = BgL_res2489z00_3150;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1188z00_2127),
										BgL_arg2068z00_2128);
								}
								{	/* Cnst/alloc.scm 743 */
									BgL_objectz00_bglt BgL_tmpz00_4982;

									BgL_tmpz00_4982 = ((BgL_objectz00_bglt) BgL_new1188z00_2127);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4982, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1188z00_2127);
								BgL_new1189z00_2111 = BgL_new1188z00_2127;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1189z00_2111)))->BgL_locz00) =
								((obj_t) BgL_locz00_3608), BUNSPEC);
							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_new1189z00_2111)))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2pairza2z00zztype_cachez00)), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1189z00_2111)))->BgL_sidezd2effectzd2) =
								((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1189z00_2111)))->BgL_keyz00) =
								((obj_t) BINT(((long) -1))), BUNSPEC);
							{
								BgL_varz00_bglt BgL_auxz00_4996;

								{	/* Cnst/alloc.scm 745 */
									BgL_varz00_bglt BgL_new1191z00_2112;

									{	/* Cnst/alloc.scm 746 */
										BgL_varz00_bglt BgL_new1190z00_2113;

										BgL_new1190z00_2113 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 746 */
											long BgL_arg2053z00_2114;

											{	/* Cnst/alloc.scm 746 */
												long BgL_res2490z00_3155;

												{	/* Cnst/alloc.scm 746 */
													obj_t BgL_classz00_3154;

													BgL_classz00_3154 = BGl_varz00zzast_nodez00;
													BgL_res2490z00_3155 =
														BGL_CLASS_INDEX(BgL_classz00_3154);
												}
												BgL_arg2053z00_2114 = BgL_res2490z00_3155;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1190z00_2113),
												BgL_arg2053z00_2114);
										}
										BgL_new1191z00_2112 = BgL_new1190z00_2113;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1191z00_2112)))->
											BgL_locz00) = ((obj_t) BgL_locz00_3608), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_5003;

										{	/* Cnst/alloc.scm 747 */
											BgL_variablez00_bglt BgL_oz00_3158;

											BgL_oz00_3158 =
												((BgL_variablez00_bglt)
												BGl_za2consza2z00zzcnst_cachez00);
											BgL_auxz00_5003 =
												(((BgL_variablez00_bglt) COBJECT(BgL_oz00_3158))->
												BgL_typez00);
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1191z00_2112)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_5003), BUNSPEC);
									}
									((((BgL_varz00_bglt) COBJECT(BgL_new1191z00_2112))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												BGl_za2consza2z00zzcnst_cachez00)), BUNSPEC);
									BgL_auxz00_4996 = BgL_new1191z00_2112;
								}
								((((BgL_appz00_bglt) COBJECT(BgL_new1189z00_2111))->
										BgL_funz00) = ((BgL_varz00_bglt) BgL_auxz00_4996), BUNSPEC);
							}
							{
								obj_t BgL_auxz00_5011;

								{	/* Cnst/alloc.scm 749 */
									BgL_nodez00_bglt BgL_arg2055z00_2115;
									BgL_nodez00_bglt BgL_arg2056z00_2116;

									{	/* Cnst/alloc.scm 749 */
										BgL_kwotez00_bglt BgL_arg2060z00_2119;

										{	/* Cnst/alloc.scm 749 */
											BgL_kwotez00_bglt BgL_new1193z00_2120;

											{	/* Cnst/alloc.scm 750 */
												BgL_kwotez00_bglt BgL_new1192z00_2124;

												BgL_new1192z00_2124 =
													((BgL_kwotez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_kwotez00_bgl))));
												{	/* Cnst/alloc.scm 750 */
													long BgL_arg2065z00_2125;

													{	/* Cnst/alloc.scm 750 */
														long BgL_res2491z00_3160;

														{	/* Cnst/alloc.scm 750 */
															obj_t BgL_classz00_3159;

															BgL_classz00_3159 = BGl_kwotez00zzast_nodez00;
															BgL_res2491z00_3160 =
																BGL_CLASS_INDEX(BgL_classz00_3159);
														}
														BgL_arg2065z00_2125 = BgL_res2491z00_3160;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1192z00_2124),
														BgL_arg2065z00_2125);
												}
												{	/* Cnst/alloc.scm 750 */
													BgL_objectz00_bglt BgL_tmpz00_5016;

													BgL_tmpz00_5016 =
														((BgL_objectz00_bglt) BgL_new1192z00_2124);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5016, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1192z00_2124);
												BgL_new1193z00_2120 = BgL_new1192z00_2124;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1193z00_2120)))->
													BgL_locz00) = ((obj_t) BgL_locz00_3608), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_5022;

												{	/* Cnst/alloc.scm 752 */
													BgL_typez00_bglt BgL_arg2061z00_2121;
													BgL_typez00_bglt BgL_arg2062z00_2122;

													{	/* Cnst/alloc.scm 752 */
														obj_t BgL_arg2063z00_2123;

														BgL_arg2063z00_2123 = CAR(BgL_pairz00_2103);
														BgL_arg2061z00_2121 =
															BGl_getzd2typezd2kwotez00zztype_typeofz00
															(BgL_arg2063z00_2123);
													}
													BgL_arg2062z00_2122 =
														BGl_getzd2defaultzd2typez00zztype_cachez00();
													BgL_auxz00_5022 =
														BGl_strictzd2nodezd2typez00zzast_nodez00
														(BgL_arg2061z00_2121, BgL_arg2062z00_2122);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1193z00_2120)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_5022), BUNSPEC);
											}
											((((BgL_kwotez00_bglt) COBJECT(BgL_new1193z00_2120))->
													BgL_valuez00) =
												((obj_t) CAR(BgL_pairz00_2103)), BUNSPEC);
											BgL_arg2060z00_2119 = BgL_new1193z00_2120;
										}
										BgL_arg2055z00_2115 =
											BGl_cnstz12z12zzcnst_nodez00(
											((BgL_nodez00_bglt) BgL_arg2060z00_2119));
									}
									{	/* Cnst/alloc.scm 755 */
										obj_t BgL_arg2066z00_2126;

										BgL_arg2066z00_2126 = CDR(BgL_pairz00_2103);
										BgL_arg2056z00_2116 =
											BGl_loopze70ze7zzcnst_allocz00(BgL_locz00_3608,
											BgL_arg2066z00_2126);
									}
									{	/* Cnst/alloc.scm 749 */
										obj_t BgL_list2057z00_2117;

										{	/* Cnst/alloc.scm 749 */
											obj_t BgL_arg2059z00_2118;

											BgL_arg2059z00_2118 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg2056z00_2116), BNIL);
											BgL_list2057z00_2117 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg2055z00_2115), BgL_arg2059z00_2118);
										}
										BgL_auxz00_5011 = BgL_list2057z00_2117;
								}}
								((((BgL_appz00_bglt) COBJECT(BgL_new1189z00_2111))->
										BgL_argsz00) = ((obj_t) BgL_auxz00_5011), BUNSPEC);
							}
							((((BgL_appz00_bglt) COBJECT(BgL_new1189z00_2111))->
									BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
							return ((BgL_nodez00_bglt) BgL_new1189z00_2111);
						}
					else
						{	/* Cnst/alloc.scm 737 */
							BgL_kwotez00_bglt BgL_arg2069z00_2129;

							{	/* Cnst/alloc.scm 737 */
								BgL_kwotez00_bglt BgL_new1187z00_2130;

								{	/* Cnst/alloc.scm 738 */
									BgL_kwotez00_bglt BgL_new1186z00_2132;

									BgL_new1186z00_2132 =
										((BgL_kwotez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_kwotez00_bgl))));
									{	/* Cnst/alloc.scm 738 */
										long BgL_arg2071z00_2133;

										{	/* Cnst/alloc.scm 738 */
											long BgL_res2493z00_3169;

											BgL_res2493z00_3169 =
												BGL_CLASS_INDEX(BGl_kwotez00zzast_nodez00);
											BgL_arg2071z00_2133 = BgL_res2493z00_3169;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1186z00_2132),
											BgL_arg2071z00_2133);
									}
									{	/* Cnst/alloc.scm 738 */
										BgL_objectz00_bglt BgL_tmpz00_5046;

										BgL_tmpz00_5046 =
											((BgL_objectz00_bglt) BgL_new1186z00_2132);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5046, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1186z00_2132);
									BgL_new1187z00_2130 = BgL_new1186z00_2132;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1187z00_2130)))->
										BgL_locz00) = ((obj_t) BgL_locz00_3608), BUNSPEC);
								{
									BgL_typez00_bglt BgL_auxz00_5052;

									{	/* Cnst/alloc.scm 739 */
										BgL_typez00_bglt BgL_arg2070z00_2131;

										BgL_arg2070z00_2131 =
											BGl_getzd2typezd2kwotez00zztype_typeofz00
											(BgL_pairz00_2103);
										BgL_auxz00_5052 =
											BGl_strictzd2nodezd2typez00zzast_nodez00
											(BgL_arg2070z00_2131,
											((BgL_typez00_bglt) BGl_za2pairza2z00zztype_cachez00));
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1187z00_2130)))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_auxz00_5052), BUNSPEC);
								}
								((((BgL_kwotez00_bglt) COBJECT(BgL_new1187z00_2130))->
										BgL_valuez00) = ((obj_t) BgL_pairz00_2103), BUNSPEC);
								BgL_arg2069z00_2129 = BgL_new1187z00_2130;
							}
							return
								BGl_cnstz12z12zzcnst_nodez00(
								((BgL_nodez00_bglt) BgL_arg2069z00_2129));
						}
				}
		}

	}



/* &cnst-alloc-list */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2listz62zzcnst_allocz00(obj_t
		BgL_envz00_3573, obj_t BgL_pairz00_3574, obj_t BgL_locz00_3575)
	{
		{	/* Cnst/alloc.scm 727 */
			return
				BGl_cnstzd2alloczd2listz00zzcnst_allocz00(BgL_pairz00_3574,
				BgL_locz00_3575);
		}

	}



/* cnst-alloc-vector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t BgL_vecz00_68,
		obj_t BgL_locz00_69)
	{
		{	/* Cnst/alloc.scm 803 */
			{

				{	/* Cnst/alloc.scm 882 */
					obj_t BgL_oldz00_2163;

					{	/* Cnst/alloc.scm 882 */
						obj_t BgL__andtest_1221z00_2172;

						BgL__andtest_1221z00_2172 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_1221z00_2172))
							{
								obj_t BgL_envz00_2174;

								BgL_envz00_2174 = BGl_za2vectorzd2envza2zd2zzcnst_allocz00;
							BgL_zc3z04anonymousza32098ze3z87_2175:
								if (NULLP(BgL_envz00_2174))
									{	/* Cnst/alloc.scm 885 */
										BgL_oldz00_2163 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 887 */
										bool_t BgL_test2704z00_5066;

										{	/* Cnst/alloc.scm 887 */
											obj_t BgL_arg2104z00_2181;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_sz00_3280;

												BgL_sz00_3280 = CAR(((obj_t) BgL_envz00_2174));
												BgL_arg2104z00_2181 =
													STRUCT_REF(BgL_sz00_3280, (int) (((long) 0)));
											}
											BgL_test2704z00_5066 =
												BGl_cnstzd2equalzf3z21zzcnst_allocz00
												(BgL_arg2104z00_2181, BgL_vecz00_68);
										}
										if (BgL_test2704z00_5066)
											{	/* Cnst/alloc.scm 887 */
												BgL_oldz00_2163 = CAR(((obj_t) BgL_envz00_2174));
											}
										else
											{	/* Cnst/alloc.scm 890 */
												obj_t BgL_arg2103z00_2180;

												BgL_arg2103z00_2180 = CDR(((obj_t) BgL_envz00_2174));
												{
													obj_t BgL_envz00_5076;

													BgL_envz00_5076 = BgL_arg2103z00_2180;
													BgL_envz00_2174 = BgL_envz00_5076;
													goto BgL_zc3z04anonymousza32098ze3z87_2175;
												}
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 882 */
								BgL_oldz00_2163 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_2163))
						{	/* Cnst/alloc.scm 892 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 894 */
									BgL_varz00_bglt BgL_new1223z00_2165;

									{	/* Cnst/alloc.scm 895 */
										BgL_varz00_bglt BgL_new1222z00_2168;

										BgL_new1222z00_2168 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 895 */
											long BgL_arg2095z00_2169;

											{	/* Cnst/alloc.scm 895 */
												long BgL_res2519z00_3284;

												BgL_res2519z00_3284 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg2095z00_2169 = BgL_res2519z00_3284;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1222z00_2168),
												BgL_arg2095z00_2169);
										}
										BgL_new1223z00_2165 = BgL_new1222z00_2168;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1223z00_2165)))->
											BgL_locz00) = ((obj_t) BgL_locz00_69), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_5088;

										{	/* Cnst/alloc.scm 897 */
											BgL_typez00_bglt BgL_arg2093z00_2166;

											BgL_arg2093z00_2166 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															STRUCT_REF(
																((obj_t) BgL_oldz00_2163),
																(int) (((long) 1))))))->BgL_typez00);
											BgL_auxz00_5088 =
												BGl_strictzd2nodezd2typez00zzast_nodez00(
												((BgL_typez00_bglt) BGl_za2vectorza2z00zztype_cachez00),
												BgL_arg2093z00_2166);
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1223z00_2165)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_5088), BUNSPEC);
									}
									((((BgL_varz00_bglt) COBJECT(BgL_new1223z00_2165))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												STRUCT_REF(((obj_t) BgL_oldz00_2163),
													(int) (((long) 1))))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1223z00_2165);
								}
							else
								{	/* Cnst/alloc.scm 899 */
									obj_t BgL_arg2096z00_2170;

									BgL_arg2096z00_2170 =
										STRUCT_REF(((obj_t) BgL_oldz00_2163), (int) (((long) 1)));
									return
										((BgL_nodez00_bglt)
										BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg2096z00_2170, BGl_za2vectorza2z00zztype_cachez00,
											BgL_locz00_69));
								}
						}
					else
						{	/* Cnst/alloc.scm 892 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{
									BgL_varz00_bglt BgL_auxz00_5112;

									{	/* Cnst/alloc.scm 870 */
										BgL_globalz00_bglt BgL_varz00_2243;

										{	/* Cnst/alloc.scm 870 */
											obj_t BgL_arg2157z00_2258;

											{	/* Cnst/alloc.scm 870 */
												obj_t BgL_arg2158z00_2259;

												BgL_arg2158z00_2259 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 49)));
												BgL_arg2157z00_2258 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg2158z00_2259, CNST_TABLE_REF(((long) 49)));
											}
											BgL_varz00_2243 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg2157z00_2258,
												BGl_za2moduleza2z00zzmodule_modulez00,
												CNST_TABLE_REF(((long) 2)), CNST_TABLE_REF(((long) 3)));
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 875 */
												obj_t BgL_arg2144z00_2244;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3268;

													BgL_newz00_3268 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_5127;
														int BgL_tmpz00_5125;

														BgL_auxz00_5127 = ((obj_t) BgL_varz00_2243);
														BgL_tmpz00_5125 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3268, BgL_tmpz00_5125,
															BgL_auxz00_5127);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_5130;

														BgL_tmpz00_5130 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3268, BgL_tmpz00_5130,
															BgL_vecz00_68);
													}
													BgL_arg2144z00_2244 = BgL_newz00_3268;
												}
												BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2144z00_2244,
													BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 874 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 876 */
											obj_t BgL_arg2145z00_2245;

											{	/* Cnst/alloc.scm 876 */
												obj_t BgL_arg2146z00_2246;

												{	/* Cnst/alloc.scm 876 */
													obj_t BgL_arg2147z00_2247;
													obj_t BgL_arg2148z00_2248;

													{	/* Cnst/alloc.scm 876 */
														obj_t BgL_arg2149z00_2249;

														{	/* Cnst/alloc.scm 876 */
															obj_t BgL_arg2150z00_2250;
															obj_t BgL_arg2152z00_2251;

															BgL_arg2150z00_2250 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_2243)))->
																BgL_idz00);
															BgL_arg2152z00_2251 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_2243))->BgL_modulez00),
																BNIL);
															BgL_arg2149z00_2249 =
																MAKE_YOUNG_PAIR(BgL_arg2150z00_2250,
																BgL_arg2152z00_2251);
														}
														BgL_arg2147z00_2247 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg2149z00_2249);
													}
													{	/* Cnst/alloc.scm 877 */
														BgL_nodez00_bglt BgL_arg2154z00_2253;

														{	/* Cnst/alloc.scm 807 */
															BgL_nodez00_bglt BgL_arg2107z00_2185;

															{	/* Cnst/alloc.scm 807 */
																BgL_letzd2varzd2_bglt BgL_arg2108z00_2186;
																BgL_typez00_bglt BgL_arg2109z00_2187;

																{	/* Cnst/alloc.scm 807 */
																	BgL_localz00_bglt BgL_varz00_2188;
																	obj_t BgL_lz00_2189;

																	BgL_varz00_2188 =
																		BGl_makezd2localzd2svarz00zzast_localz00
																		(CNST_TABLE_REF(((long) 48)),
																		((BgL_typez00_bglt)
																			BGl_za2vectorza2z00zztype_cachez00));
																	BgL_lz00_2189 =
																		BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
																		(BgL_vecz00_68);
																	{	/* Cnst/alloc.scm 809 */
																		BgL_letzd2varzd2_bglt BgL_new1200z00_2190;

																		{	/* Cnst/alloc.scm 810 */
																			BgL_letzd2varzd2_bglt BgL_new1199z00_2237;

																			BgL_new1199z00_2237 =
																				((BgL_letzd2varzd2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_letzd2varzd2_bgl))));
																			{	/* Cnst/alloc.scm 810 */
																				long BgL_arg2140z00_2238;

																				{	/* Cnst/alloc.scm 810 */
																					long BgL_res2498z00_3202;

																					BgL_res2498z00_3202 =
																						BGL_CLASS_INDEX
																						(BGl_letzd2varzd2zzast_nodez00);
																					BgL_arg2140z00_2238 =
																						BgL_res2498z00_3202;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1199z00_2237),
																					BgL_arg2140z00_2238);
																			}
																			{	/* Cnst/alloc.scm 810 */
																				BgL_objectz00_bglt BgL_tmpz00_5149;

																				BgL_tmpz00_5149 =
																					((BgL_objectz00_bglt)
																					BgL_new1199z00_2237);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5149,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1199z00_2237);
																			BgL_new1200z00_2190 = BgL_new1199z00_2237;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1200z00_2190)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_69), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1200z00_2190)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt)
																				BGl_strictzd2nodezd2typez00zzast_nodez00
																				(((BgL_typez00_bglt)
																						BGl_za2vectorza2z00zztype_cachez00),
																					((BgL_typez00_bglt)
																						BGl_za2objza2z00zztype_cachez00))),
																			BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1200z00_2190)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1200z00_2190)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		{
																			obj_t BgL_auxz00_5165;

																			{	/* Cnst/alloc.scm 815 */
																				obj_t BgL_arg2110z00_2191;

																				{	/* Cnst/alloc.scm 815 */
																					BgL_appz00_bglt BgL_arg2112z00_2193;

																					{	/* Cnst/alloc.scm 815 */
																						BgL_appz00_bglt BgL_new1202z00_2194;

																						{	/* Cnst/alloc.scm 822 */
																							BgL_appz00_bglt
																								BgL_new1201z00_2204;
																							BgL_new1201z00_2204 =
																								((BgL_appz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_appz00_bgl))));
																							{	/* Cnst/alloc.scm 822 */
																								long BgL_arg2119z00_2205;

																								{	/* Cnst/alloc.scm 822 */
																									long BgL_res2499z00_3207;

																									{	/* Cnst/alloc.scm 822 */
																										obj_t BgL_classz00_3206;

																										BgL_classz00_3206 =
																											BGl_appz00zzast_nodez00;
																										BgL_res2499z00_3207 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3206);
																									}
																									BgL_arg2119z00_2205 =
																										BgL_res2499z00_3207;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1201z00_2204),
																									BgL_arg2119z00_2205);
																							}
																							{	/* Cnst/alloc.scm 822 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_5170;
																								BgL_tmpz00_5170 =
																									((BgL_objectz00_bglt)
																									BgL_new1201z00_2204);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_5170, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1201z00_2204);
																							BgL_new1202z00_2194 =
																								BgL_new1201z00_2204;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1202z00_2194)))->
																								BgL_locz00) =
																							((obj_t) BgL_locz00_69), BUNSPEC);
																						((((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_new1202z00_2194)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BGl_za2vectorza2z00zztype_cachez00)),
																							BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1202z00_2194)))->
																								BgL_sidezd2effectzd2) =
																							((obj_t) BUNSPEC), BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1202z00_2194)))->
																								BgL_keyz00) =
																							((obj_t) BINT(((long) -1))),
																							BUNSPEC);
																						{
																							BgL_varz00_bglt BgL_auxz00_5184;

																							{	/* Cnst/alloc.scm 818 */
																								BgL_varz00_bglt
																									BgL_new1204z00_2195;
																								{	/* Cnst/alloc.scm 821 */
																									BgL_varz00_bglt
																										BgL_new1203z00_2196;
																									BgL_new1203z00_2196 =
																										((BgL_varz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varz00_bgl))));
																									{	/* Cnst/alloc.scm 821 */
																										long BgL_arg2114z00_2197;

																										{	/* Cnst/alloc.scm 821 */
																											long BgL_res2500z00_3212;

																											{	/* Cnst/alloc.scm 821 */
																												obj_t BgL_classz00_3211;

																												BgL_classz00_3211 =
																													BGl_varz00zzast_nodez00;
																												BgL_res2500z00_3212 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_3211);
																											}
																											BgL_arg2114z00_2197 =
																												BgL_res2500z00_3212;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1203z00_2196),
																											BgL_arg2114z00_2197);
																									}
																									BgL_new1204z00_2195 =
																										BgL_new1203z00_2196;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1204z00_2195)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_69),
																									BUNSPEC);
																								{
																									BgL_typez00_bglt
																										BgL_auxz00_5191;
																									{	/* Cnst/alloc.scm 820 */
																										BgL_variablez00_bglt
																											BgL_oz00_3215;
																										BgL_oz00_3215 =
																											((BgL_variablez00_bglt)
																											BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00);
																										BgL_auxz00_5191 =
																											(((BgL_variablez00_bglt)
																												COBJECT
																												(BgL_oz00_3215))->
																											BgL_typez00);
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1204z00_2195)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_auxz00_5191),
																										BUNSPEC);
																								}
																								((((BgL_varz00_bglt)
																											COBJECT
																											(BgL_new1204z00_2195))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00)),
																									BUNSPEC);
																								BgL_auxz00_5184 =
																									BgL_new1204z00_2195;
																							}
																							((((BgL_appz00_bglt)
																										COBJECT
																										(BgL_new1202z00_2194))->
																									BgL_funz00) =
																								((BgL_varz00_bglt)
																									BgL_auxz00_5184), BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_5199;

																							{	/* Cnst/alloc.scm 823 */
																								BgL_kwotez00_bglt
																									BgL_arg2115z00_2198;
																								{	/* Cnst/alloc.scm 823 */
																									BgL_kwotez00_bglt
																										BgL_new1206z00_2200;
																									{	/* Cnst/alloc.scm 827 */
																										BgL_kwotez00_bglt
																											BgL_new1205z00_2202;
																										BgL_new1205z00_2202 =
																											((BgL_kwotez00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_kwotez00_bgl))));
																										{	/* Cnst/alloc.scm 827 */
																											long BgL_arg2118z00_2203;

																											{	/* Cnst/alloc.scm 827 */
																												long
																													BgL_res2501z00_3217;
																												{	/* Cnst/alloc.scm 827 */
																													obj_t
																														BgL_classz00_3216;
																													BgL_classz00_3216 =
																														BGl_kwotez00zzast_nodez00;
																													BgL_res2501z00_3217 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_3216);
																												}
																												BgL_arg2118z00_2203 =
																													BgL_res2501z00_3217;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1205z00_2202),
																												BgL_arg2118z00_2203);
																										}
																										{	/* Cnst/alloc.scm 827 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_5204;
																											BgL_tmpz00_5204 =
																												((BgL_objectz00_bglt)
																												BgL_new1205z00_2202);
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_5204,
																												BFALSE);
																										}
																										((BgL_objectz00_bglt)
																											BgL_new1205z00_2202);
																										BgL_new1206z00_2200 =
																											BgL_new1205z00_2202;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1206z00_2200)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_69),
																										BUNSPEC);
																									{
																										BgL_typez00_bglt
																											BgL_auxz00_5210;
																										{	/* Cnst/alloc.scm 826 */
																											BgL_typez00_bglt
																												BgL_arg2117z00_2201;
																											BgL_arg2117z00_2201 =
																												BGl_getzd2typezd2kwotez00zztype_typeofz00
																												(BgL_lz00_2189);
																											BgL_auxz00_5210 =
																												BGl_strictzd2nodezd2typez00zzast_nodez00
																												(BgL_arg2117z00_2201,
																												((BgL_typez00_bglt)
																													BGl_za2objza2z00zztype_cachez00));
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1206z00_2200)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt)
																												BgL_auxz00_5210),
																											BUNSPEC);
																									}
																									((((BgL_kwotez00_bglt)
																												COBJECT
																												(BgL_new1206z00_2200))->
																											BgL_valuez00) =
																										((obj_t) BgL_lz00_2189),
																										BUNSPEC);
																									BgL_arg2115z00_2198 =
																										BgL_new1206z00_2200;
																								}
																								{	/* Cnst/alloc.scm 822 */
																									obj_t BgL_list2116z00_2199;

																									BgL_list2116z00_2199 =
																										MAKE_YOUNG_PAIR(
																										((obj_t)
																											BgL_arg2115z00_2198),
																										BNIL);
																									BgL_auxz00_5199 =
																										BgL_list2116z00_2199;
																							}}
																							((((BgL_appz00_bglt)
																										COBJECT
																										(BgL_new1202z00_2194))->
																									BgL_argsz00) =
																								((obj_t) BgL_auxz00_5199),
																								BUNSPEC);
																						}
																						((((BgL_appz00_bglt)
																									COBJECT
																									(BgL_new1202z00_2194))->
																								BgL_stackablez00) =
																							((obj_t) BFALSE), BUNSPEC);
																						BgL_arg2112z00_2193 =
																							BgL_new1202z00_2194;
																					}
																					BgL_arg2110z00_2191 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_varz00_2188),
																						((obj_t) BgL_arg2112z00_2193));
																				}
																				{	/* Cnst/alloc.scm 813 */
																					obj_t BgL_list2111z00_2192;

																					BgL_list2111z00_2192 =
																						MAKE_YOUNG_PAIR(BgL_arg2110z00_2191,
																						BNIL);
																					BgL_auxz00_5165 =
																						BgL_list2111z00_2192;
																			}}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1200z00_2190))->
																					BgL_bindingsz00) =
																				((obj_t) BgL_auxz00_5165), BUNSPEC);
																		}
																		{
																			BgL_nodez00_bglt BgL_auxz00_5226;

																			{	/* Cnst/alloc.scm 828 */
																				BgL_varz00_bglt BgL_varzd2bodyzd2_2206;

																				{	/* Cnst/alloc.scm 828 */
																					BgL_varz00_bglt BgL_new1208z00_2234;

																					{	/* Cnst/alloc.scm 829 */
																						BgL_varz00_bglt BgL_new1207z00_2235;

																						BgL_new1207z00_2235 =
																							((BgL_varz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_varz00_bgl))));
																						{	/* Cnst/alloc.scm 829 */
																							long BgL_arg2138z00_2236;

																							{	/* Cnst/alloc.scm 829 */
																								long BgL_res2504z00_3224;

																								{	/* Cnst/alloc.scm 829 */
																									obj_t BgL_classz00_3223;

																									BgL_classz00_3223 =
																										BGl_varz00zzast_nodez00;
																									BgL_res2504z00_3224 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_3223);
																								}
																								BgL_arg2138z00_2236 =
																									BgL_res2504z00_3224;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1207z00_2235),
																								BgL_arg2138z00_2236);
																						}
																						BgL_new1208z00_2234 =
																							BgL_new1207z00_2235;
																					}
																					((((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_new1208z00_2234)))->
																							BgL_locz00) =
																						((obj_t) BgL_locz00_69), BUNSPEC);
																					((((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_new1208z00_2234)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) ((
																									(BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_varz00_2188)))->
																								BgL_typez00)), BUNSPEC);
																					((((BgL_varz00_bglt)
																								COBJECT(BgL_new1208z00_2234))->
																							BgL_variablez00) =
																						((BgL_variablez00_bglt) (
																								(BgL_variablez00_bglt)
																								BgL_varz00_2188)), BUNSPEC);
																					BgL_varzd2bodyzd2_2206 =
																						BgL_new1208z00_2234;
																				}
																				{	/* Cnst/alloc.scm 832 */
																					bool_t BgL_test2709z00_5239;

																					{	/* Cnst/alloc.scm 832 */
																						int BgL_arg2137z00_2233;

																						{	/* Cnst/alloc.scm 832 */
																							int BgL_res2505z00_3229;

																							BgL_res2505z00_3229 =
																								VECTOR_TAG(BgL_vecz00_68);
																							BgL_arg2137z00_2233 =
																								BgL_res2505z00_3229;
																						}
																						BgL_test2709z00_5239 =
																							(
																							(long) (BgL_arg2137z00_2233) >
																							((long) 0));
																					}
																					if (BgL_test2709z00_5239)
																						{	/* Cnst/alloc.scm 833 */
																							BgL_sequencez00_bglt
																								BgL_new1210z00_2209;
																							{	/* Cnst/alloc.scm 834 */
																								BgL_sequencez00_bglt
																									BgL_new1209z00_2231;
																								BgL_new1209z00_2231 =
																									((BgL_sequencez00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_sequencez00_bgl))));
																								{	/* Cnst/alloc.scm 834 */
																									long BgL_arg2136z00_2232;

																									{	/* Cnst/alloc.scm 834 */
																										long BgL_res2507z00_3233;

																										{	/* Cnst/alloc.scm 834 */
																											obj_t BgL_classz00_3232;

																											BgL_classz00_3232 =
																												BGl_sequencez00zzast_nodez00;
																											BgL_res2507z00_3233 =
																												BGL_CLASS_INDEX
																												(BgL_classz00_3232);
																										}
																										BgL_arg2136z00_2232 =
																											BgL_res2507z00_3233;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1209z00_2231),
																										BgL_arg2136z00_2232);
																								}
																								{	/* Cnst/alloc.scm 834 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_5247;
																									BgL_tmpz00_5247 =
																										((BgL_objectz00_bglt)
																										BgL_new1209z00_2231);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_5247, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1209z00_2231);
																								BgL_new1210z00_2209 =
																									BgL_new1209z00_2231;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1210z00_2209)))->
																									BgL_locz00) =
																								((obj_t) BgL_locz00_69),
																								BUNSPEC);
																							((((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_new1210z00_2209)))->
																									BgL_typez00) =
																								((BgL_typez00_bglt) (
																										(BgL_typez00_bglt)
																										BGl_za2vectorza2z00zztype_cachez00)),
																								BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1210z00_2209)))->
																									BgL_sidezd2effectzd2) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1210z00_2209)))->
																									BgL_keyz00) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_5261;

																								{	/* Cnst/alloc.scm 838 */
																									BgL_appz00_bglt
																										BgL_arg2122z00_2210;
																									{	/* Cnst/alloc.scm 838 */
																										BgL_appz00_bglt
																											BgL_new1212z00_2213;
																										{	/* Cnst/alloc.scm 839 */
																											BgL_appz00_bglt
																												BgL_new1211z00_2229;
																											BgL_new1211z00_2229 =
																												((BgL_appz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_appz00_bgl))));
																											{	/* Cnst/alloc.scm 839 */
																												long
																													BgL_arg2135z00_2230;
																												{	/* Cnst/alloc.scm 839 */
																													long
																														BgL_res2508z00_3238;
																													{	/* Cnst/alloc.scm 839 */
																														obj_t
																															BgL_classz00_3237;
																														BgL_classz00_3237 =
																															BGl_appz00zzast_nodez00;
																														BgL_res2508z00_3238
																															=
																															BGL_CLASS_INDEX
																															(BgL_classz00_3237);
																													}
																													BgL_arg2135z00_2230 =
																														BgL_res2508z00_3238;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1211z00_2229),
																													BgL_arg2135z00_2230);
																											}
																											{	/* Cnst/alloc.scm 839 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_5266;
																												BgL_tmpz00_5266 =
																													((BgL_objectz00_bglt)
																													BgL_new1211z00_2229);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_5266,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1211z00_2229);
																											BgL_new1212z00_2213 =
																												BgL_new1211z00_2229;
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1212z00_2213)))->
																												BgL_locz00) =
																											((obj_t) BgL_locz00_69),
																											BUNSPEC);
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1212z00_2213)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt) (
																													(BgL_typez00_bglt)
																													BGl_za2objza2z00zztype_cachez00)),
																											BUNSPEC);
																										((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1212z00_2213)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																										((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1212z00_2213)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																										{
																											BgL_varz00_bglt
																												BgL_auxz00_5280;
																											{	/* Cnst/alloc.scm 841 */
																												BgL_varz00_bglt
																													BgL_new1214z00_2214;
																												{	/* Cnst/alloc.scm 842 */
																													BgL_varz00_bglt
																														BgL_new1213z00_2215;
																													BgL_new1213z00_2215 =
																														((BgL_varz00_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_varz00_bgl))));
																													{	/* Cnst/alloc.scm 842 */
																														long
																															BgL_arg2126z00_2216;
																														{	/* Cnst/alloc.scm 842 */
																															long
																																BgL_res2509z00_3243;
																															{	/* Cnst/alloc.scm 842 */
																																obj_t
																																	BgL_classz00_3242;
																																BgL_classz00_3242
																																	=
																																	BGl_varz00zzast_nodez00;
																																BgL_res2509z00_3243
																																	=
																																	BGL_CLASS_INDEX
																																	(BgL_classz00_3242);
																															}
																															BgL_arg2126z00_2216
																																=
																																BgL_res2509z00_3243;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1213z00_2215), BgL_arg2126z00_2216);
																													}
																													BgL_new1214z00_2214 =
																														BgL_new1213z00_2215;
																												}
																												((((BgL_nodez00_bglt)
																															COBJECT((
																																	(BgL_nodez00_bglt)
																																	BgL_new1214z00_2214)))->
																														BgL_locz00) =
																													((obj_t)
																														BgL_locz00_69),
																													BUNSPEC);
																												{
																													BgL_typez00_bglt
																														BgL_auxz00_5287;
																													{	/* Cnst/alloc.scm 843 */
																														BgL_variablez00_bglt
																															BgL_oz00_3246;
																														BgL_oz00_3246 =
																															(
																															(BgL_variablez00_bglt)
																															BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00);
																														BgL_auxz00_5287 =
																															(((BgL_variablez00_bglt) COBJECT(BgL_oz00_3246))->BgL_typez00);
																													}
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1214z00_2214)))->
																															BgL_typez00) =
																														((BgL_typez00_bglt)
																															BgL_auxz00_5287),
																														BUNSPEC);
																												}
																												((((BgL_varz00_bglt)
																															COBJECT
																															(BgL_new1214z00_2214))->
																														BgL_variablez00) =
																													((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00)), BUNSPEC);
																												BgL_auxz00_5280 =
																													BgL_new1214z00_2214;
																											}
																											((((BgL_appz00_bglt)
																														COBJECT
																														(BgL_new1212z00_2213))->
																													BgL_funz00) =
																												((BgL_varz00_bglt)
																													BgL_auxz00_5280),
																												BUNSPEC);
																										}
																										{
																											obj_t BgL_auxz00_5295;

																											{	/* Cnst/alloc.scm 847 */
																												BgL_varz00_bglt
																													BgL_arg2127z00_2217;
																												BgL_literalz00_bglt
																													BgL_arg2128z00_2218;
																												{	/* Cnst/alloc.scm 847 */
																													BgL_varz00_bglt
																														BgL_new1216z00_2221;
																													{	/* Cnst/alloc.scm 848 */
																														BgL_varz00_bglt
																															BgL_new1215z00_2222;
																														BgL_new1215z00_2222
																															=
																															((BgL_varz00_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_varz00_bgl))));
																														{	/* Cnst/alloc.scm 848 */
																															long
																																BgL_arg2131z00_2223;
																															{	/* Cnst/alloc.scm 848 */
																																long
																																	BgL_res2510z00_3248;
																																{	/* Cnst/alloc.scm 848 */
																																	obj_t
																																		BgL_classz00_3247;
																																	BgL_classz00_3247
																																		=
																																		BGl_varz00zzast_nodez00;
																																	BgL_res2510z00_3248
																																		=
																																		BGL_CLASS_INDEX
																																		(BgL_classz00_3247);
																																}
																																BgL_arg2131z00_2223
																																	=
																																	BgL_res2510z00_3248;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1215z00_2222), BgL_arg2131z00_2223);
																														}
																														BgL_new1216z00_2221
																															=
																															BgL_new1215z00_2222;
																													}
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1216z00_2221)))->
																															BgL_locz00) =
																														((obj_t)
																															BgL_locz00_69),
																														BUNSPEC);
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1216z00_2221)))->
																															BgL_typez00) =
																														((BgL_typez00_bglt)
																															(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_varz00_2188)))->BgL_typez00)), BUNSPEC);
																													((((BgL_varz00_bglt)
																																COBJECT
																																(BgL_new1216z00_2221))->
																															BgL_variablez00) =
																														((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_varz00_2188)), BUNSPEC);
																													BgL_arg2127z00_2217 =
																														BgL_new1216z00_2221;
																												}
																												{	/* Cnst/alloc.scm 851 */
																													BgL_literalz00_bglt
																														BgL_new1218z00_2224;
																													{	/* Cnst/alloc.scm 852 */
																														BgL_literalz00_bglt
																															BgL_new1217z00_2227;
																														BgL_new1217z00_2227
																															=
																															(
																															(BgL_literalz00_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_literalz00_bgl))));
																														{	/* Cnst/alloc.scm 852 */
																															long
																																BgL_arg2134z00_2228;
																															{	/* Cnst/alloc.scm 852 */
																																long
																																	BgL_res2511z00_3253;
																																{	/* Cnst/alloc.scm 852 */
																																	obj_t
																																		BgL_classz00_3252;
																																	BgL_classz00_3252
																																		=
																																		BGl_literalz00zzast_nodez00;
																																	BgL_res2511z00_3253
																																		=
																																		BGL_CLASS_INDEX
																																		(BgL_classz00_3252);
																																}
																																BgL_arg2134z00_2228
																																	=
																																	BgL_res2511z00_3253;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1217z00_2227), BgL_arg2134z00_2228);
																														}
																														{	/* Cnst/alloc.scm 852 */
																															BgL_objectz00_bglt
																																BgL_tmpz00_5312;
																															BgL_tmpz00_5312 =
																																(
																																(BgL_objectz00_bglt)
																																BgL_new1217z00_2227);
																															BGL_OBJECT_WIDENING_SET
																																(BgL_tmpz00_5312,
																																BFALSE);
																														}
																														((BgL_objectz00_bglt) BgL_new1217z00_2227);
																														BgL_new1218z00_2224
																															=
																															BgL_new1217z00_2227;
																													}
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1218z00_2224)))->
																															BgL_locz00) =
																														((obj_t)
																															BgL_locz00_69),
																														BUNSPEC);
																													{
																														BgL_typez00_bglt
																															BgL_auxz00_5318;
																														{	/* Cnst/alloc.scm 854 */
																															BgL_typez00_bglt
																																BgL_arg2132z00_2225;
																															{	/* Cnst/alloc.scm 854 */
																																int
																																	BgL_arg2133z00_2226;
																																{	/* Cnst/alloc.scm 854 */
																																	int
																																		BgL_res2512z00_3258;
																																	BgL_res2512z00_3258
																																		=
																																		VECTOR_TAG
																																		(BgL_vecz00_68);
																																	BgL_arg2133z00_2226
																																		=
																																		BgL_res2512z00_3258;
																																}
																																BgL_arg2132z00_2225
																																	=
																																	BGl_getzd2typezd2atomz00zztype_typeofz00
																																	(BINT
																																	(BgL_arg2133z00_2226));
																															}
																															BgL_auxz00_5318 =
																																BGl_strictzd2nodezd2typez00zzast_nodez00
																																(BgL_arg2132z00_2225,
																																((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
																														}
																														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1218z00_2224)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_5318), BUNSPEC);
																													}
																													{
																														obj_t
																															BgL_auxz00_5326;
																														{	/* Cnst/alloc.scm 856 */
																															int
																																BgL_res2513z00_3260;
																															BgL_res2513z00_3260
																																=
																																VECTOR_TAG
																																(BgL_vecz00_68);
																															BgL_auxz00_5326 =
																																BINT
																																(BgL_res2513z00_3260);
																														}
																														((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt) BgL_new1218z00_2224)))->BgL_valuez00) = ((obj_t) BgL_auxz00_5326), BUNSPEC);
																													}
																													BgL_arg2128z00_2218 =
																														BgL_new1218z00_2224;
																												}
																												{	/* Cnst/alloc.scm 846 */
																													obj_t
																														BgL_list2129z00_2219;
																													{	/* Cnst/alloc.scm 846 */
																														obj_t
																															BgL_arg2130z00_2220;
																														BgL_arg2130z00_2220
																															=
																															MAKE_YOUNG_PAIR((
																																(obj_t)
																																BgL_arg2128z00_2218),
																															BNIL);
																														BgL_list2129z00_2219
																															=
																															MAKE_YOUNG_PAIR((
																																(obj_t)
																																BgL_arg2127z00_2217),
																															BgL_arg2130z00_2220);
																													}
																													BgL_auxz00_5295 =
																														BgL_list2129z00_2219;
																											}}
																											((((BgL_appz00_bglt)
																														COBJECT
																														(BgL_new1212z00_2213))->
																													BgL_argsz00) =
																												((obj_t)
																													BgL_auxz00_5295),
																												BUNSPEC);
																										}
																										((((BgL_appz00_bglt)
																													COBJECT
																													(BgL_new1212z00_2213))->
																												BgL_stackablez00) =
																											((obj_t) BFALSE),
																											BUNSPEC);
																										BgL_arg2122z00_2210 =
																											BgL_new1212z00_2213;
																									}
																									{	/* Cnst/alloc.scm 837 */
																										obj_t BgL_list2123z00_2211;

																										{	/* Cnst/alloc.scm 837 */
																											obj_t BgL_arg2125z00_2212;

																											BgL_arg2125z00_2212 =
																												MAKE_YOUNG_PAIR(
																												((obj_t)
																													BgL_varzd2bodyzd2_2206),
																												BNIL);
																											BgL_list2123z00_2211 =
																												MAKE_YOUNG_PAIR(((obj_t)
																													BgL_arg2122z00_2210),
																												BgL_arg2125z00_2212);
																										}
																										BgL_auxz00_5261 =
																											BgL_list2123z00_2211;
																								}}
																								((((BgL_sequencez00_bglt)
																											COBJECT
																											(BgL_new1210z00_2209))->
																										BgL_nodesz00) =
																									((obj_t) BgL_auxz00_5261),
																									BUNSPEC);
																							}
																							((((BgL_sequencez00_bglt)
																										COBJECT
																										(BgL_new1210z00_2209))->
																									BgL_unsafez00) =
																								((bool_t) ((bool_t) 0)),
																								BUNSPEC);
																							((((BgL_sequencez00_bglt)
																										COBJECT
																										(BgL_new1210z00_2209))->
																									BgL_metaz00) =
																								((obj_t) BNIL), BUNSPEC);
																							BgL_auxz00_5226 =
																								((BgL_nodez00_bglt)
																								BgL_new1210z00_2209);
																						}
																					else
																						{	/* Cnst/alloc.scm 832 */
																							BgL_auxz00_5226 =
																								((BgL_nodez00_bglt)
																								BgL_varzd2bodyzd2_2206);
																						}
																				}
																			}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1200z00_2190))->
																					BgL_bodyz00) =
																				((BgL_nodez00_bglt) BgL_auxz00_5226),
																				BUNSPEC);
																		}
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1200z00_2190))->
																				BgL_removablezf3zf3) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																		BgL_arg2108z00_2186 = BgL_new1200z00_2190;
																	}
																}
																BgL_arg2109z00_2187 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00(
																	((BgL_typez00_bglt)
																		BGl_za2vectorza2z00zztype_cachez00),
																	((BgL_typez00_bglt)
																		BGl_za2objza2z00zztype_cachez00));
																BgL_arg2107z00_2185 =
																	BGl_coercez12z12zzcoerce_coercez00((
																		(BgL_nodez00_bglt) BgL_arg2108z00_2186),
																	BUNSPEC, BgL_arg2109z00_2187, ((bool_t) 0));
															}
															BgL_arg2154z00_2253 =
																BGl_cnstz12z12zzcnst_nodez00
																(BgL_arg2107z00_2185);
														}
														BgL_arg2148z00_2248 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2154z00_2253), BNIL);
													}
													BgL_arg2146z00_2246 =
														MAKE_YOUNG_PAIR(BgL_arg2147z00_2247,
														BgL_arg2148z00_2248);
												}
												BgL_arg2145z00_2245 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
													BgL_arg2146z00_2246);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg2145z00_2245,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 878 */
											BgL_varz00_bglt BgL_new1220z00_2254;

											{	/* Cnst/alloc.scm 879 */
												BgL_varz00_bglt BgL_new1219z00_2256;

												BgL_new1219z00_2256 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 879 */
													long BgL_arg2156z00_2257;

													{	/* Cnst/alloc.scm 879 */
														long BgL_res2517z00_3274;

														BgL_res2517z00_3274 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg2156z00_2257 = BgL_res2517z00_3274;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1219z00_2256),
														BgL_arg2156z00_2257);
												}
												BgL_new1220z00_2254 = BgL_new1219z00_2256;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1220z00_2254)))->
													BgL_locz00) = ((obj_t) BgL_locz00_69), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_5366;

												{	/* Cnst/alloc.scm 880 */
													BgL_typez00_bglt BgL_arg2155z00_2255;

													BgL_arg2155z00_2255 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_varz00_2243)))->
														BgL_typez00);
													BgL_auxz00_5366 =
														BGl_strictzd2nodezd2typez00zzast_nodez00((
															(BgL_typez00_bglt)
															BGl_za2vectorza2z00zztype_cachez00),
														BgL_arg2155z00_2255);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1220z00_2254)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_5366), BUNSPEC);
											}
											((((BgL_varz00_bglt) COBJECT(BgL_new1220z00_2254))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_2243)), BUNSPEC);
											BgL_auxz00_5112 = BgL_new1220z00_2254;
									}}
									return ((BgL_nodez00_bglt) BgL_auxz00_5112);
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_5376;

									{	/* Cnst/alloc.scm 863 */
										long BgL_offsetz00_2240;

										BgL_offsetz00_2240 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_vecz00_68,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 867 */
												obj_t BgL_arg2142z00_2241;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3265;

													BgL_newz00_3265 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_5386;
														int BgL_tmpz00_5384;

														BgL_auxz00_5386 = BINT(BgL_offsetz00_2240);
														BgL_tmpz00_5384 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3265, BgL_tmpz00_5384,
															BgL_auxz00_5386);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_5389;

														BgL_tmpz00_5389 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3265, BgL_tmpz00_5389,
															BgL_vecz00_68);
													}
													BgL_arg2142z00_2241 = BgL_newz00_3265;
												}
												BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2142z00_2241,
													BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 866 */
												BFALSE;
											}
										BgL_auxz00_5376 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_2240), BGl_za2vectorza2z00zztype_cachez00,
											BgL_locz00_69);
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_5376);
								}
						}
				}
			}
		}

	}



/* &cnst-alloc-vector */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2vectorz62zzcnst_allocz00(obj_t
		BgL_envz00_3576, obj_t BgL_vecz00_3577, obj_t BgL_locz00_3578)
	{
		{	/* Cnst/alloc.scm 803 */
			return
				BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(BgL_vecz00_3577,
				BgL_locz00_3578);
		}

	}



/* cnst-alloc-homogenous-vector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t
		BgL_vecz00_70, obj_t BgL_locz00_71)
	{
		{	/* Cnst/alloc.scm 908 */
			{	/* Cnst/alloc.scm 910 */
				obj_t BgL_veczd2tagzd2_2263;

				{	/* Cnst/alloc.scm 910 */
					obj_t BgL_tagz00_2360;

					BgL_tagz00_2360 =
						BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_vecz00_70);
					{	/* Cnst/alloc.scm 911 */
						obj_t BgL__z00_2361;
						obj_t BgL__z00_2362;
						obj_t BgL__z00_2363;

						{	/* Cnst/alloc.scm 911 */
							int BgL_tmpz00_5398;

							BgL_tmpz00_5398 = (int) (((long) 1));
							BgL__z00_2361 = BGL_MVALUES_VAL(BgL_tmpz00_5398);
						}
						{	/* Cnst/alloc.scm 911 */
							int BgL_tmpz00_5401;

							BgL_tmpz00_5401 = (int) (((long) 2));
							BgL__z00_2362 = BGL_MVALUES_VAL(BgL_tmpz00_5401);
						}
						{	/* Cnst/alloc.scm 911 */
							int BgL_tmpz00_5404;

							BgL_tmpz00_5404 = (int) (((long) 3));
							BgL__z00_2363 = BGL_MVALUES_VAL(BgL_tmpz00_5404);
						}
						BgL_veczd2tagzd2_2263 = BgL_tagz00_2360;
				}}
				{	/* Cnst/alloc.scm 910 */
					obj_t BgL_veczd2typezd2idz00_2264;

					{	/* Cnst/alloc.scm 913 */
						obj_t BgL_arg2219z00_2357;

						{	/* Cnst/alloc.scm 913 */
							obj_t BgL_arg2220z00_2358;
							obj_t BgL_arg2221z00_2359;

							{	/* Cnst/alloc.scm 913 */
								obj_t BgL_res2520z00_3293;

								{	/* Cnst/alloc.scm 913 */
									obj_t BgL_arg1466z00_3292;

									BgL_arg1466z00_3292 =
										SYMBOL_TO_STRING(((obj_t) BgL_veczd2tagzd2_2263));
									BgL_res2520z00_3293 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_3292);
								}
								BgL_arg2220z00_2358 = BgL_res2520z00_3293;
							}
							{	/* Cnst/alloc.scm 913 */
								obj_t BgL_res2521z00_3296;

								{	/* Cnst/alloc.scm 913 */
									obj_t BgL_symbolz00_3294;

									BgL_symbolz00_3294 = CNST_TABLE_REF(((long) 49));
									{	/* Cnst/alloc.scm 913 */
										obj_t BgL_arg1466z00_3295;

										BgL_arg1466z00_3295 = SYMBOL_TO_STRING(BgL_symbolz00_3294);
										BgL_res2521z00_3296 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_3295);
								}}
								BgL_arg2221z00_2359 = BgL_res2521z00_3296;
							}
							BgL_arg2219z00_2357 =
								string_append(BgL_arg2220z00_2358, BgL_arg2221z00_2359);
						}
						BgL_veczd2typezd2idz00_2264 =
							bstring_to_symbol(BgL_arg2219z00_2357);
					}
					{	/* Cnst/alloc.scm 913 */
						BgL_typez00_bglt BgL_veczd2typezd2_2265;

						BgL_veczd2typezd2_2265 =
							BGl_findzd2typezd2zztype_envz00(BgL_veczd2typezd2idz00_2264);
						{	/* Cnst/alloc.scm 914 */
							obj_t BgL_listzd2ze3vectorz31_2266;

							{	/* Cnst/alloc.scm 915 */
								obj_t BgL_list2216z00_2354;

								{	/* Cnst/alloc.scm 915 */
									obj_t BgL_arg2217z00_2355;

									{	/* Cnst/alloc.scm 915 */
										obj_t BgL_arg2218z00_2356;

										BgL_arg2218z00_2356 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 49)), BNIL);
										BgL_arg2217z00_2355 =
											MAKE_YOUNG_PAIR(BgL_veczd2tagzd2_2263,
											BgL_arg2218z00_2356);
									}
									BgL_list2216z00_2354 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 50)),
										BgL_arg2217z00_2355);
								}
								BgL_listzd2ze3vectorz31_2266 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list2216z00_2354);
							}
							{	/* Cnst/alloc.scm 915 */
								obj_t BgL_vectorzd2ze3listz31_2267;

								if ((BgL_veczd2tagzd2_2263 == CNST_TABLE_REF(((long) 51))))
									{	/* Cnst/alloc.scm 916 */
										BgL_vectorzd2ze3listz31_2267 =
											BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00;
									}
								else
									{	/* Cnst/alloc.scm 916 */
										if ((BgL_veczd2tagzd2_2263 == CNST_TABLE_REF(((long) 52))))
											{	/* Cnst/alloc.scm 916 */
												BgL_vectorzd2ze3listz31_2267 =
													BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00;
											}
										else
											{	/* Cnst/alloc.scm 916 */
												if (
													(BgL_veczd2tagzd2_2263 ==
														CNST_TABLE_REF(((long) 53))))
													{	/* Cnst/alloc.scm 916 */
														BgL_vectorzd2ze3listz31_2267 =
															BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00;
													}
												else
													{	/* Cnst/alloc.scm 916 */
														if (
															(BgL_veczd2tagzd2_2263 ==
																CNST_TABLE_REF(((long) 54))))
															{	/* Cnst/alloc.scm 916 */
																BgL_vectorzd2ze3listz31_2267 =
																	BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00;
															}
														else
															{	/* Cnst/alloc.scm 916 */
																if (
																	(BgL_veczd2tagzd2_2263 ==
																		CNST_TABLE_REF(((long) 55))))
																	{	/* Cnst/alloc.scm 916 */
																		BgL_vectorzd2ze3listz31_2267 =
																			BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00;
																	}
																else
																	{	/* Cnst/alloc.scm 916 */
																		if (
																			(BgL_veczd2tagzd2_2263 ==
																				CNST_TABLE_REF(((long) 56))))
																			{	/* Cnst/alloc.scm 916 */
																				BgL_vectorzd2ze3listz31_2267 =
																					BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00;
																			}
																		else
																			{	/* Cnst/alloc.scm 916 */
																				if (
																					(BgL_veczd2tagzd2_2263 ==
																						CNST_TABLE_REF(((long) 57))))
																					{	/* Cnst/alloc.scm 916 */
																						BgL_vectorzd2ze3listz31_2267 =
																							BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00;
																					}
																				else
																					{	/* Cnst/alloc.scm 916 */
																						if (
																							(BgL_veczd2tagzd2_2263 ==
																								CNST_TABLE_REF(((long) 58))))
																							{	/* Cnst/alloc.scm 916 */
																								BgL_vectorzd2ze3listz31_2267 =
																									BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00;
																							}
																						else
																							{	/* Cnst/alloc.scm 916 */
																								if (
																									(BgL_veczd2tagzd2_2263 ==
																										CNST_TABLE_REF(((long)
																												59))))
																									{	/* Cnst/alloc.scm 916 */
																										BgL_vectorzd2ze3listz31_2267
																											=
																											BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00;
																									}
																								else
																									{	/* Cnst/alloc.scm 916 */
																										if (
																											(BgL_veczd2tagzd2_2263 ==
																												CNST_TABLE_REF(((long)
																														60))))
																											{	/* Cnst/alloc.scm 916 */
																												BgL_vectorzd2ze3listz31_2267
																													=
																													BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00;
																											}
																										else
																											{	/* Cnst/alloc.scm 916 */
																												BgL_vectorzd2ze3listz31_2267
																													= BUNSPEC;
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
								{	/* Cnst/alloc.scm 916 */

									{

										{	/* Cnst/alloc.scm 983 */
											obj_t BgL_oldz00_2271;

											{	/* Cnst/alloc.scm 983 */
												obj_t BgL__andtest_1236z00_2280;

												BgL__andtest_1236z00_2280 =
													BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
												if (CBOOL(BgL__andtest_1236z00_2280))
													{
														obj_t BgL_envz00_2282;

														BgL_envz00_2282 =
															BGl_za2vectorzd2envza2zd2zzcnst_allocz00;
													BgL_zc3z04anonymousza32165ze3z87_2283:
														if (NULLP(BgL_envz00_2282))
															{	/* Cnst/alloc.scm 986 */
																BgL_oldz00_2271 = BFALSE;
															}
														else
															{	/* Cnst/alloc.scm 988 */
																bool_t BgL_test2723z00_5456;

																{	/* Cnst/alloc.scm 988 */
																	obj_t BgL_arg2172z00_2289;

																	{	/* Cnst/alloc.scm 69 */
																		obj_t BgL_sz00_3360;

																		BgL_sz00_3360 =
																			CAR(((obj_t) BgL_envz00_2282));
																		BgL_arg2172z00_2289 =
																			STRUCT_REF(BgL_sz00_3360,
																			(int) (((long) 0)));
																	}
																	BgL_test2723z00_5456 =
																		BGl_cnstzd2equalzf3z21zzcnst_allocz00
																		(BgL_arg2172z00_2289, BgL_vecz00_70);
																}
																if (BgL_test2723z00_5456)
																	{	/* Cnst/alloc.scm 988 */
																		BgL_oldz00_2271 =
																			CAR(((obj_t) BgL_envz00_2282));
																	}
																else
																	{	/* Cnst/alloc.scm 991 */
																		obj_t BgL_arg2170z00_2288;

																		BgL_arg2170z00_2288 =
																			CDR(((obj_t) BgL_envz00_2282));
																		{
																			obj_t BgL_envz00_5466;

																			BgL_envz00_5466 = BgL_arg2170z00_2288;
																			BgL_envz00_2282 = BgL_envz00_5466;
																			goto
																				BgL_zc3z04anonymousza32165ze3z87_2283;
																		}
																	}
															}
													}
												else
													{	/* Cnst/alloc.scm 983 */
														BgL_oldz00_2271 = BFALSE;
													}
											}
											BGl_forcezd2initializa7ezd2srfi4zd2libraryzd2modulez12zb5zzcnst_allocz00
												();
											if (CBOOL(BgL_oldz00_2271))
												{	/* Cnst/alloc.scm 994 */
													if (
														(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
															CNST_TABLE_REF(((long) 14))))
														{	/* Cnst/alloc.scm 996 */
															BgL_varz00_bglt BgL_new1238z00_2273;

															{	/* Cnst/alloc.scm 997 */
																BgL_varz00_bglt BgL_new1237z00_2276;

																BgL_new1237z00_2276 =
																	((BgL_varz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_varz00_bgl))));
																{	/* Cnst/alloc.scm 997 */
																	long BgL_arg2162z00_2277;

																	{	/* Cnst/alloc.scm 997 */
																		long BgL_res2543z00_3364;

																		BgL_res2543z00_3364 =
																			BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																		BgL_arg2162z00_2277 = BgL_res2543z00_3364;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1237z00_2276),
																		BgL_arg2162z00_2277);
																}
																BgL_new1238z00_2273 = BgL_new1237z00_2276;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1238z00_2273)))->BgL_locz00) =
																((obj_t) BgL_locz00_71), BUNSPEC);
															{
																BgL_typez00_bglt BgL_auxz00_5479;

																{	/* Cnst/alloc.scm 999 */
																	BgL_typez00_bglt BgL_arg2160z00_2274;

																	BgL_arg2160z00_2274 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					STRUCT_REF(
																						((obj_t) BgL_oldz00_2271),
																						(int) (((long) 1))))))->
																		BgL_typez00);
																	BgL_auxz00_5479 =
																		BGl_strictzd2nodezd2typez00zzast_nodez00
																		(BgL_veczd2typezd2_2265,
																		BgL_arg2160z00_2274);
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1238z00_2273)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_5479),
																	BUNSPEC);
															}
															((((BgL_varz00_bglt)
																		COBJECT(BgL_new1238z00_2273))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																		STRUCT_REF(((obj_t) BgL_oldz00_2271),
																			(int) (((long) 1))))), BUNSPEC);
															return ((BgL_nodez00_bglt) BgL_new1238z00_2273);
														}
													else
														{	/* Cnst/alloc.scm 1001 */
															obj_t BgL_arg2163z00_2278;

															BgL_arg2163z00_2278 =
																STRUCT_REF(
																((obj_t) BgL_oldz00_2271), (int) (((long) 1)));
															return
																((BgL_nodez00_bglt)
																BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
																(BgL_arg2163z00_2278,
																	((obj_t) BgL_veczd2typezd2_2265),
																	BgL_locz00_71));
														}
												}
											else
												{	/* Cnst/alloc.scm 994 */
													if (
														(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
															CNST_TABLE_REF(((long) 14))))
														{
															BgL_varz00_bglt BgL_auxz00_5503;

															{	/* Cnst/alloc.scm 969 */
																BgL_globalz00_bglt BgL_varz00_2324;

																{	/* Cnst/alloc.scm 970 */
																	obj_t BgL_arg2204z00_2338;

																	BgL_arg2204z00_2338 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BGl_gensymz00zz__r4_symbols_6_4z00
																		(CNST_TABLE_REF(((long) 61))),
																		BgL_veczd2typezd2idz00_2264);
																	BgL_varz00_2324 =
																		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
																		(BgL_arg2204z00_2338,
																		BGl_za2moduleza2z00zzmodule_modulez00,
																		CNST_TABLE_REF(((long) 2)),
																		CNST_TABLE_REF(((long) 3)));
																}
																if (CBOOL
																	(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
																	{	/* Cnst/alloc.scm 975 */
																		obj_t BgL_arg2193z00_2325;

																		{	/* Cnst/alloc.scm 69 */
																			obj_t BgL_newz00_3349;

																			BgL_newz00_3349 =
																				create_struct(CNST_TABLE_REF(((long)
																						9)), (int) (((long) 2)));
																			{	/* Cnst/alloc.scm 69 */
																				obj_t BgL_auxz00_5517;
																				int BgL_tmpz00_5515;

																				BgL_auxz00_5517 =
																					((obj_t) BgL_varz00_2324);
																				BgL_tmpz00_5515 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_3349,
																					BgL_tmpz00_5515, BgL_auxz00_5517);
																			}
																			{	/* Cnst/alloc.scm 69 */
																				int BgL_tmpz00_5520;

																				BgL_tmpz00_5520 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_3349,
																					BgL_tmpz00_5520, BgL_vecz00_70);
																			}
																			BgL_arg2193z00_2325 = BgL_newz00_3349;
																		}
																		BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
																			MAKE_YOUNG_PAIR(BgL_arg2193z00_2325,
																			BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
																	}
																else
																	{	/* Cnst/alloc.scm 974 */
																		BFALSE;
																	}
																{	/* Cnst/alloc.scm 976 */
																	obj_t BgL_arg2194z00_2326;

																	{	/* Cnst/alloc.scm 976 */
																		obj_t BgL_arg2195z00_2327;

																		{	/* Cnst/alloc.scm 976 */
																			obj_t BgL_arg2196z00_2328;
																			obj_t BgL_arg2197z00_2329;

																			{	/* Cnst/alloc.scm 976 */
																				obj_t BgL_arg2198z00_2330;

																				{	/* Cnst/alloc.scm 976 */
																					obj_t BgL_arg2199z00_2331;
																					obj_t BgL_arg2200z00_2332;

																					BgL_arg2199z00_2331 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_varz00_2324)))->
																						BgL_idz00);
																					BgL_arg2200z00_2332 =
																						MAKE_YOUNG_PAIR(((
																								(BgL_globalz00_bglt)
																								COBJECT(BgL_varz00_2324))->
																							BgL_modulez00), BNIL);
																					BgL_arg2198z00_2330 =
																						MAKE_YOUNG_PAIR(BgL_arg2199z00_2331,
																						BgL_arg2200z00_2332);
																				}
																				BgL_arg2196z00_2328 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							12)), BgL_arg2198z00_2330);
																			}
																			{	/* Cnst/alloc.scm 977 */
																				BgL_nodez00_bglt BgL_arg2202z00_2334;

																				{	/* Cnst/alloc.scm 931 */
																					BgL_nodez00_bglt BgL_arg2175z00_2293;

																					{	/* Cnst/alloc.scm 931 */
																						BgL_letzd2varzd2_bglt
																							BgL_arg2176z00_2294;
																						BgL_typez00_bglt
																							BgL_arg2177z00_2295;
																						{	/* Cnst/alloc.scm 931 */
																							BgL_localz00_bglt BgL_varz00_2296;
																							obj_t BgL_lz00_2297;

																							BgL_varz00_2296 =
																								BGl_makezd2localzd2svarz00zzast_localz00
																								(CNST_TABLE_REF(((long) 48)),
																								BgL_veczd2typezd2_2265);
																							BgL_lz00_2297 =
																								PROCEDURE_ENTRY
																								(BgL_vectorzd2ze3listz31_2267)
																								(BgL_vectorzd2ze3listz31_2267,
																								BgL_vecz00_70, BEOA);
																							{	/* Cnst/alloc.scm 933 */
																								BgL_letzd2varzd2_bglt
																									BgL_new1225z00_2298;
																								{	/* Cnst/alloc.scm 934 */
																									BgL_letzd2varzd2_bglt
																										BgL_new1224z00_2318;
																									BgL_new1224z00_2318 =
																										((BgL_letzd2varzd2_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_letzd2varzd2_bgl))));
																									{	/* Cnst/alloc.scm 934 */
																										long BgL_arg2189z00_2319;

																										{	/* Cnst/alloc.scm 934 */
																											long BgL_res2533z00_3320;

																											BgL_res2533z00_3320 =
																												BGL_CLASS_INDEX
																												(BGl_letzd2varzd2zzast_nodez00);
																											BgL_arg2189z00_2319 =
																												BgL_res2533z00_3320;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1224z00_2318),
																											BgL_arg2189z00_2319);
																									}
																									{	/* Cnst/alloc.scm 934 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_5541;
																										BgL_tmpz00_5541 =
																											((BgL_objectz00_bglt)
																											BgL_new1224z00_2318);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_5541, BFALSE);
																									}
																									((BgL_objectz00_bglt)
																										BgL_new1224z00_2318);
																									BgL_new1225z00_2298 =
																										BgL_new1224z00_2318;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1225z00_2298)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_71),
																									BUNSPEC);
																								((((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_new1225z00_2298)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BGl_strictzd2nodezd2typez00zzast_nodez00
																										(BgL_veczd2typezd2_2265,
																											((BgL_typez00_bglt)
																												BGl_za2objza2z00zztype_cachez00))),
																									BUNSPEC);
																								((((BgL_nodezf2effectzf2_bglt)
																											COBJECT((
																													(BgL_nodezf2effectzf2_bglt)
																													BgL_new1225z00_2298)))->
																										BgL_sidezd2effectzd2) =
																									((obj_t) BUNSPEC), BUNSPEC);
																								((((BgL_nodezf2effectzf2_bglt)
																											COBJECT((
																													(BgL_nodezf2effectzf2_bglt)
																													BgL_new1225z00_2298)))->
																										BgL_keyz00) =
																									((obj_t) BINT(((long) -1))),
																									BUNSPEC);
																								{
																									obj_t BgL_auxz00_5556;

																									{	/* Cnst/alloc.scm 939 */
																										obj_t BgL_arg2178z00_2299;

																										{	/* Cnst/alloc.scm 939 */
																											BgL_appz00_bglt
																												BgL_arg2180z00_2301;
																											{	/* Cnst/alloc.scm 939 */
																												BgL_appz00_bglt
																													BgL_new1227z00_2302;
																												{	/* Cnst/alloc.scm 946 */
																													BgL_appz00_bglt
																														BgL_new1226z00_2313;
																													BgL_new1226z00_2313 =
																														((BgL_appz00_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_appz00_bgl))));
																													{	/* Cnst/alloc.scm 946 */
																														long
																															BgL_arg2187z00_2314;
																														{	/* Cnst/alloc.scm 946 */
																															long
																																BgL_res2534z00_3325;
																															{	/* Cnst/alloc.scm 946 */
																																obj_t
																																	BgL_classz00_3324;
																																BgL_classz00_3324
																																	=
																																	BGl_appz00zzast_nodez00;
																																BgL_res2534z00_3325
																																	=
																																	BGL_CLASS_INDEX
																																	(BgL_classz00_3324);
																															}
																															BgL_arg2187z00_2314
																																=
																																BgL_res2534z00_3325;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1226z00_2313), BgL_arg2187z00_2314);
																													}
																													{	/* Cnst/alloc.scm 946 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_5561;
																														BgL_tmpz00_5561 =
																															(
																															(BgL_objectz00_bglt)
																															BgL_new1226z00_2313);
																														BGL_OBJECT_WIDENING_SET
																															(BgL_tmpz00_5561,
																															BFALSE);
																													}
																													((BgL_objectz00_bglt)
																														BgL_new1226z00_2313);
																													BgL_new1227z00_2302 =
																														BgL_new1226z00_2313;
																												}
																												((((BgL_nodez00_bglt)
																															COBJECT((
																																	(BgL_nodez00_bglt)
																																	BgL_new1227z00_2302)))->
																														BgL_locz00) =
																													((obj_t)
																														BgL_locz00_71),
																													BUNSPEC);
																												((((BgL_nodez00_bglt)
																															COBJECT((
																																	(BgL_nodez00_bglt)
																																	BgL_new1227z00_2302)))->
																														BgL_typez00) =
																													((BgL_typez00_bglt)
																														BgL_veczd2typezd2_2265),
																													BUNSPEC);
																												((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1227z00_2302)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																												((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1227z00_2302)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																												{
																													BgL_varz00_bglt
																														BgL_auxz00_5574;
																													{	/* Cnst/alloc.scm 942 */
																														BgL_varz00_bglt
																															BgL_new1229z00_2303;
																														{	/* Cnst/alloc.scm 945 */
																															BgL_varz00_bglt
																																BgL_new1228z00_2305;
																															BgL_new1228z00_2305
																																=
																																(
																																(BgL_varz00_bglt)
																																BOBJECT
																																(GC_MALLOC
																																	(sizeof(struct
																																			BgL_varz00_bgl))));
																															{	/* Cnst/alloc.scm 945 */
																																long
																																	BgL_arg2182z00_2306;
																																{	/* Cnst/alloc.scm 945 */
																																	long
																																		BgL_res2535z00_3330;
																																	{	/* Cnst/alloc.scm 945 */
																																		obj_t
																																			BgL_classz00_3329;
																																		BgL_classz00_3329
																																			=
																																			BGl_varz00zzast_nodez00;
																																		BgL_res2535z00_3330
																																			=
																																			BGL_CLASS_INDEX
																																			(BgL_classz00_3329);
																																	}
																																	BgL_arg2182z00_2306
																																		=
																																		BgL_res2535z00_3330;
																																}
																																BGL_OBJECT_CLASS_NUM_SET
																																	(((BgL_objectz00_bglt) BgL_new1228z00_2305), BgL_arg2182z00_2306);
																															}
																															BgL_new1229z00_2303
																																=
																																BgL_new1228z00_2305;
																														}
																														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1229z00_2303)))->BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
																														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1229z00_2303)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_veczd2typezd2_2265), BUNSPEC);
																														((((BgL_varz00_bglt)
																																	COBJECT
																																	(BgL_new1229z00_2303))->
																																BgL_variablez00)
																															=
																															((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BGl_findzd2globalzd2zzast_envz00(BgL_listzd2ze3vectorz31_2266, BNIL))), BUNSPEC);
																														BgL_auxz00_5574 =
																															BgL_new1229z00_2303;
																													}
																													((((BgL_appz00_bglt)
																																COBJECT
																																(BgL_new1227z00_2302))->
																															BgL_funz00) =
																														((BgL_varz00_bglt)
																															BgL_auxz00_5574),
																														BUNSPEC);
																												}
																												{
																													obj_t BgL_auxz00_5587;

																													{	/* Cnst/alloc.scm 947 */
																														BgL_kwotez00_bglt
																															BgL_arg2183z00_2307;
																														{	/* Cnst/alloc.scm 947 */
																															BgL_kwotez00_bglt
																																BgL_new1231z00_2309;
																															{	/* Cnst/alloc.scm 951 */
																																BgL_kwotez00_bglt
																																	BgL_new1230z00_2311;
																																BgL_new1230z00_2311
																																	=
																																	(
																																	(BgL_kwotez00_bglt)
																																	BOBJECT
																																	(GC_MALLOC
																																		(sizeof
																																			(struct
																																				BgL_kwotez00_bgl))));
																																{	/* Cnst/alloc.scm 951 */
																																	long
																																		BgL_arg2186z00_2312;
																																	{	/* Cnst/alloc.scm 951 */
																																		long
																																			BgL_res2536z00_3334;
																																		{	/* Cnst/alloc.scm 951 */
																																			obj_t
																																				BgL_classz00_3333;
																																			BgL_classz00_3333
																																				=
																																				BGl_kwotez00zzast_nodez00;
																																			BgL_res2536z00_3334
																																				=
																																				BGL_CLASS_INDEX
																																				(BgL_classz00_3333);
																																		}
																																		BgL_arg2186z00_2312
																																			=
																																			BgL_res2536z00_3334;
																																	}
																																	BGL_OBJECT_CLASS_NUM_SET
																																		(((BgL_objectz00_bglt) BgL_new1230z00_2311), BgL_arg2186z00_2312);
																																}
																																{	/* Cnst/alloc.scm 951 */
																																	BgL_objectz00_bglt
																																		BgL_tmpz00_5592;
																																	BgL_tmpz00_5592
																																		=
																																		(
																																		(BgL_objectz00_bglt)
																																		BgL_new1230z00_2311);
																																	BGL_OBJECT_WIDENING_SET
																																		(BgL_tmpz00_5592,
																																		BFALSE);
																																}
																																((BgL_objectz00_bglt) BgL_new1230z00_2311);
																																BgL_new1231z00_2309
																																	=
																																	BgL_new1230z00_2311;
																															}
																															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1231z00_2309)))->BgL_locz00) = ((obj_t) BgL_locz00_71), BUNSPEC);
																															{
																																BgL_typez00_bglt
																																	BgL_auxz00_5598;
																																{	/* Cnst/alloc.scm 950 */
																																	BgL_typez00_bglt
																																		BgL_arg2185z00_2310;
																																	BgL_arg2185z00_2310
																																		=
																																		BGl_getzd2typezd2kwotez00zztype_typeofz00
																																		(BgL_lz00_2297);
																																	BgL_auxz00_5598
																																		=
																																		BGl_strictzd2nodezd2typez00zzast_nodez00
																																		(BgL_arg2185z00_2310,
																																		((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
																																}
																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1231z00_2309)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_5598), BUNSPEC);
																															}
																															((((BgL_kwotez00_bglt) COBJECT(BgL_new1231z00_2309))->BgL_valuez00) = ((obj_t) BgL_lz00_2297), BUNSPEC);
																															BgL_arg2183z00_2307
																																=
																																BgL_new1231z00_2309;
																														}
																														{	/* Cnst/alloc.scm 946 */
																															obj_t
																																BgL_list2184z00_2308;
																															BgL_list2184z00_2308
																																=
																																MAKE_YOUNG_PAIR(
																																((obj_t)
																																	BgL_arg2183z00_2307),
																																BNIL);
																															BgL_auxz00_5587 =
																																BgL_list2184z00_2308;
																													}}
																													((((BgL_appz00_bglt)
																																COBJECT
																																(BgL_new1227z00_2302))->
																															BgL_argsz00) =
																														((obj_t)
																															BgL_auxz00_5587),
																														BUNSPEC);
																												}
																												((((BgL_appz00_bglt)
																															COBJECT
																															(BgL_new1227z00_2302))->
																														BgL_stackablez00) =
																													((obj_t) BFALSE),
																													BUNSPEC);
																												BgL_arg2180z00_2301 =
																													BgL_new1227z00_2302;
																											}
																											BgL_arg2178z00_2299 =
																												MAKE_YOUNG_PAIR(
																												((obj_t)
																													BgL_varz00_2296),
																												((obj_t)
																													BgL_arg2180z00_2301));
																										}
																										{	/* Cnst/alloc.scm 937 */
																											obj_t
																												BgL_list2179z00_2300;
																											BgL_list2179z00_2300 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2178z00_2299,
																												BNIL);
																											BgL_auxz00_5556 =
																												BgL_list2179z00_2300;
																									}}
																									((((BgL_letzd2varzd2_bglt)
																												COBJECT
																												(BgL_new1225z00_2298))->
																											BgL_bindingsz00) =
																										((obj_t) BgL_auxz00_5556),
																										BUNSPEC);
																								}
																								{
																									BgL_nodez00_bglt
																										BgL_auxz00_5614;
																									{	/* Cnst/alloc.scm 952 */
																										BgL_varz00_bglt
																											BgL_new1233z00_2315;
																										{	/* Cnst/alloc.scm 953 */
																											BgL_varz00_bglt
																												BgL_new1232z00_2316;
																											BgL_new1232z00_2316 =
																												((BgL_varz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_varz00_bgl))));
																											{	/* Cnst/alloc.scm 953 */
																												long
																													BgL_arg2188z00_2317;
																												{	/* Cnst/alloc.scm 953 */
																													long
																														BgL_res2539z00_3341;
																													{	/* Cnst/alloc.scm 953 */
																														obj_t
																															BgL_classz00_3340;
																														BgL_classz00_3340 =
																															BGl_varz00zzast_nodez00;
																														BgL_res2539z00_3341
																															=
																															BGL_CLASS_INDEX
																															(BgL_classz00_3340);
																													}
																													BgL_arg2188z00_2317 =
																														BgL_res2539z00_3341;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1232z00_2316),
																													BgL_arg2188z00_2317);
																											}
																											BgL_new1233z00_2315 =
																												BgL_new1232z00_2316;
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1233z00_2315)))->
																												BgL_locz00) =
																											((obj_t) BgL_locz00_71),
																											BUNSPEC);
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1233z00_2315)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt)
																												BgL_veczd2typezd2_2265),
																											BUNSPEC);
																										((((BgL_varz00_bglt)
																													COBJECT
																													(BgL_new1233z00_2315))->
																												BgL_variablez00) =
																											((BgL_variablez00_bglt) (
																													(BgL_variablez00_bglt)
																													BgL_varz00_2296)),
																											BUNSPEC);
																										BgL_auxz00_5614 =
																											((BgL_nodez00_bglt)
																											BgL_new1233z00_2315);
																									}
																									((((BgL_letzd2varzd2_bglt)
																												COBJECT
																												(BgL_new1225z00_2298))->
																											BgL_bodyz00) =
																										((BgL_nodez00_bglt)
																											BgL_auxz00_5614),
																										BUNSPEC);
																								}
																								((((BgL_letzd2varzd2_bglt)
																											COBJECT
																											(BgL_new1225z00_2298))->
																										BgL_removablezf3zf3) =
																									((bool_t) ((bool_t) 1)),
																									BUNSPEC);
																								BgL_arg2176z00_2294 =
																									BgL_new1225z00_2298;
																						}}
																						BgL_arg2177z00_2295 =
																							BGl_strictzd2nodezd2typez00zzast_nodez00
																							(BgL_veczd2typezd2_2265,
																							((BgL_typez00_bglt)
																								BGl_za2objza2z00zztype_cachez00));
																						BgL_arg2175z00_2293 =
																							BGl_coercez12z12zzcoerce_coercez00
																							(((BgL_nodez00_bglt)
																								BgL_arg2176z00_2294), BUNSPEC,
																							BgL_arg2177z00_2295,
																							((bool_t) 0));
																					}
																					BgL_arg2202z00_2334 =
																						BGl_cnstz12z12zzcnst_nodez00
																						(BgL_arg2175z00_2293);
																				}
																				BgL_arg2197z00_2329 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg2202z00_2334), BNIL);
																			}
																			BgL_arg2195z00_2327 =
																				MAKE_YOUNG_PAIR(BgL_arg2196z00_2328,
																				BgL_arg2197z00_2329);
																		}
																		BgL_arg2194z00_2326 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					13)), BgL_arg2195z00_2327);
																	}
																	BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
																		MAKE_YOUNG_PAIR(BgL_arg2194z00_2326,
																		BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
																}
																{	/* Cnst/alloc.scm 978 */
																	BgL_varz00_bglt BgL_new1235z00_2335;

																	{	/* Cnst/alloc.scm 979 */
																		BgL_varz00_bglt BgL_new1234z00_2336;

																		BgL_new1234z00_2336 =
																			((BgL_varz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varz00_bgl))));
																		{	/* Cnst/alloc.scm 979 */
																			long BgL_arg2203z00_2337;

																			{	/* Cnst/alloc.scm 979 */
																				long BgL_res2541z00_3355;

																				BgL_res2541z00_3355 =
																					BGL_CLASS_INDEX
																					(BGl_varz00zzast_nodez00);
																				BgL_arg2203z00_2337 =
																					BgL_res2541z00_3355;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1234z00_2336),
																				BgL_arg2203z00_2337);
																		}
																		BgL_new1235z00_2335 = BgL_new1234z00_2336;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1235z00_2335)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_71), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1235z00_2335)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_veczd2typezd2_2265),
																		BUNSPEC);
																	((((BgL_varz00_bglt)
																				COBJECT(BgL_new1235z00_2335))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_varz00_2324)), BUNSPEC);
																	BgL_auxz00_5503 = BgL_new1235z00_2335;
															}}
															return ((BgL_nodez00_bglt) BgL_auxz00_5503);
														}
													else
														{
															BgL_appz00_bglt BgL_auxz00_5650;

															{	/* Cnst/alloc.scm 961 */
																long BgL_offsetz00_2321;

																BgL_offsetz00_2321 =
																	BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
																BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
																	(((long) 1) +
																	BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
																BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
																	MAKE_YOUNG_PAIR(BgL_vecz00_70,
																	BGl_za2globalzd2setza2zd2zzcnst_allocz00);
																if (CBOOL
																	(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
																	{	/* Cnst/alloc.scm 965 */
																		obj_t BgL_arg2191z00_2322;

																		{	/* Cnst/alloc.scm 69 */
																			obj_t BgL_newz00_3346;

																			BgL_newz00_3346 =
																				create_struct(CNST_TABLE_REF(((long)
																						9)), (int) (((long) 2)));
																			{	/* Cnst/alloc.scm 69 */
																				obj_t BgL_auxz00_5660;
																				int BgL_tmpz00_5658;

																				BgL_auxz00_5660 =
																					BINT(BgL_offsetz00_2321);
																				BgL_tmpz00_5658 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_3346,
																					BgL_tmpz00_5658, BgL_auxz00_5660);
																			}
																			{	/* Cnst/alloc.scm 69 */
																				int BgL_tmpz00_5663;

																				BgL_tmpz00_5663 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_3346,
																					BgL_tmpz00_5663, BgL_vecz00_70);
																			}
																			BgL_arg2191z00_2322 = BgL_newz00_3346;
																		}
																		BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
																			MAKE_YOUNG_PAIR(BgL_arg2191z00_2322,
																			BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
																	}
																else
																	{	/* Cnst/alloc.scm 964 */
																		BFALSE;
																	}
																BgL_auxz00_5650 =
																	BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
																	(BINT(BgL_offsetz00_2321),
																	((obj_t) BgL_veczd2typezd2_2265),
																	BgL_locz00_71);
															}
															return ((BgL_nodez00_bglt) BgL_auxz00_5650);
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



/* &cnst-alloc-homogenous-vector */
	BgL_nodez00_bglt
		BGl_z62cnstzd2alloczd2homogenouszd2vectorzb0zzcnst_allocz00(obj_t
		BgL_envz00_3579, obj_t BgL_vecz00_3580, obj_t BgL_locz00_3581)
	{
		{	/* Cnst/alloc.scm 908 */
			return
				BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00
				(BgL_vecz00_3580, BgL_locz00_3581);
		}

	}



/* force-initialize-srfi4-library-module! */
	obj_t
		BGl_forcezd2initializa7ezd2srfi4zd2libraryzd2modulez12zb5zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 1010 */
			{	/* Cnst/alloc.scm 1013 */
				obj_t BgL_gz00_2364;

				BgL_gz00_2364 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 62)), BNIL);
				{	/* Cnst/alloc.scm 1015 */
					obj_t BgL_arg2222z00_2365;

					BgL_arg2222z00_2365 =
						(((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_gz00_2364)))->BgL_modulez00);
					return
						BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00
						(BgL_arg2222z00_2365);
				}
			}
		}

	}



/* cnst-alloc-tvector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t BgL_tvecz00_72,
		obj_t BgL_locz00_73)
	{
		{	/* Cnst/alloc.scm 1020 */
			{

				if (BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(BgL_tvecz00_72))
					{
						BgL_varz00_bglt BgL_auxz00_5679;

						{	/* Cnst/alloc.scm 1022 */
							BgL_globalz00_bglt BgL_varz00_2371;

							{	/* Cnst/alloc.scm 1022 */
								obj_t BgL_arg2242z00_2394;

								{	/* Cnst/alloc.scm 1022 */
									obj_t BgL_arg2243z00_2395;

									BgL_arg2243z00_2395 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												63)));
									BgL_arg2242z00_2394 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_arg2243z00_2395, CNST_TABLE_REF(((long) 64)));
								}
								BgL_varz00_2371 =
									BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
									(BgL_arg2242z00_2394, BGl_za2moduleza2z00zzmodule_modulez00,
									BgL_tvecz00_72, CNST_TABLE_REF(((long) 65)), BgL_locz00_73);
							}
							{	/* Cnst/alloc.scm 1027 */
								obj_t BgL_idz00_2372;

								BgL_idz00_2372 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt)
												STRUCT_REF(
													((obj_t) BgL_tvecz00_72),
													(int) (((long) 0))))))->BgL_idz00);
								{	/* Cnst/alloc.scm 1027 */
									BgL_nodez00_bglt BgL_aidz00_2373;

									{	/* Cnst/alloc.scm 1028 */
										BgL_kwotez00_bglt BgL_arg2236z00_2384;

										{	/* Cnst/alloc.scm 1028 */
											BgL_kwotez00_bglt BgL_new1240z00_2385;

											{	/* Cnst/alloc.scm 1029 */
												BgL_kwotez00_bglt BgL_new1239z00_2388;

												BgL_new1239z00_2388 =
													((BgL_kwotez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_kwotez00_bgl))));
												{	/* Cnst/alloc.scm 1029 */
													long BgL_arg2239z00_2389;

													{	/* Cnst/alloc.scm 1029 */
														long BgL_res2544z00_3375;

														BgL_res2544z00_3375 =
															BGL_CLASS_INDEX(BGl_kwotez00zzast_nodez00);
														BgL_arg2239z00_2389 = BgL_res2544z00_3375;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1239z00_2388),
														BgL_arg2239z00_2389);
												}
												{	/* Cnst/alloc.scm 1029 */
													BgL_objectz00_bglt BgL_tmpz00_5695;

													BgL_tmpz00_5695 =
														((BgL_objectz00_bglt) BgL_new1239z00_2388);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5695, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1239z00_2388);
												BgL_new1240z00_2385 = BgL_new1239z00_2388;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1240z00_2385)))->
													BgL_locz00) = ((obj_t) BgL_locz00_73), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_5701;

												{	/* Cnst/alloc.scm 1031 */
													BgL_typez00_bglt BgL_arg2237z00_2386;
													BgL_typez00_bglt BgL_arg2238z00_2387;

													BgL_arg2237z00_2386 =
														BGl_getzd2typezd2kwotez00zztype_typeofz00
														(BgL_idz00_2372);
													BgL_arg2238z00_2387 =
														BGl_getzd2defaultzd2typez00zztype_cachez00();
													BgL_auxz00_5701 =
														BGl_strictzd2nodezd2typez00zzast_nodez00
														(BgL_arg2237z00_2386, BgL_arg2238z00_2387);
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1240z00_2385)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_5701), BUNSPEC);
											}
											((((BgL_kwotez00_bglt) COBJECT(BgL_new1240z00_2385))->
													BgL_valuez00) = ((obj_t) BgL_idz00_2372), BUNSPEC);
											BgL_arg2236z00_2384 = BgL_new1240z00_2385;
										}
										BgL_aidz00_2373 =
											BGl_cnstz12z12zzcnst_nodez00(
											((BgL_nodez00_bglt) BgL_arg2236z00_2384));
									}
									{	/* Cnst/alloc.scm 1028 */

										{	/* Cnst/alloc.scm 1037 */
											obj_t BgL_arg2226z00_2374;

											{	/* Cnst/alloc.scm 1037 */
												obj_t BgL_arg2227z00_2375;

												{	/* Cnst/alloc.scm 1037 */
													obj_t BgL_arg2228z00_2376;
													obj_t BgL_arg2229z00_2377;

													{	/* Cnst/alloc.scm 1037 */
														obj_t BgL_arg2230z00_2378;

														{	/* Cnst/alloc.scm 1037 */
															obj_t BgL_arg2231z00_2379;
															obj_t BgL_arg2232z00_2380;

															BgL_arg2231z00_2379 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_2371)))->
																BgL_idz00);
															BgL_arg2232z00_2380 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_2371))->BgL_modulez00),
																BNIL);
															BgL_arg2230z00_2378 =
																MAKE_YOUNG_PAIR(BgL_arg2231z00_2379,
																BgL_arg2232z00_2380);
														}
														BgL_arg2228z00_2376 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg2230z00_2378);
													}
													{	/* Cnst/alloc.scm 1038 */
														obj_t BgL_arg2234z00_2382;

														{	/* Cnst/alloc.scm 1038 */
															obj_t BgL_arg2235z00_2383;

															BgL_arg2235z00_2383 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_aidz00_2373), BNIL);
															BgL_arg2234z00_2382 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 66)),
																BgL_arg2235z00_2383);
														}
														BgL_arg2229z00_2377 =
															MAKE_YOUNG_PAIR(BgL_arg2234z00_2382, BNIL);
													}
													BgL_arg2227z00_2375 =
														MAKE_YOUNG_PAIR(BgL_arg2228z00_2376,
														BgL_arg2229z00_2377);
												}
												BgL_arg2226z00_2374 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 67)),
													BgL_arg2227z00_2375);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg2226z00_2374,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
							}}}}
							{	/* Cnst/alloc.scm 1039 */
								BgL_varz00_bglt BgL_new1242z00_2391;

								{	/* Cnst/alloc.scm 1040 */
									BgL_varz00_bglt BgL_new1241z00_2392;

									BgL_new1241z00_2392 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Cnst/alloc.scm 1040 */
										long BgL_arg2241z00_2393;

										{	/* Cnst/alloc.scm 1040 */
											long BgL_res2545z00_3382;

											BgL_res2545z00_3382 =
												BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
											BgL_arg2241z00_2393 = BgL_res2545z00_3382;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1241z00_2392),
											BgL_arg2241z00_2393);
									}
									BgL_new1242z00_2391 = BgL_new1241z00_2392;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1242z00_2391)))->
										BgL_locz00) = ((obj_t) BgL_locz00_73), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1242z00_2391)))->BgL_typez00) =
									((BgL_typez00_bglt) (((BgL_variablez00_bglt)
												COBJECT(((BgL_variablez00_bglt) BgL_varz00_2371)))->
											BgL_typez00)), BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1242z00_2391))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
											BgL_varz00_2371)), BUNSPEC);
								BgL_auxz00_5679 = BgL_new1242z00_2391;
						}}
						return ((BgL_nodez00_bglt) BgL_auxz00_5679);
					}
				else
					{
						BgL_appz00_bglt BgL_auxz00_5739;

						BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string2601z00zzcnst_allocz00,
							BGl_string2602z00zzcnst_allocz00, BgL_tvecz00_72);
						{	/* Cnst/alloc.scm 1047 */
							long BgL_offsetz00_2397;

							BgL_offsetz00_2397 = BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
							BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
								(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
							BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
								MAKE_YOUNG_PAIR(BgL_tvecz00_72,
								BGl_za2globalzd2setza2zd2zzcnst_allocz00);
							{	/* Cnst/alloc.scm 1050 */
								obj_t BgL_arg2245z00_2398;

								BgL_arg2245z00_2398 =
									STRUCT_REF(((obj_t) BgL_tvecz00_72), (int) (((long) 0)));
								BgL_auxz00_5739 =
									BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
									(BgL_offsetz00_2397), BgL_arg2245z00_2398, BgL_locz00_73);
						}}
						return ((BgL_nodez00_bglt) BgL_auxz00_5739);
					}
			}
		}

	}



/* &cnst-alloc-tvector */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2tvectorz62zzcnst_allocz00(obj_t
		BgL_envz00_3602, obj_t BgL_tvecz00_3603, obj_t BgL_locz00_3604)
	{
		{	/* Cnst/alloc.scm 1020 */
			return
				BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(BgL_tvecz00_3603,
				BgL_locz00_3604);
		}

	}



/* cnst-alloc-struct */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t BgL_structz00_74,
		obj_t BgL_locz00_75)
	{
		{	/* Cnst/alloc.scm 1058 */
			{

				{	/* Cnst/alloc.scm 1110 */
					obj_t BgL_oldz00_2404;

					{	/* Cnst/alloc.scm 1110 */
						obj_t BgL__andtest_1256z00_2412;

						BgL__andtest_1256z00_2412 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_1256z00_2412))
							{
								obj_t BgL_envz00_2414;

								BgL_envz00_2414 = BGl_za2structzd2envza2zd2zzcnst_allocz00;
							BgL_zc3z04anonymousza32251ze3z87_2415:
								if (NULLP(BgL_envz00_2414))
									{	/* Cnst/alloc.scm 1113 */
										BgL_oldz00_2404 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 1115 */
										bool_t BgL_test2732z00_5754;

										{	/* Cnst/alloc.scm 1115 */
											obj_t BgL_arg2257z00_2421;

											{	/* Cnst/alloc.scm 69 */
												obj_t BgL_sz00_3433;

												BgL_sz00_3433 = CAR(((obj_t) BgL_envz00_2414));
												BgL_arg2257z00_2421 =
													STRUCT_REF(BgL_sz00_3433, (int) (((long) 0)));
											}
											BgL_test2732z00_5754 =
												BGl_cnstzd2equalzf3z21zzcnst_allocz00
												(BgL_arg2257z00_2421, BgL_structz00_74);
										}
										if (BgL_test2732z00_5754)
											{	/* Cnst/alloc.scm 1115 */
												BgL_oldz00_2404 = CAR(((obj_t) BgL_envz00_2414));
											}
										else
											{	/* Cnst/alloc.scm 1118 */
												obj_t BgL_arg2256z00_2420;

												BgL_arg2256z00_2420 = CDR(((obj_t) BgL_envz00_2414));
												{
													obj_t BgL_envz00_5764;

													BgL_envz00_5764 = BgL_arg2256z00_2420;
													BgL_envz00_2414 = BgL_envz00_5764;
													goto BgL_zc3z04anonymousza32251ze3z87_2415;
												}
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 1110 */
								BgL_oldz00_2404 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_2404))
						{	/* Cnst/alloc.scm 1120 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 1122 */
									BgL_varz00_bglt BgL_new1258z00_2406;

									{	/* Cnst/alloc.scm 1123 */
										BgL_varz00_bglt BgL_new1257z00_2408;

										BgL_new1257z00_2408 =
											((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_varz00_bgl))));
										{	/* Cnst/alloc.scm 1123 */
											long BgL_arg2248z00_2409;

											{	/* Cnst/alloc.scm 1123 */
												long BgL_res2557z00_3437;

												BgL_res2557z00_3437 =
													BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
												BgL_arg2248z00_2409 = BgL_res2557z00_3437;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1257z00_2408),
												BgL_arg2248z00_2409);
										}
										BgL_new1258z00_2406 = BgL_new1257z00_2408;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1258z00_2406)))->
											BgL_locz00) = ((obj_t) BgL_locz00_75), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1258z00_2406)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) STRUCT_REF(((obj_t)
																	BgL_oldz00_2404),
																(int) (((long) 1))))))->BgL_typez00)), BUNSPEC);
									((((BgL_varz00_bglt) COBJECT(BgL_new1258z00_2406))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
												STRUCT_REF(((obj_t) BgL_oldz00_2404),
													(int) (((long) 1))))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1258z00_2406);
								}
							else
								{	/* Cnst/alloc.scm 1126 */
									obj_t BgL_arg2249z00_2410;

									BgL_arg2249z00_2410 =
										STRUCT_REF(((obj_t) BgL_oldz00_2404), (int) (((long) 1)));
									return
										((BgL_nodez00_bglt)
										BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg2249z00_2410, BGl_za2structza2z00zztype_cachez00,
											BgL_locz00_75));
								}
						}
					else
						{	/* Cnst/alloc.scm 1120 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{
									BgL_varz00_bglt BgL_auxz00_5797;

									{	/* Cnst/alloc.scm 1098 */
										BgL_globalz00_bglt BgL_varz00_2455;

										{	/* Cnst/alloc.scm 1098 */
											obj_t BgL_arg2291z00_2469;

											{	/* Cnst/alloc.scm 1098 */
												obj_t BgL_arg2292z00_2470;

												BgL_arg2292z00_2470 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 68)));
												BgL_arg2291z00_2469 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg2292z00_2470, CNST_TABLE_REF(((long) 68)));
											}
											BgL_varz00_2455 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg2291z00_2469,
												BGl_za2moduleza2z00zzmodule_modulez00,
												CNST_TABLE_REF(((long) 69)),
												CNST_TABLE_REF(((long) 3)));
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 1103 */
												obj_t BgL_arg2280z00_2456;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3421;

													BgL_newz00_3421 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_5812;
														int BgL_tmpz00_5810;

														BgL_auxz00_5812 = ((obj_t) BgL_varz00_2455);
														BgL_tmpz00_5810 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3421, BgL_tmpz00_5810,
															BgL_auxz00_5812);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_5815;

														BgL_tmpz00_5815 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3421, BgL_tmpz00_5815,
															BgL_structz00_74);
													}
													BgL_arg2280z00_2456 = BgL_newz00_3421;
												}
												BGl_za2structzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2280z00_2456,
													BGl_za2structzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 1102 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 1104 */
											obj_t BgL_arg2281z00_2457;

											{	/* Cnst/alloc.scm 1104 */
												obj_t BgL_arg2282z00_2458;

												{	/* Cnst/alloc.scm 1104 */
													obj_t BgL_arg2283z00_2459;
													obj_t BgL_arg2284z00_2460;

													{	/* Cnst/alloc.scm 1104 */
														obj_t BgL_arg2285z00_2461;

														{	/* Cnst/alloc.scm 1104 */
															obj_t BgL_arg2286z00_2462;
															obj_t BgL_arg2287z00_2463;

															BgL_arg2286z00_2462 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_varz00_2455)))->
																BgL_idz00);
															BgL_arg2287z00_2463 =
																MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																		COBJECT(BgL_varz00_2455))->BgL_modulez00),
																BNIL);
															BgL_arg2285z00_2461 =
																MAKE_YOUNG_PAIR(BgL_arg2286z00_2462,
																BgL_arg2287z00_2463);
														}
														BgL_arg2283z00_2459 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg2285z00_2461);
													}
													{	/* Cnst/alloc.scm 1105 */
														BgL_nodez00_bglt BgL_arg2289z00_2465;

														{	/* Cnst/alloc.scm 1062 */
															BgL_nodez00_bglt BgL_arg2260z00_2425;

															{	/* Cnst/alloc.scm 1062 */
																BgL_letzd2varzd2_bglt BgL_arg2261z00_2426;
																BgL_typez00_bglt BgL_arg2262z00_2427;

																{	/* Cnst/alloc.scm 1062 */
																	BgL_localz00_bglt BgL_varz00_2428;
																	obj_t BgL_lz00_2429;

																	BgL_varz00_2428 =
																		BGl_makezd2localzd2svarz00zzast_localz00
																		(CNST_TABLE_REF(((long) 48)),
																		((BgL_typez00_bglt)
																			BGl_za2structza2z00zztype_cachez00));
																	BgL_lz00_2429 =
																		BGl_structzd2ze3listz31zz__structurez00
																		(BgL_structz00_74);
																	{	/* Cnst/alloc.scm 1064 */
																		BgL_letzd2varzd2_bglt BgL_new1245z00_2430;

																		{	/* Cnst/alloc.scm 1065 */
																			BgL_letzd2varzd2_bglt BgL_new1243z00_2449;

																			BgL_new1243z00_2449 =
																				((BgL_letzd2varzd2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_letzd2varzd2_bgl))));
																			{	/* Cnst/alloc.scm 1065 */
																				long BgL_arg2276z00_2450;

																				{	/* Cnst/alloc.scm 1065 */
																					long BgL_res2547z00_3390;

																					BgL_res2547z00_3390 =
																						BGL_CLASS_INDEX
																						(BGl_letzd2varzd2zzast_nodez00);
																					BgL_arg2276z00_2450 =
																						BgL_res2547z00_3390;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1243z00_2449),
																					BgL_arg2276z00_2450);
																			}
																			{	/* Cnst/alloc.scm 1065 */
																				BgL_objectz00_bglt BgL_tmpz00_5834;

																				BgL_tmpz00_5834 =
																					((BgL_objectz00_bglt)
																					BgL_new1243z00_2449);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5834,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1243z00_2449);
																			BgL_new1245z00_2430 = BgL_new1243z00_2449;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1245z00_2430)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_75), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1245z00_2430)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt)
																				BGl_strictzd2nodezd2typez00zzast_nodez00
																				(((BgL_typez00_bglt)
																						BGl_za2structza2z00zztype_cachez00),
																					((BgL_typez00_bglt)
																						BGl_za2objza2z00zztype_cachez00))),
																			BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1245z00_2430)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1245z00_2430)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		{
																			obj_t BgL_auxz00_5850;

																			{	/* Cnst/alloc.scm 1070 */
																				obj_t BgL_arg2263z00_2431;

																				{	/* Cnst/alloc.scm 1070 */
																					BgL_appz00_bglt BgL_arg2265z00_2433;

																					{	/* Cnst/alloc.scm 1070 */
																						BgL_appz00_bglt BgL_new1247z00_2434;

																						{	/* Cnst/alloc.scm 1077 */
																							BgL_appz00_bglt
																								BgL_new1246z00_2444;
																							BgL_new1246z00_2444 =
																								((BgL_appz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_appz00_bgl))));
																							{	/* Cnst/alloc.scm 1077 */
																								long BgL_arg2273z00_2445;

																								{	/* Cnst/alloc.scm 1077 */
																									long BgL_res2548z00_3395;

																									{	/* Cnst/alloc.scm 1077 */
																										obj_t BgL_classz00_3394;

																										BgL_classz00_3394 =
																											BGl_appz00zzast_nodez00;
																										BgL_res2548z00_3395 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3394);
																									}
																									BgL_arg2273z00_2445 =
																										BgL_res2548z00_3395;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1246z00_2444),
																									BgL_arg2273z00_2445);
																							}
																							{	/* Cnst/alloc.scm 1077 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_5855;
																								BgL_tmpz00_5855 =
																									((BgL_objectz00_bglt)
																									BgL_new1246z00_2444);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_5855, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1246z00_2444);
																							BgL_new1247z00_2434 =
																								BgL_new1246z00_2444;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1247z00_2434)))->
																								BgL_locz00) =
																							((obj_t) BgL_locz00_75), BUNSPEC);
																						((((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_new1247z00_2434)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BGl_za2structza2z00zztype_cachez00)),
																							BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1247z00_2434)))->
																								BgL_sidezd2effectzd2) =
																							((obj_t) BUNSPEC), BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1247z00_2434)))->
																								BgL_keyz00) =
																							((obj_t) BINT(((long) -1))),
																							BUNSPEC);
																						{
																							BgL_varz00_bglt BgL_auxz00_5869;

																							{	/* Cnst/alloc.scm 1073 */
																								BgL_varz00_bglt
																									BgL_new1249z00_2435;
																								{	/* Cnst/alloc.scm 1076 */
																									BgL_varz00_bglt
																										BgL_new1248z00_2436;
																									BgL_new1248z00_2436 =
																										((BgL_varz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varz00_bgl))));
																									{	/* Cnst/alloc.scm 1076 */
																										long BgL_arg2267z00_2437;

																										{	/* Cnst/alloc.scm 1076 */
																											long BgL_res2549z00_3400;

																											{	/* Cnst/alloc.scm 1076 */
																												obj_t BgL_classz00_3399;

																												BgL_classz00_3399 =
																													BGl_varz00zzast_nodez00;
																												BgL_res2549z00_3400 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_3399);
																											}
																											BgL_arg2267z00_2437 =
																												BgL_res2549z00_3400;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1248z00_2436),
																											BgL_arg2267z00_2437);
																									}
																									BgL_new1249z00_2435 =
																										BgL_new1248z00_2436;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1249z00_2435)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_75),
																									BUNSPEC);
																								{
																									BgL_typez00_bglt
																										BgL_auxz00_5876;
																									{	/* Cnst/alloc.scm 1075 */
																										BgL_variablez00_bglt
																											BgL_oz00_3403;
																										BgL_oz00_3403 =
																											((BgL_variablez00_bglt)
																											BGl_za2listzd2ze3structza2z31zzcnst_cachez00);
																										BgL_auxz00_5876 =
																											(((BgL_variablez00_bglt)
																												COBJECT
																												(BgL_oz00_3403))->
																											BgL_typez00);
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1249z00_2435)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_auxz00_5876),
																										BUNSPEC);
																								}
																								((((BgL_varz00_bglt)
																											COBJECT
																											(BgL_new1249z00_2435))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BGl_za2listzd2ze3structza2z31zzcnst_cachez00)),
																									BUNSPEC);
																								BgL_auxz00_5869 =
																									BgL_new1249z00_2435;
																							}
																							((((BgL_appz00_bglt)
																										COBJECT
																										(BgL_new1247z00_2434))->
																									BgL_funz00) =
																								((BgL_varz00_bglt)
																									BgL_auxz00_5869), BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_5884;

																							{	/* Cnst/alloc.scm 1078 */
																								BgL_kwotez00_bglt
																									BgL_arg2268z00_2438;
																								{	/* Cnst/alloc.scm 1078 */
																									BgL_kwotez00_bglt
																										BgL_new1251z00_2440;
																									{	/* Cnst/alloc.scm 1082 */
																										BgL_kwotez00_bglt
																											BgL_new1250z00_2442;
																										BgL_new1250z00_2442 =
																											((BgL_kwotez00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_kwotez00_bgl))));
																										{	/* Cnst/alloc.scm 1082 */
																											long BgL_arg2272z00_2443;

																											{	/* Cnst/alloc.scm 1082 */
																												long
																													BgL_res2550z00_3405;
																												{	/* Cnst/alloc.scm 1082 */
																													obj_t
																														BgL_classz00_3404;
																													BgL_classz00_3404 =
																														BGl_kwotez00zzast_nodez00;
																													BgL_res2550z00_3405 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_3404);
																												}
																												BgL_arg2272z00_2443 =
																													BgL_res2550z00_3405;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1250z00_2442),
																												BgL_arg2272z00_2443);
																										}
																										{	/* Cnst/alloc.scm 1082 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_5889;
																											BgL_tmpz00_5889 =
																												((BgL_objectz00_bglt)
																												BgL_new1250z00_2442);
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_5889,
																												BFALSE);
																										}
																										((BgL_objectz00_bglt)
																											BgL_new1250z00_2442);
																										BgL_new1251z00_2440 =
																											BgL_new1250z00_2442;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1251z00_2440)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_75),
																										BUNSPEC);
																									{
																										BgL_typez00_bglt
																											BgL_auxz00_5895;
																										{	/* Cnst/alloc.scm 1081 */
																											BgL_typez00_bglt
																												BgL_arg2270z00_2441;
																											BgL_arg2270z00_2441 =
																												BGl_getzd2typezd2kwotez00zztype_typeofz00
																												(BgL_lz00_2429);
																											BgL_auxz00_5895 =
																												BGl_strictzd2nodezd2typez00zzast_nodez00
																												(BgL_arg2270z00_2441,
																												((BgL_typez00_bglt)
																													BGl_za2objza2z00zztype_cachez00));
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1251z00_2440)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt)
																												BgL_auxz00_5895),
																											BUNSPEC);
																									}
																									((((BgL_kwotez00_bglt)
																												COBJECT
																												(BgL_new1251z00_2440))->
																											BgL_valuez00) =
																										((obj_t) BgL_lz00_2429),
																										BUNSPEC);
																									BgL_arg2268z00_2438 =
																										BgL_new1251z00_2440;
																								}
																								{	/* Cnst/alloc.scm 1077 */
																									obj_t BgL_list2269z00_2439;

																									BgL_list2269z00_2439 =
																										MAKE_YOUNG_PAIR(
																										((obj_t)
																											BgL_arg2268z00_2438),
																										BNIL);
																									BgL_auxz00_5884 =
																										BgL_list2269z00_2439;
																							}}
																							((((BgL_appz00_bglt)
																										COBJECT
																										(BgL_new1247z00_2434))->
																									BgL_argsz00) =
																								((obj_t) BgL_auxz00_5884),
																								BUNSPEC);
																						}
																						((((BgL_appz00_bglt)
																									COBJECT
																									(BgL_new1247z00_2434))->
																								BgL_stackablez00) =
																							((obj_t) BFALSE), BUNSPEC);
																						BgL_arg2265z00_2433 =
																							BgL_new1247z00_2434;
																					}
																					BgL_arg2263z00_2431 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_varz00_2428),
																						((obj_t) BgL_arg2265z00_2433));
																				}
																				{	/* Cnst/alloc.scm 1068 */
																					obj_t BgL_list2264z00_2432;

																					BgL_list2264z00_2432 =
																						MAKE_YOUNG_PAIR(BgL_arg2263z00_2431,
																						BNIL);
																					BgL_auxz00_5850 =
																						BgL_list2264z00_2432;
																			}}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1245z00_2430))->
																					BgL_bindingsz00) =
																				((obj_t) BgL_auxz00_5850), BUNSPEC);
																		}
																		{
																			BgL_nodez00_bglt BgL_auxz00_5911;

																			{	/* Cnst/alloc.scm 1083 */
																				BgL_varz00_bglt BgL_new1253z00_2446;

																				{	/* Cnst/alloc.scm 1084 */
																					BgL_varz00_bglt BgL_new1252z00_2447;

																					BgL_new1252z00_2447 =
																						((BgL_varz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_varz00_bgl))));
																					{	/* Cnst/alloc.scm 1084 */
																						long BgL_arg2275z00_2448;

																						{	/* Cnst/alloc.scm 1084 */
																							long BgL_res2553z00_3412;

																							{	/* Cnst/alloc.scm 1084 */
																								obj_t BgL_classz00_3411;

																								BgL_classz00_3411 =
																									BGl_varz00zzast_nodez00;
																								BgL_res2553z00_3412 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_3411);
																							}
																							BgL_arg2275z00_2448 =
																								BgL_res2553z00_3412;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1252z00_2447),
																							BgL_arg2275z00_2448);
																					}
																					BgL_new1253z00_2446 =
																						BgL_new1252z00_2447;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1253z00_2446)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_75), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1253z00_2446)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) ((
																								(BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_varz00_2428)))->
																							BgL_typez00)), BUNSPEC);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_new1253z00_2446))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt) (
																							(BgL_variablez00_bglt)
																							BgL_varz00_2428)), BUNSPEC);
																				BgL_auxz00_5911 =
																					((BgL_nodez00_bglt)
																					BgL_new1253z00_2446);
																			}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1245z00_2430))->
																					BgL_bodyz00) =
																				((BgL_nodez00_bglt) BgL_auxz00_5911),
																				BUNSPEC);
																		}
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1245z00_2430))->
																				BgL_removablezf3zf3) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																		BgL_arg2261z00_2426 = BgL_new1245z00_2430;
																}}
																BgL_arg2262z00_2427 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00(
																	((BgL_typez00_bglt)
																		BGl_za2structza2z00zztype_cachez00),
																	((BgL_typez00_bglt)
																		BGl_za2objza2z00zztype_cachez00));
																BgL_arg2260z00_2425 =
																	BGl_coercez12z12zzcoerce_coercez00((
																		(BgL_nodez00_bglt) BgL_arg2261z00_2426),
																	BUNSPEC, BgL_arg2262z00_2427, ((bool_t) 0));
															}
															BgL_arg2289z00_2465 =
																BGl_cnstz12z12zzcnst_nodez00
																(BgL_arg2260z00_2425);
														}
														BgL_arg2284z00_2460 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg2289z00_2465), BNIL);
													}
													BgL_arg2282z00_2458 =
														MAKE_YOUNG_PAIR(BgL_arg2283z00_2459,
														BgL_arg2284z00_2460);
												}
												BgL_arg2281z00_2457 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
													BgL_arg2282z00_2458);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_YOUNG_PAIR(BgL_arg2281z00_2457,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 1106 */
											BgL_varz00_bglt BgL_new1255z00_2466;

											{	/* Cnst/alloc.scm 1107 */
												BgL_varz00_bglt BgL_new1254z00_2467;

												BgL_new1254z00_2467 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Cnst/alloc.scm 1107 */
													long BgL_arg2290z00_2468;

													{	/* Cnst/alloc.scm 1107 */
														long BgL_res2555z00_3427;

														BgL_res2555z00_3427 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg2290z00_2468 = BgL_res2555z00_3427;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1254z00_2467),
														BgL_arg2290z00_2468);
												}
												BgL_new1255z00_2466 = BgL_new1254z00_2467;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1255z00_2466)))->
													BgL_locz00) = ((obj_t) BgL_locz00_75), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1255z00_2466)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt)
																	BgL_varz00_2455)))->BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1255z00_2466))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_2455)), BUNSPEC);
											BgL_auxz00_5797 = BgL_new1255z00_2466;
									}}
									return ((BgL_nodez00_bglt) BgL_auxz00_5797);
								}
							else
								{
									BgL_appz00_bglt BgL_auxz00_5952;

									{	/* Cnst/alloc.scm 1091 */
										long BgL_offsetz00_2452;

										BgL_offsetz00_2452 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_YOUNG_PAIR(BgL_structz00_74,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 1095 */
												obj_t BgL_arg2278z00_2453;

												{	/* Cnst/alloc.scm 69 */
													obj_t BgL_newz00_3418;

													BgL_newz00_3418 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 69 */
														obj_t BgL_auxz00_5962;
														int BgL_tmpz00_5960;

														BgL_auxz00_5962 = BINT(BgL_offsetz00_2452);
														BgL_tmpz00_5960 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_3418, BgL_tmpz00_5960,
															BgL_auxz00_5962);
													}
													{	/* Cnst/alloc.scm 69 */
														int BgL_tmpz00_5965;

														BgL_tmpz00_5965 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_3418, BgL_tmpz00_5965,
															BgL_structz00_74);
													}
													BgL_arg2278z00_2453 = BgL_newz00_3418;
												}
												BGl_za2structzd2envza2zd2zzcnst_allocz00 =
													MAKE_YOUNG_PAIR(BgL_arg2278z00_2453,
													BGl_za2structzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 1094 */
												BFALSE;
											}
										BgL_auxz00_5952 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_2452), BGl_za2structza2z00zztype_cachez00,
											BgL_locz00_75);
									}
									return ((BgL_nodez00_bglt) BgL_auxz00_5952);
								}
						}
				}
			}
		}

	}



/* &cnst-alloc-struct */
	BgL_nodez00_bglt BGl_z62cnstzd2alloczd2structz62zzcnst_allocz00(obj_t
		BgL_envz00_3605, obj_t BgL_structz00_3606, obj_t BgL_locz00_3607)
	{
		{	/* Cnst/alloc.scm 1058 */
			return
				BGl_cnstzd2alloczd2structz00zzcnst_allocz00(BgL_structz00_3606,
				BgL_locz00_3607);
		}

	}



/* cnst-equal? */
	bool_t BGl_cnstzd2equalzf3z21zzcnst_allocz00(obj_t BgL_obj1z00_76,
		obj_t BgL_obj2z00_77)
	{
		{	/* Cnst/alloc.scm 1135 */
		BGl_cnstzd2equalzf3z21zzcnst_allocz00:
			if ((BgL_obj1z00_76 == BgL_obj2z00_77))
				{	/* Cnst/alloc.scm 1137 */
					return ((bool_t) 1);
				}
			else
				{	/* Cnst/alloc.scm 1137 */
					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_76))
						{	/* Cnst/alloc.scm 1139 */
							return ((bool_t) 0);
						}
					else
						{	/* Cnst/alloc.scm 1139 */
							if (STRINGP(BgL_obj1z00_76))
								{	/* Cnst/alloc.scm 1141 */
									if (STRINGP(BgL_obj2z00_77))
										{	/* Cnst/alloc.scm 1142 */
											bool_t BgL_res2564z00_3461;

											{	/* Cnst/alloc.scm 1142 */
												long BgL_l1z00_3448;

												BgL_l1z00_3448 = STRING_LENGTH(BgL_obj1z00_76);
												if ((BgL_l1z00_3448 == STRING_LENGTH(BgL_obj2z00_77)))
													{	/* Cnst/alloc.scm 1142 */
														int BgL_arg1267z00_3451;

														{	/* Cnst/alloc.scm 1142 */
															char *BgL_auxz00_5987;
															char *BgL_tmpz00_5985;

															BgL_auxz00_5987 =
																BSTRING_TO_STRING(BgL_obj2z00_77);
															BgL_tmpz00_5985 =
																BSTRING_TO_STRING(BgL_obj1z00_76);
															BgL_arg1267z00_3451 =
																memcmp(BgL_tmpz00_5985, BgL_auxz00_5987,
																BgL_l1z00_3448);
														}
														BgL_res2564z00_3461 =
															((long) (BgL_arg1267z00_3451) == ((long) 0));
													}
												else
													{	/* Cnst/alloc.scm 1142 */
														BgL_res2564z00_3461 = ((bool_t) 0);
													}
											}
											return BgL_res2564z00_3461;
										}
									else
										{	/* Cnst/alloc.scm 1142 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Cnst/alloc.scm 1141 */
									if (SYMBOLP(BgL_obj1z00_76))
										{	/* Cnst/alloc.scm 1143 */
											return ((bool_t) 0);
										}
									else
										{	/* Cnst/alloc.scm 1143 */
											if (PAIRP(BgL_obj1z00_76))
												{	/* Cnst/alloc.scm 1145 */
													if (PAIRP(BgL_obj2z00_77))
														{	/* Cnst/alloc.scm 1146 */
															if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(CAR
																	(BgL_obj1z00_76), CAR(BgL_obj2z00_77)))
																{
																	obj_t BgL_obj2z00_6004;
																	obj_t BgL_obj1z00_6002;

																	BgL_obj1z00_6002 = CDR(BgL_obj1z00_76);
																	BgL_obj2z00_6004 = CDR(BgL_obj2z00_77);
																	BgL_obj2z00_77 = BgL_obj2z00_6004;
																	BgL_obj1z00_76 = BgL_obj1z00_6002;
																	goto BGl_cnstzd2equalzf3z21zzcnst_allocz00;
																}
															else
																{	/* Cnst/alloc.scm 1147 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Cnst/alloc.scm 1146 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Cnst/alloc.scm 1145 */
													if (VECTORP(BgL_obj1z00_76))
														{	/* Cnst/alloc.scm 1149 */
															if (VECTORP(BgL_obj2z00_77))
																{	/* Cnst/alloc.scm 1151 */
																	if (
																		(VECTOR_LENGTH(BgL_obj2z00_77) ==
																			VECTOR_LENGTH(BgL_obj1z00_76)))
																		{	/* Cnst/alloc.scm 1153 */
																			bool_t BgL_test2750z00_6014;

																			{	/* Cnst/alloc.scm 1153 */
																				int BgL_arg2308z00_2500;
																				int BgL_arg2309z00_2501;

																				{	/* Cnst/alloc.scm 1153 */
																					int BgL_res2571z00_3477;

																					BgL_res2571z00_3477 =
																						VECTOR_TAG(BgL_obj1z00_76);
																					BgL_arg2308z00_2500 =
																						BgL_res2571z00_3477;
																				}
																				{	/* Cnst/alloc.scm 1153 */
																					int BgL_res2572z00_3479;

																					BgL_res2572z00_3479 =
																						VECTOR_TAG(BgL_obj2z00_77);
																					BgL_arg2309z00_2501 =
																						BgL_res2572z00_3479;
																				}
																				BgL_test2750z00_6014 =
																					(
																					(long) (BgL_arg2308z00_2500) ==
																					(long) (BgL_arg2309z00_2501));
																			}
																			if (BgL_test2750z00_6014)
																				{
																					long BgL_iz00_2492;

																					BgL_iz00_2492 = ((long) 0);
																				BgL_zc3z04anonymousza32304ze3z87_2493:
																					{	/* Cnst/alloc.scm 1155 */
																						bool_t BgL__ortest_1265z00_2494;

																						BgL__ortest_1265z00_2494 =
																							(BgL_iz00_2492 ==
																							VECTOR_LENGTH(BgL_obj1z00_76));
																						if (BgL__ortest_1265z00_2494)
																							{	/* Cnst/alloc.scm 1155 */
																								return BgL__ortest_1265z00_2494;
																							}
																						else
																							{	/* Cnst/alloc.scm 1156 */
																								bool_t BgL_test2752z00_6023;

																								{	/* Cnst/alloc.scm 1156 */
																									obj_t BgL_arg2306z00_2497;
																									obj_t BgL_arg2307z00_2498;

																									BgL_arg2306z00_2497 =
																										VECTOR_REF(
																										((obj_t) BgL_obj1z00_76),
																										BgL_iz00_2492);
																									BgL_arg2307z00_2498 =
																										VECTOR_REF(((obj_t)
																											BgL_obj2z00_77),
																										BgL_iz00_2492);
																									BgL_test2752z00_6023 =
																										BGl_cnstzd2equalzf3z21zzcnst_allocz00
																										(BgL_arg2306z00_2497,
																										BgL_arg2307z00_2498);
																								}
																								if (BgL_test2752z00_6023)
																									{
																										long BgL_iz00_6029;

																										BgL_iz00_6029 =
																											(BgL_iz00_2492 +
																											((long) 1));
																										BgL_iz00_2492 =
																											BgL_iz00_6029;
																										goto
																											BgL_zc3z04anonymousza32304ze3z87_2493;
																									}
																								else
																									{	/* Cnst/alloc.scm 1156 */
																										return ((bool_t) 0);
																									}
																							}
																					}
																				}
																			else
																				{	/* Cnst/alloc.scm 1153 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Cnst/alloc.scm 1152 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Cnst/alloc.scm 1151 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Cnst/alloc.scm 1149 */
															if (BGL_HVECTORP(BgL_obj1z00_76))
																{	/* Cnst/alloc.scm 1159 */
																	return
																		BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_obj1z00_76, BgL_obj2z00_77);
																}
															else
																{	/* Cnst/alloc.scm 1159 */
																	if (STRUCTP(BgL_obj1z00_76))
																		{	/* Cnst/alloc.scm 1162 */
																			int BgL_lobj1z00_2505;

																			BgL_lobj1z00_2505 =
																				STRUCT_LENGTH(BgL_obj1z00_76);
																			if (STRUCTP(BgL_obj2z00_77))
																				{	/* Cnst/alloc.scm 1163 */
																					if (
																						((long) (STRUCT_LENGTH
																								(BgL_obj2z00_77)) ==
																							(long) (BgL_lobj1z00_2505)))
																						{
																							long BgL_iz00_2509;

																							BgL_iz00_2509 = ((long) 0);
																						BgL_zc3z04anonymousza32313ze3z87_2510:
																							{	/* Cnst/alloc.scm 1166 */
																								bool_t BgL__ortest_1269z00_2511;

																								BgL__ortest_1269z00_2511 =
																									(BgL_iz00_2509 ==
																									(long) (BgL_lobj1z00_2505));
																								if (BgL__ortest_1269z00_2511)
																									{	/* Cnst/alloc.scm 1166 */
																										return
																											BgL__ortest_1269z00_2511;
																									}
																								else
																									{	/* Cnst/alloc.scm 1167 */
																										bool_t BgL_test2758z00_6047;

																										{	/* Cnst/alloc.scm 1167 */
																											obj_t BgL_arg2316z00_2514;
																											obj_t BgL_arg2318z00_2515;

																											BgL_arg2316z00_2514 =
																												STRUCT_REF(
																												((obj_t)
																													BgL_obj1z00_76),
																												(int) (BgL_iz00_2509));
																											BgL_arg2318z00_2515 =
																												STRUCT_REF(((obj_t)
																													BgL_obj2z00_77),
																												(int) (BgL_iz00_2509));
																											BgL_test2758z00_6047 =
																												BGl_cnstzd2equalzf3z21zzcnst_allocz00
																												(BgL_arg2316z00_2514,
																												BgL_arg2318z00_2515);
																										}
																										if (BgL_test2758z00_6047)
																											{
																												long BgL_iz00_6055;

																												BgL_iz00_6055 =
																													(BgL_iz00_2509 +
																													((long) 1));
																												BgL_iz00_2509 =
																													BgL_iz00_6055;
																												goto
																													BgL_zc3z04anonymousza32313ze3z87_2510;
																											}
																										else
																											{	/* Cnst/alloc.scm 1167 */
																												return ((bool_t) 0);
																											}
																									}
																							}
																						}
																					else
																						{	/* Cnst/alloc.scm 1164 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cnst/alloc.scm 1163 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Cnst/alloc.scm 1161 */
																			if (CELLP(BgL_obj1z00_76))
																				{	/* Cnst/alloc.scm 1169 */
																					if (CELLP(BgL_obj2z00_77))
																						{
																							obj_t BgL_obj2z00_6063;
																							obj_t BgL_obj1z00_6061;

																							BgL_obj1z00_6061 =
																								CELL_REF(BgL_obj1z00_76);
																							BgL_obj2z00_6063 =
																								CELL_REF(BgL_obj2z00_77);
																							BgL_obj2z00_77 = BgL_obj2z00_6063;
																							BgL_obj1z00_76 = BgL_obj1z00_6061;
																							goto
																								BGl_cnstzd2equalzf3z21zzcnst_allocz00;
																						}
																					else
																						{	/* Cnst/alloc.scm 1170 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cnst/alloc.scm 1169 */
																					if (UCS2_STRINGP(BgL_obj1z00_76))
																						{	/* Cnst/alloc.scm 1171 */
																							if (UCS2_STRINGP(BgL_obj2z00_77))
																								{	/* Cnst/alloc.scm 1172 */
																									return
																										ucs2_strcmp(BgL_obj1z00_76,
																										BgL_obj2z00_77);
																								}
																							else
																								{	/* Cnst/alloc.scm 1172 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Cnst/alloc.scm 1171 */
																							if (UCS2P(BgL_obj1z00_76))
																								{	/* Cnst/alloc.scm 1173 */
																									if (UCS2P(BgL_obj2z00_77))
																										{	/* Cnst/alloc.scm 1174 */
																											return
																												(CUCS2(BgL_obj1z00_76)
																												==
																												CUCS2(BgL_obj2z00_77));
																										}
																									else
																										{	/* Cnst/alloc.scm 1174 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Cnst/alloc.scm 1173 */
																									if (BGL_DATEP(BgL_obj1z00_76))
																										{	/* Cnst/alloc.scm 1175 */
																											return
																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																												(BgL_obj1z00_76,
																												BgL_obj2z00_77);
																										}
																									else
																										{	/* Cnst/alloc.scm 1175 */
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
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_allocz00()
	{
		{	/* Cnst/alloc.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztvector_cnstz00(((long) 263487743),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 398482),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string2603z00zzcnst_allocz00));
		}

	}

#ifdef __cplusplus
}
#endif
