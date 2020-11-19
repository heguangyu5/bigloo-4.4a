/*===========================================================================*/
/*   (Type/misc.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/misc.scm) */
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


	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	static obj_t BGl_z62typezd2disjointzf3z43zztype_miscz00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztype_miscz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_miscz00();
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zztype_miscz00();
	static obj_t BGl_z62appzd2predicatezd2ofz62zztype_miscz00(obj_t, obj_t);
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static long BGl_czd2weightze70z35zztype_miscz00(BgL_typez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zztype_miscz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zztype_miscz00();
	static obj_t BGl_genericzd2initzd2zztype_miscz00();
	static obj_t BGl_z62isazd2ofzb0zztype_miscz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2lesszd2specificzf3z91zztype_miscz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_czd2subtypezf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62czd2subtypezf3z43zztype_miscz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt, BgL_typez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_appzd2predicatezd2ofz00zztype_miscz00(BgL_appz00_bglt);
	static obj_t BGl_cnstzd2initzd2zztype_miscz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_miscz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztype_miscz00();
	static obj_t BGl_za2isaza2z00zztype_miscz00 = BUNSPEC;
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[18];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2disjointzf3zd2envzf3zztype_miscz00,
		BgL_bgl_za762typeza7d2disjoi1590z00,
		BGl_z62typezd2disjointzf3z43zztype_miscz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_appzd2predicatezd2ofzd2envzd2zztype_miscz00,
		BgL_bgl_za762appza7d2predica1591z00,
		BGl_z62appzd2predicatezd2ofz62zztype_miscz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazd2ofzd2envz00zztype_miscz00,
		BgL_bgl_za762isaza7d2ofza7b0za7za71592za7, BGl_z62isazd2ofzb0zztype_miscz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1583z00zztype_miscz00,
		BgL_bgl_string1583za700za7za7t1593za7, "type_misc", 9);
	      DEFINE_STRING(BGl_string1584z00zztype_miscz00,
		BgL_bgl_string1584za700za7za7t1594za7,
		"__object isa? real double uint64 int64 uint32 int32 uint16 int16 uint8 int8 llong elong long int short char ",
		108);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2lesszd2specificzf3zd2envz21zztype_miscz00,
		BgL_bgl_za762typeza7d2lessza7d1595za7,
		BGl_z62typezd2lesszd2specificzf3z91zztype_miscz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_czd2subtypezf3zd2envzf3zztype_miscz00,
		BgL_bgl_za762cza7d2subtypeza7f1596za7,
		BGl_z62czd2subtypezf3z43zztype_miscz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_miscz00));
		     ADD_ROOT((void *) (&BGl_za2isaza2z00zztype_miscz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long
		BgL_checksumz00_1938, char *BgL_fromz00_1939)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_miscz00))
				{
					BGl_requirezd2initializa7ationz75zztype_miscz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_miscz00();
					BGl_libraryzd2moduleszd2initz00zztype_miscz00();
					BGl_cnstzd2initzd2zztype_miscz00();
					BGl_importedzd2moduleszd2initz00zztype_miscz00();
					return BGl_toplevelzd2initzd2zztype_miscz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_misc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_misc");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_misc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_misc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_misc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"type_misc");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"type_misc");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			{	/* Type/misc.scm 15 */
				obj_t BgL_cportz00_1925;

				{	/* Type/misc.scm 15 */
					obj_t BgL_stringz00_1933;

					BgL_stringz00_1933 = BGl_string1584z00zztype_miscz00;
					{	/* Type/misc.scm 15 */
						obj_t BgL_startz00_1934;

						BgL_startz00_1934 = BINT(((long) 0));
						{	/* Type/misc.scm 15 */
							obj_t BgL_endz00_1935;

							BgL_endz00_1935 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1933)));
							{	/* Type/misc.scm 15 */

								BgL_cportz00_1925 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1933, BgL_startz00_1934, BgL_endz00_1935);
				}}}}
				{
					long BgL_iz00_1926;

					BgL_iz00_1926 = ((long) 17);
				BgL_loopz00_1927:
					if ((BgL_iz00_1926 == ((long) -1)))
						{	/* Type/misc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/misc.scm 15 */
							{	/* Type/misc.scm 15 */
								obj_t BgL_arg1588z00_1929;

								{	/* Type/misc.scm 15 */

									{	/* Type/misc.scm 15 */
										obj_t BgL_locationz00_1931;

										BgL_locationz00_1931 = BBOOL(((bool_t) 0));
										{	/* Type/misc.scm 15 */

											BgL_arg1588z00_1929 =
												BGl_readz00zz__readerz00(BgL_cportz00_1925,
												BgL_locationz00_1931);
										}
									}
								}
								{	/* Type/misc.scm 15 */
									int BgL_tmpz00_1964;

									BgL_tmpz00_1964 = (int) (BgL_iz00_1926);
									CNST_TABLE_SET(BgL_tmpz00_1964, BgL_arg1588z00_1929);
							}}
							{	/* Type/misc.scm 15 */
								int BgL_auxz00_1932;

								BgL_auxz00_1932 = (int) ((BgL_iz00_1926 - ((long) 1)));
								{
									long BgL_iz00_1969;

									BgL_iz00_1969 = (long) (BgL_auxz00_1932);
									BgL_iz00_1926 = BgL_iz00_1969;
									goto BgL_loopz00_1927;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			return (BGl_za2isaza2z00zztype_miscz00 = BFALSE, BUNSPEC);
		}

	}



/* type-less-specific? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt BgL_t1z00_3,
		BgL_typez00_bglt BgL_t2z00_4)
	{
		{	/* Type/misc.scm 38 */
			if ((((obj_t) BgL_t1z00_3) == ((obj_t) BgL_t2z00_4)))
				{	/* Type/misc.scm 40 */
					return ((bool_t) 1);
				}
			else
				{	/* Type/misc.scm 40 */
					if ((((obj_t) BgL_t2z00_4) == BGl_za2_za2z00zztype_cachez00))
						{	/* Type/misc.scm 42 */
							return ((bool_t) 0);
						}
					else
						{	/* Type/misc.scm 44 */
							bool_t BgL_test1601z00_1979;

							if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_3))
								{	/* Type/misc.scm 44 */
									if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_4))
										{	/* Type/misc.scm 44 */
											BgL_test1601z00_1979 = ((bool_t) 0);
										}
									else
										{	/* Type/misc.scm 44 */
											BgL_test1601z00_1979 = ((bool_t) 1);
										}
								}
							else
								{	/* Type/misc.scm 44 */
									BgL_test1601z00_1979 = ((bool_t) 0);
								}
							if (BgL_test1601z00_1979)
								{	/* Type/misc.scm 45 */
									BgL_typez00_bglt BgL_arg1250z00_1562;

									BgL_arg1250z00_1562 =
										BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_t2z00_4);
									return
										(((obj_t) BgL_t1z00_3) == ((obj_t) BgL_arg1250z00_1562));
								}
							else
								{	/* Type/misc.scm 46 */
									bool_t BgL_test1604z00_1988;

									if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_3))
										{	/* Type/misc.scm 46 */
											if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_4))
												{	/* Type/misc.scm 46 */
													BgL_test1604z00_1988 = ((bool_t) 0);
												}
											else
												{	/* Type/misc.scm 46 */
													BgL_test1604z00_1988 = ((bool_t) 1);
												}
										}
									else
										{	/* Type/misc.scm 46 */
											BgL_test1604z00_1988 = ((bool_t) 1);
										}
									if (BgL_test1604z00_1988)
										{	/* Type/misc.scm 46 */
											return ((bool_t) 0);
										}
									else
										{	/* Type/misc.scm 46 */
											if (BGl_typezd2subclasszf3z21zzobject_classz00
												(BgL_t2z00_4, BgL_t1z00_3))
												{	/* Type/misc.scm 48 */
													return ((bool_t) 1);
												}
											else
												{	/* Type/misc.scm 48 */
													if (
														(((obj_t) BgL_t1z00_3) ==
															BGl_za2objza2z00zztype_cachez00))
														{	/* Type/misc.scm 50 */
															return ((bool_t) 1);
														}
													else
														{	/* Type/misc.scm 50 */
															if (
																(((obj_t) BgL_t1z00_3) ==
																	BGl_za2pairzd2nilza2zd2zztype_cachez00))
																{	/* Type/misc.scm 53 */
																	bool_t BgL__ortest_1103z00_1573;

																	BgL__ortest_1103z00_1573 =
																		(
																		((obj_t) BgL_t2z00_4) ==
																		BGl_za2pairza2z00zztype_cachez00);
																	if (BgL__ortest_1103z00_1573)
																		{	/* Type/misc.scm 53 */
																			return BgL__ortest_1103z00_1573;
																		}
																	else
																		{	/* Type/misc.scm 53 */
																			bool_t BgL__ortest_1104z00_1574;

																			BgL__ortest_1104z00_1574 =
																				(
																				((obj_t) BgL_t2z00_4) ==
																				BGl_za2epairza2z00zztype_cachez00);
																			if (BgL__ortest_1104z00_1574)
																				{	/* Type/misc.scm 53 */
																					return BgL__ortest_1104z00_1574;
																				}
																			else
																				{	/* Type/misc.scm 53 */
																					return
																						(
																						((obj_t) BgL_t2z00_4) ==
																						BGl_za2bnilza2z00zztype_cachez00);
																				}
																		}
																}
															else
																{	/* Type/misc.scm 52 */
																	return ((bool_t) 0);
																}
														}
												}
										}
								}
						}
				}
		}

	}



