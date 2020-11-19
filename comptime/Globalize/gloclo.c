/*===========================================================================*/
/*   (Globalize/gloclo.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/gloclo.scm) */
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


	static BgL_appz00_bglt
		BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75(obj_t,
		BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_globalzd2closurez75();
	BGL_EXPORTED_DECL obj_t
		BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t
		BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_globalzd2closurez75();
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static BgL_globalz00_bglt
		BGl_z62makezd2globalzd2closurez62zzglobaliza7e_globalzd2closurez75(obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT bool_t symbol_exists_p(char *);
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	extern obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_globalzd2closurez75();
	extern int BGl_funzd2optionalzd2arityz00zzast_varz00(BgL_funz00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t
		BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		BgL_globalz00_bglt);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t
		BGl_globaliza7edzd2typezd2idza7zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	static obj_t
		BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t
		BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_globalzd2closurez75();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t
		BGl_glocloz00zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		BgL_localz00_bglt, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t
		BGl_z62foreignzd2closureszb0zzglobaliza7e_globalzd2closurez75(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
	static obj_t
		BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
	extern obj_t BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_defaultzd2typezd2zzglobaliza7e_globalzd2closurez75();
	static BgL_globalz00_bglt
		BGl_z62globalzd2closurezb0zzglobaliza7e_globalzd2closurez75(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_foreignzd2closureszd2envz00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_za762foreignza7d2clo1780z00,
		BGl_z62foreignzd2closureszb0zzglobaliza7e_globalzd2closurez75, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzd2closurezd2envzd2zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_za762makeza7d2global1781z00,
		BGl_z62makezd2globalzd2closurez62zzglobaliza7e_globalzd2closurez75, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2closurezd2envz00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_za762globalza7d2clos1782z00,
		BGl_z62globalzd2closurezb0zzglobaliza7e_globalzd2closurez75, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string1771z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string1771za700za7za7g1783za7, "make-global-closure", 19);
	      DEFINE_STRING(BGl_string1772z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string1772za700za7za7g1784za7, "Unexpected value", 16);
	      DEFINE_STRING(BGl_string1773z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string1773za700za7za7g1785za7, "&", 1);
	      DEFINE_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string1774za700za7za7g1786za7, "globalize_global-closure", 24);
	      DEFINE_STRING(BGl_string1775z00zzglobaliza7e_globalzd2closurez75,
		BgL_bgl_string1775za700za7za7g1787za7,
		"never now sfun foreign & obj static env _ ", 42);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*)
			(&BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75));
		     ADD_ROOT((void
				*) (&BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long
		BgL_checksumz00_2250, char *BgL_fromz00_2251)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_globalzd2closurez75();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
					BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75();
					return BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"globalize_global-closure");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_global-closure");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			{	/* Globalize/gloclo.scm 15 */
				obj_t BgL_cportz00_2237;

				{	/* Globalize/gloclo.scm 15 */
					obj_t BgL_stringz00_2245;

					BgL_stringz00_2245 =
						BGl_string1775z00zzglobaliza7e_globalzd2closurez75;
					{	/* Globalize/gloclo.scm 15 */
						obj_t BgL_startz00_2246;

						BgL_startz00_2246 = BINT(((long) 0));
						{	/* Globalize/gloclo.scm 15 */
							obj_t BgL_endz00_2247;

							BgL_endz00_2247 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2245)));
							{	/* Globalize/gloclo.scm 15 */

								BgL_cportz00_2237 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2245, BgL_startz00_2246, BgL_endz00_2247);
				}}}}
				{
					long BgL_iz00_2238;

					BgL_iz00_2238 = ((long) 8);
				BgL_loopz00_2239:
					if ((BgL_iz00_2238 == ((long) -1)))
						{	/* Globalize/gloclo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/gloclo.scm 15 */
							{	/* Globalize/gloclo.scm 15 */
								obj_t BgL_arg1778z00_2241;

								{	/* Globalize/gloclo.scm 15 */

									{	/* Globalize/gloclo.scm 15 */
										obj_t BgL_locationz00_2243;

										BgL_locationz00_2243 = BBOOL(((bool_t) 0));
										{	/* Globalize/gloclo.scm 15 */

											BgL_arg1778z00_2241 =
												BGl_readz00zz__readerz00(BgL_cportz00_2237,
												BgL_locationz00_2243);
										}
									}
								}
								{	/* Globalize/gloclo.scm 15 */
									int BgL_tmpz00_2276;

									BgL_tmpz00_2276 = (int) (BgL_iz00_2238);
									CNST_TABLE_SET(BgL_tmpz00_2276, BgL_arg1778z00_2241);
							}}
							{	/* Globalize/gloclo.scm 15 */
								int BgL_auxz00_2244;

								BgL_auxz00_2244 = (int) ((BgL_iz00_2238 - ((long) 1)));
								{
									long BgL_iz00_2281;

									BgL_iz00_2281 = (long) (BgL_auxz00_2244);
									BgL_iz00_2238 = BgL_iz00_2281;
									goto BgL_loopz00_2239;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			return (BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 =
				BNIL, BUNSPEC);
		}

	}



/* global-closure */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_3, obj_t BgL_locz00_4)
	{
		{	/* Globalize/gloclo.scm 41 */
			BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_3,
				BgL_locz00_4);
			return
				BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
				(BgL_globalz00_3);
		}

	}



/* &global-closure */
	BgL_globalz00_bglt
		BGl_z62globalzd2closurezb0zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_2231, obj_t BgL_globalz00_2232, obj_t BgL_locz00_2233)
	{
		{	/* Globalize/gloclo.scm 41 */
			return
				BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(
				((BgL_globalz00_bglt) BgL_globalz00_2232), BgL_locz00_2233);
		}

	}



/* make-global-closure */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_5)
	{
		{	/* Globalize/gloclo.scm 48 */
			{	/* Globalize/gloclo.scm 49 */
				obj_t BgL_gloz00_1690;

				{
					BgL_globalzf2ginfozf2_bglt BgL_auxz00_2288;

					{
						obj_t BgL_auxz00_2289;

						{	/* Globalize/gloclo.scm 49 */
							BgL_objectz00_bglt BgL_tmpz00_2290;

							BgL_tmpz00_2290 =
								((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_globalz00_5));
							BgL_auxz00_2289 = BGL_OBJECT_WIDENING(BgL_tmpz00_2290);
						}
						BgL_auxz00_2288 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_2289);
					}
					BgL_gloz00_1690 =
						(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2288))->
						BgL_globalzd2closurezd2);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_gloz00_1690,
						BGl_globalz00zzast_varz00))
					{	/* Globalize/gloclo.scm 50 */
						return ((BgL_globalz00_bglt) BgL_gloz00_1690);
					}
				else
					{	/* Globalize/gloclo.scm 52 */
						BgL_valuez00_bglt BgL_oldzd2funzd2_1692;

						BgL_oldzd2funzd2_1692 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_5)))->BgL_valuez00);
						{	/* Globalize/gloclo.scm 53 */
							bool_t BgL_test1791z00_2301;

							{	/* Globalize/gloclo.scm 53 */
								bool_t BgL_test1792z00_2302;

								{	/* Globalize/gloclo.scm 53 */
									bool_t BgL_res1733z00_2057;

									BgL_res1733z00_2057 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_oldzd2funzd2_1692), BGl_sfunz00zzast_varz00);
									BgL_test1792z00_2302 = BgL_res1733z00_2057;
								}
								if (BgL_test1792z00_2302)
									{	/* Globalize/gloclo.scm 54 */
										bool_t BgL_test1793z00_2305;

										{	/* Globalize/gloclo.scm 54 */
											bool_t BgL_test1794z00_2306;

											{	/* Globalize/gloclo.scm 54 */
												obj_t BgL_tmpz00_2307;

												BgL_tmpz00_2307 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1692)))->
													BgL_optionalsz00);
												BgL_test1794z00_2306 = PAIRP(BgL_tmpz00_2307);
											}
											if (BgL_test1794z00_2306)
												{	/* Globalize/gloclo.scm 54 */
													BgL_test1793z00_2305 = ((bool_t) 1);
												}
											else
												{	/* Globalize/gloclo.scm 55 */
													obj_t BgL_tmpz00_2311;

													BgL_tmpz00_2311 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1692)))->
														BgL_keysz00);
													BgL_test1793z00_2305 = PAIRP(BgL_tmpz00_2311);
												}
										}
										if (BgL_test1793z00_2305)
											{	/* Globalize/gloclo.scm 56 */
												obj_t BgL_arg1298z00_1706;

												BgL_arg1298z00_1706 =
													(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_5))->
													BgL_modulez00);
												BgL_test1791z00_2301 =
													(BgL_arg1298z00_1706 ==
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
										else
											{	/* Globalize/gloclo.scm 54 */
												BgL_test1791z00_2301 = ((bool_t) 0);
											}
									}
								else
									{	/* Globalize/gloclo.scm 53 */
										BgL_test1791z00_2301 = ((bool_t) 0);
									}
							}
							if (BgL_test1791z00_2301)
								{	/* Globalize/gloclo.scm 53 */
									return
										((BgL_globalz00_bglt)
										BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
										(BgL_globalz00_5));
								}
							else
								{	/* Globalize/gloclo.scm 53 */
									return
										((BgL_globalz00_bglt)
										BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
										(BgL_globalz00_5));
								}
						}
					}
			}
		}

	}



