/*===========================================================================*/
/*   (Bdb/bdb_initialize.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/bdb_initialize.scm) */
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


	static obj_t BGl_objectzd2initzd2zzbdb_initializa7eza7();
	static obj_t BGl_methodzd2initzd2zzbdb_initializa7eza7();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzbdb_initializa7eza7();
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzbdb_initializa7eza7();
	static obj_t BGl_genericzd2initzd2zzbdb_initializa7eza7();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_z62initializa7ezd2astz17zzbdb_initializa7eza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzbdb_initializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7();
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2astzd2envza7zzbdb_initializa7eza7,
		BgL_bgl_za762initializa7a7eza71359za7,
		BGl_z62initializa7ezd2astz17zzbdb_initializa7eza7, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1349z00zzbdb_initializa7eza7,
		BgL_bgl_string1349za700za7za7b1360za7, "((obj_t)__bdb_info)", 19);
	      DEFINE_STRING(BGl_string1350z00zzbdb_initializa7eza7,
		BgL_bgl_string1350za700za7za7b1361za7, "bdb_initialize", 14);
	      DEFINE_STRING(BGl_string1351z00zzbdb_initializa7eza7,
		BgL_bgl_string1351za700za7za7b1362za7,
		"unit bdb bdb-set-module-info! pragma::obj quote ", 48);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbdb_initializa7eza7(long
		BgL_checksumz00_1594, char *BgL_fromz00_1595)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzbdb_initializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbdb_initializa7eza7();
					BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7();
					BGl_cnstzd2initzd2zzbdb_initializa7eza7();
					BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7();
					return BGl_toplevelzd2initzd2zzbdb_initializa7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"bdb_initialize");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"bdb_initialize");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			{	/* Bdb/bdb_initialize.scm 15 */
				obj_t BgL_cportz00_1581;

				{	/* Bdb/bdb_initialize.scm 15 */
					obj_t BgL_stringz00_1589;

					BgL_stringz00_1589 = BGl_string1351z00zzbdb_initializa7eza7;
					{	/* Bdb/bdb_initialize.scm 15 */
						obj_t BgL_startz00_1590;

						BgL_startz00_1590 = BINT(((long) 0));
						{	/* Bdb/bdb_initialize.scm 15 */
							obj_t BgL_endz00_1591;

							BgL_endz00_1591 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1589)));
							{	/* Bdb/bdb_initialize.scm 15 */

								BgL_cportz00_1581 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1589, BgL_startz00_1590, BgL_endz00_1591);
				}}}}
				{
					long BgL_iz00_1582;

					BgL_iz00_1582 = ((long) 4);
				BgL_loopz00_1583:
					if ((BgL_iz00_1582 == ((long) -1)))
						{	/* Bdb/bdb_initialize.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/bdb_initialize.scm 15 */
							{	/* Bdb/bdb_initialize.scm 15 */
								obj_t BgL_arg1357z00_1585;

								{	/* Bdb/bdb_initialize.scm 15 */

									{	/* Bdb/bdb_initialize.scm 15 */
										obj_t BgL_locationz00_1587;

										BgL_locationz00_1587 = BBOOL(((bool_t) 0));
										{	/* Bdb/bdb_initialize.scm 15 */

											BgL_arg1357z00_1585 =
												BGl_readz00zz__readerz00(BgL_cportz00_1581,
												BgL_locationz00_1587);
										}
									}
								}
								{	/* Bdb/bdb_initialize.scm 15 */
									int BgL_tmpz00_1619;

									BgL_tmpz00_1619 = (int) (BgL_iz00_1582);
									CNST_TABLE_SET(BgL_tmpz00_1619, BgL_arg1357z00_1585);
							}}
							{	/* Bdb/bdb_initialize.scm 15 */
								int BgL_auxz00_1588;

								BgL_auxz00_1588 = (int) ((BgL_iz00_1582 - ((long) 1)));
								{
									long BgL_iz00_1624;

									BgL_iz00_1624 = (long) (BgL_auxz00_1588);
									BgL_iz00_1582 = BgL_iz00_1624;
									goto BgL_loopz00_1583;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* initialize-ast */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2astz75zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 42 */
			{	/* Bdb/bdb_initialize.scm 44 */
				obj_t BgL_bodyz00_1369;

				{	/* Bdb/bdb_initialize.scm 44 */
					obj_t BgL_arg1256z00_1384;

					{	/* Bdb/bdb_initialize.scm 44 */
						obj_t BgL_arg1258z00_1385;

						{	/* Bdb/bdb_initialize.scm 44 */
							obj_t BgL_arg1263z00_1386;
							obj_t BgL_arg1268z00_1387;

							{	/* Bdb/bdb_initialize.scm 44 */
								obj_t BgL_arg1270z00_1388;

								BgL_arg1270z00_1388 =
									MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
								BgL_arg1263z00_1386 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
									BgL_arg1270z00_1388);
							}
							{	/* Bdb/bdb_initialize.scm 45 */
								obj_t BgL_arg1271z00_1389;

								{	/* Bdb/bdb_initialize.scm 45 */
									obj_t BgL_arg1273z00_1390;

									BgL_arg1273z00_1390 =
										MAKE_YOUNG_PAIR(BGl_string1349z00zzbdb_initializa7eza7,
										BNIL);
									BgL_arg1271z00_1389 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
										BgL_arg1273z00_1390);
								}
								BgL_arg1268z00_1387 =
									MAKE_YOUNG_PAIR(BgL_arg1271z00_1389, BNIL);
							}
							BgL_arg1258z00_1385 =
								MAKE_YOUNG_PAIR(BgL_arg1263z00_1386, BgL_arg1268z00_1387);
						}
						BgL_arg1256z00_1384 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BgL_arg1258z00_1385);
					}
					BgL_bodyz00_1369 = MAKE_YOUNG_PAIR(BgL_arg1256z00_1384, BNIL);
				}
				{	/* Bdb/bdb_initialize.scm 46 */
					obj_t BgL_unitz00_1370;

					{	/* Bdb/bdb_initialize.scm 46 */
						obj_t BgL_idz00_1565;

						BgL_idz00_1565 = CNST_TABLE_REF(((long) 3));
						{	/* Bdb/bdb_initialize.scm 46 */
							obj_t BgL_newz00_1566;

							BgL_newz00_1566 =
								create_struct(CNST_TABLE_REF(((long) 4)), (int) (((long) 5)));
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_tmpz00_1642;

								BgL_tmpz00_1642 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_1566, BgL_tmpz00_1642, BFALSE);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_tmpz00_1645;

								BgL_tmpz00_1645 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_1566, BgL_tmpz00_1645, BTRUE);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_tmpz00_1648;

								BgL_tmpz00_1648 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_1566, BgL_tmpz00_1648, BgL_bodyz00_1369);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								obj_t BgL_auxz00_1653;
								int BgL_tmpz00_1651;

								BgL_auxz00_1653 = BINT(((long) 9));
								BgL_tmpz00_1651 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_1566, BgL_tmpz00_1651, BgL_auxz00_1653);
							}
							{	/* Bdb/bdb_initialize.scm 46 */
								int BgL_tmpz00_1656;

								BgL_tmpz00_1656 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_1566, BgL_tmpz00_1656, BgL_idz00_1565);
							}
							BgL_unitz00_1370 = BgL_newz00_1566;
					}}
					{	/* Bdb/bdb_initialize.scm 47 */
						obj_t BgL_astz00_1371;

						{	/* Bdb/bdb_initialize.scm 47 */
							obj_t BgL_arg1253z00_1382;

							{	/* Bdb/bdb_initialize.scm 47 */
								obj_t BgL_list1254z00_1383;

								BgL_list1254z00_1383 = MAKE_YOUNG_PAIR(BgL_unitz00_1370, BNIL);
								BgL_arg1253z00_1382 = BgL_list1254z00_1383;
							}
							BgL_astz00_1371 =
								BGl_buildzd2astzd2zzast_buildz00(BgL_arg1253z00_1382);
						}
						{
							obj_t BgL_l1221z00_1373;

							BgL_l1221z00_1373 = BgL_astz00_1371;
						BgL_zc3z04anonymousza31244ze3z87_1374:
							if (PAIRP(BgL_l1221z00_1373))
								{	/* Bdb/bdb_initialize.scm 48 */
									{	/* Bdb/bdb_initialize.scm 49 */
										obj_t BgL_globalz00_1376;

										BgL_globalz00_1376 = CAR(BgL_l1221z00_1373);
										{	/* Bdb/bdb_initialize.scm 49 */
											obj_t BgL_arg1246z00_1377;
											BgL_typez00_bglt BgL_arg1247z00_1378;

											BgL_arg1246z00_1377 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_globalz00_1376))))->
																BgL_valuez00))))->BgL_bodyz00);
											BgL_arg1247z00_1378 =
												(((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
																BgL_globalz00_1376))))->BgL_typez00);
											BGl_coercez12z12zzcoerce_coercez00(((BgL_nodez00_bglt)
													BgL_arg1246z00_1377), BgL_globalz00_1376,
												BgL_arg1247z00_1378, ((bool_t) 0));
										}
									}
									{
										obj_t BgL_l1221z00_1674;

										BgL_l1221z00_1674 = CDR(BgL_l1221z00_1373);
										BgL_l1221z00_1373 = BgL_l1221z00_1674;
										goto BgL_zc3z04anonymousza31244ze3z87_1374;
									}
								}
							else
								{	/* Bdb/bdb_initialize.scm 48 */
									((bool_t) 1);
								}
						}
						return BgL_astz00_1371;
					}
				}
			}
		}

	}



/* &initialize-ast */
	obj_t BGl_z62initializa7ezd2astz17zzbdb_initializa7eza7(obj_t BgL_envz00_1579)
	{
		{	/* Bdb/bdb_initialize.scm 42 */
			return BGl_initializa7ezd2astz75zzbdb_initializa7eza7();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_initializa7eza7()
	{
		{	/* Bdb/bdb_initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string1350z00zzbdb_initializa7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