/* &type-less-specific? */
	obj_t BGl_z62typezd2lesszd2specificzf3z91zztype_miscz00(obj_t BgL_envz00_1912,
		obj_t BgL_t1z00_1913, obj_t BgL_t2z00_1914)
	{
		{	/* Type/misc.scm 38 */
			return
				BBOOL(BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(
					((BgL_typez00_bglt) BgL_t1z00_1913),
					((BgL_typez00_bglt) BgL_t2z00_1914)));
		}

	}



/* type-disjoint? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt BgL_t1z00_5,
		BgL_typez00_bglt BgL_t2z00_6)
	{
		{	/* Type/misc.scm 63 */
			if ((((obj_t) BgL_t1z00_5) == ((obj_t) BgL_t2z00_6)))
				{	/* Type/misc.scm 65 */
					return ((bool_t) 0);
				}
			else
				{	/* Type/misc.scm 65 */
					if ((((obj_t) BgL_t2z00_6) == BGl_za2_za2z00zztype_cachez00))
						{	/* Type/misc.scm 67 */
							return ((bool_t) 0);
						}
					else
						{	/* Type/misc.scm 69 */
							bool_t BgL_test1617z00_2020;

							{	/* Type/misc.scm 69 */
								bool_t BgL_test1618z00_2021;

								if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_5))
									{	/* Type/misc.scm 69 */
										if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_6))
											{	/* Type/misc.scm 69 */
												BgL_test1618z00_2021 = ((bool_t) 0);
											}
										else
											{	/* Type/misc.scm 69 */
												BgL_test1618z00_2021 = ((bool_t) 1);
											}
									}
								else
									{	/* Type/misc.scm 69 */
										BgL_test1618z00_2021 = ((bool_t) 0);
									}
								if (BgL_test1618z00_2021)
									{	/* Type/misc.scm 69 */
										BgL_test1617z00_2020 = ((bool_t) 1);
									}
								else
									{	/* Type/misc.scm 69 */
										if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_5))
											{	/* Type/misc.scm 70 */
												BgL_test1617z00_2020 = ((bool_t) 0);
											}
										else
											{	/* Type/misc.scm 70 */
												BgL_test1617z00_2020 =
													BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_6);
											}
									}
							}
							if (BgL_test1617z00_2020)
								{	/* Type/misc.scm 73 */
									bool_t BgL_test1622z00_2029;

									if (CBOOL(BGl_findzd2coercerzd2zztype_coercionz00(BgL_t1z00_5,
												BgL_t2z00_6)))
										{	/* Type/misc.scm 73 */
											BgL_test1622z00_2029 = ((bool_t) 1);
										}
									else
										{	/* Type/misc.scm 73 */
											BgL_test1622z00_2029 =
												CBOOL(BGl_findzd2coercerzd2zztype_coercionz00
												(BgL_t2z00_6, BgL_t1z00_5));
										}
									if (BgL_test1622z00_2029)
										{	/* Type/misc.scm 73 */
											return ((bool_t) 0);
										}
									else
										{	/* Type/misc.scm 73 */
											return ((bool_t) 1);
										}
								}
							else
								{	/* Type/misc.scm 74 */
									bool_t BgL_test1625z00_2035;

									if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
										(BgL_t1z00_5, BgL_t2z00_6))
										{	/* Type/misc.scm 74 */
											BgL_test1625z00_2035 = ((bool_t) 1);
										}
									else
										{	/* Type/misc.scm 74 */
											BgL_test1625z00_2035 =
												BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
												(BgL_t2z00_6, BgL_t1z00_5);
										}
									if (BgL_test1625z00_2035)
										{	/* Type/misc.scm 74 */
											return ((bool_t) 0);
										}
									else
										{	/* Type/misc.scm 77 */
											bool_t BgL_test1628z00_2039;

											if (CBOOL(BGl_findzd2coercerzd2zztype_coercionz00
													(BgL_t1z00_5, BgL_t2z00_6)))
												{	/* Type/misc.scm 77 */
													BgL_test1628z00_2039 = ((bool_t) 1);
												}
											else
												{	/* Type/misc.scm 77 */
													BgL_test1628z00_2039 =
														CBOOL(BGl_findzd2coercerzd2zztype_coercionz00
														(BgL_t2z00_6, BgL_t1z00_5));
												}
											if (BgL_test1628z00_2039)
												{	/* Type/misc.scm 77 */
													return ((bool_t) 0);
												}
											else
												{	/* Type/misc.scm 77 */
													return ((bool_t) 1);
												}
										}
								}
						}
				}
		}

	}



