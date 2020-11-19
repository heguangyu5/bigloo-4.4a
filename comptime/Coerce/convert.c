/*===========================================================================*/
/*   (Coerce/convert.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/convert.scm) */
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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

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


	extern obj_t BGl_za2uint32za2z00zztype_cachez00;
	extern obj_t BGl_za2uint16za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static BgL_nodez00_bglt BGl_dozd2convertzd2zzcoerce_convertz00(obj_t,
		BgL_nodez00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2stackzd2checkz00zzcoerce_convertz00();
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_notifyzd2typezd2testz00zzcoerce_convertz00(obj_t, obj_t,
		obj_t);
	static long BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00;
	static obj_t BGl_objectzd2initzd2zzcoerce_convertz00();
	BGL_IMPORT obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_notifiedzd2locationszd2zzcoerce_convertz00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_convertz00();
	static obj_t BGl_z62runtimezd2typezd2errorz62zzcoerce_convertz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2int32za2z00zztype_cachez00;
	extern obj_t BGl_za2int16za2z00zztype_cachez00;
	extern obj_t BGl_za2uint8za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2scharza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62convertz12z70zzcoerce_convertz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2int8za2z00zztype_cachez00;
	static obj_t BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_convertz00();
	BGL_IMPORT obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t, obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t);
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	extern obj_t BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_convertz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_toplevelzd2initzd2zzcoerce_convertz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2stackzd2checkz62zzcoerce_convertz00(obj_t);
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcoerce_convertz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_makezd2onezd2conversionz00zzcoerce_convertz00(obj_t, obj_t, obj_t,
		obj_t, BgL_nodez00_bglt, bool_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_nodez00_bglt
		BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00(obj_t, obj_t,
		obj_t, obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static long BGl_za2checkza2z00zzcoerce_convertz00;
	extern bool_t BGl_subzd2typezf3z21zztype_envz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2uint64za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2warningzd2typesza2zd2zzengine_paramz00;
	static obj_t BGl_convertzd2errorzd2zzcoerce_convertz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00(BgL_typez00_bglt,
		obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcoerce_convertz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00();
	extern obj_t BGl_za2llongza2z00zztype_cachez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_convertz00();
	extern obj_t BGl_za2int64za2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_skipzd2letzd2varz00zzcoerce_convertz00(BgL_nodez00_bglt);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t __cnst[11];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_convertz12zd2envzc0zzcoerce_convertz00,
		BgL_bgl_za762convertza712za7702051za7,
		BGl_z62convertz12z70zzcoerce_convertz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2stackzd2checkzd2envzd2zzcoerce_convertz00,
		BgL_bgl_za762getza7d2stackza7d2052za7,
		BGl_z62getzd2stackzd2checkz62zzcoerce_convertz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2041z00zzcoerce_convertz00,
		BgL_bgl_string2041za700za7za7c2053za7,
		" ~a. Type test inserted \"~a\" -> \"~a\"", 36);
	      DEFINE_STRING(BGl_string2042z00zzcoerce_convertz00,
		BgL_bgl_string2042za700za7za7c2054za7, "", 0);
	      DEFINE_STRING(BGl_string2043z00zzcoerce_convertz00,
		BgL_bgl_string2043za700za7za7c2055za7, "Type error", 10);
	      DEFINE_STRING(BGl_string2045z00zzcoerce_convertz00,
		BgL_bgl_string2045za700za7za7c2056za7, "Illegal conversion", 18);
	      DEFINE_STRING(BGl_string2046z00zzcoerce_convertz00,
		BgL_bgl_string2046za700za7za7c2057za7, "coerce_convert", 14);
	      DEFINE_STRING(BGl_string2047z00zzcoerce_convertz00,
		BgL_bgl_string2047za700za7za7c2058za7,
		"aux2 if coercer let ::obj aux failure @ type-error __error location ", 68);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_runtimezd2typezd2errorzd2envzd2zzcoerce_convertz00,
		BgL_bgl_za762runtimeza7d2typ2059z00,
		BGl_z62runtimezd2typezd2errorz62zzcoerce_convertz00, 0L, BUNSPEC, 3);
	      DEFINE_REAL(BGl_real2044z00zzcoerce_convertz00,
		BgL_bgl_real2044za700za7za7coe2060za7, 0.0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_notifiedzd2locationszd2zzcoerce_convertz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcoerce_convertz00));
		     ADD_ROOT((void
				*) (&BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long
		BgL_checksumz00_2601, char *BgL_fromz00_2602)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_convertz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_convertz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_convertz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00();
					BGl_cnstzd2initzd2zzcoerce_convertz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_convertz00();
					return BGl_toplevelzd2initzd2zzcoerce_convertz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"coerce_convert");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"coerce_convert");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			{	/* Coerce/convert.scm 16 */
				obj_t BgL_cportz00_2588;

				{	/* Coerce/convert.scm 16 */
					obj_t BgL_stringz00_2596;

					BgL_stringz00_2596 = BGl_string2047z00zzcoerce_convertz00;
					{	/* Coerce/convert.scm 16 */
						obj_t BgL_startz00_2597;

						BgL_startz00_2597 = BINT(((long) 0));
						{	/* Coerce/convert.scm 16 */
							obj_t BgL_endz00_2598;

							BgL_endz00_2598 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2596)));
							{	/* Coerce/convert.scm 16 */

								BgL_cportz00_2588 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2596, BgL_startz00_2597, BgL_endz00_2598);
				}}}}
				{
					long BgL_iz00_2589;

					BgL_iz00_2589 = ((long) 10);
				BgL_loopz00_2590:
					if ((BgL_iz00_2589 == ((long) -1)))
						{	/* Coerce/convert.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/convert.scm 16 */
							{	/* Coerce/convert.scm 16 */
								obj_t BgL_arg2049z00_2592;

								{	/* Coerce/convert.scm 16 */

									{	/* Coerce/convert.scm 16 */
										obj_t BgL_locationz00_2594;

										BgL_locationz00_2594 = BBOOL(((bool_t) 0));
										{	/* Coerce/convert.scm 16 */

											BgL_arg2049z00_2592 =
												BGl_readz00zz__readerz00(BgL_cportz00_2588,
												BgL_locationz00_2594);
										}
									}
								}
								{	/* Coerce/convert.scm 16 */
									int BgL_tmpz00_2632;

									BgL_tmpz00_2632 = (int) (BgL_iz00_2589);
									CNST_TABLE_SET(BgL_tmpz00_2632, BgL_arg2049z00_2592);
							}}
							{	/* Coerce/convert.scm 16 */
								int BgL_auxz00_2595;

								BgL_auxz00_2595 = (int) ((BgL_iz00_2589 - ((long) 1)));
								{
									long BgL_iz00_2637;

									BgL_iz00_2637 = (long) (BgL_auxz00_2595);
									BgL_iz00_2589 = BgL_iz00_2637;
									goto BgL_loopz00_2590;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			BGl_za2checkza2z00zzcoerce_convertz00 = ((long) 0);
			BGl_notifiedzd2locationszd2zzcoerce_convertz00 = BNIL;
			BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00 = BTRUE;
			return (BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00 =
				((long) 0), BUNSPEC);
		}

	}



/* notify-type-test */
	obj_t BGl_notifyzd2typezd2testz00zzcoerce_convertz00(obj_t BgL_fromz00_35,
		obj_t BgL_toz00_36, obj_t BgL_locz00_37)
	{
		{	/* Coerce/convert.scm 59 */
			if (CBOOL(BGl_za2notifyzd2typezd2testza2z00zzcoerce_convertz00))
				{	/* Coerce/convert.scm 61 */
					int BgL_stz00_1742;

					BgL_stz00_1742 = BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
					BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(
						(int) (((long) 0)));
					if (CBOOL(BgL_locz00_37))
						{	/* Coerce/convert.scm 64 */
							if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
									(BgL_locz00_37,
										BGl_notifiedzd2locationszd2zzcoerce_convertz00)))
								{	/* Coerce/convert.scm 69 */
									BFALSE;
								}
							else
								{	/* Coerce/convert.scm 69 */
									BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00 =
										(((long) 1) +
										BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00);
									BGl_notifiedzd2locationszd2zzcoerce_convertz00 =
										MAKE_YOUNG_PAIR(BgL_locz00_37,
										BGl_notifiedzd2locationszd2zzcoerce_convertz00);
									{	/* Coerce/convert.scm 72 */
										obj_t BgL_arg1396z00_1744;
										obj_t BgL_arg1417z00_1745;
										obj_t BgL_arg1418z00_1746;

										BgL_arg1396z00_1744 =
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_locz00_37);
										BgL_arg1417z00_1745 =
											STRUCT_REF(((obj_t) BgL_locz00_37), (int) (((long) 1)));
										{	/* Coerce/convert.scm 75 */
											obj_t BgL_arg1421z00_1748;
											obj_t BgL_arg1422z00_1749;

											BgL_arg1421z00_1748 =
												BGl_shapez00zztools_shapez00(BgL_fromz00_35);
											BgL_arg1422z00_1749 =
												BGl_shapez00zztools_shapez00(BgL_toz00_36);
											{	/* Coerce/convert.scm 74 */
												obj_t BgL_list1423z00_1750;

												{	/* Coerce/convert.scm 74 */
													obj_t BgL_arg1441z00_1751;

													{	/* Coerce/convert.scm 74 */
														obj_t BgL_arg1442z00_1752;

														BgL_arg1442z00_1752 =
															MAKE_YOUNG_PAIR(BgL_arg1422z00_1749, BNIL);
														BgL_arg1441z00_1751 =
															MAKE_YOUNG_PAIR(BgL_arg1421z00_1748,
															BgL_arg1442z00_1752);
													}
													BgL_list1423z00_1750 =
														MAKE_YOUNG_PAIR(BINT
														(BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00),
														BgL_arg1441z00_1751);
												}
												BgL_arg1418z00_1746 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string2041z00zzcoerce_convertz00,
													BgL_list1423z00_1750);
										}}
										{	/* Coerce/convert.scm 72 */
											obj_t BgL_list1419z00_1747;

											BgL_list1419z00_1747 =
												MAKE_YOUNG_PAIR(BgL_arg1418z00_1746, BNIL);
											BGl_warningzf2locationzf2zz__errorz00(BgL_arg1396z00_1744,
												BgL_arg1417z00_1745, BgL_list1419z00_1747);
						}}}}
					else
						{	/* Coerce/convert.scm 64 */
							BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00 =
								(((long) 1) + BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00);
							{	/* Coerce/convert.scm 68 */
								obj_t BgL_arg1448z00_1753;

								{	/* Coerce/convert.scm 68 */
									obj_t BgL_arg1461z00_1755;
									obj_t BgL_arg1462z00_1756;

									BgL_arg1461z00_1755 =
										BGl_shapez00zztools_shapez00(BgL_fromz00_35);
									BgL_arg1462z00_1756 =
										BGl_shapez00zztools_shapez00(BgL_toz00_36);
									{	/* Coerce/convert.scm 67 */
										obj_t BgL_list1463z00_1757;

										{	/* Coerce/convert.scm 67 */
											obj_t BgL_arg1464z00_1758;

											{	/* Coerce/convert.scm 67 */
												obj_t BgL_arg1465z00_1759;

												BgL_arg1465z00_1759 =
													MAKE_YOUNG_PAIR(BgL_arg1462z00_1756, BNIL);
												BgL_arg1464z00_1758 =
													MAKE_YOUNG_PAIR(BgL_arg1461z00_1755,
													BgL_arg1465z00_1759);
											}
											BgL_list1463z00_1757 =
												MAKE_YOUNG_PAIR(BINT
												(BGl_za2notifyzd2counterza2zd2zzcoerce_convertz00),
												BgL_arg1464z00_1758);
										}
										BgL_arg1448z00_1753 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string2041z00zzcoerce_convertz00,
											BgL_list1463z00_1757);
								}}
								{	/* Coerce/convert.scm 66 */
									obj_t BgL_list1449z00_1754;

									BgL_list1449z00_1754 =
										MAKE_YOUNG_PAIR(BgL_arg1448z00_1753, BNIL);
									BGl_warningz00zz__errorz00(BgL_list1449z00_1754);
						}}}
					return
						BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00
						(BgL_stz00_1742);
				}
			else
				{	/* Coerce/convert.scm 60 */
					return BFALSE;
				}
		}

	}



/* get-stack-check */
	BGL_EXPORTED_DEF obj_t BGl_getzd2stackzd2checkz00zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 88 */
			return BINT(BGl_za2checkza2z00zzcoerce_convertz00);
		}

	}



/* &get-stack-check */
	obj_t BGl_z62getzd2stackzd2checkz62zzcoerce_convertz00(obj_t BgL_envz00_2576)
	{
		{	/* Coerce/convert.scm 88 */
			return BGl_getzd2stackzd2checkz00zzcoerce_convertz00();
		}

	}



