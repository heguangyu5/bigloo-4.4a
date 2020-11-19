/*===========================================================================*/
/*   (Cfa/show.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/show.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

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

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

	typedef struct BgL_reshapedzd2globalzd2_bgl
	{
	}                           *BgL_reshapedzd2globalzd2_bglt;


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_showz00();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_showz00();
	static obj_t BGl_gczd2rootszd2initz00zzcfa_showz00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_z62showzd2cfazd2resultsz62zzcfa_showz00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_showz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcfa_showz00();
	static obj_t BGl_genericzd2initzd2zzcfa_showz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62showzd2cfazd2nbzd2iterationszb0zzcfa_showz00(obj_t);
	extern obj_t BGl_reshapedzd2globalzd2zzcfa_infoz00;
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t);
	static obj_t BGl_z62shapezd2reshapedzd2local1480z62zzcfa_showz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	static obj_t BGl_z62shapezd2reshapedzd2globa1482z62zzcfa_showz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_showz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_showz00();
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfazd2variablezd2shapez00zzcfa_showz00(BgL_variablez00_bglt,
		obj_t);
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	static obj_t *__cnst;


	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_showzd2cfazd2nbzd2iterationszd2envz00zzcfa_showz00,
		BgL_bgl_za762showza7d2cfaza7d21959za7,
		BGl_z62showzd2cfazd2nbzd2iterationszb0zzcfa_showz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzcfa_showz00,
		BgL_bgl_za762shapeza7d2resha1960z00,
		BGl_z62shapezd2reshapedzd2local1480z62zzcfa_showz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzcfa_showz00,
		BgL_bgl_za762shapeza7d2resha1961z00,
		BGl_z62shapezd2reshapedzd2globa1482z62zzcfa_showz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_showzd2cfazd2resultszd2envzd2zzcfa_showz00,
		BgL_bgl_za762showza7d2cfaza7d21962za7,
		BGl_z62showzd2cfazd2resultsz62zzcfa_showz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1952z00zzcfa_showz00,
		BgL_bgl_string1952za700za7za7c1963za7, " Iterations)", 12);
	      DEFINE_STRING(BGl_string1953z00zzcfa_showz00,
		BgL_bgl_string1953za700za7za7c1964za7, "      (", 7);
	      DEFINE_STRING(BGl_string1954z00zzcfa_showz00,
		BgL_bgl_string1954za700za7za7c1965za7, ",", 1);
	      DEFINE_STRING(BGl_string1956z00zzcfa_showz00,
		BgL_bgl_string1956za700za7za7c1966za7, "shape", 5);
	      DEFINE_STRING(BGl_string1958z00zzcfa_showz00,
		BgL_bgl_string1958za700za7za7c1967za7, "cfa_show", 8);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_showz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long
		BgL_checksumz00_3378, char *BgL_fromz00_3379)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_showz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_showz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_showz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_showz00();
					BGl_importedzd2moduleszd2initz00zzcfa_showz00();
					BGl_methodzd2initzd2zzcfa_showz00();
					return BGl_toplevelzd2initzd2zzcfa_showz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_show");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			return BUNSPEC;
		}

	}



/* show-cfa-nb-iterations */
	BGL_EXPORTED_DEF obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00()
	{
		{	/* Cfa/show.scm 35 */
			{	/* Cfa/show.scm 36 */
				long BgL_arg1495z00_2789;

				BgL_arg1495z00_2789 =
					(((long) 1) + (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				{	/* Cfa/show.scm 36 */
					obj_t BgL_list1496z00_2790;

					{	/* Cfa/show.scm 36 */
						obj_t BgL_arg1497z00_2791;

						{	/* Cfa/show.scm 36 */
							obj_t BgL_arg1518z00_2792;

							{	/* Cfa/show.scm 36 */
								obj_t BgL_arg1521z00_2793;

								BgL_arg1521z00_2793 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1518z00_2792 =
									MAKE_YOUNG_PAIR(BGl_string1952z00zzcfa_showz00,
									BgL_arg1521z00_2793);
							}
							BgL_arg1497z00_2791 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1495z00_2789), BgL_arg1518z00_2792);
						}
						BgL_list1496z00_2790 =
							MAKE_YOUNG_PAIR(BGl_string1953z00zzcfa_showz00,
							BgL_arg1497z00_2791);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1496z00_2790);
		}}}

	}



/* &show-cfa-nb-iterations */
	obj_t BGl_z62showzd2cfazd2nbzd2iterationszb0zzcfa_showz00(obj_t
		BgL_envz00_3359)
	{
		{	/* Cfa/show.scm 35 */
			return BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
		}

	}



