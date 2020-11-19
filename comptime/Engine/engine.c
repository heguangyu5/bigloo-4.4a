/*===========================================================================*/
/*   (Engine/engine.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/engine.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_za2czd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzengine_enginez00();
	BGL_EXPORTED_DECL obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2startupzd2fileza2zd2zzengine_paramz00;
	static obj_t BGl_z62enginez62zzengine_enginez00(obj_t);
	extern obj_t BGl_cczd2compilerzd2zzbackend_cz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_enginez00();
	static obj_t BGl_z62hellozd2worldzb0zzengine_enginez00(obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzengine_enginez00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_enginez00zzengine_enginez00();
	extern obj_t BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00;
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2helloza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzengine_enginez00 = BUNSPEC;
	extern obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzengine_enginez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_linkz00zzengine_linkz00();
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_compilerz00zzengine_compilerz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_linkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_interpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_versionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_za2bigloozd2argsza2zd2zzengine_paramz00;
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_enginez00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_enginez00();
	extern obj_t BGl_interpz00zzengine_interpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2interpreterza2z00zzengine_paramz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hellozd2worldzd2envz00zzengine_enginez00,
		BgL_bgl_za762helloza7d2world1062z00,
		BGl_z62hellozd2worldzb0zzengine_enginez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_enginezd2envzd2zzengine_enginez00,
		BgL_bgl_za762engineza762za7za7en1063z00, BGl_z62enginez62zzengine_enginez00,
		0L, BUNSPEC, 0);
	extern obj_t BGl_versionzd2envzd2zzwrite_versionz00;
	   
		 
		DEFINE_STRING(BGl_string1056z00zzengine_enginez00,
		BgL_bgl_string1056za700za7za7e1064za7, "engine", 6);
	      DEFINE_STRING(BGl_string1057z00zzengine_enginez00,
		BgL_bgl_string1057za700za7za7e1065za7, "Ignoring additional files", 25);
	      DEFINE_STRING(BGl_string1058z00zzengine_enginez00,
		BgL_bgl_string1058za700za7za7e1066za7, "/scheme-files", 13);
	      DEFINE_STRING(BGl_string1059z00zzengine_enginez00,
		BgL_bgl_string1059za700za7za7e1067za7, " ", 1);
	      DEFINE_STRING(BGl_string1060z00zzengine_enginez00,
		BgL_bgl_string1060za700za7za7e1068za7, "", 0);
	      DEFINE_STRING(BGl_string1061z00zzengine_enginez00,
		BgL_bgl_string1061za700za7za7e1069za7, "engine_engine", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzengine_enginez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long
		BgL_checksumz00_79, char *BgL_fromz00_80)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_enginez00))
				{
					BGl_requirezd2initializa7ationz75zzengine_enginez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_enginez00();
					BGl_libraryzd2moduleszd2initz00zzengine_enginez00();
					BGl_importedzd2moduleszd2initz00zzengine_enginez00();
					return BGl_methodzd2initzd2zzengine_enginez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_engine");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_engine");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_engine");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* engine */
	BGL_EXPORTED_DEF obj_t BGl_enginez00zzengine_enginez00()
	{
		{	/* Engine/engine.scm 33 */
			if (PAIRP(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00))
				{	/* Engine/engine.scm 35 */
					return
						BGl_dumpzd2heapszd2zzengine_heapz00
						(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00);
				}
			else
				{	/* Engine/engine.scm 37 */
					bool_t BgL_test1072z00_98;

					if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
						{	/* Engine/engine.scm 37 */
							if (CBOOL(BGl_za2interpreterza2z00zzengine_paramz00))
								{	/* Engine/engine.scm 37 */
									BgL_test1072z00_98 = ((bool_t) 0);
								}
							else
								{	/* Engine/engine.scm 37 */
									BgL_test1072z00_98 = ((bool_t) 1);
								}
						}
					else
						{	/* Engine/engine.scm 37 */
							BgL_test1072z00_98 = ((bool_t) 0);
						}
					if (BgL_test1072z00_98)
						{	/* Engine/engine.scm 37 */
							return BGl_compilerz00zzengine_compilerz00();
						}
					else
						{	/* Engine/engine.scm 37 */
							if (PAIRP(BGl_za2czd2filesza2zd2zzengine_paramz00))
								{	/* Engine/engine.scm 39 */
									{	/* Engine/engine.scm 40 */
										bool_t BgL_test1076z00_106;

										{	/* Engine/engine.scm 40 */
											obj_t BgL_tmpz00_107;

											BgL_tmpz00_107 =
												CDR(BGl_za2czd2filesza2zd2zzengine_paramz00);
											BgL_test1076z00_106 = PAIRP(BgL_tmpz00_107);
										}
										if (BgL_test1076z00_106)
											{	/* Engine/engine.scm 40 */
												BGl_userzd2warningzd2zztools_errorz00
													(BGl_string1056z00zzengine_enginez00,
													BGl_string1057z00zzengine_enginez00,
													CDR(BGl_za2czd2filesza2zd2zzengine_paramz00));
											}
										else
											{	/* Engine/engine.scm 40 */
												BFALSE;
											}
									}
									BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BFALSE;
									{	/* Engine/engine.scm 43 */
										obj_t BgL_arg1024z00_19;
										obj_t BgL_arg1025z00_20;

										BgL_arg1024z00_19 =
											BGl_prefixz00zz__osz00(CAR
											(BGl_za2czd2filesza2zd2zzengine_paramz00));
										if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
											{	/* Engine/engine.scm 44 */
												BgL_arg1025z00_20 =
													BGl_prefixz00zz__osz00
													(BGl_za2destza2z00zzengine_paramz00);
											}
										else
											{	/* Engine/engine.scm 44 */
												BgL_arg1025z00_20 = BFALSE;
											}
										return
											BGl_cczd2compilerzd2zzbackend_cz00(BgL_arg1024z00_19,
											BgL_arg1025z00_20);
									}
								}
							else
								{	/* Engine/engine.scm 39 */
									if (NULLP(BGl_za2ozd2filesza2zd2zzengine_paramz00))
										{	/* Engine/engine.scm 52 */
											obj_t BgL_arg1029z00_24;

											BgL_arg1029z00_24 =
												string_append(CAR
												(BGl_za2libzd2dirza2zd2zzengine_paramz00),
												BGl_string1058z00zzengine_enginez00);
											return
												BGl_interpz00zzengine_interpz00
												(BGl_versionzd2envzd2zzwrite_versionz00,
												BGl_za2verboseza2z00zzengine_paramz00,
												BGl_za2srczd2filesza2zd2zzengine_paramz00,
												BGl_za2startupzd2fileza2zd2zzengine_paramz00,
												BgL_arg1029z00_24,
												BGl_za2bigloozd2argsza2zd2zzengine_paramz00);
										}
									else
										{	/* Engine/engine.scm 47 */
											return BGl_linkz00zzengine_linkz00();
										}
								}
						}
				}
		}

	}



