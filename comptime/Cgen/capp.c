/*===========================================================================*/
/*   (Cgen/capp.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/capp.scm) */
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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

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

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_cblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                *BgL_cblockz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_typez00;
	}                  *BgL_cfuncallz00_bglt;

	typedef struct BgL_capplyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		struct BgL_copz00_bgl *BgL_argz00;
	}                *BgL_capplyz00_bglt;

	typedef struct BgL_cappz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}              *BgL_cappz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;


	extern obj_t BGl_za2stopzd2kontza2zd2zzcgen_cgenz00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzcgen_cappz00();
	extern obj_t BGl_capplyz00zzcgen_copz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_cpragmaz00zzcgen_copz00;
	static obj_t BGl_methodzd2initzd2zzcgen_cappz00();
	extern bool_t BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2funcall1453z81zzcgen_cappz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_cblockz00zzcgen_copz00;
	static BgL_copz00_bglt
		BGl_z62nodezd2ze3copzd2appzd2ly1451z53zzcgen_cappz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcgen_cappz00();
	extern obj_t BGl_stopz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62nodezd2ze3copzd2app1455z81zzcgen_cappz00(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_copz00_bglt BGl_nodezd2ze3copz31zzcgen_cgenz00(BgL_nodez00_bglt,
		obj_t, bool_t);
	extern obj_t BGl_za2thezd2globalza2zd2zzcgen_cgenz00;
	extern obj_t BGl_za2idzd2kontza2zd2zzcgen_cgenz00;
	extern obj_t BGl_blockzd2kontzd2zzcgen_cgenz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_cappz00 = BUNSPEC;
	static obj_t
		BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_variablez00_bglt, BgL_appz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00(BgL_variablez00_bglt,
		BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_cappz00zzcgen_copz00;
	static obj_t BGl_toplevelzd2initzd2zzcgen_cappz00();
	extern obj_t BGl_cgotoz00zzcgen_copz00;
	extern obj_t BGl_csequencez00zzcgen_copz00;
	static obj_t BGl_genericzd2initzd2zzcgen_cappz00();
	extern BgL_setqz00_bglt BGl_nodezd2setqzd2zzcgen_cgenz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt);
	extern BgL_copz00_bglt BGl_bdbzd2letzd2varz00zzcgen_cgenz00(BgL_copz00_bglt,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t
		BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_variablez00_bglt, BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_csetqz00zzcgen_copz00;
	extern obj_t BGl_localzd2varzd2zzcgen_copz00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzcgen_cappz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cappz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_cappz00();
	extern obj_t BGl_catomz00zzcgen_copz00;
	extern obj_t BGl_za2returnzd2kontza2zd2zzcgen_cgenz00;
	extern obj_t BGl_cfuncallz00zzcgen_copz00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_varcz00zzcgen_copz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzcgen_cappz00,
		BgL_bgl_za762nodeza7d2za7e3cop2232za7,
		BGl_z62nodezd2ze3copzd2appzd2ly1451z53zzcgen_cappz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzcgen_cappz00,
		BgL_bgl_za762nodeza7d2za7e3cop2233za7,
		BGl_z62nodezd2ze3copzd2funcall1453z81zzcgen_cappz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzcgen_cappz00,
		BgL_bgl_za762nodeza7d2za7e3cop2234za7,
		BGl_z62nodezd2ze3copzd2app1455z81zzcgen_cappz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00;
	   
		 
		DEFINE_STRING(BGl_string2222z00zzcgen_cappz00,
		BgL_bgl_string2222za700za7za7c2235za7, "((obj_t)(&exitd))", 17);
	      DEFINE_STRING(BGl_string2224z00zzcgen_cappz00,
		BgL_bgl_string2224za700za7za7c2236za7, "node->cop", 9);
	      DEFINE_STRING(BGl_string2227z00zzcgen_cappz00,
		BgL_bgl_string2227za700za7za7c2237za7, "cgen_capp", 9);
	      DEFINE_STRING(BGl_string2228z00zzcgen_cappz00,
		BgL_bgl_string2228za700za7za7c2238za7,
		"fun a tmpfun tmp $get-exitd-top aux ", 36);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcgen_cappz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_cappz00(long
		BgL_checksumz00_3151, char *BgL_fromz00_3152)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_cappz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_cappz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcgen_cappz00();
					BGl_libraryzd2moduleszd2initz00zzcgen_cappz00();
					BGl_cnstzd2initzd2zzcgen_cappz00();
					BGl_importedzd2moduleszd2initz00zzcgen_cappz00();
					BGl_methodzd2initzd2zzcgen_cappz00();
					return BGl_toplevelzd2initzd2zzcgen_cappz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_capp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_capp");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_capp");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cgen_capp");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cgen_capp");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			{	/* Cgen/capp.scm 15 */
				obj_t BgL_cportz00_2886;

				{	/* Cgen/capp.scm 15 */
					obj_t BgL_stringz00_2894;

					BgL_stringz00_2894 = BGl_string2228z00zzcgen_cappz00;
					{	/* Cgen/capp.scm 15 */
						obj_t BgL_startz00_2895;

						BgL_startz00_2895 = BINT(((long) 0));
						{	/* Cgen/capp.scm 15 */
							obj_t BgL_endz00_2896;

							BgL_endz00_2896 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2894)));
							{	/* Cgen/capp.scm 15 */

								BgL_cportz00_2886 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2894, BgL_startz00_2895, BgL_endz00_2896);
				}}}}
				{
					long BgL_iz00_2887;

					BgL_iz00_2887 = ((long) 5);
				BgL_loopz00_2888:
					if ((BgL_iz00_2887 == ((long) -1)))
						{	/* Cgen/capp.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/capp.scm 15 */
							{	/* Cgen/capp.scm 15 */
								obj_t BgL_arg2230z00_2890;

								{	/* Cgen/capp.scm 15 */

									{	/* Cgen/capp.scm 15 */
										obj_t BgL_locationz00_2892;

										BgL_locationz00_2892 = BBOOL(((bool_t) 0));
										{	/* Cgen/capp.scm 15 */

											BgL_arg2230z00_2890 =
												BGl_readz00zz__readerz00(BgL_cportz00_2886,
												BgL_locationz00_2892);
										}
									}
								}
								{	/* Cgen/capp.scm 15 */
									int BgL_tmpz00_3176;

									BgL_tmpz00_3176 = (int) (BgL_iz00_2887);
									CNST_TABLE_SET(BgL_tmpz00_3176, BgL_arg2230z00_2890);
							}}
							{	/* Cgen/capp.scm 15 */
								int BgL_auxz00_2893;

								BgL_auxz00_2893 = (int) ((BgL_iz00_2887 - ((long) 1)));
								{
									long BgL_iz00_3181;

									BgL_iz00_3181 = (long) (BgL_auxz00_2893);
									BgL_iz00_2887 = BgL_iz00_3181;
									goto BgL_loopz00_2888;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			return BUNSPEC;
		}

	}



/* node-sfun-non-tail-app->cop */
	obj_t
		BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_variablez00_bglt BgL_varz00_16, BgL_appz00_bglt BgL_nodez00_17,
		obj_t BgL_kontz00_18, obj_t BgL_inpushexitz00_19)
	{
		{	/* Cgen/capp.scm 225 */
			{	/* Cgen/capp.scm 226 */
				obj_t BgL_argsz00_1667;

				BgL_argsz00_1667 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_16))->
									BgL_valuez00))))->BgL_argsz00);
				{	/* Cgen/capp.scm 226 */
					obj_t BgL_argszd2typezd2_1668;

					if (NULLP(BgL_argsz00_1667))
						{	/* Cgen/capp.scm 227 */
							BgL_argszd2typezd2_1668 = BNIL;
						}
					else
						{	/* Cgen/capp.scm 227 */
							obj_t BgL_head1446z00_1745;

							{	/* Cgen/capp.scm 227 */
								obj_t BgL_res2117z00_2470;

								BgL_res2117z00_2470 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1446z00_1745 = BgL_res2117z00_2470;
							}
							{
								obj_t BgL_l1444z00_1747;
								obj_t BgL_tail1447z00_1748;

								BgL_l1444z00_1747 = BgL_argsz00_1667;
								BgL_tail1447z00_1748 = BgL_head1446z00_1745;
							BgL_zc3z04anonymousza31629ze3z87_1749:
								if (NULLP(BgL_l1444z00_1747))
									{	/* Cgen/capp.scm 227 */
										BgL_argszd2typezd2_1668 = CDR(BgL_head1446z00_1745);
									}
								else
									{	/* Cgen/capp.scm 227 */
										obj_t BgL_newtail1448z00_1751;

										{	/* Cgen/capp.scm 227 */
											obj_t BgL_arg1634z00_1753;

											{	/* Cgen/capp.scm 227 */
												obj_t BgL_xz00_1754;

												BgL_xz00_1754 = CAR(((obj_t) BgL_l1444z00_1747));
												if (BGl_isazf3zf3zz__objectz00(BgL_xz00_1754,
														BGl_localz00zzast_varz00))
													{	/* Cgen/capp.scm 227 */
														BgL_arg1634z00_1753 =
															((obj_t)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_xz00_1754))))->
																BgL_typez00));
													}
												else
													{	/* Cgen/capp.scm 227 */
														BgL_arg1634z00_1753 = BgL_xz00_1754;
													}
											}
											{	/* Cgen/capp.scm 227 */
												obj_t BgL_res2120z00_2476;

												BgL_res2120z00_2476 =
													MAKE_YOUNG_PAIR(BgL_arg1634z00_1753, BNIL);
												BgL_newtail1448z00_1751 = BgL_res2120z00_2476;
											}
										}
										SET_CDR(BgL_tail1447z00_1748, BgL_newtail1448z00_1751);
										{	/* Cgen/capp.scm 227 */
											obj_t BgL_arg1631z00_1752;

											BgL_arg1631z00_1752 = CDR(((obj_t) BgL_l1444z00_1747));
											{
												obj_t BgL_tail1447z00_3206;
												obj_t BgL_l1444z00_3205;

												BgL_l1444z00_3205 = BgL_arg1631z00_1752;
												BgL_tail1447z00_3206 = BgL_newtail1448z00_1751;
												BgL_tail1447z00_1748 = BgL_tail1447z00_3206;
												BgL_l1444z00_1747 = BgL_l1444z00_3205;
												goto BgL_zc3z04anonymousza31629ze3z87_1749;
											}
										}
									}
							}
						}
					{
						BgL_copz00_bglt BgL_copz00_1736;
						BgL_localz00_bglt BgL_auxz00_1737;

						{	/* Cgen/capp.scm 228 */

							{	/* Cgen/capp.scm 231 */
								obj_t BgL_g1209z00_1670;
								BgL_localz00_bglt BgL_g1211z00_1672;

								BgL_g1209z00_1670 =
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_17))->BgL_argsz00);
								BgL_g1211z00_1672 =
									BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF
									(((long) 0)),
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
								{
									obj_t BgL_oldzd2actualszd2_1676;
									obj_t BgL_argszd2typezd2_1677;
									obj_t BgL_newzd2actualszd2_1678;
									BgL_localz00_bglt BgL_auxz00_1679;
									obj_t BgL_auxsz00_1680;
									obj_t BgL_expsz00_1681;

									BgL_oldzd2actualszd2_1676 = BgL_g1209z00_1670;
									BgL_argszd2typezd2_1677 = BgL_argszd2typezd2_1668;
									BgL_newzd2actualszd2_1678 = BNIL;
									BgL_auxz00_1679 = BgL_g1211z00_1672;
									BgL_auxsz00_1680 = BNIL;
									BgL_expsz00_1681 = BNIL;
								BgL_zc3z04anonymousza31475ze3z87_1682:
									if (NULLP(BgL_oldzd2actualszd2_1676))
										{	/* Cgen/capp.scm 237 */
											if (NULLP(BgL_auxsz00_1680))
												{	/* Cgen/capp.scm 239 */
													BgL_cappz00_bglt BgL_arg1489z00_1685;

													{	/* Cgen/capp.scm 239 */
														BgL_cappz00_bglt BgL_new1215z00_1686;

														{	/* Cgen/capp.scm 240 */
															BgL_cappz00_bglt BgL_new1214z00_1688;

															BgL_new1214z00_1688 =
																((BgL_cappz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cappz00_bgl))));
															{	/* Cgen/capp.scm 240 */
																long BgL_arg1495z00_1689;

																{	/* Cgen/capp.scm 240 */
																	long BgL_res2124z00_2486;

																	BgL_res2124z00_2486 =
																		BGL_CLASS_INDEX(BGl_cappz00zzcgen_copz00);
																	BgL_arg1495z00_1689 = BgL_res2124z00_2486;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1214z00_1688),
																	BgL_arg1495z00_1689);
															}
															BgL_new1215z00_1686 = BgL_new1214z00_1688;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1215z00_1686)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_nodez00_17)))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_3223;

															{	/* Cgen/capp.scm 241 */
																BgL_varz00_bglt BgL_arg1493z00_1687;

																BgL_arg1493z00_1687 =
																	(((BgL_appz00_bglt) COBJECT(BgL_nodez00_17))->
																	BgL_funz00);
																BgL_auxz00_3223 =
																	BGl_nodezd2ze3copz31zzcgen_cgenz00((
																		(BgL_nodez00_bglt) BgL_arg1493z00_1687),
																	BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
																	CBOOL(BgL_inpushexitz00_19));
															}
															((((BgL_cappz00_bglt)
																		COBJECT(BgL_new1215z00_1686))->BgL_funz00) =
																((BgL_copz00_bglt) BgL_auxz00_3223), BUNSPEC);
														}
														((((BgL_cappz00_bglt)
																	COBJECT(BgL_new1215z00_1686))->BgL_argsz00) =
															((obj_t)
																bgl_reverse_bang(BgL_newzd2actualszd2_1678)),
															BUNSPEC);
														BgL_arg1489z00_1685 = BgL_new1215z00_1686;
													}
													return
														PROCEDURE_ENTRY(BgL_kontz00_18) (BgL_kontz00_18,
														((obj_t) BgL_arg1489z00_1685), BEOA);
												}
											else
												{	/* Cgen/capp.scm 246 */
													obj_t BgL_locz00_1690;

													BgL_locz00_1690 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_nodez00_17)))->
														BgL_locz00);
													{	/* Cgen/capp.scm 247 */
														BgL_cblockz00_bglt BgL_new1217z00_1691;

														{	/* Cgen/capp.scm 248 */
															BgL_cblockz00_bglt BgL_new1216z00_1712;

															BgL_new1216z00_1712 =
																((BgL_cblockz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cblockz00_bgl))));
															{	/* Cgen/capp.scm 248 */
																long BgL_arg1565z00_1713;

																{	/* Cgen/capp.scm 248 */
																	long BgL_res2125z00_2493;

																	BgL_res2125z00_2493 =
																		BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
																	BgL_arg1565z00_1713 = BgL_res2125z00_2493;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1216z00_1712),
																	BgL_arg1565z00_1713);
															}
															BgL_new1217z00_1691 = BgL_new1216z00_1712;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1217z00_1691)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_1690), BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_3244;

															{	/* Cgen/capp.scm 249 */
																BgL_csequencez00_bglt BgL_new1219z00_1692;

																{	/* Cgen/capp.scm 250 */
																	BgL_csequencez00_bglt BgL_new1218z00_1710;

																	BgL_new1218z00_1710 =
																		((BgL_csequencez00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_csequencez00_bgl))));
																	{	/* Cgen/capp.scm 250 */
																		long BgL_arg1564z00_1711;

																		{	/* Cgen/capp.scm 250 */
																			long BgL_res2126z00_2497;

																			{	/* Cgen/capp.scm 250 */
																				obj_t BgL_classz00_2496;

																				BgL_classz00_2496 =
																					BGl_csequencez00zzcgen_copz00;
																				BgL_res2126z00_2497 =
																					BGL_CLASS_INDEX(BgL_classz00_2496);
																			}
																			BgL_arg1564z00_1711 = BgL_res2126z00_2497;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1218z00_1710),
																			BgL_arg1564z00_1711);
																	}
																	BgL_new1219z00_1692 = BgL_new1218z00_1710;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1219z00_1692)))->BgL_locz00) =
																	((obj_t) BgL_locz00_1690), BUNSPEC);
																((((BgL_csequencez00_bglt)
																			COBJECT(BgL_new1219z00_1692))->
																		BgL_czd2expzf3z21) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																{
																	obj_t BgL_auxz00_3252;

																	{	/* Cgen/capp.scm 253 */
																		BgL_localzd2varzd2_bglt BgL_arg1497z00_1693;
																		BgL_csequencez00_bglt BgL_arg1518z00_1694;
																		obj_t BgL_arg1521z00_1695;

																		{	/* Cgen/capp.scm 253 */
																			BgL_localzd2varzd2_bglt
																				BgL_new1221z00_1699;
																			{	/* Cgen/capp.scm 254 */
																				BgL_localzd2varzd2_bglt
																					BgL_new1220z00_1700;
																				BgL_new1220z00_1700 =
																					((BgL_localzd2varzd2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_localzd2varzd2_bgl))));
																				{	/* Cgen/capp.scm 254 */
																					long BgL_arg1537z00_1701;

																					{	/* Cgen/capp.scm 254 */
																						long BgL_res2127z00_2501;

																						{	/* Cgen/capp.scm 254 */
																							obj_t BgL_classz00_2500;

																							BgL_classz00_2500 =
																								BGl_localzd2varzd2zzcgen_copz00;
																							BgL_res2127z00_2501 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2500);
																						}
																						BgL_arg1537z00_1701 =
																							BgL_res2127z00_2501;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1220z00_1700),
																						BgL_arg1537z00_1701);
																				}
																				BgL_new1221z00_1699 =
																					BgL_new1220z00_1700;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1221z00_1699)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_1690), BUNSPEC);
																			((((BgL_localzd2varzd2_bglt)
																						COBJECT(BgL_new1221z00_1699))->
																					BgL_varsz00) =
																				((obj_t) BgL_auxsz00_1680), BUNSPEC);
																			BgL_arg1497z00_1693 = BgL_new1221z00_1699;
																		}
																		{	/* Cgen/capp.scm 256 */
																			BgL_csequencez00_bglt BgL_new1223z00_1702;

																			{	/* Cgen/capp.scm 257 */
																				BgL_csequencez00_bglt
																					BgL_new1222z00_1703;
																				BgL_new1222z00_1703 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Cgen/capp.scm 257 */
																					long BgL_arg1540z00_1704;

																					{	/* Cgen/capp.scm 257 */
																						long BgL_res2128z00_2505;

																						{	/* Cgen/capp.scm 257 */
																							obj_t BgL_classz00_2504;

																							BgL_classz00_2504 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2128z00_2505 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2504);
																						}
																						BgL_arg1540z00_1704 =
																							BgL_res2128z00_2505;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1222z00_1703),
																						BgL_arg1540z00_1704);
																				}
																				BgL_new1223z00_1702 =
																					BgL_new1222z00_1703;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1223z00_1702)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_1690), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1223z00_1702))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1223z00_1702))->
																					BgL_copsz00) =
																				((obj_t) BgL_expsz00_1681), BUNSPEC);
																			BgL_arg1518z00_1694 = BgL_new1223z00_1702;
																		}
																		{	/* Cgen/capp.scm 259 */
																			BgL_cappz00_bglt BgL_arg1552z00_1705;

																			{	/* Cgen/capp.scm 259 */
																				BgL_cappz00_bglt BgL_new1225z00_1706;

																				{	/* Cgen/capp.scm 260 */
																					BgL_cappz00_bglt BgL_new1224z00_1708;

																					BgL_new1224z00_1708 =
																						((BgL_cappz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_cappz00_bgl))));
																					{	/* Cgen/capp.scm 260 */
																						long BgL_arg1561z00_1709;

																						{	/* Cgen/capp.scm 260 */
																							long BgL_res2129z00_2509;

																							{	/* Cgen/capp.scm 260 */
																								obj_t BgL_classz00_2508;

																								BgL_classz00_2508 =
																									BGl_cappz00zzcgen_copz00;
																								BgL_res2129z00_2509 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2508);
																							}
																							BgL_arg1561z00_1709 =
																								BgL_res2129z00_2509;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1224z00_1708),
																							BgL_arg1561z00_1709);
																					}
																					BgL_new1225z00_1706 =
																						BgL_new1224z00_1708;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1225z00_1706)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_1690), BUNSPEC);
																				{
																					BgL_copz00_bglt BgL_auxz00_3274;

																					{	/* Cgen/capp.scm 261 */
																						BgL_varz00_bglt BgL_arg1558z00_1707;

																						BgL_arg1558z00_1707 =
																							(((BgL_appz00_bglt)
																								COBJECT(BgL_nodez00_17))->
																							BgL_funz00);
																						BgL_auxz00_3274 =
																							BGl_nodezd2ze3copz31zzcgen_cgenz00
																							(((BgL_nodez00_bglt)
																								BgL_arg1558z00_1707),
																							BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
																							CBOOL(BgL_inpushexitz00_19));
																					}
																					((((BgL_cappz00_bglt)
																								COBJECT(BgL_new1225z00_1706))->
																							BgL_funz00) =
																						((BgL_copz00_bglt) BgL_auxz00_3274),
																						BUNSPEC);
																				}
																				((((BgL_cappz00_bglt)
																							COBJECT(BgL_new1225z00_1706))->
																						BgL_argsz00) =
																					((obj_t)
																						bgl_reverse_bang
																						(BgL_newzd2actualszd2_1678)),
																					BUNSPEC);
																				BgL_arg1552z00_1705 =
																					BgL_new1225z00_1706;
																			}
																			BgL_arg1521z00_1695 =
																				PROCEDURE_ENTRY(BgL_kontz00_18)
																				(BgL_kontz00_18,
																				((obj_t) BgL_arg1552z00_1705), BEOA);
																		}
																		{	/* Cgen/capp.scm 252 */
																			obj_t BgL_list1522z00_1696;

																			{	/* Cgen/capp.scm 252 */
																				obj_t BgL_arg1528z00_1697;

																				{	/* Cgen/capp.scm 252 */
																					obj_t BgL_arg1536z00_1698;

																					BgL_arg1536z00_1698 =
																						MAKE_YOUNG_PAIR(BgL_arg1521z00_1695,
																						BNIL);
																					BgL_arg1528z00_1697 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg1518z00_1694),
																						BgL_arg1536z00_1698);
																				}
																				BgL_list1522z00_1696 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1497z00_1693),
																					BgL_arg1528z00_1697);
																			}
																			BgL_auxz00_3252 = BgL_list1522z00_1696;
																	}}
																	((((BgL_csequencez00_bglt)
																				COBJECT(BgL_new1219z00_1692))->
																			BgL_copsz00) =
																		((obj_t) BgL_auxz00_3252), BUNSPEC);
																}
																BgL_auxz00_3244 =
																	((BgL_copz00_bglt) BgL_new1219z00_1692);
															}
															((((BgL_cblockz00_bglt)
																		COBJECT(BgL_new1217z00_1691))->
																	BgL_bodyz00) =
																((BgL_copz00_bglt) BgL_auxz00_3244), BUNSPEC);
														}
														return ((obj_t) BgL_new1217z00_1691);
													}
												}
										}
									else
										{	/* Cgen/capp.scm 264 */
											BgL_copz00_bglt BgL_copz00_1714;

											{	/* Cgen/capp.scm 264 */
												BgL_setqz00_bglt BgL_arg1612z00_1733;

												{	/* Cgen/capp.scm 264 */
													obj_t BgL_arg1613z00_1734;

													BgL_arg1613z00_1734 =
														CAR(((obj_t) BgL_oldzd2actualszd2_1676));
													BgL_arg1612z00_1733 =
														BGl_nodezd2setqzd2zzcgen_cgenz00(
														((BgL_variablez00_bglt) BgL_auxz00_1679),
														((BgL_nodez00_bglt) BgL_arg1613z00_1734));
												}
												BgL_copz00_1714 =
													BGl_nodezd2ze3copz31zzcgen_cgenz00(
													((BgL_nodez00_bglt) BgL_arg1612z00_1733),
													BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
													CBOOL(BgL_inpushexitz00_19));
											}
											{	/* Cgen/capp.scm 266 */
												bool_t BgL_test2246z00_3304;

												BgL_copz00_1736 = BgL_copz00_1714;
												BgL_auxz00_1737 = BgL_auxz00_1679;
												{	/* Cgen/capp.scm 229 */
													bool_t BgL_test2247z00_3305;

													{	/* Cgen/capp.scm 229 */
														bool_t BgL_res2121z00_2479;

														BgL_res2121z00_2479 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_copz00_1736),
															BGl_csetqz00zzcgen_copz00);
														BgL_test2247z00_3305 = BgL_res2121z00_2479;
													}
													if (BgL_test2247z00_3305)
														{	/* Cgen/capp.scm 229 */
															BgL_test2246z00_3304 =
																(
																((obj_t)
																	(((BgL_varcz00_bglt) COBJECT(
																				(((BgL_csetqz00_bglt) COBJECT(
																							((BgL_csetqz00_bglt)
																								BgL_copz00_1736)))->
																					BgL_varz00)))->BgL_variablez00)) ==
																((obj_t) BgL_auxz00_1737));
														}
													else
														{	/* Cgen/capp.scm 229 */
															BgL_test2246z00_3304 = ((bool_t) 0);
														}
												}
												if (BgL_test2246z00_3304)
													{	/* Cgen/capp.scm 267 */
														obj_t BgL_arg1573z00_1716;
														obj_t BgL_arg1575z00_1717;
														obj_t BgL_arg1578z00_1718;

														BgL_arg1573z00_1716 =
															CDR(((obj_t) BgL_oldzd2actualszd2_1676));
														BgL_arg1575z00_1717 =
															CDR(((obj_t) BgL_argszd2typezd2_1677));
														{	/* Cgen/capp.scm 269 */
															BgL_copz00_bglt BgL_arg1582z00_1719;

															BgL_arg1582z00_1719 =
																(((BgL_csetqz00_bglt) COBJECT(
																		((BgL_csetqz00_bglt) BgL_copz00_1714)))->
																BgL_valuez00);
															BgL_arg1578z00_1718 =
																MAKE_YOUNG_PAIR(((obj_t) BgL_arg1582z00_1719),
																BgL_newzd2actualszd2_1678);
														}
														{
															obj_t BgL_newzd2actualszd2_3324;
															obj_t BgL_argszd2typezd2_3323;
															obj_t BgL_oldzd2actualszd2_3322;

															BgL_oldzd2actualszd2_3322 = BgL_arg1573z00_1716;
															BgL_argszd2typezd2_3323 = BgL_arg1575z00_1717;
															BgL_newzd2actualszd2_3324 = BgL_arg1578z00_1718;
															BgL_newzd2actualszd2_1678 =
																BgL_newzd2actualszd2_3324;
															BgL_argszd2typezd2_1677 = BgL_argszd2typezd2_3323;
															BgL_oldzd2actualszd2_1676 =
																BgL_oldzd2actualszd2_3322;
															goto BgL_zc3z04anonymousza31475ze3z87_1682;
														}
													}
												else
													{	/* Cgen/capp.scm 266 */
														{	/* Cgen/capp.scm 274 */
															obj_t BgL_arg1584z00_1720;

															BgL_arg1584z00_1720 =
																CAR(((obj_t) BgL_argszd2typezd2_1677));
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_auxz00_1679)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BgL_arg1584z00_1720)), BUNSPEC);
														}
														{	/* Cgen/capp.scm 275 */
															obj_t BgL_arg1588z00_1721;
															obj_t BgL_arg1589z00_1722;
															obj_t BgL_arg1592z00_1723;
															BgL_localz00_bglt BgL_arg1593z00_1724;
															obj_t BgL_arg1597z00_1725;
															obj_t BgL_arg1599z00_1726;

															BgL_arg1588z00_1721 =
																CDR(((obj_t) BgL_oldzd2actualszd2_1676));
															BgL_arg1589z00_1722 =
																CDR(((obj_t) BgL_argszd2typezd2_1677));
															{	/* Cgen/capp.scm 277 */
																BgL_varcz00_bglt BgL_arg1604z00_1727;

																{	/* Cgen/capp.scm 277 */
																	BgL_varcz00_bglt BgL_new1227z00_1728;

																	{	/* Cgen/capp.scm 279 */
																		BgL_varcz00_bglt BgL_new1226z00_1730;

																		BgL_new1226z00_1730 =
																			((BgL_varcz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varcz00_bgl))));
																		{	/* Cgen/capp.scm 279 */
																			long BgL_arg1606z00_1731;

																			{	/* Cgen/capp.scm 279 */
																				long BgL_res2131z00_2524;

																				BgL_res2131z00_2524 =
																					BGL_CLASS_INDEX
																					(BGl_varcz00zzcgen_copz00);
																				BgL_arg1606z00_1731 =
																					BgL_res2131z00_2524;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1226z00_1730),
																				BgL_arg1606z00_1731);
																		}
																		BgL_new1227z00_1728 = BgL_new1226z00_1730;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1227z00_1728)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							CAR(((obj_t)
																									BgL_oldzd2actualszd2_1676)))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_varcz00_bglt)
																				COBJECT(BgL_new1227z00_1728))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_auxz00_1679)), BUNSPEC);
																	BgL_arg1604z00_1727 = BgL_new1227z00_1728;
																}
																BgL_arg1592z00_1723 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1604z00_1727),
																	BgL_newzd2actualszd2_1678);
															}
															{	/* Cgen/capp.scm 281 */
																obj_t BgL_arg1611z00_1732;

																BgL_arg1611z00_1732 =
																	CAR(((obj_t) BgL_argszd2typezd2_1677));
																BgL_arg1593z00_1724 =
																	BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
																	(CNST_TABLE_REF(((long) 0)),
																	((BgL_typez00_bglt) BgL_arg1611z00_1732));
															}
															BgL_arg1597z00_1725 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_auxz00_1679), BgL_auxsz00_1680);
															BgL_arg1599z00_1726 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_copz00_1714), BgL_expsz00_1681);
															{
																obj_t BgL_expsz00_3362;
																obj_t BgL_auxsz00_3361;
																BgL_localz00_bglt BgL_auxz00_3360;
																obj_t BgL_newzd2actualszd2_3359;
																obj_t BgL_argszd2typezd2_3358;
																obj_t BgL_oldzd2actualszd2_3357;

																BgL_oldzd2actualszd2_3357 = BgL_arg1588z00_1721;
																BgL_argszd2typezd2_3358 = BgL_arg1589z00_1722;
																BgL_newzd2actualszd2_3359 = BgL_arg1592z00_1723;
																BgL_auxz00_3360 = BgL_arg1593z00_1724;
																BgL_auxsz00_3361 = BgL_arg1597z00_1725;
																BgL_expsz00_3362 = BgL_arg1599z00_1726;
																BgL_expsz00_1681 = BgL_expsz00_3362;
																BgL_auxsz00_1680 = BgL_auxsz00_3361;
																BgL_auxz00_1679 = BgL_auxz00_3360;
																BgL_newzd2actualszd2_1678 =
																	BgL_newzd2actualszd2_3359;
																BgL_argszd2typezd2_1677 =
																	BgL_argszd2typezd2_3358;
																BgL_oldzd2actualszd2_1676 =
																	BgL_oldzd2actualszd2_3357;
																goto BgL_zc3z04anonymousza31475ze3z87_1682;
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



/* node-cfun-non-tail-app->cop */
	obj_t
		BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
		(BgL_variablez00_bglt BgL_varz00_21, BgL_appz00_bglt BgL_nodez00_22,
		obj_t BgL_kontz00_23, obj_t BgL_inpushexitz00_24)
	{
		{	/* Cgen/capp.scm 299 */
			{	/* Cgen/capp.scm 300 */
				bool_t BgL_test2248z00_3363;

				if (CBOOL(BgL_inpushexitz00_24))
					{	/* Cgen/capp.scm 300 */
						BgL_test2248z00_3363 =
							(
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_21))->BgL_idz00) ==
							CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Cgen/capp.scm 300 */
						BgL_test2248z00_3363 = ((bool_t) 0);
					}
				if (BgL_test2248z00_3363)
					{	/* Cgen/capp.scm 301 */
						BgL_cpragmaz00_bglt BgL_arg1644z00_1760;

						{	/* Cgen/capp.scm 301 */
							BgL_cpragmaz00_bglt BgL_new1229z00_1761;

							{	/* Cgen/capp.scm 302 */
								BgL_cpragmaz00_bglt BgL_new1228z00_1762;

								BgL_new1228z00_1762 =
									((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_cpragmaz00_bgl))));
								{	/* Cgen/capp.scm 302 */
									long BgL_arg1652z00_1763;

									{	/* Cgen/capp.scm 302 */
										long BgL_res2132z00_2535;

										BgL_res2132z00_2535 =
											BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
										BgL_arg1652z00_1763 = BgL_res2132z00_2535;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1228z00_1762),
										BgL_arg1652z00_1763);
								}
								BgL_new1229z00_1761 = BgL_new1228z00_1762;
							}
							((((BgL_copz00_bglt) COBJECT(
											((BgL_copz00_bglt) BgL_new1229z00_1761)))->BgL_locz00) =
								((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_nodez00_22)))->BgL_locz00)), BUNSPEC);
							((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1229z00_1761))->
									BgL_formatz00) =
								((obj_t) BGl_string2222z00zzcgen_cappz00), BUNSPEC);
							((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1229z00_1761))->
									BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
							BgL_arg1644z00_1760 = BgL_new1229z00_1761;
						}
						return
							PROCEDURE_ENTRY(BgL_kontz00_23) (BgL_kontz00_23,
							((obj_t) BgL_arg1644z00_1760), BEOA);
					}
				else
					{	/* Cgen/capp.scm 305 */
						obj_t BgL_argszd2typezd2_1764;

						BgL_argszd2typezd2_1764 =
							(((BgL_cfunz00_bglt) COBJECT(
									((BgL_cfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(BgL_varz00_21))->
											BgL_valuez00))))->BgL_argszd2typezd2);
						{
							BgL_copz00_bglt BgL_copz00_1839;
							BgL_localz00_bglt BgL_auxz00_1840;

							{	/* Cgen/capp.scm 312 */
								obj_t BgL_g1234z00_1766;
								BgL_localz00_bglt BgL_g1236z00_1768;

								BgL_g1234z00_1766 =
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_22))->BgL_argsz00);
								BgL_g1236z00_1768 =
									BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF
									(((long) 2)),
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
								{
									obj_t BgL_oldzd2actualszd2_1772;
									obj_t BgL_argszd2typezd2_1773;
									obj_t BgL_newzd2actualszd2_1774;
									BgL_localz00_bglt BgL_auxz00_1775;
									obj_t BgL_auxsz00_1776;
									obj_t BgL_expsz00_1777;

									BgL_oldzd2actualszd2_1772 = BgL_g1234z00_1766;
									BgL_argszd2typezd2_1773 = BgL_argszd2typezd2_1764;
									BgL_newzd2actualszd2_1774 = BNIL;
									BgL_auxz00_1775 = BgL_g1236z00_1768;
									BgL_auxsz00_1776 = BNIL;
									BgL_expsz00_1777 = BNIL;
								BgL_zc3z04anonymousza31653ze3z87_1778:
									if (NULLP(BgL_oldzd2actualszd2_1772))
										{	/* Cgen/capp.scm 318 */
											if (NULLP(BgL_auxsz00_1776))
												{	/* Cgen/capp.scm 320 */
													BgL_cappz00_bglt BgL_arg1662z00_1781;

													{	/* Cgen/capp.scm 320 */
														BgL_cappz00_bglt BgL_new1240z00_1782;

														{	/* Cgen/capp.scm 321 */
															BgL_cappz00_bglt BgL_new1239z00_1784;

															BgL_new1239z00_1784 =
																((BgL_cappz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cappz00_bgl))));
															{	/* Cgen/capp.scm 321 */
																long BgL_arg1664z00_1785;

																{	/* Cgen/capp.scm 321 */
																	long BgL_res2138z00_2552;

																	BgL_res2138z00_2552 =
																		BGL_CLASS_INDEX(BGl_cappz00zzcgen_copz00);
																	BgL_arg1664z00_1785 = BgL_res2138z00_2552;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1239z00_1784),
																	BgL_arg1664z00_1785);
															}
															BgL_new1240z00_1782 = BgL_new1239z00_1784;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1240z00_1782)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_nodez00_22)))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_3403;

															{	/* Cgen/capp.scm 322 */
																BgL_varz00_bglt BgL_arg1663z00_1783;

																BgL_arg1663z00_1783 =
																	(((BgL_appz00_bglt) COBJECT(BgL_nodez00_22))->
																	BgL_funz00);
																BgL_auxz00_3403 =
																	BGl_nodezd2ze3copz31zzcgen_cgenz00((
																		(BgL_nodez00_bglt) BgL_arg1663z00_1783),
																	BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
																	CBOOL(BgL_inpushexitz00_24));
															}
															((((BgL_cappz00_bglt)
																		COBJECT(BgL_new1240z00_1782))->BgL_funz00) =
																((BgL_copz00_bglt) BgL_auxz00_3403), BUNSPEC);
														}
														((((BgL_cappz00_bglt)
																	COBJECT(BgL_new1240z00_1782))->BgL_argsz00) =
															((obj_t)
																bgl_reverse_bang(BgL_newzd2actualszd2_1774)),
															BUNSPEC);
														BgL_arg1662z00_1781 = BgL_new1240z00_1782;
													}
													return
														PROCEDURE_ENTRY(BgL_kontz00_23) (BgL_kontz00_23,
														((obj_t) BgL_arg1662z00_1781), BEOA);
												}
											else
												{	/* Cgen/capp.scm 329 */
													obj_t BgL_locz00_1786;

													BgL_locz00_1786 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_nodez00_22)))->
														BgL_locz00);
													{	/* Cgen/capp.scm 330 */
														BgL_cblockz00_bglt BgL_new1242z00_1787;

														{	/* Cgen/capp.scm 331 */
															BgL_cblockz00_bglt BgL_new1241z00_1808;

															BgL_new1241z00_1808 =
																((BgL_cblockz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cblockz00_bgl))));
															{	/* Cgen/capp.scm 331 */
																long BgL_arg1697z00_1809;

																{	/* Cgen/capp.scm 331 */
																	long BgL_res2139z00_2559;

																	BgL_res2139z00_2559 =
																		BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
																	BgL_arg1697z00_1809 = BgL_res2139z00_2559;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1241z00_1808),
																	BgL_arg1697z00_1809);
															}
															BgL_new1242z00_1787 = BgL_new1241z00_1808;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1242z00_1787)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_1786), BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_3424;

															{	/* Cgen/capp.scm 332 */
																BgL_csequencez00_bglt BgL_new1245z00_1788;

																{	/* Cgen/capp.scm 333 */
																	BgL_csequencez00_bglt BgL_new1243z00_1806;

																	BgL_new1243z00_1806 =
																		((BgL_csequencez00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_csequencez00_bgl))));
																	{	/* Cgen/capp.scm 333 */
																		long BgL_arg1696z00_1807;

																		{	/* Cgen/capp.scm 333 */
																			long BgL_res2140z00_2563;

																			{	/* Cgen/capp.scm 333 */
																				obj_t BgL_classz00_2562;

																				BgL_classz00_2562 =
																					BGl_csequencez00zzcgen_copz00;
																				BgL_res2140z00_2563 =
																					BGL_CLASS_INDEX(BgL_classz00_2562);
																			}
																			BgL_arg1696z00_1807 = BgL_res2140z00_2563;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1243z00_1806),
																			BgL_arg1696z00_1807);
																	}
																	BgL_new1245z00_1788 = BgL_new1243z00_1806;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1245z00_1788)))->BgL_locz00) =
																	((obj_t) BgL_locz00_1786), BUNSPEC);
																((((BgL_csequencez00_bglt)
																			COBJECT(BgL_new1245z00_1788))->
																		BgL_czd2expzf3z21) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																{
																	obj_t BgL_auxz00_3432;

																	{	/* Cgen/capp.scm 336 */
																		BgL_localzd2varzd2_bglt BgL_arg1667z00_1789;
																		BgL_csequencez00_bglt BgL_arg1669z00_1790;
																		obj_t BgL_arg1672z00_1791;

																		{	/* Cgen/capp.scm 336 */
																			BgL_localzd2varzd2_bglt
																				BgL_new1247z00_1795;
																			{	/* Cgen/capp.scm 337 */
																				BgL_localzd2varzd2_bglt
																					BgL_new1246z00_1796;
																				BgL_new1246z00_1796 =
																					((BgL_localzd2varzd2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_localzd2varzd2_bgl))));
																				{	/* Cgen/capp.scm 337 */
																					long BgL_arg1686z00_1797;

																					{	/* Cgen/capp.scm 337 */
																						long BgL_res2141z00_2567;

																						{	/* Cgen/capp.scm 337 */
																							obj_t BgL_classz00_2566;

																							BgL_classz00_2566 =
																								BGl_localzd2varzd2zzcgen_copz00;
																							BgL_res2141z00_2567 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2566);
																						}
																						BgL_arg1686z00_1797 =
																							BgL_res2141z00_2567;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1246z00_1796),
																						BgL_arg1686z00_1797);
																				}
																				BgL_new1247z00_1795 =
																					BgL_new1246z00_1796;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1247z00_1795)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_1786), BUNSPEC);
																			((((BgL_localzd2varzd2_bglt)
																						COBJECT(BgL_new1247z00_1795))->
																					BgL_varsz00) =
																				((obj_t) BgL_auxsz00_1776), BUNSPEC);
																			BgL_arg1667z00_1789 = BgL_new1247z00_1795;
																		}
																		{	/* Cgen/capp.scm 339 */
																			BgL_csequencez00_bglt BgL_new1249z00_1798;

																			{	/* Cgen/capp.scm 340 */
																				BgL_csequencez00_bglt
																					BgL_new1248z00_1799;
																				BgL_new1248z00_1799 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Cgen/capp.scm 340 */
																					long BgL_arg1687z00_1800;

																					{	/* Cgen/capp.scm 340 */
																						long BgL_res2142z00_2571;

																						{	/* Cgen/capp.scm 340 */
																							obj_t BgL_classz00_2570;

																							BgL_classz00_2570 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2142z00_2571 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2570);
																						}
																						BgL_arg1687z00_1800 =
																							BgL_res2142z00_2571;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1248z00_1799),
																						BgL_arg1687z00_1800);
																				}
																				BgL_new1249z00_1798 =
																					BgL_new1248z00_1799;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1249z00_1798)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_1786), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1249z00_1798))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1249z00_1798))->
																					BgL_copsz00) =
																				((obj_t) BgL_expsz00_1777), BUNSPEC);
																			BgL_arg1669z00_1790 = BgL_new1249z00_1798;
																		}
																		{	/* Cgen/capp.scm 342 */
																			BgL_cappz00_bglt BgL_arg1688z00_1801;

																			{	/* Cgen/capp.scm 342 */
																				BgL_cappz00_bglt BgL_new1251z00_1802;

																				{	/* Cgen/capp.scm 343 */
																					BgL_cappz00_bglt BgL_new1250z00_1804;

																					BgL_new1250z00_1804 =
																						((BgL_cappz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_cappz00_bgl))));
																					{	/* Cgen/capp.scm 343 */
																						long BgL_arg1695z00_1805;

																						{	/* Cgen/capp.scm 343 */
																							long BgL_res2143z00_2575;

																							{	/* Cgen/capp.scm 343 */
																								obj_t BgL_classz00_2574;

																								BgL_classz00_2574 =
																									BGl_cappz00zzcgen_copz00;
																								BgL_res2143z00_2575 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2574);
																							}
																							BgL_arg1695z00_1805 =
																								BgL_res2143z00_2575;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1250z00_1804),
																							BgL_arg1695z00_1805);
																					}
																					BgL_new1251z00_1802 =
																						BgL_new1250z00_1804;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1251z00_1802)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_1786), BUNSPEC);
																				{
																					BgL_copz00_bglt BgL_auxz00_3454;

																					{	/* Cgen/capp.scm 344 */
																						BgL_varz00_bglt BgL_arg1692z00_1803;

																						BgL_arg1692z00_1803 =
																							(((BgL_appz00_bglt)
																								COBJECT(BgL_nodez00_22))->
																							BgL_funz00);
																						BgL_auxz00_3454 =
																							BGl_nodezd2ze3copz31zzcgen_cgenz00
																							(((BgL_nodez00_bglt)
																								BgL_arg1692z00_1803),
																							BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
																							CBOOL(BgL_inpushexitz00_24));
																					}
																					((((BgL_cappz00_bglt)
																								COBJECT(BgL_new1251z00_1802))->
																							BgL_funz00) =
																						((BgL_copz00_bglt) BgL_auxz00_3454),
																						BUNSPEC);
																				}
																				((((BgL_cappz00_bglt)
																							COBJECT(BgL_new1251z00_1802))->
																						BgL_argsz00) =
																					((obj_t)
																						bgl_reverse_bang
																						(BgL_newzd2actualszd2_1774)),
																					BUNSPEC);
																				BgL_arg1688z00_1801 =
																					BgL_new1251z00_1802;
																			}
																			BgL_arg1672z00_1791 =
																				PROCEDURE_ENTRY(BgL_kontz00_23)
																				(BgL_kontz00_23,
																				((obj_t) BgL_arg1688z00_1801), BEOA);
																		}
																		{	/* Cgen/capp.scm 335 */
																			obj_t BgL_list1673z00_1792;

																			{	/* Cgen/capp.scm 335 */
																				obj_t BgL_arg1684z00_1793;

																				{	/* Cgen/capp.scm 335 */
																					obj_t BgL_arg1685z00_1794;

																					BgL_arg1685z00_1794 =
																						MAKE_YOUNG_PAIR(BgL_arg1672z00_1791,
																						BNIL);
																					BgL_arg1684z00_1793 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg1669z00_1790),
																						BgL_arg1685z00_1794);
																				}
																				BgL_list1673z00_1792 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1667z00_1789),
																					BgL_arg1684z00_1793);
																			}
																			BgL_auxz00_3432 = BgL_list1673z00_1792;
																	}}
																	((((BgL_csequencez00_bglt)
																				COBJECT(BgL_new1245z00_1788))->
																			BgL_copsz00) =
																		((obj_t) BgL_auxz00_3432), BUNSPEC);
																}
																BgL_auxz00_3424 =
																	((BgL_copz00_bglt) BgL_new1245z00_1788);
															}
															((((BgL_cblockz00_bglt)
																		COBJECT(BgL_new1242z00_1787))->
																	BgL_bodyz00) =
																((BgL_copz00_bglt) BgL_auxz00_3424), BUNSPEC);
														}
														return ((obj_t) BgL_new1242z00_1787);
													}
												}
										}
									else
										{	/* Cgen/capp.scm 348 */
											BgL_copz00_bglt BgL_copz00_1810;

											{	/* Cgen/capp.scm 348 */
												BgL_setqz00_bglt BgL_arg1745z00_1835;

												{	/* Cgen/capp.scm 348 */
													obj_t BgL_arg1746z00_1836;

													BgL_arg1746z00_1836 =
														CAR(((obj_t) BgL_oldzd2actualszd2_1772));
													BgL_arg1745z00_1835 =
														BGl_nodezd2setqzd2zzcgen_cgenz00(
														((BgL_variablez00_bglt) BgL_auxz00_1775),
														((BgL_nodez00_bglt) BgL_arg1746z00_1836));
												}
												BgL_copz00_1810 =
													BGl_nodezd2ze3copz31zzcgen_cgenz00(
													((BgL_nodez00_bglt) BgL_arg1745z00_1835),
													BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
													CBOOL(BgL_inpushexitz00_24));
											}
											{	/* Cgen/capp.scm 350 */
												bool_t BgL_test2252z00_3484;

												BgL_copz00_1839 = BgL_copz00_1810;
												BgL_auxz00_1840 = BgL_auxz00_1775;
												{	/* Cgen/capp.scm 307 */
													bool_t BgL_test2253z00_3485;

													{	/* Cgen/capp.scm 307 */
														bool_t BgL_res2133z00_2541;

														BgL_res2133z00_2541 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_copz00_1839),
															BGl_csetqz00zzcgen_copz00);
														BgL_test2253z00_3485 = BgL_res2133z00_2541;
													}
													if (BgL_test2253z00_3485)
														{	/* Cgen/capp.scm 307 */
															if (
																(((obj_t)
																		(((BgL_varcz00_bglt) COBJECT(
																					(((BgL_csetqz00_bglt) COBJECT(
																								((BgL_csetqz00_bglt)
																									BgL_copz00_1839)))->
																						BgL_varz00)))->BgL_variablez00)) ==
																	((obj_t) BgL_auxz00_1840)))
																{	/* Cgen/capp.scm 309 */
																	bool_t BgL__ortest_1232z00_1844;

																	BgL__ortest_1232z00_1844 =
																		BGl_globalzd2argszd2safezf3zf3zzast_varz00(
																		((BgL_globalz00_bglt) BgL_varz00_21));
																	if (BgL__ortest_1232z00_1844)
																		{	/* Cgen/capp.scm 309 */
																			BgL_test2252z00_3484 =
																				BgL__ortest_1232z00_1844;
																		}
																	else
																		{	/* Cgen/capp.scm 310 */
																			bool_t BgL__ortest_1233z00_1845;

																			{	/* Cgen/capp.scm 310 */
																				BgL_copz00_bglt BgL_arg1755z00_1847;

																				BgL_arg1755z00_1847 =
																					(((BgL_csetqz00_bglt) COBJECT(
																							((BgL_csetqz00_bglt)
																								BgL_copz00_1839)))->
																					BgL_valuez00);
																				{	/* Cgen/capp.scm 310 */
																					bool_t BgL_res2134z00_2545;

																					BgL_res2134z00_2545 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_arg1755z00_1847),
																						BGl_catomz00zzcgen_copz00);
																					BgL__ortest_1233z00_1845 =
																						BgL_res2134z00_2545;
																				}
																			}
																			if (BgL__ortest_1233z00_1845)
																				{	/* Cgen/capp.scm 310 */
																					BgL_test2252z00_3484 =
																						BgL__ortest_1233z00_1845;
																				}
																			else
																				{	/* Cgen/capp.scm 311 */
																					BgL_copz00_bglt BgL_arg1754z00_1846;

																					BgL_arg1754z00_1846 =
																						(((BgL_csetqz00_bglt) COBJECT(
																								((BgL_csetqz00_bglt)
																									BgL_copz00_1839)))->
																						BgL_valuez00);
																					{	/* Cgen/capp.scm 311 */
																						bool_t BgL_res2135z00_2547;

																						BgL_res2135z00_2547 =
																							BGl_isazf3zf3zz__objectz00(
																							((obj_t) BgL_arg1754z00_1846),
																							BGl_varcz00zzcgen_copz00);
																						BgL_test2252z00_3484 =
																							BgL_res2135z00_2547;
																					}
																				}
																		}
																}
															else
																{	/* Cgen/capp.scm 308 */
																	BgL_test2252z00_3484 = ((bool_t) 0);
																}
														}
													else
														{	/* Cgen/capp.scm 307 */
															BgL_test2252z00_3484 = ((bool_t) 0);
														}
												}
												if (BgL_test2252z00_3484)
													{	/* Cgen/capp.scm 351 */
														obj_t BgL_arg1704z00_1812;
														obj_t BgL_arg1707z00_1813;
														obj_t BgL_arg1708z00_1814;

														BgL_arg1704z00_1812 =
															CDR(((obj_t) BgL_oldzd2actualszd2_1772));
														if (NULLP(CDR(((obj_t) BgL_argszd2typezd2_1773))))
															{	/* Cgen/capp.scm 352 */
																BgL_arg1707z00_1813 = BgL_argszd2typezd2_1773;
															}
														else
															{	/* Cgen/capp.scm 352 */
																BgL_arg1707z00_1813 =
																	CDR(((obj_t) BgL_argszd2typezd2_1773));
															}
														{	/* Cgen/capp.scm 355 */
															BgL_copz00_bglt BgL_arg1725z00_1818;

															BgL_arg1725z00_1818 =
																(((BgL_csetqz00_bglt) COBJECT(
																		((BgL_csetqz00_bglt) BgL_copz00_1810)))->
																BgL_valuez00);
															BgL_arg1708z00_1814 =
																MAKE_YOUNG_PAIR(((obj_t) BgL_arg1725z00_1818),
																BgL_newzd2actualszd2_1774);
														}
														{
															obj_t BgL_newzd2actualszd2_3521;
															obj_t BgL_argszd2typezd2_3520;
															obj_t BgL_oldzd2actualszd2_3519;

															BgL_oldzd2actualszd2_3519 = BgL_arg1704z00_1812;
															BgL_argszd2typezd2_3520 = BgL_arg1707z00_1813;
															BgL_newzd2actualszd2_3521 = BgL_arg1708z00_1814;
															BgL_newzd2actualszd2_1774 =
																BgL_newzd2actualszd2_3521;
															BgL_argszd2typezd2_1773 = BgL_argszd2typezd2_3520;
															BgL_oldzd2actualszd2_1772 =
																BgL_oldzd2actualszd2_3519;
															goto BgL_zc3z04anonymousza31653ze3z87_1778;
														}
													}
												else
													{	/* Cgen/capp.scm 350 */
														{	/* Cgen/capp.scm 360 */
															obj_t BgL_arg1726z00_1819;

															BgL_arg1726z00_1819 =
																CAR(((obj_t) BgL_argszd2typezd2_1773));
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_auxz00_1775)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BgL_arg1726z00_1819)), BUNSPEC);
														}
														{	/* Cgen/capp.scm 361 */
															obj_t BgL_arg1727z00_1820;
															obj_t BgL_arg1728z00_1821;
															obj_t BgL_arg1729z00_1822;
															BgL_localz00_bglt BgL_arg1731z00_1823;
															obj_t BgL_arg1732z00_1824;
															obj_t BgL_arg1733z00_1825;

															BgL_arg1727z00_1820 =
																CDR(((obj_t) BgL_oldzd2actualszd2_1772));
															if (NULLP(CDR(((obj_t) BgL_argszd2typezd2_1773))))
																{	/* Cgen/capp.scm 362 */
																	BgL_arg1728z00_1821 = BgL_argszd2typezd2_1773;
																}
															else
																{	/* Cgen/capp.scm 362 */
																	BgL_arg1728z00_1821 =
																		CDR(((obj_t) BgL_argszd2typezd2_1773));
																}
															{	/* Cgen/capp.scm 365 */
																BgL_varcz00_bglt BgL_arg1741z00_1829;

																{	/* Cgen/capp.scm 365 */
																	BgL_varcz00_bglt BgL_new1253z00_1830;

																	{	/* Cgen/capp.scm 367 */
																		BgL_varcz00_bglt BgL_new1252z00_1832;

																		BgL_new1252z00_1832 =
																			((BgL_varcz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varcz00_bgl))));
																		{	/* Cgen/capp.scm 367 */
																			long BgL_arg1743z00_1833;

																			{	/* Cgen/capp.scm 367 */
																				long BgL_res2147z00_2594;

																				BgL_res2147z00_2594 =
																					BGL_CLASS_INDEX
																					(BGl_varcz00zzcgen_copz00);
																				BgL_arg1743z00_1833 =
																					BgL_res2147z00_2594;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1252z00_1832),
																				BgL_arg1743z00_1833);
																		}
																		BgL_new1253z00_1830 = BgL_new1252z00_1832;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1253z00_1830)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							CAR(((obj_t)
																									BgL_oldzd2actualszd2_1772)))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_varcz00_bglt)
																				COBJECT(BgL_new1253z00_1830))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_auxz00_1775)), BUNSPEC);
																	BgL_arg1741z00_1829 = BgL_new1253z00_1830;
																}
																BgL_arg1729z00_1822 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1741z00_1829),
																	BgL_newzd2actualszd2_1774);
															}
															{	/* Cgen/capp.scm 369 */
																obj_t BgL_arg1744z00_1834;

																BgL_arg1744z00_1834 =
																	CAR(((obj_t) BgL_argszd2typezd2_1773));
																BgL_arg1731z00_1823 =
																	BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
																	(CNST_TABLE_REF(((long) 0)),
																	((BgL_typez00_bglt) BgL_arg1744z00_1834));
															}
															BgL_arg1732z00_1824 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_auxz00_1775), BgL_auxsz00_1776);
															BgL_arg1733z00_1825 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_copz00_1810), BgL_expsz00_1777);
															{
																obj_t BgL_expsz00_3563;
																obj_t BgL_auxsz00_3562;
																BgL_localz00_bglt BgL_auxz00_3561;
																obj_t BgL_newzd2actualszd2_3560;
																obj_t BgL_argszd2typezd2_3559;
																obj_t BgL_oldzd2actualszd2_3558;

																BgL_oldzd2actualszd2_3558 = BgL_arg1727z00_1820;
																BgL_argszd2typezd2_3559 = BgL_arg1728z00_1821;
																BgL_newzd2actualszd2_3560 = BgL_arg1729z00_1822;
																BgL_auxz00_3561 = BgL_arg1731z00_1823;
																BgL_auxsz00_3562 = BgL_arg1732z00_1824;
																BgL_expsz00_3563 = BgL_arg1733z00_1825;
																BgL_expsz00_1777 = BgL_expsz00_3563;
																BgL_auxsz00_1776 = BgL_auxsz00_3562;
																BgL_auxz00_1775 = BgL_auxz00_3561;
																BgL_newzd2actualszd2_1774 =
																	BgL_newzd2actualszd2_3560;
																BgL_argszd2typezd2_1773 =
																	BgL_argszd2typezd2_3559;
																BgL_oldzd2actualszd2_1772 =
																	BgL_oldzd2actualszd2_3558;
																goto BgL_zc3z04anonymousza31653ze3z87_1778;
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



/* node-tail-app->cop */
	obj_t BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00(BgL_variablez00_bglt
		BgL_varz00_25, BgL_appz00_bglt BgL_nodez00_26, obj_t BgL_kontz00_27,
		obj_t BgL_inpushexitz00_28)
	{
		{	/* Cgen/capp.scm 381 */
			{	/* Cgen/capp.scm 387 */
				BgL_clabelz00_bglt BgL_labelz00_1851;
				obj_t BgL_argsz00_1852;
				obj_t BgL_locz00_1853;

				{	/* Cgen/capp.scm 387 */
					BgL_sfunz00_bglt BgL_oz00_2601;

					BgL_oz00_2601 =
						((BgL_sfunz00_bglt)
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_25))->BgL_valuez00));
					{
						BgL_sfunzf2czf2_bglt BgL_auxz00_3566;

						{
							obj_t BgL_auxz00_3567;

							{	/* Cgen/capp.scm 387 */
								BgL_objectz00_bglt BgL_tmpz00_3568;

								BgL_tmpz00_3568 = ((BgL_objectz00_bglt) BgL_oz00_2601);
								BgL_auxz00_3567 = BGL_OBJECT_WIDENING(BgL_tmpz00_3568);
							}
							BgL_auxz00_3566 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_3567);
						}
						BgL_labelz00_1851 =
							(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_3566))->BgL_labelz00);
					}
				}
				BgL_argsz00_1852 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_25))->
									BgL_valuez00))))->BgL_argsz00);
				BgL_locz00_1853 =
					(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_nodez00_26)))->
					BgL_locz00);
				{	/* Cgen/capp.scm 390 */
					bool_t BgL_test2259z00_3578;

					{	/* Cgen/capp.scm 390 */
						BgL_sfunz00_bglt BgL_oz00_2607;

						BgL_oz00_2607 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_25))->BgL_valuez00));
						{
							BgL_sfunzf2czf2_bglt BgL_auxz00_3581;

							{
								obj_t BgL_auxz00_3582;

								{	/* Cgen/capp.scm 390 */
									BgL_objectz00_bglt BgL_tmpz00_3583;

									BgL_tmpz00_3583 = ((BgL_objectz00_bglt) BgL_oz00_2607);
									BgL_auxz00_3582 = BGL_OBJECT_WIDENING(BgL_tmpz00_3583);
								}
								BgL_auxz00_3581 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_3582);
							}
							BgL_test2259z00_3578 =
								(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_3581))->
								BgL_integratedz00);
						}
					}
					if (BgL_test2259z00_3578)
						{	/* Cgen/capp.scm 390 */
							if (NULLP(BgL_argsz00_1852))
								{	/* Cgen/capp.scm 413 */
									((((BgL_clabelz00_bglt) COBJECT(BgL_labelz00_1851))->
											BgL_usedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									{	/* Cgen/capp.scm 416 */
										BgL_cgotoz00_bglt BgL_new1259z00_1857;

										{	/* Cgen/capp.scm 417 */
											BgL_cgotoz00_bglt BgL_new1258z00_1858;

											BgL_new1258z00_1858 =
												((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_cgotoz00_bgl))));
											{	/* Cgen/capp.scm 417 */
												long BgL_arg1768z00_1859;

												{	/* Cgen/capp.scm 417 */
													long BgL_res2149z00_2613;

													BgL_res2149z00_2613 =
														BGL_CLASS_INDEX(BGl_cgotoz00zzcgen_copz00);
													BgL_arg1768z00_1859 = BgL_res2149z00_2613;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1258z00_1858),
													BgL_arg1768z00_1859);
											}
											BgL_new1259z00_1857 = BgL_new1258z00_1858;
										}
										((((BgL_copz00_bglt) COBJECT(
														((BgL_copz00_bglt) BgL_new1259z00_1857)))->
												BgL_locz00) = ((obj_t) BgL_locz00_1853), BUNSPEC);
										((((BgL_cgotoz00_bglt) COBJECT(BgL_new1259z00_1857))->
												BgL_labelz00) =
											((BgL_clabelz00_bglt) BgL_labelz00_1851), BUNSPEC);
										return ((obj_t) BgL_new1259z00_1857);
									}
								}
							else
								{	/* Cgen/capp.scm 419 */
									obj_t BgL_g1262z00_1860;
									obj_t BgL_g1265z00_1863;

									BgL_g1262z00_1860 =
										(((BgL_appz00_bglt) COBJECT(BgL_nodez00_26))->BgL_argsz00);
									{	/* Cgen/capp.scm 424 */
										BgL_cgotoz00_bglt BgL_arg1832z00_1916;

										((((BgL_clabelz00_bglt) COBJECT(BgL_labelz00_1851))->
												BgL_usedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
										{	/* Cgen/capp.scm 425 */
											BgL_cgotoz00_bglt BgL_new1261z00_1918;

											{	/* Cgen/capp.scm 426 */
												BgL_cgotoz00_bglt BgL_new1260z00_1919;

												BgL_new1260z00_1919 =
													((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_cgotoz00_bgl))));
												{	/* Cgen/capp.scm 426 */
													long BgL_arg1835z00_1920;

													{	/* Cgen/capp.scm 426 */
														long BgL_res2150z00_2620;

														BgL_res2150z00_2620 =
															BGL_CLASS_INDEX(BGl_cgotoz00zzcgen_copz00);
														BgL_arg1835z00_1920 = BgL_res2150z00_2620;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1260z00_1919),
														BgL_arg1835z00_1920);
												}
												BgL_new1261z00_1918 = BgL_new1260z00_1919;
											}
											((((BgL_copz00_bglt) COBJECT(
															((BgL_copz00_bglt) BgL_new1261z00_1918)))->
													BgL_locz00) = ((obj_t) BgL_locz00_1853), BUNSPEC);
											((((BgL_cgotoz00_bglt) COBJECT(BgL_new1261z00_1918))->
													BgL_labelz00) =
												((BgL_clabelz00_bglt) BgL_labelz00_1851), BUNSPEC);
											BgL_arg1832z00_1916 = BgL_new1261z00_1918;
										}
										{	/* Cgen/capp.scm 423 */
											obj_t BgL_list1833z00_1917;

											BgL_list1833z00_1917 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1832z00_1916), BNIL);
											BgL_g1265z00_1863 = BgL_list1833z00_1917;
									}}
									{
										obj_t BgL_argsz00_1865;
										obj_t BgL_actualsz00_1866;
										obj_t BgL_auxsz00_1867;
										obj_t BgL_seq1z00_1868;
										obj_t BgL_seq2z00_1869;

										BgL_argsz00_1865 = BgL_argsz00_1852;
										BgL_actualsz00_1866 = BgL_g1262z00_1860;
										BgL_auxsz00_1867 = BNIL;
										BgL_seq1z00_1868 = BNIL;
										BgL_seq2z00_1869 = BgL_g1265z00_1863;
									BgL_zc3z04anonymousza31769ze3z87_1870:
										if (NULLP(BgL_argsz00_1865))
											{	/* Cgen/capp.scm 428 */
												if (NULLP(BgL_seq1z00_1868))
													{	/* Cgen/capp.scm 430 */
														BgL_seq1z00_1868 = BgL_seq2z00_1869;
													}
												else
													{	/* Cgen/capp.scm 430 */
														BgL_seq1z00_1868 =
															bgl_reverse_bang(BgL_seq1z00_1868);
														{	/* Cgen/capp.scm 434 */
															obj_t BgL_tmpz00_3615;

															BgL_tmpz00_3615 =
																BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																(BgL_seq1z00_1868);
															SET_CDR(BgL_tmpz00_3615, BgL_seq2z00_1869);
														}
													}
												{	/* Cgen/capp.scm 437 */
													BgL_copz00_bglt BgL_arg1778z00_1874;

													{	/* Cgen/capp.scm 437 */
														BgL_csequencez00_bglt BgL_arg1779z00_1875;

														{	/* Cgen/capp.scm 437 */
															BgL_csequencez00_bglt BgL_new1267z00_1876;

															{	/* Cgen/capp.scm 438 */
																BgL_csequencez00_bglt BgL_new1266z00_1881;

																BgL_new1266z00_1881 =
																	((BgL_csequencez00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_csequencez00_bgl))));
																{	/* Cgen/capp.scm 438 */
																	long BgL_arg1790z00_1882;

																	{	/* Cgen/capp.scm 438 */
																		long BgL_res2154z00_2629;

																		BgL_res2154z00_2629 =
																			BGL_CLASS_INDEX
																			(BGl_csequencez00zzcgen_copz00);
																		BgL_arg1790z00_1882 = BgL_res2154z00_2629;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1266z00_1881),
																		BgL_arg1790z00_1882);
																}
																BgL_new1267z00_1876 = BgL_new1266z00_1881;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1267z00_1876)))->BgL_locz00) =
																((obj_t) BgL_locz00_1853), BUNSPEC);
															((((BgL_csequencez00_bglt)
																		COBJECT(BgL_new1267z00_1876))->
																	BgL_czd2expzf3z21) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
															{
																obj_t BgL_auxz00_3625;

																{	/* Cgen/capp.scm 439 */
																	BgL_localzd2varzd2_bglt BgL_arg1782z00_1877;

																	{	/* Cgen/capp.scm 439 */
																		BgL_localzd2varzd2_bglt BgL_new1269z00_1878;

																		{	/* Cgen/capp.scm 441 */
																			BgL_localzd2varzd2_bglt
																				BgL_new1268z00_1879;
																			BgL_new1268z00_1879 =
																				((BgL_localzd2varzd2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_localzd2varzd2_bgl))));
																			{	/* Cgen/capp.scm 441 */
																				long BgL_arg1784z00_1880;

																				{	/* Cgen/capp.scm 441 */
																					long BgL_res2155z00_2633;

																					{	/* Cgen/capp.scm 441 */
																						obj_t BgL_classz00_2632;

																						BgL_classz00_2632 =
																							BGl_localzd2varzd2zzcgen_copz00;
																						BgL_res2155z00_2633 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2632);
																					}
																					BgL_arg1784z00_1880 =
																						BgL_res2155z00_2633;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1268z00_1879),
																					BgL_arg1784z00_1880);
																			}
																			BgL_new1269z00_1878 = BgL_new1268z00_1879;
																		}
																		((((BgL_copz00_bglt) COBJECT(
																						((BgL_copz00_bglt)
																							BgL_new1269z00_1878)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1853), BUNSPEC);
																		((((BgL_localzd2varzd2_bglt)
																					COBJECT(BgL_new1269z00_1878))->
																				BgL_varsz00) =
																			((obj_t) BgL_auxsz00_1867), BUNSPEC);
																		BgL_arg1782z00_1877 = BgL_new1269z00_1878;
																	}
																	BgL_auxz00_3625 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1782z00_1877),
																		BgL_seq1z00_1868);
																}
																((((BgL_csequencez00_bglt)
																			COBJECT(BgL_new1267z00_1876))->
																		BgL_copsz00) =
																	((obj_t) BgL_auxz00_3625), BUNSPEC);
															}
															BgL_arg1779z00_1875 = BgL_new1267z00_1876;
														}
														BgL_arg1778z00_1874 =
															BGl_bdbzd2letzd2varz00zzcgen_cgenz00(
															((BgL_copz00_bglt) BgL_arg1779z00_1875),
															BgL_locz00_1853);
													}
													return
														BGl_blockzd2kontzd2zzcgen_cgenz00(
														((obj_t) BgL_arg1778z00_1874), BFALSE);
												}
											}
										else
											{	/* Cgen/capp.scm 445 */
												obj_t BgL_argz00_1883;
												obj_t BgL_actz00_1884;

												BgL_argz00_1883 = CAR(((obj_t) BgL_argsz00_1865));
												BgL_actz00_1884 = CAR(((obj_t) BgL_actualsz00_1866));
												{	/* Cgen/capp.scm 450 */
													bool_t BgL_test2263z00_3644;

													if (BGl_isazf3zf3zz__objectz00(BgL_actz00_1884,
															BGl_varz00zzast_nodez00))
														{	/* Cgen/capp.scm 450 */
															BgL_test2263z00_3644 =
																(BgL_argz00_1883 ==
																((obj_t)
																	(((BgL_varz00_bglt) COBJECT(
																				((BgL_varz00_bglt) BgL_actz00_1884)))->
																		BgL_variablez00)));
														}
													else
														{	/* Cgen/capp.scm 450 */
															BgL_test2263z00_3644 = ((bool_t) 0);
														}
													if (BgL_test2263z00_3644)
														{	/* Cgen/capp.scm 451 */
															obj_t BgL_arg1798z00_1888;
															obj_t BgL_arg1801z00_1889;

															BgL_arg1798z00_1888 =
																CDR(((obj_t) BgL_argsz00_1865));
															BgL_arg1801z00_1889 =
																CDR(((obj_t) BgL_actualsz00_1866));
															{
																obj_t BgL_actualsz00_3656;
																obj_t BgL_argsz00_3655;

																BgL_argsz00_3655 = BgL_arg1798z00_1888;
																BgL_actualsz00_3656 = BgL_arg1801z00_1889;
																BgL_actualsz00_1866 = BgL_actualsz00_3656;
																BgL_argsz00_1865 = BgL_argsz00_3655;
																goto BgL_zc3z04anonymousza31769ze3z87_1870;
															}
														}
													else
														{	/* Cgen/capp.scm 456 */
															BgL_localz00_bglt BgL_auxz00_1890;

															{	/* Cgen/capp.scm 457 */
																obj_t BgL_arg1829z00_1911;
																BgL_typez00_bglt BgL_arg1830z00_1912;

																BgL_arg1829z00_1911 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_argz00_1883))))->BgL_idz00);
																BgL_arg1830z00_1912 =
																	(((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt) (
																					(BgL_localz00_bglt)
																					BgL_argz00_1883))))->BgL_typez00);
																BgL_auxz00_1890 =
																	BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
																	(BgL_arg1829z00_1911, BgL_arg1830z00_1912);
															}
															{	/* Cgen/capp.scm 459 */
																obj_t BgL_arg1808z00_1891;
																obj_t BgL_arg1809z00_1892;
																obj_t BgL_arg1811z00_1893;
																obj_t BgL_arg1820z00_1894;
																obj_t BgL_arg1821z00_1895;

																BgL_arg1808z00_1891 =
																	CDR(((obj_t) BgL_argsz00_1865));
																BgL_arg1809z00_1892 =
																	CDR(((obj_t) BgL_actualsz00_1866));
																BgL_arg1811z00_1893 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_auxz00_1890), BgL_auxsz00_1867);
																{	/* Cgen/capp.scm 462 */
																	BgL_copz00_bglt BgL_arg1822z00_1896;

																	{	/* Cgen/capp.scm 462 */
																		BgL_setqz00_bglt BgL_arg1823z00_1897;

																		BgL_arg1823z00_1897 =
																			BGl_nodezd2setqzd2zzcgen_cgenz00(
																			((BgL_variablez00_bglt) BgL_auxz00_1890),
																			((BgL_nodez00_bglt) BgL_actz00_1884));
																		BgL_arg1822z00_1896 =
																			BGl_nodezd2ze3copz31zzcgen_cgenz00(
																			((BgL_nodez00_bglt) BgL_arg1823z00_1897),
																			BGl_za2stopzd2kontza2zd2zzcgen_cgenz00,
																			CBOOL(BgL_inpushexitz00_28));
																	}
																	BgL_arg1820z00_1894 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1822z00_1896),
																		BgL_seq1z00_1868);
																}
																{	/* Cgen/capp.scm 466 */
																	BgL_stopz00_bglt BgL_arg1824z00_1898;

																	{	/* Cgen/capp.scm 466 */
																		BgL_stopz00_bglt BgL_new1271z00_1899;

																		{	/* Cgen/capp.scm 469 */
																			BgL_stopz00_bglt BgL_new1270z00_1909;

																			BgL_new1270z00_1909 =
																				((BgL_stopz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_stopz00_bgl))));
																			{	/* Cgen/capp.scm 469 */
																				long BgL_arg1828z00_1910;

																				{	/* Cgen/capp.scm 469 */
																					long BgL_res2157z00_2647;

																					BgL_res2157z00_2647 =
																						BGL_CLASS_INDEX
																						(BGl_stopz00zzcgen_copz00);
																					BgL_arg1828z00_1910 =
																						BgL_res2157z00_2647;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1270z00_1909),
																					BgL_arg1828z00_1910);
																			}
																			BgL_new1271z00_1899 = BgL_new1270z00_1909;
																		}
																		((((BgL_copz00_bglt) COBJECT(
																						((BgL_copz00_bglt)
																							BgL_new1271z00_1899)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_actz00_1884)))->
																					BgL_locz00)), BUNSPEC);
																		{
																			BgL_copz00_bglt BgL_auxz00_3686;

																			{	/* Cgen/capp.scm 469 */
																				BgL_csetqz00_bglt BgL_new1273z00_1900;

																				{	/* Cgen/capp.scm 473 */
																					BgL_csetqz00_bglt BgL_new1272z00_1907;

																					BgL_new1272z00_1907 =
																						((BgL_csetqz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_csetqz00_bgl))));
																					{	/* Cgen/capp.scm 473 */
																						long BgL_arg1827z00_1908;

																						{	/* Cgen/capp.scm 473 */
																							long BgL_res2158z00_2652;

																							{	/* Cgen/capp.scm 473 */
																								obj_t BgL_classz00_2651;

																								BgL_classz00_2651 =
																									BGl_csetqz00zzcgen_copz00;
																								BgL_res2158z00_2652 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2651);
																							}
																							BgL_arg1827z00_1908 =
																								BgL_res2158z00_2652;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1272z00_1907),
																							BgL_arg1827z00_1908);
																					}
																					BgL_new1273z00_1900 =
																						BgL_new1272z00_1907;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1273z00_1900)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_1853), BUNSPEC);
																				{
																					BgL_varcz00_bglt BgL_auxz00_3693;

																					{	/* Cgen/capp.scm 471 */
																						BgL_varcz00_bglt
																							BgL_new1275z00_1901;
																						{	/* Cgen/capp.scm 472 */
																							BgL_varcz00_bglt
																								BgL_new1274z00_1902;
																							BgL_new1274z00_1902 =
																								((BgL_varcz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_varcz00_bgl))));
																							{	/* Cgen/capp.scm 472 */
																								long BgL_arg1825z00_1903;

																								{	/* Cgen/capp.scm 472 */
																									long BgL_res2159z00_2656;

																									{	/* Cgen/capp.scm 472 */
																										obj_t BgL_classz00_2655;

																										BgL_classz00_2655 =
																											BGl_varcz00zzcgen_copz00;
																										BgL_res2159z00_2656 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_2655);
																									}
																									BgL_arg1825z00_1903 =
																										BgL_res2159z00_2656;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1274z00_1902),
																									BgL_arg1825z00_1903);
																							}
																							BgL_new1275z00_1901 =
																								BgL_new1274z00_1902;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1275z00_1901)))->
																								BgL_locz00) =
																							((obj_t) BFALSE), BUNSPEC);
																						((((BgL_varcz00_bglt)
																									COBJECT
																									(BgL_new1275z00_1901))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt) (
																									(BgL_variablez00_bglt)
																									BgL_argz00_1883)), BUNSPEC);
																						BgL_auxz00_3693 =
																							BgL_new1275z00_1901;
																					}
																					((((BgL_csetqz00_bglt)
																								COBJECT(BgL_new1273z00_1900))->
																							BgL_varz00) =
																						((BgL_varcz00_bglt)
																							BgL_auxz00_3693), BUNSPEC);
																				}
																				{
																					BgL_copz00_bglt BgL_auxz00_3703;

																					{	/* Cgen/capp.scm 473 */
																						BgL_varcz00_bglt
																							BgL_new1277z00_1904;
																						{	/* Cgen/capp.scm 475 */
																							BgL_varcz00_bglt
																								BgL_new1276z00_1905;
																							BgL_new1276z00_1905 =
																								((BgL_varcz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_varcz00_bgl))));
																							{	/* Cgen/capp.scm 475 */
																								long BgL_arg1826z00_1906;

																								{	/* Cgen/capp.scm 475 */
																									long BgL_res2160z00_2660;

																									{	/* Cgen/capp.scm 475 */
																										obj_t BgL_classz00_2659;

																										BgL_classz00_2659 =
																											BGl_varcz00zzcgen_copz00;
																										BgL_res2160z00_2660 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_2659);
																									}
																									BgL_arg1826z00_1906 =
																										BgL_res2160z00_2660;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1276z00_1905),
																									BgL_arg1826z00_1906);
																							}
																							BgL_new1277z00_1904 =
																								BgL_new1276z00_1905;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1277z00_1904)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_actz00_1884)))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_varcz00_bglt)
																									COBJECT
																									(BgL_new1277z00_1904))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt) (
																									(BgL_variablez00_bglt)
																									BgL_auxz00_1890)), BUNSPEC);
																						BgL_auxz00_3703 =
																							((BgL_copz00_bglt)
																							BgL_new1277z00_1904);
																					}
																					((((BgL_csetqz00_bglt)
																								COBJECT(BgL_new1273z00_1900))->
																							BgL_valuez00) =
																						((BgL_copz00_bglt) BgL_auxz00_3703),
																						BUNSPEC);
																				}
																				BgL_auxz00_3686 =
																					((BgL_copz00_bglt)
																					BgL_new1273z00_1900);
																			}
																			((((BgL_stopz00_bglt)
																						COBJECT(BgL_new1271z00_1899))->
																					BgL_valuez00) =
																				((BgL_copz00_bglt) BgL_auxz00_3686),
																				BUNSPEC);
																		}
																		BgL_arg1824z00_1898 = BgL_new1271z00_1899;
																	}
																	BgL_arg1821z00_1895 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1824z00_1898),
																		BgL_seq2z00_1869);
																}
																{
																	obj_t BgL_seq2z00_3724;
																	obj_t BgL_seq1z00_3723;
																	obj_t BgL_auxsz00_3722;
																	obj_t BgL_actualsz00_3721;
																	obj_t BgL_argsz00_3720;

																	BgL_argsz00_3720 = BgL_arg1808z00_1891;
																	BgL_actualsz00_3721 = BgL_arg1809z00_1892;
																	BgL_auxsz00_3722 = BgL_arg1811z00_1893;
																	BgL_seq1z00_3723 = BgL_arg1820z00_1894;
																	BgL_seq2z00_3724 = BgL_arg1821z00_1895;
																	BgL_seq2z00_1869 = BgL_seq2z00_3724;
																	BgL_seq1z00_1868 = BgL_seq1z00_3723;
																	BgL_auxsz00_1867 = BgL_auxsz00_3722;
																	BgL_actualsz00_1866 = BgL_actualsz00_3721;
																	BgL_argsz00_1865 = BgL_argsz00_3720;
																	goto BgL_zc3z04anonymousza31769ze3z87_1870;
																}
															}
														}
												}
											}
									}
								}
						}
					else
						{	/* Cgen/capp.scm 390 */
							{	/* Cgen/capp.scm 392 */
								BgL_valuez00_bglt BgL_arg1836z00_1921;

								BgL_arg1836z00_1921 =
									(((BgL_variablez00_bglt) COBJECT(BgL_varz00_25))->
									BgL_valuez00);
								{
									BgL_sfunzf2czf2_bglt BgL_auxz00_3726;

									{
										obj_t BgL_auxz00_3727;

										{	/* Cgen/capp.scm 392 */
											BgL_objectz00_bglt BgL_tmpz00_3728;

											BgL_tmpz00_3728 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_arg1836z00_1921));
											BgL_auxz00_3727 = BGL_OBJECT_WIDENING(BgL_tmpz00_3728);
										}
										BgL_auxz00_3726 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_3727);
									}
									((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_3726))->
											BgL_integratedz00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
								}
							}
							{	/* Cgen/capp.scm 393 */
								BgL_copz00_bglt BgL_bodyz00_1922;

								{	/* Cgen/capp.scm 393 */
									obj_t BgL_arg1852z00_1944;

									BgL_arg1852z00_1944 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_25))))->
														BgL_valuez00))))->BgL_bodyz00);
									BgL_bodyz00_1922 =
										BGl_nodezd2ze3copz31zzcgen_cgenz00(((BgL_nodez00_bglt)
											BgL_arg1852z00_1944), BgL_kontz00_27,
										CBOOL(BgL_inpushexitz00_28));
								}
								((((BgL_clabelz00_bglt) COBJECT(BgL_labelz00_1851))->
										BgL_bodyz00) =
									((obj_t) ((obj_t) BgL_bodyz00_1922)), BUNSPEC);
								if (NULLP(BgL_argsz00_1852))
									{	/* Cgen/capp.scm 395 */
										return ((obj_t) BgL_labelz00_1851);
									}
								else
									{	/* Cgen/capp.scm 397 */
										obj_t BgL_g1254z00_1924;

										BgL_g1254z00_1924 =
											(((BgL_appz00_bglt) COBJECT(BgL_nodez00_26))->
											BgL_argsz00);
										{
											obj_t BgL_formalsz00_1927;
											obj_t BgL_actualsz00_1928;
											obj_t BgL_seqz00_1929;

											{
												BgL_csequencez00_bglt BgL_auxz00_3748;

												BgL_formalsz00_1927 = BgL_argsz00_1852;
												BgL_actualsz00_1928 = BgL_g1254z00_1924;
												BgL_seqz00_1929 = BNIL;
											BgL_zc3z04anonymousza31838ze3z87_1930:
												if (NULLP(BgL_formalsz00_1927))
													{	/* Cgen/capp.scm 401 */
														BgL_csequencez00_bglt BgL_new1257z00_1932;

														{	/* Cgen/capp.scm 402 */
															BgL_csequencez00_bglt BgL_new1256z00_1934;

															BgL_new1256z00_1934 =
																((BgL_csequencez00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_csequencez00_bgl))));
															{	/* Cgen/capp.scm 402 */
																long BgL_arg1841z00_1935;

																{	/* Cgen/capp.scm 402 */
																	long BgL_res2163z00_2675;

																	BgL_res2163z00_2675 =
																		BGL_CLASS_INDEX
																		(BGl_csequencez00zzcgen_copz00);
																	BgL_arg1841z00_1935 = BgL_res2163z00_2675;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1256z00_1934),
																	BgL_arg1841z00_1935);
															}
															BgL_new1257z00_1932 = BgL_new1256z00_1934;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1257z00_1932)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_1853), BUNSPEC);
														((((BgL_csequencez00_bglt)
																	COBJECT(BgL_new1257z00_1932))->
																BgL_czd2expzf3z21) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
														{
															obj_t BgL_auxz00_3758;

															{	/* Cgen/capp.scm 403 */
																obj_t BgL_arg1840z00_1933;

																BgL_arg1840z00_1933 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_labelz00_1851), BgL_seqz00_1929);
																BgL_auxz00_3758 =
																	bgl_reverse_bang(BgL_arg1840z00_1933);
															}
															((((BgL_csequencez00_bglt)
																		COBJECT(BgL_new1257z00_1932))->
																	BgL_copsz00) =
																((obj_t) BgL_auxz00_3758), BUNSPEC);
														}
														BgL_auxz00_3748 = BgL_new1257z00_1932;
													}
												else
													{	/* Cgen/capp.scm 404 */
														obj_t BgL_arg1842z00_1936;
														obj_t BgL_arg1845z00_1937;
														obj_t BgL_arg1846z00_1938;

														BgL_arg1842z00_1936 =
															CDR(((obj_t) BgL_formalsz00_1927));
														BgL_arg1845z00_1937 =
															CDR(((obj_t) BgL_actualsz00_1928));
														{	/* Cgen/capp.scm 408 */
															BgL_copz00_bglt BgL_arg1847z00_1939;

															{	/* Cgen/capp.scm 408 */
																BgL_setqz00_bglt BgL_arg1848z00_1940;

																{	/* Cgen/capp.scm 408 */
																	obj_t BgL_arg1850z00_1941;
																	obj_t BgL_arg1851z00_1942;

																	BgL_arg1850z00_1941 =
																		CAR(((obj_t) BgL_formalsz00_1927));
																	BgL_arg1851z00_1942 =
																		CAR(((obj_t) BgL_actualsz00_1928));
																	BgL_arg1848z00_1940 =
																		BGl_nodezd2setqzd2zzcgen_cgenz00(
																		((BgL_variablez00_bglt)
																			BgL_arg1850z00_1941),
																		((BgL_nodez00_bglt) BgL_arg1851z00_1942));
																}
																BgL_arg1847z00_1939 =
																	BGl_nodezd2ze3copz31zzcgen_cgenz00(
																	((BgL_nodez00_bglt) BgL_arg1848z00_1940),
																	BGl_za2stopzd2kontza2zd2zzcgen_cgenz00,
																	CBOOL(BgL_inpushexitz00_28));
															}
															BgL_arg1846z00_1938 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1847z00_1939), BgL_seqz00_1929);
														}
														{
															obj_t BgL_seqz00_3781;
															obj_t BgL_actualsz00_3780;
															obj_t BgL_formalsz00_3779;

															BgL_formalsz00_3779 = BgL_arg1842z00_1936;
															BgL_actualsz00_3780 = BgL_arg1845z00_1937;
															BgL_seqz00_3781 = BgL_arg1846z00_1938;
															BgL_seqz00_1929 = BgL_seqz00_3781;
															BgL_actualsz00_1928 = BgL_actualsz00_3780;
															BgL_formalsz00_1927 = BgL_formalsz00_3779;
															goto BgL_zc3z04anonymousza31838ze3z87_1930;
														}
													}
												return ((obj_t) BgL_auxz00_3748);
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
	obj_t BGl_objectzd2initzd2zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2223z00zzcgen_cappz00, BGl_string2224z00zzcgen_cappz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_funcallz00zzast_nodez00,
				BGl_proc2225z00zzcgen_cappz00, BGl_string2224z00zzcgen_cappz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2ze3copzd2envze3zzcgen_cgenz00, BGl_appz00zzast_nodez00,
				BGl_proc2226z00zzcgen_cappz00, BGl_string2224z00zzcgen_cappz00);
		}

	}



