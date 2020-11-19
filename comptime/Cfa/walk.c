/*===========================================================================*/
/*   (Cfa/walk.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/walk.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
	static obj_t BGl_objectzd2initzd2zzcfa_walkz00();
	extern obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzcfa_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_walkz00();
	extern obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t);
	extern obj_t BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00(obj_t);
	extern obj_t BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_walkz00 = BUNSPEC;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_walkz00();
	extern obj_t BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62cfazd2walkz12za2zzcfa_walkz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t);
	static obj_t __cnst[3];


	extern obj_t BGl_unpatchzd2pairzd2setz12zd2envzc0zzcfa_pairz00;
	extern obj_t BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00;
	   
		 
		DEFINE_STRING(BGl_string1961z00zzcfa_walkz00,
		BgL_bgl_string1961za700za7za7c1974za7, "Cfa", 3);
	      DEFINE_STRING(BGl_string1962z00zzcfa_walkz00,
		BgL_bgl_string1962za700za7za7c1975za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1963z00zzcfa_walkz00,
		BgL_bgl_string1963za700za7za7c1976za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1964z00zzcfa_walkz00,
		BgL_bgl_string1964za700za7za7c1977za7, " error", 6);
	      DEFINE_STRING(BGl_string1965z00zzcfa_walkz00,
		BgL_bgl_string1965za700za7za7c1978za7, "s", 1);
	      DEFINE_STRING(BGl_string1966z00zzcfa_walkz00,
		BgL_bgl_string1966za700za7za7c1979za7, "", 0);
	      DEFINE_STRING(BGl_string1967z00zzcfa_walkz00,
		BgL_bgl_string1967za700za7za7c1980za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1968z00zzcfa_walkz00,
		BgL_bgl_string1968za700za7za7c1981za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1969z00zzcfa_walkz00,
		BgL_bgl_string1969za700za7za7c1982za7, "cfa_walk", 8);
	      DEFINE_STRING(BGl_string1970z00zzcfa_walkz00,
		BgL_bgl_string1970za700za7za7c1983za7,
		"(stop-closure-cache unpatch-vector-set! unpatch-pair-set!) (cfa inline) pass-started ",
		85);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfazd2walkz12zd2envz12zzcfa_walkz00,
		BgL_bgl_za762cfaza7d2walkza7121984za7, BGl_z62cfazd2walkz12za2zzcfa_walkz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_stopzd2closurezd2cachezd2envzd2zzcfa_closurez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_walkz00(long
		BgL_checksumz00_3872, char *BgL_fromz00_3873)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_walkz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_walkz00();
					BGl_cnstzd2initzd2zzcfa_walkz00();
					BGl_importedzd2moduleszd2initz00zzcfa_walkz00();
					return BGl_methodzd2initzd2zzcfa_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			{	/* Cfa/walk.scm 24 */
				obj_t BgL_cportz00_3859;

				{	/* Cfa/walk.scm 24 */
					obj_t BgL_stringz00_3867;

					BgL_stringz00_3867 = BGl_string1970z00zzcfa_walkz00;
					{	/* Cfa/walk.scm 24 */
						obj_t BgL_startz00_3868;

						BgL_startz00_3868 = BINT(((long) 0));
						{	/* Cfa/walk.scm 24 */
							obj_t BgL_endz00_3869;

							BgL_endz00_3869 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3867)));
							{	/* Cfa/walk.scm 24 */

								BgL_cportz00_3859 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3867, BgL_startz00_3868, BgL_endz00_3869);
				}}}}
				{
					long BgL_iz00_3860;

					BgL_iz00_3860 = ((long) 2);
				BgL_loopz00_3861:
					if ((BgL_iz00_3860 == ((long) -1)))
						{	/* Cfa/walk.scm 24 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/walk.scm 24 */
							{	/* Cfa/walk.scm 24 */
								obj_t BgL_arg1972z00_3863;

								{	/* Cfa/walk.scm 24 */

									{	/* Cfa/walk.scm 24 */
										obj_t BgL_locationz00_3865;

										BgL_locationz00_3865 = BBOOL(((bool_t) 0));
										{	/* Cfa/walk.scm 24 */

											BgL_arg1972z00_3863 =
												BGl_readz00zz__readerz00(BgL_cportz00_3859,
												BgL_locationz00_3865);
										}
									}
								}
								{	/* Cfa/walk.scm 24 */
									int BgL_tmpz00_3899;

									BgL_tmpz00_3899 = (int) (BgL_iz00_3860);
									CNST_TABLE_SET(BgL_tmpz00_3899, BgL_arg1972z00_3863);
							}}
							{	/* Cfa/walk.scm 24 */
								int BgL_auxz00_3866;

								BgL_auxz00_3866 = (int) ((BgL_iz00_3860 - ((long) 1)));
								{
									long BgL_iz00_3904;

									BgL_iz00_3904 = (long) (BgL_auxz00_3866);
									BgL_iz00_3860 = BgL_iz00_3904;
									goto BgL_loopz00_3861;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcfa_walkz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_3221;

				BgL_headz00_3221 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_3222;
					obj_t BgL_tailz00_3223;

					BgL_prevz00_3222 = BgL_headz00_3221;
					BgL_tailz00_3223 = BgL_l1z00_1;
				BgL_loopz00_3224:
					if (PAIRP(BgL_tailz00_3223))
						{
							obj_t BgL_newzd2prevzd2_3226;

							BgL_newzd2prevzd2_3226 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_3223), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_3222, BgL_newzd2prevzd2_3226);
							{
								obj_t BgL_tailz00_3914;
								obj_t BgL_prevz00_3913;

								BgL_prevz00_3913 = BgL_newzd2prevzd2_3226;
								BgL_tailz00_3914 = CDR(BgL_tailz00_3223);
								BgL_tailz00_3223 = BgL_tailz00_3914;
								BgL_prevz00_3222 = BgL_prevz00_3913;
								goto BgL_loopz00_3224;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_3221);
				}
			}
		}

	}



