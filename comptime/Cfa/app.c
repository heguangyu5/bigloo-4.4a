/*===========================================================================*/
/*   (Cfa/app.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/app.scm) */
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

	typedef struct BgL_cfunzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cfunzf2cinfozf2_bglt;

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;


	static obj_t BGl_objectzd2initzd2zzcfa_appz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_appz00();
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62appz12zd2cfunzf2Cinfo1508z50zzcfa_appz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_appz00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62appz12zd2internzd2sfunzf2Cin1504z82zzcfa_appz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt, BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62appz121501z70zzcfa_appz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_appz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_appz00();
	extern BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(BgL_sfunz00_bglt, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_appz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcfa_appz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_appz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_appz00();
	static BgL_approxz00_bglt BGl_z62appz12z70zzcfa_appz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62cfaz12zd2app1500za2zzcfa_appz00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_z62appz12zd2externzd2sfunzf2Cin1506z82zzcfa_appz00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_appz12zd2envzc0zzcfa_appz00,
		BgL_bgl_za762appza712za770za7za7cf1976za7, BGl_z62appz12z70zzcfa_appz00, 0L,
		BUNSPEC, 3);
	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzcfa_appz00,
		BgL_bgl_za762appza7121501za7701977za7, BGl_z62appz121501z70zzcfa_appz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzcfa_appz00,
		BgL_bgl_za762cfaza712za7d2app11978za7,
		BGl_z62cfaz12zd2app1500za2zzcfa_appz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzcfa_appz00,
		BgL_bgl_za762appza712za7d2inte1979za7,
		BGl_z62appz12zd2internzd2sfunzf2Cin1504z82zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzcfa_appz00,
		BgL_bgl_za762appza712za7d2exte1980za7,
		BGl_z62appz12zd2externzd2sfunzf2Cin1506z82zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzcfa_appz00,
		BgL_bgl_za762appza712za7d2cfun1981za7,
		BGl_z62appz12zd2cfunzf2Cinfo1508z50zzcfa_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1962z00zzcfa_appz00,
		BgL_bgl_string1962za700za7za7c1982za7, "app!1501", 8);
	      DEFINE_STRING(BGl_string1963z00zzcfa_appz00,
		BgL_bgl_string1963za700za7za7c1983za7, "app!", 4);
	      DEFINE_STRING(BGl_string1964z00zzcfa_appz00,
		BgL_bgl_string1964za700za7za7c1984za7, "No method for this function", 27);
	      DEFINE_STRING(BGl_string1966z00zzcfa_appz00,
		BgL_bgl_string1966za700za7za7c1985za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string1970z00zzcfa_appz00,
		BgL_bgl_string1970za700za7za7c1986za7, "extern call", 11);
	      DEFINE_STRING(BGl_string1971z00zzcfa_appz00,
		BgL_bgl_string1971za700za7za7c1987za7, "cfa_app", 7);
	      DEFINE_STRING(BGl_string1972z00zzcfa_appz00,
		BgL_bgl_string1972za700za7za7c1988za7, "static all ", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_appz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long
		BgL_checksumz00_3580, char *BgL_fromz00_3581)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_appz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_appz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_appz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_appz00();
					BGl_cnstzd2initzd2zzcfa_appz00();
					BGl_importedzd2moduleszd2initz00zzcfa_appz00();
					BGl_genericzd2initzd2zzcfa_appz00();
					BGl_methodzd2initzd2zzcfa_appz00();
					return BGl_toplevelzd2initzd2zzcfa_appz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_app");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_app");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_app");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_app");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_app");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_app");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_app");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			{	/* Cfa/app.scm 15 */
				obj_t BgL_cportz00_3506;

				{	/* Cfa/app.scm 15 */
					obj_t BgL_stringz00_3514;

					BgL_stringz00_3514 = BGl_string1972z00zzcfa_appz00;
					{	/* Cfa/app.scm 15 */
						obj_t BgL_startz00_3515;

						BgL_startz00_3515 = BINT(((long) 0));
						{	/* Cfa/app.scm 15 */
							obj_t BgL_endz00_3516;

							BgL_endz00_3516 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3514)));
							{	/* Cfa/app.scm 15 */

								BgL_cportz00_3506 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3514, BgL_startz00_3515, BgL_endz00_3516);
				}}}}
				{
					long BgL_iz00_3507;

					BgL_iz00_3507 = ((long) 1);
				BgL_loopz00_3508:
					if ((BgL_iz00_3507 == ((long) -1)))
						{	/* Cfa/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/app.scm 15 */
							{	/* Cfa/app.scm 15 */
								obj_t BgL_arg1974z00_3510;

								{	/* Cfa/app.scm 15 */

									{	/* Cfa/app.scm 15 */
										obj_t BgL_locationz00_3512;

										BgL_locationz00_3512 = BBOOL(((bool_t) 0));
										{	/* Cfa/app.scm 15 */

											BgL_arg1974z00_3510 =
												BGl_readz00zz__readerz00(BgL_cportz00_3506,
												BgL_locationz00_3512);
										}
									}
								}
								{	/* Cfa/app.scm 15 */
									int BgL_tmpz00_3609;

									BgL_tmpz00_3609 = (int) (BgL_iz00_3507);
									CNST_TABLE_SET(BgL_tmpz00_3609, BgL_arg1974z00_3510);
							}}
							{	/* Cfa/app.scm 15 */
								int BgL_auxz00_3513;

								BgL_auxz00_3513 = (int) ((BgL_iz00_3507 - ((long) 1)));
								{
									long BgL_iz00_3614;

									BgL_iz00_3614 = (long) (BgL_auxz00_3513);
									BgL_iz00_3507 = BgL_iz00_3614;
									goto BgL_loopz00_3508;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00, BGl_proc1961z00zzcfa_appz00,
				BGl_funz00zzast_varz00, BGl_string1962z00zzcfa_appz00);
		}

	}



/* &app!1501 */
	obj_t BGl_z62appz121501z70zzcfa_appz00(obj_t BgL_envz00_3478,
		obj_t BgL_funz00_3479, obj_t BgL_varz00_3480,
		obj_t BgL_argszd2approxzd2_3481)
	{
		{	/* Cfa/app.scm 47 */
			{	/* Cfa/app.scm 48 */
				obj_t BgL_arg1536z00_3521;

				{	/* Cfa/app.scm 48 */
					obj_t BgL_arg1537z00_3522;

					BgL_arg1537z00_3522 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_varz00_bglt) BgL_varz00_3480)));
					BgL_arg1536z00_3521 =
						MAKE_YOUNG_PAIR(
						((obj_t) ((BgL_funz00_bglt) BgL_funz00_3479)), BgL_arg1537z00_3522);
				}
				return
					BGl_internalzd2errorzd2zztools_errorz00(BGl_string1963z00zzcfa_appz00,
					BGl_string1964z00zzcfa_appz00, BgL_arg1536z00_3521);
			}
		}

	}