/* &make-global-closure */
	BgL_globalz00_bglt
		BGl_z62makezd2globalzd2closurez62zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_2234, obj_t BgL_globalz00_2235)
	{
		{	/* Globalize/gloclo.scm 48 */
			return
				BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75(
				((BgL_globalz00_bglt) BgL_globalz00_2235));
		}

	}



/* make-opt/key-global-closure */
	obj_t
		BGl_makezd2optzf2keyzd2globalzd2closurez20zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_6)
	{
		{	/* Globalize/gloclo.scm 63 */
			{	/* Globalize/gloclo.scm 64 */
				obj_t BgL_glocloz00_1710;

				{	/* Globalize/gloclo.scm 64 */
					obj_t BgL_arg1303z00_1712;
					obj_t BgL_arg1304z00_1713;

					{	/* Globalize/gloclo.scm 64 */
						obj_t BgL_arg1306z00_1715;

						{	/* Globalize/gloclo.scm 64 */
							obj_t BgL_arg1307z00_1716;
							obj_t BgL_arg1308z00_1717;

							{	/* Globalize/gloclo.scm 64 */
								obj_t BgL_res1736z00_2065;

								{	/* Globalize/gloclo.scm 64 */
									obj_t BgL_symbolz00_2063;

									BgL_symbolz00_2063 = CNST_TABLE_REF(((long) 0));
									{	/* Globalize/gloclo.scm 64 */
										obj_t BgL_arg1466z00_2064;

										BgL_arg1466z00_2064 = SYMBOL_TO_STRING(BgL_symbolz00_2063);
										BgL_res1736z00_2065 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2064);
								}}
								BgL_arg1307z00_1716 = BgL_res1736z00_2065;
							}
							{	/* Globalize/gloclo.scm 64 */
								obj_t BgL_arg1309z00_1718;

								BgL_arg1309z00_1718 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_6)))->BgL_idz00);
								{	/* Globalize/gloclo.scm 64 */
									obj_t BgL_res1737z00_2069;

									{	/* Globalize/gloclo.scm 64 */
										obj_t BgL_arg1466z00_2068;

										BgL_arg1466z00_2068 = SYMBOL_TO_STRING(BgL_arg1309z00_1718);
										BgL_res1737z00_2069 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2068);
									}
									BgL_arg1308z00_1717 = BgL_res1737z00_2069;
							}}
							BgL_arg1306z00_1715 =
								string_append(BgL_arg1307z00_1716, BgL_arg1308z00_1717);
						}
						BgL_arg1303z00_1712 = bstring_to_symbol(BgL_arg1306z00_1715);
					}
					BgL_arg1304z00_1713 =
						(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_6))->BgL_modulez00);
					{	/* Globalize/gloclo.scm 64 */
						obj_t BgL_list1305z00_1714;

						BgL_list1305z00_1714 = MAKE_YOUNG_PAIR(BgL_arg1304z00_1713, BNIL);
						BgL_glocloz00_1710 =
							BGl_findzd2globalzd2zzast_envz00(BgL_arg1303z00_1712,
							BgL_list1305z00_1714);
				}}
				BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75
					(BgL_globalz00_6, ((BgL_globalz00_bglt) BgL_glocloz00_1710));
				{	/* Globalize/gloclo.scm 67 */
					BgL_valuez00_bglt BgL_arg1301z00_1711;

					BgL_arg1301z00_1711 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_glocloz00_1710))))->BgL_valuez00);
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_arg1301z00_1711)))->
							BgL_thezd2closurezd2globalz00) =
						((obj_t) ((obj_t) BgL_globalz00_6)), BUNSPEC);
				}
				return BgL_glocloz00_1710;
			}
		}

	}



/* default-type */
	obj_t BGl_defaultzd2typezd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 73 */
			{	/* Globalize/gloclo.scm 74 */
				bool_t BgL_test1795z00_2343;

				if (CBOOL
					(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
					{	/* Globalize/gloclo.scm 74 */
						BgL_test1795z00_2343 =
							((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2));
					}
				else
					{	/* Globalize/gloclo.scm 74 */
						BgL_test1795z00_2343 = ((bool_t) 0);
					}
				if (BgL_test1795z00_2343)
					{	/* Globalize/gloclo.scm 74 */
						return BGl_za2_za2z00zztype_cachez00;
					}
				else
					{	/* Globalize/gloclo.scm 74 */
						return BGl_za2objza2z00zztype_cachez00;
					}
			}
		}

	}



