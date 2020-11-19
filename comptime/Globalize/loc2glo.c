/*===========================================================================*/
/*   (Globalize/loc2glo.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/loc2glo.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
		bool_t BgL_stackablez00;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	static BgL_nodez00_bglt
		BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt, BgL_globalz00_bglt, obj_t, obj_t, BgL_localz00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static BgL_globalz00_bglt
		BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt, BgL_localz00_bglt, obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_z62thezd2globalzb0zzglobaliza7e_localzd2ze3globalz96(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_localzd2ze3globalz96(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt,
		obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_localzd2ze3globalz96();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t
		BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96 =
		BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_methodz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static BgL_globalz00_bglt
		BGl_z62localzd2ze3globalz53zzglobaliza7e_localzd2ze3globalz96(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
	static obj_t
		BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
	static BgL_globalz00_bglt
		BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt, BgL_localz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern bool_t
		BGl_localzd2iszd2methodzf3zf3zzobject_methodz00(BgL_localz00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2ze3globalzd2envze3zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_za762localza7d2za7e3gl1979za7,
		BGl_z62localzd2ze3globalz53zzglobaliza7e_localzd2ze3globalz96, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2envz00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_za762theza7d2globalza71980za7,
		BGl_z62thezd2globalzb0zzglobaliza7e_localzd2ze3globalz96, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_string1974za700za7za7g1981za7, "globalize_local->global", 23);
	      DEFINE_STRING(BGl_string1975z00zzglobaliza7e_localzd2ze3globalz96,
		BgL_bgl_string1975za700za7za7g1982za7,
		"now sfun static & cell-globalize write value procedure-ref env ", 63);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*)
			(&BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long
		BgL_checksumz00_2720, char *BgL_fromz00_2721)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_localzd2ze3globalz96();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
					BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96();
					return BGl_methodzd2initzd2zzglobaliza7e_localzd2ze3globalz96();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_local->global");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			{	/* Globalize/loc2glo.scm 15 */
				obj_t BgL_cportz00_2707;

				{	/* Globalize/loc2glo.scm 15 */
					obj_t BgL_stringz00_2715;

					BgL_stringz00_2715 =
						BGl_string1975z00zzglobaliza7e_localzd2ze3globalz96;
					{	/* Globalize/loc2glo.scm 15 */
						obj_t BgL_startz00_2716;

						BgL_startz00_2716 = BINT(((long) 0));
						{	/* Globalize/loc2glo.scm 15 */
							obj_t BgL_endz00_2717;

							BgL_endz00_2717 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2715)));
							{	/* Globalize/loc2glo.scm 15 */

								BgL_cportz00_2707 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2715, BgL_startz00_2716, BgL_endz00_2717);
				}}}}
				{
					long BgL_iz00_2708;

					BgL_iz00_2708 = ((long) 8);
				BgL_loopz00_2709:
					if ((BgL_iz00_2708 == ((long) -1)))
						{	/* Globalize/loc2glo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/loc2glo.scm 15 */
							{	/* Globalize/loc2glo.scm 15 */
								obj_t BgL_arg1977z00_2711;

								{	/* Globalize/loc2glo.scm 15 */

									{	/* Globalize/loc2glo.scm 15 */
										obj_t BgL_locationz00_2713;

										BgL_locationz00_2713 = BBOOL(((bool_t) 0));
										{	/* Globalize/loc2glo.scm 15 */

											BgL_arg1977z00_2711 =
												BGl_readz00zz__readerz00(BgL_cportz00_2707,
												BgL_locationz00_2713);
										}
									}
								}
								{	/* Globalize/loc2glo.scm 15 */
									int BgL_tmpz00_2746;

									BgL_tmpz00_2746 = (int) (BgL_iz00_2708);
									CNST_TABLE_SET(BgL_tmpz00_2746, BgL_arg1977z00_2711);
							}}
							{	/* Globalize/loc2glo.scm 15 */
								int BgL_auxz00_2714;

								BgL_auxz00_2714 = (int) ((BgL_iz00_2708 - ((long) 1)));
								{
									long BgL_iz00_2751;

									BgL_iz00_2751 = (long) (BgL_auxz00_2714);
									BgL_iz00_2708 = BgL_iz00_2751;
									goto BgL_loopz00_2709;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_localzd2ze3globalz96(obj_t
		BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1775;

				BgL_headz00_1775 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1776;
					obj_t BgL_tailz00_1777;

					BgL_prevz00_1776 = BgL_headz00_1775;
					BgL_tailz00_1777 = BgL_l1z00_1;
				BgL_loopz00_1778:
					if (PAIRP(BgL_tailz00_1777))
						{
							obj_t BgL_newzd2prevzd2_1780;

							BgL_newzd2prevzd2_1780 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1777), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1776, BgL_newzd2prevzd2_1780);
							{
								obj_t BgL_tailz00_2761;
								obj_t BgL_prevz00_2760;

								BgL_prevz00_2760 = BgL_newzd2prevzd2_1780;
								BgL_tailz00_2761 = CDR(BgL_tailz00_1777);
								BgL_tailz00_1777 = BgL_tailz00_2761;
								BgL_prevz00_1776 = BgL_prevz00_2760;
								goto BgL_loopz00_1778;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1775);
				}
			}
		}

	}



/* default-type */
	obj_t BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 40 */
			{	/* Globalize/loc2glo.scm 41 */
				bool_t BgL_test1986z00_2764;

				if (CBOOL
					(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
					{	/* Globalize/loc2glo.scm 41 */
						BgL_test1986z00_2764 =
							((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2));
					}
				else
					{	/* Globalize/loc2glo.scm 41 */
						BgL_test1986z00_2764 = ((bool_t) 0);
					}
				if (BgL_test1986z00_2764)
					{	/* Globalize/loc2glo.scm 41 */
						return BGl_za2_za2z00zztype_cachez00;
					}
				else
					{	/* Globalize/loc2glo.scm 41 */
						return BGl_za2objza2z00zztype_cachez00;
					}
			}
		}

	}



/* local->global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt
		BgL_localz00_3)
	{
		{	/* Globalize/loc2glo.scm 46 */
			{	/* Globalize/loc2glo.scm 50 */
				BgL_globalz00_bglt BgL_globalz00_1784;

				BgL_globalz00_1784 =
					BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_3);
				{	/* Globalize/loc2glo.scm 50 */
					obj_t BgL_argsz00_1785;

					BgL_argsz00_1785 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_localz00_3)))->
										BgL_valuez00))))->BgL_argsz00);
					{	/* Globalize/loc2glo.scm 51 */
						BgL_valuez00_bglt BgL_infoz00_1786;

						BgL_infoz00_1786 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_localz00_3)))->BgL_valuez00);
						{	/* Globalize/loc2glo.scm 52 */
							obj_t BgL_newzd2bodyzd2_1787;

							{
								BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2776;

								{
									obj_t BgL_auxz00_2777;

									{	/* Globalize/loc2glo.scm 53 */
										BgL_objectz00_bglt BgL_tmpz00_2778;

										BgL_tmpz00_2778 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_infoz00_1786));
										BgL_auxz00_2777 = BGL_OBJECT_WIDENING(BgL_tmpz00_2778);
									}
									BgL_auxz00_2776 =
										((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2777);
								}
								BgL_newzd2bodyzd2_1787 =
									(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2776))->
									BgL_newzd2bodyzd2);
							}
							{	/* Globalize/loc2glo.scm 53 */
								obj_t BgL_kapturedz00_1788;

								{
									BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2784;

									{
										obj_t BgL_auxz00_2785;

										{	/* Globalize/loc2glo.scm 54 */
											BgL_objectz00_bglt BgL_tmpz00_2786;

											BgL_tmpz00_2786 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_infoz00_1786));
											BgL_auxz00_2785 = BGL_OBJECT_WIDENING(BgL_tmpz00_2786);
										}
										BgL_auxz00_2784 =
											((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2785);
									}
									BgL_kapturedz00_1788 =
										(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2784))->
										BgL_kapturedz00);
								}
								{	/* Globalize/loc2glo.scm 54 */

									{	/* Globalize/loc2glo.scm 57 */
										bool_t BgL_test1988z00_2792;

										{
											BgL_localzf2ginfozf2_bglt BgL_auxz00_2793;

											{
												obj_t BgL_auxz00_2794;

												{	/* Globalize/loc2glo.scm 57 */
													BgL_objectz00_bglt BgL_tmpz00_2795;

													BgL_tmpz00_2795 =
														((BgL_objectz00_bglt)
														((BgL_localz00_bglt) BgL_localz00_3));
													BgL_auxz00_2794 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2795);
												}
												BgL_auxz00_2793 =
													((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2794);
											}
											BgL_test1988z00_2792 =
												(((BgL_localzf2ginfozf2_bglt)
													COBJECT(BgL_auxz00_2793))->BgL_escapezf3zf3);
										}
										if (BgL_test1988z00_2792)
											{	/* Globalize/loc2glo.scm 57 */
												BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
													(BgL_globalz00_1784, BgL_localz00_3, BgL_argsz00_1785,
													BgL_kapturedz00_1788, BgL_newzd2bodyzd2_1787);
											}
										else
											{	/* Globalize/loc2glo.scm 57 */
												BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
													(BgL_globalz00_1784, BgL_localz00_3, BgL_argsz00_1785,
													BgL_kapturedz00_1788, BgL_newzd2bodyzd2_1787);
											}
									}
									return BgL_globalz00_1784;
								}
							}
						}
					}
				}
			}
		}

	}



/* &local->global */
	BgL_globalz00_bglt
		BGl_z62localzd2ze3globalz53zzglobaliza7e_localzd2ze3globalz96(obj_t
		BgL_envz00_2703, obj_t BgL_localz00_2704)
	{
		{	/* Globalize/loc2glo.scm 46 */
			return
				BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96(
				((BgL_localz00_bglt) BgL_localz00_2704));
		}

	}



