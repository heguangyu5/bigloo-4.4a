/*===========================================================================*/
/*   (Cfa/iterate.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/iterate.scm) */
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


	static obj_t BGl_z62cfazd2exportzd2varz12z70zzcfa_iteratez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	extern obj_t BGl_unitzd2initializa7ersz75zzast_unitz00();
	static obj_t BGl_z62cfazd2exportzd2varz121491z70zzcfa_iteratez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_iteratez00();
	static obj_t BGl_za2cfazd2currentza2zd2zzcfa_iteratez00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfazd2currentzd2zzcfa_iteratez00();
	static obj_t BGl_appendzd221011zd2zzcfa_iteratez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_iteratez00();
	static obj_t BGl_z62cfazd2iteratez12za2zzcfa_iteratez00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62cfazd2internzd2sfunz12z70zzcfa_iteratez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cfazd2exportzd2varz12zd2inte1497za2zzcfa_iteratez00(obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt);
	static obj_t BGl_z62cfazd2currentzb0zzcfa_iteratez00(obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_iteratez00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_z62continuezd2cfaz12za2zzcfa_iteratez00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62cfazd2exportzd2varz12zd2svar1495za2zzcfa_iteratez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 = BUNSPEC;
	static obj_t BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_iteratez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_iteratez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_iteratez00();
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62cfazd2iteratezd2tozd2fixpointz12za2zzcfa_iteratez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcfa_iteratez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_iteratez00();
	extern obj_t BGl_valuez00zzast_varz00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static bool_t BGl_exportedzd2closurezf3z21zzcfa_iteratez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cfazd2iteratez12zc0zzcfa_iteratez00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfazd2iteratezd2tozd2fixpointz12zd2envz12zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2iterate1974z00,
		BGl_z62cfazd2iteratezd2tozd2fixpointz12za2zzcfa_iteratez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfazd2internzd2sfunz12zd2envzc0zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2internza71975za7,
		BGl_z62cfazd2internzd2sfunz12z70zzcfa_iteratez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfazd2currentzd2envz00zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2current1976z00,
		BGl_z62cfazd2currentzb0zzcfa_iteratez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2exportza71977za7,
		BGl_z62cfazd2exportzd2varz121491z70zzcfa_iteratez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2exportza71978za7,
		BGl_z62cfazd2exportzd2varz12zd2svar1495za2zzcfa_iteratez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2exportza71979za7,
		BGl_z62cfazd2exportzd2varz12zd2inte1497za2zzcfa_iteratez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_continuezd2cfaz12zd2envz12zzcfa_iteratez00,
		BgL_bgl_za762continueza7d2cf1980z00,
		BGl_z62continuezd2cfaz12za2zzcfa_iteratez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1962z00zzcfa_iteratez00,
		BgL_bgl_string1962za700za7za7c1981za7, "~a[~a]", 6);
	      DEFINE_STRING(BGl_string1964z00zzcfa_iteratez00,
		BgL_bgl_string1964za700za7za7c1982za7, "cfa-export-var!1491", 19);
	      DEFINE_STRING(BGl_string1965z00zzcfa_iteratez00,
		BgL_bgl_string1965za700za7za7c1983za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1967z00zzcfa_iteratez00,
		BgL_bgl_string1967za700za7za7c1984za7, "cfa-export-var!", 15);
	      DEFINE_STRING(BGl_string1969z00zzcfa_iteratez00,
		BgL_bgl_string1969za700za7za7c1985za7, "cfa_iterate", 11);
	      DEFINE_STRING(BGl_string1970z00zzcfa_iteratez00,
		BgL_bgl_string1970za700za7za7c1986za7,
		"all cfa-export-var!1491 never export ", 37);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfazd2iteratez12zd2envz12zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2iterate1987z00,
		BGl_z62cfazd2iteratez12za2zzcfa_iteratez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
		BgL_bgl_za762cfaza7d2exportza71988za7,
		BGl_z62cfazd2exportzd2varz12z70zzcfa_iteratez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2cfazd2currentza2zd2zzcfa_iteratez00));
		     ADD_ROOT((void *) (&BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
		     ADD_ROOT((void *) (&BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_iteratez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long
		BgL_checksumz00_3507, char *BgL_fromz00_3508)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_iteratez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_iteratez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_iteratez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00();
					BGl_cnstzd2initzd2zzcfa_iteratez00();
					BGl_importedzd2moduleszd2initz00zzcfa_iteratez00();
					BGl_genericzd2initzd2zzcfa_iteratez00();
					BGl_methodzd2initzd2zzcfa_iteratez00();
					return BGl_toplevelzd2initzd2zzcfa_iteratez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_iterate");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_iterate");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			{	/* Cfa/iterate.scm 15 */
				obj_t BgL_cportz00_3481;

				{	/* Cfa/iterate.scm 15 */
					obj_t BgL_stringz00_3489;

					BgL_stringz00_3489 = BGl_string1970z00zzcfa_iteratez00;
					{	/* Cfa/iterate.scm 15 */
						obj_t BgL_startz00_3490;

						BgL_startz00_3490 = BINT(((long) 0));
						{	/* Cfa/iterate.scm 15 */
							obj_t BgL_endz00_3491;

							BgL_endz00_3491 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3489)));
							{	/* Cfa/iterate.scm 15 */

								BgL_cportz00_3481 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3489, BgL_startz00_3490, BgL_endz00_3491);
				}}}}
				{
					long BgL_iz00_3482;

					BgL_iz00_3482 = ((long) 3);
				BgL_loopz00_3483:
					if ((BgL_iz00_3482 == ((long) -1)))
						{	/* Cfa/iterate.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/iterate.scm 15 */
							{	/* Cfa/iterate.scm 15 */
								obj_t BgL_arg1972z00_3485;

								{	/* Cfa/iterate.scm 15 */

									{	/* Cfa/iterate.scm 15 */
										obj_t BgL_locationz00_3487;

										BgL_locationz00_3487 = BBOOL(((bool_t) 0));
										{	/* Cfa/iterate.scm 15 */

											BgL_arg1972z00_3485 =
												BGl_readz00zz__readerz00(BgL_cportz00_3481,
												BgL_locationz00_3487);
										}
									}
								}
								{	/* Cfa/iterate.scm 15 */
									int BgL_tmpz00_3538;

									BgL_tmpz00_3538 = (int) (BgL_iz00_3482);
									CNST_TABLE_SET(BgL_tmpz00_3538, BgL_arg1972z00_3485);
							}}
							{	/* Cfa/iterate.scm 15 */
								int BgL_auxz00_3488;

								BgL_auxz00_3488 = (int) ((BgL_iz00_3482 - ((long) 1)));
								{
									long BgL_iz00_3543;

									BgL_iz00_3543 = (long) (BgL_auxz00_3488);
									BgL_iz00_3482 = BgL_iz00_3543;
									goto BgL_loopz00_3483;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BUNSPEC;
			BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 = BINT(((long) -1));
			return (BGl_za2cfazd2currentza2zd2zzcfa_iteratez00 = BUNSPEC, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcfa_iteratez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2788;

				BgL_headz00_2788 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2789;
					obj_t BgL_tailz00_2790;

					BgL_prevz00_2789 = BgL_headz00_2788;
					BgL_tailz00_2790 = BgL_l1z00_1;
				BgL_loopz00_2791:
					if (PAIRP(BgL_tailz00_2790))
						{
							obj_t BgL_newzd2prevzd2_2793;

							BgL_newzd2prevzd2_2793 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2790), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2789, BgL_newzd2prevzd2_2793);
							{
								obj_t BgL_tailz00_3554;
								obj_t BgL_prevz00_3553;

								BgL_prevz00_3553 = BgL_newzd2prevzd2_2793;
								BgL_tailz00_3554 = CDR(BgL_tailz00_2790);
								BgL_tailz00_2790 = BgL_tailz00_3554;
								BgL_prevz00_2789 = BgL_prevz00_3553;
								goto BgL_loopz00_2791;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2788);
				}
			}
		}

	}



