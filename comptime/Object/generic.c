/*===========================================================================*/
/*   (Object/generic.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/generic.scm) */
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


	static obj_t
		BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzobject_genericz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_genericz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_genericz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_genericz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_genericz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_genericz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_genericz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_genericz00();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_genericz00();
	static obj_t BGl_z62makezd2genericzd2bodyz62zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[14];


	   
		 
		DEFINE_STRING(BGl_string1405z00zzobject_genericz00,
		BgL_bgl_string1405za700za7za7o1419za7,
		"Illegal generic definition (no formal arguments provided)", 57);
	      DEFINE_STRING(BGl_string1406z00zzobject_genericz00,
		BgL_bgl_string1406za700za7za7o1420za7,
		"Illegal global definition (internal error)", 42);
	      DEFINE_STRING(BGl_string1407z00zzobject_genericz00,
		BgL_bgl_string1407za700za7za7o1421za7,
		"generic function has a non-class dispatching type arg", 53);
	      DEFINE_STRING(BGl_string1408z00zzobject_genericz00,
		BgL_bgl_string1408za700za7za7o1422za7, "object_generic", 14);
	      DEFINE_STRING(BGl_string1409z00zzobject_genericz00,
		BgL_bgl_string1409za700za7za7o1423za7,
		"if object? __r4_pairs_and_lists_6_3 generic-default let apply cons* _ unsafe find-method @ procedure method sgfun ",
		114);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2genericzd2bodyzd2envzd2zzobject_genericz00,
		BgL_bgl_za762makeza7d2generi1424z00,
		BGl_z62makezd2genericzd2bodyz62zzobject_genericz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_genericz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_genericz00(long
		BgL_checksumz00_987, char *BgL_fromz00_988)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_genericz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_genericz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_genericz00();
					BGl_libraryzd2moduleszd2initz00zzobject_genericz00();
					BGl_cnstzd2initzd2zzobject_genericz00();
					BGl_importedzd2moduleszd2initz00zzobject_genericz00();
					return BGl_methodzd2initzd2zzobject_genericz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_generic");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_generic");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			{	/* Object/generic.scm 15 */
				obj_t BgL_cportz00_974;

				{	/* Object/generic.scm 15 */
					obj_t BgL_stringz00_982;

					BgL_stringz00_982 = BGl_string1409z00zzobject_genericz00;
					{	/* Object/generic.scm 15 */
						obj_t BgL_startz00_983;

						BgL_startz00_983 = BINT(((long) 0));
						{	/* Object/generic.scm 15 */
							obj_t BgL_endz00_984;

							BgL_endz00_984 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_982)));
							{	/* Object/generic.scm 15 */

								BgL_cportz00_974 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_982, BgL_startz00_983, BgL_endz00_984);
				}}}}
				{
					long BgL_iz00_975;

					BgL_iz00_975 = ((long) 13);
				BgL_loopz00_976:
					if ((BgL_iz00_975 == ((long) -1)))
						{	/* Object/generic.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/generic.scm 15 */
							{	/* Object/generic.scm 15 */
								obj_t BgL_arg1417z00_978;

								{	/* Object/generic.scm 15 */

									{	/* Object/generic.scm 15 */
										obj_t BgL_locationz00_980;

										BgL_locationz00_980 = BBOOL(((bool_t) 0));
										{	/* Object/generic.scm 15 */

											BgL_arg1417z00_978 =
												BGl_readz00zz__readerz00(BgL_cportz00_974,
												BgL_locationz00_980);
										}
									}
								}
								{	/* Object/generic.scm 15 */
									int BgL_tmpz00_1013;

									BgL_tmpz00_1013 = (int) (BgL_iz00_975);
									CNST_TABLE_SET(BgL_tmpz00_1013, BgL_arg1417z00_978);
							}}
							{	/* Object/generic.scm 15 */
								int BgL_auxz00_981;

								BgL_auxz00_981 = (int) ((BgL_iz00_975 - ((long) 1)));
								{
									long BgL_iz00_1018;

									BgL_iz00_1018 = (long) (BgL_auxz00_981);
									BgL_iz00_975 = BgL_iz00_1018;
									goto BgL_loopz00_976;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-generic-body */
	BGL_EXPORTED_DEF obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t
		BgL_idz00_3, obj_t BgL_localsz00_4, obj_t BgL_argsz00_5, obj_t BgL_srcz00_6)
	{
		{	/* Object/generic.scm 34 */
			{	/* Object/generic.scm 37 */
				obj_t BgL_gz00_673;

				BgL_gz00_673 =
					BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_3,
					BGl_za2moduleza2z00zzmodule_modulez00);
				if (NULLP(BgL_argsz00_5))
					{	/* Object/generic.scm 36 */
						obj_t BgL_list1203z00_911;

						BgL_list1203z00_911 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						return
							BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_3,
							BGl_string1405z00zzobject_genericz00, BgL_srcz00_6,
							BgL_list1203z00_911);
					}
				else
					{	/* Object/generic.scm 41 */
						bool_t BgL_test1428z00_1026;

						if (BGl_isazf3zf3zz__objectz00(BgL_gz00_673,
								BGl_globalz00zzast_varz00))
							{	/* Object/generic.scm 42 */
								bool_t BgL__ortest_1063z00_719;

								{	/* Object/generic.scm 42 */
									bool_t BgL_test1430z00_1029;

									{	/* Object/generic.scm 42 */
										BgL_valuez00_bglt BgL_arg1201z00_727;

										BgL_arg1201z00_727 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_gz00_673))))->
											BgL_valuez00);
										{	/* Object/generic.scm 42 */
											bool_t BgL_res1387z00_914;

											BgL_res1387z00_914 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1201z00_727), BGl_sfunz00zzast_varz00);
											BgL_test1430z00_1029 = BgL_res1387z00_914;
										}
									}
									if (BgL_test1430z00_1029)
										{	/* Object/generic.scm 42 */
											BgL__ortest_1063z00_719 = ((bool_t) 0);
										}
									else
										{	/* Object/generic.scm 42 */
											BgL__ortest_1063z00_719 = ((bool_t) 1);
										}
								}
								if (BgL__ortest_1063z00_719)
									{	/* Object/generic.scm 42 */
										BgL_test1428z00_1026 = BgL__ortest_1063z00_719;
									}
								else
									{	/* Object/generic.scm 43 */
										bool_t BgL__ortest_1064z00_720;

										if (
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt) BgL_gz00_673))))->
																	BgL_valuez00))))->BgL_classz00) ==
												CNST_TABLE_REF(((long) 0))))
											{	/* Object/generic.scm 43 */
												BgL__ortest_1064z00_720 = ((bool_t) 0);
											}
										else
											{	/* Object/generic.scm 43 */
												BgL__ortest_1064z00_720 = ((bool_t) 1);
											}
										if (BgL__ortest_1064z00_720)
											{	/* Object/generic.scm 43 */
												BgL_test1428z00_1026 = BgL__ortest_1064z00_720;
											}
										else
											{	/* Object/generic.scm 43 */
												BgL_test1428z00_1026 =
													NULLP(
													(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_gz00_673))))->BgL_valuez00))))->
														BgL_argsz00));
											}
									}
							}
						else
							{	/* Object/generic.scm 41 */
								BgL_test1428z00_1026 = ((bool_t) 0);
							}
						if (BgL_test1428z00_1026)
							{	/* Object/generic.scm 36 */
								obj_t BgL_list1203z00_920;

								BgL_list1203z00_920 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_3,
									BGl_string1406z00zzobject_genericz00, BgL_srcz00_6,
									BgL_list1203z00_920);
							}
						else
							{	/* Object/generic.scm 47 */
								obj_t BgL_methodzd2argzd2_689;

								BgL_methodzd2argzd2_689 = CAR(((obj_t) BgL_localsz00_4));
								{	/* Object/generic.scm 47 */
									BgL_typez00_bglt BgL_methodzd2argzd2typez00_690;

									BgL_methodzd2argzd2typez00_690 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_methodzd2argzd2_689))))->
										BgL_typez00);
									{	/* Object/generic.scm 48 */
										obj_t BgL_ptypez00_691;

										if (BGl_isazf3zf3zz__objectz00(BgL_gz00_673,
												BGl_globalz00zzast_varz00))
											{	/* Object/generic.scm 49 */
												obj_t BgL_pairz00_926;

												BgL_pairz00_926 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt) BgL_gz00_673))))->
																	BgL_valuez00))))->BgL_argsz00);
												BgL_ptypez00_691 = CAR(BgL_pairz00_926);
											}
										else
											{	/* Object/generic.scm 49 */
												BgL_ptypez00_691 = BFALSE;
											}
										{	/* Object/generic.scm 49 */

											{	/* Object/generic.scm 51 */
												bool_t BgL_test1435z00_1066;

												{	/* Object/generic.scm 51 */
													bool_t BgL_test1436z00_1067;

													{	/* Object/generic.scm 51 */
														bool_t BgL_res1390z00_927;

														BgL_res1390z00_927 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_methodzd2argzd2typez00_690),
															BGl_tclassz00zzobject_classz00);
														BgL_test1436z00_1067 = BgL_res1390z00_927;
													}
													if (BgL_test1436z00_1067)
														{	/* Object/generic.scm 51 */
															BgL_test1435z00_1066 = ((bool_t) 1);
														}
													else
														{	/* Object/generic.scm 51 */
															BgL_test1435z00_1066 =
																BGl_isazf3zf3zz__objectz00(BgL_ptypez00_691,
																BGl_tclassz00zzobject_classz00);
														}
												}
												if (BgL_test1435z00_1066)
													{	/* Object/generic.scm 51 */
														return
															BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00
															(BgL_idz00_3, BgL_localsz00_4, BgL_argsz00_5,
															BgL_srcz00_6);
													}
												else
													{	/* Object/generic.scm 53 */
														bool_t BgL_test1437z00_1072;

														if (
															(((obj_t) BgL_methodzd2argzd2typez00_690) ==
																BGl_za2objza2z00zztype_cachez00))
															{	/* Object/generic.scm 54 */
																BgL_test1437z00_1072 = ((bool_t) 0);
															}
														else
															{	/* Object/generic.scm 55 */
																bool_t BgL_test1439z00_1076;

																{	/* Object/generic.scm 55 */
																	BgL_typez00_bglt BgL_arg1177z00_713;

																	BgL_arg1177z00_713 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	BgL_test1439z00_1076 =
																		(((obj_t) BgL_methodzd2argzd2typez00_690) ==
																		((obj_t) BgL_arg1177z00_713));
																}
																if (BgL_test1439z00_1076)
																	{	/* Object/generic.scm 55 */
																		BgL_test1437z00_1072 = ((bool_t) 0);
																	}
																else
																	{	/* Object/generic.scm 55 */
																		BgL_test1437z00_1072 = ((bool_t) 1);
																	}
															}
														if (BgL_test1437z00_1072)
															{	/* Object/generic.scm 36 */
																obj_t BgL_list1203z00_930;

																BgL_list1203z00_930 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																return
																	BGl_userzd2errorzd2zztools_errorz00
																	(BgL_idz00_3,
																	BGl_string1407z00zzobject_genericz00,
																	BgL_srcz00_6, BgL_list1203z00_930);
															}
														else
															{	/* Object/generic.scm 57 */
																bool_t BgL_test1440z00_1083;

																if (BGl_isazf3zf3zz__objectz00(BgL_ptypez00_691,
																		BGl_typez00zztype_typez00))
																	{	/* Object/generic.scm 57 */
																		if (
																			(BgL_ptypez00_691 ==
																				BGl_za2objza2z00zztype_cachez00))
																			{	/* Object/generic.scm 58 */
																				BgL_test1440z00_1083 = ((bool_t) 0);
																			}
																		else
																			{	/* Object/generic.scm 59 */
																				bool_t BgL_test1443z00_1088;

																				{	/* Object/generic.scm 59 */
																					BgL_typez00_bglt BgL_arg1176z00_709;

																					BgL_arg1176z00_709 =
																						BGl_getzd2defaultzd2typez00zztype_cachez00
																						();
																					BgL_test1443z00_1088 =
																						(BgL_ptypez00_691 ==
																						((obj_t) BgL_arg1176z00_709));
																				}
																				if (BgL_test1443z00_1088)
																					{	/* Object/generic.scm 59 */
																						BgL_test1440z00_1083 = ((bool_t) 0);
																					}
																				else
																					{	/* Object/generic.scm 59 */
																						BgL_test1440z00_1083 = ((bool_t) 1);
																					}
																			}
																	}
																else
																	{	/* Object/generic.scm 57 */
																		BgL_test1440z00_1083 = ((bool_t) 0);
																	}
																if (BgL_test1440z00_1083)
																	{	/* Object/generic.scm 36 */
																		obj_t BgL_list1203z00_932;

																		BgL_list1203z00_932 =
																			MAKE_YOUNG_PAIR(BNIL, BNIL);
																		return
																			BGl_userzd2errorzd2zztools_errorz00
																			(BgL_idz00_3,
																			BGl_string1407z00zzobject_genericz00,
																			BgL_srcz00_6, BgL_list1203z00_932);
																	}
																else
																	{	/* Object/generic.scm 57 */
																		return
																			BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00
																			(BgL_idz00_3, BgL_localsz00_4,
																			BgL_argsz00_5, BgL_srcz00_6);
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



/* &make-generic-body */
	obj_t BGl_z62makezd2genericzd2bodyz62zzobject_genericz00(obj_t BgL_envz00_969,
		obj_t BgL_idz00_970, obj_t BgL_localsz00_971, obj_t BgL_argsz00_972,
		obj_t BgL_srcz00_973)
	{
		{	/* Object/generic.scm 34 */
			return
				BGl_makezd2genericzd2bodyz00zzobject_genericz00(BgL_idz00_970,
				BgL_localsz00_971, BgL_argsz00_972, BgL_srcz00_973);
		}

	}



/* make-object-generic-body */
	obj_t BGl_makezd2objectzd2genericzd2bodyzd2zzobject_genericz00(obj_t
		BgL_idz00_7, obj_t BgL_localsz00_8, obj_t BgL_argsz00_9,
		obj_t BgL_srcz00_10)
	{
		{	/* Object/generic.scm 67 */
			{	/* Object/generic.scm 68 */
				obj_t BgL_pidz00_732;

				BgL_pidz00_732 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_7,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_10));
				{	/* Object/generic.scm 68 */
					obj_t BgL_idz00_733;

					BgL_idz00_733 = CAR(BgL_pidz00_732);
					{	/* Object/generic.scm 69 */
						long BgL_arityz00_734;

						BgL_arityz00_734 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_9);
						{	/* Object/generic.scm 70 */
							obj_t BgL_argszd2idzd2_735;

							if (NULLP(BgL_localsz00_8))
								{	/* Object/generic.scm 71 */
									BgL_argszd2idzd2_735 = BNIL;
								}
							else
								{	/* Object/generic.scm 71 */
									obj_t BgL_head1112z00_763;

									{	/* Object/generic.scm 71 */
										obj_t BgL_arg1270z00_775;

										BgL_arg1270z00_775 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(((obj_t) BgL_localsz00_8))))))->BgL_idz00);
										{	/* Object/generic.scm 71 */
											obj_t BgL_res1395z00_937;

											BgL_res1395z00_937 =
												MAKE_YOUNG_PAIR(BgL_arg1270z00_775, BNIL);
											BgL_head1112z00_763 = BgL_res1395z00_937;
										}
									}
									{	/* Object/generic.scm 71 */
										obj_t BgL_g1116z00_764;

										BgL_g1116z00_764 = CDR(((obj_t) BgL_localsz00_8));
										{
											obj_t BgL_l1110z00_766;
											obj_t BgL_tail1113z00_767;

											BgL_l1110z00_766 = BgL_g1116z00_764;
											BgL_tail1113z00_767 = BgL_head1112z00_763;
										BgL_zc3z04anonymousza31256ze3z87_768:
											if (NULLP(BgL_l1110z00_766))
												{	/* Object/generic.scm 71 */
													BgL_argszd2idzd2_735 = BgL_head1112z00_763;
												}
											else
												{	/* Object/generic.scm 71 */
													obj_t BgL_newtail1114z00_770;

													{	/* Object/generic.scm 71 */
														obj_t BgL_arg1263z00_772;

														BgL_arg1263z00_772 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_l1110z00_766))))))->
															BgL_idz00);
														{	/* Object/generic.scm 71 */
															obj_t BgL_res1397z00_942;

															BgL_res1397z00_942 =
																MAKE_YOUNG_PAIR(BgL_arg1263z00_772, BNIL);
															BgL_newtail1114z00_770 = BgL_res1397z00_942;
														}
													}
													SET_CDR(BgL_tail1113z00_767, BgL_newtail1114z00_770);
													{	/* Object/generic.scm 71 */
														obj_t BgL_arg1258z00_771;

														BgL_arg1258z00_771 =
															CDR(((obj_t) BgL_l1110z00_766));
														{
															obj_t BgL_tail1113z00_1122;
															obj_t BgL_l1110z00_1121;

															BgL_l1110z00_1121 = BgL_arg1258z00_771;
															BgL_tail1113z00_1122 = BgL_newtail1114z00_770;
															BgL_tail1113z00_767 = BgL_tail1113z00_1122;
															BgL_l1110z00_766 = BgL_l1110z00_1121;
															goto BgL_zc3z04anonymousza31256ze3z87_768;
														}
													}
												}
										}
									}
								}
							{	/* Object/generic.scm 71 */
								obj_t BgL_methodzd2argzd2_736;

								BgL_methodzd2argzd2_736 = CAR(((obj_t) BgL_localsz00_8));
								{	/* Object/generic.scm 72 */
									obj_t BgL_methodzd2argzd2idz00_737;

									BgL_methodzd2argzd2idz00_737 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_methodzd2argzd2_736))))->
										BgL_idz00);
									{	/* Object/generic.scm 74 */
										obj_t BgL_methodz00_739;

										BgL_methodz00_739 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													1)));
										{	/* Object/generic.scm 75 */
											obj_t BgL_tmethodz00_740;

											BgL_tmethodz00_740 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_methodz00_739, CNST_TABLE_REF(((long) 2)));
											{	/* Object/generic.scm 76 */

												{	/* Object/generic.scm 78 */
													obj_t BgL_arg1208z00_741;

													{	/* Object/generic.scm 78 */
														obj_t BgL_arg1211z00_742;
														obj_t BgL_arg1216z00_743;

														{	/* Object/generic.scm 78 */
															obj_t BgL_arg1221z00_744;

															{	/* Object/generic.scm 78 */
																obj_t BgL_arg1223z00_745;

																{	/* Object/generic.scm 78 */
																	obj_t BgL_arg1225z00_746;

																	{	/* Object/generic.scm 78 */
																		obj_t BgL_arg1227z00_747;

																		{	/* Object/generic.scm 78 */
																			obj_t BgL_arg1229z00_749;

																			{	/* Object/generic.scm 78 */
																				obj_t BgL_arg1232z00_750;

																				{	/* Object/generic.scm 78 */
																					obj_t BgL_arg1239z00_751;

																					{	/* Object/generic.scm 78 */
																						obj_t BgL_arg1242z00_752;

																						{	/* Object/generic.scm 78 */
																							obj_t BgL_arg1243z00_753;

																							BgL_arg1243z00_753 =
																								MAKE_YOUNG_PAIR
																								(BGl_za2moduleza2z00zzmodule_modulez00,
																								BNIL);
																							BgL_arg1242z00_752 =
																								MAKE_YOUNG_PAIR(BgL_idz00_733,
																								BgL_arg1243z00_753);
																						}
																						BgL_arg1239z00_751 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 3)),
																							BgL_arg1242z00_752);
																					}
																					BgL_arg1232z00_750 =
																						MAKE_YOUNG_PAIR(BgL_arg1239z00_751,
																						BNIL);
																				}
																				BgL_arg1229z00_749 =
																					MAKE_YOUNG_PAIR
																					(BgL_methodzd2argzd2idz00_737,
																					BgL_arg1232z00_750);
																			}
																			BgL_arg1227z00_747 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						4)), BgL_arg1229z00_749);
																		}
																		{	/* Object/generic.scm 77 */
																			obj_t BgL_list1228z00_748;

																			BgL_list1228z00_748 =
																				MAKE_YOUNG_PAIR(BgL_arg1227z00_747,
																				BNIL);
																			BgL_arg1225z00_746 =
																				BGl_makezd2privatezd2sexpz00zzast_privatez00
																				(CNST_TABLE_REF(((long) 5)),
																				CNST_TABLE_REF(((long) 6)),
																				BgL_list1228z00_748);
																	}}
																	BgL_arg1223z00_745 =
																		MAKE_YOUNG_PAIR(BgL_arg1225z00_746, BNIL);
																}
																BgL_arg1221z00_744 =
																	MAKE_YOUNG_PAIR(BgL_tmethodz00_740,
																	BgL_arg1223z00_745);
															}
															BgL_arg1211z00_742 =
																MAKE_YOUNG_PAIR(BgL_arg1221z00_744, BNIL);
														}
														{	/* Object/generic.scm 79 */
															obj_t BgL_arg1245z00_754;

															if ((BgL_arityz00_734 >= ((long) 0)))
																{	/* Object/generic.scm 79 */
																	BgL_arg1245z00_754 =
																		MAKE_YOUNG_PAIR(BgL_methodz00_739,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_argszd2idzd2_735, BNIL));
																}
															else
																{	/* Object/generic.scm 81 */
																	obj_t BgL_arg1250z00_757;

																	{	/* Object/generic.scm 81 */
																		obj_t BgL_arg1252z00_758;

																		{	/* Object/generic.scm 81 */
																			obj_t BgL_arg1253z00_759;

																			{	/* Object/generic.scm 81 */
																				obj_t BgL_arg1254z00_760;

																				BgL_arg1254z00_760 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_argszd2idzd2_735, BNIL);
																				BgL_arg1253z00_759 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							7)), BgL_arg1254z00_760);
																			}
																			BgL_arg1252z00_758 =
																				MAKE_YOUNG_PAIR(BgL_arg1253z00_759,
																				BNIL);
																		}
																		BgL_arg1250z00_757 =
																			MAKE_YOUNG_PAIR(BgL_methodz00_739,
																			BgL_arg1252z00_758);
																	}
																	BgL_arg1245z00_754 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																		BgL_arg1250z00_757);
																}
															BgL_arg1216z00_743 =
																MAKE_YOUNG_PAIR(BgL_arg1245z00_754, BNIL);
														}
														BgL_arg1208z00_741 =
															MAKE_YOUNG_PAIR(BgL_arg1211z00_742,
															BgL_arg1216z00_743);
													}
													return
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
														BgL_arg1208z00_741);
		}}}}}}}}}}}

	}



