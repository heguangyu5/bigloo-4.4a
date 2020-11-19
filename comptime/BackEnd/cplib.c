/*===========================================================================*/
/*   (BackEnd/cplib.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/cplib.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_wclassz00_bgl
	{
		obj_t BgL_itszd2classzd2;
	}                *BgL_wclassz00_bglt;

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


	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t BGl_z62widezd2ze3chunkz53zzbackend_cplibz00(obj_t, obj_t);
	static obj_t
		BGl_z62getzd2declaredzd2globalzd2variableszb0zzbackend_cplibz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62qualifiedzd2jclasszd2namez62zzbackend_cplibz00(obj_t,
		obj_t);
	static obj_t BGl_z62globalzd2arityzb0zzbackend_cplibz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62getzd2itszd2superz62zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t BGl_objectzd2initzd2zzbackend_cplibz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_cplibz00();
	static obj_t
		BGl_z62forzd2eachzd2declaredzd2classeszb0zzbackend_cplibz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62getzd2globalzd2variableszd2tozd2bezd2initializa7edz17zzbackend_cplibz00
		(obj_t, obj_t);
	static obj_t
		BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_cplibz00();
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2globalz12zc0zzbackend_cplibz00(BgL_globalz00_bglt);
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_cplibz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_slotz00_bglt);
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	static obj_t BGl_z62getzd2declaredzd2classesz62zzbackend_cplibz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cplibz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzbackend_cplibz00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_cplibz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62qualifiedzd2wclasszd2namez62zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_widezd2chunkzd2classzd2idzd2zzobject_classz00(obj_t);
	extern obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t);
	static obj_t BGl_z62qualifiedzd2tclasszd2namez62zzbackend_cplibz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_z62setzd2variablezd2namez12z70zzbackend_cplibz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	static obj_t BGl_z62resetzd2globalz12za2zzbackend_cplibz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt);
	extern obj_t BGl_wclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzbackend_cplibz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00();
	extern obj_t BGl_scnstz00zzast_varz00;
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cplibz00();
	static obj_t BGl_z62classzd2idzd2ze3typezd2namez53zzbackend_cplibz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62qualifiedzd2typezd2namez62zzbackend_cplibz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2fieldzd2typez62zzbackend_cplibz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_typez00_bglt);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_z62getzd2declaredzd2fieldsz62zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static BgL_globalz00_bglt BGl_z62globalzd2entryzb0zzbackend_cplibz00(obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2globalzd2variableszd2envz00zzbackend_cplibz00,
		BgL_bgl_za762getza7d2declare1863z00,
		BGl_z62getzd2declaredzd2globalzd2variableszb0zzbackend_cplibz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00,
		BgL_bgl_za762resetza7d2globa1864z00,
		BGl_z62resetzd2globalz12za2zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2idzd2ze3typezd2namezd2envze3zzbackend_cplibz00,
		BgL_bgl_za762classza7d2idza7d21865za7,
		BGl_z62classzd2idzd2ze3typezd2namez53zzbackend_cplibz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2ze3chunkzd2envze3zzbackend_cplibz00,
		BgL_bgl_za762wideza7d2za7e3chu1866za7,
		BGl_z62widezd2ze3chunkz53zzbackend_cplibz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1846z00zzbackend_cplibz00,
		BgL_bgl_string1846za700za7za7b1867za7, "_K", 2);
	      DEFINE_STRING(BGl_string1847z00zzbackend_cplibz00,
		BgL_bgl_string1847za700za7za7b1868za7, "object", 6);
	      DEFINE_STRING(BGl_string1848z00zzbackend_cplibz00,
		BgL_bgl_string1848za700za7za7b1869za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2entryzd2envz00zzbackend_cplibz00,
		BgL_bgl_za762globalza7d2entr1870z00,
		BGl_z62globalzd2entryzb0zzbackend_cplibz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1849z00zzbackend_cplibz00,
		BgL_bgl_string1849za700za7za7b1871za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string1850z00zzbackend_cplibz00,
		BgL_bgl_string1850za700za7za7b1872za7, ".", 1);
	      DEFINE_STRING(BGl_string1851z00zzbackend_cplibz00,
		BgL_bgl_string1851za700za7za7b1873za7, "bigloo.", 7);
	      DEFINE_STRING(BGl_string1852z00zzbackend_cplibz00,
		BgL_bgl_string1852za700za7za7b1874za7, "_", 1);
	      DEFINE_STRING(BGl_string1853z00zzbackend_cplibz00,
		BgL_bgl_string1853za700za7za7b1875za7, "set-variable-name!", 18);
	      DEFINE_STRING(BGl_string1854z00zzbackend_cplibz00,
		BgL_bgl_string1854za700za7za7b1876za7, "Unknown variable king", 21);
	      DEFINE_STRING(BGl_string1855z00zzbackend_cplibz00,
		BgL_bgl_string1855za700za7za7b1877za7, "Illegal type", 12);
	      DEFINE_STRING(BGl_string1856z00zzbackend_cplibz00,
		BgL_bgl_string1856za700za7za7b1878za7, "wide-chunk", 10);
	      DEFINE_STRING(BGl_string1857z00zzbackend_cplibz00,
		BgL_bgl_string1857za700za7za7b1879za7, "internal error", 14);
	      DEFINE_STRING(BGl_string1858z00zzbackend_cplibz00,
		BgL_bgl_string1858za700za7za7b1880za7, "backend_cplib", 13);
	      DEFINE_STRING(BGl_string1859z00zzbackend_cplibz00,
		BgL_bgl_string1859za700za7za7b1881za7,
		"__cnsts_table get-declared-fields import stvector foreign obj ", 62);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2variablezd2namez12zd2envzc0zzbackend_cplibz00,
		BgL_bgl_za762setza7d2variabl1882z00,
		BGl_z62setzd2variablezd2namez12z70zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2declaredzd2classeszd2envz00zzbackend_cplibz00,
		BgL_bgl_za762forza7d2eachza7d21883za7,
		BGl_z62forzd2eachzd2declaredzd2classeszb0zzbackend_cplibz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2jclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762qualifiedza7d2j1884z00,
		BGl_z62qualifiedzd2jclasszd2namez62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2typezd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762qualifiedza7d2t1885z00,
		BGl_z62qualifiedzd2typezd2namez62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2tclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762qualifiedza7d2t1886z00,
		BGl_z62qualifiedzd2tclasszd2namez62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edzd2envza7zzbackend_cplibz00,
		BgL_bgl_za762getza7d2globalza71887za7,
		BGl_z62getzd2globalzd2variableszd2tozd2bezd2initializa7edz17zzbackend_cplibz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_qualifiedzd2wclasszd2namezd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762qualifiedza7d2w1888z00,
		BGl_z62qualifiedzd2wclasszd2namez62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2arityzd2envz00zzbackend_cplibz00,
		BgL_bgl_za762globalza7d2arit1889z00,
		BGl_z62globalzd2arityzb0zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2classeszd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762getza7d2declare1890z00,
		BGl_z62getzd2declaredzd2classesz62zzbackend_cplibz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2itszd2superzd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762getza7d2itsza7d2s1891za7,
		BGl_z62getzd2itszd2superz62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2declaredzd2fieldszd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762getza7d2declare1892z00,
		BGl_z62getzd2declaredzd2fieldsz62zzbackend_cplibz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2fieldzd2typezd2envzd2zzbackend_cplibz00,
		BgL_bgl_za762getza7d2fieldza7d1893za7,
		BGl_z62getzd2fieldzd2typez62zzbackend_cplibz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_cplibz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long
		BgL_checksumz00_2301, char *BgL_fromz00_2302)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cplibz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cplibz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_cplibz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00();
					BGl_cnstzd2initzd2zzbackend_cplibz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cplibz00();
					return BGl_toplevelzd2initzd2zzbackend_cplibz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_cplib");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"backend_cplib");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			{	/* BackEnd/cplib.scm 15 */
				obj_t BgL_cportz00_2280;

				{	/* BackEnd/cplib.scm 15 */
					obj_t BgL_stringz00_2288;

					BgL_stringz00_2288 = BGl_string1859z00zzbackend_cplibz00;
					{	/* BackEnd/cplib.scm 15 */
						obj_t BgL_startz00_2289;

						BgL_startz00_2289 = BINT(((long) 0));
						{	/* BackEnd/cplib.scm 15 */
							obj_t BgL_endz00_2290;

							BgL_endz00_2290 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2288)));
							{	/* BackEnd/cplib.scm 15 */

								BgL_cportz00_2280 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2288, BgL_startz00_2289, BgL_endz00_2290);
				}}}}
				{
					long BgL_iz00_2281;

					BgL_iz00_2281 = ((long) 5);
				BgL_loopz00_2282:
					if ((BgL_iz00_2281 == ((long) -1)))
						{	/* BackEnd/cplib.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/cplib.scm 15 */
							{	/* BackEnd/cplib.scm 15 */
								obj_t BgL_arg1861z00_2284;

								{	/* BackEnd/cplib.scm 15 */

									{	/* BackEnd/cplib.scm 15 */
										obj_t BgL_locationz00_2286;

										BgL_locationz00_2286 = BBOOL(((bool_t) 0));
										{	/* BackEnd/cplib.scm 15 */

											BgL_arg1861z00_2284 =
												BGl_readz00zz__readerz00(BgL_cportz00_2280,
												BgL_locationz00_2286);
										}
									}
								}
								{	/* BackEnd/cplib.scm 15 */
									int BgL_tmpz00_2331;

									BgL_tmpz00_2331 = (int) (BgL_iz00_2281);
									CNST_TABLE_SET(BgL_tmpz00_2331, BgL_arg1861z00_2284);
							}}
							{	/* BackEnd/cplib.scm 15 */
								int BgL_auxz00_2287;

								BgL_auxz00_2287 = (int) ((BgL_iz00_2281 - ((long) 1)));
								{
									long BgL_iz00_2336;

									BgL_iz00_2336 = (long) (BgL_auxz00_2287);
									BgL_iz00_2281 = BgL_iz00_2336;
									goto BgL_loopz00_2282;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}

	}



/* class-id->type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(obj_t BgL_cidz00_13,
		obj_t BgL_midz00_14)
	{
		{	/* BackEnd/cplib.scm 56 */
			{	/* BackEnd/cplib.scm 57 */
				obj_t BgL_idz00_2036;

				{	/* BackEnd/cplib.scm 57 */
					obj_t BgL_arg1270z00_2037;
					obj_t BgL_arg1271z00_2038;

					{	/* BackEnd/cplib.scm 57 */
						obj_t BgL_res1798z00_2041;

						{	/* BackEnd/cplib.scm 57 */
							obj_t BgL_arg1466z00_2040;

							BgL_arg1466z00_2040 = SYMBOL_TO_STRING(BgL_cidz00_13);
							BgL_res1798z00_2041 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2040);
						}
						BgL_arg1270z00_2037 = BgL_res1798z00_2041;
					}
					{	/* BackEnd/cplib.scm 57 */
						obj_t BgL_res1799z00_2044;

						{	/* BackEnd/cplib.scm 57 */
							obj_t BgL_arg1466z00_2043;

							BgL_arg1466z00_2043 = SYMBOL_TO_STRING(BgL_midz00_14);
							BgL_res1799z00_2044 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2043);
						}
						BgL_arg1271z00_2038 = BgL_res1799z00_2044;
					}
					BgL_idz00_2036 =
						bigloo_module_mangle(BgL_arg1270z00_2037, BgL_arg1271z00_2038);
				}
				return
					string_append(BGl_string1846z00zzbackend_cplibz00, BgL_idz00_2036);
			}
		}

	}