/* cfa-iterate-to-fixpoint! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/iterate.scm 39 */
			BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 = BINT(((long) -1));
			{	/* Cfa/iterate.scm 45 */
				obj_t BgL_glodefsz00_2796;

				BgL_glodefsz00_2796 = BNIL;
				{
					obj_t BgL_l1484z00_2798;

					BgL_l1484z00_2798 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31522ze3z87_2799:
					if (PAIRP(BgL_l1484z00_2798))
						{	/* Cfa/iterate.scm 46 */
							{	/* Cfa/iterate.scm 47 */
								obj_t BgL_gz00_2801;

								BgL_gz00_2801 = CAR(BgL_l1484z00_2798);
								{	/* Cfa/iterate.scm 47 */
									bool_t BgL_test1993z00_3561;

									if (
										((((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt) BgL_gz00_2801)))->
												BgL_importz00) == CNST_TABLE_REF(((long) 0))))
										{	/* Cfa/iterate.scm 47 */
											BgL_test1993z00_3561 = ((bool_t) 1);
										}
									else
										{	/* Cfa/iterate.scm 47 */
											BgL_test1993z00_3561 =
												BGl_exportedzd2closurezf3z21zzcfa_iteratez00
												(BgL_gz00_2801);
										}
									if (BgL_test1993z00_3561)
										{	/* Cfa/iterate.scm 47 */
											BgL_glodefsz00_2796 =
												MAKE_YOUNG_PAIR(BgL_gz00_2801, BgL_glodefsz00_2796);
										}
									else
										{	/* Cfa/iterate.scm 47 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1484z00_3569;

								BgL_l1484z00_3569 = CDR(BgL_l1484z00_2798);
								BgL_l1484z00_2798 = BgL_l1484z00_3569;
								goto BgL_zc3z04anonymousza31522ze3z87_2799;
							}
						}
					else
						{	/* Cfa/iterate.scm 46 */
							((bool_t) 1);
						}
				}
				{	/* Cfa/iterate.scm 52 */
					obj_t BgL_arg1558z00_2810;

					BgL_arg1558z00_2810 = BGl_unitzd2initializa7ersz75zzast_unitz00();
					BgL_glodefsz00_2796 =
						BGl_appendzd221011zd2zzcfa_iteratez00(BgL_arg1558z00_2810,
						BgL_glodefsz00_2796);
				}
				if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
					{	/* Cfa/iterate.scm 181 */
						BFALSE;
					}
				else
					{	/* Cfa/iterate.scm 181 */
						BNIL;
					}
				BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BTRUE;
				{

				BgL_zc3z04anonymousza31559ze3z87_2812:
					if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
						{	/* Cfa/iterate.scm 57 */
							BGl_cfazd2iteratez12zc0zzcfa_iteratez00(BgL_glodefsz00_2796);
							goto BgL_zc3z04anonymousza31559ze3z87_2812;
						}
					else
						{	/* Cfa/iterate.scm 57 */
							return BgL_glodefsz00_2796;
						}
				}
			}
		}

	}



