/*===========================================================================*/
/*   (Tools/args.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/args.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_makezd2fxzd2protoze70ze7zztools_argsz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62foreignzd2arityzb0zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62globalzd2arityzb0zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	static obj_t BGl_objectzd2initzd2zztools_argsz00();
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_localzd2arityzd2zztools_argsz00(obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zztools_argsz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzd2arityzb0zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62argszd2listzd2ze3argsza2z23zztools_argsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62makezd2nzd2protoz62zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2argszd2listz62zztools_argsz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_argsz00();
	static obj_t BGl_makezd2vazd2protoze70ze7zztools_argsz00(obj_t, long);
	extern obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t, bool_t);
	static obj_t BGl_loopze70ze7zztools_argsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopze71ze7zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2arityzd2za7erozf3z36zztools_argsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_z62argsza2zd2ze3argszd2listz23zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_argsz00 = BUNSPEC;
	static obj_t BGl_makezd2argszd2nameze70ze7zztools_argsz00(long);
	static obj_t BGl_genericzd2initzd2zztools_argsz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_foreignzd2arityzd2zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t, obj_t);
	static obj_t BGl_z62zb2zd2arityz02zztools_argsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_cnstzd2initzd2zztools_argsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_argsz00();
	BGL_EXPORTED_DECL long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_argsz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2argszd2listz00zztools_argsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl_z62soundzd2arityzf3z43zztools_argsz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_soundzd2arityzf3zd2envzf3zztools_argsz00,
		BgL_bgl_za762soundza7d2arity1177z00,
		BGl_z62soundzd2arityzf3z43zztools_argsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nzd2protozd2envzd2zztools_argsz00,
		BgL_bgl_za762makeza7d2nza7d2pr1178za7,
		BGl_z62makezd2nzd2protoz62zztools_argsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2arityzd2envz00zztools_argsz00,
		BgL_bgl_za762foreignza7d2ari1179z00,
		BGl_z62foreignzd2arityzb0zztools_argsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2argszd2listzd2envzd2zztools_argsz00,
		BgL_bgl_za762makeza7d2argsza7d1180za7,
		BGl_z62makezd2argszd2listz62zztools_argsz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1170z00zztools_argsz00,
		BgL_bgl_string1170za700za7za7t1181za7,
		"DSSSL arguments not allowed in foreign", 38);
	      DEFINE_STRING(BGl_string1171z00zztools_argsz00,
		BgL_bgl_string1171za700za7za7t1182za7, "A", 1);
	      DEFINE_STRING(BGl_string1172z00zztools_argsz00,
		BgL_bgl_string1172za700za7za7t1183za7, "tools_args", 10);
	      DEFINE_STRING(BGl_string1173z00zztools_argsz00,
		BgL_bgl_string1173za700za7za7t1184za7, "foreign-arity ", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2zd2arityzd2envzb2zztools_argsz00,
		BgL_bgl_za762za7b2za7d2arityza701185z00,
		BGl_z62zb2zd2arityz02zztools_argsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argszd2listzd2ze3argsza2zd2envz93zztools_argsz00,
		BgL_bgl_za762argsza7d2listza7d1186za7,
		BGl_z62argszd2listzd2ze3argsza2z23zztools_argsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2arityzd2envz00zztools_argsz00,
		BgL_bgl_za762localza7d2arity1187z00, BGl_z62localzd2arityzb0zztools_argsz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2arityzd2envz00zztools_argsz00,
		BgL_bgl_za762globalza7d2arit1188z00,
		BGl_z62globalzd2arityzb0zztools_argsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_argsza2zd2ze3argszd2listzd2envz93zztools_argsz00,
		BgL_bgl_za762argsza7a2za7d2za7e31189z00,
		BGl_z62argsza2zd2ze3argszd2listz23zztools_argsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2arityzd2za7erozf3zd2envz86zztools_argsz00,
		BgL_bgl_za762dssslza7d2arity1190z00,
		BGl_z62dssslzd2arityzd2za7erozf3z36zztools_argsz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_argsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long
		BgL_checksumz00_271, char *BgL_fromz00_272)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_argsz00))
				{
					BGl_requirezd2initializa7ationz75zztools_argsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_argsz00();
					BGl_libraryzd2moduleszd2initz00zztools_argsz00();
					BGl_cnstzd2initzd2zztools_argsz00();
					BGl_importedzd2moduleszd2initz00zztools_argsz00();
					return BGl_methodzd2initzd2zztools_argsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_args");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_args");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			{	/* Tools/args.scm 15 */
				obj_t BgL_cportz00_258;

				{	/* Tools/args.scm 15 */
					obj_t BgL_stringz00_266;

					BgL_stringz00_266 = BGl_string1173z00zztools_argsz00;
					{	/* Tools/args.scm 15 */
						obj_t BgL_startz00_267;

						BgL_startz00_267 = BINT(((long) 0));
						{	/* Tools/args.scm 15 */
							obj_t BgL_endz00_268;

							BgL_endz00_268 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_266)));
							{	/* Tools/args.scm 15 */

								BgL_cportz00_258 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_266, BgL_startz00_267, BgL_endz00_268);
				}}}}
				{
					long BgL_iz00_259;

					BgL_iz00_259 = ((long) 0);
				BgL_loopz00_260:
					if ((BgL_iz00_259 == ((long) -1)))
						{	/* Tools/args.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/args.scm 15 */
							{	/* Tools/args.scm 15 */
								obj_t BgL_arg1175z00_262;

								{	/* Tools/args.scm 15 */

									{	/* Tools/args.scm 15 */
										obj_t BgL_locationz00_264;

										BgL_locationz00_264 = BBOOL(((bool_t) 0));
										{	/* Tools/args.scm 15 */

											BgL_arg1175z00_262 =
												BGl_readz00zz__readerz00(BgL_cportz00_258,
												BgL_locationz00_264);
										}
									}
								}
								{	/* Tools/args.scm 15 */
									int BgL_tmpz00_299;

									BgL_tmpz00_299 = (int) (BgL_iz00_259);
									CNST_TABLE_SET(BgL_tmpz00_299, BgL_arg1175z00_262);
							}}
							{	/* Tools/args.scm 15 */
								int BgL_auxz00_265;

								BgL_auxz00_265 = (int) ((BgL_iz00_259 - ((long) 1)));
								{
									long BgL_iz00_304;

									BgL_iz00_304 = (long) (BgL_auxz00_265);
									BgL_iz00_259 = BgL_iz00_304;
									goto BgL_loopz00_260;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* global-arity */
	BGL_EXPORTED_DEF long BGl_globalzd2arityzd2zztools_argsz00(obj_t
		BgL_argsz00_3)
	{
		{	/* Tools/args.scm 37 */
			{
				long BgL_iz00_28;
				obj_t BgL_az00_29;

				{	/* Tools/args.scm 38 */
					obj_t BgL_tmpz00_307;

					BgL_iz00_28 = ((long) 0);
					BgL_az00_29 = BgL_argsz00_3;
				BgL_zc3z04anonymousza31016ze3z87_30:
					if (NULLP(BgL_az00_29))
						{	/* Tools/args.scm 41 */
							BgL_tmpz00_307 = BINT(BgL_iz00_28);
						}
					else
						{	/* Tools/args.scm 41 */
							if (PAIRP(BgL_az00_29))
								{	/* Tools/args.scm 43 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_29)))
										{	/* Tools/args.scm 44 */
											BgL_tmpz00_307 =
												BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_3,
												((bool_t) 1));
										}
									else
										{
											obj_t BgL_az00_319;
											long BgL_iz00_317;

											BgL_iz00_317 = (BgL_iz00_28 + ((long) 1));
											BgL_az00_319 = CDR(BgL_az00_29);
											BgL_az00_29 = BgL_az00_319;
											BgL_iz00_28 = BgL_iz00_317;
											goto BgL_zc3z04anonymousza31016ze3z87_30;
										}
								}
							else
								{	/* Tools/args.scm 43 */
									BgL_tmpz00_307 = BINT(NEG((BgL_iz00_28 + ((long) 1))));
						}}
					return (long) CINT(BgL_tmpz00_307);
		}}}

	}



/* &global-arity */
	obj_t BGl_z62globalzd2arityzb0zztools_argsz00(obj_t BgL_envz00_230,
		obj_t BgL_argsz00_231)
	{
		{	/* Tools/args.scm 37 */
			return BINT(BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_231));
		}

	}



/* local-arity */
	BGL_EXPORTED_DEF long BGl_localzd2arityzd2zztools_argsz00(obj_t BgL_argsz00_4)
	{
		{	/* Tools/args.scm 59 */
			{
				long BgL_iz00_41;
				obj_t BgL_az00_42;

				{	/* Tools/args.scm 60 */
					obj_t BgL_tmpz00_327;

					BgL_iz00_41 = ((long) 0);
					BgL_az00_42 = BgL_argsz00_4;
				BgL_zc3z04anonymousza31025ze3z87_43:
					if (NULLP(BgL_az00_42))
						{	/* Tools/args.scm 63 */
							BgL_tmpz00_327 = BINT(BgL_iz00_41);
						}
					else
						{	/* Tools/args.scm 63 */
							if (PAIRP(BgL_az00_42))
								{	/* Tools/args.scm 65 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_42)))
										{	/* Tools/args.scm 66 */
											BgL_tmpz00_327 =
												BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_4,
												((bool_t) 0));
										}
									else
										{
											obj_t BgL_az00_339;
											long BgL_iz00_337;

											BgL_iz00_337 = (BgL_iz00_41 + ((long) 1));
											BgL_az00_339 = CDR(BgL_az00_42);
											BgL_az00_42 = BgL_az00_339;
											BgL_iz00_41 = BgL_iz00_337;
											goto BgL_zc3z04anonymousza31025ze3z87_43;
										}
								}
							else
								{	/* Tools/args.scm 65 */
									BgL_tmpz00_327 = BINT(NEG((BgL_iz00_41 + ((long) 1))));
						}}
					return (long) CINT(BgL_tmpz00_327);
		}}}

	}



