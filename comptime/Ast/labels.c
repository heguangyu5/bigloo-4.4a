/*===========================================================================*/
/*   (Ast/labels.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/labels.scm) */
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

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;


	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_labelsz00();
	extern long BGl_localzd2arityzd2zztools_argsz00(obj_t);
	static BgL_letzd2funzd2_bglt BGl_z62labelszd2ze3nodez53zzast_labelsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	static obj_t BGl_appendzd221011zd2zzast_labelsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_labelsz00();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_allocatezd2sfunszd2zzast_labelsz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_labelsz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2labelsza2z00zzast_labelsz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzast_labelsz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzast_labelsz00();
	static obj_t BGl_labelszd2bindingzd2zzast_labelsz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_labelsz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t BGl_labelszd2symzd2zzast_labelsz00();
	BGL_EXPORTED_DECL obj_t BGl_labelszd2symzf3z21zzast_labelsz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62labelszd2symzb0zzast_labelsz00(obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62labelszd2symzf3z43zzast_labelsz00(obj_t, obj_t);
	extern bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzast_labelsz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_labelsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_labelsz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_labelszd2ze3nodez31zzast_labelsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2symzf3zd2envzf3zzast_labelsz00,
		BgL_bgl_za762labelsza7d2symza71594za7,
		BGl_z62labelszd2symzf3z43zzast_labelsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2ze3nodezd2envze3zzast_labelsz00,
		BgL_bgl_za762labelsza7d2za7e3n1595za7,
		BGl_z62labelszd2ze3nodez53zzast_labelsz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelszd2symzd2envz00zzast_labelsz00,
		BgL_bgl_za762labelsza7d2symza71596za7,
		BGl_z62labelszd2symzb0zzast_labelsz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1584z00zzast_labelsz00,
		BgL_bgl_string1584za700za7za7a1597za7, "Illegal `labels' expression", 27);
	      DEFINE_STRING(BGl_string1585z00zzast_labelsz00,
		BgL_bgl_string1585za700za7za7a1598za7, "Illegal `binding' form", 22);
	      DEFINE_STRING(BGl_string1586z00zzast_labelsz00,
		BgL_bgl_string1586za700za7za7a1599za7, "Illegal formal type", 19);
	      DEFINE_STRING(BGl_string1587z00zzast_labelsz00,
		BgL_bgl_string1587za700za7za7a1600za7, "Illegal `labels' form", 21);
	      DEFINE_STRING(BGl_string1588z00zzast_labelsz00,
		BgL_bgl_string1588za700za7za7a1601za7, "ast_labels", 10);
	      DEFINE_STRING(BGl_string1589z00zzast_labelsz00,
		BgL_bgl_string1589za700za7za7a1602za7, "value \077\077? plain labels ", 23);
	extern obj_t BGl_userzd2errorzd2envz00zztools_errorz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2labelsza2z00zzast_labelsz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_labelsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long
		BgL_checksumz00_1797, char *BgL_fromz00_1798)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_labelsz00))
				{
					BGl_requirezd2initializa7ationz75zzast_labelsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_labelsz00();
					BGl_libraryzd2moduleszd2initz00zzast_labelsz00();
					BGl_cnstzd2initzd2zzast_labelsz00();
					BGl_importedzd2moduleszd2initz00zzast_labelsz00();
					return BGl_toplevelzd2initzd2zzast_labelsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_labels");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_labels");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_labels");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			{	/* Ast/labels.scm 14 */
				obj_t BgL_cportz00_1784;

				{	/* Ast/labels.scm 14 */
					obj_t BgL_stringz00_1792;

					BgL_stringz00_1792 = BGl_string1589z00zzast_labelsz00;
					{	/* Ast/labels.scm 14 */
						obj_t BgL_startz00_1793;

						BgL_startz00_1793 = BINT(((long) 0));
						{	/* Ast/labels.scm 14 */
							obj_t BgL_endz00_1794;

							BgL_endz00_1794 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1792)));
							{	/* Ast/labels.scm 14 */

								BgL_cportz00_1784 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1792, BgL_startz00_1793, BgL_endz00_1794);
				}}}}
				{
					long BgL_iz00_1785;

					BgL_iz00_1785 = ((long) 3);
				BgL_loopz00_1786:
					if ((BgL_iz00_1785 == ((long) -1)))
						{	/* Ast/labels.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/labels.scm 14 */
							{	/* Ast/labels.scm 14 */
								obj_t BgL_arg1592z00_1788;

								{	/* Ast/labels.scm 14 */

									{	/* Ast/labels.scm 14 */
										obj_t BgL_locationz00_1790;

										BgL_locationz00_1790 = BBOOL(((bool_t) 0));
										{	/* Ast/labels.scm 14 */

											BgL_arg1592z00_1788 =
												BGl_readz00zz__readerz00(BgL_cportz00_1784,
												BgL_locationz00_1790);
										}
									}
								}
								{	/* Ast/labels.scm 14 */
									int BgL_tmpz00_1825;

									BgL_tmpz00_1825 = (int) (BgL_iz00_1785);
									CNST_TABLE_SET(BgL_tmpz00_1825, BgL_arg1592z00_1788);
							}}
							{	/* Ast/labels.scm 14 */
								int BgL_auxz00_1791;

								BgL_auxz00_1791 = (int) ((BgL_iz00_1785 - ((long) 1)));
								{
									long BgL_iz00_1830;

									BgL_iz00_1830 = (long) (BgL_auxz00_1791);
									BgL_iz00_1785 = BgL_iz00_1830;
									goto BgL_loopz00_1786;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			return (BGl_za2labelsza2z00zzast_labelsz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))),
				BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_labelsz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1346;

				BgL_headz00_1346 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1347;
					obj_t BgL_tailz00_1348;

					BgL_prevz00_1347 = BgL_headz00_1346;
					BgL_tailz00_1348 = BgL_l1z00_1;
				BgL_loopz00_1349:
					if (PAIRP(BgL_tailz00_1348))
						{
							obj_t BgL_newzd2prevzd2_1351;

							BgL_newzd2prevzd2_1351 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1348), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1347, BgL_newzd2prevzd2_1351);
							{
								obj_t BgL_tailz00_1842;
								obj_t BgL_prevz00_1841;

								BgL_prevz00_1841 = BgL_newzd2prevzd2_1351;
								BgL_tailz00_1842 = CDR(BgL_tailz00_1348);
								BgL_tailz00_1348 = BgL_tailz00_1842;
								BgL_prevz00_1347 = BgL_prevz00_1841;
								goto BgL_loopz00_1349;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1346);
				}
			}
		}

	}



