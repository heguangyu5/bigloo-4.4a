/*===========================================================================*/
/*   (Expand/if.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/if.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_expandzd2ifzd2withz00zzexpand_ifz00(obj_t, obj_t, obj_t,
		bool_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static bool_t BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2notzd2zzexpand_ifz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_ifz00();
	static obj_t BGl_z62expandzd2notzb0zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2andzd2zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_findzd2casezd2expz00zzexpand_ifz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_ifz00();
	static obj_t BGl_z62expandzd2andzb0zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2orzf2boolz20zzexpand_ifz00(obj_t);
	static obj_t BGl_iszd2casezf3z21zzexpand_ifz00(obj_t);
	static bool_t BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00;
	static obj_t BGl_gczd2rootszd2initz00zzexpand_ifz00();
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopze70ze7zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_loopze73ze7zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_ifzd2ze3casez12z23zzexpand_ifz00(obj_t);
	BGL_IMPORT obj_t BGl_za2nilza2z00zz__evalz00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2andzf2boolz20zzexpand_ifz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_ifz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzexpand_ifz00();
	static obj_t BGl_genericzd2initzd2zzexpand_ifz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62expandzd2ifzb0zzexpand_ifz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_valzd2ze3constantze70zd6zzexpand_ifz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2ifzd2zzexpand_ifz00(obj_t, obj_t);
	extern obj_t BGl_lexicalzd2stackzd2zzexpand_epsz00();
	static obj_t BGl_z62expandzd2orzb0zzexpand_ifz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2testzb0zzexpand_ifz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_ifz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2orzd2zzexpand_ifz00(obj_t, obj_t);
	static obj_t BGl_makezd2clausezd2zzexpand_ifz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_ifz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_ifz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_ifz00();
	static obj_t BGl_newzd2eze70z35zzexpand_ifz00(obj_t, obj_t);
	static obj_t __cnst[16];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2orzd2envz00zzexpand_ifz00,
		BgL_bgl_za762expandza7d2orza7b1982za7, BGl_z62expandzd2orzb0zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2notzd2envz00zzexpand_ifz00,
		BgL_bgl_za762expandza7d2notza71983za7, BGl_z62expandzd2notzb0zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2andzd2envz00zzexpand_ifz00,
		BgL_bgl_za762expandza7d2andza71984za7, BGl_z62expandzd2andzb0zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1970z00zzexpand_ifz00,
		BgL_bgl_string1970za700za7za7e1985za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1971z00zzexpand_ifz00,
		BgL_bgl_string1971za700za7za7e1986za7, "Illegal `if' form", 17);
	      DEFINE_STRING(BGl_string1972z00zzexpand_ifz00,
		BgL_bgl_string1972za700za7za7e1987za7, "_", 1);
	      DEFINE_STRING(BGl_string1973z00zzexpand_ifz00,
		BgL_bgl_string1973za700za7za7e1988za7, "or", 2);
	      DEFINE_STRING(BGl_string1974z00zzexpand_ifz00,
		BgL_bgl_string1974za700za7za7e1989za7, "test_", 5);
	      DEFINE_STRING(BGl_string1975z00zzexpand_ifz00,
		BgL_bgl_string1975za700za7za7e1990za7, "and", 3);
	      DEFINE_STRING(BGl_string1976z00zzexpand_ifz00,
		BgL_bgl_string1976za700za7za7e1991za7, "Illegal `not' form", 18);
	      DEFINE_STRING(BGl_string1977z00zzexpand_ifz00,
		BgL_bgl_string1977za700za7za7e1992za7, "expand_if", 9);
	      DEFINE_STRING(BGl_string1978z00zzexpand_ifz00,
		BgL_bgl_string1978za700za7za7e1993za7,
		"non-user else quote memq eqv? char=? =fx eq? c-eq? case and or let null? test if ",
		81);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_expandzd2testzd2envz00zzexpand_ifz00,
		BgL_bgl_za762expandza7d2test1994z00, BGl_z62expandzd2testzb0zzexpand_ifz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2ifzd2envz00zzexpand_ifz00,
		BgL_bgl_za762expandza7d2ifza7b1995za7, BGl_z62expandzd2ifzb0zzexpand_ifz00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzexpand_ifz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_ifz00(long
		BgL_checksumz00_975, char *BgL_fromz00_976)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_ifz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_ifz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_ifz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_ifz00();
					BGl_cnstzd2initzd2zzexpand_ifz00();
					BGl_importedzd2moduleszd2initz00zzexpand_ifz00();
					return BGl_toplevelzd2initzd2zzexpand_ifz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_if");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_if");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			{	/* Expand/if.scm 15 */
				obj_t BgL_cportz00_942;

				{	/* Expand/if.scm 15 */
					obj_t BgL_stringz00_950;

					BgL_stringz00_950 = BGl_string1978z00zzexpand_ifz00;
					{	/* Expand/if.scm 15 */
						obj_t BgL_startz00_951;

						BgL_startz00_951 = BINT(((long) 0));
						{	/* Expand/if.scm 15 */
							obj_t BgL_endz00_952;

							BgL_endz00_952 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_950)));
							{	/* Expand/if.scm 15 */

								BgL_cportz00_942 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_950, BgL_startz00_951, BgL_endz00_952);
				}}}}
				{
					long BgL_iz00_943;

					BgL_iz00_943 = ((long) 15);
				BgL_loopz00_944:
					if ((BgL_iz00_943 == ((long) -1)))
						{	/* Expand/if.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/if.scm 15 */
							{	/* Expand/if.scm 15 */
								obj_t BgL_arg1980z00_946;

								{	/* Expand/if.scm 15 */

									{	/* Expand/if.scm 15 */
										obj_t BgL_locationz00_948;

										BgL_locationz00_948 = BBOOL(((bool_t) 0));
										{	/* Expand/if.scm 15 */

											BgL_arg1980z00_946 =
												BGl_readz00zz__readerz00(BgL_cportz00_942,
												BgL_locationz00_948);
										}
									}
								}
								{	/* Expand/if.scm 15 */
									int BgL_tmpz00_1005;

									BgL_tmpz00_1005 = (int) (BgL_iz00_943);
									CNST_TABLE_SET(BgL_tmpz00_1005, BgL_arg1980z00_946);
							}}
							{	/* Expand/if.scm 15 */
								int BgL_auxz00_949;

								BgL_auxz00_949 = (int) ((BgL_iz00_943 - ((long) 1)));
								{
									long BgL_iz00_1010;

									BgL_iz00_1010 = (long) (BgL_auxz00_949);
									BgL_iz00_943 = BgL_iz00_1010;
									goto BgL_loopz00_944;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			return (BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 =
				((bool_t) 1), BUNSPEC);
		}

	}



/* expand-or/bool */
	obj_t BGl_expandzd2orzf2boolz20zzexpand_ifz00(obj_t BgL_expz00_3)
	{
		{	/* Expand/if.scm 28 */
			{	/* Expand/if.scm 29 */
				obj_t BgL_resz00_35;

				{	/* Expand/if.scm 29 */
					obj_t BgL_g1016z00_36;

					BgL_g1016z00_36 = CDR(((obj_t) BgL_expz00_3));
					BgL_resz00_35 =
						BGl_loopze73ze7zzexpand_ifz00(BgL_expz00_3, BgL_g1016z00_36);
				}
				return BGl_replacez12z12zztools_miscz00(BgL_expz00_3, BgL_resz00_35);
			}
		}

	}



/* loop~3 */
	obj_t BGl_loopze73ze7zzexpand_ifz00(obj_t BgL_expz00_941, obj_t BgL_sorz00_38)
	{
		{	/* Expand/if.scm 29 */
			if (NULLP(BgL_sorz00_38))
				{	/* Expand/if.scm 31 */
					return BFALSE;
				}
			else
				{	/* Expand/if.scm 31 */
					if (PAIRP(BgL_sorz00_38))
						{	/* Expand/if.scm 33 */
							if (NULLP(CDR(BgL_sorz00_38)))
								{	/* Expand/if.scm 35 */
									return CAR(BgL_sorz00_38);
								}
							else
								{	/* Expand/if.scm 38 */
									obj_t BgL_resz00_44;

									{	/* Expand/if.scm 38 */
										obj_t BgL_arg1045z00_52;

										{	/* Expand/if.scm 38 */
											obj_t BgL_arg1047z00_53;
											obj_t BgL_arg1048z00_54;

											BgL_arg1047z00_53 = CAR(BgL_sorz00_38);
											{	/* Expand/if.scm 38 */
												obj_t BgL_arg1049z00_55;

												BgL_arg1049z00_55 =
													MAKE_YOUNG_PAIR(BGl_loopze73ze7zzexpand_ifz00
													(BgL_expz00_941, CDR(BgL_sorz00_38)), BNIL);
												BgL_arg1048z00_54 =
													MAKE_YOUNG_PAIR(BTRUE, BgL_arg1049z00_55);
											}
											BgL_arg1045z00_52 =
												MAKE_YOUNG_PAIR(BgL_arg1047z00_53, BgL_arg1048z00_54);
										}
										BgL_resz00_44 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1045z00_52);
									}
									{	/* Expand/if.scm 40 */
										bool_t BgL_test2001z00_1033;

										{	/* Expand/if.scm 40 */
											obj_t BgL_arg1044z00_51;

											BgL_arg1044z00_51 = CAR(BgL_sorz00_38);
											{	/* Expand/if.scm 40 */
												bool_t BgL_res1850z00_603;

												BgL_res1850z00_603 = EPAIRP(BgL_arg1044z00_51);
												BgL_test2001z00_1033 = BgL_res1850z00_603;
										}}
										if (BgL_test2001z00_1033)
											{	/* Expand/if.scm 41 */
												obj_t BgL_arg1040z00_47;
												obj_t BgL_arg1041z00_48;
												obj_t BgL_arg1042z00_49;

												BgL_arg1040z00_47 = CAR(BgL_resz00_44);
												BgL_arg1041z00_48 = CDR(BgL_resz00_44);
												BgL_arg1042z00_49 = CER(CAR(BgL_sorz00_38));
												{	/* Expand/if.scm 41 */
													obj_t BgL_res1851z00_608;

													BgL_res1851z00_608 =
														MAKE_YOUNG_EPAIR(BgL_arg1040z00_47,
														BgL_arg1041z00_48, BgL_arg1042z00_49);
													return BgL_res1851z00_608;
												}
											}
										else
											{	/* Expand/if.scm 40 */
												return BgL_resz00_44;
											}
									}
								}
						}
					else
						{	/* Expand/if.scm 33 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string1970z00zzexpand_ifz00, BgL_expz00_941);
						}
				}
		}

	}



/* expand-and/bool */
	obj_t BGl_expandzd2andzf2boolz20zzexpand_ifz00(obj_t BgL_expz00_4)
	{
		{	/* Expand/if.scm 49 */
			{	/* Expand/if.scm 50 */
				obj_t BgL_resz00_60;

				{	/* Expand/if.scm 50 */
					obj_t BgL_g1017z00_61;

					BgL_g1017z00_61 = CDR(((obj_t) BgL_expz00_4));
					BgL_resz00_60 =
						BGl_loopze72ze7zzexpand_ifz00(BgL_expz00_4, BgL_g1017z00_61);
				}
				return BGl_replacez12z12zztools_miscz00(BgL_expz00_4, BgL_resz00_60);
			}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzexpand_ifz00(obj_t BgL_expz00_940,
		obj_t BgL_sandz00_63)
	{
		{	/* Expand/if.scm 50 */
			if (NULLP(BgL_sandz00_63))
				{	/* Expand/if.scm 52 */
					return BTRUE;
				}
			else
				{	/* Expand/if.scm 52 */
					if (PAIRP(BgL_sandz00_63))
						{	/* Expand/if.scm 54 */
							if (NULLP(CDR(BgL_sandz00_63)))
								{	/* Expand/if.scm 56 */
									return CAR(BgL_sandz00_63);
								}
							else
								{	/* Expand/if.scm 59 */
									obj_t BgL_resz00_69;

									{	/* Expand/if.scm 59 */
										obj_t BgL_arg1065z00_77;

										{	/* Expand/if.scm 59 */
											obj_t BgL_arg1073z00_78;
											obj_t BgL_arg1074z00_79;

											BgL_arg1073z00_78 = CAR(BgL_sandz00_63);
											{	/* Expand/if.scm 59 */
												obj_t BgL_arg1078z00_80;
												obj_t BgL_arg1095z00_81;

												BgL_arg1078z00_80 =
													BGl_loopze72ze7zzexpand_ifz00(BgL_expz00_940,
													CDR(BgL_sandz00_63));
												BgL_arg1095z00_81 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
												BgL_arg1074z00_79 =
													MAKE_YOUNG_PAIR(BgL_arg1078z00_80, BgL_arg1095z00_81);
											}
											BgL_arg1065z00_77 =
												MAKE_YOUNG_PAIR(BgL_arg1073z00_78, BgL_arg1074z00_79);
										}
										BgL_resz00_69 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1065z00_77);
									}
									{	/* Expand/if.scm 61 */
										bool_t BgL_test2005z00_1062;

										{	/* Expand/if.scm 61 */
											obj_t BgL_arg1064z00_76;

											BgL_arg1064z00_76 = CAR(BgL_sandz00_63);
											{	/* Expand/if.scm 61 */
												bool_t BgL_res1855z00_618;

												BgL_res1855z00_618 = EPAIRP(BgL_arg1064z00_76);
												BgL_test2005z00_1062 = BgL_res1855z00_618;
										}}
										if (BgL_test2005z00_1062)
											{	/* Expand/if.scm 62 */
												obj_t BgL_arg1060z00_72;
												obj_t BgL_arg1061z00_73;
												obj_t BgL_arg1062z00_74;

												BgL_arg1060z00_72 = CAR(BgL_resz00_69);
												BgL_arg1061z00_73 = CDR(BgL_resz00_69);
												BgL_arg1062z00_74 = CER(CAR(BgL_sandz00_63));
												{	/* Expand/if.scm 62 */
													obj_t BgL_res1856z00_623;

													BgL_res1856z00_623 =
														MAKE_YOUNG_EPAIR(BgL_arg1060z00_72,
														BgL_arg1061z00_73, BgL_arg1062z00_74);
													return BgL_res1856z00_623;
												}
											}
										else
											{	/* Expand/if.scm 61 */
												return BgL_resz00_69;
											}
									}
								}
						}
					else
						{	/* Expand/if.scm 54 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string1970z00zzexpand_ifz00, BgL_expz00_940);
						}
				}
		}

	}



/* new-e~0 */
	obj_t BGl_newzd2eze70z35zzexpand_ifz00(obj_t BgL_xz00_111, obj_t BgL_ez00_112)
	{
		{	/* Expand/if.scm 71 */
		BGl_newzd2eze70z35zzexpand_ifz00:
			{

				if (PAIRP(BgL_xz00_111))
					{	/* Expand/if.scm 71 */
						if ((CAR(BgL_xz00_111) == CNST_TABLE_REF(((long) 4))))
							{	/* Expand/if.scm 71 */
								{
									obj_t BgL_xz00_1077;

									BgL_xz00_1077 =
										BGl_expandzd2orzf2boolz20zzexpand_ifz00(BgL_xz00_111);
									BgL_xz00_111 = BgL_xz00_1077;
									goto BGl_newzd2eze70z35zzexpand_ifz00;
								}
							}
						else
							{	/* Expand/if.scm 71 */
								if ((CAR(BgL_xz00_111) == CNST_TABLE_REF(((long) 5))))
									{	/* Expand/if.scm 71 */
										{
											obj_t BgL_xz00_1083;

											BgL_xz00_1083 =
												BGl_expandzd2andzf2boolz20zzexpand_ifz00(BgL_xz00_111);
											BgL_xz00_111 = BgL_xz00_1083;
											goto BGl_newzd2eze70z35zzexpand_ifz00;
										}
									}
								else
									{	/* Expand/if.scm 71 */
									BgL_tagzd2361zd2_116:
										return
											PROCEDURE_ENTRY(BgL_ez00_112) (BgL_ez00_112, BgL_xz00_111,
											BgL_ez00_112, BEOA);
									}
							}
					}
				else
					{	/* Expand/if.scm 71 */
						goto BgL_tagzd2361zd2_116;
					}
			}
		}

	}



/* &expand-test */
	obj_t BGl_z62expandzd2testzb0zzexpand_ifz00(obj_t BgL_envz00_923,
		obj_t BgL_xz00_924, obj_t BgL_ez00_925)
	{
		{	/* Expand/if.scm 70 */
			if (CBOOL(BGl_za2nilza2z00zz__evalz00))
				{	/* Expand/if.scm 80 */
					obj_t BgL_resz00_956;

					BgL_resz00_956 =
						BGl_newzd2eze70z35zzexpand_ifz00(BgL_xz00_924, BgL_ez00_925);
					{	/* Expand/if.scm 81 */
						bool_t BgL_test2010z00_1093;

						if (PAIRP(BgL_xz00_924))
							{	/* Expand/if.scm 81 */
								BgL_test2010z00_1093 = PAIRP(BgL_resz00_956);
							}
						else
							{	/* Expand/if.scm 81 */
								BgL_test2010z00_1093 = ((bool_t) 0);
							}
						if (BgL_test2010z00_1093)
							{	/* Expand/if.scm 81 */
								return
									BGl_replacez12z12zztools_miscz00(BgL_xz00_924,
									BgL_resz00_956);
							}
						else
							{	/* Expand/if.scm 81 */
								return BgL_resz00_956;
							}
					}
				}
			else
				{	/* Expand/if.scm 84 */
					obj_t BgL_auxz00_957;

					BgL_auxz00_957 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)));
					{	/* Expand/if.scm 85 */
						obj_t BgL_arg1103z00_958;

						{	/* Expand/if.scm 85 */
							obj_t BgL_arg1109z00_959;
							obj_t BgL_arg1110z00_960;

							{	/* Expand/if.scm 85 */
								obj_t BgL_arg1113z00_961;

								{	/* Expand/if.scm 85 */
									obj_t BgL_arg1114z00_962;

									{	/* Expand/if.scm 85 */
										obj_t BgL_arg1115z00_963;

										{	/* Expand/if.scm 85 */
											obj_t BgL_resz00_964;

											BgL_resz00_964 =
												BGl_newzd2eze70z35zzexpand_ifz00(BgL_xz00_924,
												BgL_ez00_925);
											if (PAIRP(BgL_resz00_964))
												{	/* Expand/if.scm 89 */
													BgL_arg1115z00_963 =
														MAKE_YOUNG_PAIR(CAR(BgL_resz00_964),
														CDR(BgL_resz00_964));
												}
											else
												{	/* Expand/if.scm 89 */
													BgL_arg1115z00_963 = BgL_resz00_964;
												}
										}
										BgL_arg1114z00_962 =
											MAKE_YOUNG_PAIR(BgL_arg1115z00_963, BNIL);
									}
									BgL_arg1113z00_961 =
										MAKE_YOUNG_PAIR(BgL_auxz00_957, BgL_arg1114z00_962);
								}
								BgL_arg1109z00_959 = MAKE_YOUNG_PAIR(BgL_arg1113z00_961, BNIL);
							}
							{	/* Expand/if.scm 93 */
								obj_t BgL_arg1121z00_965;

								{	/* Expand/if.scm 93 */
									obj_t BgL_arg1122z00_966;

									{	/* Expand/if.scm 93 */
										obj_t BgL_arg1123z00_967;

										{	/* Expand/if.scm 93 */
											obj_t BgL_arg1124z00_968;
											obj_t BgL_arg1125z00_969;

											{	/* Expand/if.scm 93 */
												obj_t BgL_arg1126z00_970;

												{	/* Expand/if.scm 93 */
													obj_t BgL_arg1127z00_971;
													obj_t BgL_arg1128z00_972;

													{	/* Expand/if.scm 93 */
														obj_t BgL_arg1129z00_973;

														BgL_arg1129z00_973 =
															MAKE_YOUNG_PAIR(BgL_auxz00_957, BNIL);
														BgL_arg1127z00_971 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
															BgL_arg1129z00_973);
													}
													{	/* Expand/if.scm 93 */
														obj_t BgL_arg1133z00_974;

														BgL_arg1133z00_974 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
														BgL_arg1128z00_972 =
															MAKE_YOUNG_PAIR(BFALSE, BgL_arg1133z00_974);
													}
													BgL_arg1126z00_970 =
														MAKE_YOUNG_PAIR(BgL_arg1127z00_971,
														BgL_arg1128z00_972);
												}
												BgL_arg1124z00_968 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
													BgL_arg1126z00_970);
											}
											BgL_arg1125z00_969 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											BgL_arg1123z00_967 =
												MAKE_YOUNG_PAIR(BgL_arg1124z00_968, BgL_arg1125z00_969);
										}
										BgL_arg1122z00_966 =
											MAKE_YOUNG_PAIR(BgL_auxz00_957, BgL_arg1123z00_967);
									}
									BgL_arg1121z00_965 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
										BgL_arg1122z00_966);
								}
								BgL_arg1110z00_960 = MAKE_YOUNG_PAIR(BgL_arg1121z00_965, BNIL);
							}
							BgL_arg1103z00_958 =
								MAKE_YOUNG_PAIR(BgL_arg1109z00_959, BgL_arg1110z00_960);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1103z00_958);
		}}}

	}



/* expand-if */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ifzd2zzexpand_ifz00(obj_t BgL_xz00_7,
		obj_t BgL_ez00_8)
	{
		{	/* Expand/if.scm 104 */
			{
				obj_t BgL_testz00_138;
				obj_t BgL_alorsz00_139;
				obj_t BgL_testz00_134;
				obj_t BgL_alorsz00_135;
				obj_t BgL_sinonz00_136;

				if (PAIRP(BgL_xz00_7))
					{	/* Expand/if.scm 105 */
						obj_t BgL_cdrzd2379zd2_144;

						BgL_cdrzd2379zd2_144 = CDR(BgL_xz00_7);
						if (PAIRP(BgL_cdrzd2379zd2_144))
							{	/* Expand/if.scm 105 */
								obj_t BgL_cdrzd2383zd2_146;

								BgL_cdrzd2383zd2_146 = CDR(BgL_cdrzd2379zd2_144);
								if ((CAR(BgL_cdrzd2379zd2_144) == BTRUE))
									{	/* Expand/if.scm 105 */
										if (PAIRP(BgL_cdrzd2383zd2_146))
											{	/* Expand/if.scm 105 */
												obj_t BgL_cdrzd2387zd2_150;

												BgL_cdrzd2387zd2_150 = CDR(BgL_cdrzd2383zd2_146);
												if (PAIRP(BgL_cdrzd2387zd2_150))
													{	/* Expand/if.scm 105 */
														if (NULLP(CDR(BgL_cdrzd2387zd2_150)))
															{	/* Expand/if.scm 105 */
																obj_t BgL_arg1176z00_154;

																BgL_arg1176z00_154 = CAR(BgL_cdrzd2383zd2_146);
																{	/* Expand/if.scm 107 */
																	obj_t BgL_arg1258z00_655;

																	BgL_arg1258z00_655 =
																		PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																		BgL_arg1176z00_154, BgL_ez00_8, BEOA);
																	return
																		BGl_replacez12z12zztools_miscz00(BgL_xz00_7,
																		BgL_arg1258z00_655);
																}
															}
														else
															{	/* Expand/if.scm 105 */
															BgL_tagzd2371zd2_141:
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string1971z00zzexpand_ifz00, BgL_xz00_7);
															}
													}
												else
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd2434zd2_158;

														BgL_cdrzd2434zd2_158 =
															CDR(((obj_t) BgL_cdrzd2379zd2_144));
														if (NULLP(CDR(((obj_t) BgL_cdrzd2434zd2_158))))
															{	/* Expand/if.scm 105 */
																obj_t BgL_arg1186z00_161;
																obj_t BgL_arg1190z00_162;

																BgL_arg1186z00_161 =
																	CAR(((obj_t) BgL_cdrzd2379zd2_144));
																BgL_arg1190z00_162 =
																	CAR(((obj_t) BgL_cdrzd2434zd2_158));
																BgL_testz00_138 = BgL_arg1186z00_161;
																BgL_alorsz00_139 = BgL_arg1190z00_162;
															BgL_tagzd2370zd2_140:
																{	/* Expand/if.scm 133 */
																	obj_t BgL_resz00_236;

																	{	/* Expand/if.scm 133 */
																		obj_t BgL_arg1296z00_237;

																		{	/* Expand/if.scm 133 */
																			obj_t BgL_arg1297z00_238;
																			obj_t BgL_arg1298z00_239;

																			BgL_arg1297z00_238 =
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BGl_expandzd2testzd2envz00zzexpand_ifz00,
																				BgL_testz00_138, BgL_ez00_8,
																				((bool_t) 1));
																			{	/* Expand/if.scm 134 */
																				obj_t BgL_arg1299z00_240;
																				obj_t BgL_arg1300z00_241;

																				BgL_arg1299z00_240 =
																					BGl_expandzd2ifzd2withz00zzexpand_ifz00
																					(BgL_ez00_8, BgL_alorsz00_139,
																					BgL_ez00_8, ((bool_t) 1));
																				BgL_arg1300z00_241 =
																					MAKE_YOUNG_PAIR(BFALSE, BNIL);
																				BgL_arg1298z00_239 =
																					MAKE_YOUNG_PAIR(BgL_arg1299z00_240,
																					BgL_arg1300z00_241);
																			}
																			BgL_arg1296z00_237 =
																				MAKE_YOUNG_PAIR(BgL_arg1297z00_238,
																				BgL_arg1298z00_239);
																		}
																		BgL_resz00_236 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BgL_arg1296z00_237);
																	}
																	return
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_resz00_236, BgL_xz00_7);
																}
															}
														else
															{	/* Expand/if.scm 105 */
																goto BgL_tagzd2371zd2_141;
															}
													}
											}
										else
											{	/* Expand/if.scm 105 */
												goto BgL_tagzd2371zd2_141;
											}
									}
								else
									{	/* Expand/if.scm 105 */
										obj_t BgL_cdrzd2467zd2_165;

										BgL_cdrzd2467zd2_165 = CDR(((obj_t) BgL_cdrzd2379zd2_144));
										if ((CAR(((obj_t) BgL_cdrzd2379zd2_144)) == BFALSE))
											{	/* Expand/if.scm 105 */
												if (PAIRP(BgL_cdrzd2467zd2_165))
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd2471zd2_169;

														BgL_cdrzd2471zd2_169 = CDR(BgL_cdrzd2467zd2_165);
														if (PAIRP(BgL_cdrzd2471zd2_169))
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(BgL_cdrzd2471zd2_169)))
																	{	/* Expand/if.scm 105 */
																		obj_t BgL_arg1211z00_174;

																		BgL_arg1211z00_174 =
																			CAR(BgL_cdrzd2471zd2_169);
																		{	/* Expand/if.scm 109 */
																			obj_t BgL_arg1263z00_672;

																			BgL_arg1263z00_672 =
																				PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																				BgL_arg1211z00_174, BgL_ez00_8, BEOA);
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_7, BgL_arg1263z00_672);
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd2371zd2_141;
																	}
															}
														else
															{	/* Expand/if.scm 105 */
																obj_t BgL_cdrzd2508zd2_177;

																BgL_cdrzd2508zd2_177 =
																	CDR(((obj_t) BgL_cdrzd2379zd2_144));
																if (NULLP(CDR(((obj_t) BgL_cdrzd2508zd2_177))))
																	{	/* Expand/if.scm 105 */
																		obj_t BgL_arg1225z00_180;
																		obj_t BgL_arg1227z00_181;

																		BgL_arg1225z00_180 =
																			CAR(((obj_t) BgL_cdrzd2379zd2_144));
																		BgL_arg1227z00_181 =
																			CAR(((obj_t) BgL_cdrzd2508zd2_177));
																		{
																			obj_t BgL_alorsz00_1201;
																			obj_t BgL_testz00_1200;

																			BgL_testz00_1200 = BgL_arg1225z00_180;
																			BgL_alorsz00_1201 = BgL_arg1227z00_181;
																			BgL_alorsz00_139 = BgL_alorsz00_1201;
																			BgL_testz00_138 = BgL_testz00_1200;
																			goto BgL_tagzd2370zd2_140;
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd2371zd2_141;
																	}
															}
													}
												else
													{	/* Expand/if.scm 105 */
														goto BgL_tagzd2371zd2_141;
													}
											}
										else
											{	/* Expand/if.scm 105 */
												obj_t BgL_cdrzd2538zd2_184;

												BgL_cdrzd2538zd2_184 =
													CDR(((obj_t) BgL_cdrzd2379zd2_144));
												if (PAIRP(BgL_cdrzd2538zd2_184))
													{	/* Expand/if.scm 105 */
														obj_t BgL_cdrzd2543zd2_186;

														BgL_cdrzd2543zd2_186 = CDR(BgL_cdrzd2538zd2_184);
														if (PAIRP(BgL_cdrzd2543zd2_186))
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(BgL_cdrzd2543zd2_186)))
																	{	/* Expand/if.scm 105 */
																		obj_t BgL_arg1239z00_190;
																		obj_t BgL_arg1242z00_191;
																		obj_t BgL_arg1243z00_192;

																		BgL_arg1239z00_190 =
																			CAR(((obj_t) BgL_cdrzd2379zd2_144));
																		BgL_arg1242z00_191 =
																			CAR(BgL_cdrzd2538zd2_184);
																		BgL_arg1243z00_192 =
																			CAR(BgL_cdrzd2543zd2_186);
																		BgL_testz00_134 = BgL_arg1239z00_190;
																		BgL_alorsz00_135 = BgL_arg1242z00_191;
																		BgL_sinonz00_136 = BgL_arg1243z00_192;
																		{	/* Expand/if.scm 111 */
																			obj_t BgL_newzd2testzd2_205;
																			obj_t BgL_newzd2thenzd2_206;
																			obj_t BgL_newzd2elsezd2_207;

																			BgL_newzd2testzd2_205 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_testz00_134,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BGl_expandzd2testzd2envz00zzexpand_ifz00,
																					BgL_testz00_134, BgL_ez00_8,
																					((bool_t) 1)));
																			BgL_newzd2thenzd2_206 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_alorsz00_135,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BgL_ez00_8, BgL_alorsz00_135,
																					BgL_ez00_8, ((bool_t) 1)));
																			BgL_newzd2elsezd2_207 =
																				BGl_replacez12z12zztools_miscz00
																				(BgL_sinonz00_136,
																				BGl_expandzd2ifzd2withz00zzexpand_ifz00
																				(BgL_ez00_8, BgL_sinonz00_136,
																					BgL_ez00_8, ((bool_t) 0)));
																			{	/* Expand/if.scm 114 */
																				obj_t BgL_resz00_208;

																				{	/* Expand/if.scm 114 */
																					obj_t BgL_exp0z00_209;

																					{	/* Expand/if.scm 114 */
																						obj_t BgL_arg1288z00_230;

																						{	/* Expand/if.scm 114 */
																							obj_t BgL_arg1289z00_231;

																							{	/* Expand/if.scm 114 */
																								obj_t BgL_arg1290z00_232;

																								BgL_arg1290z00_232 =
																									MAKE_YOUNG_PAIR
																									(BgL_newzd2elsezd2_207, BNIL);
																								BgL_arg1289z00_231 =
																									MAKE_YOUNG_PAIR
																									(BgL_newzd2thenzd2_206,
																									BgL_arg1290z00_232);
																							}
																							BgL_arg1288z00_230 =
																								MAKE_YOUNG_PAIR
																								(BgL_newzd2testzd2_205,
																								BgL_arg1289z00_231);
																						}
																						BgL_exp0z00_209 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 0)),
																							BgL_arg1288z00_230);
																					}
																					{	/* Expand/if.scm 114 */
																						obj_t BgL_exp1z00_210;

																						BgL_exp1z00_210 =
																							BGl_epairifyzd2reczd2zztools_miscz00
																							(BgL_exp0z00_209, BgL_xz00_7);
																						{	/* Expand/if.scm 115 */
																							obj_t BgL_expz00_211;

																							{	/* Expand/if.scm 116 */
																								obj_t BgL_arg1286z00_228;
																								obj_t BgL_arg1287z00_229;

																								BgL_arg1286z00_228 =
																									CAR(
																									((obj_t) BgL_exp1z00_210));
																								BgL_arg1287z00_229 =
																									CDR(
																									((obj_t) BgL_exp1z00_210));
																								BgL_expz00_211 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1286z00_228,
																									BgL_arg1287z00_229);
																							}
																							{	/* Expand/if.scm 116 */

																								{	/* Expand/if.scm 117 */
																									bool_t BgL_test2028z00_1233;

																									if (BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00)
																										{	/* Expand/if.scm 118 */
																											bool_t
																												BgL_test2030z00_1235;
																											{	/* Expand/if.scm 118 */
																												obj_t
																													BgL_arg1284z00_226;
																												{	/* Expand/if.scm 118 */
																													obj_t
																														BgL_arg1285z00_227;
																													BgL_arg1285z00_227 =
																														BGl_lexicalzd2stackzd2zzexpand_epsz00
																														();
																													BgL_arg1284z00_226 =
																														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																														(CNST_TABLE_REF((
																																(long) 6)),
																														BgL_arg1285z00_227);
																												}
																												BgL_test2030z00_1235 =
																													PAIRP
																													(BgL_arg1284z00_226);
																											}
																											if (BgL_test2030z00_1235)
																												{	/* Expand/if.scm 118 */
																													BgL_test2028z00_1233 =
																														((bool_t) 0);
																												}
																											else
																												{	/* Expand/if.scm 118 */
																													BgL_test2028z00_1233 =
																														((bool_t) 1);
																												}
																										}
																									else
																										{	/* Expand/if.scm 117 */
																											BgL_test2028z00_1233 =
																												((bool_t) 0);
																										}
																									if (BgL_test2028z00_1233)
																										{	/* Expand/if.scm 119 */
																											obj_t
																												BgL_newzd2expzd2_218;
																											BgL_newzd2expzd2_218 =
																												BGl_findzd2casezd2expz00zzexpand_ifz00
																												(BgL_expz00_211);
																											if (CBOOL
																												(BgL_newzd2expzd2_218))
																												{	/* Expand/if.scm 121 */
																													obj_t
																														BgL_newzd2newzd2expz00_219;
																													{	/* Expand/if.scm 122 */
																														obj_t
																															BgL_arg1282z00_224;
																														BgL_arg1282z00_224 =
																															BGl_ifzd2ze3casez12z23zzexpand_ifz00
																															(BgL_newzd2expzd2_218);
																														BgL_newzd2newzd2expz00_219
																															=
																															PROCEDURE_ENTRY
																															(BgL_ez00_8)
																															(BgL_ez00_8,
																															BgL_arg1282z00_224,
																															BgL_ez00_8, BEOA);
																													}
																													{	/* Expand/if.scm 123 */
																														obj_t
																															BgL_arg1276z00_220;
																														obj_t
																															BgL_arg1277z00_221;
																														BgL_arg1276z00_220 =
																															CAR(((obj_t)
																																BgL_newzd2expzd2_218));
																														BgL_arg1277z00_221 =
																															CAR(((obj_t)
																																BgL_newzd2newzd2expz00_219));
																														{	/* Expand/if.scm 123 */
																															obj_t
																																BgL_tmpz00_1253;
																															BgL_tmpz00_1253 =
																																((obj_t)
																																BgL_arg1276z00_220);
																															SET_CAR
																																(BgL_tmpz00_1253,
																																BgL_arg1277z00_221);
																														}
																													}
																													{	/* Expand/if.scm 125 */
																														obj_t
																															BgL_arg1280z00_222;
																														obj_t
																															BgL_arg1281z00_223;
																														BgL_arg1280z00_222 =
																															CAR(((obj_t)
																																BgL_newzd2expzd2_218));
																														BgL_arg1281z00_223 =
																															CDR(((obj_t)
																																BgL_newzd2newzd2expz00_219));
																														{	/* Expand/if.scm 125 */
																															obj_t
																																BgL_tmpz00_1260;
																															BgL_tmpz00_1260 =
																																((obj_t)
																																BgL_arg1280z00_222);
																															SET_CDR
																																(BgL_tmpz00_1260,
																																BgL_arg1281z00_223);
																														}
																													}
																													BgL_resz00_208 =
																														BgL_expz00_211;
																												}
																											else
																												{	/* Expand/if.scm 120 */
																													BgL_resz00_208 =
																														BgL_expz00_211;
																												}
																										}
																									else
																										{	/* Expand/if.scm 117 */
																											BgL_resz00_208 =
																												BgL_expz00_211;
																										}
																								}
																							}
																						}
																					}
																				}
																				BGl_replacez12z12zztools_miscz00
																					(BgL_xz00_7, BgL_resz00_208);
																			}
																			return BgL_xz00_7;
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd2371zd2_141;
																	}
															}
														else
															{	/* Expand/if.scm 105 */
																if (NULLP(CDR(((obj_t) BgL_cdrzd2538zd2_184))))
																	{	/* Expand/if.scm 105 */
																		obj_t BgL_arg1250z00_198;
																		obj_t BgL_arg1252z00_199;

																		BgL_arg1250z00_198 =
																			CAR(((obj_t) BgL_cdrzd2379zd2_144));
																		BgL_arg1252z00_199 =
																			CAR(((obj_t) BgL_cdrzd2538zd2_184));
																		{
																			obj_t BgL_alorsz00_1273;
																			obj_t BgL_testz00_1272;

																			BgL_testz00_1272 = BgL_arg1250z00_198;
																			BgL_alorsz00_1273 = BgL_arg1252z00_199;
																			BgL_alorsz00_139 = BgL_alorsz00_1273;
																			BgL_testz00_138 = BgL_testz00_1272;
																			goto BgL_tagzd2370zd2_140;
																		}
																	}
																else
																	{	/* Expand/if.scm 105 */
																		goto BgL_tagzd2371zd2_141;
																	}
															}
													}
												else
													{	/* Expand/if.scm 105 */
														goto BgL_tagzd2371zd2_141;
													}
											}
									}
							}
						else
							{	/* Expand/if.scm 105 */
								goto BgL_tagzd2371zd2_141;
							}
					}
				else
					{	/* Expand/if.scm 105 */
						goto BgL_tagzd2371zd2_141;
					}
			}
		}

	}