/* &class-id->type-name */
	obj_t BGl_z62classzd2idzd2ze3typezd2namez53zzbackend_cplibz00(obj_t
		BgL_envz00_2229, obj_t BgL_cidz00_2230, obj_t BgL_midz00_2231)
	{
		{	/* BackEnd/cplib.scm 56 */
			return
				BGl_classzd2idzd2ze3typezd2namez31zzbackend_cplibz00(BgL_cidz00_2230,
				BgL_midz00_2231);
		}

	}



/* qualified-real-tclass-name */
	obj_t
		BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(BgL_typez00_bglt
		BgL_classz00_15)
	{
		{	/* BackEnd/cplib.scm 63 */
			{
				BgL_typez00_bglt BgL_superz00_1649;
				obj_t BgL_namez00_1644;
				BgL_typez00_bglt BgL_classz00_1635;

				{	/* BackEnd/cplib.scm 97 */
					obj_t BgL_arg1273z00_1629;
					obj_t BgL_arg1274z00_1630;

					BgL_superz00_1649 = BgL_classz00_15;
					{	/* BackEnd/cplib.scm 87 */
						bool_t BgL_test1896z00_2346;

						{	/* BackEnd/cplib.scm 87 */
							bool_t BgL_test1897z00_2347;

							{	/* BackEnd/cplib.scm 87 */
								obj_t BgL_arg1310z00_1675;

								{
									BgL_tclassz00_bglt BgL_auxz00_2348;

									{
										obj_t BgL_auxz00_2349;

										{	/* BackEnd/cplib.scm 87 */
											BgL_objectz00_bglt BgL_tmpz00_2350;

											BgL_tmpz00_2350 =
												((BgL_objectz00_bglt) BgL_superz00_1649);
											BgL_auxz00_2349 = BGL_OBJECT_WIDENING(BgL_tmpz00_2350);
										}
										BgL_auxz00_2348 = ((BgL_tclassz00_bglt) BgL_auxz00_2349);
									}
									BgL_arg1310z00_1675 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2348))->
										BgL_itszd2superzd2);
								}
								BgL_test1897z00_2347 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1310z00_1675,
									BGl_tclassz00zzobject_classz00);
							}
							if (BgL_test1897z00_2347)
								{	/* BackEnd/cplib.scm 88 */
									bool_t BgL_test1898z00_2356;

									{	/* BackEnd/cplib.scm 88 */
										obj_t BgL_arg1309z00_1674;

										{
											BgL_tclassz00_bglt BgL_auxz00_2357;

											{
												obj_t BgL_auxz00_2358;

												{	/* BackEnd/cplib.scm 88 */
													BgL_objectz00_bglt BgL_tmpz00_2359;

													BgL_tmpz00_2359 =
														((BgL_objectz00_bglt) BgL_superz00_1649);
													BgL_auxz00_2358 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2359);
												}
												BgL_auxz00_2357 =
													((BgL_tclassz00_bglt) BgL_auxz00_2358);
											}
											BgL_arg1309z00_1674 =
												(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2357))->
												BgL_itszd2superzd2);
										}
										BgL_test1898z00_2356 =
											(((obj_t) BgL_superz00_1649) == BgL_arg1309z00_1674);
									}
									if (BgL_test1898z00_2356)
										{	/* BackEnd/cplib.scm 89 */
											bool_t BgL_test1899z00_2366;

											{	/* BackEnd/cplib.scm 89 */
												obj_t BgL_arg1307z00_1672;

												{	/* BackEnd/cplib.scm 89 */
													obj_t BgL_arg1308z00_1673;

													{
														BgL_tclassz00_bglt BgL_auxz00_2367;

														{
															obj_t BgL_auxz00_2368;

															{	/* BackEnd/cplib.scm 89 */
																BgL_objectz00_bglt BgL_tmpz00_2369;

																BgL_tmpz00_2369 =
																	((BgL_objectz00_bglt) BgL_superz00_1649);
																BgL_auxz00_2368 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2369);
															}
															BgL_auxz00_2367 =
																((BgL_tclassz00_bglt) BgL_auxz00_2368);
														}
														BgL_arg1308z00_1673 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2367))->
															BgL_itszd2superzd2);
													}
													BgL_arg1307z00_1672 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_arg1308z00_1673)))->
														BgL_idz00);
												}
												BgL_test1899z00_2366 =
													(BgL_arg1307z00_1672 == CNST_TABLE_REF(((long) 0)));
											}
											if (BgL_test1899z00_2366)
												{	/* BackEnd/cplib.scm 89 */
													BgL_test1896z00_2346 = ((bool_t) 0);
												}
											else
												{	/* BackEnd/cplib.scm 89 */
													BgL_test1896z00_2346 = ((bool_t) 1);
												}
										}
									else
										{	/* BackEnd/cplib.scm 88 */
											BgL_test1896z00_2346 = ((bool_t) 0);
										}
								}
							else
								{	/* BackEnd/cplib.scm 87 */
									BgL_test1896z00_2346 = ((bool_t) 1);
								}
						}
						if (BgL_test1896z00_2346)
							{	/* BackEnd/cplib.scm 87 */
								BgL_arg1273z00_1629 = BGl_string1849z00zzbackend_cplibz00;
							}
						else
							{	/* BackEnd/cplib.scm 91 */
								BgL_globalz00_bglt BgL_holderz00_1663;

								{
									BgL_tclassz00_bglt BgL_auxz00_2378;

									{
										obj_t BgL_auxz00_2379;

										{	/* BackEnd/cplib.scm 91 */
											BgL_objectz00_bglt BgL_tmpz00_2380;

											BgL_tmpz00_2380 =
												((BgL_objectz00_bglt) BgL_superz00_1649);
											BgL_auxz00_2379 = BGL_OBJECT_WIDENING(BgL_tmpz00_2380);
										}
										BgL_auxz00_2378 = ((BgL_tclassz00_bglt) BgL_auxz00_2379);
									}
									BgL_holderz00_1663 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2378))->
										BgL_holderz00);
								}
								{	/* BackEnd/cplib.scm 92 */
									obj_t BgL_arg1300z00_1664;
									obj_t BgL_arg1301z00_1665;
									obj_t BgL_arg1303z00_1666;

									BgL_arg1300z00_1664 =
										(((BgL_globalz00_bglt) COBJECT(BgL_holderz00_1663))->
										BgL_modulez00);
									BgL_arg1301z00_1665 =
										(((BgL_globalz00_bglt) COBJECT(BgL_holderz00_1663))->
										BgL_jvmzd2typezd2namez00);
									BgL_arg1303z00_1666 =
										(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
													BgL_superz00_1649)))->BgL_idz00);
									{	/* BackEnd/cplib.scm 92 */
										obj_t BgL_list1304z00_1667;

										BgL_list1304z00_1667 =
											MAKE_YOUNG_PAIR(BgL_arg1303z00_1666, BNIL);
										BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
											(BgL_arg1300z00_1664, BgL_arg1301z00_1665,
											BgL_list1304z00_1667);
									}
								}
								BgL_namez00_1644 =
									(((BgL_globalz00_bglt) COBJECT(BgL_holderz00_1663))->
									BgL_modulez00);
								{	/* BackEnd/cplib.scm 79 */
									obj_t BgL_sz00_1646;

									BgL_sz00_1646 =
										BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
										(BgL_namez00_1644);
									{	/* BackEnd/cplib.scm 79 */
										obj_t BgL_prefz00_1647;

										BgL_prefz00_1647 = BGl_prefixz00zz__osz00(BgL_sz00_1646);
										{	/* BackEnd/cplib.scm 80 */

											{	/* BackEnd/cplib.scm 81 */
												bool_t BgL_test1900z00_2393;

												{	/* BackEnd/cplib.scm 81 */
													bool_t BgL_res1812z00_2091;

													{	/* BackEnd/cplib.scm 81 */
														long BgL_l1z00_2078;

														BgL_l1z00_2078 = STRING_LENGTH(BgL_prefz00_1647);
														if (
															(BgL_l1z00_2078 == STRING_LENGTH(BgL_sz00_1646)))
															{	/* BackEnd/cplib.scm 81 */
																int BgL_arg1267z00_2081;

																{	/* BackEnd/cplib.scm 81 */
																	char *BgL_auxz00_2400;
																	char *BgL_tmpz00_2398;

																	BgL_auxz00_2400 =
																		BSTRING_TO_STRING(BgL_sz00_1646);
																	BgL_tmpz00_2398 =
																		BSTRING_TO_STRING(BgL_prefz00_1647);
																	BgL_arg1267z00_2081 =
																		memcmp(BgL_tmpz00_2398, BgL_auxz00_2400,
																		BgL_l1z00_2078);
																}
																BgL_res1812z00_2091 =
																	((long) (BgL_arg1267z00_2081) == ((long) 0));
															}
														else
															{	/* BackEnd/cplib.scm 81 */
																BgL_res1812z00_2091 = ((bool_t) 0);
															}
													}
													BgL_test1900z00_2393 = BgL_res1812z00_2091;
												}
												if (BgL_test1900z00_2393)
													{	/* BackEnd/cplib.scm 81 */
														BgL_arg1273z00_1629 =
															BGl_string1848z00zzbackend_cplibz00;
													}
												else
													{	/* BackEnd/cplib.scm 81 */
														BgL_arg1273z00_1629 = BgL_prefz00_1647;
													}
											}
										}
									}
								}
							}
					}
					BgL_classz00_1635 = BgL_classz00_15;
					{	/* BackEnd/cplib.scm 72 */
						bool_t BgL_test1902z00_2406;

						{	/* BackEnd/cplib.scm 72 */
							obj_t BgL_arg1285z00_1643;

							BgL_arg1285z00_1643 = BGl_getzd2objectzd2typez00zztype_cachez00();
							BgL_test1902z00_2406 =
								(((obj_t) BgL_classz00_1635) == BgL_arg1285z00_1643);
						}
						if (BgL_test1902z00_2406)
							{	/* BackEnd/cplib.scm 72 */
								BgL_arg1274z00_1630 = BGl_string1847z00zzbackend_cplibz00;
							}
						else
							{	/* BackEnd/cplib.scm 75 */
								obj_t BgL_modz00_1640;

								{	/* BackEnd/cplib.scm 75 */
									BgL_globalz00_bglt BgL_arg1284z00_1642;

									{
										BgL_tclassz00_bglt BgL_auxz00_2410;

										{
											obj_t BgL_auxz00_2411;

											{	/* BackEnd/cplib.scm 75 */
												BgL_objectz00_bglt BgL_tmpz00_2412;

												BgL_tmpz00_2412 =
													((BgL_objectz00_bglt) BgL_classz00_1635);
												BgL_auxz00_2411 = BGL_OBJECT_WIDENING(BgL_tmpz00_2412);
											}
											BgL_auxz00_2410 = ((BgL_tclassz00_bglt) BgL_auxz00_2411);
										}
										BgL_arg1284z00_1642 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2410))->
											BgL_holderz00);
									}
									BgL_modz00_1640 =
										(((BgL_globalz00_bglt) COBJECT(BgL_arg1284z00_1642))->
										BgL_modulez00);
								}
								{	/* BackEnd/cplib.scm 76 */
									obj_t BgL_arg1282z00_1641;

									BgL_arg1282z00_1641 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_classz00_1635)))->BgL_idz00);
									{	/* BackEnd/cplib.scm 76 */
										obj_t BgL_res1807z00_2075;

										{	/* BackEnd/cplib.scm 57 */
											obj_t BgL_idz00_2066;

											{	/* BackEnd/cplib.scm 57 */
												obj_t BgL_arg1270z00_2067;
												obj_t BgL_arg1271z00_2068;

												{	/* BackEnd/cplib.scm 57 */
													obj_t BgL_res1805z00_2071;

													{	/* BackEnd/cplib.scm 57 */
														obj_t BgL_arg1466z00_2070;

														BgL_arg1466z00_2070 =
															SYMBOL_TO_STRING(BgL_arg1282z00_1641);
														BgL_res1805z00_2071 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_2070);
													}
													BgL_arg1270z00_2067 = BgL_res1805z00_2071;
												}
												{	/* BackEnd/cplib.scm 57 */
													obj_t BgL_res1806z00_2074;

													{	/* BackEnd/cplib.scm 57 */
														obj_t BgL_arg1466z00_2073;

														BgL_arg1466z00_2073 =
															SYMBOL_TO_STRING(BgL_modz00_1640);
														BgL_res1806z00_2074 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_2073);
													}
													BgL_arg1271z00_2068 = BgL_res1806z00_2074;
												}
												BgL_idz00_2066 =
													bigloo_module_mangle(BgL_arg1270z00_2067,
													BgL_arg1271z00_2068);
											}
											BgL_res1807z00_2075 =
												string_append(BGl_string1846z00zzbackend_cplibz00,
												BgL_idz00_2066);
										}
										BgL_arg1274z00_1630 = BgL_res1807z00_2075;
									}
								}
							}
					}
					{	/* BackEnd/cplib.scm 67 */
						bool_t BgL_test1903z00_2426;

						{	/* BackEnd/cplib.scm 67 */
							bool_t BgL_res1818z00_2118;

							{	/* BackEnd/cplib.scm 67 */
								long BgL_l1z00_2105;

								BgL_l1z00_2105 = STRING_LENGTH(BgL_arg1273z00_1629);
								if ((BgL_l1z00_2105 == ((long) 0)))
									{	/* BackEnd/cplib.scm 67 */
										int BgL_arg1267z00_2108;

										{	/* BackEnd/cplib.scm 67 */
											char *BgL_auxz00_2432;
											char *BgL_tmpz00_2430;

											BgL_auxz00_2432 =
												BSTRING_TO_STRING(BGl_string1848z00zzbackend_cplibz00);
											BgL_tmpz00_2430 = BSTRING_TO_STRING(BgL_arg1273z00_1629);
											BgL_arg1267z00_2108 =
												memcmp(BgL_tmpz00_2430, BgL_auxz00_2432,
												BgL_l1z00_2105);
										}
										BgL_res1818z00_2118 =
											((long) (BgL_arg1267z00_2108) == ((long) 0));
									}
								else
									{	/* BackEnd/cplib.scm 67 */
										BgL_res1818z00_2118 = ((bool_t) 0);
									}
							}
							BgL_test1903z00_2426 = BgL_res1818z00_2118;
						}
						if (BgL_test1903z00_2426)
							{	/* BackEnd/cplib.scm 67 */
								return BgL_arg1274z00_1630;
							}
						else
							{	/* BackEnd/cplib.scm 67 */
								return
									string_append_3(BgL_arg1273z00_1629,
									BGl_string1850z00zzbackend_cplibz00, BgL_arg1274z00_1630);
							}
					}
				}
			}
		}

	}



