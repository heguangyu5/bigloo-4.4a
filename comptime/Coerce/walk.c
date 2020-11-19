/*===========================================================================*/
/*   (Coerce/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/walk.scm) */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_getzd2stackzd2checkz00zzcoerce_convertz00();
	static obj_t BGl_objectzd2initzd2zzcoerce_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_walkz00();
	static obj_t BGl_z62zc3z04anonymousza31272ze3ze5zzcoerce_walkz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62coercezd2walkz12za2zzcoerce_walkz00(obj_t, obj_t);
	extern obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_walkz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t
		BGl_coercezd2functionz12zc0zzcoerce_coercez00(BgL_variablez00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcoerce_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_walkz00();
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1400z00zzcoerce_walkz00,
		BgL_bgl_string1400za700za7za7c1419za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1401z00zzcoerce_walkz00,
		BgL_bgl_string1401za700za7za7c1420za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1403z00zzcoerce_walkz00,
		BgL_bgl_string1403za700za7za7c1421za7, "      type tests introduced: ", 29);
	      DEFINE_STRING(BGl_string1404z00zzcoerce_walkz00,
		BgL_bgl_string1404za700za7za7c1422za7, " error", 6);
	      DEFINE_STRING(BGl_string1405z00zzcoerce_walkz00,
		BgL_bgl_string1405za700za7za7c1423za7, "s", 1);
	      DEFINE_STRING(BGl_string1406z00zzcoerce_walkz00,
		BgL_bgl_string1406za700za7za7c1424za7, "", 0);
	      DEFINE_STRING(BGl_string1407z00zzcoerce_walkz00,
		BgL_bgl_string1407za700za7za7c1425za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1408z00zzcoerce_walkz00,
		BgL_bgl_string1408za700za7za7c1426za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1409z00zzcoerce_walkz00,
		BgL_bgl_string1409za700za7za7c1427za7, "coerce_walk", 11);
	      DEFINE_STRING(BGl_string1410z00zzcoerce_walkz00,
		BgL_bgl_string1410za700za7za7c1428za7, "export static coerce pass-started ",
		34);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1402z00zzcoerce_walkz00,
		BgL_bgl_za762za7c3za704anonymo1429za7,
		BGl_z62zc3z04anonymousza31272ze3ze5zzcoerce_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_coercezd2walkz12zd2envz12zzcoerce_walkz00,
		BgL_bgl_za762coerceza7d2walk1430z00,
		BGl_z62coercezd2walkz12za2zzcoerce_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1399z00zzcoerce_walkz00,
		BgL_bgl_string1399za700za7za7c1431za7, "Coercions & Checks", 18);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcoerce_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_walkz00(long
		BgL_checksumz00_1611, char *BgL_fromz00_1612)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_walkz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00();
					BGl_cnstzd2initzd2zzcoerce_walkz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_walkz00();
					return BGl_methodzd2initzd2zzcoerce_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			{	/* Coerce/walk.scm 15 */
				obj_t BgL_cportz00_1595;

				{	/* Coerce/walk.scm 15 */
					obj_t BgL_stringz00_1603;

					BgL_stringz00_1603 = BGl_string1410z00zzcoerce_walkz00;
					{	/* Coerce/walk.scm 15 */
						obj_t BgL_startz00_1604;

						BgL_startz00_1604 = BINT(((long) 0));
						{	/* Coerce/walk.scm 15 */
							obj_t BgL_endz00_1605;

							BgL_endz00_1605 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1603)));
							{	/* Coerce/walk.scm 15 */

								BgL_cportz00_1595 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1603, BgL_startz00_1604, BgL_endz00_1605);
				}}}}
				{
					long BgL_iz00_1596;

					BgL_iz00_1596 = ((long) 3);
				BgL_loopz00_1597:
					if ((BgL_iz00_1596 == ((long) -1)))
						{	/* Coerce/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/walk.scm 15 */
							{	/* Coerce/walk.scm 15 */
								obj_t BgL_arg1417z00_1599;

								{	/* Coerce/walk.scm 15 */

									{	/* Coerce/walk.scm 15 */
										obj_t BgL_locationz00_1601;

										BgL_locationz00_1601 = BBOOL(((bool_t) 0));
										{	/* Coerce/walk.scm 15 */

											BgL_arg1417z00_1599 =
												BGl_readz00zz__readerz00(BgL_cportz00_1595,
												BgL_locationz00_1601);
										}
									}
								}
								{	/* Coerce/walk.scm 15 */
									int BgL_tmpz00_1639;

									BgL_tmpz00_1639 = (int) (BgL_iz00_1596);
									CNST_TABLE_SET(BgL_tmpz00_1639, BgL_arg1417z00_1599);
							}}
							{	/* Coerce/walk.scm 15 */
								int BgL_auxz00_1602;

								BgL_auxz00_1602 = (int) ((BgL_iz00_1596 - ((long) 1)));
								{
									long BgL_iz00_1644;

									BgL_iz00_1644 = (long) (BgL_auxz00_1602);
									BgL_iz00_1596 = BgL_iz00_1644;
									goto BgL_loopz00_1597;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* coerce-walk! */
	BGL_EXPORTED_DEF obj_t BGl_coercezd2walkz12zc0zzcoerce_walkz00(obj_t
		BgL_astz00_3)
	{
		{	/* Coerce/walk.scm 35 */
			{	/* Coerce/walk.scm 36 */
				obj_t BgL_list1233z00_1325;

				{	/* Coerce/walk.scm 36 */
					obj_t BgL_arg1239z00_1326;

					{	/* Coerce/walk.scm 36 */
						obj_t BgL_arg1242z00_1327;

						BgL_arg1242z00_1327 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1239z00_1326 =
							MAKE_YOUNG_PAIR(BGl_string1399z00zzcoerce_walkz00,
							BgL_arg1242z00_1327);
					}
					BgL_list1233z00_1325 =
						MAKE_YOUNG_PAIR(BGl_string1400z00zzcoerce_walkz00,
						BgL_arg1239z00_1326);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1233z00_1325);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1399z00zzcoerce_walkz00;
			{	/* Coerce/walk.scm 36 */
				obj_t BgL_g1104z00_1328;

				BgL_g1104z00_1328 = BNIL;
				{
					obj_t BgL_hooksz00_1331;
					obj_t BgL_hnamesz00_1332;

					BgL_hooksz00_1331 = BgL_g1104z00_1328;
					BgL_hnamesz00_1332 = BNIL;
				BgL_zc3z04anonymousza31243ze3z87_1333:
					if (NULLP(BgL_hooksz00_1331))
						{	/* Coerce/walk.scm 36 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Coerce/walk.scm 36 */
							bool_t BgL_test1435z00_1657;

							{	/* Coerce/walk.scm 36 */
								obj_t BgL_fun1253z00_1340;

								BgL_fun1253z00_1340 = CAR(((obj_t) BgL_hooksz00_1331));
								BgL_test1435z00_1657 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1253z00_1340)
									(BgL_fun1253z00_1340, BEOA));
							}
							if (BgL_test1435z00_1657)
								{	/* Coerce/walk.scm 36 */
									obj_t BgL_arg1247z00_1337;
									obj_t BgL_arg1250z00_1338;

									BgL_arg1247z00_1337 = CDR(((obj_t) BgL_hooksz00_1331));
									BgL_arg1250z00_1338 = CDR(((obj_t) BgL_hnamesz00_1332));
									{
										obj_t BgL_hnamesz00_1669;
										obj_t BgL_hooksz00_1668;

										BgL_hooksz00_1668 = BgL_arg1247z00_1337;
										BgL_hnamesz00_1669 = BgL_arg1250z00_1338;
										BgL_hnamesz00_1332 = BgL_hnamesz00_1669;
										BgL_hooksz00_1331 = BgL_hooksz00_1668;
										goto BgL_zc3z04anonymousza31243ze3z87_1333;
									}
								}
							else
								{	/* Coerce/walk.scm 36 */
									obj_t BgL_arg1252z00_1339;

									BgL_arg1252z00_1339 = CAR(((obj_t) BgL_hnamesz00_1332));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1399z00zzcoerce_walkz00,
										BGl_string1401z00zzcoerce_walkz00, BgL_arg1252z00_1339);
								}
						}
				}
			}
			{
				obj_t BgL_l1224z00_1344;

				BgL_l1224z00_1344 = BgL_astz00_3;
			BgL_zc3z04anonymousza31255ze3z87_1345:
				if (PAIRP(BgL_l1224z00_1344))
					{	/* Coerce/walk.scm 37 */
						{	/* Coerce/walk.scm 38 */
							obj_t BgL_globalz00_1347;

							BgL_globalz00_1347 = CAR(BgL_l1224z00_1344);
							BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
							{	/* Coerce/walk.scm 39 */
								obj_t BgL_arg1258z00_1348;

								BgL_arg1258z00_1348 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1347))))->
									BgL_idz00);
								BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1258z00_1348);
							}
							{	/* Coerce/walk.scm 40 */
								bool_t BgL_arg1263z00_1349;

								if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
									{	/* Coerce/walk.scm 40 */
										BgL_arg1263z00_1349 = ((bool_t) 0);
									}
								else
									{	/* Coerce/walk.scm 40 */
										BgL_arg1263z00_1349 = ((bool_t) 1);
									}
								BGl_coercezd2functionz12zc0zzcoerce_coercez00(
									((BgL_variablez00_bglt) BgL_globalz00_1347),
									BgL_arg1263z00_1349);
							}
							BGl_leavezd2functionzd2zztools_errorz00();
						}
						{
							obj_t BgL_l1224z00_1686;

							BgL_l1224z00_1686 = CDR(BgL_l1224z00_1344);
							BgL_l1224z00_1344 = BgL_l1224z00_1686;
							goto BgL_zc3z04anonymousza31255ze3z87_1345;
						}
					}
				else
					{	/* Coerce/walk.scm 37 */
						((bool_t) 1);
					}
			}
			BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc1402z00zzcoerce_walkz00,
				BNIL);
			{	/* Coerce/walk.scm 49 */
				obj_t BgL_arg1284z00_1369;

				BgL_arg1284z00_1369 = BGl_getzd2stackzd2checkz00zzcoerce_convertz00();
				{	/* Coerce/walk.scm 49 */
					obj_t BgL_list1285z00_1370;

					{	/* Coerce/walk.scm 49 */
						obj_t BgL_arg1286z00_1371;

						{	/* Coerce/walk.scm 49 */
							obj_t BgL_arg1287z00_1372;

							BgL_arg1287z00_1372 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1286z00_1371 =
								MAKE_YOUNG_PAIR(BgL_arg1284z00_1369, BgL_arg1287z00_1372);
						}
						BgL_list1285z00_1370 =
							MAKE_YOUNG_PAIR(BGl_string1403z00zzcoerce_walkz00,
							BgL_arg1286z00_1371);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1285z00_1370);
			}}
			{	/* Coerce/walk.scm 50 */
				obj_t BgL_valuez00_1373;

				BgL_valuez00_1373 =
					BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
					BgL_astz00_3);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Coerce/walk.scm 50 */
						{	/* Coerce/walk.scm 50 */
							obj_t BgL_port1226z00_1375;

							{	/* Coerce/walk.scm 50 */
								obj_t BgL_res1394z00_1574;

								{	/* Coerce/walk.scm 50 */
									obj_t BgL_tmpz00_1702;

									BgL_tmpz00_1702 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1394z00_1574 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1702);
								}
								BgL_port1226z00_1375 = BgL_res1394z00_1574;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port1226z00_1375);
							bgl_display_string(BGl_string1404z00zzcoerce_walkz00,
								BgL_port1226z00_1375);
							{	/* Coerce/walk.scm 50 */
								obj_t BgL_arg1289z00_1376;

								{	/* Coerce/walk.scm 50 */
									bool_t BgL_test1439z00_1707;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Coerce/walk.scm 50 */
											if (INTEGERP
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Coerce/walk.scm 50 */
													BgL_test1439z00_1707 =
														(
														(long)
														CINT
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
														> ((long) 1));
												}
											else
												{	/* Coerce/walk.scm 50 */
													BgL_test1439z00_1707 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
										}}
									else
										{	/* Coerce/walk.scm 50 */
											BgL_test1439z00_1707 = ((bool_t) 0);
										}
									if (BgL_test1439z00_1707)
										{	/* Coerce/walk.scm 50 */
											BgL_arg1289z00_1376 = BGl_string1405z00zzcoerce_walkz00;
										}
									else
										{	/* Coerce/walk.scm 50 */
											BgL_arg1289z00_1376 = BGl_string1406z00zzcoerce_walkz00;
										}
								}
								bgl_display_obj(BgL_arg1289z00_1376, BgL_port1226z00_1375);
							}
							bgl_display_string(BGl_string1407z00zzcoerce_walkz00,
								BgL_port1226z00_1375);
							bgl_display_char(((unsigned char) 10), BgL_port1226z00_1375);
						}
						{	/* Coerce/walk.scm 50 */
							obj_t BgL_list1293z00_1382;

							BgL_list1293z00_1382 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list1293z00_1382);
						}
					}
				else
					{	/* Coerce/walk.scm 50 */
						obj_t BgL_g1108z00_1383;

						BgL_g1108z00_1383 = BNIL;
						{
							obj_t BgL_hooksz00_1386;
							obj_t BgL_hnamesz00_1387;

							BgL_hooksz00_1386 = BgL_g1108z00_1383;
							BgL_hnamesz00_1387 = BNIL;
						BgL_zc3z04anonymousza31294ze3z87_1388:
							if (NULLP(BgL_hooksz00_1386))
								{	/* Coerce/walk.scm 50 */
									return BgL_valuez00_1373;
								}
							else
								{	/* Coerce/walk.scm 50 */
									bool_t BgL_test1443z00_1724;

									{	/* Coerce/walk.scm 50 */
										obj_t BgL_fun1301z00_1395;

										BgL_fun1301z00_1395 = CAR(((obj_t) BgL_hooksz00_1386));
										BgL_test1443z00_1724 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1301z00_1395)
											(BgL_fun1301z00_1395, BEOA));
									}
									if (BgL_test1443z00_1724)
										{	/* Coerce/walk.scm 50 */
											obj_t BgL_arg1298z00_1392;
											obj_t BgL_arg1299z00_1393;

											BgL_arg1298z00_1392 = CDR(((obj_t) BgL_hooksz00_1386));
											BgL_arg1299z00_1393 = CDR(((obj_t) BgL_hnamesz00_1387));
											{
												obj_t BgL_hnamesz00_1736;
												obj_t BgL_hooksz00_1735;

												BgL_hooksz00_1735 = BgL_arg1298z00_1392;
												BgL_hnamesz00_1736 = BgL_arg1299z00_1393;
												BgL_hnamesz00_1387 = BgL_hnamesz00_1736;
												BgL_hooksz00_1386 = BgL_hooksz00_1735;
												goto BgL_zc3z04anonymousza31294ze3z87_1388;
											}
										}
									else
										{	/* Coerce/walk.scm 50 */
											obj_t BgL_arg1300z00_1394;

											BgL_arg1300z00_1394 = CAR(((obj_t) BgL_hnamesz00_1387));
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string1408z00zzcoerce_walkz00, BgL_arg1300z00_1394);
										}
								}
						}
					}
			}
		}

	}