/* cfa-walk! */
	BGL_EXPORTED_DEF obj_t BGl_cfazd2walkz12zc0zzcfa_walkz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/walk.scm 61 */
			{	/* Cfa/walk.scm 62 */
				obj_t BgL_list1559z00_3229;

				{	/* Cfa/walk.scm 62 */
					obj_t BgL_arg1561z00_3230;

					{	/* Cfa/walk.scm 62 */
						obj_t BgL_arg1564z00_3231;

						BgL_arg1564z00_3231 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1561z00_3230 =
							MAKE_YOUNG_PAIR(BGl_string1961z00zzcfa_walkz00,
							BgL_arg1564z00_3231);
					}
					BgL_list1559z00_3229 =
						MAKE_YOUNG_PAIR(BGl_string1962z00zzcfa_walkz00,
						BgL_arg1561z00_3230);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1559z00_3229);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1961z00zzcfa_walkz00;
			{	/* Cfa/walk.scm 62 */
				obj_t BgL_g1174z00_3232;

				BgL_g1174z00_3232 = BNIL;
				{
					obj_t BgL_hooksz00_3235;
					obj_t BgL_hnamesz00_3236;

					BgL_hooksz00_3235 = BgL_g1174z00_3232;
					BgL_hnamesz00_3236 = BNIL;
				BgL_zc3z04anonymousza31565ze3z87_3237:
					if (NULLP(BgL_hooksz00_3235))
						{	/* Cfa/walk.scm 62 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Cfa/walk.scm 62 */
							bool_t BgL_test1989z00_3927;

							{	/* Cfa/walk.scm 62 */
								obj_t BgL_fun1580z00_3244;

								BgL_fun1580z00_3244 = CAR(((obj_t) BgL_hooksz00_3235));
								BgL_test1989z00_3927 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1580z00_3244)
									(BgL_fun1580z00_3244, BEOA));
							}
							if (BgL_test1989z00_3927)
								{	/* Cfa/walk.scm 62 */
									obj_t BgL_arg1573z00_3241;
									obj_t BgL_arg1575z00_3242;

									BgL_arg1573z00_3241 = CDR(((obj_t) BgL_hooksz00_3235));
									BgL_arg1575z00_3242 = CDR(((obj_t) BgL_hnamesz00_3236));
									{
										obj_t BgL_hnamesz00_3939;
										obj_t BgL_hooksz00_3938;

										BgL_hooksz00_3938 = BgL_arg1573z00_3241;
										BgL_hnamesz00_3939 = BgL_arg1575z00_3242;
										BgL_hnamesz00_3236 = BgL_hnamesz00_3939;
										BgL_hooksz00_3235 = BgL_hooksz00_3938;
										goto BgL_zc3z04anonymousza31565ze3z87_3237;
									}
								}
							else
								{	/* Cfa/walk.scm 62 */
									obj_t BgL_arg1578z00_3243;

									BgL_arg1578z00_3243 = CAR(((obj_t) BgL_hnamesz00_3236));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1961z00zzcfa_walkz00,
										BGl_string1963z00zzcfa_walkz00, BgL_arg1578z00_3243);
								}
						}
				}
			}
			BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(BgL_globalsz00_3);
			BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
			BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(BgL_globalsz00_3);
			{	/* Cfa/walk.scm 72 */
				obj_t BgL_iterationzd2rootszd2_3247;

				BgL_iterationzd2rootszd2_3247 =
					BGl_cfazd2iteratezd2tozd2fixpointz12zc0zzcfa_iteratez00
					(BgL_globalsz00_3);
				BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
				{	/* Cfa/walk.scm 76 */
					obj_t BgL_globalsz00_3248;

					BgL_globalsz00_3248 =
						BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
						BgL_globalsz00_3);
					BGl_showzd2cfazd2resultsz00zzcfa_showz00(BgL_globalsz00_3248);
					{	/* Cfa/walk.scm 80 */
						obj_t BgL_additionalz00_3249;

						BgL_additionalz00_3249 =
							BGl_vectorzd2ze3tvectorz12z23zzcfa_tvectorz00
							(BgL_globalsz00_3248);
						BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00
							(BgL_globalsz00_3248);
						BGl_typezd2settingsz12zc0zzcfa_typez00(BgL_globalsz00_3248);
						BGl_specializa7ez12zb5zzcfa_specializa7eza7(BgL_globalsz00_3248);
						{	/* Cfa/walk.scm 88 */
							obj_t BgL_valuez00_3250;

							BgL_valuez00_3250 =
								BGl_shrinkifyz12z12zzast_shrinkifyz00
								(BGl_appendzd221011zd2zzcfa_walkz00(BgL_additionalz00_3249,
									BgL_globalsz00_3248));
							if (((long)
									CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
									((long) 0)))
								{	/* Cfa/walk.scm 88 */
									{	/* Cfa/walk.scm 88 */
										obj_t BgL_port1545z00_3252;

										{	/* Cfa/walk.scm 88 */
											obj_t BgL_res1956z00_3838;

											{	/* Cfa/walk.scm 88 */
												obj_t BgL_tmpz00_3960;

												BgL_tmpz00_3960 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1956z00_3838 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3960);
											}
											BgL_port1545z00_3252 = BgL_res1956z00_3838;
										}
										bgl_display_obj
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BgL_port1545z00_3252);
										bgl_display_string(BGl_string1964z00zzcfa_walkz00,
											BgL_port1545z00_3252);
										{	/* Cfa/walk.scm 88 */
											obj_t BgL_arg1584z00_3253;

											{	/* Cfa/walk.scm 88 */
												bool_t BgL_test1991z00_3965;

												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Cfa/walk.scm 88 */
														if (INTEGERP
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Cfa/walk.scm 88 */
																BgL_test1991z00_3965 =
																	(
																	(long)
																	CINT
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
																	> ((long) 1));
															}
														else
															{	/* Cfa/walk.scm 88 */
																BgL_test1991z00_3965 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
													}}
												else
													{	/* Cfa/walk.scm 88 */
														BgL_test1991z00_3965 = ((bool_t) 0);
													}
												if (BgL_test1991z00_3965)
													{	/* Cfa/walk.scm 88 */
														BgL_arg1584z00_3253 =
															BGl_string1965z00zzcfa_walkz00;
													}
												else
													{	/* Cfa/walk.scm 88 */
														BgL_arg1584z00_3253 =
															BGl_string1966z00zzcfa_walkz00;
													}
											}
											bgl_display_obj(BgL_arg1584z00_3253,
												BgL_port1545z00_3252);
										}
										bgl_display_string(BGl_string1967z00zzcfa_walkz00,
											BgL_port1545z00_3252);
										bgl_display_char(((unsigned char) 10),
											BgL_port1545z00_3252);
									}
									{	/* Cfa/walk.scm 88 */
										obj_t BgL_list1588z00_3259;

										BgL_list1588z00_3259 =
											MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
										return BGl_exitz00zz__errorz00(BgL_list1588z00_3259);
									}
								}
							else
								{	/* Cfa/walk.scm 88 */
									obj_t BgL_g1176z00_3260;
									obj_t BgL_g1177z00_3261;

									{	/* Cfa/walk.scm 88 */
										obj_t BgL_list1606z00_3274;

										{	/* Cfa/walk.scm 88 */
											obj_t BgL_arg1611z00_3275;

											{	/* Cfa/walk.scm 88 */
												obj_t BgL_arg1612z00_3276;

												BgL_arg1612z00_3276 =
													MAKE_YOUNG_PAIR
													(BGl_unpatchzd2pairzd2setz12zd2envzc0zzcfa_pairz00,
													BNIL);
												BgL_arg1611z00_3275 =
													MAKE_YOUNG_PAIR
													(BGl_unpatchzd2vectorzd2setz12zd2envzc0zzcfa_tvectorz00,
													BgL_arg1612z00_3276);
											}
											BgL_list1606z00_3274 =
												MAKE_YOUNG_PAIR
												(BGl_stopzd2closurezd2cachezd2envzd2zzcfa_closurez00,
												BgL_arg1611z00_3275);
										}
										BgL_g1176z00_3260 = BgL_list1606z00_3274;
									}
									BgL_g1177z00_3261 = CNST_TABLE_REF(((long) 2));
									{
										obj_t BgL_hooksz00_3263;
										obj_t BgL_hnamesz00_3264;

										BgL_hooksz00_3263 = BgL_g1176z00_3260;
										BgL_hnamesz00_3264 = BgL_g1177z00_3261;
									BgL_zc3z04anonymousza31589ze3z87_3265:
										if (NULLP(BgL_hooksz00_3263))
											{	/* Cfa/walk.scm 88 */
												return BgL_valuez00_3250;
											}
										else
											{	/* Cfa/walk.scm 88 */
												bool_t BgL_test1995z00_3986;

												{	/* Cfa/walk.scm 88 */
													obj_t BgL_fun1605z00_3272;

													BgL_fun1605z00_3272 =
														CAR(((obj_t) BgL_hooksz00_3263));
													BgL_test1995z00_3986 =
														CBOOL(PROCEDURE_ENTRY(BgL_fun1605z00_3272)
														(BgL_fun1605z00_3272, BEOA));
												}
												if (BgL_test1995z00_3986)
													{	/* Cfa/walk.scm 88 */
														obj_t BgL_arg1597z00_3269;
														obj_t BgL_arg1599z00_3270;

														BgL_arg1597z00_3269 =
															CDR(((obj_t) BgL_hooksz00_3263));
														BgL_arg1599z00_3270 =
															CDR(((obj_t) BgL_hnamesz00_3264));
														{
															obj_t BgL_hnamesz00_3998;
															obj_t BgL_hooksz00_3997;

															BgL_hooksz00_3997 = BgL_arg1597z00_3269;
															BgL_hnamesz00_3998 = BgL_arg1599z00_3270;
															BgL_hnamesz00_3264 = BgL_hnamesz00_3998;
															BgL_hooksz00_3263 = BgL_hooksz00_3997;
															goto BgL_zc3z04anonymousza31589ze3z87_3265;
														}
													}
												else
													{	/* Cfa/walk.scm 88 */
														obj_t BgL_arg1604z00_3271;

														BgL_arg1604z00_3271 =
															CAR(((obj_t) BgL_hnamesz00_3264));
														return
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_za2currentzd2passza2zd2zzengine_passz00,
															BGl_string1968z00zzcfa_walkz00,
															BgL_arg1604z00_3271);
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



/* &cfa-walk! */
	obj_t BGl_z62cfazd2walkz12za2zzcfa_walkz00(obj_t BgL_envz00_3854,
		obj_t BgL_globalsz00_3855)
	{
		{	/* Cfa/walk.scm 61 */
			return BGl_cfazd2walkz12zc0zzcfa_walkz00(BgL_globalsz00_3855);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_walkz00()
	{
		{	/* Cfa/walk.scm 24 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(((long) 393828139),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 220306840),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_showz00(((long) 391833845),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_typez00(((long) 93933701),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(((long) 374743244),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			BGl_modulezd2initializa7ationz75zzcfa_pairz00(((long) 37668580),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(((long) 185547369),
				BSTRING_TO_STRING(BGl_string1969z00zzcfa_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
