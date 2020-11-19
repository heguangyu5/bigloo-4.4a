/*===========================================================================*/
/*   (Ast/build.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/build.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_z62appendzd2astzb0zzast_buildz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_buildz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_sfunzd2defzd2ze3astze3zzast_buildz00(BgL_globalz00_bglt);
	static obj_t BGl_appendzd221011zd2zzast_buildz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_buildz00();
	extern obj_t BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
	static obj_t BGl_z62buildzd2astzb0zzast_buildz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzast_buildz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_z62buildzd2astzd2sanszd2removezb0zzast_buildz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_buildz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_buildz00 = BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_buildz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzast_buildz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_buildz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_buildz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_buildzd2astzd2envz00zzast_buildz00,
		BgL_bgl_za762buildza7d2astza7b1538za7, BGl_z62buildzd2astzb0zzast_buildz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1528z00zzast_buildz00,
		BgL_bgl_za762za7c3za704anonymo1539za7,
		BGl_z62zc3z04anonymousza31328ze3ze5zzast_buildz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_appendzd2astzd2envz00zzast_buildz00,
		BgL_bgl_za762appendza7d2astza71540za7, BGl_z62appendzd2astzb0zzast_buildz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1520z00zzast_buildz00,
		BgL_bgl_string1520za700za7za7a1541za7, "Ast", 3);
	      DEFINE_STRING(BGl_string1521z00zzast_buildz00,
		BgL_bgl_string1521za700za7za7a1542za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1522z00zzast_buildz00,
		BgL_bgl_string1522za700za7za7a1543za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1523z00zzast_buildz00,
		BgL_bgl_string1523za700za7za7a1544za7, " error", 6);
	      DEFINE_STRING(BGl_string1524z00zzast_buildz00,
		BgL_bgl_string1524za700za7za7a1545za7, "s", 1);
	      DEFINE_STRING(BGl_string1525z00zzast_buildz00,
		BgL_bgl_string1525za700za7za7a1546za7, "", 0);
	      DEFINE_STRING(BGl_string1526z00zzast_buildz00,
		BgL_bgl_string1526za700za7za7a1547za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1527z00zzast_buildz00,
		BgL_bgl_string1527za700za7za7a1548za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1529z00zzast_buildz00,
		BgL_bgl_string1529za700za7za7a1549za7, "ast_build", 9);
	      DEFINE_STRING(BGl_string1530z00zzast_buildz00,
		BgL_bgl_string1530za700za7za7a1550za7, "value pass-started ast ", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2astzd2sanszd2removezd2envz00zzast_buildz00,
		BgL_bgl_za762buildza7d2astza7d1551za7,
		BGl_z62buildzd2astzd2sanszd2removezb0zzast_buildz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_buildz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long
		BgL_checksumz00_1706, char *BgL_fromz00_1707)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_buildz00))
				{
					BGl_requirezd2initializa7ationz75zzast_buildz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_buildz00();
					BGl_libraryzd2moduleszd2initz00zzast_buildz00();
					BGl_cnstzd2initzd2zzast_buildz00();
					BGl_importedzd2moduleszd2initz00zzast_buildz00();
					return BGl_methodzd2initzd2zzast_buildz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_build");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			{	/* Ast/build.scm 14 */
				obj_t BgL_cportz00_1693;

				{	/* Ast/build.scm 14 */
					obj_t BgL_stringz00_1701;

					BgL_stringz00_1701 = BGl_string1530z00zzast_buildz00;
					{	/* Ast/build.scm 14 */
						obj_t BgL_startz00_1702;

						BgL_startz00_1702 = BINT(((long) 0));
						{	/* Ast/build.scm 14 */
							obj_t BgL_endz00_1703;

							BgL_endz00_1703 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1701)));
							{	/* Ast/build.scm 14 */

								BgL_cportz00_1693 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1701, BgL_startz00_1702, BgL_endz00_1703);
				}}}}
				{
					long BgL_iz00_1694;

					BgL_iz00_1694 = ((long) 2);
				BgL_loopz00_1695:
					if ((BgL_iz00_1694 == ((long) -1)))
						{	/* Ast/build.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/build.scm 14 */
							{	/* Ast/build.scm 14 */
								obj_t BgL_arg1536z00_1697;

								{	/* Ast/build.scm 14 */

									{	/* Ast/build.scm 14 */
										obj_t BgL_locationz00_1699;

										BgL_locationz00_1699 = BBOOL(((bool_t) 0));
										{	/* Ast/build.scm 14 */

											BgL_arg1536z00_1697 =
												BGl_readz00zz__readerz00(BgL_cportz00_1693,
												BgL_locationz00_1699);
										}
									}
								}
								{	/* Ast/build.scm 14 */
									int BgL_tmpz00_1734;

									BgL_tmpz00_1734 = (int) (BgL_iz00_1694);
									CNST_TABLE_SET(BgL_tmpz00_1734, BgL_arg1536z00_1697);
							}}
							{	/* Ast/build.scm 14 */
								int BgL_auxz00_1700;

								BgL_auxz00_1700 = (int) ((BgL_iz00_1694 - ((long) 1)));
								{
									long BgL_iz00_1739;

									BgL_iz00_1739 = (long) (BgL_auxz00_1700);
									BgL_iz00_1694 = BgL_iz00_1739;
									goto BgL_loopz00_1695;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_buildz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1321;

				BgL_headz00_1321 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1322;
					obj_t BgL_tailz00_1323;

					BgL_prevz00_1322 = BgL_headz00_1321;
					BgL_tailz00_1323 = BgL_l1z00_1;
				BgL_loopz00_1324:
					if (PAIRP(BgL_tailz00_1323))
						{
							obj_t BgL_newzd2prevzd2_1326;

							BgL_newzd2prevzd2_1326 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1323), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1322, BgL_newzd2prevzd2_1326);
							{
								obj_t BgL_tailz00_1749;
								obj_t BgL_prevz00_1748;

								BgL_prevz00_1748 = BgL_newzd2prevzd2_1326;
								BgL_tailz00_1749 = CDR(BgL_tailz00_1323);
								BgL_tailz00_1323 = BgL_tailz00_1749;
								BgL_prevz00_1322 = BgL_prevz00_1748;
								goto BgL_loopz00_1324;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1321);
				}
			}
		}

	}