/* &type-disjoint? */
	obj_t BGl_z62typezd2disjointzf3z43zztype_miscz00(obj_t BgL_envz00_1915,
		obj_t BgL_t1z00_1916, obj_t BgL_t2z00_1917)
	{
		{	/* Type/misc.scm 63 */
			return
				BBOOL(BGl_typezd2disjointzf3z21zztype_miscz00(
					((BgL_typez00_bglt) BgL_t1z00_1916),
					((BgL_typez00_bglt) BgL_t2z00_1917)));
		}

	}



/* c-subtype? */
	BGL_EXPORTED_DEF bool_t BGl_czd2subtypezf3z21zztype_miscz00(BgL_typez00_bglt
		BgL_t1z00_7, BgL_typez00_bglt BgL_t2z00_8)
	{
		{	/* Type/misc.scm 87 */
			{	/* Type/misc.scm 109 */
				bool_t BgL_test1630z00_2049;

				if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_7))
					{	/* Type/misc.scm 109 */
						BgL_test1630z00_2049 = ((bool_t) 0);
					}
				else
					{	/* Type/misc.scm 109 */
						if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t2z00_8))
							{	/* Type/misc.scm 109 */
								BgL_test1630z00_2049 = ((bool_t) 0);
							}
						else
							{	/* Type/misc.scm 109 */
								BgL_test1630z00_2049 = ((bool_t) 1);
							}
					}
				if (BgL_test1630z00_2049)
					{	/* Type/misc.scm 110 */
						long BgL_w1z00_1605;
						long BgL_w2z00_1606;

						BgL_w1z00_1605 = BGl_czd2weightze70z35zztype_miscz00(BgL_t1z00_7);
						BgL_w2z00_1606 = BGl_czd2weightze70z35zztype_miscz00(BgL_t2z00_8);
						if (((BgL_w1z00_1605 * BgL_w2z00_1606) > ((long) 0)))
							{	/* Type/misc.scm 112 */
								return (BgL_w1z00_1605 < BgL_w2z00_1606);
							}
						else
							{	/* Type/misc.scm 112 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Type/misc.scm 109 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* c-weight~0 */
	long BGl_czd2weightze70z35zztype_miscz00(BgL_typez00_bglt BgL_tz00_1611)
	{
		{	/* Type/misc.scm 107 */
			{	/* Type/misc.scm 90 */
				obj_t BgL_casezd2valuezd2_1613;

				BgL_casezd2valuezd2_1613 =
					(((BgL_typez00_bglt) COBJECT(BgL_tz00_1611))->BgL_idz00);
				if ((BgL_casezd2valuezd2_1613 == CNST_TABLE_REF(((long) 0))))
					{	/* Type/misc.scm 90 */
						return ((long) 1);
					}
				else
					{	/* Type/misc.scm 90 */
						if ((BgL_casezd2valuezd2_1613 == CNST_TABLE_REF(((long) 1))))
							{	/* Type/misc.scm 90 */
								return ((long) 2);
							}
						else
							{	/* Type/misc.scm 90 */
								if ((BgL_casezd2valuezd2_1613 == CNST_TABLE_REF(((long) 2))))
									{	/* Type/misc.scm 90 */
										return ((long) 3);
									}
								else
									{	/* Type/misc.scm 90 */
										if (
											(BgL_casezd2valuezd2_1613 == CNST_TABLE_REF(((long) 3))))
											{	/* Type/misc.scm 90 */
												return ((long) 4);
											}
										else
											{	/* Type/misc.scm 90 */
												if (
													(BgL_casezd2valuezd2_1613 ==
														CNST_TABLE_REF(((long) 4))))
													{	/* Type/misc.scm 90 */
														return ((long) 4);
													}
												else
													{	/* Type/misc.scm 90 */
														if (
															(BgL_casezd2valuezd2_1613 ==
																CNST_TABLE_REF(((long) 5))))
															{	/* Type/misc.scm 90 */
																return ((long) 5);
															}
														else
															{	/* Type/misc.scm 90 */
																if (
																	(BgL_casezd2valuezd2_1613 ==
																		CNST_TABLE_REF(((long) 6))))
																	{	/* Type/misc.scm 90 */
																		return ((long) 6);
																	}
																else
																	{	/* Type/misc.scm 90 */
																		if (
																			(BgL_casezd2valuezd2_1613 ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Type/misc.scm 90 */
																				return ((long) 7);
																			}
																		else
																			{	/* Type/misc.scm 90 */
																				if (
																					(BgL_casezd2valuezd2_1613 ==
																						CNST_TABLE_REF(((long) 8))))
																					{	/* Type/misc.scm 90 */
																						return ((long) 8);
																					}
																				else
																					{	/* Type/misc.scm 90 */
																						if (
																							(BgL_casezd2valuezd2_1613 ==
																								CNST_TABLE_REF(((long) 9))))
																							{	/* Type/misc.scm 90 */
																								return ((long) 9);
																							}
																						else
																							{	/* Type/misc.scm 90 */
																								if (
																									(BgL_casezd2valuezd2_1613 ==
																										CNST_TABLE_REF(((long)
																												10))))
																									{	/* Type/misc.scm 90 */
																										return ((long) 10);
																									}
																								else
																									{	/* Type/misc.scm 90 */
																										if (
																											(BgL_casezd2valuezd2_1613
																												==
																												CNST_TABLE_REF(((long)
																														11))))
																											{	/* Type/misc.scm 90 */
																												return ((long) 11);
																											}
																										else
																											{	/* Type/misc.scm 90 */
																												if (
																													(BgL_casezd2valuezd2_1613
																														==
																														CNST_TABLE_REF((
																																(long) 12))))
																													{	/* Type/misc.scm 90 */
																														return ((long) 12);
																													}
																												else
																													{	/* Type/misc.scm 90 */
																														if (
																															(BgL_casezd2valuezd2_1613
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		13))))
																															{	/* Type/misc.scm 90 */
																																return ((long)
																																	13);
																															}
																														else
																															{	/* Type/misc.scm 90 */
																																if (
																																	(BgL_casezd2valuezd2_1613
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				14))))
																																	{	/* Type/misc.scm 90 */
																																		return (
																																			(long)
																																			-1);
																																	}
																																else
																																	{	/* Type/misc.scm 90 */
																																		if (
																																			(BgL_casezd2valuezd2_1613
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						15))))
																																			{	/* Type/misc.scm 90 */
																																				return (
																																					(long)
																																					-2);
																																			}
																																		else
																																			{	/* Type/misc.scm 90 */
																																				return (
																																					(long)
																																					-1);
		}}}}}}}}}}}}}}}}}}

	}



