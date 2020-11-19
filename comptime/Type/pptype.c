/*===========================================================================*/
/*   (Type/pptype.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/pptype.scm) */
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


	static obj_t BGl_objectzd2initzd2zztype_pptypez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_pptypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	static obj_t BGl_z62variablezd2typezd2ze3stringz81zztype_pptypez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztype_pptypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	static obj_t BGl_z62functionzd2typezd2ze3stringz81zztype_pptypez00(obj_t,
		obj_t);
	static obj_t BGl_loopze70ze7zztype_pptypez00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_pptypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_pptypez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_pptypez00();
	static obj_t BGl_importedzd2moduleszd2initz00zztype_pptypez00();
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2typezd2ze3stringzd2envz31zztype_pptypez00,
		BgL_bgl_za762variableza7d2ty1185z00,
		BGl_z62variablezd2typezd2ze3stringz81zztype_pptypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_functionzd2typezd2ze3stringzd2envz31zztype_pptypez00,
		BgL_bgl_za762functionza7d2ty1186z00,
		BGl_z62functionzd2typezd2ze3stringz81zztype_pptypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1181z00zztype_pptypez00,
		BgL_bgl_string1181za700za7za7t1187za7, " -> ", 4);
	      DEFINE_STRING(BGl_string1182z00zztype_pptypez00,
		BgL_bgl_string1182za700za7za7t1188za7, "", 0);
	      DEFINE_STRING(BGl_string1183z00zztype_pptypez00,
		BgL_bgl_string1183za700za7za7t1189za7, " x ", 3);
	      DEFINE_STRING(BGl_string1184z00zztype_pptypez00,
		BgL_bgl_string1184za700za7za7t1190za7, "type_pptype", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_pptypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long
		BgL_checksumz00_523, char *BgL_fromz00_524)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_pptypez00))
				{
					BGl_requirezd2initializa7ationz75zztype_pptypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_pptypez00();
					BGl_libraryzd2moduleszd2initz00zztype_pptypez00();
					BGl_importedzd2moduleszd2initz00zztype_pptypez00();
					return BGl_methodzd2initzd2zztype_pptypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_pptype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"type_pptype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_pptype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_pptype");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* function-type->string */
	BGL_EXPORTED_DEF obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt
		BgL_variablez00_4)
	{
		{	/* Type/pptype.scm 32 */
			{	/* Type/pptype.scm 33 */
				BgL_valuez00_bglt BgL_sfunz00_432;

				BgL_sfunz00_432 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_4))->BgL_valuez00);
				{	/* Type/pptype.scm 34 */
					obj_t BgL_arg1109z00_433;
					obj_t BgL_arg1110z00_434;

					{	/* Type/pptype.scm 34 */
						obj_t BgL_g1059z00_435;

						BgL_g1059z00_435 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_sfunz00_432)))->BgL_argsz00);
						BgL_arg1109z00_433 =
							BGl_loopze70ze7zztype_pptypez00(BgL_g1059z00_435);
					}
					{	/* Type/pptype.scm 47 */
						obj_t BgL_arg1126z00_452;

						{	/* Type/pptype.scm 47 */
							obj_t BgL_arg1127z00_453;

							BgL_arg1127z00_453 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_4))->
											BgL_typez00)))->BgL_idz00);
							{	/* Type/pptype.scm 47 */
								obj_t BgL_res1179z00_513;

								{	/* Type/pptype.scm 47 */
									obj_t BgL_arg1466z00_512;

									BgL_arg1466z00_512 = SYMBOL_TO_STRING(BgL_arg1127z00_453);
									BgL_res1179z00_513 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_512);
								}
								BgL_arg1126z00_452 = BgL_res1179z00_513;
							}
						}
						BgL_arg1110z00_434 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1126z00_452);
					}
					return
						string_append_3(BgL_arg1109z00_433,
						BGl_string1181z00zztype_pptypez00, BgL_arg1110z00_434);
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zztype_pptypez00(obj_t BgL_argsz00_437)
	{
		{	/* Type/pptype.scm 34 */
			if (NULLP(BgL_argsz00_437))
				{	/* Type/pptype.scm 35 */
					return BGl_string1182z00zztype_pptypez00;
				}
			else
				{	/* Type/pptype.scm 40 */
					obj_t BgL_arg1113z00_440;
					obj_t BgL_arg1114z00_441;
					obj_t BgL_arg1115z00_442;

					{	/* Type/pptype.scm 40 */
						obj_t BgL_arg1116z00_443;

						{	/* Type/pptype.scm 40 */
							obj_t BgL_arg1117z00_444;

							BgL_arg1117z00_444 =
								(((BgL_typez00_bglt) COBJECT(
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(
																((obj_t) BgL_argsz00_437))))))->BgL_typez00)))->
								BgL_idz00);
							{	/* Type/pptype.scm 39 */
								obj_t BgL_res1177z00_505;

								{	/* Type/pptype.scm 39 */
									obj_t BgL_arg1466z00_504;

									BgL_arg1466z00_504 = SYMBOL_TO_STRING(BgL_arg1117z00_444);
									BgL_res1177z00_505 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_504);
								}
								BgL_arg1116z00_443 = BgL_res1177z00_505;
							}
						}
						BgL_arg1113z00_440 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1116z00_443);
					}
					if (NULLP(CDR(((obj_t) BgL_argsz00_437))))
						{	/* Type/pptype.scm 41 */
							BgL_arg1114z00_441 = BGl_string1182z00zztype_pptypez00;
						}
					else
						{	/* Type/pptype.scm 41 */
							BgL_arg1114z00_441 = BGl_string1183z00zztype_pptypez00;
						}
					{	/* Type/pptype.scm 44 */
						obj_t BgL_arg1125z00_450;

						BgL_arg1125z00_450 = CDR(((obj_t) BgL_argsz00_437));
						BgL_arg1115z00_442 =
							BGl_loopze70ze7zztype_pptypez00(BgL_arg1125z00_450);
					}
					return
						string_append_3(BgL_arg1113z00_440, BgL_arg1114z00_441,
						BgL_arg1115z00_442);
				}
		}

	}