/* &cfa-iterate-to-fixpoint! */
	obj_t BGl_z62cfazd2iteratezd2tozd2fixpointz12za2zzcfa_iteratez00(obj_t
		BgL_envz00_3456, obj_t BgL_globalsz00_3457)
	{
		{	/* Cfa/iterate.scm 39 */
			return
				BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00
				(BgL_globalsz00_3457);
		}

	}



/* exported-closure? */
	bool_t BGl_exportedzd2closurezf3z21zzcfa_iteratez00(obj_t BgL_gz00_4)
	{
		{	/* Cfa/iterate.scm 66 */
			if (
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_gz00_4))))->BgL_removablez00) ==
					CNST_TABLE_REF(((long) 1))))
				{	/* Cfa/iterate.scm 68 */
					BgL_valuez00_bglt BgL_valz00_2816;

					BgL_valz00_2816 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_gz00_4))))->BgL_valuez00);
					{	/* Cfa/iterate.scm 69 */
						bool_t BgL_test1998z00_3588;

						{	/* Cfa/iterate.scm 69 */
							bool_t BgL_res1941z00_3376;

							BgL_res1941z00_3376 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valz00_2816), BGl_sfunz00zzast_varz00);
							BgL_test1998z00_3588 = BgL_res1941z00_3376;
						}
						if (BgL_test1998z00_3588)
							{	/* Cfa/iterate.scm 70 */
								bool_t BgL_test1999z00_3591;

								{	/* Cfa/iterate.scm 70 */
									obj_t BgL_arg1565z00_2821;

									BgL_arg1565z00_2821 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_valz00_2816)))->
										BgL_thezd2closurezd2globalz00);
									BgL_test1999z00_3591 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1565z00_2821,
										BGl_globalz00zzast_varz00);
								}
								if (BgL_test1999z00_3591)
									{	/* Cfa/iterate.scm 70 */
										return
											(
											(((BgL_globalz00_bglt) COBJECT(
														((BgL_globalz00_bglt)
															(((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt) BgL_valz00_2816)))->
																BgL_thezd2closurezd2globalz00))))->
												BgL_importz00) == CNST_TABLE_REF(((long) 0)));
									}
								else
									{	/* Cfa/iterate.scm 70 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Cfa/iterate.scm 69 */
								return ((bool_t) 0);
							}
					}
				}
			else
				{	/* Cfa/iterate.scm 67 */
					return ((bool_t) 0);
				}
		}

	}