/* app! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_appz12z12zzcfa_appz00(BgL_funz00_bglt
		BgL_funz00_4, BgL_varz00_bglt BgL_varz00_5, obj_t BgL_argszd2approxzd2_6)
	{
		{	/* Cfa/app.scm 47 */
			{	/* Cfa/app.scm 47 */
				obj_t BgL_method1502z00_2805;

				{	/* Cfa/app.scm 47 */
					obj_t BgL_res1946z00_3430;

					{	/* Cfa/app.scm 47 */
						long BgL_objzd2classzd2numz00_3395;

						{	/* Cfa/app.scm 47 */
							long BgL_res1936z00_3398;

							BgL_res1936z00_3398 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_4));
							BgL_objzd2classzd2numz00_3395 = BgL_res1936z00_3398;
						}
						{	/* Cfa/app.scm 47 */
							obj_t BgL_arg1813z00_3396;

							BgL_arg1813z00_3396 =
								PROCEDURE_REF(BGl_appz12zd2envzc0zzcfa_appz00,
								(int) (((long) 1)));
							{	/* Cfa/app.scm 47 */
								int BgL_offsetz00_3400;

								BgL_offsetz00_3400 = (int) (BgL_objzd2classzd2numz00_3395);
								{	/* Cfa/app.scm 47 */
									long BgL_offsetz00_3401;

									BgL_offsetz00_3401 =
										((long) (BgL_offsetz00_3400) - OBJECT_TYPE);
									{	/* Cfa/app.scm 47 */
										long BgL_modz00_3402;

										BgL_modz00_3402 =
											(BgL_offsetz00_3401 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/app.scm 47 */
											long BgL_restz00_3404;

											BgL_restz00_3404 =
												(BgL_offsetz00_3401 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/app.scm 47 */

												{	/* Cfa/app.scm 47 */
													obj_t BgL_bucketz00_3406;

													BgL_bucketz00_3406 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3396), BgL_modz00_3402);
													BgL_res1946z00_3430 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3406), BgL_restz00_3404);
					}}}}}}}}
					BgL_method1502z00_2805 = BgL_res1946z00_3430;
				}
				return
					((BgL_approxz00_bglt)
					PROCEDURE_ENTRY(BgL_method1502z00_2805) (BgL_method1502z00_2805,
						((obj_t) BgL_funz00_4),
						((obj_t) BgL_varz00_5), BgL_argszd2approxzd2_6, BEOA));
			}
		}

	}