/* &expand-if */
	obj_t BGl_z62expandzd2ifzb0zzexpand_ifz00(obj_t BgL_envz00_926,
		obj_t BgL_xz00_927, obj_t BgL_ez00_928)
	{
		{	/* Expand/if.scm 104 */
			return BGl_expandzd2ifzd2zzexpand_ifz00(BgL_xz00_927, BgL_ez00_928);
		}

	}



/* expand-if-with */
	obj_t BGl_expandzd2ifzd2withz00zzexpand_ifz00(obj_t BgL_e1z00_9,
		obj_t BgL_xz00_10, obj_t BgL_e2z00_11, bool_t BgL_casezf3zf3_12)
	{
		{	/* Expand/if.scm 148 */
			{	/* Expand/if.scm 149 */
				bool_t BgL_casezd2enabledzf3z21_242;

				BgL_casezd2enabledzf3z21_242 =
					BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00;
				BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 = BgL_casezf3zf3_12;
				{	/* Expand/if.scm 151 */
					obj_t BgL_resz00_243;

					BgL_resz00_243 =
						PROCEDURE_ENTRY(BgL_e1z00_9) (BgL_e1z00_9, BgL_xz00_10,
						BgL_e2z00_11, BEOA);
					BGl_za2casezd2enabledzf3za2z21zzexpand_ifz00 =
						BgL_casezd2enabledzf3z21_242;
					{	/* Expand/if.scm 153 */
						bool_t BgL_test2033z00_1280;

						if (PAIRP(BgL_xz00_10))
							{	/* Expand/if.scm 153 */
								BgL_test2033z00_1280 = PAIRP(BgL_resz00_243);
							}
						else
							{	/* Expand/if.scm 153 */
								BgL_test2033z00_1280 = ((bool_t) 0);
							}
						if (BgL_test2033z00_1280)
							{	/* Expand/if.scm 153 */
								return
									BGl_replacez12z12zztools_miscz00(BgL_xz00_10, BgL_resz00_243);
							}
						else
							{	/* Expand/if.scm 153 */
								return BgL_resz00_243;
							}
					}
				}
			}
		}

	}