/* make-noopt-global-closure */
	obj_t
		BGl_makezd2nooptzd2globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_7)
	{
		{	/* Globalize/gloclo.scm 79 */
			{	/* Globalize/gloclo.scm 80 */
				BgL_valuez00_bglt BgL_oldzd2funzd2_1720;

				BgL_oldzd2funzd2_1720 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_7)))->BgL_valuez00);
				{	/* Globalize/gloclo.scm 80 */
					BgL_localz00_bglt BgL_envz00_1721;

					{	/* Globalize/gloclo.scm 81 */
						BgL_localz00_bglt BgL_varz00_1780;

						BgL_varz00_1780 =
							BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long)
									1)),
							((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
						{	/* Globalize/gloclo.scm 82 */
							BgL_localzf2ginfozf2_bglt BgL_wide1112z00_1783;

							BgL_wide1112z00_1783 =
								((BgL_localzf2ginfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_localzf2ginfozf2_bgl))));
							{	/* Globalize/gloclo.scm 82 */
								obj_t BgL_auxz00_2357;
								BgL_objectz00_bglt BgL_tmpz00_2354;

								BgL_auxz00_2357 = ((obj_t) BgL_wide1112z00_1783);
								BgL_tmpz00_2354 =
									((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_1780));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2354, BgL_auxz00_2357);
							}
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_varz00_1780));
							{	/* Globalize/gloclo.scm 82 */
								long BgL_arg1344z00_1784;

								{	/* Globalize/gloclo.scm 82 */
									long BgL_res1740z00_2080;

									BgL_res1740z00_2080 =
										BGL_CLASS_INDEX(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
									BgL_arg1344z00_1784 = BgL_res1740z00_2080;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1780)),
									BgL_arg1344z00_1784);
							}
							((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_varz00_1780));
						}
						{
							BgL_localzf2ginfozf2_bglt BgL_auxz00_2368;

							{
								obj_t BgL_auxz00_2369;

								{	/* Globalize/gloclo.scm 82 */
									BgL_objectz00_bglt BgL_tmpz00_2370;

									BgL_tmpz00_2370 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1780));
									BgL_auxz00_2369 = BGL_OBJECT_WIDENING(BgL_tmpz00_2370);
								}
								BgL_auxz00_2368 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2369);
							}
							((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2368))->
									BgL_escapezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						{
							BgL_localzf2ginfozf2_bglt BgL_auxz00_2376;

							{
								obj_t BgL_auxz00_2377;

								{	/* Globalize/gloclo.scm 82 */
									BgL_objectz00_bglt BgL_tmpz00_2378;

									BgL_tmpz00_2378 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1780));
									BgL_auxz00_2377 = BGL_OBJECT_WIDENING(BgL_tmpz00_2378);
								}
								BgL_auxz00_2376 = ((BgL_localzf2ginfozf2_bglt) BgL_auxz00_2377);
							}
							((((BgL_localzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2376))->
									BgL_globaliza7edzf3z54) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						((BgL_localz00_bglt) BgL_varz00_1780);
						BgL_envz00_1721 = BgL_varz00_1780;
					}
					{	/* Globalize/gloclo.scm 81 */
						obj_t BgL_newzd2argszd2_1722;

						{	/* Globalize/gloclo.scm 84 */
							obj_t BgL_l1271z00_1748;

							{	/* Globalize/gloclo.scm 95 */
								bool_t BgL_test1797z00_2385;

								{	/* Globalize/gloclo.scm 95 */
									bool_t BgL_res1741z00_2085;

									BgL_res1741z00_2085 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_oldzd2funzd2_1720), BGl_sfunz00zzast_varz00);
									BgL_test1797z00_2385 = BgL_res1741z00_2085;
								}
								if (BgL_test1797z00_2385)
									{	/* Globalize/gloclo.scm 95 */
										BgL_l1271z00_1748 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1720)))->
											BgL_argsz00);
									}
								else
									{	/* Globalize/gloclo.scm 97 */
										bool_t BgL_test1798z00_2390;

										{	/* Globalize/gloclo.scm 97 */
											bool_t BgL_res1742z00_2087;

											BgL_res1742z00_2087 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_oldzd2funzd2_1720),
												BGl_cfunz00zzast_varz00);
											BgL_test1798z00_2390 = BgL_res1742z00_2087;
										}
										if (BgL_test1798z00_2390)
											{	/* Globalize/gloclo.scm 97 */
												BgL_l1271z00_1748 =
													(((BgL_cfunz00_bglt) COBJECT(
															((BgL_cfunz00_bglt) BgL_oldzd2funzd2_1720)))->
													BgL_argszd2typezd2);
											}
										else
											{	/* Globalize/gloclo.scm 97 */
												BgL_l1271z00_1748 =
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_string1771z00zzglobaliza7e_globalzd2closurez75,
													BGl_string1772z00zzglobaliza7e_globalzd2closurez75,
													((obj_t) BgL_oldzd2funzd2_1720));
											}
									}
							}
							if (NULLP(BgL_l1271z00_1748))
								{	/* Globalize/gloclo.scm 84 */
									BgL_newzd2argszd2_1722 = BNIL;
								}
							else
								{	/* Globalize/gloclo.scm 84 */
									obj_t BgL_head1273z00_1750;

									{	/* Globalize/gloclo.scm 84 */
										obj_t BgL_res1744z00_2090;

										BgL_res1744z00_2090 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1273z00_1750 = BgL_res1744z00_2090;
									}
									{
										obj_t BgL_l1271z00_1752;
										obj_t BgL_tail1274z00_1753;

										BgL_l1271z00_1752 = BgL_l1271z00_1748;
										BgL_tail1274z00_1753 = BgL_head1273z00_1750;
									BgL_zc3z04anonymousza31328ze3z87_1754:
										if (NULLP(BgL_l1271z00_1752))
											{	/* Globalize/gloclo.scm 84 */
												BgL_newzd2argszd2_1722 = CDR(BgL_head1273z00_1750);
											}
										else
											{	/* Globalize/gloclo.scm 84 */
												obj_t BgL_newtail1275z00_1756;

												{	/* Globalize/gloclo.scm 84 */
													BgL_localz00_bglt BgL_arg1331z00_1758;

													{	/* Globalize/gloclo.scm 84 */
														obj_t BgL_oldz00_1759;

														BgL_oldz00_1759 = CAR(((obj_t) BgL_l1271z00_1752));
														{	/* Globalize/gloclo.scm 85 */
															BgL_localz00_bglt BgL_newz00_1760;

															{	/* Globalize/gloclo.scm 86 */
																obj_t BgL_arg1338z00_1773;
																obj_t BgL_arg1339z00_1774;

																if (BGl_isazf3zf3zz__objectz00(BgL_oldz00_1759,
																		BGl_localz00zzast_varz00))
																	{	/* Globalize/gloclo.scm 86 */
																		BgL_arg1338z00_1773 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_oldz00_1759))))->BgL_idz00);
																	}
																else
																	{	/* Globalize/gloclo.scm 88 */

																		{	/* Globalize/gloclo.scm 88 */

																			BgL_arg1338z00_1773 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BFALSE);
																		}
																	}
																BgL_arg1339z00_1774 =
																	BGl_defaultzd2typezd2zzglobaliza7e_globalzd2closurez75
																	();
																BgL_newz00_1760 =
																	BGl_makezd2localzd2svarz00zzast_localz00
																	(BgL_arg1338z00_1773,
																	((BgL_typez00_bglt) BgL_arg1339z00_1774));
															}
															if (BGl_isazf3zf3zz__objectz00(BgL_oldz00_1759,
																	BGl_localz00zzast_varz00))
																{	/* Globalize/gloclo.scm 91 */
																	bool_t BgL_arg1334z00_1762;

																	BgL_arg1334z00_1762 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_oldz00_1759))))->
																		BgL_userzf3zf3);
																	((((BgL_variablez00_bglt)
																				COBJECT(((BgL_variablez00_bglt)
																						BgL_newz00_1760)))->
																			BgL_userzf3zf3) =
																		((bool_t) BgL_arg1334z00_1762), BUNSPEC);
																}
															else
																{	/* Globalize/gloclo.scm 90 */
																	BFALSE;
																}
															{	/* Globalize/gloclo.scm 92 */
																BgL_svarz00_bglt BgL_tmp1114z00_1763;

																BgL_tmp1114z00_1763 =
																	((BgL_svarz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_newz00_1760)))->BgL_valuez00));
																{	/* Globalize/gloclo.scm 92 */
																	BgL_svarzf2ginfozf2_bglt BgL_wide1116z00_1765;

																	BgL_wide1116z00_1765 =
																		((BgL_svarzf2ginfozf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_svarzf2ginfozf2_bgl))));
																	{	/* Globalize/gloclo.scm 92 */
																		obj_t BgL_auxz00_2428;
																		BgL_objectz00_bglt BgL_tmpz00_2425;

																		BgL_auxz00_2428 =
																			((obj_t) BgL_wide1116z00_1765);
																		BgL_tmpz00_2425 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_tmp1114z00_1763));
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2425,
																			BgL_auxz00_2428);
																	}
																	((BgL_objectz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1114z00_1763));
																	{	/* Globalize/gloclo.scm 92 */
																		long BgL_arg1335z00_1766;

																		{	/* Globalize/gloclo.scm 92 */
																			long BgL_res1748z00_2103;

																			BgL_res1748z00_2103 =
																				BGL_CLASS_INDEX
																				(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
																			BgL_arg1335z00_1766 = BgL_res1748z00_2103;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763)),
																			BgL_arg1335z00_1766);
																	}
																	((BgL_svarz00_bglt)
																		((BgL_svarz00_bglt) BgL_tmp1114z00_1763));
																}
																{
																	BgL_svarzf2ginfozf2_bglt BgL_auxz00_2439;

																	{
																		obj_t BgL_auxz00_2440;

																		{	/* Globalize/gloclo.scm 92 */
																			BgL_objectz00_bglt BgL_tmpz00_2441;

																			BgL_tmpz00_2441 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763));
																			BgL_auxz00_2440 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2441);
																		}
																		BgL_auxz00_2439 =
																			((BgL_svarzf2ginfozf2_bglt)
																			BgL_auxz00_2440);
																	}
																	((((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_2439))->
																			BgL_kapturedzf3zf3) =
																		((bool_t) ((bool_t) 0)), BUNSPEC);
																}
																{
																	BgL_svarzf2ginfozf2_bglt BgL_auxz00_2447;

																	{
																		obj_t BgL_auxz00_2448;

																		{	/* Globalize/gloclo.scm 92 */
																			BgL_objectz00_bglt BgL_tmpz00_2449;

																			BgL_tmpz00_2449 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763));
																			BgL_auxz00_2448 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2449);
																		}
																		BgL_auxz00_2447 =
																			((BgL_svarzf2ginfozf2_bglt)
																			BgL_auxz00_2448);
																	}
																	((((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_2447))->
																			BgL_freezd2markzd2) =
																		((long) ((long) -10)), BUNSPEC);
																}
																{
																	BgL_svarzf2ginfozf2_bglt BgL_auxz00_2455;

																	{
																		obj_t BgL_auxz00_2456;

																		{	/* Globalize/gloclo.scm 92 */
																			BgL_objectz00_bglt BgL_tmpz00_2457;

																			BgL_tmpz00_2457 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763));
																			BgL_auxz00_2456 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2457);
																		}
																		BgL_auxz00_2455 =
																			((BgL_svarzf2ginfozf2_bglt)
																			BgL_auxz00_2456);
																	}
																	((((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_2455))->
																			BgL_markz00) =
																		((long) ((long) -10)), BUNSPEC);
																}
																{
																	BgL_svarzf2ginfozf2_bglt BgL_auxz00_2463;

																	{
																		obj_t BgL_auxz00_2464;

																		{	/* Globalize/gloclo.scm 92 */
																			BgL_objectz00_bglt BgL_tmpz00_2465;

																			BgL_tmpz00_2465 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763));
																			BgL_auxz00_2464 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2465);
																		}
																		BgL_auxz00_2463 =
																			((BgL_svarzf2ginfozf2_bglt)
																			BgL_auxz00_2464);
																	}
																	((((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_2463))->
																			BgL_celledzf3zf3) =
																		((bool_t) ((bool_t) 0)), BUNSPEC);
																}
																{
																	BgL_svarzf2ginfozf2_bglt BgL_auxz00_2471;

																	{
																		obj_t BgL_auxz00_2472;

																		{	/* Globalize/gloclo.scm 92 */
																			BgL_objectz00_bglt BgL_tmpz00_2473;

																			BgL_tmpz00_2473 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_tmp1114z00_1763));
																			BgL_auxz00_2472 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2473);
																		}
																		BgL_auxz00_2471 =
																			((BgL_svarzf2ginfozf2_bglt)
																			BgL_auxz00_2472);
																	}
																	((((BgL_svarzf2ginfozf2_bglt)
																				COBJECT(BgL_auxz00_2471))->
																			BgL_stackablez00) =
																		((bool_t) ((bool_t) 1)), BUNSPEC);
																}
																((BgL_svarz00_bglt) BgL_tmp1114z00_1763);
															}
															{	/* Globalize/gloclo.scm 93 */
																BgL_localzf2ginfozf2_bglt BgL_wide1120z00_1770;

																BgL_wide1120z00_1770 =
																	((BgL_localzf2ginfozf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_localzf2ginfozf2_bgl))));
																{	/* Globalize/gloclo.scm 93 */
																	obj_t BgL_auxz00_2484;
																	BgL_objectz00_bglt BgL_tmpz00_2481;

																	BgL_auxz00_2484 =
																		((obj_t) BgL_wide1120z00_1770);
																	BgL_tmpz00_2481 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt) BgL_newz00_1760));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2481,
																		BgL_auxz00_2484);
																}
																((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1760));
																{	/* Globalize/gloclo.scm 93 */
																	long BgL_arg1337z00_1771;

																	{	/* Globalize/gloclo.scm 93 */
																		long BgL_res1749z00_2113;

																		BgL_res1749z00_2113 =
																			BGL_CLASS_INDEX
																			(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7);
																		BgL_arg1337z00_1771 = BgL_res1749z00_2113;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_localz00_bglt) BgL_newz00_1760)),
																		BgL_arg1337z00_1771);
																}
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_newz00_1760));
															}
															{
																BgL_localzf2ginfozf2_bglt BgL_auxz00_2495;

																{
																	obj_t BgL_auxz00_2496;

																	{	/* Globalize/gloclo.scm 93 */
																		BgL_objectz00_bglt BgL_tmpz00_2497;

																		BgL_tmpz00_2497 =
																			((BgL_objectz00_bglt)
																			((BgL_localz00_bglt) BgL_newz00_1760));
																		BgL_auxz00_2496 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2497);
																	}
																	BgL_auxz00_2495 =
																		((BgL_localzf2ginfozf2_bglt)
																		BgL_auxz00_2496);
																}
																((((BgL_localzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2495))->
																		BgL_escapezf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
															}
															{
																BgL_localzf2ginfozf2_bglt BgL_auxz00_2503;

																{
																	obj_t BgL_auxz00_2504;

																	{	/* Globalize/gloclo.scm 93 */
																		BgL_objectz00_bglt BgL_tmpz00_2505;

																		BgL_tmpz00_2505 =
																			((BgL_objectz00_bglt)
																			((BgL_localz00_bglt) BgL_newz00_1760));
																		BgL_auxz00_2504 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2505);
																	}
																	BgL_auxz00_2503 =
																		((BgL_localzf2ginfozf2_bglt)
																		BgL_auxz00_2504);
																}
																((((BgL_localzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2503))->
																		BgL_globaliza7edzf3z54) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
															}
															((BgL_localz00_bglt) BgL_newz00_1760);
															BgL_arg1331z00_1758 = BgL_newz00_1760;
													}}
													{	/* Globalize/gloclo.scm 84 */
														obj_t BgL_res1750z00_2118;

														BgL_res1750z00_2118 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1331z00_1758), BNIL);
														BgL_newtail1275z00_1756 = BgL_res1750z00_2118;
												}}
												SET_CDR(BgL_tail1274z00_1753, BgL_newtail1275z00_1756);
												{	/* Globalize/gloclo.scm 84 */
													obj_t BgL_arg1330z00_1757;

													BgL_arg1330z00_1757 =
														CDR(((obj_t) BgL_l1271z00_1752));
													{
														obj_t BgL_tail1274z00_2518;
														obj_t BgL_l1271z00_2517;

														BgL_l1271z00_2517 = BgL_arg1330z00_1757;
														BgL_tail1274z00_2518 = BgL_newtail1275z00_1756;
														BgL_tail1274z00_1753 = BgL_tail1274z00_2518;
														BgL_l1271z00_1752 = BgL_l1271z00_2517;
														goto BgL_zc3z04anonymousza31328ze3z87_1754;
													}
												}
											}
									}
								}
						}
						{	/* Globalize/gloclo.scm 84 */
							obj_t BgL_locz00_1723;

							{	/* Globalize/gloclo.scm 106 */
								bool_t BgL_test1803z00_2519;

								{	/* Globalize/gloclo.scm 106 */
									bool_t BgL_res1751z00_2121;

									BgL_res1751z00_2121 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_oldzd2funzd2_1720), BGl_sfunz00zzast_varz00);
									BgL_test1803z00_2519 = BgL_res1751z00_2121;
								}
								if (BgL_test1803z00_2519)
									{	/* Globalize/gloclo.scm 107 */
										bool_t BgL_test1804z00_2522;

										{	/* Globalize/gloclo.scm 107 */
											bool_t BgL_test1805z00_2523;

											{	/* Globalize/gloclo.scm 107 */
												obj_t BgL_arg1326z00_1747;

												BgL_arg1326z00_1747 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1720)))->
													BgL_bodyz00);
												BgL_test1805z00_2523 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1326z00_1747,
													BGl_nodez00zzast_nodez00);
											}
											if (BgL_test1805z00_2523)
												{	/* Globalize/gloclo.scm 107 */
													BgL_test1804z00_2522 =
														CBOOL(
														(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt)
																		(((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						BgL_oldzd2funzd2_1720)))->
																			BgL_bodyz00))))->BgL_locz00));
												}
											else
												{	/* Globalize/gloclo.scm 107 */
													BgL_test1804z00_2522 = ((bool_t) 0);
												}
										}
										if (BgL_test1804z00_2522)
											{	/* Globalize/gloclo.scm 107 */
												BgL_locz00_1723 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				BgL_oldzd2funzd2_1720)))->
																	BgL_bodyz00))))->BgL_locz00);
											}
										else
											{	/* Globalize/gloclo.scm 107 */
												BgL_locz00_1723 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1720)))->
													BgL_locz00);
											}
									}
								else
									{	/* Globalize/gloclo.scm 106 */
										BgL_locz00_1723 = BFALSE;
									}
							}
							{	/* Globalize/gloclo.scm 106 */
								obj_t BgL_glocloz00_1724;

								BgL_glocloz00_1724 =
									BGl_glocloz00zzglobaliza7e_globalzd2closurez75
									(BgL_globalz00_7, BgL_envz00_1721, BgL_newzd2argszd2_1722);
								{	/* Globalize/gloclo.scm 111 */
									BgL_valuez00_bglt BgL_newzd2funzd2_1725;

									BgL_newzd2funzd2_1725 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_glocloz00_1724))))->
										BgL_valuez00);
									{	/* Globalize/gloclo.scm 112 */

										{	/* Globalize/gloclo.scm 114 */
											BgL_valuez00_bglt BgL_arg1311z00_1726;

											BgL_arg1311z00_1726 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_glocloz00_1724))))->
												BgL_valuez00);
											((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																BgL_arg1311z00_1726)))->
													BgL_thezd2closurezd2globalz00) =
												((obj_t) ((obj_t) BgL_globalz00_7)), BUNSPEC);
										}
										{	/* Globalize/gloclo.scm 116 */
											BgL_svarz00_bglt BgL_tmp1122z00_1727;

											BgL_tmp1122z00_1727 =
												((BgL_svarz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_envz00_1721)))->
													BgL_valuez00));
											{	/* Globalize/gloclo.scm 116 */
												BgL_svarzf2ginfozf2_bglt BgL_wide1124z00_1729;

												BgL_wide1124z00_1729 =
													((BgL_svarzf2ginfozf2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_svarzf2ginfozf2_bgl))));
												{	/* Globalize/gloclo.scm 116 */
													obj_t BgL_auxz00_2555;
													BgL_objectz00_bglt BgL_tmpz00_2552;

													BgL_auxz00_2555 = ((obj_t) BgL_wide1124z00_1729);
													BgL_tmpz00_2552 =
														((BgL_objectz00_bglt)
														((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2552,
														BgL_auxz00_2555);
												}
												((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
												{	/* Globalize/gloclo.scm 116 */
													long BgL_arg1312z00_1730;

													{	/* Globalize/gloclo.scm 116 */
														long BgL_res1753z00_2135;

														BgL_res1753z00_2135 =
															BGL_CLASS_INDEX
															(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
														BgL_arg1312z00_1730 = BgL_res1753z00_2135;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727)),
														BgL_arg1312z00_1730);
												}
												((BgL_svarz00_bglt)
													((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
											}
											{
												BgL_svarzf2ginfozf2_bglt BgL_auxz00_2566;

												{
													obj_t BgL_auxz00_2567;

													{	/* Globalize/gloclo.scm 116 */
														BgL_objectz00_bglt BgL_tmpz00_2568;

														BgL_tmpz00_2568 =
															((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
														BgL_auxz00_2567 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2568);
													}
													BgL_auxz00_2566 =
														((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2567);
												}
												((((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2566))->BgL_kapturedzf3zf3) =
													((bool_t) ((bool_t) 0)), BUNSPEC);
											}
											{
												BgL_svarzf2ginfozf2_bglt BgL_auxz00_2574;

												{
													obj_t BgL_auxz00_2575;

													{	/* Globalize/gloclo.scm 116 */
														BgL_objectz00_bglt BgL_tmpz00_2576;

														BgL_tmpz00_2576 =
															((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
														BgL_auxz00_2575 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2576);
													}
													BgL_auxz00_2574 =
														((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2575);
												}
												((((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2574))->BgL_freezd2markzd2) =
													((long) ((long) -10)), BUNSPEC);
											}
											{
												BgL_svarzf2ginfozf2_bglt BgL_auxz00_2582;

												{
													obj_t BgL_auxz00_2583;

													{	/* Globalize/gloclo.scm 116 */
														BgL_objectz00_bglt BgL_tmpz00_2584;

														BgL_tmpz00_2584 =
															((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
														BgL_auxz00_2583 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2584);
													}
													BgL_auxz00_2582 =
														((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2583);
												}
												((((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2582))->BgL_markz00) =
													((long) ((long) -10)), BUNSPEC);
											}
											{
												BgL_svarzf2ginfozf2_bglt BgL_auxz00_2590;

												{
													obj_t BgL_auxz00_2591;

													{	/* Globalize/gloclo.scm 116 */
														BgL_objectz00_bglt BgL_tmpz00_2592;

														BgL_tmpz00_2592 =
															((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
														BgL_auxz00_2591 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2592);
													}
													BgL_auxz00_2590 =
														((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2591);
												}
												((((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2590))->BgL_celledzf3zf3) =
													((bool_t) ((bool_t) 0)), BUNSPEC);
											}
											{
												BgL_svarzf2ginfozf2_bglt BgL_auxz00_2598;

												{
													obj_t BgL_auxz00_2599;

													{	/* Globalize/gloclo.scm 116 */
														BgL_objectz00_bglt BgL_tmpz00_2600;

														BgL_tmpz00_2600 =
															((BgL_objectz00_bglt)
															((BgL_svarz00_bglt) BgL_tmp1122z00_1727));
														BgL_auxz00_2599 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2600);
													}
													BgL_auxz00_2598 =
														((BgL_svarzf2ginfozf2_bglt) BgL_auxz00_2599);
												}
												((((BgL_svarzf2ginfozf2_bglt)
															COBJECT(BgL_auxz00_2598))->BgL_stackablez00) =
													((bool_t) ((bool_t) 1)), BUNSPEC);
											}
											((BgL_svarz00_bglt) BgL_tmp1122z00_1727);
										}
										{	/* Globalize/gloclo.scm 118 */
											BgL_globalzf2ginfozf2_bglt BgL_wide1128z00_1734;

											BgL_wide1128z00_1734 =
												((BgL_globalzf2ginfozf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_globalzf2ginfozf2_bgl))));
											{	/* Globalize/gloclo.scm 118 */
												obj_t BgL_auxz00_2612;
												BgL_objectz00_bglt BgL_tmpz00_2608;

												BgL_auxz00_2612 = ((obj_t) BgL_wide1128z00_1734);
												BgL_tmpz00_2608 =
													((BgL_objectz00_bglt)
													((BgL_globalz00_bglt)
														((BgL_globalz00_bglt) BgL_glocloz00_1724)));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2608,
													BgL_auxz00_2612);
											}
											((BgL_objectz00_bglt)
												((BgL_globalz00_bglt)
													((BgL_globalz00_bglt) BgL_glocloz00_1724)));
											{	/* Globalize/gloclo.scm 118 */
												long BgL_arg1314z00_1735;

												{	/* Globalize/gloclo.scm 118 */
													long BgL_res1754z00_2145;

													BgL_res1754z00_2145 =
														BGL_CLASS_INDEX
														(BGl_globalzf2Ginfozf2zzglobaliza7e_ginfoza7);
													BgL_arg1314z00_1735 = BgL_res1754z00_2145;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_globalz00_bglt)
															((BgL_globalz00_bglt) BgL_glocloz00_1724))),
													BgL_arg1314z00_1735);
											}
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt)
													((BgL_globalz00_bglt) BgL_glocloz00_1724)));
										}
										{
											BgL_globalzf2ginfozf2_bglt BgL_auxz00_2626;

											{
												obj_t BgL_auxz00_2627;

												{	/* Globalize/gloclo.scm 118 */
													BgL_objectz00_bglt BgL_tmpz00_2628;

													BgL_tmpz00_2628 =
														((BgL_objectz00_bglt)
														((BgL_globalz00_bglt)
															((BgL_globalz00_bglt) BgL_glocloz00_1724)));
													BgL_auxz00_2627 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2628);
												}
												BgL_auxz00_2626 =
													((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_2627);
											}
											((((BgL_globalzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_2626))->BgL_escapezf3zf3) =
												((bool_t) ((bool_t) 1)), BUNSPEC);
										}
										{
											BgL_globalzf2ginfozf2_bglt BgL_auxz00_2635;

											{
												obj_t BgL_auxz00_2636;

												{	/* Globalize/gloclo.scm 118 */
													BgL_objectz00_bglt BgL_tmpz00_2637;

													BgL_tmpz00_2637 =
														((BgL_objectz00_bglt)
														((BgL_globalz00_bglt)
															((BgL_globalz00_bglt) BgL_glocloz00_1724)));
													BgL_auxz00_2636 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2637);
												}
												BgL_auxz00_2635 =
													((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_2636);
											}
											((((BgL_globalzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_2635))->
													BgL_globalzd2closurezd2) = ((obj_t) BFALSE), BUNSPEC);
										}
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_glocloz00_1724));
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_newzd2funzd2_1725)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t)
													BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75
													(BgL_locz00_1723, BgL_globalz00_7,
														BgL_newzd2argszd2_1722))), BUNSPEC);
										return BgL_glocloz00_1724;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* make-noopt-body */
	BgL_appz00_bglt
		BGl_makezd2nooptzd2bodyz00zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_locz00_8, BgL_globalz00_bglt BgL_globalz00_9,
		obj_t BgL_newzd2argszd2_10)
	{
		{	/* Globalize/gloclo.scm 130 */
			{	/* Globalize/gloclo.scm 131 */
				BgL_appz00_bglt BgL_new1134z00_1786;

				{	/* Globalize/gloclo.scm 132 */
					BgL_appz00_bglt BgL_new1133z00_1809;

					BgL_new1133z00_1809 =
						((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_appz00_bgl))));
					{	/* Globalize/gloclo.scm 132 */
						long BgL_arg1364z00_1810;

						{	/* Globalize/gloclo.scm 132 */
							long BgL_res1755z00_2151;

							BgL_res1755z00_2151 = BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
							BgL_arg1364z00_1810 = BgL_res1755z00_2151;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1133z00_1809), BgL_arg1364z00_1810);
					}
					{	/* Globalize/gloclo.scm 132 */
						BgL_objectz00_bglt BgL_tmpz00_2654;

						BgL_tmpz00_2654 = ((BgL_objectz00_bglt) BgL_new1133z00_1809);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2654, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1133z00_1809);
					BgL_new1134z00_1786 = BgL_new1133z00_1809;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1134z00_1786)))->BgL_locz00) =
					((obj_t) BgL_locz00_8), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2660;

					{	/* Globalize/gloclo.scm 133 */
						BgL_typez00_bglt BgL_arg1345z00_1787;

						BgL_arg1345z00_1787 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_9)))->BgL_typez00);
						BgL_auxz00_2660 =
							BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1345z00_1787,
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1134z00_1786)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2660), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt) BgL_new1134z00_1786)))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1134z00_1786)))->BgL_keyz00) =
					((obj_t) BINT(((long) -1))), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_2672;

					{	/* Globalize/gloclo.scm 134 */
						BgL_varz00_bglt BgL_new1136z00_1788;

						{	/* Globalize/gloclo.scm 135 */
							BgL_varz00_bglt BgL_new1135z00_1790;

							BgL_new1135z00_1790 =
								((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_varz00_bgl))));
							{	/* Globalize/gloclo.scm 135 */
								long BgL_arg1347z00_1791;

								{	/* Globalize/gloclo.scm 135 */
									long BgL_res1756z00_2157;

									{	/* Globalize/gloclo.scm 135 */
										obj_t BgL_classz00_2156;

										BgL_classz00_2156 = BGl_varz00zzast_nodez00;
										BgL_res1756z00_2157 = BGL_CLASS_INDEX(BgL_classz00_2156);
									}
									BgL_arg1347z00_1791 = BgL_res1756z00_2157;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1135z00_1790),
									BgL_arg1347z00_1791);
							}
							BgL_new1136z00_1788 = BgL_new1135z00_1790;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1136z00_1788)))->BgL_locz00) =
							((obj_t) BgL_locz00_8), BUNSPEC);
						{
							BgL_typez00_bglt BgL_auxz00_2679;

							{	/* Globalize/gloclo.scm 136 */
								BgL_typez00_bglt BgL_arg1346z00_1789;

								BgL_arg1346z00_1789 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_9)))->BgL_typez00);
								BgL_auxz00_2679 =
									BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1346z00_1789,
									((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00));
							}
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_new1136z00_1788)))->BgL_typez00) =
								((BgL_typez00_bglt) BgL_auxz00_2679), BUNSPEC);
						}
						((((BgL_varz00_bglt) COBJECT(BgL_new1136z00_1788))->
								BgL_variablez00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_globalz00_9)),
							BUNSPEC);
						BgL_auxz00_2672 = BgL_new1136z00_1788;
					}
					((((BgL_appz00_bglt) COBJECT(BgL_new1134z00_1786))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_2672), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_2689;

					if (NULLP(BgL_newzd2argszd2_10))
						{	/* Globalize/gloclo.scm 141 */
							BgL_auxz00_2689 = BNIL;
						}
					else
						{	/* Globalize/gloclo.scm 141 */
							obj_t BgL_head1278z00_1794;

							{	/* Globalize/gloclo.scm 141 */
								obj_t BgL_res1758z00_2162;

								BgL_res1758z00_2162 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1278z00_1794 = BgL_res1758z00_2162;
							}
							{
								obj_t BgL_l1276z00_1796;
								obj_t BgL_tail1279z00_1797;

								BgL_l1276z00_1796 = BgL_newzd2argszd2_10;
								BgL_tail1279z00_1797 = BgL_head1278z00_1794;
							BgL_zc3z04anonymousza31351ze3z87_1798:
								if (NULLP(BgL_l1276z00_1796))
									{	/* Globalize/gloclo.scm 141 */
										BgL_auxz00_2689 = CDR(BgL_head1278z00_1794);
									}
								else
									{	/* Globalize/gloclo.scm 141 */
										obj_t BgL_newtail1280z00_1800;

										{	/* Globalize/gloclo.scm 141 */
											BgL_varz00_bglt BgL_arg1360z00_1802;

											{	/* Globalize/gloclo.scm 141 */
												obj_t BgL_vz00_1803;

												BgL_vz00_1803 = CAR(((obj_t) BgL_l1276z00_1796));
												{	/* Globalize/gloclo.scm 142 */
													BgL_varz00_bglt BgL_new1138z00_1804;

													{	/* Globalize/gloclo.scm 145 */
														BgL_varz00_bglt BgL_new1137z00_1806;

														BgL_new1137z00_1806 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Globalize/gloclo.scm 145 */
															long BgL_arg1363z00_1807;

															{	/* Globalize/gloclo.scm 145 */
																long BgL_res1760z00_2167;

																{	/* Globalize/gloclo.scm 145 */
																	obj_t BgL_classz00_2166;

																	BgL_classz00_2166 = BGl_varz00zzast_nodez00;
																	BgL_res1760z00_2167 =
																		BGL_CLASS_INDEX(BgL_classz00_2166);
																}
																BgL_arg1363z00_1807 = BgL_res1760z00_2167;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1137z00_1806),
																BgL_arg1363z00_1807);
														}
														BgL_new1138z00_1804 = BgL_new1137z00_1806;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1138z00_1804)))->
															BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
													{
														BgL_typez00_bglt BgL_auxz00_2704;

														{	/* Globalize/gloclo.scm 144 */
															BgL_typez00_bglt BgL_arg1361z00_1805;

															BgL_arg1361z00_1805 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_vz00_1803)))->
																BgL_typez00);
															BgL_auxz00_2704 =
																BGl_strictzd2nodezd2typez00zzast_nodez00
																(BgL_arg1361z00_1805,
																((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00));
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1138z00_1804)))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_2704), BUNSPEC);
													}
													((((BgL_varz00_bglt) COBJECT(BgL_new1138z00_1804))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BgL_vz00_1803)), BUNSPEC);
													BgL_arg1360z00_1802 = BgL_new1138z00_1804;
											}}
											{	/* Globalize/gloclo.scm 141 */
												obj_t BgL_res1761z00_2171;

												BgL_res1761z00_2171 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1360z00_1802), BNIL);
												BgL_newtail1280z00_1800 = BgL_res1761z00_2171;
										}}
										SET_CDR(BgL_tail1279z00_1797, BgL_newtail1280z00_1800);
										{	/* Globalize/gloclo.scm 141 */
											obj_t BgL_arg1357z00_1801;

											BgL_arg1357z00_1801 = CDR(((obj_t) BgL_l1276z00_1796));
											{
												obj_t BgL_tail1279z00_2719;
												obj_t BgL_l1276z00_2718;

												BgL_l1276z00_2718 = BgL_arg1357z00_1801;
												BgL_tail1279z00_2719 = BgL_newtail1280z00_1800;
												BgL_tail1279z00_1797 = BgL_tail1279z00_2719;
												BgL_l1276z00_1796 = BgL_l1276z00_2718;
												goto BgL_zc3z04anonymousza31351ze3z87_1798;
											}
										}
									}
							}
						}
					((((BgL_appz00_bglt) COBJECT(BgL_new1134z00_1786))->BgL_argsz00) =
						((obj_t) BgL_auxz00_2689), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(BgL_new1134z00_1786))->BgL_stackablez00) =
					((obj_t) BFALSE), BUNSPEC);
				return BgL_new1134z00_1786;
			}
		}

	}



