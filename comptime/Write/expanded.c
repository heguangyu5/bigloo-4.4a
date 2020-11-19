/*===========================================================================*/
/*   (Write/expanded.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/expanded.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzwrite_expandedz00();
	extern obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_gczd2rootszd2initz00zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_expandedz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzwrite_expandedz00();
	static obj_t BGl_genericzd2initzd2zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzwrite_expandedz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzwrite_expandedz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_z62writezd2expandedzb0zzwrite_expandedz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_expandedz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1247z00zzwrite_expandedz00,
		BgL_bgl_string1247za700za7za7w1270za7, ".escm", 5);
	      DEFINE_STRING(BGl_string1248z00zzwrite_expandedz00,
		BgL_bgl_string1248za700za7za7w1271za7, "The expanded module", 19);
	      DEFINE_STRING(BGl_string1249z00zzwrite_expandedz00,
		BgL_bgl_string1249za700za7za7w1272za7,
		"---------------------------------------------------------", 57);
	      DEFINE_STRING(BGl_string1250z00zzwrite_expandedz00,
		BgL_bgl_string1250za700za7za7w1273za7,
		"!!! WARNING !!!      !!! WARNING !!!      !!! WARNING !!!", 57);
	      DEFINE_STRING(BGl_string1251z00zzwrite_expandedz00,
		BgL_bgl_string1251za700za7za7w1274za7,
		"This expanded file cannot be compiled \"as is\". In order to", 58);
	      DEFINE_STRING(BGl_string1252z00zzwrite_expandedz00,
		BgL_bgl_string1252za700za7za7w1275za7, "compile it:", 11);
	      DEFINE_STRING(BGl_string1253z00zzwrite_expandedz00,
		BgL_bgl_string1253za700za7za7w1276za7,
		"   - the explicit call to the MODULE-INITIALIZATION ", 52);
	      DEFINE_STRING(BGl_string1254z00zzwrite_expandedz00,
		BgL_bgl_string1254za700za7za7w1277za7, "     must be removed.", 21);
	      DEFINE_STRING(BGl_string1255z00zzwrite_expandedz00,
		BgL_bgl_string1255za700za7za7w1278za7,
		"   - If the source module was INCLUDING files,", 46);
	      DEFINE_STRING(BGl_string1256z00zzwrite_expandedz00,
		BgL_bgl_string1256za700za7za7w1279za7,
		"     you must select manually which files still have to", 55);
	      DEFINE_STRING(BGl_string1257z00zzwrite_expandedz00,
		BgL_bgl_string1257za700za7za7w1280za7,
		"     be included in the expanded forms.", 39);
	      DEFINE_STRING(BGl_string1258z00zzwrite_expandedz00,
		BgL_bgl_string1258za700za7za7w1281za7, "The module clause", 17);
	      DEFINE_STRING(BGl_string1259z00zzwrite_expandedz00,
		BgL_bgl_string1259za700za7za7w1282za7, "unit: ", 6);
	      DEFINE_STRING(BGl_string1260z00zzwrite_expandedz00,
		BgL_bgl_string1260za700za7za7w1283za7, "write-expanded", 14);
	      DEFINE_STRING(BGl_string1261z00zzwrite_expandedz00,
		BgL_bgl_string1261za700za7za7w1284za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1262z00zzwrite_expandedz00,
		BgL_bgl_string1262za700za7za7w1285za7, "write_expanded", 14);
	      DEFINE_STRING(BGl_string1263z00zzwrite_expandedz00,
		BgL_bgl_string1263za700za7za7w1286za7, "define-inline define --to-stdout ",
		33);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2expandedzd2envz00zzwrite_expandedz00,
		BgL_bgl_za762writeza7d2expan1287z00,
		BGl_z62writezd2expandedzb0zzwrite_expandedz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzwrite_expandedz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzwrite_expandedz00(long
		BgL_checksumz00_280, char *BgL_fromz00_281)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_expandedz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_expandedz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzwrite_expandedz00();
					BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00();
					BGl_cnstzd2initzd2zzwrite_expandedz00();
					BGl_importedzd2moduleszd2initz00zzwrite_expandedz00();
					return BGl_toplevelzd2initzd2zzwrite_expandedz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "write_expanded");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"write_expanded");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"write_expanded");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			{	/* Write/expanded.scm 15 */
				obj_t BgL_cportz00_265;

				{	/* Write/expanded.scm 15 */
					obj_t BgL_stringz00_273;

					BgL_stringz00_273 = BGl_string1263z00zzwrite_expandedz00;
					{	/* Write/expanded.scm 15 */
						obj_t BgL_startz00_274;

						BgL_startz00_274 = BINT(((long) 0));
						{	/* Write/expanded.scm 15 */
							obj_t BgL_endz00_275;

							BgL_endz00_275 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_273)));
							{	/* Write/expanded.scm 15 */

								BgL_cportz00_265 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_273, BgL_startz00_274, BgL_endz00_275);
				}}}}
				{
					long BgL_iz00_266;

					BgL_iz00_266 = ((long) 2);
				BgL_loopz00_267:
					if ((BgL_iz00_266 == ((long) -1)))
						{	/* Write/expanded.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/expanded.scm 15 */
							{	/* Write/expanded.scm 15 */
								obj_t BgL_arg1268z00_269;

								{	/* Write/expanded.scm 15 */

									{	/* Write/expanded.scm 15 */
										obj_t BgL_locationz00_271;

										BgL_locationz00_271 = BBOOL(((bool_t) 0));
										{	/* Write/expanded.scm 15 */

											BgL_arg1268z00_269 =
												BGl_readz00zz__readerz00(BgL_cportz00_265,
												BgL_locationz00_271);
										}
									}
								}
								{	/* Write/expanded.scm 15 */
									int BgL_tmpz00_312;

									BgL_tmpz00_312 = (int) (BgL_iz00_266);
									CNST_TABLE_SET(BgL_tmpz00_312, BgL_arg1268z00_269);
							}}
							{	/* Write/expanded.scm 15 */
								int BgL_auxz00_272;

								BgL_auxz00_272 = (int) ((BgL_iz00_266 - ((long) 1)));
								{
									long BgL_iz00_317;

									BgL_iz00_317 = (long) (BgL_auxz00_272);
									BgL_iz00_266 = BgL_iz00_317;
									goto BgL_loopz00_267;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}

	}



/* write-expanded */
	BGL_EXPORTED_DEF obj_t BGl_writezd2expandedzd2zzwrite_expandedz00(obj_t
		BgL_unitsz00_25)
	{
		{	/* Write/expanded.scm 27 */
			{	/* Write/expanded.scm 28 */
				obj_t BgL_outputzd2namezd2_57;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Write/expanded.scm 29 */
						BgL_outputzd2namezd2_57 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Write/expanded.scm 29 */
						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 0))))
							{	/* Write/expanded.scm 31 */
								BgL_outputzd2namezd2_57 = BFALSE;
							}
						else
							{	/* Write/expanded.scm 33 */
								bool_t BgL_test1292z00_325;

								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* Write/expanded.scm 34 */
										obj_t BgL_tmpz00_328;

										BgL_tmpz00_328 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_test1292z00_325 = STRINGP(BgL_tmpz00_328);
									}
								else
									{	/* Write/expanded.scm 33 */
										BgL_test1292z00_325 = ((bool_t) 0);
									}
								if (BgL_test1292z00_325)
									{	/* Write/expanded.scm 33 */
										BgL_outputzd2namezd2_57 =
											string_append(BGl_prefixz00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
											BGl_string1247z00zzwrite_expandedz00);
									}
								else
									{	/* Write/expanded.scm 33 */
										BgL_outputzd2namezd2_57 = BFALSE;
									}
							}
					}
				{	/* Write/expanded.scm 28 */
					obj_t BgL_portz00_58;

					if (STRINGP(BgL_outputzd2namezd2_57))
						{	/* Write/expanded.scm 40 */

							BgL_portz00_58 =
								BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_outputzd2namezd2_57, BTRUE);
						}
					else
						{	/* Write/expanded.scm 41 */
							obj_t BgL_res1229z00_198;

							{	/* Write/expanded.scm 41 */
								obj_t BgL_tmpz00_337;

								BgL_tmpz00_337 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1229z00_198 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_337);
							}
							BgL_portz00_58 = BgL_res1229z00_198;
						}
					{	/* Write/expanded.scm 39 */

						if (OUTPUT_PORTP(BgL_portz00_58))
							{	/* Write/expanded.scm 44 */
								obj_t BgL_exitd1047z00_60;

								BgL_exitd1047z00_60 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Write/expanded.scm 115 */
									obj_t BgL_zc3z04anonymousza31191ze3z87_259;

									BgL_zc3z04anonymousza31191ze3z87_259 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31191ze3ze5zzwrite_expandedz00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31191ze3z87_259,
										(int) (((long) 0)), BgL_portz00_58);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1047z00_60, BgL_zc3z04anonymousza31191ze3z87_259);
									{	/* Write/expanded.scm 46 */
										bool_t BgL_tmp1049z00_62;

										BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00
											(BgL_portz00_58, BGl_string1248z00zzwrite_expandedz00);
										{	/* Write/expanded.scm 47 */
											obj_t BgL_list1080z00_63;

											BgL_list1080z00_63 =
												MAKE_YOUNG_PAIR(BGl_string1249z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1080z00_63);
										}
										{	/* Write/expanded.scm 50 */
											obj_t BgL_list1081z00_64;

											BgL_list1081z00_64 =
												MAKE_YOUNG_PAIR(BGl_string1250z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1081z00_64);
										}
										{	/* Write/expanded.scm 53 */
											obj_t BgL_list1082z00_65;

											BgL_list1082z00_65 =
												MAKE_YOUNG_PAIR(BGl_string1249z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1082z00_65);
										}
										{	/* Write/expanded.scm 56 */
											obj_t BgL_list1083z00_66;

											BgL_list1083z00_66 =
												MAKE_YOUNG_PAIR(BGl_string1251z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1083z00_66);
										}
										{	/* Write/expanded.scm 59 */
											obj_t BgL_list1084z00_67;

											BgL_list1084z00_67 =
												MAKE_YOUNG_PAIR(BGl_string1252z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1084z00_67);
										}
										{	/* Write/expanded.scm 62 */
											obj_t BgL_list1085z00_68;

											BgL_list1085z00_68 =
												MAKE_YOUNG_PAIR(BGl_string1253z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1085z00_68);
										}
										{	/* Write/expanded.scm 65 */
											obj_t BgL_list1086z00_69;

											BgL_list1086z00_69 =
												MAKE_YOUNG_PAIR(BGl_string1254z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1086z00_69);
										}
										{	/* Write/expanded.scm 68 */
											obj_t BgL_list1087z00_70;

											BgL_list1087z00_70 =
												MAKE_YOUNG_PAIR(BGl_string1255z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1087z00_70);
										}
										{	/* Write/expanded.scm 71 */
											obj_t BgL_list1088z00_71;

											BgL_list1088z00_71 =
												MAKE_YOUNG_PAIR(BGl_string1256z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1088z00_71);
										}
										{	/* Write/expanded.scm 74 */
											obj_t BgL_list1089z00_72;

											BgL_list1089z00_72 =
												MAKE_YOUNG_PAIR(BGl_string1257z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1089z00_72);
										}
										{	/* Write/expanded.scm 77 */
											obj_t BgL_list1090z00_73;

											BgL_list1090z00_73 =
												MAKE_YOUNG_PAIR(BGl_string1249z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1090z00_73);
										}
										{	/* Write/expanded.scm 80 */
											obj_t BgL_list1091z00_74;

											BgL_list1091z00_74 =
												MAKE_YOUNG_PAIR(BGl_string1258z00zzwrite_expandedz00,
												BNIL);
											BGl_writezd2schemezd2commentz00zzwrite_schemez00
												(BgL_portz00_58, BgL_list1091z00_74);
										}
										{	/* Write/expanded.scm 81 */
											obj_t BgL_list1092z00_75;

											BgL_list1092z00_75 =
												MAKE_YOUNG_PAIR(BgL_portz00_58, BNIL);
											BGl_ppz00zz__ppz00
												(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
												BgL_list1092z00_75);
										}
										bgl_display_char(((unsigned char) 10), BgL_portz00_58);
										{
											obj_t BgL_l1055z00_77;

											BgL_l1055z00_77 = BgL_unitsz00_25;
										BgL_zc3z04anonymousza31093ze3z87_78:
											if (PAIRP(BgL_l1055z00_77))
												{	/* Write/expanded.scm 83 */
													{	/* Write/expanded.scm 85 */
														obj_t BgL_uz00_80;

														BgL_uz00_80 = CAR(BgL_l1055z00_77);
														if (CBOOL(STRUCT_REF(
																	((obj_t) BgL_uz00_80), (int) (((long) 3)))))
															{	/* Write/expanded.scm 85 */
																{	/* Write/expanded.scm 87 */
																	bool_t BgL_test1298z00_385;

																	{	/* Write/expanded.scm 87 */
																		obj_t BgL_tmpz00_386;

																		BgL_tmpz00_386 =
																			STRUCT_REF(
																			((obj_t) BgL_uz00_80),
																			(int) (((long) 2)));
																		BgL_test1298z00_385 = PAIRP(BgL_tmpz00_386);
																	}
																	if (BgL_test1298z00_385)
																		{	/* Write/expanded.scm 92 */
																			obj_t BgL_arg1101z00_84;

																			{	/* Write/expanded.scm 92 */
																				obj_t BgL_arg1103z00_86;

																				{	/* Write/expanded.scm 92 */
																					obj_t BgL_arg1109z00_87;

																					BgL_arg1109z00_87 =
																						STRUCT_REF(
																						((obj_t) BgL_uz00_80),
																						(int) (((long) 0)));
																					{	/* Write/expanded.scm 91 */
																						obj_t BgL_res1233z00_211;

																						{	/* Write/expanded.scm 91 */
																							obj_t BgL_arg1466z00_210;

																							BgL_arg1466z00_210 =
																								SYMBOL_TO_STRING(
																								((obj_t) BgL_arg1109z00_87));
																							BgL_res1233z00_211 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_210);
																						}
																						BgL_arg1103z00_86 =
																							BgL_res1233z00_211;
																				}}
																				BgL_arg1101z00_84 =
																					string_append
																					(BGl_string1259z00zzwrite_expandedz00,
																					BgL_arg1103z00_86);
																			}
																			{	/* Write/expanded.scm 88 */
																				obj_t BgL_list1102z00_85;

																				BgL_list1102z00_85 =
																					MAKE_YOUNG_PAIR(BgL_arg1101z00_84,
																					BNIL);
																				BGl_writezd2schemezd2commentz00zzwrite_schemez00
																					(BgL_portz00_58, BgL_list1102z00_85);
																		}}
																	else
																		{	/* Write/expanded.scm 87 */
																			BFALSE;
																		}
																}
																{	/* Write/expanded.scm 94 */
																	obj_t BgL_g1054z00_89;

																	{	/* Write/expanded.scm 109 */
																		obj_t BgL_codez00_156;

																		BgL_codez00_156 =
																			STRUCT_REF(
																			((obj_t) BgL_uz00_80),
																			(int) (((long) 2)));
																		if (PROCEDUREP(BgL_codez00_156))
																			{	/* Write/expanded.scm 110 */
																				BgL_g1054z00_89 =
																					PROCEDURE_ENTRY(BgL_codez00_156)
																					(BgL_codez00_156, BEOA);
																			}
																		else
																			{	/* Write/expanded.scm 110 */
																				BgL_g1054z00_89 = BgL_codez00_156;
																			}
																	}
																	{
																		obj_t BgL_l1052z00_91;

																		BgL_l1052z00_91 = BgL_g1054z00_89;
																	BgL_zc3z04anonymousza31111ze3z87_92:
																		if (PAIRP(BgL_l1052z00_91))
																			{	/* Write/expanded.scm 109 */
																				{	/* Write/expanded.scm 97 */
																					obj_t BgL_codez00_94;

																					BgL_codez00_94 = CAR(BgL_l1052z00_91);
																					{
																						obj_t BgL_namez00_99;
																						obj_t BgL_valuez00_100;

																						if (PAIRP(BgL_codez00_94))
																							{	/* Write/expanded.scm 97 */
																								obj_t BgL_cdrzd2113zd2_109;

																								BgL_cdrzd2113zd2_109 =
																									CDR(BgL_codez00_94);
																								if (
																									(CAR(BgL_codez00_94) ==
																										CNST_TABLE_REF(((long) 1))))
																									{	/* Write/expanded.scm 97 */
																										if (PAIRP
																											(BgL_cdrzd2113zd2_109))
																											{	/* Write/expanded.scm 97 */
																												obj_t
																													BgL_carzd2117zd2_113;
																												obj_t
																													BgL_cdrzd2118zd2_114;
																												BgL_carzd2117zd2_113 =
																													CAR
																													(BgL_cdrzd2113zd2_109);
																												BgL_cdrzd2118zd2_114 =
																													CDR
																													(BgL_cdrzd2113zd2_109);
																												if (PAIRP
																													(BgL_carzd2117zd2_113))
																													{	/* Write/expanded.scm 97 */
																														if (PAIRP
																															(BgL_cdrzd2118zd2_114))
																															{	/* Write/expanded.scm 97 */
																																if (NULLP(CDR
																																		(BgL_cdrzd2118zd2_114)))
																																	{	/* Write/expanded.scm 97 */
																																		obj_t
																																			BgL_arg1123z00_119;
																																		BgL_arg1123z00_119
																																			=
																																			CAR
																																			(BgL_carzd2117zd2_113);
																																		{	/* Write/expanded.scm 99 */
																																			obj_t
																																				BgL_list1173z00_233;
																																			BgL_list1173z00_233
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1123z00_119,
																																				BNIL);
																																			BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																				(BgL_portz00_58,
																																				BgL_list1173z00_233);
																																		}
																																		{	/* Write/expanded.scm 100 */
																																			obj_t
																																				BgL_list1174z00_234;
																																			BgL_list1174z00_234
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_portz00_58,
																																				BNIL);
																																			BGl_ppz00zz__ppz00
																																				(BgL_codez00_94,
																																				BgL_list1174z00_234);
																																		}
																																	}
																																else
																																	{	/* Write/expanded.scm 97 */
																																	BgL_tagzd2104zd2_106:
																																		{	/* Write/expanded.scm 108 */
																																			obj_t
																																				BgL_list1179z00_153;
																																			BgL_list1179z00_153
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_portz00_58,
																																				BNIL);
																																			BGl_ppz00zz__ppz00
																																				(BgL_codez00_94,
																																				BgL_list1179z00_153);
																																		}
																																	}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																																goto
																																	BgL_tagzd2104zd2_106;
																															}
																													}
																												else
																													{	/* Write/expanded.scm 97 */
																														obj_t
																															BgL_cdrzd2162zd2_124;
																														BgL_cdrzd2162zd2_124
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2113zd2_109));
																														if (PAIRP
																															(BgL_cdrzd2162zd2_124))
																															{	/* Write/expanded.scm 97 */
																																if (NULLP(CDR
																																		(BgL_cdrzd2162zd2_124)))
																																	{	/* Write/expanded.scm 97 */
																																		obj_t
																																			BgL_arg1133z00_128;
																																		obj_t
																																			BgL_arg1134z00_129;
																																		BgL_arg1133z00_128
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2113zd2_109));
																																		BgL_arg1134z00_129
																																			=
																																			CAR
																																			(BgL_cdrzd2162zd2_124);
																																		BgL_namez00_99
																																			=
																																			BgL_arg1133z00_128;
																																		BgL_valuez00_100
																																			=
																																			BgL_arg1134z00_129;
																																		{	/* Write/expanded.scm 102 */
																																			obj_t
																																				BgL_list1175z00_149;
																																			BgL_list1175z00_149
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_namez00_99,
																																				BNIL);
																																			BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																				(BgL_portz00_58,
																																				BgL_list1175z00_149);
																																		}
																																		{	/* Write/expanded.scm 103 */
																																			obj_t
																																				BgL_list1176z00_150;
																																			BgL_list1176z00_150
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_portz00_58,
																																				BNIL);
																																			BGl_ppz00zz__ppz00
																																				(BgL_codez00_94,
																																				BgL_list1176z00_150);
																																		}
																																	}
																																else
																																	{	/* Write/expanded.scm 97 */
																																		goto
																																			BgL_tagzd2104zd2_106;
																																	}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																																goto
																																	BgL_tagzd2104zd2_106;
																															}
																													}
																											}
																										else
																											{	/* Write/expanded.scm 97 */
																												goto
																													BgL_tagzd2104zd2_106;
																											}
																									}
																								else
																									{	/* Write/expanded.scm 97 */
																										if (
																											(CAR(BgL_codez00_94) ==
																												CNST_TABLE_REF(((long)
																														2))))
																											{	/* Write/expanded.scm 97 */
																												if (PAIRP
																													(BgL_cdrzd2113zd2_109))
																													{	/* Write/expanded.scm 97 */
																														obj_t
																															BgL_carzd2207zd2_135;
																														obj_t
																															BgL_cdrzd2208zd2_136;
																														BgL_carzd2207zd2_135
																															=
																															CAR
																															(BgL_cdrzd2113zd2_109);
																														BgL_cdrzd2208zd2_136
																															=
																															CDR
																															(BgL_cdrzd2113zd2_109);
																														if (PAIRP
																															(BgL_carzd2207zd2_135))
																															{	/* Write/expanded.scm 97 */
																																if (PAIRP
																																	(BgL_cdrzd2208zd2_136))
																																	{	/* Write/expanded.scm 97 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd2208zd2_136)))
																																			{	/* Write/expanded.scm 97 */
																																				obj_t
																																					BgL_arg1165z00_141;
																																				BgL_arg1165z00_141
																																					=
																																					CAR
																																					(BgL_carzd2207zd2_135);
																																				{	/* Write/expanded.scm 105 */
																																					obj_t
																																						BgL_list1177z00_254;
																																					BgL_list1177z00_254
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1165z00_141,
																																						BNIL);
																																					BGl_writezd2schemezd2commentz00zzwrite_schemez00
																																						(BgL_portz00_58,
																																						BgL_list1177z00_254);
																																				}
																																				{	/* Write/expanded.scm 106 */
																																					obj_t
																																						BgL_list1178z00_255;
																																					BgL_list1178z00_255
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_portz00_58,
																																						BNIL);
																																					BGl_ppz00zz__ppz00
																																						(BgL_codez00_94,
																																						BgL_list1178z00_255);
																																				}
																																			}
																																		else
																																			{	/* Write/expanded.scm 97 */
																																				goto
																																					BgL_tagzd2104zd2_106;
																																			}
																																	}
																																else
																																	{	/* Write/expanded.scm 97 */
																																		goto
																																			BgL_tagzd2104zd2_106;
																																	}
																															}
																														else
																															{	/* Write/expanded.scm 97 */
																																goto
																																	BgL_tagzd2104zd2_106;
																															}
																													}
																												else
																													{	/* Write/expanded.scm 97 */
																														goto
																															BgL_tagzd2104zd2_106;
																													}
																											}
																										else
																											{	/* Write/expanded.scm 97 */
																												goto
																													BgL_tagzd2104zd2_106;
																											}
																									}
																							}
																						else
																							{	/* Write/expanded.scm 97 */
																								goto BgL_tagzd2104zd2_106;
																							}
																					}
																				}
																				{
																					obj_t BgL_l1052z00_470;

																					BgL_l1052z00_470 =
																						CDR(BgL_l1052z00_91);
																					BgL_l1052z00_91 = BgL_l1052z00_470;
																					goto
																						BgL_zc3z04anonymousza31111ze3z87_92;
																				}
																			}
																		else
																			{	/* Write/expanded.scm 109 */
																				((bool_t) 1);
																			}
																	}
																}
																{	/* Write/expanded.scm 113 */
																	obj_t BgL_tmpz00_472;

																	BgL_tmpz00_472 = ((obj_t) BgL_portz00_58);
																	bgl_display_char(((unsigned char) 10),
																		BgL_tmpz00_472);
															}}
														else
															{	/* Write/expanded.scm 85 */
																BFALSE;
															}
													}
													{
														obj_t BgL_l1055z00_475;

														BgL_l1055z00_475 = CDR(BgL_l1055z00_77);
														BgL_l1055z00_77 = BgL_l1055z00_475;
														goto BgL_zc3z04anonymousza31093ze3z87_78;
													}
												}
											else
												{	/* Write/expanded.scm 83 */
													BgL_tmp1049z00_62 = ((bool_t) 1);
												}
										}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1047z00_60);
										BGl_z62zc3z04anonymousza31191ze3ze5zzwrite_expandedz00
											(BgL_zc3z04anonymousza31191ze3z87_259);
										return BBOOL(BgL_tmp1049z00_62);
									}
								}
							}
						else
							{	/* Write/expanded.scm 42 */
								return
									BGl_errorz00zz__errorz00(BGl_string1260z00zzwrite_expandedz00,
									BGl_string1261z00zzwrite_expandedz00,
									BgL_outputzd2namezd2_57);
							}
					}
				}
			}
		}

	}