/* runtime-type-error/id */
	obj_t BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00(obj_t
		BgL_locz00_49, obj_t BgL_tiz00_50, obj_t BgL_idz00_51)
	{
		{	/* Coerce/convert.scm 114 */
			{	/* Coerce/convert.scm 116 */
				obj_t BgL_fnamez00_1767;
				obj_t BgL_posz00_1768;

				{	/* Coerce/convert.scm 116 */
					bool_t BgL_test2066z00_2678;

					if (STRUCTP(BgL_locz00_49))
						{	/* Coerce/convert.scm 116 */
							BgL_test2066z00_2678 =
								(STRUCT_KEY(BgL_locz00_49) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Coerce/convert.scm 116 */
							BgL_test2066z00_2678 = ((bool_t) 0);
						}
					if (BgL_test2066z00_2678)
						{	/* Coerce/convert.scm 116 */
							BgL_fnamez00_1767 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_49);
						}
					else
						{	/* Coerce/convert.scm 116 */
							BgL_fnamez00_1767 = BFALSE;
						}
				}
				{	/* Coerce/convert.scm 117 */
					bool_t BgL_test2068z00_2685;

					if (STRUCTP(BgL_locz00_49))
						{	/* Coerce/convert.scm 117 */
							BgL_test2068z00_2685 =
								(STRUCT_KEY(BgL_locz00_49) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Coerce/convert.scm 117 */
							BgL_test2068z00_2685 = ((bool_t) 0);
						}
					if (BgL_test2068z00_2685)
						{	/* Coerce/convert.scm 117 */
							BgL_posz00_1768 = STRUCT_REF(BgL_locz00_49, (int) (((long) 1)));
						}
					else
						{	/* Coerce/convert.scm 117 */
							BgL_posz00_1768 = BFALSE;
						}
				}
				{	/* Coerce/convert.scm 119 */
					obj_t BgL_arg1497z00_1769;

					{	/* Coerce/convert.scm 119 */
						obj_t BgL_arg1518z00_1770;
						obj_t BgL_arg1521z00_1771;

						{	/* Coerce/convert.scm 119 */
							obj_t BgL_arg1528z00_1772;
							obj_t BgL_arg1536z00_1773;

							{	/* Coerce/convert.scm 119 */
								obj_t BgL_arg1537z00_1774;

								{	/* Coerce/convert.scm 119 */
									obj_t BgL_arg1540z00_1775;

									BgL_arg1540z00_1775 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
									BgL_arg1537z00_1774 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
										BgL_arg1540z00_1775);
								}
								BgL_arg1528z00_1772 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
									BgL_arg1537z00_1774);
							}
							{	/* Coerce/convert.scm 120 */
								obj_t BgL_arg1552z00_1776;

								{	/* Coerce/convert.scm 120 */
									obj_t BgL_arg1558z00_1777;

									{	/* Coerce/convert.scm 120 */
										obj_t BgL_arg1561z00_1778;
										obj_t BgL_arg1564z00_1779;

										{	/* Coerce/convert.scm 120 */
											obj_t BgL_arg1565z00_1780;

											BgL_arg1565z00_1780 =
												BGl_currentzd2functionzd2zztools_errorz00();
											{	/* Coerce/convert.scm 120 */
												obj_t BgL_res1995z00_2340;

												{	/* Coerce/convert.scm 120 */
													obj_t BgL_arg1466z00_2339;

													BgL_arg1466z00_2339 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1565z00_1780));
													BgL_res1995z00_2340 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2339);
												}
												BgL_arg1561z00_1778 = BgL_res1995z00_2340;
										}}
										{	/* Coerce/convert.scm 121 */
											obj_t BgL_arg1573z00_1781;
											obj_t BgL_arg1575z00_1782;

											{	/* Coerce/convert.scm 121 */
												obj_t BgL_res1996z00_2343;

												{	/* Coerce/convert.scm 121 */
													obj_t BgL_arg1466z00_2342;

													BgL_arg1466z00_2342 =
														SYMBOL_TO_STRING(((obj_t) BgL_tiz00_50));
													BgL_res1996z00_2343 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2342);
												}
												BgL_arg1573z00_1781 = BgL_res1996z00_2343;
											}
											BgL_arg1575z00_1782 = MAKE_YOUNG_PAIR(BgL_idz00_51, BNIL);
											BgL_arg1564z00_1779 =
												MAKE_YOUNG_PAIR(BgL_arg1573z00_1781,
												BgL_arg1575z00_1782);
										}
										BgL_arg1558z00_1777 =
											MAKE_YOUNG_PAIR(BgL_arg1561z00_1778, BgL_arg1564z00_1779);
									}
									BgL_arg1552z00_1776 =
										MAKE_YOUNG_PAIR(BgL_posz00_1768, BgL_arg1558z00_1777);
								}
								BgL_arg1536z00_1773 =
									MAKE_YOUNG_PAIR(BgL_fnamez00_1767, BgL_arg1552z00_1776);
							}
							BgL_arg1518z00_1770 =
								MAKE_YOUNG_PAIR(BgL_arg1528z00_1772, BgL_arg1536z00_1773);
						}
						{	/* Coerce/convert.scm 118 */
							obj_t BgL_arg1578z00_1783;

							BgL_arg1578z00_1783 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							BgL_arg1521z00_1771 =
								MAKE_YOUNG_PAIR(BFALSE, BgL_arg1578z00_1783);
						}
						BgL_arg1497z00_1769 =
							MAKE_YOUNG_PAIR(BgL_arg1518z00_1770, BgL_arg1521z00_1771);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BgL_arg1497z00_1769);
		}}}

	}



/* runtime-type-error */
	BGL_EXPORTED_DEF obj_t BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(obj_t
		BgL_locz00_52, obj_t BgL_tiz00_53, BgL_nodez00_bglt BgL_valuez00_54)
	{
		{	/* Coerce/convert.scm 128 */
			{	/* Coerce/convert.scm 130 */
				obj_t BgL_auxz00_1786;

				BgL_auxz00_1786 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 5)));
				{	/* Coerce/convert.scm 130 */
					BgL_nodez00_bglt BgL_uvaluez00_1787;

					{	/* Coerce/convert.scm 131 */
						bool_t BgL_test2070z00_2719;

						{	/* Coerce/convert.scm 131 */
							bool_t BgL_res1997z00_2344;

							BgL_res1997z00_2344 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valuez00_54), BGl_varz00zzast_nodez00);
							BgL_test2070z00_2719 = BgL_res1997z00_2344;
						}
						if (BgL_test2070z00_2719)
							{	/* Coerce/convert.scm 132 */
								BgL_nodez00_bglt BgL_duplicated1110z00_1804;
								BgL_varz00_bglt BgL_new1108z00_1805;

								BgL_duplicated1110z00_1804 = BgL_valuez00_54;
								{	/* Coerce/convert.scm 132 */
									BgL_varz00_bglt BgL_new1112z00_1807;

									BgL_new1112z00_1807 =
										((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_varz00_bgl))));
									{	/* Coerce/convert.scm 132 */
										long BgL_arg1624z00_1808;

										{	/* Coerce/convert.scm 132 */
											long BgL_res1998z00_2346;

											BgL_res1998z00_2346 =
												BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
											BgL_arg1624z00_1808 = BgL_res1998z00_2346;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1112z00_1807),
											BgL_arg1624z00_1808);
									}
									BgL_new1108z00_1805 = BgL_new1112z00_1807;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1108z00_1805)))->
										BgL_locz00) =
									((obj_t) (((BgL_nodez00_bglt)
												COBJECT(BgL_duplicated1110z00_1804))->BgL_locz00)),
									BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1108z00_1805)))->BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
								((((BgL_varz00_bglt) COBJECT(BgL_new1108z00_1805))->
										BgL_variablez00) =
									((BgL_variablez00_bglt) (((BgL_varz00_bglt)
												COBJECT(((BgL_varz00_bglt)
														BgL_duplicated1110z00_1804)))->BgL_variablez00)),
									BUNSPEC);
								BgL_uvaluez00_1787 = ((BgL_nodez00_bglt) BgL_new1108z00_1805);
							}
						else
							{	/* Coerce/convert.scm 131 */
								BgL_uvaluez00_1787 = BgL_valuez00_54;
							}
					}
					{	/* Coerce/convert.scm 131 */
						BgL_nodez00_bglt BgL_resz00_1788;

						{	/* Coerce/convert.scm 136 */
							obj_t BgL_arg1588z00_1791;

							{	/* Coerce/convert.scm 136 */
								obj_t BgL_arg1589z00_1792;

								{	/* Coerce/convert.scm 136 */
									obj_t BgL_arg1592z00_1793;
									obj_t BgL_arg1593z00_1794;

									{	/* Coerce/convert.scm 136 */
										obj_t BgL_arg1597z00_1795;

										{	/* Coerce/convert.scm 136 */
											obj_t BgL_arg1599z00_1796;
											obj_t BgL_arg1604z00_1797;

											{	/* Coerce/convert.scm 136 */
												obj_t BgL_arg1605z00_1798;

												{	/* Coerce/convert.scm 136 */
													obj_t BgL_arg1606z00_1799;

													{	/* Coerce/convert.scm 136 */
														obj_t BgL_arg1611z00_1800;
														obj_t BgL_arg1612z00_1801;

														{	/* Coerce/convert.scm 136 */
															obj_t BgL_res1999z00_2351;

															{	/* Coerce/convert.scm 136 */
																obj_t BgL_arg1466z00_2350;

																BgL_arg1466z00_2350 =
																	SYMBOL_TO_STRING(BgL_auxz00_1786);
																BgL_res1999z00_2351 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_2350);
															}
															BgL_arg1611z00_1800 = BgL_res1999z00_2351;
														}
														{	/* Coerce/convert.scm 136 */
															obj_t BgL_res2000z00_2354;

															{	/* Coerce/convert.scm 136 */
																obj_t BgL_symbolz00_2352;

																BgL_symbolz00_2352 = CNST_TABLE_REF(((long) 6));
																{	/* Coerce/convert.scm 136 */
																	obj_t BgL_arg1466z00_2353;

																	BgL_arg1466z00_2353 =
																		SYMBOL_TO_STRING(BgL_symbolz00_2352);
																	BgL_res2000z00_2354 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_2353);
															}}
															BgL_arg1612z00_1801 = BgL_res2000z00_2354;
														}
														BgL_arg1606z00_1799 =
															string_append(BgL_arg1611z00_1800,
															BgL_arg1612z00_1801);
													}
													BgL_arg1605z00_1798 =
														bstring_to_symbol(BgL_arg1606z00_1799);
												}
												BgL_arg1599z00_1796 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg1605z00_1798);
											}
											BgL_arg1604z00_1797 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
											BgL_arg1597z00_1795 =
												MAKE_YOUNG_PAIR(BgL_arg1599z00_1796,
												BgL_arg1604z00_1797);
										}
										BgL_arg1592z00_1793 =
											MAKE_YOUNG_PAIR(BgL_arg1597z00_1795, BNIL);
									}
									BgL_arg1593z00_1794 =
										MAKE_YOUNG_PAIR
										(BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00
										(BgL_locz00_52, BgL_tiz00_53, BgL_auxz00_1786), BNIL);
									BgL_arg1589z00_1792 =
										MAKE_YOUNG_PAIR(BgL_arg1592z00_1793, BgL_arg1593z00_1794);
								}
								BgL_arg1588z00_1791 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1589z00_1792);
							}
							BgL_resz00_1788 =
								BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
								(BgL_arg1588z00_1791, BgL_locz00_52);
						}
						{	/* Coerce/convert.scm 135 */

							{	/* Coerce/convert.scm 140 */
								obj_t BgL_arg1582z00_1789;

								{	/* Coerce/convert.scm 140 */
									obj_t BgL_pairz00_2358;

									BgL_pairz00_2358 =
										(((BgL_letzd2varzd2_bglt) COBJECT(
												((BgL_letzd2varzd2_bglt) BgL_resz00_1788)))->
										BgL_bindingsz00);
									BgL_arg1582z00_1789 = CAR(BgL_pairz00_2358);
								}
								{	/* Coerce/convert.scm 140 */
									obj_t BgL_auxz00_2758;
									obj_t BgL_tmpz00_2756;

									BgL_auxz00_2758 = ((obj_t) BgL_uvaluez00_1787);
									BgL_tmpz00_2756 = ((obj_t) BgL_arg1582z00_1789);
									SET_CDR(BgL_tmpz00_2756, BgL_auxz00_2758);
							}}
							return ((obj_t) BgL_resz00_1788);
						}
					}
				}
			}
		}

	}



/* &runtime-type-error */
	obj_t BGl_z62runtimezd2typezd2errorz62zzcoerce_convertz00(obj_t
		BgL_envz00_2577, obj_t BgL_locz00_2578, obj_t BgL_tiz00_2579,
		obj_t BgL_valuez00_2580)
	{
		{	/* Coerce/convert.scm 128 */
			return
				BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(BgL_locz00_2578,
				BgL_tiz00_2579, ((BgL_nodez00_bglt) BgL_valuez00_2580));
		}

	}