/* qualified-tclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_classz00_16)
	{
		{	/* BackEnd/cplib.scm 102 */
			{	/* BackEnd/cplib.scm 103 */
				obj_t BgL_cz00_1680;

				if (BGl_widezd2classzf3z21zzobject_classz00(((obj_t) BgL_classz00_16)))
					{
						BgL_tclassz00_bglt BgL_auxz00_2441;

						{
							obj_t BgL_auxz00_2442;

							{	/* BackEnd/cplib.scm 103 */
								BgL_objectz00_bglt BgL_tmpz00_2443;

								BgL_tmpz00_2443 = ((BgL_objectz00_bglt) BgL_classz00_16);
								BgL_auxz00_2442 = BGL_OBJECT_WIDENING(BgL_tmpz00_2443);
							}
							BgL_auxz00_2441 = ((BgL_tclassz00_bglt) BgL_auxz00_2442);
						}
						BgL_cz00_1680 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2441))->
							BgL_itszd2superzd2);
					}
				else
					{	/* BackEnd/cplib.scm 103 */
						BgL_cz00_1680 = ((obj_t) BgL_classz00_16);
					}
				return
					BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(
					((BgL_typez00_bglt) BgL_cz00_1680));
			}
		}

	}



/* &qualified-tclass-name */
	obj_t BGl_z62qualifiedzd2tclasszd2namez62zzbackend_cplibz00(obj_t
		BgL_envz00_2232, obj_t BgL_classz00_2233)
	{
		{	/* BackEnd/cplib.scm 102 */
			return
				BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_classz00_2233));
		}

	}



/* qualified-wclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_classz00_17)
	{
		{	/* BackEnd/cplib.scm 109 */
			{	/* BackEnd/cplib.scm 110 */
				obj_t BgL_arg1312z00_2121;

				{
					BgL_wclassz00_bglt BgL_auxz00_2453;

					{
						obj_t BgL_auxz00_2454;

						{	/* BackEnd/cplib.scm 110 */
							BgL_objectz00_bglt BgL_tmpz00_2455;

							BgL_tmpz00_2455 = ((BgL_objectz00_bglt) BgL_classz00_17);
							BgL_auxz00_2454 = BGL_OBJECT_WIDENING(BgL_tmpz00_2455);
						}
						BgL_auxz00_2453 = ((BgL_wclassz00_bglt) BgL_auxz00_2454);
					}
					BgL_arg1312z00_2121 =
						(((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_2453))->
						BgL_itszd2classzd2);
				}
				return
					BGl_qualifiedzd2realzd2tclasszd2namezd2zzbackend_cplibz00(
					((BgL_typez00_bglt) BgL_arg1312z00_2121));
			}
		}

	}



/* &qualified-wclass-name */
	obj_t BGl_z62qualifiedzd2wclasszd2namez62zzbackend_cplibz00(obj_t
		BgL_envz00_2234, obj_t BgL_classz00_2235)
	{
		{	/* BackEnd/cplib.scm 109 */
			return
				BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_classz00_2235));
		}

	}