/* cfa-iterate! */
	BGL_EXPORTED_DEF obj_t BGl_cfazd2iteratez12zc0zzcfa_iteratez00(obj_t
		BgL_globalsz00_5)
	{
		{	/* Cfa/iterate.scm 76 */
			BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BFALSE;
			BGl_za2cfazd2stampza2zd2zzcfa_iteratez00 =
				ADDFX(BINT(((long) 1)), BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
			{
				obj_t BgL_l1486z00_2824;

				BgL_l1486z00_2824 = BgL_globalsz00_5;
			BgL_zc3z04anonymousza31574ze3z87_2825:
				if (PAIRP(BgL_l1486z00_2824))
					{	/* Cfa/iterate.scm 80 */
						{	/* Cfa/iterate.scm 81 */
							obj_t BgL_gz00_2827;

							BgL_gz00_2827 = CAR(BgL_l1486z00_2824);
							{	/* Cfa/iterate.scm 82 */
								BgL_valuez00_bglt BgL_arg1578z00_2828;

								BgL_arg1578z00_2828 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_2827))))->BgL_valuez00);
								BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00
									(BgL_arg1578z00_2828, BgL_gz00_2827);
							}
							BNIL;
						}
						{
							obj_t BgL_l1486z00_3610;

							BgL_l1486z00_3610 = CDR(BgL_l1486z00_2824);
							BgL_l1486z00_2824 = BgL_l1486z00_3610;
							goto BgL_zc3z04anonymousza31574ze3z87_2825;
						}
					}
				else
					{	/* Cfa/iterate.scm 80 */
						((bool_t) 1);
					}
			}
			return BNIL;
		}

	}



/* &cfa-iterate! */
	obj_t BGl_z62cfazd2iteratez12za2zzcfa_iteratez00(obj_t BgL_envz00_3458,
		obj_t BgL_globalsz00_3459)
	{
		{	/* Cfa/iterate.scm 76 */
			return BGl_cfazd2iteratez12zc0zzcfa_iteratez00(BgL_globalsz00_3459);
		}

	}