/* convert-error */
	obj_t BGl_convertzd2errorzd2zzcoerce_convertz00(BgL_typez00_bglt
		BgL_fromz00_55, BgL_typez00_bglt BgL_toz00_56, obj_t BgL_locz00_57,
		BgL_nodez00_bglt BgL_nodez00_58)
	{
		{	/* Coerce/convert.scm 150 */
			{	/* Coerce/convert.scm 154 */
				bool_t BgL_test2071z00_2764;

				if ((((obj_t) BgL_toz00_56) == BGl_za2objza2z00zztype_cachez00))
					{	/* Coerce/convert.scm 154 */
						BgL_test2071z00_2764 = ((bool_t) 0);
					}
				else
					{	/* Coerce/convert.scm 154 */
						BgL_test2071z00_2764 =
							BGl_subzd2typezf3z21zztype_envz00(BgL_toz00_56,
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
					}
				if (BgL_test2071z00_2764)
					{	/* Coerce/convert.scm 155 */
						obj_t BgL_nodez00_1811;

						BgL_nodez00_1811 =
							BGl_runtimezd2typezd2errorz00zzcoerce_convertz00(BgL_locz00_57,
							(((BgL_typez00_bglt) COBJECT(BgL_toz00_56))->BgL_idz00),
							BgL_nodez00_58);
						{	/* Coerce/convert.scm 156 */
							obj_t BgL_arg1627z00_1812;

							BgL_arg1627z00_1812 = BGl_currentzd2functionzd2zztools_errorz00();
							{	/* Coerce/convert.scm 108 */
								obj_t BgL_arg1489z00_2361;

								{	/* Coerce/convert.scm 108 */
									obj_t BgL_arg1493z00_2362;
									obj_t BgL_arg1495z00_2363;

									BgL_arg1493z00_2362 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_toz00_56));
									BgL_arg1495z00_2363 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_fromz00_55));
									BgL_arg1489z00_2361 =
										BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
										(BGl_string2042z00zzcoerce_convertz00, BgL_arg1493z00_2362,
										BgL_arg1495z00_2363);
								}
								BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_57,
									BgL_arg1627z00_1812, BGl_string2043z00zzcoerce_convertz00,
									BgL_arg1489z00_2361);
							}
						}
						BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
							((BgL_nodez00_bglt) BgL_nodez00_1811));
						return
							((obj_t)
							BGl_coercez12z12zzcoerce_coercez00(
								((BgL_nodez00_bglt) BgL_nodez00_1811), BUNSPEC, BgL_fromz00_55,
								((bool_t) 0)));
					}
				else
					{	/* Coerce/convert.scm 159 */
						bool_t BgL_test2073z00_2784;

						{	/* Coerce/convert.scm 159 */
							bool_t BgL_res2002z00_2364;

							BgL_res2002z00_2364 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_toz00_56), BGl_tclassz00zzobject_classz00);
							BgL_test2073z00_2784 = BgL_res2002z00_2364;
						}
						if (BgL_test2073z00_2784)
							{	/* Coerce/convert.scm 160 */
								obj_t BgL_nodez00_1815;

								BgL_nodez00_1815 =
									BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
									(BgL_locz00_57,
									(((BgL_typez00_bglt) COBJECT(BgL_toz00_56))->BgL_idz00),
									BgL_nodez00_58);
								{	/* Coerce/convert.scm 161 */
									obj_t BgL_arg1634z00_1816;

									BgL_arg1634z00_1816 =
										BGl_currentzd2functionzd2zztools_errorz00();
									{	/* Coerce/convert.scm 108 */
										obj_t BgL_arg1489z00_2366;

										{	/* Coerce/convert.scm 108 */
											obj_t BgL_arg1493z00_2367;
											obj_t BgL_arg1495z00_2368;

											BgL_arg1493z00_2367 =
												BGl_shapez00zztools_shapez00(((obj_t) BgL_toz00_56));
											BgL_arg1495z00_2368 =
												BGl_shapez00zztools_shapez00(((obj_t) BgL_fromz00_55));
											BgL_arg1489z00_2366 =
												BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
												(BGl_string2042z00zzcoerce_convertz00,
												BgL_arg1493z00_2367, BgL_arg1495z00_2368);
										}
										BGl_userzd2warningzf2locationz20zztools_errorz00
											(BgL_locz00_57, BgL_arg1634z00_1816,
											BGl_string2043z00zzcoerce_convertz00,
											BgL_arg1489z00_2366);
									}
								}
								BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
									((BgL_nodez00_bglt) BgL_nodez00_1815));
								return
									((obj_t)
									BGl_coercez12z12zzcoerce_coercez00(
										((BgL_nodez00_bglt) BgL_nodez00_1815), BUNSPEC,
										BgL_fromz00_55, ((bool_t) 0)));
							}
						else
							{	/* Coerce/convert.scm 159 */
								if (CBOOL(BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00))
									{	/* Coerce/convert.scm 233 */
										obj_t BgL_arg1640z00_1818;

										BgL_arg1640z00_1818 =
											BGl_currentzd2functionzd2zztools_errorz00();
										{	/* Coerce/convert.scm 97 */
											obj_t BgL_arg1474z00_2369;

											{	/* Coerce/convert.scm 97 */
												obj_t BgL_arg1476z00_2370;
												obj_t BgL_arg1477z00_2371;

												BgL_arg1476z00_2370 =
													BGl_shapez00zztools_shapez00(((obj_t) BgL_toz00_56));
												BgL_arg1477z00_2371 =
													BGl_shapez00zztools_shapez00(
													((obj_t) BgL_fromz00_55));
												BgL_arg1474z00_2369 =
													BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
													(BGl_string2042z00zzcoerce_convertz00,
													BgL_arg1476z00_2370, BgL_arg1477z00_2371);
											}
											return
												BGl_userzd2errorzf2locationz20zztools_errorz00
												(BgL_locz00_57, BgL_arg1640z00_1818,
												BGl_string2043z00zzcoerce_convertz00,
												BgL_arg1474z00_2369, BNIL);
										}
									}
								else
									{	/* Coerce/convert.scm 166 */
										bool_t BgL_test2075z00_2810;

										if (
											(((obj_t) BgL_toz00_56) ==
												BGl_za2intza2z00zztype_cachez00))
											{	/* Coerce/convert.scm 166 */
												BgL_test2075z00_2810 = ((bool_t) 1);
											}
										else
											{	/* Coerce/convert.scm 166 */
												if (
													(((obj_t) BgL_toz00_56) ==
														BGl_za2longza2z00zztype_cachez00))
													{	/* Coerce/convert.scm 166 */
														BgL_test2075z00_2810 = ((bool_t) 1);
													}
												else
													{	/* Coerce/convert.scm 166 */
														if (
															(((obj_t) BgL_toz00_56) ==
																BGl_za2elongza2z00zztype_cachez00))
															{	/* Coerce/convert.scm 167 */
																BgL_test2075z00_2810 = ((bool_t) 1);
															}
														else
															{	/* Coerce/convert.scm 167 */
																if (
																	(((obj_t) BgL_toz00_56) ==
																		BGl_za2llongza2z00zztype_cachez00))
																	{	/* Coerce/convert.scm 168 */
																		BgL_test2075z00_2810 = ((bool_t) 1);
																	}
																else
																	{	/* Coerce/convert.scm 168 */
																		if (
																			(((obj_t) BgL_toz00_56) ==
																				BGl_za2int8za2z00zztype_cachez00))
																			{	/* Coerce/convert.scm 169 */
																				BgL_test2075z00_2810 = ((bool_t) 1);
																			}
																		else
																			{	/* Coerce/convert.scm 169 */
																				if (
																					(((obj_t) BgL_toz00_56) ==
																						BGl_za2uint8za2z00zztype_cachez00))
																					{	/* Coerce/convert.scm 170 */
																						BgL_test2075z00_2810 = ((bool_t) 1);
																					}
																				else
																					{	/* Coerce/convert.scm 170 */
																						if (
																							(((obj_t) BgL_toz00_56) ==
																								BGl_za2int16za2z00zztype_cachez00))
																							{	/* Coerce/convert.scm 171 */
																								BgL_test2075z00_2810 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Coerce/convert.scm 171 */
																								if (
																									(((obj_t) BgL_toz00_56) ==
																										BGl_za2uint16za2z00zztype_cachez00))
																									{	/* Coerce/convert.scm 172 */
																										BgL_test2075z00_2810 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Coerce/convert.scm 172 */
																										if (
																											(((obj_t) BgL_toz00_56) ==
																												BGl_za2int32za2z00zztype_cachez00))
																											{	/* Coerce/convert.scm 173 */
																												BgL_test2075z00_2810 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Coerce/convert.scm 173 */
																												if (
																													(((obj_t)
																															BgL_toz00_56) ==
																														BGl_za2uint32za2z00zztype_cachez00))
																													{	/* Coerce/convert.scm 174 */
																														BgL_test2075z00_2810
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Coerce/convert.scm 174 */
																														if (
																															(((obj_t)
																																	BgL_toz00_56)
																																==
																																BGl_za2int64za2z00zztype_cachez00))
																															{	/* Coerce/convert.scm 175 */
																																BgL_test2075z00_2810
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Coerce/convert.scm 175 */
																																BgL_test2075z00_2810
																																	=
																																	(((obj_t)
																																		BgL_toz00_56)
																																	==
																																	BGl_za2uint64za2z00zztype_cachez00);
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
										if (BgL_test2075z00_2810)
											{	/* Coerce/convert.scm 177 */
												obj_t BgL_nodez00_1831;

												BgL_nodez00_1831 =
													BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
													(BgL_locz00_57,
													(((BgL_typez00_bglt) COBJECT(BgL_toz00_56))->
														BgL_idz00), BgL_nodez00_58);
												{	/* Coerce/convert.scm 178 */
													obj_t BgL_arg1662z00_1832;

													BgL_arg1662z00_1832 =
														BGl_currentzd2functionzd2zztools_errorz00();
													{	/* Coerce/convert.scm 108 */
														obj_t BgL_arg1489z00_2374;

														{	/* Coerce/convert.scm 108 */
															obj_t BgL_arg1493z00_2375;
															obj_t BgL_arg1495z00_2376;

															BgL_arg1493z00_2375 =
																BGl_shapez00zztools_shapez00(
																((obj_t) BgL_toz00_56));
															BgL_arg1495z00_2376 =
																BGl_shapez00zztools_shapez00(
																((obj_t) BgL_fromz00_55));
															BgL_arg1489z00_2374 =
																BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																(BGl_string2042z00zzcoerce_convertz00,
																BgL_arg1493z00_2375, BgL_arg1495z00_2376);
														}
														BGl_userzd2warningzf2locationz20zztools_errorz00
															(BgL_locz00_57, BgL_arg1662z00_1832,
															BGl_string2043z00zzcoerce_convertz00,
															BgL_arg1489z00_2374);
													}
												}
												BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
													((BgL_nodez00_bglt) BgL_nodez00_1831));
												{	/* Coerce/convert.scm 180 */
													BgL_sequencez00_bglt BgL_new1114z00_1833;

													{	/* Coerce/convert.scm 180 */
														BgL_sequencez00_bglt BgL_new1113z00_1841;

														BgL_new1113z00_1841 =
															((BgL_sequencez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_sequencez00_bgl))));
														{	/* Coerce/convert.scm 180 */
															long BgL_arg1672z00_1842;

															{	/* Coerce/convert.scm 180 */
																long BgL_res2003z00_2378;

																BgL_res2003z00_2378 =
																	BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
																BgL_arg1672z00_1842 = BgL_res2003z00_2378;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1113z00_1841),
																BgL_arg1672z00_1842);
														}
														{	/* Coerce/convert.scm 180 */
															BgL_objectz00_bglt BgL_tmpz00_2861;

															BgL_tmpz00_2861 =
																((BgL_objectz00_bglt) BgL_new1113z00_1841);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2861, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1113z00_1841);
														BgL_new1114z00_1833 = BgL_new1113z00_1841;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1114z00_1833)))->
															BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1114z00_1833)))->BgL_typez00) =
														((BgL_typez00_bglt) BgL_toz00_56), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1114z00_1833)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1114z00_1833)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													{
														obj_t BgL_auxz00_2874;

														{	/* Coerce/convert.scm 183 */
															BgL_nodez00_bglt BgL_arg1663z00_1834;
															BgL_literalz00_bglt BgL_arg1664z00_1835;

															BgL_arg1663z00_1834 =
																BGl_coercez12z12zzcoerce_coercez00(
																((BgL_nodez00_bglt) BgL_nodez00_1831), BUNSPEC,
																BgL_fromz00_55, ((bool_t) 0));
															{	/* Coerce/convert.scm 184 */
																BgL_literalz00_bglt BgL_new1117z00_1838;

																{	/* Coerce/convert.scm 184 */
																	BgL_literalz00_bglt BgL_new1116z00_1839;

																	BgL_new1116z00_1839 =
																		((BgL_literalz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_literalz00_bgl))));
																	{	/* Coerce/convert.scm 184 */
																		long BgL_arg1669z00_1840;

																		{	/* Coerce/convert.scm 184 */
																			long BgL_res2004z00_2383;

																			{	/* Coerce/convert.scm 184 */
																				obj_t BgL_classz00_2382;

																				BgL_classz00_2382 =
																					BGl_literalz00zzast_nodez00;
																				BgL_res2004z00_2383 =
																					BGL_CLASS_INDEX(BgL_classz00_2382);
																			}
																			BgL_arg1669z00_1840 = BgL_res2004z00_2383;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1116z00_1839),
																			BgL_arg1669z00_1840);
																	}
																	{	/* Coerce/convert.scm 184 */
																		BgL_objectz00_bglt BgL_tmpz00_2881;

																		BgL_tmpz00_2881 =
																			((BgL_objectz00_bglt)
																			BgL_new1116z00_1839);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2881,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1116z00_1839);
																	BgL_new1117z00_1838 = BgL_new1116z00_1839;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1117z00_1838)))->BgL_locz00) =
																	((obj_t) BFALSE), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1117z00_1838)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_toz00_56), BUNSPEC);
																((((BgL_atomz00_bglt)
																			COBJECT(((BgL_atomz00_bglt)
																					BgL_new1117z00_1838)))->
																		BgL_valuez00) =
																	((obj_t) BINT(((long) 0))), BUNSPEC);
																BgL_arg1664z00_1835 = BgL_new1117z00_1838;
															}
															{	/* Coerce/convert.scm 182 */
																obj_t BgL_list1665z00_1836;

																{	/* Coerce/convert.scm 182 */
																	obj_t BgL_arg1667z00_1837;

																	BgL_arg1667z00_1837 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1664z00_1835), BNIL);
																	BgL_list1665z00_1836 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1663z00_1834),
																		BgL_arg1667z00_1837);
																}
																BgL_auxz00_2874 = BgL_list1665z00_1836;
														}}
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1114z00_1833))->BgL_nodesz00) =
															((obj_t) BgL_auxz00_2874), BUNSPEC);
													}
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1114z00_1833))->BgL_unsafez00) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1114z00_1833))->BgL_metaz00) =
														((obj_t) BNIL), BUNSPEC);
													return ((obj_t) BgL_new1114z00_1833);
												}
											}
										else
											{	/* Coerce/convert.scm 166 */
												if (
													(((obj_t) BgL_toz00_56) ==
														BGl_za2boolza2z00zztype_cachez00))
													{	/* Coerce/convert.scm 186 */
														obj_t BgL_nodez00_1845;

														BgL_nodez00_1845 =
															BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
															(BgL_locz00_57,
															(((BgL_typez00_bglt) COBJECT(BgL_toz00_56))->
																BgL_idz00), BgL_nodez00_58);
														{	/* Coerce/convert.scm 187 */
															obj_t BgL_arg1686z00_1846;

															BgL_arg1686z00_1846 =
																BGl_currentzd2functionzd2zztools_errorz00();
															{	/* Coerce/convert.scm 108 */
																obj_t BgL_arg1489z00_2389;

																{	/* Coerce/convert.scm 108 */
																	obj_t BgL_arg1493z00_2390;
																	obj_t BgL_arg1495z00_2391;

																	BgL_arg1493z00_2390 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_toz00_56));
																	BgL_arg1495z00_2391 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_fromz00_55));
																	BgL_arg1489z00_2389 =
																		BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																		(BGl_string2042z00zzcoerce_convertz00,
																		BgL_arg1493z00_2390, BgL_arg1495z00_2391);
																}
																BGl_userzd2warningzf2locationz20zztools_errorz00
																	(BgL_locz00_57, BgL_arg1686z00_1846,
																	BGl_string2043z00zzcoerce_convertz00,
																	BgL_arg1489z00_2389);
															}
														}
														BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
															((BgL_nodez00_bglt) BgL_nodez00_1845));
														{	/* Coerce/convert.scm 189 */
															BgL_sequencez00_bglt BgL_new1119z00_1847;

															{	/* Coerce/convert.scm 189 */
																BgL_sequencez00_bglt BgL_new1118z00_1855;

																BgL_new1118z00_1855 =
																	((BgL_sequencez00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_sequencez00_bgl))));
																{	/* Coerce/convert.scm 189 */
																	long BgL_arg1696z00_1856;

																	{	/* Coerce/convert.scm 189 */
																		long BgL_res2006z00_2393;

																		BgL_res2006z00_2393 =
																			BGL_CLASS_INDEX
																			(BGl_sequencez00zzast_nodez00);
																		BgL_arg1696z00_1856 = BgL_res2006z00_2393;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1118z00_1855),
																		BgL_arg1696z00_1856);
																}
																{	/* Coerce/convert.scm 189 */
																	BgL_objectz00_bglt BgL_tmpz00_2918;

																	BgL_tmpz00_2918 =
																		((BgL_objectz00_bglt) BgL_new1118z00_1855);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2918,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1118z00_1855);
																BgL_new1119z00_1847 = BgL_new1118z00_1855;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1119z00_1847)))->BgL_locz00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1119z00_1847)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_toz00_56), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1119z00_1847)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1119z00_1847)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															{
																obj_t BgL_auxz00_2931;

																{	/* Coerce/convert.scm 192 */
																	BgL_nodez00_bglt BgL_arg1687z00_1848;
																	BgL_literalz00_bglt BgL_arg1688z00_1849;

																	BgL_arg1687z00_1848 =
																		BGl_coercez12z12zzcoerce_coercez00(
																		((BgL_nodez00_bglt) BgL_nodez00_1845),
																		BUNSPEC, BgL_fromz00_55, ((bool_t) 0));
																	{	/* Coerce/convert.scm 193 */
																		BgL_literalz00_bglt BgL_new1121z00_1852;

																		{	/* Coerce/convert.scm 193 */
																			BgL_literalz00_bglt BgL_new1120z00_1853;

																			BgL_new1120z00_1853 =
																				((BgL_literalz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_literalz00_bgl))));
																			{	/* Coerce/convert.scm 193 */
																				long BgL_arg1695z00_1854;

																				{	/* Coerce/convert.scm 193 */
																					long BgL_res2007z00_2398;

																					{	/* Coerce/convert.scm 193 */
																						obj_t BgL_classz00_2397;

																						BgL_classz00_2397 =
																							BGl_literalz00zzast_nodez00;
																						BgL_res2007z00_2398 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2397);
																					}
																					BgL_arg1695z00_1854 =
																						BgL_res2007z00_2398;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1120z00_1853),
																					BgL_arg1695z00_1854);
																			}
																			{	/* Coerce/convert.scm 193 */
																				BgL_objectz00_bglt BgL_tmpz00_2938;

																				BgL_tmpz00_2938 =
																					((BgL_objectz00_bglt)
																					BgL_new1120z00_1853);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2938,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1120z00_1853);
																			BgL_new1121z00_1852 = BgL_new1120z00_1853;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1121z00_1852)))->
																				BgL_locz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1121z00_1852)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_toz00_56),
																			BUNSPEC);
																		((((BgL_atomz00_bglt)
																					COBJECT(((BgL_atomz00_bglt)
																							BgL_new1121z00_1852)))->
																				BgL_valuez00) =
																			((obj_t) BINT(((long) 0))), BUNSPEC);
																		BgL_arg1688z00_1849 = BgL_new1121z00_1852;
																	}
																	{	/* Coerce/convert.scm 191 */
																		obj_t BgL_list1689z00_1850;

																		{	/* Coerce/convert.scm 191 */
																			obj_t BgL_arg1692z00_1851;

																			BgL_arg1692z00_1851 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1688z00_1849), BNIL);
																			BgL_list1689z00_1850 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1687z00_1848),
																				BgL_arg1692z00_1851);
																		}
																		BgL_auxz00_2931 = BgL_list1689z00_1850;
																}}
																((((BgL_sequencez00_bglt)
																			COBJECT(BgL_new1119z00_1847))->
																		BgL_nodesz00) =
																	((obj_t) BgL_auxz00_2931), BUNSPEC);
															}
															((((BgL_sequencez00_bglt)
																		COBJECT(BgL_new1119z00_1847))->
																	BgL_unsafez00) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
															((((BgL_sequencez00_bglt)
																		COBJECT(BgL_new1119z00_1847))->
																	BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
															return ((obj_t) BgL_new1119z00_1847);
														}
													}
												else
													{	/* Coerce/convert.scm 185 */
														if (
															(((obj_t) BgL_toz00_56) ==
																BGl_za2realza2z00zztype_cachez00))
															{	/* Coerce/convert.scm 195 */
																obj_t BgL_nodez00_1859;

																BgL_nodez00_1859 =
																	BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
																	(BgL_locz00_57,
																	(((BgL_typez00_bglt) COBJECT(BgL_toz00_56))->
																		BgL_idz00), BgL_nodez00_58);
																{	/* Coerce/convert.scm 196 */
																	obj_t BgL_arg1704z00_1860;

																	BgL_arg1704z00_1860 =
																		BGl_currentzd2functionzd2zztools_errorz00();
																	{	/* Coerce/convert.scm 108 */
																		obj_t BgL_arg1489z00_2404;

																		{	/* Coerce/convert.scm 108 */
																			obj_t BgL_arg1493z00_2405;
																			obj_t BgL_arg1495z00_2406;

																			BgL_arg1493z00_2405 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_toz00_56));
																			BgL_arg1495z00_2406 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_fromz00_55));
																			BgL_arg1489z00_2404 =
																				BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																				(BGl_string2042z00zzcoerce_convertz00,
																				BgL_arg1493z00_2405,
																				BgL_arg1495z00_2406);
																		}
																		BGl_userzd2warningzf2locationz20zztools_errorz00
																			(BgL_locz00_57, BgL_arg1704z00_1860,
																			BGl_string2043z00zzcoerce_convertz00,
																			BgL_arg1489z00_2404);
																	}
																}
																BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
																	((BgL_nodez00_bglt) BgL_nodez00_1859));
																{	/* Coerce/convert.scm 198 */
																	BgL_sequencez00_bglt BgL_new1123z00_1861;

																	{	/* Coerce/convert.scm 198 */
																		BgL_sequencez00_bglt BgL_new1122z00_1869;

																		BgL_new1122z00_1869 =
																			((BgL_sequencez00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_sequencez00_bgl))));
																		{	/* Coerce/convert.scm 198 */
																			long BgL_arg1719z00_1870;

																			{	/* Coerce/convert.scm 198 */
																				long BgL_res2009z00_2408;

																				BgL_res2009z00_2408 =
																					BGL_CLASS_INDEX
																					(BGl_sequencez00zzast_nodez00);
																				BgL_arg1719z00_1870 =
																					BgL_res2009z00_2408;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1122z00_1869),
																				BgL_arg1719z00_1870);
																		}
																		{	/* Coerce/convert.scm 198 */
																			BgL_objectz00_bglt BgL_tmpz00_2975;

																			BgL_tmpz00_2975 =
																				((BgL_objectz00_bglt)
																				BgL_new1122z00_1869);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2975,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1122z00_1869);
																		BgL_new1123z00_1861 = BgL_new1122z00_1869;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1123z00_1861)))->
																			BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1123z00_1861)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_toz00_56), BUNSPEC);
																	((((BgL_nodezf2effectzf2_bglt)
																				COBJECT(((BgL_nodezf2effectzf2_bglt)
																						BgL_new1123z00_1861)))->
																			BgL_sidezd2effectzd2) =
																		((obj_t) BUNSPEC), BUNSPEC);
																	((((BgL_nodezf2effectzf2_bglt)
																				COBJECT(((BgL_nodezf2effectzf2_bglt)
																						BgL_new1123z00_1861)))->
																			BgL_keyz00) =
																		((obj_t) BINT(((long) -1))), BUNSPEC);
																	{
																		obj_t BgL_auxz00_2988;

																		{	/* Coerce/convert.scm 201 */
																			BgL_nodez00_bglt BgL_arg1707z00_1862;
																			BgL_literalz00_bglt BgL_arg1708z00_1863;

																			BgL_arg1707z00_1862 =
																				BGl_coercez12z12zzcoerce_coercez00(
																				((BgL_nodez00_bglt) BgL_nodez00_1859),
																				BUNSPEC, BgL_fromz00_55, ((bool_t) 0));
																			{	/* Coerce/convert.scm 202 */
																				BgL_literalz00_bglt BgL_new1126z00_1866;

																				{	/* Coerce/convert.scm 202 */
																					BgL_literalz00_bglt
																						BgL_new1125z00_1867;
																					BgL_new1125z00_1867 =
																						((BgL_literalz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_literalz00_bgl))));
																					{	/* Coerce/convert.scm 202 */
																						long BgL_arg1712z00_1868;

																						{	/* Coerce/convert.scm 202 */
																							long BgL_res2010z00_2413;

																							{	/* Coerce/convert.scm 202 */
																								obj_t BgL_classz00_2412;

																								BgL_classz00_2412 =
																									BGl_literalz00zzast_nodez00;
																								BgL_res2010z00_2413 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2412);
																							}
																							BgL_arg1712z00_1868 =
																								BgL_res2010z00_2413;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1125z00_1867),
																							BgL_arg1712z00_1868);
																					}
																					{	/* Coerce/convert.scm 202 */
																						BgL_objectz00_bglt BgL_tmpz00_2995;

																						BgL_tmpz00_2995 =
																							((BgL_objectz00_bglt)
																							BgL_new1125z00_1867);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_2995, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1125z00_1867);
																					BgL_new1126z00_1866 =
																						BgL_new1125z00_1867;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1126z00_1866)))->
																						BgL_locz00) =
																					((obj_t) BFALSE), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1126z00_1866)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) BgL_toz00_56),
																					BUNSPEC);
																				((((BgL_atomz00_bglt)
																							COBJECT(((BgL_atomz00_bglt)
																									BgL_new1126z00_1866)))->
																						BgL_valuez00) =
																					((obj_t)
																						BGL_REAL_CNST
																						(BGl_real2044z00zzcoerce_convertz00)),
																					BUNSPEC);
																				BgL_arg1708z00_1863 =
																					BgL_new1126z00_1866;
																			}
																			{	/* Coerce/convert.scm 200 */
																				obj_t BgL_list1709z00_1864;

																				{	/* Coerce/convert.scm 200 */
																					obj_t BgL_arg1711z00_1865;

																					BgL_arg1711z00_1865 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg1708z00_1863),
																						BNIL);
																					BgL_list1709z00_1864 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg1707z00_1862),
																						BgL_arg1711z00_1865);
																				}
																				BgL_auxz00_2988 = BgL_list1709z00_1864;
																		}}
																		((((BgL_sequencez00_bglt)
																					COBJECT(BgL_new1123z00_1861))->
																				BgL_nodesz00) =
																			((obj_t) BgL_auxz00_2988), BUNSPEC);
																	}
																	((((BgL_sequencez00_bglt)
																				COBJECT(BgL_new1123z00_1861))->
																			BgL_unsafez00) =
																		((bool_t) ((bool_t) 0)), BUNSPEC);
																	((((BgL_sequencez00_bglt)
																				COBJECT(BgL_new1123z00_1861))->
																			BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
																	return ((obj_t) BgL_new1123z00_1861);
																}
															}
														else
															{	/* Coerce/convert.scm 194 */
																if (
																	(((obj_t) BgL_toz00_56) ==
																		BGl_za2charza2z00zztype_cachez00))
																	{	/* Coerce/convert.scm 204 */
																		obj_t BgL_nodez00_1873;

																		BgL_nodez00_1873 =
																			BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
																			(BgL_locz00_57,
																			(((BgL_typez00_bglt)
																					COBJECT(BgL_toz00_56))->BgL_idz00),
																			BgL_nodez00_58);
																		{	/* Coerce/convert.scm 205 */
																			obj_t BgL_arg1727z00_1874;

																			BgL_arg1727z00_1874 =
																				BGl_currentzd2functionzd2zztools_errorz00
																				();
																			{	/* Coerce/convert.scm 108 */
																				obj_t BgL_arg1489z00_2419;

																				{	/* Coerce/convert.scm 108 */
																					obj_t BgL_arg1493z00_2420;
																					obj_t BgL_arg1495z00_2421;

																					BgL_arg1493z00_2420 =
																						BGl_shapez00zztools_shapez00(
																						((obj_t) BgL_toz00_56));
																					BgL_arg1495z00_2421 =
																						BGl_shapez00zztools_shapez00(
																						((obj_t) BgL_fromz00_55));
																					BgL_arg1489z00_2419 =
																						BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																						(BGl_string2042z00zzcoerce_convertz00,
																						BgL_arg1493z00_2420,
																						BgL_arg1495z00_2421);
																				}
																				BGl_userzd2warningzf2locationz20zztools_errorz00
																					(BgL_locz00_57, BgL_arg1727z00_1874,
																					BGl_string2043z00zzcoerce_convertz00,
																					BgL_arg1489z00_2419);
																			}
																		}
																		BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
																			((BgL_nodez00_bglt) BgL_nodez00_1873));
																		{	/* Coerce/convert.scm 207 */
																			BgL_sequencez00_bglt BgL_new1130z00_1875;

																			{	/* Coerce/convert.scm 207 */
																				BgL_sequencez00_bglt
																					BgL_new1128z00_1883;
																				BgL_new1128z00_1883 =
																					((BgL_sequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_sequencez00_bgl))));
																				{	/* Coerce/convert.scm 207 */
																					long BgL_arg1733z00_1884;

																					{	/* Coerce/convert.scm 207 */
																						long BgL_res2012z00_2423;

																						BgL_res2012z00_2423 =
																							BGL_CLASS_INDEX
																							(BGl_sequencez00zzast_nodez00);
																						BgL_arg1733z00_1884 =
																							BgL_res2012z00_2423;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1128z00_1883),
																						BgL_arg1733z00_1884);
																				}
																				{	/* Coerce/convert.scm 207 */
																					BgL_objectz00_bglt BgL_tmpz00_3031;

																					BgL_tmpz00_3031 =
																						((BgL_objectz00_bglt)
																						BgL_new1128z00_1883);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_3031, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1128z00_1883);
																				BgL_new1130z00_1875 =
																					BgL_new1128z00_1883;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1130z00_1875)))->
																					BgL_locz00) =
																				((obj_t) BFALSE), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1130z00_1875)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_toz00_56),
																				BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1130z00_1875)))->
																					BgL_sidezd2effectzd2) =
																				((obj_t) BUNSPEC), BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1130z00_1875)))->
																					BgL_keyz00) =
																				((obj_t) BINT(((long) -1))), BUNSPEC);
																			{
																				obj_t BgL_auxz00_3044;

																				{	/* Coerce/convert.scm 210 */
																					BgL_nodez00_bglt BgL_arg1728z00_1876;
																					BgL_literalz00_bglt
																						BgL_arg1729z00_1877;
																					BgL_arg1728z00_1876 =
																						BGl_coercez12z12zzcoerce_coercez00((
																							(BgL_nodez00_bglt)
																							BgL_nodez00_1873), BUNSPEC,
																						BgL_fromz00_55, ((bool_t) 0));
																					{	/* Coerce/convert.scm 211 */
																						BgL_literalz00_bglt
																							BgL_new1133z00_1880;
																						{	/* Coerce/convert.scm 211 */
																							BgL_literalz00_bglt
																								BgL_new1131z00_1881;
																							BgL_new1131z00_1881 =
																								((BgL_literalz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_literalz00_bgl))));
																							{	/* Coerce/convert.scm 211 */
																								long BgL_arg1732z00_1882;

																								{	/* Coerce/convert.scm 211 */
																									long BgL_res2013z00_2428;

																									{	/* Coerce/convert.scm 211 */
																										obj_t BgL_classz00_2427;

																										BgL_classz00_2427 =
																											BGl_literalz00zzast_nodez00;
																										BgL_res2013z00_2428 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_2427);
																									}
																									BgL_arg1732z00_1882 =
																										BgL_res2013z00_2428;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1131z00_1881),
																									BgL_arg1732z00_1882);
																							}
																							{	/* Coerce/convert.scm 211 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_3051;
																								BgL_tmpz00_3051 =
																									((BgL_objectz00_bglt)
																									BgL_new1131z00_1881);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_3051, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1131z00_1881);
																							BgL_new1133z00_1880 =
																								BgL_new1131z00_1881;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1133z00_1880)))->
																								BgL_locz00) =
																							((obj_t) BFALSE), BUNSPEC);
																						((((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_new1133z00_1880)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) BgL_toz00_56),
																							BUNSPEC);
																						((((BgL_atomz00_bglt)
																									COBJECT(((BgL_atomz00_bglt)
																											BgL_new1133z00_1880)))->
																								BgL_valuez00) =
																							((obj_t) BCHAR(((unsigned char)
																										'\000'))), BUNSPEC);
																						BgL_arg1729z00_1877 =
																							BgL_new1133z00_1880;
																					}
																					{	/* Coerce/convert.scm 209 */
																						obj_t BgL_list1730z00_1878;

																						{	/* Coerce/convert.scm 209 */
																							obj_t BgL_arg1731z00_1879;

																							BgL_arg1731z00_1879 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg1729z00_1877),
																								BNIL);
																							BgL_list1730z00_1878 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg1728z00_1876),
																								BgL_arg1731z00_1879);
																						}
																						BgL_auxz00_3044 =
																							BgL_list1730z00_1878;
																				}}
																				((((BgL_sequencez00_bglt)
																							COBJECT(BgL_new1130z00_1875))->
																						BgL_nodesz00) =
																					((obj_t) BgL_auxz00_3044), BUNSPEC);
																			}
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1130z00_1875))->
																					BgL_unsafez00) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1130z00_1875))->
																					BgL_metaz00) =
																				((obj_t) BNIL), BUNSPEC);
																			return ((obj_t) BgL_new1130z00_1875);
																		}
																	}
																else
																	{	/* Coerce/convert.scm 203 */
																		if (
																			(((obj_t) BgL_toz00_56) ==
																				BGl_za2scharza2z00zztype_cachez00))
																			{	/* Coerce/convert.scm 213 */
																				obj_t BgL_nodez00_1887;

																				BgL_nodez00_1887 =
																					BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
																					(BgL_locz00_57,
																					(((BgL_typez00_bglt)
																							COBJECT(BgL_toz00_56))->
																						BgL_idz00), BgL_nodez00_58);
																				{	/* Coerce/convert.scm 214 */
																					obj_t BgL_arg1740z00_1888;

																					BgL_arg1740z00_1888 =
																						BGl_currentzd2functionzd2zztools_errorz00
																						();
																					{	/* Coerce/convert.scm 108 */
																						obj_t BgL_arg1489z00_2434;

																						{	/* Coerce/convert.scm 108 */
																							obj_t BgL_arg1493z00_2435;
																							obj_t BgL_arg1495z00_2436;

																							BgL_arg1493z00_2435 =
																								BGl_shapez00zztools_shapez00(
																								((obj_t) BgL_toz00_56));
																							BgL_arg1495z00_2436 =
																								BGl_shapez00zztools_shapez00(
																								((obj_t) BgL_fromz00_55));
																							BgL_arg1489z00_2434 =
																								BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																								(BGl_string2042z00zzcoerce_convertz00,
																								BgL_arg1493z00_2435,
																								BgL_arg1495z00_2436);
																						}
																						BGl_userzd2warningzf2locationz20zztools_errorz00
																							(BgL_locz00_57,
																							BgL_arg1740z00_1888,
																							BGl_string2043z00zzcoerce_convertz00,
																							BgL_arg1489z00_2434);
																					}
																				}
																				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
																					((BgL_nodez00_bglt)
																						BgL_nodez00_1887));
																				{	/* Coerce/convert.scm 216 */
																					BgL_sequencez00_bglt
																						BgL_new1135z00_1889;
																					{	/* Coerce/convert.scm 216 */
																						BgL_sequencez00_bglt
																							BgL_new1134z00_1897;
																						BgL_new1134z00_1897 =
																							((BgL_sequencez00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_sequencez00_bgl))));
																						{	/* Coerce/convert.scm 216 */
																							long BgL_arg1746z00_1898;

																							{	/* Coerce/convert.scm 216 */
																								long BgL_res2015z00_2438;

																								BgL_res2015z00_2438 =
																									BGL_CLASS_INDEX
																									(BGl_sequencez00zzast_nodez00);
																								BgL_arg1746z00_1898 =
																									BgL_res2015z00_2438;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1134z00_1897),
																								BgL_arg1746z00_1898);
																						}
																						{	/* Coerce/convert.scm 216 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_3088;
																							BgL_tmpz00_3088 =
																								((BgL_objectz00_bglt)
																								BgL_new1134z00_1897);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_3088, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1134z00_1897);
																						BgL_new1135z00_1889 =
																							BgL_new1134z00_1897;
																					}
																					((((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_new1135z00_1889)))->
																							BgL_locz00) =
																						((obj_t) BFALSE), BUNSPEC);
																					((((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_new1135z00_1889)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) (
																								(BgL_typez00_bglt)
																								BGl_za2charza2z00zztype_cachez00)),
																						BUNSPEC);
																					((((BgL_nodezf2effectzf2_bglt)
																								COBJECT((
																										(BgL_nodezf2effectzf2_bglt)
																										BgL_new1135z00_1889)))->
																							BgL_sidezd2effectzd2) =
																						((obj_t) BUNSPEC), BUNSPEC);
																					((((BgL_nodezf2effectzf2_bglt)
																								COBJECT((
																										(BgL_nodezf2effectzf2_bglt)
																										BgL_new1135z00_1889)))->
																							BgL_keyz00) =
																						((obj_t) BINT(((long) -1))),
																						BUNSPEC);
																					{
																						obj_t BgL_auxz00_3102;

																						{	/* Coerce/convert.scm 219 */
																							BgL_nodez00_bglt
																								BgL_arg1741z00_1890;
																							BgL_literalz00_bglt
																								BgL_arg1742z00_1891;
																							BgL_arg1741z00_1890 =
																								BGl_coercez12z12zzcoerce_coercez00
																								(((BgL_nodez00_bglt)
																									BgL_nodez00_1887), BUNSPEC,
																								BgL_fromz00_55, ((bool_t) 0));
																							{	/* Coerce/convert.scm 220 */
																								BgL_literalz00_bglt
																									BgL_new1137z00_1894;
																								{	/* Coerce/convert.scm 220 */
																									BgL_literalz00_bglt
																										BgL_new1136z00_1895;
																									BgL_new1136z00_1895 =
																										((BgL_literalz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_literalz00_bgl))));
																									{	/* Coerce/convert.scm 220 */
																										long BgL_arg1745z00_1896;

																										{	/* Coerce/convert.scm 220 */
																											long BgL_res2016z00_2443;

																											{	/* Coerce/convert.scm 220 */
																												obj_t BgL_classz00_2442;

																												BgL_classz00_2442 =
																													BGl_literalz00zzast_nodez00;
																												BgL_res2016z00_2443 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_2442);
																											}
																											BgL_arg1745z00_1896 =
																												BgL_res2016z00_2443;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1136z00_1895),
																											BgL_arg1745z00_1896);
																									}
																									{	/* Coerce/convert.scm 220 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_3109;
																										BgL_tmpz00_3109 =
																											((BgL_objectz00_bglt)
																											BgL_new1136z00_1895);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_3109, BFALSE);
																									}
																									((BgL_objectz00_bglt)
																										BgL_new1136z00_1895);
																									BgL_new1137z00_1894 =
																										BgL_new1136z00_1895;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1137z00_1894)))->
																										BgL_locz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_new1137z00_1894)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt) (
																											(BgL_typez00_bglt)
																											BGl_za2charza2z00zztype_cachez00)),
																									BUNSPEC);
																								((((BgL_atomz00_bglt)
																											COBJECT((
																													(BgL_atomz00_bglt)
																													BgL_new1137z00_1894)))->
																										BgL_valuez00) =
																									((obj_t) BCHAR(((unsigned
																													char) '\000'))),
																									BUNSPEC);
																								BgL_arg1742z00_1891 =
																									BgL_new1137z00_1894;
																							}
																							{	/* Coerce/convert.scm 218 */
																								obj_t BgL_list1743z00_1892;

																								{	/* Coerce/convert.scm 218 */
																									obj_t BgL_arg1744z00_1893;

																									BgL_arg1744z00_1893 =
																										MAKE_YOUNG_PAIR(
																										((obj_t)
																											BgL_arg1742z00_1891),
																										BNIL);
																									BgL_list1743z00_1892 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_arg1741z00_1890),
																										BgL_arg1744z00_1893);
																								}
																								BgL_auxz00_3102 =
																									BgL_list1743z00_1892;
																						}}
																						((((BgL_sequencez00_bglt)
																									COBJECT
																									(BgL_new1135z00_1889))->
																								BgL_nodesz00) =
																							((obj_t) BgL_auxz00_3102),
																							BUNSPEC);
																					}
																					((((BgL_sequencez00_bglt)
																								COBJECT(BgL_new1135z00_1889))->
																							BgL_unsafez00) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					((((BgL_sequencez00_bglt)
																								COBJECT(BgL_new1135z00_1889))->
																							BgL_metaz00) =
																						((obj_t) BNIL), BUNSPEC);
																					return ((obj_t) BgL_new1135z00_1889);
																				}
																			}
																		else
																			{	/* Coerce/convert.scm 212 */
																				if (
																					(((obj_t) BgL_toz00_56) ==
																						BGl_za2stringza2z00zztype_cachez00))
																					{	/* Coerce/convert.scm 222 */
																						obj_t BgL_nodez00_1901;

																						BgL_nodez00_1901 =
																							BGl_runtimezd2typezd2errorz00zzcoerce_convertz00
																							(BgL_locz00_57,
																							(((BgL_typez00_bglt)
																									COBJECT(BgL_toz00_56))->
																								BgL_idz00), BgL_nodez00_58);
																						{	/* Coerce/convert.scm 223 */
																							obj_t BgL_arg1754z00_1902;

																							BgL_arg1754z00_1902 =
																								BGl_currentzd2functionzd2zztools_errorz00
																								();
																							{	/* Coerce/convert.scm 108 */
																								obj_t BgL_arg1489z00_2449;

																								{	/* Coerce/convert.scm 108 */
																									obj_t BgL_arg1493z00_2450;
																									obj_t BgL_arg1495z00_2451;

																									BgL_arg1493z00_2450 =
																										BGl_shapez00zztools_shapez00
																										(((obj_t) BgL_toz00_56));
																									BgL_arg1495z00_2451 =
																										BGl_shapez00zztools_shapez00
																										(((obj_t) BgL_fromz00_55));
																									BgL_arg1489z00_2449 =
																										BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																										(BGl_string2042z00zzcoerce_convertz00,
																										BgL_arg1493z00_2450,
																										BgL_arg1495z00_2451);
																								}
																								BGl_userzd2warningzf2locationz20zztools_errorz00
																									(BgL_locz00_57,
																									BgL_arg1754z00_1902,
																									BGl_string2043z00zzcoerce_convertz00,
																									BgL_arg1489z00_2449);
																							}
																						}
																						BGl_lvtypezd2nodez12zc0zzast_lvtypez00
																							(((BgL_nodez00_bglt)
																								BgL_nodez00_1901));
																						{	/* Coerce/convert.scm 225 */
																							BgL_sequencez00_bglt
																								BgL_new1139z00_1903;
																							{	/* Coerce/convert.scm 225 */
																								BgL_sequencez00_bglt
																									BgL_new1138z00_1911;
																								BgL_new1138z00_1911 =
																									((BgL_sequencez00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_sequencez00_bgl))));
																								{	/* Coerce/convert.scm 225 */
																									long BgL_arg1761z00_1912;

																									{	/* Coerce/convert.scm 225 */
																										long BgL_res2018z00_2453;

																										BgL_res2018z00_2453 =
																											BGL_CLASS_INDEX
																											(BGl_sequencez00zzast_nodez00);
																										BgL_arg1761z00_1912 =
																											BgL_res2018z00_2453;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1138z00_1911),
																										BgL_arg1761z00_1912);
																								}
																								{	/* Coerce/convert.scm 225 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_3147;
																									BgL_tmpz00_3147 =
																										((BgL_objectz00_bglt)
																										BgL_new1138z00_1911);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_3147, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1138z00_1911);
																								BgL_new1139z00_1903 =
																									BgL_new1138z00_1911;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1139z00_1903)))->
																									BgL_locz00) =
																								((obj_t) BFALSE), BUNSPEC);
																							((((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_new1139z00_1903)))->
																									BgL_typez00) =
																								((BgL_typez00_bglt)
																									BgL_toz00_56), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1139z00_1903)))->
																									BgL_sidezd2effectzd2) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1139z00_1903)))->
																									BgL_keyz00) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_3160;

																								{	/* Coerce/convert.scm 228 */
																									BgL_nodez00_bglt
																										BgL_arg1755z00_1904;
																									BgL_literalz00_bglt
																										BgL_arg1756z00_1905;
																									BgL_arg1755z00_1904 =
																										BGl_coercez12z12zzcoerce_coercez00
																										(((BgL_nodez00_bglt)
																											BgL_nodez00_1901),
																										BUNSPEC, BgL_fromz00_55,
																										((bool_t) 0));
																									{	/* Coerce/convert.scm 229 */
																										BgL_literalz00_bglt
																											BgL_new1141z00_1908;
																										{	/* Coerce/convert.scm 229 */
																											BgL_literalz00_bglt
																												BgL_new1140z00_1909;
																											BgL_new1140z00_1909 =
																												((BgL_literalz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_literalz00_bgl))));
																											{	/* Coerce/convert.scm 229 */
																												long
																													BgL_arg1760z00_1910;
																												{	/* Coerce/convert.scm 229 */
																													long
																														BgL_res2019z00_2458;
																													{	/* Coerce/convert.scm 229 */
																														obj_t
																															BgL_classz00_2457;
																														BgL_classz00_2457 =
																															BGl_literalz00zzast_nodez00;
																														BgL_res2019z00_2458
																															=
																															BGL_CLASS_INDEX
																															(BgL_classz00_2457);
																													}
																													BgL_arg1760z00_1910 =
																														BgL_res2019z00_2458;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1140z00_1909),
																													BgL_arg1760z00_1910);
																											}
																											{	/* Coerce/convert.scm 229 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_3167;
																												BgL_tmpz00_3167 =
																													((BgL_objectz00_bglt)
																													BgL_new1140z00_1909);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_3167,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1140z00_1909);
																											BgL_new1141z00_1908 =
																												BgL_new1140z00_1909;
																										}
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1141z00_1908)))->
																												BgL_locz00) =
																											((obj_t) BFALSE),
																											BUNSPEC);
																										((((BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															BgL_new1141z00_1908)))->
																												BgL_typez00) =
																											((BgL_typez00_bglt)
																												BgL_toz00_56), BUNSPEC);
																										((((BgL_atomz00_bglt)
																													COBJECT((
																															(BgL_atomz00_bglt)
																															BgL_new1141z00_1908)))->
																												BgL_valuez00) =
																											((obj_t)
																												BGl_string2042z00zzcoerce_convertz00),
																											BUNSPEC);
																										BgL_arg1756z00_1905 =
																											BgL_new1141z00_1908;
																									}
																									{	/* Coerce/convert.scm 227 */
																										obj_t BgL_list1757z00_1906;

																										{	/* Coerce/convert.scm 227 */
																											obj_t BgL_arg1759z00_1907;

																											BgL_arg1759z00_1907 =
																												MAKE_YOUNG_PAIR(
																												((obj_t)
																													BgL_arg1756z00_1905),
																												BNIL);
																											BgL_list1757z00_1906 =
																												MAKE_YOUNG_PAIR(((obj_t)
																													BgL_arg1755z00_1904),
																												BgL_arg1759z00_1907);
																										}
																										BgL_auxz00_3160 =
																											BgL_list1757z00_1906;
																								}}
																								((((BgL_sequencez00_bglt)
																											COBJECT
																											(BgL_new1139z00_1903))->
																										BgL_nodesz00) =
																									((obj_t) BgL_auxz00_3160),
																									BUNSPEC);
																							}
																							((((BgL_sequencez00_bglt)
																										COBJECT
																										(BgL_new1139z00_1903))->
																									BgL_unsafez00) =
																								((bool_t) ((bool_t) 0)),
																								BUNSPEC);
																							((((BgL_sequencez00_bglt)
																										COBJECT
																										(BgL_new1139z00_1903))->
																									BgL_metaz00) =
																								((obj_t) BNIL), BUNSPEC);
																							return ((obj_t)
																								BgL_new1139z00_1903);
																						}
																					}
																				else
																					{	/* Coerce/convert.scm 231 */
																						obj_t BgL_arg1771z00_1914;

																						BgL_arg1771z00_1914 =
																							BGl_currentzd2functionzd2zztools_errorz00
																							();
																						{	/* Coerce/convert.scm 97 */
																							obj_t BgL_arg1474z00_2463;

																							{	/* Coerce/convert.scm 97 */
																								obj_t BgL_arg1476z00_2464;
																								obj_t BgL_arg1477z00_2465;

																								BgL_arg1476z00_2464 =
																									BGl_shapez00zztools_shapez00(
																									((obj_t) BgL_toz00_56));
																								BgL_arg1477z00_2465 =
																									BGl_shapez00zztools_shapez00(
																									((obj_t) BgL_fromz00_55));
																								BgL_arg1474z00_2463 =
																									BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																									(BGl_string2042z00zzcoerce_convertz00,
																									BgL_arg1476z00_2464,
																									BgL_arg1477z00_2465);
																							}
																							return
																								BGl_userzd2errorzf2locationz20zztools_errorz00
																								(BgL_locz00_57,
																								BgL_arg1771z00_1914,
																								BGl_string2043z00zzcoerce_convertz00,
																								BgL_arg1474z00_2463, BNIL);
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



/* convert! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt BgL_nodez00_59,
		BgL_typez00_bglt BgL_fromz00_60, BgL_typez00_bglt BgL_toz00_61,
		bool_t BgL_safez00_62)
	{
		{	/* Coerce/convert.scm 241 */
			if ((((obj_t) BgL_fromz00_60) == ((obj_t) BgL_toz00_61)))
				{	/* Coerce/convert.scm 245 */
					return BgL_nodez00_59;
				}
			else
				{	/* Coerce/convert.scm 247 */
					BgL_typez00_bglt BgL_toz00_1928;
					BgL_typez00_bglt BgL_froz00_1929;

					BgL_toz00_1928 =
						BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_61);
					BgL_froz00_1929 =
						BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_60);
					{	/* Coerce/convert.scm 249 */
						bool_t BgL_test2093z00_3198;

						if ((((obj_t) BgL_froz00_1929) == ((obj_t) BgL_toz00_1928)))
							{	/* Coerce/convert.scm 249 */
								BgL_test2093z00_3198 = ((bool_t) 1);
							}
						else
							{	/* Coerce/convert.scm 249 */
								BgL_test2093z00_3198 =
									(((BgL_typez00_bglt) COBJECT(BgL_froz00_1929))->
									BgL_magiczf3zf3);
							}
						if (BgL_test2093z00_3198)
							{	/* Coerce/convert.scm 249 */
								return BgL_nodez00_59;
							}
						else
							{	/* Coerce/convert.scm 251 */
								obj_t BgL_coercerz00_1932;
								obj_t BgL_locz00_1933;

								BgL_coercerz00_1932 =
									BGl_findzd2coercerzd2zztype_coercionz00(BgL_froz00_1929,
									BgL_toz00_1928);
								BgL_locz00_1933 =
									(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_59))->BgL_locz00);
								{	/* Coerce/convert.scm 253 */
									bool_t BgL_test2095z00_3206;

									if (STRUCTP(BgL_coercerz00_1932))
										{	/* Coerce/convert.scm 253 */
											BgL_test2095z00_3206 =
												(STRUCT_KEY(BgL_coercerz00_1932) ==
												CNST_TABLE_REF(((long) 8)));
										}
									else
										{	/* Coerce/convert.scm 253 */
											BgL_test2095z00_3206 = ((bool_t) 0);
										}
									if (BgL_test2095z00_3206)
										{	/* Coerce/convert.scm 257 */
											obj_t BgL_g1142z00_1935;
											obj_t BgL_g1146z00_1936;

											BgL_g1142z00_1935 =
												STRUCT_REF(BgL_coercerz00_1932, (int) (((long) 2)));
											BgL_g1146z00_1936 =
												STRUCT_REF(BgL_coercerz00_1932, (int) (((long) 3)));
											{
												obj_t BgL_checksz00_1938;
												obj_t BgL_coercesz00_1939;
												BgL_nodez00_bglt BgL_nodez00_1940;

												{
													obj_t BgL_auxz00_3216;

													BgL_checksz00_1938 = BgL_g1142z00_1935;
													BgL_coercesz00_1939 = BgL_g1146z00_1936;
													BgL_nodez00_1940 = BgL_nodez00_59;
												BgL_zc3z04anonymousza31776ze3z87_1941:
													if (NULLP(BgL_checksz00_1938))
														{	/* Coerce/convert.scm 261 */
															if (NULLP(BgL_coercesz00_1939))
																{	/* Coerce/convert.scm 262 */
																	BgL_auxz00_3216 = ((obj_t) BgL_nodez00_1940);
																}
															else
																{	/* Coerce/convert.scm 265 */
																	obj_t BgL_arg1779z00_1944;
																	obj_t BgL_arg1782z00_1945;

																	BgL_arg1779z00_1944 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_fromz00_60));
																	BgL_arg1782z00_1945 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_toz00_1928));
																	BgL_auxz00_3216 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string2045z00zzcoerce_convertz00,
																		BgL_arg1779z00_1944, BgL_arg1782z00_1945);
																}
														}
													else
														{	/* Coerce/convert.scm 261 */
															if (NULLP(BgL_coercesz00_1939))
																{	/* Coerce/convert.scm 269 */
																	obj_t BgL_arg1784z00_1947;
																	obj_t BgL_arg1790z00_1948;

																	BgL_arg1784z00_1947 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_fromz00_60));
																	BgL_arg1790z00_1948 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_toz00_1928));
																	BgL_auxz00_3216 =
																		BGl_internalzd2errorzd2zztools_errorz00
																		(BGl_string2045z00zzcoerce_convertz00,
																		BgL_arg1784z00_1947, BgL_arg1790z00_1948);
																}
															else
																{	/* Coerce/convert.scm 272 */
																	obj_t BgL_arg1796z00_1949;
																	obj_t BgL_arg1798z00_1950;
																	BgL_nodez00_bglt BgL_arg1801z00_1951;

																	BgL_arg1796z00_1949 =
																		CDR(((obj_t) BgL_checksz00_1938));
																	BgL_arg1798z00_1950 =
																		CDR(((obj_t) BgL_coercesz00_1939));
																	{	/* Coerce/convert.scm 274 */
																		obj_t BgL_arg1808z00_1952;
																		obj_t BgL_arg1809z00_1953;
																		obj_t BgL_arg1811z00_1954;
																		obj_t BgL_arg1820z00_1955;

																		{	/* Coerce/convert.scm 274 */
																			obj_t BgL_pairz00_2484;

																			BgL_pairz00_2484 =
																				CAR(((obj_t) BgL_checksz00_1938));
																			BgL_arg1808z00_1952 =
																				CDR(BgL_pairz00_2484);
																		}
																		{	/* Coerce/convert.scm 275 */
																			obj_t BgL_pairz00_2488;

																			BgL_pairz00_2488 =
																				CAR(((obj_t) BgL_coercesz00_1939));
																			BgL_arg1809z00_1953 =
																				CDR(BgL_pairz00_2488);
																		}
																		{	/* Coerce/convert.scm 276 */
																			obj_t BgL_pairz00_2492;

																			BgL_pairz00_2492 =
																				CAR(((obj_t) BgL_checksz00_1938));
																			BgL_arg1811z00_1954 =
																				CAR(BgL_pairz00_2492);
																		}
																		{	/* Coerce/convert.scm 277 */
																			obj_t BgL_pairz00_2496;

																			BgL_pairz00_2496 =
																				CAR(((obj_t) BgL_coercesz00_1939));
																			BgL_arg1820z00_1955 =
																				CAR(BgL_pairz00_2496);
																		}
																		BgL_arg1801z00_1951 =
																			BGl_makezd2onezd2conversionz00zzcoerce_convertz00
																			(BgL_arg1808z00_1952, BgL_arg1809z00_1953,
																			BgL_arg1811z00_1954, BgL_arg1820z00_1955,
																			BgL_nodez00_1940, BgL_safez00_62);
																	}
																	{
																		BgL_nodez00_bglt BgL_nodez00_3253;
																		obj_t BgL_coercesz00_3252;
																		obj_t BgL_checksz00_3251;

																		BgL_checksz00_3251 = BgL_arg1796z00_1949;
																		BgL_coercesz00_3252 = BgL_arg1798z00_1950;
																		BgL_nodez00_3253 = BgL_arg1801z00_1951;
																		BgL_nodez00_1940 = BgL_nodez00_3253;
																		BgL_coercesz00_1939 = BgL_coercesz00_3252;
																		BgL_checksz00_1938 = BgL_checksz00_3251;
																		goto BgL_zc3z04anonymousza31776ze3z87_1941;
																	}
																}
														}
													return ((BgL_nodez00_bglt) BgL_auxz00_3216);
												}
											}
										}
									else
										{	/* Coerce/convert.scm 253 */
											return
												((BgL_nodez00_bglt)
												BGl_convertzd2errorzd2zzcoerce_convertz00
												(BgL_froz00_1929, BgL_toz00_1928, BgL_locz00_1933,
													BgL_nodez00_59));
										}
								}
							}
					}
				}
		}

	}