/* fix-escaping-definition */
	BgL_globalz00_bglt
		BGl_fixzd2escapingzd2definitionz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt BgL_globalz00_5, BgL_localz00_bglt BgL_localz00_6,
		obj_t BgL_argsz00_7, obj_t BgL_kapturedz00_8, obj_t BgL_bodyz00_9)
	{
		{	/* Globalize/loc2glo.scm 84 */
			{	/* Globalize/loc2glo.scm 85 */
				BgL_localz00_bglt BgL_envz00_1791;

				BgL_envz00_1791 =
					BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long) 0)),
					((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
				{	/* Globalize/loc2glo.scm 85 */
					obj_t BgL_newzd2freezd2_1792;

					if (NULLP(BgL_kapturedz00_8))
						{	/* Globalize/loc2glo.scm 86 */
							BgL_newzd2freezd2_1792 = BNIL;
						}
					else
						{	/* Globalize/loc2glo.scm 86 */
							obj_t BgL_head1381z00_1924;

							{	/* Globalize/loc2glo.scm 86 */
								obj_t BgL_res1919z00_2375;

								BgL_res1919z00_2375 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1381z00_1924 = BgL_res1919z00_2375;
							}
							{
								obj_t BgL_l1379z00_1926;
								obj_t BgL_tail1382z00_1927;

								BgL_l1379z00_1926 = BgL_kapturedz00_8;
								BgL_tail1382z00_1927 = BgL_head1381z00_1924;
							BgL_zc3z04anonymousza31646ze3z87_1928:
								if (NULLP(BgL_l1379z00_1926))
									{	/* Globalize/loc2glo.scm 86 */
										BgL_newzd2freezd2_1792 = CDR(BgL_head1381z00_1924);
									}
								else
									{	/* Globalize/loc2glo.scm 86 */
										obj_t BgL_newtail1383z00_1930;

										{	/* Globalize/loc2glo.scm 86 */
											BgL_localz00_bglt BgL_arg1662z00_1932;

											{	/* Globalize/loc2glo.scm 86 */
												obj_t BgL_oldz00_1933;

												BgL_oldz00_1933 = CAR(((obj_t) BgL_l1379z00_1926));
												{	/* Globalize/loc2glo.scm 87 */
													BgL_localz00_bglt BgL_newz00_1934;

													{	/* Globalize/loc2glo.scm 88 */
														obj_t BgL_arg1672z00_1947;
														obj_t BgL_arg1684z00_1948;

														BgL_arg1672z00_1947 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_oldz00_1933))))->
															BgL_idz00);
														BgL_arg1684z00_1948 =
															BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96
															();
														BgL_newz00_1934 =
															BGl_makezd2localzd2svarz00zzast_localz00
															(BgL_arg1672z00_1947,
															((BgL_typez00_bglt) BgL_arg1684z00_1948));
													}
													{	/* Globalize/loc2glo.scm 90 */
														bool_t BgL_arg1663z00_1935;

														BgL_arg1663z00_1935 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_oldz00_1933))))->
															BgL_userzf3zf3);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_newz00_1934)))->BgL_userzf3zf3) =
															((bool_t) BgL_arg1663z00_1935), BUNSPEC);
													}
													{	/* Globalize/loc2glo.scm 91 */
														BgL_localzf2ginfozf2_bglt BgL_wide1113z00_1938;

														BgL_wide1113z00_1938 =
															((BgL_localzf2ginfozf2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_localzf2ginfozf2_bgl))));
														{	/* Globalize/loc2glo.scm 91 */
															obj_t BgL_auxz00_2831;
															BgL_objectz00_bglt BgL_tmpz00_2828;

															BgL_auxz00_2831 = ((obj_t) BgL_wide1113z00_1938);
															BgL_tmpz00_2828 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_1934));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2828,
																BgL_auxz00_2831);
														}
														((BgL_objectz00_bglt)
															((BgL_localz00_bglt) BgL_newz00_1934));
														{	/* Globalize/loc2glo.scm 91 */
															long BgL_arg1664z00_1939;

															{	/* Globalize/loc2glo.scm 91 */
																long BgL_res1921z00_2385;

																BgL_res1921z00_2385 =
																	BGL_CLASS_INDEX
																	(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
																BgL_arg1664z00_1939 = BgL_res1921z00_2385;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1934)),
																BgL_arg1664z00_1939);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_newz00_1934));
													}
													{
														BgL_localzf2ginfozf2_bglt BgL_auxz00_2842;

														{
															obj_t BgL_auxz00_2843;

															{	/* Globalize/loc2glo.scm 91 */
																BgL_objectz00_bglt BgL_tmpz00_2844;

																BgL_tmpz00_2844 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1934));
																BgL_auxz00_2843 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2844);
															}
															BgL_auxz00_2842 =
																((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2843);
														}
														((((BgL_localzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_2842))->BgL_escapezf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													{
														BgL_localzf2ginfozf2_bglt BgL_auxz00_2850;

														{
															obj_t BgL_auxz00_2851;

															{	/* Globalize/loc2glo.scm 91 */
																BgL_objectz00_bglt BgL_tmpz00_2852;

																BgL_tmpz00_2852 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1934));
																BgL_auxz00_2851 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2852);
															}
															BgL_auxz00_2850 =
																((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2851);
														}
														((((BgL_localzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_2850))->
																BgL_globaliza7edzf3z54) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													((BgL_localz00_bglt) BgL_newz00_1934);
													{	/* Globalize/loc2glo.scm 92 */
														BgL_svarz00_bglt BgL_tmp1115z00_1941;

														BgL_tmp1115z00_1941 =
															((BgL_svarz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_newz00_1934)))->
																BgL_valuez00));
														{	/* Globalize/loc2glo.scm 92 */
															BgL_svarzf2ginfozf2_bglt BgL_wide1117z00_1943;

															BgL_wide1117z00_1943 =
																((BgL_svarzf2ginfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_svarzf2ginfozf2_bgl))));
															{	/* Globalize/loc2glo.scm 92 */
																obj_t BgL_auxz00_2866;
																BgL_objectz00_bglt BgL_tmpz00_2863;

																BgL_auxz00_2866 =
																	((obj_t) BgL_wide1117z00_1943);
																BgL_tmpz00_2863 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2863,
																	BgL_auxz00_2866);
															}
															((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
															{	/* Globalize/loc2glo.scm 92 */
																long BgL_arg1667z00_1944;

																{	/* Globalize/loc2glo.scm 92 */
																	long BgL_res1922z00_2393;

																	BgL_res1922z00_2393 =
																		BGL_CLASS_INDEX
																		(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																	BgL_arg1667z00_1944 = BgL_res1922z00_2393;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941)),
																	BgL_arg1667z00_1944);
															}
															((BgL_svarz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_2877;

															{
																obj_t BgL_auxz00_2878;

																{	/* Globalize/loc2glo.scm 93 */
																	BgL_objectz00_bglt BgL_tmpz00_2879;

																	BgL_tmpz00_2879 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																	BgL_auxz00_2878 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2879);
																}
																BgL_auxz00_2877 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2878);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2877))->
																	BgL_kapturedzf3zf3) =
																((bool_t) ((bool_t) 1)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_2885;

															{
																obj_t BgL_auxz00_2886;

																{	/* Globalize/loc2glo.scm 93 */
																	BgL_objectz00_bglt BgL_tmpz00_2887;

																	BgL_tmpz00_2887 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																	BgL_auxz00_2886 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2887);
																}
																BgL_auxz00_2885 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2886);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2885))->
																	BgL_freezd2markzd2) =
																((long) ((long) -10)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_2893;

															{
																obj_t BgL_auxz00_2894;

																{	/* Globalize/loc2glo.scm 93 */
																	BgL_objectz00_bglt BgL_tmpz00_2895;

																	BgL_tmpz00_2895 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																	BgL_auxz00_2894 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2895);
																}
																BgL_auxz00_2893 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2894);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2893))->BgL_markz00) =
																((long) ((long) -10)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_2901;

															{
																obj_t BgL_auxz00_2902;

																{	/* Globalize/loc2glo.scm 93 */
																	BgL_objectz00_bglt BgL_tmpz00_2903;

																	BgL_tmpz00_2903 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																	BgL_auxz00_2902 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2903);
																}
																BgL_auxz00_2901 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2902);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2901))->
																	BgL_celledzf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_svarzf2ginfozf2_bglt BgL_auxz00_2909;

															{
																obj_t BgL_auxz00_2910;

																{	/* Globalize/loc2glo.scm 93 */
																	BgL_objectz00_bglt BgL_tmpz00_2911;

																	BgL_tmpz00_2911 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1115z00_1941));
																	BgL_auxz00_2910 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2911);
																}
																BgL_auxz00_2909 =
																	((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2910);
															}
															((((BgL_svarzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2909))->
																	BgL_stackablez00) =
																((bool_t) ((bool_t) 1)), BUNSPEC);
														}
														((BgL_svarz00_bglt) BgL_tmp1115z00_1941);
													}
													{	/* Globalize/loc2glo.scm 94 */
														obj_t BgL_arg1669z00_1946;

														BgL_arg1669z00_1946 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_oldz00_1933))))->
															BgL_accessz00);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_newz00_1934)))->BgL_accessz00) =
															((obj_t) BgL_arg1669z00_1946), BUNSPEC);
													}
													BgL_arg1662z00_1932 = BgL_newz00_1934;
											}}
											{	/* Globalize/loc2glo.scm 86 */
												obj_t BgL_res1923z00_2403;

												BgL_res1923z00_2403 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1662z00_1932), BNIL);
												BgL_newtail1383z00_1930 = BgL_res1923z00_2403;
										}}
										SET_CDR(BgL_tail1382z00_1927, BgL_newtail1383z00_1930);
										{	/* Globalize/loc2glo.scm 86 */
											obj_t BgL_arg1652z00_1931;

											BgL_arg1652z00_1931 = CDR(((obj_t) BgL_l1379z00_1926));
											{
												obj_t BgL_tail1382z00_2929;
												obj_t BgL_l1379z00_2928;

												BgL_l1379z00_2928 = BgL_arg1652z00_1931;
												BgL_tail1382z00_2929 = BgL_newtail1383z00_1930;
												BgL_tail1382z00_1927 = BgL_tail1382z00_2929;
												BgL_l1379z00_1926 = BgL_l1379z00_2928;
												goto BgL_zc3z04anonymousza31646ze3z87_1928;
											}
										}
									}
							}
						}
					{	/* Globalize/loc2glo.scm 86 */
						obj_t BgL_newzd2argszd2_1793;

						if (NULLP(BgL_argsz00_7))
							{	/* Globalize/loc2glo.scm 97 */
								BgL_newzd2argszd2_1793 = BNIL;
							}
						else
							{	/* Globalize/loc2glo.scm 97 */
								obj_t BgL_head1386z00_1895;

								{	/* Globalize/loc2glo.scm 97 */
									obj_t BgL_res1925z00_2407;

									BgL_res1925z00_2407 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1386z00_1895 = BgL_res1925z00_2407;
								}
								{
									obj_t BgL_l1384z00_1897;
									obj_t BgL_tail1387z00_1898;

									BgL_l1384z00_1897 = BgL_argsz00_7;
									BgL_tail1387z00_1898 = BgL_head1386z00_1895;
								BgL_zc3z04anonymousza31613ze3z87_1899:
									if (NULLP(BgL_l1384z00_1897))
										{	/* Globalize/loc2glo.scm 97 */
											BgL_newzd2argszd2_1793 = CDR(BgL_head1386z00_1895);
										}
									else
										{	/* Globalize/loc2glo.scm 97 */
											obj_t BgL_newtail1388z00_1901;

											{	/* Globalize/loc2glo.scm 97 */
												BgL_localz00_bglt BgL_arg1626z00_1903;

												{	/* Globalize/loc2glo.scm 97 */
													obj_t BgL_oldz00_1904;

													BgL_oldz00_1904 = CAR(((obj_t) BgL_l1384z00_1897));
													{	/* Globalize/loc2glo.scm 98 */
														BgL_localz00_bglt BgL_newz00_1905;

														{	/* Globalize/loc2glo.scm 99 */
															obj_t BgL_arg1641z00_1919;
															obj_t BgL_arg1644z00_1920;

															BgL_arg1641z00_1919 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_oldz00_1904))))->
																BgL_idz00);
															BgL_arg1644z00_1920 =
																BGl_defaultzd2typezd2zzglobaliza7e_localzd2ze3globalz96
																();
															BgL_newz00_1905 =
																BGl_makezd2localzd2svarz00zzast_localz00
																(BgL_arg1641z00_1919,
																((BgL_typez00_bglt) BgL_arg1644z00_1920));
														}
														{	/* Globalize/loc2glo.scm 101 */
															bool_t BgL_arg1627z00_1906;

															BgL_arg1627z00_1906 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_oldz00_1904))))->
																BgL_userzf3zf3);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_newz00_1905)))->BgL_userzf3zf3) =
																((bool_t) BgL_arg1627z00_1906), BUNSPEC);
														}
														{	/* Globalize/loc2glo.scm 102 */
															BgL_localzf2ginfozf2_bglt BgL_wide1121z00_1909;

															BgL_wide1121z00_1909 =
																((BgL_localzf2ginfozf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzf2ginfozf2_bgl))));
															{	/* Globalize/loc2glo.scm 102 */
																obj_t BgL_auxz00_2953;
																BgL_objectz00_bglt BgL_tmpz00_2950;

																BgL_auxz00_2953 =
																	((obj_t) BgL_wide1121z00_1909);
																BgL_tmpz00_2950 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1905));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2950,
																	BgL_auxz00_2953);
															}
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_1905));
															{	/* Globalize/loc2glo.scm 102 */
																long BgL_arg1631z00_1910;

																{	/* Globalize/loc2glo.scm 102 */
																	long BgL_res1927z00_2417;

																	BgL_res1927z00_2417 =
																		BGL_CLASS_INDEX
																		(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
																	BgL_arg1631z00_1910 = BgL_res1927z00_2417;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_localz00_bglt) BgL_newz00_1905)),
																	BgL_arg1631z00_1910);
															}
															((BgL_localz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_1905));
														}
														{
															BgL_localzf2ginfozf2_bglt BgL_auxz00_2964;

															{
																obj_t BgL_auxz00_2965;

																{	/* Globalize/loc2glo.scm 102 */
																	BgL_objectz00_bglt BgL_tmpz00_2966;

																	BgL_tmpz00_2966 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt) BgL_newz00_1905));
																	BgL_auxz00_2965 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2966);
																}
																BgL_auxz00_2964 =
																	((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2965);
															}
															((((BgL_localzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2964))->
																	BgL_escapezf3zf3) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														{
															BgL_localzf2ginfozf2_bglt BgL_auxz00_2972;

															{
																obj_t BgL_auxz00_2973;

																{	/* Globalize/loc2glo.scm 102 */
																	BgL_objectz00_bglt BgL_tmpz00_2974;

																	BgL_tmpz00_2974 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt) BgL_newz00_1905));
																	BgL_auxz00_2973 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2974);
																}
																BgL_auxz00_2972 =
																	((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2973);
															}
															((((BgL_localzf2ginfozf2_bglt)
																		COBJECT(BgL_auxz00_2972))->
																	BgL_globaliza7edzf3z54) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														((BgL_localz00_bglt) BgL_newz00_1905);
														{	/* Globalize/loc2glo.scm 103 */
															BgL_svarz00_bglt BgL_tmp1123z00_1912;

															BgL_tmp1123z00_1912 =
																((BgL_svarz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_newz00_1905)))->BgL_valuez00));
															{	/* Globalize/loc2glo.scm 103 */
																BgL_svarzf2ginfozf2_bglt BgL_wide1125z00_1914;

																BgL_wide1125z00_1914 =
																	((BgL_svarzf2ginfozf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_svarzf2ginfozf2_bgl))));
																{	/* Globalize/loc2glo.scm 103 */
																	obj_t BgL_auxz00_2988;
																	BgL_objectz00_bglt BgL_tmpz00_2985;

																	BgL_auxz00_2988 =
																		((obj_t) BgL_wide1125z00_1914);
																	BgL_tmpz00_2985 =
																		((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2985,
																		BgL_auxz00_2988);
																}
																((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																{	/* Globalize/loc2glo.scm 103 */
																	long BgL_arg1634z00_1915;

																	{	/* Globalize/loc2glo.scm 103 */
																		long BgL_res1928z00_2425;

																		BgL_res1928z00_2425 =
																			BGL_CLASS_INDEX
																			(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																		BgL_arg1634z00_1915 = BgL_res1928z00_2425;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912)),
																		BgL_arg1634z00_1915);
																}
																((BgL_svarz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
															}
															{
																bool_t BgL_auxz00_3006;
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_2999;

																{	/* Globalize/loc2glo.scm 104 */
																	BgL_svarz00_bglt BgL_oz00_2430;

																	BgL_oz00_2430 =
																		((BgL_svarz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_oldz00_1904))))->
																			BgL_valuez00));
																	{
																		BgL_svarzf2ginfozf2_bglt BgL_auxz00_3011;

																		{
																			obj_t BgL_auxz00_3012;

																			{	/* Globalize/loc2glo.scm 104 */
																				BgL_objectz00_bglt BgL_tmpz00_3013;

																				BgL_tmpz00_3013 =
																					((BgL_objectz00_bglt) BgL_oz00_2430);
																				BgL_auxz00_3012 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_3013);
																			}
																			BgL_auxz00_3011 =
																				((BgL_svarzf2ginfozf2_bglt)
																				BgL_auxz00_3012);
																		}
																		BgL_auxz00_3006 =
																			(((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_3011))->
																			BgL_kapturedzf3zf3);
																}}
																{
																	obj_t BgL_auxz00_3000;

																	{	/* Globalize/loc2glo.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_3001;

																		BgL_tmpz00_3001 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																		BgL_auxz00_3000 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3001);
																	}
																	BgL_auxz00_2999 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3000);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2999))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_auxz00_3006), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3019;

																{
																	obj_t BgL_auxz00_3020;

																	{	/* Globalize/loc2glo.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_3021;

																		BgL_tmpz00_3021 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																		BgL_auxz00_3020 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3021);
																	}
																	BgL_auxz00_3019 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3020);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3019))->
																		BgL_freezd2markzd2) =
																	((long) ((long) -10)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3027;

																{
																	obj_t BgL_auxz00_3028;

																	{	/* Globalize/loc2glo.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_3029;

																		BgL_tmpz00_3029 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																		BgL_auxz00_3028 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3029);
																	}
																	BgL_auxz00_3027 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3028);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3027))->BgL_markz00) =
																	((long) ((long) -10)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3035;

																{
																	obj_t BgL_auxz00_3036;

																	{	/* Globalize/loc2glo.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_3037;

																		BgL_tmpz00_3037 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																		BgL_auxz00_3036 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3037);
																	}
																	BgL_auxz00_3035 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3036);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3035))->
																		BgL_celledzf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
															}
															{
																BgL_svarzf2ginfozf2_bglt BgL_auxz00_3043;

																{
																	obj_t BgL_auxz00_3044;

																	{	/* Globalize/loc2glo.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_3045;

																		BgL_tmpz00_3045 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1123z00_1912));
																		BgL_auxz00_3044 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3045);
																	}
																	BgL_auxz00_3043 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BgL_auxz00_3044);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_3043))->
																		BgL_stackablez00) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
															}
															((BgL_svarz00_bglt) BgL_tmp1123z00_1912);
														}
														{	/* Globalize/loc2glo.scm 106 */
															obj_t BgL_arg1640z00_1918;

															BgL_arg1640z00_1918 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_oldz00_1904))))->
																BgL_accessz00);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_newz00_1905)))->BgL_accessz00) =
																((obj_t) BgL_arg1640z00_1918), BUNSPEC);
														}
														BgL_arg1626z00_1903 = BgL_newz00_1905;
												}}
												{	/* Globalize/loc2glo.scm 97 */
													obj_t BgL_res1929z00_2438;

													BgL_res1929z00_2438 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1626z00_1903), BNIL);
													BgL_newtail1388z00_1901 = BgL_res1929z00_2438;
											}}
											SET_CDR(BgL_tail1387z00_1898, BgL_newtail1388z00_1901);
											{	/* Globalize/loc2glo.scm 97 */
												obj_t BgL_arg1624z00_1902;

												BgL_arg1624z00_1902 = CDR(((obj_t) BgL_l1384z00_1897));
												{
													obj_t BgL_tail1387z00_3063;
													obj_t BgL_l1384z00_3062;

													BgL_l1384z00_3062 = BgL_arg1624z00_1902;
													BgL_tail1387z00_3063 = BgL_newtail1388z00_1901;
													BgL_tail1387z00_1898 = BgL_tail1387z00_3063;
													BgL_l1384z00_1897 = BgL_l1384z00_3062;
													goto BgL_zc3z04anonymousza31613ze3z87_1899;
												}
											}
										}
								}
							}
						{	/* Globalize/loc2glo.scm 97 */
							BgL_valuez00_bglt BgL_oldzd2funzd2_1794;

							BgL_oldzd2funzd2_1794 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_localz00_6)))->BgL_valuez00);
							{	/* Globalize/loc2glo.scm 109 */
								BgL_sfunz00_bglt BgL_newzd2funzd2_1795;

								{	/* Globalize/loc2glo.scm 110 */
									BgL_sfunz00_bglt BgL_new1128z00_1878;

									{	/* Globalize/loc2glo.scm 111 */
										BgL_sfunz00_bglt BgL_new1142z00_1891;

										BgL_new1142z00_1891 =
											((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sfunz00_bgl))));
										{	/* Globalize/loc2glo.scm 111 */
											long BgL_arg1611z00_1892;

											{	/* Globalize/loc2glo.scm 111 */
												long BgL_res1930z00_2443;

												BgL_res1930z00_2443 =
													BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
												BgL_arg1611z00_1892 = BgL_res1930z00_2443;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1142z00_1891),
												BgL_arg1611z00_1892);
										}
										{	/* Globalize/loc2glo.scm 111 */
											BgL_objectz00_bglt BgL_tmpz00_3070;

											BgL_tmpz00_3070 =
												((BgL_objectz00_bglt) BgL_new1142z00_1891);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3070, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1142z00_1891);
										BgL_new1128z00_1878 = BgL_new1142z00_1891;
									}
									{
										long BgL_auxz00_3074;

										{	/* Globalize/loc2glo.scm 111 */
											long BgL_arg1606z00_1879;

											BgL_arg1606z00_1879 =
												(((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt)
															((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1794))))->
												BgL_arityz00);
											BgL_auxz00_3074 =
												(long)
												CINT(BGl_zb2zd2arityz60zztools_argsz00(BINT
													(BgL_arg1606z00_1879), BINT(((long) 1))));
										}
										((((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_new1128z00_1878)))->
												BgL_arityz00) = ((long) BgL_auxz00_3074), BUNSPEC);
									}
									((((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt) BgL_new1128z00_1878)))->
											BgL_sidezd2effectzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_sidezd2effectzd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_predicatezd2ofzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_predicatezd2ofzd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_stackzd2allocatorzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->
												BgL_stackzd2allocatorzd2)), BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_topzf3zf3) =
										((bool_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_topzf3zf3)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_thezd2closurezd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_thezd2closurezd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_effectz00) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_effectz00)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_failsafez00) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->BgL_failsafez00)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1128z00_1878)))->BgL_argszd2noescapezd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1794)))->
												BgL_argszd2noescapezd2)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_propertyz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_propertyz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_argsz00) =
										((obj_t) MAKE_YOUNG_PAIR(((obj_t) BgL_envz00_1791),
												BgL_newzd2argszd2_1793)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_argszd2namezd2) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_argszd2namezd2)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_bodyz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_bodyz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_classz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_classz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_dssslzd2keywordszd2) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->
												BgL_dssslzd2keywordszd2)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_locz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_locz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_optionalsz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_optionalsz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_keysz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_keysz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_thezd2closurezd2globalz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->
												BgL_thezd2closurezd2globalz00)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_strengthz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_strengthz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1128z00_1878))->
											BgL_stackablez00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1794))))->BgL_stackablez00)),
										BUNSPEC);
									BgL_newzd2funzd2_1795 = BgL_new1128z00_1878;
								}
								{	/* Globalize/loc2glo.scm 110 */

									{
										BgL_globalzf2ginfozf2_bglt BgL_auxz00_3163;

										{
											obj_t BgL_auxz00_3164;

											{	/* Globalize/loc2glo.scm 114 */
												BgL_objectz00_bglt BgL_tmpz00_3165;

												BgL_tmpz00_3165 =
													((BgL_objectz00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_5));
												BgL_auxz00_3164 = BGL_OBJECT_WIDENING(BgL_tmpz00_3165);
											}
											BgL_auxz00_3163 =
												((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3164);
										}
										((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3163))->
												BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
									{	/* Globalize/loc2glo.scm 115 */
										BgL_sfunzf2ginfozf2_bglt BgL_wide1145z00_1798;

										BgL_wide1145z00_1798 =
											((BgL_sfunzf2ginfozf2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sfunzf2ginfozf2_bgl))));
										{	/* Globalize/loc2glo.scm 115 */
											obj_t BgL_auxz00_3175;
											BgL_objectz00_bglt BgL_tmpz00_3172;

											BgL_auxz00_3175 = ((obj_t) BgL_wide1145z00_1798);
											BgL_tmpz00_3172 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3172, BgL_auxz00_3175);
										}
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
										{	/* Globalize/loc2glo.scm 115 */
											long BgL_arg1449z00_1799;

											{	/* Globalize/loc2glo.scm 115 */
												long BgL_res1931z00_2453;

												BgL_res1931z00_2453 =
													BGL_CLASS_INDEX
													(BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
												BgL_arg1449z00_1799 = BgL_res1931z00_2453;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795)),
												BgL_arg1449z00_1799);
										}
										((BgL_sfunz00_bglt)
											((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3186;

										{
											obj_t BgL_auxz00_3187;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3188;

												BgL_tmpz00_3188 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3187 = BGL_OBJECT_WIDENING(BgL_tmpz00_3188);
											}
											BgL_auxz00_3186 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3187);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3186))->
												BgL_gzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3194;

										{
											obj_t BgL_auxz00_3195;

											{	/* Globalize/ginfo.scm 24 */
												BgL_objectz00_bglt BgL_tmpz00_3196;

												BgL_tmpz00_3196 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3195 = BGL_OBJECT_WIDENING(BgL_tmpz00_3196);
											}
											BgL_auxz00_3194 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3195);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3194))->
												BgL_cfromz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3202;

										{
											obj_t BgL_auxz00_3203;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3204;

												BgL_tmpz00_3204 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3203 = BGL_OBJECT_WIDENING(BgL_tmpz00_3204);
											}
											BgL_auxz00_3202 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3203);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3202))->
												BgL_cfromza2za2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3210;

										{
											obj_t BgL_auxz00_3211;

											{	/* Globalize/ginfo.scm 28 */
												BgL_objectz00_bglt BgL_tmpz00_3212;

												BgL_tmpz00_3212 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3211 = BGL_OBJECT_WIDENING(BgL_tmpz00_3212);
											}
											BgL_auxz00_3210 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3211);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3210))->
												BgL_ctoz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3218;

										{
											obj_t BgL_auxz00_3219;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3220;

												BgL_tmpz00_3220 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3219 = BGL_OBJECT_WIDENING(BgL_tmpz00_3220);
											}
											BgL_auxz00_3218 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3219);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3218))->
												BgL_ctoza2za2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3226;

										{
											obj_t BgL_auxz00_3227;

											{	/* Globalize/ginfo.scm 32 */
												BgL_objectz00_bglt BgL_tmpz00_3228;

												BgL_tmpz00_3228 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3227 = BGL_OBJECT_WIDENING(BgL_tmpz00_3228);
											}
											BgL_auxz00_3226 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3227);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3226))->
												BgL_efunctionsz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3234;

										{
											obj_t BgL_auxz00_3235;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3236;

												BgL_tmpz00_3236 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3235 = BGL_OBJECT_WIDENING(BgL_tmpz00_3236);
											}
											BgL_auxz00_3234 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3235);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3234))->
												BgL_integratorz00) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3242;

										{
											obj_t BgL_auxz00_3243;

											{	/* Globalize/ginfo.scm 36 */
												BgL_objectz00_bglt BgL_tmpz00_3244;

												BgL_tmpz00_3244 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3243 = BGL_OBJECT_WIDENING(BgL_tmpz00_3244);
											}
											BgL_auxz00_3242 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3243);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3242))->
												BgL_imarkz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3250;

										{
											obj_t BgL_auxz00_3251;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3252;

												BgL_tmpz00_3252 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3251 = BGL_OBJECT_WIDENING(BgL_tmpz00_3252);
											}
											BgL_auxz00_3250 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3251);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3250))->
												BgL_ownerz00) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3258;

										{
											obj_t BgL_auxz00_3259;

											{	/* Globalize/ginfo.scm 40 */
												BgL_objectz00_bglt BgL_tmpz00_3260;

												BgL_tmpz00_3260 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3259 = BGL_OBJECT_WIDENING(BgL_tmpz00_3260);
											}
											BgL_auxz00_3258 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3259);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3258))->
												BgL_integratedz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3266;

										{
											obj_t BgL_auxz00_3267;

											{	/* Globalize/ginfo.scm 42 */
												BgL_objectz00_bglt BgL_tmpz00_3268;

												BgL_tmpz00_3268 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3267 = BGL_OBJECT_WIDENING(BgL_tmpz00_3268);
											}
											BgL_auxz00_3266 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3267);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3266))->
												BgL_pluggedzd2inzd2) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3274;

										{
											obj_t BgL_auxz00_3275;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3276;

												BgL_tmpz00_3276 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3275 = BGL_OBJECT_WIDENING(BgL_tmpz00_3276);
											}
											BgL_auxz00_3274 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3275);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3274))->
												BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3282;

										{
											obj_t BgL_auxz00_3283;

											{	/* Globalize/ginfo.scm 46 */
												BgL_objectz00_bglt BgL_tmpz00_3284;

												BgL_tmpz00_3284 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3283 = BGL_OBJECT_WIDENING(BgL_tmpz00_3284);
											}
											BgL_auxz00_3282 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3283);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3282))->
												BgL_freezd2markzd2) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3290;

										{
											obj_t BgL_auxz00_3291;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3292;

												BgL_tmpz00_3292 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3291 = BGL_OBJECT_WIDENING(BgL_tmpz00_3292);
											}
											BgL_auxz00_3290 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3291);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3290))->
												BgL_thezd2globalzd2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3298;

										{
											obj_t BgL_auxz00_3299;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3300;

												BgL_tmpz00_3300 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3299 = BGL_OBJECT_WIDENING(BgL_tmpz00_3300);
											}
											BgL_auxz00_3298 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3299);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3298))->
												BgL_kapturedz00) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3306;

										{
											obj_t BgL_auxz00_3307;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3308;

												BgL_tmpz00_3308 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3307 = BGL_OBJECT_WIDENING(BgL_tmpz00_3308);
											}
											BgL_auxz00_3306 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3307);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3306))->
												BgL_newzd2bodyzd2) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3314;

										{
											obj_t BgL_auxz00_3315;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3316;

												BgL_tmpz00_3316 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3315 = BGL_OBJECT_WIDENING(BgL_tmpz00_3316);
											}
											BgL_auxz00_3314 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3315);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3314))->
												BgL_bmarkz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3322;

										{
											obj_t BgL_auxz00_3323;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3324;

												BgL_tmpz00_3324 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3323 = BGL_OBJECT_WIDENING(BgL_tmpz00_3324);
											}
											BgL_auxz00_3322 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3323);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3322))->
												BgL_umarkz00) = ((long) ((long) -10)), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3330;

										{
											obj_t BgL_auxz00_3331;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3332;

												BgL_tmpz00_3332 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3331 = BGL_OBJECT_WIDENING(BgL_tmpz00_3332);
											}
											BgL_auxz00_3330 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3331);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3330))->
												BgL_freez00) = ((obj_t) BUNSPEC), BUNSPEC);
									}
									{
										BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3338;

										{
											obj_t BgL_auxz00_3339;

											{	/* Globalize/ginfo.scm 60 */
												BgL_objectz00_bglt BgL_tmpz00_3340;

												BgL_tmpz00_3340 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795));
												BgL_auxz00_3339 = BGL_OBJECT_WIDENING(BgL_tmpz00_3340);
											}
											BgL_auxz00_3338 =
												((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3339);
										}
										((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3338))->
												BgL_boundz00) = ((obj_t) BNIL), BUNSPEC);
									}
									((BgL_sfunz00_bglt) BgL_newzd2funzd2_1795);
									{	/* Globalize/loc2glo.scm 117 */
										BgL_svarz00_bglt BgL_tmp1147z00_1801;

										BgL_tmp1147z00_1801 =
											((BgL_svarz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_envz00_1791)))->
												BgL_valuez00));
										{	/* Globalize/loc2glo.scm 117 */
											BgL_svarzf2ginfozf2_bglt BgL_wide1149z00_1803;

											BgL_wide1149z00_1803 =
												((BgL_svarzf2ginfozf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_svarzf2ginfozf2_bgl))));
											{	/* Globalize/loc2glo.scm 117 */
												obj_t BgL_auxz00_3354;
												BgL_objectz00_bglt BgL_tmpz00_3351;

												BgL_auxz00_3354 = ((obj_t) BgL_wide1149z00_1803);
												BgL_tmpz00_3351 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3351,
													BgL_auxz00_3354);
											}
											((BgL_objectz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
											{	/* Globalize/loc2glo.scm 117 */
												long BgL_arg1461z00_1804;

												{	/* Globalize/loc2glo.scm 117 */
													long BgL_res1932z00_2479;

													BgL_res1932z00_2479 =
														BGL_CLASS_INDEX
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
													BgL_arg1461z00_1804 = BgL_res1932z00_2479;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801)),
													BgL_arg1461z00_1804);
											}
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3365;

											{
												obj_t BgL_auxz00_3366;

												{	/* Globalize/loc2glo.scm 117 */
													BgL_objectz00_bglt BgL_tmpz00_3367;

													BgL_tmpz00_3367 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
													BgL_auxz00_3366 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3367);
												}
												BgL_auxz00_3365 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3366);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3365))->
													BgL_kapturedzf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3373;

											{
												obj_t BgL_auxz00_3374;

												{	/* Globalize/loc2glo.scm 117 */
													BgL_objectz00_bglt BgL_tmpz00_3375;

													BgL_tmpz00_3375 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
													BgL_auxz00_3374 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3375);
												}
												BgL_auxz00_3373 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3374);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3373))->
													BgL_freezd2markzd2) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3381;

											{
												obj_t BgL_auxz00_3382;

												{	/* Globalize/loc2glo.scm 117 */
													BgL_objectz00_bglt BgL_tmpz00_3383;

													BgL_tmpz00_3383 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
													BgL_auxz00_3382 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3383);
												}
												BgL_auxz00_3381 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3382);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3381))->
													BgL_markz00) = ((long) ((long) -10)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3389;

											{
												obj_t BgL_auxz00_3390;

												{	/* Globalize/loc2glo.scm 117 */
													BgL_objectz00_bglt BgL_tmpz00_3391;

													BgL_tmpz00_3391 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
													BgL_auxz00_3390 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3391);
												}
												BgL_auxz00_3389 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3390);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3389))->
													BgL_celledzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_svarzf2ginfozf2_bglt BgL_auxz00_3397;

											{
												obj_t BgL_auxz00_3398;

												{	/* Globalize/loc2glo.scm 117 */
													BgL_objectz00_bglt BgL_tmpz00_3399;

													BgL_tmpz00_3399 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1147z00_1801));
													BgL_auxz00_3398 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3399);
												}
												BgL_auxz00_3397 =
													((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3398);
											}
											((((BgL_svarzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3397))->
													BgL_stackablez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										}
										((BgL_svarz00_bglt) BgL_tmp1147z00_1801);
									}
									{	/* Globalize/loc2glo.scm 118 */
										obj_t BgL_arg1462z00_1806;

										{	/* Globalize/loc2glo.scm 118 */
											BgL_typez00_bglt BgL_arg1464z00_1807;

											BgL_arg1464z00_1807 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_6)))->
												BgL_typez00);
											if (CBOOL
												(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
												{	/* Globalize/loc2glo.scm 70 */
													BgL_arg1462z00_1806 = ((obj_t) BgL_arg1464z00_1807);
												}
											else
												{	/* Globalize/loc2glo.scm 70 */
													BgL_arg1462z00_1806 = BGl_za2objza2z00zztype_cachez00;
												}
										}
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_5)))->
												BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BgL_arg1462z00_1806)), BUNSPEC);
									}
									((((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_1795))->
											BgL_thezd2closurezd2globalz00) =
										((obj_t) ((obj_t) BgL_localz00_6)), BUNSPEC);
									{	/* Globalize/loc2glo.scm 121 */
										obj_t BgL_nargsz00_1808;

										BgL_nargsz00_1808 =
											CDR(
											(((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_1795))->
												BgL_argsz00));
										{	/* Globalize/loc2glo.scm 122 */
											bool_t BgL_test1994z00_3418;

											if (BGl_localzd2iszd2methodzf3zf3zzobject_methodz00
												(BgL_localz00_6))
												{	/* Globalize/loc2glo.scm 123 */
													obj_t BgL_arg1558z00_1847;

													BgL_arg1558z00_1847 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test1994z00_3418 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1558z00_1847)))->
														BgL_typedzd2funcallzd2);
												}
											else
												{	/* Globalize/loc2glo.scm 122 */
													BgL_test1994z00_3418 = ((bool_t) 0);
												}
											if (BgL_test1994z00_3418)
												{	/* Globalize/loc2glo.scm 122 */
													{	/* Globalize/loc2glo.scm 128 */
														obj_t BgL_arg1476z00_1812;
														BgL_typez00_bglt BgL_arg1477z00_1813;

														BgL_arg1476z00_1812 =
															CAR(((obj_t) BgL_nargsz00_1808));
														BgL_arg1477z00_1813 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_argsz00_7))))))->
															BgL_typez00);
														((((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt) (
																				(BgL_localz00_bglt)
																				BgL_arg1476z00_1812))))->BgL_typez00) =
															((BgL_typez00_bglt) BgL_arg1477z00_1813),
															BUNSPEC);
													}
													{	/* Globalize/loc2glo.scm 129 */
														obj_t BgL_g1392z00_1815;
														obj_t BgL_g1393z00_1816;

														BgL_g1392z00_1815 =
															CDR(((obj_t) BgL_nargsz00_1808));
														BgL_g1393z00_1816 = CDR(((obj_t) BgL_argsz00_7));
														{
															obj_t BgL_ll1389z00_1818;
															obj_t BgL_ll1390z00_1819;

															BgL_ll1389z00_1818 = BgL_g1392z00_1815;
															BgL_ll1390z00_1819 = BgL_g1393z00_1816;
														BgL_zc3z04anonymousza31490ze3z87_1820:
															if (NULLP(BgL_ll1389z00_1818))
																{	/* Globalize/loc2glo.scm 134 */
																	((bool_t) 1);
																}
															else
																{	/* Globalize/loc2glo.scm 134 */
																	{	/* Globalize/loc2glo.scm 130 */
																		obj_t BgL_nz00_1822;
																		obj_t BgL_oz00_1823;

																		BgL_nz00_1822 =
																			CAR(((obj_t) BgL_ll1389z00_1818));
																		BgL_oz00_1823 =
																			CAR(((obj_t) BgL_ll1390z00_1819));
																		{	/* Globalize/loc2glo.scm 130 */
																			bool_t BgL_test1997z00_3444;

																			{	/* Globalize/loc2glo.scm 130 */
																				bool_t BgL_test1998z00_3445;

																				{	/* Globalize/loc2glo.scm 130 */
																					BgL_typez00_bglt BgL_arg1536z00_1835;

																					BgL_arg1536z00_1835 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_oz00_1823))))->
																						BgL_typez00);
																					BgL_test1998z00_3445 =
																						BGl_bigloozd2typezf3z21zztype_typez00
																						(BgL_arg1536z00_1835);
																				}
																				if (BgL_test1998z00_3445)
																					{	/* Globalize/loc2glo.scm 131 */
																						bool_t BgL_test1999z00_3450;

																						{	/* Globalize/loc2glo.scm 131 */
																							BgL_typez00_bglt
																								BgL_arg1528z00_1834;
																							BgL_arg1528z00_1834 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_localz00_bglt)
																												BgL_oz00_1823))))->
																								BgL_typez00);
																							BgL_test1999z00_3450 =
																								(((obj_t) BgL_arg1528z00_1834)
																								==
																								BGl_za2_za2z00zztype_cachez00);
																						}
																						if (BgL_test1999z00_3450)
																							{	/* Globalize/loc2glo.scm 131 */
																								BgL_test1997z00_3444 =
																									((bool_t) 0);
																							}
																						else
																							{	/* Globalize/loc2glo.scm 131 */
																								BgL_test1997z00_3444 =
																									((bool_t) 1);
																							}
																					}
																				else
																					{	/* Globalize/loc2glo.scm 130 */
																						BgL_test1997z00_3444 = ((bool_t) 0);
																					}
																			}
																			if (BgL_test1997z00_3444)
																				{	/* Globalize/loc2glo.scm 132 */
																					BgL_typez00_bglt BgL_arg1521z00_1831;

																					BgL_arg1521z00_1831 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_oz00_1823))))->
																						BgL_typez00);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										((BgL_localz00_bglt)
																											BgL_nz00_1822))))->
																							BgL_typez00) =
																						((BgL_typez00_bglt)
																							BgL_arg1521z00_1831), BUNSPEC);
																				}
																			else
																				{	/* Globalize/loc2glo.scm 133 */
																					BgL_typez00_bglt BgL_vz00_2512;

																					BgL_vz00_2512 =
																						((BgL_typez00_bglt)
																						BGl_za2objza2z00zztype_cachez00);
																					((((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										((BgL_localz00_bglt)
																											BgL_nz00_1822))))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) BgL_vz00_2512),
																						BUNSPEC);
																				}
																		}
																	}
																	{	/* Globalize/loc2glo.scm 134 */
																		obj_t BgL_arg1537z00_1836;
																		obj_t BgL_arg1540z00_1837;

																		BgL_arg1537z00_1836 =
																			CDR(((obj_t) BgL_ll1389z00_1818));
																		BgL_arg1540z00_1837 =
																			CDR(((obj_t) BgL_ll1390z00_1819));
																		{
																			obj_t BgL_ll1390z00_3471;
																			obj_t BgL_ll1389z00_3470;

																			BgL_ll1389z00_3470 = BgL_arg1537z00_1836;
																			BgL_ll1390z00_3471 = BgL_arg1540z00_1837;
																			BgL_ll1390z00_1819 = BgL_ll1390z00_3471;
																			BgL_ll1389z00_1818 = BgL_ll1389z00_3470;
																			goto
																				BgL_zc3z04anonymousza31490ze3z87_1820;
																		}
																	}
																}
														}
													}
												}
											else
												{	/* Globalize/loc2glo.scm 122 */
													if (CBOOL
														(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
														{	/* Globalize/loc2glo.scm 135 */
															((bool_t) 0);
														}
													else
														{
															obj_t BgL_l1394z00_1840;

															BgL_l1394z00_1840 = BgL_nargsz00_1808;
														BgL_zc3z04anonymousza31541ze3z87_1841:
															if (PAIRP(BgL_l1394z00_1840))
																{	/* Globalize/loc2glo.scm 136 */
																	{	/* Globalize/loc2glo.scm 137 */
																		obj_t BgL_lz00_1843;

																		BgL_lz00_1843 = CAR(BgL_l1394z00_1840);
																		{	/* Globalize/loc2glo.scm 137 */
																			BgL_typez00_bglt BgL_vz00_2518;

																			BgL_vz00_2518 =
																				((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00);
																			((((BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt) (
																									(BgL_localz00_bglt)
																									BgL_lz00_1843))))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_vz00_2518),
																				BUNSPEC);
																		}
																	}
																	{
																		obj_t BgL_l1394z00_3481;

																		BgL_l1394z00_3481 = CDR(BgL_l1394z00_1840);
																		BgL_l1394z00_1840 = BgL_l1394z00_3481;
																		goto BgL_zc3z04anonymousza31541ze3z87_1841;
																	}
																}
															else
																{	/* Globalize/loc2glo.scm 136 */
																	((bool_t) 1);
																}
														}
												}
										}
									}
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_5)))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) ((BgL_valuez00_bglt)
												BgL_newzd2funzd2_1795)), BUNSPEC);
									{	/* Globalize/loc2glo.scm 145 */
										BgL_nodez00_bglt BgL_arg1564z00_1849;

										{	/* Globalize/loc2glo.scm 145 */
											BgL_nodez00_bglt BgL_arg1565z00_1850;

											{	/* Globalize/loc2glo.scm 145 */
												obj_t BgL_arg1573z00_1851;

												{	/* Globalize/loc2glo.scm 145 */
													obj_t BgL_arg1575z00_1852;
													obj_t BgL_arg1578z00_1853;

													{	/* Globalize/loc2glo.scm 145 */
														obj_t BgL_arg1582z00_1854;

														BgL_arg1582z00_1854 =
															BGl_thezd2closurezd2zzglobaliza7e_freeza7(
															((BgL_variablez00_bglt) BgL_localz00_6), BFALSE);
														BgL_arg1575z00_1852 =
															MAKE_YOUNG_PAIR(BgL_arg1582z00_1854,
															((obj_t) BgL_envz00_1791));
													}
													if (NULLP(BgL_kapturedz00_8))
														{	/* Globalize/loc2glo.scm 146 */
															BgL_arg1578z00_1853 = BNIL;
														}
													else
														{	/* Globalize/loc2glo.scm 146 */
															obj_t BgL_head1398z00_1858;

															{	/* Globalize/loc2glo.scm 146 */
																obj_t BgL_arg1599z00_1874;

																{	/* Globalize/loc2glo.scm 146 */
																	obj_t BgL_arg1604z00_1875;
																	obj_t BgL_arg1605z00_1876;

																	BgL_arg1604z00_1875 =
																		CAR(((obj_t) BgL_kapturedz00_8));
																	BgL_arg1605z00_1876 =
																		CAR(((obj_t) BgL_newzd2freezd2_1792));
																	BgL_arg1599z00_1874 =
																		MAKE_YOUNG_PAIR(BgL_arg1604z00_1875,
																		BgL_arg1605z00_1876);
																}
																{	/* Globalize/loc2glo.scm 146 */
																	obj_t BgL_res1937z00_2525;

																	BgL_res1937z00_2525 =
																		MAKE_YOUNG_PAIR(BgL_arg1599z00_1874, BNIL);
																	BgL_head1398z00_1858 = BgL_res1937z00_2525;
																}
															}
															{	/* Globalize/loc2glo.scm 146 */
																obj_t BgL_g1402z00_1859;
																obj_t BgL_g1403z00_1860;

																BgL_g1402z00_1859 =
																	CDR(((obj_t) BgL_kapturedz00_8));
																BgL_g1403z00_1860 =
																	CDR(((obj_t) BgL_newzd2freezd2_1792));
																{
																	obj_t BgL_ll1396z00_1862;
																	obj_t BgL_ll1397z00_1863;
																	obj_t BgL_tail1399z00_1864;

																	BgL_ll1396z00_1862 = BgL_g1402z00_1859;
																	BgL_ll1397z00_1863 = BgL_g1403z00_1860;
																	BgL_tail1399z00_1864 = BgL_head1398z00_1858;
																BgL_zc3z04anonymousza31584ze3z87_1865:
																	if (NULLP(BgL_ll1396z00_1862))
																		{	/* Globalize/loc2glo.scm 146 */
																			BgL_arg1578z00_1853 =
																				BgL_head1398z00_1858;
																		}
																	else
																		{	/* Globalize/loc2glo.scm 146 */
																			obj_t BgL_newtail1400z00_1867;

																			{	/* Globalize/loc2glo.scm 146 */
																				obj_t BgL_arg1592z00_1870;

																				{	/* Globalize/loc2glo.scm 146 */
																					obj_t BgL_arg1593z00_1871;
																					obj_t BgL_arg1597z00_1872;

																					BgL_arg1593z00_1871 =
																						CAR(((obj_t) BgL_ll1396z00_1862));
																					BgL_arg1597z00_1872 =
																						CAR(((obj_t) BgL_ll1397z00_1863));
																					BgL_arg1592z00_1870 =
																						MAKE_YOUNG_PAIR(BgL_arg1593z00_1871,
																						BgL_arg1597z00_1872);
																				}
																				{	/* Globalize/loc2glo.scm 146 */
																					obj_t BgL_res1939z00_2531;

																					BgL_res1939z00_2531 =
																						MAKE_YOUNG_PAIR(BgL_arg1592z00_1870,
																						BNIL);
																					BgL_newtail1400z00_1867 =
																						BgL_res1939z00_2531;
																				}
																			}
																			SET_CDR(BgL_tail1399z00_1864,
																				BgL_newtail1400z00_1867);
																			{	/* Globalize/loc2glo.scm 146 */
																				obj_t BgL_arg1588z00_1868;
																				obj_t BgL_arg1589z00_1869;

																				BgL_arg1588z00_1868 =
																					CDR(((obj_t) BgL_ll1396z00_1862));
																				BgL_arg1589z00_1869 =
																					CDR(((obj_t) BgL_ll1397z00_1863));
																				{
																					obj_t BgL_tail1399z00_3517;
																					obj_t BgL_ll1397z00_3516;
																					obj_t BgL_ll1396z00_3515;

																					BgL_ll1396z00_3515 =
																						BgL_arg1588z00_1868;
																					BgL_ll1397z00_3516 =
																						BgL_arg1589z00_1869;
																					BgL_tail1399z00_3517 =
																						BgL_newtail1400z00_1867;
																					BgL_tail1399z00_1864 =
																						BgL_tail1399z00_3517;
																					BgL_ll1397z00_1863 =
																						BgL_ll1397z00_3516;
																					BgL_ll1396z00_1862 =
																						BgL_ll1396z00_3515;
																					goto
																						BgL_zc3z04anonymousza31584ze3z87_1865;
																				}
																			}
																		}
																}
															}
														}
													BgL_arg1573z00_1851 =
														MAKE_YOUNG_PAIR(BgL_arg1575z00_1852,
														BgL_arg1578z00_1853);
												}
												BgL_arg1565z00_1850 =
													BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
													((BgL_nodez00_bglt) BgL_bodyz00_9),
													((BgL_variablez00_bglt) BgL_localz00_6),
													BgL_arg1573z00_1851);
											}
											BgL_arg1564z00_1849 =
												BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
												(BgL_localz00_6, BgL_globalz00_5,
												BgL_newzd2argszd2_1793, BgL_newzd2freezd2_1792,
												BgL_envz00_1791, BgL_arg1565z00_1850);
										}
										((((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_1795))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1564z00_1849)), BUNSPEC);
									}
									return BgL_globalz00_5;
								}
							}
						}
					}
				}
			}
		}

	}



