/*===========================================================================*/
/*   (Coerce/funcall.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/funcall.scm) */
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


	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcoerce_funcallz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_coercezd2funcallzd2elightzd2argsz12zc0zzcoerce_funcallz00
		(BgL_funcallz00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzcoerce_funcallz00();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_funcallz00();
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_funcallz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcoerce_funcallz00();
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcoerce_funcallz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_nodez00_bglt
		BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00(BgL_localz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2funcall1292za2zzcoerce_funcallz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcoerce_funcallz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00();
	static obj_t
		BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(BgL_funcallz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00();
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static BgL_nodez00_bglt
		BGl_toplevelzd2expze70z35zzcoerce_funcallz00(BgL_funcallz00_bglt);
	static BgL_nodez00_bglt
		BGl_toplevelzd2expze71z35zzcoerce_funcallz00(BgL_funcallz00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[19];


	   
		 
		DEFINE_STRING(BGl_string1818z00zzcoerce_funcallz00,
		BgL_bgl_string1818za700za7za7c1826za7, ":Wrong number of arguments", 26);
	      DEFINE_STRING(BGl_string1820z00zzcoerce_funcallz00,
		BgL_bgl_string1820za700za7za7c1827za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string1821z00zzcoerce_funcallz00,
		BgL_bgl_string1821za700za7za7c1828za7, "coerce_funcall", 14);
	      DEFINE_STRING(BGl_string1822z00zzcoerce_funcallz00,
		BgL_bgl_string1822za700za7za7c1829za7,
		"let if correct-arity? ::int len fun light elight __eoa__ dummy begin failure quote _ @ error/location __error location bdb ",
		123);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1819z00zzcoerce_funcallz00,
		BgL_bgl_za762coerceza712za7d2f1830za7,
		BGl_z62coercez12zd2funcall1292za2zzcoerce_funcallz00, 0L, BUNSPEC, 4);
	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcoerce_funcallz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long
		BgL_checksumz00_2024, char *BgL_fromz00_2025)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_funcallz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00();
					BGl_cnstzd2initzd2zzcoerce_funcallz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00();
					BGl_methodzd2initzd2zzcoerce_funcallz00();
					return BGl_toplevelzd2initzd2zzcoerce_funcallz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"coerce_funcall");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			{	/* Coerce/funcall.scm 15 */
				obj_t BgL_cportz00_1956;

				{	/* Coerce/funcall.scm 15 */
					obj_t BgL_stringz00_1964;

					BgL_stringz00_1964 = BGl_string1822z00zzcoerce_funcallz00;
					{	/* Coerce/funcall.scm 15 */
						obj_t BgL_startz00_1965;

						BgL_startz00_1965 = BINT(((long) 0));
						{	/* Coerce/funcall.scm 15 */
							obj_t BgL_endz00_1966;

							BgL_endz00_1966 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1964)));
							{	/* Coerce/funcall.scm 15 */

								BgL_cportz00_1956 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1964, BgL_startz00_1965, BgL_endz00_1966);
				}}}}
				{
					long BgL_iz00_1957;

					BgL_iz00_1957 = ((long) 18);
				BgL_loopz00_1958:
					if ((BgL_iz00_1957 == ((long) -1)))
						{	/* Coerce/funcall.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/funcall.scm 15 */
							{	/* Coerce/funcall.scm 15 */
								obj_t BgL_arg1824z00_1960;

								{	/* Coerce/funcall.scm 15 */

									{	/* Coerce/funcall.scm 15 */
										obj_t BgL_locationz00_1962;

										BgL_locationz00_1962 = BBOOL(((bool_t) 0));
										{	/* Coerce/funcall.scm 15 */

											BgL_arg1824z00_1960 =
												BGl_readz00zz__readerz00(BgL_cportz00_1956,
												BgL_locationz00_1962);
										}
									}
								}
								{	/* Coerce/funcall.scm 15 */
									int BgL_tmpz00_2054;

									BgL_tmpz00_2054 = (int) (BgL_iz00_1957);
									CNST_TABLE_SET(BgL_tmpz00_2054, BgL_arg1824z00_1960);
							}}
							{	/* Coerce/funcall.scm 15 */
								int BgL_auxz00_1963;

								BgL_auxz00_1963 = (int) ((BgL_iz00_1957 - ((long) 1)));
								{
									long BgL_iz00_2059;

									BgL_iz00_2059 = (long) (BgL_auxz00_1963);
									BgL_iz00_1957 = BgL_iz00_2059;
									goto BgL_loopz00_1958;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* make-arity-error-node */
	BgL_nodez00_bglt
		BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00(BgL_localz00_bglt
		BgL_funz00_21, obj_t BgL_errorzd2msgzd2_22, obj_t BgL_locz00_23,
		obj_t BgL_callerz00_24, obj_t BgL_toz00_25)
	{
		{	/* Coerce/funcall.scm 101 */
			{	/* Coerce/funcall.scm 102 */
				BgL_nodez00_bglt BgL_nodez00_1459;

				{	/* Coerce/funcall.scm 103 */
					obj_t BgL_arg1309z00_1460;

					{	/* Coerce/funcall.scm 103 */
						bool_t BgL_test1833z00_2062;

						{	/* Coerce/funcall.scm 103 */
							bool_t BgL_test1834z00_2063;

							if (
								((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
									((long) 0)))
								{	/* Coerce/funcall.scm 103 */
									BgL_test1834z00_2063 = ((bool_t) 1);
								}
							else
								{	/* Coerce/funcall.scm 103 */
									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
											((long) 0)))
										{	/* Coerce/funcall.scm 107 */
											obj_t BgL_arg1372z00_1506;

											{	/* Coerce/funcall.scm 107 */
												obj_t BgL_arg1381z00_1507;

												BgL_arg1381z00_1507 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_arg1372z00_1506 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1381z00_1507)))->
													BgL_debugzd2supportzd2);
											}
											BgL_test1834z00_2063 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 0)), BgL_arg1372z00_1506));
										}
									else
										{	/* Coerce/funcall.scm 104 */
											BgL_test1834z00_2063 = ((bool_t) 0);
										}
								}
							if (BgL_test1834z00_2063)
								{	/* Coerce/funcall.scm 103 */
									if (STRUCTP(BgL_locz00_23))
										{	/* Coerce/funcall.scm 108 */
											BgL_test1833z00_2062 =
												(STRUCT_KEY(BgL_locz00_23) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Coerce/funcall.scm 108 */
											BgL_test1833z00_2062 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/funcall.scm 103 */
									BgL_test1833z00_2062 = ((bool_t) 0);
								}
						}
						if (BgL_test1833z00_2062)
							{	/* Coerce/funcall.scm 110 */
								obj_t BgL_arg1317z00_1471;

								{	/* Coerce/funcall.scm 110 */
									obj_t BgL_arg1319z00_1472;
									obj_t BgL_arg1322z00_1473;

									{	/* Coerce/funcall.scm 110 */
										obj_t BgL_arg1324z00_1474;
										obj_t BgL_arg1325z00_1475;

										{	/* Coerce/funcall.scm 110 */
											obj_t BgL_arg1326z00_1476;

											{	/* Coerce/funcall.scm 110 */
												obj_t BgL_arg1327z00_1477;

												BgL_arg1327z00_1477 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
												BgL_arg1326z00_1476 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1327z00_1477);
											}
											BgL_arg1324z00_1474 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
												BgL_arg1326z00_1476);
										}
										{	/* Coerce/funcall.scm 112 */
											obj_t BgL_arg1328z00_1478;
											obj_t BgL_arg1329z00_1479;

											{	/* Coerce/funcall.scm 112 */
												obj_t BgL_arg1330z00_1480;

												{	/* Coerce/funcall.scm 112 */
													obj_t BgL_arg1331z00_1481;

													BgL_arg1331z00_1481 =
														BGl_currentzd2functionzd2zztools_errorz00();
													{	/* Coerce/funcall.scm 111 */
														obj_t BgL_res1793z00_1866;

														{	/* Coerce/funcall.scm 111 */
															obj_t BgL_arg1466z00_1865;

															BgL_arg1466z00_1865 =
																SYMBOL_TO_STRING(((obj_t) BgL_arg1331z00_1481));
															BgL_res1793z00_1866 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1865);
														}
														BgL_arg1330z00_1480 = BgL_res1793z00_1866;
												}}
												BgL_arg1328z00_1478 =
													string_append(BgL_arg1330z00_1480,
													BGl_string1818z00zzcoerce_funcallz00);
											}
											{	/* Coerce/funcall.scm 116 */
												obj_t BgL_arg1334z00_1482;

												{	/* Coerce/funcall.scm 116 */
													obj_t BgL_arg1335z00_1483;

													{	/* Coerce/funcall.scm 116 */
														obj_t BgL_arg1337z00_1484;
														obj_t BgL_arg1338z00_1485;

														BgL_arg1337z00_1484 =
															BGl_locationzd2fullzd2fnamez00zztools_locationz00
															(BgL_locz00_23);
														BgL_arg1338z00_1485 =
															MAKE_YOUNG_PAIR(STRUCT_REF(BgL_locz00_23,
																(int) (((long) 1))), BNIL);
														BgL_arg1335z00_1483 =
															MAKE_YOUNG_PAIR(BgL_arg1337z00_1484,
															BgL_arg1338z00_1485);
													}
													BgL_arg1334z00_1482 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_funz00_21), BgL_arg1335z00_1483);
												}
												BgL_arg1329z00_1479 =
													MAKE_YOUNG_PAIR(BgL_errorzd2msgzd2_22,
													BgL_arg1334z00_1482);
											}
											BgL_arg1325z00_1475 =
												MAKE_YOUNG_PAIR(BgL_arg1328z00_1478,
												BgL_arg1329z00_1479);
										}
										BgL_arg1319z00_1472 =
											MAKE_YOUNG_PAIR(BgL_arg1324z00_1474, BgL_arg1325z00_1475);
									}
									{	/* Coerce/funcall.scm 118 */
										obj_t BgL_arg1340z00_1487;

										{	/* Coerce/funcall.scm 118 */
											obj_t BgL_arg1344z00_1488;

											{	/* Coerce/funcall.scm 118 */
												obj_t BgL_arg1345z00_1489;
												obj_t BgL_arg1346z00_1490;

												{	/* Coerce/funcall.scm 118 */
													obj_t BgL_arg1347z00_1491;

													BgL_arg1347z00_1491 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)), BNIL);
													BgL_arg1345z00_1489 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
														BgL_arg1347z00_1491);
												}
												{	/* Coerce/funcall.scm 118 */
													obj_t BgL_arg1348z00_1492;
													obj_t BgL_arg1351z00_1493;

													{	/* Coerce/funcall.scm 118 */
														obj_t BgL_arg1352z00_1494;

														BgL_arg1352z00_1494 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)), BNIL);
														BgL_arg1348z00_1492 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
															BgL_arg1352z00_1494);
													}
													{	/* Coerce/funcall.scm 118 */
														obj_t BgL_arg1357z00_1495;

														{	/* Coerce/funcall.scm 118 */
															obj_t BgL_arg1360z00_1496;

															BgL_arg1360z00_1496 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BNIL);
															BgL_arg1357z00_1495 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																BgL_arg1360z00_1496);
														}
														BgL_arg1351z00_1493 =
															MAKE_YOUNG_PAIR(BgL_arg1357z00_1495, BNIL);
													}
													BgL_arg1346z00_1490 =
														MAKE_YOUNG_PAIR(BgL_arg1348z00_1492,
														BgL_arg1351z00_1493);
												}
												BgL_arg1344z00_1488 =
													MAKE_YOUNG_PAIR(BgL_arg1345z00_1489,
													BgL_arg1346z00_1490);
											}
											BgL_arg1340z00_1487 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1344z00_1488);
										}
										BgL_arg1322z00_1473 =
											MAKE_YOUNG_PAIR(BgL_arg1340z00_1487, BNIL);
									}
									BgL_arg1317z00_1471 =
										MAKE_YOUNG_PAIR(BgL_arg1319z00_1472, BgL_arg1322z00_1473);
								}
								BgL_arg1309z00_1460 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
									BgL_arg1317z00_1471);
							}
						else
							{	/* Coerce/funcall.scm 120 */
								obj_t BgL_arg1361z00_1497;

								{	/* Coerce/funcall.scm 120 */
									obj_t BgL_arg1363z00_1498;
									obj_t BgL_arg1364z00_1499;

									{	/* Coerce/funcall.scm 120 */
										obj_t BgL_arg1367z00_1500;

										{	/* Coerce/funcall.scm 120 */
											obj_t BgL_arg1370z00_1501;

											BgL_arg1370z00_1501 =
												BGl_currentzd2functionzd2zztools_errorz00();
											{	/* Coerce/funcall.scm 119 */
												obj_t BgL_res1794z00_1870;

												{	/* Coerce/funcall.scm 119 */
													obj_t BgL_arg1466z00_1869;

													BgL_arg1466z00_1869 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1370z00_1501));
													BgL_res1794z00_1870 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1869);
												}
												BgL_arg1367z00_1500 = BgL_res1794z00_1870;
											}
										}
										BgL_arg1363z00_1498 =
											string_append(BgL_arg1367z00_1500,
											BGl_string1818z00zzcoerce_funcallz00);
									}
									{	/* Coerce/funcall.scm 119 */
										obj_t BgL_arg1371z00_1502;

										BgL_arg1371z00_1502 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_funz00_21), BNIL);
										BgL_arg1364z00_1499 =
											MAKE_YOUNG_PAIR(BgL_errorzd2msgzd2_22,
											BgL_arg1371z00_1502);
									}
									BgL_arg1361z00_1497 =
										MAKE_YOUNG_PAIR(BgL_arg1363z00_1498, BgL_arg1364z00_1499);
								}
								BgL_arg1309z00_1460 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1361z00_1497);
					}}
					BgL_nodez00_1459 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
						(BgL_arg1309z00_1460, BgL_locz00_23);
				}
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_1459);
				return
					BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_1459, BgL_callerz00_24,
					((BgL_typez00_bglt) BgL_toz00_25), ((bool_t) 0));
			}
		}

	}