/* cfa-intern-sfun! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(BgL_sfunz00_bglt
		BgL_sfunz00_12, obj_t BgL_ownerz00_13)
	{
		{	/* Cfa/iterate.scm 138 */
			{
				BgL_approxz00_bglt BgL_approxz00_2846;

				{	/* Cfa/iterate.scm 148 */
					bool_t BgL_test2001z00_3613;

					{	/* Cfa/iterate.scm 148 */
						long BgL_arg1611z00_2845;

						{
							BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3614;

							{
								obj_t BgL_auxz00_3615;

								{	/* Cfa/iterate.scm 148 */
									BgL_objectz00_bglt BgL_tmpz00_3616;

									BgL_tmpz00_3616 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
									BgL_auxz00_3615 = BGL_OBJECT_WIDENING(BgL_tmpz00_3616);
								}
								BgL_auxz00_3614 =
									((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3615);
							}
							BgL_arg1611z00_2845 =
								(((BgL_internzd2sfunzf2cinfoz20_bglt)
									COBJECT(BgL_auxz00_3614))->BgL_stampz00);
						}
						BgL_test2001z00_3613 =
							(BgL_arg1611z00_2845 ==
							(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
					}
					if (BgL_test2001z00_3613)
						{	/* Cfa/iterate.scm 148 */
							{	/* Cfa/iterate.scm 152 */
								BgL_approxz00_bglt BgL_arg1588z00_2835;

								{
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3623;

									{
										obj_t BgL_auxz00_3624;

										{	/* Cfa/iterate.scm 152 */
											BgL_objectz00_bglt BgL_tmpz00_3625;

											BgL_tmpz00_3625 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
											BgL_auxz00_3624 = BGL_OBJECT_WIDENING(BgL_tmpz00_3625);
										}
										BgL_auxz00_3623 =
											((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3624);
									}
									BgL_arg1588z00_2835 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_3623))->BgL_approxz00);
								}
								BgL_approxz00_2846 = BgL_arg1588z00_2835;
							BgL_zc3z04anonymousza31612ze3z87_2847:
								{	/* Cfa/iterate.scm 142 */
									bool_t BgL_test2002z00_3630;

									{
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3631;

										{
											obj_t BgL_auxz00_3632;

											{	/* Cfa/iterate.scm 142 */
												BgL_objectz00_bglt BgL_tmpz00_3633;

												BgL_tmpz00_3633 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
												BgL_auxz00_3632 = BGL_OBJECT_WIDENING(BgL_tmpz00_3633);
											}
											BgL_auxz00_3631 =
												((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3632);
										}
										BgL_test2002z00_3630 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_3631))->BgL_polymorphiczf3zf3);
									}
									if (BgL_test2002z00_3630)
										{
											BgL_typez00_bglt BgL_auxz00_3638;

											{	/* Cfa/iterate.scm 144 */
												BgL_typez00_bglt BgL_arg1624z00_2851;

												BgL_arg1624z00_2851 =
													(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_2846))->
													BgL_typez00);
												BgL_auxz00_3638 =
													BGl_getzd2bigloozd2typez00zztype_cachez00
													(BgL_arg1624z00_2851);
											}
											((((BgL_approxz00_bglt) COBJECT(BgL_approxz00_2846))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_3638), BUNSPEC);
										}
									else
										{	/* Cfa/iterate.scm 142 */
											BFALSE;
										}
								}
								return BgL_approxz00_2846;
							}
						}
					else
						{	/* Cfa/iterate.scm 148 */
							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3642;

								{
									obj_t BgL_auxz00_3643;

									{	/* Cfa/iterate.scm 155 */
										BgL_objectz00_bglt BgL_tmpz00_3644;

										BgL_tmpz00_3644 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
										BgL_auxz00_3643 = BGL_OBJECT_WIDENING(BgL_tmpz00_3644);
									}
									BgL_auxz00_3642 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3643);
								}
								((((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_3642))->BgL_stampz00) =
									((long) (long)
										CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)), BUNSPEC);
							}
							{	/* Cfa/iterate.scm 156 */
								obj_t BgL_curz00_2836;

								BgL_curz00_2836 = BGl_za2cfazd2currentza2zd2zzcfa_iteratez00;
								{	/* Cfa/iterate.scm 157 */
									obj_t BgL_arg1589z00_2837;
									long BgL_arg1592z00_2838;

									BgL_arg1589z00_2837 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_ownerz00_13)))->BgL_idz00);
									{
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3652;

										{
											obj_t BgL_auxz00_3653;

											{	/* Cfa/iterate.scm 157 */
												BgL_objectz00_bglt BgL_tmpz00_3654;

												BgL_tmpz00_3654 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
												BgL_auxz00_3653 = BGL_OBJECT_WIDENING(BgL_tmpz00_3654);
											}
											BgL_auxz00_3652 =
												((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3653);
										}
										BgL_arg1592z00_2838 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_3652))->BgL_stampz00);
									}
									{	/* Cfa/iterate.scm 157 */
										obj_t BgL_list1593z00_2839;

										{	/* Cfa/iterate.scm 157 */
											obj_t BgL_arg1597z00_2840;

											BgL_arg1597z00_2840 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1592z00_2838), BNIL);
											BgL_list1593z00_2839 =
												MAKE_YOUNG_PAIR(BgL_arg1589z00_2837,
												BgL_arg1597z00_2840);
										}
										BGl_za2cfazd2currentza2zd2zzcfa_iteratez00 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string1962z00zzcfa_iteratez00, BgL_list1593z00_2839);
								}}
								{	/* Cfa/iterate.scm 158 */
									BgL_approxz00_bglt BgL_arg1599z00_2841;
									BgL_approxz00_bglt BgL_arg1604z00_2842;

									{
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3663;

										{
											obj_t BgL_auxz00_3664;

											{	/* Cfa/iterate.scm 158 */
												BgL_objectz00_bglt BgL_tmpz00_3665;

												BgL_tmpz00_3665 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
												BgL_auxz00_3664 = BGL_OBJECT_WIDENING(BgL_tmpz00_3665);
											}
											BgL_auxz00_3663 =
												((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3664);
										}
										BgL_arg1599z00_2841 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_3663))->BgL_approxz00);
									}
									{	/* Cfa/iterate.scm 158 */
										obj_t BgL_arg1605z00_2843;

										BgL_arg1605z00_2843 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_12)))->BgL_bodyz00);
										BgL_arg1604z00_2842 =
											BGl_cfaz12z12zzcfa_cfaz00(
											((BgL_nodez00_bglt) BgL_arg1605z00_2843));
									}
									BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00
										(BgL_arg1599z00_2841, BgL_arg1604z00_2842);
								}
								BGl_za2cfazd2currentza2zd2zzcfa_iteratez00 = BgL_curz00_2836;
							}
							{	/* Cfa/iterate.scm 162 */
								BgL_approxz00_bglt BgL_arg1606z00_2844;

								{
									BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3675;

									{
										obj_t BgL_auxz00_3676;

										{	/* Cfa/iterate.scm 162 */
											BgL_objectz00_bglt BgL_tmpz00_3677;

											BgL_tmpz00_3677 = ((BgL_objectz00_bglt) BgL_sfunz00_12);
											BgL_auxz00_3676 = BGL_OBJECT_WIDENING(BgL_tmpz00_3677);
										}
										BgL_auxz00_3675 =
											((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3676);
									}
									BgL_arg1606z00_2844 =
										(((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_3675))->BgL_approxz00);
								}
								{
									BgL_approxz00_bglt BgL_approxz00_3682;

									BgL_approxz00_3682 = BgL_arg1606z00_2844;
									BgL_approxz00_2846 = BgL_approxz00_3682;
									goto BgL_zc3z04anonymousza31612ze3z87_2847;
								}
							}
						}
				}
			}
		}

	}



/* &cfa-intern-sfun! */
	BgL_approxz00_bglt BGl_z62cfazd2internzd2sfunz12z70zzcfa_iteratez00(obj_t
		BgL_envz00_3460, obj_t BgL_sfunz00_3461, obj_t BgL_ownerz00_3462)
	{
		{	/* Cfa/iterate.scm 138 */
			return
				BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(
				((BgL_sfunz00_bglt) BgL_sfunz00_3461), BgL_ownerz00_3462);
		}

	}