/* &convert! */
	BgL_nodez00_bglt BGl_z62convertz12z70zzcoerce_convertz00(obj_t
		BgL_envz00_2581, obj_t BgL_nodez00_2582, obj_t BgL_fromz00_2583,
		obj_t BgL_toz00_2584, obj_t BgL_safez00_2585)
	{
		{	/* Coerce/convert.scm 241 */
			return
				BGl_convertz12z12zzcoerce_convertz00(
				((BgL_nodez00_bglt) BgL_nodez00_2582),
				((BgL_typez00_bglt) BgL_fromz00_2583),
				((BgL_typez00_bglt) BgL_toz00_2584), CBOOL(BgL_safez00_2585));
		}

	}



/* make-one-conversion */
	BgL_nodez00_bglt BGl_makezd2onezd2conversionz00zzcoerce_convertz00(obj_t
		BgL_fromz00_63, obj_t BgL_toz00_64, obj_t BgL_checkopz00_65,
		obj_t BgL_coerceopz00_66, BgL_nodez00_bglt BgL_nodez00_67,
		bool_t BgL_safez00_68)
	{
		{	/* Coerce/convert.scm 290 */
			{	/* Coerce/convert.scm 291 */
				bool_t BgL_test2100z00_3262;

				if ((BgL_checkopz00_65 == BTRUE))
					{	/* Coerce/convert.scm 291 */
						BgL_test2100z00_3262 = ((bool_t) 1);
					}
				else
					{	/* Coerce/convert.scm 291 */
						if (BgL_safez00_68)
							{	/* Coerce/convert.scm 291 */
								BgL_test2100z00_3262 = ((bool_t) 0);
							}
						else
							{	/* Coerce/convert.scm 291 */
								BgL_test2100z00_3262 = ((bool_t) 1);
							}
					}
				if (BgL_test2100z00_3262)
					{	/* Coerce/convert.scm 291 */
						return
							BGl_dozd2convertzd2zzcoerce_convertz00(BgL_coerceopz00_66,
							BgL_nodez00_67, ((BgL_typez00_bglt) BgL_fromz00_63));
					}
				else
					{	/* Coerce/convert.scm 291 */
						if (BGl_isazf3zf3zz__objectz00(BgL_fromz00_63,
								BGl_tclassz00zzobject_classz00))
							{	/* Coerce/convert.scm 293 */
								return
									BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00(
									((BgL_typez00_bglt) BgL_fromz00_63), BgL_toz00_64,
									BgL_checkopz00_65, BgL_coerceopz00_66, BgL_nodez00_67);
							}
						else
							{	/* Coerce/convert.scm 293 */
								return
									BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00
									(BgL_fromz00_63, BgL_toz00_64, BgL_checkopz00_65,
									BgL_coerceopz00_66, BgL_nodez00_67);
							}
					}
			}
		}

	}