/* coerce-funcall-args! */
	obj_t BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_26, obj_t BgL_callerz00_27, obj_t BgL_toz00_28,
		obj_t BgL_safez00_29)
	{
		{	/* Coerce/funcall.scm 131 */
			if (NULLP((((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_26))->BgL_argsz00)))
				{	/* Coerce/funcall.scm 139 */
					obj_t BgL_arg1394z00_1511;

					{	/* Coerce/funcall.scm 139 */
						BgL_nodez00_bglt BgL_arg1396z00_1512;

						BgL_arg1396z00_1512 =
							BGl_toplevelzd2expze71z35zzcoerce_funcallz00(BgL_nodez00_26);
						{	/* Coerce/funcall.scm 139 */
							obj_t BgL_list1397z00_1513;

							BgL_list1397z00_1513 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1396z00_1512), BNIL);
							BgL_arg1394z00_1511 = BgL_list1397z00_1513;
						}
					}
					return
						((((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_26))->BgL_argsz00) =
						((obj_t) BgL_arg1394z00_1511), BUNSPEC);
				}
			else
				{	/* Coerce/funcall.scm 140 */
					obj_t BgL_g1112z00_1514;
					obj_t BgL_g1116z00_1515;

					BgL_g1112z00_1514 =
						(((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_26))->BgL_argsz00);
					BgL_g1116z00_1515 = CNST_TABLE_REF(((long) 9));
					{
						obj_t BgL_actualsz00_1517;
						obj_t BgL_prevz00_1518;

						BgL_actualsz00_1517 = BgL_g1112z00_1514;
						BgL_prevz00_1518 = BgL_g1116z00_1515;
					BgL_zc3z04anonymousza31398ze3z87_1519:
						if (NULLP(BgL_actualsz00_1517))
							{	/* Coerce/funcall.scm 143 */
								obj_t BgL_arg1417z00_1521;

								{	/* Coerce/funcall.scm 143 */
									BgL_nodez00_bglt BgL_arg1418z00_1522;

									BgL_arg1418z00_1522 =
										BGl_toplevelzd2expze71z35zzcoerce_funcallz00
										(BgL_nodez00_26);
									{	/* Coerce/funcall.scm 143 */
										obj_t BgL_list1419z00_1523;

										BgL_list1419z00_1523 =
											MAKE_YOUNG_PAIR(((obj_t) BgL_arg1418z00_1522), BNIL);
										BgL_arg1417z00_1521 = BgL_list1419z00_1523;
									}
								}
								{	/* Coerce/funcall.scm 143 */
									obj_t BgL_tmpz00_2152;

									BgL_tmpz00_2152 = ((obj_t) BgL_prevz00_1518);
									return SET_CDR(BgL_tmpz00_2152, BgL_arg1417z00_1521);
								}
							}
						else
							{	/* Coerce/funcall.scm 142 */
								{	/* Coerce/funcall.scm 145 */
									BgL_nodez00_bglt BgL_arg1421z00_1524;

									{	/* Coerce/funcall.scm 145 */
										obj_t BgL_arg1422z00_1525;

										BgL_arg1422z00_1525 = CAR(((obj_t) BgL_actualsz00_1517));
										BgL_arg1421z00_1524 =
											BGl_coercez12z12zzcoerce_coercez00(
											((BgL_nodez00_bglt) BgL_arg1422z00_1525),
											BgL_callerz00_27,
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
											CBOOL(BgL_safez00_29));
									}
									{	/* Coerce/funcall.scm 145 */
										obj_t BgL_auxz00_2163;
										obj_t BgL_tmpz00_2161;

										BgL_auxz00_2163 = ((obj_t) BgL_arg1421z00_1524);
										BgL_tmpz00_2161 = ((obj_t) BgL_actualsz00_1517);
										SET_CAR(BgL_tmpz00_2161, BgL_auxz00_2163);
									}
								}
								{	/* Coerce/funcall.scm 146 */
									obj_t BgL_arg1441z00_1526;

									BgL_arg1441z00_1526 = CDR(((obj_t) BgL_actualsz00_1517));
									{
										obj_t BgL_prevz00_2169;
										obj_t BgL_actualsz00_2168;

										BgL_actualsz00_2168 = BgL_arg1441z00_1526;
										BgL_prevz00_2169 = BgL_actualsz00_1517;
										BgL_prevz00_1518 = BgL_prevz00_2169;
										BgL_actualsz00_1517 = BgL_actualsz00_2168;
										goto BgL_zc3z04anonymousza31398ze3z87_1519;
									}
								}
							}
					}
				}
		}

	}