/* foreign-closures */
	BGL_EXPORTED_DEF obj_t
		BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 156 */
			{	/* Globalize/gloclo.scm 157 */
				obj_t BgL_resz00_1811;

				BgL_resz00_1811 =
					BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75;
				BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 = BNIL;
				return BgL_resz00_1811;
			}
		}

	}



/* &foreign-closures */
	obj_t BGl_z62foreignzd2closureszb0zzglobaliza7e_globalzd2closurez75(obj_t
		BgL_envz00_2236)
	{
		{	/* Globalize/gloclo.scm 156 */
			return BGl_foreignzd2closureszd2zzglobaliza7e_globalzd2closurez75();
		}

	}



/* globalized-type-id */
	obj_t
		BGl_globaliza7edzd2typezd2idza7zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt BgL_globalz00_11)
	{
		{	/* Globalize/gloclo.scm 169 */
			{	/* Globalize/gloclo.scm 170 */
				BgL_typez00_bglt BgL_typez00_1812;

				BgL_typez00_1812 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_11)))->BgL_typez00);
				if (CBOOL
					(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
					{	/* Globalize/gloclo.scm 172 */
						if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_1812))
							{	/* Globalize/gloclo.scm 174 */
								return
									(((BgL_typez00_bglt) COBJECT(BgL_typez00_1812))->BgL_idz00);
							}
						else
							{	/* Globalize/gloclo.scm 174 */
								if (
									((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_11))->
											BgL_importz00) == CNST_TABLE_REF(((long) 2))))
									{	/* Globalize/gloclo.scm 176 */
										return CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Globalize/gloclo.scm 176 */
										return
											(((BgL_typez00_bglt)
												COBJECT(BGl_getzd2bigloozd2typez00zztype_cachez00
													(BgL_typez00_1812)))->BgL_idz00);
									}
							}
					}
				else
					{	/* Globalize/gloclo.scm 172 */
						return CNST_TABLE_REF(((long) 3));
		}}}

	}