/* find-case-exp */
	obj_t BGl_findzd2casezd2expz00zzexpand_ifz00(obj_t BgL_expz00_13)
	{
		{	/* Expand/if.scm 164 */
		BGl_findzd2casezd2expz00zzexpand_ifz00:
			{	/* Expand/if.scm 166 */
				obj_t BgL_iszd2casezd2_247;

				BgL_iszd2casezd2_247 = BGl_iszd2casezf3z21zzexpand_ifz00(BgL_expz00_13);
				if (CBOOL(BgL_iszd2casezd2_247))
					{	/* Expand/if.scm 167 */
						return BgL_iszd2casezd2_247;
					}
				else
					{	/* Expand/if.scm 167 */
						if (PAIRP(BgL_expz00_13))
							{	/* Expand/if.scm 169 */
								obj_t BgL_cdrzd2618zd2_253;

								BgL_cdrzd2618zd2_253 = CDR(BgL_expz00_13);
								if ((CAR(BgL_expz00_13) == CNST_TABLE_REF(((long) 0))))
									{	/* Expand/if.scm 169 */
										if (PAIRP(BgL_cdrzd2618zd2_253))
											{	/* Expand/if.scm 169 */
												obj_t BgL_cdrzd2621zd2_257;

												BgL_cdrzd2621zd2_257 = CDR(BgL_cdrzd2618zd2_253);
												if (PAIRP(BgL_cdrzd2621zd2_257))
													{	/* Expand/if.scm 169 */
														obj_t BgL_cdrzd2624zd2_259;

														BgL_cdrzd2624zd2_259 = CDR(BgL_cdrzd2621zd2_257);
														if (PAIRP(BgL_cdrzd2624zd2_259))
															{	/* Expand/if.scm 169 */
																if (NULLP(CDR(BgL_cdrzd2624zd2_259)))
																	{
																		obj_t BgL_expz00_1306;

																		BgL_expz00_1306 = CAR(BgL_cdrzd2624zd2_259);
																		BgL_expz00_13 = BgL_expz00_1306;
																		goto BGl_findzd2casezd2expz00zzexpand_ifz00;
																	}
																else
																	{	/* Expand/if.scm 169 */
																		return BFALSE;
																	}
															}
														else
															{	/* Expand/if.scm 169 */
																return BFALSE;
															}
													}
												else
													{	/* Expand/if.scm 169 */
														return BFALSE;
													}
											}
										else
											{	/* Expand/if.scm 169 */
												return BFALSE;
											}
									}
								else
									{	/* Expand/if.scm 169 */
										return BFALSE;
									}
							}
						else
							{	/* Expand/if.scm 169 */
								return BFALSE;
							}
					}
			}
		}

	}