/* toplevel-exp~1 */
	BgL_nodez00_bglt
		BGl_toplevelzd2expze71z35zzcoerce_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_1529)
	{
		{	/* Coerce/funcall.scm 136 */
			{	/* Coerce/funcall.scm 134 */
				BgL_nodez00_bglt BgL_nz00_1531;

				{	/* Coerce/funcall.scm 134 */
					obj_t BgL_arg1448z00_1532;

					BgL_arg1448z00_1532 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_nodez00_1529)))->BgL_locz00);
					BgL_nz00_1531 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF((
								(long) 10)), BgL_arg1448z00_1532);
				}
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nz00_1531);
				return BgL_nz00_1531;
			}
		}

	}



/* coerce-funcall-elight-args! */
	obj_t
		BGl_coercezd2funcallzd2elightzd2argsz12zc0zzcoerce_funcallz00
		(BgL_funcallz00_bglt BgL_nodez00_30, obj_t BgL_callerz00_31,
		obj_t BgL_toz00_32, obj_t BgL_safez00_33)
	{
		{	/* Coerce/funcall.scm 151 */
			if (NULLP((((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_30))->BgL_argsz00)))
				{	/* Coerce/funcall.scm 159 */
					obj_t BgL_arg1461z00_1537;

					{	/* Coerce/funcall.scm 159 */
						BgL_nodez00_bglt BgL_arg1462z00_1538;

						BgL_arg1462z00_1538 =
							BGl_toplevelzd2expze70z35zzcoerce_funcallz00(BgL_nodez00_30);
						{	/* Coerce/funcall.scm 159 */
							obj_t BgL_list1463z00_1539;

							BgL_list1463z00_1539 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1462z00_1538), BNIL);
							BgL_arg1461z00_1537 = BgL_list1463z00_1539;
						}
					}
					return
						((((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_30))->BgL_argsz00) =
						((obj_t) BgL_arg1461z00_1537), BUNSPEC);
				}
			else
				{	/* Coerce/funcall.scm 160 */
					BgL_variablez00_bglt BgL_calleez00_1540;

					{
						BgL_varz00_bglt BgL_auxz00_2182;

						{	/* Coerce/funcall.scm 160 */
							obj_t BgL_pairz00_1889;

							BgL_pairz00_1889 =
								(((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_30))->
								BgL_functionsz00);
							BgL_auxz00_2182 = ((BgL_varz00_bglt) CAR(BgL_pairz00_1889));
						}
						BgL_calleez00_1540 =
							(((BgL_varz00_bglt) COBJECT(BgL_auxz00_2182))->BgL_variablez00);
					}
					{	/* Coerce/funcall.scm 161 */
						obj_t BgL_g1117z00_1541;
						obj_t BgL_g1118z00_1542;
						obj_t BgL_g1119z00_1543;

						BgL_g1117z00_1541 =
							(((BgL_funcallz00_bglt) COBJECT(BgL_nodez00_30))->BgL_argsz00);
						BgL_g1118z00_1542 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt)
										(((BgL_variablez00_bglt) COBJECT(BgL_calleez00_1540))->
											BgL_valuez00))))->BgL_argsz00);
						BgL_g1119z00_1543 = CNST_TABLE_REF(((long) 9));
						{
							obj_t BgL_actualsz00_1545;
							obj_t BgL_formalsz00_1546;
							obj_t BgL_prevz00_1547;

							BgL_actualsz00_1545 = BgL_g1117z00_1541;
							BgL_formalsz00_1546 = BgL_g1118z00_1542;
							BgL_prevz00_1547 = BgL_g1119z00_1543;
						BgL_zc3z04anonymousza31464ze3z87_1548:
							if (NULLP(BgL_actualsz00_1545))
								{	/* Coerce/funcall.scm 165 */
									obj_t BgL_arg1474z00_1550;

									{	/* Coerce/funcall.scm 165 */
										BgL_nodez00_bglt BgL_arg1476z00_1551;

										BgL_arg1476z00_1551 =
											BGl_toplevelzd2expze70z35zzcoerce_funcallz00
											(BgL_nodez00_30);
										{	/* Coerce/funcall.scm 165 */
											obj_t BgL_list1477z00_1552;

											BgL_list1477z00_1552 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1476z00_1551), BNIL);
											BgL_arg1474z00_1550 = BgL_list1477z00_1552;
										}
									}
									{	/* Coerce/funcall.scm 165 */
										obj_t BgL_tmpz00_2197;

										BgL_tmpz00_2197 = ((obj_t) BgL_prevz00_1547);
										return SET_CDR(BgL_tmpz00_2197, BgL_arg1474z00_1550);
									}
								}
							else
								{	/* Coerce/funcall.scm 164 */
									{	/* Coerce/funcall.scm 168 */
										BgL_nodez00_bglt BgL_arg1489z00_1553;

										{	/* Coerce/funcall.scm 168 */
											obj_t BgL_arg1493z00_1554;
											BgL_typez00_bglt BgL_arg1495z00_1555;

											BgL_arg1493z00_1554 = CAR(((obj_t) BgL_actualsz00_1545));
											BgL_arg1495z00_1555 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_formalsz00_1546))))))->
												BgL_typez00);
											BgL_arg1489z00_1553 =
												BGl_coercez12z12zzcoerce_coercez00(((BgL_nodez00_bglt)
													BgL_arg1493z00_1554), BgL_callerz00_31,
												BgL_arg1495z00_1555, CBOOL(BgL_safez00_33));
										}
										{	/* Coerce/funcall.scm 167 */
											obj_t BgL_auxz00_2212;
											obj_t BgL_tmpz00_2210;

											BgL_auxz00_2212 = ((obj_t) BgL_arg1489z00_1553);
											BgL_tmpz00_2210 = ((obj_t) BgL_actualsz00_1545);
											SET_CAR(BgL_tmpz00_2210, BgL_auxz00_2212);
										}
									}
									{	/* Coerce/funcall.scm 170 */
										obj_t BgL_arg1518z00_1557;
										obj_t BgL_arg1521z00_1558;

										BgL_arg1518z00_1557 = CDR(((obj_t) BgL_actualsz00_1545));
										BgL_arg1521z00_1558 = CDR(((obj_t) BgL_formalsz00_1546));
										{
											obj_t BgL_prevz00_2221;
											obj_t BgL_formalsz00_2220;
											obj_t BgL_actualsz00_2219;

											BgL_actualsz00_2219 = BgL_arg1518z00_1557;
											BgL_formalsz00_2220 = BgL_arg1521z00_1558;
											BgL_prevz00_2221 = BgL_actualsz00_1545;
											BgL_prevz00_1547 = BgL_prevz00_2221;
											BgL_formalsz00_1546 = BgL_formalsz00_2220;
											BgL_actualsz00_1545 = BgL_actualsz00_2219;
											goto BgL_zc3z04anonymousza31464ze3z87_1548;
										}
									}
								}
						}
					}
				}
		}

	}