/* skip-let-var */
	BgL_nodez00_bglt BGl_skipzd2letzd2varz00zzcoerce_convertz00(BgL_nodez00_bglt
		BgL_nodez00_69)
	{
		{	/* Coerce/convert.scm 300 */
		BGl_skipzd2letzd2varz00zzcoerce_convertz00:
			{	/* Coerce/convert.scm 301 */
				bool_t BgL_test2104z00_3273;

				{	/* Coerce/convert.scm 301 */
					bool_t BgL_res2027z00_2498;

					BgL_res2027z00_2498 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_nodez00_69), BGl_letzd2varzd2zzast_nodez00);
					BgL_test2104z00_3273 = BgL_res2027z00_2498;
				}
				if (BgL_test2104z00_3273)
					{	/* Coerce/convert.scm 302 */
						BgL_nodez00_bglt BgL_arg1827z00_1963;

						BgL_arg1827z00_1963 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_69)))->BgL_bodyz00);
						{
							BgL_nodez00_bglt BgL_nodez00_3278;

							BgL_nodez00_3278 = BgL_arg1827z00_1963;
							BgL_nodez00_69 = BgL_nodez00_3278;
							goto BGl_skipzd2letzd2varz00zzcoerce_convertz00;
						}
					}
				else
					{	/* Coerce/convert.scm 301 */
						return BgL_nodez00_69;
					}
			}
		}

	}