/* labels-sym */
	BGL_EXPORTED_DEF obj_t BGl_labelszd2symzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 39 */
			return BGl_za2labelsza2z00zzast_labelsz00;
		}

	}



/* &labels-sym */
	obj_t BGl_z62labelszd2symzb0zzast_labelsz00(obj_t BgL_envz00_1770)
	{
		{	/* Ast/labels.scm 39 */
			return BGl_labelszd2symzd2zzast_labelsz00();
		}

	}



/* labels-sym? */
	BGL_EXPORTED_DEF obj_t BGl_labelszd2symzf3z21zzast_labelsz00(obj_t
		BgL_symz00_17)
	{
		{	/* Ast/labels.scm 45 */
			return BBOOL((BgL_symz00_17 == BGl_za2labelsza2z00zzast_labelsz00));
		}

	}



/* &labels-sym? */
	obj_t BGl_z62labelszd2symzf3z43zzast_labelsz00(obj_t BgL_envz00_1771,
		obj_t BgL_symz00_1772)
	{
		{	/* Ast/labels.scm 45 */
			return BGl_labelszd2symzf3z21zzast_labelsz00(BgL_symz00_1772);
		}

	}



/* labels->node */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_labelszd2ze3nodez31zzast_labelsz00(obj_t BgL_expz00_18,
		obj_t BgL_stackz00_19, obj_t BgL_locz00_20, obj_t BgL_sitez00_21)
	{
		{	/* Ast/labels.scm 51 */
			{	/* Ast/labels.scm 52 */
				obj_t BgL_locz00_1366;

				BgL_locz00_1366 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18,
					BgL_locz00_20);
				{
					obj_t BgL_bindingsz00_1367;
					obj_t BgL_bodyz00_1368;

					if (PAIRP(BgL_expz00_18))
						{	/* Ast/labels.scm 53 */
							obj_t BgL_cdrzd2367zd2_1373;

							BgL_cdrzd2367zd2_1373 = CDR(BgL_expz00_18);
							if (PAIRP(BgL_cdrzd2367zd2_1373))
								{	/* Ast/labels.scm 53 */
									obj_t BgL_carzd2370zd2_1375;

									BgL_carzd2370zd2_1375 = CAR(BgL_cdrzd2367zd2_1373);
									if (PAIRP(BgL_carzd2370zd2_1375))
										{	/* Ast/labels.scm 53 */
											BgL_bindingsz00_1367 = BgL_carzd2370zd2_1375;
											BgL_bodyz00_1368 = CDR(BgL_cdrzd2367zd2_1373);
											{	/* Ast/labels.scm 55 */
												obj_t BgL_localsz00_1378;

												BgL_localsz00_1378 =
													BGl_allocatezd2sfunszd2zzast_labelsz00
													(BgL_bindingsz00_1367, BgL_locz00_1366);
												{	/* Ast/labels.scm 55 */
													obj_t BgL_newzd2stackzd2_1379;

													BgL_newzd2stackzd2_1379 =
														BGl_appendzd221011zd2zzast_labelsz00
														(BgL_localsz00_1378, BgL_stackz00_19);
													{	/* Ast/labels.scm 56 */
														BgL_nodez00_bglt BgL_bodyz00_1380;

														BgL_bodyz00_1380 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00
															(BGl_normaliza7ezd2prognz75zztools_prognz00
															(BgL_bodyz00_1368), BgL_newzd2stackzd2_1379,
															BgL_locz00_1366, BgL_sitez00_21);
														{	/* Ast/labels.scm 57 */
															obj_t BgL_locz00_1381;

															BgL_locz00_1381 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_expz00_18, BgL_locz00_1366);
															{	/* Ast/labels.scm 58 */

																{
																	obj_t BgL_ll1223z00_1383;
																	obj_t BgL_ll1224z00_1384;

																	BgL_ll1223z00_1383 = BgL_localsz00_1378;
																	BgL_ll1224z00_1384 = BgL_bindingsz00_1367;
																BgL_zc3z04anonymousza31264ze3z87_1385:
																	if (NULLP(BgL_ll1223z00_1383))
																		{	/* Ast/labels.scm 60 */
																			((bool_t) 1);
																		}
																	else
																		{	/* Ast/labels.scm 60 */
																			{	/* Ast/labels.scm 60 */
																				obj_t BgL_funz00_1387;
																				obj_t BgL_bz00_1388;

																				BgL_funz00_1387 =
																					CAR(((obj_t) BgL_ll1223z00_1383));
																				BgL_bz00_1388 =
																					CAR(((obj_t) BgL_ll1224z00_1384));
																				BGl_labelszd2bindingzd2zzast_labelsz00
																					(BgL_funz00_1387, BgL_bz00_1388,
																					BgL_newzd2stackzd2_1379,
																					BgL_locz00_1381);
																			}
																			{	/* Ast/labels.scm 60 */
																				obj_t BgL_arg1268z00_1389;
																				obj_t BgL_arg1270z00_1390;

																				BgL_arg1268z00_1389 =
																					CDR(((obj_t) BgL_ll1223z00_1383));
																				BgL_arg1270z00_1390 =
																					CDR(((obj_t) BgL_ll1224z00_1384));
																				{
																					obj_t BgL_ll1224z00_1875;
																					obj_t BgL_ll1223z00_1874;

																					BgL_ll1223z00_1874 =
																						BgL_arg1268z00_1389;
																					BgL_ll1224z00_1875 =
																						BgL_arg1270z00_1390;
																					BgL_ll1224z00_1384 =
																						BgL_ll1224z00_1875;
																					BgL_ll1223z00_1383 =
																						BgL_ll1223z00_1874;
																					goto
																						BgL_zc3z04anonymousza31264ze3z87_1385;
																				}
																			}
																		}
																}
																{	/* Ast/labels.scm 64 */
																	BgL_letzd2funzd2_bglt BgL_new1105z00_1392;

																	{	/* Ast/labels.scm 65 */
																		BgL_letzd2funzd2_bglt BgL_new1104z00_1394;

																		BgL_new1104z00_1394 =
																			((BgL_letzd2funzd2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_letzd2funzd2_bgl))));
																		{	/* Ast/labels.scm 65 */
																			long BgL_arg1273z00_1395;

																			{	/* Ast/labels.scm 65 */
																				long BgL_res1556z00_1690;

																				BgL_res1556z00_1690 =
																					BGL_CLASS_INDEX
																					(BGl_letzd2funzd2zzast_nodez00);
																				BgL_arg1273z00_1395 =
																					BgL_res1556z00_1690;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1104z00_1394),
																				BgL_arg1273z00_1395);
																		}
																		{	/* Ast/labels.scm 65 */
																			BgL_objectz00_bglt BgL_tmpz00_1880;

																			BgL_tmpz00_1880 =
																				((BgL_objectz00_bglt)
																				BgL_new1104z00_1394);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1880,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1104z00_1394);
																		BgL_new1105z00_1392 = BgL_new1104z00_1394;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1105z00_1392)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_1381), BUNSPEC);
																	{
																		BgL_typez00_bglt BgL_auxz00_1886;

																		{	/* Ast/labels.scm 66 */
																			BgL_typez00_bglt BgL_arg1271z00_1393;

																			BgL_arg1271z00_1393 =
																				(((BgL_nodez00_bglt)
																					COBJECT(BgL_bodyz00_1380))->
																				BgL_typez00);
																			BgL_auxz00_1886 =
																				BGl_strictzd2nodezd2typez00zzast_nodez00
																				(((BgL_typez00_bglt)
																					BGl_za2_za2z00zztype_cachez00),
																				BgL_arg1271z00_1393);
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1105z00_1392)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_auxz00_1886),
																			BUNSPEC);
																	}
																	((((BgL_nodezf2effectzf2_bglt) COBJECT(
																					((BgL_nodezf2effectzf2_bglt)
																						BgL_new1105z00_1392)))->
																			BgL_sidezd2effectzd2) =
																		((obj_t) BUNSPEC), BUNSPEC);
																	((((BgL_nodezf2effectzf2_bglt)
																				COBJECT(((BgL_nodezf2effectzf2_bglt)
																						BgL_new1105z00_1392)))->
																			BgL_keyz00) =
																		((obj_t) BINT(((long) -1))), BUNSPEC);
																	((((BgL_letzd2funzd2_bglt)
																				COBJECT(BgL_new1105z00_1392))->
																			BgL_localsz00) =
																		((obj_t) BgL_localsz00_1378), BUNSPEC);
																	((((BgL_letzd2funzd2_bglt)
																				COBJECT(BgL_new1105z00_1392))->
																			BgL_bodyz00) =
																		((BgL_nodez00_bglt) BgL_bodyz00_1380),
																		BUNSPEC);
																	return BgL_new1105z00_1392;
																}
															}
														}
													}
												}
											}
										}
									else
										{
											BgL_nodez00_bglt BgL_auxz00_1900;

										BgL_tagzd2360zd2_1370:
											BgL_auxz00_1900 =
												BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
												(BGl_string1584z00zzast_labelsz00, BgL_expz00_18,
												BgL_locz00_1366);
											return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1900);
										}
								}
							else
								{
									BgL_nodez00_bglt BgL_auxz00_1903;

									goto BgL_tagzd2360zd2_1370;
									return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1903);
								}
						}
					else
						{
							BgL_nodez00_bglt BgL_auxz00_1905;

							goto BgL_tagzd2360zd2_1370;
							return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1905);
						}
				}
			}
		}

	}