/* &node->cop-app1455 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2app1455z81zzcgen_cappz00(obj_t
		BgL_envz00_2870, obj_t BgL_nodez00_2871, obj_t BgL_kontz00_2872,
		obj_t BgL_inpushexitz00_2873)
	{
		{	/* Cgen/capp.scm 198 */
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_varz00_2900;

				BgL_varz00_2900 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2871)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2267z00_3789;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_test2268z00_3790;

						{	/* Tools/trace.sch 53 */
							bool_t BgL_res2217z00_2901;

							BgL_res2217z00_2901 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_varz00_2900), BGl_globalz00zzast_varz00);
							BgL_test2268z00_3790 = BgL_res2217z00_2901;
						}
						if (BgL_test2268z00_3790)
							{	/* Tools/trace.sch 53 */
								bool_t BgL__ortest_1207z00_2902;

								if (
									(((obj_t) BgL_varz00_2900) ==
										BGl_za2thezd2globalza2zd2zzcgen_cgenz00))
									{	/* Tools/trace.sch 53 */
										BgL__ortest_1207z00_2902 = ((bool_t) 0);
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL__ortest_1207z00_2902 = ((bool_t) 1);
									}
								if (BgL__ortest_1207z00_2902)
									{	/* Tools/trace.sch 53 */
										BgL_test2267z00_3789 = BgL__ortest_1207z00_2902;
									}
								else
									{	/* Tools/trace.sch 53 */
										if (
											(BgL_kontz00_2872 ==
												BGl_za2returnzd2kontza2zd2zzcgen_cgenz00))
											{	/* Tools/trace.sch 53 */
												BgL_test2267z00_3789 = ((bool_t) 0);
											}
										else
											{	/* Tools/trace.sch 53 */
												BgL_test2267z00_3789 = ((bool_t) 1);
											}
									}
							}
						else
							{	/* Tools/trace.sch 53 */
								BgL_test2267z00_3789 = ((bool_t) 0);
							}
					}
					if (BgL_test2267z00_3789)
						{	/* Tools/trace.sch 53 */
							BgL_variablez00_bglt BgL_varz00_2903;

							BgL_varz00_2903 = BgL_varz00_2900;
							{	/* Tools/trace.sch 53 */
								bool_t BgL_test2272z00_3799;

								{	/* Tools/trace.sch 53 */
									BgL_valuez00_bglt BgL_arg1474z00_2904;

									BgL_arg1474z00_2904 =
										(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2903))->
										BgL_valuez00);
									{	/* Tools/trace.sch 53 */
										bool_t BgL_res2218z00_2905;

										BgL_res2218z00_2905 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1474z00_2904), BGl_sfunz00zzast_varz00);
										BgL_test2272z00_3799 = BgL_res2218z00_2905;
									}
								}
								if (BgL_test2272z00_3799)
									{	/* Tools/trace.sch 53 */
										return
											((BgL_copz00_bglt)
											BGl_nodezd2sfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
											(BgL_varz00_2903, ((BgL_appz00_bglt) BgL_nodez00_2871),
												BgL_kontz00_2872, BgL_inpushexitz00_2873));
									}
								else
									{	/* Tools/trace.sch 53 */
										return
											((BgL_copz00_bglt)
											BGl_nodezd2cfunzd2nonzd2tailzd2appzd2ze3copz31zzcgen_cappz00
											(BgL_varz00_2903, ((BgL_appz00_bglt) BgL_nodez00_2871),
												BgL_kontz00_2872, BgL_inpushexitz00_2873));
									}
							}
						}
					else
						{	/* Tools/trace.sch 53 */
							return
								((BgL_copz00_bglt)
								BGl_nodezd2tailzd2appzd2ze3copz31zzcgen_cappz00(BgL_varz00_2900,
									((BgL_appz00_bglt) BgL_nodez00_2871), BgL_kontz00_2872,
									BgL_inpushexitz00_2873));
						}
				}
			}
		}

	}