/* cfa-current */
	BGL_EXPORTED_DEF obj_t BGl_cfazd2currentzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 174 */
			return BGl_za2cfazd2currentza2zd2zzcfa_iteratez00;
		}

	}



/* &cfa-current */
	obj_t BGl_z62cfazd2currentzb0zzcfa_iteratez00(obj_t BgL_envz00_3463)
	{
		{	/* Cfa/iterate.scm 174 */
			return BGl_cfazd2currentzd2zzcfa_iteratez00();
		}

	}



/* continue-cfa! */
	BGL_EXPORTED_DEF obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t
		BgL_reasonz00_14)
	{
		{	/* Cfa/iterate.scm 180 */
			if (CBOOL(BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00))
				{	/* Cfa/iterate.scm 181 */
					BFALSE;
				}
			else
				{	/* Cfa/iterate.scm 181 */
					BNIL;
				}
			return (BGl_za2cfazd2continuezf3za2z21zzcfa_iteratez00 = BTRUE, BUNSPEC);
		}

	}



/* &continue-cfa! */
	obj_t BGl_z62continuezd2cfaz12za2zzcfa_iteratez00(obj_t BgL_envz00_3464,
		obj_t BgL_reasonz00_3465)
	{
		{	/* Cfa/iterate.scm 180 */
			return BGl_continuezd2cfaz12zc0zzcfa_iteratez00(BgL_reasonz00_3465);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_proc1963z00zzcfa_iteratez00, BGl_valuez00zzast_varz00,
				BGl_string1964z00zzcfa_iteratez00);
		}

	}



/* &cfa-export-var!1491 */
	obj_t BGl_z62cfazd2exportzd2varz121491z70zzcfa_iteratez00(obj_t
		BgL_envz00_3467, obj_t BgL_valuez00_3468, obj_t BgL_ownerz00_3469)
	{
		{	/* Cfa/iterate.scm 90 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string1965z00zzcfa_iteratez00,
				((obj_t) ((BgL_valuez00_bglt) BgL_valuez00_3468)));
		}

	}



/* cfa-export-var! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(BgL_valuez00_bglt
		BgL_valuez00_6, obj_t BgL_ownerz00_7)
	{
		{	/* Cfa/iterate.scm 90 */
			{	/* Cfa/iterate.scm 90 */
				obj_t BgL_method1493z00_2858;

				{	/* Cfa/iterate.scm 90 */
					obj_t BgL_res1958z00_3434;

					{	/* Cfa/iterate.scm 90 */
						long BgL_objzd2classzd2numz00_3399;

						{	/* Cfa/iterate.scm 90 */
							long BgL_res1946z00_3402;

							BgL_res1946z00_3402 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_6));
							BgL_objzd2classzd2numz00_3399 = BgL_res1946z00_3402;
						}
						{	/* Cfa/iterate.scm 90 */
							obj_t BgL_arg1813z00_3400;

							BgL_arg1813z00_3400 =
								PROCEDURE_REF
								(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
								(int) (((long) 1)));
							{	/* Cfa/iterate.scm 90 */
								int BgL_offsetz00_3404;

								BgL_offsetz00_3404 = (int) (BgL_objzd2classzd2numz00_3399);
								{	/* Cfa/iterate.scm 90 */
									long BgL_offsetz00_3405;

									BgL_offsetz00_3405 =
										((long) (BgL_offsetz00_3404) - OBJECT_TYPE);
									{	/* Cfa/iterate.scm 90 */
										long BgL_modz00_3406;

										BgL_modz00_3406 =
											(BgL_offsetz00_3405 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/iterate.scm 90 */
											long BgL_restz00_3408;

											BgL_restz00_3408 =
												(BgL_offsetz00_3405 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/iterate.scm 90 */

												{	/* Cfa/iterate.scm 90 */
													obj_t BgL_bucketz00_3410;

													BgL_bucketz00_3410 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3400), BgL_modz00_3406);
													BgL_res1958z00_3434 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3410), BgL_restz00_3408);
					}}}}}}}}
					BgL_method1493z00_2858 = BgL_res1958z00_3434;
				}
				return
					PROCEDURE_ENTRY(BgL_method1493z00_2858) (BgL_method1493z00_2858,
					((obj_t) BgL_valuez00_6), BgL_ownerz00_7, BEOA);
			}
		}

	}