/* make-one-type-conversion */
	BgL_nodez00_bglt
		BGl_makezd2onezd2typezd2conversionzd2zzcoerce_convertz00(obj_t
		BgL_fromz00_70, obj_t BgL_toz00_71, obj_t BgL_checkzd2opzd2_72,
		obj_t BgL_coercezd2opzd2_73, BgL_nodez00_bglt BgL_nodez00_74)
	{
		{	/* Coerce/convert.scm 308 */
			{	/* Coerce/convert.scm 311 */
				obj_t BgL_auxz00_1964;

				BgL_auxz00_1964 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 5))));
				{	/* Coerce/convert.scm 311 */
					obj_t BgL_locz00_1965;

					BgL_locz00_1965 =
						(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_74))->BgL_locz00);
					{	/* Coerce/convert.scm 312 */
						BgL_nodez00_bglt BgL_lnodez00_1966;

						{	/* Coerce/convert.scm 320 */
							obj_t BgL_arg1838z00_1980;

							{	/* Coerce/convert.scm 320 */
								obj_t BgL_arg1840z00_1981;

								{	/* Coerce/convert.scm 320 */
									obj_t BgL_arg1841z00_1982;
									obj_t BgL_arg1842z00_1983;

									{	/* Coerce/convert.scm 320 */
										obj_t BgL_arg1845z00_1984;

										{	/* Coerce/convert.scm 320 */
											obj_t BgL_arg1846z00_1985;
											obj_t BgL_arg1847z00_1986;

											{	/* Coerce/convert.scm 320 */
												obj_t BgL_arg1848z00_1987;

												{	/* Coerce/convert.scm 320 */
													obj_t BgL_arg1850z00_1988;

													BgL_arg1850z00_1988 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_fromz00_70)))->
														BgL_idz00);
													BgL_arg1848z00_1987 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_auxz00_1964, BgL_arg1850z00_1988);
												}
												BgL_arg1846z00_1985 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BgL_arg1848z00_1987);
											}
											BgL_arg1847z00_1986 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
											BgL_arg1845z00_1984 =
												MAKE_YOUNG_PAIR(BgL_arg1846z00_1985,
												BgL_arg1847z00_1986);
										}
										BgL_arg1841z00_1982 =
											MAKE_YOUNG_PAIR(BgL_arg1845z00_1984, BNIL);
									}
									{	/* Coerce/convert.scm 322 */
										obj_t BgL_arg1851z00_1989;

										{	/* Coerce/convert.scm 322 */
											obj_t BgL_arg1852z00_1990;

											{	/* Coerce/convert.scm 322 */
												obj_t BgL_arg1853z00_1991;
												obj_t BgL_arg1855z00_1992;

												{	/* Coerce/convert.scm 322 */
													obj_t BgL_arg1856z00_1993;

													BgL_arg1856z00_1993 =
														MAKE_YOUNG_PAIR(BgL_auxz00_1964, BNIL);
													BgL_arg1853z00_1991 =
														MAKE_YOUNG_PAIR(BgL_checkzd2opzd2_72,
														BgL_arg1856z00_1993);
												}
												{	/* Coerce/convert.scm 324 */
													obj_t BgL_arg1857z00_1994;

													{	/* Coerce/convert.scm 324 */
														obj_t BgL_arg1858z00_1995;

														{	/* Coerce/convert.scm 324 */
															obj_t BgL_arg1859z00_1996;

															BgL_arg1859z00_1996 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt) BgL_toz00_71)))->
																BgL_idz00);
															BgL_arg1858z00_1995 =
																BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00
																(BgL_locz00_1965, BgL_arg1859z00_1996,
																BgL_auxz00_1964);
														}
														BgL_arg1857z00_1994 =
															MAKE_YOUNG_PAIR(BgL_arg1858z00_1995, BNIL);
													}
													BgL_arg1855z00_1992 =
														MAKE_YOUNG_PAIR(BgL_auxz00_1964,
														BgL_arg1857z00_1994);
												}
												BgL_arg1852z00_1990 =
													MAKE_YOUNG_PAIR(BgL_arg1853z00_1991,
													BgL_arg1855z00_1992);
											}
											BgL_arg1851z00_1989 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
												BgL_arg1852z00_1990);
										}
										BgL_arg1842z00_1983 =
											MAKE_YOUNG_PAIR(BgL_arg1851z00_1989, BNIL);
									}
									BgL_arg1840z00_1981 =
										MAKE_YOUNG_PAIR(BgL_arg1841z00_1982, BgL_arg1842z00_1983);
								}
								BgL_arg1838z00_1980 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1840z00_1981);
							}
							BgL_lnodez00_1966 =
								BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
								(BgL_arg1838z00_1980, BgL_locz00_1965);
						}
						{	/* Coerce/convert.scm 313 */

							BGl_za2checkza2z00zzcoerce_convertz00 =
								(((long) 1) + BGl_za2checkza2z00zzcoerce_convertz00);
							if (CBOOL(BGl_za2warningzd2typesza2zd2zzengine_paramz00))
								{	/* Coerce/convert.scm 83 */
									BGl_notifyzd2typezd2testz00zzcoerce_convertz00(BgL_fromz00_70,
										BgL_toz00_71, BgL_locz00_1965);
								}
							else
								{	/* Coerce/convert.scm 83 */
									BFALSE;
								}
							BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
								(BgL_lnodez00_1966);
							{	/* Coerce/convert.scm 328 */
								obj_t BgL_varz00_1967;

								{	/* Coerce/convert.scm 328 */
									obj_t BgL_pairz00_2507;

									{	/* Coerce/convert.scm 328 */
										obj_t BgL_pairz00_2506;

										BgL_pairz00_2506 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_lnodez00_1966)))->
											BgL_bindingsz00);
										BgL_pairz00_2507 = CAR(BgL_pairz00_2506);
									}
									BgL_varz00_1967 = CAR(BgL_pairz00_2507);
								}
								{	/* Coerce/convert.scm 328 */
									BgL_nodez00_bglt BgL_coercezd2appzd2_1968;

									{	/* Coerce/convert.scm 330 */
										BgL_varz00_bglt BgL_arg1832z00_1974;

										{	/* Coerce/convert.scm 330 */
											BgL_varz00_bglt BgL_new1148z00_1975;

											{	/* Coerce/convert.scm 331 */
												BgL_varz00_bglt BgL_new1147z00_1976;

												BgL_new1147z00_1976 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Coerce/convert.scm 331 */
													long BgL_arg1833z00_1977;

													{	/* Coerce/convert.scm 331 */
														long BgL_res2029z00_2509;

														BgL_res2029z00_2509 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1833z00_1977 = BgL_res2029z00_2509;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1147z00_1976),
														BgL_arg1833z00_1977);
												}
												BgL_new1148z00_1975 = BgL_new1147z00_1976;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1148z00_1975)))->
													BgL_locz00) = ((obj_t) BgL_locz00_1965), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1148z00_1975)))->BgL_typez00) =
												((BgL_typez00_bglt)
													BGl_strictzd2nodezd2typez00zzast_nodez00((
															(BgL_typez00_bglt) BgL_toz00_71),
														((BgL_typez00_bglt) BgL_fromz00_70))), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1148z00_1975))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_varz00_1967)), BUNSPEC);
											BgL_arg1832z00_1974 = BgL_new1148z00_1975;
										}
										BgL_coercezd2appzd2_1968 =
											BGl_dozd2convertzd2zzcoerce_convertz00
											(BgL_coercezd2opzd2_73,
											((BgL_nodez00_bglt) BgL_arg1832z00_1974),
											((BgL_typez00_bglt) BgL_fromz00_70));
									}
									{	/* Coerce/convert.scm 329 */
										BgL_nodez00_bglt BgL_condnz00_1969;

										BgL_condnz00_1969 =
											BGl_skipzd2letzd2varz00zzcoerce_convertz00
											(BgL_lnodez00_1966);
										{	/* Coerce/convert.scm 335 */

											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_1967))))->
													BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_fromz00_70)), BUNSPEC);
											{	/* Coerce/convert.scm 339 */
												obj_t BgL_arg1828z00_1970;

												{	/* Coerce/convert.scm 339 */
													obj_t BgL_pairz00_2515;

													BgL_pairz00_2515 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_lnodez00_1966)))->
														BgL_bindingsz00);
													BgL_arg1828z00_1970 = CAR(BgL_pairz00_2515);
												}
												{	/* Coerce/convert.scm 339 */
													obj_t BgL_auxz00_3340;
													obj_t BgL_tmpz00_3338;

													BgL_auxz00_3340 = ((obj_t) BgL_nodez00_74);
													BgL_tmpz00_3338 = ((obj_t) BgL_arg1828z00_1970);
													SET_CDR(BgL_tmpz00_3338, BgL_auxz00_3340);
											}}
											((((BgL_nodez00_bglt) COBJECT(BgL_nodez00_74))->
													BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BgL_fromz00_70)), BUNSPEC);
											((((BgL_conditionalz00_bglt)
														COBJECT(((BgL_conditionalz00_bglt)
																BgL_condnz00_1969)))->BgL_truez00) =
												((BgL_nodez00_bglt) BgL_coercezd2appzd2_1968), BUNSPEC);
											{	/* Coerce/convert.scm 343 */
												BgL_nodez00_bglt BgL_arg1830z00_1972;

												{	/* Coerce/convert.scm 343 */
													BgL_nodez00_bglt BgL_arg1831z00_1973;

													BgL_arg1831z00_1973 =
														(((BgL_conditionalz00_bglt) COBJECT(
																((BgL_conditionalz00_bglt)
																	BgL_condnz00_1969)))->BgL_falsez00);
													BgL_arg1830z00_1972 =
														BGl_coercez12z12zzcoerce_coercez00
														(BgL_arg1831z00_1973, BUNSPEC,
														((BgL_typez00_bglt) BgL_fromz00_70), ((bool_t) 0));
												}
												((((BgL_conditionalz00_bglt) COBJECT(
																((BgL_conditionalz00_bglt)
																	BgL_condnz00_1969)))->BgL_falsez00) =
													((BgL_nodez00_bglt) BgL_arg1830z00_1972), BUNSPEC);
											}
											BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_lnodez00_1966);
											return BgL_lnodez00_1966;
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