/* &c-subtype? */
	obj_t BGl_z62czd2subtypezf3z43zztype_miscz00(obj_t BgL_envz00_1918,
		obj_t BgL_t1z00_1919, obj_t BgL_t2z00_1920)
	{
		{	/* Type/misc.scm 87 */
			return
				BBOOL(BGl_czd2subtypezf3z21zztype_miscz00(
					((BgL_typez00_bglt) BgL_t1z00_1919),
					((BgL_typez00_bglt) BgL_t2z00_1920)));
		}

	}



/* isa-of */
	BGL_EXPORTED_DEF obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt
		BgL_nodez00_9)
	{
		{	/* Type/misc.scm 122 */
			{	/* Type/misc.scm 123 */
				bool_t BgL_test1651z00_2113;

				{	/* Type/misc.scm 123 */
					bool_t BgL_res1578z00_1887;

					BgL_res1578z00_1887 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_nodez00_9), BGl_appz00zzast_nodez00);
					BgL_test1651z00_2113 = BgL_res1578z00_1887;
				}
				if (BgL_test1651z00_2113)
					{	/* Type/misc.scm 123 */
						{	/* Type/misc.scm 124 */
							bool_t BgL_test1652z00_2116;

							{	/* Type/misc.scm 124 */
								bool_t BgL_res1579z00_1889;

								{	/* Type/misc.scm 124 */
									obj_t BgL_objz00_1888;

									BgL_objz00_1888 = BGl_za2isaza2z00zztype_miscz00;
									BgL_res1579z00_1889 =
										BGl_isazf3zf3zz__objectz00(BgL_objz00_1888,
										BGl_globalz00zzast_varz00);
								}
								BgL_test1652z00_2116 = BgL_res1579z00_1889;
							}
							if (BgL_test1652z00_2116)
								{	/* Type/misc.scm 124 */
									BFALSE;
								}
							else
								{	/* Type/misc.scm 124 */
									BGl_za2isaza2z00zztype_miscz00 =
										BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF((
												(long) 16)), CNST_TABLE_REF(((long) 17)));
						}}
						{	/* Type/misc.scm 127 */
							bool_t BgL_test1653z00_2121;

							{	/* Type/misc.scm 127 */
								obj_t BgL_tmpz00_2122;

								BgL_tmpz00_2122 =
									(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_9)))->BgL_argsz00);
								BgL_test1653z00_2121 = PAIRP(BgL_tmpz00_2122);
							}
							if (BgL_test1653z00_2121)
								{	/* Type/misc.scm 128 */
									bool_t BgL_test1654z00_2126;

									{	/* Type/misc.scm 128 */
										bool_t BgL_test1655z00_2127;

										{	/* Type/misc.scm 128 */
											BgL_variablez00_bglt BgL_arg1327z00_1661;

											BgL_arg1327z00_1661 =
												(((BgL_varz00_bglt) COBJECT(
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_9)))->
															BgL_funz00)))->BgL_variablez00);
											BgL_test1655z00_2127 =
												(((obj_t) BgL_arg1327z00_1661) ==
												BGl_za2isaza2z00zztype_miscz00);
										}
										if (BgL_test1655z00_2127)
											{	/* Type/misc.scm 129 */
												bool_t BgL_test1656z00_2133;

												{	/* Type/misc.scm 129 */
													obj_t BgL_arg1325z00_1659;

													{	/* Type/misc.scm 129 */
														obj_t BgL_pairz00_1892;

														BgL_pairz00_1892 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_9)))->
															BgL_argsz00);
														BgL_arg1325z00_1659 = CAR(CDR(BgL_pairz00_1892));
													}
													BgL_test1656z00_2133 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1325z00_1659,
														BGl_varz00zzast_nodez00);
												}
												if (BgL_test1656z00_2133)
													{	/* Type/misc.scm 130 */
														BgL_variablez00_bglt BgL_arg1319z00_1656;

														{
															BgL_varz00_bglt BgL_auxz00_2139;

															{
																obj_t BgL_auxz00_2140;

																{	/* Type/misc.scm 130 */
																	obj_t BgL_pairz00_1897;

																	BgL_pairz00_1897 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_9)))->
																		BgL_argsz00);
																	{	/* Type/misc.scm 130 */
																		obj_t BgL_pairz00_1900;

																		BgL_pairz00_1900 = CDR(BgL_pairz00_1897);
																		BgL_auxz00_2140 = CAR(BgL_pairz00_1900);
																	}
																}
																BgL_auxz00_2139 =
																	((BgL_varz00_bglt) BgL_auxz00_2140);
															}
															BgL_arg1319z00_1656 =
																(((BgL_varz00_bglt) COBJECT(BgL_auxz00_2139))->
																BgL_variablez00);
														}
														{	/* Type/misc.scm 130 */
															bool_t BgL_res1582z00_1902;

															BgL_res1582z00_1902 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1319z00_1656),
																BGl_globalz00zzast_varz00);
															BgL_test1654z00_2126 = BgL_res1582z00_1902;
														}
													}
												else
													{	/* Type/misc.scm 129 */
														BgL_test1654z00_2126 = ((bool_t) 0);
													}
											}
										else
											{	/* Type/misc.scm 128 */
												BgL_test1654z00_2126 = ((bool_t) 0);
											}
									}
									if (BgL_test1654z00_2126)
										{	/* Type/misc.scm 131 */
											obj_t BgL_arg1314z00_1650;

											{
												BgL_variablez00_bglt BgL_auxz00_2149;

												{
													BgL_globalz00_bglt BgL_auxz00_2150;

													{
														BgL_variablez00_bglt BgL_auxz00_2151;

														{
															BgL_varz00_bglt BgL_auxz00_2152;

															{
																obj_t BgL_auxz00_2153;

																{	/* Type/misc.scm 131 */
																	obj_t BgL_pairz00_1903;

																	BgL_pairz00_1903 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_9)))->
																		BgL_argsz00);
																	{	/* Type/misc.scm 131 */
																		obj_t BgL_pairz00_1906;

																		BgL_pairz00_1906 = CDR(BgL_pairz00_1903);
																		BgL_auxz00_2153 = CAR(BgL_pairz00_1906);
																	}
																}
																BgL_auxz00_2152 =
																	((BgL_varz00_bglt) BgL_auxz00_2153);
															}
															BgL_auxz00_2151 =
																(((BgL_varz00_bglt) COBJECT(BgL_auxz00_2152))->
																BgL_variablez00);
														}
														BgL_auxz00_2150 =
															((BgL_globalz00_bglt) BgL_auxz00_2151);
													}
													BgL_auxz00_2149 =
														((BgL_variablez00_bglt) BgL_auxz00_2150);
												}
												BgL_arg1314z00_1650 =
													(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2149))->
													BgL_idz00);
											}
											return
												((obj_t)
												BGl_findzd2typezd2zztype_envz00(BgL_arg1314z00_1650));
										}
									else
										{	/* Type/misc.scm 128 */
											return BFALSE;
										}
								}
							else
								{	/* Type/misc.scm 127 */
									return BFALSE;
								}
						}
					}
				else
					{	/* Type/misc.scm 123 */
						return BFALSE;
					}
			}
		}

	}