/* &app! */
	BgL_approxz00_bglt BGl_z62appz12z70zzcfa_appz00(obj_t BgL_envz00_3482,
		obj_t BgL_funz00_3483, obj_t BgL_varz00_3484,
		obj_t BgL_argszd2approxzd2_3485)
	{
		{	/* Cfa/app.scm 47 */
			return
				BGl_appz12z12zzcfa_appz00(
				((BgL_funz00_bglt) BgL_funz00_3483),
				((BgL_varz00_bglt) BgL_varz00_3484), BgL_argszd2approxzd2_3485);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_appz00zzast_nodez00,
				BGl_proc1965z00zzcfa_appz00, BGl_string1966z00zzcfa_appz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc1967z00zzcfa_appz00,
				BGl_string1963z00zzcfa_appz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00,
				BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc1968z00zzcfa_appz00,
				BGl_string1963z00zzcfa_appz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_appz12zd2envzc0zzcfa_appz00, BGl_cfunzf2Cinfozf2zzcfa_infoz00,
				BGl_proc1969z00zzcfa_appz00, BGl_string1963z00zzcfa_appz00);
		}

	}



/* &app!-cfun/Cinfo1508 */
	BgL_approxz00_bglt BGl_z62appz12zd2cfunzf2Cinfo1508z50zzcfa_appz00(obj_t
		BgL_envz00_3490, obj_t BgL_funz00_3491, obj_t BgL_varz00_3492,
		obj_t BgL_argszd2approxzd2_3493)
	{
		{	/* Cfa/app.scm 115 */
			if (
				(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_cfunz00_bglt) BgL_funz00_3491))))->BgL_topzf3zf3))
				{
					obj_t BgL_l1495z00_3526;

					BgL_l1495z00_3526 = BgL_argszd2approxzd2_3493;
				BgL_zc3z04anonymousza31642ze3z87_3525:
					if (PAIRP(BgL_l1495z00_3526))
						{	/* Tools/trace.sch 53 */
							{	/* Tools/trace.sch 53 */
								obj_t BgL_az00_3527;

								BgL_az00_3527 = CAR(BgL_l1495z00_3526);
								BGl_loosez12z12zzcfa_loosez00(
									((BgL_approxz00_bglt) BgL_az00_3527),
									CNST_TABLE_REF(((long) 0)));
							}
							{
								obj_t BgL_l1495z00_3676;

								BgL_l1495z00_3676 = CDR(BgL_l1495z00_3526);
								BgL_l1495z00_3526 = BgL_l1495z00_3676;
								goto BgL_zc3z04anonymousza31642ze3z87_3525;
							}
						}
					else
						{	/* Tools/trace.sch 53 */
							((bool_t) 1);
						}
				}
			else
				{
					obj_t BgL_l1497z00_3529;

					BgL_l1497z00_3529 = BgL_argszd2approxzd2_3493;
				BgL_zc3z04anonymousza31645ze3z87_3528:
					if (PAIRP(BgL_l1497z00_3529))
						{	/* Tools/trace.sch 53 */
							{	/* Tools/trace.sch 53 */
								obj_t BgL_az00_3530;

								BgL_az00_3530 = CAR(BgL_l1497z00_3529);
								BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(
									((BgL_approxz00_bglt) BgL_az00_3530),
									BGl_string1970z00zzcfa_appz00);
							}
							{
								obj_t BgL_l1497z00_3683;

								BgL_l1497z00_3683 = CDR(BgL_l1497z00_3529);
								BgL_l1497z00_3529 = BgL_l1497z00_3683;
								goto BgL_zc3z04anonymousza31645ze3z87_3528;
							}
						}
					else
						{	/* Tools/trace.sch 53 */
							((bool_t) 1);
						}
				}
			{
				BgL_cfunzf2cinfozf2_bglt BgL_auxz00_3685;

				{
					obj_t BgL_auxz00_3686;

					{	/* Tools/trace.sch 53 */
						BgL_objectz00_bglt BgL_tmpz00_3687;

						BgL_tmpz00_3687 =
							((BgL_objectz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_3491));
						BgL_auxz00_3686 = BGL_OBJECT_WIDENING(BgL_tmpz00_3687);
					}
					BgL_auxz00_3685 = ((BgL_cfunzf2cinfozf2_bglt) BgL_auxz00_3686);
				}
				return
					(((BgL_cfunzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3685))->
					BgL_approxz00);
			}
		}

	}