/* qualified-jclass-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_classz00_18)
	{
		{	/* BackEnd/cplib.scm 115 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_classz00_18)))->BgL_namez00);
		}

	}



/* &qualified-jclass-name */
	obj_t BGl_z62qualifiedzd2jclasszd2namez62zzbackend_cplibz00(obj_t
		BgL_envz00_2236, obj_t BgL_classz00_2237)
	{
		{	/* BackEnd/cplib.scm 115 */
			return
				BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_classz00_2237));
		}

	}



/* qualified-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_19)
	{
		{	/* BackEnd/cplib.scm 121 */
			{	/* BackEnd/cplib.scm 122 */
				obj_t BgL_idz00_1683;

				BgL_idz00_1683 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_19))->BgL_idz00);
				if ((BgL_idz00_1683 == CNST_TABLE_REF(((long) 1))))
					{	/* BackEnd/cplib.scm 123 */
						return BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
					}
				else
					{	/* BackEnd/cplib.scm 125 */
						obj_t BgL_javazd2classzd2_1685;

						BgL_javazd2classzd2_1685 =
							BGl_findzd2javazd2classz00zzmodule_javaz00(BgL_idz00_1683);
						if (STRINGP(BgL_javazd2classzd2_1685))
							{	/* BackEnd/cplib.scm 126 */
								return BgL_javazd2classzd2_1685;
							}
						else
							{	/* BackEnd/cplib.scm 128 */
								obj_t BgL_arg1315z00_1687;

								{	/* BackEnd/cplib.scm 128 */
									obj_t BgL_res1820z00_2129;

									{	/* BackEnd/cplib.scm 128 */
										obj_t BgL_arg1466z00_2128;

										BgL_arg1466z00_2128 = SYMBOL_TO_STRING(BgL_idz00_1683);
										BgL_res1820z00_2129 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2128);
									}
									BgL_arg1315z00_1687 = BgL_res1820z00_2129;
								}
								return
									string_append(BGl_string1851z00zzbackend_cplibz00,
									BgL_arg1315z00_1687);
							}
					}
			}
		}

	}



/* &qualified-type-name */
	obj_t BGl_z62qualifiedzd2typezd2namez62zzbackend_cplibz00(obj_t
		BgL_envz00_2238, obj_t BgL_typez00_2239)
	{
		{	/* BackEnd/cplib.scm 121 */
			return
				BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_typez00_2239));
		}

	}



/* reset-global! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2globalz12zc0zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_20)
	{
		{	/* BackEnd/cplib.scm 134 */
			{	/* BackEnd/cplib.scm 136 */
				obj_t BgL_namez00_1688;

				BgL_namez00_1688 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_20)))->BgL_namez00);
				if (STRINGP(BgL_namez00_1688))
					{	/* BackEnd/cplib.scm 137 */
						BgL_namez00_1688;
					}
				else
					{	/* BackEnd/cplib.scm 139 */
						obj_t BgL_namez00_1690;

						{	/* BackEnd/cplib.scm 139 */
							obj_t BgL_arg1319z00_1693;

							{	/* BackEnd/cplib.scm 139 */
								obj_t BgL__ortest_1107z00_1694;

								BgL__ortest_1107z00_1694 =
									(((BgL_globalz00_bglt) COBJECT(BgL_varz00_20))->BgL_aliasz00);
								if (CBOOL(BgL__ortest_1107z00_1694))
									{	/* BackEnd/cplib.scm 139 */
										BgL_arg1319z00_1693 = BgL__ortest_1107z00_1694;
									}
								else
									{	/* BackEnd/cplib.scm 139 */
										BgL_arg1319z00_1693 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_varz00_20)))->BgL_idz00);
									}
							}
							{	/* BackEnd/cplib.scm 139 */
								obj_t BgL_res1822z00_2136;

								{	/* BackEnd/cplib.scm 139 */
									obj_t BgL_arg1466z00_2135;

									BgL_arg1466z00_2135 =
										SYMBOL_TO_STRING(((obj_t) BgL_arg1319z00_1693));
									BgL_res1822z00_2136 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_2135);
								}
								BgL_namez00_1690 = BgL_res1822z00_2136;
							}
						}
						{	/* BackEnd/cplib.scm 141 */
							obj_t BgL_arg1317z00_1691;

							if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
								(BgL_namez00_1690))
								{	/* BackEnd/cplib.scm 141 */
									BgL_arg1317z00_1691 = bigloo_mangle(BgL_namez00_1690);
								}
							else
								{	/* BackEnd/cplib.scm 141 */
									BgL_arg1317z00_1691 = BgL_namez00_1690;
								}
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_20)))->BgL_namez00) =
								((obj_t) BgL_arg1317z00_1691), BUNSPEC);
						}
					}
			}
			{	/* BackEnd/cplib.scm 145 */
				BgL_valuez00_bglt BgL_valuez00_1695;

				BgL_valuez00_1695 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_20)))->BgL_valuez00);
				{	/* BackEnd/cplib.scm 146 */
					bool_t BgL_test1911z00_2499;

					{	/* BackEnd/cplib.scm 146 */
						bool_t BgL_test1912z00_2500;

						{	/* BackEnd/cplib.scm 146 */
							bool_t BgL_res1823z00_2139;

							BgL_res1823z00_2139 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valuez00_1695), BGl_scnstz00zzast_varz00);
							BgL_test1912z00_2500 = BgL_res1823z00_2139;
						}
						if (BgL_test1912z00_2500)
							{	/* BackEnd/cplib.scm 146 */
								BgL_test1911z00_2499 =
									(
									(((BgL_scnstz00_bglt) COBJECT(
												((BgL_scnstz00_bglt) BgL_valuez00_1695)))->
										BgL_classz00) == CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* BackEnd/cplib.scm 146 */
								BgL_test1911z00_2499 = ((bool_t) 0);
							}
					}
					if (BgL_test1911z00_2499)
						{	/* BackEnd/cplib.scm 147 */
							obj_t BgL_arg1324z00_1699;

							{	/* BackEnd/cplib.scm 147 */
								obj_t BgL_sz00_2142;

								BgL_sz00_2142 =
									(((BgL_scnstz00_bglt) COBJECT(
											((BgL_scnstz00_bglt) BgL_valuez00_1695)))->BgL_nodez00);
								BgL_arg1324z00_1699 =
									STRUCT_REF(BgL_sz00_2142, (int) (((long) 0)));
							}
							return
								((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_20)))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_arg1324z00_1699)),
								BUNSPEC);
						}
					else
						{	/* BackEnd/cplib.scm 146 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &reset-global! */
	obj_t BGl_z62resetzd2globalz12za2zzbackend_cplibz00(obj_t BgL_envz00_2240,
		obj_t BgL_varz00_2241)
	{
		{	/* BackEnd/cplib.scm 134 */
			return
				BGl_resetzd2globalz12zc0zzbackend_cplibz00(
				((BgL_globalz00_bglt) BgL_varz00_2241));
		}

	}



/* set-variable-name! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt
		BgL_variablez00_21)
	{
		{	/* BackEnd/cplib.scm 152 */
			{	/* BackEnd/cplib.scm 154 */
				bool_t BgL_test1913z00_2516;

				{	/* BackEnd/cplib.scm 154 */
					obj_t BgL_tmpz00_2517;

					BgL_tmpz00_2517 =
						(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_21))->BgL_namez00);
					BgL_test1913z00_2516 = STRINGP(BgL_tmpz00_2517);
				}
				if (BgL_test1913z00_2516)
					{	/* BackEnd/cplib.scm 154 */
						return
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_21))->
							BgL_namez00);
					}
				else
					{	/* BackEnd/cplib.scm 156 */
						obj_t BgL_nz00_1706;

						{	/* BackEnd/cplib.scm 157 */
							bool_t BgL_test1914z00_2521;

							{	/* BackEnd/cplib.scm 157 */
								bool_t BgL_res1825z00_2146;

								BgL_res1825z00_2146 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_variablez00_21), BGl_globalz00zzast_varz00);
								BgL_test1914z00_2521 = BgL_res1825z00_2146;
							}
							if (BgL_test1914z00_2521)
								{	/* BackEnd/cplib.scm 159 */
									obj_t BgL_arg1330z00_1709;
									obj_t BgL_arg1331z00_1710;

									{	/* BackEnd/cplib.scm 159 */
										obj_t BgL_arg1334z00_1711;

										{	/* BackEnd/cplib.scm 159 */
											obj_t BgL__ortest_1110z00_1712;

											BgL__ortest_1110z00_1712 =
												(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt) BgL_variablez00_21)))->
												BgL_aliasz00);
											if (CBOOL(BgL__ortest_1110z00_1712))
												{	/* BackEnd/cplib.scm 159 */
													BgL_arg1334z00_1711 = BgL__ortest_1110z00_1712;
												}
											else
												{	/* BackEnd/cplib.scm 159 */
													BgL_arg1334z00_1711 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_variablez00_21))))->
														BgL_idz00);
												}
										}
										{	/* BackEnd/cplib.scm 159 */
											obj_t BgL_res1826z00_2149;

											{	/* BackEnd/cplib.scm 159 */
												obj_t BgL_arg1466z00_2148;

												BgL_arg1466z00_2148 =
													SYMBOL_TO_STRING(((obj_t) BgL_arg1334z00_1711));
												BgL_res1826z00_2149 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2148);
											}
											BgL_arg1330z00_1709 = BgL_res1826z00_2149;
										}
									}
									{	/* BackEnd/cplib.scm 160 */
										obj_t BgL_arg1335z00_1713;

										BgL_arg1335z00_1713 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_variablez00_21)))->
											BgL_modulez00);
										{	/* BackEnd/cplib.scm 160 */
											obj_t BgL_res1827z00_2152;

											{	/* BackEnd/cplib.scm 160 */
												obj_t BgL_arg1466z00_2151;

												BgL_arg1466z00_2151 =
													SYMBOL_TO_STRING(BgL_arg1335z00_1713);
												BgL_res1827z00_2152 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2151);
											}
											BgL_arg1331z00_1710 = BgL_res1827z00_2152;
										}
									}
									BgL_nz00_1706 =
										bigloo_module_mangle(BgL_arg1330z00_1709,
										BgL_arg1331z00_1710);
								}
							else
								{	/* BackEnd/cplib.scm 161 */
									bool_t BgL_test1916z00_2539;

									{	/* BackEnd/cplib.scm 161 */
										bool_t BgL_res1828z00_2153;

										BgL_res1828z00_2153 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_variablez00_21), BGl_localz00zzast_varz00);
										BgL_test1916z00_2539 = BgL_res1828z00_2153;
									}
									if (BgL_test1916z00_2539)
										{	/* BackEnd/cplib.scm 165 */
											obj_t BgL_arg1337z00_1716;

											{	/* BackEnd/cplib.scm 165 */
												obj_t BgL_arg1338z00_1717;
												obj_t BgL_arg1339z00_1718;

												{	/* BackEnd/cplib.scm 165 */
													obj_t BgL_arg1340z00_1719;

													BgL_arg1340z00_1719 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_variablez00_21))))->
														BgL_idz00);
													{	/* BackEnd/cplib.scm 165 */
														obj_t BgL_res1829z00_2156;

														{	/* BackEnd/cplib.scm 165 */
															obj_t BgL_arg1466z00_2155;

															BgL_arg1466z00_2155 =
																SYMBOL_TO_STRING(BgL_arg1340z00_1719);
															BgL_res1829z00_2156 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_2155);
														}
														BgL_arg1338z00_1717 = BgL_res1829z00_2156;
													}
												}
												{	/* BackEnd/cplib.scm 165 */

													BgL_arg1339z00_1718 =
														BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
																		BgL_variablez00_21)))->BgL_keyz00),
														((long) 10));
												}
												BgL_arg1337z00_1716 =
													string_append_3(BgL_arg1338z00_1717,
													BGl_string1852z00zzbackend_cplibz00,
													BgL_arg1339z00_1718);
											}
											BgL_nz00_1706 = bigloo_mangle(BgL_arg1337z00_1716);
										}
									else
										{	/* BackEnd/cplib.scm 169 */
											obj_t BgL_arg1345z00_1723;

											BgL_arg1345z00_1723 =
												BGl_shapez00zztools_shapez00(
												((obj_t) BgL_variablez00_21));
											BgL_nz00_1706 =
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string1853z00zzbackend_cplibz00,
												BGl_string1854z00zzbackend_cplibz00,
												BgL_arg1345z00_1723);
										}
								}
						}
						((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_21))->
								BgL_namez00) = ((obj_t) BgL_nz00_1706), BUNSPEC);
						return BgL_nz00_1706;
					}
			}
		}

	}



