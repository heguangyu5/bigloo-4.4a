/*===========================================================================*/
/*   (Cfa/funcall.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/funcall.scm) */
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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_funcallzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_vazd2approxzd2;
		bool_t BgL_arityzd2errorzd2noticedzf3zf3;
		bool_t BgL_typezd2errorzd2noticedzf3zf3;
	}                         *BgL_funcallzf2cinfozf2_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;


	static obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_funcallz00();
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static BgL_approxz00_bglt BGl_funcallz12z12zzcfa_funcallz00(BgL_appz00_bglt,
		obj_t, BgL_funcallz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_funcallz00();
	static bool_t
		BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt,
		obj_t);
	static bool_t
		BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t
		BGl_emptyzd2approxzd2alloczf3zf3zzcfa_approxz00(BgL_approxz00_bglt);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_funcallz00();
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	static obj_t BGl_z62zc3z04anonymousza31740ze3ze5zzcfa_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzcfa_funcallz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt,
		BgL_varz00_bglt, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2funcallzf2Cinfo1514z50zzcfa_funcallz00(obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00(BgL_funcallz00_bglt,
		BgL_variablez00_bglt, long, obj_t);
	extern obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_funcallz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcfa_funcallz00();
	static obj_t BGl_genericzd2initzd2zzcfa_funcallz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzcfa_funcallz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_funcallz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static obj_t
		BGl_funcallzd2typezd2errorz00zzcfa_funcallz00(BgL_funcallz00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00
		(BgL_appz00_bglt);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2033z00zzcfa_funcallz00,
		BgL_bgl_za762cfaza712za7d2func2041za7,
		BGl_z62cfaz12zd2funcallzf2Cinfo1514z50zzcfa_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2035z00zzcfa_funcallz00,
		BgL_bgl_za762za7c3za704anonymo2042za7,
		BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_funcallz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STRING(BGl_string2028z00zzcfa_funcallz00,
		BgL_bgl_string2028za700za7za7c2043za7, "cfa", 3);
	      DEFINE_STRING(BGl_string2029z00zzcfa_funcallz00,
		BgL_bgl_string2029za700za7za7c2044za7, "Possible funcall type error", 27);
	      DEFINE_STRING(BGl_string2030z00zzcfa_funcallz00,
		BgL_bgl_string2030za700za7za7c2045za7, " provided", 9);
	      DEFINE_STRING(BGl_string2031z00zzcfa_funcallz00,
		BgL_bgl_string2031za700za7za7c2046za7, " arg(s) expected, ", 18);
	      DEFINE_STRING(BGl_string2032z00zzcfa_funcallz00,
		BgL_bgl_string2032za700za7za7c2047za7, "Possible funcall arity error", 28);
	      DEFINE_STRING(BGl_string2034z00zzcfa_funcallz00,
		BgL_bgl_string2034za700za7za7c2048za7, "cfa!", 4);
	      DEFINE_STRING(BGl_string2036z00zzcfa_funcallz00,
		BgL_bgl_string2036za700za7za7c2049za7, "cfa_funcall", 11);
	      DEFINE_STRING(BGl_string2037z00zzcfa_funcallz00,
		BgL_bgl_string2037za700za7za7c2050za7, "all ", 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_funcallz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long
		BgL_checksumz00_3669, char *BgL_fromz00_3670)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_funcallz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00();
					BGl_cnstzd2initzd2zzcfa_funcallz00();
					BGl_importedzd2moduleszd2initz00zzcfa_funcallz00();
					BGl_methodzd2initzd2zzcfa_funcallz00();
					return BGl_toplevelzd2initzd2zzcfa_funcallz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_funcall");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			{	/* Cfa/funcall.scm 15 */
				obj_t BgL_cportz00_3614;

				{	/* Cfa/funcall.scm 15 */
					obj_t BgL_stringz00_3622;

					BgL_stringz00_3622 = BGl_string2037z00zzcfa_funcallz00;
					{	/* Cfa/funcall.scm 15 */
						obj_t BgL_startz00_3623;

						BgL_startz00_3623 = BINT(((long) 0));
						{	/* Cfa/funcall.scm 15 */
							obj_t BgL_endz00_3624;

							BgL_endz00_3624 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3622)));
							{	/* Cfa/funcall.scm 15 */

								BgL_cportz00_3614 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3622, BgL_startz00_3623, BgL_endz00_3624);
				}}}}
				{
					long BgL_iz00_3615;

					BgL_iz00_3615 = ((long) 0);
				BgL_loopz00_3616:
					if ((BgL_iz00_3615 == ((long) -1)))
						{	/* Cfa/funcall.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/funcall.scm 15 */
							{	/* Cfa/funcall.scm 15 */
								obj_t BgL_arg2039z00_3618;

								{	/* Cfa/funcall.scm 15 */

									{	/* Cfa/funcall.scm 15 */
										obj_t BgL_locationz00_3620;

										BgL_locationz00_3620 = BBOOL(((bool_t) 0));
										{	/* Cfa/funcall.scm 15 */

											BgL_arg2039z00_3618 =
												BGl_readz00zz__readerz00(BgL_cportz00_3614,
												BgL_locationz00_3620);
										}
									}
								}
								{	/* Cfa/funcall.scm 15 */
									int BgL_tmpz00_3695;

									BgL_tmpz00_3695 = (int) (BgL_iz00_3615);
									CNST_TABLE_SET(BgL_tmpz00_3695, BgL_arg2039z00_3618);
							}}
							{	/* Cfa/funcall.scm 15 */
								int BgL_auxz00_3621;

								BgL_auxz00_3621 = (int) ((BgL_iz00_3615 - ((long) 1)));
								{
									long BgL_iz00_3700;

									BgL_iz00_3700 = (long) (BgL_auxz00_3621);
									BgL_iz00_3615 = BgL_iz00_3700;
									goto BgL_loopz00_3616;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* optional-correct-arity? */
	bool_t BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_4, obj_t BgL_argszd2approxzd2_5)
	{
		{	/* Cfa/funcall.scm 111 */
			{	/* Cfa/funcall.scm 113 */
				long BgL_miz00_2800;

				BgL_miz00_2800 =
					(((long) 1) +
					(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_funz00_4)))->BgL_arityz00));
				{	/* Cfa/funcall.scm 114 */
					long BgL_lz00_2802;

					BgL_lz00_2802 = bgl_list_length(BgL_argszd2approxzd2_5);
					{	/* Cfa/funcall.scm 115 */

						if ((BgL_lz00_2802 >= BgL_miz00_2800))
							{	/* Cfa/funcall.scm 116 */
								return
									(BgL_lz00_2802 <=
									(BgL_miz00_2800 +
										bgl_list_length(
											(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_4)))->
												BgL_optionalsz00))));
							}
						else
							{	/* Cfa/funcall.scm 116 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* key-correct-arity? */
	bool_t BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_6, obj_t BgL_argszd2approxzd2_7)
	{
		{	/* Cfa/funcall.scm 121 */
			{	/* Cfa/funcall.scm 123 */
				long BgL_miz00_2807;

				BgL_miz00_2807 =
					(((long) 1) +
					(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_funz00_6)))->BgL_arityz00));
				{	/* Cfa/funcall.scm 124 */
					long BgL_lz00_2809;

					BgL_lz00_2809 = bgl_list_length(BgL_argszd2approxzd2_7);
					{	/* Cfa/funcall.scm 125 */

						if ((BgL_lz00_2809 >= BgL_miz00_2807))
							{	/* Cfa/funcall.scm 126 */
								return
									(BgL_lz00_2809 <=
									(BgL_miz00_2807 +
										(((long) 2) *
											bgl_list_length(
												(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_6)))->
													BgL_keysz00)))));
							}
						else
							{	/* Cfa/funcall.scm 126 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* cfa-correct-arity? */
	bool_t BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00(BgL_valuez00_bglt
		BgL_funz00_8, obj_t BgL_argszd2approxzd2_9)
	{
		{	/* Cfa/funcall.scm 131 */
			{	/* Cfa/funcall.scm 132 */
				obj_t BgL_gz00_2815;

				BgL_gz00_2815 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_funz00_8)))->
					BgL_thezd2closurezd2globalz00);
				if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_2815))
					{	/* Cfa/funcall.scm 135 */
						BgL_valuez00_bglt BgL_arg1564z00_2817;

						BgL_arg1564z00_2817 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_gz00_2815))))->BgL_valuez00);
						return
							BGl_optionalzd2correctzd2arityzf3zf3zzcfa_funcallz00
							(BgL_arg1564z00_2817, BgL_argszd2approxzd2_9);
					}
				else
					{	/* Cfa/funcall.scm 134 */
						if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_2815))
							{	/* Cfa/funcall.scm 137 */
								BgL_valuez00_bglt BgL_arg1573z00_2819;

								BgL_arg1573z00_2819 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_2815))))->BgL_valuez00);
								return
									BGl_keyzd2correctzd2arityzf3zf3zzcfa_funcallz00
									(BgL_arg1573z00_2819, BgL_argszd2approxzd2_9);
							}
						else
							{	/* Cfa/funcall.scm 139 */
								long BgL_arg1575z00_2820;

								BgL_arg1575z00_2820 =
									(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_funz00_8)))->BgL_arityz00);
								return
									BGl_soundzd2arityzf3z21zztools_argsz00(BINT
									(BgL_arg1575z00_2820), BgL_argszd2approxzd2_9);
							}
					}
			}
		}

	}