/* show-cfa-results */
	BGL_EXPORTED_DEF obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/show.scm 41 */
			{	/* Cfa/show.scm 46 */
				bool_t BgL_test1969z00_3407;

				{	/* Cfa/show.scm 46 */
					obj_t BgL_tmpz00_3408;

					BgL_tmpz00_3408 = BGl_getzd2allocszd2zzcfa_collectz00();
					BgL_test1969z00_3407 = PAIRP(BgL_tmpz00_3408);
				}
				if (BgL_test1969z00_3407)
					{	/* Cfa/show.scm 46 */
						BNIL;
					}
				else
					{	/* Cfa/show.scm 46 */
						BFALSE;
					}
			}
			{	/* Cfa/show.scm 47 */
				obj_t BgL_g1478z00_2797;

				BgL_g1478z00_2797 = BGl_getzd2allocszd2zzcfa_collectz00();
				{
					obj_t BgL_l1476z00_2799;

					BgL_l1476z00_2799 = BgL_g1478z00_2797;
				BgL_zc3z04anonymousza31537ze3z87_2800:
					if (PAIRP(BgL_l1476z00_2799))
						{	/* Cfa/show.scm 49 */
							{
								obj_t BgL_l1476z00_3414;

								BgL_l1476z00_3414 = CDR(BgL_l1476z00_2799);
								BgL_l1476z00_2799 = BgL_l1476z00_3414;
								goto BgL_zc3z04anonymousza31537ze3z87_2800;
							}
						}
					else
						{	/* Cfa/show.scm 49 */
							((bool_t) 1);
						}
				}
			}
			return BNIL;
		}

	}



/* &show-cfa-results */
	obj_t BGl_z62showzd2cfazd2resultsz62zzcfa_showz00(obj_t BgL_envz00_3360,
		obj_t BgL_globalsz00_3361)
	{
		{	/* Cfa/show.scm 41 */
			return BGl_showzd2cfazd2resultsz00zzcfa_showz00(BgL_globalsz00_3361);
		}

	}



