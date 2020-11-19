/*===========================================================================*/
/*   (Foreign/library.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/library.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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


	static obj_t BGl_z62makezd2protozd2inlinez62zzforeign_libraryz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_libraryz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzforeign_libraryz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_libraryz00();
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t
		BGl_z62registerzd2foreignzd2accesszd2identsz12za2zzforeign_libraryz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_libraryz00();
	BGL_EXPORTED_DECL obj_t
		BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00();
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_libraryz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzforeign_libraryz00();
	static obj_t BGl_genericzd2initzd2zzforeign_libraryz00();
	static obj_t BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_z62preparezd2foreignzd2accessz12z70zzforeign_libraryz00(obj_t);
	static obj_t BGl_z62makezd2definezd2inlinez62zzforeign_libraryz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzforeign_libraryz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_libraryz00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_preparezd2foreignzd2accessz12zd2envzc0zzforeign_libraryz00,
		BgL_bgl_za762prepareza7d2for1336z00,
		BGl_z62preparezd2foreignzd2accessz12z70zzforeign_libraryz00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2protozd2inlinezd2envzd2zzforeign_libraryz00,
		BgL_bgl_za762makeza7d2protoza71337za7,
		BGl_z62makezd2protozd2inlinez62zzforeign_libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2definezd2inlinezd2envzd2zzforeign_libraryz00,
		BgL_bgl_za762makeza7d2define1338z00,
		BGl_z62makezd2definezd2inlinez62zzforeign_libraryz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1329z00zzforeign_libraryz00,
		BgL_bgl_string1329za700za7za7f1339za7, "prepare-foreign-access!", 23);
	      DEFINE_STRING(BGl_string1330z00zzforeign_libraryz00,
		BgL_bgl_string1330za700za7za7f1340za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string1331z00zzforeign_libraryz00,
		BgL_bgl_string1331za700za7za7f1341za7, "foreign_library", 15);
	      DEFINE_STRING(BGl_string1332z00zzforeign_libraryz00,
		BgL_bgl_string1332za700za7za7f1342za7,
		"foreign export inline define-inline ", 36);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2foreignzd2accesszd2identsz12zd2envz12zzforeign_libraryz00,
		BgL_bgl_za762registerza7d2fo1343z00, va_generic_entry,
		BGl_z62registerzd2foreignzd2accesszd2identsz12za2zzforeign_libraryz00,
		BUNSPEC, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_libraryz00));
		     ADD_ROOT((void
				*) (&BGl_za2registeredzd2identza2zd2zzforeign_libraryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long
		BgL_checksumz00_1538, char *BgL_fromz00_1539)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_libraryz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_libraryz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_libraryz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00();
					BGl_cnstzd2initzd2zzforeign_libraryz00();
					BGl_importedzd2moduleszd2initz00zzforeign_libraryz00();
					return BGl_toplevelzd2initzd2zzforeign_libraryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_library");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_library");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			{	/* Foreign/library.scm 15 */
				obj_t BgL_cportz00_1525;

				{	/* Foreign/library.scm 15 */
					obj_t BgL_stringz00_1533;

					BgL_stringz00_1533 = BGl_string1332z00zzforeign_libraryz00;
					{	/* Foreign/library.scm 15 */
						obj_t BgL_startz00_1534;

						BgL_startz00_1534 = BINT(((long) 0));
						{	/* Foreign/library.scm 15 */
							obj_t BgL_endz00_1535;

							BgL_endz00_1535 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1533)));
							{	/* Foreign/library.scm 15 */

								BgL_cportz00_1525 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1533, BgL_startz00_1534, BgL_endz00_1535);
				}}}}
				{
					long BgL_iz00_1526;

					BgL_iz00_1526 = ((long) 3);
				BgL_loopz00_1527:
					if ((BgL_iz00_1526 == ((long) -1)))
						{	/* Foreign/library.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/library.scm 15 */
							{	/* Foreign/library.scm 15 */
								obj_t BgL_arg1334z00_1529;

								{	/* Foreign/library.scm 15 */

									{	/* Foreign/library.scm 15 */
										obj_t BgL_locationz00_1531;

										BgL_locationz00_1531 = BBOOL(((bool_t) 0));
										{	/* Foreign/library.scm 15 */

											BgL_arg1334z00_1529 =
												BGl_readz00zz__readerz00(BgL_cportz00_1525,
												BgL_locationz00_1531);
										}
									}
								}
								{	/* Foreign/library.scm 15 */
									int BgL_tmpz00_1563;

									BgL_tmpz00_1563 = (int) (BgL_iz00_1526);
									CNST_TABLE_SET(BgL_tmpz00_1563, BgL_arg1334z00_1529);
							}}
							{	/* Foreign/library.scm 15 */
								int BgL_auxz00_1532;

								BgL_auxz00_1532 = (int) ((BgL_iz00_1526 - ((long) 1)));
								{
									long BgL_iz00_1568;

									BgL_iz00_1568 = (long) (BgL_auxz00_1532);
									BgL_iz00_1526 = BgL_iz00_1568;
									goto BgL_loopz00_1527;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzforeign_libraryz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1320;

				BgL_headz00_1320 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1321;
					obj_t BgL_tailz00_1322;

					BgL_prevz00_1321 = BgL_headz00_1320;
					BgL_tailz00_1322 = BgL_l1z00_1;
				BgL_loopz00_1323:
					if (PAIRP(BgL_tailz00_1322))
						{
							obj_t BgL_newzd2prevzd2_1325;

							BgL_newzd2prevzd2_1325 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1322), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1321, BgL_newzd2prevzd2_1325);
							{
								obj_t BgL_tailz00_1578;
								obj_t BgL_prevz00_1577;

								BgL_prevz00_1577 = BgL_newzd2prevzd2_1325;
								BgL_tailz00_1578 = CDR(BgL_tailz00_1322);
								BgL_tailz00_1322 = BgL_tailz00_1578;
								BgL_prevz00_1321 = BgL_prevz00_1577;
								goto BgL_loopz00_1323;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1320);
				}
			}
		}

	}