/* make-one-class-conversion */
	BgL_nodez00_bglt
		BGl_makezd2onezd2classzd2conversionzd2zzcoerce_convertz00(BgL_typez00_bglt
		BgL_fromz00_75, obj_t BgL_toz00_76, obj_t BgL_checkzd2opzd2_77,
		obj_t BgL_coercezd2opzd2_78, BgL_nodez00_bglt BgL_nodez00_79)
	{
		{	/* Coerce/convert.scm 353 */
			{	/* Coerce/convert.scm 354 */
				bool_t BgL_test2106z00_3354;

				if (BGl_isazf3zf3zz__objectz00(BgL_toz00_76,
						BGl_tclassz00zzobject_classz00))
					{	/* Coerce/convert.scm 354 */
						BgL_test2106z00_3354 =
							BGl_typezd2subclasszf3z21zzobject_classz00(
							((BgL_typez00_bglt) BgL_fromz00_75),
							((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_toz00_76)));
					}
				else
					{	/* Coerce/convert.scm 354 */
						BgL_test2106z00_3354 = ((bool_t) 0);
					}
				if (BgL_test2106z00_3354)
					{	/* Coerce/convert.scm 354 */
						return
							BGl_dozd2convertzd2zzcoerce_convertz00(BgL_coercezd2opzd2_78,
							BgL_nodez00_79, ((BgL_typez00_bglt) BgL_fromz00_75));
					}
				else
					{	/* Coerce/convert.scm 356 */
						obj_t BgL_auxz00_2000;

						BgL_auxz00_2000 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 5)));
						{	/* Coerce/convert.scm 356 */
							obj_t BgL_aux2z00_2001;

							BgL_aux2z00_2001 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10)));
							{	/* Coerce/convert.scm 357 */
								obj_t BgL_locz00_2002;

								BgL_locz00_2002 =
									(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_79))->BgL_locz00);
								{	/* Coerce/convert.scm 358 */
									BgL_nodez00_bglt BgL_lnodez00_2003;

									{	/* Coerce/convert.scm 361 */
										obj_t BgL_arg1882z00_2027;

										{	/* Coerce/convert.scm 361 */
											obj_t BgL_arg1883z00_2028;

											{	/* Coerce/convert.scm 361 */
												obj_t BgL_arg1884z00_2029;
												obj_t BgL_arg1885z00_2030;

												{	/* Coerce/convert.scm 361 */
													obj_t BgL_arg1886z00_2031;

													{	/* Coerce/convert.scm 361 */
														obj_t BgL_arg1887z00_2032;
														obj_t BgL_arg1888z00_2033;

														{	/* Coerce/convert.scm 361 */
															obj_t BgL_arg1889z00_2034;

															{	/* Coerce/convert.scm 361 */
																obj_t BgL_arg1891z00_2035;

																{	/* Coerce/convert.scm 361 */
																	obj_t BgL_arg1892z00_2036;
																	obj_t BgL_arg1893z00_2037;

																	{	/* Coerce/convert.scm 361 */
																		obj_t BgL_res2031z00_2528;

																		{	/* Coerce/convert.scm 361 */
																			obj_t BgL_arg1466z00_2527;

																			BgL_arg1466z00_2527 =
																				SYMBOL_TO_STRING(BgL_auxz00_2000);
																			BgL_res2031z00_2528 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_2527);
																		}
																		BgL_arg1892z00_2036 = BgL_res2031z00_2528;
																	}
																	{	/* Coerce/convert.scm 361 */
																		obj_t BgL_res2032z00_2531;

																		{	/* Coerce/convert.scm 361 */
																			obj_t BgL_symbolz00_2529;

																			BgL_symbolz00_2529 =
																				CNST_TABLE_REF(((long) 6));
																			{	/* Coerce/convert.scm 361 */
																				obj_t BgL_arg1466z00_2530;

																				BgL_arg1466z00_2530 =
																					SYMBOL_TO_STRING(BgL_symbolz00_2529);
																				BgL_res2032z00_2531 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1466z00_2530);
																		}}
																		BgL_arg1893z00_2037 = BgL_res2032z00_2531;
																	}
																	BgL_arg1891z00_2035 =
																		string_append(BgL_arg1892z00_2036,
																		BgL_arg1893z00_2037);
																}
																BgL_arg1889z00_2034 =
																	bstring_to_symbol(BgL_arg1891z00_2035);
															}
															BgL_arg1887z00_2032 =
																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																(BgL_arg1889z00_2034);
														}
														BgL_arg1888z00_2033 =
															MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
														BgL_arg1886z00_2031 =
															MAKE_YOUNG_PAIR(BgL_arg1887z00_2032,
															BgL_arg1888z00_2033);
													}
													BgL_arg1884z00_2029 =
														MAKE_YOUNG_PAIR(BgL_arg1886z00_2031, BNIL);
												}
												{	/* Coerce/convert.scm 363 */
													obj_t BgL_arg1895z00_2038;

													{	/* Coerce/convert.scm 363 */
														obj_t BgL_arg1896z00_2039;

														{	/* Coerce/convert.scm 363 */
															obj_t BgL_arg1897z00_2040;
															obj_t BgL_arg1898z00_2041;

															{	/* Coerce/convert.scm 363 */
																obj_t BgL_arg1901z00_2042;

																{	/* Coerce/convert.scm 363 */
																	obj_t BgL_arg1902z00_2043;
																	obj_t BgL_arg1903z00_2044;

																	{	/* Coerce/convert.scm 363 */
																		obj_t BgL_arg1904z00_2045;

																		{	/* Coerce/convert.scm 363 */
																			obj_t BgL_arg1905z00_2046;

																			{	/* Coerce/convert.scm 363 */
																				obj_t BgL_arg1906z00_2047;
																				obj_t BgL_arg1907z00_2048;

																				{	/* Coerce/convert.scm 363 */
																					obj_t BgL_res2034z00_2536;

																					{	/* Coerce/convert.scm 363 */
																						obj_t BgL_arg1466z00_2535;

																						BgL_arg1466z00_2535 =
																							SYMBOL_TO_STRING
																							(BgL_aux2z00_2001);
																						BgL_res2034z00_2536 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_2535);
																					}
																					BgL_arg1906z00_2047 =
																						BgL_res2034z00_2536;
																				}
																				{	/* Coerce/convert.scm 363 */
																					obj_t BgL_res2035z00_2539;

																					{	/* Coerce/convert.scm 363 */
																						obj_t BgL_symbolz00_2537;

																						BgL_symbolz00_2537 =
																							CNST_TABLE_REF(((long) 6));
																						{	/* Coerce/convert.scm 363 */
																							obj_t BgL_arg1466z00_2538;

																							BgL_arg1466z00_2538 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_2537);
																							BgL_res2035z00_2539 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_2538);
																					}}
																					BgL_arg1907z00_2048 =
																						BgL_res2035z00_2539;
																				}
																				BgL_arg1905z00_2046 =
																					string_append(BgL_arg1906z00_2047,
																					BgL_arg1907z00_2048);
																			}
																			BgL_arg1904z00_2045 =
																				bstring_to_symbol(BgL_arg1905z00_2046);
																		}
																		BgL_arg1902z00_2043 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BgL_arg1904z00_2045);
																	}
																	BgL_arg1903z00_2044 =
																		MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																	BgL_arg1901z00_2042 =
																		MAKE_YOUNG_PAIR(BgL_arg1902z00_2043,
																		BgL_arg1903z00_2044);
																}
																BgL_arg1897z00_2040 =
																	MAKE_YOUNG_PAIR(BgL_arg1901z00_2042, BNIL);
															}
															{	/* Coerce/convert.scm 364 */
																obj_t BgL_arg1908z00_2049;

																{	/* Coerce/convert.scm 364 */
																	obj_t BgL_arg1909z00_2050;

																	{	/* Coerce/convert.scm 364 */
																		obj_t BgL_arg1910z00_2051;
																		obj_t BgL_arg1911z00_2052;

																		{	/* Coerce/convert.scm 364 */
																			obj_t BgL_arg1912z00_2053;

																			BgL_arg1912z00_2053 =
																				MAKE_YOUNG_PAIR(BgL_aux2z00_2001, BNIL);
																			BgL_arg1910z00_2051 =
																				MAKE_YOUNG_PAIR(BgL_checkzd2opzd2_77,
																				BgL_arg1912z00_2053);
																		}
																		{	/* Coerce/convert.scm 366 */
																			obj_t BgL_arg1913z00_2054;

																			{	/* Coerce/convert.scm 366 */
																				obj_t BgL_arg1914z00_2055;

																				{	/* Coerce/convert.scm 366 */
																					obj_t BgL_arg1915z00_2056;

																					BgL_arg1915z00_2056 =
																						(((BgL_typez00_bglt) COBJECT(
																								((BgL_typez00_bglt)
																									BgL_toz00_76)))->BgL_idz00);
																					BgL_arg1914z00_2055 =
																						BGl_runtimezd2typezd2errorzf2idzf2zzcoerce_convertz00
																						(BgL_locz00_2002,
																						BgL_arg1915z00_2056,
																						BgL_auxz00_2000);
																				}
																				BgL_arg1913z00_2054 =
																					MAKE_YOUNG_PAIR(BgL_arg1914z00_2055,
																					BNIL);
																			}
																			BgL_arg1911z00_2052 =
																				MAKE_YOUNG_PAIR(BgL_auxz00_2000,
																				BgL_arg1913z00_2054);
																		}
																		BgL_arg1909z00_2050 =
																			MAKE_YOUNG_PAIR(BgL_arg1910z00_2051,
																			BgL_arg1911z00_2052);
																	}
																	BgL_arg1908z00_2049 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																		BgL_arg1909z00_2050);
																}
																BgL_arg1898z00_2041 =
																	MAKE_YOUNG_PAIR(BgL_arg1908z00_2049, BNIL);
															}
															BgL_arg1896z00_2039 =
																MAKE_YOUNG_PAIR(BgL_arg1897z00_2040,
																BgL_arg1898z00_2041);
														}
														BgL_arg1895z00_2038 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
															BgL_arg1896z00_2039);
													}
													BgL_arg1885z00_2030 =
														MAKE_YOUNG_PAIR(BgL_arg1895z00_2038, BNIL);
												}
												BgL_arg1883z00_2028 =
													MAKE_YOUNG_PAIR(BgL_arg1884z00_2029,
													BgL_arg1885z00_2030);
											}
											BgL_arg1882z00_2027 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1883z00_2028);
										}
										BgL_lnodez00_2003 =
											BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
											(BgL_arg1882z00_2027, BgL_locz00_2002);
									}
									{	/* Coerce/convert.scm 359 */

										BGl_za2checkza2z00zzcoerce_convertz00 =
											(((long) 1) + BGl_za2checkza2z00zzcoerce_convertz00);
										if (CBOOL(BGl_za2warningzd2typesza2zd2zzengine_paramz00))
											{	/* Coerce/convert.scm 83 */
												BGl_notifyzd2typezd2testz00zzcoerce_convertz00(
													((obj_t) BgL_fromz00_75), BgL_toz00_76,
													BgL_locz00_2002);
											}
										else
											{	/* Coerce/convert.scm 83 */
												BFALSE;
											}
										BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
											(BgL_lnodez00_2003);
										{	/* Coerce/convert.scm 370 */
											obj_t BgL_varz00_2004;

											{	/* Coerce/convert.scm 370 */
												obj_t BgL_pairz00_2547;

												{	/* Coerce/convert.scm 370 */
													obj_t BgL_pairz00_2546;

													BgL_pairz00_2546 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_lnodez00_2003)))->
														BgL_bindingsz00);
													BgL_pairz00_2547 = CAR(BgL_pairz00_2546);
												}
												BgL_varz00_2004 = CAR(BgL_pairz00_2547);
											}
											{	/* Coerce/convert.scm 370 */
												BgL_nodez00_bglt BgL_coercezd2appzd2_2005;

												{	/* Coerce/convert.scm 372 */
													BgL_varz00_bglt BgL_arg1877z00_2021;

													{	/* Coerce/convert.scm 372 */
														BgL_varz00_bglt BgL_new1150z00_2022;

														{	/* Coerce/convert.scm 373 */
															BgL_varz00_bglt BgL_new1149z00_2023;

															BgL_new1149z00_2023 =
																((BgL_varz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_varz00_bgl))));
															{	/* Coerce/convert.scm 373 */
																long BgL_arg1878z00_2024;

																{	/* Coerce/convert.scm 373 */
																	long BgL_res2038z00_2549;

																	BgL_res2038z00_2549 =
																		BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																	BgL_arg1878z00_2024 = BgL_res2038z00_2549;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1149z00_2023),
																	BgL_arg1878z00_2024);
															}
															BgL_new1150z00_2022 = BgL_new1149z00_2023;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1150z00_2022)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_2002), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1150z00_2022)))->BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BgL_fromz00_75)), BUNSPEC);
														((((BgL_varz00_bglt) COBJECT(BgL_new1150z00_2022))->
																BgL_variablez00) =
															((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																	BgL_varz00_2004)), BUNSPEC);
														BgL_arg1877z00_2021 = BgL_new1150z00_2022;
													}
													BgL_coercezd2appzd2_2005 =
														BGl_dozd2convertzd2zzcoerce_convertz00
														(BgL_coercezd2opzd2_78,
														((BgL_nodez00_bglt) BgL_arg1877z00_2021),
														((BgL_typez00_bglt) BgL_fromz00_75));
												}
												{	/* Coerce/convert.scm 371 */
													BgL_nodez00_bglt BgL_condnz00_2006;

													BgL_condnz00_2006 =
														BGl_skipzd2letzd2varz00zzcoerce_convertz00
														(BgL_lnodez00_2003);
													{	/* Coerce/convert.scm 377 */

														((((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_varz00_2004))))->
																BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BgL_fromz00_75)), BUNSPEC);
														{	/* Coerce/convert.scm 381 */
															obj_t BgL_arg1865z00_2007;

															{	/* Coerce/convert.scm 381 */
																obj_t BgL_pairz00_2555;

																BgL_pairz00_2555 =
																	(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_lnodez00_2003)))->BgL_bindingsz00);
																BgL_arg1865z00_2007 = CAR(BgL_pairz00_2555);
															}
															{	/* Coerce/convert.scm 381 */
																obj_t BgL_auxz00_3443;
																obj_t BgL_tmpz00_3441;

																BgL_auxz00_3443 = ((obj_t) BgL_nodez00_79);
																BgL_tmpz00_3441 = ((obj_t) BgL_arg1865z00_2007);
																SET_CDR(BgL_tmpz00_3441, BgL_auxz00_3443);
														}}
														{	/* Coerce/convert.scm 382 */
															obj_t BgL_binding2z00_2009;

															{	/* Coerce/convert.scm 382 */
																obj_t BgL_pairz00_2559;

																BgL_pairz00_2559 =
																	(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_lnodez00_2003)))->
																					BgL_bodyz00))))->BgL_bindingsz00);
																BgL_binding2z00_2009 = CAR(BgL_pairz00_2559);
															}
															{	/* Coerce/convert.scm 383 */
																BgL_castz00_bglt BgL_arg1868z00_2010;

																{	/* Coerce/convert.scm 383 */
																	BgL_castz00_bglt BgL_new1152z00_2011;

																	{	/* Coerce/convert.scm 384 */
																		BgL_castz00_bglt BgL_new1151z00_2015;

																		BgL_new1151z00_2015 =
																			((BgL_castz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_castz00_bgl))));
																		{	/* Coerce/convert.scm 384 */
																			long BgL_arg1871z00_2016;

																			{	/* Coerce/convert.scm 384 */
																				long BgL_res2039z00_2561;

																				BgL_res2039z00_2561 =
																					BGL_CLASS_INDEX
																					(BGl_castz00zzast_nodez00);
																				BgL_arg1871z00_2016 =
																					BgL_res2039z00_2561;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1151z00_2015),
																				BgL_arg1871z00_2016);
																		}
																		{	/* Coerce/convert.scm 384 */
																			BgL_objectz00_bglt BgL_tmpz00_3455;

																			BgL_tmpz00_3455 =
																				((BgL_objectz00_bglt)
																				BgL_new1151z00_2015);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3455,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1151z00_2015);
																		BgL_new1152z00_2011 = BgL_new1151z00_2015;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1152z00_2011)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_2002), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1152z00_2011)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00)),
																		BUNSPEC);
																	{
																		BgL_nodez00_bglt BgL_auxz00_3464;

																		{	/* Coerce/convert.scm 386 */
																			BgL_varz00_bglt BgL_new1154z00_2012;

																			{	/* Coerce/convert.scm 387 */
																				BgL_varz00_bglt BgL_new1153z00_2013;

																				BgL_new1153z00_2013 =
																					((BgL_varz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_varz00_bgl))));
																				{	/* Coerce/convert.scm 387 */
																					long BgL_arg1870z00_2014;

																					{	/* Coerce/convert.scm 387 */
																						long BgL_res2040z00_2566;

																						{	/* Coerce/convert.scm 387 */
																							obj_t BgL_classz00_2565;

																							BgL_classz00_2565 =
																								BGl_varz00zzast_nodez00;
																							BgL_res2040z00_2566 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2565);
																						}
																						BgL_arg1870z00_2014 =
																							BgL_res2040z00_2566;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1153z00_2013),
																						BgL_arg1870z00_2014);
																				}
																				BgL_new1154z00_2012 =
																					BgL_new1153z00_2013;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1154z00_2012)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_2002), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1154z00_2012)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) ((BgL_typez00_bglt)
																						BgL_fromz00_75)), BUNSPEC);
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_new1154z00_2012))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) (
																						(BgL_variablez00_bglt)
																						BgL_varz00_2004)), BUNSPEC);
																			BgL_auxz00_3464 =
																				((BgL_nodez00_bglt)
																				BgL_new1154z00_2012);
																		}
																		((((BgL_castz00_bglt)
																					COBJECT(BgL_new1152z00_2011))->
																				BgL_argz00) =
																			((BgL_nodez00_bglt) BgL_auxz00_3464),
																			BUNSPEC);
																	}
																	BgL_arg1868z00_2010 = BgL_new1152z00_2011;
																}
																{	/* Coerce/convert.scm 383 */
																	obj_t BgL_auxz00_3480;
																	obj_t BgL_tmpz00_3478;

																	BgL_auxz00_3480 =
																		((obj_t) BgL_arg1868z00_2010);
																	BgL_tmpz00_3478 =
																		((obj_t) BgL_binding2z00_2009);
																	SET_CDR(BgL_tmpz00_3478, BgL_auxz00_3480);
														}}}
														((((BgL_conditionalz00_bglt) COBJECT(
																		((BgL_conditionalz00_bglt)
																			BgL_condnz00_2006)))->BgL_truez00) =
															((BgL_nodez00_bglt) BgL_coercezd2appzd2_2005),
															BUNSPEC);
														{	/* Coerce/convert.scm 392 */
															BgL_nodez00_bglt BgL_arg1874z00_2019;

															{	/* Coerce/convert.scm 392 */
																BgL_nodez00_bglt BgL_arg1876z00_2020;

																BgL_arg1876z00_2020 =
																	(((BgL_conditionalz00_bglt) COBJECT(
																			((BgL_conditionalz00_bglt)
																				BgL_condnz00_2006)))->BgL_falsez00);
																BgL_arg1874z00_2019 =
																	BGl_coercez12z12zzcoerce_coercez00
																	(BgL_arg1876z00_2020, BUNSPEC,
																	((BgL_typez00_bglt) BgL_fromz00_75),
																	((bool_t) 0));
															}
															((((BgL_conditionalz00_bglt) COBJECT(
																			((BgL_conditionalz00_bglt)
																				BgL_condnz00_2006)))->BgL_falsez00) =
																((BgL_nodez00_bglt) BgL_arg1874z00_2019),
																BUNSPEC);
														}
														BGl_lvtypezd2nodez12zc0zzast_lvtypez00
															(BgL_lnodez00_2003);
														return BgL_lnodez00_2003;
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