/* toplevel-exp~0 */
	BgL_nodez00_bglt
		BGl_toplevelzd2expze70z35zzcoerce_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_1564)
	{
		{	/* Coerce/funcall.scm 156 */
			{	/* Coerce/funcall.scm 154 */
				BgL_nodez00_bglt BgL_nz00_1566;

				{	/* Coerce/funcall.scm 154 */
					obj_t BgL_arg1552z00_1567;

					BgL_arg1552z00_1567 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_nodez00_1564)))->BgL_locz00);
					BgL_nz00_1566 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF((
								(long) 10)), BgL_arg1552z00_1567);
				}
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nz00_1566);
				return BgL_nz00_1566;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_funcallz00zzast_nodez00,
				BGl_proc1819z00zzcoerce_funcallz00,
				BGl_string1820z00zzcoerce_funcallz00);
		}

	}



/* &coerce!-funcall1292 */
	BgL_nodez00_bglt BGl_z62coercez12zd2funcall1292za2zzcoerce_funcallz00(obj_t
		BgL_envz00_1945, obj_t BgL_nodez00_1946, obj_t BgL_callerz00_1947,
		obj_t BgL_toz00_1948, obj_t BgL_safez00_1949)
	{
		{	/* Coerce/funcall.scm 37 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_errorzd2msgzd2_1970;
				obj_t BgL_strengthz00_1971;
				BgL_typez00_bglt BgL_ntyz00_1972;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_arg1644z00_1973;

					BgL_arg1644z00_1973 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_1946)));
					{	/* Tools/trace.sch 53 */
						obj_t BgL_list1645z00_1974;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1652z00_1975;

							BgL_arg1652z00_1975 = MAKE_YOUNG_PAIR(BgL_arg1644z00_1973, BNIL);
							BgL_list1645z00_1974 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
								BgL_arg1652z00_1975);
						}
						BgL_errorzd2msgzd2_1970 = BgL_list1645z00_1974;
				}}
				BgL_strengthz00_1971 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1946)))->BgL_strengthz00);
				BgL_ntyz00_1972 =
					(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_funcallz00_bglt) BgL_nodez00_1946))))->BgL_typez00);
				if ((BgL_strengthz00_1971 == CNST_TABLE_REF(((long) 11))))
					{	/* Tools/trace.sch 53 */
						if (CBOOL
							(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
							{	/* Tools/trace.sch 53 */
								BGl_coercezd2funcallzd2elightzd2argsz12zc0zzcoerce_funcallz00(
									((BgL_funcallz00_bglt) BgL_nodez00_1946), BgL_callerz00_1947,
									BgL_toz00_1948, BgL_safez00_1949);
							}
						else
							{	/* Tools/trace.sch 53 */
								BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(
									((BgL_funcallz00_bglt) BgL_nodez00_1946), BgL_callerz00_1947,
									BgL_toz00_1948, BgL_safez00_1949);
							}
						return
							BGl_convertz12z12zzcoerce_convertz00(
							((BgL_nodez00_bglt)
								((BgL_funcallz00_bglt) BgL_nodez00_1946)), BgL_ntyz00_1972,
							((BgL_typez00_bglt) BgL_toz00_1948), CBOOL(BgL_safez00_1949));
					}
				else
					{	/* Tools/trace.sch 53 */
						if ((BgL_strengthz00_1971 == CNST_TABLE_REF(((long) 12))))
							{	/* Tools/trace.sch 53 */
								if (CBOOL
									(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
									{	/* Tools/trace.sch 53 */
										BGl_coercezd2funcallzd2elightzd2argsz12zc0zzcoerce_funcallz00
											(((BgL_funcallz00_bglt) BgL_nodez00_1946),
											BgL_callerz00_1947, BgL_toz00_1948, BgL_safez00_1949);
									}
								else
									{	/* Tools/trace.sch 53 */
										BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(
											((BgL_funcallz00_bglt) BgL_nodez00_1946),
											BgL_callerz00_1947, BgL_toz00_1948, BgL_safez00_1949);
									}
								return
									BGl_convertz12z12zzcoerce_convertz00(
									((BgL_nodez00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_1946)), BgL_ntyz00_1972,
									((BgL_typez00_bglt) BgL_toz00_1948), CBOOL(BgL_safez00_1949));
							}
						else
							{	/* Tools/trace.sch 53 */
								BgL_nodez00_bglt BgL_czd2funzd2_1976;

								{	/* Tools/trace.sch 53 */
									BgL_nodez00_bglt BgL_arg1641z00_1977;

									BgL_arg1641z00_1977 =
										(((BgL_funcallz00_bglt) COBJECT(
												((BgL_funcallz00_bglt) BgL_nodez00_1946)))->BgL_funz00);
									BgL_czd2funzd2_1976 =
										BGl_coercez12z12zzcoerce_coercez00(BgL_arg1641z00_1977,
										BgL_callerz00_1947,
										((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00),
										CBOOL(BgL_safez00_1949));
								}
								BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(
									((BgL_funcallz00_bglt) BgL_nodez00_1946), BgL_callerz00_1947,
									BgL_toz00_1948, BgL_safez00_1949);
								if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
									{	/* Tools/trace.sch 53 */
										((((BgL_funcallz00_bglt) COBJECT(
														((BgL_funcallz00_bglt) BgL_nodez00_1946)))->
												BgL_funz00) =
											((BgL_nodez00_bglt) BgL_czd2funzd2_1976), BUNSPEC);
										return
											BGl_convertz12z12zzcoerce_convertz00(((BgL_nodez00_bglt) (
													(BgL_funcallz00_bglt) BgL_nodez00_1946)),
											BgL_ntyz00_1972, ((BgL_typez00_bglt) BgL_toz00_1948),
											CBOOL(BgL_safez00_1949));
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL_localz00_bglt BgL_funz00_1978;

										BgL_funz00_1978 =
											BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
													(long) 13)),
											((BgL_typez00_bglt)
												BGl_za2procedureza2z00zztype_cachez00));
										{	/* Tools/trace.sch 53 */
											obj_t BgL_locz00_1979;

											BgL_locz00_1979 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt)
															((BgL_funcallz00_bglt) BgL_nodez00_1946))))->
												BgL_locz00);
											{	/* Tools/trace.sch 53 */
												BgL_literalz00_bglt BgL_lenz00_1980;

												{	/* Tools/trace.sch 53 */
													BgL_literalz00_bglt BgL_new1106z00_1981;

													{	/* Tools/trace.sch 53 */
														BgL_literalz00_bglt BgL_new1105z00_1982;

														BgL_new1105z00_1982 =
															((BgL_literalz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_literalz00_bgl))));
														{	/* Tools/trace.sch 53 */
															long BgL_arg1640z00_1983;

															{	/* Tools/trace.sch 53 */
																long BgL_res1806z00_1984;

																BgL_res1806z00_1984 =
																	BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
																BgL_arg1640z00_1983 = BgL_res1806z00_1984;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1105z00_1982),
																BgL_arg1640z00_1983);
														}
														{	/* Tools/trace.sch 53 */
															BgL_objectz00_bglt BgL_tmpz00_2293;

															BgL_tmpz00_2293 =
																((BgL_objectz00_bglt) BgL_new1105z00_1982);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2293, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1105z00_1982);
														BgL_new1106z00_1981 = BgL_new1105z00_1982;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1106z00_1981)))->
															BgL_locz00) = ((obj_t) BgL_locz00_1979), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1106z00_1981)))->BgL_typez00) =
														((BgL_typez00_bglt) ((BgL_typez00_bglt)
																BGl_za2intza2z00zztype_cachez00)), BUNSPEC);
													((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
																		BgL_new1106z00_1981)))->BgL_valuez00) =
														((obj_t)
															BINT((bgl_list_length((((BgL_funcallz00_bglt)
																				COBJECT(((BgL_funcallz00_bglt)
																						BgL_nodez00_1946)))->BgL_argsz00)) -
																	((long) 2)))), BUNSPEC);
													BgL_lenz00_1980 = BgL_new1106z00_1981;
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_azd2lenzd2_1985;

													BgL_azd2lenzd2_1985 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 14))));
													{	/* Tools/trace.sch 53 */
														obj_t BgL_azd2tlenzd2_1986;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg1613z00_1987;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg1624z00_1988;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg1626z00_1989;
																	obj_t BgL_arg1627z00_1990;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_res1808z00_1991;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1466z00_1992;

																			BgL_arg1466z00_1992 =
																				SYMBOL_TO_STRING(BgL_azd2lenzd2_1985);
																			BgL_res1808z00_1991 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_1992);
																		}
																		BgL_arg1626z00_1989 = BgL_res1808z00_1991;
																	}
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_res1809z00_1993;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_symbolz00_1994;

																			BgL_symbolz00_1994 =
																				CNST_TABLE_REF(((long) 15));
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1466z00_1995;

																				BgL_arg1466z00_1995 =
																					SYMBOL_TO_STRING(BgL_symbolz00_1994);
																				BgL_res1809z00_1993 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1466z00_1995);
																		}}
																		BgL_arg1627z00_1990 = BgL_res1809z00_1993;
																	}
																	BgL_arg1624z00_1988 =
																		string_append(BgL_arg1626z00_1989,
																		BgL_arg1627z00_1990);
																}
																BgL_arg1613z00_1987 =
																	bstring_to_symbol(BgL_arg1624z00_1988);
															}
															BgL_azd2tlenzd2_1986 =
																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																(BgL_arg1613z00_1987);
														}
														{	/* Tools/trace.sch 53 */
															BgL_letzd2varzd2_bglt BgL_lnodez00_1996;

															{	/* Tools/trace.sch 53 */
																BgL_letzd2varzd2_bglt BgL_new1108z00_1997;

																{	/* Tools/trace.sch 53 */
																	BgL_letzd2varzd2_bglt BgL_new1107z00_1998;

																	BgL_new1107z00_1998 =
																		((BgL_letzd2varzd2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_letzd2varzd2_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg1612z00_1999;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res1811z00_2000;

																			BgL_res1811z00_2000 =
																				BGL_CLASS_INDEX
																				(BGl_letzd2varzd2zzast_nodez00);
																			BgL_arg1612z00_1999 = BgL_res1811z00_2000;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1107z00_1998),
																			BgL_arg1612z00_1999);
																	}
																	{	/* Tools/trace.sch 53 */
																		BgL_objectz00_bglt BgL_tmpz00_2324;

																		BgL_tmpz00_2324 =
																			((BgL_objectz00_bglt)
																			BgL_new1107z00_1998);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2324,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1107z00_1998);
																	BgL_new1108z00_1997 = BgL_new1107z00_1998;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1108z00_1997)))->BgL_locz00) =
																	((obj_t) BgL_locz00_1979), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1108z00_1997)))->BgL_typez00) =
																	((BgL_typez00_bglt)
																		BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt) BgL_toz00_1948),
																			BgL_ntyz00_1972)), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1108z00_1997)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1108z00_1997)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																{
																	obj_t BgL_auxz00_2339;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1565z00_2001;

																		BgL_arg1565z00_2001 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_funz00_1978),
																			((obj_t) BgL_czd2funzd2_1976));
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_list1566z00_2002;

																			BgL_list1566z00_2002 =
																				MAKE_YOUNG_PAIR(BgL_arg1565z00_2001,
																				BNIL);
																			BgL_auxz00_2339 = BgL_list1566z00_2002;
																	}}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1108z00_1997))->
																			BgL_bindingsz00) =
																		((obj_t) BgL_auxz00_2339), BUNSPEC);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_2345;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1573z00_2003;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1575z00_2004;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1578z00_2005;
																				obj_t BgL_arg1582z00_2006;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1584z00_2007;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1588z00_2008;

																						BgL_arg1588z00_2008 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_lenz00_1980), BNIL);
																						BgL_arg1584z00_2007 =
																							MAKE_YOUNG_PAIR
																							(BgL_azd2tlenzd2_1986,
																							BgL_arg1588z00_2008);
																					}
																					BgL_arg1578z00_2005 =
																						MAKE_YOUNG_PAIR(BgL_arg1584z00_2007,
																						BNIL);
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1589z00_2009;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1592z00_2010;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1593z00_2011;
																							obj_t BgL_arg1597z00_2012;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1599z00_2013;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1604z00_2014;

																									BgL_arg1604z00_2014 =
																										MAKE_YOUNG_PAIR
																										(BgL_azd2lenzd2_1985, BNIL);
																									BgL_arg1599z00_2013 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_funz00_1978),
																										BgL_arg1604z00_2014);
																								}
																								BgL_arg1593z00_2011 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 16)),
																									BgL_arg1599z00_2013);
																							}
																							{	/* Tools/trace.sch 53 */
																								BgL_nodez00_bglt
																									BgL_arg1605z00_2015;
																								obj_t BgL_arg1606z00_2016;

																								BgL_arg1605z00_2015 =
																									BGl_convertz12z12zzcoerce_convertz00
																									(((BgL_nodez00_bglt) (
																											(BgL_funcallz00_bglt)
																											BgL_nodez00_1946)),
																									BgL_ntyz00_1972,
																									((BgL_typez00_bglt)
																										BgL_toz00_1948),
																									CBOOL(BgL_safez00_1949));
																								{	/* Tools/trace.sch 53 */
																									BgL_nodez00_bglt
																										BgL_arg1611z00_2017;
																									BgL_arg1611z00_2017 =
																										BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00
																										(BgL_funz00_1978,
																										BgL_errorzd2msgzd2_1970,
																										BgL_locz00_1979,
																										BgL_callerz00_1947,
																										BgL_toz00_1948);
																									BgL_arg1606z00_2016 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_arg1611z00_2017),
																										BNIL);
																								}
																								BgL_arg1597z00_2012 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_arg1605z00_2015),
																									BgL_arg1606z00_2016);
																							}
																							BgL_arg1592z00_2010 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1593z00_2011,
																								BgL_arg1597z00_2012);
																						}
																						BgL_arg1589z00_2009 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 17)),
																							BgL_arg1592z00_2010);
																					}
																					BgL_arg1582z00_2006 =
																						MAKE_YOUNG_PAIR(BgL_arg1589z00_2009,
																						BNIL);
																				}
																				BgL_arg1575z00_2004 =
																					MAKE_YOUNG_PAIR(BgL_arg1578z00_2005,
																					BgL_arg1582z00_2006);
																			}
																			BgL_arg1573z00_2003 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						18)), BgL_arg1575z00_2004);
																		}
																		BgL_auxz00_2345 =
																			BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_arg1573z00_2003, BgL_locz00_1979);
																	}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1108z00_1997))->
																			BgL_bodyz00) =
																		((BgL_nodez00_bglt) BgL_auxz00_2345),
																		BUNSPEC);
																}
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1108z00_1997))->
																		BgL_removablezf3zf3) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
																BgL_lnodez00_1996 = BgL_new1108z00_1997;
															}
															{	/* Tools/trace.sch 53 */

																{	/* Tools/trace.sch 53 */
																	BgL_varz00_bglt BgL_arg1558z00_2018;

																	{	/* Tools/trace.sch 53 */
																		BgL_varz00_bglt BgL_new1110z00_2019;

																		{	/* Tools/trace.sch 53 */
																			BgL_varz00_bglt BgL_new1109z00_2020;

																			BgL_new1109z00_2020 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Tools/trace.sch 53 */
																				long BgL_arg1564z00_2021;

																				{	/* Tools/trace.sch 53 */
																					long BgL_res1813z00_2022;

																					BgL_res1813z00_2022 =
																						BGL_CLASS_INDEX
																						(BGl_varz00zzast_nodez00);
																					BgL_arg1564z00_2021 =
																						BgL_res1813z00_2022;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1109z00_2020),
																					BgL_arg1564z00_2021);
																			}
																			BgL_new1110z00_2019 = BgL_new1109z00_2020;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1110z00_2019)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1979), BUNSPEC);
																		{
																			BgL_typez00_bglt BgL_auxz00_2381;

																			{	/* Tools/trace.sch 53 */
																				BgL_typez00_bglt BgL_arg1561z00_2023;

																				BgL_arg1561z00_2023 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_funz00_1978)))->
																					BgL_typez00);
																				BgL_auxz00_2381 =
																					BGl_strictzd2nodezd2typez00zzast_nodez00
																					(BgL_arg1561z00_2023,
																					((BgL_typez00_bglt)
																						BGl_za2objza2z00zztype_cachez00));
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1110z00_2019)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_2381),
																				BUNSPEC);
																		}
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1110z00_2019))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt)
																					BgL_funz00_1978)), BUNSPEC);
																		BgL_arg1558z00_2018 = BgL_new1110z00_2019;
																	}
																	((((BgL_funcallz00_bglt) COBJECT(
																					((BgL_funcallz00_bglt)
																						BgL_nodez00_1946)))->BgL_funz00) =
																		((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																				BgL_arg1558z00_2018)), BUNSPEC);
																}
																BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
																	((BgL_nodez00_bglt) BgL_lnodez00_1996));
																return ((BgL_nodez00_bglt) BgL_lnodez00_1996);
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
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00()
	{
		{	/* Coerce/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 87995526),
				BSTRING_TO_STRING(BGl_string1821z00zzcoerce_funcallz00));
		}

	}

#ifdef __cplusplus
}
#endif