/* funcall! */
	BgL_approxz00_bglt BGl_funcallz12z12zzcfa_funcallz00(BgL_appz00_bglt
		BgL_allocz00_10, obj_t BgL_argszd2approxzd2_11,
		BgL_funcallz00_bglt BgL_nodez00_12)
	{
		{	/* Cfa/funcall.scm 144 */
			{	/* Cfa/funcall.scm 145 */
				obj_t BgL_calleez00_2821;

				{	/* Cfa/funcall.scm 145 */
					obj_t BgL_pairz00_3513;

					BgL_pairz00_3513 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_allocz00_10)))->BgL_argsz00);
					BgL_calleez00_2821 = CAR(BgL_pairz00_3513);
				}
				{	/* Cfa/funcall.scm 145 */
					BgL_variablez00_bglt BgL_vz00_2822;

					BgL_vz00_2822 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_calleez00_2821)))->BgL_variablez00);
					{	/* Cfa/funcall.scm 146 */
						BgL_valuez00_bglt BgL_funz00_2823;

						BgL_funz00_2823 =
							(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2822))->BgL_valuez00);
						{	/* Cfa/funcall.scm 147 */
							long BgL_arityz00_2824;

							BgL_arityz00_2824 =
								(((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt) BgL_funz00_2823)))->BgL_arityz00);
							{	/* Cfa/funcall.scm 148 */

								if (BGl_cfazd2correctzd2arityzf3zf3zzcfa_funcallz00
									(BgL_funz00_2823, BgL_argszd2approxzd2_11))
									{	/* Cfa/funcall.scm 159 */
										bool_t BgL_test2058z00_3754;

										{	/* Cfa/funcall.scm 159 */
											bool_t BgL_test2059z00_3755;

											{	/* Cfa/funcall.scm 159 */
												obj_t BgL_arg1626z00_2863;

												BgL_arg1626z00_2863 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_2823)))->
													BgL_thezd2closurezd2globalz00);
												BgL_test2059z00_3755 =
													BGl_globalzd2optionalzf3z21zzast_varz00
													(BgL_arg1626z00_2863);
											}
											if (BgL_test2059z00_3755)
												{	/* Cfa/funcall.scm 159 */
													BgL_test2058z00_3754 = ((bool_t) 1);
												}
											else
												{	/* Cfa/funcall.scm 160 */
													obj_t BgL_arg1624z00_2862;

													BgL_arg1624z00_2862 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_funz00_2823)))->
														BgL_thezd2closurezd2globalz00);
													BgL_test2058z00_3754 =
														BGl_globalzd2keyzf3z21zzast_varz00
														(BgL_arg1624z00_2862);
												}
										}
										if (BgL_test2058z00_3754)
											{	/* Cfa/funcall.scm 159 */
												{
													obj_t BgL_l1509z00_2832;

													BgL_l1509z00_2832 = BgL_argszd2approxzd2_11;
												BgL_zc3z04anonymousza31586ze3z87_2833:
													if (PAIRP(BgL_l1509z00_2832))
														{	/* Cfa/funcall.scm 163 */
															{	/* Cfa/funcall.scm 163 */
																obj_t BgL_approxz00_2835;

																BgL_approxz00_2835 = CAR(BgL_l1509z00_2832);
																BGl_loosez12z12zzcfa_loosez00(
																	((BgL_approxz00_bglt) BgL_approxz00_2835),
																	CNST_TABLE_REF(((long) 0)));
															}
															{
																obj_t BgL_l1509z00_3768;

																BgL_l1509z00_3768 = CDR(BgL_l1509z00_2832);
																BgL_l1509z00_2832 = BgL_l1509z00_3768;
																goto BgL_zc3z04anonymousza31586ze3z87_2833;
															}
														}
													else
														{	/* Cfa/funcall.scm 163 */
															((bool_t) 1);
														}
												}
												return
													BGl_makezd2typezd2approxz00zzcfa_approxz00(
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
											}
										else
											{	/* Cfa/funcall.scm 159 */
												if ((BgL_arityz00_2824 >= ((long) 0)))
													{	/* Cfa/funcall.scm 165 */
														return
															BGl_appz12z12zzcfa_appz00(
															((BgL_funz00_bglt) BgL_funz00_2823),
															((BgL_varz00_bglt) BgL_calleez00_2821),
															BgL_argszd2approxzd2_11);
													}
												else
													{	/* Cfa/funcall.scm 165 */
														{
															obj_t BgL_oldzd2argszd2approxz00_2841;
															obj_t BgL_newzd2argszd2approxz00_2842;
															long BgL_arityz00_2843;

															BgL_oldzd2argszd2approxz00_2841 =
																BgL_argszd2approxzd2_11;
															BgL_newzd2argszd2approxz00_2842 = BNIL;
															BgL_arityz00_2843 = BgL_arityz00_2824;
														BgL_zc3z04anonymousza31590ze3z87_2844:
															if ((BgL_arityz00_2843 == ((long) -1)))
																{	/* Cfa/funcall.scm 175 */
																	{
																		obj_t BgL_l1511z00_2847;

																		BgL_l1511z00_2847 =
																			BgL_oldzd2argszd2approxz00_2841;
																	BgL_zc3z04anonymousza31592ze3z87_2848:
																		if (PAIRP(BgL_l1511z00_2847))
																			{	/* Cfa/funcall.scm 177 */
																				{	/* Cfa/funcall.scm 177 */
																					obj_t BgL_approxz00_2850;

																					BgL_approxz00_2850 =
																						CAR(BgL_l1511z00_2847);
																					BGl_loosez12z12zzcfa_loosez00(
																						((BgL_approxz00_bglt)
																							BgL_approxz00_2850),
																						CNST_TABLE_REF(((long) 0)));
																				}
																				{
																					obj_t BgL_l1511z00_3785;

																					BgL_l1511z00_3785 =
																						CDR(BgL_l1511z00_2847);
																					BgL_l1511z00_2847 = BgL_l1511z00_3785;
																					goto
																						BgL_zc3z04anonymousza31592ze3z87_2848;
																				}
																			}
																		else
																			{	/* Cfa/funcall.scm 177 */
																				((bool_t) 1);
																			}
																	}
																	{	/* Cfa/funcall.scm 181 */
																		obj_t BgL_arg1599z00_2853;

																		{	/* Cfa/funcall.scm 181 */
																			obj_t BgL_arg1604z00_2854;

																			{	/* Cfa/funcall.scm 181 */
																				BgL_approxz00_bglt BgL_arg1605z00_2855;

																				{
																					BgL_funcallzf2cinfozf2_bglt
																						BgL_auxz00_3787;
																					{
																						obj_t BgL_auxz00_3788;

																						{	/* Cfa/funcall.scm 181 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_3789;
																							BgL_tmpz00_3789 =
																								((BgL_objectz00_bglt)
																								BgL_nodez00_12);
																							BgL_auxz00_3788 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_3789);
																						}
																						BgL_auxz00_3787 =
																							((BgL_funcallzf2cinfozf2_bglt)
																							BgL_auxz00_3788);
																					}
																					BgL_arg1605z00_2855 =
																						(((BgL_funcallzf2cinfozf2_bglt)
																							COBJECT(BgL_auxz00_3787))->
																						BgL_vazd2approxzd2);
																				}
																				BgL_arg1604z00_2854 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1605z00_2855),
																					BgL_newzd2argszd2approxz00_2842);
																			}
																			BgL_arg1599z00_2853 =
																				bgl_reverse_bang(BgL_arg1604z00_2854);
																		}
																		return
																			BGl_appz12z12zzcfa_appz00(
																			((BgL_funz00_bglt) BgL_funz00_2823),
																			((BgL_varz00_bglt) BgL_calleez00_2821),
																			BgL_arg1599z00_2853);
																	}
																}
															else
																{	/* Cfa/funcall.scm 183 */
																	obj_t BgL_arg1606z00_2856;
																	obj_t BgL_arg1611z00_2857;
																	long BgL_arg1612z00_2858;

																	BgL_arg1606z00_2856 =
																		CDR(
																		((obj_t) BgL_oldzd2argszd2approxz00_2841));
																	{	/* Cfa/funcall.scm 184 */
																		obj_t BgL_arg1613z00_2859;

																		BgL_arg1613z00_2859 =
																			CAR(
																			((obj_t)
																				BgL_oldzd2argszd2approxz00_2841));
																		BgL_arg1611z00_2857 =
																			MAKE_YOUNG_PAIR(BgL_arg1613z00_2859,
																			BgL_newzd2argszd2approxz00_2842);
																	}
																	BgL_arg1612z00_2858 =
																		(BgL_arityz00_2843 + ((long) 1));
																	{
																		long BgL_arityz00_3808;
																		obj_t BgL_newzd2argszd2approxz00_3807;
																		obj_t BgL_oldzd2argszd2approxz00_3806;

																		BgL_oldzd2argszd2approxz00_3806 =
																			BgL_arg1606z00_2856;
																		BgL_newzd2argszd2approxz00_3807 =
																			BgL_arg1611z00_2857;
																		BgL_arityz00_3808 = BgL_arg1612z00_2858;
																		BgL_arityz00_2843 = BgL_arityz00_3808;
																		BgL_newzd2argszd2approxz00_2842 =
																			BgL_newzd2argszd2approxz00_3807;
																		BgL_oldzd2argszd2approxz00_2841 =
																			BgL_oldzd2argszd2approxz00_3806;
																		goto BgL_zc3z04anonymousza31590ze3z87_2844;
																	}
																}
														}
													}
											}
									}
								else
									{	/* Cfa/funcall.scm 153 */
										{
											BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_3809;

											{
												obj_t BgL_auxz00_3810;

												{	/* Cfa/funcall.scm 157 */
													BgL_objectz00_bglt BgL_tmpz00_3811;

													BgL_tmpz00_3811 =
														((BgL_objectz00_bglt) BgL_allocz00_10);
													BgL_auxz00_3810 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3811);
												}
												BgL_auxz00_3809 =
													((BgL_makezd2procedurezd2appz00_bglt)
													BgL_auxz00_3810);
											}
											((((BgL_makezd2procedurezd2appz00_bglt)
														COBJECT(BgL_auxz00_3809))->BgL_xzd2tzf3z21) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
										}
										return
											BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00
											(BgL_nodez00_12, BgL_vz00_2822, BgL_arityz00_2824,
											BgL_argszd2approxzd2_11);
									}
							}
						}
					}
				}
			}
		}

	}