/* &set-variable-name! */
	obj_t BGl_z62setzd2variablezd2namez12z70zzbackend_cplibz00(obj_t
		BgL_envz00_2242, obj_t BgL_variablez00_2243)
	{
		{	/* BackEnd/cplib.scm 152 */
			return
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
				((BgL_variablez00_bglt) BgL_variablez00_2243));
		}

	}



/* global-entry */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_22)
	{
		{	/* BackEnd/cplib.scm 176 */
			{	/* BackEnd/cplib.scm 178 */
				BgL_valuez00_bglt BgL_valuez00_1725;

				BgL_valuez00_1725 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_22)))->BgL_valuez00);
				{	/* BackEnd/cplib.scm 179 */
					bool_t BgL_test1917z00_2560;

					{	/* BackEnd/cplib.scm 179 */
						bool_t BgL_res1830z00_2158;

						BgL_res1830z00_2158 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_valuez00_1725), BGl_scnstz00zzast_varz00);
						BgL_test1917z00_2560 = BgL_res1830z00_2158;
					}
					if (BgL_test1917z00_2560)
						{
							BgL_variablez00_bglt BgL_auxz00_2563;

							{
								BgL_varz00_bglt BgL_auxz00_2564;

								{	/* BackEnd/cplib.scm 180 */
									obj_t BgL_pairz00_2161;

									BgL_pairz00_2161 =
										(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt)
													(((BgL_scnstz00_bglt) COBJECT(
																((BgL_scnstz00_bglt) BgL_valuez00_1725)))->
														BgL_nodez00))))->BgL_argsz00);
									BgL_auxz00_2564 = ((BgL_varz00_bglt) CAR(BgL_pairz00_2161));
								}
								BgL_auxz00_2563 =
									(((BgL_varz00_bglt) COBJECT(BgL_auxz00_2564))->
									BgL_variablez00);
							}
							return ((BgL_globalz00_bglt) BgL_auxz00_2563);
						}
					else
						{	/* BackEnd/cplib.scm 179 */
							return BgL_varz00_22;
						}
				}
			}
		}

	}



/* &global-entry */
	BgL_globalz00_bglt BGl_z62globalzd2entryzb0zzbackend_cplibz00(obj_t
		BgL_envz00_2244, obj_t BgL_varz00_2245)
	{
		{	/* BackEnd/cplib.scm 176 */
			return
				BGl_globalzd2entryzd2zzbackend_cplibz00(
				((BgL_globalz00_bglt) BgL_varz00_2245));
		}

	}



/* global-arity */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt BgL_varz00_23)
	{
		{	/* BackEnd/cplib.scm 186 */
			{	/* BackEnd/cplib.scm 188 */
				BgL_valuez00_bglt BgL_valuez00_1730;

				BgL_valuez00_1730 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_23)))->BgL_valuez00);
				{	/* BackEnd/cplib.scm 190 */
					bool_t BgL_test1918z00_2577;

					{	/* BackEnd/cplib.scm 190 */
						bool_t BgL_res1831z00_2164;

						BgL_res1831z00_2164 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_valuez00_1730), BGl_scnstz00zzast_varz00);
						BgL_test1918z00_2577 = BgL_res1831z00_2164;
					}
					if (BgL_test1918z00_2577)
						{	/* BackEnd/cplib.scm 193 */

							{	/* BackEnd/cplib.scm 194 */
								long BgL_tmpz00_2580;

								{
									BgL_funz00_bglt BgL_auxz00_2581;

									{
										BgL_sfunz00_bglt BgL_auxz00_2582;

										{
											BgL_valuez00_bglt BgL_auxz00_2583;

											{
												BgL_variablez00_bglt BgL_auxz00_2584;

												{
													obj_t BgL_auxz00_2585;

													{
														BgL_sfunz00_bglt BgL_auxz00_2586;

														{
															BgL_valuez00_bglt BgL_auxz00_2587;

															{
																BgL_variablez00_bglt BgL_auxz00_2588;

																{
																	BgL_globalz00_bglt BgL_auxz00_2589;

																	{
																		BgL_variablez00_bglt BgL_auxz00_2590;

																		{
																			BgL_varz00_bglt BgL_auxz00_2591;

																			{	/* BackEnd/cplib.scm 192 */
																				obj_t BgL_pairz00_2167;

																				BgL_pairz00_2167 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								(((BgL_scnstz00_bglt) COBJECT(
																											((BgL_scnstz00_bglt)
																												BgL_valuez00_1730)))->
																									BgL_nodez00))))->BgL_argsz00);
																				BgL_auxz00_2591 =
																					((BgL_varz00_bglt)
																					CAR(BgL_pairz00_2167));
																			}
																			BgL_auxz00_2590 =
																				(((BgL_varz00_bglt)
																					COBJECT(BgL_auxz00_2591))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_2589 =
																			((BgL_globalz00_bglt) BgL_auxz00_2590);
																	}
																	BgL_auxz00_2588 =
																		((BgL_variablez00_bglt) BgL_auxz00_2589);
																}
																BgL_auxz00_2587 =
																	(((BgL_variablez00_bglt)
																		COBJECT(BgL_auxz00_2588))->BgL_valuez00);
															}
															BgL_auxz00_2586 =
																((BgL_sfunz00_bglt) BgL_auxz00_2587);
														}
														BgL_auxz00_2585 =
															(((BgL_sfunz00_bglt) COBJECT(BgL_auxz00_2586))->
															BgL_thezd2closurezd2globalz00);
													}
													BgL_auxz00_2584 =
														((BgL_variablez00_bglt) BgL_auxz00_2585);
												}
												BgL_auxz00_2583 =
													(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2584))->
													BgL_valuez00);
											}
											BgL_auxz00_2582 = ((BgL_sfunz00_bglt) BgL_auxz00_2583);
										}
										BgL_auxz00_2581 = ((BgL_funz00_bglt) BgL_auxz00_2582);
									}
									BgL_tmpz00_2580 =
										(((BgL_funz00_bglt) COBJECT(BgL_auxz00_2581))->
										BgL_arityz00);
								}
								return BINT(BgL_tmpz00_2580);
							}
						}
					else
						{	/* BackEnd/cplib.scm 196 */
							bool_t BgL_test1919z00_2610;

							{	/* BackEnd/cplib.scm 196 */
								bool_t BgL_res1832z00_2173;

								BgL_res1832z00_2173 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_valuez00_1730), BGl_sfunz00zzast_varz00);
								BgL_test1919z00_2610 = BgL_res1832z00_2173;
							}
							if (BgL_test1919z00_2610)
								{	/* BackEnd/cplib.scm 197 */
									long BgL_xz00_1740;

									BgL_xz00_1740 =
										(((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt)
													((BgL_sfunz00_bglt) BgL_valuez00_1730))))->
										BgL_arityz00);
									if ((BgL_xz00_1740 >= ((long) 0)))
										{	/* BackEnd/cplib.scm 198 */
											return BGL_SAFE_MINUS_FX(BgL_xz00_1740, ((long) 1));
										}
									else
										{	/* BackEnd/cplib.scm 198 */
											return BGL_SAFE_PLUS_FX(BgL_xz00_1740, ((long) 1));
								}}
							else
								{	/* BackEnd/cplib.scm 196 */
									return BFALSE;
								}
						}
				}
			}
		}

	}