/* &coerce-walk! */
	obj_t BGl_z62coercezd2walkz12za2zzcoerce_walkz00(obj_t BgL_envz00_1591,
		obj_t BgL_astz00_1592)
	{
		{	/* Coerce/walk.scm 35 */
			return BGl_coercezd2walkz12zc0zzcoerce_walkz00(BgL_astz00_1592);
		}

	}



/* &<@anonymous:1272> */
	obj_t BGl_z62zc3z04anonymousza31272ze3ze5zzcoerce_walkz00(obj_t
		BgL_envz00_1593, obj_t BgL_globalz00_1594)
	{
		{	/* Coerce/walk.scm 44 */
			{	/* Coerce/walk.scm 45 */
				bool_t BgL_test1444z00_1741;

				{	/* Coerce/walk.scm 45 */
					bool_t BgL_test1445z00_1742;

					{	/* Coerce/walk.scm 45 */
						BgL_valuez00_bglt BgL_arg1282z00_1608;

						BgL_arg1282z00_1608 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_globalz00_1594))))->BgL_valuez00);
						{	/* Coerce/walk.scm 45 */
							bool_t BgL_res1392z00_1609;

							BgL_res1392z00_1609 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1282z00_1608), BGl_funz00zzast_varz00);
							BgL_test1445z00_1742 = BgL_res1392z00_1609;
						}
					}
					if (BgL_test1445z00_1742)
						{	/* Coerce/walk.scm 45 */
							BgL_test1444z00_1741 = ((bool_t) 0);
						}
					else
						{	/* Coerce/walk.scm 46 */
							bool_t BgL__ortest_1107z00_1610;

							BgL__ortest_1107z00_1610 =
								(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_globalz00_1594)))->
									BgL_importz00) == CNST_TABLE_REF(((long) 2)));
							if (BgL__ortest_1107z00_1610)
								{	/* Coerce/walk.scm 46 */
									BgL_test1444z00_1741 = BgL__ortest_1107z00_1610;
								}
							else
								{	/* Coerce/walk.scm 46 */
									BgL_test1444z00_1741 =
										(
										(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_globalz00_1594)))->
											BgL_importz00) == CNST_TABLE_REF(((long) 3)));
				}}}
				if (BgL_test1444z00_1741)
					{	/* Coerce/walk.scm 45 */
						return
							BGl_pvariablezd2protozd2zzcoerce_pprotoz00(((long) 3),
							((BgL_variablez00_bglt) BgL_globalz00_1594));
					}
				else
					{	/* Coerce/walk.scm 45 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_walkz00()
	{
		{	/* Coerce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(((long) 44915242),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 87995526),
				BSTRING_TO_STRING(BGl_string1409z00zzcoerce_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