/* gloclo */
	obj_t BGl_glocloz00zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_12, BgL_localz00_bglt BgL_envz00_13, obj_t BgL_argsz00_14)
	{
		{	/* Globalize/gloclo.scm 186 */
			{	/* Globalize/gloclo.scm 187 */
				int BgL_arityz00_1818;

				{	/* Globalize/gloclo.scm 187 */
					BgL_valuez00_bglt BgL_arg1465z00_1847;

					BgL_arg1465z00_1847 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_12)))->BgL_valuez00);
					BgL_arityz00_1818 =
						BGl_funzd2optionalzd2arityz00zzast_varz00(
						((BgL_funz00_bglt) BgL_arg1465z00_1847));
				}
				{	/* Globalize/gloclo.scm 187 */
					obj_t BgL_idz00_1819;

					{	/* Globalize/gloclo.scm 188 */
						obj_t BgL_strz00_1834;

						{	/* Globalize/gloclo.scm 190 */
							obj_t BgL_arg1462z00_1845;

							{	/* Globalize/gloclo.scm 190 */
								obj_t BgL_arg1464z00_1846;

								BgL_arg1464z00_1846 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_12)))->BgL_idz00);
								{	/* Globalize/gloclo.scm 190 */
									obj_t BgL_res1762z00_2182;

									{	/* Globalize/gloclo.scm 190 */
										obj_t BgL_arg1466z00_2181;

										BgL_arg1466z00_2181 = SYMBOL_TO_STRING(BgL_arg1464z00_1846);
										BgL_res1762z00_2182 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2181);
									}
									BgL_arg1462z00_1845 = BgL_res1762z00_2182;
							}}
							BgL_strz00_1834 =
								string_append
								(BGl_string1773z00zzglobaliza7e_globalzd2closurez75,
								BgL_arg1462z00_1845);
						}
						if (symbol_exists_p(BSTRING_TO_STRING(BgL_strz00_1834)))
							{	/* Globalize/gloclo.scm 192 */
								obj_t BgL_arg1417z00_1836;

								{	/* Globalize/gloclo.scm 192 */
									obj_t BgL_arg1418z00_1837;

									{	/* Globalize/gloclo.scm 192 */
										obj_t BgL_arg1421z00_1838;
										obj_t BgL_arg1422z00_1839;

										{	/* Globalize/gloclo.scm 192 */
											obj_t BgL_res1763z00_2185;

											{	/* Globalize/gloclo.scm 192 */
												obj_t BgL_symbolz00_2183;

												BgL_symbolz00_2183 = CNST_TABLE_REF(((long) 4));
												{	/* Globalize/gloclo.scm 192 */
													obj_t BgL_arg1466z00_2184;

													BgL_arg1466z00_2184 =
														SYMBOL_TO_STRING(BgL_symbolz00_2183);
													BgL_res1763z00_2185 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2184);
											}}
											BgL_arg1421z00_1838 = BgL_res1763z00_2185;
										}
										{	/* Globalize/gloclo.scm 192 */
											obj_t BgL_arg1441z00_1840;

											BgL_arg1441z00_1840 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_12)))->
												BgL_idz00);
											{	/* Globalize/gloclo.scm 192 */
												obj_t BgL_res1764z00_2189;

												{	/* Globalize/gloclo.scm 192 */
													obj_t BgL_arg1466z00_2188;

													BgL_arg1466z00_2188 =
														SYMBOL_TO_STRING(BgL_arg1441z00_1840);
													BgL_res1764z00_2189 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2188);
												}
												BgL_arg1422z00_1839 = BgL_res1764z00_2189;
										}}
										BgL_arg1418z00_1837 =
											string_append(BgL_arg1421z00_1838, BgL_arg1422z00_1839);
									}
									BgL_arg1417z00_1836 = bstring_to_symbol(BgL_arg1418z00_1837);
								}
								BgL_idz00_1819 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1417z00_1836);
							}
						else
							{	/* Globalize/gloclo.scm 193 */
								obj_t BgL_arg1442z00_1841;

								{	/* Globalize/gloclo.scm 193 */
									obj_t BgL_arg1448z00_1842;
									obj_t BgL_arg1449z00_1843;

									{	/* Globalize/gloclo.scm 193 */
										obj_t BgL_res1766z00_2194;

										{	/* Globalize/gloclo.scm 193 */
											obj_t BgL_symbolz00_2192;

											BgL_symbolz00_2192 = CNST_TABLE_REF(((long) 4));
											{	/* Globalize/gloclo.scm 193 */
												obj_t BgL_arg1466z00_2193;

												BgL_arg1466z00_2193 =
													SYMBOL_TO_STRING(BgL_symbolz00_2192);
												BgL_res1766z00_2194 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2193);
										}}
										BgL_arg1448z00_1842 = BgL_res1766z00_2194;
									}
									{	/* Globalize/gloclo.scm 193 */
										obj_t BgL_arg1461z00_1844;

										BgL_arg1461z00_1844 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_12)))->
											BgL_idz00);
										{	/* Globalize/gloclo.scm 193 */
											obj_t BgL_res1767z00_2198;

											{	/* Globalize/gloclo.scm 193 */
												obj_t BgL_arg1466z00_2197;

												BgL_arg1466z00_2197 =
													SYMBOL_TO_STRING(BgL_arg1461z00_1844);
												BgL_res1767z00_2198 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2197);
											}
											BgL_arg1449z00_1843 = BgL_res1767z00_2198;
									}}
									BgL_arg1442z00_1841 =
										string_append(BgL_arg1448z00_1842, BgL_arg1449z00_1843);
								}
								BgL_idz00_1819 = bstring_to_symbol(BgL_arg1442z00_1841);
					}}
					{	/* Globalize/gloclo.scm 188 */
						obj_t BgL_tyidz00_1820;

						BgL_tyidz00_1820 =
							BGl_globaliza7edzd2typezd2idza7zzglobaliza7e_globalzd2closurez75
							(BgL_globalz00_12);
						{	/* Globalize/gloclo.scm 194 */
							BgL_globalz00_bglt BgL_glocloz00_1821;

							{	/* Globalize/gloclo.scm 195 */
								obj_t BgL_arg1383z00_1825;
								obj_t BgL_arg1384z00_1826;
								obj_t BgL_arg1385z00_1827;
								obj_t BgL_arg1386z00_1828;
								obj_t BgL_arg1387z00_1829;

								BgL_arg1383z00_1825 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_1819,
									BgL_tyidz00_1820);
								BgL_arg1384z00_1826 =
									BGl_makezd2nzd2protoz00zztools_argsz00
									(BGl_zb2zd2arityz60zztools_argsz00(BINT(BgL_arityz00_1818),
										BINT(((long) 1))));
								BgL_arg1385z00_1827 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_envz00_13), BgL_argsz00_14);
								if (((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_12))->
											BgL_importz00) == CNST_TABLE_REF(((long) 5))))
									{	/* Globalize/gloclo.scm 198 */
										BgL_arg1386z00_1828 = BGl_za2moduleza2z00zzmodule_modulez00;
									}
								else
									{	/* Globalize/gloclo.scm 198 */
										BgL_arg1386z00_1828 =
											(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_12))->
											BgL_modulez00);
									}
								BgL_arg1387z00_1829 =
									(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_12))->
									BgL_importz00);
								BgL_glocloz00_1821 =
									BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
									(BgL_arg1383z00_1825, BgL_arg1384z00_1826,
									BgL_arg1385z00_1827, BgL_arg1386z00_1828, BgL_arg1387z00_1829,
									CNST_TABLE_REF(((long) 6)), CNST_TABLE_REF(((long) 7)),
									BUNSPEC);
							}
							{	/* Globalize/gloclo.scm 195 */

								{	/* Globalize/gloclo.scm 205 */
									BgL_valuez00_bglt BgL_arg1372z00_1822;
									obj_t BgL_arg1381z00_1823;

									BgL_arg1372z00_1822 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_glocloz00_1821)))->
										BgL_valuez00);
									BgL_arg1381z00_1823 =
										(((BgL_funz00_bglt)
											COBJECT(((BgL_funz00_bglt) (((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt)
																	BgL_globalz00_12)))->BgL_valuez00))))->
										BgL_argszd2noescapezd2);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_arg1372z00_1822)))->BgL_argszd2noescapezd2) =
										((obj_t) BgL_arg1381z00_1823), BUNSPEC);
								}
								return
									BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75
									(BgL_globalz00_12, BgL_glocloz00_1821);
							}
						}
					}
				}
			}
		}

	}