/* &local-arity */
	obj_t BGl_z62localzd2arityzb0zztools_argsz00(obj_t BgL_envz00_232,
		obj_t BgL_argsz00_233)
	{
		{	/* Tools/args.scm 59 */
			return BINT(BGl_localzd2arityzd2zztools_argsz00(BgL_argsz00_233));
		}

	}



/* foreign-arity */
	BGL_EXPORTED_DEF long BGl_foreignzd2arityzd2zztools_argsz00(obj_t
		BgL_argsz00_5)
	{
		{	/* Tools/args.scm 81 */
			{
				long BgL_iz00_54;
				obj_t BgL_az00_55;

				{	/* Tools/args.scm 82 */
					obj_t BgL_tmpz00_347;

					BgL_iz00_54 = ((long) 0);
					BgL_az00_55 = BgL_argsz00_5;
				BgL_zc3z04anonymousza31034ze3z87_56:
					if (NULLP(BgL_az00_55))
						{	/* Tools/args.scm 85 */
							BgL_tmpz00_347 = BINT(BgL_iz00_54);
						}
					else
						{	/* Tools/args.scm 85 */
							if (PAIRP(BgL_az00_55))
								{	/* Tools/args.scm 87 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_az00_55)))
										{	/* Tools/args.scm 88 */
											BgL_tmpz00_347 =
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
												BGl_string1170z00zztools_argsz00, BgL_argsz00_5);
										}
									else
										{
											obj_t BgL_az00_360;
											long BgL_iz00_358;

											BgL_iz00_358 = (BgL_iz00_54 + ((long) 1));
											BgL_az00_360 = CDR(BgL_az00_55);
											BgL_az00_55 = BgL_az00_360;
											BgL_iz00_54 = BgL_iz00_358;
											goto BgL_zc3z04anonymousza31034ze3z87_56;
										}
								}
							else
								{	/* Tools/args.scm 87 */
									BgL_tmpz00_347 = BINT(NEG((BgL_iz00_54 + ((long) 1))));
						}}
					return (long) CINT(BgL_tmpz00_347);
		}}}

	}