/* make-escaping-body */
	BgL_nodez00_bglt
		BGl_makezd2escapingzd2bodyz00zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt BgL_localz00_10, BgL_globalz00_bglt BgL_globalz00_11,
		obj_t BgL_argsz00_12, obj_t BgL_kapturedz00_13,
		BgL_localz00_bglt BgL_envz00_14, BgL_nodez00_bglt BgL_bodyz00_15)
	{
		{	/* Globalize/loc2glo.scm 152 */
			{	/* Globalize/loc2glo.scm 153 */
				obj_t BgL_stackz00_1950;
				obj_t BgL_locz00_1951;

				{	/* Globalize/loc2glo.scm 153 */
					obj_t BgL_list1742z00_2004;

					BgL_list1742z00_2004 = MAKE_YOUNG_PAIR(((obj_t) BgL_envz00_14), BNIL);
					BgL_stackz00_1950 = BgL_list1742z00_2004;
				}
				BgL_locz00_1951 =
					(((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_15))->BgL_locz00);
				{	/* Globalize/loc2glo.scm 155 */
					BgL_valuez00_bglt BgL_arg1685z00_1952;

					BgL_arg1685z00_1952 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_localz00_10)))->BgL_valuez00);
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_arg1685z00_1952)))->BgL_bodyz00) =
						((obj_t) ((obj_t) BgL_bodyz00_15)), BUNSPEC);
				}
				{	/* Globalize/loc2glo.scm 156 */
					BgL_letzd2varzd2_bglt BgL_new1152z00_1953;

					{	/* Globalize/loc2glo.scm 157 */
						BgL_letzd2varzd2_bglt BgL_new1151z00_2002;

						BgL_new1151z00_2002 =
							((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						{	/* Globalize/loc2glo.scm 157 */
							long BgL_arg1741z00_2003;

							{	/* Globalize/loc2glo.scm 157 */
								long BgL_res1941z00_2541;

								BgL_res1941z00_2541 =
									BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
								BgL_arg1741z00_2003 = BgL_res1941z00_2541;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1151z00_2002),
								BgL_arg1741z00_2003);
						}
						{	/* Globalize/loc2glo.scm 157 */
							BgL_objectz00_bglt BgL_tmpz00_3537;

							BgL_tmpz00_3537 = ((BgL_objectz00_bglt) BgL_new1151z00_2002);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3537, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1151z00_2002);
						BgL_new1152z00_1953 = BgL_new1151z00_2002;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1152z00_1953)))->BgL_locz00) =
						((obj_t) BgL_locz00_1951), BUNSPEC);
					{
						BgL_typez00_bglt BgL_auxz00_3543;

						{	/* Globalize/loc2glo.scm 158 */
							BgL_typez00_bglt BgL_arg1686z00_1954;

							BgL_arg1686z00_1954 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_localz00_10)))->BgL_typez00);
							BgL_auxz00_3543 =
								BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1686z00_1954,
								((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1152z00_1953)))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_3543), BUNSPEC);
					}
					((((BgL_nodezf2effectzf2_bglt) COBJECT(
									((BgL_nodezf2effectzf2_bglt) BgL_new1152z00_1953)))->
							BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1152z00_1953)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					{
						obj_t BgL_auxz00_3555;

						{
							obj_t BgL_kapturedz00_1957;
							long BgL_numz00_1958;
							obj_t BgL_resz00_1959;

							BgL_kapturedz00_1957 = BgL_kapturedz00_13;
							BgL_numz00_1958 = ((long) 0);
							BgL_resz00_1959 = BNIL;
						BgL_zc3z04anonymousza31687ze3z87_1960:
							if (NULLP(BgL_kapturedz00_1957))
								{	/* Globalize/loc2glo.scm 162 */
									BgL_auxz00_3555 = bgl_reverse_bang(BgL_resz00_1959);
								}
							else
								{	/* Globalize/loc2glo.scm 164 */
									obj_t BgL_arg1692z00_1962;
									long BgL_arg1695z00_1963;
									obj_t BgL_arg1696z00_1964;

									BgL_arg1692z00_1962 = CDR(((obj_t) BgL_kapturedz00_1957));
									BgL_arg1695z00_1963 = (BgL_numz00_1958 + ((long) 1));
									{	/* Globalize/loc2glo.scm 166 */
										obj_t BgL_arg1697z00_1965;

										{	/* Globalize/loc2glo.scm 166 */
											obj_t BgL_arg1704z00_1966;
											BgL_nodez00_bglt BgL_arg1707z00_1967;

											BgL_arg1704z00_1966 = CAR(((obj_t) BgL_kapturedz00_1957));
											{	/* Globalize/loc2glo.scm 168 */
												obj_t BgL_arg1708z00_1968;

												{	/* Globalize/loc2glo.scm 168 */
													obj_t BgL_arg1711z00_1969;

													{	/* Globalize/loc2glo.scm 168 */
														obj_t BgL_arg1712z00_1970;

														BgL_arg1712z00_1970 =
															MAKE_YOUNG_PAIR(BINT(BgL_numz00_1958), BNIL);
														BgL_arg1711z00_1969 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
															BgL_arg1712z00_1970);
													}
													BgL_arg1708z00_1968 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
														BgL_arg1711z00_1969);
												}
												BgL_arg1707z00_1967 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg1708z00_1968, BgL_stackz00_1950,
													BgL_locz00_1951, CNST_TABLE_REF(((long) 2)));
											}
											BgL_arg1697z00_1965 =
												MAKE_YOUNG_PAIR(BgL_arg1704z00_1966,
												((obj_t) BgL_arg1707z00_1967));
										}
										BgL_arg1696z00_1964 =
											MAKE_YOUNG_PAIR(BgL_arg1697z00_1965, BgL_resz00_1959);
									}
									{
										obj_t BgL_resz00_3577;
										long BgL_numz00_3576;
										obj_t BgL_kapturedz00_3575;

										BgL_kapturedz00_3575 = BgL_arg1692z00_1962;
										BgL_numz00_3576 = BgL_arg1695z00_1963;
										BgL_resz00_3577 = BgL_arg1696z00_1964;
										BgL_resz00_1959 = BgL_resz00_3577;
										BgL_numz00_1958 = BgL_numz00_3576;
										BgL_kapturedz00_1957 = BgL_kapturedz00_3575;
										goto BgL_zc3z04anonymousza31687ze3z87_1960;
									}
								}
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1152z00_1953))->
								BgL_bindingsz00) = ((obj_t) BgL_auxz00_3555), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_3579;

						{	/* Globalize/loc2glo.scm 173 */
							BgL_letzd2funzd2_bglt BgL_new1156z00_1972;

							{	/* Globalize/loc2glo.scm 174 */
								BgL_letzd2funzd2_bglt BgL_new1154z00_2000;

								BgL_new1154z00_2000 =
									((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_letzd2funzd2_bgl))));
								{	/* Globalize/loc2glo.scm 174 */
									long BgL_arg1740z00_2001;

									{	/* Globalize/loc2glo.scm 174 */
										long BgL_res1944z00_2552;

										{	/* Globalize/loc2glo.scm 174 */
											obj_t BgL_classz00_2551;

											BgL_classz00_2551 = BGl_letzd2funzd2zzast_nodez00;
											BgL_res1944z00_2552 = BGL_CLASS_INDEX(BgL_classz00_2551);
										}
										BgL_arg1740z00_2001 = BgL_res1944z00_2552;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1154z00_2000),
										BgL_arg1740z00_2001);
								}
								{	/* Globalize/loc2glo.scm 174 */
									BgL_objectz00_bglt BgL_tmpz00_3584;

									BgL_tmpz00_3584 = ((BgL_objectz00_bglt) BgL_new1154z00_2000);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3584, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1154z00_2000);
								BgL_new1156z00_1972 = BgL_new1154z00_2000;
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1156z00_1972)))->BgL_locz00) =
								((obj_t) BgL_locz00_1951), BUNSPEC);
							{
								BgL_typez00_bglt BgL_auxz00_3590;

								{	/* Globalize/loc2glo.scm 175 */
									BgL_typez00_bglt BgL_arg1719z00_1973;

									BgL_arg1719z00_1973 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_localz00_10)))->
										BgL_typez00);
									BgL_auxz00_3590 =
										BGl_strictzd2nodezd2typez00zzast_nodez00
										(BgL_arg1719z00_1973,
										((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1156z00_1972)))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_3590), BUNSPEC);
							}
							((((BgL_nodezf2effectzf2_bglt) COBJECT(
											((BgL_nodezf2effectzf2_bglt) BgL_new1156z00_1972)))->
									BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_nodezf2effectzf2_bglt)
										COBJECT(((BgL_nodezf2effectzf2_bglt)
												BgL_new1156z00_1972)))->BgL_keyz00) =
								((obj_t) BINT(((long) -1))), BUNSPEC);
							{
								obj_t BgL_auxz00_3602;

								{	/* Globalize/loc2glo.scm 176 */
									obj_t BgL_list1720z00_1974;

									BgL_list1720z00_1974 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_10), BNIL);
									BgL_auxz00_3602 = BgL_list1720z00_1974;
								}
								((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1156z00_1972))->
										BgL_localsz00) = ((obj_t) BgL_auxz00_3602), BUNSPEC);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_3606;

								{	/* Globalize/loc2glo.scm 177 */
									BgL_appz00_bglt BgL_new1158z00_1975;

									{	/* Globalize/loc2glo.scm 178 */
										BgL_appz00_bglt BgL_new1157z00_1998;

										BgL_new1157z00_1998 =
											((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_appz00_bgl))));
										{	/* Globalize/loc2glo.scm 178 */
											long BgL_arg1739z00_1999;

											{	/* Globalize/loc2glo.scm 178 */
												long BgL_res1946z00_2559;

												{	/* Globalize/loc2glo.scm 178 */
													obj_t BgL_classz00_2558;

													BgL_classz00_2558 = BGl_appz00zzast_nodez00;
													BgL_res1946z00_2559 =
														BGL_CLASS_INDEX(BgL_classz00_2558);
												}
												BgL_arg1739z00_1999 = BgL_res1946z00_2559;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1157z00_1998),
												BgL_arg1739z00_1999);
										}
										{	/* Globalize/loc2glo.scm 178 */
											BgL_objectz00_bglt BgL_tmpz00_3611;

											BgL_tmpz00_3611 =
												((BgL_objectz00_bglt) BgL_new1157z00_1998);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3611, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1157z00_1998);
										BgL_new1158z00_1975 = BgL_new1157z00_1998;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1158z00_1975)))->
											BgL_locz00) = ((obj_t) BgL_locz00_1951), BUNSPEC);
									{
										BgL_typez00_bglt BgL_auxz00_3617;

										{	/* Globalize/loc2glo.scm 179 */
											BgL_typez00_bglt BgL_arg1725z00_1976;

											BgL_arg1725z00_1976 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_10)))->
												BgL_typez00);
											BgL_auxz00_3617 =
												BGl_strictzd2nodezd2typez00zzast_nodez00
												(BgL_arg1725z00_1976,
												((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1158z00_1975)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_3617), BUNSPEC);
									}
									((((BgL_nodezf2effectzf2_bglt) COBJECT(
													((BgL_nodezf2effectzf2_bglt) BgL_new1158z00_1975)))->
											BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
									((((BgL_nodezf2effectzf2_bglt)
												COBJECT(((BgL_nodezf2effectzf2_bglt)
														BgL_new1158z00_1975)))->BgL_keyz00) =
										((obj_t) BINT(((long) -1))), BUNSPEC);
									{
										BgL_varz00_bglt BgL_auxz00_3629;

										{	/* Globalize/loc2glo.scm 180 */
											BgL_varz00_bglt BgL_new1160z00_1977;

											{	/* Globalize/loc2glo.scm 181 */
												BgL_varz00_bglt BgL_new1159z00_1979;

												BgL_new1159z00_1979 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Globalize/loc2glo.scm 181 */
													long BgL_arg1727z00_1980;

													{	/* Globalize/loc2glo.scm 181 */
														long BgL_res1947z00_2565;

														{	/* Globalize/loc2glo.scm 181 */
															obj_t BgL_classz00_2564;

															BgL_classz00_2564 = BGl_varz00zzast_nodez00;
															BgL_res1947z00_2565 =
																BGL_CLASS_INDEX(BgL_classz00_2564);
														}
														BgL_arg1727z00_1980 = BgL_res1947z00_2565;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1159z00_1979),
														BgL_arg1727z00_1980);
												}
												BgL_new1160z00_1977 = BgL_new1159z00_1979;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1160z00_1977)))->
													BgL_locz00) = ((obj_t) BgL_locz00_1951), BUNSPEC);
											{
												BgL_typez00_bglt BgL_auxz00_3636;

												{	/* Globalize/loc2glo.scm 183 */
													BgL_typez00_bglt BgL_arg1726z00_1978;

													BgL_arg1726z00_1978 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_localz00_10)))->
														BgL_typez00);
													BgL_auxz00_3636 =
														BGl_strictzd2nodezd2typez00zzast_nodez00
														(BgL_arg1726z00_1978,
														((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1160z00_1977)))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_auxz00_3636), BUNSPEC);
											}
											((((BgL_varz00_bglt) COBJECT(BgL_new1160z00_1977))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_localz00_10)), BUNSPEC);
											BgL_auxz00_3629 = BgL_new1160z00_1977;
										}
										((((BgL_appz00_bglt) COBJECT(BgL_new1158z00_1975))->
												BgL_funz00) =
											((BgL_varz00_bglt) BgL_auxz00_3629), BUNSPEC);
									}
									{
										obj_t BgL_auxz00_3646;

										if (NULLP(BgL_argsz00_12))
											{	/* Globalize/loc2glo.scm 185 */
												BgL_auxz00_3646 = BNIL;
											}
										else
											{	/* Globalize/loc2glo.scm 185 */
												obj_t BgL_head1406z00_1983;

												{	/* Globalize/loc2glo.scm 185 */
													obj_t BgL_res1949z00_2570;

													BgL_res1949z00_2570 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1406z00_1983 = BgL_res1949z00_2570;
												}
												{
													obj_t BgL_l1404z00_1985;
													obj_t BgL_tail1407z00_1986;

													BgL_l1404z00_1985 = BgL_argsz00_12;
													BgL_tail1407z00_1986 = BgL_head1406z00_1983;
												BgL_zc3z04anonymousza31729ze3z87_1987:
													if (NULLP(BgL_l1404z00_1985))
														{	/* Globalize/loc2glo.scm 185 */
															BgL_auxz00_3646 = CDR(BgL_head1406z00_1983);
														}
													else
														{	/* Globalize/loc2glo.scm 185 */
															obj_t BgL_newtail1408z00_1989;

															{	/* Globalize/loc2glo.scm 185 */
																BgL_varz00_bglt BgL_arg1732z00_1991;

																{	/* Globalize/loc2glo.scm 185 */
																	obj_t BgL_vz00_1992;

																	BgL_vz00_1992 =
																		CAR(((obj_t) BgL_l1404z00_1985));
																	{	/* Globalize/loc2glo.scm 186 */
																		BgL_varz00_bglt BgL_new1162z00_1993;

																		{	/* Globalize/loc2glo.scm 190 */
																			BgL_varz00_bglt BgL_new1161z00_1995;

																			BgL_new1161z00_1995 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Globalize/loc2glo.scm 190 */
																				long BgL_arg1738z00_1996;

																				{	/* Globalize/loc2glo.scm 190 */
																					long BgL_res1953z00_2575;

																					{	/* Globalize/loc2glo.scm 190 */
																						obj_t BgL_classz00_2574;

																						BgL_classz00_2574 =
																							BGl_varz00zzast_nodez00;
																						BgL_res1953z00_2575 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2574);
																					}
																					BgL_arg1738z00_1996 =
																						BgL_res1953z00_2575;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1161z00_1995),
																					BgL_arg1738z00_1996);
																			}
																			BgL_new1162z00_1993 = BgL_new1161z00_1995;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1162z00_1993)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1951), BUNSPEC);
																		{
																			BgL_typez00_bglt BgL_auxz00_3661;

																			{	/* Globalize/loc2glo.scm 189 */
																				BgL_typez00_bglt BgL_arg1733z00_1994;

																				BgL_arg1733z00_1994 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_vz00_1992)))->BgL_typez00);
																				BgL_auxz00_3661 =
																					BGl_strictzd2nodezd2typez00zzast_nodez00
																					(BgL_arg1733z00_1994,
																					((BgL_typez00_bglt)
																						BGl_za2_za2z00zztype_cachez00));
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1162z00_1993)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_3661),
																				BUNSPEC);
																		}
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1162z00_1993))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BgL_vz00_1992)), BUNSPEC);
																		BgL_arg1732z00_1991 = BgL_new1162z00_1993;
																}}
																{	/* Globalize/loc2glo.scm 185 */
																	obj_t BgL_res1954z00_2579;

																	BgL_res1954z00_2579 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1732z00_1991), BNIL);
																	BgL_newtail1408z00_1989 = BgL_res1954z00_2579;
															}}
															SET_CDR(BgL_tail1407z00_1986,
																BgL_newtail1408z00_1989);
															{	/* Globalize/loc2glo.scm 185 */
																obj_t BgL_arg1731z00_1990;

																BgL_arg1731z00_1990 =
																	CDR(((obj_t) BgL_l1404z00_1985));
																{
																	obj_t BgL_tail1407z00_3676;
																	obj_t BgL_l1404z00_3675;

																	BgL_l1404z00_3675 = BgL_arg1731z00_1990;
																	BgL_tail1407z00_3676 =
																		BgL_newtail1408z00_1989;
																	BgL_tail1407z00_1986 = BgL_tail1407z00_3676;
																	BgL_l1404z00_1985 = BgL_l1404z00_3675;
																	goto BgL_zc3z04anonymousza31729ze3z87_1987;
																}
															}
														}
												}
											}
										((((BgL_appz00_bglt) COBJECT(BgL_new1158z00_1975))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_3646), BUNSPEC);
									}
									((((BgL_appz00_bglt) COBJECT(BgL_new1158z00_1975))->
											BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
									BgL_auxz00_3606 = ((BgL_nodez00_bglt) BgL_new1158z00_1975);
								}
								((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1156z00_1972))->
										BgL_bodyz00) =
									((BgL_nodez00_bglt) BgL_auxz00_3606), BUNSPEC);
							}
							BgL_auxz00_3579 = ((BgL_nodez00_bglt) BgL_new1156z00_1972);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1152z00_1953))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3579), BUNSPEC);
					}
					((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1152z00_1953))->
							BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					return ((BgL_nodez00_bglt) BgL_new1152z00_1953);
				}
			}
		}

	}