/* append-ast */
	BGL_EXPORTED_DEF obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t BgL_a1z00_3,
		obj_t BgL_a2z00_4)
	{
		{	/* Ast/build.scm 35 */
			return BGl_appendzd221011zd2zzast_buildz00(BgL_a1z00_3, BgL_a2z00_4);
		}

	}



/* &append-ast */
	obj_t BGl_z62appendzd2astzb0zzast_buildz00(obj_t BgL_envz00_1684,
		obj_t BgL_a1z00_1685, obj_t BgL_a2z00_1686)
	{
		{	/* Ast/build.scm 35 */
			return BGl_appendzd2astzd2zzast_buildz00(BgL_a1z00_1685, BgL_a2z00_1686);
		}

	}



/* build-ast */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t BgL_unitsz00_5)
	{
		{	/* Ast/build.scm 43 */
			{	/* Ast/build.scm 44 */
				obj_t BgL_arg1246z00_1612;

				BgL_arg1246z00_1612 =
					BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(BgL_unitsz00_5);
				return
					BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 0)),
					BgL_arg1246z00_1612);
		}}

	}



/* &build-ast */
	obj_t BGl_z62buildzd2astzb0zzast_buildz00(obj_t BgL_envz00_1687,
		obj_t BgL_unitsz00_1688)
	{
		{	/* Ast/build.scm 43 */
			return BGl_buildzd2astzd2zzast_buildz00(BgL_unitsz00_1688);
		}

	}