/* &foreign-arity */
	obj_t BGl_z62foreignzd2arityzb0zztools_argsz00(obj_t BgL_envz00_234,
		obj_t BgL_argsz00_235)
	{
		{	/* Tools/args.scm 81 */
			return BINT(BGl_foreignzd2arityzd2zztools_argsz00(BgL_argsz00_235));
		}

	}



/* dsssl-arity-zero? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(int
		BgL_arityz00_6, obj_t BgL_argsz00_7)
	{
		{	/* Tools/args.scm 99 */
			if (((long) (BgL_arityz00_6) < ((long) 0)))
				{	/* Tools/args.scm 100 */
					return NULLP(BgL_argsz00_7);
				}
			else
				{	/* Tools/args.scm 100 */
					return ((bool_t) 0);
				}
		}

	}



/* &dsssl-arity-zero? */
	obj_t BGl_z62dssslzd2arityzd2za7erozf3z36zztools_argsz00(obj_t BgL_envz00_236,
		obj_t BgL_arityz00_237, obj_t BgL_argsz00_238)
	{
		{	/* Tools/args.scm 99 */
			return
				BBOOL(BGl_dssslzd2arityzd2za7erozf3z54zztools_argsz00(CINT
					(BgL_arityz00_237), BgL_argsz00_238));
		}

	}