/* &app!-extern-sfun/Cin1506 */
	BgL_approxz00_bglt
		BGl_z62appz12zd2externzd2sfunzf2Cin1506z82zzcfa_appz00(obj_t
		BgL_envz00_3494, obj_t BgL_funz00_3495, obj_t BgL_varz00_3496,
		obj_t BgL_argszd2approxzd2_3497)
	{
		{	/* Cfa/app.scm 93 */
			if (
				(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								((BgL_sfunz00_bglt) BgL_funz00_3495))))->BgL_topzf3zf3))
				{
					obj_t BgL_l1491z00_3534;

					BgL_l1491z00_3534 = BgL_argszd2approxzd2_3497;
				BgL_zc3z04anonymousza31629ze3z87_3533:
					if (PAIRP(BgL_l1491z00_3534))
						{	/* Cfa/app.scm 100 */
							{	/* Cfa/app.scm 100 */
								obj_t BgL_az00_3535;

								BgL_az00_3535 = CAR(BgL_l1491z00_3534);
								BGl_loosez12z12zzcfa_loosez00(
									((BgL_approxz00_bglt) BgL_az00_3535),
									CNST_TABLE_REF(((long) 0)));
							}
							{
								obj_t BgL_l1491z00_3703;

								BgL_l1491z00_3703 = CDR(BgL_l1491z00_3534);
								BgL_l1491z00_3534 = BgL_l1491z00_3703;
								goto BgL_zc3z04anonymousza31629ze3z87_3533;
							}
						}
					else
						{	/* Cfa/app.scm 100 */
							((bool_t) 1);
						}
				}
			else
				{
					obj_t BgL_l1493z00_3537;

					BgL_l1493z00_3537 = BgL_argszd2approxzd2_3497;
				BgL_zc3z04anonymousza31632ze3z87_3536:
					if (PAIRP(BgL_l1493z00_3537))
						{	/* Cfa/app.scm 102 */
							{	/* Cfa/app.scm 102 */
								obj_t BgL_az00_3538;

								BgL_az00_3538 = CAR(BgL_l1493z00_3537);
								BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(
									((BgL_approxz00_bglt) BgL_az00_3538),
									BGl_string1970z00zzcfa_appz00);
							}
							{
								obj_t BgL_l1493z00_3710;

								BgL_l1493z00_3710 = CDR(BgL_l1493z00_3537);
								BgL_l1493z00_3537 = BgL_l1493z00_3710;
								goto BgL_zc3z04anonymousza31632ze3z87_3536;
							}
						}
					else
						{	/* Cfa/app.scm 102 */
							((bool_t) 1);
						}
				}
			{	/* Cfa/app.scm 103 */
				bool_t BgL_test1997z00_3712;

				{
					BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_3713;

					{
						obj_t BgL_auxz00_3714;

						{	/* Cfa/app.scm 103 */
							BgL_objectz00_bglt BgL_tmpz00_3715;

							BgL_tmpz00_3715 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_3495));
							BgL_auxz00_3714 = BGL_OBJECT_WIDENING(BgL_tmpz00_3715);
						}
						BgL_auxz00_3713 =
							((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3714);
					}
					BgL_test1997z00_3712 =
						(((BgL_externzd2sfunzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3713))->
						BgL_polymorphiczf3zf3);
				}
				if (BgL_test1997z00_3712)
					{	/* Cfa/app.scm 104 */
						BgL_approxz00_bglt BgL_i1161z00_3539;

						{
							BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_3721;

							{
								obj_t BgL_auxz00_3722;

								{	/* Cfa/app.scm 105 */
									BgL_objectz00_bglt BgL_tmpz00_3723;

									BgL_tmpz00_3723 =
										((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_3495));
									BgL_auxz00_3722 = BGL_OBJECT_WIDENING(BgL_tmpz00_3723);
								}
								BgL_auxz00_3721 =
									((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3722);
							}
							BgL_i1161z00_3539 =
								(((BgL_externzd2sfunzf2cinfoz20_bglt)
									COBJECT(BgL_auxz00_3721))->BgL_approxz00);
						}
						{
							BgL_typez00_bglt BgL_auxz00_3729;

							{	/* Cfa/app.scm 105 */
								BgL_typez00_bglt BgL_arg1639z00_3540;

								{	/* Cfa/app.scm 105 */
									BgL_approxz00_bglt BgL_arg1640z00_3541;

									{
										BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_3730;

										{
											obj_t BgL_auxz00_3731;

											{	/* Cfa/app.scm 105 */
												BgL_objectz00_bglt BgL_tmpz00_3732;

												BgL_tmpz00_3732 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_3495));
												BgL_auxz00_3731 = BGL_OBJECT_WIDENING(BgL_tmpz00_3732);
											}
											BgL_auxz00_3730 =
												((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3731);
										}
										BgL_arg1640z00_3541 =
											(((BgL_externzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_3730))->BgL_approxz00);
									}
									BgL_arg1639z00_3540 =
										(((BgL_approxz00_bglt) COBJECT(BgL_arg1640z00_3541))->
										BgL_typez00);
								}
								BgL_auxz00_3729 =
									BGl_getzd2bigloozd2typez00zztype_cachez00
									(BgL_arg1639z00_3540);
							}
							((((BgL_approxz00_bglt) COBJECT(BgL_i1161z00_3539))->
									BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_3729), BUNSPEC);
						}
					}
				else
					{	/* Cfa/app.scm 103 */
						BFALSE;
					}
			}
			{
				BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_3741;

				{
					obj_t BgL_auxz00_3742;

					{	/* Cfa/app.scm 110 */
						BgL_objectz00_bglt BgL_tmpz00_3743;

						BgL_tmpz00_3743 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_3495));
						BgL_auxz00_3742 = BGL_OBJECT_WIDENING(BgL_tmpz00_3743);
					}
					BgL_auxz00_3741 =
						((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3742);
				}
				return
					(((BgL_externzd2sfunzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3741))->
					BgL_approxz00);
			}
		}

	}