/* is-case? */
	obj_t BGl_iszd2casezf3z21zzexpand_ifz00(obj_t BgL_expz00_14)
	{
		{	/* Expand/if.scm 190 */
			{
				obj_t BgL_varz00_268;
				obj_t BgL_expz72z72_269;
				long BgL_nbzd2clauseszd2_270;

				BgL_varz00_268 = BNIL;
				BgL_expz72z72_269 = BgL_expz00_14;
				BgL_nbzd2clauseszd2_270 = ((long) 1);
			BgL_zc3z04anonymousza31315ze3z87_271:
				{
					obj_t BgL_testz00_272;
					obj_t BgL_sinonz00_273;

					if (PAIRP(BgL_expz72z72_269))
						{	/* Expand/if.scm 191 */
							obj_t BgL_cdrzd2637zd2_278;

							BgL_cdrzd2637zd2_278 = CDR(BgL_expz72z72_269);
							if ((CAR(BgL_expz72z72_269) == CNST_TABLE_REF(((long) 0))))
								{	/* Expand/if.scm 191 */
									if (PAIRP(BgL_cdrzd2637zd2_278))
										{	/* Expand/if.scm 191 */
											obj_t BgL_cdrzd2641zd2_282;

											BgL_cdrzd2641zd2_282 = CDR(BgL_cdrzd2637zd2_278);
											if (PAIRP(BgL_cdrzd2641zd2_282))
												{	/* Expand/if.scm 191 */
													obj_t BgL_cdrzd2645zd2_284;

													BgL_cdrzd2645zd2_284 = CDR(BgL_cdrzd2641zd2_282);
													if (PAIRP(BgL_cdrzd2645zd2_284))
														{	/* Expand/if.scm 191 */
															if (NULLP(CDR(BgL_cdrzd2645zd2_284)))
																{	/* Expand/if.scm 191 */
																	BgL_testz00_272 = CAR(BgL_cdrzd2637zd2_278);
																	BgL_sinonz00_273 = CAR(BgL_cdrzd2645zd2_284);
																	{
																		obj_t BgL_newzd2varzd2_295;
																		obj_t BgL_exp1z00_296;
																		obj_t BgL_exp1z00_292;
																		obj_t BgL_exp2z00_293;

																		if (PAIRP(BgL_testz00_272))
																			{	/* Expand/if.scm 191 */
																				obj_t BgL_carzd2658zd2_300;
																				obj_t BgL_cdrzd2659zd2_301;

																				BgL_carzd2658zd2_300 =
																					CAR(BgL_testz00_272);
																				BgL_cdrzd2659zd2_301 =
																					CDR(BgL_testz00_272);
																				{

																					if (
																						(BgL_carzd2658zd2_300 ==
																							CNST_TABLE_REF(((long) 7))))
																						{	/* Expand/if.scm 191 */
																						BgL_kapzd2660zd2_302:
																							if (PAIRP(BgL_cdrzd2659zd2_301))
																								{	/* Expand/if.scm 191 */
																									obj_t BgL_cdrzd2664zd2_332;

																									BgL_cdrzd2664zd2_332 =
																										CDR(BgL_cdrzd2659zd2_301);
																									if (PAIRP
																										(BgL_cdrzd2664zd2_332))
																										{	/* Expand/if.scm 191 */
																											if (NULLP(CDR
																													(BgL_cdrzd2664zd2_332)))
																												{	/* Expand/if.scm 191 */
																													BgL_exp1z00_292 =
																														CAR
																														(BgL_cdrzd2659zd2_301);
																													BgL_exp2z00_293 =
																														CAR
																														(BgL_cdrzd2664zd2_332);
																													if (BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(BgL_exp1z00_292))
																														{	/* Expand/if.scm 199 */
																															if (NULLP
																																(BgL_varz00_268))
																																{
																																	long
																																		BgL_nbzd2clauseszd2_1347;
																																	obj_t
																																		BgL_expz72z72_1346;
																																	obj_t
																																		BgL_varz00_1345;
																																	BgL_varz00_1345
																																		=
																																		BgL_exp2z00_293;
																																	BgL_expz72z72_1346
																																		=
																																		BgL_sinonz00_273;
																																	BgL_nbzd2clauseszd2_1347
																																		=
																																		(BgL_nbzd2clauseszd2_270
																																		+
																																		((long) 1));
																																	BgL_nbzd2clauseszd2_270
																																		=
																																		BgL_nbzd2clauseszd2_1347;
																																	BgL_expz72z72_269
																																		=
																																		BgL_expz72z72_1346;
																																	BgL_varz00_268
																																		=
																																		BgL_varz00_1345;
																																	goto
																																		BgL_zc3z04anonymousza31315ze3z87_271;
																																}
																															else
																																{	/* Expand/if.scm 201 */
																																	if (
																																		(BgL_varz00_268
																																			==
																																			BgL_exp2z00_293))
																																		{
																																			long
																																				BgL_nbzd2clauseszd2_1353;
																																			obj_t
																																				BgL_expz72z72_1352;
																																			obj_t
																																				BgL_varz00_1351;
																																			BgL_varz00_1351
																																				=
																																				BgL_exp2z00_293;
																																			BgL_expz72z72_1352
																																				=
																																				BgL_sinonz00_273;
																																			BgL_nbzd2clauseszd2_1353
																																				=
																																				(BgL_nbzd2clauseszd2_270
																																				+
																																				((long)
																																					1));
																																			BgL_nbzd2clauseszd2_270
																																				=
																																				BgL_nbzd2clauseszd2_1353;
																																			BgL_expz72z72_269
																																				=
																																				BgL_expz72z72_1352;
																																			BgL_varz00_268
																																				=
																																				BgL_varz00_1351;
																																			goto
																																				BgL_zc3z04anonymousza31315ze3z87_271;
																																		}
																																	else
																																		{	/* Expand/if.scm 203 */
																																			if (
																																				(BgL_nbzd2clauseszd2_270
																																					>
																																					((long) 3)))
																																				{	/* Expand/if.scm 207 */
																																					obj_t
																																						BgL_list1443z00_345;
																																					{	/* Expand/if.scm 207 */
																																						obj_t
																																							BgL_arg1448z00_346;
																																						{	/* Expand/if.scm 207 */
																																							obj_t
																																								BgL_arg1449z00_347;
																																							BgL_arg1449z00_347
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_expz72z72_269,
																																								BNIL);
																																							BgL_arg1448z00_346
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_varz00_268,
																																								BgL_arg1449z00_347);
																																						}
																																						BgL_list1443z00_345
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_expz00_14,
																																							BgL_arg1448z00_346);
																																					}
																																					return
																																						BgL_list1443z00_345;
																																				}
																																			else
																																				{	/* Expand/if.scm 206 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																}
																														}
																													else
																														{	/* Expand/if.scm 199 */
																															if (BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(BgL_exp2z00_293))
																																{	/* Expand/if.scm 209 */
																																	if (NULLP
																																		(BgL_varz00_268))
																																		{
																																			long
																																				BgL_nbzd2clauseszd2_1366;
																																			obj_t
																																				BgL_expz72z72_1365;
																																			obj_t
																																				BgL_varz00_1364;
																																			BgL_varz00_1364
																																				=
																																				BgL_exp1z00_292;
																																			BgL_expz72z72_1365
																																				=
																																				BgL_sinonz00_273;
																																			BgL_nbzd2clauseszd2_1366
																																				=
																																				(BgL_nbzd2clauseszd2_270
																																				+
																																				((long)
																																					1));
																																			BgL_nbzd2clauseszd2_270
																																				=
																																				BgL_nbzd2clauseszd2_1366;
																																			BgL_expz72z72_269
																																				=
																																				BgL_expz72z72_1365;
																																			BgL_varz00_268
																																				=
																																				BgL_varz00_1364;
																																			goto
																																				BgL_zc3z04anonymousza31315ze3z87_271;
																																		}
																																	else
																																		{	/* Expand/if.scm 211 */
																																			if (
																																				(BgL_varz00_268
																																					==
																																					BgL_exp1z00_292))
																																				{
																																					long
																																						BgL_nbzd2clauseszd2_1372;
																																					obj_t
																																						BgL_expz72z72_1371;
																																					obj_t
																																						BgL_varz00_1370;
																																					BgL_varz00_1370
																																						=
																																						BgL_exp1z00_292;
																																					BgL_expz72z72_1371
																																						=
																																						BgL_sinonz00_273;
																																					BgL_nbzd2clauseszd2_1372
																																						=
																																						(BgL_nbzd2clauseszd2_270
																																						+
																																						((long) 1));
																																					BgL_nbzd2clauseszd2_270
																																						=
																																						BgL_nbzd2clauseszd2_1372;
																																					BgL_expz72z72_269
																																						=
																																						BgL_expz72z72_1371;
																																					BgL_varz00_268
																																						=
																																						BgL_varz00_1370;
																																					goto
																																						BgL_zc3z04anonymousza31315ze3z87_271;
																																				}
																																			else
																																				{	/* Expand/if.scm 213 */
																																					if (
																																						(BgL_nbzd2clauseszd2_270
																																							>
																																							((long) 3)))
																																						{	/* Expand/if.scm 217 */
																																							obj_t
																																								BgL_list1467z00_354;
																																							{	/* Expand/if.scm 217 */
																																								obj_t
																																									BgL_arg1474z00_355;
																																								{	/* Expand/if.scm 217 */
																																									obj_t
																																										BgL_arg1476z00_356;
																																									BgL_arg1476z00_356
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_expz72z72_269,
																																										BNIL);
																																									BgL_arg1474z00_355
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_varz00_268,
																																										BgL_arg1476z00_356);
																																								}
																																								BgL_list1467z00_354
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_expz00_14,
																																									BgL_arg1474z00_355);
																																							}
																																							return
																																								BgL_list1467z00_354;
																																						}
																																					else
																																						{	/* Expand/if.scm 216 */
																																							return
																																								BFALSE;
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Expand/if.scm 209 */
																																	return BFALSE;
																																}
																														}
																												}
																											else
																												{	/* Expand/if.scm 191 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/if.scm 191 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/if.scm 191 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 191 */
																							if (
																								(BgL_carzd2658zd2_300 ==
																									CNST_TABLE_REF(((long) 8))))
																								{	/* Expand/if.scm 191 */
																									goto BgL_kapzd2660zd2_302;
																								}
																							else
																								{	/* Expand/if.scm 191 */
																									if (
																										(BgL_carzd2658zd2_300 ==
																											CNST_TABLE_REF(((long)
																													9))))
																										{	/* Expand/if.scm 191 */
																											goto BgL_kapzd2660zd2_302;
																										}
																									else
																										{	/* Expand/if.scm 191 */
																											if (
																												(BgL_carzd2658zd2_300 ==
																													CNST_TABLE_REF(((long)
																															10))))
																												{	/* Expand/if.scm 191 */
																													goto
																														BgL_kapzd2660zd2_302;
																												}
																											else
																												{	/* Expand/if.scm 191 */
																													if (
																														(BgL_carzd2658zd2_300
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Expand/if.scm 191 */
																															goto
																																BgL_kapzd2660zd2_302;
																														}
																													else
																														{	/* Expand/if.scm 191 */
																															if (
																																(CAR
																																	(BgL_testz00_272)
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			12))))
																																{	/* Expand/if.scm 191 */
																																	if (PAIRP
																																		(BgL_cdrzd2659zd2_301))
																																		{	/* Expand/if.scm 191 */
																																			obj_t
																																				BgL_cdrzd2696zd2_313;
																																			BgL_cdrzd2696zd2_313
																																				=
																																				CDR
																																				(BgL_cdrzd2659zd2_301);
																																			if (PAIRP
																																				(BgL_cdrzd2696zd2_313))
																																				{	/* Expand/if.scm 191 */
																																					obj_t
																																						BgL_carzd2699zd2_315;
																																					BgL_carzd2699zd2_315
																																						=
																																						CAR
																																						(BgL_cdrzd2696zd2_313);
																																					if (PAIRP(BgL_carzd2699zd2_315))
																																						{	/* Expand/if.scm 191 */
																																							obj_t
																																								BgL_cdrzd2703zd2_317;
																																							BgL_cdrzd2703zd2_317
																																								=
																																								CDR
																																								(BgL_carzd2699zd2_315);
																																							if ((CAR(BgL_carzd2699zd2_315) == CNST_TABLE_REF(((long) 13))))
																																								{	/* Expand/if.scm 191 */
																																									if (PAIRP(BgL_cdrzd2703zd2_317))
																																										{	/* Expand/if.scm 191 */
																																											if (NULLP(CDR(BgL_cdrzd2703zd2_317)))
																																												{	/* Expand/if.scm 191 */
																																													if (NULLP(CDR(BgL_cdrzd2696zd2_313)))
																																														{	/* Expand/if.scm 191 */
																																															BgL_newzd2varzd2_295
																																																=
																																																CAR
																																																(BgL_cdrzd2659zd2_301);
																																															BgL_exp1z00_296
																																																=
																																																CAR
																																																(BgL_cdrzd2703zd2_317);
																																															{	/* Expand/if.scm 223 */
																																																bool_t
																																																	BgL_test2073z00_1418;
																																																if (PAIRP(BgL_exp1z00_296))
																																																	{
																																																		obj_t
																																																			BgL_exp1z00_382;
																																																		BgL_exp1z00_382
																																																			=
																																																			BgL_exp1z00_296;
																																																	BgL_zc3z04anonymousza31553ze3z87_383:
																																																		if (NULLP(BgL_exp1z00_382))
																																																			{	/* Expand/if.scm 226 */
																																																				BgL_test2073z00_1418
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 228 */
																																																				bool_t
																																																					BgL_test2076z00_1423;
																																																				{	/* Expand/if.scm 228 */
																																																					obj_t
																																																						BgL_arg1561z00_387;
																																																					BgL_arg1561z00_387
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_exp1z00_382));
																																																					BgL_test2076z00_1423
																																																						=
																																																						BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00
																																																						(BgL_arg1561z00_387);
																																																				}
																																																				if (BgL_test2076z00_1423)
																																																					{	/* Expand/if.scm 229 */
																																																						obj_t
																																																							BgL_arg1558z00_386;
																																																						BgL_arg1558z00_386
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_exp1z00_382));
																																																						{
																																																							obj_t
																																																								BgL_exp1z00_1429;
																																																							BgL_exp1z00_1429
																																																								=
																																																								BgL_arg1558z00_386;
																																																							BgL_exp1z00_382
																																																								=
																																																								BgL_exp1z00_1429;
																																																							goto
																																																								BgL_zc3z04anonymousza31553ze3z87_383;
																																																						}
																																																					}
																																																				else
																																																					{	/* Expand/if.scm 228 */
																																																						BgL_test2073z00_1418
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/if.scm 223 */
																																																		BgL_test2073z00_1418
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																																if (BgL_test2073z00_1418)
																																																	{	/* Expand/if.scm 223 */
																																																		if (NULLP(BgL_varz00_268))
																																																			{
																																																				long
																																																					BgL_nbzd2clauseszd2_1434;
																																																				obj_t
																																																					BgL_expz72z72_1433;
																																																				obj_t
																																																					BgL_varz00_1432;
																																																				BgL_varz00_1432
																																																					=
																																																					BgL_newzd2varzd2_295;
																																																				BgL_expz72z72_1433
																																																					=
																																																					BgL_sinonz00_273;
																																																				BgL_nbzd2clauseszd2_1434
																																																					=
																																																					(BgL_nbzd2clauseszd2_270
																																																					+
																																																					((long) 1));
																																																				BgL_nbzd2clauseszd2_270
																																																					=
																																																					BgL_nbzd2clauseszd2_1434;
																																																				BgL_expz72z72_269
																																																					=
																																																					BgL_expz72z72_1433;
																																																				BgL_varz00_268
																																																					=
																																																					BgL_varz00_1432;
																																																				goto
																																																					BgL_zc3z04anonymousza31315ze3z87_271;
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 233 */
																																																				if ((BgL_newzd2varzd2_295 == BgL_varz00_268))
																																																					{
																																																						long
																																																							BgL_nbzd2clauseszd2_1440;
																																																						obj_t
																																																							BgL_expz72z72_1439;
																																																						obj_t
																																																							BgL_varz00_1438;
																																																						BgL_varz00_1438
																																																							=
																																																							BgL_newzd2varzd2_295;
																																																						BgL_expz72z72_1439
																																																							=
																																																							BgL_sinonz00_273;
																																																						BgL_nbzd2clauseszd2_1440
																																																							=
																																																							(BgL_nbzd2clauseszd2_270
																																																							+
																																																							((long) 1));
																																																						BgL_nbzd2clauseszd2_270
																																																							=
																																																							BgL_nbzd2clauseszd2_1440;
																																																						BgL_expz72z72_269
																																																							=
																																																							BgL_expz72z72_1439;
																																																						BgL_varz00_268
																																																							=
																																																							BgL_varz00_1438;
																																																						goto
																																																							BgL_zc3z04anonymousza31315ze3z87_271;
																																																					}
																																																				else
																																																					{	/* Expand/if.scm 235 */
																																																						if ((BgL_nbzd2clauseszd2_270 > ((long) 3)))
																																																							{	/* Expand/if.scm 239 */
																																																								obj_t
																																																									BgL_list1525z00_373;
																																																								{	/* Expand/if.scm 239 */
																																																									obj_t
																																																										BgL_arg1528z00_374;
																																																									{	/* Expand/if.scm 239 */
																																																										obj_t
																																																											BgL_arg1536z00_375;
																																																										BgL_arg1536z00_375
																																																											=
																																																											MAKE_YOUNG_PAIR
																																																											(BgL_expz72z72_269,
																																																											BNIL);
																																																										BgL_arg1528z00_374
																																																											=
																																																											MAKE_YOUNG_PAIR
																																																											(BgL_varz00_268,
																																																											BgL_arg1536z00_375);
																																																									}
																																																									BgL_list1525z00_373
																																																										=
																																																										MAKE_YOUNG_PAIR
																																																										(BgL_expz00_14,
																																																										BgL_arg1528z00_374);
																																																								}
																																																								return
																																																									BgL_list1525z00_373;
																																																							}
																																																						else
																																																							{	/* Expand/if.scm 238 */
																																																								return
																																																									BFALSE;
																																																							}
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/if.scm 223 */
																																																		if ((BgL_nbzd2clauseszd2_270 > ((long) 3)))
																																																			{	/* Expand/if.scm 243 */
																																																				obj_t
																																																					BgL_list1538z00_377;
																																																				{	/* Expand/if.scm 243 */
																																																					obj_t
																																																						BgL_arg1540z00_378;
																																																					{	/* Expand/if.scm 243 */
																																																						obj_t
																																																							BgL_arg1552z00_379;
																																																						BgL_arg1552z00_379
																																																							=
																																																							MAKE_YOUNG_PAIR
																																																							(BgL_expz72z72_269,
																																																							BNIL);
																																																						BgL_arg1540z00_378
																																																							=
																																																							MAKE_YOUNG_PAIR
																																																							(BgL_varz00_268,
																																																							BgL_arg1552z00_379);
																																																					}
																																																					BgL_list1538z00_377
																																																						=
																																																						MAKE_YOUNG_PAIR
																																																						(BgL_expz00_14,
																																																						BgL_arg1540z00_378);
																																																				}
																																																				return
																																																					BgL_list1538z00_377;
																																																			}
																																																		else
																																																			{	/* Expand/if.scm 242 */
																																																				return
																																																					BFALSE;
																																																			}
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Expand/if.scm 191 */
																																															return
																																																BFALSE;
																																														}
																																												}
																																											else
																																												{	/* Expand/if.scm 191 */
																																													return
																																														BFALSE;
																																												}
																																										}
																																									else
																																										{	/* Expand/if.scm 191 */
																																											return
																																												BFALSE;
																																										}
																																								}
																																							else
																																								{	/* Expand/if.scm 191 */
																																									return
																																										BFALSE;
																																								}
																																						}
																																					else
																																						{	/* Expand/if.scm 191 */
																																							return
																																								BFALSE;
																																						}
																																				}
																																			else
																																				{	/* Expand/if.scm 191 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Expand/if.scm 191 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Expand/if.scm 191 */
																																	return BFALSE;
																																}
																														}
																												}
																										}
																								}
																						}
																				}
																			}
																		else
																			{	/* Expand/if.scm 191 */
																				return BFALSE;
																			}
																	}
																}
															else
																{	/* Expand/if.scm 191 */
																BgL_tagzd2630zd2_275:
																	if ((BgL_nbzd2clauseszd2_270 > ((long) 3)))
																		{	/* Expand/if.scm 247 */
																			obj_t BgL_list1563z00_390;

																			{	/* Expand/if.scm 247 */
																				obj_t BgL_arg1564z00_391;

																				{	/* Expand/if.scm 247 */
																					obj_t BgL_arg1565z00_392;

																					BgL_arg1565z00_392 =
																						MAKE_YOUNG_PAIR(BgL_expz72z72_269,
																						BNIL);
																					BgL_arg1564z00_391 =
																						MAKE_YOUNG_PAIR(BgL_varz00_268,
																						BgL_arg1565z00_392);
																				}
																				BgL_list1563z00_390 =
																					MAKE_YOUNG_PAIR(BgL_expz00_14,
																					BgL_arg1564z00_391);
																			}
																			return BgL_list1563z00_390;
																		}
																	else
																		{	/* Expand/if.scm 246 */
																			return BFALSE;
																		}
																}
														}
													else
														{	/* Expand/if.scm 191 */
															goto BgL_tagzd2630zd2_275;
														}
												}
											else
												{	/* Expand/if.scm 191 */
													goto BgL_tagzd2630zd2_275;
												}
										}
									else
										{	/* Expand/if.scm 191 */
											goto BgL_tagzd2630zd2_275;
										}
								}
							else
								{	/* Expand/if.scm 191 */
									goto BgL_tagzd2630zd2_275;
								}
						}
					else
						{	/* Expand/if.scm 191 */
							goto BgL_tagzd2630zd2_275;
						}
				}
			}
		}

	}



/* is-a-valid-constant? */
	bool_t BGl_iszd2azd2validzd2constantzf3z21zzexpand_ifz00(obj_t BgL_cnstz00_15)
	{
		{	/* Expand/if.scm 255 */
			{	/* Expand/if.scm 256 */
				bool_t BgL__ortest_1019z00_394;

				BgL__ortest_1019z00_394 = INTEGERP(BgL_cnstz00_15);
				if (BgL__ortest_1019z00_394)
					{	/* Expand/if.scm 256 */
						return BgL__ortest_1019z00_394;
					}
				else
					{	/* Expand/if.scm 257 */
						bool_t BgL__ortest_1020z00_395;

						BgL__ortest_1020z00_395 = CHARP(BgL_cnstz00_15);
						if (BgL__ortest_1020z00_395)
							{	/* Expand/if.scm 257 */
								return BgL__ortest_1020z00_395;
							}
						else
							{	/* Expand/if.scm 258 */
								bool_t BgL__ortest_1021z00_396;

								BgL__ortest_1021z00_396 = CNSTP(BgL_cnstz00_15);
								if (BgL__ortest_1021z00_396)
									{	/* Expand/if.scm 258 */
										return BgL__ortest_1021z00_396;
									}
								else
									{	/* Expand/if.scm 259 */
										bool_t BgL__ortest_1022z00_397;

										BgL__ortest_1022z00_397 = KEYWORDP(BgL_cnstz00_15);
										if (BgL__ortest_1022z00_397)
											{	/* Expand/if.scm 259 */
												return BgL__ortest_1022z00_397;
											}
										else
											{	/* Expand/if.scm 259 */
												if (PAIRP(BgL_cnstz00_15))
													{	/* Expand/if.scm 260 */
														if (
															(CAR(BgL_cnstz00_15) ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Expand/if.scm 262 */
																bool_t BgL_test2088z00_1475;

																{	/* Expand/if.scm 262 */
																	obj_t BgL_tmpz00_1476;

																	BgL_tmpz00_1476 = CDR(BgL_cnstz00_15);
																	BgL_test2088z00_1475 = PAIRP(BgL_tmpz00_1476);
																}
																if (BgL_test2088z00_1475)
																	{	/* Expand/if.scm 263 */
																		bool_t BgL_test2089z00_1479;

																		{	/* Expand/if.scm 263 */
																			obj_t BgL_tmpz00_1480;

																			BgL_tmpz00_1480 =
																				CAR(CDR(BgL_cnstz00_15));
																			BgL_test2089z00_1479 =
																				SYMBOLP(BgL_tmpz00_1480);
																		}
																		if (BgL_test2089z00_1479)
																			{	/* Expand/if.scm 263 */
																				return NULLP(CDR(CDR(BgL_cnstz00_15)));
																			}
																		else
																			{	/* Expand/if.scm 263 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Expand/if.scm 262 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Expand/if.scm 261 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Expand/if.scm 260 */
														return ((bool_t) 0);
													}
											}
									}
							}
					}
			}
		}

	}



/* if->case! */
	obj_t BGl_ifzd2ze3casez12z23zzexpand_ifz00(obj_t BgL_expzd2varzd2endz00_16)
	{
		{	/* Expand/if.scm 273 */
			{	/* Expand/if.scm 275 */
				obj_t BgL_expz00_406;

				BgL_expz00_406 = CAR(((obj_t) BgL_expzd2varzd2endz00_16));
				{	/* Expand/if.scm 275 */
					obj_t BgL_varz00_407;

					{	/* Expand/if.scm 276 */
						obj_t BgL_pairz00_812;

						BgL_pairz00_812 = CDR(((obj_t) BgL_expzd2varzd2endz00_16));
						BgL_varz00_407 = CAR(BgL_pairz00_812);
					}
					{	/* Expand/if.scm 276 */
						obj_t BgL_endzd2expzd2_408;

						{	/* Expand/if.scm 277 */
							obj_t BgL_pairz00_818;

							{	/* Expand/if.scm 277 */
								obj_t BgL_pairz00_817;

								BgL_pairz00_817 = CDR(((obj_t) BgL_expzd2varzd2endz00_16));
								BgL_pairz00_818 = CDR(BgL_pairz00_817);
							}
							BgL_endzd2expzd2_408 = CAR(BgL_pairz00_818);
						}
						{	/* Expand/if.scm 277 */
							obj_t BgL_newzd2expzd2_409;

							{	/* Expand/if.scm 279 */
								obj_t BgL_arg1589z00_412;

								{	/* Expand/if.scm 279 */
									obj_t BgL_arg1592z00_413;

									{	/* Expand/if.scm 279 */
										obj_t BgL_arg1593z00_414;

										{
											obj_t BgL_expz00_417;
											obj_t BgL_clausesz00_418;

											BgL_expz00_417 = BgL_expz00_406;
											BgL_clausesz00_418 = BNIL;
										BgL_zc3z04anonymousza31594ze3z87_419:
											if ((BgL_expz00_417 == BgL_endzd2expzd2_408))
												{	/* Expand/if.scm 285 */
													obj_t BgL_arg1597z00_421;

													{	/* Expand/if.scm 285 */
														obj_t BgL_arg1599z00_422;

														{	/* Expand/if.scm 285 */
															obj_t BgL_arg1604z00_423;

															BgL_arg1604z00_423 =
																MAKE_YOUNG_PAIR(BgL_endzd2expzd2_408, BNIL);
															BgL_arg1599z00_422 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																BgL_arg1604z00_423);
														}
														BgL_arg1597z00_421 =
															MAKE_YOUNG_PAIR(BgL_arg1599z00_422,
															BgL_clausesz00_418);
													}
													BgL_arg1593z00_414 =
														bgl_reverse_bang(BgL_arg1597z00_421);
												}
											else
												{	/* Expand/if.scm 284 */
													if (PAIRP(BgL_expz00_417))
														{	/* Expand/if.scm 286 */
															obj_t BgL_cdrzd2721zd2_430;

															BgL_cdrzd2721zd2_430 = CDR(BgL_expz00_417);
															if (
																(CAR(BgL_expz00_417) ==
																	CNST_TABLE_REF(((long) 0))))
																{	/* Expand/if.scm 286 */
																	if (PAIRP(BgL_cdrzd2721zd2_430))
																		{	/* Expand/if.scm 286 */
																			obj_t BgL_cdrzd2726zd2_434;

																			BgL_cdrzd2726zd2_434 =
																				CDR(BgL_cdrzd2721zd2_430);
																			if (PAIRP(BgL_cdrzd2726zd2_434))
																				{	/* Expand/if.scm 286 */
																					obj_t BgL_cdrzd2731zd2_436;

																					BgL_cdrzd2731zd2_436 =
																						CDR(BgL_cdrzd2726zd2_434);
																					if (PAIRP(BgL_cdrzd2731zd2_436))
																						{	/* Expand/if.scm 286 */
																							if (NULLP(CDR
																									(BgL_cdrzd2731zd2_436)))
																								{	/* Expand/if.scm 286 */
																									obj_t BgL_arg1624z00_440;
																									obj_t BgL_arg1626z00_441;
																									obj_t BgL_arg1627z00_442;

																									BgL_arg1624z00_440 =
																										CAR(BgL_cdrzd2721zd2_430);
																									BgL_arg1626z00_441 =
																										CAR(BgL_cdrzd2726zd2_434);
																									BgL_arg1627z00_442 =
																										CAR(BgL_cdrzd2731zd2_436);
																									{	/* Expand/if.scm 289 */
																										obj_t BgL_arg1639z00_834;

																										BgL_arg1639z00_834 =
																											MAKE_YOUNG_PAIR
																											(BGl_makezd2clausezd2zzexpand_ifz00
																											(BgL_varz00_407,
																												BgL_arg1624z00_440,
																												BgL_arg1626z00_441),
																											BgL_clausesz00_418);
																										{
																											obj_t BgL_clausesz00_1527;
																											obj_t BgL_expz00_1526;

																											BgL_expz00_1526 =
																												BgL_arg1627z00_442;
																											BgL_clausesz00_1527 =
																												BgL_arg1639z00_834;
																											BgL_clausesz00_418 =
																												BgL_clausesz00_1527;
																											BgL_expz00_417 =
																												BgL_expz00_1526;
																											goto
																												BgL_zc3z04anonymousza31594ze3z87_419;
																										}
																									}
																								}
																							else
																								{	/* Expand/if.scm 286 */
																									BgL_arg1593z00_414 = BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 286 */
																							BgL_arg1593z00_414 = BFALSE;
																						}
																				}
																			else
																				{	/* Expand/if.scm 286 */
																					BgL_arg1593z00_414 = BFALSE;
																				}
																		}
																	else
																		{	/* Expand/if.scm 286 */
																			BgL_arg1593z00_414 = BFALSE;
																		}
																}
															else
																{	/* Expand/if.scm 286 */
																	BgL_arg1593z00_414 = BFALSE;
																}
														}
													else
														{	/* Expand/if.scm 286 */
															BgL_arg1593z00_414 = BFALSE;
														}
												}
										}
										BgL_arg1592z00_413 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1593z00_414, BNIL);
									}
									BgL_arg1589z00_412 =
										MAKE_YOUNG_PAIR(BgL_varz00_407, BgL_arg1592z00_413);
								}
								BgL_newzd2expzd2_409 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
									BgL_arg1589z00_412);
							}
							{	/* Expand/if.scm 278 */

								{	/* Expand/if.scm 292 */
									obj_t BgL_arg1584z00_410;

									BgL_arg1584z00_410 = CAR(BgL_newzd2expzd2_409);
									{	/* Expand/if.scm 292 */
										obj_t BgL_tmpz00_1533;

										BgL_tmpz00_1533 = ((obj_t) BgL_expz00_406);
										SET_CAR(BgL_tmpz00_1533, BgL_arg1584z00_410);
								}}
								{	/* Expand/if.scm 293 */
									obj_t BgL_arg1588z00_411;

									BgL_arg1588z00_411 = CDR(BgL_newzd2expzd2_409);
									{	/* Expand/if.scm 293 */
										obj_t BgL_tmpz00_1537;

										BgL_tmpz00_1537 = ((obj_t) BgL_expz00_406);
										SET_CDR(BgL_tmpz00_1537, BgL_arg1588z00_411);
								}}
								return BgL_expz00_406;
							}
						}
					}
				}
			}
		}

	}



/* make-clause */
	obj_t BGl_makezd2clausezd2zzexpand_ifz00(obj_t BgL_varz00_17,
		obj_t BgL_testz00_18, obj_t BgL_alorsz00_19)
	{
		{	/* Expand/if.scm 300 */
			{
				obj_t BgL_exp1z00_449;
				obj_t BgL_exp2z00_450;

				if (PAIRP(BgL_testz00_18))
					{	/* Expand/if.scm 306 */
						obj_t BgL_carzd2745zd2_456;
						obj_t BgL_cdrzd2746zd2_457;

						BgL_carzd2745zd2_456 = CAR(BgL_testz00_18);
						BgL_cdrzd2746zd2_457 = CDR(BgL_testz00_18);
						{

							if ((BgL_carzd2745zd2_456 == CNST_TABLE_REF(((long) 8))))
								{	/* Expand/if.scm 306 */
								BgL_kapzd2747zd2_458:
									if (PAIRP(BgL_cdrzd2746zd2_457))
										{	/* Expand/if.scm 306 */
											obj_t BgL_cdrzd2751zd2_487;

											BgL_cdrzd2751zd2_487 = CDR(BgL_cdrzd2746zd2_457);
											if (PAIRP(BgL_cdrzd2751zd2_487))
												{	/* Expand/if.scm 306 */
													if (NULLP(CDR(BgL_cdrzd2751zd2_487)))
														{	/* Expand/if.scm 306 */
															BgL_exp1z00_449 = CAR(BgL_cdrzd2746zd2_457);
															BgL_exp2z00_450 = CAR(BgL_cdrzd2751zd2_487);
															if ((BgL_exp1z00_449 == BgL_varz00_17))
																{	/* Expand/if.scm 309 */
																	obj_t BgL_arg1704z00_495;
																	obj_t BgL_arg1707z00_496;

																	BgL_arg1704z00_495 =
																		MAKE_YOUNG_PAIR
																		(BGl_valzd2ze3constantze70zd6zzexpand_ifz00
																		(BgL_exp2z00_450), BNIL);
																	BgL_arg1707z00_496 =
																		MAKE_YOUNG_PAIR(BgL_alorsz00_19, BNIL);
																	return MAKE_YOUNG_PAIR(BgL_arg1704z00_495,
																		BgL_arg1707z00_496);
																}
															else
																{	/* Expand/if.scm 310 */
																	obj_t BgL_arg1711z00_498;
																	obj_t BgL_arg1712z00_499;

																	BgL_arg1711z00_498 =
																		MAKE_YOUNG_PAIR
																		(BGl_valzd2ze3constantze70zd6zzexpand_ifz00
																		(BgL_exp1z00_449), BNIL);
																	BgL_arg1712z00_499 =
																		MAKE_YOUNG_PAIR(BgL_alorsz00_19, BNIL);
																	return MAKE_YOUNG_PAIR(BgL_arg1711z00_498,
																		BgL_arg1712z00_499);
																}
														}
													else
														{	/* Expand/if.scm 306 */
															return BFALSE;
														}
												}
											else
												{	/* Expand/if.scm 306 */
													return BFALSE;
												}
										}
									else
										{	/* Expand/if.scm 306 */
											return BFALSE;
										}
								}
							else
								{	/* Expand/if.scm 306 */
									if ((BgL_carzd2745zd2_456 == CNST_TABLE_REF(((long) 7))))
										{	/* Expand/if.scm 306 */
											goto BgL_kapzd2747zd2_458;
										}
									else
										{	/* Expand/if.scm 306 */
											if ((BgL_carzd2745zd2_456 == CNST_TABLE_REF(((long) 11))))
												{	/* Expand/if.scm 306 */
													goto BgL_kapzd2747zd2_458;
												}
											else
												{	/* Expand/if.scm 306 */
													if (
														(BgL_carzd2745zd2_456 ==
															CNST_TABLE_REF(((long) 9))))
														{	/* Expand/if.scm 306 */
															goto BgL_kapzd2747zd2_458;
														}
													else
														{	/* Expand/if.scm 306 */
															if (
																(BgL_carzd2745zd2_456 ==
																	CNST_TABLE_REF(((long) 10))))
																{	/* Expand/if.scm 306 */
																	goto BgL_kapzd2747zd2_458;
																}
															else
																{	/* Expand/if.scm 306 */
																	if (
																		(CAR(BgL_testz00_18) ==
																			CNST_TABLE_REF(((long) 12))))
																		{	/* Expand/if.scm 306 */
																			if (PAIRP(BgL_cdrzd2746zd2_457))
																				{	/* Expand/if.scm 306 */
																					obj_t BgL_cdrzd2772zd2_469;

																					BgL_cdrzd2772zd2_469 =
																						CDR(BgL_cdrzd2746zd2_457);
																					if (PAIRP(BgL_cdrzd2772zd2_469))
																						{	/* Expand/if.scm 306 */
																							obj_t BgL_carzd2774zd2_471;

																							BgL_carzd2774zd2_471 =
																								CAR(BgL_cdrzd2772zd2_469);
																							if (PAIRP(BgL_carzd2774zd2_471))
																								{	/* Expand/if.scm 306 */
																									obj_t BgL_cdrzd2778zd2_473;

																									BgL_cdrzd2778zd2_473 =
																										CDR(BgL_carzd2774zd2_471);
																									if (
																										(CAR(BgL_carzd2774zd2_471)
																											==
																											CNST_TABLE_REF(((long)
																													13))))
																										{	/* Expand/if.scm 306 */
																											if (PAIRP
																												(BgL_cdrzd2778zd2_473))
																												{	/* Expand/if.scm 306 */
																													if (NULLP(CDR
																															(BgL_cdrzd2778zd2_473)))
																														{	/* Expand/if.scm 306 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2772zd2_469)))
																																{	/* Expand/if.scm 306 */
																																	obj_t
																																		BgL_arg1672z00_481;
																																	BgL_arg1672z00_481
																																		=
																																		CAR
																																		(BgL_cdrzd2778zd2_473);
																																	{	/* Expand/if.scm 312 */
																																		obj_t
																																			BgL_arg1725z00_882;
																																		BgL_arg1725z00_882
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_alorsz00_19,
																																			BNIL);
																																		return
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1672z00_481,
																																			BgL_arg1725z00_882);
																																	}
																																}
																															else
																																{	/* Expand/if.scm 306 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Expand/if.scm 306 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Expand/if.scm 306 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/if.scm 306 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/if.scm 306 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/if.scm 306 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Expand/if.scm 306 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Expand/if.scm 306 */
																			return BFALSE;
																		}
																}
														}
												}
										}
								}
						}
					}
				else
					{	/* Expand/if.scm 306 */
						return BFALSE;
					}
			}
		}

	}



/* val->constant~0 */
	obj_t BGl_valzd2ze3constantze70zd6zzexpand_ifz00(obj_t BgL_vz00_502)
	{
		{	/* Expand/if.scm 305 */
			{	/* Expand/if.scm 302 */
				bool_t BgL_test2115z00_1607;

				if (PAIRP(BgL_vz00_502))
					{	/* Expand/if.scm 302 */
						BgL_test2115z00_1607 =
							(CAR(BgL_vz00_502) == CNST_TABLE_REF(((long) 13)));
					}
				else
					{	/* Expand/if.scm 302 */
						BgL_test2115z00_1607 = ((bool_t) 0);
					}
				if (BgL_test2115z00_1607)
					{	/* Expand/if.scm 302 */
						return CAR(CDR(BgL_vz00_502));
					}
				else
					{	/* Expand/if.scm 302 */
						return BgL_vz00_502;
					}
			}
		}

	}



/* expand-or */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2orzd2zzexpand_ifz00(obj_t BgL_xz00_21,
		obj_t BgL_ez00_22)
	{
		{	/* Expand/if.scm 329 */
			{	/* Expand/if.scm 330 */
				obj_t BgL_resz00_512;

				{	/* Expand/if.scm 330 */
					obj_t BgL_g1028z00_514;

					BgL_g1028z00_514 = CDR(((obj_t) BgL_xz00_21));
					BgL_resz00_512 =
						BGl_loopze71ze7zzexpand_ifz00(BgL_xz00_21, BgL_g1028z00_514);
				}
				{	/* Expand/if.scm 347 */
					obj_t BgL_arg1733z00_513;

					BgL_arg1733z00_513 =
						PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22, BgL_resz00_512,
						BgL_ez00_22, BEOA);
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_21,
						BgL_arg1733z00_513);
				}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzexpand_ifz00(obj_t BgL_xz00_939, obj_t BgL_sorz00_516)
	{
		{	/* Expand/if.scm 330 */
			if (NULLP(BgL_sorz00_516))
				{	/* Expand/if.scm 332 */
					return BFALSE;
				}
			else
				{	/* Expand/if.scm 332 */
					if (PAIRP(BgL_sorz00_516))
						{	/* Expand/if.scm 334 */
							if (NULLP(CDR(BgL_sorz00_516)))
								{	/* Expand/if.scm 336 */
									return CAR(BgL_sorz00_516);
								}
							else
								{	/* Expand/if.scm 339 */
									obj_t BgL_testz00_522;

									{	/* Expand/if.scm 318 */
										obj_t BgL_symbolz00_889;

										BgL_symbolz00_889 =
											BGl_gensymz00zz__r4_symbols_6_4z00(string_append_3
											(BGl_string1972z00zzexpand_ifz00,
												BGl_string1973z00zzexpand_ifz00,
												BGl_string1974z00zzexpand_ifz00));
										BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_889,
											CNST_TABLE_REF(((long) 15)), BTRUE);
										BgL_testz00_522 = BgL_symbolz00_889;
									}
									{	/* Expand/if.scm 339 */
										obj_t BgL_resz00_523;

										{	/* Expand/if.scm 340 */
											obj_t BgL_arg1747z00_531;

											{	/* Expand/if.scm 340 */
												obj_t BgL_arg1754z00_532;
												obj_t BgL_arg1755z00_533;

												{	/* Expand/if.scm 340 */
													obj_t BgL_arg1756z00_534;

													{	/* Expand/if.scm 340 */
														obj_t BgL_arg1757z00_535;

														BgL_arg1757z00_535 =
															MAKE_YOUNG_PAIR(CAR(BgL_sorz00_516), BNIL);
														BgL_arg1756z00_534 =
															MAKE_YOUNG_PAIR(BgL_testz00_522,
															BgL_arg1757z00_535);
													}
													BgL_arg1754z00_532 =
														MAKE_YOUNG_PAIR(BgL_arg1756z00_534, BNIL);
												}
												{	/* Expand/if.scm 341 */
													obj_t BgL_arg1760z00_537;

													{	/* Expand/if.scm 341 */
														obj_t BgL_arg1761z00_538;

														{	/* Expand/if.scm 341 */
															obj_t BgL_arg1768z00_539;

															{	/* Expand/if.scm 341 */
																obj_t BgL_arg1771z00_540;

																BgL_arg1771z00_540 =
																	MAKE_YOUNG_PAIR(BGl_loopze71ze7zzexpand_ifz00
																	(BgL_xz00_939, CDR(BgL_sorz00_516)), BNIL);
																BgL_arg1768z00_539 =
																	MAKE_YOUNG_PAIR(BgL_testz00_522,
																	BgL_arg1771z00_540);
															}
															BgL_arg1761z00_538 =
																MAKE_YOUNG_PAIR(BgL_testz00_522,
																BgL_arg1768z00_539);
														}
														BgL_arg1760z00_537 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
															BgL_arg1761z00_538);
													}
													BgL_arg1755z00_533 =
														MAKE_YOUNG_PAIR(BgL_arg1760z00_537, BNIL);
												}
												BgL_arg1747z00_531 =
													MAKE_YOUNG_PAIR(BgL_arg1754z00_532,
													BgL_arg1755z00_533);
											}
											BgL_resz00_523 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
												BgL_arg1747z00_531);
										}
										{	/* Expand/if.scm 340 */

											{	/* Expand/if.scm 343 */
												bool_t BgL_test2120z00_1651;

												{	/* Expand/if.scm 343 */
													obj_t BgL_arg1746z00_530;

													BgL_arg1746z00_530 = CAR(BgL_sorz00_516);
													{	/* Expand/if.scm 343 */
														bool_t BgL_res1958z00_894;

														BgL_res1958z00_894 = EPAIRP(BgL_arg1746z00_530);
														BgL_test2120z00_1651 = BgL_res1958z00_894;
												}}
												if (BgL_test2120z00_1651)
													{	/* Expand/if.scm 344 */
														obj_t BgL_arg1742z00_526;
														obj_t BgL_arg1743z00_527;
														obj_t BgL_arg1744z00_528;

														BgL_arg1742z00_526 = CAR(BgL_resz00_523);
														BgL_arg1743z00_527 = CDR(BgL_resz00_523);
														BgL_arg1744z00_528 = CER(CAR(BgL_sorz00_516));
														{	/* Expand/if.scm 344 */
															obj_t BgL_res1959z00_899;

															BgL_res1959z00_899 =
																MAKE_YOUNG_EPAIR(BgL_arg1742z00_526,
																BgL_arg1743z00_527, BgL_arg1744z00_528);
															return BgL_res1959z00_899;
														}
													}
												else
													{	/* Expand/if.scm 343 */
														return BgL_resz00_523;
													}
											}
										}
									}
								}
						}
					else
						{	/* Expand/if.scm 334 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
								BGl_string1970z00zzexpand_ifz00, BgL_xz00_939);
		}}}

	}



/* &expand-or */
	obj_t BGl_z62expandzd2orzb0zzexpand_ifz00(obj_t BgL_envz00_929,
		obj_t BgL_xz00_930, obj_t BgL_ez00_931)
	{
		{	/* Expand/if.scm 329 */
			return BGl_expandzd2orzd2zzexpand_ifz00(BgL_xz00_930, BgL_ez00_931);
		}

	}



/* expand-and */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2andzd2zzexpand_ifz00(obj_t BgL_xz00_23,
		obj_t BgL_ez00_24)
	{
		{	/* Expand/if.scm 352 */
			{	/* Expand/if.scm 353 */
				obj_t BgL_resz00_545;

				{	/* Expand/if.scm 353 */
					obj_t BgL_g1029z00_547;

					BgL_g1029z00_547 = CDR(((obj_t) BgL_xz00_23));
					BgL_resz00_545 =
						BGl_loopze70ze7zzexpand_ifz00(BgL_xz00_23, BgL_g1029z00_547);
				}
				{	/* Expand/if.scm 370 */
					obj_t BgL_arg1782z00_546;

					BgL_arg1782z00_546 =
						PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24, BgL_resz00_545,
						BgL_ez00_24, BEOA);
					return BGl_replacez12z12zztools_miscz00(BgL_xz00_23,
						BgL_arg1782z00_546);
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzexpand_ifz00(obj_t BgL_xz00_938, obj_t BgL_sandz00_549)
	{
		{	/* Expand/if.scm 353 */
			if (NULLP(BgL_sandz00_549))
				{	/* Expand/if.scm 355 */
					return BTRUE;
				}
			else
				{	/* Expand/if.scm 355 */
					if (PAIRP(BgL_sandz00_549))
						{	/* Expand/if.scm 357 */
							if (NULLP(CDR(BgL_sandz00_549)))
								{	/* Expand/if.scm 359 */
									return CAR(BgL_sandz00_549);
								}
							else
								{	/* Expand/if.scm 362 */
									obj_t BgL_testz00_555;

									{	/* Expand/if.scm 318 */
										obj_t BgL_symbolz00_906;

										BgL_symbolz00_906 =
											BGl_gensymz00zz__r4_symbols_6_4z00(string_append_3
											(BGl_string1972z00zzexpand_ifz00,
												BGl_string1975z00zzexpand_ifz00,
												BGl_string1974z00zzexpand_ifz00));
										BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_906,
											CNST_TABLE_REF(((long) 15)), BTRUE);
										BgL_testz00_555 = BgL_symbolz00_906;
									}
									{	/* Expand/if.scm 362 */
										obj_t BgL_resz00_556;

										{	/* Expand/if.scm 363 */
											obj_t BgL_arg1820z00_564;

											{	/* Expand/if.scm 363 */
												obj_t BgL_arg1821z00_565;
												obj_t BgL_arg1822z00_566;

												{	/* Expand/if.scm 363 */
													obj_t BgL_arg1823z00_567;

													{	/* Expand/if.scm 363 */
														obj_t BgL_arg1824z00_568;

														BgL_arg1824z00_568 =
															MAKE_YOUNG_PAIR(CAR(BgL_sandz00_549), BNIL);
														BgL_arg1823z00_567 =
															MAKE_YOUNG_PAIR(BgL_testz00_555,
															BgL_arg1824z00_568);
													}
													BgL_arg1821z00_565 =
														MAKE_YOUNG_PAIR(BgL_arg1823z00_567, BNIL);
												}
												{	/* Expand/if.scm 364 */
													obj_t BgL_arg1826z00_570;

													{	/* Expand/if.scm 364 */
														obj_t BgL_arg1827z00_571;

														{	/* Expand/if.scm 364 */
															obj_t BgL_arg1828z00_572;

															{	/* Expand/if.scm 364 */
																obj_t BgL_arg1829z00_573;
																obj_t BgL_arg1830z00_574;

																BgL_arg1829z00_573 =
																	BGl_loopze70ze7zzexpand_ifz00(BgL_xz00_938,
																	CDR(BgL_sandz00_549));
																BgL_arg1830z00_574 =
																	MAKE_YOUNG_PAIR(BFALSE, BNIL);
																BgL_arg1828z00_572 =
																	MAKE_YOUNG_PAIR(BgL_arg1829z00_573,
																	BgL_arg1830z00_574);
															}
															BgL_arg1827z00_571 =
																MAKE_YOUNG_PAIR(BgL_testz00_555,
																BgL_arg1828z00_572);
														}
														BgL_arg1826z00_570 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
															BgL_arg1827z00_571);
													}
													BgL_arg1822z00_566 =
														MAKE_YOUNG_PAIR(BgL_arg1826z00_570, BNIL);
												}
												BgL_arg1820z00_564 =
													MAKE_YOUNG_PAIR(BgL_arg1821z00_565,
													BgL_arg1822z00_566);
											}
											BgL_resz00_556 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
												BgL_arg1820z00_564);
										}
										{	/* Expand/if.scm 363 */

											{	/* Expand/if.scm 366 */
												bool_t BgL_test2124z00_1698;

												{	/* Expand/if.scm 366 */
													obj_t BgL_arg1811z00_563;

													BgL_arg1811z00_563 = CAR(BgL_sandz00_549);
													{	/* Expand/if.scm 366 */
														bool_t BgL_res1963z00_911;

														BgL_res1963z00_911 = EPAIRP(BgL_arg1811z00_563);
														BgL_test2124z00_1698 = BgL_res1963z00_911;
												}}
												if (BgL_test2124z00_1698)
													{	/* Expand/if.scm 367 */
														obj_t BgL_arg1798z00_559;
														obj_t BgL_arg1801z00_560;
														obj_t BgL_arg1808z00_561;

														BgL_arg1798z00_559 = CAR(BgL_resz00_556);
														BgL_arg1801z00_560 = CDR(BgL_resz00_556);
														BgL_arg1808z00_561 = CER(CAR(BgL_sandz00_549));
														{	/* Expand/if.scm 367 */
															obj_t BgL_res1964z00_916;

															BgL_res1964z00_916 =
																MAKE_YOUNG_EPAIR(BgL_arg1798z00_559,
																BgL_arg1801z00_560, BgL_arg1808z00_561);
															return BgL_res1964z00_916;
														}
													}
												else
													{	/* Expand/if.scm 366 */
														return BgL_resz00_556;
													}
											}
										}
									}
								}
						}
					else
						{	/* Expand/if.scm 357 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
								BGl_string1970z00zzexpand_ifz00, BgL_xz00_938);
		}}}

	}



/* &expand-and */
	obj_t BGl_z62expandzd2andzb0zzexpand_ifz00(obj_t BgL_envz00_932,
		obj_t BgL_xz00_933, obj_t BgL_ez00_934)
	{
		{	/* Expand/if.scm 352 */
			return BGl_expandzd2andzd2zzexpand_ifz00(BgL_xz00_933, BgL_ez00_934);
		}

	}



/* expand-not */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2notzd2zzexpand_ifz00(obj_t BgL_xz00_25,
		obj_t BgL_ez00_26)
	{
		{	/* Expand/if.scm 375 */
			{
				obj_t BgL_expz00_578;

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/if.scm 376 */
						obj_t BgL_cdrzd2791zd2_583;

						BgL_cdrzd2791zd2_583 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd2791zd2_583))
							{	/* Expand/if.scm 376 */
								if (NULLP(CDR(BgL_cdrzd2791zd2_583)))
									{	/* Expand/if.scm 376 */
										BgL_expz00_578 = CAR(BgL_cdrzd2791zd2_583);
										{	/* Expand/if.scm 378 */
											obj_t BgL_resz00_589;

											{	/* Expand/if.scm 378 */
												obj_t BgL_arg1841z00_590;

												{	/* Expand/if.scm 378 */
													obj_t BgL_arg1842z00_591;

													{	/* Expand/if.scm 378 */
														obj_t BgL_arg1845z00_592;

														{	/* Expand/if.scm 378 */
															obj_t BgL_arg1846z00_593;

															BgL_arg1846z00_593 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
															BgL_arg1845z00_592 =
																MAKE_YOUNG_PAIR(BFALSE, BgL_arg1846z00_593);
														}
														BgL_arg1842z00_591 =
															MAKE_YOUNG_PAIR(BgL_expz00_578,
															BgL_arg1845z00_592);
													}
													BgL_arg1841z00_590 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
														BgL_arg1842z00_591);
												}
												BgL_resz00_589 =
													PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
													BgL_arg1841z00_590, BgL_ez00_26, BEOA);
											}
											return
												BGl_replacez12z12zztools_miscz00(BgL_xz00_25,
												BgL_resz00_589);
										}
									}
								else
									{	/* Expand/if.scm 376 */
									BgL_tagzd2786zd2_580:
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string1976z00zzexpand_ifz00, BgL_xz00_25);
									}
							}
						else
							{	/* Expand/if.scm 376 */
								goto BgL_tagzd2786zd2_580;
							}
					}
				else
					{	/* Expand/if.scm 376 */
						goto BgL_tagzd2786zd2_580;
					}
			}
		}

	}



/* &expand-not */
	obj_t BGl_z62expandzd2notzb0zzexpand_ifz00(obj_t BgL_envz00_935,
		obj_t BgL_xz00_936, obj_t BgL_ez00_937)
	{
		{	/* Expand/if.scm 375 */
			return BGl_expandzd2notzd2zzexpand_ifz00(BgL_xz00_936, BgL_ez00_937);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_ifz00()
	{
		{	/* Expand/if.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1977z00zzexpand_ifz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1977z00zzexpand_ifz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1977z00zzexpand_ifz00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1977z00zzexpand_ifz00));
		}

	}

#ifdef __cplusplus
}
#endif