/* &function-type->string */
	obj_t BGl_z62functionzd2typezd2ze3stringz81zztype_pptypez00(obj_t
		BgL_envz00_519, obj_t BgL_variablez00_520)
	{
		{	/* Type/pptype.scm 32 */
			return
				BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(
				((BgL_variablez00_bglt) BgL_variablez00_520));
		}

	}



/* variable-type->string */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt
		BgL_variablez00_5)
	{
		{	/* Type/pptype.scm 52 */
			{	/* Type/pptype.scm 53 */
				obj_t BgL_arg1129z00_455;

				{	/* Type/pptype.scm 53 */
					obj_t BgL_arg1133z00_456;

					BgL_arg1133z00_456 =
						(((BgL_typez00_bglt) COBJECT(
								(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_5))->
									BgL_typez00)))->BgL_idz00);
					{	/* Type/pptype.scm 53 */
						obj_t BgL_res1180z00_518;

						{	/* Type/pptype.scm 53 */
							obj_t BgL_arg1466z00_517;

							BgL_arg1466z00_517 = SYMBOL_TO_STRING(BgL_arg1133z00_456);
							BgL_res1180z00_518 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_517);
						}
						BgL_arg1129z00_455 = BgL_res1180z00_518;
					}
				}
				return
					BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1129z00_455);
			}
		}

	}



/* &variable-type->string */
	obj_t BGl_z62variablezd2typezd2ze3stringz81zztype_pptypez00(obj_t
		BgL_envz00_521, obj_t BgL_variablez00_522)
	{
		{	/* Type/pptype.scm 52 */
			return
				BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(
				((BgL_variablez00_bglt) BgL_variablez00_522));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_pptypez00()
	{
		{	/* Type/pptype.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1184z00zztype_pptypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1184z00zztype_pptypez00));
		}

	}

#ifdef __cplusplus
}
#endif