/* do-convert */
	BgL_nodez00_bglt BGl_dozd2convertzd2zzcoerce_convertz00(obj_t
		BgL_coercezd2opzd2_80, BgL_nodez00_bglt BgL_nodez00_81,
		BgL_typez00_bglt BgL_fromz00_82)
	{
		{	/* Coerce/convert.scm 402 */
			if ((BgL_coercezd2opzd2_80 == BTRUE))
				{	/* Coerce/convert.scm 405 */
					return BgL_nodez00_81;
				}
			else
				{	/* Coerce/convert.scm 407 */
					BgL_nodez00_bglt BgL_nnodez00_2059;

					{	/* Coerce/convert.scm 407 */
						obj_t BgL_arg1917z00_2060;
						obj_t BgL_arg1918z00_2061;

						{	/* Coerce/convert.scm 407 */
							obj_t BgL_arg1919z00_2062;

							BgL_arg1919z00_2062 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_nodez00_81), BNIL);
							BgL_arg1917z00_2060 =
								MAKE_YOUNG_PAIR(BgL_coercezd2opzd2_80, BgL_arg1919z00_2062);
						}
						BgL_arg1918z00_2061 =
							(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_81))->BgL_locz00);
						BgL_nnodez00_2059 =
							BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
							(BgL_arg1917z00_2060, BgL_arg1918z00_2061);
					}
					BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nnodez00_2059);
					BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nnodez00_2059);
					return BgL_nnodez00_2059;
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_convertz00()
	{
		{	/* Coerce/convert.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 348216754),
				BSTRING_TO_STRING(BGl_string2046z00zzcoerce_convertz00));
		}

	}

#ifdef __cplusplus
}
#endif