/* &cfa-export-var! */
	obj_t BGl_z62cfazd2exportzd2varz12z70zzcfa_iteratez00(obj_t BgL_envz00_3470,
		obj_t BgL_valuez00_3471, obj_t BgL_ownerz00_3472)
	{
		{	/* Cfa/iterate.scm 90 */
			return
				BGl_cfazd2exportzd2varz12z12zzcfa_iteratez00(
				((BgL_valuez00_bglt) BgL_valuez00_3471), BgL_ownerz00_3472);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc1966z00zzcfa_iteratez00,
				BGl_string1967z00zzcfa_iteratez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2exportzd2varz12zd2envzc0zzcfa_iteratez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00,
				BGl_proc1968z00zzcfa_iteratez00, BGl_string1967z00zzcfa_iteratez00);
		}

	}



/* &cfa-export-var!-inte1497 */
	obj_t BGl_z62cfazd2exportzd2varz12zd2inte1497za2zzcfa_iteratez00(obj_t
		BgL_envz00_3475, obj_t BgL_valuez00_3476, obj_t BgL_ownerz00_3477)
	{
		{	/* Cfa/iterate.scm 109 */
			{	/* Cfa/iterate.scm 114 */
				bool_t BgL_test2004z00_3729;

				{	/* Cfa/iterate.scm 114 */
					long BgL_arg1664z00_3496;

					{
						BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3730;

						{
							obj_t BgL_auxz00_3731;

							{	/* Cfa/iterate.scm 114 */
								BgL_objectz00_bglt BgL_tmpz00_3732;

								BgL_tmpz00_3732 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_valuez00_3476));
								BgL_auxz00_3731 = BGL_OBJECT_WIDENING(BgL_tmpz00_3732);
							}
							BgL_auxz00_3730 =
								((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3731);
						}
						BgL_arg1664z00_3496 =
							(((BgL_internzd2sfunzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3730))->
							BgL_stampz00);
					}
					BgL_test2004z00_3729 =
						(BgL_arg1664z00_3496 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2004z00_3729)
					{	/* Cfa/iterate.scm 114 */
						{
							BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3740;

							{
								obj_t BgL_auxz00_3741;

								{	/* Cfa/iterate.scm 116 */
									BgL_objectz00_bglt BgL_tmpz00_3742;

									BgL_tmpz00_3742 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_valuez00_3476));
									BgL_auxz00_3741 = BGL_OBJECT_WIDENING(BgL_tmpz00_3742);
								}
								BgL_auxz00_3740 =
									((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3741);
							}
							((((BgL_internzd2sfunzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3740))->
									BgL_stampz00) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{
							BgL_approxz00_bglt BgL_auxz00_3749;

							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_3750;

								{
									obj_t BgL_auxz00_3751;

									{	/* Cfa/iterate.scm 116 */
										BgL_objectz00_bglt BgL_tmpz00_3752;

										BgL_tmpz00_3752 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_valuez00_3476));
										BgL_auxz00_3751 = BGL_OBJECT_WIDENING(BgL_tmpz00_3752);
									}
									BgL_auxz00_3750 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_3751);
								}
								BgL_auxz00_3749 =
									(((BgL_internzd2sfunzf2cinfoz20_bglt)
										COBJECT(BgL_auxz00_3750))->BgL_approxz00);
							}
							return ((obj_t) BgL_auxz00_3749);
						}
					}
				else
					{	/* Cfa/iterate.scm 114 */
						{	/* Cfa/iterate.scm 123 */
							obj_t BgL_g1490z00_3497;

							BgL_g1490z00_3497 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											((BgL_sfunz00_bglt) BgL_valuez00_3476))))->BgL_argsz00);
							{
								obj_t BgL_l1488z00_3499;

								BgL_l1488z00_3499 = BgL_g1490z00_3497;
							BgL_zc3z04anonymousza31642ze3z87_3498:
								if (PAIRP(BgL_l1488z00_3499))
									{	/* Cfa/iterate.scm 123 */
										{	/* Cfa/iterate.scm 124 */
											obj_t BgL_localz00_3500;

											BgL_localz00_3500 = CAR(BgL_l1488z00_3499);
											{	/* Cfa/iterate.scm 124 */
												BgL_valuez00_bglt BgL_valz00_3501;

												BgL_valz00_3501 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_localz00_3500))))->
													BgL_valuez00);
												{	/* Cfa/iterate.scm 129 */
													bool_t BgL_test2006z00_3768;

													{
														BgL_svarzf2cinfozf2_bglt BgL_auxz00_3769;

														{
															obj_t BgL_auxz00_3770;

															{	/* Cfa/iterate.scm 129 */
																BgL_objectz00_bglt BgL_tmpz00_3771;

																BgL_tmpz00_3771 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_valz00_3501));
																BgL_auxz00_3770 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3771);
															}
															BgL_auxz00_3769 =
																((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_3770);
														}
														BgL_test2006z00_3768 =
															(((BgL_svarzf2cinfozf2_bglt)
																COBJECT(BgL_auxz00_3769))->BgL_clozd2envzf3z21);
													}
													if (BgL_test2006z00_3768)
														{	/* Cfa/iterate.scm 129 */
															BFALSE;
														}
													else
														{	/* Cfa/iterate.scm 130 */
															BgL_approxz00_bglt BgL_arg1652z00_3502;

															{
																BgL_svarzf2cinfozf2_bglt BgL_auxz00_3777;

																{
																	obj_t BgL_auxz00_3778;

																	{	/* Cfa/iterate.scm 130 */
																		BgL_objectz00_bglt BgL_tmpz00_3779;

																		BgL_tmpz00_3779 =
																			((BgL_objectz00_bglt)
																			((BgL_svarz00_bglt) BgL_valz00_3501));
																		BgL_auxz00_3778 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3779);
																	}
																	BgL_auxz00_3777 =
																		((BgL_svarzf2cinfozf2_bglt)
																		BgL_auxz00_3778);
																}
																BgL_arg1652z00_3502 =
																	(((BgL_svarzf2cinfozf2_bglt)
																		COBJECT(BgL_auxz00_3777))->BgL_approxz00);
															}
															BGl_approxzd2setzd2topz12z12zzcfa_approxz00
																(BgL_arg1652z00_3502);
														}
												}
											}
										}
										{
											obj_t BgL_l1488z00_3786;

											BgL_l1488z00_3786 = CDR(BgL_l1488z00_3499);
											BgL_l1488z00_3499 = BgL_l1488z00_3786;
											goto BgL_zc3z04anonymousza31642ze3z87_3498;
										}
									}
								else
									{	/* Cfa/iterate.scm 123 */
										((bool_t) 1);
									}
							}
						}
						{	/* Cfa/iterate.scm 133 */
							BgL_approxz00_bglt BgL_arg1663z00_3503;

							BgL_arg1663z00_3503 =
								BGl_cfazd2internzd2sfunz12z12zzcfa_iteratez00(
								((BgL_sfunz00_bglt) BgL_valuez00_3476), BgL_ownerz00_3477);
							return
								((obj_t)
								BGl_loosez12z12zzcfa_loosez00(BgL_arg1663z00_3503,
									CNST_TABLE_REF(((long) 3))));
		}}}}

	}