/* cfa-variable-shape */
	obj_t BGl_cfazd2variablezd2shapez00zzcfa_showz00(BgL_variablez00_bglt
		BgL_variablez00_6, obj_t BgL_portz00_7)
	{
		{	/* Cfa/show.scm 93 */
			{	/* Cfa/show.scm 94 */
				BgL_valuez00_bglt BgL_valuez00_2805;

				BgL_valuez00_2805 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_6))->BgL_valuez00);
				{	/* Cfa/show.scm 96 */
					bool_t BgL_test1971z00_3418;

					{	/* Cfa/show.scm 96 */
						bool_t BgL_res1923z00_3320;

						BgL_res1923z00_3320 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_valuez00_2805), BGl_svarzf2Cinfozf2zzcfa_infoz00);
						BgL_test1971z00_3418 = BgL_res1923z00_3320;
					}
					if (BgL_test1971z00_3418)
						{	/* Cfa/show.scm 96 */
							bgl_display_string(BGl_string1954z00zzcfa_showz00, BgL_portz00_7);
							{	/* Cfa/show.scm 98 */
								obj_t BgL_arg1552z00_2807;

								{	/* Cfa/show.scm 98 */
									BgL_approxz00_bglt BgL_arg1558z00_2808;

									{
										BgL_svarzf2cinfozf2_bglt BgL_auxz00_3422;

										{
											obj_t BgL_auxz00_3423;

											{	/* Cfa/show.scm 98 */
												BgL_objectz00_bglt BgL_tmpz00_3424;

												BgL_tmpz00_3424 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_valuez00_2805));
												BgL_auxz00_3423 = BGL_OBJECT_WIDENING(BgL_tmpz00_3424);
											}
											BgL_auxz00_3422 =
												((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_3423);
										}
										BgL_arg1558z00_2808 =
											(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_3422))->
											BgL_approxz00);
									}
									BgL_arg1552z00_2807 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_arg1558z00_2808));
								}
								bgl_display_obj(BgL_arg1552z00_2807, BgL_portz00_7);
							}
						}
					else
						{	/* Cfa/show.scm 99 */
							bool_t BgL_test1972z00_3433;

							{	/* Cfa/show.scm 99 */
								bool_t BgL_res1924z00_3325;

								BgL_res1924z00_3325 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_valuez00_2805),
									BGl_cvarzf2Cinfozf2zzcfa_infoz00);
								BgL_test1972z00_3433 = BgL_res1924z00_3325;
							}
							if (BgL_test1972z00_3433)
								{	/* Cfa/show.scm 99 */
									bgl_display_string(BGl_string1954z00zzcfa_showz00,
										BgL_portz00_7);
									{	/* Cfa/show.scm 101 */
										obj_t BgL_arg1561z00_2810;

										{	/* Cfa/show.scm 101 */
											BgL_approxz00_bglt BgL_arg1564z00_2811;

											{
												BgL_cvarzf2cinfozf2_bglt BgL_auxz00_3437;

												{
													obj_t BgL_auxz00_3438;

													{	/* Cfa/show.scm 101 */
														BgL_objectz00_bglt BgL_tmpz00_3439;

														BgL_tmpz00_3439 =
															((BgL_objectz00_bglt)
															((BgL_cvarz00_bglt) BgL_valuez00_2805));
														BgL_auxz00_3438 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3439);
													}
													BgL_auxz00_3437 =
														((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_3438);
												}
												BgL_arg1564z00_2811 =
													(((BgL_cvarzf2cinfozf2_bglt)
														COBJECT(BgL_auxz00_3437))->BgL_approxz00);
											}
											BgL_arg1561z00_2810 =
												BGl_shapez00zztools_shapez00(
												((obj_t) BgL_arg1564z00_2811));
										}
										bgl_display_obj(BgL_arg1561z00_2810, BgL_portz00_7);
									}
								}
							else
								{	/* Cfa/show.scm 102 */
									bool_t BgL_test1973z00_3448;

									{	/* Cfa/show.scm 102 */
										bool_t BgL_res1925z00_3330;

										BgL_res1925z00_3330 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_valuez00_2805),
											BGl_scnstzf2Cinfozf2zzcfa_infoz00);
										BgL_test1973z00_3448 = BgL_res1925z00_3330;
									}
									if (BgL_test1973z00_3448)
										{	/* Cfa/show.scm 102 */
											bgl_display_string(BGl_string1954z00zzcfa_showz00,
												BgL_portz00_7);
											{	/* Cfa/show.scm 104 */
												obj_t BgL_arg1573z00_2813;

												{	/* Cfa/show.scm 104 */
													BgL_approxz00_bglt BgL_arg1575z00_2814;

													{
														BgL_scnstzf2cinfozf2_bglt BgL_auxz00_3452;

														{
															obj_t BgL_auxz00_3453;

															{	/* Cfa/show.scm 104 */
																BgL_objectz00_bglt BgL_tmpz00_3454;

																BgL_tmpz00_3454 =
																	((BgL_objectz00_bglt)
																	((BgL_scnstz00_bglt) BgL_valuez00_2805));
																BgL_auxz00_3453 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3454);
															}
															BgL_auxz00_3452 =
																((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_3453);
														}
														BgL_arg1575z00_2814 =
															(((BgL_scnstzf2cinfozf2_bglt)
																COBJECT(BgL_auxz00_3452))->BgL_approxz00);
													}
													BgL_arg1573z00_2813 =
														BGl_shapez00zztools_shapez00(
														((obj_t) BgL_arg1575z00_2814));
												}
												bgl_display_obj(BgL_arg1573z00_2813, BgL_portz00_7);
											}
										}
									else
										{	/* Cfa/show.scm 105 */
											bool_t BgL_test1974z00_3463;

											{	/* Cfa/show.scm 105 */
												bool_t BgL_res1926z00_3335;

												BgL_res1926z00_3335 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_valuez00_2805),
													BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
												BgL_test1974z00_3463 = BgL_res1926z00_3335;
											}
											if (BgL_test1974z00_3463)
												{	/* Cfa/show.scm 105 */
													bgl_display_string(BGl_string1954z00zzcfa_showz00,
														BgL_portz00_7);
													{	/* Cfa/show.scm 107 */
														obj_t BgL_arg1578z00_2816;

														{	/* Cfa/show.scm 107 */
															BgL_approxz00_bglt BgL_arg1582z00_2817;

															{
																BgL_internzd2sfunzf2cinfoz20_bglt
																	BgL_auxz00_3467;
																{
																	obj_t BgL_auxz00_3468;

																	{	/* Cfa/show.scm 107 */
																		BgL_objectz00_bglt BgL_tmpz00_3469;

																		BgL_tmpz00_3469 =
																			((BgL_objectz00_bglt)
																			((BgL_sfunz00_bglt) BgL_valuez00_2805));
																		BgL_auxz00_3468 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3469);
																	}
																	BgL_auxz00_3467 =
																		((BgL_internzd2sfunzf2cinfoz20_bglt)
																		BgL_auxz00_3468);
																}
																BgL_arg1582z00_2817 =
																	(((BgL_internzd2sfunzf2cinfoz20_bglt)
																		COBJECT(BgL_auxz00_3467))->BgL_approxz00);
															}
															BgL_arg1578z00_2816 =
																BGl_shapez00zztools_shapez00(
																((obj_t) BgL_arg1582z00_2817));
														}
														bgl_display_obj(BgL_arg1578z00_2816, BgL_portz00_7);
													}
												}
											else
												{	/* Cfa/show.scm 108 */
													bool_t BgL_test1975z00_3478;

													{	/* Cfa/show.scm 108 */
														bool_t BgL_res1927z00_3340;

														BgL_res1927z00_3340 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_valuez00_2805),
															BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
														BgL_test1975z00_3478 = BgL_res1927z00_3340;
													}
													if (BgL_test1975z00_3478)
														{	/* Cfa/show.scm 108 */
															bgl_display_string(BGl_string1954z00zzcfa_showz00,
																BgL_portz00_7);
															{	/* Cfa/show.scm 110 */
																obj_t BgL_arg1584z00_2819;

																{	/* Cfa/show.scm 110 */
																	BgL_approxz00_bglt BgL_arg1588z00_2820;

																	{
																		BgL_externzd2sfunzf2cinfoz20_bglt
																			BgL_auxz00_3482;
																		{
																			obj_t BgL_auxz00_3483;

																			{	/* Cfa/show.scm 110 */
																				BgL_objectz00_bglt BgL_tmpz00_3484;

																				BgL_tmpz00_3484 =
																					((BgL_objectz00_bglt)
																					((BgL_sfunz00_bglt)
																						BgL_valuez00_2805));
																				BgL_auxz00_3483 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_3484);
																			}
																			BgL_auxz00_3482 =
																				((BgL_externzd2sfunzf2cinfoz20_bglt)
																				BgL_auxz00_3483);
																		}
																		BgL_arg1588z00_2820 =
																			(((BgL_externzd2sfunzf2cinfoz20_bglt)
																				COBJECT(BgL_auxz00_3482))->
																			BgL_approxz00);
																	}
																	BgL_arg1584z00_2819 =
																		BGl_shapez00zztools_shapez00(
																		((obj_t) BgL_arg1588z00_2820));
																}
																bgl_display_obj(BgL_arg1584z00_2819,
																	BgL_portz00_7);
															}
														}
													else
														{	/* Cfa/show.scm 111 */
															bool_t BgL_test1976z00_3493;

															{	/* Cfa/show.scm 111 */
																bool_t BgL_res1928z00_3345;

																BgL_res1928z00_3345 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_valuez00_2805),
																	BGl_cfunzf2Cinfozf2zzcfa_infoz00);
																BgL_test1976z00_3493 = BgL_res1928z00_3345;
															}
															if (BgL_test1976z00_3493)
																{	/* Cfa/show.scm 111 */
																	bgl_display_string
																		(BGl_string1954z00zzcfa_showz00,
																		BgL_portz00_7);
																	{	/* Cfa/show.scm 113 */
																		obj_t BgL_arg1592z00_2822;

																		{	/* Cfa/show.scm 113 */
																			BgL_approxz00_bglt BgL_arg1593z00_2823;

																			{
																				BgL_cfunzf2cinfozf2_bglt
																					BgL_auxz00_3497;
																				{
																					obj_t BgL_auxz00_3498;

																					{	/* Cfa/show.scm 113 */
																						BgL_objectz00_bglt BgL_tmpz00_3499;

																						BgL_tmpz00_3499 =
																							((BgL_objectz00_bglt)
																							((BgL_cfunz00_bglt)
																								BgL_valuez00_2805));
																						BgL_auxz00_3498 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_3499);
																					}
																					BgL_auxz00_3497 =
																						((BgL_cfunzf2cinfozf2_bglt)
																						BgL_auxz00_3498);
																				}
																				BgL_arg1593z00_2823 =
																					(((BgL_cfunzf2cinfozf2_bglt)
																						COBJECT(BgL_auxz00_3497))->
																					BgL_approxz00);
																			}
																			BgL_arg1592z00_2822 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_arg1593z00_2823));
																		}
																		bgl_display_obj(BgL_arg1592z00_2822,
																			BgL_portz00_7);
																	}
																}
															else
																{	/* Cfa/show.scm 111 */
																	BFALSE;
																}
														}
												}
										}
								}
						}
				}
				{	/* Cfa/show.scm 114 */
					obj_t BgL_arg1597z00_2824;

					BgL_arg1597z00_2824 = bgl_close_output_port(BgL_portz00_7);
					{	/* Cfa/show.scm 114 */
						obj_t BgL_res1929z00_3352;

						BgL_res1929z00_3352 =
							bstring_to_symbol(((obj_t) BgL_arg1597z00_2824));
						return BgL_res1929z00_3352;
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_reshapedzd2localzd2zzcfa_infoz00, BGl_proc1955z00zzcfa_showz00,
				BGl_string1956z00zzcfa_showz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_reshapedzd2globalzd2zzcfa_infoz00, BGl_proc1957z00zzcfa_showz00,
				BGl_string1956z00zzcfa_showz00);
		}

	}