/* &node->cop-funcall1453 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2funcall1453z81zzcgen_cappz00(obj_t
		BgL_envz00_2874, obj_t BgL_nodez00_2875, obj_t BgL_kontz00_2876,
		obj_t BgL_inpushexitz00_2877)
	{
		{	/* Cgen/capp.scm 114 */
			{
				obj_t BgL_oldzd2actualszd2_2908;
				obj_t BgL_newzd2actualszd2_2909;
				obj_t BgL_auxsz00_2910;
				obj_t BgL_expsz00_2911;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_arg1947z00_3011;

					BgL_arg1947z00_3011 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2875)))->BgL_argsz00);
					{
						obj_t BgL_auxz00_3814;

						BgL_oldzd2actualszd2_2908 = BgL_arg1947z00_3011;
						BgL_newzd2actualszd2_2909 = BNIL;
						BgL_auxsz00_2910 = BNIL;
						BgL_expsz00_2911 = BNIL;
					BgL_loopz00_2907:
						if (NULLP(BgL_oldzd2actualszd2_2908))
							{	/* Tools/trace.sch 53 */
								BgL_typez00_bglt BgL_typez00_2912;

								BgL_typez00_2912 =
									BGl_getzd2typezd2zztype_typeofz00(
									((BgL_nodez00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_2875)), ((bool_t) 0));
								{	/* Tools/trace.sch 53 */
									BgL_localz00_bglt BgL_auxz00_2913;

									BgL_auxz00_2913 =
										BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
										(CNST_TABLE_REF(((long) 3)),
										((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
									{	/* Tools/trace.sch 53 */
										BgL_copz00_bglt BgL_copz00_2914;

										{	/* Tools/trace.sch 53 */
											BgL_setqz00_bglt BgL_arg1989z00_2915;

											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_arg1990z00_2916;

												BgL_arg1990z00_2916 =
													(((BgL_funcallz00_bglt) COBJECT(
															((BgL_funcallz00_bglt) BgL_nodez00_2875)))->
													BgL_funz00);
												BgL_arg1989z00_2915 =
													BGl_nodezd2setqzd2zzcgen_cgenz00((
														(BgL_variablez00_bglt) BgL_auxz00_2913),
													BgL_arg1990z00_2916);
											}
											BgL_copz00_2914 =
												BGl_nodezd2ze3copz31zzcgen_cgenz00(
												((BgL_nodez00_bglt) BgL_arg1989z00_2915),
												BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
												CBOOL(BgL_inpushexitz00_2877));
										}
										{	/* Tools/trace.sch 53 */

											{	/* Tools/trace.sch 53 */
												bool_t BgL_test2274z00_3830;

												{	/* Tools/trace.sch 53 */
													bool_t BgL_test2275z00_3831;

													{	/* Tools/trace.sch 53 */
														bool_t BgL_res2198z00_2917;

														BgL_res2198z00_2917 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_copz00_2914),
															BGl_csetqz00zzcgen_copz00);
														BgL_test2275z00_3831 = BgL_res2198z00_2917;
													}
													if (BgL_test2275z00_3831)
														{	/* Tools/trace.sch 53 */
															bool_t BgL_test2276z00_3834;

															{	/* Tools/trace.sch 53 */
																BgL_nodez00_bglt BgL_arg1988z00_2918;

																BgL_arg1988z00_2918 =
																	(((BgL_funcallz00_bglt) COBJECT(
																			((BgL_funcallz00_bglt)
																				BgL_nodez00_2875)))->BgL_funz00);
																{	/* Tools/trace.sch 53 */
																	bool_t BgL_res2199z00_2919;

																	BgL_res2199z00_2919 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_arg1988z00_2918),
																		BGl_varz00zzast_nodez00);
																	BgL_test2276z00_3834 = BgL_res2199z00_2919;
																}
															}
															if (BgL_test2276z00_3834)
																{	/* Tools/trace.sch 53 */
																	BgL_test2274z00_3830 =
																		(
																		((obj_t)
																			(((BgL_varcz00_bglt) COBJECT(
																						(((BgL_csetqz00_bglt) COBJECT(
																									((BgL_csetqz00_bglt)
																										BgL_copz00_2914)))->
																							BgL_varz00)))->
																				BgL_variablez00)) ==
																		((obj_t) BgL_auxz00_2913));
																}
															else
																{	/* Tools/trace.sch 53 */
																	BgL_test2274z00_3830 = ((bool_t) 0);
																}
														}
													else
														{	/* Tools/trace.sch 53 */
															BgL_test2274z00_3830 = ((bool_t) 0);
														}
												}
												if (BgL_test2274z00_3830)
													{	/* Tools/trace.sch 53 */
														BgL_copz00_bglt BgL_cfunz00_2920;

														BgL_cfunz00_2920 =
															(((BgL_csetqz00_bglt) COBJECT(
																	((BgL_csetqz00_bglt) BgL_copz00_2914)))->
															BgL_valuez00);
														if (NULLP(BgL_auxsz00_2910))
															{	/* Tools/trace.sch 53 */
																BgL_cfuncallz00_bglt BgL_arg1958z00_2921;

																{	/* Tools/trace.sch 53 */
																	BgL_cfuncallz00_bglt BgL_new1180z00_2922;

																	{	/* Tools/trace.sch 53 */
																		BgL_cfuncallz00_bglt BgL_new1178z00_2923;

																		BgL_new1178z00_2923 =
																			((BgL_cfuncallz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_cfuncallz00_bgl))));
																		{	/* Tools/trace.sch 53 */
																			long BgL_arg1959z00_2924;

																			{	/* Tools/trace.sch 53 */
																				long BgL_res2201z00_2925;

																				BgL_res2201z00_2925 =
																					BGL_CLASS_INDEX
																					(BGl_cfuncallz00zzcgen_copz00);
																				BgL_arg1959z00_2924 =
																					BgL_res2201z00_2925;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1178z00_2923),
																				BgL_arg1959z00_2924);
																		}
																		BgL_new1180z00_2922 = BgL_new1178z00_2923;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1180z00_2922)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_funcallz00_bglt)
																								BgL_nodez00_2875))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_cfuncallz00_bglt)
																				COBJECT(BgL_new1180z00_2922))->
																			BgL_funz00) =
																		((BgL_copz00_bglt) BgL_cfunz00_2920),
																		BUNSPEC);
																	((((BgL_cfuncallz00_bglt)
																				COBJECT(BgL_new1180z00_2922))->
																			BgL_argsz00) =
																		((obj_t)
																			bgl_reverse_bang
																			(BgL_newzd2actualszd2_2909)), BUNSPEC);
																	((((BgL_cfuncallz00_bglt)
																				COBJECT(BgL_new1180z00_2922))->
																			BgL_strengthz00) =
																		((obj_t) (((BgL_funcallz00_bglt)
																					COBJECT(((BgL_funcallz00_bglt)
																							BgL_nodez00_2875)))->
																				BgL_strengthz00)), BUNSPEC);
																	((((BgL_cfuncallz00_bglt)
																				COBJECT(BgL_new1180z00_2922))->
																			BgL_typez00) =
																		((obj_t) ((obj_t) BgL_typez00_2912)),
																		BUNSPEC);
																	BgL_arg1958z00_2921 = BgL_new1180z00_2922;
																}
																BgL_auxz00_3814 =
																	PROCEDURE_ENTRY(BgL_kontz00_2876)
																	(BgL_kontz00_2876,
																	((obj_t) BgL_arg1958z00_2921), BEOA);
															}
														else
															{	/* Tools/trace.sch 53 */
																BgL_cblockz00_bglt BgL_new1183z00_2926;

																{	/* Tools/trace.sch 53 */
																	BgL_cblockz00_bglt BgL_new1181z00_2927;

																	BgL_new1181z00_2927 =
																		((BgL_cblockz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_cblockz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg1971z00_2928;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2202z00_2929;

																			BgL_res2202z00_2929 =
																				BGL_CLASS_INDEX
																				(BGl_cblockz00zzcgen_copz00);
																			BgL_arg1971z00_2928 = BgL_res2202z00_2929;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1181z00_2927),
																			BgL_arg1971z00_2928);
																	}
																	BgL_new1183z00_2926 = BgL_new1181z00_2927;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1183z00_2926)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_funcallz00_bglt)
																							BgL_nodez00_2875))))->
																			BgL_locz00)), BUNSPEC);
																{
																	BgL_copz00_bglt BgL_auxz00_3880;

																	{	/* Tools/trace.sch 53 */
																		BgL_csequencez00_bglt BgL_new1185z00_2930;

																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1184z00_2931;

																			BgL_new1184z00_2931 =
																				((BgL_csequencez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_csequencez00_bgl))));
																			{	/* Tools/trace.sch 53 */
																				long BgL_arg1970z00_2932;

																				{	/* Tools/trace.sch 53 */
																					long BgL_res2203z00_2933;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_classz00_2934;

																						BgL_classz00_2934 =
																							BGl_csequencez00zzcgen_copz00;
																						BgL_res2203z00_2933 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2934);
																					}
																					BgL_arg1970z00_2932 =
																						BgL_res2203z00_2933;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1184z00_2931),
																					BgL_arg1970z00_2932);
																			}
																			BgL_new1185z00_2930 = BgL_new1184z00_2931;
																		}
																		((((BgL_copz00_bglt) COBJECT(
																						((BgL_copz00_bglt)
																							BgL_new1185z00_2930)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt) (
																									(BgL_funcallz00_bglt)
																									BgL_nodez00_2875))))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_csequencez00_bglt)
																					COBJECT(BgL_new1185z00_2930))->
																				BgL_czd2expzf3z21) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																		{
																			obj_t BgL_auxz00_3891;

																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_arg1960z00_2935;
																				BgL_csequencez00_bglt
																					BgL_arg1961z00_2936;
																				obj_t BgL_arg1962z00_2937;

																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_new1187z00_2938;
																					{	/* Tools/trace.sch 53 */
																						BgL_localzd2varzd2_bglt
																							BgL_new1186z00_2939;
																						BgL_new1186z00_2939 =
																							((BgL_localzd2varzd2_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_localzd2varzd2_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg1966z00_2940;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2204z00_2941;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_2942;

																									BgL_classz00_2942 =
																										BGl_localzd2varzd2zzcgen_copz00;
																									BgL_res2204z00_2941 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_2942);
																								}
																								BgL_arg1966z00_2940 =
																									BgL_res2204z00_2941;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1186z00_2939),
																								BgL_arg1966z00_2940);
																						}
																						BgL_new1187z00_2938 =
																							BgL_new1186z00_2939;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1187z00_2938)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_funcallz00_bglt)
																												BgL_nodez00_2875))))->
																								BgL_locz00)), BUNSPEC);
																					((((BgL_localzd2varzd2_bglt)
																								COBJECT(BgL_new1187z00_2938))->
																							BgL_varsz00) =
																						((obj_t) BgL_auxsz00_2910),
																						BUNSPEC);
																					BgL_arg1960z00_2935 =
																						BgL_new1187z00_2938;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_csequencez00_bglt
																						BgL_new1189z00_2943;
																					{	/* Tools/trace.sch 53 */
																						BgL_csequencez00_bglt
																							BgL_new1188z00_2944;
																						BgL_new1188z00_2944 =
																							((BgL_csequencez00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_csequencez00_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg1967z00_2945;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2205z00_2946;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_2947;

																									BgL_classz00_2947 =
																										BGl_csequencez00zzcgen_copz00;
																									BgL_res2205z00_2946 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_2947);
																								}
																								BgL_arg1967z00_2945 =
																									BgL_res2205z00_2946;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1188z00_2944),
																								BgL_arg1967z00_2945);
																						}
																						BgL_new1189z00_2943 =
																							BgL_new1188z00_2944;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1189z00_2943)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_funcallz00_bglt)
																												BgL_nodez00_2875))))->
																								BgL_locz00)), BUNSPEC);
																					((((BgL_csequencez00_bglt)
																								COBJECT(BgL_new1189z00_2943))->
																							BgL_czd2expzf3z21) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					((((BgL_csequencez00_bglt)
																								COBJECT(BgL_new1189z00_2943))->
																							BgL_copsz00) =
																						((obj_t) BgL_expsz00_2911),
																						BUNSPEC);
																					BgL_arg1961z00_2936 =
																						BgL_new1189z00_2943;
																				}
																				{	/* Tools/trace.sch 53 */
																					BgL_cfuncallz00_bglt
																						BgL_arg1968z00_2948;
																					{	/* Tools/trace.sch 53 */
																						BgL_cfuncallz00_bglt
																							BgL_new1191z00_2949;
																						{	/* Tools/trace.sch 53 */
																							BgL_cfuncallz00_bglt
																								BgL_new1190z00_2950;
																							BgL_new1190z00_2950 =
																								((BgL_cfuncallz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_cfuncallz00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1969z00_2951;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2206z00_2952;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_2953;

																										BgL_classz00_2953 =
																											BGl_cfuncallz00zzcgen_copz00;
																										BgL_res2206z00_2952 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_2953);
																									}
																									BgL_arg1969z00_2951 =
																										BgL_res2206z00_2952;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1190z00_2950),
																									BgL_arg1969z00_2951);
																							}
																							BgL_new1191z00_2949 =
																								BgL_new1190z00_2950;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1191z00_2949)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_funcallz00_bglt)
																													BgL_nodez00_2875))))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_cfuncallz00_bglt)
																									COBJECT
																									(BgL_new1191z00_2949))->
																								BgL_funz00) =
																							((BgL_copz00_bglt)
																								BgL_cfunz00_2920), BUNSPEC);
																						((((BgL_cfuncallz00_bglt)
																									COBJECT
																									(BgL_new1191z00_2949))->
																								BgL_argsz00) =
																							((obj_t)
																								bgl_reverse_bang
																								(BgL_newzd2actualszd2_2909)),
																							BUNSPEC);
																						((((BgL_cfuncallz00_bglt)
																									COBJECT
																									(BgL_new1191z00_2949))->
																								BgL_strengthz00) =
																							((obj_t) (((BgL_funcallz00_bglt)
																										COBJECT((
																												(BgL_funcallz00_bglt)
																												BgL_nodez00_2875)))->
																									BgL_strengthz00)), BUNSPEC);
																						((((BgL_cfuncallz00_bglt)
																									COBJECT
																									(BgL_new1191z00_2949))->
																								BgL_typez00) =
																							((obj_t) ((obj_t)
																									BgL_typez00_2912)), BUNSPEC);
																						BgL_arg1968z00_2948 =
																							BgL_new1191z00_2949;
																					}
																					BgL_arg1962z00_2937 =
																						PROCEDURE_ENTRY(BgL_kontz00_2876)
																						(BgL_kontz00_2876,
																						((obj_t) BgL_arg1968z00_2948),
																						BEOA);
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_list1963z00_2954;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1964z00_2955;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1965z00_2956;

																							BgL_arg1965z00_2956 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1962z00_2937, BNIL);
																							BgL_arg1964z00_2955 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_arg1961z00_2936),
																								BgL_arg1965z00_2956);
																						}
																						BgL_list1963z00_2954 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_arg1960z00_2935),
																							BgL_arg1964z00_2955);
																					}
																					BgL_auxz00_3891 =
																						BgL_list1963z00_2954;
																			}}
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1185z00_2930))->
																					BgL_copsz00) =
																				((obj_t) BgL_auxz00_3891), BUNSPEC);
																		}
																		BgL_auxz00_3880 =
																			((BgL_copz00_bglt) BgL_new1185z00_2930);
																	}
																	((((BgL_cblockz00_bglt)
																				COBJECT(BgL_new1183z00_2926))->
																			BgL_bodyz00) =
																		((BgL_copz00_bglt) BgL_auxz00_3880),
																		BUNSPEC);
																}
																BgL_auxz00_3814 = ((obj_t) BgL_new1183z00_2926);
													}}
												else
													{	/* Tools/trace.sch 53 */
														BgL_cblockz00_bglt BgL_new1193z00_2957;

														{	/* Tools/trace.sch 53 */
															BgL_cblockz00_bglt BgL_new1192z00_2958;

															BgL_new1192z00_2958 =
																((BgL_cblockz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_cblockz00_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg1985z00_2959;

																{	/* Tools/trace.sch 53 */
																	long BgL_res2208z00_2960;

																	BgL_res2208z00_2960 =
																		BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
																	BgL_arg1985z00_2959 = BgL_res2208z00_2960;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1192z00_2958),
																	BgL_arg1985z00_2959);
															}
															BgL_new1193z00_2957 = BgL_new1192z00_2958;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1193z00_2957)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_funcallz00_bglt)
																					BgL_nodez00_2875))))->BgL_locz00)),
															BUNSPEC);
														{
															BgL_copz00_bglt BgL_auxz00_3953;

															{	/* Tools/trace.sch 53 */
																BgL_csequencez00_bglt BgL_new1195z00_2961;

																{	/* Tools/trace.sch 53 */
																	BgL_csequencez00_bglt BgL_new1194z00_2962;

																	BgL_new1194z00_2962 =
																		((BgL_csequencez00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_csequencez00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg1984z00_2963;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2209z00_2964;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_classz00_2965;

																				BgL_classz00_2965 =
																					BGl_csequencez00zzcgen_copz00;
																				BgL_res2209z00_2964 =
																					BGL_CLASS_INDEX(BgL_classz00_2965);
																			}
																			BgL_arg1984z00_2963 = BgL_res2209z00_2964;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1194z00_2962),
																			BgL_arg1984z00_2963);
																	}
																	BgL_new1195z00_2961 = BgL_new1194z00_2962;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1195z00_2961)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_funcallz00_bglt)
																							BgL_nodez00_2875))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_csequencez00_bglt)
																			COBJECT(BgL_new1195z00_2961))->
																		BgL_czd2expzf3z21) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																{
																	obj_t BgL_auxz00_3964;

																	{	/* Tools/trace.sch 53 */
																		BgL_localzd2varzd2_bglt BgL_arg1972z00_2966;
																		BgL_csequencez00_bglt BgL_arg1973z00_2967;
																		obj_t BgL_arg1974z00_2968;

																		{	/* Tools/trace.sch 53 */
																			BgL_localzd2varzd2_bglt
																				BgL_new1197z00_2969;
																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_new1196z00_2970;
																				BgL_new1196z00_2970 =
																					((BgL_localzd2varzd2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_localzd2varzd2_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg1979z00_2971;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2210z00_2972;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_2973;

																							BgL_classz00_2973 =
																								BGl_localzd2varzd2zzcgen_copz00;
																							BgL_res2210z00_2972 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2973);
																						}
																						BgL_arg1979z00_2971 =
																							BgL_res2210z00_2972;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1196z00_2970),
																						BgL_arg1979z00_2971);
																				}
																				BgL_new1197z00_2969 =
																					BgL_new1196z00_2970;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1197z00_2969)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_funcallz00_bglt)
																										BgL_nodez00_2875))))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_localzd2varzd2_bglt)
																						COBJECT(BgL_new1197z00_2969))->
																					BgL_varsz00) =
																				((obj_t) MAKE_YOUNG_PAIR(((obj_t)
																							BgL_auxz00_2913),
																						BgL_auxsz00_2910)), BUNSPEC);
																			BgL_arg1972z00_2966 = BgL_new1197z00_2969;
																		}
																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1199z00_2974;

																			{	/* Tools/trace.sch 53 */
																				BgL_csequencez00_bglt
																					BgL_new1198z00_2975;
																				BgL_new1198z00_2975 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg1980z00_2976;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2211z00_2977;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_2978;

																							BgL_classz00_2978 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2211z00_2977 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2978);
																						}
																						BgL_arg1980z00_2976 =
																							BgL_res2211z00_2977;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1198z00_2975),
																						BgL_arg1980z00_2976);
																				}
																				BgL_new1199z00_2974 =
																					BgL_new1198z00_2975;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1199z00_2974)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_funcallz00_bglt)
																										BgL_nodez00_2875))))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1199z00_2974))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1199z00_2974))->
																					BgL_copsz00) =
																				((obj_t) MAKE_YOUNG_PAIR(((obj_t)
																							BgL_copz00_2914),
																						BgL_expsz00_2911)), BUNSPEC);
																			BgL_arg1973z00_2967 = BgL_new1199z00_2974;
																		}
																		{	/* Tools/trace.sch 53 */
																			BgL_cfuncallz00_bglt BgL_arg1981z00_2979;

																			{	/* Tools/trace.sch 53 */
																				BgL_cfuncallz00_bglt
																					BgL_new1201z00_2980;
																				{	/* Tools/trace.sch 53 */
																					BgL_cfuncallz00_bglt
																						BgL_new1200z00_2981;
																					BgL_new1200z00_2981 =
																						((BgL_cfuncallz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_cfuncallz00_bgl))));
																					{	/* Tools/trace.sch 53 */
																						long BgL_arg1983z00_2982;

																						{	/* Tools/trace.sch 53 */
																							long BgL_res2212z00_2983;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_classz00_2984;

																								BgL_classz00_2984 =
																									BGl_cfuncallz00zzcgen_copz00;
																								BgL_res2212z00_2983 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2984);
																							}
																							BgL_arg1983z00_2982 =
																								BgL_res2212z00_2983;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1200z00_2981),
																							BgL_arg1983z00_2982);
																					}
																					BgL_new1201z00_2980 =
																						BgL_new1200z00_2981;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1201z00_2980)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt) (
																											(BgL_funcallz00_bglt)
																											BgL_nodez00_2875))))->
																							BgL_locz00)), BUNSPEC);
																				{
																					BgL_copz00_bglt BgL_auxz00_3999;

																					{	/* Tools/trace.sch 53 */
																						BgL_varcz00_bglt
																							BgL_new1203z00_2985;
																						{	/* Tools/trace.sch 53 */
																							BgL_varcz00_bglt
																								BgL_new1202z00_2986;
																							BgL_new1202z00_2986 =
																								((BgL_varcz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_varcz00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1982z00_2987;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2213z00_2988;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_2989;

																										BgL_classz00_2989 =
																											BGl_varcz00zzcgen_copz00;
																										BgL_res2213z00_2988 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_2989);
																									}
																									BgL_arg1982z00_2987 =
																										BgL_res2213z00_2988;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1202z00_2986),
																									BgL_arg1982z00_2987);
																							}
																							BgL_new1203z00_2985 =
																								BgL_new1202z00_2986;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1203z00_2985)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_funcallz00_bglt)
																													BgL_nodez00_2875))))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_varcz00_bglt)
																									COBJECT
																									(BgL_new1203z00_2985))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt) (
																									(BgL_variablez00_bglt)
																									BgL_auxz00_2913)), BUNSPEC);
																						BgL_auxz00_3999 =
																							((BgL_copz00_bglt)
																							BgL_new1203z00_2985);
																					}
																					((((BgL_cfuncallz00_bglt)
																								COBJECT(BgL_new1201z00_2980))->
																							BgL_funz00) =
																						((BgL_copz00_bglt) BgL_auxz00_3999),
																						BUNSPEC);
																				}
																				((((BgL_cfuncallz00_bglt)
																							COBJECT(BgL_new1201z00_2980))->
																						BgL_argsz00) =
																					((obj_t)
																						bgl_reverse_bang
																						(BgL_newzd2actualszd2_2909)),
																					BUNSPEC);
																				((((BgL_cfuncallz00_bglt)
																							COBJECT(BgL_new1201z00_2980))->
																						BgL_strengthz00) =
																					((obj_t) (((BgL_funcallz00_bglt)
																								COBJECT(((BgL_funcallz00_bglt)
																										BgL_nodez00_2875)))->
																							BgL_strengthz00)), BUNSPEC);
																				((((BgL_cfuncallz00_bglt)
																							COBJECT(BgL_new1201z00_2980))->
																						BgL_typez00) =
																					((obj_t) ((obj_t) BgL_typez00_2912)),
																					BUNSPEC);
																				BgL_arg1981z00_2979 =
																					BgL_new1201z00_2980;
																			}
																			BgL_arg1974z00_2968 =
																				PROCEDURE_ENTRY(BgL_kontz00_2876)
																				(BgL_kontz00_2876,
																				((obj_t) BgL_arg1981z00_2979), BEOA);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_list1975z00_2990;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1976z00_2991;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1977z00_2992;

																					BgL_arg1977z00_2992 =
																						MAKE_YOUNG_PAIR(BgL_arg1974z00_2968,
																						BNIL);
																					BgL_arg1976z00_2991 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg1973z00_2967),
																						BgL_arg1977z00_2992);
																				}
																				BgL_list1975z00_2990 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1972z00_2966),
																					BgL_arg1976z00_2991);
																			}
																			BgL_auxz00_3964 = BgL_list1975z00_2990;
																	}}
																	((((BgL_csequencez00_bglt)
																				COBJECT(BgL_new1195z00_2961))->
																			BgL_copsz00) =
																		((obj_t) BgL_auxz00_3964), BUNSPEC);
																}
																BgL_auxz00_3953 =
																	((BgL_copz00_bglt) BgL_new1195z00_2961);
															}
															((((BgL_cblockz00_bglt)
																		COBJECT(BgL_new1193z00_2957))->
																	BgL_bodyz00) =
																((BgL_copz00_bglt) BgL_auxz00_3953), BUNSPEC);
														}
														BgL_auxz00_3814 = ((obj_t) BgL_new1193z00_2957);
							}}}}}}
						else
							{	/* Tools/trace.sch 53 */
								obj_t BgL_az00_2993;

								BgL_az00_2993 = CAR(((obj_t) BgL_oldzd2actualszd2_2908));
								{	/* Tools/trace.sch 53 */
									BgL_localz00_bglt BgL_auxz00_2994;

									{	/* Tools/trace.sch 53 */
										BgL_typez00_bglt BgL_arg2010z00_2995;

										BgL_arg2010z00_2995 =
											BGl_getzd2typezd2zztype_typeofz00(
											((BgL_nodez00_bglt) BgL_az00_2993), ((bool_t) 0));
										BgL_auxz00_2994 =
											BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00
											(CNST_TABLE_REF(((long) 4)), BgL_arg2010z00_2995);
									}
									{	/* Tools/trace.sch 53 */
										BgL_copz00_bglt BgL_copz00_2996;

										{	/* Tools/trace.sch 53 */
											BgL_setqz00_bglt BgL_arg2008z00_2997;

											BgL_arg2008z00_2997 =
												BGl_nodezd2setqzd2zzcgen_cgenz00(
												((BgL_variablez00_bglt) BgL_auxz00_2994),
												((BgL_nodez00_bglt) BgL_az00_2993));
											BgL_copz00_2996 =
												BGl_nodezd2ze3copz31zzcgen_cgenz00(
												((BgL_nodez00_bglt) BgL_arg2008z00_2997),
												BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
												CBOOL(BgL_inpushexitz00_2877));
										}
										{	/* Tools/trace.sch 53 */

											{	/* Tools/trace.sch 53 */
												bool_t BgL_test2278z00_4046;

												{	/* Tools/trace.sch 53 */
													bool_t BgL_test2279z00_4047;

													{	/* Tools/trace.sch 53 */
														bool_t BgL_res2215z00_2998;

														BgL_res2215z00_2998 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_copz00_2996),
															BGl_csetqz00zzcgen_copz00);
														BgL_test2279z00_4047 = BgL_res2215z00_2998;
													}
													if (BgL_test2279z00_4047)
														{	/* Tools/trace.sch 53 */
															BgL_test2278z00_4046 =
																(
																((obj_t)
																	(((BgL_varcz00_bglt) COBJECT(
																				(((BgL_csetqz00_bglt) COBJECT(
																							((BgL_csetqz00_bglt)
																								BgL_copz00_2996)))->
																					BgL_varz00)))->BgL_variablez00)) ==
																((obj_t) BgL_auxz00_2994));
														}
													else
														{	/* Tools/trace.sch 53 */
															BgL_test2278z00_4046 = ((bool_t) 0);
														}
												}
												if (BgL_test2278z00_4046)
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1995z00_2999;
														obj_t BgL_arg1996z00_3000;

														BgL_arg1995z00_2999 =
															CDR(((obj_t) BgL_oldzd2actualszd2_2908));
														{	/* Tools/trace.sch 53 */
															BgL_copz00_bglt BgL_arg1997z00_3001;

															BgL_arg1997z00_3001 =
																(((BgL_csetqz00_bglt) COBJECT(
																		((BgL_csetqz00_bglt) BgL_copz00_2996)))->
																BgL_valuez00);
															BgL_arg1996z00_3000 =
																MAKE_YOUNG_PAIR(((obj_t) BgL_arg1997z00_3001),
																BgL_newzd2actualszd2_2909);
														}
														{
															obj_t BgL_newzd2actualszd2_4063;
															obj_t BgL_oldzd2actualszd2_4062;

															BgL_oldzd2actualszd2_4062 = BgL_arg1995z00_2999;
															BgL_newzd2actualszd2_4063 = BgL_arg1996z00_3000;
															BgL_newzd2actualszd2_2909 =
																BgL_newzd2actualszd2_4063;
															BgL_oldzd2actualszd2_2908 =
																BgL_oldzd2actualszd2_4062;
															goto BgL_loopz00_2907;
														}
													}
												else
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1998z00_3002;
														obj_t BgL_arg1999z00_3003;
														obj_t BgL_arg2000z00_3004;
														obj_t BgL_arg2001z00_3005;

														BgL_arg1998z00_3002 =
															CDR(((obj_t) BgL_oldzd2actualszd2_2908));
														{	/* Tools/trace.sch 53 */
															BgL_varcz00_bglt BgL_arg2002z00_3006;

															{	/* Tools/trace.sch 53 */
																BgL_varcz00_bglt BgL_new1205z00_3007;

																{	/* Tools/trace.sch 53 */
																	BgL_varcz00_bglt BgL_new1204z00_3008;

																	BgL_new1204z00_3008 =
																		((BgL_varcz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varcz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg2004z00_3009;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res2216z00_3010;

																			BgL_res2216z00_3010 =
																				BGL_CLASS_INDEX
																				(BGl_varcz00zzcgen_copz00);
																			BgL_arg2004z00_3009 = BgL_res2216z00_3010;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1204z00_3008),
																			BgL_arg2004z00_3009);
																	}
																	BgL_new1205z00_3007 = BgL_new1204z00_3008;
																}
																((((BgL_copz00_bglt) COBJECT(
																				((BgL_copz00_bglt)
																					BgL_new1205z00_3007)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) CAR(((obj_t)
																								BgL_oldzd2actualszd2_2908)))))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_varcz00_bglt)
																			COBJECT(BgL_new1205z00_3007))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt) BgL_auxz00_2994)),
																	BUNSPEC);
																BgL_arg2002z00_3006 = BgL_new1205z00_3007;
															}
															BgL_arg1999z00_3003 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg2002z00_3006),
																BgL_newzd2actualszd2_2909);
														}
														BgL_arg2000z00_3004 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_auxz00_2994), BgL_auxsz00_2910);
														BgL_arg2001z00_3005 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_copz00_2996), BgL_expsz00_2911);
														{
															obj_t BgL_expsz00_4087;
															obj_t BgL_auxsz00_4086;
															obj_t BgL_newzd2actualszd2_4085;
															obj_t BgL_oldzd2actualszd2_4084;

															BgL_oldzd2actualszd2_4084 = BgL_arg1998z00_3002;
															BgL_newzd2actualszd2_4085 = BgL_arg1999z00_3003;
															BgL_auxsz00_4086 = BgL_arg2000z00_3004;
															BgL_expsz00_4087 = BgL_arg2001z00_3005;
															BgL_expsz00_2911 = BgL_expsz00_4087;
															BgL_auxsz00_2910 = BgL_auxsz00_4086;
															BgL_newzd2actualszd2_2909 =
																BgL_newzd2actualszd2_4085;
															BgL_oldzd2actualszd2_2908 =
																BgL_oldzd2actualszd2_4084;
															goto BgL_loopz00_2907;
														}
													}
											}
										}
									}
								}
							}
						return ((BgL_copz00_bglt) BgL_auxz00_3814);
					}
				}
			}
		}

	}