/* make-non-object-generic-body */
	obj_t BGl_makezd2nonzd2objectzd2genericzd2bodyz00zzobject_genericz00(obj_t
		BgL_idz00_11, obj_t BgL_localsz00_12, obj_t BgL_argsz00_13,
		obj_t BgL_srcz00_14)
	{
		{	/* Object/generic.scm 86 */
			{	/* Object/generic.scm 87 */
				obj_t BgL_pidz00_778;

				BgL_pidz00_778 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_11,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_14));
				{	/* Object/generic.scm 87 */
					obj_t BgL_idz00_779;

					BgL_idz00_779 = CAR(BgL_pidz00_778);
					{	/* Object/generic.scm 88 */
						long BgL_arityz00_780;

						BgL_arityz00_780 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_13);
						{	/* Object/generic.scm 89 */
							obj_t BgL_argszd2idzd2_781;

							if (NULLP(BgL_localsz00_12))
								{	/* Object/generic.scm 90 */
									BgL_argszd2idzd2_781 = BNIL;
								}
							else
								{	/* Object/generic.scm 90 */
									obj_t BgL_head1119z00_835;

									{	/* Object/generic.scm 90 */
										obj_t BgL_arg1338z00_847;

										BgL_arg1338z00_847 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(((obj_t) BgL_localsz00_12))))))->BgL_idz00);
										{	/* Object/generic.scm 90 */
											obj_t BgL_res1400z00_954;

											BgL_res1400z00_954 =
												MAKE_YOUNG_PAIR(BgL_arg1338z00_847, BNIL);
											BgL_head1119z00_835 = BgL_res1400z00_954;
										}
									}
									{	/* Object/generic.scm 90 */
										obj_t BgL_g1122z00_836;

										BgL_g1122z00_836 = CDR(((obj_t) BgL_localsz00_12));
										{
											obj_t BgL_l1117z00_838;
											obj_t BgL_tail1120z00_839;

											BgL_l1117z00_838 = BgL_g1122z00_836;
											BgL_tail1120z00_839 = BgL_head1119z00_835;
										BgL_zc3z04anonymousza31330ze3z87_840:
											if (NULLP(BgL_l1117z00_838))
												{	/* Object/generic.scm 90 */
													BgL_argszd2idzd2_781 = BgL_head1119z00_835;
												}
											else
												{	/* Object/generic.scm 90 */
													obj_t BgL_newtail1121z00_842;

													{	/* Object/generic.scm 90 */
														obj_t BgL_arg1335z00_844;

														BgL_arg1335z00_844 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_l1117z00_838))))))->
															BgL_idz00);
														{	/* Object/generic.scm 90 */
															obj_t BgL_res1402z00_959;

															BgL_res1402z00_959 =
																MAKE_YOUNG_PAIR(BgL_arg1335z00_844, BNIL);
															BgL_newtail1121z00_842 = BgL_res1402z00_959;
														}
													}
													SET_CDR(BgL_tail1120z00_839, BgL_newtail1121z00_842);
													{	/* Object/generic.scm 90 */
														obj_t BgL_arg1334z00_843;

														BgL_arg1334z00_843 =
															CDR(((obj_t) BgL_l1117z00_838));
														{
															obj_t BgL_tail1120z00_1188;
															obj_t BgL_l1117z00_1187;

															BgL_l1117z00_1187 = BgL_arg1334z00_843;
															BgL_tail1120z00_1188 = BgL_newtail1121z00_842;
															BgL_tail1120z00_839 = BgL_tail1120z00_1188;
															BgL_l1117z00_838 = BgL_l1117z00_1187;
															goto BgL_zc3z04anonymousza31330ze3z87_840;
														}
													}
												}
										}
									}
								}
							{	/* Object/generic.scm 90 */
								obj_t BgL_defaultzd2bodyzd2_782;

								if ((BgL_arityz00_780 >= ((long) 0)))
									{	/* Object/generic.scm 93 */
										obj_t BgL_arg1306z00_815;
										obj_t BgL_arg1307z00_816;

										{	/* Object/generic.scm 93 */
											obj_t BgL_arg1308z00_817;

											{	/* Object/generic.scm 93 */
												obj_t BgL_arg1309z00_818;

												{	/* Object/generic.scm 93 */
													obj_t BgL_arg1310z00_819;

													{	/* Object/generic.scm 93 */
														obj_t BgL_arg1311z00_820;

														BgL_arg1311z00_820 =
															MAKE_YOUNG_PAIR
															(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
														BgL_arg1310z00_819 =
															MAKE_YOUNG_PAIR(BgL_idz00_779,
															BgL_arg1311z00_820);
													}
													BgL_arg1309z00_818 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
														BgL_arg1310z00_819);
												}
												BgL_arg1308z00_817 =
													MAKE_YOUNG_PAIR(BgL_arg1309z00_818, BNIL);
											}
											BgL_arg1306z00_815 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
												BgL_arg1308z00_817);
										}
										BgL_arg1307z00_816 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_argszd2idzd2_781, BNIL);
										BgL_defaultzd2bodyzd2_782 =
											MAKE_YOUNG_PAIR(BgL_arg1306z00_815, BgL_arg1307z00_816);
									}
								else
									{	/* Object/generic.scm 96 */
										obj_t BgL_arg1312z00_821;

										{	/* Object/generic.scm 96 */
											obj_t BgL_arg1314z00_822;
											obj_t BgL_arg1315z00_823;

											{	/* Object/generic.scm 96 */
												obj_t BgL_arg1316z00_824;

												{	/* Object/generic.scm 96 */
													obj_t BgL_arg1317z00_825;

													{	/* Object/generic.scm 96 */
														obj_t BgL_arg1319z00_826;

														{	/* Object/generic.scm 96 */
															obj_t BgL_arg1322z00_827;

															BgL_arg1322z00_827 =
																MAKE_YOUNG_PAIR
																(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
															BgL_arg1319z00_826 =
																MAKE_YOUNG_PAIR(BgL_idz00_779,
																BgL_arg1322z00_827);
														}
														BgL_arg1317z00_825 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
															BgL_arg1319z00_826);
													}
													BgL_arg1316z00_824 =
														MAKE_YOUNG_PAIR(BgL_arg1317z00_825, BNIL);
												}
												BgL_arg1314z00_822 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
													BgL_arg1316z00_824);
											}
											{	/* Object/generic.scm 97 */
												obj_t BgL_arg1324z00_828;

												{	/* Object/generic.scm 97 */
													obj_t BgL_arg1325z00_829;
													obj_t BgL_arg1326z00_830;

													{	/* Object/generic.scm 97 */
														obj_t BgL_arg1327z00_831;

														{	/* Object/generic.scm 97 */
															obj_t BgL_arg1328z00_832;

															BgL_arg1328z00_832 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
																BNIL);
															BgL_arg1327z00_831 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1328z00_832);
														}
														BgL_arg1325z00_829 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
															BgL_arg1327z00_831);
													}
													BgL_arg1326z00_830 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_argszd2idzd2_781, BNIL);
													BgL_arg1324z00_828 =
														MAKE_YOUNG_PAIR(BgL_arg1325z00_829,
														BgL_arg1326z00_830);
												}
												BgL_arg1315z00_823 =
													MAKE_YOUNG_PAIR(BgL_arg1324z00_828, BNIL);
											}
											BgL_arg1312z00_821 =
												MAKE_YOUNG_PAIR(BgL_arg1314z00_822, BgL_arg1315z00_823);
										}
										BgL_defaultzd2bodyzd2_782 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
											BgL_arg1312z00_821);
									}
								{	/* Object/generic.scm 91 */
									obj_t BgL_methodzd2argzd2_783;

									BgL_methodzd2argzd2_783 = CAR(((obj_t) BgL_localsz00_12));
									{	/* Object/generic.scm 100 */
										obj_t BgL_methodzd2argzd2idz00_784;

										BgL_methodzd2argzd2idz00_784 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_methodzd2argzd2_783))))->
											BgL_idz00);
										{	/* Object/generic.scm 102 */
											obj_t BgL_methodz00_786;

											BgL_methodz00_786 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 1)));
											{	/* Object/generic.scm 103 */
												obj_t BgL_tmethodz00_787;

												BgL_tmethodz00_787 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_methodz00_786, CNST_TABLE_REF(((long) 2)));
												{	/* Object/generic.scm 104 */
													obj_t BgL_appzd2lyzd2methodz00_788;

													{	/* Object/generic.scm 109 */
														obj_t BgL_arg1281z00_794;

														{	/* Object/generic.scm 109 */
															obj_t BgL_arg1282z00_795;
															obj_t BgL_arg1284z00_796;

															{	/* Object/generic.scm 109 */
																obj_t BgL_arg1285z00_797;

																{	/* Object/generic.scm 109 */
																	obj_t BgL_arg1286z00_798;

																	{	/* Object/generic.scm 109 */
																		obj_t BgL_arg1287z00_799;

																		{	/* Object/generic.scm 109 */
																			obj_t BgL_arg1288z00_800;

																			{	/* Object/generic.scm 109 */
																				obj_t BgL_arg1290z00_802;

																				{	/* Object/generic.scm 109 */
																					obj_t BgL_arg1291z00_803;

																					{	/* Object/generic.scm 109 */
																						obj_t BgL_arg1292z00_804;

																						{	/* Object/generic.scm 109 */
																							obj_t BgL_arg1295z00_805;

																							{	/* Object/generic.scm 109 */
																								obj_t BgL_arg1296z00_806;

																								BgL_arg1296z00_806 =
																									MAKE_YOUNG_PAIR
																									(BGl_za2moduleza2z00zzmodule_modulez00,
																									BNIL);
																								BgL_arg1295z00_805 =
																									MAKE_YOUNG_PAIR(BgL_idz00_779,
																									BgL_arg1296z00_806);
																							}
																							BgL_arg1292z00_804 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 3)),
																								BgL_arg1295z00_805);
																						}
																						BgL_arg1291z00_803 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1292z00_804, BNIL);
																					}
																					BgL_arg1290z00_802 =
																						MAKE_YOUNG_PAIR
																						(BgL_methodzd2argzd2idz00_784,
																						BgL_arg1291z00_803);
																				}
																				BgL_arg1288z00_800 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							4)), BgL_arg1290z00_802);
																			}
																			{	/* Object/generic.scm 106 */
																				obj_t BgL_list1289z00_801;

																				BgL_list1289z00_801 =
																					MAKE_YOUNG_PAIR(BgL_arg1288z00_800,
																					BNIL);
																				BgL_arg1287z00_799 =
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(CNST_TABLE_REF(((long) 5)),
																					CNST_TABLE_REF(((long) 6)),
																					BgL_list1289z00_801);
																		}}
																		BgL_arg1286z00_798 =
																			MAKE_YOUNG_PAIR(BgL_arg1287z00_799, BNIL);
																	}
																	BgL_arg1285z00_797 =
																		MAKE_YOUNG_PAIR(BgL_tmethodz00_787,
																		BgL_arg1286z00_798);
																}
																BgL_arg1282z00_795 =
																	MAKE_YOUNG_PAIR(BgL_arg1285z00_797, BNIL);
															}
															{	/* Object/generic.scm 110 */
																obj_t BgL_arg1297z00_807;

																if ((BgL_arityz00_780 >= ((long) 0)))
																	{	/* Object/generic.scm 110 */
																		BgL_arg1297z00_807 =
																			MAKE_YOUNG_PAIR(BgL_methodz00_786,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_argszd2idzd2_781, BNIL));
																	}
																else
																	{	/* Object/generic.scm 112 */
																		obj_t BgL_arg1300z00_810;

																		{	/* Object/generic.scm 112 */
																			obj_t BgL_arg1301z00_811;

																			{	/* Object/generic.scm 112 */
																				obj_t BgL_arg1303z00_812;

																				{	/* Object/generic.scm 112 */
																					obj_t BgL_arg1304z00_813;

																					BgL_arg1304z00_813 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_argszd2idzd2_781, BNIL);
																					BgL_arg1303z00_812 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 7)), BgL_arg1304z00_813);
																				}
																				BgL_arg1301z00_811 =
																					MAKE_YOUNG_PAIR(BgL_arg1303z00_812,
																					BNIL);
																			}
																			BgL_arg1300z00_810 =
																				MAKE_YOUNG_PAIR(BgL_methodz00_786,
																				BgL_arg1301z00_811);
																		}
																		BgL_arg1297z00_807 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					8)), BgL_arg1300z00_810);
																	}
																BgL_arg1284z00_796 =
																	MAKE_YOUNG_PAIR(BgL_arg1297z00_807, BNIL);
															}
															BgL_arg1281z00_794 =
																MAKE_YOUNG_PAIR(BgL_arg1282z00_795,
																BgL_arg1284z00_796);
														}
														BgL_appzd2lyzd2methodz00_788 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
															BgL_arg1281z00_794);
													}
													{	/* Object/generic.scm 105 */

														{	/* Object/generic.scm 114 */
															obj_t BgL_arg1274z00_789;

															{	/* Object/generic.scm 114 */
																obj_t BgL_arg1275z00_790;
																obj_t BgL_arg1276z00_791;

																{	/* Object/generic.scm 114 */
																	obj_t BgL_arg1277z00_792;

																	BgL_arg1277z00_792 =
																		MAKE_YOUNG_PAIR
																		(BgL_methodzd2argzd2idz00_784, BNIL);
																	BgL_arg1275z00_790 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																		BgL_arg1277z00_792);
																}
																{	/* Object/generic.scm 114 */
																	obj_t BgL_arg1280z00_793;

																	BgL_arg1280z00_793 =
																		MAKE_YOUNG_PAIR(BgL_defaultzd2bodyzd2_782,
																		BNIL);
																	BgL_arg1276z00_791 =
																		MAKE_YOUNG_PAIR
																		(BgL_appzd2lyzd2methodz00_788,
																		BgL_arg1280z00_793);
																}
																BgL_arg1274z00_789 =
																	MAKE_YOUNG_PAIR(BgL_arg1275z00_790,
																	BgL_arg1276z00_791);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																BgL_arg1274z00_789);
		}}}}}}}}}}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_genericz00()
	{
		{	/* Object/generic.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1408z00zzobject_genericz00));
		}

	}

#ifdef __cplusplus
}
#endif