/* &shape-reshaped-globa1482 */
	obj_t BGl_z62shapezd2reshapedzd2globa1482z62zzcfa_showz00(obj_t
		BgL_envz00_3366, obj_t BgL_globalz00_3367)
	{
		{	/* Cfa/show.scm 85 */
			{

				{	/* Cfa/show.scm 86 */
					obj_t BgL_portz00_3373;

					{	/* Cfa/show.scm 86 */

						{	/* Cfa/show.scm 86 */

							BgL_portz00_3373 =
								BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
						}
					}
					{	/* Cfa/show.scm 87 */
						obj_t BgL_auxz00_3514;

						{	/* Cfa/show.scm 85 */
							obj_t BgL_nextzd2method1481zd2_3372;

							BgL_nextzd2method1481zd2_3372 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								((BgL_objectz00_bglt)
									((BgL_globalz00_bglt) BgL_globalz00_3367)),
								BGl_shapezd2envzd2zztools_shapez00,
								BGl_reshapedzd2globalzd2zzcfa_infoz00);
							BgL_auxz00_3514 =
								PROCEDURE_ENTRY(BgL_nextzd2method1481zd2_3372)
								(BgL_nextzd2method1481zd2_3372,
								((obj_t) ((BgL_globalz00_bglt) BgL_globalz00_3367)), BEOA);
						}
						bgl_display_obj(BgL_auxz00_3514, BgL_portz00_3373);
					}
					return
						BGl_cfazd2variablezd2shapez00zzcfa_showz00(
						((BgL_variablez00_bglt)
							((BgL_globalz00_bglt) BgL_globalz00_3367)), BgL_portz00_3373);
				}
			}
		}

	}