/* &cfa-export-var!-svar1495 */
	obj_t BGl_z62cfazd2exportzd2varz12zd2svar1495za2zzcfa_iteratez00(obj_t
		BgL_envz00_3478, obj_t BgL_valuez00_3479, obj_t BgL_ownerz00_3480)
	{
		{	/* Cfa/iterate.scm 95 */
			{	/* Cfa/iterate.scm 100 */
				bool_t BgL_test2007z00_3793;

				{	/* Cfa/iterate.scm 100 */
					long BgL_arg1634z00_3505;

					{
						BgL_svarzf2cinfozf2_bglt BgL_auxz00_3794;

						{
							obj_t BgL_auxz00_3795;

							{	/* Cfa/iterate.scm 100 */
								BgL_objectz00_bglt BgL_tmpz00_3796;

								BgL_tmpz00_3796 =
									((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_3479));
								BgL_auxz00_3795 = BGL_OBJECT_WIDENING(BgL_tmpz00_3796);
							}
							BgL_auxz00_3794 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_3795);
						}
						BgL_arg1634z00_3505 =
							(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3794))->
							BgL_stampz00);
					}
					BgL_test2007z00_3793 =
						(BgL_arg1634z00_3505 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test2007z00_3793)
					{	/* Cfa/iterate.scm 100 */
						return
							BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
							((BgL_valuez00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_3479)));
					}
				else
					{	/* Cfa/iterate.scm 100 */
						{
							BgL_svarzf2cinfozf2_bglt BgL_auxz00_3807;

							{
								obj_t BgL_auxz00_3808;

								{	/* Cfa/iterate.scm 103 */
									BgL_objectz00_bglt BgL_tmpz00_3809;

									BgL_tmpz00_3809 =
										((BgL_objectz00_bglt)
										((BgL_svarz00_bglt) BgL_valuez00_3479));
									BgL_auxz00_3808 = BGL_OBJECT_WIDENING(BgL_tmpz00_3809);
								}
								BgL_auxz00_3807 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_3808);
							}
							((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3807))->
									BgL_stampz00) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{	/* Cfa/iterate.scm 104 */
							obj_t BgL_arg1631z00_3506;

							BgL_arg1631z00_3506 =
								BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
								((BgL_valuez00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_3479)));
							return
								((obj_t)
								BGl_loosez12z12zzcfa_loosez00(
									((BgL_approxz00_bglt) BgL_arg1631z00_3506),
									CNST_TABLE_REF(((long) 3))));
		}}}}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_iteratez00()
	{
		{	/* Cfa/iterate.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_iteratez00));
		}

	}

#ifdef __cplusplus
}
#endif