/* &labels->node */
	BgL_letzd2funzd2_bglt BGl_z62labelszd2ze3nodez53zzast_labelsz00(obj_t
		BgL_envz00_1773, obj_t BgL_expz00_1774, obj_t BgL_stackz00_1775,
		obj_t BgL_locz00_1776, obj_t BgL_sitez00_1777)
	{
		{	/* Ast/labels.scm 51 */
			return
				BGl_labelszd2ze3nodez31zzast_labelsz00(BgL_expz00_1774,
				BgL_stackz00_1775, BgL_locz00_1776, BgL_sitez00_1777);
		}

	}



/* allocate-sfuns */
	obj_t BGl_allocatezd2sfunszd2zzast_labelsz00(obj_t BgL_bindingsz00_22,
		obj_t BgL_locz00_23)
	{
		{	/* Ast/labels.scm 75 */
			{
				obj_t BgL_bindingsz00_1399;
				obj_t BgL_resz00_1400;

				BgL_bindingsz00_1399 = BgL_bindingsz00_22;
				BgL_resz00_1400 = BNIL;
			BgL_zc3z04anonymousza31275ze3z87_1401:
				if (NULLP(BgL_bindingsz00_1399))
					{	/* Ast/labels.scm 78 */
						return bgl_reverse_bang(BgL_resz00_1400);
					}
				else
					{	/* Ast/labels.scm 80 */
						obj_t BgL_srcz00_1403;

						BgL_srcz00_1403 = CAR(((obj_t) BgL_bindingsz00_1399));
						{
							obj_t BgL_funz00_1404;
							obj_t BgL_argsz00_1405;
							obj_t BgL_bodyz00_1406;

							if (PAIRP(BgL_srcz00_1403))
								{	/* Ast/labels.scm 81 */
									obj_t BgL_carzd2385zd2_1411;
									obj_t BgL_cdrzd2386zd2_1412;

									BgL_carzd2385zd2_1411 = CAR(BgL_srcz00_1403);
									BgL_cdrzd2386zd2_1412 = CDR(BgL_srcz00_1403);
									if (SYMBOLP(BgL_carzd2385zd2_1411))
										{	/* Ast/labels.scm 81 */
											if (PAIRP(BgL_cdrzd2386zd2_1412))
												{	/* Ast/labels.scm 81 */
													BgL_funz00_1404 = BgL_carzd2385zd2_1411;
													BgL_argsz00_1405 = CAR(BgL_cdrzd2386zd2_1412);
													BgL_bodyz00_1406 = CDR(BgL_cdrzd2386zd2_1412);
													{	/* Ast/labels.scm 83 */
														obj_t BgL_locz00_1417;

														{	/* Ast/labels.scm 83 */
															obj_t BgL_arg1285z00_1421;

															BgL_arg1285z00_1421 =
																CAR(((obj_t) BgL_bindingsz00_1399));
															BgL_locz00_1417 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_arg1285z00_1421, BgL_locz00_23);
														}
														{	/* Ast/labels.scm 83 */
															obj_t BgL_funz00_1418;

															BgL_funz00_1418 =
																BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00
																(BgL_locz00_1417, BgL_srcz00_1403,
																BgL_funz00_1404, BgL_argsz00_1405,
																BgL_bodyz00_1406);
															{	/* Ast/labels.scm 84 */

																{	/* Ast/labels.scm 85 */
																	obj_t BgL_arg1282z00_1419;
																	obj_t BgL_arg1284z00_1420;

																	BgL_arg1282z00_1419 =
																		CDR(((obj_t) BgL_bindingsz00_1399));
																	BgL_arg1284z00_1420 =
																		MAKE_YOUNG_PAIR(BgL_funz00_1418,
																		BgL_resz00_1400);
																	{
																		obj_t BgL_resz00_1929;
																		obj_t BgL_bindingsz00_1928;

																		BgL_bindingsz00_1928 = BgL_arg1282z00_1419;
																		BgL_resz00_1929 = BgL_arg1284z00_1420;
																		BgL_resz00_1400 = BgL_resz00_1929;
																		BgL_bindingsz00_1399 = BgL_bindingsz00_1928;
																		goto BgL_zc3z04anonymousza31275ze3z87_1401;
																	}
																}
															}
														}
													}
												}
											else
												{	/* Ast/labels.scm 81 */
												BgL_tagzd2377zd2_1408:
													BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
														(BGl_string1585z00zzast_labelsz00, BgL_srcz00_1403,
														BgL_locz00_23);
													return BNIL;
												}
										}
									else
										{	/* Ast/labels.scm 81 */
											goto BgL_tagzd2377zd2_1408;
										}
								}
							else
								{	/* Ast/labels.scm 81 */
									goto BgL_tagzd2377zd2_1408;
								}
						}
					}
			}
		}

	}



