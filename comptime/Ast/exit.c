/*===========================================================================*/
/*   (Ast/exit.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/exit.scm) */
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

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;


	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzast_exitz00();
	static obj_t BGl_methodzd2initzd2zzast_exitz00();
	static BgL_letzd2funzd2_bglt
		BGl_z62setzd2exitzd2ze3nodez81zzast_exitz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_exitz00();
	static obj_t BGl_requirezd2initializa7ationz75zzast_exitz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzast_exitz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2exitza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_localz00_bglt BGl_makezd2localzd2sexitz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sexitz00_bglt);
	extern obj_t BGl_makezd2anonymouszd2namez00zzast_sexpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_letzd2funzd2_bglt
		BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static BgL_jumpzd2exzd2itz00_bglt
		BGl_z62jumpzd2exitzd2ze3nodez81zzast_exitz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_exitz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_exitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_exitz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jumpzd2exitzd2ze3nodezd2envz31zzast_exitz00,
		BgL_bgl_za762jumpza7d2exitza7d1383za7,
		BGl_z62jumpzd2exitzd2ze3nodez81zzast_exitz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2exitzd2ze3nodezd2envz31zzast_exitz00,
		BgL_bgl_za762setza7d2exitza7d21384za7,
		BGl_z62setzd2exitzd2ze3nodez81zzast_exitz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1375z00zzast_exitz00,
		BgL_bgl_string1375za700za7za7a1385za7, "exit", 4);
	      DEFINE_STRING(BGl_string1376z00zzast_exitz00,
		BgL_bgl_string1376za700za7za7a1386za7, "Illegal `set-exit' form", 23);
	      DEFINE_STRING(BGl_string1377z00zzast_exitz00,
		BgL_bgl_string1377za700za7za7a1387za7, "Illegal `jump-exit' form", 24);
	      DEFINE_STRING(BGl_string1378z00zzast_exitz00,
		BgL_bgl_string1378za700za7za7a1388za7, "ast_exit", 8);
	      DEFINE_STRING(BGl_string1379z00zzast_exitz00,
		BgL_bgl_string1379za700za7za7a1389za7, "snifun value labels ", 20);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_exitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long
		BgL_checksumz00_1625, char *BgL_fromz00_1626)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_exitz00))
				{
					BGl_requirezd2initializa7ationz75zzast_exitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_exitz00();
					BGl_libraryzd2moduleszd2initz00zzast_exitz00();
					BGl_cnstzd2initzd2zzast_exitz00();
					BGl_importedzd2moduleszd2initz00zzast_exitz00();
					return BGl_methodzd2initzd2zzast_exitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_exit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_exit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_exit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_exit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_exit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			{	/* Ast/exit.scm 14 */
				obj_t BgL_cportz00_1612;

				{	/* Ast/exit.scm 14 */
					obj_t BgL_stringz00_1620;

					BgL_stringz00_1620 = BGl_string1379z00zzast_exitz00;
					{	/* Ast/exit.scm 14 */
						obj_t BgL_startz00_1621;

						BgL_startz00_1621 = BINT(((long) 0));
						{	/* Ast/exit.scm 14 */
							obj_t BgL_endz00_1622;

							BgL_endz00_1622 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1620)));
							{	/* Ast/exit.scm 14 */

								BgL_cportz00_1612 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1620, BgL_startz00_1621, BgL_endz00_1622);
				}}}}
				{
					long BgL_iz00_1613;

					BgL_iz00_1613 = ((long) 2);
				BgL_loopz00_1614:
					if ((BgL_iz00_1613 == ((long) -1)))
						{	/* Ast/exit.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/exit.scm 14 */
							{	/* Ast/exit.scm 14 */
								obj_t BgL_arg1381z00_1616;

								{	/* Ast/exit.scm 14 */

									{	/* Ast/exit.scm 14 */
										obj_t BgL_locationz00_1618;

										BgL_locationz00_1618 = BBOOL(((bool_t) 0));
										{	/* Ast/exit.scm 14 */

											BgL_arg1381z00_1616 =
												BGl_readz00zz__readerz00(BgL_cportz00_1612,
												BgL_locationz00_1618);
										}
									}
								}
								{	/* Ast/exit.scm 14 */
									int BgL_tmpz00_1649;

									BgL_tmpz00_1649 = (int) (BgL_iz00_1613);
									CNST_TABLE_SET(BgL_tmpz00_1649, BgL_arg1381z00_1616);
							}}
							{	/* Ast/exit.scm 14 */
								int BgL_auxz00_1619;

								BgL_auxz00_1619 = (int) ((BgL_iz00_1613 - ((long) 1)));
								{
									long BgL_iz00_1654;

									BgL_iz00_1654 = (long) (BgL_auxz00_1619);
									BgL_iz00_1613 = BgL_iz00_1654;
									goto BgL_loopz00_1614;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* set-exit->node */
	BGL_EXPORTED_DEF BgL_letzd2funzd2_bglt
		BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_expz00_3,
		obj_t BgL_stackz00_4, obj_t BgL_locz00_5, obj_t BgL_sitez00_6)
	{
		{	/* Ast/exit.scm 33 */
			{
				obj_t BgL_exitz00_1376;
				obj_t BgL_handlerz00_1377;

				{	/* Ast/exit.scm 38 */
					obj_t BgL_locz00_1333;

					BgL_locz00_1333 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_3,
						BgL_locz00_5);
					{
						obj_t BgL_exitz00_1334;
						obj_t BgL_bodyz00_1335;

						if (PAIRP(BgL_expz00_3))
							{	/* Ast/exit.scm 39 */
								obj_t BgL_cdrzd2367zd2_1340;

								BgL_cdrzd2367zd2_1340 = CDR(BgL_expz00_3);
								if (PAIRP(BgL_cdrzd2367zd2_1340))
									{	/* Ast/exit.scm 39 */
										obj_t BgL_carzd2370zd2_1342;

										BgL_carzd2370zd2_1342 = CAR(BgL_cdrzd2367zd2_1340);
										if (PAIRP(BgL_carzd2370zd2_1342))
											{	/* Ast/exit.scm 39 */
												if (NULLP(CDR(BgL_carzd2370zd2_1342)))
													{	/* Ast/exit.scm 39 */
														obj_t BgL_arg1243z00_1346;
														obj_t BgL_arg1245z00_1347;

														BgL_arg1243z00_1346 = CAR(BgL_carzd2370zd2_1342);
														BgL_arg1245z00_1347 = CDR(BgL_cdrzd2367zd2_1340);
														{
															BgL_nodez00_bglt BgL_auxz00_1671;

															BgL_exitz00_1334 = BgL_arg1243z00_1346;
															BgL_bodyz00_1335 = BgL_arg1245z00_1347;
															{	/* Ast/exit.scm 41 */
																obj_t BgL_hdlgzd2namezd2_1349;

																{	/* Ast/exit.scm 42 */
																	obj_t BgL_arg1276z00_1374;

																	{	/* Ast/exit.scm 42 */
																		obj_t BgL_list1277z00_1375;

																		BgL_list1277z00_1375 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1375z00zzast_exitz00, BNIL);
																		BgL_arg1276z00_1374 =
																			BGl_makezd2anonymouszd2namez00zzast_sexpz00
																			(BgL_locz00_1333, BgL_list1277z00_1375);
																	}
																	BgL_hdlgzd2namezd2_1349 =
																		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																		(BgL_arg1276z00_1374);
																}
																{	/* Ast/exit.scm 41 */
																	obj_t BgL_hdlgzd2sexpzd2_1350;

																	{	/* Ast/exit.scm 43 */
																		obj_t BgL_arg1263z00_1367;

																		{	/* Ast/exit.scm 43 */
																			obj_t BgL_arg1268z00_1368;
																			obj_t BgL_arg1270z00_1369;

																			{	/* Ast/exit.scm 43 */
																				obj_t BgL_arg1271z00_1370;

																				{	/* Ast/exit.scm 43 */
																					obj_t BgL_arg1273z00_1371;

																					{	/* Ast/exit.scm 43 */
																						obj_t BgL_arg1274z00_1372;

																						BgL_arg1274z00_1372 =
																							MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																						BgL_arg1273z00_1371 =
																							MAKE_YOUNG_PAIR(BNIL,
																							BgL_arg1274z00_1372);
																					}
																					BgL_arg1271z00_1370 =
																						MAKE_YOUNG_PAIR
																						(BgL_hdlgzd2namezd2_1349,
																						BgL_arg1273z00_1371);
																				}
																				BgL_arg1268z00_1368 =
																					MAKE_YOUNG_PAIR(BgL_arg1271z00_1370,
																					BNIL);
																			}
																			{	/* Ast/exit.scm 44 */
																				obj_t BgL_arg1275z00_1373;

																				BgL_arg1275z00_1373 =
																					MAKE_YOUNG_PAIR
																					(BgL_hdlgzd2namezd2_1349, BNIL);
																				BgL_arg1270z00_1369 =
																					MAKE_YOUNG_PAIR(BgL_arg1275z00_1373,
																					BNIL);
																			}
																			BgL_arg1263z00_1367 =
																				MAKE_YOUNG_PAIR(BgL_arg1268z00_1368,
																				BgL_arg1270z00_1369);
																		}
																		BgL_hdlgzd2sexpzd2_1350 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BgL_arg1263z00_1367);
																	}
																	{	/* Ast/exit.scm 43 */
																		BgL_nodez00_bglt BgL_hdlgzd2nodezd2_1351;

																		BgL_hdlgzd2nodezd2_1351 =
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_hdlgzd2sexpzd2_1350, BgL_stackz00_4,
																			BgL_locz00_1333, BgL_sitez00_6);
																		{	/* Ast/exit.scm 45 */
																			obj_t BgL_hdlgzd2funzd2_1352;

																			{	/* Ast/exit.scm 46 */
																				obj_t BgL_pairz00_1566;

																				BgL_pairz00_1566 =
																					(((BgL_letzd2funzd2_bglt) COBJECT(
																							((BgL_letzd2funzd2_bglt)
																								BgL_hdlgzd2nodezd2_1351)))->
																					BgL_localsz00);
																				BgL_hdlgzd2funzd2_1352 =
																					CAR(BgL_pairz00_1566);
																			}
																			{	/* Ast/exit.scm 46 */
																				BgL_localz00_bglt BgL_exitz00_1353;

																				BgL_exitz00_1376 = BgL_exitz00_1334;
																				BgL_handlerz00_1377 =
																					BgL_hdlgzd2funzd2_1352;
																				{	/* Ast/exit.scm 36 */
																					BgL_sexitz00_bglt BgL_arg1280z00_1379;

																					{	/* Ast/exit.scm 36 */
																						BgL_sexitz00_bglt
																							BgL_new1105z00_1380;
																						{	/* Ast/exit.scm 36 */
																							BgL_sexitz00_bglt
																								BgL_new1104z00_1381;
																							BgL_new1104z00_1381 =
																								((BgL_sexitz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_sexitz00_bgl))));
																							{	/* Ast/exit.scm 36 */
																								long BgL_arg1281z00_1382;

																								{	/* Ast/exit.scm 36 */
																									long BgL_res1365z00_1561;

																									BgL_res1365z00_1561 =
																										BGL_CLASS_INDEX
																										(BGl_sexitz00zzast_varz00);
																									BgL_arg1281z00_1382 =
																										BgL_res1365z00_1561;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1104z00_1381),
																									BgL_arg1281z00_1382);
																							}
																							{	/* Ast/exit.scm 36 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_1692;
																								BgL_tmpz00_1692 =
																									((BgL_objectz00_bglt)
																									BgL_new1104z00_1381);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_1692, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1104z00_1381);
																							BgL_new1105z00_1380 =
																								BgL_new1104z00_1381;
																						}
																						((((BgL_sexitz00_bglt)
																									COBJECT
																									(BgL_new1105z00_1380))->
																								BgL_handlerz00) =
																							((obj_t) BgL_handlerz00_1377),
																							BUNSPEC);
																						((((BgL_sexitz00_bglt)
																									COBJECT
																									(BgL_new1105z00_1380))->
																								BgL_detachedzf3zf3) =
																							((bool_t) ((bool_t) 0)), BUNSPEC);
																						BgL_arg1280z00_1379 =
																							BgL_new1105z00_1380;
																					}
																					BgL_exitz00_1353 =
																						BGl_makezd2localzd2sexitz00zzast_localz00
																						(BgL_exitz00_1376,
																						((BgL_typez00_bglt)
																							BGl_za2exitza2z00zztype_cachez00),
																						BgL_arg1280z00_1379);
																				}
																				{	/* Ast/exit.scm 47 */
																					BgL_nodez00_bglt BgL_bodyz00_1354;

																					{	/* Ast/exit.scm 48 */
																						obj_t BgL_arg1254z00_1364;
																						obj_t BgL_arg1256z00_1365;

																						BgL_arg1254z00_1364 =
																							BGl_normaliza7ezd2prognz75zztools_prognz00
																							(BgL_bodyz00_1335);
																						BgL_arg1256z00_1365 =
																							MAKE_YOUNG_PAIR(((obj_t)
																								BgL_exitz00_1353),
																							BgL_stackz00_4);
																						BgL_bodyz00_1354 =
																							BGl_sexpzd2ze3nodez31zzast_sexpz00
																							(BgL_arg1254z00_1364,
																							BgL_arg1256z00_1365,
																							BgL_locz00_1333,
																							CNST_TABLE_REF(((long) 1)));
																					}
																					{	/* Ast/exit.scm 48 */
																						BgL_setzd2exzd2itz00_bglt
																							BgL_exitzd2bodyzd2_1355;
																						{	/* Ast/exit.scm 50 */
																							BgL_setzd2exzd2itz00_bglt
																								BgL_new1107z00_1358;
																							{	/* Ast/exit.scm 51 */
																								BgL_setzd2exzd2itz00_bglt
																									BgL_new1106z00_1362;
																								BgL_new1106z00_1362 =
																									((BgL_setzd2exzd2itz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_setzd2exzd2itz00_bgl))));
																								{	/* Ast/exit.scm 51 */
																									long BgL_arg1253z00_1363;

																									{	/* Ast/exit.scm 51 */
																										long BgL_res1366z00_1568;

																										BgL_res1366z00_1568 =
																											BGL_CLASS_INDEX
																											(BGl_setzd2exzd2itz00zzast_nodez00);
																										BgL_arg1253z00_1363 =
																											BgL_res1366z00_1568;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1106z00_1362),
																										BgL_arg1253z00_1363);
																								}
																								{	/* Ast/exit.scm 51 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_1709;
																									BgL_tmpz00_1709 =
																										((BgL_objectz00_bglt)
																										BgL_new1106z00_1362);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_1709, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1106z00_1362);
																								BgL_new1107z00_1358 =
																									BgL_new1106z00_1362;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1107z00_1358)))->
																									BgL_locz00) =
																								((obj_t) BgL_locz00_1333),
																								BUNSPEC);
																							((((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_new1107z00_1358)))->
																									BgL_typez00) =
																								((BgL_typez00_bglt)
																									BGl_strictzd2nodezd2typez00zzast_nodez00
																									(((BgL_typez00_bglt)
																											BGl_za2objza2z00zztype_cachez00),
																										((BgL_typez00_bglt)
																											BGl_za2_za2z00zztype_cachez00))),
																								BUNSPEC);
																							{
																								BgL_varz00_bglt BgL_auxz00_1720;

																								{	/* Ast/exit.scm 53 */
																									BgL_varz00_bglt
																										BgL_new1109z00_1359;
																									{	/* Ast/exit.scm 55 */
																										BgL_varz00_bglt
																											BgL_new1108z00_1360;
																										BgL_new1108z00_1360 =
																											((BgL_varz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_varz00_bgl))));
																										{	/* Ast/exit.scm 55 */
																											long BgL_arg1252z00_1361;

																											{	/* Ast/exit.scm 55 */
																												long
																													BgL_res1367z00_1573;
																												{	/* Ast/exit.scm 55 */
																													obj_t
																														BgL_classz00_1572;
																													BgL_classz00_1572 =
																														BGl_varz00zzast_nodez00;
																													BgL_res1367z00_1573 =
																														BGL_CLASS_INDEX
																														(BgL_classz00_1572);
																												}
																												BgL_arg1252z00_1361 =
																													BgL_res1367z00_1573;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1108z00_1360),
																												BgL_arg1252z00_1361);
																										}
																										BgL_new1109z00_1359 =
																											BgL_new1108z00_1360;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1109z00_1359)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_1333),
																										BUNSPEC);
																									((((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt)
																														BgL_new1109z00_1359)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BGl_strictzd2nodezd2typez00zzast_nodez00
																											(((BgL_typez00_bglt)
																													BGl_za2_za2z00zztype_cachez00),
																												((BgL_typez00_bglt)
																													BGl_za2exitza2z00zztype_cachez00))),
																										BUNSPEC);
																									((((BgL_varz00_bglt)
																												COBJECT
																												(BgL_new1109z00_1359))->
																											BgL_variablez00) =
																										((BgL_variablez00_bglt) (
																												(BgL_variablez00_bglt)
																												BgL_exitz00_1353)),
																										BUNSPEC);
																									BgL_auxz00_1720 =
																										BgL_new1109z00_1359;
																								}
																								((((BgL_setzd2exzd2itz00_bglt)
																											COBJECT
																											(BgL_new1107z00_1358))->
																										BgL_varz00) =
																									((BgL_varz00_bglt)
																										BgL_auxz00_1720), BUNSPEC);
																							}
																							((((BgL_setzd2exzd2itz00_bglt)
																										COBJECT
																										(BgL_new1107z00_1358))->
																									BgL_bodyz00) =
																								((BgL_nodez00_bglt)
																									BgL_bodyz00_1354), BUNSPEC);
																							BgL_exitzd2bodyzd2_1355 =
																								BgL_new1107z00_1358;
																						}
																						{	/* Ast/exit.scm 50 */

																							((((BgL_variablez00_bglt) COBJECT(
																											((BgL_variablez00_bglt)
																												((BgL_localz00_bglt)
																													BgL_hdlgzd2funzd2_1352))))->
																									BgL_userzf3zf3) =
																								((bool_t) ((bool_t) 1)),
																								BUNSPEC);
																							{	/* Ast/exit.scm 64 */
																								BgL_valuez00_bglt
																									BgL_arg1247z00_1356;
																								BgL_arg1247z00_1356 =
																									(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_localz00_bglt)
																													BgL_hdlgzd2funzd2_1352))))->
																									BgL_valuez00);
																								{	/* Ast/exit.scm 64 */
																									obj_t BgL_vz00_1580;

																									BgL_vz00_1580 =
																										CNST_TABLE_REF(((long) 2));
																									((((BgL_sfunz00_bglt) COBJECT(
																													((BgL_sfunz00_bglt)
																														BgL_arg1247z00_1356)))->
																											BgL_classz00) =
																										((obj_t) BgL_vz00_1580),
																										BUNSPEC);
																							}}
																							{	/* Ast/exit.scm 65 */
																								BgL_valuez00_bglt
																									BgL_arg1250z00_1357;
																								BgL_arg1250z00_1357 =
																									(((BgL_variablez00_bglt)
																										COBJECT((
																												(BgL_variablez00_bglt) (
																													(BgL_localz00_bglt)
																													BgL_hdlgzd2funzd2_1352))))->
																									BgL_valuez00);
																								((((BgL_sfunz00_bglt)
																											COBJECT((
																													(BgL_sfunz00_bglt)
																													BgL_arg1250z00_1357)))->
																										BgL_bodyz00) =
																									((obj_t) ((obj_t)
																											BgL_exitzd2bodyzd2_1355)),
																									BUNSPEC);
																							}
																							BgL_auxz00_1671 =
																								BgL_hdlgzd2nodezd2_1351;
															}}}}}}}}
															return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1671);
														}
													}
												else
													{
														BgL_nodez00_bglt BgL_auxz00_1752;

													BgL_tagzd2360zd2_1337:
														BgL_auxz00_1752 =
															BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
															(BGl_string1376z00zzast_exitz00, BgL_expz00_3,
															BgL_locz00_1333);
														return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1752);
													}
											}
										else
											{
												BgL_nodez00_bglt BgL_auxz00_1755;

												goto BgL_tagzd2360zd2_1337;
												return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1755);
											}
									}
								else
									{
										BgL_nodez00_bglt BgL_auxz00_1757;

										goto BgL_tagzd2360zd2_1337;
										return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1757);
									}
							}
						else
							{
								BgL_nodez00_bglt BgL_auxz00_1759;

								goto BgL_tagzd2360zd2_1337;
								return ((BgL_letzd2funzd2_bglt) BgL_auxz00_1759);
							}
					}
				}
			}
		}

	}