/* &global-arity */
	obj_t BGl_z62globalzd2arityzb0zzbackend_cplibz00(obj_t BgL_envz00_2246,
		obj_t BgL_varz00_2247)
	{
		{	/* BackEnd/cplib.scm 186 */
			return
				BGl_globalzd2arityzd2zzbackend_cplibz00(
				((BgL_globalz00_bglt) BgL_varz00_2247));
		}

	}



/* for-each-declared-classes */
	BGL_EXPORTED_DEF obj_t
		BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00(obj_t
		BgL_funz00_24)
	{
		{	/* BackEnd/cplib.scm 205 */
			{	/* BackEnd/cplib.scm 206 */
				obj_t BgL_g1242z00_1746;

				BgL_g1242z00_1746 = BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
				{
					obj_t BgL_l1240z00_1748;

					{	/* BackEnd/cplib.scm 215 */
						bool_t BgL_tmpz00_2623;

						BgL_l1240z00_1748 = BgL_g1242z00_1746;
					BgL_zc3z04anonymousza31374ze3z87_1749:
						if (PAIRP(BgL_l1240z00_1748))
							{	/* BackEnd/cplib.scm 215 */
								{	/* BackEnd/cplib.scm 207 */
									obj_t BgL_cz00_1751;

									BgL_cz00_1751 = CAR(BgL_l1240z00_1748);
									{	/* BackEnd/cplib.scm 207 */
										bool_t BgL_widezf3zf3_1752;

										BgL_widezf3zf3_1752 =
											BGl_widezd2classzf3z21zzobject_classz00(BgL_cz00_1751);
										{	/* BackEnd/cplib.scm 212 */
											obj_t BgL_arg1381z00_1753;
											obj_t BgL_arg1382z00_1754;

											if (BgL_widezf3zf3_1752)
												{	/* BackEnd/cplib.scm 212 */
													BgL_arg1381z00_1753 =
														BGl_widezd2ze3chunkz31zzbackend_cplibz00(
														((BgL_typez00_bglt) BgL_cz00_1751));
												}
											else
												{	/* BackEnd/cplib.scm 212 */
													BgL_arg1381z00_1753 = BgL_cz00_1751;
												}
											if (BgL_widezf3zf3_1752)
												{	/* BackEnd/cplib.scm 214 */
													BgL_arg1382z00_1754 =
														((obj_t)
														BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF((
																	(long) 0))));
												}
											else
												{
													BgL_tclassz00_bglt BgL_auxz00_2635;

													{
														obj_t BgL_auxz00_2636;

														{	/* BackEnd/cplib.scm 214 */
															BgL_objectz00_bglt BgL_tmpz00_2637;

															BgL_tmpz00_2637 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_cz00_1751));
															BgL_auxz00_2636 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2637);
														}
														BgL_auxz00_2635 =
															((BgL_tclassz00_bglt) BgL_auxz00_2636);
													}
													BgL_arg1382z00_1754 =
														(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2635))->
														BgL_itszd2superzd2);
												}
											PROCEDURE_ENTRY(BgL_funz00_24) (BgL_funz00_24,
												BgL_cz00_1751, BgL_arg1381z00_1753, BgL_arg1382z00_1754,
												BEOA);
										}
									}
								}
								{
									obj_t BgL_l1240z00_2649;

									BgL_l1240z00_2649 = CDR(BgL_l1240z00_1748);
									BgL_l1240z00_1748 = BgL_l1240z00_2649;
									goto BgL_zc3z04anonymousza31374ze3z87_1749;
								}
							}
						else
							{	/* BackEnd/cplib.scm 215 */
								BgL_tmpz00_2623 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2623);
					}
				}
			}
		}

	}



/* &for-each-declared-classes */
	obj_t BGl_z62forzd2eachzd2declaredzd2classeszb0zzbackend_cplibz00(obj_t
		BgL_envz00_2248, obj_t BgL_funz00_2249)
	{
		{	/* BackEnd/cplib.scm 205 */
			return
				BGl_forzd2eachzd2declaredzd2classeszd2zzbackend_cplibz00
				(BgL_funz00_2249);
		}

	}



/* get-declared-classes */
	BGL_EXPORTED_DEF obj_t BGl_getzd2declaredzd2classesz00zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 220 */
			{	/* BackEnd/cplib.scm 223 */
				obj_t BgL_rz00_1757;

				BgL_rz00_1757 = BNIL;
				{	/* BackEnd/cplib.scm 224 */
					obj_t BgL_g1245z00_1758;

					BgL_g1245z00_1758 = BGl_getzd2classzd2listz00zzobject_classz00();
					{
						obj_t BgL_l1243z00_1760;

						BgL_l1243z00_1760 = BgL_g1245z00_1758;
					BgL_zc3z04anonymousza31384ze3z87_1761:
						if (PAIRP(BgL_l1243z00_1760))
							{	/* BackEnd/cplib.scm 229 */
								{	/* BackEnd/cplib.scm 225 */
									obj_t BgL_cz00_1763;

									BgL_cz00_1763 = CAR(BgL_l1243z00_1760);
									{	/* BackEnd/cplib.scm 225 */
										bool_t BgL_test1925z00_2657;

										{	/* BackEnd/cplib.scm 225 */
											bool_t BgL_test1926z00_2658;

											{	/* BackEnd/cplib.scm 225 */
												obj_t BgL_arg1449z00_1775;

												{	/* BackEnd/cplib.scm 225 */
													BgL_globalz00_bglt BgL_arg1461z00_1776;

													{
														BgL_tclassz00_bglt BgL_auxz00_2659;

														{
															obj_t BgL_auxz00_2660;

															{	/* BackEnd/cplib.scm 225 */
																BgL_objectz00_bglt BgL_tmpz00_2661;

																BgL_tmpz00_2661 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_cz00_1763));
																BgL_auxz00_2660 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2661);
															}
															BgL_auxz00_2659 =
																((BgL_tclassz00_bglt) BgL_auxz00_2660);
														}
														BgL_arg1461z00_1776 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2659))->
															BgL_holderz00);
													}
													BgL_arg1449z00_1775 =
														(((BgL_globalz00_bglt)
															COBJECT(BgL_arg1461z00_1776))->BgL_importz00);
												}
												BgL_test1926z00_2658 =
													(BgL_arg1449z00_1775 == CNST_TABLE_REF(((long) 3)));
											}
											if (BgL_test1926z00_2658)
												{	/* BackEnd/cplib.scm 225 */
													BgL_test1925z00_2657 = ((bool_t) 1);
												}
											else
												{	/* BackEnd/cplib.scm 225 */
													BgL_test1925z00_2657 =
														(BgL_cz00_1763 ==
														BGl_getzd2objectzd2typez00zztype_cachez00());
												}
										}
										if (BgL_test1925z00_2657)
											{	/* BackEnd/cplib.scm 225 */
												BFALSE;
											}
										else
											{	/* BackEnd/cplib.scm 227 */
												obj_t BgL_arg1441z00_1771;

												if (BGl_widezd2classzf3z21zzobject_classz00
													(BgL_cz00_1763))
													{	/* BackEnd/cplib.scm 227 */
														BgL_arg1441z00_1771 =
															BGl_widezd2ze3chunkz31zzbackend_cplibz00(
															((BgL_typez00_bglt) BgL_cz00_1763));
													}
												else
													{	/* BackEnd/cplib.scm 227 */
														BgL_arg1441z00_1771 = BgL_cz00_1763;
													}
												BgL_rz00_1757 =
													MAKE_YOUNG_PAIR(BgL_arg1441z00_1771, BgL_rz00_1757);
											}
									}
								}
								{
									obj_t BgL_l1243z00_2677;

									BgL_l1243z00_2677 = CDR(BgL_l1243z00_1760);
									BgL_l1243z00_1760 = BgL_l1243z00_2677;
									goto BgL_zc3z04anonymousza31384ze3z87_1761;
								}
							}
						else
							{	/* BackEnd/cplib.scm 229 */
								((bool_t) 1);
							}
					}
				}
				return BgL_rz00_1757;
			}
		}

	}



/* &get-declared-classes */
	obj_t BGl_z62getzd2declaredzd2classesz62zzbackend_cplibz00(obj_t
		BgL_envz00_2250)
	{
		{	/* BackEnd/cplib.scm 220 */
			return BGl_getzd2declaredzd2classesz00zzbackend_cplibz00();
		}

	}



/* type->class */
	obj_t BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_25)
	{
		{	/* BackEnd/cplib.scm 235 */
			{	/* BackEnd/cplib.scm 237 */
				bool_t BgL_test1928z00_2680;

				{	/* BackEnd/cplib.scm 237 */
					bool_t BgL_res1839z00_2191;

					BgL_res1839z00_2191 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_typez00_25), BGl_tclassz00zzobject_classz00);
					BgL_test1928z00_2680 = BgL_res1839z00_2191;
				}
				if (BgL_test1928z00_2680)
					{	/* BackEnd/cplib.scm 237 */
						return ((obj_t) BgL_typez00_25);
					}
				else
					{	/* BackEnd/cplib.scm 239 */
						bool_t BgL_test1929z00_2684;

						{	/* BackEnd/cplib.scm 239 */
							bool_t BgL_res1840z00_2192;

							BgL_res1840z00_2192 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_typez00_25), BGl_wclassz00zzobject_classz00);
							BgL_test1929z00_2684 = BgL_res1840z00_2192;
						}
						if (BgL_test1929z00_2684)
							{
								BgL_wclassz00_bglt BgL_auxz00_2687;

								{
									obj_t BgL_auxz00_2688;

									{	/* BackEnd/cplib.scm 240 */
										BgL_objectz00_bglt BgL_tmpz00_2689;

										BgL_tmpz00_2689 =
											((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_typez00_25));
										BgL_auxz00_2688 = BGL_OBJECT_WIDENING(BgL_tmpz00_2689);
									}
									BgL_auxz00_2687 = ((BgL_wclassz00_bglt) BgL_auxz00_2688);
								}
								return
									(((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_2687))->
									BgL_itszd2classzd2);
							}
						else
							{	/* BackEnd/cplib.scm 239 */
								return
									BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											4)), BGl_string1855z00zzbackend_cplibz00,
									((obj_t) BgL_typez00_25));
		}}}}

	}