/* make-define-inline */
	BGL_EXPORTED_DEF obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t
		BgL_protoz00_3, obj_t BgL_bodyz00_4)
	{
		{	/* Foreign/library.scm 37 */
			{	/* Foreign/library.scm 39 */
				obj_t BgL_arg1225z00_1329;

				{	/* Foreign/library.scm 39 */
					obj_t BgL_arg1227z00_1330;

					BgL_arg1227z00_1330 = MAKE_YOUNG_PAIR(BgL_bodyz00_4, BNIL);
					BgL_arg1225z00_1329 =
						MAKE_YOUNG_PAIR(BgL_protoz00_3, BgL_arg1227z00_1330);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BgL_arg1225z00_1329);
		}}

	}



/* &make-define-inline */
	obj_t BGl_z62makezd2definezd2inlinez62zzforeign_libraryz00(obj_t
		BgL_envz00_1517, obj_t BgL_protoz00_1518, obj_t BgL_bodyz00_1519)
	{
		{	/* Foreign/library.scm 37 */
			return
				BGl_makezd2definezd2inlinez00zzforeign_libraryz00(BgL_protoz00_1518,
				BgL_bodyz00_1519);
		}

	}



/* make-proto-inline */
	BGL_EXPORTED_DEF obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t
		BgL_protoz00_5)
	{
		{	/* Foreign/library.scm 45 */
			{	/* Foreign/library.scm 47 */
				obj_t BgL_arg1239z00_1334;

				BgL_arg1239z00_1334 =
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_protoz00_5, BNIL);
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BgL_arg1239z00_1334);
		}}

	}