/* funcall-type-error */
	obj_t BGl_funcallzd2typezd2errorz00zzcfa_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_13, BgL_typez00_bglt BgL_typez00_14)
	{
		{	/* Cfa/funcall.scm 190 */
			{	/* Cfa/funcall.scm 193 */
				bool_t BgL_test2064z00_3817;

				{
					BgL_funcallzf2cinfozf2_bglt BgL_auxz00_3818;

					{
						obj_t BgL_auxz00_3819;

						{	/* Cfa/funcall.scm 193 */
							BgL_objectz00_bglt BgL_tmpz00_3820;

							BgL_tmpz00_3820 = ((BgL_objectz00_bglt) BgL_nodez00_13);
							BgL_auxz00_3819 = BGL_OBJECT_WIDENING(BgL_tmpz00_3820);
						}
						BgL_auxz00_3818 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_3819);
					}
					BgL_test2064z00_3817 =
						(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3818))->
						BgL_typezd2errorzd2noticedzf3zf3);
				}
				if (BgL_test2064z00_3817)
					{	/* Cfa/funcall.scm 193 */
						return BFALSE;
					}
				else
					{	/* Cfa/funcall.scm 193 */
						{
							BgL_funcallzf2cinfozf2_bglt BgL_auxz00_3825;

							{
								obj_t BgL_auxz00_3826;

								{	/* Cfa/funcall.scm 194 */
									BgL_objectz00_bglt BgL_tmpz00_3827;

									BgL_tmpz00_3827 = ((BgL_objectz00_bglt) BgL_nodez00_13);
									BgL_auxz00_3826 = BGL_OBJECT_WIDENING(BgL_tmpz00_3827);
								}
								BgL_auxz00_3825 =
									((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_3826);
							}
							((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3825))->
									BgL_typezd2errorzd2noticedzf3zf3) =
								((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/funcall.scm 195 */
							obj_t BgL_arg1631z00_2868;
							obj_t BgL_arg1634z00_2869;

							BgL_arg1631z00_2868 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_nodez00_13)))->BgL_locz00);
							BgL_arg1634z00_2869 =
								BGl_shapez00zztools_shapez00(((obj_t) BgL_typez00_14));
							return
								BGl_userzd2warningzf2locationz20zztools_errorz00
								(BgL_arg1631z00_2868, BGl_string2028z00zzcfa_funcallz00,
								BGl_string2029z00zzcfa_funcallz00, BgL_arg1634z00_2869);
						}
					}
			}
		}

	}