/* make-local-noopt-sfun */
	obj_t BGl_makezd2localzd2nooptzd2sfunzd2zzast_labelsz00(obj_t BgL_locz00_24,
		obj_t BgL_srcz00_25, obj_t BgL_funz00_26, obj_t BgL_argsz00_27,
		obj_t BgL_bodyz00_28)
	{
		{	/* Ast/labels.scm 93 */
			{	/* Ast/labels.scm 94 */
				obj_t BgL_idzd2typezd2_1423;

				BgL_idzd2typezd2_1423 =
					BGl_parsezd2idzd2zzast_identz00(BgL_funz00_26, BgL_locz00_24);
				{	/* Ast/labels.scm 94 */
					obj_t BgL_idz00_1424;

					BgL_idz00_1424 = CAR(BgL_idzd2typezd2_1423);
					{	/* Ast/labels.scm 95 */
						obj_t BgL_typez00_1425;

						BgL_typez00_1425 = CDR(BgL_idzd2typezd2_1423);
						{	/* Ast/labels.scm 96 */
							long BgL_arityz00_1426;

							BgL_arityz00_1426 =
								BGl_localzd2arityzd2zztools_argsz00(BgL_argsz00_27);
							{	/* Ast/labels.scm 97 */
								obj_t BgL_formalsz00_1427;

								{	/* Ast/labels.scm 98 */
									obj_t BgL_l1226z00_1485;

									BgL_l1226z00_1485 =
										BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00
										(BgL_argsz00_27);
									if (NULLP(BgL_l1226z00_1485))
										{	/* Ast/labels.scm 98 */
											BgL_formalsz00_1427 = BNIL;
										}
									else
										{	/* Ast/labels.scm 98 */
											obj_t BgL_head1228z00_1487;

											{	/* Ast/labels.scm 98 */
												obj_t BgL_res1565z00_1715;

												BgL_res1565z00_1715 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_head1228z00_1487 = BgL_res1565z00_1715;
											}
											{
												obj_t BgL_l1226z00_1489;
												obj_t BgL_tail1229z00_1490;

												BgL_l1226z00_1489 = BgL_l1226z00_1485;
												BgL_tail1229z00_1490 = BgL_head1228z00_1487;
											BgL_zc3z04anonymousza31318ze3z87_1491:
												if (NULLP(BgL_l1226z00_1489))
													{	/* Ast/labels.scm 98 */
														BgL_formalsz00_1427 = CDR(BgL_head1228z00_1487);
													}
												else
													{	/* Ast/labels.scm 98 */
														obj_t BgL_newtail1230z00_1493;

														{	/* Ast/labels.scm 98 */
															obj_t BgL_arg1324z00_1495;

															{	/* Ast/labels.scm 98 */
																obj_t BgL_az00_1496;

																BgL_az00_1496 =
																	CAR(((obj_t) BgL_l1226z00_1489));
																BgL_arg1324z00_1495 =
																	BGl_parsezd2idzd2zzast_identz00(BgL_az00_1496,
																	BgL_locz00_24);
															}
															{	/* Ast/labels.scm 98 */
																obj_t BgL_res1567z00_1719;

																BgL_res1567z00_1719 =
																	MAKE_YOUNG_PAIR(BgL_arg1324z00_1495, BNIL);
																BgL_newtail1230z00_1493 = BgL_res1567z00_1719;
															}
														}
														SET_CDR(BgL_tail1229z00_1490,
															BgL_newtail1230z00_1493);
														{	/* Ast/labels.scm 98 */
															obj_t BgL_arg1322z00_1494;

															BgL_arg1322z00_1494 =
																CDR(((obj_t) BgL_l1226z00_1489));
															{
																obj_t BgL_tail1229z00_1952;
																obj_t BgL_l1226z00_1951;

																BgL_l1226z00_1951 = BgL_arg1322z00_1494;
																BgL_tail1229z00_1952 = BgL_newtail1230z00_1493;
																BgL_tail1229z00_1490 = BgL_tail1229z00_1952;
																BgL_l1226z00_1489 = BgL_l1226z00_1951;
																goto BgL_zc3z04anonymousza31318ze3z87_1491;
															}
														}
													}
											}
										}
								}
								{	/* Ast/labels.scm 98 */

									{	/* Ast/labels.scm 102 */
										bool_t BgL_test1619z00_1953;

										if ((BgL_arityz00_1426 >= ((long) 0)))
											{	/* Ast/labels.scm 102 */
												BgL_test1619z00_1953 = ((bool_t) 1);
											}
										else
											{	/* Ast/labels.scm 102 */
												if (BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(
														(int) (BgL_arityz00_1426), BgL_formalsz00_1427))
													{	/* Ast/labels.scm 106 */
														BgL_test1619z00_1953 = ((bool_t) 1);
													}
												else
													{	/* Ast/labels.scm 107 */
														obj_t BgL_largz00_1480;

														BgL_largz00_1480 =
															CAR
															(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
															(BgL_formalsz00_1427));
														{	/* Ast/labels.scm 107 */
															obj_t BgL_typez00_1481;

															BgL_typez00_1481 =
																CDR(((obj_t) BgL_largz00_1480));
															{	/* Ast/labels.scm 108 */

																if (
																	(BgL_typez00_1481 ==
																		BGl_za2objza2z00zztype_cachez00))
																	{	/* Ast/labels.scm 110 */
																		BgL_test1619z00_1953 = ((bool_t) 1);
																	}
																else
																	{	/* Ast/labels.scm 110 */
																		if (
																			(BgL_typez00_1481 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/labels.scm 112 */
																				{	/* Ast/labels.scm 113 */
																					obj_t BgL_objz00_1727;

																					BgL_objz00_1727 =
																						BGl_za2objza2z00zztype_cachez00;
																					{	/* Ast/labels.scm 113 */
																						obj_t BgL_tmpz00_1967;

																						BgL_tmpz00_1967 =
																							((obj_t) BgL_largz00_1480);
																						SET_CDR(BgL_tmpz00_1967,
																							BgL_objz00_1727);
																					}
																				}
																				BgL_test1619z00_1953 = ((bool_t) 1);
																			}
																		else
																			{	/* Ast/labels.scm 112 */
																				BgL_test1619z00_1953 = ((bool_t) 0);
																			}
																	}
															}
														}
													}
											}
										if (BgL_test1619z00_1953)
											{	/* Ast/labels.scm 117 */
												obj_t BgL_argsz00_1436;

												if (NULLP(BgL_formalsz00_1427))
													{	/* Ast/labels.scm 117 */
														BgL_argsz00_1436 = BNIL;
													}
												else
													{	/* Ast/labels.scm 117 */
														obj_t BgL_head1233z00_1460;

														{	/* Ast/labels.scm 117 */
															obj_t BgL_res1570z00_1729;

															BgL_res1570z00_1729 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1233z00_1460 = BgL_res1570z00_1729;
														}
														{
															obj_t BgL_l1231z00_1462;
															obj_t BgL_tail1234z00_1463;

															BgL_l1231z00_1462 = BgL_formalsz00_1427;
															BgL_tail1234z00_1463 = BgL_head1233z00_1460;
														BgL_zc3z04anonymousza31303ze3z87_1464:
															if (NULLP(BgL_l1231z00_1462))
																{	/* Ast/labels.scm 117 */
																	BgL_argsz00_1436 = CDR(BgL_head1233z00_1460);
																}
															else
																{	/* Ast/labels.scm 117 */
																	obj_t BgL_newtail1235z00_1466;

																	{	/* Ast/labels.scm 117 */
																		BgL_localz00_bglt BgL_arg1307z00_1468;

																		{	/* Ast/labels.scm 117 */
																			obj_t BgL_fz00_1469;

																			BgL_fz00_1469 =
																				CAR(((obj_t) BgL_l1231z00_1462));
																			{	/* Ast/labels.scm 118 */
																				bool_t BgL_test1628z00_1978;

																				{	/* Ast/labels.scm 118 */
																					obj_t BgL_arg1315z00_1476;

																					BgL_arg1315z00_1476 =
																						CAR(((obj_t) BgL_fz00_1469));
																					BgL_test1628z00_1978 =
																						BGl_userzd2symbolzf3z21zzast_identz00
																						(BgL_arg1315z00_1476);
																				}
																				if (BgL_test1628z00_1978)
																					{	/* Ast/labels.scm 119 */
																						obj_t BgL_arg1310z00_1472;
																						obj_t BgL_arg1311z00_1473;

																						BgL_arg1310z00_1472 =
																							CAR(((obj_t) BgL_fz00_1469));
																						BgL_arg1311z00_1473 =
																							CDR(((obj_t) BgL_fz00_1469));
																						BgL_arg1307z00_1468 =
																							BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																							(BgL_arg1310z00_1472,
																							((BgL_typez00_bglt)
																								BgL_arg1311z00_1473));
																					}
																				else
																					{	/* Ast/labels.scm 120 */
																						obj_t BgL_arg1312z00_1474;
																						obj_t BgL_arg1314z00_1475;

																						BgL_arg1312z00_1474 =
																							CAR(((obj_t) BgL_fz00_1469));
																						BgL_arg1314z00_1475 =
																							CDR(((obj_t) BgL_fz00_1469));
																						BgL_arg1307z00_1468 =
																							BGl_makezd2localzd2svarz00zzast_localz00
																							(BgL_arg1312z00_1474,
																							((BgL_typez00_bglt)
																								BgL_arg1314z00_1475));
																					}
																			}
																		}
																		{	/* Ast/labels.scm 117 */
																			obj_t BgL_res1572z00_1738;

																			BgL_res1572z00_1738 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1307z00_1468), BNIL);
																			BgL_newtail1235z00_1466 =
																				BgL_res1572z00_1738;
																		}
																	}
																	SET_CDR(BgL_tail1234z00_1463,
																		BgL_newtail1235z00_1466);
																	{	/* Ast/labels.scm 117 */
																		obj_t BgL_arg1306z00_1467;

																		BgL_arg1306z00_1467 =
																			CDR(((obj_t) BgL_l1231z00_1462));
																		{
																			obj_t BgL_tail1234z00_2000;
																			obj_t BgL_l1231z00_1999;

																			BgL_l1231z00_1999 = BgL_arg1306z00_1467;
																			BgL_tail1234z00_2000 =
																				BgL_newtail1235z00_1466;
																			BgL_tail1234z00_1463 =
																				BgL_tail1234z00_2000;
																			BgL_l1231z00_1462 = BgL_l1231z00_1999;
																			goto
																				BgL_zc3z04anonymousza31303ze3z87_1464;
																		}
																	}
																}
														}
													}
												{	/* Ast/labels.scm 117 */
													BgL_sfunz00_bglt BgL_sfunz00_1437;

													{	/* Ast/labels.scm 122 */
														BgL_sfunz00_bglt BgL_new1108z00_1439;

														{	/* Ast/labels.scm 124 */
															BgL_sfunz00_bglt BgL_new1107z00_1456;

															BgL_new1107z00_1456 =
																((BgL_sfunz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_sfunz00_bgl))));
															{	/* Ast/labels.scm 124 */
																long BgL_arg1301z00_1457;

																{	/* Ast/labels.scm 124 */
																	long BgL_res1573z00_1742;

																	BgL_res1573z00_1742 =
																		BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
																	BgL_arg1301z00_1457 = BgL_res1573z00_1742;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1107z00_1456),
																	BgL_arg1301z00_1457);
															}
															{	/* Ast/labels.scm 124 */
																BgL_objectz00_bglt BgL_tmpz00_2005;

																BgL_tmpz00_2005 =
																	((BgL_objectz00_bglt) BgL_new1107z00_1456);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2005,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1107z00_1456);
															BgL_new1108z00_1439 = BgL_new1107z00_1456;
														}
														((((BgL_funz00_bglt) COBJECT(
																		((BgL_funz00_bglt) BgL_new1108z00_1439)))->
																BgL_arityz00) =
															((long) BgL_arityz00_1426), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->
																BgL_predicatezd2ofzd2) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->
																BgL_stackzd2allocatorzd2) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->BgL_topzf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->
																BgL_thezd2closurezd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->BgL_effectz00) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->BgL_failsafez00) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_new1108z00_1439)))->
																BgL_argszd2noescapezd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_propertyz00) = ((obj_t) BNIL), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->BgL_argsz00) =
															((obj_t) BgL_argsz00_1436), BUNSPEC);
														{
															obj_t BgL_auxz00_2029;

															if (NULLP(BgL_formalsz00_1427))
																{	/* Ast/labels.scm 127 */
																	BgL_auxz00_2029 = BNIL;
																}
															else
																{	/* Ast/labels.scm 127 */
																	obj_t BgL_head1238z00_1442;

																	{	/* Ast/labels.scm 127 */
																		obj_t BgL_arg1299z00_1454;

																		{	/* Ast/labels.scm 127 */
																			obj_t BgL_pairz00_1748;

																			BgL_pairz00_1748 =
																				CAR(((obj_t) BgL_formalsz00_1427));
																			BgL_arg1299z00_1454 =
																				CAR(BgL_pairz00_1748);
																		}
																		{	/* Ast/labels.scm 127 */
																			obj_t BgL_res1575z00_1749;

																			BgL_res1575z00_1749 =
																				MAKE_YOUNG_PAIR(BgL_arg1299z00_1454,
																				BNIL);
																			BgL_head1238z00_1442 =
																				BgL_res1575z00_1749;
																		}
																	}
																	{	/* Ast/labels.scm 127 */
																		obj_t BgL_g1241z00_1443;

																		BgL_g1241z00_1443 =
																			CDR(((obj_t) BgL_formalsz00_1427));
																		{
																			obj_t BgL_l1236z00_1445;
																			obj_t BgL_tail1239z00_1446;

																			BgL_l1236z00_1445 = BgL_g1241z00_1443;
																			BgL_tail1239z00_1446 =
																				BgL_head1238z00_1442;
																		BgL_zc3z04anonymousza31294ze3z87_1447:
																			if (NULLP(BgL_l1236z00_1445))
																				{	/* Ast/labels.scm 127 */
																					BgL_auxz00_2029 =
																						BgL_head1238z00_1442;
																				}
																			else
																				{	/* Ast/labels.scm 127 */
																					obj_t BgL_newtail1240z00_1449;

																					{	/* Ast/labels.scm 127 */
																						obj_t BgL_arg1297z00_1451;

																						{	/* Ast/labels.scm 127 */
																							obj_t BgL_pairz00_1753;

																							BgL_pairz00_1753 =
																								CAR(
																								((obj_t) BgL_l1236z00_1445));
																							BgL_arg1297z00_1451 =
																								CAR(BgL_pairz00_1753);
																						}
																						{	/* Ast/labels.scm 127 */
																							obj_t BgL_res1577z00_1754;

																							BgL_res1577z00_1754 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1297z00_1451, BNIL);
																							BgL_newtail1240z00_1449 =
																								BgL_res1577z00_1754;
																						}
																					}
																					SET_CDR(BgL_tail1239z00_1446,
																						BgL_newtail1240z00_1449);
																					{	/* Ast/labels.scm 127 */
																						obj_t BgL_arg1296z00_1450;

																						BgL_arg1296z00_1450 =
																							CDR(((obj_t) BgL_l1236z00_1445));
																						{
																							obj_t BgL_tail1239z00_2048;
																							obj_t BgL_l1236z00_2047;

																							BgL_l1236z00_2047 =
																								BgL_arg1296z00_1450;
																							BgL_tail1239z00_2048 =
																								BgL_newtail1240z00_1449;
																							BgL_tail1239z00_1446 =
																								BgL_tail1239z00_2048;
																							BgL_l1236z00_1445 =
																								BgL_l1236z00_2047;
																							goto
																								BgL_zc3z04anonymousza31294ze3z87_1447;
																						}
																					}
																				}
																		}
																	}
																}
															((((BgL_sfunz00_bglt)
																		COBJECT(BgL_new1108z00_1439))->
																	BgL_argszd2namezd2) =
																((obj_t) BgL_auxz00_2029), BUNSPEC);
														}
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->BgL_bodyz00) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->BgL_classz00) =
															((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_dssslzd2keywordszd2) =
															((obj_t) BNIL), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->BgL_locz00) =
															((obj_t)
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_bodyz00_28, BgL_locz00_24)), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_optionalsz00) = ((obj_t) BNIL), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->BgL_keysz00) =
															((obj_t) BNIL), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_thezd2closurezd2globalz00) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_strengthz00) =
															((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
														((((BgL_sfunz00_bglt)
																	COBJECT(BgL_new1108z00_1439))->
																BgL_stackablez00) = ((obj_t) BUNSPEC), BUNSPEC);
														BgL_sfunz00_1437 = BgL_new1108z00_1439;
													}
													{	/* Ast/labels.scm 122 */

														if (BGl_userzd2symbolzf3z21zzast_identz00
															(BgL_idz00_1424))
															{	/* Ast/labels.scm 128 */
																return
																	((obj_t)
																	BGl_makezd2userzd2localzd2sfunzd2zzast_localz00
																	(BgL_idz00_1424,
																		((BgL_typez00_bglt) BgL_typez00_1425),
																		BgL_sfunz00_1437));
															}
														else
															{	/* Ast/labels.scm 128 */
																return
																	((obj_t)
																	BGl_makezd2localzd2sfunz00zzast_localz00
																	(BgL_idz00_1424,
																		((BgL_typez00_bglt) BgL_typez00_1425),
																		BgL_sfunz00_1437));
															}
													}
												}
											}
										else
											{	/* Ast/labels.scm 102 */
												BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
													(BGl_string1586z00zzast_labelsz00, BgL_srcz00_25,
													BgL_locz00_24);
												return BNIL;
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



/* labels-binding */
	obj_t BGl_labelszd2bindingzd2zzast_labelsz00(obj_t BgL_localz00_29,
		obj_t BgL_bindingz00_30, obj_t BgL_stackz00_31, obj_t BgL_locz00_32)
	{
		{	/* Ast/labels.scm 138 */
			{
				obj_t BgL_argsz00_1498;
				obj_t BgL_bodyz00_1499;

				if (PAIRP(BgL_bindingz00_30))
					{	/* Ast/labels.scm 139 */
						obj_t BgL_cdrzd2404zd2_1504;

						BgL_cdrzd2404zd2_1504 = CDR(BgL_bindingz00_30);
						if (PAIRP(BgL_cdrzd2404zd2_1504))
							{	/* Ast/labels.scm 139 */
								BgL_argsz00_1498 = CAR(BgL_cdrzd2404zd2_1504);
								BgL_bodyz00_1499 = CDR(BgL_cdrzd2404zd2_1504);
								{	/* Ast/labels.scm 141 */
									obj_t BgL_arg1329z00_1508;

									BgL_arg1329z00_1508 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_29))))->BgL_idz00);
									BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1329z00_1508);
								}
								{	/* Ast/labels.scm 142 */
									obj_t BgL_locz00_1509;

									BgL_locz00_1509 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_bindingz00_30, BgL_locz00_32);
									{	/* Ast/labels.scm 142 */
										obj_t BgL_body2z00_1510;

										{	/* Ast/labels.scm 143 */
											obj_t BgL_arg1338z00_1517;
											obj_t BgL_arg1339z00_1518;

											BgL_arg1338z00_1517 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_localz00_29))))->
												BgL_idz00);
											BgL_arg1339z00_1518 =
												BGl_normaliza7ezd2prognz75zztools_prognz00
												(BgL_bodyz00_1499);
											BgL_body2z00_1510 =
												BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
												(BgL_arg1338z00_1517, BgL_argsz00_1498,
												BgL_arg1339z00_1518,
												BGl_userzd2errorzd2envz00zztools_errorz00);
										}
										{	/* Ast/labels.scm 143 */
											BgL_nodez00_bglt BgL_body3z00_1511;

											{	/* Ast/labels.scm 148 */
												obj_t BgL_arg1334z00_1514;

												{	/* Ast/labels.scm 148 */
													obj_t BgL_arg1335z00_1515;

													BgL_arg1335z00_1515 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_localz00_29))))->
																		BgL_valuez00))))->BgL_argsz00);
													BgL_arg1334z00_1514 =
														BGl_appendzd221011zd2zzast_labelsz00
														(BgL_arg1335z00_1515, BgL_stackz00_31);
												}
												BgL_body3z00_1511 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_body2z00_1510,
													BgL_arg1334z00_1514, BgL_locz00_1509,
													CNST_TABLE_REF(((long) 3)));
											}
											{	/* Ast/labels.scm 147 */

												{	/* Ast/labels.scm 151 */
													BgL_valuez00_bglt BgL_arg1330z00_1512;

													BgL_arg1330z00_1512 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_29))))->
														BgL_valuez00);
													((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																		BgL_arg1330z00_1512)))->BgL_locz00) =
														((obj_t) BgL_locz00_1509), BUNSPEC);
												}
												{	/* Ast/labels.scm 152 */
													BgL_valuez00_bglt BgL_arg1331z00_1513;

													BgL_arg1331z00_1513 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_29))))->
														BgL_valuez00);
													((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																		BgL_arg1331z00_1513)))->BgL_bodyz00) =
														((obj_t) ((obj_t) BgL_body3z00_1511)), BUNSPEC);
												}
												return BGl_leavezd2functionzd2zztools_errorz00();
											}
										}
									}
								}
							}
						else
							{
								BgL_nodez00_bglt BgL_auxz00_2108;

							BgL_tagzd2397zd2_1501:
								BgL_auxz00_2108 =
									BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
									(BGl_string1587z00zzast_labelsz00, BgL_bindingz00_30,
									BgL_locz00_32);
								return ((obj_t) BgL_auxz00_2108);
							}
					}
				else
					{
						BgL_nodez00_bglt BgL_auxz00_2111;

						goto BgL_tagzd2397zd2_1501;
						return ((obj_t) BgL_auxz00_2111);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_labelsz00()
	{
		{	/* Ast/labels.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1588z00zzast_labelsz00));
		}

	}

#ifdef __cplusplus
}
#endif