/* args*->args-list */
	BGL_EXPORTED_DEF obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t
		BgL_expz00_8)
	{
		{	/* Tools/args.scm 106 */
			if (NULLP(BgL_expz00_8))
				{	/* Tools/args.scm 108 */
					return BNIL;
				}
			else
				{	/* Tools/args.scm 108 */
					if (PAIRP(BgL_expz00_8))
						{	/* Tools/args.scm 110 */
							return
								MAKE_YOUNG_PAIR(CAR(BgL_expz00_8),
								BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(CDR
									(BgL_expz00_8)));
						}
					else
						{	/* Tools/args.scm 111 */
							obj_t BgL_list1049z00_72;

							BgL_list1049z00_72 = MAKE_YOUNG_PAIR(BgL_expz00_8, BNIL);
							return BgL_list1049z00_72;
						}
				}
		}

	}



/* &args*->args-list */
	obj_t BGl_z62argsza2zd2ze3argszd2listz23zztools_argsz00(obj_t BgL_envz00_239,
		obj_t BgL_expz00_240)
	{
		{	/* Tools/args.scm 106 */
			return BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_expz00_240);
		}

	}



/* args-list->args* */
	BGL_EXPORTED_DEF obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t
		BgL_lstz00_9, obj_t BgL_arityz00_10)
	{
		{	/* Tools/args.scm 119 */
			if (((long) CINT(BgL_arityz00_10) >= ((long) 0)))
				{	/* Tools/args.scm 121 */
					return BgL_lstz00_9;
				}
			else
				{	/* Tools/args.scm 121 */
					if (((long) CINT(BgL_arityz00_10) == ((long) -1)))
						{	/* Tools/args.scm 123 */
							return CAR(((obj_t) BgL_lstz00_9));
						}
					else
						{	/* Tools/args.scm 123 */
							return
								BGl_loopze71ze7zztools_argsz00(BgL_lstz00_9, BgL_arityz00_10);
						}
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zztools_argsz00(obj_t BgL_lstz00_76,
		obj_t BgL_arityz00_77)
	{
		{	/* Tools/args.scm 126 */
			if (NULLP(CDR(((obj_t) BgL_lstz00_76))))
				{	/* Tools/args.scm 129 */
					bool_t BgL_test1209z00_398;

					if (INTEGERP(BgL_arityz00_77))
						{	/* Tools/args.scm 129 */
							BgL_test1209z00_398 = ((long) CINT(BgL_arityz00_77) < ((long) 0));
						}
					else
						{	/* Tools/args.scm 129 */
							BgL_test1209z00_398 =
								BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_arityz00_77,
								BINT(((long) 0)));
						}
					if (BgL_test1209z00_398)
						{	/* Tools/args.scm 129 */
							return CAR(((obj_t) BgL_lstz00_76));
						}
					else
						{	/* Tools/args.scm 131 */
							obj_t BgL_list1057z00_83;

							BgL_list1057z00_83 = MAKE_YOUNG_PAIR(BgL_lstz00_76, BNIL);
							return BgL_list1057z00_83;
						}
				}
			else
				{	/* Tools/args.scm 132 */
					obj_t BgL_arg1058z00_85;
					obj_t BgL_arg1059z00_86;

					BgL_arg1058z00_85 = CAR(((obj_t) BgL_lstz00_76));
					{	/* Tools/args.scm 132 */
						obj_t BgL_arg1060z00_87;
						long BgL_arg1061z00_88;

						BgL_arg1060z00_87 = CDR(((obj_t) BgL_lstz00_76));
						BgL_arg1061z00_88 = ((long) CINT(BgL_arityz00_77) + ((long) 1));
						BgL_arg1059z00_86 =
							BGl_loopze71ze7zztools_argsz00(BgL_arg1060z00_87,
							BINT(BgL_arg1061z00_88));
					}
					return MAKE_YOUNG_PAIR(BgL_arg1058z00_85, BgL_arg1059z00_86);
				}
		}

	}



/* &args-list->args* */
	obj_t BGl_z62argszd2listzd2ze3argsza2z23zztools_argsz00(obj_t BgL_envz00_241,
		obj_t BgL_lstz00_242, obj_t BgL_arityz00_243)
	{
		{	/* Tools/args.scm 119 */
			return
				BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(BgL_lstz00_242,
				BgL_arityz00_243);
		}

	}



/* sound-arity? */
	BGL_EXPORTED_DEF bool_t BGl_soundzd2arityzf3z21zztools_argsz00(obj_t
		BgL_arityz00_11, obj_t BgL_argsz00_12)
	{
		{	/* Tools/args.scm 137 */
			{	/* Tools/args.scm 138 */
				long BgL_lenz00_91;

				BgL_lenz00_91 = bgl_list_length(BgL_argsz00_12);
				if (((long) CINT(BgL_arityz00_11) >= ((long) 0)))
					{	/* Tools/args.scm 139 */
						return ((long) CINT(BgL_arityz00_11) == BgL_lenz00_91);
					}
				else
					{	/* Tools/args.scm 139 */
						return
							(NEG(
								(long) CINT(BgL_arityz00_11)) <= (BgL_lenz00_91 + ((long) 1)));
		}}}

	}



/* &sound-arity? */
	obj_t BGl_z62soundzd2arityzf3z43zztools_argsz00(obj_t BgL_envz00_244,
		obj_t BgL_arityz00_245, obj_t BgL_argsz00_246)
	{
		{	/* Tools/args.scm 137 */
			return
				BBOOL(BGl_soundzd2arityzf3z21zztools_argsz00(BgL_arityz00_245,
					BgL_argsz00_246));
		}

	}



/* make-args-list */
	BGL_EXPORTED_DEF obj_t BGl_makezd2argszd2listz00zztools_argsz00(obj_t
		BgL_argsz00_13, obj_t BgL_nilz00_14, obj_t BgL_consz00_15)
	{
		{	/* Tools/args.scm 146 */
			return
				BGl_loopze70ze7zztools_argsz00(BgL_nilz00_14, BgL_consz00_15,
				BgL_argsz00_13);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zztools_argsz00(obj_t BgL_nilz00_257,
		obj_t BgL_consz00_256, obj_t BgL_argsz00_96)
	{
		{	/* Tools/args.scm 147 */
			if (NULLP(BgL_argsz00_96))
				{	/* Tools/args.scm 148 */
					return BgL_nilz00_257;
				}
			else
				{	/* Tools/args.scm 150 */
					obj_t BgL_arg1073z00_99;

					{	/* Tools/args.scm 150 */
						obj_t BgL_arg1074z00_100;
						obj_t BgL_arg1078z00_101;

						BgL_arg1074z00_100 = CAR(((obj_t) BgL_argsz00_96));
						{	/* Tools/args.scm 150 */
							obj_t BgL_arg1095z00_102;

							{	/* Tools/args.scm 150 */
								obj_t BgL_arg1099z00_103;

								BgL_arg1099z00_103 = CDR(((obj_t) BgL_argsz00_96));
								BgL_arg1095z00_102 =
									BGl_loopze70ze7zztools_argsz00(BgL_nilz00_257,
									BgL_consz00_256, BgL_arg1099z00_103);
							}
							BgL_arg1078z00_101 = MAKE_YOUNG_PAIR(BgL_arg1095z00_102, BNIL);
						}
						BgL_arg1073z00_99 =
							MAKE_YOUNG_PAIR(BgL_arg1074z00_100, BgL_arg1078z00_101);
					}
					return MAKE_YOUNG_PAIR(BgL_consz00_256, BgL_arg1073z00_99);
				}
		}

	}



/* &make-args-list */
	obj_t BGl_z62makezd2argszd2listz62zztools_argsz00(obj_t BgL_envz00_247,
		obj_t BgL_argsz00_248, obj_t BgL_nilz00_249, obj_t BgL_consz00_250)
	{
		{	/* Tools/args.scm 146 */
			return
				BGl_makezd2argszd2listz00zztools_argsz00(BgL_argsz00_248,
				BgL_nilz00_249, BgL_consz00_250);
		}

	}



/* make-n-proto */
	BGL_EXPORTED_DEF obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t
		BgL_nz00_16)
	{
		{	/* Tools/args.scm 157 */
			if (((long) CINT(BgL_nz00_16) < ((long) 0)))
				{	/* Tools/args.scm 170 */
					return
						BGl_makezd2vazd2protoze70ze7zztools_argsz00(BgL_nz00_16,
						((long) 0));
				}
			else
				{	/* Tools/args.scm 170 */
					return
						BGl_makezd2fxzd2protoze70ze7zztools_argsz00(BgL_nz00_16,
						((long) 0));
		}}

	}



/* make-va-proto~0 */
	obj_t BGl_makezd2vazd2protoze70ze7zztools_argsz00(obj_t BgL_nz00_115,
		long BgL_countz00_116)
	{
		{	/* Tools/args.scm 164 */
			if (((long) CINT(BgL_nz00_115) == ((long) -1)))
				{	/* Tools/args.scm 161 */
					return BGl_makezd2argszd2nameze70ze7zztools_argsz00(BgL_countz00_116);
				}
			else
				{	/* Tools/args.scm 163 */
					obj_t BgL_arg1113z00_119;
					obj_t BgL_arg1114z00_120;

					BgL_arg1113z00_119 =
						BGl_makezd2argszd2nameze70ze7zztools_argsz00(BgL_countz00_116);
					{	/* Tools/args.scm 164 */
						long BgL_arg1115z00_121;
						long BgL_arg1116z00_122;

						BgL_arg1115z00_121 = ((long) CINT(BgL_nz00_115) + ((long) 1));
						BgL_arg1116z00_122 = (BgL_countz00_116 + ((long) 1));
						BgL_arg1114z00_120 =
							BGl_makezd2vazd2protoze70ze7zztools_argsz00(BINT
							(BgL_arg1115z00_121), BgL_arg1116z00_122);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1113z00_119, BgL_arg1114z00_120);
				}
		}

	}



/* make-args-name~0 */
	obj_t BGl_makezd2argszd2nameze70ze7zztools_argsz00(long BgL_nz00_109)
	{
		{	/* Tools/args.scm 159 */
			{	/* Tools/args.scm 159 */
				obj_t BgL_arg1103z00_111;

				{	/* Tools/args.scm 159 */
					obj_t BgL_arg1109z00_112;

					{	/* Tools/args.scm 159 */

						BgL_arg1109z00_112 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_nz00_109, ((long) 10));
					}
					BgL_arg1103z00_111 =
						string_append(BGl_string1171z00zztools_argsz00, BgL_arg1109z00_112);
				}
				return bstring_to_symbol(BgL_arg1103z00_111);
			}
		}

	}



/* make-fx-proto~0 */
	obj_t BGl_makezd2fxzd2protoze70ze7zztools_argsz00(obj_t BgL_nz00_123,
		long BgL_countz00_124)
	{
		{	/* Tools/args.scm 169 */
			if (((long) CINT(BgL_nz00_123) == ((long) 0)))
				{	/* Tools/args.scm 166 */
					return BNIL;
				}
			else
				{	/* Tools/args.scm 168 */
					obj_t BgL_arg1121z00_127;
					obj_t BgL_arg1122z00_128;

					BgL_arg1121z00_127 =
						BGl_makezd2argszd2nameze70ze7zztools_argsz00(BgL_countz00_124);
					{	/* Tools/args.scm 169 */
						long BgL_arg1123z00_129;
						long BgL_arg1124z00_130;

						BgL_arg1123z00_129 = ((long) CINT(BgL_nz00_123) - ((long) 1));
						BgL_arg1124z00_130 = (BgL_countz00_124 + ((long) 1));
						BgL_arg1122z00_128 =
							BGl_makezd2fxzd2protoze70ze7zztools_argsz00(BINT
							(BgL_arg1123z00_129), BgL_arg1124z00_130);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1121z00_127, BgL_arg1122z00_128);
				}
		}

	}



/* &make-n-proto */
	obj_t BGl_z62makezd2nzd2protoz62zztools_argsz00(obj_t BgL_envz00_251,
		obj_t BgL_nz00_252)
	{
		{	/* Tools/args.scm 157 */
			return BGl_makezd2nzd2protoz00zztools_argsz00(BgL_nz00_252);
		}

	}



/* +-arity */
	BGL_EXPORTED_DEF obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t
		BgL_arityz00_17, obj_t BgL_addz00_18)
	{
		{	/* Tools/args.scm 178 */
			if (((long) CINT(BgL_arityz00_17) >= ((long) 0)))
				{	/* Tools/args.scm 179 */
					return ADDFX(BgL_addz00_18, BgL_arityz00_17);
				}
			else
				{	/* Tools/args.scm 179 */
					return SUBFX(BgL_arityz00_17, BgL_addz00_18);
				}
		}

	}



/* &+-arity */
	obj_t BGl_z62zb2zd2arityz02zztools_argsz00(obj_t BgL_envz00_253,
		obj_t BgL_arityz00_254, obj_t BgL_addz00_255)
	{
		{	/* Tools/args.scm 178 */
			return
				BGl_zb2zd2arityz60zztools_argsz00(BgL_arityz00_254, BgL_addz00_255);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_argsz00()
	{
		{	/* Tools/args.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1172z00zztools_argsz00));
		}

	}

#ifdef __cplusplus
}
#endif