/* funcall-arity-error */
	BgL_approxz00_bglt
		BGl_funcallzd2arityzd2errorz00zzcfa_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_15, BgL_variablez00_bglt BgL_vz00_16, long BgL_arityz00_17,
		obj_t BgL_argszd2approxzd2_18)
	{
		{	/* Cfa/funcall.scm 203 */
			{	/* Cfa/funcall.scm 205 */
				bool_t BgL_test2065z00_3837;

				{
					BgL_funcallzf2cinfozf2_bglt BgL_auxz00_3838;

					{
						obj_t BgL_auxz00_3839;

						{	/* Cfa/funcall.scm 205 */
							BgL_objectz00_bglt BgL_tmpz00_3840;

							BgL_tmpz00_3840 = ((BgL_objectz00_bglt) BgL_nodez00_15);
							BgL_auxz00_3839 = BGL_OBJECT_WIDENING(BgL_tmpz00_3840);
						}
						BgL_auxz00_3838 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_3839);
					}
					BgL_test2065z00_3837 =
						(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3838))->
						BgL_arityzd2errorzd2noticedzf3zf3);
				}
				if (BgL_test2065z00_3837)
					{	/* Cfa/funcall.scm 205 */
						BFALSE;
					}
				else
					{	/* Cfa/funcall.scm 206 */
						long BgL_lenzd2provzd2_2872;

						BgL_lenzd2provzd2_2872 =
							(bgl_list_length(BgL_argszd2approxzd2_18) - ((long) 1));
						{
							BgL_funcallzf2cinfozf2_bglt BgL_auxz00_3847;

							{
								obj_t BgL_auxz00_3848;

								{	/* Cfa/funcall.scm 207 */
									BgL_objectz00_bglt BgL_tmpz00_3849;

									BgL_tmpz00_3849 = ((BgL_objectz00_bglt) BgL_nodez00_15);
									BgL_auxz00_3848 = BGL_OBJECT_WIDENING(BgL_tmpz00_3849);
								}
								BgL_auxz00_3847 =
									((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_3848);
							}
							((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3847))->
									BgL_arityzd2errorzd2noticedzf3zf3) =
								((bool_t) ((bool_t) 1)), BUNSPEC);
						}
						{	/* Cfa/funcall.scm 208 */
							obj_t BgL_arg1639z00_2873;
							obj_t BgL_arg1640z00_2874;
							obj_t BgL_arg1641z00_2875;

							BgL_arg1639z00_2873 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_nodez00_15)))->BgL_locz00);
							{	/* Cfa/funcall.scm 212 */
								BgL_variablez00_bglt BgL_arg1644z00_2876;

								{	/* Cfa/funcall.scm 212 */
									bool_t BgL_test2066z00_3856;

									{	/* Cfa/funcall.scm 212 */
										bool_t BgL_res2014z00_3542;

										BgL_res2014z00_3542 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_vz00_16), BGl_localz00zzast_varz00);
										BgL_test2066z00_3856 = BgL_res2014z00_3542;
									}
									if (BgL_test2066z00_3856)
										{	/* Cfa/funcall.scm 213 */
											BgL_variablez00_bglt BgL_duplicated1166z00_2878;
											BgL_localz00_bglt BgL_new1164z00_2879;

											BgL_duplicated1166z00_2878 = BgL_vz00_16;
											{	/* Cfa/funcall.scm 213 */
												BgL_localz00_bglt BgL_new1168z00_2881;

												BgL_new1168z00_2881 =
													((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_localz00_bgl))));
												{	/* Cfa/funcall.scm 213 */
													long BgL_arg1652z00_2882;

													{	/* Cfa/funcall.scm 213 */
														long BgL_res2015z00_3544;

														BgL_res2015z00_3544 =
															BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
														BgL_arg1652z00_2882 = BgL_res2015z00_3544;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1168z00_2881),
														BgL_arg1652z00_2882);
												}
												{	/* Cfa/funcall.scm 213 */
													BgL_objectz00_bglt BgL_tmpz00_3863;

													BgL_tmpz00_3863 =
														((BgL_objectz00_bglt) BgL_new1168z00_2881);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3863, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1168z00_2881);
												BgL_new1164z00_2879 = BgL_new1168z00_2881;
											}
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_new1164z00_2879)))->
													BgL_idz00) =
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->BgL_idz00)),
												BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_namez00) =
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_namez00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_typez00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_valuez00) =
												((BgL_valuez00_bglt) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_valuez00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_accessz00) =
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_accessz00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_fastzd2alphazd2) =
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_fastzd2alphazd2)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_removablez00) =
												((obj_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_removablez00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_occurrencez00) =
												((long) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_occurrencez00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_occurrencewz00) =
												((long) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_occurrencewz00)), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_new1164z00_2879)))->BgL_userzf3zf3) =
												((bool_t) (((BgL_variablez00_bglt)
															COBJECT(BgL_duplicated1166z00_2878))->
														BgL_userzf3zf3)), BUNSPEC);
											((((BgL_localz00_bglt) COBJECT(BgL_new1164z00_2879))->
													BgL_keyz00) =
												((long) (((BgL_localz00_bglt)
															COBJECT(((BgL_localz00_bglt)
																	BgL_duplicated1166z00_2878)))->BgL_keyz00)),
												BUNSPEC);
											BgL_arg1644z00_2876 =
												((BgL_variablez00_bglt) BgL_new1164z00_2879);
										}
									else
										{	/* Cfa/funcall.scm 214 */
											bool_t BgL_test2067z00_3901;

											{	/* Cfa/funcall.scm 214 */
												bool_t BgL_res2016z00_3548;

												BgL_res2016z00_3548 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_vz00_16), BGl_globalz00zzast_varz00);
												BgL_test2067z00_3901 = BgL_res2016z00_3548;
											}
											if (BgL_test2067z00_3901)
												{	/* Cfa/funcall.scm 215 */
													BgL_variablez00_bglt BgL_duplicated1171z00_2884;
													BgL_globalz00_bglt BgL_new1169z00_2885;

													BgL_duplicated1171z00_2884 = BgL_vz00_16;
													{	/* Cfa/funcall.scm 215 */
														BgL_globalz00_bglt BgL_new1183z00_2896;

														BgL_new1183z00_2896 =
															((BgL_globalz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_globalz00_bgl))));
														{	/* Cfa/funcall.scm 215 */
															long BgL_arg1662z00_2897;

															{	/* Cfa/funcall.scm 215 */
																long BgL_res2017z00_3550;

																BgL_res2017z00_3550 =
																	BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
																BgL_arg1662z00_2897 = BgL_res2017z00_3550;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1183z00_2896),
																BgL_arg1662z00_2897);
														}
														{	/* Cfa/funcall.scm 215 */
															BgL_objectz00_bglt BgL_tmpz00_3908;

															BgL_tmpz00_3908 =
																((BgL_objectz00_bglt) BgL_new1183z00_2896);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3908, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1183z00_2896);
														BgL_new1169z00_2885 = BgL_new1183z00_2896;
													}
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_idz00) =
														((obj_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_idz00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_namez00) =
														((obj_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_namez00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_typez00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_valuez00) =
														((BgL_valuez00_bglt) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_valuez00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_accessz00) =
														((obj_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_accessz00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->
															BgL_fastzd2alphazd2) =
														((obj_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_fastzd2alphazd2)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_removablez00) =
														((obj_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_removablez00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_occurrencez00) =
														((long) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_occurrencez00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->
															BgL_occurrencewz00) =
														((long) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_occurrencewz00)), BUNSPEC);
													((((BgL_variablez00_bglt)
																COBJECT(((BgL_variablez00_bglt)
																		BgL_new1169z00_2885)))->BgL_userzf3zf3) =
														((bool_t) (((BgL_variablez00_bglt)
																	COBJECT(BgL_duplicated1171z00_2884))->
																BgL_userzf3zf3)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_modulez00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_modulez00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_importz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_importz00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->
															BgL_evaluablezf3zf3) =
														((bool_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_evaluablezf3zf3)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_evalzf3zf3) =
														((bool_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_evalzf3zf3)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_libraryz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_libraryz00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_pragmaz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_pragmaz00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_srcz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_srcz00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->
															BgL_jvmzd2typezd2namez00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_jvmzd2typezd2namez00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_initz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_initz00)), BUNSPEC);
													((((BgL_globalz00_bglt)
																COBJECT(BgL_new1169z00_2885))->BgL_aliasz00) =
														((obj_t) (((BgL_globalz00_bglt)
																	COBJECT(((BgL_globalz00_bglt)
																			BgL_duplicated1171z00_2884)))->
																BgL_aliasz00)), BUNSPEC);
													BgL_arg1644z00_2876 =
														((BgL_variablez00_bglt) BgL_new1169z00_2885);
												}
											else
												{	/* Cfa/funcall.scm 214 */
													BgL_arg1644z00_2876 = BgL_vz00_16;
												}
										}
								}
								BgL_arg1640z00_2874 =
									BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1644z00_2876));
							}
							{	/* Cfa/funcall.scm 220 */
								obj_t BgL_arg1663z00_2898;
								obj_t BgL_arg1664z00_2899;

								{	/* Cfa/funcall.scm 220 */

									BgL_arg1663z00_2898 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
										(BgL_arityz00_17 - ((long) 1)), ((long) 10));
								}
								{	/* Cfa/funcall.scm 222 */

									BgL_arg1664z00_2899 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_lenzd2provzd2_2872, ((long) 10));
								}
								{	/* Cfa/funcall.scm 219 */
									obj_t BgL_list1665z00_2900;

									{	/* Cfa/funcall.scm 219 */
										obj_t BgL_arg1667z00_2901;

										{	/* Cfa/funcall.scm 219 */
											obj_t BgL_arg1669z00_2902;

											{	/* Cfa/funcall.scm 219 */
												obj_t BgL_arg1672z00_2903;

												BgL_arg1672z00_2903 =
													MAKE_YOUNG_PAIR(BGl_string2030z00zzcfa_funcallz00,
													BNIL);
												BgL_arg1669z00_2902 =
													MAKE_YOUNG_PAIR(BgL_arg1664z00_2899,
													BgL_arg1672z00_2903);
											}
											BgL_arg1667z00_2901 =
												MAKE_YOUNG_PAIR(BGl_string2031z00zzcfa_funcallz00,
												BgL_arg1669z00_2902);
										}
										BgL_list1665z00_2900 =
											MAKE_YOUNG_PAIR(BgL_arg1663z00_2898, BgL_arg1667z00_2901);
									}
									BgL_arg1641z00_2875 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1665z00_2900);
							}}
							BGl_userzd2warningzf2locationz20zztools_errorz00
								(BgL_arg1639z00_2873, BgL_arg1640z00_2874,
								BGl_string2032z00zzcfa_funcallz00, BgL_arg1641z00_2875);
			}}}
			return BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_funcallzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2033z00zzcfa_funcallz00, BGl_string2034z00zzcfa_funcallz00);
		}

	}