/* &make-proto-inline */
	obj_t BGl_z62makezd2protozd2inlinez62zzforeign_libraryz00(obj_t
		BgL_envz00_1520, obj_t BgL_protoz00_1521)
	{
		{	/* Foreign/library.scm 45 */
			return
				BGl_makezd2protozd2inlinez00zzforeign_libraryz00(BgL_protoz00_1521);
		}

	}



/* register-foreign-access-idents! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t
		BgL_idsz00_6)
	{
		{	/* Foreign/library.scm 58 */
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				BGl_appendzd221011zd2zzforeign_libraryz00(BgL_idsz00_6,
					BGl_za2registeredzd2identza2zd2zzforeign_libraryz00), BUNSPEC);
		}

	}



/* &register-foreign-access-idents! */
	obj_t
		BGl_z62registerzd2foreignzd2accesszd2identsz12za2zzforeign_libraryz00(obj_t
		BgL_envz00_1522, obj_t BgL_idsz00_1523)
	{
		{	/* Foreign/library.scm 58 */
			return
				BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
				(BgL_idsz00_1523);
		}

	}



/* prepare-foreign-access! */
	BGL_EXPORTED_DEF obj_t
		BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 75 */
			{
				obj_t BgL_l1215z00_1336;

				BgL_l1215z00_1336 = BGl_za2registeredzd2identza2zd2zzforeign_libraryz00;
			BgL_zc3z04anonymousza31240ze3z87_1337:
				if (PAIRP(BgL_l1215z00_1336))
					{	/* Foreign/library.scm 76 */
						{	/* Foreign/library.scm 77 */
							obj_t BgL_idz00_1339;

							BgL_idz00_1339 = CAR(BgL_l1215z00_1336);
							{	/* Foreign/library.scm 77 */
								obj_t BgL_gz00_1340;

								BgL_gz00_1340 =
									BGl_findzd2globalzd2zzast_envz00(BgL_idz00_1339, BNIL);
								if (BGl_isazf3zf3zz__objectz00(BgL_gz00_1340,
										BGl_globalz00zzast_varz00))
									{	/* Foreign/library.scm 78 */
										{	/* Foreign/library.scm 80 */
											obj_t BgL_vz00_1513;

											BgL_vz00_1513 = CNST_TABLE_REF(((long) 2));
											((((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_gz00_1340)))->
													BgL_importz00) = ((obj_t) BgL_vz00_1513), BUNSPEC);
										}
										{	/* Foreign/library.scm 82 */
											obj_t BgL_vz00_1515;

											BgL_vz00_1515 = CNST_TABLE_REF(((long) 3));
											((((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_gz00_1340)))->
													BgL_modulez00) = ((obj_t) BgL_vz00_1515), BUNSPEC);
									}}
								else
									{	/* Foreign/library.scm 78 */
										BGl_errorz00zz__errorz00
											(BGl_string1329z00zzforeign_libraryz00,
											BGl_string1330z00zzforeign_libraryz00, BgL_idz00_1339);
									}
							}
						}
						{
							obj_t BgL_l1215z00_1605;

							BgL_l1215z00_1605 = CDR(BgL_l1215z00_1336);
							BgL_l1215z00_1336 = BgL_l1215z00_1605;
							goto BgL_zc3z04anonymousza31240ze3z87_1337;
						}
					}
				else
					{	/* Foreign/library.scm 76 */
						((bool_t) 1);
					}
			}
			return (BGl_za2registeredzd2identza2zd2zzforeign_libraryz00 =
				BNIL, BUNSPEC);
		}

	}



/* &prepare-foreign-access! */
	obj_t BGl_z62preparezd2foreignzd2accessz12z70zzforeign_libraryz00(obj_t
		BgL_envz00_1524)
	{
		{	/* Foreign/library.scm 75 */
			return BGl_preparezd2foreignzd2accessz12z12zzforeign_libraryz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_libraryz00()
	{
		{	/* Foreign/library.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1331z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1331z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1331z00zzforeign_libraryz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1331z00zzforeign_libraryz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1331z00zzforeign_libraryz00));
		}

	}

#ifdef __cplusplus
}
#endif