/* get-its-super */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2itszd2superz00zzbackend_cplibz00(BgL_typez00_bglt BgL_typez00_26)
	{
		{	/* BackEnd/cplib.scm 247 */
			{	/* BackEnd/cplib.scm 248 */
				obj_t BgL_arg1474z00_2195;

				BgL_arg1474z00_2195 =
					BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_26);
				{
					obj_t BgL_auxz00_2699;

					{
						BgL_tclassz00_bglt BgL_auxz00_2700;

						{
							obj_t BgL_auxz00_2701;

							{	/* BackEnd/cplib.scm 248 */
								BgL_objectz00_bglt BgL_tmpz00_2702;

								BgL_tmpz00_2702 =
									((BgL_objectz00_bglt)
									((BgL_typez00_bglt) BgL_arg1474z00_2195));
								BgL_auxz00_2701 = BGL_OBJECT_WIDENING(BgL_tmpz00_2702);
							}
							BgL_auxz00_2700 = ((BgL_tclassz00_bglt) BgL_auxz00_2701);
						}
						BgL_auxz00_2699 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2700))->
							BgL_itszd2superzd2);
					}
					return ((BgL_typez00_bglt) BgL_auxz00_2699);
				}
			}
		}

	}



/* &get-its-super */
	BgL_typez00_bglt BGl_z62getzd2itszd2superz62zzbackend_cplibz00(obj_t
		BgL_envz00_2251, obj_t BgL_typez00_2252)
	{
		{	/* BackEnd/cplib.scm 247 */
			return
				BGl_getzd2itszd2superz00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_typez00_2252));
		}

	}



/* get-declared-fields */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(BgL_typez00_bglt
		BgL_typez00_27)
	{
		{	/* BackEnd/cplib.scm 253 */
			{	/* BackEnd/cplib.scm 255 */
				obj_t BgL_classz00_1782;

				BgL_classz00_1782 =
					BGl_typezd2ze3classz31zzbackend_cplibz00(BgL_typez00_27);
				{	/* BackEnd/cplib.scm 256 */
					obj_t BgL_hook1250z00_1783;

					BgL_hook1250z00_1783 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* BackEnd/cplib.scm 259 */
						obj_t BgL_g1251z00_1784;

						{
							BgL_tclassz00_bglt BgL_auxz00_2713;

							{
								obj_t BgL_auxz00_2714;

								{	/* BackEnd/cplib.scm 259 */
									BgL_objectz00_bglt BgL_tmpz00_2715;

									BgL_tmpz00_2715 =
										((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_classz00_1782));
									BgL_auxz00_2714 = BGL_OBJECT_WIDENING(BgL_tmpz00_2715);
								}
								BgL_auxz00_2713 = ((BgL_tclassz00_bglt) BgL_auxz00_2714);
							}
							BgL_g1251z00_1784 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2713))->BgL_slotsz00);
						}
						{
							obj_t BgL_l1247z00_1786;
							obj_t BgL_h1248z00_1787;

							BgL_l1247z00_1786 = BgL_g1251z00_1784;
							BgL_h1248z00_1787 = BgL_hook1250z00_1783;
						BgL_zc3z04anonymousza31475ze3z87_1788:
							if (NULLP(BgL_l1247z00_1786))
								{	/* BackEnd/cplib.scm 259 */
									return CDR(BgL_hook1250z00_1783);
								}
							else
								{	/* BackEnd/cplib.scm 259 */
									bool_t BgL_test1931z00_2724;

									{	/* BackEnd/cplib.scm 257 */
										BgL_slotz00_bglt BgL_slotz00_1798;

										BgL_slotz00_1798 =
											((BgL_slotz00_bglt) CAR(((obj_t) BgL_l1247z00_1786)));
										if (BGl_slotzd2virtualzf3z21zzobject_slotsz00
											(BgL_slotz00_1798))
											{	/* BackEnd/cplib.scm 257 */
												BgL_test1931z00_2724 = ((bool_t) 0);
											}
										else
											{	/* BackEnd/cplib.scm 257 */
												BgL_test1931z00_2724 =
													(BgL_classz00_1782 ==
													(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_1798))->
														BgL_classzd2ownerzd2));
											}
									}
									if (BgL_test1931z00_2724)
										{	/* BackEnd/cplib.scm 259 */
											obj_t BgL_nh1249z00_1794;

											{	/* BackEnd/cplib.scm 259 */
												obj_t BgL_arg1493z00_1796;

												BgL_arg1493z00_1796 = CAR(((obj_t) BgL_l1247z00_1786));
												{	/* BackEnd/cplib.scm 259 */
													obj_t BgL_res1842z00_2205;

													BgL_res1842z00_2205 =
														MAKE_YOUNG_PAIR(BgL_arg1493z00_1796, BNIL);
													BgL_nh1249z00_1794 = BgL_res1842z00_2205;
												}
											}
											SET_CDR(BgL_h1248z00_1787, BgL_nh1249z00_1794);
											{	/* BackEnd/cplib.scm 259 */
												obj_t BgL_arg1489z00_1795;

												BgL_arg1489z00_1795 = CDR(((obj_t) BgL_l1247z00_1786));
												{
													obj_t BgL_h1248z00_2739;
													obj_t BgL_l1247z00_2738;

													BgL_l1247z00_2738 = BgL_arg1489z00_1795;
													BgL_h1248z00_2739 = BgL_nh1249z00_1794;
													BgL_h1248z00_1787 = BgL_h1248z00_2739;
													BgL_l1247z00_1786 = BgL_l1247z00_2738;
													goto BgL_zc3z04anonymousza31475ze3z87_1788;
												}
											}
										}
									else
										{	/* BackEnd/cplib.scm 259 */
											obj_t BgL_arg1495z00_1797;

											BgL_arg1495z00_1797 = CDR(((obj_t) BgL_l1247z00_1786));
											{
												obj_t BgL_l1247z00_2742;

												BgL_l1247z00_2742 = BgL_arg1495z00_1797;
												BgL_l1247z00_1786 = BgL_l1247z00_2742;
												goto BgL_zc3z04anonymousza31475ze3z87_1788;
											}
										}
								}
						}
					}
				}
			}
		}

	}



/* &get-declared-fields */
	obj_t BGl_z62getzd2declaredzd2fieldsz62zzbackend_cplibz00(obj_t
		BgL_envz00_2253, obj_t BgL_typez00_2254)
	{
		{	/* BackEnd/cplib.scm 253 */
			return
				BGl_getzd2declaredzd2fieldsz00zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_typez00_2254));
		}

	}



/* get-field-type */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_slotz00_bglt BgL_slotz00_28)
	{
		{	/* BackEnd/cplib.scm 264 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_slotz00_28))->BgL_typez00);
		}

	}



/* &get-field-type */
	obj_t BGl_z62getzd2fieldzd2typez62zzbackend_cplibz00(obj_t BgL_envz00_2255,
		obj_t BgL_slotz00_2256)
	{
		{	/* BackEnd/cplib.scm 264 */
			return
				BGl_getzd2fieldzd2typez00zzbackend_cplibz00(
				((BgL_slotz00_bglt) BgL_slotz00_2256));
		}

	}



/* wide->chunk */
	BGL_EXPORTED_DEF obj_t
		BGl_widezd2ze3chunkz31zzbackend_cplibz00(BgL_typez00_bglt BgL_cz00_29)
	{
		{	/* BackEnd/cplib.scm 271 */
			{	/* BackEnd/cplib.scm 275 */
				bool_t BgL_test1933z00_2748;

				{	/* BackEnd/cplib.scm 275 */
					BgL_typez00_bglt BgL_arg1540z00_1807;
					obj_t BgL_arg1552z00_1808;

					{	/* BackEnd/cplib.scm 275 */
						obj_t BgL_arg1558z00_1809;

						{	/* BackEnd/cplib.scm 275 */
							obj_t BgL_arg1561z00_1810;

							BgL_arg1561z00_1810 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_29)))->BgL_idz00);
							BgL_arg1558z00_1809 =
								BGl_widezd2chunkzd2classzd2idzd2zzobject_classz00
								(BgL_arg1561z00_1810);
						}
						BgL_arg1540z00_1807 =
							BGl_findzd2typezd2zztype_envz00(BgL_arg1558z00_1809);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_2753;

						{
							obj_t BgL_auxz00_2754;

							{	/* BackEnd/cplib.scm 276 */
								BgL_objectz00_bglt BgL_tmpz00_2755;

								BgL_tmpz00_2755 = ((BgL_objectz00_bglt) BgL_cz00_29);
								BgL_auxz00_2754 = BGL_OBJECT_WIDENING(BgL_tmpz00_2755);
							}
							BgL_auxz00_2753 = ((BgL_tclassz00_bglt) BgL_auxz00_2754);
						}
						BgL_arg1552z00_1808 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2753))->
							BgL_widezd2typezd2);
					}
					BgL_test1933z00_2748 =
						(((obj_t) BgL_arg1540z00_1807) == BgL_arg1552z00_1808);
				}
				if (BgL_test1933z00_2748)
					{
						BgL_tclassz00_bglt BgL_auxz00_2762;

						{
							obj_t BgL_auxz00_2763;

							{	/* BackEnd/cplib.scm 278 */
								BgL_objectz00_bglt BgL_tmpz00_2764;

								BgL_tmpz00_2764 = ((BgL_objectz00_bglt) BgL_cz00_29);
								BgL_auxz00_2763 = BGL_OBJECT_WIDENING(BgL_tmpz00_2764);
							}
							BgL_auxz00_2762 = ((BgL_tclassz00_bglt) BgL_auxz00_2763);
						}
						return
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2762))->
							BgL_widezd2typezd2);
					}
				else
					{	/* BackEnd/cplib.scm 275 */
						return
							BGl_errorz00zz__errorz00(BGl_string1856z00zzbackend_cplibz00,
							BGl_string1857z00zzbackend_cplibz00, ((obj_t) BgL_cz00_29));
					}
			}
		}

	}