/* &app!-intern-sfun/Cin1504 */
	BgL_approxz00_bglt
		BGl_z62appz12zd2internzd2sfunzf2Cin1504z82zzcfa_appz00(obj_t
		BgL_envz00_3498, obj_t BgL_funz00_3499, obj_t BgL_varz00_3500,
		obj_t BgL_argszd2approxzd2_3501)
	{
		{	/* Cfa/app.scm 53 */
			{	/* Cfa/app.scm 64 */
				obj_t BgL_g1490z00_3544;

				BgL_g1490z00_3544 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_funz00_3499))))->BgL_argsz00);
				{
					obj_t BgL_ll1487z00_3546;
					obj_t BgL_ll1488z00_3547;

					BgL_ll1487z00_3546 = BgL_g1490z00_3544;
					BgL_ll1488z00_3547 = BgL_argszd2approxzd2_3501;
				BgL_zc3z04anonymousza31583ze3z87_3545:
					if (NULLP(BgL_ll1487z00_3546))
						{	/* Cfa/app.scm 64 */
							((bool_t) 1);
						}
					else
						{	/* Cfa/app.scm 64 */
							{	/* Cfa/app.scm 65 */
								obj_t BgL_formalz00_3548;
								obj_t BgL_approxz00_3549;

								BgL_formalz00_3548 = CAR(((obj_t) BgL_ll1487z00_3546));
								BgL_approxz00_3549 = CAR(((obj_t) BgL_ll1488z00_3547));
								{	/* Cfa/app.scm 65 */
									BgL_approxz00_bglt BgL_arg1588z00_3550;

									{	/* Cfa/app.scm 65 */
										BgL_svarz00_bglt BgL_oz00_3551;

										BgL_oz00_3551 =
											((BgL_svarz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_formalz00_3548))))->
												BgL_valuez00));
										{
											BgL_svarzf2cinfozf2_bglt BgL_auxz00_3762;

											{
												obj_t BgL_auxz00_3763;

												{	/* Cfa/app.scm 65 */
													BgL_objectz00_bglt BgL_tmpz00_3764;

													BgL_tmpz00_3764 =
														((BgL_objectz00_bglt) BgL_oz00_3551);
													BgL_auxz00_3763 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3764);
												}
												BgL_auxz00_3762 =
													((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_3763);
											}
											BgL_arg1588z00_3550 =
												(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3762))->
												BgL_approxz00);
										}
									}
									BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1588z00_3550,
										((BgL_approxz00_bglt) BgL_approxz00_3549));
								}
							}
							{	/* Cfa/app.scm 64 */
								obj_t BgL_arg1592z00_3552;
								obj_t BgL_arg1593z00_3553;

								BgL_arg1592z00_3552 = CDR(((obj_t) BgL_ll1487z00_3546));
								BgL_arg1593z00_3553 = CDR(((obj_t) BgL_ll1488z00_3547));
								{
									obj_t BgL_ll1488z00_3776;
									obj_t BgL_ll1487z00_3775;

									BgL_ll1487z00_3775 = BgL_arg1592z00_3552;
									BgL_ll1488z00_3776 = BgL_arg1593z00_3553;
									BgL_ll1488z00_3547 = BgL_ll1488z00_3776;
									BgL_ll1487z00_3546 = BgL_ll1487z00_3775;
									goto BgL_zc3z04anonymousza31583ze3z87_3545;
								}
							}
						}
				}
			}
			{	/* Cfa/app.scm 76 */
				bool_t BgL_test1999z00_3777;

				{	/* Cfa/app.scm 76 */
					bool_t BgL_test2000z00_3778;

					{	/* Cfa/app.scm 76 */
						BgL_variablez00_bglt BgL_arg1627z00_3554;

						BgL_arg1627z00_3554 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_varz00_3500)))->BgL_variablez00);
						{	/* Cfa/app.scm 76 */
							bool_t BgL_res1954z00_3555;

							BgL_res1954z00_3555 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1627z00_3554), BGl_globalz00zzast_varz00);
							BgL_test2000z00_3778 = BgL_res1954z00_3555;
						}
					}
					if (BgL_test2000z00_3778)
						{	/* Cfa/app.scm 77 */
							bool_t BgL_test2001z00_3783;

							{	/* Cfa/app.scm 77 */
								BgL_variablez00_bglt BgL_arg1626z00_3556;

								BgL_arg1626z00_3556 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_varz00_3500)))->BgL_variablez00);
								{	/* Cfa/app.scm 77 */
									bool_t BgL_res1955z00_3557;

									BgL_res1955z00_3557 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1626z00_3556), BGl_globalz00zzast_varz00);
									BgL_test2001z00_3783 = BgL_res1955z00_3557;
								}
							}
							if (BgL_test2001z00_3783)
								{	/* Cfa/app.scm 77 */
									BgL_test1999z00_3777 =
										(
										(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_varz00_3500)))->
															BgL_variablez00))))->BgL_importz00) ==
										CNST_TABLE_REF(((long) 1)));
								}
							else
								{	/* Cfa/app.scm 77 */
									BgL_test1999z00_3777 = ((bool_t) 0);
								}
						}
					else
						{	/* Cfa/app.scm 76 */
							BgL_test1999z00_3777 = ((bool_t) 1);
						}
				}
				if (BgL_test1999z00_3777)
					{	/* Cfa/app.scm 80 */
						BgL_approxz00_bglt BgL_az00_3558;

						{	/* Cfa/app.scm 80 */
							BgL_variablez00_bglt BgL_arg1611z00_3559;

							BgL_arg1611z00_3559 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_varz00_3500)))->BgL_variablez00);
							BgL_az00_3558 =
								BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(
								((BgL_sfunz00_bglt) BgL_funz00_3499),
								((obj_t) BgL_arg1611z00_3559));
						}
						return BgL_az00_3558;
					}
				else
					{	/* Cfa/app.scm 85 */
						obj_t BgL_az00_3560;

						{	/* Cfa/app.scm 85 */
							BgL_variablez00_bglt BgL_arg1612z00_3561;

							BgL_arg1612z00_3561 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_varz00_3500)))->BgL_variablez00);
							BgL_az00_3560 =
								BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(
								((BgL_valuez00_bglt)
									((BgL_sfunz00_bglt) BgL_funz00_3499)),
								((obj_t) BgL_arg1612z00_3561));
						}
						return ((BgL_approxz00_bglt) BgL_az00_3560);
					}
			}
		}

	}