/* &isa-of */
	obj_t BGl_z62isazd2ofzb0zztype_miscz00(obj_t BgL_envz00_1921,
		obj_t BgL_nodez00_1922)
	{
		{	/* Type/misc.scm 122 */
			return
				BGl_isazd2ofzd2zztype_miscz00(((BgL_nodez00_bglt) BgL_nodez00_1922));
		}

	}



/* app-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_appzd2predicatezd2ofz00zztype_miscz00(BgL_appz00_bglt BgL_nodez00_10)
	{
		{	/* Type/misc.scm 136 */
			{	/* Type/misc.scm 138 */
				BgL_valuez00_bglt BgL_valz00_1665;

				BgL_valz00_1665 =
					(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(
										(((BgL_appz00_bglt) COBJECT(BgL_nodez00_10))->
											BgL_funz00)))->BgL_variablez00)))->BgL_valuez00);
				{	/* Type/misc.scm 139 */
					obj_t BgL__ortest_1109z00_1666;

					BgL__ortest_1109z00_1666 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_valz00_1665)))->BgL_predicatezd2ofzd2);
					if (CBOOL(BgL__ortest_1109z00_1666))
						{	/* Type/misc.scm 139 */
							return BgL__ortest_1109z00_1666;
						}
					else
						{	/* Type/misc.scm 139 */
							return
								BGl_isazd2ofzd2zztype_miscz00(
								((BgL_nodez00_bglt) BgL_nodez00_10));
						}
				}
			}
		}

	}



/* &app-predicate-of */
	obj_t BGl_z62appzd2predicatezd2ofz62zztype_miscz00(obj_t BgL_envz00_1923,
		obj_t BgL_nodez00_1924)
	{
		{	/* Type/misc.scm 136 */
			return
				BGl_appzd2predicatezd2ofz00zztype_miscz00(
				((BgL_appz00_bglt) BgL_nodez00_1924));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_miscz00()
	{
		{	/* Type/misc.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1583z00zztype_miscz00));
		}

	}

#ifdef __cplusplus
}
#endif