/* &wide->chunk */
	obj_t BGl_z62widezd2ze3chunkz53zzbackend_cplibz00(obj_t BgL_envz00_2257,
		obj_t BgL_cz00_2258)
	{
		{	/* BackEnd/cplib.scm 271 */
			return
				BGl_widezd2ze3chunkz31zzbackend_cplibz00(
				((BgL_typez00_bglt) BgL_cz00_2258));
		}

	}



/* get-declared-global-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00(obj_t
		BgL_modulez00_30)
	{
		{	/* BackEnd/cplib.scm 283 */
			{	/* BackEnd/cplib.scm 285 */
				obj_t BgL_rz00_2267;

				BgL_rz00_2267 = MAKE_CELL(BNIL);
				{	/* BackEnd/cplib.scm 287 */
					obj_t BgL_zc3z04anonymousza31566ze3z87_2259;

					BgL_zc3z04anonymousza31566ze3z87_2259 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_cplibz00,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31566ze3z87_2259,
						(int) (((long) 0)), ((obj_t) BgL_rz00_2267));
					PROCEDURE_SET(BgL_zc3z04anonymousza31566ze3z87_2259,
						(int) (((long) 1)), BgL_modulez00_30);
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3z04anonymousza31566ze3z87_2259, BNIL);
				}
				return CELL_REF(BgL_rz00_2267);
			}
		}

	}



/* &get-declared-global-variables */
	obj_t BGl_z62getzd2declaredzd2globalzd2variableszb0zzbackend_cplibz00(obj_t
		BgL_envz00_2260, obj_t BgL_modulez00_2261)
	{
		{	/* BackEnd/cplib.scm 283 */
			return
				BGl_getzd2declaredzd2globalzd2variableszd2zzbackend_cplibz00
				(BgL_modulez00_2261);
		}

	}



/* &<@anonymous:1566> */
	obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzbackend_cplibz00(obj_t
		BgL_envz00_2262, obj_t BgL_vz00_2265)
	{
		{	/* BackEnd/cplib.scm 286 */
			{	/* BackEnd/cplib.scm 287 */
				obj_t BgL_rz00_2263;
				obj_t BgL_modulez00_2264;

				BgL_rz00_2263 = PROCEDURE_REF(BgL_envz00_2262, (int) (((long) 0)));
				BgL_modulez00_2264 = PROCEDURE_REF(BgL_envz00_2262, (int) (((long) 1)));
				{	/* BackEnd/cplib.scm 287 */
					bool_t BgL_test1934z00_2787;

					if (
						((((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_vz00_2265)))->BgL_modulez00) ==
							BgL_modulez00_2264))
						{	/* BackEnd/cplib.scm 288 */
							bool_t BgL_test1936z00_2792;

							{	/* BackEnd/cplib.scm 288 */
								BgL_valuez00_bglt BgL_arg1604z00_2293;

								BgL_arg1604z00_2293 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_vz00_2265))))->BgL_valuez00);
								{	/* BackEnd/cplib.scm 288 */
									bool_t BgL_res1843z00_2294;

									BgL_res1843z00_2294 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1604z00_2293), BGl_cfunz00zzast_varz00);
									BgL_test1936z00_2792 = BgL_res1843z00_2294;
								}
							}
							if (BgL_test1936z00_2792)
								{	/* BackEnd/cplib.scm 288 */
									BgL_test1934z00_2787 = ((bool_t) 0);
								}
							else
								{	/* BackEnd/cplib.scm 289 */
									bool_t BgL_test1937z00_2798;

									{	/* BackEnd/cplib.scm 289 */
										BgL_valuez00_bglt BgL_arg1599z00_2295;

										BgL_arg1599z00_2295 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_vz00_2265))))->
											BgL_valuez00);
										{	/* BackEnd/cplib.scm 289 */
											bool_t BgL_res1844z00_2296;

											BgL_res1844z00_2296 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1599z00_2295), BGl_sfunz00zzast_varz00);
											BgL_test1937z00_2798 = BgL_res1844z00_2296;
										}
									}
									if (BgL_test1937z00_2798)
										{	/* BackEnd/cplib.scm 289 */
											BgL_test1934z00_2787 = ((bool_t) 0);
										}
									else
										{	/* BackEnd/cplib.scm 289 */
											if (
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_vz00_2265))))->
														BgL_idz00) == CNST_TABLE_REF(((long) 5))))
												{	/* BackEnd/cplib.scm 290 */
													BgL_test1934z00_2787 = ((bool_t) 0);
												}
											else
												{	/* BackEnd/cplib.scm 290 */
													BgL_test1934z00_2787 = ((bool_t) 1);
												}
										}
								}
						}
					else
						{	/* BackEnd/cplib.scm 287 */
							BgL_test1934z00_2787 = ((bool_t) 0);
						}
					if (BgL_test1934z00_2787)
						{	/* BackEnd/cplib.scm 291 */
							obj_t BgL_auxz00_2297;

							BgL_auxz00_2297 =
								MAKE_YOUNG_PAIR(BgL_vz00_2265, CELL_REF(BgL_rz00_2263));
							return CELL_SET(BgL_rz00_2263, BgL_auxz00_2297);
						}
					else
						{	/* BackEnd/cplib.scm 287 */
							return BFALSE;
						}
				}
			}
		}

	}



/* get-global-variables-to-be-initialized */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
		(obj_t BgL_modulez00_31)
	{
		{	/* BackEnd/cplib.scm 297 */
			{	/* BackEnd/cplib.scm 299 */
				obj_t BgL_rz00_2277;

				BgL_rz00_2277 = MAKE_CELL(BNIL);
				{	/* BackEnd/cplib.scm 301 */
					obj_t BgL_zc3z04anonymousza31608ze3z87_2269;

					BgL_zc3z04anonymousza31608ze3z87_2269 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31608ze3ze5zzbackend_cplibz00,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_2269,
						(int) (((long) 0)), ((obj_t) BgL_rz00_2277));
					PROCEDURE_SET(BgL_zc3z04anonymousza31608ze3z87_2269,
						(int) (((long) 1)), BgL_modulez00_31);
					BGl_forzd2eachzd2globalz12z12zzast_envz00
						(BgL_zc3z04anonymousza31608ze3z87_2269, BNIL);
				}
				return CELL_REF(BgL_rz00_2277);
			}
		}

	}



/* &get-global-variables-to-be-initialized */
	obj_t
		BGl_z62getzd2globalzd2variableszd2tozd2bezd2initializa7edz17zzbackend_cplibz00
		(obj_t BgL_envz00_2270, obj_t BgL_modulez00_2271)
	{
		{	/* BackEnd/cplib.scm 297 */
			return
				BGl_getzd2globalzd2variableszd2tozd2bezd2initializa7edz75zzbackend_cplibz00
				(BgL_modulez00_2271);
		}

	}



/* &<@anonymous:1608> */
	obj_t BGl_z62zc3z04anonymousza31608ze3ze5zzbackend_cplibz00(obj_t
		BgL_envz00_2272, obj_t BgL_globalz00_2275)
	{
		{	/* BackEnd/cplib.scm 300 */
			{	/* BackEnd/cplib.scm 301 */
				obj_t BgL_rz00_2273;
				obj_t BgL_modulez00_2274;

				BgL_rz00_2273 = PROCEDURE_REF(BgL_envz00_2272, (int) (((long) 0)));
				BgL_modulez00_2274 = PROCEDURE_REF(BgL_envz00_2272, (int) (((long) 1)));
				{	/* BackEnd/cplib.scm 301 */
					bool_t BgL_test1939z00_2825;

					if (
						((((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_globalz00_2275)))->
								BgL_modulez00) == BgL_modulez00_2274))
						{	/* BackEnd/cplib.scm 301 */
							if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(
									((BgL_globalz00_bglt) BgL_globalz00_2275)))
								{	/* BackEnd/cplib.scm 304 */
									BgL_valuez00_bglt BgL_arg1631z00_2298;

									BgL_arg1631z00_2298 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_2275))))->
										BgL_valuez00);
									{	/* BackEnd/cplib.scm 304 */
										bool_t BgL_res1845z00_2299;

										BgL_res1845z00_2299 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1631z00_2298), BGl_scnstz00zzast_varz00);
										BgL_test1939z00_2825 = BgL_res1845z00_2299;
									}
								}
							else
								{	/* BackEnd/cplib.scm 303 */
									BgL_test1939z00_2825 = ((bool_t) 0);
								}
						}
					else
						{	/* BackEnd/cplib.scm 301 */
							BgL_test1939z00_2825 = ((bool_t) 0);
						}
					if (BgL_test1939z00_2825)
						{	/* BackEnd/cplib.scm 305 */
							obj_t BgL_auxz00_2300;

							BgL_auxz00_2300 =
								MAKE_YOUNG_PAIR(BgL_globalz00_2275, CELL_REF(BgL_rz00_2273));
							return CELL_SET(BgL_rz00_2273, BgL_auxz00_2300);
						}
					else
						{	/* BackEnd/cplib.scm 301 */
							return BFALSE;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cplibz00()
	{
		{	/* BackEnd/cplib.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzmodule_javaz00(((long) 93940891),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					300504034), BSTRING_TO_STRING(BGl_string1858z00zzbackend_cplibz00));
		}

	}

#ifdef __cplusplus
}
#endif