/* &shape-reshaped-local1480 */
	obj_t BGl_z62shapezd2reshapedzd2local1480z62zzcfa_showz00(obj_t
		BgL_envz00_3368, obj_t BgL_localz00_3369)
	{
		{	/* Cfa/show.scm 77 */
			{

				{	/* Cfa/show.scm 78 */
					obj_t BgL_portz00_3377;

					{	/* Cfa/show.scm 78 */

						{	/* Cfa/show.scm 78 */

							BgL_portz00_3377 =
								BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
						}
					}
					{	/* Cfa/show.scm 79 */
						obj_t BgL_auxz00_3529;

						{	/* Cfa/show.scm 77 */
							obj_t BgL_nextzd2method1479zd2_3376;

							BgL_nextzd2method1479zd2_3376 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								((BgL_objectz00_bglt)
									((BgL_localz00_bglt) BgL_localz00_3369)),
								BGl_shapezd2envzd2zztools_shapez00,
								BGl_reshapedzd2localzd2zzcfa_infoz00);
							BgL_auxz00_3529 =
								PROCEDURE_ENTRY(BgL_nextzd2method1479zd2_3376)
								(BgL_nextzd2method1479zd2_3376,
								((obj_t) ((BgL_localz00_bglt) BgL_localz00_3369)), BEOA);
						}
						bgl_display_obj(BgL_auxz00_3529, BgL_portz00_3377);
					}
					return
						BGl_cfazd2variablezd2shapez00zzcfa_showz00(
						((BgL_variablez00_bglt)
							((BgL_localz00_bglt) BgL_localz00_3369)), BgL_portz00_3377);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_showz00()
	{
		{	/* Cfa/show.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 305499432),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 220306840),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1958z00zzcfa_showz00));
		}

	}

#ifdef __cplusplus
}
#endif
