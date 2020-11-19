/*===========================================================================*/
/*   (Inline/simple.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/simple.scm) */
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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	extern obj_t BGl_closurez00zzast_nodez00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzinline_simplez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_simplez00();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_svarz00zzast_varz00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzinline_simplez00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62inlinezd2appzd2simplez62zzinline_simplez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_simplez00 = BUNSPEC;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzinline_simplez00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzinline_simplez00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_simplez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_simplez00();
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2appzd2simplezd2envzd2zzinline_simplez00,
		BgL_bgl_za762inlineza7d2appza71803za7,
		BGl_z62inlinezd2appzd2simplez62zzinline_simplez00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1793z00zzinline_simplez00,
		BgL_bgl_string1793za700za7za7i1804za7, " (", 2);
	      DEFINE_STRING(BGl_string1794z00zzinline_simplez00,
		BgL_bgl_string1794za700za7za7i1805za7, " --> ", 5);
	      DEFINE_STRING(BGl_string1795z00zzinline_simplez00,
		BgL_bgl_string1795za700za7za7i1806za7, "         ", 9);
	      DEFINE_STRING(BGl_string1796z00zzinline_simplez00,
		BgL_bgl_string1796za700za7za7i1807za7, "inline_simple", 13);
	      DEFINE_STRING(BGl_string1797z00zzinline_simplez00,
		BgL_bgl_string1797za700za7za7i1808za7, "res (sifun sgfun) read ", 23);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinline_simplez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long
		BgL_checksumz00_1922, char *BgL_fromz00_1923)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_simplez00))
				{
					BGl_requirezd2initializa7ationz75zzinline_simplez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_simplez00();
					BGl_libraryzd2moduleszd2initz00zzinline_simplez00();
					BGl_cnstzd2initzd2zzinline_simplez00();
					BGl_importedzd2moduleszd2initz00zzinline_simplez00();
					return BGl_methodzd2initzd2zzinline_simplez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_simple");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_simple");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			{	/* Inline/simple.scm 15 */
				obj_t BgL_cportz00_1909;

				{	/* Inline/simple.scm 15 */
					obj_t BgL_stringz00_1917;

					BgL_stringz00_1917 = BGl_string1797z00zzinline_simplez00;
					{	/* Inline/simple.scm 15 */
						obj_t BgL_startz00_1918;

						BgL_startz00_1918 = BINT(((long) 0));
						{	/* Inline/simple.scm 15 */
							obj_t BgL_endz00_1919;

							BgL_endz00_1919 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1917)));
							{	/* Inline/simple.scm 15 */

								BgL_cportz00_1909 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1917, BgL_startz00_1918, BgL_endz00_1919);
				}}}}
				{
					long BgL_iz00_1910;

					BgL_iz00_1910 = ((long) 2);
				BgL_loopz00_1911:
					if ((BgL_iz00_1910 == ((long) -1)))
						{	/* Inline/simple.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/simple.scm 15 */
							{	/* Inline/simple.scm 15 */
								obj_t BgL_arg1801z00_1913;

								{	/* Inline/simple.scm 15 */

									{	/* Inline/simple.scm 15 */
										obj_t BgL_locationz00_1915;

										BgL_locationz00_1915 = BBOOL(((bool_t) 0));
										{	/* Inline/simple.scm 15 */

											BgL_arg1801z00_1913 =
												BGl_readz00zz__readerz00(BgL_cportz00_1909,
												BgL_locationz00_1915);
										}
									}
								}
								{	/* Inline/simple.scm 15 */
									int BgL_tmpz00_1949;

									BgL_tmpz00_1949 = (int) (BgL_iz00_1910);
									CNST_TABLE_SET(BgL_tmpz00_1949, BgL_arg1801z00_1913);
							}}
							{	/* Inline/simple.scm 15 */
								int BgL_auxz00_1916;

								BgL_auxz00_1916 = (int) ((BgL_iz00_1910 - ((long) 1)));
								{
									long BgL_iz00_1954;

									BgL_iz00_1954 = (long) (BgL_auxz00_1916);
									BgL_iz00_1910 = BgL_iz00_1954;
									goto BgL_loopz00_1911;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* inline-app-simple */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt
		BgL_nodez00_3, long BgL_kfactorz00_4, obj_t BgL_stackz00_5,
		obj_t BgL_msgz00_6)
	{
		{	/* Inline/simple.scm 43 */
			{	/* Inline/simple.scm 45 */
				BgL_variablez00_bglt BgL_calleez00_1416;

				BgL_calleez00_1416 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Inline/simple.scm 45 */
					BgL_valuez00_bglt BgL_sfunz00_1417;

					BgL_sfunz00_1417 =
						(((BgL_variablez00_bglt) COBJECT(BgL_calleez00_1416))->
						BgL_valuez00);
					{	/* Inline/simple.scm 46 */
						obj_t BgL_formalsz00_1418;

						BgL_formalsz00_1418 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_sfunz00_1417)))->BgL_argsz00);
						{	/* Inline/simple.scm 47 */
							obj_t BgL_actualsz00_1419;

							BgL_actualsz00_1419 =
								(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_3)))->BgL_argsz00);
							{	/* Inline/simple.scm 48 */
								obj_t BgL_reductorsz00_1420;

								if (NULLP(BgL_formalsz00_1418))
									{	/* Inline/simple.scm 49 */
										BgL_reductorsz00_1420 = BNIL;
									}
								else
									{	/* Inline/simple.scm 49 */
										obj_t BgL_head1246z00_1534;

										{	/* Inline/simple.scm 49 */
											obj_t BgL_res1773z00_1806;

											BgL_res1773z00_1806 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1246z00_1534 = BgL_res1773z00_1806;
										}
										{
											obj_t BgL_ll1244z00_1536;
											obj_t BgL_ll1245z00_1537;
											obj_t BgL_tail1247z00_1538;

											BgL_ll1244z00_1536 = BgL_formalsz00_1418;
											BgL_ll1245z00_1537 = BgL_actualsz00_1419;
											BgL_tail1247z00_1538 = BgL_head1246z00_1534;
										BgL_zc3z04anonymousza31366ze3z87_1539:
											if (NULLP(BgL_ll1244z00_1536))
												{	/* Inline/simple.scm 49 */
													BgL_reductorsz00_1420 = CDR(BgL_head1246z00_1534);
												}
											else
												{	/* Inline/simple.scm 49 */
													obj_t BgL_newtail1248z00_1541;

													{	/* Inline/simple.scm 49 */
														obj_t BgL_arg1372z00_1544;

														{	/* Inline/simple.scm 49 */
															obj_t BgL_fz00_1545;
															obj_t BgL_az00_1546;

															BgL_fz00_1545 = CAR(((obj_t) BgL_ll1244z00_1536));
															BgL_az00_1546 = CAR(((obj_t) BgL_ll1245z00_1537));
															{	/* Inline/simple.scm 51 */
																bool_t BgL_test1815z00_1975;

																if (BGl_isazf3zf3zz__objectz00(BgL_az00_1546,
																		BGl_closurez00zzast_nodez00))
																	{	/* Inline/simple.scm 51 */
																		if (
																			((((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									BgL_fz00_1545))))->
																					BgL_accessz00) ==
																				CNST_TABLE_REF(((long) 0))))
																			{	/* Inline/simple.scm 53 */
																				bool_t BgL__ortest_1107z00_1624;

																				{	/* Inline/simple.scm 53 */
																					BgL_typez00_bglt BgL_arg1613z00_1628;

																					BgL_arg1613z00_1628 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_fz00_1545))))->
																						BgL_typez00);
																					BgL__ortest_1107z00_1624 =
																						(((obj_t) BgL_arg1613z00_1628) ==
																						BGl_za2procedureza2z00zztype_cachez00);
																				}
																				if (BgL__ortest_1107z00_1624)
																					{	/* Inline/simple.scm 53 */
																						BgL_test1815z00_1975 =
																							BgL__ortest_1107z00_1624;
																					}
																				else
																					{	/* Inline/simple.scm 54 */
																						bool_t BgL__ortest_1108z00_1625;

																						{	/* Inline/simple.scm 54 */
																							BgL_typez00_bglt
																								BgL_arg1612z00_1627;
																							BgL_arg1612z00_1627 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_localz00_bglt)
																												BgL_fz00_1545))))->
																								BgL_typez00);
																							BgL__ortest_1108z00_1625 =
																								(((obj_t) BgL_arg1612z00_1627)
																								==
																								BGl_za2_za2z00zztype_cachez00);
																						}
																						if (BgL__ortest_1108z00_1625)
																							{	/* Inline/simple.scm 54 */
																								BgL_test1815z00_1975 =
																									BgL__ortest_1108z00_1625;
																							}
																						else
																							{	/* Inline/simple.scm 55 */
																								BgL_typez00_bglt
																									BgL_arg1611z00_1626;
																								BgL_arg1611z00_1626 =
																									(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_localz00_bglt)
																													BgL_fz00_1545))))->
																									BgL_typez00);
																								BgL_test1815z00_1975 =
																									(((obj_t) BgL_arg1611z00_1626)
																									==
																									BGl_za2objza2z00zztype_cachez00);
																							}
																					}
																			}
																		else
																			{	/* Inline/simple.scm 52 */
																				BgL_test1815z00_1975 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Inline/simple.scm 51 */
																		BgL_test1815z00_1975 = ((bool_t) 0);
																	}
																if (BgL_test1815z00_1975)
																	{	/* Inline/simple.scm 51 */
																		BgL_arg1372z00_1544 =
																			((obj_t)
																			(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							((BgL_closurez00_bglt)
																								BgL_az00_1546))))->
																				BgL_variablez00));
																	}
																else
																	{	/* Inline/simple.scm 61 */
																		bool_t BgL_test1823z00_2005;

																		if (
																			((((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									BgL_fz00_1545))))->
																					BgL_accessz00) ==
																				CNST_TABLE_REF(((long) 0))))
																			{	/* Inline/simple.scm 62 */
																				bool_t BgL_test1825z00_2012;

																				{	/* Inline/simple.scm 62 */
																					bool_t BgL_test1826z00_2013;

																					{	/* Inline/simple.scm 62 */
																						BgL_typez00_bglt
																							BgL_arg1605z00_1620;
																						BgL_arg1605z00_1620 =
																							(((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										((BgL_localz00_bglt)
																											BgL_fz00_1545))))->
																							BgL_typez00);
																						BgL_test1826z00_2013 =
																							(((obj_t) BgL_arg1605z00_1620) ==
																							BGl_za2objza2z00zztype_cachez00);
																					}
																					if (BgL_test1826z00_2013)
																						{	/* Inline/simple.scm 62 */
																							BgL_test1825z00_2012 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Inline/simple.scm 63 */
																							BgL_typez00_bglt
																								BgL_arg1604z00_1619;
																							BgL_arg1604z00_1619 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_localz00_bglt)
																												BgL_fz00_1545))))->
																								BgL_typez00);
																							BgL_test1825z00_2012 =
																								(((obj_t) BgL_arg1604z00_1619)
																								==
																								BGl_za2_za2z00zztype_cachez00);
																						}
																				}
																				if (BgL_test1825z00_2012)
																					{	/* Inline/simple.scm 62 */
																						BgL_test1823z00_2005 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_az00_1546,
																							BGl_atomz00zzast_nodez00);
																					}
																				else
																					{	/* Inline/simple.scm 62 */
																						BgL_test1823z00_2005 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Inline/simple.scm 61 */
																				BgL_test1823z00_2005 = ((bool_t) 0);
																			}
																		if (BgL_test1823z00_2005)
																			{	/* Inline/simple.scm 61 */
																				BgL_arg1372z00_1544 = BgL_az00_1546;
																			}
																		else
																			{	/* Inline/simple.scm 66 */
																				bool_t BgL_test1827z00_2025;

																				if (
																					((((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										((BgL_localz00_bglt)
																											BgL_fz00_1545))))->
																							BgL_accessz00) ==
																						CNST_TABLE_REF(((long) 0))))
																					{	/* Inline/simple.scm 67 */
																						bool_t BgL_test1829z00_2032;

																						{	/* Inline/simple.scm 67 */
																							bool_t BgL_test1830z00_2033;

																							{	/* Inline/simple.scm 67 */
																								BgL_typez00_bglt
																									BgL_arg1597z00_1614;
																								BgL_arg1597z00_1614 =
																									(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_localz00_bglt)
																													BgL_fz00_1545))))->
																									BgL_typez00);
																								BgL_test1830z00_2033 =
																									(((obj_t) BgL_arg1597z00_1614)
																									==
																									BGl_za2objza2z00zztype_cachez00);
																							}
																							if (BgL_test1830z00_2033)
																								{	/* Inline/simple.scm 67 */
																									BgL_test1829z00_2032 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Inline/simple.scm 68 */
																									BgL_typez00_bglt
																										BgL_arg1593z00_1613;
																									BgL_arg1593z00_1613 =
																										(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													((BgL_localz00_bglt)
																														BgL_fz00_1545))))->
																										BgL_typez00);
																									BgL_test1829z00_2032 =
																										(((obj_t)
																											BgL_arg1593z00_1613) ==
																										BGl_za2_za2z00zztype_cachez00);
																								}
																						}
																						if (BgL_test1829z00_2032)
																							{	/* Inline/simple.scm 67 */
																								if (BGl_isazf3zf3zz__objectz00
																									(BgL_az00_1546,
																										BGl_varz00zzast_nodez00))
																									{	/* Inline/simple.scm 69 */
																										BgL_test1827z00_2025 =
																											(
																											(((BgL_variablez00_bglt)
																													COBJECT(((
																																(BgL_varz00_bglt)
																																COBJECT((
																																		(BgL_varz00_bglt)
																																		BgL_az00_1546)))->
																															BgL_variablez00)))->
																												BgL_accessz00) ==
																											CNST_TABLE_REF(((long)
																													0)));
																									}
																								else
																									{	/* Inline/simple.scm 69 */
																										BgL_test1827z00_2025 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Inline/simple.scm 67 */
																								BgL_test1827z00_2025 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Inline/simple.scm 66 */
																						BgL_test1827z00_2025 = ((bool_t) 0);
																					}
																				if (BgL_test1827z00_2025)
																					{	/* Inline/simple.scm 66 */
																						BgL_arg1372z00_1544 =
																							((obj_t)
																							(((BgL_varz00_bglt) COBJECT(
																										((BgL_varz00_bglt)
																											BgL_az00_1546)))->
																								BgL_variablez00));
																					}
																				else
																					{	/* Inline/simple.scm 73 */
																						bool_t BgL_test1832z00_2054;

																						if (
																							((((BgL_variablez00_bglt) COBJECT(
																											((BgL_variablez00_bglt)
																												((BgL_localz00_bglt)
																													BgL_fz00_1545))))->
																									BgL_accessz00) ==
																								CNST_TABLE_REF(((long) 0))))
																							{	/* Inline/simple.scm 74 */
																								bool_t BgL_test1834z00_2061;

																								{	/* Inline/simple.scm 74 */
																									bool_t
																										BgL__ortest_1111z00_1603;
																									{	/* Inline/simple.scm 74 */
																										BgL_typez00_bglt
																											BgL_arg1584z00_1605;
																										BgL_arg1584z00_1605 =
																											(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_fz00_1545))))->
																											BgL_typez00);
																										BgL__ortest_1111z00_1603 =
																											(((obj_t)
																												BgL_arg1584z00_1605) ==
																											BGl_za2intza2z00zztype_cachez00);
																									}
																									if (BgL__ortest_1111z00_1603)
																										{	/* Inline/simple.scm 74 */
																											BgL_test1834z00_2061 =
																												BgL__ortest_1111z00_1603;
																										}
																									else
																										{	/* Inline/simple.scm 75 */
																											BgL_typez00_bglt
																												BgL_arg1582z00_1604;
																											BgL_arg1582z00_1604 =
																												(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_localz00_bglt) BgL_fz00_1545))))->BgL_typez00);
																											BgL_test1834z00_2061 =
																												(((obj_t)
																													BgL_arg1582z00_1604)
																												==
																												BGl_za2longza2z00zztype_cachez00);
																										}
																								}
																								if (BgL_test1834z00_2061)
																									{	/* Inline/simple.scm 74 */
																										if (BGl_isazf3zf3zz__objectz00(BgL_az00_1546, BGl_atomz00zzast_nodez00))
																											{	/* Inline/simple.scm 76 */
																												BgL_test1832z00_2054 =
																													INTEGERP(
																													(((BgL_atomz00_bglt)
																															COBJECT((
																																	(BgL_atomz00_bglt)
																																	BgL_az00_1546)))->
																														BgL_valuez00));
																											}
																										else
																											{	/* Inline/simple.scm 76 */
																												BgL_test1832z00_2054 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Inline/simple.scm 74 */
																										BgL_test1832z00_2054 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Inline/simple.scm 73 */
																								BgL_test1832z00_2054 =
																									((bool_t) 0);
																							}
																						if (BgL_test1832z00_2054)
																							{	/* Inline/simple.scm 73 */
																								BgL_arg1372z00_1544 =
																									BgL_az00_1546;
																							}
																						else
																							{	/* Inline/simple.scm 82 */
																								BgL_svarz00_bglt
																									BgL_arg1573z00_1594;
																								{	/* Inline/simple.scm 82 */
																									BgL_svarz00_bglt
																										BgL_duplicated1114z00_1595;
																									BgL_svarz00_bglt
																										BgL_new1112z00_1596;
																									BgL_duplicated1114z00_1595 =
																										((BgL_svarz00_bglt) ((
																												(BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_fz00_1545))))->
																											BgL_valuez00));
																									{	/* Inline/simple.scm 82 */
																										BgL_svarz00_bglt
																											BgL_new1116z00_1597;
																										BgL_new1116z00_1597 =
																											((BgL_svarz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_svarz00_bgl))));
																										{	/* Inline/simple.scm 82 */
																											long BgL_arg1575z00_1598;

																											{	/* Inline/simple.scm 82 */
																												long
																													BgL_res1780z00_1836;
																												BgL_res1780z00_1836 =
																													BGL_CLASS_INDEX
																													(BGl_svarz00zzast_varz00);
																												BgL_arg1575z00_1598 =
																													BgL_res1780z00_1836;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1116z00_1597),
																												BgL_arg1575z00_1598);
																										}
																										{	/* Inline/simple.scm 82 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_2086;
																											BgL_tmpz00_2086 =
																												((BgL_objectz00_bglt)
																												BgL_new1116z00_1597);
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_2086,
																												BFALSE);
																										}
																										((BgL_objectz00_bglt)
																											BgL_new1116z00_1597);
																										BgL_new1112z00_1596 =
																											BgL_new1116z00_1597;
																									}
																									((((BgL_svarz00_bglt)
																												COBJECT
																												(BgL_new1112z00_1596))->
																											BgL_locz00) =
																										((obj_t) ((
																													(BgL_svarz00_bglt)
																													COBJECT
																													(BgL_duplicated1114z00_1595))->
																												BgL_locz00)), BUNSPEC);
																									BgL_arg1573z00_1594 =
																										BgL_new1112z00_1596;
																								}
																								BgL_arg1372z00_1544 =
																									((obj_t)
																									BGl_clonezd2localzd2zzast_localz00
																									(((BgL_localz00_bglt)
																											BgL_fz00_1545),
																										((BgL_valuez00_bglt)
																											BgL_arg1573z00_1594)));
														}}}}}}
														{	/* Inline/simple.scm 49 */
															obj_t BgL_res1781z00_1840;

															BgL_res1781z00_1840 =
																MAKE_YOUNG_PAIR(BgL_arg1372z00_1544, BNIL);
															BgL_newtail1248z00_1541 = BgL_res1781z00_1840;
													}}
													SET_CDR(BgL_tail1247z00_1538,
														BgL_newtail1248z00_1541);
													{	/* Inline/simple.scm 49 */
														obj_t BgL_arg1370z00_1542;
														obj_t BgL_arg1371z00_1543;

														BgL_arg1370z00_1542 =
															CDR(((obj_t) BgL_ll1244z00_1536));
														BgL_arg1371z00_1543 =
															CDR(((obj_t) BgL_ll1245z00_1537));
														{
															obj_t BgL_tail1247z00_2104;
															obj_t BgL_ll1245z00_2103;
															obj_t BgL_ll1244z00_2102;

															BgL_ll1244z00_2102 = BgL_arg1370z00_1542;
															BgL_ll1245z00_2103 = BgL_arg1371z00_1543;
															BgL_tail1247z00_2104 = BgL_newtail1248z00_1541;
															BgL_tail1247z00_1538 = BgL_tail1247z00_2104;
															BgL_ll1245z00_1537 = BgL_ll1245z00_2103;
															BgL_ll1244z00_1536 = BgL_ll1244z00_2102;
															goto BgL_zc3z04anonymousza31366ze3z87_1539;
														}
													}
												}
										}
									}
								{	/* Inline/simple.scm 49 */
									obj_t BgL_bindingsz00_1421;

									{
										obj_t BgL_reductorsz00_1484;
										obj_t BgL_actualsz00_1485;
										obj_t BgL_resz00_1486;

										BgL_reductorsz00_1484 = BgL_reductorsz00_1420;
										BgL_actualsz00_1485 = BgL_actualsz00_1419;
										BgL_resz00_1486 = BNIL;
									BgL_zc3z04anonymousza31306ze3z87_1487:
										if (NULLP(BgL_actualsz00_1485))
											{	/* Inline/simple.scm 89 */
												BgL_bindingsz00_1421 =
													bgl_reverse_bang(BgL_resz00_1486);
											}
										else
											{	/* Inline/simple.scm 91 */
												bool_t BgL_test1838z00_2108;

												{	/* Inline/simple.scm 91 */
													bool_t BgL_test1839z00_2109;

													{	/* Inline/simple.scm 91 */
														obj_t BgL_arg1364z00_1529;

														BgL_arg1364z00_1529 =
															CAR(((obj_t) BgL_actualsz00_1485));
														BgL_test1839z00_2109 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1364z00_1529,
															BGl_closurez00zzast_nodez00);
													}
													if (BgL_test1839z00_2109)
														{	/* Inline/simple.scm 91 */
															BgL_test1838z00_2108 =
																(CAR(
																	((obj_t) BgL_reductorsz00_1484)) ==
																((obj_t)
																	(((BgL_varz00_bglt) COBJECT(
																				((BgL_varz00_bglt)
																					((BgL_closurez00_bglt)
																						CAR(
																							((obj_t)
																								BgL_actualsz00_1485))))))->
																		BgL_variablez00)));
														}
													else
														{	/* Inline/simple.scm 91 */
															BgL_test1838z00_2108 = ((bool_t) 0);
														}
												}
												if (BgL_test1838z00_2108)
													{	/* Inline/simple.scm 94 */
														obj_t BgL_arg1316z00_1496;
														obj_t BgL_arg1317z00_1497;

														BgL_arg1316z00_1496 =
															CDR(((obj_t) BgL_reductorsz00_1484));
														BgL_arg1317z00_1497 =
															CDR(((obj_t) BgL_actualsz00_1485));
														{
															obj_t BgL_actualsz00_2127;
															obj_t BgL_reductorsz00_2126;

															BgL_reductorsz00_2126 = BgL_arg1316z00_1496;
															BgL_actualsz00_2127 = BgL_arg1317z00_1497;
															BgL_actualsz00_1485 = BgL_actualsz00_2127;
															BgL_reductorsz00_1484 = BgL_reductorsz00_2126;
															goto BgL_zc3z04anonymousza31306ze3z87_1487;
														}
													}
												else
													{	/* Inline/simple.scm 91 */
														if (
															(CAR(
																	((obj_t) BgL_reductorsz00_1484)) ==
																CAR(((obj_t) BgL_actualsz00_1485))))
															{	/* Inline/simple.scm 98 */
																obj_t BgL_arg1324z00_1501;
																obj_t BgL_arg1325z00_1502;

																BgL_arg1324z00_1501 =
																	CDR(((obj_t) BgL_reductorsz00_1484));
																BgL_arg1325z00_1502 =
																	CDR(((obj_t) BgL_actualsz00_1485));
																{
																	obj_t BgL_actualsz00_2139;
																	obj_t BgL_reductorsz00_2138;

																	BgL_reductorsz00_2138 = BgL_arg1324z00_1501;
																	BgL_actualsz00_2139 = BgL_arg1325z00_1502;
																	BgL_actualsz00_1485 = BgL_actualsz00_2139;
																	BgL_reductorsz00_1484 = BgL_reductorsz00_2138;
																	goto BgL_zc3z04anonymousza31306ze3z87_1487;
																}
															}
														else
															{	/* Inline/simple.scm 101 */
																bool_t BgL_test1841z00_2140;

																{	/* Inline/simple.scm 101 */
																	bool_t BgL_test1842z00_2141;

																	{	/* Inline/simple.scm 101 */
																		obj_t BgL_arg1351z00_1522;

																		BgL_arg1351z00_1522 =
																			CAR(((obj_t) BgL_actualsz00_1485));
																		BgL_test1842z00_2141 =
																			BGl_isazf3zf3zz__objectz00
																			(BgL_arg1351z00_1522,
																			BGl_varz00zzast_nodez00);
																	}
																	if (BgL_test1842z00_2141)
																		{	/* Inline/simple.scm 101 */
																			BgL_test1841z00_2140 =
																				(CAR(
																					((obj_t) BgL_reductorsz00_1484)) ==
																				((obj_t)
																					(((BgL_varz00_bglt) COBJECT(
																								((BgL_varz00_bglt)
																									CAR(
																										((obj_t)
																											BgL_actualsz00_1485)))))->
																						BgL_variablez00)));
																		}
																	else
																		{	/* Inline/simple.scm 101 */
																			BgL_test1841z00_2140 = ((bool_t) 0);
																		}
																}
																if (BgL_test1841z00_2140)
																	{	/* Inline/simple.scm 103 */
																		obj_t BgL_arg1334z00_1510;
																		obj_t BgL_arg1335z00_1511;

																		BgL_arg1334z00_1510 =
																			CDR(((obj_t) BgL_reductorsz00_1484));
																		BgL_arg1335z00_1511 =
																			CDR(((obj_t) BgL_actualsz00_1485));
																		{
																			obj_t BgL_actualsz00_2158;
																			obj_t BgL_reductorsz00_2157;

																			BgL_reductorsz00_2157 =
																				BgL_arg1334z00_1510;
																			BgL_actualsz00_2158 = BgL_arg1335z00_1511;
																			BgL_actualsz00_1485 = BgL_actualsz00_2158;
																			BgL_reductorsz00_1484 =
																				BgL_reductorsz00_2157;
																			goto
																				BgL_zc3z04anonymousza31306ze3z87_1487;
																		}
																	}
																else
																	{	/* Inline/simple.scm 107 */
																		obj_t BgL_arg1337z00_1512;
																		obj_t BgL_arg1338z00_1513;
																		obj_t BgL_arg1339z00_1514;

																		BgL_arg1337z00_1512 =
																			CDR(((obj_t) BgL_reductorsz00_1484));
																		BgL_arg1338z00_1513 =
																			CDR(((obj_t) BgL_actualsz00_1485));
																		{	/* Inline/simple.scm 109 */
																			obj_t BgL_arg1340z00_1515;

																			{	/* Inline/simple.scm 109 */
																				obj_t BgL_arg1344z00_1516;
																				obj_t BgL_arg1345z00_1517;

																				BgL_arg1344z00_1516 =
																					CAR(((obj_t) BgL_reductorsz00_1484));
																				BgL_arg1345z00_1517 =
																					CAR(((obj_t) BgL_actualsz00_1485));
																				BgL_arg1340z00_1515 =
																					MAKE_YOUNG_PAIR(BgL_arg1344z00_1516,
																					BgL_arg1345z00_1517);
																			}
																			BgL_arg1339z00_1514 =
																				MAKE_YOUNG_PAIR(BgL_arg1340z00_1515,
																				BgL_resz00_1486);
																		}
																		{
																			obj_t BgL_resz00_2171;
																			obj_t BgL_actualsz00_2170;
																			obj_t BgL_reductorsz00_2169;

																			BgL_reductorsz00_2169 =
																				BgL_arg1337z00_1512;
																			BgL_actualsz00_2170 = BgL_arg1338z00_1513;
																			BgL_resz00_2171 = BgL_arg1339z00_1514;
																			BgL_resz00_1486 = BgL_resz00_2171;
																			BgL_actualsz00_1485 = BgL_actualsz00_2170;
																			BgL_reductorsz00_1484 =
																				BgL_reductorsz00_2169;
																			goto
																				BgL_zc3z04anonymousza31306ze3z87_1487;
																		}
																	}
															}
													}
											}
									}
									{	/* Inline/simple.scm 85 */
										obj_t BgL_bodyz00_1422;

										{	/* Inline/simple.scm 112 */
											bool_t BgL_test1843z00_2172;

											{	/* Inline/simple.scm 112 */
												bool_t BgL_res1785z00_1867;

												BgL_res1785z00_1867 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_sfunz00_1417),
													BGl_isfunz00zzinline_inlinez00);
												BgL_test1843z00_2172 = BgL_res1785z00_1867;
											}
											if (BgL_test1843z00_2172)
												{
													BgL_nodez00_bglt BgL_auxz00_2175;

													{
														BgL_isfunz00_bglt BgL_auxz00_2176;

														{
															obj_t BgL_auxz00_2177;

															{	/* Inline/simple.scm 113 */
																BgL_objectz00_bglt BgL_tmpz00_2178;

																BgL_tmpz00_2178 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_sfunz00_1417));
																BgL_auxz00_2177 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2178);
															}
															BgL_auxz00_2176 =
																((BgL_isfunz00_bglt) BgL_auxz00_2177);
														}
														BgL_auxz00_2175 =
															(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2176))->
															BgL_originalzd2bodyzd2);
													}
													BgL_bodyz00_1422 = ((obj_t) BgL_auxz00_2175);
												}
											else
												{	/* Inline/simple.scm 112 */
													BgL_bodyz00_1422 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_sfunz00_1417)))->
														BgL_bodyz00);
												}
										}
										{	/* Inline/simple.scm 115 */
											obj_t BgL_newzd2kfactorzd2_1424;

											BgL_newzd2kfactorzd2_1424 =
												PROCEDURE_ENTRY
												(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)
												(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00,
												BINT(BgL_kfactorz00_4), BEOA);
											{	/* Inline/simple.scm 116 */
												obj_t BgL_locz00_1425;

												BgL_locz00_1425 =
													(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_3))->
													BgL_locz00);
												{	/* Inline/simple.scm 117 */
													BgL_typez00_bglt BgL_typez00_1426;

													BgL_typez00_1426 =
														(((BgL_variablez00_bglt)
															COBJECT(BgL_calleez00_1416))->BgL_typez00);
													{	/* Inline/simple.scm 118 */

														((((BgL_variablez00_bglt)
																	COBJECT(BgL_calleez00_1416))->
																BgL_occurrencez00) =
															((long) ((((BgL_variablez00_bglt)
																			COBJECT(BgL_calleez00_1416))->
																		BgL_occurrencez00) - ((long) 1))), BUNSPEC);
														if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00((
																		((BgL_sfunz00_bglt)
																			COBJECT(((BgL_sfunz00_bglt)
																					BgL_sfunz00_1417)))->BgL_classz00),
																	CNST_TABLE_REF(((long) 1)))))
															{	/* Inline/simple.scm 122 */
																BFALSE;
															}
														else
															{	/* Inline/simple.scm 122 */
																if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT((
																				(long) 3)),
																		BGl_za2verboseza2z00zzengine_paramz00))
																	{	/* Inline/simple.scm 124 */
																		obj_t BgL_arg1268z00_1433;
																		obj_t BgL_arg1270z00_1434;

																		BgL_arg1268z00_1433 =
																			BGl_shapez00zztools_shapez00(
																			((obj_t) BgL_calleez00_1416));
																		BgL_arg1270z00_1434 =
																			BGl_currentzd2functionzd2zztools_errorz00
																			();
																		{	/* Inline/simple.scm 123 */
																			obj_t BgL_list1271z00_1435;

																			{	/* Inline/simple.scm 123 */
																				obj_t BgL_arg1273z00_1436;

																				{	/* Inline/simple.scm 123 */
																					obj_t BgL_arg1274z00_1437;

																					{	/* Inline/simple.scm 123 */
																						obj_t BgL_arg1275z00_1438;

																						{	/* Inline/simple.scm 123 */
																							obj_t BgL_arg1276z00_1439;

																							{	/* Inline/simple.scm 123 */
																								obj_t BgL_arg1277z00_1440;

																								{	/* Inline/simple.scm 123 */
																									obj_t BgL_arg1280z00_1441;

																									{	/* Inline/simple.scm 123 */
																										obj_t BgL_arg1281z00_1442;

																										BgL_arg1281z00_1442 =
																											MAKE_YOUNG_PAIR(BCHAR((
																													(unsigned char) 10)),
																											BNIL);
																										BgL_arg1280z00_1441 =
																											MAKE_YOUNG_PAIR(BCHAR((
																													(unsigned char) ')')),
																											BgL_arg1281z00_1442);
																									}
																									BgL_arg1277z00_1440 =
																										MAKE_YOUNG_PAIR
																										(BgL_msgz00_6,
																										BgL_arg1280z00_1441);
																								}
																								BgL_arg1276z00_1439 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1793z00zzinline_simplez00,
																									BgL_arg1277z00_1440);
																							}
																							BgL_arg1275z00_1438 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1270z00_1434,
																								BgL_arg1276z00_1439);
																						}
																						BgL_arg1274z00_1437 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1794z00zzinline_simplez00,
																							BgL_arg1275z00_1438);
																					}
																					BgL_arg1273z00_1436 =
																						MAKE_YOUNG_PAIR(BgL_arg1268z00_1433,
																						BgL_arg1274z00_1437);
																				}
																				BgL_list1271z00_1435 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1795z00zzinline_simplez00,
																					BgL_arg1273z00_1436);
																			}
																			BGl_verbosez00zztools_speekz00(BINT((
																						(long) 3)), BgL_list1271z00_1435);
																	}}
																else
																	{	/* Inline/simple.scm 123 */
																		BUNSPEC;
																	}
															}
														{	/* Inline/simple.scm 130 */
															BgL_nodez00_bglt BgL_alphazd2bodyzd2_1444;

															BgL_alphazd2bodyzd2_1444 =
																BGl_alphatiza7eza7zzast_alphatiza7eza7
																(BgL_formalsz00_1418, BgL_reductorsz00_1420,
																BgL_locz00_1425,
																((BgL_nodez00_bglt) BgL_bodyz00_1422));
															{	/* Inline/simple.scm 130 */

																BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00
																	(BgL_alphazd2bodyzd2_1444);
																{	/* Inline/simple.scm 134 */
																	BgL_nodez00_bglt BgL_inodez00_1445;

																	{	/* Inline/simple.scm 134 */
																		obj_t BgL_arg1304z00_1480;

																		BgL_arg1304z00_1480 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_calleez00_1416),
																			BgL_stackz00_5);
																		BgL_inodez00_1445 =
																			BGl_inlinezd2nodezd2zzinline_inlinez00
																			(BgL_alphazd2bodyzd2_1444,
																			(long) CINT(BgL_newzd2kfactorzd2_1424),
																			BgL_arg1304z00_1480);
																	}
																	{	/* Inline/simple.scm 134 */
																		BgL_letzd2varzd2_bglt BgL_ibodyz00_1446;

																		{	/* Inline/simple.scm 135 */
																			BgL_letzd2varzd2_bglt BgL_new1121z00_1476;

																			{	/* Inline/simple.scm 136 */
																				BgL_letzd2varzd2_bglt
																					BgL_new1120z00_1478;
																				BgL_new1120z00_1478 =
																					((BgL_letzd2varzd2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_letzd2varzd2_bgl))));
																				{	/* Inline/simple.scm 136 */
																					long BgL_arg1303z00_1479;

																					{	/* Inline/simple.scm 136 */
																						long BgL_res1787z00_1878;

																						BgL_res1787z00_1878 =
																							BGL_CLASS_INDEX
																							(BGl_letzd2varzd2zzast_nodez00);
																						BgL_arg1303z00_1479 =
																							BgL_res1787z00_1878;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1120z00_1478),
																						BgL_arg1303z00_1479);
																				}
																				{	/* Inline/simple.scm 136 */
																					BgL_objectz00_bglt BgL_tmpz00_2232;

																					BgL_tmpz00_2232 =
																						((BgL_objectz00_bglt)
																						BgL_new1120z00_1478);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_2232, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1120z00_1478);
																				BgL_new1121z00_1476 =
																					BgL_new1120z00_1478;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1121z00_1476)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_1425), BUNSPEC);
																			{
																				BgL_typez00_bglt BgL_auxz00_2238;

																				{	/* Inline/simple.scm 138 */
																					BgL_typez00_bglt BgL_arg1301z00_1477;

																					BgL_arg1301z00_1477 =
																						(((BgL_nodez00_bglt)
																							COBJECT(BgL_inodez00_1445))->
																						BgL_typez00);
																					BgL_auxz00_2238 =
																						BGl_strictzd2nodezd2typez00zzast_nodez00
																						(BgL_arg1301z00_1477,
																						BgL_typez00_1426);
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1121z00_1476)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) BgL_auxz00_2238),
																					BUNSPEC);
																			}
																			((((BgL_nodezf2effectzf2_bglt) COBJECT(
																							((BgL_nodezf2effectzf2_bglt)
																								BgL_new1121z00_1476)))->
																					BgL_sidezd2effectzd2) =
																				((obj_t)
																					BBOOL
																					(BGl_sidezd2effectzf3z21zzeffect_effectz00
																						(BgL_alphazd2bodyzd2_1444))),
																				BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1121z00_1476)))->
																					BgL_keyz00) =
																				((obj_t) BINT(((long) -1))), BUNSPEC);
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1121z00_1476))->
																					BgL_bindingsz00) =
																				((obj_t) BgL_bindingsz00_1421),
																				BUNSPEC);
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1121z00_1476))->
																					BgL_bodyz00) =
																				((BgL_nodez00_bglt) BgL_inodez00_1445),
																				BUNSPEC);
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1121z00_1476))->
																					BgL_removablezf3zf3) =
																				((bool_t) ((bool_t) 1)), BUNSPEC);
																			BgL_ibodyz00_1446 = BgL_new1121z00_1476;
																		}
																		{	/* Inline/simple.scm 135 */

																			{
																				obj_t BgL_ll1250z00_1448;
																				obj_t BgL_ll1251z00_1449;

																				BgL_ll1250z00_1448 =
																					BgL_reductorsz00_1420;
																				BgL_ll1251z00_1449 =
																					BgL_formalsz00_1418;
																			BgL_zc3z04anonymousza31283ze3z87_1450:
																				if (NULLP(BgL_ll1250z00_1448))
																					{	/* Inline/simple.scm 142 */
																						((bool_t) 1);
																					}
																				else
																					{	/* Inline/simple.scm 142 */
																						{	/* Inline/simple.scm 143 */
																							obj_t BgL_reductorz00_1452;
																							obj_t BgL_formalz00_1453;

																							BgL_reductorz00_1452 =
																								CAR(
																								((obj_t) BgL_ll1250z00_1448));
																							BgL_formalz00_1453 =
																								CAR(
																								((obj_t) BgL_ll1251z00_1449));
																							if (BGl_isazf3zf3zz__objectz00
																								(BgL_reductorz00_1452,
																									BGl_localz00zzast_varz00))
																								{	/* Inline/simple.scm 144 */
																									bool_t BgL_arg1286z00_1455;

																									BgL_arg1286z00_1455 =
																										(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													((BgL_localz00_bglt)
																														BgL_formalz00_1453))))->
																										BgL_userzf3zf3);
																									((((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_reductorz00_1452))))->
																											BgL_userzf3zf3) =
																										((bool_t)
																											BgL_arg1286z00_1455),
																										BUNSPEC);
																								}
																							else
																								{	/* Inline/simple.scm 143 */
																									BFALSE;
																								}
																						}
																						{	/* Inline/simple.scm 142 */
																							obj_t BgL_arg1287z00_1456;
																							obj_t BgL_arg1288z00_1457;

																							BgL_arg1287z00_1456 =
																								CDR(
																								((obj_t) BgL_ll1250z00_1448));
																							BgL_arg1288z00_1457 =
																								CDR(
																								((obj_t) BgL_ll1251z00_1449));
																							{
																								obj_t BgL_ll1251z00_2272;
																								obj_t BgL_ll1250z00_2271;

																								BgL_ll1250z00_2271 =
																									BgL_arg1287z00_1456;
																								BgL_ll1251z00_2272 =
																									BgL_arg1288z00_1457;
																								BgL_ll1251z00_1449 =
																									BgL_ll1251z00_2272;
																								BgL_ll1250z00_1448 =
																									BgL_ll1250z00_2271;
																								goto
																									BgL_zc3z04anonymousza31283ze3z87_1450;
																							}
																						}
																					}
																			}
																			{	/* Inline/simple.scm 151 */
																				bool_t BgL_test1848z00_2273;

																				if (
																					(((obj_t) BgL_typez00_1426) ==
																						BGl_za2_za2z00zztype_cachez00))
																					{	/* Inline/simple.scm 151 */
																						BgL_test1848z00_2273 = ((bool_t) 1);
																					}
																				else
																					{	/* Inline/simple.scm 151 */
																						if (
																							(((obj_t) BgL_typez00_1426) ==
																								BGl_za2objza2z00zztype_cachez00))
																							{	/* Inline/simple.scm 152 */
																								BgL_test1848z00_2273 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Inline/simple.scm 152 */
																								BgL_test1848z00_2273 =
																									(
																									((obj_t) BgL_typez00_1426) ==
																									((obj_t)
																										(((BgL_nodez00_bglt)
																												COBJECT
																												(BgL_alphazd2bodyzd2_1444))->
																											BgL_typez00)));
																							}
																					}
																				if (BgL_test1848z00_2273)
																					{	/* Inline/simple.scm 151 */
																						return
																							((BgL_nodez00_bglt)
																							BgL_ibodyz00_1446);
																					}
																				else
																					{	/* Inline/simple.scm 155 */
																						BgL_localz00_bglt BgL_varz00_1463;

																						BgL_varz00_1463 =
																							BGl_makezd2localzd2svarz00zzast_localz00
																							(BGl_gensymz00zz__r4_symbols_6_4z00
																							(CNST_TABLE_REF(((long) 2))),
																							BgL_typez00_1426);
																						{	/* Inline/simple.scm 156 */
																							BgL_letzd2varzd2_bglt
																								BgL_new1123z00_1464;
																							{	/* Inline/simple.scm 157 */
																								BgL_letzd2varzd2_bglt
																									BgL_new1122z00_1470;
																								BgL_new1122z00_1470 =
																									((BgL_letzd2varzd2_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_letzd2varzd2_bgl))));
																								{	/* Inline/simple.scm 157 */
																									long BgL_arg1298z00_1471;

																									{	/* Inline/simple.scm 157 */
																										long BgL_res1790z00_1894;

																										BgL_res1790z00_1894 =
																											BGL_CLASS_INDEX
																											(BGl_letzd2varzd2zzast_nodez00);
																										BgL_arg1298z00_1471 =
																											BgL_res1790z00_1894;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1122z00_1470),
																										BgL_arg1298z00_1471);
																								}
																								{	/* Inline/simple.scm 157 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_2292;
																									BgL_tmpz00_2292 =
																										((BgL_objectz00_bglt)
																										BgL_new1122z00_1470);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_2292, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1122z00_1470);
																								BgL_new1123z00_1464 =
																									BgL_new1122z00_1470;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1123z00_1464)))->
																									BgL_locz00) =
																								((obj_t) BgL_locz00_1425),
																								BUNSPEC);
																							((((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_new1123z00_1464)))->
																									BgL_typez00) =
																								((BgL_typez00_bglt)
																									BgL_typez00_1426), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1123z00_1464)))->
																									BgL_sidezd2effectzd2) =
																								((obj_t)
																									BBOOL
																									(BGl_sidezd2effectzf3z21zzeffect_effectz00
																										(((BgL_nodez00_bglt)
																												BgL_ibodyz00_1446)))),
																								BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1123z00_1464)))->
																									BgL_keyz00) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_2308;

																								{	/* Inline/simple.scm 160 */
																									obj_t BgL_arg1295z00_1465;

																									BgL_arg1295z00_1465 =
																										MAKE_YOUNG_PAIR(
																										((obj_t) BgL_varz00_1463),
																										((obj_t)
																											BgL_ibodyz00_1446));
																									{	/* Inline/simple.scm 160 */
																										obj_t BgL_list1296z00_1466;

																										BgL_list1296z00_1466 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1295z00_1465,
																											BNIL);
																										BgL_auxz00_2308 =
																											BgL_list1296z00_1466;
																								}}
																								((((BgL_letzd2varzd2_bglt)
																											COBJECT
																											(BgL_new1123z00_1464))->
																										BgL_bindingsz00) =
																									((obj_t) BgL_auxz00_2308),
																									BUNSPEC);
																							}
																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_2314;
																								{	/* Inline/simple.scm 161 */
																									BgL_varz00_bglt
																										BgL_new1126z00_1467;
																									{	/* Inline/simple.scm 162 */
																										BgL_varz00_bglt
																											BgL_new1125z00_1468;
																										BgL_new1125z00_1468 =
																											((BgL_varz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_varz00_bgl))));
																										{	/* Inline/simple.scm 162 */
																											long BgL_arg1297z00_1469;

																											{	/* Inline/simple.scm 162 */
																												long
																													BgL_res1792z00_1900;
																												{	/* Inline/simple.scm 162 */
																													obj_t
																														BgL_classz00_1899;
																													BgL_classz00_1899 =
																														BGl_varz00zzast_nodez00;
																													BgL_res1792z00_1900 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_1899);
																												}
																												BgL_arg1297z00_1469 =
																													BgL_res1792z00_1900;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1125z00_1468),
																												BgL_arg1297z00_1469);
																										}
																										BgL_new1126z00_1467 =
																											BgL_new1125z00_1468;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1126z00_1467)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_1425),
																										BUNSPEC);
																									((((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt)
																														BgL_new1126z00_1467)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BgL_typez00_1426),
																										BUNSPEC);
																									((((BgL_varz00_bglt)
																												COBJECT
																												(BgL_new1126z00_1467))->
																											BgL_variablez00) =
																										((BgL_variablez00_bglt) (
																												(BgL_variablez00_bglt)
																												BgL_varz00_1463)),
																										BUNSPEC);
																									BgL_auxz00_2314 =
																										((BgL_nodez00_bglt)
																										BgL_new1126z00_1467);
																								}
																								((((BgL_letzd2varzd2_bglt)
																											COBJECT
																											(BgL_new1123z00_1464))->
																										BgL_bodyz00) =
																									((BgL_nodez00_bglt)
																										BgL_auxz00_2314), BUNSPEC);
																							}
																							((((BgL_letzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1123z00_1464))->
																									BgL_removablezf3zf3) =
																								((bool_t) ((bool_t) 1)),
																								BUNSPEC);
																							return ((BgL_nodez00_bglt)
																								BgL_new1123z00_1464);
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
								}
							}
						}
					}
				}
			}
		}

	}



/* &inline-app-simple */
	BgL_nodez00_bglt BGl_z62inlinezd2appzd2simplez62zzinline_simplez00(obj_t
		BgL_envz00_1904, obj_t BgL_nodez00_1905, obj_t BgL_kfactorz00_1906,
		obj_t BgL_stackz00_1907, obj_t BgL_msgz00_1908)
	{
		{	/* Inline/simple.scm 43 */
			return
				BGl_inlinezd2appzd2simplez00zzinline_simplez00(
				((BgL_nodez00_bglt) BgL_nodez00_1905),
				(long) CINT(BgL_kfactorz00_1906), BgL_stackz00_1907, BgL_msgz00_1908);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_simplez00()
	{
		{	/* Inline/simple.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzinline_siza7eza7(((long) 243191759),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 53595756),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 348216754),
				BSTRING_TO_STRING(BGl_string1796z00zzinline_simplez00));
		}

	}

#ifdef __cplusplus
}
#endif