/* &engine */
	obj_t BGl_z62enginez62zzengine_enginez00(obj_t BgL_envz00_76)
	{
		{	/* Engine/engine.scm 33 */
			return BGl_enginez00zzengine_enginez00();
		}

	}



/* hello-world */
	BGL_EXPORTED_DEF obj_t BGl_hellozd2worldzd2zzengine_enginez00()
	{
		{	/* Engine/engine.scm 60 */
			if (CBOOL(BGl_za2helloza2z00zzengine_paramz00))
				{	/* Engine/engine.scm 62 */
					obj_t BgL_g1012z00_27;

					BgL_g1012z00_27 =
						bgl_reverse_bang(BGl_za2srczd2filesza2zd2zzengine_paramz00);
					{
						obj_t BgL_srcz00_29;
						obj_t BgL_strz00_30;

						BgL_srcz00_29 = BgL_g1012z00_27;
						BgL_strz00_30 = BGl_string1060z00zzengine_enginez00;
					BgL_zc3z04anonymousza31031ze3z87_31:
						if (NULLP(BgL_srcz00_29))
							{	/* Engine/engine.scm 64 */
								{	/* Engine/engine.scm 66 */
									long BgL_tmpz00_130;

									BgL_tmpz00_130 = (STRING_LENGTH(BgL_strz00_30) - ((long) 1));
									STRING_SET(BgL_strz00_30, BgL_tmpz00_130,
										((unsigned char) ':'));
								}
								{	/* Engine/engine.scm 67 */
									obj_t BgL_list1036z00_35;

									{	/* Engine/engine.scm 67 */
										obj_t BgL_arg1037z00_36;

										BgL_arg1037z00_36 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
										BgL_list1036z00_35 =
											MAKE_YOUNG_PAIR(BgL_strz00_30, BgL_arg1037z00_36);
									}
									return
										BGl_verbosez00zztools_speekz00(BINT(((long) 0)),
										BgL_list1036z00_35);
							}}
						else
							{	/* Engine/engine.scm 68 */
								obj_t BgL_arg1038z00_37;
								obj_t BgL_arg1039z00_38;

								BgL_arg1038z00_37 = CDR(((obj_t) BgL_srcz00_29));
								{	/* Engine/engine.scm 69 */
									obj_t BgL_arg1040z00_39;

									{	/* Engine/engine.scm 69 */
										bool_t BgL_test1081z00_141;

										{	/* Engine/engine.scm 69 */
											obj_t BgL_tmpz00_142;

											BgL_tmpz00_142 = CAR(((obj_t) BgL_srcz00_29));
											BgL_test1081z00_141 = STRINGP(BgL_tmpz00_142);
										}
										if (BgL_test1081z00_141)
											{	/* Engine/engine.scm 69 */
												BgL_arg1040z00_39 = CAR(((obj_t) BgL_srcz00_29));
											}
										else
											{	/* Engine/engine.scm 71 */
												obj_t BgL_arg1043z00_42;

												BgL_arg1043z00_42 = CAR(((obj_t) BgL_srcz00_29));
												{	/* Engine/engine.scm 71 */
													obj_t BgL_res1055z00_75;

													{	/* Engine/engine.scm 71 */
														obj_t BgL_arg1466z00_74;

														BgL_arg1466z00_74 =
															SYMBOL_TO_STRING(((obj_t) BgL_arg1043z00_42));
														BgL_res1055z00_75 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_74);
													}
													BgL_arg1040z00_39 = BgL_res1055z00_75;
												}
											}
									}
									BgL_arg1039z00_38 =
										string_append_3(BgL_arg1040z00_39,
										BGl_string1059z00zzengine_enginez00, BgL_strz00_30);
								}
								{
									obj_t BgL_strz00_155;
									obj_t BgL_srcz00_154;

									BgL_srcz00_154 = BgL_arg1038z00_37;
									BgL_strz00_155 = BgL_arg1039z00_38;
									BgL_strz00_30 = BgL_strz00_155;
									BgL_srcz00_29 = BgL_srcz00_154;
									goto BgL_zc3z04anonymousza31031ze3z87_31;
								}
							}
					}
				}
			else
				{	/* Engine/engine.scm 61 */
					return BFALSE;
				}
		}

	}



/* &hello-world */
	obj_t BGl_z62hellozd2worldzb0zzengine_enginez00(obj_t BgL_envz00_78)
	{
		{	/* Engine/engine.scm 60 */
			return BGl_hellozd2worldzd2zzengine_enginez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_enginez00()
	{
		{	/* Engine/engine.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzwrite_versionz00(((long) 404503763),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_compilerz00(((long) 412406778),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_interpz00(((long) 328489584),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_linkz00(((long) 117219677),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			BGl_modulezd2initializa7ationz75zzengine_heapz00(((long) 65890350),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cz00(((long) 190235116),
				BSTRING_TO_STRING(BGl_string1061z00zzengine_enginez00));
		}

	}

#ifdef __cplusplus
}
#endif