/* &cfa!-app1500 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2app1500za2zzcfa_appz00(obj_t
		BgL_envz00_3502, obj_t BgL_nodez00_3503)
	{
		{	/* Cfa/app.scm 35 */
			{	/* Cfa/app.scm 39 */
				obj_t BgL_argszd2approxzd2_3563;

				{	/* Cfa/app.scm 39 */
					obj_t BgL_l1481z00_3564;

					BgL_l1481z00_3564 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_3503)))->BgL_argsz00);
					if (NULLP(BgL_l1481z00_3564))
						{	/* Cfa/app.scm 39 */
							BgL_argszd2approxzd2_3563 = BNIL;
						}
					else
						{	/* Cfa/app.scm 39 */
							obj_t BgL_head1483z00_3565;

							{	/* Cfa/app.scm 39 */
								BgL_approxz00_bglt BgL_arg1578z00_3566;

								{	/* Cfa/app.scm 39 */
									obj_t BgL_arg1582z00_3567;

									BgL_arg1582z00_3567 = CAR(((obj_t) BgL_l1481z00_3564));
									BgL_arg1578z00_3566 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_arg1582z00_3567));
								}
								{	/* Cfa/app.scm 39 */
									obj_t BgL_res1948z00_3568;

									BgL_res1948z00_3568 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_arg1578z00_3566), BNIL);
									BgL_head1483z00_3565 = BgL_res1948z00_3568;
								}
							}
							{	/* Cfa/app.scm 39 */
								obj_t BgL_g1486z00_3569;

								BgL_g1486z00_3569 = CDR(((obj_t) BgL_l1481z00_3564));
								{
									obj_t BgL_l1481z00_3571;
									obj_t BgL_tail1484z00_3572;

									BgL_l1481z00_3571 = BgL_g1486z00_3569;
									BgL_tail1484z00_3572 = BgL_head1483z00_3565;
								BgL_zc3z04anonymousza31563ze3z87_3570:
									if (NULLP(BgL_l1481z00_3571))
										{	/* Cfa/app.scm 39 */
											BgL_argszd2approxzd2_3563 = BgL_head1483z00_3565;
										}
									else
										{	/* Cfa/app.scm 39 */
											obj_t BgL_newtail1485z00_3573;

											{	/* Cfa/app.scm 39 */
												BgL_approxz00_bglt BgL_arg1573z00_3574;

												{	/* Cfa/app.scm 39 */
													obj_t BgL_arg1575z00_3575;

													BgL_arg1575z00_3575 =
														CAR(((obj_t) BgL_l1481z00_3571));
													BgL_arg1573z00_3574 =
														BGl_cfaz12z12zzcfa_cfaz00(
														((BgL_nodez00_bglt) BgL_arg1575z00_3575));
												}
												{	/* Cfa/app.scm 39 */
													obj_t BgL_res1951z00_3576;

													BgL_res1951z00_3576 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1573z00_3574), BNIL);
													BgL_newtail1485z00_3573 = BgL_res1951z00_3576;
												}
											}
											SET_CDR(BgL_tail1484z00_3572, BgL_newtail1485z00_3573);
											{	/* Cfa/app.scm 39 */
												obj_t BgL_arg1565z00_3577;

												BgL_arg1565z00_3577 = CDR(((obj_t) BgL_l1481z00_3571));
												{
													obj_t BgL_tail1484z00_3830;
													obj_t BgL_l1481z00_3829;

													BgL_l1481z00_3829 = BgL_arg1565z00_3577;
													BgL_tail1484z00_3830 = BgL_newtail1485z00_3573;
													BgL_tail1484z00_3572 = BgL_tail1484z00_3830;
													BgL_l1481z00_3571 = BgL_l1481z00_3829;
													goto BgL_zc3z04anonymousza31563ze3z87_3570;
												}
											}
										}
								}
							}
						}
				}
				{	/* Cfa/app.scm 42 */
					BgL_valuez00_bglt BgL_arg1540z00_3578;
					BgL_varz00_bglt BgL_arg1552z00_3579;

					BgL_arg1540z00_3578 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_3503)))->
												BgL_funz00)))->BgL_variablez00)))->BgL_valuez00);
					BgL_arg1552z00_3579 =
						(((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_nodez00_3503)))->
						BgL_funz00);
					return BGl_appz12z12zzcfa_appz00(((BgL_funz00_bglt)
							BgL_arg1540z00_3578), BgL_arg1552z00_3579,
						BgL_argszd2approxzd2_3563);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_appz00()
	{
		{	/* Cfa/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 227653907),
				BSTRING_TO_STRING(BGl_string1971z00zzcfa_appz00));
		}

	}

#ifdef __cplusplus
}
#endif