/* fix-non-escaping-definition */
	BgL_globalz00_bglt
		BGl_fixzd2nonzd2escapingzd2definitionzd2zzglobaliza7e_localzd2ze3globalz96
		(BgL_globalz00_bglt BgL_globalz00_16, BgL_localz00_bglt BgL_localz00_17,
		obj_t BgL_argsz00_18, obj_t BgL_kapturedz00_19, obj_t BgL_bodyz00_20)
	{
		{	/* Globalize/loc2glo.scm 196 */
			{	/* Globalize/loc2glo.scm 197 */
				obj_t BgL_addzd2argszd2_2005;

				if (NULLP(BgL_kapturedz00_19))
					{	/* Globalize/loc2glo.scm 197 */
						BgL_addzd2argszd2_2005 = BNIL;
					}
				else
					{	/* Globalize/loc2glo.scm 197 */
						obj_t BgL_head1411z00_2055;

						{	/* Globalize/loc2glo.scm 197 */
							obj_t BgL_res1956z00_2583;

							BgL_res1956z00_2583 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1411z00_2055 = BgL_res1956z00_2583;
						}
						{
							obj_t BgL_l1409z00_2057;
							obj_t BgL_tail1412z00_2058;

							BgL_l1409z00_2057 = BgL_kapturedz00_19;
							BgL_tail1412z00_2058 = BgL_head1411z00_2055;
						BgL_zc3z04anonymousza31781ze3z87_2059:
							if (NULLP(BgL_l1409z00_2057))
								{	/* Globalize/loc2glo.scm 197 */
									BgL_addzd2argszd2_2005 = CDR(BgL_head1411z00_2055);
								}
							else
								{	/* Globalize/loc2glo.scm 197 */
									obj_t BgL_newtail1413z00_2061;

									{	/* Globalize/loc2glo.scm 197 */
										BgL_localz00_bglt BgL_arg1790z00_2063;

										{	/* Globalize/loc2glo.scm 197 */
											obj_t BgL_oldz00_2064;

											BgL_oldz00_2064 = CAR(((obj_t) BgL_l1409z00_2057));
											{	/* Globalize/loc2glo.scm 200 */
												BgL_localz00_bglt BgL_newz00_2065;

												{	/* Globalize/loc2glo.scm 201 */
													obj_t BgL_arg1808z00_2080;
													BgL_typez00_bglt BgL_arg1809z00_2081;

													BgL_arg1808z00_2080 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_oldz00_2064))))->
														BgL_idz00);
													BgL_arg1809z00_2081 =
														(((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt) (
																		(BgL_localz00_bglt) BgL_oldz00_2064))))->
														BgL_typez00);
													BgL_newz00_2065 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(BgL_arg1808z00_2080, BgL_arg1809z00_2081);
												}
												{	/* Globalize/loc2glo.scm 203 */
													bool_t BgL_arg1796z00_2066;

													BgL_arg1796z00_2066 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_oldz00_2064))))->
														BgL_userzf3zf3);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_newz00_2065)))->BgL_userzf3zf3) =
														((bool_t) BgL_arg1796z00_2066), BUNSPEC);
												}
												{	/* Globalize/loc2glo.scm 204 */
													BgL_localzf2ginfozf2_bglt BgL_wide1165z00_2069;

													BgL_wide1165z00_2069 =
														((BgL_localzf2ginfozf2_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_localzf2ginfozf2_bgl))));
													{	/* Globalize/loc2glo.scm 204 */
														obj_t BgL_auxz00_3709;
														BgL_objectz00_bglt BgL_tmpz00_3706;

														BgL_auxz00_3709 = ((obj_t) BgL_wide1165z00_2069);
														BgL_tmpz00_3706 =
															((BgL_objectz00_bglt)
															((BgL_localz00_bglt) BgL_newz00_2065));
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3706,
															BgL_auxz00_3709);
													}
													((BgL_objectz00_bglt)
														((BgL_localz00_bglt) BgL_newz00_2065));
													{	/* Globalize/loc2glo.scm 204 */
														long BgL_arg1798z00_2070;

														{	/* Globalize/loc2glo.scm 204 */
															long BgL_res1958z00_2594;

															BgL_res1958z00_2594 =
																BGL_CLASS_INDEX
																(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
															BgL_arg1798z00_2070 = BgL_res1958z00_2594;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_2065)),
															BgL_arg1798z00_2070);
													}
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_newz00_2065));
												}
												{
													BgL_localzf2ginfozf2_bglt BgL_auxz00_3720;

													{
														obj_t BgL_auxz00_3721;

														{	/* Globalize/loc2glo.scm 204 */
															BgL_objectz00_bglt BgL_tmpz00_3722;

															BgL_tmpz00_3722 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_2065));
															BgL_auxz00_3721 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3722);
														}
														BgL_auxz00_3720 =
															((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3721);
													}
													((((BgL_localzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_3720))->BgL_escapezf3zf3) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
												}
												{
													BgL_localzf2ginfozf2_bglt BgL_auxz00_3728;

													{
														obj_t BgL_auxz00_3729;

														{	/* Globalize/loc2glo.scm 204 */
															BgL_objectz00_bglt BgL_tmpz00_3730;

															BgL_tmpz00_3730 =
																((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_newz00_2065));
															BgL_auxz00_3729 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3730);
														}
														BgL_auxz00_3728 =
															((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3729);
													}
													((((BgL_localzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_3728))->
															BgL_globaliza7edzf3z54) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
												}
												((BgL_localz00_bglt) BgL_newz00_2065);
												{	/* Globalize/loc2glo.scm 205 */
													BgL_svarz00_bglt BgL_tmp1167z00_2072;

													BgL_tmp1167z00_2072 =
														((BgL_svarz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_newz00_2065)))->
															BgL_valuez00));
													{	/* Globalize/loc2glo.scm 205 */
														BgL_svarzf2ginfozf2_bglt BgL_wide1169z00_2074;

														BgL_wide1169z00_2074 =
															((BgL_svarzf2ginfozf2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_svarzf2ginfozf2_bgl))));
														{	/* Globalize/loc2glo.scm 205 */
															obj_t BgL_auxz00_3744;
															BgL_objectz00_bglt BgL_tmpz00_3741;

															BgL_auxz00_3744 = ((obj_t) BgL_wide1169z00_2074);
															BgL_tmpz00_3741 =
																((BgL_objectz00_bglt)
																((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3741,
																BgL_auxz00_3744);
														}
														((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
														{	/* Globalize/loc2glo.scm 205 */
															long BgL_arg1801z00_2075;

															{	/* Globalize/loc2glo.scm 205 */
																long BgL_res1959z00_2602;

																BgL_res1959z00_2602 =
																	BGL_CLASS_INDEX
																	(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																BgL_arg1801z00_2075 = BgL_res1959z00_2602;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072)),
																BgL_arg1801z00_2075);
														}
														((BgL_svarz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
													}
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_3755;

														{
															obj_t BgL_auxz00_3756;

															{	/* Globalize/loc2glo.scm 206 */
																BgL_objectz00_bglt BgL_tmpz00_3757;

																BgL_tmpz00_3757 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
																BgL_auxz00_3756 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3757);
															}
															BgL_auxz00_3755 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3756);
														}
														((((BgL_svarzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3755))->
																BgL_kapturedzf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
													}
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_3763;

														{
															obj_t BgL_auxz00_3764;

															{	/* Globalize/loc2glo.scm 206 */
																BgL_objectz00_bglt BgL_tmpz00_3765;

																BgL_tmpz00_3765 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
																BgL_auxz00_3764 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3765);
															}
															BgL_auxz00_3763 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3764);
														}
														((((BgL_svarzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3763))->
																BgL_freezd2markzd2) =
															((long) ((long) -10)), BUNSPEC);
													}
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_3771;

														{
															obj_t BgL_auxz00_3772;

															{	/* Globalize/loc2glo.scm 206 */
																BgL_objectz00_bglt BgL_tmpz00_3773;

																BgL_tmpz00_3773 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
																BgL_auxz00_3772 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3773);
															}
															BgL_auxz00_3771 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3772);
														}
														((((BgL_svarzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3771))->BgL_markz00) =
															((long) ((long) -10)), BUNSPEC);
													}
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_3779;

														{
															obj_t BgL_auxz00_3780;

															{	/* Globalize/loc2glo.scm 206 */
																BgL_objectz00_bglt BgL_tmpz00_3781;

																BgL_tmpz00_3781 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
																BgL_auxz00_3780 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3781);
															}
															BgL_auxz00_3779 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3780);
														}
														((((BgL_svarzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3779))->BgL_celledzf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
													{
														BgL_svarzf2ginfozf2_bglt BgL_auxz00_3787;

														{
															obj_t BgL_auxz00_3788;

															{	/* Globalize/loc2glo.scm 206 */
																BgL_objectz00_bglt BgL_tmpz00_3789;

																BgL_tmpz00_3789 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_tmp1167z00_2072));
																BgL_auxz00_3788 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3789);
															}
															BgL_auxz00_3787 =
																((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_3788);
														}
														((((BgL_svarzf2ginfozf2_bglt)
																	COBJECT(BgL_auxz00_3787))->BgL_stackablez00) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
													}
													((BgL_svarz00_bglt) BgL_tmp1167z00_2072);
												}
												{	/* Globalize/loc2glo.scm 208 */
													obj_t BgL_casezd2valuezd2_2077;

													BgL_casezd2valuezd2_2077 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_oldz00_2064))))->
														BgL_accessz00);
													if ((BgL_casezd2valuezd2_2077 ==
															CNST_TABLE_REF(((long) 3))))
														{	/* Globalize/loc2glo.scm 208 */
															{	/* Globalize/loc2glo.scm 211 */
																BgL_typez00_bglt BgL_vz00_2612;

																BgL_vz00_2612 =
																	((BgL_typez00_bglt)
																	BGl_za2cellza2z00zztype_cachez00);
																((((BgL_variablez00_bglt)
																			COBJECT(((BgL_variablez00_bglt)
																					BgL_newz00_2065)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_vz00_2612), BUNSPEC);
															}
															{	/* Globalize/loc2glo.scm 212 */
																obj_t BgL_vz00_2614;

																BgL_vz00_2614 = CNST_TABLE_REF(((long) 4));
																((((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_newz00_2065)))->BgL_accessz00) =
																	((obj_t) BgL_vz00_2614), BUNSPEC);
														}}
													else
														{	/* Globalize/loc2glo.scm 208 */
															if (
																(BgL_casezd2valuezd2_2077 ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Globalize/loc2glo.scm 208 */
																	{	/* Globalize/loc2glo.scm 215 */
																		BgL_typez00_bglt BgL_vz00_2616;

																		BgL_vz00_2616 =
																			((BgL_typez00_bglt)
																			BGl_za2cellza2z00zztype_cachez00);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt)
																							BgL_newz00_2065)))->BgL_typez00) =
																			((BgL_typez00_bglt) BgL_vz00_2616),
																			BUNSPEC);
																	}
																	{	/* Globalize/loc2glo.scm 216 */
																		obj_t BgL_vz00_2618;

																		BgL_vz00_2618 = CNST_TABLE_REF(((long) 4));
																		((((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_newz00_2065)))->
																				BgL_accessz00) =
																			((obj_t) BgL_vz00_2618), BUNSPEC);
																}}
															else
																{	/* Globalize/loc2glo.scm 208 */
																	BUNSPEC;
																}
														}
												}
												BgL_arg1790z00_2063 = BgL_newz00_2065;
											}
										}
										{	/* Globalize/loc2glo.scm 197 */
											obj_t BgL_res1960z00_2619;

											BgL_res1960z00_2619 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1790z00_2063), BNIL);
											BgL_newtail1413z00_2061 = BgL_res1960z00_2619;
										}
									}
									SET_CDR(BgL_tail1412z00_2058, BgL_newtail1413z00_2061);
									{	/* Globalize/loc2glo.scm 197 */
										obj_t BgL_arg1784z00_2062;

										BgL_arg1784z00_2062 = CDR(((obj_t) BgL_l1409z00_2057));
										{
											obj_t BgL_tail1412z00_3823;
											obj_t BgL_l1409z00_3822;

											BgL_l1409z00_3822 = BgL_arg1784z00_2062;
											BgL_tail1412z00_3823 = BgL_newtail1413z00_2061;
											BgL_tail1412z00_2058 = BgL_tail1412z00_3823;
											BgL_l1409z00_2057 = BgL_l1409z00_3822;
											goto BgL_zc3z04anonymousza31781ze3z87_2059;
										}
									}
								}
						}
					}
				{	/* Globalize/loc2glo.scm 197 */
					BgL_valuez00_bglt BgL_oldzd2funzd2_2006;

					BgL_oldzd2funzd2_2006 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_localz00_17)))->BgL_valuez00);
					{	/* Globalize/loc2glo.scm 220 */
						BgL_sfunz00_bglt BgL_newzd2funzd2_2007;

						{	/* Globalize/loc2glo.scm 221 */
							BgL_sfunz00_bglt BgL_new1171z00_2036;

							{	/* Globalize/loc2glo.scm 222 */
								BgL_sfunz00_bglt BgL_new1185z00_2051;

								BgL_new1185z00_2051 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Globalize/loc2glo.scm 222 */
									long BgL_arg1779z00_2052;

									{	/* Globalize/loc2glo.scm 222 */
										long BgL_res1961z00_2624;

										BgL_res1961z00_2624 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg1779z00_2052 = BgL_res1961z00_2624;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1185z00_2051),
										BgL_arg1779z00_2052);
								}
								{	/* Globalize/loc2glo.scm 222 */
									BgL_objectz00_bglt BgL_tmpz00_3830;

									BgL_tmpz00_3830 = ((BgL_objectz00_bglt) BgL_new1185z00_2051);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3830, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1185z00_2051);
								BgL_new1171z00_2036 = BgL_new1185z00_2051;
							}
							{
								long BgL_auxz00_3834;

								{	/* Globalize/loc2glo.scm 222 */
									long BgL_arg1771z00_2037;
									long BgL_arg1775z00_2038;

									BgL_arg1771z00_2037 =
										(((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt)
													((BgL_sfunz00_bglt) BgL_oldzd2funzd2_2006))))->
										BgL_arityz00);
									BgL_arg1775z00_2038 = bgl_list_length(BgL_kapturedz00_19);
									BgL_auxz00_3834 =
										(long)
										CINT(BGl_zb2zd2arityz60zztools_argsz00(BINT
											(BgL_arg1771z00_2037), BINT(BgL_arg1775z00_2038)));
								}
								((((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt) BgL_new1171z00_2036)))->
										BgL_arityz00) = ((long) BgL_auxz00_3834), BUNSPEC);
							}
							((((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_new1171z00_2036)))->
									BgL_sidezd2effectzd2) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_sidezd2effectzd2)),
								BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_predicatezd2ofzd2) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_predicatezd2ofzd2)),
								BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_stackzd2allocatorzd2) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_stackzd2allocatorzd2)),
								BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_topzf3zf3) =
								((bool_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_topzf3zf3)), BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_thezd2closurezd2) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_thezd2closurezd2)),
								BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_effectz00) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_effectz00)), BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_failsafez00) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_failsafez00)), BUNSPEC);
							((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_new1171z00_2036)))->BgL_argszd2noescapezd2) =
								((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
													BgL_oldzd2funzd2_2006)))->BgL_argszd2noescapezd2)),
								BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_propertyz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_propertyz00)),
								BUNSPEC);
							{
								obj_t BgL_auxz00_3881;

								{	/* Globalize/loc2glo.scm 223 */
									obj_t BgL_arg1778z00_2040;

									BgL_arg1778z00_2040 = bgl_reverse(BgL_addzd2argszd2_2005);
									BgL_auxz00_3881 =
										BGl_appendzd221011zd2zzglobaliza7e_localzd2ze3globalz96
										(BgL_arg1778z00_2040, BgL_argsz00_18);
								}
								((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
										BgL_argsz00) = ((obj_t) BgL_auxz00_3881), BUNSPEC);
							}
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_argszd2namezd2) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_argszd2namezd2)),
								BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_bodyz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_bodyz00)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_classz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_classz00)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_dssslzd2keywordszd2) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->
										BgL_dssslzd2keywordszd2)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->BgL_locz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_locz00)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_optionalsz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_optionalsz00)),
								BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_keysz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_keysz00)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_thezd2closurezd2globalz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->
										BgL_thezd2closurezd2globalz00)), BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_strengthz00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_strengthz00)),
								BUNSPEC);
							((((BgL_sfunz00_bglt) COBJECT(BgL_new1171z00_2036))->
									BgL_stackablez00) =
								((obj_t) (((BgL_sfunz00_bglt)
											COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
														BgL_oldzd2funzd2_2006))))->BgL_stackablez00)),
								BUNSPEC);
							BgL_newzd2funzd2_2007 = BgL_new1171z00_2036;
						}
						{	/* Globalize/loc2glo.scm 221 */

							{
								BgL_localzf2ginfozf2_bglt BgL_auxz00_3925;

								{
									obj_t BgL_auxz00_3926;

									{	/* Globalize/loc2glo.scm 224 */
										BgL_objectz00_bglt BgL_tmpz00_3927;

										BgL_tmpz00_3927 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_localz00_17));
										BgL_auxz00_3926 = BGL_OBJECT_WIDENING(BgL_tmpz00_3927);
									}
									BgL_auxz00_3925 =
										((BgL_localzf2ginfozf2_bglt) BgL_auxz00_3926);
								}
								((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3925))->
										BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_globalzf2ginfozf2_bglt BgL_auxz00_3933;

								{
									obj_t BgL_auxz00_3934;

									{	/* Globalize/loc2glo.scm 225 */
										BgL_objectz00_bglt BgL_tmpz00_3935;

										BgL_tmpz00_3935 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_16));
										BgL_auxz00_3934 = BGL_OBJECT_WIDENING(BgL_tmpz00_3935);
									}
									BgL_auxz00_3933 =
										((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_3934);
								}
								((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3933))->
										BgL_escapezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							}
							{	/* Globalize/loc2glo.scm 226 */
								BgL_typez00_bglt BgL_arg1743z00_2008;

								BgL_arg1743z00_2008 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_localz00_17)))->BgL_typez00);
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_globalz00_16)))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_arg1743z00_2008), BUNSPEC);
							}
							{	/* Globalize/loc2glo.scm 229 */
								BgL_nodez00_bglt BgL_arg1744z00_2009;

								{	/* Globalize/loc2glo.scm 229 */
									obj_t BgL_arg1745z00_2010;
									obj_t BgL_arg1746z00_2011;

									{	/* Globalize/loc2glo.scm 228 */
										BgL_sfunz00_bglt BgL_oz00_2639;

										BgL_oz00_2639 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_17)))->
												BgL_valuez00));
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3948;

											{
												obj_t BgL_auxz00_3949;

												{	/* Globalize/loc2glo.scm 228 */
													BgL_objectz00_bglt BgL_tmpz00_3950;

													BgL_tmpz00_3950 =
														((BgL_objectz00_bglt) BgL_oz00_2639);
													BgL_auxz00_3949 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3950);
												}
												BgL_auxz00_3948 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3949);
											}
											BgL_arg1745z00_2010 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3948))->
												BgL_newzd2bodyzd2);
									}}
									if (NULLP(BgL_kapturedz00_19))
										{	/* Globalize/loc2glo.scm 231 */
											BgL_arg1746z00_2011 = BNIL;
										}
									else
										{	/* Globalize/loc2glo.scm 231 */
											obj_t BgL_head1416z00_2016;

											{	/* Globalize/loc2glo.scm 231 */
												obj_t BgL_arg1760z00_2032;

												{	/* Globalize/loc2glo.scm 231 */
													obj_t BgL_arg1761z00_2033;
													obj_t BgL_arg1768z00_2034;

													BgL_arg1761z00_2033 =
														CAR(((obj_t) BgL_kapturedz00_19));
													BgL_arg1768z00_2034 =
														CAR(((obj_t) BgL_addzd2argszd2_2005));
													BgL_arg1760z00_2032 =
														MAKE_YOUNG_PAIR(BgL_arg1761z00_2033,
														BgL_arg1768z00_2034);
												}
												{	/* Globalize/loc2glo.scm 231 */
													obj_t BgL_res1963z00_2644;

													BgL_res1963z00_2644 =
														MAKE_YOUNG_PAIR(BgL_arg1760z00_2032, BNIL);
													BgL_head1416z00_2016 = BgL_res1963z00_2644;
												}
											}
											{	/* Globalize/loc2glo.scm 231 */
												obj_t BgL_g1420z00_2017;
												obj_t BgL_g1421z00_2018;

												BgL_g1420z00_2017 = CDR(((obj_t) BgL_kapturedz00_19));
												BgL_g1421z00_2018 =
													CDR(((obj_t) BgL_addzd2argszd2_2005));
												{
													obj_t BgL_ll1414z00_2020;
													obj_t BgL_ll1415z00_2021;
													obj_t BgL_tail1417z00_2022;

													BgL_ll1414z00_2020 = BgL_g1420z00_2017;
													BgL_ll1415z00_2021 = BgL_g1421z00_2018;
													BgL_tail1417z00_2022 = BgL_head1416z00_2016;
												BgL_zc3z04anonymousza31749ze3z87_2023:
													if (NULLP(BgL_ll1414z00_2020))
														{	/* Globalize/loc2glo.scm 231 */
															BgL_arg1746z00_2011 = BgL_head1416z00_2016;
														}
													else
														{	/* Globalize/loc2glo.scm 231 */
															obj_t BgL_newtail1418z00_2025;

															{	/* Globalize/loc2glo.scm 231 */
																obj_t BgL_arg1756z00_2028;

																{	/* Globalize/loc2glo.scm 231 */
																	obj_t BgL_arg1757z00_2029;
																	obj_t BgL_arg1759z00_2030;

																	BgL_arg1757z00_2029 =
																		CAR(((obj_t) BgL_ll1414z00_2020));
																	BgL_arg1759z00_2030 =
																		CAR(((obj_t) BgL_ll1415z00_2021));
																	BgL_arg1756z00_2028 =
																		MAKE_YOUNG_PAIR(BgL_arg1757z00_2029,
																		BgL_arg1759z00_2030);
																}
																{	/* Globalize/loc2glo.scm 231 */
																	obj_t BgL_res1965z00_2650;

																	BgL_res1965z00_2650 =
																		MAKE_YOUNG_PAIR(BgL_arg1756z00_2028, BNIL);
																	BgL_newtail1418z00_2025 = BgL_res1965z00_2650;
																}
															}
															SET_CDR(BgL_tail1417z00_2022,
																BgL_newtail1418z00_2025);
															{	/* Globalize/loc2glo.scm 231 */
																obj_t BgL_arg1754z00_2026;
																obj_t BgL_arg1755z00_2027;

																BgL_arg1754z00_2026 =
																	CDR(((obj_t) BgL_ll1414z00_2020));
																BgL_arg1755z00_2027 =
																	CDR(((obj_t) BgL_ll1415z00_2021));
																{
																	obj_t BgL_tail1417z00_3982;
																	obj_t BgL_ll1415z00_3981;
																	obj_t BgL_ll1414z00_3980;

																	BgL_ll1414z00_3980 = BgL_arg1754z00_2026;
																	BgL_ll1415z00_3981 = BgL_arg1755z00_2027;
																	BgL_tail1417z00_3982 =
																		BgL_newtail1418z00_2025;
																	BgL_tail1417z00_2022 = BgL_tail1417z00_3982;
																	BgL_ll1415z00_2021 = BgL_ll1415z00_3981;
																	BgL_ll1414z00_2020 = BgL_ll1414z00_3980;
																	goto BgL_zc3z04anonymousza31749ze3z87_2023;
																}
															}
														}
												}
											}
										}
									BgL_arg1744z00_2009 =
										BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
										((BgL_nodez00_bglt) BgL_arg1745z00_2010),
										((BgL_variablez00_bglt) BgL_localz00_17),
										BgL_arg1746z00_2011);
								}
								((((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_2007))->
										BgL_bodyz00) =
									((obj_t) ((obj_t) BgL_arg1744z00_2009)), BUNSPEC);
							}
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_16)))->
									BgL_valuez00) =
								((BgL_valuez00_bglt) ((BgL_valuez00_bglt)
										BgL_newzd2funzd2_2007)), BUNSPEC);
							return BgL_globalz00_16;
						}
					}
				}
			}
		}

	}