/* &set-exit->node */
	BgL_letzd2funzd2_bglt BGl_z62setzd2exitzd2ze3nodez81zzast_exitz00(obj_t
		BgL_envz00_1602, obj_t BgL_expz00_1603, obj_t BgL_stackz00_1604,
		obj_t BgL_locz00_1605, obj_t BgL_sitez00_1606)
	{
		{	/* Ast/exit.scm 33 */
			return
				BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_1603,
				BgL_stackz00_1604, BgL_locz00_1605, BgL_sitez00_1606);
		}

	}



/* jump-exit->node */
	BGL_EXPORTED_DEF BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t BgL_expz00_7,
		obj_t BgL_stackz00_8, obj_t BgL_locz00_9, obj_t BgL_sitez00_10)
	{
		{	/* Ast/exit.scm 73 */
			{	/* Ast/exit.scm 74 */
				obj_t BgL_locz00_1384;

				BgL_locz00_1384 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_7,
					BgL_locz00_9);
				{
					obj_t BgL_exitz00_1385;
					obj_t BgL_valuez00_1386;

					if (PAIRP(BgL_expz00_7))
						{	/* Ast/exit.scm 75 */
							obj_t BgL_cdrzd2385zd2_1391;

							BgL_cdrzd2385zd2_1391 = CDR(BgL_expz00_7);
							if (PAIRP(BgL_cdrzd2385zd2_1391))
								{	/* Ast/exit.scm 75 */
									BgL_exitz00_1385 = CAR(BgL_cdrzd2385zd2_1391);
									BgL_valuez00_1386 = CDR(BgL_cdrzd2385zd2_1391);
									{	/* Ast/exit.scm 77 */
										BgL_nodez00_bglt BgL_valuez00_1395;
										BgL_nodez00_bglt BgL_exitz00_1396;

										{	/* Ast/exit.scm 77 */
											obj_t BgL_arg1287z00_1400;

											BgL_arg1287z00_1400 =
												BGl_normaliza7ezd2prognz75zztools_prognz00
												(BgL_valuez00_1386);
											BgL_valuez00_1395 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1287z00_1400,
												BgL_stackz00_8, BgL_locz00_1384,
												CNST_TABLE_REF(((long) 1)));
										}
										BgL_exitz00_1396 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_exitz00_1385,
											BgL_stackz00_8, BgL_locz00_1384,
											CNST_TABLE_REF(((long) 1)));
										{	/* Ast/exit.scm 79 */
											BgL_jumpzd2exzd2itz00_bglt BgL_new1111z00_1397;

											{	/* Ast/exit.scm 80 */
												BgL_jumpzd2exzd2itz00_bglt BgL_new1110z00_1398;

												BgL_new1110z00_1398 =
													((BgL_jumpzd2exzd2itz00_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_jumpzd2exzd2itz00_bgl))));
												{	/* Ast/exit.scm 80 */
													long BgL_arg1286z00_1399;

													{	/* Ast/exit.scm 80 */
														long BgL_res1372z00_1593;

														BgL_res1372z00_1593 =
															BGL_CLASS_INDEX
															(BGl_jumpzd2exzd2itz00zzast_nodez00);
														BgL_arg1286z00_1399 = BgL_res1372z00_1593;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1110z00_1398),
														BgL_arg1286z00_1399);
												}
												{	/* Ast/exit.scm 80 */
													BgL_objectz00_bglt BgL_tmpz00_1777;

													BgL_tmpz00_1777 =
														((BgL_objectz00_bglt) BgL_new1110z00_1398);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1777, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1110z00_1398);
												BgL_new1111z00_1397 = BgL_new1110z00_1398;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1111z00_1397)))->
													BgL_locz00) = ((obj_t) BgL_locz00_1384), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1111z00_1397)))->BgL_typez00) =
												((BgL_typez00_bglt)
													BGl_strictzd2nodezd2typez00zzast_nodez00((
															(BgL_typez00_bglt)
															BGl_za2unspecza2z00zztype_cachez00),
														((BgL_typez00_bglt)
															BGl_za2_za2z00zztype_cachez00))), BUNSPEC);
											((((BgL_jumpzd2exzd2itz00_bglt)
														COBJECT(BgL_new1111z00_1397))->BgL_exitz00) =
												((BgL_nodez00_bglt) BgL_exitz00_1396), BUNSPEC);
											((((BgL_jumpzd2exzd2itz00_bglt)
														COBJECT(BgL_new1111z00_1397))->BgL_valuez00) =
												((BgL_nodez00_bglt) BgL_valuez00_1395), BUNSPEC);
											return BgL_new1111z00_1397;
										}
									}
								}
							else
								{
									BgL_nodez00_bglt BgL_auxz00_1792;

								BgL_tagzd2378zd2_1388:
									BgL_auxz00_1792 =
										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
										(BGl_string1377z00zzast_exitz00, BgL_expz00_7,
										BgL_locz00_1384);
									return ((BgL_jumpzd2exzd2itz00_bglt) BgL_auxz00_1792);
								}
						}
					else
						{
							BgL_nodez00_bglt BgL_auxz00_1795;

							goto BgL_tagzd2378zd2_1388;
							return ((BgL_jumpzd2exzd2itz00_bglt) BgL_auxz00_1795);
						}
				}
			}
		}

	}



/* &jump-exit->node */
	BgL_jumpzd2exzd2itz00_bglt BGl_z62jumpzd2exitzd2ze3nodez81zzast_exitz00(obj_t
		BgL_envz00_1607, obj_t BgL_expz00_1608, obj_t BgL_stackz00_1609,
		obj_t BgL_locz00_1610, obj_t BgL_sitez00_1611)
	{
		{	/* Ast/exit.scm 73 */
			return
				BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_1608,
				BgL_stackz00_1609, BgL_locz00_1610, BgL_sitez00_1611);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_exitz00()
	{
		{	/* Ast/exit.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1378z00zzast_exitz00));
		}

	}

#ifdef __cplusplus
}
#endif