/* &node->cop-app-ly1451 */
	BgL_copz00_bglt BGl_z62nodezd2ze3copzd2appzd2ly1451z53zzcgen_cappz00(obj_t
		BgL_envz00_2878, obj_t BgL_nodez00_2879, obj_t BgL_kontz00_2880,
		obj_t BgL_inpushexitz00_2881)
	{
		{	/* Cgen/capp.scm 34 */
			{	/* Tools/trace.sch 53 */
				BgL_nodez00_bglt BgL_valuez00_3013;

				BgL_valuez00_3013 =
					(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2879)))->BgL_argz00);
				{	/* Tools/trace.sch 53 */
					BgL_localz00_bglt BgL_vauxz00_3014;

					BgL_vauxz00_3014 =
						BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF((
								(long) 0)),
						((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
					{	/* Tools/trace.sch 53 */
						BgL_copz00_bglt BgL_vcopz00_3015;

						{	/* Tools/trace.sch 53 */
							BgL_setqz00_bglt BgL_arg1946z00_3016;

							BgL_arg1946z00_3016 =
								BGl_nodezd2setqzd2zzcgen_cgenz00(
								((BgL_variablez00_bglt) BgL_vauxz00_3014), BgL_valuez00_3013);
							BgL_vcopz00_3015 =
								BGl_nodezd2ze3copz31zzcgen_cgenz00(
								((BgL_nodez00_bglt) BgL_arg1946z00_3016),
								BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
								CBOOL(BgL_inpushexitz00_2881));
						}
						{	/* Tools/trace.sch 53 */
							BgL_nodez00_bglt BgL_funz00_3017;

							BgL_funz00_3017 =
								(((BgL_appzd2lyzd2_bglt) COBJECT(
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_2879)))->BgL_funz00);
							{	/* Tools/trace.sch 53 */
								BgL_localz00_bglt BgL_fauxz00_3018;

								BgL_fauxz00_3018 =
									BGl_makezd2localzd2svarzf2namezf2zzcgen_cgenz00(CNST_TABLE_REF
									(((long) 5)),
									((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
								{	/* Tools/trace.sch 53 */
									BgL_copz00_bglt BgL_fcopz00_3019;

									{	/* Tools/trace.sch 53 */
										BgL_setqz00_bglt BgL_arg1945z00_3020;

										BgL_arg1945z00_3020 =
											BGl_nodezd2setqzd2zzcgen_cgenz00(
											((BgL_variablez00_bglt) BgL_fauxz00_3018),
											BgL_funz00_3017);
										BgL_fcopz00_3019 =
											BGl_nodezd2ze3copz31zzcgen_cgenz00(((BgL_nodez00_bglt)
												BgL_arg1945z00_3020),
											BGl_za2idzd2kontza2zd2zzcgen_cgenz00,
											CBOOL(BgL_inpushexitz00_2881));
									}
									{	/* Tools/trace.sch 53 */

										{	/* Tools/trace.sch 53 */
											bool_t BgL_test2280z00_4109;

											{	/* Tools/trace.sch 53 */
												bool_t BgL_test2281z00_4110;

												{	/* Tools/trace.sch 53 */
													bool_t BgL_res2164z00_3021;

													BgL_res2164z00_3021 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_vcopz00_3015),
														BGl_csetqz00zzcgen_copz00);
													BgL_test2281z00_4110 = BgL_res2164z00_3021;
												}
												if (BgL_test2281z00_4110)
													{	/* Tools/trace.sch 53 */
														if (
															(((obj_t)
																	(((BgL_varcz00_bglt) COBJECT(
																				(((BgL_csetqz00_bglt) COBJECT(
																							((BgL_csetqz00_bglt)
																								BgL_vcopz00_3015)))->
																					BgL_varz00)))->BgL_variablez00)) ==
																((obj_t) BgL_vauxz00_3014)))
															{	/* Tools/trace.sch 53 */
																bool_t BgL_test2283z00_4120;

																{	/* Tools/trace.sch 53 */
																	bool_t BgL_res2165z00_3022;

																	BgL_res2165z00_3022 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_fcopz00_3019),
																		BGl_csetqz00zzcgen_copz00);
																	BgL_test2283z00_4120 = BgL_res2165z00_3022;
																}
																if (BgL_test2283z00_4120)
																	{	/* Tools/trace.sch 53 */
																		BgL_test2280z00_4109 =
																			(
																			((obj_t)
																				(((BgL_varcz00_bglt) COBJECT(
																							(((BgL_csetqz00_bglt) COBJECT(
																										((BgL_csetqz00_bglt)
																											BgL_fcopz00_3019)))->
																								BgL_varz00)))->
																					BgL_variablez00)) ==
																			((obj_t) BgL_fauxz00_3018));
																	}
																else
																	{	/* Tools/trace.sch 53 */
																		BgL_test2280z00_4109 = ((bool_t) 0);
																	}
															}
														else
															{	/* Tools/trace.sch 53 */
																BgL_test2280z00_4109 = ((bool_t) 0);
															}
													}
												else
													{	/* Tools/trace.sch 53 */
														BgL_test2280z00_4109 = ((bool_t) 0);
													}
											}
											if (BgL_test2280z00_4109)
												{	/* Tools/trace.sch 53 */
													BgL_capplyz00_bglt BgL_arg1872z00_3023;

													{	/* Tools/trace.sch 53 */
														BgL_capplyz00_bglt BgL_new1134z00_3024;

														{	/* Tools/trace.sch 53 */
															BgL_capplyz00_bglt BgL_new1133z00_3025;

															BgL_new1133z00_3025 =
																((BgL_capplyz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_capplyz00_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg1873z00_3026;

																{	/* Tools/trace.sch 53 */
																	long BgL_res2166z00_3027;

																	BgL_res2166z00_3027 =
																		BGL_CLASS_INDEX(BGl_capplyz00zzcgen_copz00);
																	BgL_arg1873z00_3026 = BgL_res2166z00_3027;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1133z00_3025),
																	BgL_arg1873z00_3026);
															}
															BgL_new1134z00_3024 = BgL_new1133z00_3025;
														}
														((((BgL_copz00_bglt) COBJECT(
																		((BgL_copz00_bglt) BgL_new1134z00_3024)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_appzd2lyzd2_bglt)
																					BgL_nodez00_2879))))->BgL_locz00)),
															BUNSPEC);
														((((BgL_capplyz00_bglt)
																	COBJECT(BgL_new1134z00_3024))->BgL_funz00) =
															((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
																		COBJECT(((BgL_csetqz00_bglt)
																				BgL_fcopz00_3019)))->BgL_valuez00)),
															BUNSPEC);
														((((BgL_capplyz00_bglt)
																	COBJECT(BgL_new1134z00_3024))->BgL_argz00) =
															((BgL_copz00_bglt) (((BgL_csetqz00_bglt)
																		COBJECT(((BgL_csetqz00_bglt)
																				BgL_vcopz00_3015)))->BgL_valuez00)),
															BUNSPEC);
														BgL_arg1872z00_3023 = BgL_new1134z00_3024;
													}
													return
														((BgL_copz00_bglt)
														PROCEDURE_ENTRY(BgL_kontz00_2880) (BgL_kontz00_2880,
															((obj_t) BgL_arg1872z00_3023), BEOA));
												}
											else
												{	/* Tools/trace.sch 53 */
													bool_t BgL_test2284z00_4150;

													{	/* Tools/trace.sch 53 */
														bool_t BgL_test2285z00_4151;

														{	/* Tools/trace.sch 53 */
															bool_t BgL_res2167z00_3028;

															BgL_res2167z00_3028 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_vcopz00_3015),
																BGl_csetqz00zzcgen_copz00);
															BgL_test2285z00_4151 = BgL_res2167z00_3028;
														}
														if (BgL_test2285z00_4151)
															{	/* Tools/trace.sch 53 */
																BgL_test2284z00_4150 =
																	(
																	((obj_t)
																		(((BgL_varcz00_bglt) COBJECT(
																					(((BgL_csetqz00_bglt) COBJECT(
																								((BgL_csetqz00_bglt)
																									BgL_vcopz00_3015)))->
																						BgL_varz00)))->BgL_variablez00)) ==
																	((obj_t) BgL_vauxz00_3014));
															}
														else
															{	/* Tools/trace.sch 53 */
																BgL_test2284z00_4150 = ((bool_t) 0);
															}
													}
													if (BgL_test2284z00_4150)
														{	/* Tools/trace.sch 53 */
															BgL_cblockz00_bglt BgL_new1136z00_3029;

															{	/* Tools/trace.sch 53 */
																BgL_cblockz00_bglt BgL_new1135z00_3030;

																BgL_new1135z00_3030 =
																	((BgL_cblockz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_cblockz00_bgl))));
																{	/* Tools/trace.sch 53 */
																	long BgL_arg1896z00_3031;

																	{	/* Tools/trace.sch 53 */
																		long BgL_res2168z00_3032;

																		BgL_res2168z00_3032 =
																			BGL_CLASS_INDEX
																			(BGl_cblockz00zzcgen_copz00);
																		BgL_arg1896z00_3031 = BgL_res2168z00_3032;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1135z00_3030),
																		BgL_arg1896z00_3031);
																}
																BgL_new1136z00_3029 = BgL_new1135z00_3030;
															}
															((((BgL_copz00_bglt) COBJECT(
																			((BgL_copz00_bglt)
																				BgL_new1136z00_3029)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_appzd2lyzd2_bglt)
																						BgL_nodez00_2879))))->BgL_locz00)),
																BUNSPEC);
															{
																BgL_copz00_bglt BgL_auxz00_4169;

																{	/* Tools/trace.sch 53 */
																	BgL_csequencez00_bglt BgL_new1138z00_3033;

																	{	/* Tools/trace.sch 53 */
																		BgL_csequencez00_bglt BgL_new1137z00_3034;

																		BgL_new1137z00_3034 =
																			((BgL_csequencez00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_csequencez00_bgl))));
																		{	/* Tools/trace.sch 53 */
																			long BgL_arg1895z00_3035;

																			{	/* Tools/trace.sch 53 */
																				long BgL_res2169z00_3036;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_classz00_3037;

																					BgL_classz00_3037 =
																						BGl_csequencez00zzcgen_copz00;
																					BgL_res2169z00_3036 =
																						BGL_CLASS_INDEX(BgL_classz00_3037);
																				}
																				BgL_arg1895z00_3035 =
																					BgL_res2169z00_3036;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1137z00_3034),
																				BgL_arg1895z00_3035);
																		}
																		BgL_new1138z00_3033 = BgL_new1137z00_3034;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1138z00_3033)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_appzd2lyzd2_bglt)
																								BgL_nodez00_2879))))->
																				BgL_locz00)), BUNSPEC);
																	((((BgL_csequencez00_bglt)
																				COBJECT(BgL_new1138z00_3033))->
																			BgL_czd2expzf3z21) =
																		((bool_t) ((bool_t) 0)), BUNSPEC);
																	{
																		obj_t BgL_auxz00_4180;

																		{	/* Tools/trace.sch 53 */
																			BgL_localzd2varzd2_bglt
																				BgL_arg1879z00_3038;
																			BgL_csequencez00_bglt BgL_arg1881z00_3039;
																			obj_t BgL_arg1882z00_3040;

																			{	/* Tools/trace.sch 53 */
																				BgL_localzd2varzd2_bglt
																					BgL_new1140z00_3041;
																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_new1139z00_3042;
																					BgL_new1139z00_3042 =
																						((BgL_localzd2varzd2_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_localzd2varzd2_bgl))));
																					{	/* Tools/trace.sch 53 */
																						long BgL_arg1887z00_3043;

																						{	/* Tools/trace.sch 53 */
																							long BgL_res2170z00_3044;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_classz00_3045;

																								BgL_classz00_3045 =
																									BGl_localzd2varzd2zzcgen_copz00;
																								BgL_res2170z00_3044 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_3045);
																							}
																							BgL_arg1887z00_3043 =
																								BgL_res2170z00_3044;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1139z00_3042),
																							BgL_arg1887z00_3043);
																					}
																					BgL_new1140z00_3041 =
																						BgL_new1139z00_3042;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1140z00_3041)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt) (
																											(BgL_appzd2lyzd2_bglt)
																											BgL_nodez00_2879))))->
																							BgL_locz00)), BUNSPEC);
																				{
																					obj_t BgL_auxz00_4190;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_list1886z00_3046;

																						BgL_list1886z00_3046 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_fauxz00_3018), BNIL);
																						BgL_auxz00_4190 =
																							BgL_list1886z00_3046;
																					}
																					((((BgL_localzd2varzd2_bglt)
																								COBJECT(BgL_new1140z00_3041))->
																							BgL_varsz00) =
																						((obj_t) BgL_auxz00_4190), BUNSPEC);
																				}
																				BgL_arg1879z00_3038 =
																					BgL_new1140z00_3041;
																			}
																			{	/* Tools/trace.sch 53 */
																				BgL_csequencez00_bglt
																					BgL_new1142z00_3047;
																				{	/* Tools/trace.sch 53 */
																					BgL_csequencez00_bglt
																						BgL_new1141z00_3048;
																					BgL_new1141z00_3048 =
																						((BgL_csequencez00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_csequencez00_bgl))));
																					{	/* Tools/trace.sch 53 */
																						long BgL_arg1889z00_3049;

																						{	/* Tools/trace.sch 53 */
																							long BgL_res2172z00_3050;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_classz00_3051;

																								BgL_classz00_3051 =
																									BGl_csequencez00zzcgen_copz00;
																								BgL_res2172z00_3050 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_3051);
																							}
																							BgL_arg1889z00_3049 =
																								BgL_res2172z00_3050;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1141z00_3048),
																							BgL_arg1889z00_3049);
																					}
																					BgL_new1142z00_3047 =
																						BgL_new1141z00_3048;
																				}
																				((((BgL_copz00_bglt) COBJECT(
																								((BgL_copz00_bglt)
																									BgL_new1142z00_3047)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt) (
																											(BgL_appzd2lyzd2_bglt)
																											BgL_nodez00_2879))))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_csequencez00_bglt)
																							COBJECT(BgL_new1142z00_3047))->
																						BgL_czd2expzf3z21) =
																					((bool_t) ((bool_t) 0)), BUNSPEC);
																				{
																					obj_t BgL_auxz00_4204;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_list1888z00_3052;

																						BgL_list1888z00_3052 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_fcopz00_3019), BNIL);
																						BgL_auxz00_4204 =
																							BgL_list1888z00_3052;
																					}
																					((((BgL_csequencez00_bglt)
																								COBJECT(BgL_new1142z00_3047))->
																							BgL_copsz00) =
																						((obj_t) BgL_auxz00_4204), BUNSPEC);
																				}
																				BgL_arg1881z00_3039 =
																					BgL_new1142z00_3047;
																			}
																			{	/* Tools/trace.sch 53 */
																				BgL_capplyz00_bglt BgL_arg1891z00_3053;

																				{	/* Tools/trace.sch 53 */
																					BgL_capplyz00_bglt
																						BgL_new1144z00_3054;
																					{	/* Tools/trace.sch 53 */
																						BgL_capplyz00_bglt
																							BgL_new1143z00_3055;
																						BgL_new1143z00_3055 =
																							((BgL_capplyz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_capplyz00_bgl))));
																						{	/* Tools/trace.sch 53 */
																							long BgL_arg1893z00_3056;

																							{	/* Tools/trace.sch 53 */
																								long BgL_res2174z00_3057;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_classz00_3058;

																									BgL_classz00_3058 =
																										BGl_capplyz00zzcgen_copz00;
																									BgL_res2174z00_3057 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_3058);
																								}
																								BgL_arg1893z00_3056 =
																									BgL_res2174z00_3057;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1143z00_3055),
																								BgL_arg1893z00_3056);
																						}
																						BgL_new1144z00_3054 =
																							BgL_new1143z00_3055;
																					}
																					((((BgL_copz00_bglt) COBJECT(
																									((BgL_copz00_bglt)
																										BgL_new1144z00_3054)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt) (
																												(BgL_appzd2lyzd2_bglt)
																												BgL_nodez00_2879))))->
																								BgL_locz00)), BUNSPEC);
																					{
																						BgL_copz00_bglt BgL_auxz00_4217;

																						{	/* Tools/trace.sch 53 */
																							BgL_varcz00_bglt
																								BgL_new1146z00_3059;
																							{	/* Tools/trace.sch 53 */
																								BgL_varcz00_bglt
																									BgL_new1145z00_3060;
																								BgL_new1145z00_3060 =
																									((BgL_varcz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_varcz00_bgl))));
																								{	/* Tools/trace.sch 53 */
																									long BgL_arg1892z00_3061;

																									{	/* Tools/trace.sch 53 */
																										long BgL_res2175z00_3062;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_classz00_3063;

																											BgL_classz00_3063 =
																												BGl_varcz00zzcgen_copz00;
																											BgL_res2175z00_3062 =
																												BGL_CLASS_INDEX
																												(BgL_classz00_3063);
																										}
																										BgL_arg1892z00_3061 =
																											BgL_res2175z00_3062;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1145z00_3060),
																										BgL_arg1892z00_3061);
																								}
																								BgL_new1146z00_3059 =
																									BgL_new1145z00_3060;
																							}
																							((((BgL_copz00_bglt) COBJECT(
																											((BgL_copz00_bglt)
																												BgL_new1146z00_3059)))->
																									BgL_locz00) =
																								((obj_t) (((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt) (
																														(BgL_appzd2lyzd2_bglt)
																														BgL_nodez00_2879))))->
																										BgL_locz00)), BUNSPEC);
																							((((BgL_varcz00_bglt)
																										COBJECT
																										(BgL_new1146z00_3059))->
																									BgL_variablez00) =
																								((BgL_variablez00_bglt) (
																										(BgL_variablez00_bglt)
																										BgL_fauxz00_3018)),
																								BUNSPEC);
																							BgL_auxz00_4217 =
																								((BgL_copz00_bglt)
																								BgL_new1146z00_3059);
																						}
																						((((BgL_capplyz00_bglt)
																									COBJECT
																									(BgL_new1144z00_3054))->
																								BgL_funz00) =
																							((BgL_copz00_bglt)
																								BgL_auxz00_4217), BUNSPEC);
																					}
																					((((BgL_capplyz00_bglt)
																								COBJECT(BgL_new1144z00_3054))->
																							BgL_argz00) =
																						((BgL_copz00_bglt) ((
																									(BgL_csetqz00_bglt)
																									COBJECT(((BgL_csetqz00_bglt)
																											BgL_vcopz00_3015)))->
																								BgL_valuez00)), BUNSPEC);
																					BgL_arg1891z00_3053 =
																						BgL_new1144z00_3054;
																				}
																				BgL_arg1882z00_3040 =
																					PROCEDURE_ENTRY(BgL_kontz00_2880)
																					(BgL_kontz00_2880,
																					((obj_t) BgL_arg1891z00_3053), BEOA);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_list1883z00_3064;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1884z00_3065;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1885z00_3066;

																						BgL_arg1885z00_3066 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1882z00_3040, BNIL);
																						BgL_arg1884z00_3065 =
																							MAKE_YOUNG_PAIR(((obj_t)
																								BgL_arg1881z00_3039),
																							BgL_arg1885z00_3066);
																					}
																					BgL_list1883z00_3064 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg1879z00_3038),
																						BgL_arg1884z00_3065);
																				}
																				BgL_auxz00_4180 = BgL_list1883z00_3064;
																		}}
																		((((BgL_csequencez00_bglt)
																					COBJECT(BgL_new1138z00_3033))->
																				BgL_copsz00) =
																			((obj_t) BgL_auxz00_4180), BUNSPEC);
																	}
																	BgL_auxz00_4169 =
																		((BgL_copz00_bglt) BgL_new1138z00_3033);
																}
																((((BgL_cblockz00_bglt)
																			COBJECT(BgL_new1136z00_3029))->
																		BgL_bodyz00) =
																	((BgL_copz00_bglt) BgL_auxz00_4169), BUNSPEC);
															}
															return ((BgL_copz00_bglt) BgL_new1136z00_3029);
														}
													else
														{	/* Tools/trace.sch 53 */
															bool_t BgL_test2286z00_4248;

															{	/* Tools/trace.sch 53 */
																bool_t BgL_test2287z00_4249;

																{	/* Tools/trace.sch 53 */
																	bool_t BgL_res2177z00_3067;

																	BgL_res2177z00_3067 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_fcopz00_3019),
																		BGl_csetqz00zzcgen_copz00);
																	BgL_test2287z00_4249 = BgL_res2177z00_3067;
																}
																if (BgL_test2287z00_4249)
																	{	/* Tools/trace.sch 53 */
																		BgL_test2286z00_4248 =
																			(
																			((obj_t)
																				(((BgL_varcz00_bglt) COBJECT(
																							(((BgL_csetqz00_bglt) COBJECT(
																										((BgL_csetqz00_bglt)
																											BgL_fcopz00_3019)))->
																								BgL_varz00)))->
																					BgL_variablez00)) ==
																			((obj_t) BgL_fauxz00_3018));
																	}
																else
																	{	/* Tools/trace.sch 53 */
																		BgL_test2286z00_4248 = ((bool_t) 0);
																	}
															}
															if (BgL_test2286z00_4248)
																{	/* Tools/trace.sch 53 */
																	BgL_cblockz00_bglt BgL_new1148z00_3068;

																	{	/* Tools/trace.sch 53 */
																		BgL_cblockz00_bglt BgL_new1147z00_3069;

																		BgL_new1147z00_3069 =
																			((BgL_cblockz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_cblockz00_bgl))));
																		{	/* Tools/trace.sch 53 */
																			long BgL_arg1917z00_3070;

																			{	/* Tools/trace.sch 53 */
																				long BgL_res2178z00_3071;

																				BgL_res2178z00_3071 =
																					BGL_CLASS_INDEX
																					(BGl_cblockz00zzcgen_copz00);
																				BgL_arg1917z00_3070 =
																					BgL_res2178z00_3071;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1147z00_3069),
																				BgL_arg1917z00_3070);
																		}
																		BgL_new1148z00_3068 = BgL_new1147z00_3069;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1148z00_3068)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_appzd2lyzd2_bglt)
																								BgL_nodez00_2879))))->
																				BgL_locz00)), BUNSPEC);
																	{
																		BgL_copz00_bglt BgL_auxz00_4267;

																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1150z00_3072;

																			{	/* Tools/trace.sch 53 */
																				BgL_csequencez00_bglt
																					BgL_new1149z00_3073;
																				BgL_new1149z00_3073 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg1916z00_3074;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2179z00_3075;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_3076;

																							BgL_classz00_3076 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2179z00_3075 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_3076);
																						}
																						BgL_arg1916z00_3074 =
																							BgL_res2179z00_3075;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1149z00_3073),
																						BgL_arg1916z00_3074);
																				}
																				BgL_new1150z00_3072 =
																					BgL_new1149z00_3073;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1150z00_3072)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_appzd2lyzd2_bglt)
																										BgL_nodez00_2879))))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1150z00_3072))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			{
																				obj_t BgL_auxz00_4278;

																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_arg1903z00_3077;
																					BgL_csequencez00_bglt
																						BgL_arg1904z00_3078;
																					obj_t BgL_arg1905z00_3079;

																					{	/* Tools/trace.sch 53 */
																						BgL_localzd2varzd2_bglt
																							BgL_new1152z00_3080;
																						{	/* Tools/trace.sch 53 */
																							BgL_localzd2varzd2_bglt
																								BgL_new1151z00_3081;
																							BgL_new1151z00_3081 =
																								((BgL_localzd2varzd2_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_localzd2varzd2_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1910z00_3082;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2180z00_3083;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_3084;

																										BgL_classz00_3084 =
																											BGl_localzd2varzd2zzcgen_copz00;
																										BgL_res2180z00_3083 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3084);
																									}
																									BgL_arg1910z00_3082 =
																										BgL_res2180z00_3083;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1151z00_3081),
																									BgL_arg1910z00_3082);
																							}
																							BgL_new1152z00_3080 =
																								BgL_new1151z00_3081;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1152z00_3080)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_appzd2lyzd2_bglt)
																													BgL_nodez00_2879))))->
																									BgL_locz00)), BUNSPEC);
																						{
																							obj_t BgL_auxz00_4288;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_list1909z00_3085;

																								BgL_list1909z00_3085 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_vauxz00_3014),
																									BNIL);
																								BgL_auxz00_4288 =
																									BgL_list1909z00_3085;
																							}
																							((((BgL_localzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1152z00_3080))->
																									BgL_varsz00) =
																								((obj_t) BgL_auxz00_4288),
																								BUNSPEC);
																						}
																						BgL_arg1903z00_3077 =
																							BgL_new1152z00_3080;
																					}
																					{	/* Tools/trace.sch 53 */
																						BgL_csequencez00_bglt
																							BgL_new1154z00_3086;
																						{	/* Tools/trace.sch 53 */
																							BgL_csequencez00_bglt
																								BgL_new1153z00_3087;
																							BgL_new1153z00_3087 =
																								((BgL_csequencez00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_csequencez00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1912z00_3088;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2182z00_3089;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_3090;

																										BgL_classz00_3090 =
																											BGl_csequencez00zzcgen_copz00;
																										BgL_res2182z00_3089 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3090);
																									}
																									BgL_arg1912z00_3088 =
																										BgL_res2182z00_3089;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1153z00_3087),
																									BgL_arg1912z00_3088);
																							}
																							BgL_new1154z00_3086 =
																								BgL_new1153z00_3087;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1154z00_3086)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_appzd2lyzd2_bglt)
																													BgL_nodez00_2879))))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_csequencez00_bglt)
																									COBJECT
																									(BgL_new1154z00_3086))->
																								BgL_czd2expzf3z21) =
																							((bool_t) ((bool_t) 0)), BUNSPEC);
																						{
																							obj_t BgL_auxz00_4302;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_list1911z00_3091;

																								BgL_list1911z00_3091 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_vcopz00_3015),
																									BNIL);
																								BgL_auxz00_4302 =
																									BgL_list1911z00_3091;
																							}
																							((((BgL_csequencez00_bglt)
																										COBJECT
																										(BgL_new1154z00_3086))->
																									BgL_copsz00) =
																								((obj_t) BgL_auxz00_4302),
																								BUNSPEC);
																						}
																						BgL_arg1904z00_3078 =
																							BgL_new1154z00_3086;
																					}
																					{	/* Tools/trace.sch 53 */
																						BgL_capplyz00_bglt
																							BgL_arg1913z00_3092;
																						{	/* Tools/trace.sch 53 */
																							BgL_capplyz00_bglt
																								BgL_new1157z00_3093;
																							{	/* Tools/trace.sch 53 */
																								BgL_capplyz00_bglt
																									BgL_new1156z00_3094;
																								BgL_new1156z00_3094 =
																									((BgL_capplyz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_capplyz00_bgl))));
																								{	/* Tools/trace.sch 53 */
																									long BgL_arg1915z00_3095;

																									{	/* Tools/trace.sch 53 */
																										long BgL_res2184z00_3096;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_classz00_3097;

																											BgL_classz00_3097 =
																												BGl_capplyz00zzcgen_copz00;
																											BgL_res2184z00_3096 =
																												BGL_CLASS_INDEX
																												(BgL_classz00_3097);
																										}
																										BgL_arg1915z00_3095 =
																											BgL_res2184z00_3096;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1156z00_3094),
																										BgL_arg1915z00_3095);
																								}
																								BgL_new1157z00_3093 =
																									BgL_new1156z00_3094;
																							}
																							((((BgL_copz00_bglt) COBJECT(
																											((BgL_copz00_bglt)
																												BgL_new1157z00_3093)))->
																									BgL_locz00) =
																								((obj_t) (((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt) (
																														(BgL_appzd2lyzd2_bglt)
																														BgL_nodez00_2879))))->
																										BgL_locz00)), BUNSPEC);
																							((((BgL_capplyz00_bglt)
																										COBJECT
																										(BgL_new1157z00_3093))->
																									BgL_funz00) =
																								((BgL_copz00_bglt) ((
																											(BgL_csetqz00_bglt)
																											COBJECT((
																													(BgL_csetqz00_bglt)
																													BgL_fcopz00_3019)))->
																										BgL_valuez00)), BUNSPEC);
																							{
																								BgL_copz00_bglt BgL_auxz00_4318;

																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1159z00_3098;
																									{	/* Tools/trace.sch 53 */
																										BgL_varcz00_bglt
																											BgL_new1158z00_3099;
																										BgL_new1158z00_3099 =
																											((BgL_varcz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_varcz00_bgl))));
																										{	/* Tools/trace.sch 53 */
																											long BgL_arg1914z00_3100;

																											{	/* Tools/trace.sch 53 */
																												long
																													BgL_res2185z00_3101;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_classz00_3102;
																													BgL_classz00_3102 =
																														BGl_varcz00zzcgen_copz00;
																													BgL_res2185z00_3101 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_3102);
																												}
																												BgL_arg1914z00_3100 =
																													BgL_res2185z00_3101;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1158z00_3099),
																												BgL_arg1914z00_3100);
																										}
																										BgL_new1159z00_3098 =
																											BgL_new1158z00_3099;
																									}
																									((((BgL_copz00_bglt) COBJECT(
																													((BgL_copz00_bglt)
																														BgL_new1159z00_3098)))->
																											BgL_locz00) =
																										((obj_t) ((
																													(BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															((BgL_appzd2lyzd2_bglt) BgL_nodez00_2879))))->BgL_locz00)), BUNSPEC);
																									((((BgL_varcz00_bglt)
																												COBJECT
																												(BgL_new1159z00_3098))->
																											BgL_variablez00) =
																										((BgL_variablez00_bglt) (
																												(BgL_variablez00_bglt)
																												BgL_vauxz00_3014)),
																										BUNSPEC);
																									BgL_auxz00_4318 =
																										((BgL_copz00_bglt)
																										BgL_new1159z00_3098);
																								}
																								((((BgL_capplyz00_bglt)
																											COBJECT
																											(BgL_new1157z00_3093))->
																										BgL_argz00) =
																									((BgL_copz00_bglt)
																										BgL_auxz00_4318), BUNSPEC);
																							}
																							BgL_arg1913z00_3092 =
																								BgL_new1157z00_3093;
																						}
																						BgL_arg1905z00_3079 =
																							PROCEDURE_ENTRY(BgL_kontz00_2880)
																							(BgL_kontz00_2880,
																							((obj_t) BgL_arg1913z00_3092),
																							BEOA);
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_list1906z00_3103;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1907z00_3104;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1908z00_3105;

																								BgL_arg1908z00_3105 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1905z00_3079, BNIL);
																								BgL_arg1907z00_3104 =
																									MAKE_YOUNG_PAIR(((obj_t)
																										BgL_arg1904z00_3078),
																									BgL_arg1908z00_3105);
																							}
																							BgL_list1906z00_3103 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg1903z00_3077),
																								BgL_arg1907z00_3104);
																						}
																						BgL_auxz00_4278 =
																							BgL_list1906z00_3103;
																				}}
																				((((BgL_csequencez00_bglt)
																							COBJECT(BgL_new1150z00_3072))->
																						BgL_copsz00) =
																					((obj_t) BgL_auxz00_4278), BUNSPEC);
																			}
																			BgL_auxz00_4267 =
																				((BgL_copz00_bglt) BgL_new1150z00_3072);
																		}
																		((((BgL_cblockz00_bglt)
																					COBJECT(BgL_new1148z00_3068))->
																				BgL_bodyz00) =
																			((BgL_copz00_bglt) BgL_auxz00_4267),
																			BUNSPEC);
																	}
																	return
																		((BgL_copz00_bglt) BgL_new1148z00_3068);
																}
															else
																{	/* Tools/trace.sch 53 */
																	BgL_cblockz00_bglt BgL_new1161z00_3106;

																	{	/* Tools/trace.sch 53 */
																		BgL_cblockz00_bglt BgL_new1160z00_3107;

																		BgL_new1160z00_3107 =
																			((BgL_cblockz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_cblockz00_bgl))));
																		{	/* Tools/trace.sch 53 */
																			long BgL_arg1936z00_3108;

																			{	/* Tools/trace.sch 53 */
																				long BgL_res2187z00_3109;

																				BgL_res2187z00_3109 =
																					BGL_CLASS_INDEX
																					(BGl_cblockz00zzcgen_copz00);
																				BgL_arg1936z00_3108 =
																					BgL_res2187z00_3109;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1160z00_3107),
																				BgL_arg1936z00_3108);
																		}
																		BgL_new1161z00_3106 = BgL_new1160z00_3107;
																	}
																	((((BgL_copz00_bglt) COBJECT(
																					((BgL_copz00_bglt)
																						BgL_new1161z00_3106)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt) (
																								(BgL_appzd2lyzd2_bglt)
																								BgL_nodez00_2879))))->
																				BgL_locz00)), BUNSPEC);
																	{
																		BgL_copz00_bglt BgL_auxz00_4355;

																		{	/* Tools/trace.sch 53 */
																			BgL_csequencez00_bglt BgL_new1163z00_3110;

																			{	/* Tools/trace.sch 53 */
																				BgL_csequencez00_bglt
																					BgL_new1162z00_3111;
																				BgL_new1162z00_3111 =
																					((BgL_csequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_csequencez00_bgl))));
																				{	/* Tools/trace.sch 53 */
																					long BgL_arg1935z00_3112;

																					{	/* Tools/trace.sch 53 */
																						long BgL_res2188z00_3113;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_classz00_3114;

																							BgL_classz00_3114 =
																								BGl_csequencez00zzcgen_copz00;
																							BgL_res2188z00_3113 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_3114);
																						}
																						BgL_arg1935z00_3112 =
																							BgL_res2188z00_3113;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1162z00_3111),
																						BgL_arg1935z00_3112);
																				}
																				BgL_new1163z00_3110 =
																					BgL_new1162z00_3111;
																			}
																			((((BgL_copz00_bglt) COBJECT(
																							((BgL_copz00_bglt)
																								BgL_new1163z00_3110)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt) (
																										(BgL_appzd2lyzd2_bglt)
																										BgL_nodez00_2879))))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_csequencez00_bglt)
																						COBJECT(BgL_new1163z00_3110))->
																					BgL_czd2expzf3z21) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			{
																				obj_t BgL_auxz00_4366;

																				{	/* Tools/trace.sch 53 */
																					BgL_localzd2varzd2_bglt
																						BgL_arg1918z00_3115;
																					BgL_csequencez00_bglt
																						BgL_arg1919z00_3116;
																					obj_t BgL_arg1920z00_3117;

																					{	/* Tools/trace.sch 53 */
																						BgL_localzd2varzd2_bglt
																							BgL_new1165z00_3118;
																						{	/* Tools/trace.sch 53 */
																							BgL_localzd2varzd2_bglt
																								BgL_new1164z00_3119;
																							BgL_new1164z00_3119 =
																								((BgL_localzd2varzd2_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_localzd2varzd2_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1927z00_3120;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2189z00_3121;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_3122;

																										BgL_classz00_3122 =
																											BGl_localzd2varzd2zzcgen_copz00;
																										BgL_res2189z00_3121 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3122);
																									}
																									BgL_arg1927z00_3120 =
																										BgL_res2189z00_3121;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1164z00_3119),
																									BgL_arg1927z00_3120);
																							}
																							BgL_new1165z00_3118 =
																								BgL_new1164z00_3119;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1165z00_3118)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_appzd2lyzd2_bglt)
																													BgL_nodez00_2879))))->
																									BgL_locz00)), BUNSPEC);
																						{
																							obj_t BgL_auxz00_4376;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_list1925z00_3123;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1926z00_3124;

																									BgL_arg1926z00_3124 =
																										MAKE_YOUNG_PAIR(
																										((obj_t) BgL_vauxz00_3014),
																										BNIL);
																									BgL_list1925z00_3123 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_fauxz00_3018),
																										BgL_arg1926z00_3124);
																								}
																								BgL_auxz00_4376 =
																									BgL_list1925z00_3123;
																							}
																							((((BgL_localzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1165z00_3118))->
																									BgL_varsz00) =
																								((obj_t) BgL_auxz00_4376),
																								BUNSPEC);
																						}
																						BgL_arg1918z00_3115 =
																							BgL_new1165z00_3118;
																					}
																					{	/* Tools/trace.sch 53 */
																						BgL_csequencez00_bglt
																							BgL_new1167z00_3125;
																						{	/* Tools/trace.sch 53 */
																							BgL_csequencez00_bglt
																								BgL_new1166z00_3126;
																							BgL_new1166z00_3126 =
																								((BgL_csequencez00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_csequencez00_bgl))));
																							{	/* Tools/trace.sch 53 */
																								long BgL_arg1930z00_3127;

																								{	/* Tools/trace.sch 53 */
																									long BgL_res2191z00_3128;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_classz00_3129;

																										BgL_classz00_3129 =
																											BGl_csequencez00zzcgen_copz00;
																										BgL_res2191z00_3128 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3129);
																									}
																									BgL_arg1930z00_3127 =
																										BgL_res2191z00_3128;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1166z00_3126),
																									BgL_arg1930z00_3127);
																							}
																							BgL_new1167z00_3125 =
																								BgL_new1166z00_3126;
																						}
																						((((BgL_copz00_bglt) COBJECT(
																										((BgL_copz00_bglt)
																											BgL_new1167z00_3125)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												((BgL_appzd2lyzd2_bglt)
																													BgL_nodez00_2879))))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_csequencez00_bglt)
																									COBJECT
																									(BgL_new1167z00_3125))->
																								BgL_czd2expzf3z21) =
																							((bool_t) ((bool_t) 0)), BUNSPEC);
																						{
																							obj_t BgL_auxz00_4392;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_list1928z00_3130;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1929z00_3131;

																									BgL_arg1929z00_3131 =
																										MAKE_YOUNG_PAIR(
																										((obj_t) BgL_vcopz00_3015),
																										BNIL);
																									BgL_list1928z00_3130 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_fcopz00_3019),
																										BgL_arg1929z00_3131);
																								}
																								BgL_auxz00_4392 =
																									BgL_list1928z00_3130;
																							}
																							((((BgL_csequencez00_bglt)
																										COBJECT
																										(BgL_new1167z00_3125))->
																									BgL_copsz00) =
																								((obj_t) BgL_auxz00_4392),
																								BUNSPEC);
																						}
																						BgL_arg1919z00_3116 =
																							BgL_new1167z00_3125;
																					}
																					{	/* Tools/trace.sch 53 */
																						BgL_capplyz00_bglt
																							BgL_arg1931z00_3132;
																						{	/* Tools/trace.sch 53 */
																							BgL_capplyz00_bglt
																								BgL_new1169z00_3133;
																							{	/* Tools/trace.sch 53 */
																								BgL_capplyz00_bglt
																									BgL_new1168z00_3134;
																								BgL_new1168z00_3134 =
																									((BgL_capplyz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_capplyz00_bgl))));
																								{	/* Tools/trace.sch 53 */
																									long BgL_arg1934z00_3135;

																									{	/* Tools/trace.sch 53 */
																										long BgL_res2193z00_3136;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_classz00_3137;

																											BgL_classz00_3137 =
																												BGl_capplyz00zzcgen_copz00;
																											BgL_res2193z00_3136 =
																												BGL_CLASS_INDEX
																												(BgL_classz00_3137);
																										}
																										BgL_arg1934z00_3135 =
																											BgL_res2193z00_3136;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1168z00_3134),
																										BgL_arg1934z00_3135);
																								}
																								BgL_new1169z00_3133 =
																									BgL_new1168z00_3134;
																							}
																							((((BgL_copz00_bglt) COBJECT(
																											((BgL_copz00_bglt)
																												BgL_new1169z00_3133)))->
																									BgL_locz00) =
																								((obj_t) (((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt) (
																														(BgL_appzd2lyzd2_bglt)
																														BgL_nodez00_2879))))->
																										BgL_locz00)), BUNSPEC);
																							{
																								BgL_copz00_bglt BgL_auxz00_4407;

																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1171z00_3138;
																									{	/* Tools/trace.sch 53 */
																										BgL_varcz00_bglt
																											BgL_new1170z00_3139;
																										BgL_new1170z00_3139 =
																											((BgL_varcz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_varcz00_bgl))));
																										{	/* Tools/trace.sch 53 */
																											long BgL_arg1932z00_3140;

																											{	/* Tools/trace.sch 53 */
																												long
																													BgL_res2194z00_3141;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_classz00_3142;
																													BgL_classz00_3142 =
																														BGl_varcz00zzcgen_copz00;
																													BgL_res2194z00_3141 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_3142);
																												}
																												BgL_arg1932z00_3140 =
																													BgL_res2194z00_3141;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1170z00_3139),
																												BgL_arg1932z00_3140);
																										}
																										BgL_new1171z00_3138 =
																											BgL_new1170z00_3139;
																									}
																									((((BgL_copz00_bglt) COBJECT(
																													((BgL_copz00_bglt)
																														BgL_new1171z00_3138)))->
																											BgL_locz00) =
																										((obj_t) ((
																													(BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															((BgL_appzd2lyzd2_bglt) BgL_nodez00_2879))))->BgL_locz00)), BUNSPEC);
																									((((BgL_varcz00_bglt)
																												COBJECT
																												(BgL_new1171z00_3138))->
																											BgL_variablez00) =
																										((BgL_variablez00_bglt) (
																												(BgL_variablez00_bglt)
																												BgL_fauxz00_3018)),
																										BUNSPEC);
																									BgL_auxz00_4407 =
																										((BgL_copz00_bglt)
																										BgL_new1171z00_3138);
																								}
																								((((BgL_capplyz00_bglt)
																											COBJECT
																											(BgL_new1169z00_3133))->
																										BgL_funz00) =
																									((BgL_copz00_bglt)
																										BgL_auxz00_4407), BUNSPEC);
																							}
																							{
																								BgL_copz00_bglt BgL_auxz00_4421;

																								{	/* Tools/trace.sch 53 */
																									BgL_varcz00_bglt
																										BgL_new1173z00_3143;
																									{	/* Tools/trace.sch 53 */
																										BgL_varcz00_bglt
																											BgL_new1172z00_3144;
																										BgL_new1172z00_3144 =
																											((BgL_varcz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_varcz00_bgl))));
																										{	/* Tools/trace.sch 53 */
																											long BgL_arg1933z00_3145;

																											{	/* Tools/trace.sch 53 */
																												long
																													BgL_res2195z00_3146;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_classz00_3147;
																													BgL_classz00_3147 =
																														BGl_varcz00zzcgen_copz00;
																													BgL_res2195z00_3146 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_3147);
																												}
																												BgL_arg1933z00_3145 =
																													BgL_res2195z00_3146;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1172z00_3144),
																												BgL_arg1933z00_3145);
																										}
																										BgL_new1173z00_3143 =
																											BgL_new1172z00_3144;
																									}
																									((((BgL_copz00_bglt) COBJECT(
																													((BgL_copz00_bglt)
																														BgL_new1173z00_3143)))->
																											BgL_locz00) =
																										((obj_t) ((
																													(BgL_nodez00_bglt)
																													COBJECT((
																															(BgL_nodez00_bglt)
																															((BgL_appzd2lyzd2_bglt) BgL_nodez00_2879))))->BgL_locz00)), BUNSPEC);
																									((((BgL_varcz00_bglt)
																												COBJECT
																												(BgL_new1173z00_3143))->
																											BgL_variablez00) =
																										((BgL_variablez00_bglt) (
																												(BgL_variablez00_bglt)
																												BgL_vauxz00_3014)),
																										BUNSPEC);
																									BgL_auxz00_4421 =
																										((BgL_copz00_bglt)
																										BgL_new1173z00_3143);
																								}
																								((((BgL_capplyz00_bglt)
																											COBJECT
																											(BgL_new1169z00_3133))->
																										BgL_argz00) =
																									((BgL_copz00_bglt)
																										BgL_auxz00_4421), BUNSPEC);
																							}
																							BgL_arg1931z00_3132 =
																								BgL_new1169z00_3133;
																						}
																						BgL_arg1920z00_3117 =
																							PROCEDURE_ENTRY(BgL_kontz00_2880)
																							(BgL_kontz00_2880,
																							((obj_t) BgL_arg1931z00_3132),
																							BEOA);
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_list1921z00_3148;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1923z00_3149;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1924z00_3150;

																								BgL_arg1924z00_3150 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1920z00_3117, BNIL);
																								BgL_arg1923z00_3149 =
																									MAKE_YOUNG_PAIR(((obj_t)
																										BgL_arg1919z00_3116),
																									BgL_arg1924z00_3150);
																							}
																							BgL_list1921z00_3148 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg1918z00_3115),
																								BgL_arg1923z00_3149);
																						}
																						BgL_auxz00_4366 =
																							BgL_list1921z00_3148;
																				}}
																				((((BgL_csequencez00_bglt)
																							COBJECT(BgL_new1163z00_3110))->
																						BgL_copsz00) =
																					((obj_t) BgL_auxz00_4366), BUNSPEC);
																			}
																			BgL_auxz00_4355 =
																				((BgL_copz00_bglt) BgL_new1163z00_3110);
																		}
																		((((BgL_cblockz00_bglt)
																					COBJECT(BgL_new1161z00_3106))->
																				BgL_bodyz00) =
																			((BgL_copz00_bglt) BgL_auxz00_4355),
																			BUNSPEC);
																	}
																	return
																		((BgL_copz00_bglt) BgL_new1161z00_3106);
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_cappz00()
	{
		{	/* Cgen/capp.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
			return
				BGl_modulezd2initializa7ationz75zzcgen_cgenz00(((long) 384706670),
				BSTRING_TO_STRING(BGl_string2227z00zzcgen_cappz00));
		}

	}

#ifdef __cplusplus
}
#endif