/* &cfa!-funcall/Cinfo1514 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2funcallzf2Cinfo1514z50zzcfa_funcallz00(obj_t
		BgL_envz00_3598, obj_t BgL_nodez00_3599)
	{
		{	/* Cfa/funcall.scm 44 */
			{	/* Cfa/funcall.scm 48 */
				BgL_approxz00_bglt BgL_fapproxz00_3628;

				{	/* Cfa/funcall.scm 48 */
					BgL_nodez00_bglt BgL_arg1811z00_3629;

					BgL_arg1811z00_3629 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_3599))))->BgL_funz00);
					BgL_fapproxz00_3628 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1811z00_3629);
				}
				{	/* Cfa/funcall.scm 48 */
					obj_t BgL_aapproxz00_3630;

					{	/* Cfa/funcall.scm 49 */
						obj_t BgL_l1501z00_3631;

						{	/* Cfa/funcall.scm 49 */
							obj_t BgL_pairz00_3632;

							BgL_pairz00_3632 =
								(((BgL_funcallz00_bglt) COBJECT(
										((BgL_funcallz00_bglt)
											((BgL_funcallz00_bglt) BgL_nodez00_3599))))->BgL_argsz00);
							BgL_l1501z00_3631 = CDR(BgL_pairz00_3632);
						}
						if (NULLP(BgL_l1501z00_3631))
							{	/* Cfa/funcall.scm 49 */
								BgL_aapproxz00_3630 = BNIL;
							}
						else
							{	/* Cfa/funcall.scm 49 */
								obj_t BgL_head1503z00_3633;

								{	/* Cfa/funcall.scm 49 */
									BgL_approxz00_bglt BgL_arg1801z00_3634;

									{	/* Cfa/funcall.scm 49 */
										obj_t BgL_arg1808z00_3635;

										BgL_arg1808z00_3635 = CAR(((obj_t) BgL_l1501z00_3631));
										BgL_arg1801z00_3634 =
											BGl_cfaz12z12zzcfa_cfaz00(
											((BgL_nodez00_bglt) BgL_arg1808z00_3635));
									}
									{	/* Cfa/funcall.scm 49 */
										obj_t BgL_res2020z00_3636;

										BgL_res2020z00_3636 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1801z00_3634), BNIL);
										BgL_head1503z00_3633 = BgL_res2020z00_3636;
									}
								}
								{	/* Cfa/funcall.scm 49 */
									obj_t BgL_g1506z00_3637;

									BgL_g1506z00_3637 = CDR(((obj_t) BgL_l1501z00_3631));
									{
										obj_t BgL_l1501z00_3639;
										obj_t BgL_tail1504z00_3640;

										BgL_l1501z00_3639 = BgL_g1506z00_3637;
										BgL_tail1504z00_3640 = BgL_head1503z00_3633;
									BgL_zc3z04anonymousza31784ze3z87_3638:
										if (NULLP(BgL_l1501z00_3639))
											{	/* Cfa/funcall.scm 49 */
												BgL_aapproxz00_3630 = BgL_head1503z00_3633;
											}
										else
											{	/* Cfa/funcall.scm 49 */
												obj_t BgL_newtail1505z00_3641;

												{	/* Cfa/funcall.scm 49 */
													BgL_approxz00_bglt BgL_arg1796z00_3642;

													{	/* Cfa/funcall.scm 49 */
														obj_t BgL_arg1798z00_3643;

														BgL_arg1798z00_3643 =
															CAR(((obj_t) BgL_l1501z00_3639));
														BgL_arg1796z00_3642 =
															BGl_cfaz12z12zzcfa_cfaz00(
															((BgL_nodez00_bglt) BgL_arg1798z00_3643));
													}
													{	/* Cfa/funcall.scm 49 */
														obj_t BgL_res2022z00_3644;

														BgL_res2022z00_3644 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_arg1796z00_3642), BNIL);
														BgL_newtail1505z00_3641 = BgL_res2022z00_3644;
													}
												}
												SET_CDR(BgL_tail1504z00_3640, BgL_newtail1505z00_3641);
												{	/* Cfa/funcall.scm 49 */
													obj_t BgL_arg1790z00_3645;

													BgL_arg1790z00_3645 =
														CDR(((obj_t) BgL_l1501z00_3639));
													{
														obj_t BgL_tail1504z00_4016;
														obj_t BgL_l1501z00_4015;

														BgL_l1501z00_4015 = BgL_arg1790z00_3645;
														BgL_tail1504z00_4016 = BgL_newtail1505z00_3641;
														BgL_tail1504z00_3640 = BgL_tail1504z00_4016;
														BgL_l1501z00_3639 = BgL_l1501z00_4015;
														goto BgL_zc3z04anonymousza31784ze3z87_3638;
													}
												}
											}
									}
								}
							}
					}
					{	/* Cfa/funcall.scm 49 */

						{	/* Cfa/funcall.scm 54 */
							BgL_typez00_bglt BgL_funzd2typezd2_3646;

							BgL_funzd2typezd2_3646 =
								(((BgL_approxz00_bglt) COBJECT(BgL_fapproxz00_3628))->
								BgL_typez00);
							{	/* Cfa/funcall.scm 55 */
								bool_t BgL_test2070z00_4018;

								if (
									(((obj_t) BgL_funzd2typezd2_3646) ==
										BGl_za2_za2z00zztype_cachez00))
									{	/* Cfa/funcall.scm 55 */
										BgL_test2070z00_4018 = ((bool_t) 1);
									}
								else
									{	/* Cfa/funcall.scm 55 */
										if (
											(((obj_t) BgL_funzd2typezd2_3646) ==
												BGl_za2objza2z00zztype_cachez00))
											{	/* Cfa/funcall.scm 56 */
												BgL_test2070z00_4018 = ((bool_t) 1);
											}
										else
											{	/* Cfa/funcall.scm 56 */
												BgL_test2070z00_4018 =
													(
													((obj_t) BgL_funzd2typezd2_3646) ==
													BGl_za2procedureza2z00zztype_cachez00);
											}
									}
								if (BgL_test2070z00_4018)
									{	/* Cfa/funcall.scm 55 */
										BFALSE;
									}
								else
									{	/* Cfa/funcall.scm 55 */
										BGl_funcallzd2typezd2errorz00zzcfa_funcallz00(
											((BgL_funcallz00_bglt) BgL_nodez00_3599),
											BgL_funzd2typezd2_3646);
									}
							}
						}
						{	/* Cfa/funcall.scm 60 */
							bool_t BgL_test2073z00_4029;

							{	/* Cfa/funcall.scm 60 */
								bool_t BgL_test2074z00_4030;

								{	/* Cfa/funcall.scm 60 */
									BgL_typez00_bglt BgL_arg1704z00_3647;

									BgL_arg1704z00_3647 =
										(((BgL_approxz00_bglt) COBJECT(BgL_fapproxz00_3628))->
										BgL_typez00);
									BgL_test2074z00_4030 =
										(((obj_t) BgL_arg1704z00_3647) ==
										BGl_za2procedureza2z00zztype_cachez00);
								}
								if (BgL_test2074z00_4030)
									{	/* Cfa/funcall.scm 60 */
										BgL_test2073z00_4029 =
											(((BgL_approxz00_bglt) COBJECT(BgL_fapproxz00_3628))->
											BgL_topzf3zf3);
									}
								else
									{	/* Cfa/funcall.scm 60 */
										BgL_test2073z00_4029 = ((bool_t) 1);
									}
							}
							if (BgL_test2073z00_4029)
								{	/* Cfa/funcall.scm 62 */
									BgL_approxz00_bglt BgL_arg1697z00_3648;

									{
										BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4035;

										{
											obj_t BgL_auxz00_4036;

											{	/* Cfa/funcall.scm 62 */
												BgL_objectz00_bglt BgL_tmpz00_4037;

												BgL_tmpz00_4037 =
													((BgL_objectz00_bglt)
													((BgL_funcallz00_bglt) BgL_nodez00_3599));
												BgL_auxz00_4036 = BGL_OBJECT_WIDENING(BgL_tmpz00_4037);
											}
											BgL_auxz00_4035 =
												((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4036);
										}
										BgL_arg1697z00_3648 =
											(((BgL_funcallzf2cinfozf2_bglt)
												COBJECT(BgL_auxz00_4035))->BgL_approxz00);
									}
									BGl_approxzd2setzd2typez12z12zzcfa_approxz00
										(BgL_arg1697z00_3648,
										((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
								}
							else
								{	/* Cfa/funcall.scm 60 */
									BFALSE;
								}
						}
						{	/* Cfa/funcall.scm 65 */
							bool_t BgL_test2075z00_4045;

							if (
								(((BgL_approxz00_bglt) COBJECT(BgL_fapproxz00_3628))->
									BgL_topzf3zf3))
								{	/* Cfa/funcall.scm 65 */
									BgL_test2075z00_4045 = ((bool_t) 1);
								}
							else
								{	/* Cfa/funcall.scm 66 */
									bool_t BgL_test2077z00_4048;

									{	/* Cfa/funcall.scm 66 */
										BgL_typez00_bglt BgL_arg1745z00_3649;

										BgL_arg1745z00_3649 =
											(((BgL_approxz00_bglt) COBJECT(BgL_fapproxz00_3628))->
											BgL_typez00);
										BgL_test2077z00_4048 =
											(((obj_t) BgL_arg1745z00_3649) ==
											BGl_za2procedureza2z00zztype_cachez00);
									}
									if (BgL_test2077z00_4048)
										{	/* Cfa/funcall.scm 66 */
											BgL_test2075z00_4045 = ((bool_t) 0);
										}
									else
										{	/* Cfa/funcall.scm 66 */
											BgL_test2075z00_4045 = ((bool_t) 1);
										}
								}
							if (BgL_test2075z00_4045)
								{	/* Cfa/funcall.scm 65 */
									{
										obj_t BgL_l1507z00_3651;

										BgL_l1507z00_3651 = BgL_aapproxz00_3630;
									BgL_zc3z04anonymousza31713ze3z87_3650:
										if (PAIRP(BgL_l1507z00_3651))
											{	/* Cfa/funcall.scm 67 */
												{	/* Cfa/funcall.scm 67 */
													obj_t BgL_approxz00_3652;

													BgL_approxz00_3652 = CAR(BgL_l1507z00_3651);
													BGl_loosez12z12zzcfa_loosez00(
														((BgL_approxz00_bglt) BgL_approxz00_3652),
														CNST_TABLE_REF(((long) 0)));
												}
												{
													obj_t BgL_l1507z00_4058;

													BgL_l1507z00_4058 = CDR(BgL_l1507z00_3651);
													BgL_l1507z00_3651 = BgL_l1507z00_4058;
													goto BgL_zc3z04anonymousza31713ze3z87_3650;
												}
											}
										else
											{	/* Cfa/funcall.scm 67 */
												((bool_t) 1);
											}
									}
									{	/* Cfa/funcall.scm 70 */
										obj_t BgL_zc3z04anonymousza31726ze3z87_3653;

										BgL_zc3z04anonymousza31726ze3z87_3653 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31726ze3ze5zzcfa_funcallz00,
											(int) (((long) 1)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_3653,
											(int) (((long) 0)),
											((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_3599)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_3653,
											(int) (((long) 1)), BgL_aapproxz00_3630);
										PROCEDURE_SET(BgL_zc3z04anonymousza31726ze3z87_3653,
											(int) (((long) 2)),
											((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_3599)));
										BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
											(BgL_zc3z04anonymousza31726ze3z87_3653,
											BgL_fapproxz00_3628);
									}
									{	/* Cfa/funcall.scm 77 */
										BgL_approxz00_bglt BgL_arg1732z00_3654;

										{
											BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4074;

											{
												obj_t BgL_auxz00_4075;

												{	/* Cfa/funcall.scm 77 */
													BgL_objectz00_bglt BgL_tmpz00_4076;

													BgL_tmpz00_4076 =
														((BgL_objectz00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_3599));
													BgL_auxz00_4075 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4076);
												}
												BgL_auxz00_4074 =
													((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4075);
											}
											BgL_arg1732z00_3654 =
												(((BgL_funcallzf2cinfozf2_bglt)
													COBJECT(BgL_auxz00_4074))->BgL_approxz00);
										}
										BGl_approxzd2setzd2topz12z12zzcfa_approxz00
											(BgL_arg1732z00_3654);
								}}
							else
								{	/* Cfa/funcall.scm 65 */
									if (CBOOL(BGl_emptyzd2approxzd2alloczf3zf3zzcfa_approxz00
											(BgL_fapproxz00_3628)))
										{	/* Cfa/funcall.scm 82 */
											BgL_approxz00_bglt BgL_arg1738z00_3655;

											{
												BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4086;

												{
													obj_t BgL_auxz00_4087;

													{	/* Cfa/funcall.scm 82 */
														BgL_objectz00_bglt BgL_tmpz00_4088;

														BgL_tmpz00_4088 =
															((BgL_objectz00_bglt)
															((BgL_funcallz00_bglt) BgL_nodez00_3599));
														BgL_auxz00_4087 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4088);
													}
													BgL_auxz00_4086 =
														((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4087);
												}
												BgL_arg1738z00_3655 =
													(((BgL_funcallzf2cinfozf2_bglt)
														COBJECT(BgL_auxz00_4086))->BgL_approxz00);
											}
											BGl_approxzd2setzd2typez12z12zzcfa_approxz00
												(BgL_arg1738z00_3655,
												((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
										}
									else
										{	/* Cfa/funcall.scm 86 */
											obj_t BgL_zc3z04anonymousza31740ze3z87_3656;

											BgL_zc3z04anonymousza31740ze3z87_3656 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31740ze3ze5zzcfa_funcallz00,
												(int) (((long) 1)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31740ze3z87_3656,
												(int) (((long) 0)),
												((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_3599)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31740ze3z87_3656,
												(int) (((long) 1)), BgL_aapproxz00_3630);
											PROCEDURE_SET(BgL_zc3z04anonymousza31740ze3z87_3656,
												(int) (((long) 2)),
												((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_3599)));
											BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
												(BgL_zc3z04anonymousza31740ze3z87_3656,
												BgL_fapproxz00_3628);
						}}}
						{	/* Cfa/funcall.scm 96 */
							bool_t BgL_test2080z00_4110;

							if (CBOOL
								(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
								{	/* Cfa/funcall.scm 97 */
									bool_t BgL_test2082z00_4113;

									{	/* Cfa/funcall.scm 97 */
										BgL_typez00_bglt BgL_arg1779z00_3657;

										{	/* Cfa/funcall.scm 97 */
											BgL_approxz00_bglt BgL_arg1782z00_3658;

											{
												BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4114;

												{
													obj_t BgL_auxz00_4115;

													{	/* Cfa/funcall.scm 97 */
														BgL_objectz00_bglt BgL_tmpz00_4116;

														BgL_tmpz00_4116 =
															((BgL_objectz00_bglt)
															((BgL_funcallz00_bglt) BgL_nodez00_3599));
														BgL_auxz00_4115 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4116);
													}
													BgL_auxz00_4114 =
														((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4115);
												}
												BgL_arg1782z00_3658 =
													(((BgL_funcallzf2cinfozf2_bglt)
														COBJECT(BgL_auxz00_4114))->BgL_approxz00);
											}
											BgL_arg1779z00_3657 =
												(((BgL_approxz00_bglt) COBJECT(BgL_arg1782z00_3658))->
												BgL_typez00);
										}
										BgL_test2082z00_4113 =
											BGl_bigloozd2typezf3z21zztype_typez00
											(BgL_arg1779z00_3657);
									}
									if (BgL_test2082z00_4113)
										{	/* Cfa/funcall.scm 98 */
											bool_t BgL_test2083z00_4124;

											{	/* Cfa/funcall.scm 98 */
												BgL_typez00_bglt BgL_arg1775z00_3659;

												{	/* Cfa/funcall.scm 98 */
													BgL_approxz00_bglt BgL_arg1778z00_3660;

													{
														BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4125;

														{
															obj_t BgL_auxz00_4126;

															{	/* Cfa/funcall.scm 98 */
																BgL_objectz00_bglt BgL_tmpz00_4127;

																BgL_tmpz00_4127 =
																	((BgL_objectz00_bglt)
																	((BgL_funcallz00_bglt) BgL_nodez00_3599));
																BgL_auxz00_4126 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4127);
															}
															BgL_auxz00_4125 =
																((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4126);
														}
														BgL_arg1778z00_3660 =
															(((BgL_funcallzf2cinfozf2_bglt)
																COBJECT(BgL_auxz00_4125))->BgL_approxz00);
													}
													BgL_arg1775z00_3659 =
														(((BgL_approxz00_bglt)
															COBJECT(BgL_arg1778z00_3660))->BgL_typez00);
												}
												BgL_test2083z00_4124 =
													(
													((obj_t) BgL_arg1775z00_3659) ==
													BGl_za2_za2z00zztype_cachez00);
											}
											if (BgL_test2083z00_4124)
												{	/* Cfa/funcall.scm 98 */
													BgL_test2080z00_4110 = ((bool_t) 0);
												}
											else
												{	/* Cfa/funcall.scm 98 */
													BgL_test2080z00_4110 = ((bool_t) 1);
												}
										}
									else
										{	/* Cfa/funcall.scm 97 */
											BgL_test2080z00_4110 = ((bool_t) 0);
										}
								}
							else
								{	/* Cfa/funcall.scm 96 */
									BgL_test2080z00_4110 = ((bool_t) 0);
								}
							if (BgL_test2080z00_4110)
								{	/* Cfa/funcall.scm 96 */
									BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
										(BGl_proc2035z00zzcfa_funcallz00, BgL_fapproxz00_3628);
								}
							else
								{	/* Cfa/funcall.scm 96 */
									BFALSE;
								}
						}
						{
							BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4137;

							{
								obj_t BgL_auxz00_4138;

								{	/* Cfa/funcall.scm 106 */
									BgL_objectz00_bglt BgL_tmpz00_4139;

									BgL_tmpz00_4139 =
										((BgL_objectz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_3599));
									BgL_auxz00_4138 = BGL_OBJECT_WIDENING(BgL_tmpz00_4139);
								}
								BgL_auxz00_4137 =
									((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4138);
							}
							return
								(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4137))->
								BgL_approxz00);
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1772> */
	obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_funcallz00(obj_t
		BgL_envz00_3600, obj_t BgL_az00_3601)
	{
		{	/* Cfa/funcall.scm 100 */
			if (BGl_isazf3zf3zz__objectz00(BgL_az00_3601,
					BGl_makezd2procedurezd2appz00zzcfa_info2z00))
				{	/* Cfa/funcall.scm 101 */
					return
						BGl_setzd2procedurezd2approxzd2polymorphicz12zc0zzcfa_procedurez00(
						((BgL_appz00_bglt) BgL_az00_3601));
				}
			else
				{	/* Cfa/funcall.scm 101 */
					return BFALSE;
				}
		}

	}



/* &<@anonymous:1726> */
	obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzcfa_funcallz00(obj_t
		BgL_envz00_3602, obj_t BgL_allocz00_3606)
	{
		{	/* Cfa/funcall.scm 69 */
			{	/* Cfa/funcall.scm 70 */
				BgL_funcallz00_bglt BgL_i1157z00_3603;
				obj_t BgL_aapproxz00_3604;
				BgL_funcallz00_bglt BgL_nodez00_3605;

				BgL_i1157z00_3603 =
					((BgL_funcallz00_bglt)
					PROCEDURE_REF(BgL_envz00_3602, (int) (((long) 0))));
				BgL_aapproxz00_3604 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3602, (int) (((long) 1))));
				BgL_nodez00_3605 =
					((BgL_funcallz00_bglt)
					PROCEDURE_REF(BgL_envz00_3602, (int) (((long) 2))));
				{
					BgL_approxz00_bglt BgL_auxz00_4158;

					if (BGl_isazf3zf3zz__objectz00(BgL_allocz00_3606,
							BGl_makezd2procedurezd2appz00zzcfa_info2z00))
						{	/* Cfa/funcall.scm 71 */
							BgL_approxz00_bglt BgL_eapproxz00_3661;

							{
								BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4161;

								{
									obj_t BgL_auxz00_4162;

									{	/* Cfa/funcall.scm 71 */
										BgL_objectz00_bglt BgL_tmpz00_4163;

										BgL_tmpz00_4163 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_3606));
										BgL_auxz00_4162 = BGL_OBJECT_WIDENING(BgL_tmpz00_4163);
									}
									BgL_auxz00_4161 =
										((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4162);
								}
								BgL_eapproxz00_3661 =
									(((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_4161))->BgL_approxz00);
							}
							{	/* Cfa/funcall.scm 72 */
								BgL_approxz00_bglt BgL_arg1728z00_3662;
								BgL_approxz00_bglt BgL_arg1729z00_3663;

								{
									BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4169;

									{
										obj_t BgL_auxz00_4170;

										{	/* Cfa/funcall.scm 72 */
											BgL_objectz00_bglt BgL_tmpz00_4171;

											BgL_tmpz00_4171 =
												((BgL_objectz00_bglt) BgL_i1157z00_3603);
											BgL_auxz00_4170 = BGL_OBJECT_WIDENING(BgL_tmpz00_4171);
										}
										BgL_auxz00_4169 =
											((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4170);
									}
									BgL_arg1728z00_3662 =
										(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4169))->
										BgL_approxz00);
								}
								{	/* Cfa/funcall.scm 74 */
									obj_t BgL_arg1731z00_3664;

									BgL_arg1731z00_3664 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_eapproxz00_3661), BgL_aapproxz00_3604);
									BgL_arg1729z00_3663 =
										BGl_funcallz12z12zzcfa_funcallz00(
										((BgL_appz00_bglt) BgL_allocz00_3606), BgL_arg1731z00_3664,
										BgL_nodez00_3605);
								}
								BgL_auxz00_4158 =
									BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1728z00_3662,
									BgL_arg1729z00_3663);
							}
						}
					else
						{	/* Cfa/funcall.scm 70 */
							BgL_auxz00_4158 = BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
						}
					return ((obj_t) BgL_auxz00_4158);
				}
			}
		}

	}



/* &<@anonymous:1740> */
	obj_t BGl_z62zc3z04anonymousza31740ze3ze5zzcfa_funcallz00(obj_t
		BgL_envz00_3607, obj_t BgL_allocz00_3611)
	{
		{	/* Cfa/funcall.scm 85 */
			{	/* Cfa/funcall.scm 86 */
				BgL_funcallz00_bglt BgL_i1157z00_3608;
				obj_t BgL_aapproxz00_3609;
				BgL_funcallz00_bglt BgL_nodez00_3610;

				BgL_i1157z00_3608 =
					((BgL_funcallz00_bglt)
					PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 0))));
				BgL_aapproxz00_3609 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 1))));
				BgL_nodez00_3610 =
					((BgL_funcallz00_bglt)
					PROCEDURE_REF(BgL_envz00_3607, (int) (((long) 2))));
				{
					BgL_approxz00_bglt BgL_auxz00_4192;

					if (BGl_isazf3zf3zz__objectz00(BgL_allocz00_3611,
							BGl_makezd2procedurezd2appz00zzcfa_info2z00))
						{	/* Cfa/funcall.scm 87 */
							BgL_approxz00_bglt BgL_eapproxz00_3665;

							{
								BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_4195;

								{
									obj_t BgL_auxz00_4196;

									{	/* Cfa/funcall.scm 87 */
										BgL_objectz00_bglt BgL_tmpz00_4197;

										BgL_tmpz00_4197 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_3611));
										BgL_auxz00_4196 = BGL_OBJECT_WIDENING(BgL_tmpz00_4197);
									}
									BgL_auxz00_4195 =
										((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_4196);
								}
								BgL_eapproxz00_3665 =
									(((BgL_makezd2procedurezd2appz00_bglt)
										COBJECT(BgL_auxz00_4195))->BgL_approxz00);
							}
							{	/* Cfa/funcall.scm 88 */
								BgL_approxz00_bglt BgL_arg1742z00_3666;
								BgL_approxz00_bglt BgL_arg1743z00_3667;

								{
									BgL_funcallzf2cinfozf2_bglt BgL_auxz00_4203;

									{
										obj_t BgL_auxz00_4204;

										{	/* Cfa/funcall.scm 88 */
											BgL_objectz00_bglt BgL_tmpz00_4205;

											BgL_tmpz00_4205 =
												((BgL_objectz00_bglt) BgL_i1157z00_3608);
											BgL_auxz00_4204 = BGL_OBJECT_WIDENING(BgL_tmpz00_4205);
										}
										BgL_auxz00_4203 =
											((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_4204);
									}
									BgL_arg1742z00_3666 =
										(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4203))->
										BgL_approxz00);
								}
								{	/* Cfa/funcall.scm 90 */
									obj_t BgL_arg1744z00_3668;

									BgL_arg1744z00_3668 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_eapproxz00_3665), BgL_aapproxz00_3609);
									BgL_arg1743z00_3667 =
										BGl_funcallz12z12zzcfa_funcallz00(
										((BgL_appz00_bglt) BgL_allocz00_3611), BgL_arg1744z00_3668,
										BgL_nodez00_3610);
								}
								BgL_auxz00_4192 =
									BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1742z00_3666,
									BgL_arg1743z00_3667);
							}
						}
					else
						{	/* Cfa/funcall.scm 86 */
							BgL_auxz00_4192 = BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
						}
					return ((obj_t) BgL_auxz00_4192);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_funcallz00()
	{
		{	/* Cfa/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			BGl_modulezd2initializa7ationz75zzcfa_appz00(((long) 102053850),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 227653907),
				BSTRING_TO_STRING(BGl_string2036z00zzcfa_funcallz00));
		}

	}

#ifdef __cplusplus
}
#endif