/* fill-gloclo! */
	obj_t
		BGl_fillzd2glocloz12zc0zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt
		BgL_globalz00_15, BgL_globalz00_bglt BgL_gcloz00_16)
	{
		{	/* Globalize/gloclo.scm 212 */
			{
				BgL_globalzf2ginfozf2_bglt BgL_auxz00_2795;

				{
					obj_t BgL_auxz00_2796;

					{	/* Globalize/gloclo.scm 213 */
						BgL_objectz00_bglt BgL_tmpz00_2797;

						BgL_tmpz00_2797 =
							((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_globalz00_15));
						BgL_auxz00_2796 = BGL_OBJECT_WIDENING(BgL_tmpz00_2797);
					}
					BgL_auxz00_2795 = ((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_2796);
				}
				((((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2795))->
						BgL_globalzd2closurezd2) =
					((obj_t) ((obj_t) BgL_gcloz00_16)), BUNSPEC);
			}
			{	/* Globalize/gloclo.scm 216 */
				BgL_valuez00_bglt BgL_sfunz00_1848;

				BgL_sfunz00_1848 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_15)))->BgL_valuez00);
				{	/* Globalize/gloclo.scm 217 */
					bool_t BgL_test1816z00_2806;

					{	/* Globalize/gloclo.scm 217 */
						bool_t BgL_res1769z00_2211;

						BgL_res1769z00_2211 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_sfunz00_1848), BGl_sfunz00zzast_varz00);
						BgL_test1816z00_2806 = BgL_res1769z00_2211;
					}
					if (BgL_test1816z00_2806)
						{	/* Globalize/gloclo.scm 218 */
							BgL_valuez00_bglt BgL_arg1474z00_1850;
							obj_t BgL_arg1476z00_1851;

							BgL_arg1474z00_1850 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_gcloz00_16)))->BgL_valuez00);
							BgL_arg1476z00_1851 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_sfunz00_1848)))->BgL_locz00);
							((((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_arg1474z00_1850)))->BgL_locz00) =
								((obj_t) BgL_arg1476z00_1851), BUNSPEC);
						}
					else
						{	/* Globalize/gloclo.scm 217 */
							BFALSE;
						}
				}
				if (
					((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_15))->BgL_importz00) ==
						CNST_TABLE_REF(((long) 5))))
					{	/* Globalize/gloclo.scm 227 */
						BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75 =
							MAKE_YOUNG_PAIR(
							((obj_t) BgL_gcloz00_16),
							BGl_za2foreignzd2closuresza2zd2zzglobaliza7e_globalzd2closurez75);
						{	/* Globalize/gloclo.scm 230 */
							obj_t BgL_vz00_2217;

							BgL_vz00_2217 = CNST_TABLE_REF(((long) 8));
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_gcloz00_16)))->
									BgL_removablez00) = ((obj_t) BgL_vz00_2217), BUNSPEC);
						}
						{	/* Globalize/gloclo.scm 231 */
							obj_t BgL_vz00_2219;

							BgL_vz00_2219 = CNST_TABLE_REF(((long) 2));
							((((BgL_globalz00_bglt) COBJECT(BgL_gcloz00_16))->BgL_importz00) =
								((obj_t) BgL_vz00_2219), BUNSPEC);
					}}
				else
					{	/* Globalize/gloclo.scm 227 */
						if (
							((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_15))->
									BgL_importz00) == CNST_TABLE_REF(((long) 2))))
							{	/* Globalize/gloclo.scm 233 */
								BFALSE;
							}
						else
							{	/* Globalize/gloclo.scm 234 */
								obj_t BgL_vz00_2222;

								BgL_vz00_2222 = CNST_TABLE_REF(((long) 8));
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_gcloz00_16)))->
										BgL_removablez00) = ((obj_t) BgL_vz00_2222), BUNSPEC);
							}
						{	/* Globalize/gloclo.scm 235 */
							obj_t BgL_vz00_2224;

							BgL_vz00_2224 = CNST_TABLE_REF(((long) 2));
							((((BgL_globalz00_bglt) COBJECT(BgL_gcloz00_16))->BgL_importz00) =
								((obj_t) BgL_vz00_2224), BUNSPEC);
					}}
				{	/* Globalize/gloclo.scm 236 */
					BgL_valuez00_bglt BgL_arg1497z00_1858;
					obj_t BgL_arg1518z00_1859;

					BgL_arg1497z00_1858 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_gcloz00_16)))->BgL_valuez00);
					BgL_arg1518z00_1859 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_sfunz00_1848)))->BgL_sidezd2effectzd2);
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_arg1497z00_1858)))->
							BgL_sidezd2effectzd2) = ((obj_t) BgL_arg1518z00_1859), BUNSPEC);
				}
				return ((obj_t) BgL_gcloz00_16);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globalzd2closurez75()
	{
		{	/* Globalize/gloclo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 244215773),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1774z00zzglobaliza7e_globalzd2closurez75));
		}

	}

#ifdef __cplusplus
}
#endif