/* &write-expanded */
	obj_t BGl_z62writezd2expandedzb0zzwrite_expandedz00(obj_t BgL_envz00_260,
		obj_t BgL_unitsz00_261)
	{
		{	/* Write/expanded.scm 27 */
			return BGl_writezd2expandedzd2zzwrite_expandedz00(BgL_unitsz00_261);
		}

	}



/* &<@anonymous:1191> */
	obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzwrite_expandedz00(obj_t
		BgL_envz00_262)
	{
		{	/* Write/expanded.scm 44 */
			{	/* Write/expanded.scm 115 */
				obj_t BgL_portz00_263;

				BgL_portz00_263 = PROCEDURE_REF(BgL_envz00_262, (int) (((long) 0)));
				{	/* Write/expanded.scm 115 */
					bool_t BgL_test1314z00_484;

					if (OUTPUT_PORTP(BgL_portz00_263))
						{	/* Write/expanded.scm 116 */
							bool_t BgL_test1316z00_487;

							{	/* Write/expanded.scm 116 */
								obj_t BgL_arg1201z00_278;

								{	/* Write/expanded.scm 116 */
									obj_t BgL_res1230z00_279;

									{	/* Write/expanded.scm 116 */
										obj_t BgL_tmpz00_488;

										BgL_tmpz00_488 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1230z00_279 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_488);
									}
									BgL_arg1201z00_278 = BgL_res1230z00_279;
								}
								BgL_test1316z00_487 = (BgL_portz00_263 == BgL_arg1201z00_278);
							}
							if (BgL_test1316z00_487)
								{	/* Write/expanded.scm 116 */
									BgL_test1314z00_484 = ((bool_t) 0);
								}
							else
								{	/* Write/expanded.scm 116 */
									BgL_test1314z00_484 = ((bool_t) 1);
								}
						}
					else
						{	/* Write/expanded.scm 115 */
							BgL_test1314z00_484 = ((bool_t) 0);
						}
					if (BgL_test1314z00_484)
						{	/* Write/expanded.scm 115 */
							return bgl_close_output_port(BgL_portz00_263);
						}
					else
						{	/* Write/expanded.scm 115 */
							return BFALSE;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_expandedz00()
	{
		{	/* Write/expanded.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1262z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 305499432),
				BSTRING_TO_STRING(BGl_string1262z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1262z00zzwrite_expandedz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1262z00zzwrite_expandedz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1262z00zzwrite_expandedz00));
		}

	}

#ifdef __cplusplus
}
#endif