/* the-global */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt
		BgL_localz00_21)
	{
		{	/* Globalize/loc2glo.scm 241 */
			{	/* Globalize/loc2glo.scm 242 */
				BgL_valuez00_bglt BgL_valuez00_2083;

				BgL_valuez00_2083 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_21)))->BgL_valuez00);
				{	/* Globalize/loc2glo.scm 243 */
					bool_t BgL_test2013z00_3993;

					{	/* Globalize/loc2glo.scm 243 */
						obj_t BgL_arg1835z00_2107;

						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_3994;

							{
								obj_t BgL_auxz00_3995;

								{	/* Globalize/loc2glo.scm 243 */
									BgL_objectz00_bglt BgL_tmpz00_3996;

									BgL_tmpz00_3996 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_valuez00_2083));
									BgL_auxz00_3995 = BGL_OBJECT_WIDENING(BgL_tmpz00_3996);
								}
								BgL_auxz00_3994 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_3995);
							}
							BgL_arg1835z00_2107 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_3994))->
								BgL_thezd2globalzd2);
						}
						BgL_test2013z00_3993 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1835z00_2107,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_test2013z00_3993)
						{
							obj_t BgL_auxz00_4003;

							{
								BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4004;

								{
									obj_t BgL_auxz00_4005;

									{	/* Globalize/loc2glo.scm 244 */
										BgL_objectz00_bglt BgL_tmpz00_4006;

										BgL_tmpz00_4006 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_valuez00_2083));
										BgL_auxz00_4005 = BGL_OBJECT_WIDENING(BgL_tmpz00_4006);
									}
									BgL_auxz00_4004 =
										((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4005);
								}
								BgL_auxz00_4003 =
									(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4004))->
									BgL_thezd2globalzd2);
							}
							return ((BgL_globalz00_bglt) BgL_auxz00_4003);
						}
					else
						{	/* Globalize/loc2glo.scm 245 */
							obj_t BgL_lidz00_2086;

							{	/* Globalize/loc2glo.scm 245 */
								obj_t BgL_arg1830z00_2103;

								{	/* Globalize/loc2glo.scm 245 */
									obj_t BgL_arg1831z00_2104;
									obj_t BgL_arg1832z00_2105;

									{	/* Globalize/loc2glo.scm 245 */
										obj_t BgL_res1969z00_2665;

										{	/* Globalize/loc2glo.scm 245 */
											obj_t BgL_symbolz00_2663;

											BgL_symbolz00_2663 = CNST_TABLE_REF(((long) 5));
											{	/* Globalize/loc2glo.scm 245 */
												obj_t BgL_arg1466z00_2664;

												BgL_arg1466z00_2664 =
													SYMBOL_TO_STRING(BgL_symbolz00_2663);
												BgL_res1969z00_2665 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2664);
										}}
										BgL_arg1831z00_2104 = BgL_res1969z00_2665;
									}
									{	/* Globalize/loc2glo.scm 245 */
										obj_t BgL_arg1833z00_2106;

										BgL_arg1833z00_2106 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_localz00_21)))->
											BgL_idz00);
										{	/* Globalize/loc2glo.scm 245 */
											obj_t BgL_res1970z00_2669;

											{	/* Globalize/loc2glo.scm 245 */
												obj_t BgL_arg1466z00_2668;

												BgL_arg1466z00_2668 =
													SYMBOL_TO_STRING(BgL_arg1833z00_2106);
												BgL_res1970z00_2669 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2668);
											}
											BgL_arg1832z00_2105 = BgL_res1970z00_2669;
									}}
									BgL_arg1830z00_2103 =
										string_append(BgL_arg1831z00_2104, BgL_arg1832z00_2105);
								}
								BgL_lidz00_2086 = bstring_to_symbol(BgL_arg1830z00_2103);
							}
							{	/* Globalize/loc2glo.scm 245 */
								obj_t BgL_idz00_2087;

								{	/* Globalize/loc2glo.scm 246 */
									bool_t BgL_test2014z00_4022;

									{	/* Globalize/loc2glo.scm 246 */
										obj_t BgL_arg1829z00_2102;

										BgL_arg1829z00_2102 =
											BGl_findzd2globalzf2modulez20zzast_envz00(BgL_lidz00_2086,
											BGl_za2moduleza2z00zzmodule_modulez00);
										BgL_test2014z00_4022 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1829z00_2102,
											BGl_globalz00zzast_varz00);
									}
									if (BgL_test2014z00_4022)
										{	/* Globalize/loc2glo.scm 246 */
											BgL_idz00_2087 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BgL_lidz00_2086);
										}
									else
										{	/* Globalize/loc2glo.scm 246 */
											BgL_idz00_2087 = BgL_lidz00_2086;
										}
								}
								{	/* Globalize/loc2glo.scm 246 */
									BgL_globalz00_bglt BgL_globalz00_2088;

									BgL_globalz00_2088 =
										BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
										(BgL_idz00_2087, BNIL, BNIL,
										BGl_za2moduleza2z00zzmodule_modulez00,
										CNST_TABLE_REF(((long) 6)), CNST_TABLE_REF(((long) 7)),
										CNST_TABLE_REF(((long) 8)), BUNSPEC);
									{	/* Globalize/loc2glo.scm 249 */

										{	/* Globalize/loc2glo.scm 262 */
											BgL_valuez00_bglt BgL_arg1820z00_2089;
											obj_t BgL_arg1821z00_2090;

											BgL_arg1820z00_2089 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_2088)))->
												BgL_valuez00);
											BgL_arg1821z00_2090 =
												(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
															BgL_valuez00_2083)))->BgL_locz00);
											((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																BgL_arg1820z00_2089)))->BgL_locz00) =
												((obj_t) BgL_arg1821z00_2090), BUNSPEC);
										}
										{	/* Globalize/loc2glo.scm 264 */
											BgL_typez00_bglt BgL_arg1822z00_2091;

											BgL_arg1822z00_2091 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_21)))->
												BgL_typez00);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_globalz00_2088)))->BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg1822z00_2091), BUNSPEC);
										}
										if (
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_localz00_21)))->
												BgL_userzf3zf3))
											{	/* Globalize/loc2glo.scm 266 */
												BFALSE;
											}
										else
											{	/* Globalize/loc2glo.scm 266 */
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_globalz00_2088)))->
														BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
											}
										{	/* Globalize/loc2glo.scm 268 */
											BgL_globalzf2ginfozf2_bglt BgL_wide1188z00_2095;

											BgL_wide1188z00_2095 =
												((BgL_globalzf2ginfozf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_globalzf2ginfozf2_bgl))));
											{	/* Globalize/loc2glo.scm 268 */
												obj_t BgL_auxz00_4049;
												BgL_objectz00_bglt BgL_tmpz00_4046;

												BgL_auxz00_4049 = ((obj_t) BgL_wide1188z00_2095);
												BgL_tmpz00_4046 =
													((BgL_objectz00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_2088));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4046,
													BgL_auxz00_4049);
											}
											((BgL_objectz00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_2088));
											{	/* Globalize/loc2glo.scm 268 */
												long BgL_arg1824z00_2096;

												{	/* Globalize/loc2glo.scm 268 */
													long BgL_res1973z00_2684;

													BgL_res1973z00_2684 =
														BGL_CLASS_INDEX
														(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
													BgL_arg1824z00_2096 = BgL_res1973z00_2684;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_2088)),
													BgL_arg1824z00_2096);
											}
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_2088));
										}
										{
											BgL_globalzf2ginfozf2_bglt BgL_auxz00_4060;

											{
												obj_t BgL_auxz00_4061;

												{	/* Globalize/loc2glo.scm 268 */
													BgL_objectz00_bglt BgL_tmpz00_4062;

													BgL_tmpz00_4062 =
														((BgL_objectz00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_2088));
													BgL_auxz00_4061 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4062);
												}
												BgL_auxz00_4060 =
													((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_4061);
											}
											((((BgL_globalzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_4060))->BgL_escapezf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										{
											BgL_globalzf2ginfozf2_bglt BgL_auxz00_4068;

											{
												obj_t BgL_auxz00_4069;

												{	/* Globalize/loc2glo.scm 268 */
													BgL_objectz00_bglt BgL_tmpz00_4070;

													BgL_tmpz00_4070 =
														((BgL_objectz00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_2088));
													BgL_auxz00_4069 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4070);
												}
												BgL_auxz00_4068 =
													((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_4069);
											}
											((((BgL_globalzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_4068))->
													BgL_globalzd2closurezd2) = ((obj_t) BFALSE), BUNSPEC);
										}
										((BgL_globalz00_bglt) BgL_globalz00_2088);
										{	/* Globalize/loc2glo.scm 269 */
											BgL_valuez00_bglt BgL_arg1825z00_2098;
											obj_t BgL_arg1826z00_2099;

											BgL_arg1825z00_2098 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_2088)))->
												BgL_valuez00);
											BgL_arg1826z00_2099 =
												(((BgL_funz00_bglt)
													COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
																BgL_valuez00_2083))))->BgL_sidezd2effectzd2);
											((((BgL_funz00_bglt)
														COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
																	BgL_arg1825z00_2098))))->
													BgL_sidezd2effectzd2) =
												((obj_t) BgL_arg1826z00_2099), BUNSPEC);
										}
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_4085;

											{
												obj_t BgL_auxz00_4086;

												{	/* Globalize/loc2glo.scm 271 */
													BgL_objectz00_bglt BgL_tmpz00_4087;

													BgL_tmpz00_4087 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_valuez00_2083));
													BgL_auxz00_4086 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4087);
												}
												BgL_auxz00_4085 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_4086);
											}
											((((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_4085))->
													BgL_thezd2globalzd2) =
												((obj_t) ((obj_t) BgL_globalz00_2088)), BUNSPEC);
										}
										return BgL_globalz00_2088;
									}
								}
							}
						}
				}
			}
		}

	}



/* &the-global */
	BgL_globalz00_bglt
		BGl_z62thezd2globalzb0zzglobaliza7e_localzd2ze3globalz96(obj_t
		BgL_envz00_2705, obj_t BgL_localz00_2706)
	{
		{	/* Globalize/loc2glo.scm 241 */
			return
				BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(
				((BgL_localz00_bglt) BgL_localz00_2706));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_localzd2ze3globalz96()
	{
		{	/* Globalize/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzobject_methodz00(((long) 493120746),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long)
					244215773),
				BSTRING_TO_STRING(BGl_string1974z00zzglobaliza7e_localzd2ze3globalz96));
		}

	}

#ifdef __cplusplus
}
#endif