/* build-ast-sans-remove */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t
		BgL_unitsz00_6)
	{
		{	/* Ast/build.scm 51 */
			{	/* Ast/build.scm 52 */
				obj_t BgL_list1247z00_1330;

				{	/* Ast/build.scm 52 */
					obj_t BgL_arg1250z00_1331;

					{	/* Ast/build.scm 52 */
						obj_t BgL_arg1252z00_1332;

						BgL_arg1252z00_1332 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1250z00_1331 =
							MAKE_YOUNG_PAIR(BGl_string1520z00zzast_buildz00,
							BgL_arg1252z00_1332);
					}
					BgL_list1247z00_1330 =
						MAKE_YOUNG_PAIR(BGl_string1521z00zzast_buildz00,
						BgL_arg1250z00_1331);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1247z00_1330);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1520z00zzast_buildz00;
			{	/* Ast/build.scm 52 */
				obj_t BgL_g1104z00_1333;

				BgL_g1104z00_1333 = BNIL;
				{
					obj_t BgL_hooksz00_1336;
					obj_t BgL_hnamesz00_1337;

					BgL_hooksz00_1336 = BgL_g1104z00_1333;
					BgL_hnamesz00_1337 = BNIL;
				BgL_zc3z04anonymousza31253ze3z87_1338:
					if (NULLP(BgL_hooksz00_1336))
						{	/* Ast/build.scm 52 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Ast/build.scm 52 */
							bool_t BgL_test1557z00_1768;

							{	/* Ast/build.scm 52 */
								obj_t BgL_fun1269z00_1345;

								BgL_fun1269z00_1345 = CAR(((obj_t) BgL_hooksz00_1336));
								BgL_test1557z00_1768 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1269z00_1345)
									(BgL_fun1269z00_1345, BEOA));
							}
							if (BgL_test1557z00_1768)
								{	/* Ast/build.scm 52 */
									obj_t BgL_arg1258z00_1342;
									obj_t BgL_arg1263z00_1343;

									BgL_arg1258z00_1342 = CDR(((obj_t) BgL_hooksz00_1336));
									BgL_arg1263z00_1343 = CDR(((obj_t) BgL_hnamesz00_1337));
									{
										obj_t BgL_hnamesz00_1780;
										obj_t BgL_hooksz00_1779;

										BgL_hooksz00_1779 = BgL_arg1258z00_1342;
										BgL_hnamesz00_1780 = BgL_arg1263z00_1343;
										BgL_hnamesz00_1337 = BgL_hnamesz00_1780;
										BgL_hooksz00_1336 = BgL_hooksz00_1779;
										goto BgL_zc3z04anonymousza31253ze3z87_1338;
									}
								}
							else
								{	/* Ast/build.scm 52 */
									obj_t BgL_arg1268z00_1344;

									BgL_arg1268z00_1344 = CAR(((obj_t) BgL_hnamesz00_1337));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1520z00zzast_buildz00,
										BGl_string1522z00zzast_buildz00, BgL_arg1268z00_1344);
								}
						}
				}
			}
			{	/* Ast/build.scm 56 */
				obj_t BgL_nberrz00_1348;

				BgL_nberrz00_1348 = BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
				{	/* Ast/build.scm 56 */
					obj_t BgL_defsz00_1349;

					{	/* Ast/build.scm 57 */
						obj_t BgL_runner1325z00_1434;

						if (NULLP(BgL_unitsz00_6))
							{	/* Ast/build.scm 57 */
								BgL_runner1325z00_1434 = BNIL;
							}
						else
							{	/* Ast/build.scm 57 */
								obj_t BgL_head1229z00_1420;

								{	/* Ast/build.scm 57 */
									obj_t BgL_arg1322z00_1432;

									{	/* Ast/build.scm 57 */
										obj_t BgL_arg1324z00_1433;

										BgL_arg1324z00_1433 = CAR(((obj_t) BgL_unitsz00_6));
										BgL_arg1322z00_1432 =
											BGl_unitzd2ze3defsz31zzast_unitz00(BgL_arg1324z00_1433);
									}
									{	/* Ast/build.scm 57 */
										obj_t BgL_res1500z00_1621;

										BgL_res1500z00_1621 =
											MAKE_YOUNG_PAIR(BgL_arg1322z00_1432, BNIL);
										BgL_head1229z00_1420 = BgL_res1500z00_1621;
									}
								}
								{	/* Ast/build.scm 57 */
									obj_t BgL_g1232z00_1421;

									BgL_g1232z00_1421 = CDR(((obj_t) BgL_unitsz00_6));
									{
										obj_t BgL_l1227z00_1423;
										obj_t BgL_tail1230z00_1424;

										BgL_l1227z00_1423 = BgL_g1232z00_1421;
										BgL_tail1230z00_1424 = BgL_head1229z00_1420;
									BgL_zc3z04anonymousza31314ze3z87_1425:
										if (NULLP(BgL_l1227z00_1423))
											{	/* Ast/build.scm 57 */
												BgL_runner1325z00_1434 = BgL_head1229z00_1420;
											}
										else
											{	/* Ast/build.scm 57 */
												obj_t BgL_newtail1231z00_1427;

												{	/* Ast/build.scm 57 */
													obj_t BgL_arg1317z00_1429;

													{	/* Ast/build.scm 57 */
														obj_t BgL_arg1319z00_1430;

														BgL_arg1319z00_1430 =
															CAR(((obj_t) BgL_l1227z00_1423));
														BgL_arg1317z00_1429 =
															BGl_unitzd2ze3defsz31zzast_unitz00
															(BgL_arg1319z00_1430);
													}
													{	/* Ast/build.scm 57 */
														obj_t BgL_res1502z00_1625;

														BgL_res1502z00_1625 =
															MAKE_YOUNG_PAIR(BgL_arg1317z00_1429, BNIL);
														BgL_newtail1231z00_1427 = BgL_res1502z00_1625;
													}
												}
												SET_CDR(BgL_tail1230z00_1424, BgL_newtail1231z00_1427);
												{	/* Ast/build.scm 57 */
													obj_t BgL_arg1316z00_1428;

													BgL_arg1316z00_1428 =
														CDR(((obj_t) BgL_l1227z00_1423));
													{
														obj_t BgL_tail1230z00_1802;
														obj_t BgL_l1227z00_1801;

														BgL_l1227z00_1801 = BgL_arg1316z00_1428;
														BgL_tail1230z00_1802 = BgL_newtail1231z00_1427;
														BgL_tail1230z00_1424 = BgL_tail1230z00_1802;
														BgL_l1227z00_1423 = BgL_l1227z00_1801;
														goto BgL_zc3z04anonymousza31314ze3z87_1425;
													}
												}
											}
									}
								}
							}
						BgL_defsz00_1349 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00
							(BgL_runner1325z00_1434);
					}
					{	/* Ast/build.scm 57 */

						if (
							((long) CINT(BgL_nberrz00_1348) ==
								(long)
								CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)))
							{	/* Ast/build.scm 58 */
								BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
								{	/* Ast/build.scm 63 */
									obj_t BgL_astz00_1351;

									if (NULLP(BgL_defsz00_1349))
										{	/* Ast/build.scm 63 */
											BgL_astz00_1351 = BNIL;
										}
									else
										{	/* Ast/build.scm 63 */
											obj_t BgL_head1235z00_1379;

											{	/* Ast/build.scm 63 */
												BgL_globalz00_bglt BgL_arg1296z00_1391;

												{	/* Ast/build.scm 63 */
													obj_t BgL_arg1297z00_1392;

													BgL_arg1297z00_1392 = CAR(((obj_t) BgL_defsz00_1349));
													BgL_arg1296z00_1391 =
														BGl_sfunzd2defzd2ze3astze3zzast_buildz00(
														((BgL_globalz00_bglt) BgL_arg1297z00_1392));
												}
												{	/* Ast/build.scm 63 */
													obj_t BgL_res1505z00_1633;

													BgL_res1505z00_1633 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1296z00_1391), BNIL);
													BgL_head1235z00_1379 = BgL_res1505z00_1633;
												}
											}
											{	/* Ast/build.scm 63 */
												obj_t BgL_g1238z00_1380;

												BgL_g1238z00_1380 = CDR(((obj_t) BgL_defsz00_1349));
												{
													obj_t BgL_l1233z00_1382;
													obj_t BgL_tail1236z00_1383;

													BgL_l1233z00_1382 = BgL_g1238z00_1380;
													BgL_tail1236z00_1383 = BgL_head1235z00_1379;
												BgL_zc3z04anonymousza31289ze3z87_1384:
													if (NULLP(BgL_l1233z00_1382))
														{	/* Ast/build.scm 63 */
															BgL_astz00_1351 = BgL_head1235z00_1379;
														}
													else
														{	/* Ast/build.scm 63 */
															obj_t BgL_newtail1237z00_1386;

															{	/* Ast/build.scm 63 */
																BgL_globalz00_bglt BgL_arg1292z00_1388;

																{	/* Ast/build.scm 63 */
																	obj_t BgL_arg1295z00_1389;

																	BgL_arg1295z00_1389 =
																		CAR(((obj_t) BgL_l1233z00_1382));
																	BgL_arg1292z00_1388 =
																		BGl_sfunzd2defzd2ze3astze3zzast_buildz00(
																		((BgL_globalz00_bglt) BgL_arg1295z00_1389));
																}
																{	/* Ast/build.scm 63 */
																	obj_t BgL_res1507z00_1637;

																	BgL_res1507z00_1637 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1292z00_1388), BNIL);
																	BgL_newtail1237z00_1386 = BgL_res1507z00_1637;
																}
															}
															SET_CDR(BgL_tail1236z00_1383,
																BgL_newtail1237z00_1386);
															{	/* Ast/build.scm 63 */
																obj_t BgL_arg1291z00_1387;

																BgL_arg1291z00_1387 =
																	CDR(((obj_t) BgL_l1233z00_1382));
																{
																	obj_t BgL_tail1236z00_1831;
																	obj_t BgL_l1233z00_1830;

																	BgL_l1233z00_1830 = BgL_arg1291z00_1387;
																	BgL_tail1236z00_1831 =
																		BgL_newtail1237z00_1386;
																	BgL_tail1236z00_1383 = BgL_tail1236z00_1831;
																	BgL_l1233z00_1382 = BgL_l1233z00_1830;
																	goto BgL_zc3z04anonymousza31289ze3z87_1384;
																}
															}
														}
												}
											}
										}
									if (
										((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Ast/build.scm 65 */
											{	/* Ast/build.scm 65 */
												obj_t BgL_port1239z00_1354;

												{	/* Ast/build.scm 65 */
													obj_t BgL_res1509z00_1643;

													{	/* Ast/build.scm 65 */
														obj_t BgL_tmpz00_1835;

														BgL_tmpz00_1835 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1509z00_1643 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1835);
													}
													BgL_port1239z00_1354 = BgL_res1509z00_1643;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port1239z00_1354);
												bgl_display_string(BGl_string1523z00zzast_buildz00,
													BgL_port1239z00_1354);
												{	/* Ast/build.scm 65 */
													obj_t BgL_arg1273z00_1355;

													{	/* Ast/build.scm 65 */
														bool_t BgL_test1566z00_1840;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Ast/build.scm 65 */
																if (INTEGERP
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
																	{	/* Ast/build.scm 65 */
																		BgL_test1566z00_1840 =
																			(
																			(long)
																			CINT
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																			> ((long) 1));
																	}
																else
																	{	/* Ast/build.scm 65 */
																		BgL_test1566z00_1840 =
																			BGl_2ze3ze3zz__r4_numbers_6_5z00
																			(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																			BINT(((long) 1)));
															}}
														else
															{	/* Ast/build.scm 65 */
																BgL_test1566z00_1840 = ((bool_t) 0);
															}
														if (BgL_test1566z00_1840)
															{	/* Ast/build.scm 65 */
																BgL_arg1273z00_1355 =
																	BGl_string1524z00zzast_buildz00;
															}
														else
															{	/* Ast/build.scm 65 */
																BgL_arg1273z00_1355 =
																	BGl_string1525z00zzast_buildz00;
															}
													}
													bgl_display_obj(BgL_arg1273z00_1355,
														BgL_port1239z00_1354);
												}
												bgl_display_string(BGl_string1526z00zzast_buildz00,
													BgL_port1239z00_1354);
												bgl_display_char(((unsigned char) 10),
													BgL_port1239z00_1354);
											}
											{	/* Ast/build.scm 65 */
												obj_t BgL_list1277z00_1361;

												BgL_list1277z00_1361 =
													MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list1277z00_1361);
											}
										}
									else
										{	/* Ast/build.scm 65 */
											obj_t BgL_g1106z00_1362;

											BgL_g1106z00_1362 = BNIL;
											{
												obj_t BgL_hooksz00_1365;
												obj_t BgL_hnamesz00_1366;

												BgL_hooksz00_1365 = BgL_g1106z00_1362;
												BgL_hnamesz00_1366 = BNIL;
											BgL_zc3z04anonymousza31278ze3z87_1367:
												if (NULLP(BgL_hooksz00_1365))
													{	/* Ast/build.scm 65 */
														return BgL_astz00_1351;
													}
												else
													{	/* Ast/build.scm 65 */
														bool_t BgL_test1570z00_1857;

														{	/* Ast/build.scm 65 */
															obj_t BgL_fun1286z00_1374;

															BgL_fun1286z00_1374 =
																CAR(((obj_t) BgL_hooksz00_1365));
															BgL_test1570z00_1857 =
																CBOOL(PROCEDURE_ENTRY(BgL_fun1286z00_1374)
																(BgL_fun1286z00_1374, BEOA));
														}
														if (BgL_test1570z00_1857)
															{	/* Ast/build.scm 65 */
																obj_t BgL_arg1282z00_1371;
																obj_t BgL_arg1284z00_1372;

																BgL_arg1282z00_1371 =
																	CDR(((obj_t) BgL_hooksz00_1365));
																BgL_arg1284z00_1372 =
																	CDR(((obj_t) BgL_hnamesz00_1366));
																{
																	obj_t BgL_hnamesz00_1869;
																	obj_t BgL_hooksz00_1868;

																	BgL_hooksz00_1868 = BgL_arg1282z00_1371;
																	BgL_hnamesz00_1869 = BgL_arg1284z00_1372;
																	BgL_hnamesz00_1366 = BgL_hnamesz00_1869;
																	BgL_hooksz00_1365 = BgL_hooksz00_1868;
																	goto BgL_zc3z04anonymousza31278ze3z87_1367;
																}
															}
														else
															{	/* Ast/build.scm 65 */
																obj_t BgL_arg1285z00_1373;

																BgL_arg1285z00_1373 =
																	CAR(((obj_t) BgL_hnamesz00_1366));
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_za2currentzd2passza2zd2zzengine_passz00,
																	BGl_string1527z00zzast_buildz00,
																	BgL_arg1285z00_1373);
															}
													}
											}
										}
								}
							}
						else
							{	/* Ast/build.scm 58 */
								if (
									((long)
										CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
										((long) 0)))
									{	/* Ast/build.scm 66 */
										{	/* Ast/build.scm 66 */
											obj_t BgL_port1240z00_1395;

											{	/* Ast/build.scm 66 */
												obj_t BgL_res1515z00_1662;

												{	/* Ast/build.scm 66 */
													obj_t BgL_tmpz00_1876;

													BgL_tmpz00_1876 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1515z00_1662 =
														BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1876);
												}
												BgL_port1240z00_1395 = BgL_res1515z00_1662;
											}
											bgl_display_obj
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BgL_port1240z00_1395);
											bgl_display_string(BGl_string1523z00zzast_buildz00,
												BgL_port1240z00_1395);
											{	/* Ast/build.scm 66 */
												obj_t BgL_arg1299z00_1396;

												{	/* Ast/build.scm 66 */
													bool_t BgL_test1573z00_1881;

													if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* Ast/build.scm 66 */
															if (INTEGERP
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
																{	/* Ast/build.scm 66 */
																	BgL_test1573z00_1881 =
																		(
																		(long)
																		CINT
																		(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																		> ((long) 1));
																}
															else
																{	/* Ast/build.scm 66 */
																	BgL_test1573z00_1881 =
																		BGl_2ze3ze3zz__r4_numbers_6_5z00
																		(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																		BINT(((long) 1)));
														}}
													else
														{	/* Ast/build.scm 66 */
															BgL_test1573z00_1881 = ((bool_t) 0);
														}
													if (BgL_test1573z00_1881)
														{	/* Ast/build.scm 66 */
															BgL_arg1299z00_1396 =
																BGl_string1524z00zzast_buildz00;
														}
													else
														{	/* Ast/build.scm 66 */
															BgL_arg1299z00_1396 =
																BGl_string1525z00zzast_buildz00;
														}
												}
												bgl_display_obj(BgL_arg1299z00_1396,
													BgL_port1240z00_1395);
											}
											bgl_display_string(BGl_string1526z00zzast_buildz00,
												BgL_port1240z00_1395);
											bgl_display_char(((unsigned char) 10),
												BgL_port1240z00_1395);
										}
										{	/* Ast/build.scm 66 */
											obj_t BgL_list1303z00_1402;

											BgL_list1303z00_1402 =
												MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
											return BGl_exitz00zz__errorz00(BgL_list1303z00_1402);
										}
									}
								else
									{	/* Ast/build.scm 66 */
										obj_t BgL_g1108z00_1403;

										BgL_g1108z00_1403 = BNIL;
										{
											obj_t BgL_hooksz00_1406;
											obj_t BgL_hnamesz00_1407;

											BgL_hooksz00_1406 = BgL_g1108z00_1403;
											BgL_hnamesz00_1407 = BNIL;
										BgL_zc3z04anonymousza31304ze3z87_1408:
											if (NULLP(BgL_hooksz00_1406))
												{	/* Ast/build.scm 66 */
													return BNIL;
												}
											else
												{	/* Ast/build.scm 66 */
													bool_t BgL_test1577z00_1898;

													{	/* Ast/build.scm 66 */
														obj_t BgL_fun1311z00_1415;

														BgL_fun1311z00_1415 =
															CAR(((obj_t) BgL_hooksz00_1406));
														BgL_test1577z00_1898 =
															CBOOL(PROCEDURE_ENTRY(BgL_fun1311z00_1415)
															(BgL_fun1311z00_1415, BEOA));
													}
													if (BgL_test1577z00_1898)
														{	/* Ast/build.scm 66 */
															obj_t BgL_arg1308z00_1412;
															obj_t BgL_arg1309z00_1413;

															BgL_arg1308z00_1412 =
																CDR(((obj_t) BgL_hooksz00_1406));
															BgL_arg1309z00_1413 =
																CDR(((obj_t) BgL_hnamesz00_1407));
															{
																obj_t BgL_hnamesz00_1910;
																obj_t BgL_hooksz00_1909;

																BgL_hooksz00_1909 = BgL_arg1308z00_1412;
																BgL_hnamesz00_1910 = BgL_arg1309z00_1413;
																BgL_hnamesz00_1407 = BgL_hnamesz00_1910;
																BgL_hooksz00_1406 = BgL_hooksz00_1909;
																goto BgL_zc3z04anonymousza31304ze3z87_1408;
															}
														}
													else
														{	/* Ast/build.scm 66 */
															obj_t BgL_arg1310z00_1414;

															BgL_arg1310z00_1414 =
																CAR(((obj_t) BgL_hnamesz00_1407));
															return
																BGl_internalzd2errorzd2zztools_errorz00
																(BGl_za2currentzd2passza2zd2zzengine_passz00,
																BGl_string1527z00zzast_buildz00,
																BgL_arg1310z00_1414);
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



/* &build-ast-sans-remove */
	obj_t BGl_z62buildzd2astzd2sanszd2removezb0zzast_buildz00(obj_t
		BgL_envz00_1689, obj_t BgL_unitsz00_1690)
	{
		{	/* Ast/build.scm 51 */
			return
				BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(BgL_unitsz00_1690);
		}

	}



/* sfun-def->ast */
	BgL_globalz00_bglt BGl_sfunzd2defzd2ze3astze3zzast_buildz00(BgL_globalz00_bglt
		BgL_defz00_7)
	{
		{	/* Ast/build.scm 71 */
			{	/* Ast/build.scm 72 */
				obj_t BgL_arg1326z00_1435;

				BgL_arg1326z00_1435 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_defz00_7)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1326z00_1435);
			}
			{	/* Ast/build.scm 73 */
				obj_t BgL_exitd1110z00_1436;

				BgL_exitd1110z00_1436 = BGL_EXITD_TOP_AS_OBJ();
				BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1110z00_1436,
					BGl_proc1528z00zzast_buildz00);
				{	/* Ast/build.scm 74 */
					obj_t BgL_tmp1112z00_1438;

					{	/* Ast/build.scm 74 */
						BgL_valuez00_bglt BgL_sfunz00_1439;

						BgL_sfunz00_1439 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_defz00_7)))->BgL_valuez00);
						{	/* Ast/build.scm 74 */
							obj_t BgL_sfunzd2argszd2_1440;

							BgL_sfunzd2argszd2_1440 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_sfunz00_1439)))->BgL_argsz00);
							{	/* Ast/build.scm 75 */
								obj_t BgL_sfunzd2bodyzd2expz00_1441;

								BgL_sfunzd2bodyzd2expz00_1441 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_sfunz00_1439)))->BgL_bodyz00);
								{	/* Ast/build.scm 76 */
									obj_t BgL_defzd2loczd2_1442;

									BgL_defzd2loczd2_1442 =
										BGl_findzd2locationzd2zztools_locationz00(
										(((BgL_globalz00_bglt) COBJECT(BgL_defz00_7))->BgL_srcz00));
									{	/* Ast/build.scm 77 */
										obj_t BgL_locz00_1443;

										BgL_locz00_1443 =
											BGl_findzd2locationzf2locz20zztools_locationz00
											(BgL_sfunzd2bodyzd2expz00_1441, BgL_defzd2loczd2_1442);
										{	/* Ast/build.scm 78 */
											BgL_nodez00_bglt BgL_bodyz00_1444;

											BgL_bodyz00_1444 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00
												(BgL_sfunzd2bodyzd2expz00_1441, BgL_sfunzd2argszd2_1440,
												BgL_locz00_1443, CNST_TABLE_REF(((long) 2)));
											{	/* Ast/build.scm 79 */

												BgL_tmp1112z00_1438 =
													((((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt) BgL_sfunz00_1439)))->
														BgL_bodyz00) =
													((obj_t) ((obj_t) BgL_bodyz00_1444)), BUNSPEC);
					}}}}}}}
					BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1110z00_1436);
					BGl_leavezd2functionzd2zztools_errorz00();
					BgL_tmp1112z00_1438;
			}}
			return BgL_defz00_7;
		}

	}



/* &<@anonymous:1328> */
	obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzast_buildz00(obj_t BgL_envz00_1692)
	{
		{	/* Ast/build.scm 73 */
			return BGl_leavezd2functionzd2zztools_errorz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_buildz00()
	{
		{	/* Ast/build.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 502577506),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1529z00zzast_buildz00));
		}

	}

#ifdef __cplusplus
}
#endif
